// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_Wrapper.h for the primary calling header

#include "VOTTER_Wrapper__pch.h"
#include "VOTTER_Wrapper___024root.h"

void VOTTER_Wrapper___024root___ico_sequent__TOP__0(VOTTER_Wrapper___024root* vlSelf);

void VOTTER_Wrapper___024root___eval_ico(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VOTTER_Wrapper___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VOTTER_Wrapper___024root___eval_triggers__ico(VOTTER_Wrapper___024root* vlSelf);

bool VOTTER_Wrapper___024root___eval_phase__ico(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VOTTER_Wrapper___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VOTTER_Wrapper___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VOTTER_Wrapper___024root___eval_act(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_act\n"); );
}

void VOTTER_Wrapper___024root___eval_triggers__act(VOTTER_Wrapper___024root* vlSelf);

bool VOTTER_Wrapper___024root___eval_phase__act(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VOTTER_Wrapper___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VOTTER_Wrapper___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VOTTER_Wrapper___024root___eval_nba(VOTTER_Wrapper___024root* vlSelf);

bool VOTTER_Wrapper___024root___eval_phase__nba(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VOTTER_Wrapper___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_Wrapper___024root___dump_triggers__ico(VOTTER_Wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_Wrapper___024root___dump_triggers__nba(VOTTER_Wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_Wrapper___024root___dump_triggers__act(VOTTER_Wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void VOTTER_Wrapper___024root___eval(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VOTTER_Wrapper___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../OTTER_Wrapper.sv", 23, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VOTTER_Wrapper___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VOTTER_Wrapper___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../OTTER_Wrapper.sv", 23, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VOTTER_Wrapper___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../OTTER_Wrapper.sv", 23, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VOTTER_Wrapper___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VOTTER_Wrapper___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VOTTER_Wrapper___024root___eval_debug_assertions(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->BTNL & 0xfeU))) {
        Verilated::overWidthError("BTNL");}
    if (VL_UNLIKELY((vlSelf->BTNC & 0xfeU))) {
        Verilated::overWidthError("BTNC");}
    if (VL_UNLIKELY((vlSelf->PS2Clk & 0xfeU))) {
        Verilated::overWidthError("PS2Clk");}
    if (VL_UNLIKELY((vlSelf->PS2Data & 0xfeU))) {
        Verilated::overWidthError("PS2Data");}
}
#endif  // VL_DEBUG
