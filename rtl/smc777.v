
module smc777
(
	input         		clk,
	input         		reset,
	
	input         		pal,
	input         		scandouble,

	input wire         	ioctl_download,
	input wire    [7:0] ioctl_index,
	input wire         	ioctl_wr,
	input        [24:0] ioctl_addr,
	input         [7:0] ioctl_dout,

	output reg    		ce_pix,

	output reg    		HBlank,
	output reg    		HSync,
	output reg    		VBlank,
	output reg    		VSync,

	output  	  [7:0] video
);

//******************************************************************************************************************************
// Address Decoding
//******************************************************************************************************************************

//2**14 = 16384
//2**16 = 65536

// CPU ROM
wire rom_cs = cpu_addr[15:14] == 2'b0;
wire rom_read;
assign rom_read = rom_cs & ~cpu_rd_n;
// CPU RAM
wire ram_cs = cpu_addr >= 16'h4000 && ~cpu_mreq_n;
wire ram_read = ram_cs & ~cpu_rd_n;
wire ram_write = ram_cs & ~cpu_wr_n;
// Z80 PIO
wire pio_cs = ~cpu_addr[7] && ~cpu_iorq_n;
wire pio_read = pio_cs & ~cpu_rd_n;
wire pio_write = pio_cs & ~cpu_wr_n;
// CRTC
wire crtc_cs = cpu_addr[7] && ~cpu_iorq_n;
wire crtc_read = crtc_cs & ~cpu_rd_n;
wire crtc_write = crtc_cs & ~cpu_wr_n;

//******************************************************************************************************************************
// CPU
//******************************************************************************************************************************

wire cpu_mreq_n;
wire cpu_iorq_n;
wire cpu_rd_n;
wire cpu_wr_n;
wire cpu_m1_n;
wire [15:0] cpu_addr;
wire [7:0] cpu_data_in;
wire [7:0] cpu_data_out;

