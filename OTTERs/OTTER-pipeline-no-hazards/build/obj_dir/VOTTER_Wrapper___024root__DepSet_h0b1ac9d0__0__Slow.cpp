// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_Wrapper.h for the primary calling header

#include "VOTTER_Wrapper__pch.h"
#include "VOTTER_Wrapper___024root.h"

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_static__TOP(VOTTER_Wrapper___024root* vlSelf);

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_static(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_static\n"); );
    // Body
    VOTTER_Wrapper___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_final(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_Wrapper___024root___dump_triggers__stl(VOTTER_Wrapper___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VOTTER_Wrapper___024root___eval_phase__stl(VOTTER_Wrapper___024root* vlSelf);

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_settle(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VOTTER_Wrapper___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../OTTER_Wrapper.sv", 23, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VOTTER_Wrapper___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_Wrapper___024root___dump_triggers__stl(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_triggers__stl(VOTTER_Wrapper___024root* vlSelf);
VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_stl(VOTTER_Wrapper___024root* vlSelf);

VL_ATTR_COLD bool VOTTER_Wrapper___024root___eval_phase__stl(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VOTTER_Wrapper___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VOTTER_Wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_Wrapper___024root___dump_triggers__ico(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_Wrapper___024root___dump_triggers__act(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge OTTER_Wrapper.s_clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge OTTER_Wrapper.SSG_DISP.CathMod.s_clk_500)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_Wrapper___024root___dump_triggers__nba(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge OTTER_Wrapper.s_clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge OTTER_Wrapper.SSG_DISP.CathMod.s_clk_500)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VOTTER_Wrapper___024root___ctor_var_reset(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->BTNL = VL_RAND_RESET_I(1);
    vlSelf->BTNC = VL_RAND_RESET_I(1);
    vlSelf->SWITCHES = VL_RAND_RESET_I(16);
    vlSelf->PS2Clk = VL_RAND_RESET_I(1);
    vlSelf->PS2Data = VL_RAND_RESET_I(1);
    vlSelf->LEDS = VL_RAND_RESET_I(16);
    vlSelf->CATHODES = VL_RAND_RESET_I(8);
    vlSelf->ANODES = VL_RAND_RESET_I(4);
    vlSelf->VGA_RGB = VL_RAND_RESET_I(8);
    vlSelf->VGA_HS = VL_RAND_RESET_I(1);
    vlSelf->VGA_VS = VL_RAND_RESET_I(1);
    vlSelf->Tx = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__s_clk = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__s_load = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__s_interrupt = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__keyboard_int = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__btn_int = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__r_vga_we = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__r_vga_wa = VL_RAND_RESET_I(13);
    vlSelf->OTTER_Wrapper__DOT__r_vga_wd = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__r_vga_rd = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__r_SSEG = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__uart_start = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__uart_ready = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__uart_data = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__s_scancode = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__IOBUS_in = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__IOBUS_wr = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__CLK = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__BTNL = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__BTNC = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__PS2Clk = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__PS2Data = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_HS = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_VS = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__Tx = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_clk = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_load = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_interrupt = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__keyboard_int = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__btn_int = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_we = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa = VL_RAND_RESET_I(13);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_start = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_ready = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_wr = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_sign = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(428, vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de);
    VL_RAND_RESET_W(428, vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex);
    VL_RAND_RESET_W(428, vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem);
    VL_RAND_RESET_W(428, vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluA_sel = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_en = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_write = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_read2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_sel = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_write = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__int_pc = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_sign = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_size = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__reg_wb_data = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ERR_FLAG = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluA_sel = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_en = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_mem_write = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_mem_read2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluB_sel = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_sel = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_EN = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR = VL_RAND_RESET_I(5);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1 = VL_RAND_RESET_I(5);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2 = VL_RAND_RESET_I(5);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT__brn_cond = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW = VL_RAND_RESET_I(7);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3 = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7 = VL_RAND_RESET_I(7);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__brn_cond = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_eq = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_lt = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_cond = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW = VL_RAND_RESET_I(7);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3 = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_eq = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_lt = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_ltu = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_cond = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memWrite2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16383; ++__Vi0) {
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access1 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__MEM_READ2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__MEM_WRITE2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_sign = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_size = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memWrite2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__illegal_mem_access1 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__illegal_mem_access2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vlvbound_h487b1dc6__0 = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vlvbound_h487b1dc6__1 = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vlvbound_h487b1dc6__2 = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter = VL_RAND_RESET_I(20);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__s_clk_500 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__r_disp_digit = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter = VL_RAND_RESET_I(20);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_LOW_GOING_HIGH_CLOCKS = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_HIGH_GOING_LOW_CLOCKS = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 0;
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS = 0;
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__BTN = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_count_rst = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_count_inc = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__OTTER_Wrapper__DOT__MCU__DOT__ir = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__s_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
