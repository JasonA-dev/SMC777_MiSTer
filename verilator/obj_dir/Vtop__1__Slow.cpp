// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop::_settle__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD 
        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS 
        = (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR 
        = (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                 >> 4U));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates 
        = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))
            ? 4U : 3U);
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
    if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        }
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                                = (
                                                   (8U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (7U 
                                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc 
                                                = (7U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF 
                                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                         ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF)
                                                         : 
                                                        (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                         ? 
                                                        ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                          >> 6U))))));
                                            if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout) {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                            } else {
                                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF 
                                        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                    }
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                }
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 7U : 
                                           ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 0xbU : 
                                           (1U | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                  << 1U)));
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF 
                                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : ((8U 
                                                   & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                  | (1U 
                                                     | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                        << 1U))));
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U)));
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF 
                                    = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF 
                                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF 
                                    = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF 
                                        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 4U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF 
                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc 
                                            = (7U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF 
                                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                    >> 6U))))));
                                        if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout) {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF 
                                    = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF 
                                        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF 
                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc 
                                        = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF 
                                        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                    vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                    ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)
                                                    : 
                                                   (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                    ? 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                     >> 6U))))));
                                    if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc 
                                = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF 
                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout 
                                = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                          ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)
                                                  : 
                                                 (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                   >> 6U))))));
                            if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : (1U | 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc 
                                    = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF 
                                    = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                                vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout 
                                    = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)
                                                   : 
                                                  (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? 
                                                  ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                    >> 6U))))));
                                if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 0xbU : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                          | (1U | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U))));
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 7U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc 
                            = (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U));
                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF 
                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout 
                            = (1U & ((4U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                      ? ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                          ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                 >> 7U)
                                              : (~ 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 7U)))
                                          : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                 >> 2U)
                                              : (~ 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 2U))))
                                      : ((2U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                          ? ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)
                                              : (~ (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)))
                                          : ((1U & (IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                 >> 6U)
                                              : (~ 
                                                 ((IData)(vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 6U))))));
                        if (vlTOPp->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                }
            } else if ((6U == (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U != (0x3fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((6U == (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    }
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                                    }
                                } else {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = ((8U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                = (0xcU | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((9U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            } else if ((2U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            }
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                            = (4U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 8U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                 << 1U))));
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 9U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            }
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    } else if ((2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                        } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                } else if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                     >> 1U)))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                    } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                        = (0xcU | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((9U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                    = (4U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                }
            }
        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 8U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | (1U | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                         << 1U))));
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 9U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                   << 1U)));
            }
        } else if (vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
            }
        } else if (vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
            }
        }
    } else if ((1U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
               | (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)));
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
               | (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)));
        if ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((IData)((0U != (0x41U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((IData)((0U != (0x41U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)));
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((IData)((0U != (0x41U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)));
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)));
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((IData)((0U != (0x41U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
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
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                                        ? 0xaU : 2U);
                            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))
                                    ? 0xdU : 5U);
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
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
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                }
                            } else {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                            }
                        }
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((3U == (3U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))
                                            ? 8U : 
                                           ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((3U == (3U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))
                                            ? 9U : 
                                           ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                                }
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         | (1U == (3U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))) 
                                        | (2U == (3U 
                                                  & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                     >> 4U))))
                                        ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (1U | 
                                              (6U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))))
                                        : 8U);
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         | (1U == (3U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))) 
                                        | (2U == (3U 
                                                  & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                     >> 4U))))
                                        ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (6U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))
                                        : 9U);
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                            if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (8U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)));
                            }
                        }
                    }
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        } else {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        }
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : (1U 
                                                | (6U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : (6U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)));
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((9U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                    }
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (6U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)));
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            }
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (1U 
                                                   | (6U 
                                                      & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                         >> 3U)))));
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (6U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (6U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : (1U | (6U 
                                                  & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                     >> 3U))));
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)));
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                }
            }
        } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    }
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (1U 
                                                   | (6U 
                                                      & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                         >> 3U)))));
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : ((8U 
                                                 & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (6U 
                                                   & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            }
                        }
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                    }
                }
            } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : (1U | (6U 
                                                  & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                     >> 3U))));
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)));
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                }
            }
        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                }
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                }
            }
        } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                              >> 1U)))) {
                    if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    }
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((9U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                }
            }
        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                >> 3U)));
                if ((6U == (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = (8U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                }
            }
        } else {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
            } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                if ((6U != (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (7U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        if (((0x36U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)) 
             | (0xcbU == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
        }
    }
    if ((0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
        if ((1U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
        }
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    }
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
    vlTOPp->top__DOT__key_strobe = (1U & ((IData)(vlTOPp->top__DOT__old_keystb) 
                                          ^ ((IData)(vlTOPp->ps2_key) 
                                             >> 0xaU)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__B 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [0U];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__D 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [1U];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__H 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [2U];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__C 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [0U];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__E 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [1U];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__L 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [2U];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IX 
        = ((vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [3U] << 8U) | vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [3U]);
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IY 
        = ((vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [7U] << 8U) | vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [7U]);
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top__DOT__smc777__DOT__ce_pix = vlTOPp->top__DOT__ce_pix;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__cen 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__cen;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ClkEn 
        = ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__cen) 
           & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusAck)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__reset_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__reset_n;
    vlTOPp->top__DOT__AUDIO_L = vlTOPp->AUDIO_L;
    vlTOPp->top__DOT__AUDIO_L = vlTOPp->AUDIO_L;
    vlTOPp->AUDIO_R = vlTOPp->AUDIO_L;
    vlTOPp->AUDIO_R = vlTOPp->AUDIO_L;
    if (vlTOPp->top__DOT__video) {
        vlTOPp->top__DOT__VGA_R = 0xffU;
        vlTOPp->top__DOT__VGA_G = 0xffU;
        vlTOPp->top__DOT__VGA_B = 0xffU;
        vlTOPp->top__DOT__VGA_R = 0xffU;
        vlTOPp->top__DOT__VGA_G = 0xffU;
        vlTOPp->top__DOT__VGA_B = 0xffU;
    } else {
        vlTOPp->top__DOT__VGA_R = 0U;
        vlTOPp->top__DOT__VGA_G = 0U;
        vlTOPp->top__DOT__VGA_B = 0U;
        vlTOPp->top__DOT__VGA_R = 0U;
        vlTOPp->top__DOT__VGA_G = 0U;
        vlTOPp->top__DOT__VGA_B = 0U;
    }
    vlTOPp->top__DOT__smc777__DOT__ioctl_download = vlTOPp->top__DOT__ioctl_download;
    vlTOPp->top__DOT__smc777__DOT__ioctl_addr = vlTOPp->top__DOT__ioctl_addr;
    vlTOPp->top__DOT__smc777__DOT__ioctl_index = vlTOPp->top__DOT__ioctl_index;
    vlTOPp->top__DOT__smc777__DOT__ioctl_wr = vlTOPp->top__DOT__ioctl_wr;
    vlTOPp->top__DOT__smc777__DOT__ioctl_dout = vlTOPp->top__DOT__ioctl_dout;
    vlTOPp->top__DOT__smc777__DOT__clk = vlTOPp->top__DOT__clk_48;
    vlTOPp->top__DOT__smc777__DOT__reset = vlTOPp->top__DOT__reset;
    vlTOPp->top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n 
        = (1U & (~ (IData)(vlTOPp->top__DOT__reset)));
    vlTOPp->top__DOT__VGA_VS = vlTOPp->VGA_VS;
    vlTOPp->top__DOT__VGA_HS = vlTOPp->VGA_HS;
    vlTOPp->top__DOT__VGA_VB = vlTOPp->VGA_VB;
    vlTOPp->top__DOT__VGA_HB = vlTOPp->VGA_HB;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__A 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__A;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dout 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__dout;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dinst 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__di;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__halt_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__halt_n;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busak_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__busak_n;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__VSYNC 
        = vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__vs;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__DE 
        = ((1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace) 
                         >> 4U))) ? (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__de1)
            : ((2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace) 
                             >> 4U))) ? (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__de2)
                : (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__de0)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__intcycle_n 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__intcycle_n;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__new_frame 
        = (((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r00_h_total_hit) 
            & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__eof_latched)) 
           & ((((~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace)) 
                | (~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__field_counter))) 
               | (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__extra_scanline)) 
              | (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__VGA)));
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__max_scanline_hit 
        = (((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter) 
            == (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__max_scanline)) 
           & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__adj_in_progress)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetEI;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_SCF;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CCF;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CPL;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpXY;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRS;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeAF;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDSPHL;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetDI;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__CURSOR 
        = ((0U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace) 
                         >> 6U))) ? (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__cursor0)
            : ((1U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace) 
                             >> 6U))) ? (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__cursor1)
                : ((2U == (3U & ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace) 
                                 >> 6U))) & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__cursor2))));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRp;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0U;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F;
    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xf0U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA)) 
                           | (0xfU & ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB) 
                                          >> 4U) : (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB))));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = (0xfdU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xf7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0x1fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              | (((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                  << 6U) | (0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                    << 2U)));
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xf0U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA)) 
                       | (0xfU & ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))
                                   ? ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB) 
                                      >> 4U) : (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB))));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfdU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x1fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          | (((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              << 6U) | (0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                << 2U)));
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                    = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA;
                if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F))) {
                    if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        if ((5U < (0xfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))) {
                            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                                = (0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
                        }
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = ((0x100U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                               | (0xffU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                           - (IData)(6U))));
                    }
                    if ((1U & ((0x99U < (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA)) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                         - (IData)(0x160U)));
                    }
                } else {
                    if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                               | ((9U < (0xfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                  << 4U));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(6U) 
                                         + (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                    if ((1U & ((9U < (0x1fU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                               >> 4U))) 
                               | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(0x60U) 
                                         + (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                }
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F) 
                                | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                   >> 8U))));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = (0xffU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                          | ((0U == (0xffU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                             << 6U)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                << 2U)));
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB) 
                       & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
                    : ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB) 
                       | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)));
        } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB) 
                   & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0x7fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0x40U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (4U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xbfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            }
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0x10U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xf7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xdfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            if ((6U != (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB)));
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (0x7fU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                        >> 1U));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA)));
                    } else {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (1U | (0xfeU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                              << 1U)));
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                        >> 7U)));
                    }
                } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA)) 
                           | (0x7fU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                       >> 1U)));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = (0xfeU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                    << 1U));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F) 
                                     << 7U)) | (0x7fU 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                                   >> 1U)));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xfeU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                     << 1U)) | (1U 
                                                & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0x80U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                 << 7U)) | (0x7fU & 
                                            ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                             >> 1U)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA)));
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xfeU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                 << 1U)) | (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                                  >> 7U)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                                >> 7U)));
            }
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0x1fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                      | (((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          << 6U) | (0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                            << 2U)));
            if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0xc0U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)));
            }
        }
    } else {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
            = (0xfcU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfcU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (2U | (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                                       << 4U)));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                              << 2U));
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                           | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB));
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
                }
            } else if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                       ^ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA) 
                       & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB));
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0x10U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            }
        } else if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfcU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (2U | (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x10U & ((~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                               << 4U)));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        } else {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v) 
                      << 4U));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        }
        if ((7U == (7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB)));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB)));
        } else {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        }
        if ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0x40U | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
            if (vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Z16_r) {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xbfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x40U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)));
            }
        } else {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xbfU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out));
        }
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
            = ((0x7fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
               | (0x80U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                    << 2U)));
                }
            } else {
                vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
                                << 2U)));
            }
        }
        if (vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16_r) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0x3fU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0xc0U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)));
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F)));
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Q 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB 
        = (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
            & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
               >> 3U)) ? (1U | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Alternate) 
                                << 2U)) : (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB_r));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RRD;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RLD;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BTR;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BT;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BC;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Call 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__stop 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_DJNZ;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_DJNZ;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16_B 
        = ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE)
            ? ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg))
            : ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BTR_r)
                ? 0xfffeU : 1U));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC) 
                      + (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16_B)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mc 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__mcycle;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ts 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__no_read 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_wr_n = 1U;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__mcycle)))) {
        if ((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate) 
              >> 2U) & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_wr_n = 0U;
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_rd_n = 1U;
    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__mcycle))) {
        if ((IData)((0U != (6U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate))))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_rd_n 
                = (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__intcycle_n)));
        }
    } else if ((1U & (((IData)((0U != (6U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate)))) 
                       & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read))) 
                      & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write))))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_rd_n = 0U;
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__write 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__iorq 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = (((0U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_State)) 
            & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_Ind))) 
           & (((2U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To)) 
               | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                  & (0xcbU == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))) 
              | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle) 
                 & (0x36U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR)))));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_tstate 
        = (1U & ((0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates))
                  ? (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate)
                  : ((1U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates))
                      ? ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                         >> 1U) : ((2U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates))
                                    ? ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                       >> 2U) : ((3U 
                                                  == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates))
                                                  ? 
                                                 ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates))
                                                   ? 
                                                  ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                    >> 5U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates)) 
                                                    & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                       >> 6U)))))))));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH = 0U;
    if ((1U & (((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH 
                            = (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate)))))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH = 1U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & ((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                            >> 2U) & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16))) 
              | (1U == (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16)))) 
             | (2U == (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH = 1U;
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL = 0U;
    if ((1U & (((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL 
                            = (1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                    }
                } else {
                    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL 
                        = (1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                }
            }
        }
    }
    if (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate)))))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL = 1U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & ((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                            >> 2U) & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16))) 
              | (1U == (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16)))) 
             | (2U == (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL = 1U;
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA 
        = (((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) | ((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)) 
                        & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                           >> 2U))) & (0U == (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_State)))
            ? (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16)))
            : (((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                  >> 2U) | ((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)) 
                            & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                               >> 2U))) & (2U == (3U 
                                                  & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16))))
                ? (3U | (4U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U))) : (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
                                            & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                               >> 3U))
                                            ? (2U | 
                                               ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Alternate) 
                                                << 2U))
                                            : (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
                                                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U))
                                                ? (1U 
                                                   | ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Alternate) 
                                                      << 2U))
                                                : (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA_r)))));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusC 
        = (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH) 
            << 8U) | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__CEN 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ClkEn;
    vlTOPp->top__DOT__AUDIO_R = vlTOPp->AUDIO_R;
    vlTOPp->top__DOT__AUDIO_R = vlTOPp->AUDIO_R;
    vlTOPp->VGA_R = vlTOPp->top__DOT__VGA_R;
    vlTOPp->VGA_R = vlTOPp->top__DOT__VGA_R;
    vlTOPp->VGA_G = vlTOPp->top__DOT__VGA_G;
    vlTOPp->VGA_G = vlTOPp->top__DOT__VGA_G;
    vlTOPp->VGA_B = vlTOPp->top__DOT__VGA_B;
    vlTOPp->VGA_B = vlTOPp->top__DOT__VGA_B;
    vlTOPp->top__DOT__smc777__DOT__rom__DOT__wren_a 
        = vlTOPp->top__DOT__smc777__DOT__ioctl_wr;
    vlTOPp->top__DOT__smc777__DOT__rom__DOT__data_a 
        = vlTOPp->top__DOT__smc777__DOT__ioctl_dout;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__CLOCK 
        = vlTOPp->top__DOT__smc777__DOT__clk;
    vlTOPp->top__DOT__smc777__DOT__rom__DOT__clock 
        = vlTOPp->top__DOT__smc777__DOT__clk;
    vlTOPp->top__DOT__smc777__DOT__dpram__DOT__clock 
        = vlTOPp->top__DOT__smc777__DOT__clk;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__clk 
        = vlTOPp->top__DOT__smc777__DOT__clk;
    vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__row_counter_next 
        = ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__new_frame)
            ? 0U : (0x7fU & (((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r00_h_total_hit) 
                              & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__max_scanline_hit))
                              ? ((IData)(1U) + (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__row_counter))
                              : (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__row_counter))));
    if (vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__max_scanline_hit) {
        vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter_next = 0U;
    } else if ((1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__adj_in_progress) 
                      | (~ ((3U == (3U & (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace))) 
                            & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__VGA))))))) {
        vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter_next 
            = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter)));
    } else {
        vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__unnamedblk1__DOT__temp 
            = (0xfU & ((IData)(1U) + ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter) 
                                      >> 1U)));
        vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__line_counter_next 
            = ((IData)(vlTOPp->top__DOT__smc777__DOT__mc6845__DOT__unnamedblk1__DOT__temp) 
               << 1U);
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Q;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRp)
            ? (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__no_read;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Write 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__write;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__iorq;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_mreq_n = 1U;
    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__mcycle))) {
        if ((IData)((0U != (6U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate))))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_mreq_n 
                = (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__intcycle_n)));
        }
    } else {
        if ((1U & (((IData)((0U != (6U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate)))) 
                    & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read))) 
                   & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write))))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_mreq_n 
                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__iorq;
        }
        if ((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate) 
              >> 2U) & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_mreq_n 
                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__iorq;
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_iorq_n = 1U;
    if ((1U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__mcycle))) {
        if ((IData)((0U != (6U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate))))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_iorq_n 
                = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__intcycle_n;
        }
    } else {
        if ((1U & (((IData)((0U != (6U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate)))) 
                    & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__no_read))) 
                   & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write))))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_iorq_n 
                = (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__iorq)));
        }
        if ((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__tstate) 
              >> 2U) & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__write))) {
            vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__nxt_iorq_n 
                = (1U & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__iorq)));
        }
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__T_Res 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_tstate;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA];
    if ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_A 
            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusC;
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_B 
            = ((0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg));
    } else {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_A 
            = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP;
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_B 
            = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16))
                ? 0xffffU : 1U);
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_A) 
                      + (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_B)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__clk 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__clk;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusB 
        = (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH) 
            << 8U) | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA 
        = (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH) 
            << 8U) | (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__clk 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__clk;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16 
        = (0xffffU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA) 
                      + (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16_B)));
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
         & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
            >> 3U))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusB) 
                        >> 8U));
    } else if (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                   >> 4U))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA_r) 
                        >> 8U));
    } else if ((1U & (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                       >> 2U) & ((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                     >> 3U) & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16) 
                        >> 8U));
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
         & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
            >> 3U))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusB));
    } else if (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
                & ((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                   >> 4U))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA_r));
    } else if ((1U & (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                       >> 2U) & ((((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (((IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate) 
                                     >> 3U) & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle)))))) {
        vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16));
    }
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIH 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIH;
    vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIL 
        = vlTOPp->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIL;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk_48 = vlTOPp->clk_48;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n 
        = vlTOPp->__VinpClk__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vtop::_ctor_var_reset(Vtop* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clk_48 = 0;
    self->clk_24 = 0;
    self->inputs = 0;
    self->VGA_R = 0;
    self->VGA_G = 0;
    self->VGA_B = 0;
    self->VGA_HS = 0;
    self->VGA_VS = 0;
    self->VGA_HB = 0;
    self->VGA_VB = 0;
    self->AUDIO_L = 0;
    self->AUDIO_R = 0;
    self->ioctl_download = 0;
    self->ioctl_upload = 0;
    self->ioctl_wr = 0;
    self->ioctl_addr = 0;
    self->ioctl_dout = 0;
    self->ioctl_din = 0;
    self->ioctl_index = 0;
    self->ioctl_wait = 0;
    self->ps2_key = 0;
    self->top__DOT__clk_48 = 0;
    self->top__DOT__clk_24 = 0;
    self->top__DOT__inputs = 0;
    self->top__DOT__VGA_R = 0;
    self->top__DOT__VGA_G = 0;
    self->top__DOT__VGA_B = 0;
    self->top__DOT__VGA_HS = 0;
    self->top__DOT__VGA_VS = 0;
    self->top__DOT__VGA_HB = 0;
    self->top__DOT__VGA_VB = 0;
    self->top__DOT__AUDIO_L = 0;
    self->top__DOT__AUDIO_R = 0;
    self->top__DOT__ioctl_download = 0;
    self->top__DOT__ioctl_upload = 0;
    self->top__DOT__ioctl_wr = 0;
    self->top__DOT__ioctl_addr = 0;
    self->top__DOT__ioctl_dout = 0;
    self->top__DOT__ioctl_din = 0;
    self->top__DOT__ioctl_index = 0;
    self->top__DOT__ioctl_wait = 0;
    self->top__DOT__ps2_key = 0;
    self->top__DOT__audio = 0;
    self->top__DOT__led = 0;
    self->top__DOT__VSync = 0;
    self->top__DOT__HSync = 0;
    self->top__DOT__VBlank = 0;
    self->top__DOT__HBlank = 0;
    self->top__DOT__video = 0;
    self->top__DOT__ce_pix = 0;
    self->top__DOT__reset = 0;
    self->top__DOT__key_strobe = 0;
    self->top__DOT__old_keystb = 0;
    self->top__DOT____Vcellout__smc777__video = 0;
    self->top__DOT__smc777__DOT__clk = 0;
    self->top__DOT__smc777__DOT__reset = 0;
    self->top__DOT__smc777__DOT__pal = 0;
    self->top__DOT__smc777__DOT__scandouble = 0;
    self->top__DOT__smc777__DOT__ioctl_download = 0;
    self->top__DOT__smc777__DOT__ioctl_index = 0;
    self->top__DOT__smc777__DOT__ioctl_wr = 0;
    self->top__DOT__smc777__DOT__ioctl_addr = 0;
    self->top__DOT__smc777__DOT__ioctl_dout = 0;
    self->top__DOT__smc777__DOT__ce_pix = 0;
    self->top__DOT__smc777__DOT__HBlank = 0;
    self->top__DOT__smc777__DOT__HSync = 0;
    self->top__DOT__smc777__DOT__VBlank = 0;
    self->top__DOT__smc777__DOT__VSync = 0;
    self->top__DOT__smc777__DOT__video = 0;
    self->top__DOT__smc777__DOT__hc = 0;
    self->top__DOT__smc777__DOT__vc = 0;
    self->top__DOT__smc777__DOT__vvc = 0;
    self->top__DOT__smc777__DOT__rnd_reg = 0;
    self->top__DOT__smc777__DOT__rnd_c = 0;
    self->top__DOT__smc777__DOT__rnd = 0;
    self->top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n = 0;
    self->top__DOT__smc777__DOT__ram_cs = 0;
    self->top__DOT__smc777__DOT__ram_rd = 0;
    self->top__DOT__smc777__DOT__ram_wr = 0;
    self->top__DOT__smc777__DOT__ram_d = 0;
    self->top__DOT__smc777__DOT__ram_a = 0;
    self->top__DOT__smc777__DOT__ram_q = 0;
    self->top__DOT__smc777__DOT__cpu_wr = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__reset_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__clk = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__wait_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__int_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__nmi_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__busrq_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__m1_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__mreq_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__iorq_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__rd_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__wr_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__rfsh_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__halt_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__busak_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__A = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__di = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__dout = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__nxt_mreq_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__nxt_iorq_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__nxt_rd_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__nxt_wr_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__cen = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__intcycle_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__no_read = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__write = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__iorq = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__di_reg = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__mcycle = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__tstate = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__reset_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__clk = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__cen = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__wait_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__int_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__nmi_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busrq_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__m1_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__no_read = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__write = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__rfsh_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__halt_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__busak_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__A = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dinst = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__di = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__dout = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mc = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ts = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__intcycle_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__stop = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ACC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Ap = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Fp = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegDIL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusB = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrA = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrB = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegAddrC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegWEL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Alternate = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__TmpAddr = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IR = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ISet = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RegBusA_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_Mux = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_mcycle = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__last_tstate = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE_FF1 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntE_FF2 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt_FF = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusReq_s = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusAck = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ClkEn = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMI_s = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__INT_s = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IStatus = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__DI_Reg = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__T_Res = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_State = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__XY_Ind = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__No_BTR = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BTR_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDecZ = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusB = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__BusA = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Q = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F_Out = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Z16_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC_r = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycles_d = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstates = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IntCycle = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__NMICycle = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_PC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Prefix = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Save_ALU = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PreserveC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Arith16 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Jump = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpE = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__JumpXY = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Call = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__RstP = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDZ = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDW = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__LDSPHL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__iorq_i = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Special_LD = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeDH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRp = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeAF = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ExchangeRS = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CPL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_CCF = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_SCF = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RETN = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BT = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_BTR = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RLD = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_RRD = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__I_INRC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetDI = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SetEI = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__IMode = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Halt = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC16_B = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_A = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP16_B = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ID16_B = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__Oldnmi_n = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IR = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__F = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Call = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__Write = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__IR = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__ISet = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusA = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BusB = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_In = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DIL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__clk = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__CEN = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEH = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__WEL = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0] = 0;
    }
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__aux = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__B = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__C = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__D = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__E = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__H = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__L = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IX = 0;
    self->top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__IY = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__CLOCK = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__CLKEN = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__CLKEN_CPU = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__nRESET = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__ENABLE = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__R_nW = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__RS = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__DI = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__DO = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__VSYNC = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__HSYNC = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__DE = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__CURSOR = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__LPSTB = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__VGA = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__MA = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__RA = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__test = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__addr_reg = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r00_h_total = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r01_h_displayed = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r02_h_sync_pos = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r03_v_sync_width = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r03_h_sync_width = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r04_v_total = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r05_v_total_adj = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r06_v_displayed = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r07_v_sync_pos = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r08_interlace = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r09_max_scanline_addr = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_mode = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r10_cursor_start = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r11_cursor_end = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r12_start_addr_h = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r13_start_addr_l = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r14_cursor_h = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r15_cursor_l = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r16_light_pen_h = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r17_light_pen_l = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__h_counter = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__h_sync_counter = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__row_counter = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__row_counter_next = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__line_counter = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__line_counter_next = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__v_sync_counter = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__field_counter = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__h_display = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__hs = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__v_display = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__vs = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__vs_hit = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__vs_hit_last = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__vs_even = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__vs_odd = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__odd_field = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__ma_i = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__cursor_i = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__lpstb_sync = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__de0 = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__de1 = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__de2 = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__cursor0 = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__cursor1 = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__cursor2 = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__interlaced_video = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__max_scanline = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__adj_scanline = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__ma_row = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__in_adj = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__adj_in_progress = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__sol = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__eom_latched = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__eof_latched = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__first_scanline = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__extra_scanline = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__new_frame = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__r00_h_total_hit = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__max_scanline_hit = 0;
    self->top__DOT__smc777__DOT__mc6845__DOT__unnamedblk1__DOT__temp = 0;
    self->top__DOT__smc777__DOT__rom__DOT__clock = 0;
    self->top__DOT__smc777__DOT__rom__DOT__ram_cs = 0;
    self->top__DOT__smc777__DOT__rom__DOT__wren_a = 0;
    self->top__DOT__smc777__DOT__rom__DOT__address_a = 0;
    self->top__DOT__smc777__DOT__rom__DOT__data_a = 0;
    self->top__DOT__smc777__DOT__rom__DOT__q_a = 0;
    self->top__DOT__smc777__DOT__rom__DOT__ram_cs_b = 0;
    self->top__DOT__smc777__DOT__rom__DOT__wren_b = 0;
    self->top__DOT__smc777__DOT__rom__DOT__address_b = 0;
    self->top__DOT__smc777__DOT__rom__DOT__data_b = 0;
    self->top__DOT__smc777__DOT__rom__DOT__q_b = 0;
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        self->top__DOT__smc777__DOT__rom__DOT__mem[__Vi0] = 0;
    }
    self->top__DOT__smc777__DOT__dpram__DOT__clock = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__ram_cs = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__wren_a = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__address_a = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__data_a = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__q_a = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__ram_cs_b = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__wren_b = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__address_b = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__data_b = 0;
    self->top__DOT__smc777__DOT__dpram__DOT__q_b = 0;
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        self->top__DOT__smc777__DOT__dpram__DOT__mem[__Vi0] = 0;
    }
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub = 0;
    self->__Vfunc_top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In = 0;
    self->__Vdlyvdim0__top__DOT__smc777__DOT__rom__DOT__mem__v0 = 0;
    self->__Vdlyvval__top__DOT__smc777__DOT__rom__DOT__mem__v0 = 0;
    self->__Vdlyvset__top__DOT__smc777__DOT__rom__DOT__mem__v0 = 0;
    self->__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__PC = 0;
    self->__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__ACC = 0;
    self->__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__F = 0;
    self->__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__SP = 0;
    self->__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__tstate = 0;
    self->__Vdly__top__DOT__smc777__DOT__tv80n__DOT__i_tv80_core__DOT__mcycle = 0;
    self->__VinpClk__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n = 0;
    self->__Vchglast__TOP__top__DOT__smc777__DOT____Vcellinp__tv80n__reset_n = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = 0;
    }
}
