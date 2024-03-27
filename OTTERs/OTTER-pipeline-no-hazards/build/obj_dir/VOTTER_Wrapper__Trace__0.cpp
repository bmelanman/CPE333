// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOTTER_Wrapper__Syms.h"


void VOTTER_Wrapper___024root__trace_chg_0_sub_0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VOTTER_Wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_chg_0\n"); );
    // Init
    VOTTER_Wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_Wrapper___024root*>(voidSelf);
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VOTTER_Wrapper___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VOTTER_Wrapper___024root__trace_chg_0_sub_0(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_LOW_GOING_HIGH_CLOCKS),8);
        bufp->chgCData(oldp+1,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_HIGH_GOING_LOW_CLOCKS),8);
        bufp->chgCData(oldp+2,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+3,(vlSelf->OTTER_Wrapper__DOT__s_clk));
        bufp->chgBit(oldp+4,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500));
        bufp->chgIData(oldp+5,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+6,(vlSelf->OTTER_Wrapper__DOT__s_interrupt));
        bufp->chgBit(oldp+7,(vlSelf->OTTER_Wrapper__DOT__btn_int));
        bufp->chgBit(oldp+8,(vlSelf->OTTER_Wrapper__DOT__r_vga_we));
        bufp->chgSData(oldp+9,(vlSelf->OTTER_Wrapper__DOT__r_vga_wa),13);
        bufp->chgCData(oldp+10,(vlSelf->OTTER_Wrapper__DOT__r_vga_wd),8);
        bufp->chgBit(oldp+11,(vlSelf->OTTER_Wrapper__DOT__uart_start));
        bufp->chgCData(oldp+12,(vlSelf->OTTER_Wrapper__DOT__uart_data),8);
        bufp->chgIData(oldp+13,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS),32);
        bufp->chgIData(oldp+14,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS),32);
        bufp->chgCData(oldp+15,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count),8);
        bufp->chgBit(oldp+16,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst));
        bufp->chgBit(oldp+17,(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc));
        bufp->chgIData(oldp+18,(vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX.out),32);
        bufp->chgWData(oldp+19,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb),428);
        bufp->chgIData(oldp+33,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2),32);
        bufp->chgIData(oldp+34,(((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])),32);
        bufp->chgBit(oldp+35,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign));
        bufp->chgCData(oldp+36,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size),2);
        bufp->chgIData(oldp+37,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2),32);
        bufp->chgIData(oldp+38,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2),32);
        bufp->chgIData(oldp+39,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer),32);
        bufp->chgIData(oldp+40,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__i),32);
        bufp->chgIData(oldp+41,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__j),32);
        bufp->chgIData(oldp+42,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced),32);
        bufp->chgBit(oldp+43,((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                     >> 5U))));
        bufp->chgCData(oldp+44,((0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                                          >> 0xcU))),5);
        bufp->chgIData(oldp+45,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0]),32);
        bufp->chgIData(oldp+46,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[1]),32);
        bufp->chgIData(oldp+47,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[2]),32);
        bufp->chgIData(oldp+48,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[3]),32);
        bufp->chgIData(oldp+49,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[4]),32);
        bufp->chgIData(oldp+50,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[5]),32);
        bufp->chgIData(oldp+51,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[6]),32);
        bufp->chgIData(oldp+52,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[7]),32);
        bufp->chgIData(oldp+53,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[8]),32);
        bufp->chgIData(oldp+54,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[9]),32);
        bufp->chgIData(oldp+55,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[10]),32);
        bufp->chgIData(oldp+56,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[11]),32);
        bufp->chgIData(oldp+57,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[12]),32);
        bufp->chgIData(oldp+58,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[13]),32);
        bufp->chgIData(oldp+59,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[14]),32);
        bufp->chgIData(oldp+60,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[15]),32);
        bufp->chgIData(oldp+61,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[16]),32);
        bufp->chgIData(oldp+62,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[17]),32);
        bufp->chgIData(oldp+63,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[18]),32);
        bufp->chgIData(oldp+64,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[19]),32);
        bufp->chgIData(oldp+65,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[20]),32);
        bufp->chgIData(oldp+66,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[21]),32);
        bufp->chgIData(oldp+67,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[22]),32);
        bufp->chgIData(oldp+68,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[23]),32);
        bufp->chgIData(oldp+69,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[24]),32);
        bufp->chgIData(oldp+70,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[25]),32);
        bufp->chgIData(oldp+71,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[26]),32);
        bufp->chgIData(oldp+72,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[27]),32);
        bufp->chgIData(oldp+73,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[28]),32);
        bufp->chgIData(oldp+74,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[29]),32);
        bufp->chgIData(oldp+75,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[30]),32);
        bufp->chgIData(oldp+76,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                  << 0x1aU) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                               >> 6U))),32);
        bufp->chgIData(oldp+77,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[8U] 
                                  << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[7U] 
                                               >> 8U))),32);
        bufp->chgCData(oldp+78,((3U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                                       >> 3U))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+79,(vlSelf->OTTER_Wrapper__DOT__r_SSEG),16);
        bufp->chgIData(oldp+80,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                                  << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+81,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                  << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                               >> 8U))),32);
        bufp->chgBit(oldp+82,(vlSelf->OTTER_Wrapper__DOT__IOBUS_wr));
        bufp->chgCData(oldp+83,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel),3);
        bufp->chgIData(oldp+84,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in),32);
        bufp->chgIData(oldp+85,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out),32);
        bufp->chgIData(oldp+86,(((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)),32);
        bufp->chgIData(oldp+87,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc),32);
        bufp->chgIData(oldp+88,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc),32);
        bufp->chgIData(oldp+89,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc),32);
        bufp->chgIData(oldp+90,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir),32);
        bufp->chgWData(oldp+91,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de),428);
        bufp->chgWData(oldp+105,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex),428);
        bufp->chgWData(oldp+119,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem),428);
        bufp->chgBit(oldp+133,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG));
        bufp->chgBit(oldp+134,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluA_sel));
        bufp->chgBit(oldp+135,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_en));
        bufp->chgBit(oldp+136,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_write));
        bufp->chgBit(oldp+137,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_read2));
        bufp->chgCData(oldp+138,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel),2);
        bufp->chgCData(oldp+139,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_sel),2);
        bufp->chgCData(oldp+140,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun),4);
        bufp->chgIData(oldp+141,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1),32);
        bufp->chgIData(oldp+142,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2),32);
        bufp->chgIData(oldp+143,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.out),32);
        bufp->chgIData(oldp+145,((0xfffff000U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                                  << 0x14U) 
                                                 | (0xff000U 
                                                    & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                       >> 0xcU))))),32);
        bufp->chgIData(oldp+146,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd),32);
        bufp->chgIData(oldp+147,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd),32);
        bufp->chgIData(oldp+148,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd),32);
        bufp->chgIData(oldp+149,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd),32);
        bufp->chgIData(oldp+150,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res),32);
        bufp->chgIData(oldp+151,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]),32);
        bufp->chgIData(oldp+152,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                   << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+153,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                   << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+154,((0xfU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+155,((0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                           >> 5U))),7);
        bufp->chgCData(oldp+156,((7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                        >> 2U))),3);
        bufp->chgIData(oldp+157,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]),32);
        bufp->chgIData(oldp+158,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]),32);
        bufp->chgIData(oldp+159,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]),32);
        bufp->chgIData(oldp+160,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]),32);
        bufp->chgBit(oldp+161,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_eq));
        bufp->chgBit(oldp+162,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_lt));
        bufp->chgBit(oldp+163,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu));
        bufp->chgBit(oldp+164,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_cond));
        bufp->chgCData(oldp+165,(((0U == (7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                                >> 2U)))
                                   ? 5U : 0U)),3);
        bufp->chgCData(oldp+166,((0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                           >> 5U))),7);
        bufp->chgCData(oldp+167,((7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                        >> 2U))),3);
        bufp->chgCData(oldp+168,((0x7fU & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                            << 5U) 
                                           | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                                              >> 0x1bU)))),7);
        bufp->chgIData(oldp+169,(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                   << 0x14U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                >> 0xcU))),32);
        bufp->chgBit(oldp+170,((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                      >> 6U))));
        bufp->chgBit(oldp+171,((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                      >> 7U))));
        bufp->chgSData(oldp+172,((0x3fffU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                                             >> 2U))),14);
        bufp->chgSData(oldp+173,((0x3fffU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                             >> 0xaU))),14);
        bufp->chgBit(oldp+174,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memWrite2));
        bufp->chgCData(oldp+175,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA),4);
        bufp->chgBit(oldp+176,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access1));
        bufp->chgBit(oldp+177,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access2));
        bufp->chgCData(oldp+178,((0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+179,((0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                                           >> 0x11U))),5);
        bufp->chgSData(oldp+180,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val),16);
        bufp->chgCData(oldp+181,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS),4);
        bufp->chgCData(oldp+182,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS),4);
        bufp->chgCData(oldp+183,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS),4);
        bufp->chgCData(oldp+184,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES),4);
        bufp->chgIData(oldp+185,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[1U]),32);
        bufp->chgIData(oldp+186,(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[5U]),32);
    }
    bufp->chgBit(oldp+187,(vlSelf->CLK));
    bufp->chgBit(oldp+188,(vlSelf->BTNL));
    bufp->chgBit(oldp+189,(vlSelf->BTNC));
    bufp->chgSData(oldp+190,(vlSelf->SWITCHES),16);
    bufp->chgBit(oldp+191,(vlSelf->PS2Clk));
    bufp->chgBit(oldp+192,(vlSelf->PS2Data));
    bufp->chgSData(oldp+193,(vlSelf->LEDS),16);
    bufp->chgCData(oldp+194,(vlSelf->CATHODES),8);
    bufp->chgCData(oldp+195,(vlSelf->ANODES),4);
    bufp->chgCData(oldp+196,(vlSelf->VGA_RGB),8);
    bufp->chgBit(oldp+197,(vlSelf->VGA_HS));
    bufp->chgBit(oldp+198,(vlSelf->VGA_VS));
    bufp->chgBit(oldp+199,(vlSelf->Tx));
    bufp->chgIData(oldp+200,(vlSelf->OTTER_Wrapper__DOT__IOBUS_in),32);
    bufp->chgCData(oldp+201,(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit),2);
}

void VOTTER_Wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root__trace_cleanup\n"); );
    // Init
    VOTTER_Wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_Wrapper___024root*>(voidSelf);
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
