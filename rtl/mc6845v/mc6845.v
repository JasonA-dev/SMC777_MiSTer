/*
BBC Micro for Altera DE1

 Copyright (c) 2022 David Banks (hoglet)
 Copyright (c) 2011 Mike Stirling

 All rights reserved

 Redistribution and use in source and synthezised forms, with or without
 modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

 * Redistributions in synthesized form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

 * Neither the name of the author nor the names of other contributors may
   be used to endorse or promote products derived from this software without
   specific prior written agreement from the author.

 * License is granted for non-commercial use only.  A fee may not be charged
   for redistributions as source code or in synthesized/hardware form without
   specific prior written agreement from the author.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE
 LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 POSSIBILITY OF SUCH DAMAGE.
*/

// MC6845 CRTC

// Synchronous implementation for FPGA

module mc6845 (
    input CLOCK;
    input CLKEN;
    input CLKEN_CPU;
    input nRESET;

    // Bus interface
    input ENABLE;
    input R_nW;
    input RS;
    input [7:0] DI;
    output [7:0] DO;

    // Display interface
    output VSYNC;
    output HSYNC;
    output DE;
    output CURSOR;
    input LPSTB;

    input VGA; // Output Mode 7 as 624 line non-interlaced

    // Memory interface
    output [13:0] MA;
    output [4:0] RA;
    output [3:0] test;
);

// Host-accessible registers
reg [4:0] addr_reg;                   // Currently addressed register

// Write-only registers
reg [7:0] r00_h_total;                // Horizontal total, chars
reg [7:0] r01_h_displayed;            // Horizontal active, chars
reg [7:0] r02_h_sync_pos;             // Horizontal sync position, chars
reg [3:0] r03_v_sync_width;           // Vertical sync width, scan lines (0=16 lines)
reg [3:0] r03_h_sync_width;           // Horizontal sync width, chars (0=no sync)
reg [6:0] r04_v_total;                // Vertical total, character rows
reg [4:0] r05_v_total_adj;            // Vertical offset, scan lines
reg [6:0] r06_v_displayed;            // Vertical active, character rows
reg [6:0] r07_v_sync_pos;             // Vertical sync position, character rows
reg [7:0] r08_interlace;              // Interlace register
reg [4:0] r09_max_scanline_addr;      // Maximum scanline address
reg [1:0] r10_cursor_mode;            // Cursor mode
reg [4:0] r10_cursor_start;           // Cursor start, scan lines
reg [4:0] r11_cursor_end;             // Cursor end, scan lines
reg [5:0] r12_start_addr_h;           // Start address high
reg [7:0] r13_start_addr_l;           // Start address low

// Read/write registers
reg [5:0] r14_cursor_h;               // Cursor position high
reg [7:0] r15_cursor_l;               // Cursor position low

// Read-only registers
wire [5:0] r16_light_pen_h;           // Light pen position high
wire [7:0] r17_light_pen_l;           // Light pen position low

// Timing generation
reg [7:0] h_counter;                // Horizontal counter counts position on line
reg [3:0] h_sync_counter;           // HSYNC counter counts duration of sync pulse
reg [6:0] row_counter;              // Row counter counts current character row
reg [6:0] row_counter_next;         // Next value of row counter
reg [4:0] line_counter;             // Line counter counts current line within each character row (also used for vertical adjust)
reg [4:0] line_counter_next;        // Next value of line counter
reg [3:0] v_sync_counter;           // VSYNC counter counts duration of sync pulse
reg [4:0] field_counter;            // Field counter counts number of complete fields for cursor flash

// Internal signals
reg h_display;                    // Horizontal display signal
reg hs;                           // HSYNC signal
reg v_display;                    // Vertical display signal
reg vs;                           // VSYNC signal
reg vs_hit;                       // Vertical sync hit signal
reg vs_hit_last;                  // Vertical sync hit last signal
reg vs_even;                      // Vertical sync even signal
reg vs_odd;                       // Vertical sync odd signal
reg odd_field;                    // Indicates the current field is an odd field, updated on counter wrap
reg [13:0] ma_i;                  // Memory address input
reg cursor_i;                     // Cursor signal input
reg [3:0] lpstb_sync;             // LPSTB sync signal
reg de0;                          // DE signal 0
reg de1;                          // DE signal 1
reg de2;                          // DE signal 2
reg cursor0;                      // Cursor signal 0
reg cursor1;                      // Cursor signal 1
reg cursor2;                      // Cursor signal 2
reg interlaced_video;             // Interlaced video signal
reg [4:0] max_scanline;           // Maximum scanline value
reg [4:0] adj_scanline;           // Adjusted scanline value
reg [13:0] ma_row;                // Memory address row

