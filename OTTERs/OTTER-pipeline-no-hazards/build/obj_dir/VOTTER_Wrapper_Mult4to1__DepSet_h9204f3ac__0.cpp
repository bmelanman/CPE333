// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_Wrapper.h for the primary calling header

#include "VOTTER_Wrapper__pch.h"
#include "VOTTER_Wrapper_Mult4to1.h"
#include "VOTTER_Wrapper__Syms.h"

VL_INLINE_OPT void VOTTER_Wrapper_Mult4to1___nba_sequent__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX__0(VOTTER_Wrapper_Mult4to1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VOTTER_Wrapper_Mult4to1___nba_sequent__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
               ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffffffeU & vlSelf->__Vtogcov__in1) 
                                  | (1U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((2U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
               ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffffffdU & vlSelf->__Vtogcov__in1) 
                                  | (2U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((4U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
               ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffffffbU & vlSelf->__Vtogcov__in1) 
                                  | (4U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((8U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
               ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffffff7U & vlSelf->__Vtogcov__in1) 
                                  | (8U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x10U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                  ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffffffefU & vlSelf->__Vtogcov__in1) 
                                  | (0x10U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x20U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                  ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffffffdfU & vlSelf->__Vtogcov__in1) 
                                  | (0x20U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x40U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                  ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffffffbfU & vlSelf->__Vtogcov__in1) 
                                  | (0x40U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x80U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                  ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffffff7fU & vlSelf->__Vtogcov__in1) 
                                  | (0x80U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x100U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                   ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffffeffU & vlSelf->__Vtogcov__in1) 
                                  | (0x100U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x200U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                   ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffffdffU & vlSelf->__Vtogcov__in1) 
                                  | (0x200U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x400U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                   ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffffbffU & vlSelf->__Vtogcov__in1) 
                                  | (0x400U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x800U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                   ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffff7ffU & vlSelf->__Vtogcov__in1) 
                                  | (0x800U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x1000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                    ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffffefffU & vlSelf->__Vtogcov__in1) 
                                  | (0x1000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x2000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                    ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffffdfffU & vlSelf->__Vtogcov__in1) 
                                  | (0x2000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x4000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                    ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffffbfffU & vlSelf->__Vtogcov__in1) 
                                  | (0x4000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x8000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                    ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffff7fffU & vlSelf->__Vtogcov__in1) 
                                  | (0x8000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x10000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                     ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffeffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x10000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x20000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                     ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffdffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x20000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x40000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                     ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfffbffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x40000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x80000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                     ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfff7ffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x80000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x100000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                      ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffefffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x100000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x200000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                      ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffdfffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x200000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x400000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                      ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xffbfffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x400000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x800000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                      ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xff7fffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x800000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                       ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfeffffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x1000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                       ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfdffffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x2000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                       ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xfbffffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x4000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                       ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xf7ffffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x8000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                        ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xefffffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x10000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                        ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xdfffffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x20000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                        ^ vlSelf->__Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0xbfffffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x40000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if (((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
          ^ vlSelf->__Vtogcov__in1) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = ((0x7fffffffU & vlSelf->__Vtogcov__in1) 
                                  | (0x80000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
               ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__in2 = ((0xfffffffeU & vlSelf->__Vtogcov__in2) 
                                  | (1U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((2U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
               ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__in2 = ((0xfffffffdU & vlSelf->__Vtogcov__in2) 
                                  | (2U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((4U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
               ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__in2 = ((0xfffffffbU & vlSelf->__Vtogcov__in2) 
                                  | (4U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((8U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
               ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__in2 = ((0xfffffff7U & vlSelf->__Vtogcov__in2) 
                                  | (8U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x10U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                  ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__in2 = ((0xffffffefU & vlSelf->__Vtogcov__in2) 
                                  | (0x10U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x20U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                  ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__in2 = ((0xffffffdfU & vlSelf->__Vtogcov__in2) 
                                  | (0x20U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x40U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                  ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__in2 = ((0xffffffbfU & vlSelf->__Vtogcov__in2) 
                                  | (0x40U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x80U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                  ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__in2 = ((0xffffff7fU & vlSelf->__Vtogcov__in2) 
                                  | (0x80U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x100U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                   ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__in2 = ((0xfffffeffU & vlSelf->__Vtogcov__in2) 
                                  | (0x100U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x200U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                   ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__in2 = ((0xfffffdffU & vlSelf->__Vtogcov__in2) 
                                  | (0x200U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x400U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                   ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__in2 = ((0xfffffbffU & vlSelf->__Vtogcov__in2) 
                                  | (0x400U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x800U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                   ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__in2 = ((0xfffff7ffU & vlSelf->__Vtogcov__in2) 
                                  | (0x800U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x1000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                    ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__in2 = ((0xffffefffU & vlSelf->__Vtogcov__in2) 
                                  | (0x1000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x2000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                    ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__in2 = ((0xffffdfffU & vlSelf->__Vtogcov__in2) 
                                  | (0x2000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x4000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                    ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__in2 = ((0xffffbfffU & vlSelf->__Vtogcov__in2) 
                                  | (0x4000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x8000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                    ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__in2 = ((0xffff7fffU & vlSelf->__Vtogcov__in2) 
                                  | (0x8000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x10000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                     ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__in2 = ((0xfffeffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x10000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x20000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                     ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__in2 = ((0xfffdffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x20000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x40000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                     ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__in2 = ((0xfffbffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x40000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x80000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                     ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__in2 = ((0xfff7ffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x80000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x100000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                      ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__in2 = ((0xffefffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x100000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x200000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                      ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__in2 = ((0xffdfffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x200000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x400000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                      ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__in2 = ((0xffbfffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x400000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x800000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                      ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__in2 = ((0xff7fffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x800000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                       ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__in2 = ((0xfeffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x1000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                       ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__in2 = ((0xfdffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x2000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                       ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__in2 = ((0xfbffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x4000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                       ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__in2 = ((0xf7ffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x8000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                        ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__in2 = ((0xefffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x10000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                        ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__in2 = ((0xdfffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x20000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
                        ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__in2 = ((0xbfffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x40000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if (((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U] 
          ^ vlSelf->__Vtogcov__in2) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__in2 = ((0x7fffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x80000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]));
    }
    if ((1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
               ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__in3 = ((0xfffffffeU & vlSelf->__Vtogcov__in3) 
                                  | (1U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((2U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
               ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__in3 = ((0xfffffffdU & vlSelf->__Vtogcov__in3) 
                                  | (2U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((4U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
               ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__in3 = ((0xfffffffbU & vlSelf->__Vtogcov__in3) 
                                  | (4U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((8U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
               ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__in3 = ((0xfffffff7U & vlSelf->__Vtogcov__in3) 
                                  | (8U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x10U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                  ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__in3 = ((0xffffffefU & vlSelf->__Vtogcov__in3) 
                                  | (0x10U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x20U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                  ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__in3 = ((0xffffffdfU & vlSelf->__Vtogcov__in3) 
                                  | (0x20U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x40U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                  ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__in3 = ((0xffffffbfU & vlSelf->__Vtogcov__in3) 
                                  | (0x40U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x80U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                  ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->__Vtogcov__in3 = ((0xffffff7fU & vlSelf->__Vtogcov__in3) 
                                  | (0x80U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x100U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                   ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->__Vtogcov__in3 = ((0xfffffeffU & vlSelf->__Vtogcov__in3) 
                                  | (0x100U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x200U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                   ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->__Vtogcov__in3 = ((0xfffffdffU & vlSelf->__Vtogcov__in3) 
                                  | (0x200U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x400U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                   ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->__Vtogcov__in3 = ((0xfffffbffU & vlSelf->__Vtogcov__in3) 
                                  | (0x400U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x800U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                   ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->__Vtogcov__in3 = ((0xfffff7ffU & vlSelf->__Vtogcov__in3) 
                                  | (0x800U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x1000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                    ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->__Vtogcov__in3 = ((0xffffefffU & vlSelf->__Vtogcov__in3) 
                                  | (0x1000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x2000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                    ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->__Vtogcov__in3 = ((0xffffdfffU & vlSelf->__Vtogcov__in3) 
                                  | (0x2000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x4000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                    ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelf->__Vtogcov__in3 = ((0xffffbfffU & vlSelf->__Vtogcov__in3) 
                                  | (0x4000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x8000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                    ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelf->__Vtogcov__in3 = ((0xffff7fffU & vlSelf->__Vtogcov__in3) 
                                  | (0x8000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x10000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                     ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->__Vtogcov__in3 = ((0xfffeffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x10000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x20000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                     ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->__Vtogcov__in3 = ((0xfffdffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x20000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x40000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                     ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->__Vtogcov__in3 = ((0xfffbffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x40000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x80000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                     ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->__Vtogcov__in3 = ((0xfff7ffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x80000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x100000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                      ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->__Vtogcov__in3 = ((0xffefffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x100000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x200000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                      ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->__Vtogcov__in3 = ((0xffdfffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x200000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x400000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                      ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->__Vtogcov__in3 = ((0xffbfffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x400000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x800000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                      ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->__Vtogcov__in3 = ((0xff7fffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x800000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                       ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->__Vtogcov__in3 = ((0xfeffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x1000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                       ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->__Vtogcov__in3 = ((0xfdffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x2000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                       ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->__Vtogcov__in3 = ((0xfbffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x4000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                       ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->__Vtogcov__in3 = ((0xf7ffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x8000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                        ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->__Vtogcov__in3 = ((0xefffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x10000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                        ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->__Vtogcov__in3 = ((0xdfffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x20000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
                        ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->__Vtogcov__in3 = ((0xbfffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x40000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if (((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U] 
          ^ vlSelf->__Vtogcov__in3) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->__Vtogcov__in3 = ((0x7fffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x80000000U & 
                                     vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0U == (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelf->out = vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2;
    } else {
        vlSelf->out = ((1U == (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel))
                        ? vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]
                        : ((2U == (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel))
                            ? vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]
                            : vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]));
    }
    if ((0U != (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel))) {
        if ((1U != (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel))) {
            if ((2U != (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel))) {
                ++(vlSymsp->__Vcoverage[1781]);
            }
            if ((2U == (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel))) {
                ++(vlSymsp->__Vcoverage[1780]);
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel))) {
            ++(vlSymsp->__Vcoverage[1779]);
        }
    }
    if ((1U & ((IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel) 
               ^ (IData)(vlSelf->__Vtogcov__sel)))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->__Vtogcov__sel = ((2U & (IData)(vlSelf->__Vtogcov__sel)) 
                                  | (1U & (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel) 
               ^ (IData)(vlSelf->__Vtogcov__sel)))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->__Vtogcov__sel = ((1U & (IData)(vlSelf->__Vtogcov__sel)) 
                                  | (2U & (IData)(vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel)));
    }
    if ((1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
               ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->__Vtogcov__in0 = ((0xfffffffeU & vlSelf->__Vtogcov__in0) 
                                  | (1U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((2U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
               ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->__Vtogcov__in0 = ((0xfffffffdU & vlSelf->__Vtogcov__in0) 
                                  | (2U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((4U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
               ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->__Vtogcov__in0 = ((0xfffffffbU & vlSelf->__Vtogcov__in0) 
                                  | (4U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((8U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
               ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->__Vtogcov__in0 = ((0xfffffff7U & vlSelf->__Vtogcov__in0) 
                                  | (8U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x10U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                  ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->__Vtogcov__in0 = ((0xffffffefU & vlSelf->__Vtogcov__in0) 
                                  | (0x10U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x20U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                  ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->__Vtogcov__in0 = ((0xffffffdfU & vlSelf->__Vtogcov__in0) 
                                  | (0x20U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x40U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                  ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->__Vtogcov__in0 = ((0xffffffbfU & vlSelf->__Vtogcov__in0) 
                                  | (0x40U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x80U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                  ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->__Vtogcov__in0 = ((0xffffff7fU & vlSelf->__Vtogcov__in0) 
                                  | (0x80U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x100U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                   ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__in0 = ((0xfffffeffU & vlSelf->__Vtogcov__in0) 
                                  | (0x100U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x200U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                   ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__in0 = ((0xfffffdffU & vlSelf->__Vtogcov__in0) 
                                  | (0x200U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x400U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                   ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__in0 = ((0xfffffbffU & vlSelf->__Vtogcov__in0) 
                                  | (0x400U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x800U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                   ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__in0 = ((0xfffff7ffU & vlSelf->__Vtogcov__in0) 
                                  | (0x800U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x1000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                    ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__in0 = ((0xffffefffU & vlSelf->__Vtogcov__in0) 
                                  | (0x1000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x2000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                    ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__in0 = ((0xffffdfffU & vlSelf->__Vtogcov__in0) 
                                  | (0x2000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x4000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                    ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__in0 = ((0xffffbfffU & vlSelf->__Vtogcov__in0) 
                                  | (0x4000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x8000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                    ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__in0 = ((0xffff7fffU & vlSelf->__Vtogcov__in0) 
                                  | (0x8000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x10000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                     ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__in0 = ((0xfffeffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x10000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x20000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                     ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__in0 = ((0xfffdffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x20000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x40000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                     ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__in0 = ((0xfffbffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x40000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x80000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                     ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__in0 = ((0xfff7ffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x80000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x100000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                      ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__in0 = ((0xffefffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x100000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x200000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                      ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__in0 = ((0xffdfffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x200000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x400000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                      ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__in0 = ((0xffbfffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x400000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x800000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                      ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__in0 = ((0xff7fffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x800000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x1000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                       ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__in0 = ((0xfeffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x1000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x2000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                       ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__in0 = ((0xfdffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x2000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x4000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                       ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__in0 = ((0xfbffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x4000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x8000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                       ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__in0 = ((0xf7ffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x8000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x10000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                        ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__in0 = ((0xefffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x10000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x20000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                        ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__in0 = ((0xdfffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x20000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x40000000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                        ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__in0 = ((0xbfffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x40000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if (((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
          ^ vlSelf->__Vtogcov__in0) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__in0 = ((0x7fffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x80000000U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((1U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->__Vtogcov__out = ((0xfffffffeU & vlSelf->__Vtogcov__out) 
                                  | (1U & vlSelf->out));
    }
    if ((2U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->__Vtogcov__out = ((0xfffffffdU & vlSelf->__Vtogcov__out) 
                                  | (2U & vlSelf->out));
    }
    if ((4U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->__Vtogcov__out = ((0xfffffffbU & vlSelf->__Vtogcov__out) 
                                  | (4U & vlSelf->out));
    }
    if ((8U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->__Vtogcov__out = ((0xfffffff7U & vlSelf->__Vtogcov__out) 
                                  | (8U & vlSelf->out));
    }
    if ((0x10U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->__Vtogcov__out = ((0xffffffefU & vlSelf->__Vtogcov__out) 
                                  | (0x10U & vlSelf->out));
    }
    if ((0x20U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->__Vtogcov__out = ((0xffffffdfU & vlSelf->__Vtogcov__out) 
                                  | (0x20U & vlSelf->out));
    }
    if ((0x40U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->__Vtogcov__out = ((0xffffffbfU & vlSelf->__Vtogcov__out) 
                                  | (0x40U & vlSelf->out));
    }
    if ((0x80U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->__Vtogcov__out = ((0xffffff7fU & vlSelf->__Vtogcov__out) 
                                  | (0x80U & vlSelf->out));
    }
    if ((0x100U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->__Vtogcov__out = ((0xfffffeffU & vlSelf->__Vtogcov__out) 
                                  | (0x100U & vlSelf->out));
    }
    if ((0x200U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->__Vtogcov__out = ((0xfffffdffU & vlSelf->__Vtogcov__out) 
                                  | (0x200U & vlSelf->out));
    }
    if ((0x400U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->__Vtogcov__out = ((0xfffffbffU & vlSelf->__Vtogcov__out) 
                                  | (0x400U & vlSelf->out));
    }
    if ((0x800U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->__Vtogcov__out = ((0xfffff7ffU & vlSelf->__Vtogcov__out) 
                                  | (0x800U & vlSelf->out));
    }
    if ((0x1000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->__Vtogcov__out = ((0xffffefffU & vlSelf->__Vtogcov__out) 
                                  | (0x1000U & vlSelf->out));
    }
    if ((0x2000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->__Vtogcov__out = ((0xffffdfffU & vlSelf->__Vtogcov__out) 
                                  | (0x2000U & vlSelf->out));
    }
    if ((0x4000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->__Vtogcov__out = ((0xffffbfffU & vlSelf->__Vtogcov__out) 
                                  | (0x4000U & vlSelf->out));
    }
    if ((0x8000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelf->__Vtogcov__out = ((0xffff7fffU & vlSelf->__Vtogcov__out) 
                                  | (0x8000U & vlSelf->out));
    }
    if ((0x10000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelf->__Vtogcov__out = ((0xfffeffffU & vlSelf->__Vtogcov__out) 
                                  | (0x10000U & vlSelf->out));
    }
    if ((0x20000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelf->__Vtogcov__out = ((0xfffdffffU & vlSelf->__Vtogcov__out) 
                                  | (0x20000U & vlSelf->out));
    }
    if ((0x40000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelf->__Vtogcov__out = ((0xfffbffffU & vlSelf->__Vtogcov__out) 
                                  | (0x40000U & vlSelf->out));
    }
    if ((0x80000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelf->__Vtogcov__out = ((0xfff7ffffU & vlSelf->__Vtogcov__out) 
                                  | (0x80000U & vlSelf->out));
    }
    if ((0x100000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelf->__Vtogcov__out = ((0xffefffffU & vlSelf->__Vtogcov__out) 
                                  | (0x100000U & vlSelf->out));
    }
    if ((0x200000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->__Vtogcov__out = ((0xffdfffffU & vlSelf->__Vtogcov__out) 
                                  | (0x200000U & vlSelf->out));
    }
    if ((0x400000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->__Vtogcov__out = ((0xffbfffffU & vlSelf->__Vtogcov__out) 
                                  | (0x400000U & vlSelf->out));
    }
    if ((0x800000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->__Vtogcov__out = ((0xff7fffffU & vlSelf->__Vtogcov__out) 
                                  | (0x800000U & vlSelf->out));
    }
    if ((0x1000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelf->__Vtogcov__out = ((0xfeffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x1000000U & vlSelf->out));
    }
    if ((0x2000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->__Vtogcov__out = ((0xfdffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x2000000U & vlSelf->out));
    }
    if ((0x4000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->__Vtogcov__out = ((0xfbffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x4000000U & vlSelf->out));
    }
    if ((0x8000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->__Vtogcov__out = ((0xf7ffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x8000000U & vlSelf->out));
    }
    if ((0x10000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelf->__Vtogcov__out = ((0xefffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x10000000U & vlSelf->out));
    }
    if ((0x20000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelf->__Vtogcov__out = ((0xdfffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x20000000U & vlSelf->out));
    }
    if ((0x40000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelf->__Vtogcov__out = ((0xbfffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x40000000U & vlSelf->out));
    }
    if (((vlSelf->out ^ vlSelf->__Vtogcov__out) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelf->__Vtogcov__out = ((0x7fffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x80000000U & vlSelf->out));
    }
}

VL_INLINE_OPT void VOTTER_Wrapper_Mult4to1___nba_sequent__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX__0(VOTTER_Wrapper_Mult4to1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VOTTER_Wrapper_Mult4to1___nba_sequent__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX__0\n"); );
    // Body
    if ((0U == (3U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                      >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelf->out = ((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]);
    } else {
        vlSelf->out = ((1U == (3U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                     >> 3U))) ? 0U : 
                       ((2U == (3U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                      >> 3U))) ? ((
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                   << 0x1aU) 
                                                  | (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                     >> 6U))
                         : ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                             << 0x18U) | (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                          >> 8U))));
    }
    if ((0U != (3U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                      >> 3U)))) {
        if ((1U != (3U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                          >> 3U)))) {
            if ((2U != (3U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                              >> 3U)))) {
                ++(vlSymsp->__Vcoverage[1781]);
            }
            if ((2U == (3U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                              >> 3U)))) {
                ++(vlSymsp->__Vcoverage[1780]);
            }
        }
        if ((1U == (3U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                          >> 3U)))) {
            ++(vlSymsp->__Vcoverage[1779]);
        }
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 3U) ^ (IData)(vlSelf->__Vtogcov__sel)))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->__Vtogcov__sel = ((2U & (IData)(vlSelf->__Vtogcov__sel)) 
                                  | (1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                           >> 3U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 4U) ^ ((IData)(vlSelf->__Vtogcov__sel) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->__Vtogcov__sel = ((1U & (IData)(vlSelf->__Vtogcov__sel)) 
                                  | (2U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                           >> 3U)));
    }
    if ((1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U] 
               ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->__Vtogcov__in0 = ((0xfffffffeU & vlSelf->__Vtogcov__in0) 
                                  | (1U & vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]));
    }
    if ((2U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
               ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->__Vtogcov__in0 = ((0xfffffffdU & vlSelf->__Vtogcov__in0) 
                                  | (2U & ((IData)(4U) 
                                           + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((4U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
               ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->__Vtogcov__in0 = ((0xfffffffbU & vlSelf->__Vtogcov__in0) 
                                  | (4U & ((IData)(4U) 
                                           + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((8U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
               ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->__Vtogcov__in0 = ((0xfffffff7U & vlSelf->__Vtogcov__in0) 
                                  | (8U & ((IData)(4U) 
                                           + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x10U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                  ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->__Vtogcov__in0 = ((0xffffffefU & vlSelf->__Vtogcov__in0) 
                                  | (0x10U & ((IData)(4U) 
                                              + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x20U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                  ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->__Vtogcov__in0 = ((0xffffffdfU & vlSelf->__Vtogcov__in0) 
                                  | (0x20U & ((IData)(4U) 
                                              + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x40U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                  ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->__Vtogcov__in0 = ((0xffffffbfU & vlSelf->__Vtogcov__in0) 
                                  | (0x40U & ((IData)(4U) 
                                              + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x80U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                  ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->__Vtogcov__in0 = ((0xffffff7fU & vlSelf->__Vtogcov__in0) 
                                  | (0x80U & ((IData)(4U) 
                                              + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x100U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                   ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->__Vtogcov__in0 = ((0xfffffeffU & vlSelf->__Vtogcov__in0) 
                                  | (0x100U & ((IData)(4U) 
                                               + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x200U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                   ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->__Vtogcov__in0 = ((0xfffffdffU & vlSelf->__Vtogcov__in0) 
                                  | (0x200U & ((IData)(4U) 
                                               + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x400U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                   ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->__Vtogcov__in0 = ((0xfffffbffU & vlSelf->__Vtogcov__in0) 
                                  | (0x400U & ((IData)(4U) 
                                               + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x800U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                   ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->__Vtogcov__in0 = ((0xfffff7ffU & vlSelf->__Vtogcov__in0) 
                                  | (0x800U & ((IData)(4U) 
                                               + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x1000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                    ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->__Vtogcov__in0 = ((0xffffefffU & vlSelf->__Vtogcov__in0) 
                                  | (0x1000U & ((IData)(4U) 
                                                + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x2000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                    ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->__Vtogcov__in0 = ((0xffffdfffU & vlSelf->__Vtogcov__in0) 
                                  | (0x2000U & ((IData)(4U) 
                                                + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x4000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                    ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->__Vtogcov__in0 = ((0xffffbfffU & vlSelf->__Vtogcov__in0) 
                                  | (0x4000U & ((IData)(4U) 
                                                + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x8000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                    ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->__Vtogcov__in0 = ((0xffff7fffU & vlSelf->__Vtogcov__in0) 
                                  | (0x8000U & ((IData)(4U) 
                                                + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x10000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                     ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->__Vtogcov__in0 = ((0xfffeffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x10000U & ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x20000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                     ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->__Vtogcov__in0 = ((0xfffdffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x20000U & ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x40000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                     ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->__Vtogcov__in0 = ((0xfffbffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x40000U & ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x80000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                     ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->__Vtogcov__in0 = ((0xfff7ffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x80000U & ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x100000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                      ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->__Vtogcov__in0 = ((0xffefffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x100000U & ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x200000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                      ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->__Vtogcov__in0 = ((0xffdfffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x200000U & ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x400000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                      ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->__Vtogcov__in0 = ((0xffbfffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x400000U & ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x800000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                      ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->__Vtogcov__in0 = ((0xff7fffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x800000U & ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x1000000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                       ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->__Vtogcov__in0 = ((0xfeffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x1000000U & ((IData)(4U) 
                                                   + 
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x2000000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                       ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->__Vtogcov__in0 = ((0xfdffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x2000000U & ((IData)(4U) 
                                                   + 
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x4000000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                       ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->__Vtogcov__in0 = ((0xfbffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x4000000U & ((IData)(4U) 
                                                   + 
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x8000000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                       ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->__Vtogcov__in0 = ((0xf7ffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x8000000U & ((IData)(4U) 
                                                   + 
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x10000000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                        ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->__Vtogcov__in0 = ((0xefffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x10000000U & 
                                     ((IData)(4U) + 
                                      vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x20000000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                        ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->__Vtogcov__in0 = ((0xdfffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x20000000U & 
                                     ((IData)(4U) + 
                                      vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x40000000U & (((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                        ^ vlSelf->__Vtogcov__in0))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->__Vtogcov__in0 = ((0xbfffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x40000000U & 
                                     ((IData)(4U) + 
                                      vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if (((((IData)(4U) + vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
          ^ vlSelf->__Vtogcov__in0) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->__Vtogcov__in0 = ((0x7fffffffU & vlSelf->__Vtogcov__in0) 
                                  | (0x80000000U & 
                                     ((IData)(4U) + 
                                      vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 6U) ^ vlSelf->__Vtogcov__in2))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->__Vtogcov__in2 = ((0xfffffffeU & vlSelf->__Vtogcov__in2) 
                                  | (1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                           >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 7U) ^ (vlSelf->__Vtogcov__in2 >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->__Vtogcov__in2 = ((0xfffffffdU & vlSelf->__Vtogcov__in2) 
                                  | (2U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                           >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 8U) ^ (vlSelf->__Vtogcov__in2 >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->__Vtogcov__in2 = ((0xfffffffbU & vlSelf->__Vtogcov__in2) 
                                  | (4U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                           >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 9U) ^ (vlSelf->__Vtogcov__in2 >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->__Vtogcov__in2 = ((0xfffffff7U & vlSelf->__Vtogcov__in2) 
                                  | (8U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                           >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0xaU) ^ (vlSelf->__Vtogcov__in2 
                            >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->__Vtogcov__in2 = ((0xffffffefU & vlSelf->__Vtogcov__in2) 
                                  | (0x10U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                              >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0xbU) ^ (vlSelf->__Vtogcov__in2 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->__Vtogcov__in2 = ((0xffffffdfU & vlSelf->__Vtogcov__in2) 
                                  | (0x20U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                              >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0xcU) ^ (vlSelf->__Vtogcov__in2 
                            >> 6U)))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->__Vtogcov__in2 = ((0xffffffbfU & vlSelf->__Vtogcov__in2) 
                                  | (0x40U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                              >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0xdU) ^ (vlSelf->__Vtogcov__in2 
                            >> 7U)))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->__Vtogcov__in2 = ((0xffffff7fU & vlSelf->__Vtogcov__in2) 
                                  | (0x80U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                              >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0xeU) ^ (vlSelf->__Vtogcov__in2 
                            >> 8U)))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->__Vtogcov__in2 = ((0xfffffeffU & vlSelf->__Vtogcov__in2) 
                                  | (0x100U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                               >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0xfU) ^ (vlSelf->__Vtogcov__in2 
                            >> 9U)))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->__Vtogcov__in2 = ((0xfffffdffU & vlSelf->__Vtogcov__in2) 
                                  | (0x200U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                               >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x10U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->__Vtogcov__in2 = ((0xfffffbffU & vlSelf->__Vtogcov__in2) 
                                  | (0x400U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                               >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x11U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->__Vtogcov__in2 = ((0xfffff7ffU & vlSelf->__Vtogcov__in2) 
                                  | (0x800U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                               >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x12U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->__Vtogcov__in2 = ((0xffffefffU & vlSelf->__Vtogcov__in2) 
                                  | (0x1000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x13U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->__Vtogcov__in2 = ((0xffffdfffU & vlSelf->__Vtogcov__in2) 
                                  | (0x2000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x14U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->__Vtogcov__in2 = ((0xffffbfffU & vlSelf->__Vtogcov__in2) 
                                  | (0x4000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x15U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->__Vtogcov__in2 = ((0xffff7fffU & vlSelf->__Vtogcov__in2) 
                                  | (0x8000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x16U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->__Vtogcov__in2 = ((0xfffeffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x10000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                 >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x17U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->__Vtogcov__in2 = ((0xfffdffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x20000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                 >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x18U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->__Vtogcov__in2 = ((0xfffbffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x40000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                 >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x19U) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->__Vtogcov__in2 = ((0xfff7ffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x80000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                 >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x1aU) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->__Vtogcov__in2 = ((0xffefffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x100000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                  >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x1bU) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->__Vtogcov__in2 = ((0xffdfffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x200000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                  >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x1cU) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->__Vtogcov__in2 = ((0xffbfffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x400000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                  >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x1dU) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->__Vtogcov__in2 = ((0xff7fffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x800000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                  >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x1eU) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->__Vtogcov__in2 = ((0xfeffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x1000000U & (
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                   >> 6U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 0x1fU) ^ (vlSelf->__Vtogcov__in2 
                             >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->__Vtogcov__in2 = ((0xfdffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x2000000U & (
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                                   >> 6U)));
    }
    if ((1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
               ^ (vlSelf->__Vtogcov__in2 >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->__Vtogcov__in2 = ((0xfbffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x4000000U & (
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                   << 0x1aU)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 1U) ^ (vlSelf->__Vtogcov__in2 >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->__Vtogcov__in2 = ((0xf7ffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x8000000U & (
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                   << 0x1aU)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 2U) ^ (vlSelf->__Vtogcov__in2 >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->__Vtogcov__in2 = ((0xefffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x10000000U & 
                                     (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                      << 0x1aU)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 3U) ^ (vlSelf->__Vtogcov__in2 >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->__Vtogcov__in2 = ((0xdfffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x20000000U & 
                                     (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                      << 0x1aU)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 4U) ^ (vlSelf->__Vtogcov__in2 >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->__Vtogcov__in2 = ((0xbfffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x40000000U & 
                                     (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                      << 0x1aU)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 5U) ^ (vlSelf->__Vtogcov__in2 >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->__Vtogcov__in2 = ((0x7fffffffU & vlSelf->__Vtogcov__in2) 
                                  | (0x80000000U & 
                                     (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                      << 0x1aU)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 8U) ^ vlSelf->__Vtogcov__in3))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->__Vtogcov__in3 = ((0xfffffffeU & vlSelf->__Vtogcov__in3) 
                                  | (1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                           >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 9U) ^ (vlSelf->__Vtogcov__in3 >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->__Vtogcov__in3 = ((0xfffffffdU & vlSelf->__Vtogcov__in3) 
                                  | (2U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                           >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0xaU) ^ (vlSelf->__Vtogcov__in3 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->__Vtogcov__in3 = ((0xfffffffbU & vlSelf->__Vtogcov__in3) 
                                  | (4U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                           >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0xbU) ^ (vlSelf->__Vtogcov__in3 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->__Vtogcov__in3 = ((0xfffffff7U & vlSelf->__Vtogcov__in3) 
                                  | (8U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                           >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0xcU) ^ (vlSelf->__Vtogcov__in3 
                            >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->__Vtogcov__in3 = ((0xffffffefU & vlSelf->__Vtogcov__in3) 
                                  | (0x10U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                              >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0xdU) ^ (vlSelf->__Vtogcov__in3 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->__Vtogcov__in3 = ((0xffffffdfU & vlSelf->__Vtogcov__in3) 
                                  | (0x20U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                              >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0xeU) ^ (vlSelf->__Vtogcov__in3 
                            >> 6U)))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->__Vtogcov__in3 = ((0xffffffbfU & vlSelf->__Vtogcov__in3) 
                                  | (0x40U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                              >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0xfU) ^ (vlSelf->__Vtogcov__in3 
                            >> 7U)))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->__Vtogcov__in3 = ((0xffffff7fU & vlSelf->__Vtogcov__in3) 
                                  | (0x80U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                              >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x10U) ^ (vlSelf->__Vtogcov__in3 
                             >> 8U)))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->__Vtogcov__in3 = ((0xfffffeffU & vlSelf->__Vtogcov__in3) 
                                  | (0x100U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                               >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x11U) ^ (vlSelf->__Vtogcov__in3 
                             >> 9U)))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->__Vtogcov__in3 = ((0xfffffdffU & vlSelf->__Vtogcov__in3) 
                                  | (0x200U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                               >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x12U) ^ (vlSelf->__Vtogcov__in3 
                             >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->__Vtogcov__in3 = ((0xfffffbffU & vlSelf->__Vtogcov__in3) 
                                  | (0x400U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                               >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x13U) ^ (vlSelf->__Vtogcov__in3 
                             >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->__Vtogcov__in3 = ((0xfffff7ffU & vlSelf->__Vtogcov__in3) 
                                  | (0x800U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                               >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x14U) ^ (vlSelf->__Vtogcov__in3 
                             >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->__Vtogcov__in3 = ((0xffffefffU & vlSelf->__Vtogcov__in3) 
                                  | (0x1000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x15U) ^ (vlSelf->__Vtogcov__in3 
                             >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->__Vtogcov__in3 = ((0xffffdfffU & vlSelf->__Vtogcov__in3) 
                                  | (0x2000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x16U) ^ (vlSelf->__Vtogcov__in3 
                             >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelf->__Vtogcov__in3 = ((0xffffbfffU & vlSelf->__Vtogcov__in3) 
                                  | (0x4000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x17U) ^ (vlSelf->__Vtogcov__in3 
                             >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelf->__Vtogcov__in3 = ((0xffff7fffU & vlSelf->__Vtogcov__in3) 
                                  | (0x8000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x18U) ^ (vlSelf->__Vtogcov__in3 
                             >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->__Vtogcov__in3 = ((0xfffeffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x10000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                 >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x19U) ^ (vlSelf->__Vtogcov__in3 
                             >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->__Vtogcov__in3 = ((0xfffdffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x20000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                 >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x1aU) ^ (vlSelf->__Vtogcov__in3 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->__Vtogcov__in3 = ((0xfffbffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x40000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                 >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x1bU) ^ (vlSelf->__Vtogcov__in3 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->__Vtogcov__in3 = ((0xfff7ffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x80000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                 >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x1cU) ^ (vlSelf->__Vtogcov__in3 
                             >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->__Vtogcov__in3 = ((0xffefffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x100000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                  >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x1dU) ^ (vlSelf->__Vtogcov__in3 
                             >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->__Vtogcov__in3 = ((0xffdfffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x200000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                  >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x1eU) ^ (vlSelf->__Vtogcov__in3 
                             >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->__Vtogcov__in3 = ((0xffbfffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x400000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                  >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                >> 0x1fU) ^ (vlSelf->__Vtogcov__in3 
                             >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->__Vtogcov__in3 = ((0xff7fffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x800000U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                                  >> 8U)));
    }
    if ((1U & (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
               ^ (vlSelf->__Vtogcov__in3 >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->__Vtogcov__in3 = ((0xfeffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x1000000U & (
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                                                   << 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                >> 1U) ^ (vlSelf->__Vtogcov__in3 >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->__Vtogcov__in3 = ((0xfdffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x2000000U & (
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                                                   << 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                >> 2U) ^ (vlSelf->__Vtogcov__in3 >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->__Vtogcov__in3 = ((0xfbffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x4000000U & (
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                                                   << 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                >> 3U) ^ (vlSelf->__Vtogcov__in3 >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->__Vtogcov__in3 = ((0xf7ffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x8000000U & (
                                                   vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                                                   << 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                >> 4U) ^ (vlSelf->__Vtogcov__in3 >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->__Vtogcov__in3 = ((0xefffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x10000000U & 
                                     (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                                      << 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                >> 5U) ^ (vlSelf->__Vtogcov__in3 >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->__Vtogcov__in3 = ((0xdfffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x20000000U & 
                                     (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                                      << 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                >> 6U) ^ (vlSelf->__Vtogcov__in3 >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->__Vtogcov__in3 = ((0xbfffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x40000000U & 
                                     (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                                      << 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                >> 7U) ^ (vlSelf->__Vtogcov__in3 >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->__Vtogcov__in3 = ((0x7fffffffU & vlSelf->__Vtogcov__in3) 
                                  | (0x80000000U & 
                                     (vlSymsp->TOP.OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                                      << 0x18U)));
    }
    if ((1U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->__Vtogcov__out = ((0xfffffffeU & vlSelf->__Vtogcov__out) 
                                  | (1U & vlSelf->out));
    }
    if ((2U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->__Vtogcov__out = ((0xfffffffdU & vlSelf->__Vtogcov__out) 
                                  | (2U & vlSelf->out));
    }
    if ((4U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->__Vtogcov__out = ((0xfffffffbU & vlSelf->__Vtogcov__out) 
                                  | (4U & vlSelf->out));
    }
    if ((8U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->__Vtogcov__out = ((0xfffffff7U & vlSelf->__Vtogcov__out) 
                                  | (8U & vlSelf->out));
    }
    if ((0x10U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->__Vtogcov__out = ((0xffffffefU & vlSelf->__Vtogcov__out) 
                                  | (0x10U & vlSelf->out));
    }
    if ((0x20U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->__Vtogcov__out = ((0xffffffdfU & vlSelf->__Vtogcov__out) 
                                  | (0x20U & vlSelf->out));
    }
    if ((0x40U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->__Vtogcov__out = ((0xffffffbfU & vlSelf->__Vtogcov__out) 
                                  | (0x40U & vlSelf->out));
    }
    if ((0x80U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->__Vtogcov__out = ((0xffffff7fU & vlSelf->__Vtogcov__out) 
                                  | (0x80U & vlSelf->out));
    }
    if ((0x100U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->__Vtogcov__out = ((0xfffffeffU & vlSelf->__Vtogcov__out) 
                                  | (0x100U & vlSelf->out));
    }
    if ((0x200U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->__Vtogcov__out = ((0xfffffdffU & vlSelf->__Vtogcov__out) 
                                  | (0x200U & vlSelf->out));
    }
    if ((0x400U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->__Vtogcov__out = ((0xfffffbffU & vlSelf->__Vtogcov__out) 
                                  | (0x400U & vlSelf->out));
    }
    if ((0x800U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->__Vtogcov__out = ((0xfffff7ffU & vlSelf->__Vtogcov__out) 
                                  | (0x800U & vlSelf->out));
    }
    if ((0x1000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->__Vtogcov__out = ((0xffffefffU & vlSelf->__Vtogcov__out) 
                                  | (0x1000U & vlSelf->out));
    }
    if ((0x2000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->__Vtogcov__out = ((0xffffdfffU & vlSelf->__Vtogcov__out) 
                                  | (0x2000U & vlSelf->out));
    }
    if ((0x4000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->__Vtogcov__out = ((0xffffbfffU & vlSelf->__Vtogcov__out) 
                                  | (0x4000U & vlSelf->out));
    }
    if ((0x8000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelf->__Vtogcov__out = ((0xffff7fffU & vlSelf->__Vtogcov__out) 
                                  | (0x8000U & vlSelf->out));
    }
    if ((0x10000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelf->__Vtogcov__out = ((0xfffeffffU & vlSelf->__Vtogcov__out) 
                                  | (0x10000U & vlSelf->out));
    }
    if ((0x20000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelf->__Vtogcov__out = ((0xfffdffffU & vlSelf->__Vtogcov__out) 
                                  | (0x20000U & vlSelf->out));
    }
    if ((0x40000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelf->__Vtogcov__out = ((0xfffbffffU & vlSelf->__Vtogcov__out) 
                                  | (0x40000U & vlSelf->out));
    }
    if ((0x80000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelf->__Vtogcov__out = ((0xfff7ffffU & vlSelf->__Vtogcov__out) 
                                  | (0x80000U & vlSelf->out));
    }
    if ((0x100000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelf->__Vtogcov__out = ((0xffefffffU & vlSelf->__Vtogcov__out) 
                                  | (0x100000U & vlSelf->out));
    }
    if ((0x200000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->__Vtogcov__out = ((0xffdfffffU & vlSelf->__Vtogcov__out) 
                                  | (0x200000U & vlSelf->out));
    }
    if ((0x400000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->__Vtogcov__out = ((0xffbfffffU & vlSelf->__Vtogcov__out) 
                                  | (0x400000U & vlSelf->out));
    }
    if ((0x800000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->__Vtogcov__out = ((0xff7fffffU & vlSelf->__Vtogcov__out) 
                                  | (0x800000U & vlSelf->out));
    }
    if ((0x1000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelf->__Vtogcov__out = ((0xfeffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x1000000U & vlSelf->out));
    }
    if ((0x2000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->__Vtogcov__out = ((0xfdffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x2000000U & vlSelf->out));
    }
    if ((0x4000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->__Vtogcov__out = ((0xfbffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x4000000U & vlSelf->out));
    }
    if ((0x8000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->__Vtogcov__out = ((0xf7ffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x8000000U & vlSelf->out));
    }
    if ((0x10000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelf->__Vtogcov__out = ((0xefffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x10000000U & vlSelf->out));
    }
    if ((0x20000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelf->__Vtogcov__out = ((0xdfffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x20000000U & vlSelf->out));
    }
    if ((0x40000000U & (vlSelf->out ^ vlSelf->__Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelf->__Vtogcov__out = ((0xbfffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x40000000U & vlSelf->out));
    }
    if (((vlSelf->out ^ vlSelf->__Vtogcov__out) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelf->__Vtogcov__out = ((0x7fffffffU & vlSelf->__Vtogcov__out) 
                                  | (0x80000000U & vlSelf->out));
    }
}
