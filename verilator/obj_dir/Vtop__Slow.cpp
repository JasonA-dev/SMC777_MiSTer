// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__Mode(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__T2Write(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__IOWait(1U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Mode(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IOWait(1U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_C(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_N(1U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_P(2U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_X(3U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_H(4U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_Y(5U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_Z(6U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Flag_S(7U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aNone(7U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aBC(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aDE(1U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aXY(2U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aIOA(4U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aSP(5U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__aZI(6U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Mode(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_C(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_N(1U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_P(2U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_X(3U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_H(4U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Y(5U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Z(6U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_S(7U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aNone(7U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aBC(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aDE(1U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aXY(2U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aIOA(4U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aSP(5U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__aZI(6U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Mode(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_C(0U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_N(1U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_P(2U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_X(3U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_H(4U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Y(5U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Z(6U);
const IData Vtop::var_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_S(7U);
const IData Vtop::var_top__DOT__smc777__DOT__rom__DOT__data_width_g(8U);
const IData Vtop::var_top__DOT__smc777__DOT__rom__DOT__addr_width_g(0xeU);
const IData Vtop::var_top__DOT__smc777__DOT__dpram__DOT__data_width_g(8U);
const IData Vtop::var_top__DOT__smc777__DOT__dpram__DOT__addr_width_g(0x10U);

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(_vcontextp__, this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-9);
    vlSymsp->_vm_contextp__->timeprecision(-9);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