tv80e cpu (
	.clk(clk),
	.cen(1'b1),
	.reset_n(~reset),
	.wait_n(1'b1),
	.int_n(pio_int_n),
	.nmi_n(1'b1),
	.busrq_n(1'b1),
	.m1_n(cpu_m1_n),
	.mreq_n(cpu_mreq_n),
	.iorq_n(cpu_iorq_n),
	.rd_n(cpu_rd_n),
	.wr_n(cpu_wr_n),
	.rfsh_n(),
	.halt_n(),
	.busak_n(),
	.A(cpu_addr),
	.di(cpu_data_in),
	.dout(cpu_data_out)
);

wire [7:0] mem_data_out = rom_read ? rom_data_out : 
						  ram_read ? ram_data_out :
						  8'h0;

wire [7:0] io_data_out = pio_read ? pio_data_out : 
						 crtc_read ? crtc_data_out : 
						 8'h0;

//******************************************************************************************************************************
// IO MAP
//******************************************************************************************************************************
reg [7:0] low_offset;
reg [7:0] io_test_data_out;

reg [7:0] vram;
reg [7:0] attr;
reg [7:0] pcg;
reg [7:0] mc6845;
reg [7:0] key;
reg [7:0] io_status_lc;
reg [7:0] io_status_ld;
reg [7:0] irq_control;
reg [7:0] gcw;

always @(posedge clk) begin

	low_offset <= cpu_addr & 8'hff;

	if(low_offset <= 8'h07) io_test_data_out <= vram; // vram
	else if (low_offset >= 8'h08 && low_offset <= 8'h0f) io_test_data_out <= attr; // attr
	else if (low_offset >= 8'h10 && low_offset <= 8'h17) io_test_data_out <= pcg; // pcg
	else if (low_offset >= 8'h18 && low_offset <= 8'h19) io_test_data_out <= mc6845; // mc6845
	else if (low_offset >= 8'h1a && low_offset <= 8'h1b) io_test_data_out <= key; // key
	else if (low_offset == 8'h1c) io_test_data_out <= io_status_lc; // io_status_lc
	else if (low_offset == 8'h1d) io_test_data_out <= io_status_ld; // io_status_ld
	// else if (low_offset >= 8'h1e && low_offset <= 8'h1f) io_test_data_out <= irq_control; // irq control
	else if (low_offset == 8'h20) io_test_data_out <= gcw; // gcw
	else if (low_offset == 8'h21) io_test_data_out <= 00; // gcw  vsync_irq_status_r   vsync_irq_enable_w
	// else if (low_offset == 8'h22) io_test_data_out <= 00; // printer output data
	else if (low_offset == 8'h23) io_test_data_out <= 00; // border_col_w
	// else if (low_offset == 8'h24) io_test_data_out <= 00; rtc write address (M5M58321RS)
	// else if (low_offset == 8'h25) io_test_data_out <= 00; rtc read
	// else if (low_offset == 8'h26) io_test_data_out <= 00; rs232 #1
	// else if (low_offset >= 8'h28 && low_offset <= 8'h2c) io_test_data_out <= 00; // fdc #2 (8")
	// else if (low_offset >= 8'h2d && low_offset <= 8'h2f) io_test_data_out <= 00; // rs232 #2
	else if (low_offset >= 8'h30 && low_offset <= 8'h33) io_test_data_out <= 00; // fdc_r
	else if (low_offset == 8'h34) io_test_data_out <= 00; // fdc1_fast_status_r  
	// else if (low_offset >= 8'h35 && low_offset <= 8'h37) io_test_data_out <= 00; // rs232 #3
	// else if (low_offset >= 8'h38 && low_offset <= 8'h3b) io_test_data_out <= 00; // cache disk unit
	// else if (low_offset == 8'h38) io_test_data_out <= 00; / R CDSTS status port (W) CDCMD command port
	// else if (low_offset == 8'h39) io_test_data_out <= 00; // W track register
	// else if (low_offset == 8'h3a) io_test_data_out <= 00; // W sector register
	// else if (low_offset == 8'h3b) io_test_data_out <= 00; // RW data port
	// else if (low_offset >= 8'h3c && low_offset <= 8'h3d) io_test_data_out <= 00; // rgb superimposer / genlock control
	// else if (low_offset >= 8'h40 && low_offset <= 8'h47) io_test_data_out <= 00; // ieee-488 / TMS9914A I/F
	else if (low_offset == 8'h44) io_test_data_out <= 00; // normally unmapped in GPIB interface
	// else if (low_offset >= 8'h48 && low_offset <= 8'h49) io_test_data_out <= 00; // hdd (winchester)
	else if (low_offset == 8'h51) io_test_data_out <= 00; // color_mode_w  
	else if (low_offset == 8'h52) io_test_data_out <= 00; // ramdac_w  
	else if (low_offset == 8'h53) io_test_data_out <= 00; // sn76489a_device 
	// else if (low_offset >= 8'h54 && low_offset <= 8'h59) io_test_data_out <= 00; // vrt controller
	// else if (low_offset >= 8'h5a && low_offset <= 8'h5b) io_test_data_out <= 00; // ram banking
	// else if (low_offset == 8'h70) io_test_data_out <= 00; // auto-start ROM (ext-ROM)
	// else if (low_offset == 8'h74) io_test_data_out <= 00; // ieee-488 GPIB ROM port
	// else if (low_offset == 8'h75) io_test_data_out <= 00; // vrt controller ROM
	// else if (low_offset >= 8'h7e && low_offset <= 8'h7f) io_test_data_out <= 00; // kanji ROM
	else if (low_offset >= 8'h80 && low_offset <= 8'hff) io_test_data_out <= 00; // fbuf
end

assign cpu_data_in = !cpu_mreq_n ? mem_data_out : io_data_out;

//******************************************************************************************************************************
// Z80 PIO
//******************************************************************************************************************************

wire pio_int_n;
wire [7:0] pio_data_out;
wire [7:0] pio_port_a;
reg [7:0] pio_port_b;
wire pio_basel = cpu_addr[5];
wire pio_cdsel = cpu_addr[6];
z8420 pio (
	.RST_n(~reset),
	.CLK(clk),
	.ENA(1'b1),
	.BASEL(pio_basel),
	.CDSEL(pio_cdsel),
	.CE(~pio_cs),
	.RD_n(cpu_rd_n),
	.WR_n(cpu_wr_n),
	.IORQ_n(cpu_iorq_n),
	.M1_n(cpu_m1_n),
	.DI(cpu_data_out),
	.DO(pio_data_out),
	.IEI(1'b1),
	.IEO(),
	.INT_n(pio_int_n),
	.A(pio_port_a),
	.B(pio_port_b)
);

//******************************************************************************************************************************
// CRTC
//******************************************************************************************************************************

wire [7:0] crtc_data_out;
wire crtc_cpu_clk;
mc6845 crtc
(
    .CLOCK(clk),
    .CLKEN(1'b1),
    .CLKEN_CPU(1'b1),
    .nRESET(~reset),

    // Bus interface
    .ENABLE(1'b1),
    .R_nW(),
    .RS(),
    .DI(cpu_data_out),  // [7:0]
    .DO(crtc_data_out), // [7.0]

    // Display interface
    .VSYNC(VSync),
    .HSYNC(HSync),
    .DE(),
    .CURSOR(),
    .LPSTB(),

    .VGA(video), // Output Mode 7 as 624 line non-interlaced

    // Memory interface
    .MA(),  // [13:0]
    .RA(),  //  [4:0]
    .test() //  [3:0]
);

//******************************************************************************************************************************
// SN76496 PSG AUDIO
//******************************************************************************************************************************

SN76496 psg
(
	.clk(clk),  	// I
	.cpuclk(clk), 	// I
	.reset(reset), 	// I
	.ce(), 			// I
	.we(), 			// I
	.data(), 		// [7:0] I
	.chmsk(), 		// [3:0] I

	.sndout(), 		// [7:0] O
	.chactv(), 		// [3:0] O
	.lreg()  		// [2:0] O
);

//******************************************************************************************************************************
// ROM
//******************************************************************************************************************************

wire [7:0] rom_data_out;
dpram #(14, 8,"../bios/smcrom.hex") rom
(
	.clock_a(clk),
	.address_a(cpu_addr[13:0]),
	.enable_a(1'b1),
	.wren_a(1'b0),
	.data_a(),
	.q_a(rom_data_out),

	.clock_b(clk),
	.address_b(ioctl_addr[13:0]),
	.enable_b(ioctl_wr),
	.wren_b(ioctl_wr),
	.data_b(ioctl_dout),
	.q_b()
);

//******************************************************************************************************************************
// RAM
//******************************************************************************************************************************

wire [7:0] ram_data_out;
spram #(16,8) ram 
(
	.clock(clk),
	.address(cpu_addr[15:0]),
	.wren(ram_write),
	.data(cpu_data_out),
	.q(ram_data_out)
);

endmodule
