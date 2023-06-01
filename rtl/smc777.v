
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

//******************************************************************************************************************************
// Address Decoding
//******************************************************************************************************************************

// CPU ROM
wire rom_cs = cpu_addr[15:14] == 2'b0;
wire rom_read;
assign rom_read = rom_cs & ~cpu_rd_n;
// CPU RAM
wire ram_cs = cpu_addr >= 16'hE000 && ~cpu_mreq_n;
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
	.int_n(),
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

wire [7:0] mem_data_out = 	rom_read ? rom_data_out : 
							ram_read ? ram_data_out :
							8'h0;

wire [7:0] io_data_out = pio_read ? pio_data_out : 
						 crtc_read ? crtc_data_out : 
						 8'h0;

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
	.RST_n(~reset_active),
	.CLK(clk),
	.ENA(vdp_cpu_clk),
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
	.INT_n(),
	.A(pio_port_a),
	.B(pio_port_b)
);

//******************************************************************************************************************************
// CRTC
//******************************************************************************************************************************

wire [7:0] crtc_data_out;
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
    .DI(cpu_data_out), // [7:0]
    .DO(crtc_data_out), // [7.0]

    // Display interface
    .VSYNC(VSync),
    .HSYNC(HSync),
    .DE(),
    .CURSOR(),
    .LPSTB(),

    .VGA(video), // Output Mode 7 as 624 line non-interlaced

    // Memory interface
    .MA(), // [13:0]
    .RA(), // [4:0]
    .test() // [3:0]
);

//******************************************************************************************************************************
// ROM
//******************************************************************************************************************************

wire [7:0] rom_data_out;
dpram #(8, 14) rom
(
	.clock(clk),
	.address_a(cpu_addr[13:0]),
	.wren_a(1'b0),
	.data_a(),
	.q_a(rom_data_out),

	.wren_b(ioctl_wr),
	.address_b(ioctl_addr[13:0]),
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
