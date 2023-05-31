
module smc777
(
	input         clk,
	input         reset,
	
	input         pal,
	input         scandouble,

	input wire         ioctl_download,
	input wire   [7:0] ioctl_index,
	input wire         ioctl_wr,
	input       [24:0] ioctl_addr,
	input        [7:0] ioctl_dout,

	output reg    ce_pix,

	output reg    HBlank,
	output reg    HSync,
	output reg    VBlank,
	output reg    VSync,

	output  [7:0] video
);

reg   [9:0] hc;
reg   [9:0] vc;
reg   [9:0] vvc;
reg  [63:0] rnd_reg;

wire  [5:0] rnd_c = {rnd_reg[0],rnd_reg[1],rnd_reg[2],rnd_reg[2],rnd_reg[2],rnd_reg[2]};
wire [63:0] rnd;

always @(posedge clk) begin
	if(scandouble) ce_pix <= 1;
		else ce_pix <= ~ce_pix;

	if(reset) begin
		hc <= 0;
		vc <= 0;
	end
	else if(ce_pix) begin
		if(hc == 637) begin
			hc <= 0;
			if(vc == (pal ? (scandouble ? 623 : 311) : (scandouble ? 523 : 261))) begin 
				vc <= 0;
				vvc <= vvc + 9'd6;
			end else begin
				vc <= vc + 1'd1;
			end
		end else begin
			hc <= hc + 1'd1;
		end

		rnd_reg <= rnd;
	end
end

always @(posedge clk) begin
	if (hc == 529) HBlank <= 1;
		else if (hc == 0) HBlank <= 0;

	if (hc == 544) begin
		HSync <= 1;

		if(pal) begin
			if(vc == (scandouble ? 609 : 304)) VSync <= 1;
				else if (vc == (scandouble ? 617 : 308)) VSync <= 0;

			if(vc == (scandouble ? 601 : 300)) VBlank <= 1;
				else if (vc == 0) VBlank <= 0;
		end
		else begin
			if(vc == (scandouble ? 490 : 245)) VSync <= 1;
				else if (vc == (scandouble ? 496 : 248)) VSync <= 0;

			if(vc == (scandouble ? 480 : 240)) VBlank <= 1;
				else if (vc == 0) VBlank <= 0;
		end
	end
	
	if (hc == 590) HSync <= 0;
end

tv80n tv80n(
  .reset_n(~reset),	// I
  .clk(clk),		// I
  .wait_n(1'b1),	// I
  .int_n(1'b1),		// I
  .nmi_n(1'b1),		// I
  .busrq_n(1'b1),	// I
  .di(8'bzzzzzzzz),	// [7:0] I
  .m1_n(),		// O
  .mreq_n(),	// O
  .iorq_n(),	// O
  .rd_n(),		// O
  .wr_n(),		// O
  .rfsh_n(),	// O
  .halt_n(),	// O
  .busak_n(),	// O
  .A(),	// [15:0] O
  .dout()	// [7:0] O
);

reg          ram_cs;
reg          ram_rd; // RAM read enable
reg          ram_wr; // RAM write enable
reg   [7:0]  ram_d;  // RAM write data
reg  [15:0]  ram_a;  // RAM address
reg   [7:0]  ram_q;  // RAM read data
dpram #(8, 14) dpram
(
	.clock(clk),
	.address_a(ioctl_download ? ioctl_addr[13:0] : ram_a[13:0]),
	.wren_a(ioctl_wr | cpu_wr),
	.data_a(ioctl_download ? ioctl_dout : ram_d),
	.q_a(ram_q),

	.wren_b(1'b0),
	.address_b(),
	.data_b(),
	.q_b()
);

endmodule
