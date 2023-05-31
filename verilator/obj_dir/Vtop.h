// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated_heavy.h"
#include "verilated_save.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop) {
  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_48,0,0);
    VL_IN8(clk_24,0,0);
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);
    VL_OUT8(VGA_HS,0,0);
    VL_OUT8(VGA_VS,0,0);
    VL_OUT8(VGA_HB,0,0);
    VL_OUT8(VGA_VB,0,0);
    VL_IN8(ioctl_download,0,0);
    VL_IN8(ioctl_upload,0,0);
    VL_IN8(ioctl_wr,0,0);
    VL_IN8(ioctl_dout,7,0);
    VL_IN8(ioctl_din,7,0);
    VL_IN8(ioctl_index,7,0);
    VL_OUT8(ioctl_wait,0,0);
    VL_IN16(inputs,11,0);
    VL_OUT16(AUDIO_L,15,0);
    VL_OUT16(AUDIO_R,15,0);
    VL_IN16(ps2_key,10,0);
    VL_IN(ioctl_addr,24,0);

    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ top__DOT__clk_48;
    CData/*0:0*/ top__DOT__clk_24;
    CData/*7:0*/ top__DOT__VGA_R;
    CData/*7:0*/ top__DOT__VGA_G;
    CData/*7:0*/ top__DOT__VGA_B;
    CData/*0:0*/ top__DOT__VGA_HS;
    CData/*0:0*/ top__DOT__VGA_VS;
    CData/*0:0*/ top__DOT__VGA_HB;
    CData/*0:0*/ top__DOT__VGA_VB;
    CData/*0:0*/ top__DOT__ioctl_download;
    CData/*0:0*/ top__DOT__ioctl_upload;
    CData/*0:0*/ top__DOT__ioctl_wr;
    CData/*7:0*/ top__DOT__ioctl_dout;
    CData/*7:0*/ top__DOT__ioctl_din;
    CData/*7:0*/ top__DOT__ioctl_index;
    CData/*0:0*/ top__DOT__ioctl_wait;
    CData/*7:0*/ top__DOT__audio;
    CData/*3:0*/ top__DOT__led;
    CData/*0:0*/ top__DOT__VSync;
    CData/*0:0*/ top__DOT__HSync;
    CData/*0:0*/ top__DOT__VBlank;
    CData/*0:0*/ top__DOT__HBlank;
    CData/*0:0*/ top__DOT__video;
    CData/*0:0*/ top__DOT__ce_pix;
    CData/*0:0*/ top__DOT__reset;
    CData/*0:0*/ top__DOT__key_strobe;
    CData/*0:0*/ top__DOT__old_keystb;
    CData/*0:0*/ top__DOT__smc777__DOT__clk;
    CData/*0:0*/ top__DOT__smc777__DOT__reset;
    CData/*0:0*/ top__DOT__smc777__DOT__pal;
    CData/*0:0*/ top__DOT__smc777__DOT__scandouble;
    CData/*0:0*/ top__DOT__smc777__DOT__ioctl_download;
    CData/*7:0*/ top__DOT__smc777__DOT__ioctl_index;
    CData/*0:0*/ top__DOT__smc777__DOT__ioctl_wr;
    CData/*7:0*/ top__DOT__smc777__DOT__ioctl_dout;
    CData/*0:0*/ top__DOT__smc777__DOT__ce_pix;
    CData/*0:0*/ top__DOT__smc777__DOT__HBlank;
    CData/*0:0*/ top__DOT__smc777__DOT__HSync;
    CData/*0:0*/ top__DOT__smc777__DOT__VBlank;
    CData/*0:0*/ top__DOT__smc777__DOT__VSync;
    CData/*7:0*/ top__DOT__smc777__DOT__video;
    CData/*5:0*/ top__DOT__smc777__DOT__rnd_c;
    CData/*0:0*/ top__DOT__smc777__DOT__ram_cs;
    CData/*0:0*/ top__DOT__smc777__DOT__ram_rd;
    CData/*0:0*/ top__DOT__smc777__DOT__ram_wr;
    CData/*7:0*/ top__DOT__smc777__DOT__ram_d;
    CData/*7:0*/ top__DOT__smc777__DOT__ram_q;
    CData/*0:0*/ top__DOT__smc777__DOT__cpu_wr;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__reset_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__clk;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__wait_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__int_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__nmi_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__busrq_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__m1_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__mreq_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__iorq_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__rd_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__wr_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__rfsh_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__halt_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__busak_n;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__di;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__dout;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__nxt_mreq_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__nxt_iorq_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__nxt_rd_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__nxt_wr_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__cen;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__intcycle_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__no_read;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__write;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__iorq;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__di_reg;
    CData/*6:0*/ top__DOT__smc777__DOT__tv80n__DOT__mcycle;
    CData/*6:0*/ top__DOT__smc777__DOT__tv80n__DOT__tstate;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__reset_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__clk;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__cen;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__wait_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__int_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__nmi_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busrq_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__m1_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__no_read;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__write;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__rfsh_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__halt_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busak_n;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dinst;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__di;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dout;
    CData/*6:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mc;
    CData/*6:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ts;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__intcycle_n;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__stop;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ACC;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Ap;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Fp;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIH;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIL;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA_r;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB_r;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrC;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Alternate;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_Mux;
    CData/*6:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate;
    CData/*6:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_mcycle;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_tstate;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE_FF1;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE_FF2;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt_FF;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusReq_s;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusAck;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ClkEn;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMI_s;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__INT_s;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IStatus;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__T_Res;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_State;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_Ind;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__No_BTR;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BTR_r;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDecZ;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Q;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out;
    CData/*4:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16_r;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Z16_r;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU_r;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC_r;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpXY;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDSPHL;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRp;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeAF;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRS;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_DJNZ;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CPL;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CCF;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_SCF;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BT;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BC;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BTR;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RLD;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RRD;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetDI;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetEI;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Oldnmi_n;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IR;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet;
    CData/*6:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__F;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Call;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Write;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Z16;
    CData/*3:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op;
    CData/*5:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__IR;
    CData/*1:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ISet;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusA;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusB;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_In;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA;
    CData/*2:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIH;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIL;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__clk;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__CEN;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEH;
    CData/*0:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEL;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__B;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__C;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__D;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__E;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__H;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__L;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__CLOCK;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__CLKEN;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__CLKEN_CPU;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__nRESET;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__ENABLE;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__R_nW;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__RS;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__DI;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__DO;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__VSYNC;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__HSYNC;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__DE;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__CURSOR;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__LPSTB;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__VGA;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__RA;
    CData/*3:0*/ top__DOT__smc777__DOT__mc6845__DOT__test;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__addr_reg;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__r00_h_total;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__r01_h_displayed;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__r02_h_sync_pos;
    CData/*3:0*/ top__DOT__smc777__DOT__mc6845__DOT__r03_v_sync_width;
    CData/*3:0*/ top__DOT__smc777__DOT__mc6845__DOT__r03_h_sync_width;
    CData/*6:0*/ top__DOT__smc777__DOT__mc6845__DOT__r04_v_total;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__r05_v_total_adj;
    CData/*6:0*/ top__DOT__smc777__DOT__mc6845__DOT__r06_v_displayed;
    CData/*6:0*/ top__DOT__smc777__DOT__mc6845__DOT__r07_v_sync_pos;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__r08_interlace;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__r09_max_scanline_addr;
    CData/*1:0*/ top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_mode;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_start;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__r11_cursor_end;
    CData/*5:0*/ top__DOT__smc777__DOT__mc6845__DOT__r12_start_addr_h;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__r13_start_addr_l;
    CData/*5:0*/ top__DOT__smc777__DOT__mc6845__DOT__r14_cursor_h;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__r15_cursor_l;
    CData/*5:0*/ top__DOT__smc777__DOT__mc6845__DOT__r16_light_pen_h;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__r17_light_pen_l;
    CData/*7:0*/ top__DOT__smc777__DOT__mc6845__DOT__h_counter;
    CData/*3:0*/ top__DOT__smc777__DOT__mc6845__DOT__h_sync_counter;
    CData/*6:0*/ top__DOT__smc777__DOT__mc6845__DOT__row_counter;
    CData/*6:0*/ top__DOT__smc777__DOT__mc6845__DOT__row_counter_next;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__line_counter;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__line_counter_next;
    CData/*3:0*/ top__DOT__smc777__DOT__mc6845__DOT__v_sync_counter;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__field_counter;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__h_display;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__hs;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__v_display;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__vs;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__vs_hit;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__vs_hit_last;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__vs_even;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__vs_odd;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__odd_field;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__cursor_i;
    CData/*3:0*/ top__DOT__smc777__DOT__mc6845__DOT__lpstb_sync;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__de0;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__de1;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__de2;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__cursor0;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__cursor1;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__cursor2;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__interlaced_video;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__max_scanline;
    CData/*4:0*/ top__DOT__smc777__DOT__mc6845__DOT__adj_scanline;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__in_adj;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__adj_in_progress;
    CData/*2:0*/ top__DOT__smc777__DOT__mc6845__DOT__sol;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__eom_latched;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__eof_latched;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__first_scanline;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__extra_scanline;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__new_frame;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__r00_h_total_hit;
    CData/*0:0*/ top__DOT__smc777__DOT__mc6845__DOT__max_scanline_hit;
    CData/*3:0*/ top__DOT__smc777__DOT__mc6845__DOT__unnamedblk1__DOT__temp;
    CData/*0:0*/ top__DOT__smc777__DOT__rom__DOT__clock;
    CData/*0:0*/ top__DOT__smc777__DOT__rom__DOT__ram_cs;
    CData/*0:0*/ top__DOT__smc777__DOT__rom__DOT__wren_a;
    CData/*7:0*/ top__DOT__smc777__DOT__rom__DOT__data_a;
    CData/*7:0*/ top__DOT__smc777__DOT__rom__DOT__q_a;
    CData/*0:0*/ top__DOT__smc777__DOT__rom__DOT__ram_cs_b;
    CData/*0:0*/ top__DOT__smc777__DOT__rom__DOT__wren_b;
    CData/*7:0*/ top__DOT__smc777__DOT__rom__DOT__data_b;
    CData/*7:0*/ top__DOT__smc777__DOT__rom__DOT__q_b;
    CData/*0:0*/ top__DOT__smc777__DOT__dpram__DOT__clock;
    CData/*0:0*/ top__DOT__smc777__DOT__dpram__DOT__ram_cs;
    CData/*0:0*/ top__DOT__smc777__DOT__dpram__DOT__wren_a;
    CData/*7:0*/ top__DOT__smc777__DOT__dpram__DOT__data_a;
    CData/*7:0*/ top__DOT__smc777__DOT__dpram__DOT__q_a;
    CData/*0:0*/ top__DOT__smc777__DOT__dpram__DOT__ram_cs_b;
    CData/*0:0*/ top__DOT__smc777__DOT__dpram__DOT__wren_b;
    CData/*7:0*/ top__DOT__smc777__DOT__dpram__DOT__data_b;
    CData/*7:0*/ top__DOT__smc777__DOT__dpram__DOT__q_b;
    SData/*11:0*/ top__DOT__inputs;
    SData/*15:0*/ top__DOT__AUDIO_L;
    SData/*15:0*/ top__DOT__AUDIO_R;
    SData/*10:0*/ top__DOT__ps2_key;
    SData/*9:0*/ top__DOT__smc777__DOT__hc;
    SData/*9:0*/ top__DOT__smc777__DOT__vc;
    SData/*9:0*/ top__DOT__smc777__DOT__vvc;
    SData/*15:0*/ top__DOT__smc777__DOT__ram_a;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__A;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__A;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusB;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusC;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__TmpAddr;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA_r;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16_B;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_A;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_B;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16_B;
    SData/*8:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IX;
    SData/*15:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IY;
    SData/*13:0*/ top__DOT__smc777__DOT__mc6845__DOT__MA;
    SData/*13:0*/ top__DOT__smc777__DOT__mc6845__DOT__ma_i;
    SData/*13:0*/ top__DOT__smc777__DOT__mc6845__DOT__ma_row;
    SData/*13:0*/ top__DOT__smc777__DOT__rom__DOT__address_a;
    SData/*13:0*/ top__DOT__smc777__DOT__rom__DOT__address_b;
    SData/*15:0*/ top__DOT__smc777__DOT__dpram__DOT__address_a;
    SData/*15:0*/ top__DOT__smc777__DOT__dpram__DOT__address_b;
    IData/*24:0*/ top__DOT__ioctl_addr;
    IData/*24:0*/ top__DOT__smc777__DOT__ioctl_addr;
    IData/*31:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux;
    QData/*63:0*/ top__DOT__smc777__DOT__rnd_reg;
    QData/*63:0*/ top__DOT__smc777__DOT__rnd;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL;
    VlUnpacked<CData/*7:0*/, 16384> top__DOT__smc777__DOT__rom__DOT__mem;
    VlUnpacked<CData/*7:0*/, 65536> top__DOT__smc777__DOT__dpram__DOT__mem;

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    CData/*7:0*/ top__DOT____Vcellout__smc777__video;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    CData/*7:0*/ top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    CData/*7:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
    CData/*4:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    CData/*3:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    CData/*3:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    CData/*4:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    CData/*3:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    CData/*3:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    CData/*3:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    CData/*3:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    CData/*2:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    CData/*1:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    CData/*1:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    CData/*0:0*/ __Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    CData/*7:0*/ __Vdlyvval__top__DOT__smc777__DOT__rom__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__smc777__DOT__rom__DOT__mem__v0;
    CData/*7:0*/ __Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ACC;
    CData/*7:0*/ __Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
    CData/*6:0*/ __Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate;
    CData/*6:0*/ __Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle;
    CData/*0:0*/ __VinpClk__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    CData/*0:0*/ __Vclklast__TOP__clk_48;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__smc777__DOT__rom__DOT__mem__v0;
    SData/*15:0*/ __Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC;
    SData/*15:0*/ __Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table

    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__Mode { top__DOT__smc777__DOT__tv80n__DOT__Mode = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__Mode;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__T2Write { top__DOT__smc777__DOT__tv80n__DOT__T2Write = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__T2Write;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__IOWait { top__DOT__smc777__DOT__tv80n__DOT__IOWait = 1U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__IOWait;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Mode { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Mode = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Mode;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IOWait { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IOWait = 1U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IOWait;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_C { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_C = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_C;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_N { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_N = 1U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_N;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_P { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_P = 2U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_P;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_X { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_X = 3U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_X;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_H { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_H = 4U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_H;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_Y { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_Y = 5U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_Y;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_Z { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_Z = 6U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_Z;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_S { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_S = 7U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_S;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aNone { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aNone = 7U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aNone;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aBC { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aBC = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aBC;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aDE { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aDE = 1U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aDE;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aXY { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aXY = 2U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aXY;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aIOA { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aIOA = 4U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aIOA;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aSP { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aSP = 5U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aSP;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aZI { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aZI = 6U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aZI;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Mode { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Mode = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Mode;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_C { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_C = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_C;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_N { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_N = 1U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_N;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_P { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_P = 2U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_P;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_X { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_X = 3U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_X;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_H { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_H = 4U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_H;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Y { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Y = 5U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Y;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Z { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Z = 6U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Z;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_S { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_S = 7U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_S;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aNone { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aNone = 7U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aNone;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aBC { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aBC = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aBC;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aDE { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aDE = 1U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aDE;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aXY { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aXY = 2U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aXY;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aIOA { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aIOA = 4U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aIOA;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aSP { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aSP = 5U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aSP;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aZI { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aZI = 6U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aZI;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Mode { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Mode = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Mode;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_C { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_C = 0U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_C;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_N { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_N = 1U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_N;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_P { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_P = 2U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_P;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_X { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_X = 3U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_X;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_H { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_H = 4U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_H;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Y { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Y = 5U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Y;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Z { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Z = 6U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Z;
    enum _IDatatop__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_S { top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_S = 7U};
    static const IData var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_S;
    enum _IDatatop__DOT__smc777__DOT__rom__DOT__data_width_g { top__DOT__smc777__DOT__rom__DOT__data_width_g = 8U};
    static const IData var_top__DOT__smc777__DOT__rom__DOT__data_width_g;
    enum _IDatatop__DOT__smc777__DOT__rom__DOT__addr_width_g { top__DOT__smc777__DOT__rom__DOT__addr_width_g = 0xeU};
    static const IData var_top__DOT__smc777__DOT__rom__DOT__addr_width_g;
    enum _IDatatop__DOT__smc777__DOT__dpram__DOT__data_width_g { top__DOT__smc777__DOT__dpram__DOT__data_width_g = 8U};
    static const IData var_top__DOT__smc777__DOT__dpram__DOT__data_width_g;
    enum _IDatatop__DOT__smc777__DOT__dpram__DOT__addr_width_g { top__DOT__smc777__DOT__dpram__DOT__addr_width_g = 0x10U};
    static const IData var_top__DOT__smc777__DOT__dpram__DOT__addr_width_g;

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(VerilatedContext* contextp, const char* name = "TOP");
    Vtop(const char* name = "TOP")
      : Vtop(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);

    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();

    // INTERNAL METHODS
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__12(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__8(Vtop__Syms* __restrict vlSymsp);
  private:
    static void _ctor_var_reset(Vtop* self) VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
  public:
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


inline VerilatedSerialize& operator<<(VerilatedSerialize& os, Vtop& rhs) {
    Verilated::quiesce(); rhs.__Vserialize(os); return os; }
inline VerilatedDeserialize& operator>>(VerilatedDeserialize& os, Vtop& rhs) {
    Verilated::quiesce(); rhs.__Vdeserialize(os); return os; }

#endif  // guard
