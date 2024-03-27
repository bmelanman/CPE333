// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOTTER_Wrapper__Syms.h"


VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_init_sub__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX__0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_init_sub__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX__0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_init_sub__TOP__0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+188,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"BTNL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"BTNC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"SWITCHES",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+192,0,"PS2Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"PS2Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"LEDS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+195,0,"CATHODES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+196,0,"ANODES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"VGA_RGB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+198,0,"VGA_HS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"VGA_VS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"Tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OTTER_Wrapper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"BTNL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"BTNC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"SWITCHES",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+192,0,"PS2Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"PS2Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"LEDS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+195,0,"CATHODES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+196,0,"ANODES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"VGA_RGB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+198,0,"VGA_HS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"VGA_VS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"Tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"SWITCHES_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"VGA_READ_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"LEDS_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"SSEG_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"VGA_ADDR_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"VGA_COLOR_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"UART_DATA_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"UART_RDY_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"KEYBOARD_AD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"s_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"s_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"s_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"s_interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"keyboard_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"btn_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"r_vga_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"r_vga_wa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+11,0,"r_vga_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"r_vga_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"r_SSEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+12,0,"uart_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"uart_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"uart_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"s_scancode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"IOBUS_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"IOBUS_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"IOBUS_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"IOBUS_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"BTN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"DB_BTN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"c_LOW_GOING_HIGH_CLOCKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"c_HIGH_GOING_LOW_CLOCKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"c_ONE_SHOT_CLOCKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"NS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"PS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+16,0,"s_db_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"s_count_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"s_count_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("MCU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"INTR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"IOBUS_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"IOBUS_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"IOBUS_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"IOBUS_WR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+85,0,"pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"jalr_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"branch_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"jal_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"int_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"mepc_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"mem_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"mem_read1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"mem_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"reg_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+92,0,"pipe_if_de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 427,0);
    tracep->declArray(c+106,0,"pipe_de_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 427,0);
    tracep->declArray(c+120,0,"pipe_ex_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 427,0);
    tracep->declArray(c+20,0,"pipe_mem_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 427,0);
    tracep->declBit(c+134,0,"ERR_FLAG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"de_aluA_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"de_rf_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"de_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"de_mem_read2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"de_aluB_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,0,"de_rf_wr_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"de_alu_fun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+142,0,"de_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"de_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"de_alu_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"de_alu_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"de_U_immd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"de_I_immd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"de_S_immd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"de_B_immd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"de_J_immd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ALU_SRC_B_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    VOTTER_Wrapper___024root__trace_init_sub__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+151,0,"ex_alu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"m_mem_dout2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"wb_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RF_WB_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    VOTTER_Wrapper___024root__trace_init_sub__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ALU_SRC_A_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+135,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"PC_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"PC_RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"PC_LD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"PC_DIN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"PC_CNT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PC_MUX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+87,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"in4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"in5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+85,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"ALU_SRC_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"ALU_SRC_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"ALU_FUN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+151,0,"ALU_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"ALU_SIN_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"ALU_SIN_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("branch_cond_addr_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+156,0,"OPCODE_RAW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+157,0,"FUNC3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+158,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"RS1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"RS2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"I_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"J_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"B_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"INT_TAKEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"PC_SRC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"JALR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"BRANCH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"JAL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"br_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"br_lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"br_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"br_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"func3_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"OPCODE_RAW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+168,0,"FUNC3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+169,0,"FUNC7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+135,0,"ALU_SRC_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"ALU_SRC_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"ALU_FUN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+140,0,"RF_WR_SEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+136,0,"RF_WR_EN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"MEM_WRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"MEM_READ2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"OPCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+222,0,"brn_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("immd_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"IR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"U_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"I_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"S_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"B_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"J_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_singlecycle_dualport", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"MEM_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"MEM_SIGN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+218,0,"MEM_READ1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"MEM_ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"MEM_DOUT1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"MEM_READ2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"MEM_WRITE2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"MEM_ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"MEM_DIN2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"MEM_DOUT2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"IO_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"IO_WR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"ERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"ACTUAL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+224,0,"ACTUAL_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+225,0,"NUM_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+226,0,"COL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+36,0,"saved_mem_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"saved_mem_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"saved_mem_addr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"memAddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+174,0,"memAddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+175,0,"memWrite2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"memOut2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"ioIn_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"weA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+42,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+177,0,"illegal_mem_access1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"illegal_mem_access2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"memOut2_sliced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"WR_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"WR_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"WR_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"ADDR1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+180,0,"ADDR2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+142,0,"RS1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"RS2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+46+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("SSG_DISP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"DATA_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+195,0,"CATHODES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+196,0,"ANODES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+181,0,"BCD_Val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"Hex_Val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("BCDMod", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"HEX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+182,0,"THOUSANDS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"HUNDREDS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"TENS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"ONES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+228,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("CathMod", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"HEX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+195,0,"CATHODES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+196,0,"ANODES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"s_clk_500",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"r_disp_digit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"clk_div_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_init_sub__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX__0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_init_sub__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+143,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+145,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_init_sub__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX__0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_init_sub__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+35,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_init_top(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_init_top\n"); );
    // Body
    VOTTER_Wrapper___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VOTTER_Wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VOTTER_Wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_register(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VOTTER_Wrapper___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VOTTER_Wrapper___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VOTTER_Wrapper___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VOTTER_Wrapper___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_const_0_sub_0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_const_0\n"); );
    // Init
    VOTTER_Wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_Wrapper___024root*>(voidSelf);
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VOTTER_Wrapper___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_const_0_sub_0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+203,(0x11000000U),32);
    bufp->fullIData(oldp+204,(0x11040000U),32);
    bufp->fullIData(oldp+205,(0x11080000U),32);
    bufp->fullIData(oldp+206,(0x110c0000U),32);
    bufp->fullIData(oldp+207,(0x11100000U),32);
    bufp->fullIData(oldp+208,(0x11140000U),32);
    bufp->fullIData(oldp+209,(0x11180000U),32);
    bufp->fullIData(oldp+210,(0x111c0000U),32);
    bufp->fullIData(oldp+211,(0x11200000U),32);
    bufp->fullBit(oldp+212,(vlSelf->OTTER_Wrapper__DOT__s_load));
    bufp->fullBit(oldp+213,(vlSelf->OTTER_Wrapper__DOT__keyboard_int));
    bufp->fullCData(oldp+214,(vlSelf->OTTER_Wrapper__DOT__r_vga_rd),8);
    bufp->fullBit(oldp+215,(vlSelf->OTTER_Wrapper__DOT__uart_ready));
    bufp->fullCData(oldp+216,(vlSelf->OTTER_Wrapper__DOT__s_scancode),8);
    bufp->fullBit(oldp+217,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN));
    bufp->fullBit(oldp+218,(1U));
    bufp->fullIData(oldp+219,(0U),32);
    bufp->fullBit(oldp+220,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_sign));
    bufp->fullCData(oldp+221,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size),2);
    bufp->fullBit(oldp+222,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT__brn_cond));
    bufp->fullIData(oldp+223,(0xeU),32);
    bufp->fullIData(oldp+224,(0x4000U),32);
    bufp->fullIData(oldp+225,(4U),32);
    bufp->fullIData(oldp+226,(8U),32);
    bufp->fullBit(oldp+227,(0U));
    bufp->fullIData(oldp+228,(0xffffffffU),32);
}

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_full_0_sub_0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_full_0\n"); );
    // Init
    VOTTER_Wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_Wrapper___024root*>(voidSelf);
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VOTTER_Wrapper___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_full_0_sub_0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_LOW_GOING_HIGH_CLOCKS),8);
    bufp->fullCData(oldp+2,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_HIGH_GOING_LOW_CLOCKS),8);
    bufp->fullCData(oldp+3,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS),8);
    bufp->fullBit(oldp+4,(vlSelf->OTTER_Wrapper__DOT__s_clk));
    bufp->fullBit(oldp+5,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500));
    bufp->fullIData(oldp+6,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter),20);
    bufp->fullBit(oldp+7,(vlSelf->OTTER_Wrapper__DOT__s_interrupt));
    bufp->fullBit(oldp+8,(vlSelf->OTTER_Wrapper__DOT__btn_int));
    bufp->fullBit(oldp+9,(vlSelf->OTTER_Wrapper__DOT__r_vga_we));
    bufp->fullSData(oldp+10,(vlSelf->OTTER_Wrapper__DOT__r_vga_wa),13);
    bufp->fullCData(oldp+11,(vlSelf->OTTER_Wrapper__DOT__r_vga_wd),8);
    bufp->fullBit(oldp+12,(vlSelf->OTTER_Wrapper__DOT__uart_start));
    bufp->fullCData(oldp+13,(vlSelf->OTTER_Wrapper__DOT__uart_data),8);
    bufp->fullIData(oldp+14,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS),32);
    bufp->fullIData(oldp+15,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS),32);
    bufp->fullCData(oldp+16,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count),8);
    bufp->fullBit(oldp+17,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst));
    bufp->fullBit(oldp+18,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc));
    bufp->fullIData(oldp+19,(vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX.out),32);
    bufp->fullWData(oldp+20,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb),428);
    bufp->fullIData(oldp+34,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2),32);
    bufp->fullIData(oldp+35,(((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])),32);
    bufp->fullBit(oldp+36,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign));
    bufp->fullCData(oldp+37,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size),2);
    bufp->fullIData(oldp+38,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2),32);
    bufp->fullIData(oldp+39,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2),32);
    bufp->fullIData(oldp+40,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer),32);
    bufp->fullIData(oldp+41,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__i),32);
    bufp->fullIData(oldp+42,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__j),32);
    bufp->fullIData(oldp+43,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced),32);
    bufp->fullBit(oldp+44,((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                  >> 5U))));
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                                       >> 0xcU))),5);
    bufp->fullIData(oldp+46,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0]),32);
    bufp->fullIData(oldp+47,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[1]),32);
    bufp->fullIData(oldp+48,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[2]),32);
    bufp->fullIData(oldp+49,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[3]),32);
    bufp->fullIData(oldp+50,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[4]),32);
    bufp->fullIData(oldp+51,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[5]),32);
    bufp->fullIData(oldp+52,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[6]),32);
    bufp->fullIData(oldp+53,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[7]),32);
    bufp->fullIData(oldp+54,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[8]),32);
    bufp->fullIData(oldp+55,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[9]),32);
    bufp->fullIData(oldp+56,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[10]),32);
    bufp->fullIData(oldp+57,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[11]),32);
    bufp->fullIData(oldp+58,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[12]),32);
    bufp->fullIData(oldp+59,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[13]),32);
    bufp->fullIData(oldp+60,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[14]),32);
    bufp->fullIData(oldp+61,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[15]),32);
    bufp->fullIData(oldp+62,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[16]),32);
    bufp->fullIData(oldp+63,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[17]),32);
    bufp->fullIData(oldp+64,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[18]),32);
    bufp->fullIData(oldp+65,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[19]),32);
    bufp->fullIData(oldp+66,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[20]),32);
    bufp->fullIData(oldp+67,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[21]),32);
    bufp->fullIData(oldp+68,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[22]),32);
    bufp->fullIData(oldp+69,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[23]),32);
    bufp->fullIData(oldp+70,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[24]),32);
    bufp->fullIData(oldp+71,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[25]),32);
    bufp->fullIData(oldp+72,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[26]),32);
    bufp->fullIData(oldp+73,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[27]),32);
    bufp->fullIData(oldp+74,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[28]),32);
    bufp->fullIData(oldp+75,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[29]),32);
    bufp->fullIData(oldp+76,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[30]),32);
    bufp->fullIData(oldp+77,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                               << 0x1aU) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                            >> 6U))),32);
    bufp->fullIData(oldp+78,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                               << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+79,((3U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                    >> 3U))),2);
    bufp->fullSData(oldp+80,(vlSelf->OTTER_Wrapper__DOT__r_SSEG),16);
    bufp->fullIData(oldp+81,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                               << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+82,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                               << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                            >> 8U))),32);
    bufp->fullBit(oldp+83,(vlSelf->OTTER_Wrapper__DOT__IOBUS_wr));
    bufp->fullCData(oldp+84,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel),3);
    bufp->fullIData(oldp+85,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in),32);
    bufp->fullIData(oldp+86,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out),32);
    bufp->fullIData(oldp+87,(((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)),32);
    bufp->fullIData(oldp+88,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc),32);
    bufp->fullIData(oldp+89,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc),32);
    bufp->fullIData(oldp+90,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc),32);
    bufp->fullIData(oldp+91,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir),32);
    bufp->fullWData(oldp+92,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de),428);
    bufp->fullWData(oldp+106,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex),428);
    bufp->fullWData(oldp+120,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem),428);
    bufp->fullBit(oldp+134,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG));
    bufp->fullBit(oldp+135,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluA_sel));
    bufp->fullBit(oldp+136,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_en));
    bufp->fullBit(oldp+137,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_write));
    bufp->fullBit(oldp+138,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_read2));
    bufp->fullCData(oldp+139,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel),2);
    bufp->fullCData(oldp+140,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_sel),2);
    bufp->fullCData(oldp+141,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun),4);
    bufp->fullIData(oldp+142,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1),32);
    bufp->fullIData(oldp+143,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2),32);
    bufp->fullIData(oldp+144,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out),32);
    bufp->fullIData(oldp+146,((0xfffff000U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                               << 0x14U) 
                                              | (0xff000U 
                                                 & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                    >> 0xcU))))),32);
    bufp->fullIData(oldp+147,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd),32);
    bufp->fullIData(oldp+148,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd),32);
    bufp->fullIData(oldp+149,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd),32);
    bufp->fullIData(oldp+150,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd),32);
    bufp->fullIData(oldp+151,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res),32);
    bufp->fullIData(oldp+152,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]),32);
    bufp->fullIData(oldp+153,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+154,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+155,((0xfU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                       >> 8U))),4);
    bufp->fullCData(oldp+156,((0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                        >> 5U))),7);
    bufp->fullCData(oldp+157,((7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                     >> 2U))),3);
    bufp->fullIData(oldp+158,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]),32);
    bufp->fullIData(oldp+159,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]),32);
    bufp->fullIData(oldp+160,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]),32);
    bufp->fullIData(oldp+161,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]),32);
    bufp->fullBit(oldp+162,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_eq));
    bufp->fullBit(oldp+163,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_lt));
    bufp->fullBit(oldp+164,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu));
    bufp->fullBit(oldp+165,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_cond));
    bufp->fullCData(oldp+166,(((0U == (7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                             >> 2U)))
                                ? 5U : 0U)),3);
    bufp->fullCData(oldp+167,((0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                        >> 5U))),7);
    bufp->fullCData(oldp+168,((7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                     >> 2U))),3);
    bufp->fullCData(oldp+169,((0x7fU & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                         << 5U) | (
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                                                   >> 0x1bU)))),7);
    bufp->fullIData(oldp+170,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                << 0x14U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+171,((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                   >> 6U))));
    bufp->fullBit(oldp+172,((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                   >> 7U))));
    bufp->fullSData(oldp+173,((0x3fffU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                                          >> 2U))),14);
    bufp->fullSData(oldp+174,((0x3fffU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                          >> 0xaU))),14);
    bufp->fullBit(oldp+175,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memWrite2));
    bufp->fullCData(oldp+176,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA),4);
    bufp->fullBit(oldp+177,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access1));
    bufp->fullBit(oldp+178,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access2));
    bufp->fullCData(oldp+179,((0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+180,((0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                                        >> 0x11U))),5);
    bufp->fullSData(oldp+181,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val),16);
    bufp->fullCData(oldp+182,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS),4);
    bufp->fullCData(oldp+183,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS),4);
    bufp->fullCData(oldp+184,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS),4);
    bufp->fullCData(oldp+185,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES),4);
    bufp->fullIData(oldp+186,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]),32);
    bufp->fullIData(oldp+187,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]),32);
    bufp->fullBit(oldp+188,(vlSelf->CLK));
    bufp->fullBit(oldp+189,(vlSelf->BTNL));
    bufp->fullBit(oldp+190,(vlSelf->BTNC));
    bufp->fullSData(oldp+191,(vlSelf->SWITCHES),16);
    bufp->fullBit(oldp+192,(vlSelf->PS2Clk));
    bufp->fullBit(oldp+193,(vlSelf->PS2Data));
    bufp->fullSData(oldp+194,(vlSelf->LEDS),16);
    bufp->fullCData(oldp+195,(vlSelf->CATHODES),8);
    bufp->fullCData(oldp+196,(vlSelf->ANODES),4);
    bufp->fullCData(oldp+197,(vlSelf->VGA_RGB),8);
    bufp->fullBit(oldp+198,(vlSelf->VGA_HS));
    bufp->fullBit(oldp+199,(vlSelf->VGA_VS));
    bufp->fullBit(oldp+200,(vlSelf->Tx));
    bufp->fullIData(oldp+201,(vlSelf->OTTER_Wrapper__DOT__IOBUS_in),32);
    bufp->fullCData(oldp+202,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit),2);
}
