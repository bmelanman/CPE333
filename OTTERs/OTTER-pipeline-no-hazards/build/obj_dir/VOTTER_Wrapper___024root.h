// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VOTTER_Wrapper.h for the primary calling header

#ifndef VERILATED_VOTTER_WRAPPER___024ROOT_H_
#define VERILATED_VOTTER_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class VOTTER_Wrapper_Mult4to1;


class VOTTER_Wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) VOTTER_Wrapper___024root final : public VerilatedModule {
  public:
    // CELLS
    VOTTER_Wrapper_Mult4to1* __PVT__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX;
    VOTTER_Wrapper_Mult4to1* __PVT__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        CData/*0:0*/ OTTER_Wrapper__DOT__s_clk;
        CData/*0:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500;
        VL_IN8(BTNL,0,0);
        VL_IN8(BTNC,0,0);
        VL_IN8(PS2Clk,0,0);
        VL_IN8(PS2Data,0,0);
        VL_OUT8(CATHODES,7,0);
        VL_OUT8(ANODES,3,0);
        VL_OUT8(VGA_RGB,7,0);
        VL_OUT8(VGA_HS,0,0);
        VL_OUT8(VGA_VS,0,0);
        VL_OUT8(Tx,0,0);
        CData/*0:0*/ OTTER_Wrapper__DOT__s_load;
        CData/*0:0*/ OTTER_Wrapper__DOT__s_interrupt;
        CData/*0:0*/ OTTER_Wrapper__DOT__keyboard_int;
        CData/*0:0*/ OTTER_Wrapper__DOT__btn_int;
        CData/*0:0*/ OTTER_Wrapper__DOT__r_vga_we;
        CData/*7:0*/ OTTER_Wrapper__DOT__r_vga_wd;
        CData/*7:0*/ OTTER_Wrapper__DOT__r_vga_rd;
        CData/*0:0*/ OTTER_Wrapper__DOT__uart_start;
        CData/*0:0*/ OTTER_Wrapper__DOT__uart_ready;
        CData/*7:0*/ OTTER_Wrapper__DOT__uart_data;
        CData/*7:0*/ OTTER_Wrapper__DOT__s_scancode;
        CData/*0:0*/ OTTER_Wrapper__DOT__IOBUS_wr;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__CLK;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__BTNL;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__BTNC;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__PS2Clk;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__PS2Data;
        CData/*7:0*/ OTTER_Wrapper__DOT____Vtogcov__CATHODES;
        CData/*3:0*/ OTTER_Wrapper__DOT____Vtogcov__ANODES;
        CData/*7:0*/ OTTER_Wrapper__DOT____Vtogcov__VGA_RGB;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__VGA_HS;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__VGA_VS;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__Tx;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__s_clk;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__s_load;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__s_interrupt;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__keyboard_int;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__btn_int;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__r_vga_we;
        CData/*7:0*/ OTTER_Wrapper__DOT____Vtogcov__r_vga_wd;
        CData/*7:0*/ OTTER_Wrapper__DOT____Vtogcov__r_vga_rd;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__uart_start;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__uart_ready;
        CData/*7:0*/ OTTER_Wrapper__DOT____Vtogcov__uart_data;
        CData/*7:0*/ OTTER_Wrapper__DOT____Vtogcov__s_scancode;
        CData/*0:0*/ OTTER_Wrapper__DOT____Vtogcov__IOBUS_wr;
        CData/*2:0*/ OTTER_Wrapper__DOT__MCU__DOT__pc_sel;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_sign;
        CData/*1:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_size;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_aluA_sel;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_en;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_mem_write;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_mem_read2;
        CData/*1:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel;
        CData/*1:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_sel;
        CData/*3:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_write;
        CData/*2:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_sign;
        CData/*1:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_size;
    };
    struct {
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ERR_FLAG;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluA_sel;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_en;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_mem_write;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_mem_read2;
        CData/*1:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluB_sel;
        CData/*1:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_sel;
        CData/*3:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_EN;
        CData/*4:0*/ OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR;
        CData/*4:0*/ OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1;
        CData/*4:0*/ OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT__brn_cond;
        CData/*6:0*/ OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW;
        CData/*2:0*/ OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3;
        CData/*6:0*/ OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__brn_cond;
        CData/*3:0*/ OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_eq;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_lt;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_cond;
        CData/*6:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW;
        CData/*2:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_eq;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_lt;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_ltu;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_cond;
        CData/*2:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign;
        CData/*1:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memWrite2;
        CData/*3:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access1;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access2;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__MEM_READ2;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__MEM_WRITE2;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_sign;
        CData/*1:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_size;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memWrite2;
        CData/*3:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__illegal_mem_access1;
        CData/*0:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__illegal_mem_access2;
        CData/*7:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vlvbound_h487b1dc6__0;
        CData/*7:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vlvbound_h487b1dc6__1;
        CData/*7:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vlvbound_h487b1dc6__2;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES;
        CData/*1:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit;
        CData/*0:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__s_clk_500;
        CData/*1:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__r_disp_digit;
        CData/*0:0*/ OTTER_Wrapper__DOT__DB__DOT__BTN;
        CData/*7:0*/ OTTER_Wrapper__DOT__DB__DOT__c_LOW_GOING_HIGH_CLOCKS;
        CData/*7:0*/ OTTER_Wrapper__DOT__DB__DOT__c_HIGH_GOING_LOW_CLOCKS;
        CData/*7:0*/ OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS;
        CData/*7:0*/ OTTER_Wrapper__DOT__DB__DOT__s_db_count;
        CData/*0:0*/ OTTER_Wrapper__DOT__DB__DOT__s_count_rst;
        CData/*0:0*/ OTTER_Wrapper__DOT__DB__DOT__s_count_inc;
    };
    struct {
        CData/*0:0*/ OTTER_Wrapper__DOT__DB__DOT____Vtogcov__BTN;
        CData/*7:0*/ OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count;
        CData/*0:0*/ OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_count_rst;
        CData/*0:0*/ OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_count_inc;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__s_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(SWITCHES,15,0);
        VL_OUT16(LEDS,15,0);
        SData/*12:0*/ OTTER_Wrapper__DOT__r_vga_wa;
        SData/*15:0*/ OTTER_Wrapper__DOT__r_SSEG;
        SData/*15:0*/ OTTER_Wrapper__DOT____Vtogcov__SWITCHES;
        SData/*15:0*/ OTTER_Wrapper__DOT____Vtogcov__LEDS;
        SData/*12:0*/ OTTER_Wrapper__DOT____Vtogcov__r_vga_wa;
        SData/*15:0*/ OTTER_Wrapper__DOT____Vtogcov__r_SSEG;
        SData/*15:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val;
        SData/*15:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val;
        IData/*31:0*/ OTTER_Wrapper__DOT__IOBUS_in;
        IData/*31:0*/ OTTER_Wrapper__DOT____Vtogcov__IOBUS_out;
        IData/*31:0*/ OTTER_Wrapper__DOT____Vtogcov__IOBUS_in;
        IData/*31:0*/ OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__pc_in;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__pc_out;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__jalr_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__jal_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__ir;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_rs1;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_rs2;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_I_immd;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_S_immd;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_B_immd;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__de_J_immd;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__int_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__reg_wb_data;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs2;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B;
    };
    struct {
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__i;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__j;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer;
        IData/*31:0*/ OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced;
        IData/*19:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter;
        IData/*19:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter;
        IData/*31:0*/ OTTER_Wrapper__DOT__DB__DOT__NS;
        IData/*31:0*/ OTTER_Wrapper__DOT__DB__DOT__PS;
        IData/*31:0*/ __Vdly__OTTER_Wrapper__DOT__MCU__DOT__ir;
        IData/*31:0*/ __VactIterCount;
        VlWide<14>/*427:0*/ OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de;
        VlWide<14>/*427:0*/ OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex;
        VlWide<14>/*427:0*/ OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem;
        VlWide<14>/*427:0*/ OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb;
        VlUnpacked<IData/*31:0*/, 31> OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers;
        VlUnpacked<IData/*31:0*/, 16383> OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memory;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VOTTER_Wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    VOTTER_Wrapper___024root(VOTTER_Wrapper__Syms* symsp, const char* v__name);
    ~VOTTER_Wrapper___024root();
    VL_UNCOPYABLE(VOTTER_Wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