// Savable
void Vtop::__Vserialize(VerilatedSerialize& os) {
    vluint64_t __Vcheckval = 0xaf6357f33f85a16cULL;
    os << __Vcheckval;
    os << __VlSymsp->_vm_contextp__;
    os<<clk_48;
    os<<clk_24;
    os<<inputs;
    os<<VGA_R;
    os<<VGA_G;
    os<<VGA_B;
    os<<VGA_HS;
    os<<VGA_VS;
    os<<VGA_HB;
    os<<VGA_VB;
    os<<AUDIO_L;
    os<<AUDIO_R;
    os<<ioctl_download;
    os<<ioctl_upload;
    os<<ioctl_wr;
    os<<ioctl_addr;
    os<<ioctl_dout;
    os<<ioctl_din;
    os<<ioctl_index;
    os<<ioctl_wait;
    os<<ps2_key;
    os<<top__DOT__clk_48;
    os<<top__DOT__clk_24;
    os<<top__DOT__inputs;
    os<<top__DOT__VGA_R;
    os<<top__DOT__VGA_G;
    os<<top__DOT__VGA_B;
    os<<top__DOT__VGA_HS;
    os<<top__DOT__VGA_VS;
    os<<top__DOT__VGA_HB;
    os<<top__DOT__VGA_VB;
    os<<top__DOT__AUDIO_L;
    os<<top__DOT__AUDIO_R;
    os<<top__DOT__ioctl_download;
    os<<top__DOT__ioctl_upload;
    os<<top__DOT__ioctl_wr;
    os<<top__DOT__ioctl_addr;
    os<<top__DOT__ioctl_dout;
    os<<top__DOT__ioctl_din;
    os<<top__DOT__ioctl_index;
    os<<top__DOT__ioctl_wait;
    os<<top__DOT__ps2_key;
    os<<top__DOT__audio;
    os<<top__DOT__led;
    os<<top__DOT__VSync;
    os<<top__DOT__HSync;
    os<<top__DOT__VBlank;
    os<<top__DOT__HBlank;
    os<<top__DOT__video;
    os<<top__DOT__ce_pix;
    os<<top__DOT__reset;
    os<<top__DOT__key_strobe;
    os<<top__DOT__old_keystb;
    os<<top__DOT____Vcellout__smc777__video;
    os<<top__DOT__smc777__DOT__clk;
    os<<top__DOT__smc777__DOT__reset;
    os<<top__DOT__smc777__DOT__pal;
    os<<top__DOT__smc777__DOT__scandouble;
    os<<top__DOT__smc777__DOT__ioctl_download;
    os<<top__DOT__smc777__DOT__ioctl_index;
    os<<top__DOT__smc777__DOT__ioctl_wr;
    os<<top__DOT__smc777__DOT__ioctl_addr;
    os<<top__DOT__smc777__DOT__ioctl_dout;
    os<<top__DOT__smc777__DOT__ce_pix;
    os<<top__DOT__smc777__DOT__HBlank;
    os<<top__DOT__smc777__DOT__HSync;
    os<<top__DOT__smc777__DOT__VBlank;
    os<<top__DOT__smc777__DOT__VSync;
    os<<top__DOT__smc777__DOT__video;
    os<<top__DOT__smc777__DOT__hc;
    os<<top__DOT__smc777__DOT__vc;
    os<<top__DOT__smc777__DOT__vvc;
    os<<top__DOT__smc777__DOT__rnd_reg;
    os<<top__DOT__smc777__DOT__rnd_c;
    os<<top__DOT__smc777__DOT__rnd;
    os<<top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    os<<top__DOT__smc777__DOT__ram_cs;
    os<<top__DOT__smc777__DOT__ram_rd;
    os<<top__DOT__smc777__DOT__ram_wr;
    os<<top__DOT__smc777__DOT__ram_d;
    os<<top__DOT__smc777__DOT__ram_a;
    os<<top__DOT__smc777__DOT__ram_q;
    os<<top__DOT__smc777__DOT__cpu_wr;
    os<<top__DOT__smc777__DOT__tv80n__DOT__reset_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__clk;
    os<<top__DOT__smc777__DOT__tv80n__DOT__wait_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__int_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__nmi_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__busrq_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__m1_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__mreq_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__iorq_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__rd_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__wr_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__rfsh_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__halt_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__busak_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__A;
    os<<top__DOT__smc777__DOT__tv80n__DOT__di;
    os<<top__DOT__smc777__DOT__tv80n__DOT__dout;
    os<<top__DOT__smc777__DOT__tv80n__DOT__nxt_mreq_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__nxt_iorq_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__nxt_rd_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__nxt_wr_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__cen;
    os<<top__DOT__smc777__DOT__tv80n__DOT__intcycle_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__no_read;
    os<<top__DOT__smc777__DOT__tv80n__DOT__write;
    os<<top__DOT__smc777__DOT__tv80n__DOT__iorq;
    os<<top__DOT__smc777__DOT__tv80n__DOT__di_reg;
    os<<top__DOT__smc777__DOT__tv80n__DOT__mcycle;
    os<<top__DOT__smc777__DOT__tv80n__DOT__tstate;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__reset_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__clk;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__cen;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__wait_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__int_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__nmi_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busrq_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__m1_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__no_read;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__write;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__rfsh_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__halt_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busak_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__A;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dinst;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__di;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dout;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mc;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ts;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__intcycle_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__stop;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ACC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Ap;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Fp;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusB;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Alternate;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__TmpAddr;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_Mux;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_mcycle;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_tstate;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE_FF1;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE_FF2;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt_FF;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusReq_s;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusAck;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ClkEn;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMI_s;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__INT_s;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IStatus;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__T_Res;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_State;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_Ind;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__No_BTR;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BTR_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDecZ;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Q;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Z16_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC_r;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpXY;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDSPHL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRp;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeAF;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRS;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_DJNZ;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CPL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CCF;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_SCF;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BT;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BTR;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RLD;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RRD;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetDI;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetEI;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16_B;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_A;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_B;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16_B;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Oldnmi_n;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IR;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__F;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Call;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Write;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Z16;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__IR;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ISet;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusA;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusB;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_In;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__clk;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__CEN;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEH;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEL;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0];
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0];
    }
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__B;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__C;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__D;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__E;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__H;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__L;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IX;
    os<<top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IY;
    os<<top__DOT__smc777__DOT__mc6845__DOT__CLOCK;
    os<<top__DOT__smc777__DOT__mc6845__DOT__CLKEN;
    os<<top__DOT__smc777__DOT__mc6845__DOT__CLKEN_CPU;
    os<<top__DOT__smc777__DOT__mc6845__DOT__nRESET;
    os<<top__DOT__smc777__DOT__mc6845__DOT__ENABLE;
    os<<top__DOT__smc777__DOT__mc6845__DOT__R_nW;
    os<<top__DOT__smc777__DOT__mc6845__DOT__RS;
    os<<top__DOT__smc777__DOT__mc6845__DOT__DI;
    os<<top__DOT__smc777__DOT__mc6845__DOT__DO;
    os<<top__DOT__smc777__DOT__mc6845__DOT__VSYNC;
    os<<top__DOT__smc777__DOT__mc6845__DOT__HSYNC;
    os<<top__DOT__smc777__DOT__mc6845__DOT__DE;
    os<<top__DOT__smc777__DOT__mc6845__DOT__CURSOR;
    os<<top__DOT__smc777__DOT__mc6845__DOT__LPSTB;
    os<<top__DOT__smc777__DOT__mc6845__DOT__VGA;
    os<<top__DOT__smc777__DOT__mc6845__DOT__MA;
    os<<top__DOT__smc777__DOT__mc6845__DOT__RA;
    os<<top__DOT__smc777__DOT__mc6845__DOT__test;
    os<<top__DOT__smc777__DOT__mc6845__DOT__addr_reg;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r00_h_total;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r01_h_displayed;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r02_h_sync_pos;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r03_v_sync_width;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r03_h_sync_width;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r04_v_total;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r05_v_total_adj;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r06_v_displayed;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r07_v_sync_pos;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r08_interlace;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r09_max_scanline_addr;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_mode;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_start;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r11_cursor_end;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r12_start_addr_h;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r13_start_addr_l;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r14_cursor_h;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r15_cursor_l;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r16_light_pen_h;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r17_light_pen_l;
    os<<top__DOT__smc777__DOT__mc6845__DOT__h_counter;
    os<<top__DOT__smc777__DOT__mc6845__DOT__h_sync_counter;
    os<<top__DOT__smc777__DOT__mc6845__DOT__row_counter;
    os<<top__DOT__smc777__DOT__mc6845__DOT__row_counter_next;
    os<<top__DOT__smc777__DOT__mc6845__DOT__line_counter;
    os<<top__DOT__smc777__DOT__mc6845__DOT__line_counter_next;
    os<<top__DOT__smc777__DOT__mc6845__DOT__v_sync_counter;
    os<<top__DOT__smc777__DOT__mc6845__DOT__field_counter;
    os<<top__DOT__smc777__DOT__mc6845__DOT__h_display;
    os<<top__DOT__smc777__DOT__mc6845__DOT__hs;
    os<<top__DOT__smc777__DOT__mc6845__DOT__v_display;
    os<<top__DOT__smc777__DOT__mc6845__DOT__vs;
    os<<top__DOT__smc777__DOT__mc6845__DOT__vs_hit;
    os<<top__DOT__smc777__DOT__mc6845__DOT__vs_hit_last;
    os<<top__DOT__smc777__DOT__mc6845__DOT__vs_even;
    os<<top__DOT__smc777__DOT__mc6845__DOT__vs_odd;
    os<<top__DOT__smc777__DOT__mc6845__DOT__odd_field;
    os<<top__DOT__smc777__DOT__mc6845__DOT__ma_i;
    os<<top__DOT__smc777__DOT__mc6845__DOT__cursor_i;
    os<<top__DOT__smc777__DOT__mc6845__DOT__lpstb_sync;
    os<<top__DOT__smc777__DOT__mc6845__DOT__de0;
    os<<top__DOT__smc777__DOT__mc6845__DOT__de1;
    os<<top__DOT__smc777__DOT__mc6845__DOT__de2;
    os<<top__DOT__smc777__DOT__mc6845__DOT__cursor0;
    os<<top__DOT__smc777__DOT__mc6845__DOT__cursor1;
    os<<top__DOT__smc777__DOT__mc6845__DOT__cursor2;
    os<<top__DOT__smc777__DOT__mc6845__DOT__interlaced_video;
    os<<top__DOT__smc777__DOT__mc6845__DOT__max_scanline;
    os<<top__DOT__smc777__DOT__mc6845__DOT__adj_scanline;
    os<<top__DOT__smc777__DOT__mc6845__DOT__ma_row;
    os<<top__DOT__smc777__DOT__mc6845__DOT__in_adj;
    os<<top__DOT__smc777__DOT__mc6845__DOT__adj_in_progress;
    os<<top__DOT__smc777__DOT__mc6845__DOT__sol;
    os<<top__DOT__smc777__DOT__mc6845__DOT__eom_latched;
    os<<top__DOT__smc777__DOT__mc6845__DOT__eof_latched;
    os<<top__DOT__smc777__DOT__mc6845__DOT__first_scanline;
    os<<top__DOT__smc777__DOT__mc6845__DOT__extra_scanline;
    os<<top__DOT__smc777__DOT__mc6845__DOT__new_frame;
    os<<top__DOT__smc777__DOT__mc6845__DOT__r00_h_total_hit;
    os<<top__DOT__smc777__DOT__mc6845__DOT__max_scanline_hit;
    os<<top__DOT__smc777__DOT__mc6845__DOT__unnamedblk1__DOT__temp;
    os<<top__DOT__smc777__DOT__rom__DOT__clock;
    os<<top__DOT__smc777__DOT__rom__DOT__ram_cs;
    os<<top__DOT__smc777__DOT__rom__DOT__wren_a;
    os<<top__DOT__smc777__DOT__rom__DOT__address_a;
    os<<top__DOT__smc777__DOT__rom__DOT__data_a;
    os<<top__DOT__smc777__DOT__rom__DOT__q_a;
    os<<top__DOT__smc777__DOT__rom__DOT__ram_cs_b;
    os<<top__DOT__smc777__DOT__rom__DOT__wren_b;
    os<<top__DOT__smc777__DOT__rom__DOT__address_b;
    os<<top__DOT__smc777__DOT__rom__DOT__data_b;
    os<<top__DOT__smc777__DOT__rom__DOT__q_b;
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        os<<top__DOT__smc777__DOT__rom__DOT__mem[__Vi0];
    }
    os<<top__DOT__smc777__DOT__dpram__DOT__clock;
    os<<top__DOT__smc777__DOT__dpram__DOT__ram_cs;
    os<<top__DOT__smc777__DOT__dpram__DOT__wren_a;
    os<<top__DOT__smc777__DOT__dpram__DOT__address_a;
    os<<top__DOT__smc777__DOT__dpram__DOT__data_a;
    os<<top__DOT__smc777__DOT__dpram__DOT__q_a;
    os<<top__DOT__smc777__DOT__dpram__DOT__ram_cs_b;
    os<<top__DOT__smc777__DOT__dpram__DOT__wren_b;
    os<<top__DOT__smc777__DOT__dpram__DOT__address_b;
    os<<top__DOT__smc777__DOT__dpram__DOT__data_b;
    os<<top__DOT__smc777__DOT__dpram__DOT__q_b;
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        os<<top__DOT__smc777__DOT__dpram__DOT__mem[__Vi0];
    }
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    os<<__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    os<<__Vdlyvdim0__top__DOT__smc777__DOT__rom__DOT__mem__v0;
    os<<__Vdlyvval__top__DOT__smc777__DOT__rom__DOT__mem__v0;
    os<<__Vdlyvset__top__DOT__smc777__DOT__rom__DOT__mem__v0;
    os<<__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC;
    os<<__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ACC;
    os<<__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
    os<<__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP;
    os<<__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate;
    os<<__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle;
    os<<__VinpClk__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    os<<__Vclklast__TOP__clk_48;
    os<<__Vclklast__TOP____VinpClk__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    os<<__Vchglast__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        os<<__Vm_traceActivity[__Vi0];
    }
    __VlSymsp->__Vserialize(os);
}
void Vtop::__Vdeserialize(VerilatedDeserialize& os) {
    vluint64_t __Vcheckval = 0xaf6357f33f85a16cULL;
    os.readAssert(__Vcheckval);
    os >> __VlSymsp->_vm_contextp__;
    os>>clk_48;
    os>>clk_24;
    os>>inputs;
    os>>VGA_R;
    os>>VGA_G;
    os>>VGA_B;
    os>>VGA_HS;
    os>>VGA_VS;
    os>>VGA_HB;
    os>>VGA_VB;
    os>>AUDIO_L;
    os>>AUDIO_R;
    os>>ioctl_download;
    os>>ioctl_upload;
    os>>ioctl_wr;
    os>>ioctl_addr;
    os>>ioctl_dout;
    os>>ioctl_din;
    os>>ioctl_index;
    os>>ioctl_wait;
    os>>ps2_key;
    os>>top__DOT__clk_48;
    os>>top__DOT__clk_24;
    os>>top__DOT__inputs;
    os>>top__DOT__VGA_R;
    os>>top__DOT__VGA_G;
    os>>top__DOT__VGA_B;
    os>>top__DOT__VGA_HS;
    os>>top__DOT__VGA_VS;
    os>>top__DOT__VGA_HB;
    os>>top__DOT__VGA_VB;
    os>>top__DOT__AUDIO_L;
    os>>top__DOT__AUDIO_R;
    os>>top__DOT__ioctl_download;
    os>>top__DOT__ioctl_upload;
    os>>top__DOT__ioctl_wr;
    os>>top__DOT__ioctl_addr;
    os>>top__DOT__ioctl_dout;
    os>>top__DOT__ioctl_din;
    os>>top__DOT__ioctl_index;
    os>>top__DOT__ioctl_wait;
    os>>top__DOT__ps2_key;
    os>>top__DOT__audio;
    os>>top__DOT__led;
    os>>top__DOT__VSync;
    os>>top__DOT__HSync;
    os>>top__DOT__VBlank;
    os>>top__DOT__HBlank;
    os>>top__DOT__video;
    os>>top__DOT__ce_pix;
    os>>top__DOT__reset;
    os>>top__DOT__key_strobe;
    os>>top__DOT__old_keystb;
    os>>top__DOT____Vcellout__smc777__video;
    os>>top__DOT__smc777__DOT__clk;
    os>>top__DOT__smc777__DOT__reset;
    os>>top__DOT__smc777__DOT__pal;
    os>>top__DOT__smc777__DOT__scandouble;
    os>>top__DOT__smc777__DOT__ioctl_download;
    os>>top__DOT__smc777__DOT__ioctl_index;
    os>>top__DOT__smc777__DOT__ioctl_wr;
    os>>top__DOT__smc777__DOT__ioctl_addr;
    os>>top__DOT__smc777__DOT__ioctl_dout;
    os>>top__DOT__smc777__DOT__ce_pix;
    os>>top__DOT__smc777__DOT__HBlank;
    os>>top__DOT__smc777__DOT__HSync;
    os>>top__DOT__smc777__DOT__VBlank;
    os>>top__DOT__smc777__DOT__VSync;
    os>>top__DOT__smc777__DOT__video;
    os>>top__DOT__smc777__DOT__hc;
    os>>top__DOT__smc777__DOT__vc;
    os>>top__DOT__smc777__DOT__vvc;
    os>>top__DOT__smc777__DOT__rnd_reg;
    os>>top__DOT__smc777__DOT__rnd_c;
    os>>top__DOT__smc777__DOT__rnd;
    os>>top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    os>>top__DOT__smc777__DOT__ram_cs;
    os>>top__DOT__smc777__DOT__ram_rd;
    os>>top__DOT__smc777__DOT__ram_wr;
    os>>top__DOT__smc777__DOT__ram_d;
    os>>top__DOT__smc777__DOT__ram_a;
    os>>top__DOT__smc777__DOT__ram_q;
    os>>top__DOT__smc777__DOT__cpu_wr;
    os>>top__DOT__smc777__DOT__tv80n__DOT__reset_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__clk;
    os>>top__DOT__smc777__DOT__tv80n__DOT__wait_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__int_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__nmi_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__busrq_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__m1_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__mreq_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__iorq_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__rd_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__wr_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__rfsh_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__halt_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__busak_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__A;
    os>>top__DOT__smc777__DOT__tv80n__DOT__di;
    os>>top__DOT__smc777__DOT__tv80n__DOT__dout;
    os>>top__DOT__smc777__DOT__tv80n__DOT__nxt_mreq_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__nxt_iorq_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__nxt_rd_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__nxt_wr_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__cen;
    os>>top__DOT__smc777__DOT__tv80n__DOT__intcycle_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__no_read;
    os>>top__DOT__smc777__DOT__tv80n__DOT__write;
    os>>top__DOT__smc777__DOT__tv80n__DOT__iorq;
    os>>top__DOT__smc777__DOT__tv80n__DOT__di_reg;
    os>>top__DOT__smc777__DOT__tv80n__DOT__mcycle;
    os>>top__DOT__smc777__DOT__tv80n__DOT__tstate;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__reset_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__clk;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__cen;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__wait_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__int_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__nmi_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busrq_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__m1_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__no_read;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__write;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__rfsh_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__halt_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busak_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__A;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dinst;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__di;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dout;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mc;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ts;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__intcycle_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__stop;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ACC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Ap;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Fp;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusB;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Alternate;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__TmpAddr;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_Mux;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_mcycle;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_tstate;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE_FF1;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE_FF2;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt_FF;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusReq_s;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusAck;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ClkEn;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMI_s;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__INT_s;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IStatus;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__T_Res;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_State;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_Ind;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__No_BTR;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BTR_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDecZ;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Q;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Z16_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC_r;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpXY;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDSPHL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRp;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeAF;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRS;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_DJNZ;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CPL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CCF;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_SCF;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BT;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BTR;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RLD;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RRD;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetDI;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetEI;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16_B;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_A;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_B;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16_B;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Oldnmi_n;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IR;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__F;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Call;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Write;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Z16;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__IR;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ISet;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusA;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusB;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_In;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__clk;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__CEN;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEH;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEL;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0];
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0];
    }
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__B;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__C;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__D;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__E;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__H;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__L;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IX;
    os>>top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IY;
    os>>top__DOT__smc777__DOT__mc6845__DOT__CLOCK;
    os>>top__DOT__smc777__DOT__mc6845__DOT__CLKEN;
    os>>top__DOT__smc777__DOT__mc6845__DOT__CLKEN_CPU;
    os>>top__DOT__smc777__DOT__mc6845__DOT__nRESET;
    os>>top__DOT__smc777__DOT__mc6845__DOT__ENABLE;
    os>>top__DOT__smc777__DOT__mc6845__DOT__R_nW;
    os>>top__DOT__smc777__DOT__mc6845__DOT__RS;
    os>>top__DOT__smc777__DOT__mc6845__DOT__DI;
    os>>top__DOT__smc777__DOT__mc6845__DOT__DO;
    os>>top__DOT__smc777__DOT__mc6845__DOT__VSYNC;
    os>>top__DOT__smc777__DOT__mc6845__DOT__HSYNC;
    os>>top__DOT__smc777__DOT__mc6845__DOT__DE;
    os>>top__DOT__smc777__DOT__mc6845__DOT__CURSOR;
    os>>top__DOT__smc777__DOT__mc6845__DOT__LPSTB;
    os>>top__DOT__smc777__DOT__mc6845__DOT__VGA;
    os>>top__DOT__smc777__DOT__mc6845__DOT__MA;
    os>>top__DOT__smc777__DOT__mc6845__DOT__RA;
    os>>top__DOT__smc777__DOT__mc6845__DOT__test;
    os>>top__DOT__smc777__DOT__mc6845__DOT__addr_reg;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r00_h_total;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r01_h_displayed;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r02_h_sync_pos;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r03_v_sync_width;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r03_h_sync_width;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r04_v_total;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r05_v_total_adj;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r06_v_displayed;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r07_v_sync_pos;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r08_interlace;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r09_max_scanline_addr;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_mode;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_start;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r11_cursor_end;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r12_start_addr_h;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r13_start_addr_l;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r14_cursor_h;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r15_cursor_l;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r16_light_pen_h;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r17_light_pen_l;
    os>>top__DOT__smc777__DOT__mc6845__DOT__h_counter;
    os>>top__DOT__smc777__DOT__mc6845__DOT__h_sync_counter;
    os>>top__DOT__smc777__DOT__mc6845__DOT__row_counter;
    os>>top__DOT__smc777__DOT__mc6845__DOT__row_counter_next;
    os>>top__DOT__smc777__DOT__mc6845__DOT__line_counter;
    os>>top__DOT__smc777__DOT__mc6845__DOT__line_counter_next;
    os>>top__DOT__smc777__DOT__mc6845__DOT__v_sync_counter;
    os>>top__DOT__smc777__DOT__mc6845__DOT__field_counter;
    os>>top__DOT__smc777__DOT__mc6845__DOT__h_display;
    os>>top__DOT__smc777__DOT__mc6845__DOT__hs;
    os>>top__DOT__smc777__DOT__mc6845__DOT__v_display;
    os>>top__DOT__smc777__DOT__mc6845__DOT__vs;
    os>>top__DOT__smc777__DOT__mc6845__DOT__vs_hit;
    os>>top__DOT__smc777__DOT__mc6845__DOT__vs_hit_last;
    os>>top__DOT__smc777__DOT__mc6845__DOT__vs_even;
    os>>top__DOT__smc777__DOT__mc6845__DOT__vs_odd;
    os>>top__DOT__smc777__DOT__mc6845__DOT__odd_field;
    os>>top__DOT__smc777__DOT__mc6845__DOT__ma_i;
    os>>top__DOT__smc777__DOT__mc6845__DOT__cursor_i;
    os>>top__DOT__smc777__DOT__mc6845__DOT__lpstb_sync;
    os>>top__DOT__smc777__DOT__mc6845__DOT__de0;
    os>>top__DOT__smc777__DOT__mc6845__DOT__de1;
    os>>top__DOT__smc777__DOT__mc6845__DOT__de2;
    os>>top__DOT__smc777__DOT__mc6845__DOT__cursor0;
    os>>top__DOT__smc777__DOT__mc6845__DOT__cursor1;
    os>>top__DOT__smc777__DOT__mc6845__DOT__cursor2;
    os>>top__DOT__smc777__DOT__mc6845__DOT__interlaced_video;
    os>>top__DOT__smc777__DOT__mc6845__DOT__max_scanline;
    os>>top__DOT__smc777__DOT__mc6845__DOT__adj_scanline;
    os>>top__DOT__smc777__DOT__mc6845__DOT__ma_row;
    os>>top__DOT__smc777__DOT__mc6845__DOT__in_adj;
    os>>top__DOT__smc777__DOT__mc6845__DOT__adj_in_progress;
    os>>top__DOT__smc777__DOT__mc6845__DOT__sol;
    os>>top__DOT__smc777__DOT__mc6845__DOT__eom_latched;
    os>>top__DOT__smc777__DOT__mc6845__DOT__eof_latched;
    os>>top__DOT__smc777__DOT__mc6845__DOT__first_scanline;
    os>>top__DOT__smc777__DOT__mc6845__DOT__extra_scanline;
    os>>top__DOT__smc777__DOT__mc6845__DOT__new_frame;
    os>>top__DOT__smc777__DOT__mc6845__DOT__r00_h_total_hit;
    os>>top__DOT__smc777__DOT__mc6845__DOT__max_scanline_hit;
    os>>top__DOT__smc777__DOT__mc6845__DOT__unnamedblk1__DOT__temp;
    os>>top__DOT__smc777__DOT__rom__DOT__clock;
    os>>top__DOT__smc777__DOT__rom__DOT__ram_cs;
    os>>top__DOT__smc777__DOT__rom__DOT__wren_a;
    os>>top__DOT__smc777__DOT__rom__DOT__address_a;
    os>>top__DOT__smc777__DOT__rom__DOT__data_a;
    os>>top__DOT__smc777__DOT__rom__DOT__q_a;
    os>>top__DOT__smc777__DOT__rom__DOT__ram_cs_b;
    os>>top__DOT__smc777__DOT__rom__DOT__wren_b;
    os>>top__DOT__smc777__DOT__rom__DOT__address_b;
    os>>top__DOT__smc777__DOT__rom__DOT__data_b;
    os>>top__DOT__smc777__DOT__rom__DOT__q_b;
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        os>>top__DOT__smc777__DOT__rom__DOT__mem[__Vi0];
    }
    os>>top__DOT__smc777__DOT__dpram__DOT__clock;
    os>>top__DOT__smc777__DOT__dpram__DOT__ram_cs;
    os>>top__DOT__smc777__DOT__dpram__DOT__wren_a;
    os>>top__DOT__smc777__DOT__dpram__DOT__address_a;
    os>>top__DOT__smc777__DOT__dpram__DOT__data_a;
    os>>top__DOT__smc777__DOT__dpram__DOT__q_a;
    os>>top__DOT__smc777__DOT__dpram__DOT__ram_cs_b;
    os>>top__DOT__smc777__DOT__dpram__DOT__wren_b;
    os>>top__DOT__smc777__DOT__dpram__DOT__address_b;
    os>>top__DOT__smc777__DOT__dpram__DOT__data_b;
    os>>top__DOT__smc777__DOT__dpram__DOT__q_b;
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        os>>top__DOT__smc777__DOT__dpram__DOT__mem[__Vi0];
    }
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    os>>__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    os>>__Vdlyvdim0__top__DOT__smc777__DOT__rom__DOT__mem__v0;
    os>>__Vdlyvval__top__DOT__smc777__DOT__rom__DOT__mem__v0;
    os>>__Vdlyvset__top__DOT__smc777__DOT__rom__DOT__mem__v0;
    os>>__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC;
    os>>__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ACC;
    os>>__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
    os>>__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP;
    os>>__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate;
    os>>__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle;
    os>>__VinpClk__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    os>>__Vclklast__TOP__clk_48;
    os>>__Vclklast__TOP____VinpClk__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    os>>__Vchglast__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        os>>__Vm_traceActivity[__Vi0];
    }
    __VlSymsp->__Vdeserialize(os);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__CLKEN = 1U;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__CLKEN_CPU = 1U;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__ENABLE = 1U;
    vlTOPp->top__DOT__smc777__DOT__rom__DOT__wren_b = 0U;
    vlTOPp->top__DOT__smc777__DOT__dpram__DOT__wren_b = 0U;
    vlTOPp->ioctl_wait = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__rfsh_n = 1U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__wait_n = 1U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__int_n = 1U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nmi_n = 1U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__busrq_n = 1U;
    vlTOPp->top__DOT__old_keystb = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[0U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[0U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux = 1U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[1U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[1U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux = 2U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[2U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[2U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux = 3U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[3U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[3U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux = 4U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[4U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[4U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux = 5U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[5U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[5U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux = 6U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[6U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[6U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux = 7U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[7U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[7U] = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux = 8U;
    vlTOPp->top__DOT__ce_pix = 1U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__cen = 1U;
    vlTOPp->top__DOT__ioctl_wait = vlTOPp->ioctl_wait;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__rfsh_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__rfsh_n;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__wait_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__wait_n;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__int_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__int_n;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__nmi_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nmi_n;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busrq_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__busrq_n;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__cen 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__cen;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__smc777__DOT__video = vlTOPp->top__DOT____Vcellout__smc777__video;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__nRESET 
        = vlTOPp->top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__reset_n 
        = vlTOPp->top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
    vlTOPp->AUDIO_L = (0xffffU & (((IData)(vlTOPp->top__DOT__audio) 
                                   << 8U) | (IData)(vlTOPp->top__DOT__audio)));
    vlTOPp->top__DOT__video = (1U & (IData)(vlTOPp->top__DOT____Vcellout__smc777__video));
    vlTOPp->top__DOT__clk_24 = vlTOPp->clk_24;
    vlTOPp->top__DOT__inputs = vlTOPp->inputs;
    vlTOPp->top__DOT__ioctl_upload = vlTOPp->ioctl_upload;
    vlTOPp->top__DOT__ioctl_din = vlTOPp->ioctl_din;
    vlTOPp->top__DOT__ps2_key = vlTOPp->ps2_key;
    vlTOPp->top__DOT__smc777__DOT__rom__DOT__address_a 
        = (0x3fffU & (vlTOPp->ioctl_addr >> 0U));
    vlTOPp->top__DOT__ioctl_download = vlTOPp->ioctl_download;
    vlTOPp->top__DOT__ioctl_addr = vlTOPp->ioctl_addr;
    vlTOPp->top__DOT__ioctl_index = vlTOPp->ioctl_index;
    vlTOPp->top__DOT__ioctl_wr = vlTOPp->ioctl_wr;
    vlTOPp->top__DOT__ioctl_dout = vlTOPp->ioctl_dout;
    vlTOPp->top__DOT__clk_48 = vlTOPp->clk_48;
    vlTOPp->top__DOT__reset = vlTOPp->ioctl_download;
    vlTOPp->top__DOT__smc777__DOT__HBlank = vlTOPp->top__DOT__HBlank;
    vlTOPp->top__DOT__smc777__DOT__HSync = vlTOPp->top__DOT__HSync;
    vlTOPp->top__DOT__smc777__DOT__VBlank = vlTOPp->top__DOT__VBlank;
    vlTOPp->top__DOT__smc777__DOT__VSync = vlTOPp->top__DOT__VSync;
    vlTOPp->top__DOT__smc777__DOT__rnd_c = ((0x20U 
                                             & ((IData)(vlTOPp->top__DOT__smc777__DOT__rnd_reg) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & ((IData)(
                                                           (vlTOPp->top__DOT__smc777__DOT__rnd_reg 
                                                            >> 1U)) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((IData)(
                                                              (vlTOPp->top__DOT__smc777__DOT__rnd_reg 
                                                               >> 2U)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((IData)(
                                                                 (vlTOPp->top__DOT__smc777__DOT__rnd_reg 
                                                                  >> 2U)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (vlTOPp->top__DOT__smc777__DOT__rnd_reg 
                                                                     >> 2U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlTOPp->top__DOT__smc777__DOT__rnd_reg 
                                                                      >> 2U))))))));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__di 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__di_reg;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16_r;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrC;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__HSYNC 
        = vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__hs;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__RA 
        = ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__interlaced_video)
            ? ((0x1eU & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter)) 
               | (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__odd_field))
            : (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter));
    vlTOPp->VGA_VS = vlTOPp->top__DOT__VSync;
    vlTOPp->VGA_HS = vlTOPp->top__DOT__HSync;
    vlTOPp->VGA_VB = vlTOPp->top__DOT__VBlank;
    vlTOPp->VGA_HB = vlTOPp->top__DOT__HBlank;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__wr_n 
        = vlTOPp->top__DOT__smc777__DOT__cpu_wr;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Z16_r;
    vlTOPp->top__DOT__smc777__DOT__dpram__DOT__wren_a 
        = vlTOPp->top__DOT__smc777__DOT__cpu_wr;
    vlTOPp->top__DOT__smc777__DOT__dpram__DOT__address_a 
        = vlTOPp->top__DOT__smc777__DOT__ram_a;
    vlTOPp->top__DOT__smc777__DOT__dpram__DOT__data_a 
        = vlTOPp->top__DOT__smc777__DOT__ram_d;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__A = vlTOPp->top__DOT__smc777__DOT__ram_a;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__dout 
        = vlTOPp->top__DOT__smc777__DOT__ram_d;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__di_reg;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__m1_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__m1_n;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE_FF1;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ISet 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusA 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusB 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB;
    vlTOPp->top__DOT__smc777__DOT__rom__DOT__q_a = vlTOPp->top__DOT__smc777__DOT__ram_q;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__vs_hit 
        = ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__row_counter) 
           == (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r07_v_sync_pos));
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__adj_scanline 
        = (0x1fU & (((3U == (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace))) 
                     & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__VGA))
                     ? ((IData)(2U) + (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r05_v_total_adj))
                     : (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r05_v_total_adj)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__di = vlTOPp->top__DOT__smc777__DOT__ram_q;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__halt_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt_FF)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__busak_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusAck)));
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__vs 
        = ((1U & (((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace) 
                   & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__VGA))) 
                  & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__odd_field))))
            ? (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__vs_odd)
            : (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__vs_even));
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__de0 
        = (((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__h_display) 
            & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__v_display)) 
           & (3U != (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace) 
                           >> 4U))));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__intcycle_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle)));
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r00_h_total_hit 
        = ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__h_counter) 
           == (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r00_h_total));
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__max_scanline 
        = (0x1fU & ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__VGA)
                     ? ((IData)(1U) + (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r09_max_scanline_addr))
                     : ((3U == (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace)))
                         ? (0x1eU & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r09_max_scanline_addr))
                         : (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r09_max_scanline_addr))));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IR 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__F 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__IR 
        = (0x3fU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                    >> 0U));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_In 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__MA 
        = vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__ma_i;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__test 
        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__test)) 
           | ((((~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__R_nW)) 
                & (0U == (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__addr_reg))) 
               << 2U) | ((2U & ((~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__R_nW)) 
                                << 1U)) | (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__R_nW))))));
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__test 
        = ((7U & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__test)) 
           | (((~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__R_nW)) 
               & (0U == (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__addr_reg))) 
              << 3U));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetEI = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetEI = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_SCF = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_SCF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CCF = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CCF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CPL = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CPL = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpXY = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpXY = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix = 3U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix = 2U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix = 3U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode = 3U;
    if ((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode 
                                            = ((1U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                                                ? 2U
                                                : 1U);
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode = 0U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode = 0U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode = 2U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode = 0U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRS = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeAF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD = 5U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD = 4U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD = 7U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD = 6U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDSPHL = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetDI = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetDI = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U == (0x3fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt = 1U;
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__cursor0 
        = (1U & ((~ (((((~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__h_display)) 
                        | (~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__v_display))) 
                       | ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__ma_i) 
                          != (((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r14_cursor_h) 
                               << 8U) | (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r15_cursor_l)))) 
                      | ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter) 
                         < (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_start))) 
                     | ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter) 
                        > (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r11_cursor_end)))) 
                 & ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_mode))
                     ? ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__field_counter) 
                        >> 4U) : ((2U == (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_mode))
                                   ? ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__field_counter) 
                                      >> 3U) : (0U 
                                                == (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_mode))))));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U != (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
        = ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
            ? ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                    ? 0x80U : 0x40U) : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                                         ? 0x20U : 0x10U))
            : ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                    ? 8U : 4U) : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                                   ? 2U : 1U)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
        = (IData)((1U == (5U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In 
        = (1U & (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B 
        = (0xfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A 
        = (0xfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout 
        = (0x1fU & (((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A) 
                     + (0xfU & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub)
                                 ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B))
                                 : (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B)))) 
                    + (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In 
        = (1U & (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B 
        = (0xfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A 
        = (0xfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout 
        = (0x1fU & (((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A) 
                     + (0xfU & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub)
                                 ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B))
                                 : (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B)))) 
                    + (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0xf0U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0xfU & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout)));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B 
        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A 
        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout 
        = (0xfU & (((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A) 
                    + (7U & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub)
                              ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B))
                              : (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B)))) 
                   + (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout) 
                 >> 3U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B 
        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A 
        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout 
        = (0xfU & (((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A) 
                    + (7U & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub)
                              ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B))
                              : (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B)))) 
                   + (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x8fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x70U & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout) 
                       << 4U)));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout 
        = (3U & (((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A) 
                  + (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub)
                            ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B))
                            : (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B)))) 
                 + (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v 
        = (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A 
        = (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout 
        = (3U & (((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A) 
                  + (1U & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub)
                            ? (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B))
                            : (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B)))) 
                 + (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x7fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x80U & ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout) 
                       << 7U)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
        = ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
           ^ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_mcycle 
        = (1U & ((1U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles))
                  ? (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)
                  : ((2U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles))
                      ? ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                         >> 1U) : ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles))
                                    ? ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 2U) : ((4U 
                                                  == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 4U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 5U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles)) 
                                                    & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                       >> 6U)))))))));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                }
            } else if ((6U == (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RRD = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RRD = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RLD = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RLD = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BTR = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BTR = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BTR = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            } else if ((6U == (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((6U == (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            }
        } else if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                } else if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 1U)))) {
            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    if ((6U != (7U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 2U)))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op 
        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 9U;
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                     | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                        >> 6U))))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
            }
        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 7U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                }
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BT = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BT = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BC = 0U;
    if ((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 3U)))) {
                                                    if (
                                                        (0x10U 
                                                         & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle)))) {
                                    if (vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle)))) {
                    if (vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
    }
    if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        if (((0x36U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)) 
             | (1U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet)))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__mcycle 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    } else if ((8U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        if ((1U & (~ ((0x36U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)) 
                      | (1U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet)))))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read = 1U;
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF 
                                                    = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)
                                                           : 
                                                          (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 6U))))));
                                                if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF 
                                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF 
                                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF 
                                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF 
                                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF 
                                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF 
                                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF 
                                    = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle)))) {
                                        if (vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (0x10U 
                                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((6U != (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
            if (vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                    }
                }
            } else if (vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 6U))))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 6U))))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 6U))))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 2U)))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 2U)))) {
                            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 0U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        }
                    }
                }
            }
        }
    }
}
