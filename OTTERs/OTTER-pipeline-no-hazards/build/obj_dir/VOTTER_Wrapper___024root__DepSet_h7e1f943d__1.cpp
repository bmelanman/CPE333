// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_Wrapper.h for the primary calling header

#include "VOTTER_Wrapper__pch.h"
#include "VOTTER_Wrapper__Syms.h"
#include "VOTTER_Wrapper___024root.h"

VL_INLINE_OPT void VOTTER_Wrapper___024root___nba_sequent__TOP__5(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___nba_sequent__TOP__5\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (1U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((2U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (2U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((4U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (4U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((8U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (8U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x10U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x10U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x20U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x20U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x40U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x40U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x80U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x80U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x100U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x100U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x200U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x200U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x400U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x400U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x800U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x800U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x1000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x1000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x2000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x2000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x4000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x4000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x8000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x8000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x10000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x10000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x20000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x20000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x40000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x40000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x80000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x80000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x100000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x100000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x200000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x200000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x400000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x400000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x800000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x800000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x1000000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x1000000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x2000000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x2000000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x4000000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x4000000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x8000000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x8000000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x10000000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x10000000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x20000000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x20000000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if ((0x40000000U & (vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x40000000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
    if (((vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2) 
               | (0x80000000U & vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out));
    }
}

void VOTTER_Wrapper___024root___nba_sequent__TOP__0(VOTTER_Wrapper___024root* vlSelf);
void VOTTER_Wrapper___024root___nba_sequent__TOP__1(VOTTER_Wrapper___024root* vlSelf);
void VOTTER_Wrapper_Mult4to1___nba_sequent__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX__0(VOTTER_Wrapper_Mult4to1* vlSelf);
void VOTTER_Wrapper___024root___nba_sequent__TOP__2(VOTTER_Wrapper___024root* vlSelf);
void VOTTER_Wrapper___024root___nba_sequent__TOP__3(VOTTER_Wrapper___024root* vlSelf);
void VOTTER_Wrapper___024root___nba_sequent__TOP__4(VOTTER_Wrapper___024root* vlSelf);
void VOTTER_Wrapper_Mult4to1___nba_sequent__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX__0(VOTTER_Wrapper_Mult4to1* vlSelf);

void VOTTER_Wrapper___024root___eval_nba(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VOTTER_Wrapper___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VOTTER_Wrapper___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VOTTER_Wrapper_Mult4to1___nba_sequent__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX__0((&vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX));
        VOTTER_Wrapper___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VOTTER_Wrapper___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VOTTER_Wrapper___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VOTTER_Wrapper_Mult4to1___nba_sequent__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX__0((&vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX));
        VOTTER_Wrapper___024root___nba_sequent__TOP__5(vlSelf);
    }
}