reg in_adj;                       // Input adjustment signal
reg adj_in_progress;              // Adjustment in progress signal
reg [2:0] sol;                     // Start of line signal
reg eom_latched;                   // End of memory latch signal
reg eof_latched;                   // End of frame latch signal
reg first_scanline;                // First scanline signal
reg extra_scanline;                // Extra scanline signal
reg new_frame;                     // New frame signal

wire r00_h_total_hit;              // H total hit signal
wire max_scanline_hit;             // Max scanline hit signal

    // ===========================================================================
    // Common combinatorial logic
    // ===========================================================================

    // TODO: Review the below two expressions, as the VGA mode criteria should really be the same

    // Normally the max scan line is r09_max_scanline_addr, with two exceptions
    // In VGA mode we add one so the mode 7 18 becomes 19 (giving 20 rows per character)
    // In interlace sync + video mode we mask off the LSB
always @* begin
    if (VGA)
        max_scanline = r09_max_scanline_addr + 1;
    else if (r08_interlace[1:0] == 2'b11)
        max_scanline = {r09_max_scanline_addr[4:1], 1'b0};
    else
        max_scanline = r09_max_scanline_addr;
end

    // In Type 0 CRTCs, C9 is used instead of C5, and max_scanline_hit is inhibited
always @* begin
    if (line_counter == max_scanline && adj_in_progress == 1'b0)
        max_scanline_hit = 1'b1;
    else
        max_scanline_hit = 1'b0;
end
    // Normally the adjust scan line is r05_v_total_adj, with one exception
    // In VGA Mode we add two so the Mode7 value of 2 becomes 4 (giving 31 * 20 + 4 = 624 lines)
always @* begin
    if (r08_interlace[1:0] == 2'b11 && VGA)
        adj_scanline = r05_v_total_adj + 2;
    else
        adj_scanline = r05_v_total_adj;
end

    // Counter hits (only ones that are used in many places)
always @* begin
    if (h_counter == r00_h_total)
        r00_h_total_hit = 1'b1;
    else
        r00_h_total_hit = 1'b0;
end
    // Indcates a new frame will start on the next clock tick.
always @* begin
    if (r00_h_total_hit && eof_latched && (r08_interlace[0] == 1'b0 || field_counter[0] == 1'b0 || extra_scanline || VGA))
        new_frame = 1'b1;
    else
        new_frame = 1'b0;
end
    // ===========================================================================
    // Registers
    // ===========================================================================

always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        // Reset registers to defaults
        addr_reg <= 5'b0;
        r00_h_total <= 8'b0;
        r01_h_displayed <= 8'b0;
        r02_h_sync_pos <= 8'b0;
        r03_v_sync_width <= 4'b0;
        r03_h_sync_width <= 4'b0;
        r04_v_total <= 7'b0;
        r05_v_total_adj <= 5'b0;
        r06_v_displayed <= 7'b0;
        r07_v_sync_pos <= 7'b0;
        r08_interlace <= 8'b0;
        r09_max_scanline_addr <= 5'b0;
        r10_cursor_mode <= 2'b0;
        r10_cursor_start <= 5'b0;
        r11_cursor_end <= 5'b0;
        r12_start_addr_h <= 6'b0;
        r13_start_addr_l <= 8'b0;
        r14_cursor_h <= 6'b0;
        r15_cursor_l <= 8'b0;

        DO <= 8'b0;
    end
    else begin
        if (ENABLE) begin
            if (R_nW) begin
                // Read operation
                case (addr_reg)
                    5'b01100: DO <= {2'b00, r12_start_addr_h};
                    5'b01101: DO <= r13_start_addr_l;
                    5'b01110: DO <= {2'b00, r14_cursor_h};
                    5'b01111: DO <= r15_cursor_l;
                    5'b10000: DO <= {2'b00, r16_light_pen_h};
                    5'b10001: DO <= r17_light_pen_l;
                    default: DO <= 8'b0;
                endcase
            end
        else if (CLKEN_CPU) begin
            // Write operation
            if (RS == 1'b0)
                addr_reg <= DI[4:0];
            else begin
                case (addr_reg)
                    5'b00000: r00_h_total <= DI;
                    5'b00001: r01_h_displayed <= DI;
                    5'b00010: r02_h_sync_pos <= DI;
                    5'b00011: begin
                        r03_v_sync_width <= DI[7:4];
                        r03_h_sync_width <= DI[3:0];
                    end
                    5'b00100: r04_v_total <= DI[6:0];
                    5'b00101: r05_v_total_adj <= DI[4:0];
                    5'b00110: r06_v_displayed <= DI[6:0];
                    5'b00111: r07_v_sync_pos <= DI[6:0];
                    5'b01000: r08_interlace <= DI[7:0];
                    5'b01001: r09_max_scanline_addr <= DI[4:0];
                    5'b01010: begin
                        r10_cursor_mode <= DI[6:5];
                        r10_cursor_start <= DI[4:0];
                    end
                    5'b01011: r11_cursor_end <= DI[4:0];
                    5'b01100: r12_start_addr_h <= DI[5:0];
                    5'b01101: r13_start_addr_l <= DI[7:0];
                    5'b01110: r14_cursor_h <= DI[5:0];
                    5'b01111: r15_cursor_l <= DI[7:0];
                endcase
            end
        end
        end
    end
end
    // ===========================================================================
    // HORIZONTAL TIMING
    // ===========================================================================

    // Horizontal Counter
always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        h_counter <= 8'b0;
    end 
    else begin
        if (CLKEN) begin
            if (r00_h_total_hit) 
                h_counter <= 8'b0;
            else 
                h_counter <= h_counter + 1;
        end
    end
end

    // Horizontal Sync Counter
    
    // Note: r03_h_sync_width should have the following effect:
    //       0 => no hsync
    //       1 => hsync lasting 1 character
    //       2 => vsync lasting 2 characters
    //       ...
    //       15 => hsync lasting 15 characters
    
    // Changing R2 during HSYNC does not retrigger HSYNC
    // Changing R3 during HSYNC does extend (or overflow) HSYNC
    // multiple HSYNCs can happen on a line, but there will be a gap between them
    // R3=0 => no HSYNC
always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        h_counter <= 8'b0;
    end 
    else begin
        if (CLKEN) begin
            if (r00_h_total_hit) 
                h_counter <= 8'b0;
            else 
                h_counter <= h_counter + 1;
        end
    end
end

    // Horizontal Sync
    
    // hs is modelled like a R/S flip-flop that reacts almost immediately
    // to h_counter (one fast tick later)
    
    // Important: No clock enable is used here
always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        hs <= 1'b0;
    end 
    else begin
        if (h_sync_counter == r03_h_sync_width) 
            hs <= 1'b0;
        else if (h_counter == r02_h_sync_pos) 
            hs <= 1'b1;
    end
end

assign HSYNC = hs; -- External HSYNC driven directly from internal signal

    // Horizontal Display Enable
    //
    // h_display is modelled like a R/S flip-flop that reacts almost immediately
    // to h_counter (one fast tick later)
    //
    // Important: No clock enable is used here
always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        h_display <= 1'b0;
    end 
    else begin
        if (h_counter == r01_h_displayed || h_counter == r00_h_total) 
            h_display <= 1'b0;
        else if (h_counter == 8'b0) 
            h_display <= 1'b1;
    end
end

    // ===========================================================================
    // VERTICAL TIMING
    // ===========================================================================

    // Vertical Scanline Counter (also used for vertical adjust)
    // In interlaced sync + video mode it counts in steps of 2
    // In interlaced sync mode and non-interlaced mode it counts in steps of 1
    // In vertical adjust it also counts in steps of 1 regardless
always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        line_counter <= 7'b0;
    end 
    else begin
        if (CLKEN == 1'b1) begin
            if (new_frame == 1'b1) 
                line_counter <= 7'b0;
            else if (r00_h_total_hit == 1'b1) 
                line_counter <= line_counter_next;
        end
    end
end

always @* begin
    if (max_scanline_hit) 
        line_counter_next = 5'b0;
    else if (adj_in_progress || !(r08_interlace[1:0] == 2'b11 && VGA == 1'b0)) 
        line_counter_next = line_counter + 1;
    else 
        line_counter_next = {line_counter[4:1] + 1, 1'b0};
end

    // Vertical Row Counter

always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        row_counter <= 7'b0;
    end 
    else begin
        if (CLKEN == 1'b1) 
            row_counter <= row_counter_next;
    end
end

always @* begin
    if (new_frame) 
        row_counter_next = 7'b0;
    else if (r00_h_total_hit && max_scanline_hit) 
        row_counter_next = row_counter + 1;
    else 
        row_counter_next = row_counter;
end

    // Vertical Sync
    
    // Note: r03_v_sync_width should have the following effect:
    //       0 => vsync lasting 16 lines
    //       1 => vsync lasting 1 line
    //       2 => vsync lasting 2 lines
    //       ...
    //       15 => vsync lasting 15 lines
    //
    // Note: Measurements on a real beeb confirm:
    //       even vsync is aligned with the start of the active display
    //       odd vsync is delayed by exactly half a scan line
    //
    // triggered immediately when C4=R7 (irrespective of h_counter)
    // possible to generate several VSYNCs in a frame
    // can only generate one VSYNC per row
    // vsync counter increments on C0=0
    // on vsync, vdisplay => 0
    // R3=0 => 16 lines
    // ??? what happens if R3 changes during vsync

assign vs_hit = (row_counter == r07_v_sync_pos) ? 1'b1 : 1'b0;

    // Generate an even vsync that is aligned to h_counter = 0
always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        v_sync_counter <= 4'b0;
    end 
    else begin
        if (CLKEN == 1'b1) begin
            if ((vs_hit == 1'b1) && (vs_hit_last == 1'b0)) 
                v_sync_counter <= 4'h0;
            else if (r00_h_total_hit == 1'b1) 
                v_sync_counter <= v_sync_counter + 1;
            
            vs_hit_last <= vs_hit;
        end
    end
end

    // vs_even is modelled like a R/S flip-flop
    // Important: No clock enable is used here
always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        vs_even <= 1'b0;
    end 
    else begin
        if ((vs_hit == 1'b1) && (vs_hit_last == 1'b0)) 
            vs_even <= 1'b1;
        else if ((v_sync_counter == r03_v_sync_width) && (sol[0] == 1'b1)) 
            vs_even <= 1'b0;
    end
end

    // Generate an odd vsync that is delayed by half a line
always @(posedge CLOCK) begin
    if (CLKEN == 1'b1) begin
        if (h_counter == {1'b0, r00_h_total[7:1]}) 
            vs_odd <= vs_even;
    end
end

    // Select between vs_odd and vs_even based on interlace state
assign vs = (r08_interlace[0] == 1'b1 && VGA == 1'b0 && odd_field == 1'b0) ? vs_odd : vs_even;
assign VSYNC = vs; // External VSYNC driven directly from internal signal

    // Vertical Display Enable
    
    // JSBEEB contains this comment concerning R6 hit:
    //    The Hitachi 6845 will notice this equality at any character,
    //    including in the middle of a scanline.
    
    // Surprisingly, the odd/even flag and field counter are updated based on R6
    // i.e. Both cursor blink and interlace cease if R6 > R4.
    // https://github.com/mattgodbolt/jsbeeb/blob/main/video.js#L641
    
    // In interlaced modes, the LSB of the field counter indicates the odd/even field type
    // which is latched in odd_field so it's stable for the whole of the next frame.
    
    // Important: No clock enable is used here
always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        v_display <= 1'b0;
        field_counter <= {1'b0, field_counter[field_counter'length - 2:1]};
        odd_field <= 1'b0;
    end 
    else begin
        if (first_scanline == 1'b1) begin
            v_display <= 1'b1;
            odd_field <= field_counter[0];
        end 
        else if ((row_counter == r06_v_displayed) && (v_display == 1'b1)) begin
            v_display <= 1'b0;
            field_counter <= field_counter + 1;
        end
    end
end

    // ===========================================================================
    // End of frame logic
    // ===========================================================================

always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        sol <= 3'b0;
        in_adj <= 1'b0;
        adj_in_progress <= 1'b0;
        eom_latched <= 1'b0;
        eof_latched <= 1'b0;
        first_scanline <= 1'b0;
        extra_scanline <= 1'b0;
    end 
    else begin
        if (CLKEN == 1'b1) begin
/*
                -- TODO: Confirm extactly when end of main (EOM) is latched
                --
                -- i.e. Is EOM latched on entering C0=1 or on exiting C0=1
                --
                -- RichTW says:
                --
                --     One character after the beginning of a new scanline (normally when C0 is
                --     exactly 1), the CTRC latches the "end of frame pending" signal.  After this
                --     moment, the CRTC is committed to ending the current frame, regardless of
                --     changes to R4 or R9 after that.
                --
                --     Two characters after the beginning of a new scanline (normally when C0 is
                --     exactly 2 (!)), the CRTC decides whether it needs to enter vertical adjust as
                --     part of the end of frame sequence.  In other words, if R5=0, but you then
                --     change it any time after C0=2 when C9=R9 and C4=R4, it won't get noticed, and
                --     there will be no vertical adjust.  In the case where R0=1, it doesn't get to
                --     do that check by the supposed end of frame, so an extra scanline occurs with
                --     C9=0 and C4=R4+1, and it will then see that no vertical adjust is due and
                --     finish the frame at the end of the next scanline.

                -- https://www.cpcwiki.eu/forum/programming/crtc-detailed-operation/msg180078/#msg180078
                --
                -- Amstrad CRTC Compendion says:
                --
                --     When C0=0, the CRTC evaluates if C0=R9 and
                --     C4=R4 to determine if it is on the bottom line
                --     of the screen. Ir no longer repeats this on
                --     other values of C0.
                --
                -- https://www.cpcwiki.eu/forum/news-events/release-of-amstrad-cpc-crtc-compendium-and-amazing-demo-rev-2021/msg209689/#msg209689
                --
                -- From this, I would say it's on the transition of C0=0 => C0=1
                --
                -- Looking at the beebjit code, it seems latching end-of-main, vertical-adjust and
                -- end-of-frame happen over three successive cycles.
*/
            // Sol(0) is asserted during C0=0
            // Sol(1) is asserted during C0=1
            // Sol(2) is asserted during C0=2
            sol <= {sol[sol'length - 2:0], r00_h_total_hit};

            // One clock after the start of the line (after C0=0), latch end-of-main
            if (new_frame == 1'b1) 
                eom_latched <= 1'b0;
            else if (sol[0] == 1'b1 && max_scanline_hit == 1'b1 && row_counter == r04_v_total) 
                eom_latched <= 1'b1;
            else 
                eom_latched <= eom_latched;

            // Two clocks after the start of the line (after C0=1), detect if vertical-adjust needed
            if (new_frame == 1'b1) 
                in_adj <= 1'b0;
            else if (sol[1] == 1'b1 && eom_latched == 1'b1) begin
                if (line_counter_next == adj_scanline) 
                    in_adj <= 1'b0;
                else 
                    in_adj <= 1'b1;
            end 
            else 
                in_adj <= in_adj;

            // Three clocks after the start of the line (after C0=2), latch end-of-frame
            if (new_frame == 1'b1) 
                eof_latched <= 1'b0;
            else if (sol[2] == 1'b1 && eom_latched == 1'b1 && in_adj == 1'b0) 
                eof_latched <= 1'b1;
            else 
                eof_latched <= eof_latched;

            // adj_in_progress is a delayed version of in_adj that's used the line counter to
            // force the increment to 1, and to disable max_scanline_hit
            if (new_frame == 1'b1) 
                adj_in_progress <= 1'b0;
            else if (r00_h_total_hit == 1'b1 && eom_latched == 1'b1 && in_adj == 1'b1) 
                adj_in_progress <= 1'b1;
            else 
                adj_in_progress <= adj_in_progress;

            // First_scanline is active for the first scanline of the field; this affects only the R06 hit logic
            if (new_frame == 1'b1) 
                first_scanline <= 1'b1;
            else if (r00_h_total_hit == 1'b1) 
                first_scanline <= 1'b0;
            else 
                first_scanline <= first_scanline;

            // Extra_scanline records that an extra scanline was added to the field
            if (r00_h_total_hit == 1'b1 && eof_latched == 1'b1 && r08_interlace[0] == 1'b1 && field_counter[0] == 1'b1 && extra_scanline == 1'b0) 
                extra_scanline <= 1'b1;
            else if (r00_h_total_hit == 1'b1) 
                extra_scanline <= 1'b0;
            else 
                extra_scanline <= extra_scanline;
        end
    end
end

    // ===========================================================================
    // Memory Address Generation
    // ===========================================================================

always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        ma_row <= 14'b0;
        ma_i <= 14'b0;
    end 
    else begin
        if (CLKEN == 1'b1) begin
            if (new_frame == 1'b1) 
                // At start of frame the row start address is loaded from r12/13                
                ma_row <= {r12_start_addr_h, r13_start_addr_l};
            else if ((h_counter == r01_h_displayed) && (max_scanline_hit == 1'b1)) 
                // At the end of the row, the row start address loaded with the address of the next row                
                ma_row <= ma_i;
            
            if (new_frame == 1'b1) 
                // At start of frame the memory address is loaded from r12/13                
                ma_i <= {r12_start_addr_h, r13_start_addr_l};
            else if (r00_h_total_hit == 1'b1) 
                // At start of each line the memory addess is reset back to the row start address                
                ma_i <= ma_row;
            else 
                // During the line the memory address is incremented                
                ma_i <= ma_i + 1;
        end
    end
end

    // Address generation
always @(posedge CLOCK) begin
    if (CLKEN == 1'b1) begin
        // On the Real 6845 you don't see glitches on RA0 when writing r08
        // so mimic this by latching the relevant r08 state once per line.
        // This is probably done differently on the real hardware. I suspect
        // the replacement of line_counter(0) with odd_field is done
        // upstream as part of the line counter logic, and then when comparing
        // to the max scanline, the LSB is masked off. I had a got at implementing
        // this, but it got messy.
        if (r00_h_total_hit == 1'b1) begin
            if ((r08_interlace[1:0] == 2'b11) && (VGA == 1'b0)) 
                interlaced_video <= 1'b1;
            else
                interlaced_video <= 1'b0;
        end
    end
end    

assign RA = (interlaced_video == 1'b1) ? {line_counter[4:1], odd_field} : std_logic_vector(line_counter);

assign MA = std_logic_vector(ma_i);


    // ===========================================================================
    // Light pen
    // ===========================================================================

always @(posedge CLOCK or negedge nRESET) begin
    if (nRESET == 1'b0) begin
        lpstb_sync <= {1'b0, lpstb_sync[lpstb_sync'length - 2:1]};
        r16_light_pen_h <= 6'b0;
        r17_light_pen_l <= 8'b0;
    end 
    else begin
        if (CLKEN == 1'b1) begin
            lpstb_sync <= {LPSTB, lpstb_sync[lpstb_sync'length - 2:1]};
            if ((lpstb_sync[1] == 1'b1) && (lpstb_sync[0] == 1'b0)) begin
                r16_light_pen_h <= ma_i[13:8];
                r17_light_pen_l <= ma_i[7:0];
            end
        end
    end
end

    // ===========================================================================
    // Cursor control
    // ===========================================================================

always @* begin
    if ((h_display == 1'b0) || 
        (v_display == 1'b0) || 
        (ma_i != {r14_cursor_h, r15_cursor_l}) || 
        (line_counter < r10_cursor_start) || 
        (line_counter > r11_cursor_end)) 
        cursor0 = 1'b0;
    else if (r10_cursor_mode == 2'b11) 
        cursor0 = field_counter[4];
    else if (r10_cursor_mode == 2'b10) 
        cursor0 = field_counter[3];
    else if (r10_cursor_mode == 2'b00) 
        cursor0 = 1'b1;
    else 
        cursor0 = 1'b0;
    
end

    // ===========================================================================
    // Skew (of cursor and display enable)
    // ===========================================================================

always @(posedge CLOCK) begin
    if (CLKEN == 1'b1) begin
        de1 <= de0;
        de2 <= de1;
        cursor1 <= cursor0;
        cursor2 <= cursor1;
    end
end

assign de0 = (h_display && v_display && (r08_interlace[5:4] != 2'b11)) ? 1'b1 : 1'b0;

always @* begin
    case (r08_interlace[5:4])
        2'b01: DE = de1;
        2'b10: DE = de2;
        default: DE = de0;
    endcase
end


always @* begin
    case (r08_interlace[7:6])
        2'b00: CURSOR = cursor0;
        2'b01: CURSOR = cursor1;
        2'b10: CURSOR = cursor2;
        default: CURSOR = 1'b0;
    endcase
end

    // ===========================================================================
    // Test
    // ===========================================================================

assign test[0] = (CLKEN_CPU && ENABLE && !R_nW) ? 1'b1 : 1'b0;
assign test[1] = (ENABLE && !R_nW) ? 1'b1 : 1'b0;
assign test[2] = (CLKEN_CPU && ENABLE && !R_nW && (addr_reg == 5'b00000)) ? 1'b1 : 1'b0;
assign test[3] = (ENABLE && !R_nW && (addr_reg == 5'b00000)) ? 1'b1 : 1'b0;

endmodule