// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_Wrapper.h for the primary calling header

#include "VOTTER_Wrapper__pch.h"
#include "VOTTER_Wrapper__Syms.h"
#include "VOTTER_Wrapper___024root.h"

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_static__TOP(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->OTTER_Wrapper__DOT__s_clk = 0U;
    ++(vlSymsp->__Vcoverage[61]);
    vlSelf->OTTER_Wrapper__DOT__uart_data = 0U;
    ++(vlSymsp->__Vcoverage[122]);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out = 0U;
    ++(vlSymsp->__Vcoverage[906]);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[1U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[2U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[3U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[4U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[5U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[6U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[7U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[8U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[9U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0xaU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0xbU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0xcU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0xdU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0xeU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0xfU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x10U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x11U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x12U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x13U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x14U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x15U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x16U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x17U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x18U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x19U] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x1aU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x1bU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x1cU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x1dU] = 0U;
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers[0x1eU] = 0U;
    ++(vlSymsp->__Vcoverage[927]);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer = 0U;
    ++(vlSymsp->__Vcoverage[1362]);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500 = 0U;
    ++(vlSymsp->__Vcoverage[1503]);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit = 0U;
    ++(vlSymsp->__Vcoverage[1506]);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter = 0U;
    ++(vlSymsp->__Vcoverage[1527]);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_LOW_GOING_HIGH_CLOCKS = 0x19U;
    ++(vlSymsp->__Vcoverage[1606]);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_HIGH_GOING_LOW_CLOCKS = 0x33U;
    ++(vlSymsp->__Vcoverage[1607]);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS = 1U;
    ++(vlSymsp->__Vcoverage[1608]);
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count = 0U;
    ++(vlSymsp->__Vcoverage[1617]);
}

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_initial__TOP(VOTTER_Wrapper___024root* vlSelf);
VL_ATTR_COLD void VOTTER_Wrapper_Mult4to1___eval_initial__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX(VOTTER_Wrapper_Mult4to1* vlSelf);
VL_ATTR_COLD void VOTTER_Wrapper_Mult4to1___eval_initial__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX(VOTTER_Wrapper_Mult4to1* vlSelf);

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_initial(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_initial\n"); );
    // Body
    VOTTER_Wrapper___024root___eval_initial__TOP(vlSelf);
    VOTTER_Wrapper_Mult4to1___eval_initial__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX((&vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX));
    VOTTER_Wrapper_Mult4to1___eval_initial__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX((&vlSymsp->TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX));
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__s_clk__0 
        = vlSelf->OTTER_Wrapper__DOT__s_clk;
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500__0 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500;
}

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_initial__TOP(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    ++(vlSymsp->__Vcoverage[243]);
    ++(vlSymsp->__Vcoverage[510]);
    if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_write)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_write = 1U;
    }
    if ((1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__int_pc)) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__int_pc 
            = (0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__int_pc);
    }
    ++(vlSymsp->__Vcoverage[905]);
    ++(vlSymsp->__Vcoverage[951]);
    ++(vlSymsp->__Vcoverage[959]);
    ++(vlSymsp->__Vcoverage[1016]);
    ++(vlSymsp->__Vcoverage[1098]);
    ++(vlSymsp->__Vcoverage[1372]);
    ++(vlSymsp->__Vcoverage[1448]);
    ++(vlSymsp->__Vcoverage[1451]);
    ++(vlSymsp->__Vcoverage[1456]);
    ++(vlSymsp->__Vcoverage[1474]);
    ++(vlSymsp->__Vcoverage[1475]);
    ++(vlSymsp->__Vcoverage[1497]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1493]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1501]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1495]);
    ++(vlSymsp->__Vcoverage[1499]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1500]);
    ++(vlSymsp->__Vcoverage[1646]);
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x6d6f7279U;
    __Vtemp_1[2U] = 0x725f6d65U;
    __Vtemp_1[3U] = 0x6f747465U;
    VL_READMEM_N(true, 32, 16383, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memory)
                 , 0U, 0x3fffU);
    ++(vlSymsp->__Vcoverage[1367]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_Wrapper___024root___dump_triggers__stl(VOTTER_Wrapper___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VOTTER_Wrapper___024root___eval_triggers__stl(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VOTTER_Wrapper___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 128> VOTTER_Wrapper__ConstPool__TABLE_hc328adb6_0;
extern const VlUnpacked<CData/*0:0*/, 128> VOTTER_Wrapper__ConstPool__TABLE_h03c3adda_0;
extern const VlUnpacked<CData/*0:0*/, 128> VOTTER_Wrapper__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*0:0*/, 128> VOTTER_Wrapper__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*1:0*/, 128> VOTTER_Wrapper__ConstPool__TABLE_h276e9b3c_0;
extern const VlUnpacked<CData/*0:0*/, 512> VOTTER_Wrapper__ConstPool__TABLE_h01624aed_0;
extern const VlUnpacked<CData/*2:0*/, 4096> VOTTER_Wrapper__ConstPool__TABLE_hfde60216_0;

VL_ATTR_COLD void VOTTER_Wrapper___024root___stl_sequent__TOP__0(VOTTER_Wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_Wrapper___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*11:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    if ((0x11000000U != ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                          << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                       >> 8U)))) {
        if ((0x11040000U == ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                              << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                           >> 8U)))) {
            ++(vlSymsp->__Vcoverage[239]);
        }
        if ((0x11040000U != ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                              << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                           >> 8U)))) {
            if ((0x111c0000U != ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                  << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                               >> 8U)))) {
                if ((0x11200000U == ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                      << 0x18U) | (
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                                   >> 8U)))) {
                    ++(vlSymsp->__Vcoverage[241]);
                }
                if ((0x11200000U != ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                      << 0x18U) | (
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                                   >> 8U)))) {
                    ++(vlSymsp->__Vcoverage[242]);
                }
            }
            if ((0x111c0000U == ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                  << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                               >> 8U)))) {
                ++(vlSymsp->__Vcoverage[240]);
            }
        }
    }
    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                  >> 0xbU)))) {
        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                      >> 0xaU)))) {
            if ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                    ++(vlSymsp->__Vcoverage[950]);
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                              >> 8U)))) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                  >> 7U)))) {
                        if ((0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                          >> 5U)))) {
                                ++(vlSymsp->__Vcoverage[950]);
                            }
                            if ((0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                                ++(vlSymsp->__Vcoverage[948]);
                            }
                        }
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                      >> 6U)))) {
                            ++(vlSymsp->__Vcoverage[950]);
                        }
                    }
                    if ((0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                        ++(vlSymsp->__Vcoverage[950]);
                    }
                }
            }
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                          >> 9U)))) {
                ++(vlSymsp->__Vcoverage[950]);
            }
        }
        if ((0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
            if ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                    ++(vlSymsp->__Vcoverage[950]);
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                              >> 8U)))) {
                    if ((0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                        if ((0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                            if ((0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                                ++(vlSymsp->__Vcoverage[949]);
                            }
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                          >> 5U)))) {
                                ++(vlSymsp->__Vcoverage[950]);
                            }
                        }
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                      >> 6U)))) {
                            ++(vlSymsp->__Vcoverage[950]);
                        }
                    }
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                  >> 7U)))) {
                        if ((0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                            if ((0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                                ++(vlSymsp->__Vcoverage[947]);
                            }
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                          >> 5U)))) {
                                ++(vlSymsp->__Vcoverage[950]);
                            }
                        }
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                      >> 6U)))) {
                            ++(vlSymsp->__Vcoverage[950]);
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                          >> 9U)))) {
                ++(vlSymsp->__Vcoverage[950]);
            }
        }
    }
    if ((0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
        if ((0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
            if ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                              >> 8U)))) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                  >> 7U)))) {
                        if ((0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                            if ((0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                                ++(vlSymsp->__Vcoverage[949]);
                            }
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                          >> 5U)))) {
                                ++(vlSymsp->__Vcoverage[950]);
                            }
                        }
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                      >> 6U)))) {
                            ++(vlSymsp->__Vcoverage[950]);
                        }
                    }
                    if ((0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                        ++(vlSymsp->__Vcoverage[950]);
                    }
                }
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])) {
                    ++(vlSymsp->__Vcoverage[950]);
                    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun = 0U;
                } else {
                    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun 
                        = ((0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                            ? 0U : ((0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                     ? ((0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                         ? 9U : 0U)
                                     : 0U));
                }
            } else {
                vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun = 0U;
            }
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                          >> 9U)))) {
                ++(vlSymsp->__Vcoverage[950]);
            }
        } else {
            vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun = 0U;
        }
        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                      >> 0xaU)))) {
            ++(vlSymsp->__Vcoverage[950]);
        }
    } else {
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun 
            = ((0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                ? ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                    ? ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                        ? 0U : ((0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                 ? ((0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                     ? ((0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                         ? 9U : 0U)
                                     : 0U) : ((0x40U 
                                               & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                               ? ((0x20U 
                                                   & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                                   ? 
                                                  ((8U 
                                                    & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                         >> 2U)))
                                                   : 0U)
                                               : 0U)))
                    : 0U) : ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                              ? ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                  ? 0U : ((0x80U & 
                                           vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                           ? 0U : (
                                                   (0x40U 
                                                    & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU])
                                                     ? 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                          >> 2U)))
                                                      ? 
                                                     ((8U 
                                                       & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                          << 3U)) 
                                                      | (7U 
                                                         & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                            >> 2U)))
                                                      : 
                                                     (7U 
                                                      & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 0U)))
                              : 0U));
    }
    if (((0x37U == (0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                             >> 5U))) || (0x17U == 
                                          (0x7fU & 
                                           (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                            >> 5U))))) {
        ++(vlSymsp->__Vcoverage[957]);
    }
    if ((1U & (~ ((0x37U == (0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                      >> 5U))) || (0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                       >> 5U))))))) {
        ++(vlSymsp->__Vcoverage[958]);
    }
    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                  >> 0xbU)))) {
        if ((0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                          >> 9U)))) {
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                    ++(vlSymsp->__Vcoverage[1091]);
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                              >> 8U)))) {
                    ++(vlSymsp->__Vcoverage[1090]);
                }
            }
            if ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                    ++(vlSymsp->__Vcoverage[1089]);
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                              >> 8U)))) {
                    ++(vlSymsp->__Vcoverage[1088]);
                }
            }
        }
        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                      >> 0xaU)))) {
            if ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                    ++(vlSymsp->__Vcoverage[1095]);
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                              >> 8U)))) {
                    ++(vlSymsp->__Vcoverage[1094]);
                }
            }
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                          >> 9U)))) {
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                    ++(vlSymsp->__Vcoverage[1092]);
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                              >> 8U)))) {
                    ++(vlSymsp->__Vcoverage[1085]);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size))) {
        if ((1U != (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size))) {
            if ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size))) {
                ++(vlSymsp->__Vcoverage[1370]);
            }
            if ((2U != (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size))) {
                ++(vlSymsp->__Vcoverage[1371]);
            }
        }
        if ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size))) {
            ++(vlSymsp->__Vcoverage[1369]);
        }
    }
    if ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA 
            = (0xfU & ((IData)(1U) << (3U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                             >> 8U))));
    } else {
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA 
            = (0xfU & ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size))
                        ? ((IData)(3U) << (3U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                                 >> 8U)))
                        : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size))
                            ? 0xfU : 0U)));
    }
    if ((0x11000000U > vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2)) {
        ++(vlSymsp->__Vcoverage[1450]);
    }
    if ((0x11000000U > ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                         << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                      >> 8U)))) {
        ++(vlSymsp->__Vcoverage[1455]);
    }
    if ((0U != (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                 << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
        if ((1U != (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                     << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
            if ((2U != (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                         << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
                if ((4U != (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                             << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
                    if ((5U == (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                                 << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
                        ++(vlSymsp->__Vcoverage[1446]);
                        if ((3U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                            if ((2U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                                if ((1U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                                    ++(vlSymsp->__Vcoverage[1444]);
                                }
                                if ((1U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                                    ++(vlSymsp->__Vcoverage[1445]);
                                }
                            }
                            if ((2U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                                ++(vlSymsp->__Vcoverage[1443]);
                            }
                        }
                        if ((3U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                            ++(vlSymsp->__Vcoverage[1442]);
                        }
                    }
                    if ((5U != (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                                 << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
                        ++(vlSymsp->__Vcoverage[1447]);
                    }
                }
                if ((4U == (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                             << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
                    ++(vlSymsp->__Vcoverage[1441]);
                    if ((3U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                        ++(vlSymsp->__Vcoverage[1437]);
                    }
                    if ((3U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                        if ((2U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                            ++(vlSymsp->__Vcoverage[1438]);
                        }
                        if ((2U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                            if ((1U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                                ++(vlSymsp->__Vcoverage[1439]);
                            }
                            if ((1U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                                ++(vlSymsp->__Vcoverage[1440]);
                            }
                        }
                    }
                }
            }
            if ((2U == (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                         << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
                ++(vlSymsp->__Vcoverage[1436]);
                if ((1U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                    ++(vlSymsp->__Vcoverage[1433]);
                }
                if ((1U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                    if ((0U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                        ++(vlSymsp->__Vcoverage[1434]);
                    }
                    if ((0U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                        ++(vlSymsp->__Vcoverage[1435]);
                    }
                }
            }
        }
        if ((1U == (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                     << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
            ++(vlSymsp->__Vcoverage[1432]);
            if ((3U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                if ((2U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                    if ((1U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                        ++(vlSymsp->__Vcoverage[1430]);
                    }
                    if ((1U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                        ++(vlSymsp->__Vcoverage[1431]);
                    }
                }
                if ((2U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                    ++(vlSymsp->__Vcoverage[1429]);
                }
            }
            if ((3U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                ++(vlSymsp->__Vcoverage[1428]);
            }
        }
    }
    if (((IData)(vlSelf->CLK) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CLK))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__CLK 
            = vlSelf->CLK;
    }
    if (((IData)(vlSelf->BTNL) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__BTNL))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__BTNL 
            = vlSelf->BTNL;
    }
    if (((IData)(vlSelf->BTNC) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__BTNC))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__BTNC 
            = vlSelf->BTNC;
    }
    if (((IData)(vlSelf->PS2Clk) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__PS2Clk))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__PS2Clk 
            = vlSelf->PS2Clk;
    }
    if (((IData)(vlSelf->PS2Data) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__PS2Data))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__PS2Data 
            = vlSelf->PS2Data;
    }
    if (((IData)(vlSelf->VGA_HS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_HS))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_HS 
            = vlSelf->VGA_HS;
    }
    if (((IData)(vlSelf->VGA_VS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_VS))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_VS 
            = vlSelf->VGA_VS;
    }
    if (((IData)(vlSelf->Tx) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__Tx))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__Tx = vlSelf->Tx;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__s_clk) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_clk))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_clk 
            = vlSelf->OTTER_Wrapper__DOT__s_clk;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__s_load) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_load))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_load 
            = vlSelf->OTTER_Wrapper__DOT__s_load;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__keyboard_int) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__keyboard_int))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__keyboard_int 
            = vlSelf->OTTER_Wrapper__DOT__keyboard_int;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_we) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_we))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_we 
            = vlSelf->OTTER_Wrapper__DOT__r_vga_we;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__uart_start) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_start))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_start 
            = vlSelf->OTTER_Wrapper__DOT__uart_start;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__uart_ready) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_ready))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_ready 
            = vlSelf->OTTER_Wrapper__DOT__uart_ready;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_sign) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_sign))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_sign 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_sign;
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                >> 5U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_EN)))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_EN 
            = (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[6U] 
                     >> 5U));
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT__brn_cond) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__brn_cond))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__brn_cond 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT__brn_cond;
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 6U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__MEM_READ2)))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__MEM_READ2 
            = (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                     >> 6U));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 7U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__MEM_WRITE2)))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__MEM_WRITE2 
            = (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                     >> 7U));
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_sign))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_sign 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__s_clk_500))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__s_clk_500 
            = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__BTN))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__BTN 
            = vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN;
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_size)))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_size 
            = ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_size)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_size)))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_size 
            = ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__mem_size)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_size)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_size)))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_size 
            = ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_size)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_size)))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_size 
            = ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_size)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__r_disp_digit)))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__r_disp_digit 
            = ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__r_disp_digit)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__r_disp_digit)))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__r_disp_digit 
            = ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__r_disp_digit)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 2U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3)))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3 
            = ((6U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3)) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 3U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3 
            = ((5U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3)) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 4U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3 
            = ((3U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC3)) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 2U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3)))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3 
            = ((6U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3)) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 3U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3 
            = ((5U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3)) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                        >> 2U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 4U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3 
            = ((3U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__FUNC3)) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                        >> 2U)));
    }
    if ((1U & (((0U == (7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                              >> 2U))) ? 5U : 0U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond)))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond 
            = ((6U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond)) 
               | ((0U == (7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                >> 2U))) ? 1U : 0U));
    }
    if ((2U & (((0U == (7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                              >> 2U))) ? 5U : 0U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond)))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond 
            = (5U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond));
    }
    if ((4U & (((0U == (7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                              >> 2U))) ? 5U : 0U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond)))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond 
            = ((3U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__func3_cond)) 
               | ((0U == (7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                >> 2U))) ? 4U : 0U));
    }
    if ((1U & ((IData)(vlSelf->ANODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES 
            = ((0xeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES)) 
               | (1U & (IData)(vlSelf->ANODES)));
    }
    if ((2U & ((IData)(vlSelf->ANODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES 
            = ((0xdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES)) 
               | (2U & (IData)(vlSelf->ANODES)));
    }
    if ((4U & ((IData)(vlSelf->ANODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES 
            = ((0xbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES)) 
               | (4U & (IData)(vlSelf->ANODES)));
    }
    if ((8U & ((IData)(vlSelf->ANODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES 
            = ((7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__ANODES)) 
               | (8U & (IData)(vlSelf->ANODES)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 8U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN)))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN 
            = ((0xeU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN)) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 9U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN 
            = ((0xdU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN)) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 0xaU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN 
            = ((0xbU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN)) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 0xbU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN 
            = ((7U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_FUN)) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                        >> 8U)));
    }
    vlSelf->OTTER_Wrapper__DOT__IOBUS_wr = 0U;
    if ((0x11000000U <= ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                          << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                       >> 8U)))) {
        ++(vlSymsp->__Vcoverage[1454]);
        if ((0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U])) {
            ++(vlSymsp->__Vcoverage[1452]);
            vlSelf->OTTER_Wrapper__DOT__IOBUS_wr = 1U;
        }
        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                      >> 7U)))) {
            ++(vlSymsp->__Vcoverage[1453]);
        }
    }
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memWrite2 
        = ((0x11000000U > ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                            << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                         >> 8U))) && 
           (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                  >> 7U)));
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                >> 0xcU) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR)))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR 
            = ((0x1eU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR)) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                >> 0xdU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR 
            = ((0x1dU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR)) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                >> 0xeU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR 
            = ((0x1bU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR)) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                >> 0xfU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR 
            = ((0x17U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR)) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                >> 0x10U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR) 
                             >> 4U)))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR 
            = ((0xfU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__WR_ADDR)) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[0xbU] 
                           >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x16U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1)))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1 
            = ((0x1eU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1)) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x16U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x17U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1 
            = ((0x1dU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1)) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x16U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x18U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1 
            = ((0x1bU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1)) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x16U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x19U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1 
            = ((0x17U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1)) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x16U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x1aU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1) 
                             >> 4U)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1 
            = ((0xfU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR1)) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                           >> 0x16U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x11U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2 
            = ((0x1eU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2)) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x11U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x12U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2 
            = ((0x1dU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2)) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x11U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x13U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2 
            = ((0x1bU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2)) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x11U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x14U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2 
            = ((0x17U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2)) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x11U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x15U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2) 
                             >> 4U)))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2 
            = ((0xfU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT____Vtogcov__ADDR2)) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                           >> 0x11U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 5U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW)))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW 
            = ((0x7eU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW)) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 6U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW 
            = ((0x7dU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW)) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 7U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW 
            = ((0x7bU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW)) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 8U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW 
            = ((0x77U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW)) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 9U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW) 
                          >> 4U)))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW 
            = ((0x6fU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW)) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0xaU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW) 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW 
            = ((0x5fU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW)) 
               | (0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0xbU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW) 
                            >> 6U)))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW 
            = ((0x3fU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__OPCODE_RAW)) 
               | (0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x1bU) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7)))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7 
            = ((0x7eU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7)) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x1bU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x1cU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7 
            = ((0x7dU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7)) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x1bU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x1dU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7 
            = ((0x7bU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7)) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x1bU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x1eU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7 
            = ((0x77U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7)) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                        >> 0x1bU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                >> 0x1fU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7) 
                             >> 4U)))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7 
            = ((0x6fU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7)) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                           >> 0x1bU)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
               ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7) 
                  >> 5U)))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7 
            = ((0x5fU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7)) 
               | (0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           << 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 1U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7) 
                          >> 6U)))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7 
            = ((0x3fU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__decoder__DOT____Vtogcov__FUNC7)) 
               | (0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           << 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 5U) ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW)))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW 
            = ((0x7eU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW)) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 6U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW 
            = ((0x7dU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW)) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 7U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW 
            = ((0x7bU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW)) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 8U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW 
            = ((0x77U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW)) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 9U) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW) 
                          >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW 
            = ((0x6fU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW)) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 0xaU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW) 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW 
            = ((0x5fU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW)) 
               | (0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                >> 0xbU) ^ ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW) 
                            >> 6U)))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW 
            = ((0x3fU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__OPCODE_RAW)) 
               | (0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                           >> 5U)));
    }
    if ((1U & ((IData)(vlSelf->CATHODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES 
            = ((0xfeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)) 
               | (1U & (IData)(vlSelf->CATHODES)));
    }
    if ((2U & ((IData)(vlSelf->CATHODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES 
            = ((0xfdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)) 
               | (2U & (IData)(vlSelf->CATHODES)));
    }
    if ((4U & ((IData)(vlSelf->CATHODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES 
            = ((0xfbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)) 
               | (4U & (IData)(vlSelf->CATHODES)));
    }
    if ((8U & ((IData)(vlSelf->CATHODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES 
            = ((0xf7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)) 
               | (8U & (IData)(vlSelf->CATHODES)));
    }
    if ((0x10U & ((IData)(vlSelf->CATHODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES 
            = ((0xefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)) 
               | (0x10U & (IData)(vlSelf->CATHODES)));
    }
    if ((0x20U & ((IData)(vlSelf->CATHODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES 
            = ((0xdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)) 
               | (0x20U & (IData)(vlSelf->CATHODES)));
    }
    if ((0x40U & ((IData)(vlSelf->CATHODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES 
            = ((0xbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)) 
               | (0x40U & (IData)(vlSelf->CATHODES)));
    }
    if ((0x80U & ((IData)(vlSelf->CATHODES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES 
            = ((0x7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__CATHODES)) 
               | (0x80U & (IData)(vlSelf->CATHODES)));
    }
    if ((1U & ((IData)(vlSelf->VGA_RGB) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB 
            = ((0xfeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)) 
               | (1U & (IData)(vlSelf->VGA_RGB)));
    }
    if ((2U & ((IData)(vlSelf->VGA_RGB) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB 
            = ((0xfdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)) 
               | (2U & (IData)(vlSelf->VGA_RGB)));
    }
    if ((4U & ((IData)(vlSelf->VGA_RGB) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB 
            = ((0xfbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)) 
               | (4U & (IData)(vlSelf->VGA_RGB)));
    }
    if ((8U & ((IData)(vlSelf->VGA_RGB) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB 
            = ((0xf7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)) 
               | (8U & (IData)(vlSelf->VGA_RGB)));
    }
    if ((0x10U & ((IData)(vlSelf->VGA_RGB) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB 
            = ((0xefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)) 
               | (0x10U & (IData)(vlSelf->VGA_RGB)));
    }
    if ((0x20U & ((IData)(vlSelf->VGA_RGB) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB 
            = ((0xdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)) 
               | (0x20U & (IData)(vlSelf->VGA_RGB)));
    }
    if ((0x40U & ((IData)(vlSelf->VGA_RGB) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB 
            = ((0xbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)) 
               | (0x40U & (IData)(vlSelf->VGA_RGB)));
    }
    if ((0x80U & ((IData)(vlSelf->VGA_RGB) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB 
            = ((0x7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__VGA_RGB)) 
               | (0x80U & (IData)(vlSelf->VGA_RGB)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd 
            = ((0xfeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd 
            = ((0xfdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd 
            = ((0xfbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd 
            = ((0xf7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd)));
    }
    if ((0x10U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd 
            = ((0xefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)) 
               | (0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd)));
    }
    if ((0x20U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd 
            = ((0xdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)) 
               | (0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd)));
    }
    if ((0x40U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd 
            = ((0xbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)) 
               | (0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd)));
    }
    if ((0x80U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd 
            = ((0x7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wd)) 
               | (0x80U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wd)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd 
            = ((0xfeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd 
            = ((0xfdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd 
            = ((0xfbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd 
            = ((0xf7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd)));
    }
    if ((0x10U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd 
            = ((0xefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)) 
               | (0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd)));
    }
    if ((0x20U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd 
            = ((0xdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)) 
               | (0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd)));
    }
    if ((0x40U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd 
            = ((0xbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)) 
               | (0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd)));
    }
    if ((0x80U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd 
            = ((0x7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_rd)) 
               | (0x80U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__uart_data) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data 
            = ((0xfeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__uart_data)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__uart_data) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data 
            = ((0xfdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__uart_data)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__uart_data) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data 
            = ((0xfbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__uart_data)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__uart_data) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data 
            = ((0xf7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__uart_data)));
    }
    if ((0x10U & ((IData)(vlSelf->OTTER_Wrapper__DOT__uart_data) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data 
            = ((0xefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)) 
               | (0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__uart_data)));
    }
    if ((0x20U & ((IData)(vlSelf->OTTER_Wrapper__DOT__uart_data) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data 
            = ((0xdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)) 
               | (0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__uart_data)));
    }
    if ((0x40U & ((IData)(vlSelf->OTTER_Wrapper__DOT__uart_data) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data 
            = ((0xbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)) 
               | (0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__uart_data)));
    }
    if ((0x80U & ((IData)(vlSelf->OTTER_Wrapper__DOT__uart_data) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data 
            = ((0x7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__uart_data)) 
               | (0x80U & (IData)(vlSelf->OTTER_Wrapper__DOT__uart_data)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode 
            = ((0xfeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode 
            = ((0xfdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode 
            = ((0xfbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode 
            = ((0xf7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode)));
    }
    if ((0x10U & ((IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode 
            = ((0xefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)) 
               | (0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode)));
    }
    if ((0x20U & ((IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode 
            = ((0xdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)) 
               | (0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode)));
    }
    if ((0x40U & ((IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode 
            = ((0xbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)) 
               | (0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode)));
    }
    if ((0x80U & ((IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode 
            = ((0x7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_scancode)) 
               | (0x80U & (IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count 
            = ((0xfeU & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count 
            = ((0xfdU & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count 
            = ((0xfbU & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count 
            = ((0xf7U & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count)));
    }
    if ((0x10U & ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count 
            = ((0xefU & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)) 
               | (0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count)));
    }
    if ((0x20U & ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count 
            = ((0xdfU & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)) 
               | (0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count)));
    }
    if ((0x40U & ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count 
            = ((0xbfU & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)) 
               | (0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count)));
    }
    if ((0x80U & ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count 
            = ((0x7fU & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_db_count)) 
               | (0x80U & (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count)));
    }
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 0U;
    vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc = 0U;
    if ((0U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
        if ((1U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
            if ((2U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                if ((3U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                    if ((4U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                        if ((5U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                            ++(vlSymsp->__Vcoverage[1644]);
                            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                                 != (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS))) {
                                ++(vlSymsp->__Vcoverage[1643]);
                            }
                            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                                 == (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS))) {
                                ++(vlSymsp->__Vcoverage[1642]);
                            }
                        }
                        if ((5U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                            ++(vlSymsp->__Vcoverage[1645]);
                        }
                    }
                    if ((4U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                        ++(vlSymsp->__Vcoverage[1641]);
                        if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN)))) {
                            ++(vlSymsp->__Vcoverage[1639]);
                            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                                 == (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_HIGH_GOING_LOW_CLOCKS))) {
                                ++(vlSymsp->__Vcoverage[1637]);
                            }
                            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                                 != (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_HIGH_GOING_LOW_CLOCKS))) {
                                ++(vlSymsp->__Vcoverage[1638]);
                            }
                        }
                        if (vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN) {
                            ++(vlSymsp->__Vcoverage[1640]);
                        }
                    }
                }
                if ((3U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                    ++(vlSymsp->__Vcoverage[1636]);
                    if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN)))) {
                        ++(vlSymsp->__Vcoverage[1635]);
                    }
                    if (vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN) {
                        ++(vlSymsp->__Vcoverage[1634]);
                    }
                }
            }
            if ((2U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                ++(vlSymsp->__Vcoverage[1633]);
                if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN)))) {
                    ++(vlSymsp->__Vcoverage[1632]);
                }
                if (vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN) {
                    ++(vlSymsp->__Vcoverage[1631]);
                    if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                         == (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_LOW_GOING_HIGH_CLOCKS))) {
                        ++(vlSymsp->__Vcoverage[1629]);
                    }
                    if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                         != (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_LOW_GOING_HIGH_CLOCKS))) {
                        ++(vlSymsp->__Vcoverage[1630]);
                    }
                }
            }
        }
        if ((1U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
            ++(vlSymsp->__Vcoverage[1628]);
            if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN)))) {
                ++(vlSymsp->__Vcoverage[1627]);
            }
            if (vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN) {
                ++(vlSymsp->__Vcoverage[1626]);
                vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc = 1U;
            }
        } else if ((2U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
            if (vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN) {
                if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                     != (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_LOW_GOING_HIGH_CLOCKS))) {
                    vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc = 1U;
                }
            }
        } else if ((3U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
            if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN)))) {
                vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc = 1U;
            }
        } else if ((4U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
            if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN)))) {
                if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                     != (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_HIGH_GOING_LOW_CLOCKS))) {
                    vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc = 1U;
                }
            }
        } else if ((5U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                 != (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS))) {
                vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc = 1U;
            }
        } else {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc = 0U;
        }
    }
    __Vtableidx1 = (0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                             >> 5U));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_sel 
        = VOTTER_Wrapper__ConstPool__TABLE_hc328adb6_0
        [__Vtableidx1];
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0xcU) ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0xdU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0xeU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0xfU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x10U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                             >> 4U)))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x11U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                             >> 5U)))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x12U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                             >> 6U)))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x13U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                             >> 7U)))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x14U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                             >> 8U)))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                            >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x15U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                             >> 9U)))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                            >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x16U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                             >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                            >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x17U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
                             >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__immd_gen__DOT____Vtogcov__IR) 
               | (0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                            >> 0xcU)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1ffeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1ffdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1ffbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1ff7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((0x10U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1fefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((0x20U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1fdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((0x40U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1fbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((0x80U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1f7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (0x80U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((0x100U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1effU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (0x100U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((0x200U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1dffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (0x200U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((0x400U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x1bffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (0x400U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((0x800U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0x17ffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (0x800U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    if ((0x1000U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa) 
                    ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa 
            = ((0xfffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_vga_wa)) 
               | (0x1000U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_wa)));
    }
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access1 
        = ((0x4000U <= vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
           | (0U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access2 
        = (IData)(((0U != (0x300U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U])) 
                   | (0x4000U <= ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                   << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                                >> 8U)))));
    if ((1U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xfffeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (1U & (IData)(vlSelf->SWITCHES)));
    }
    if ((2U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xfffdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (2U & (IData)(vlSelf->SWITCHES)));
    }
    if ((4U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xfffbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (4U & (IData)(vlSelf->SWITCHES)));
    }
    if ((8U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xfff7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (8U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x10U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xffefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x10U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x20U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xffdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x20U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x40U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xffbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x40U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x80U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xff7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x80U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x100U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xfeffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x100U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x200U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xfdffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x200U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x400U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xfbffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x400U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x800U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xf7ffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x800U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x1000U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xefffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x1000U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x2000U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xdfffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x2000U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x4000U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0xbfffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x4000U & (IData)(vlSelf->SWITCHES)));
    }
    if ((0x8000U & ((IData)(vlSelf->SWITCHES) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES 
            = ((0x7fffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__SWITCHES)) 
               | (0x8000U & (IData)(vlSelf->SWITCHES)));
    }
    if ((1U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xfffeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (1U & (IData)(vlSelf->LEDS)));
    }
    if ((2U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xfffdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (2U & (IData)(vlSelf->LEDS)));
    }
    if ((4U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xfffbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (4U & (IData)(vlSelf->LEDS)));
    }
    if ((8U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xfff7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (8U & (IData)(vlSelf->LEDS)));
    }
    if ((0x10U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xffefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x10U & (IData)(vlSelf->LEDS)));
    }
    if ((0x20U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xffdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x20U & (IData)(vlSelf->LEDS)));
    }
    if ((0x40U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xffbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x40U & (IData)(vlSelf->LEDS)));
    }
    if ((0x80U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xff7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x80U & (IData)(vlSelf->LEDS)));
    }
    if ((0x100U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xfeffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x100U & (IData)(vlSelf->LEDS)));
    }
    if ((0x200U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xfdffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x200U & (IData)(vlSelf->LEDS)));
    }
    if ((0x400U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xfbffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x400U & (IData)(vlSelf->LEDS)));
    }
    if ((0x800U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xf7ffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x800U & (IData)(vlSelf->LEDS)));
    }
    if ((0x1000U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xefffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x1000U & (IData)(vlSelf->LEDS)));
    }
    if ((0x2000U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xdfffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x2000U & (IData)(vlSelf->LEDS)));
    }
    if ((0x4000U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0xbfffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x4000U & (IData)(vlSelf->LEDS)));
    }
    if ((0x8000U & ((IData)(vlSelf->LEDS) ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS 
            = ((0x7fffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__LEDS)) 
               | (0x8000U & (IData)(vlSelf->LEDS)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xfffeU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xfffdU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xfffbU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xfff7U & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x10U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xffefU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x20U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xffdfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x40U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xffbfU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x80U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xff7fU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x80U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x100U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xfeffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x100U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x200U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xfdffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x200U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x400U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xfbffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x400U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x800U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xf7ffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x800U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x1000U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                    ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xefffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x1000U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x2000U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                    ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xdfffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x2000U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x4000U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                    ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0xbfffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x4000U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    if ((0x8000U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                    ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG 
            = ((0x7fffU & (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__r_SSEG)) 
               | (0x8000U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    }
    __Vtableidx3 = (0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                             >> 5U));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_en 
        = VOTTER_Wrapper__ConstPool__TABLE_h03c3adda_0
        [__Vtableidx3];
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_write 
        = VOTTER_Wrapper__ConstPool__TABLE_ha96ed2bf_0
        [__Vtableidx3];
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_read2 
        = VOTTER_Wrapper__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx3];
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x18U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                             >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                             >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x19U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                             >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                             >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x1aU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                             >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                             >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x1bU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                             >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                             >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x1cU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                             >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                              >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x1dU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                             >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                              >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x1eU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                              >> 0xcU)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                >> 0x1fU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                              >> 0xcU)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
               ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                  >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                               << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 1U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                          >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                               << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 2U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                          >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                               << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 3U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                          >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                               << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 4U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                          >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 5U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                          >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 6U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                          >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 7U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                          >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 8U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                          >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                 << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 9U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                          >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                 << 0x14U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                >> 0xaU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                            >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                 << 0x14U)));
    }
    if ((IData)(((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                  >> 0xbU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
                              >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_U_immd) 
               | (0x80000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                 << 0x14U)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
               ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xffffeU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
               ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xffffdU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
               ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xffffbU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
               ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xffff7U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                  ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xfffefU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                  ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xfffdfU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                  ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xfffbfU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                  ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xfff7fU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                   ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xffeffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                   ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xffdffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                   ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xffbffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                   ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xff7ffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                    ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xfefffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                    ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xfdfffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                    ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xfbfffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                    ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xf7fffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                     ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xeffffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                     ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xdffffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                     ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0xbffffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
                     ^ vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter 
            = ((0x7ffffU & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT____Vtogcov__clk_div_counter) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    }
    if ((2U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (2U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((4U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (4U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((8U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (8U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x10U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x20U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x40U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x80U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x100U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x200U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x400U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x800U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x1000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x2000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x4000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x8000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x10000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x20000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x40000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x80000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x100000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x200000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x400000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x800000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x1000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x2000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x4000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x8000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x10000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x20000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x40000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if (((((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out) 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__next_pc) 
               | (0x80000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 8U) ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 9U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0xaU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0xbU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0xcU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                            >> 4U)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0xdU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0xeU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                            >> 6U)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0xfU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                            >> 7U)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x10U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 8U)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x11U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 9U)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x12U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x13U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x14U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x15U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x16U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x17U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x18U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x19U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x1aU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x1bU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x1cU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x1dU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x1eU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                >> 0x1fU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                             >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[9U] 
                               >> 8U)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
               ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                  >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                >> 1U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                          >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                >> 2U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                          >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                >> 3U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                          >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                >> 4U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                          >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                >> 5U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                          >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                >> 6U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                          >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                >> 7U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
                          >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_out) 
               | (0x80000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[0xaU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 8U) ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 9U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0xaU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0xbU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0xcU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                            >> 4U)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0xdU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0xeU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                            >> 6U)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0xfU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                            >> 7U)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x10U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 8U)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x11U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 9U)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x12U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x13U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x14U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x15U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x16U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x17U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x18U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x19U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x1aU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x1bU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x1cU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x1dU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x1eU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                >> 0x1fU) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                             >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                               >> 8U)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
               ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                  >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                >> 1U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                          >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                >> 2U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                          >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                >> 3U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                          >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                >> 4U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                          >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                >> 5U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                          >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                >> 6U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                          >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                >> 7U) ^ (vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
                          >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_addr) 
               | (0x80000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                 << 0x18U)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_out) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x11000000U == ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                          << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                       >> 8U)))) {
        ++(vlSymsp->__Vcoverage[238]);
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0U == (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                 << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))) {
        ++(vlSymsp->__Vcoverage[1427]);
        if ((3U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
            ++(vlSymsp->__Vcoverage[1423]);
            vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                = (((- (IData)((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                >> 0x1fU))) << 8U) 
                   | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                      >> 0x18U));
        } else {
            vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                = ((2U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                    ? (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                          >> 0x17U)))) 
                        << 8U) | (0xffU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                           >> 0x10U)))
                    : ((1U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                        ? (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                              >> 0xfU)))) 
                            << 8U) | (0xffU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                               >> 8U)))
                        : (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2))));
        }
        if ((3U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
            if ((2U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                ++(vlSymsp->__Vcoverage[1424]);
            }
            if ((2U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                if ((1U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                    ++(vlSymsp->__Vcoverage[1425]);
                }
                if ((1U != (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))) {
                    ++(vlSymsp->__Vcoverage[1426]);
                }
            }
        }
    } else {
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
            = ((1U == (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                        << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))
                ? ((3U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                    ? ((0xffff00U & ((- (IData)((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                                 >> 0x1fU))) 
                                     << 8U)) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                                >> 0x18U))
                    : ((2U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                        ? (((- (IData)((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                        >> 0x1fU))) 
                            << 0x10U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                         >> 0x10U))
                        : ((1U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                            ? (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                                  >> 0x17U)))) 
                                << 0x10U) | (0xffffU 
                                             & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                                >> 8U)))
                            : (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2)))))
                : ((2U == (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                            << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))
                    ? ((1U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                        ? (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                           >> 8U) : ((0U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                                      ? vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2
                                      : (0xf5f5U | 
                                         (VL_SHIFTL_III(32,32,32, 
                                                        (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                                                          << 2U) 
                                                         | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)), 0x18U) 
                                          | VL_SHIFTL_III(32,32,32, vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2, 0x10U)))))
                    : ((4U == (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                                << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))
                        ? ((3U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                            ? (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                               >> 0x18U) : ((2U == 
                                             (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                                             ? (0xffU 
                                                & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                                   >> 0x10U))
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                                                 ? 
                                                (0xffU 
                                                 & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                                    >> 8U))
                                                 : 
                                                (0xffU 
                                                 & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2))))
                        : ((5U == (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                                    << 2U) | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)))
                            ? ((3U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                                ? vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2
                                : ((2U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                                    ? (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                       >> 0x10U) : 
                                   ((1U == (3U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2))
                                     ? (0xffffU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                                                   >> 8U))
                                     : (0xffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2))))
                            : (0xf5f5f5U | VL_SHIFTL_III(32,32,32, 
                                                         (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_sign) 
                                                           << 2U) 
                                                          | (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_size)), 0x18U))))));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ir) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ir));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]));
    }
    if ((2U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (2U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((4U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (4U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((8U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (8U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x10U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x20U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x40U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x80U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x100U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x200U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x400U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
        if ((0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                          >> 9U)))) {
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                    ++(vlSymsp->__Vcoverage[1093]);
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                              >> 8U)))) {
                    ++(vlSymsp->__Vcoverage[1097]);
                }
            }
            if ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                ++(vlSymsp->__Vcoverage[1097]);
            }
        }
        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                      >> 0xaU)))) {
            if ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                    ++(vlSymsp->__Vcoverage[1097]);
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                              >> 8U)))) {
                    ++(vlSymsp->__Vcoverage[1087]);
                }
            }
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                          >> 9U)))) {
                if ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])) {
                    ++(vlSymsp->__Vcoverage[1096]);
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                              >> 8U)))) {
                    ++(vlSymsp->__Vcoverage[1086]);
                }
            }
        }
    }
    if ((0x800U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x800U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x1000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x2000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x4000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x8000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x10000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x20000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x40000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x80000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x100000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x200000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x400000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x800000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x11000000U <= vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2)) {
        ++(vlSymsp->__Vcoverage[1449]);
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x1000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x2000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x4000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x8000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x10000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x20000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x40000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if (((((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U]) 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__wb_next_pc) 
               | (0x80000000U & ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_mem_wb[5U])));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U] 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_A_MUX__DOT____Vtogcov__in1) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U]));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 8U) ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 9U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0xaU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0xbU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0xcU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                            >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0xdU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0xeU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                            >> 6U)))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0xfU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                            >> 7U)))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x10U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 8U)))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x11U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 9U)))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x12U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x13U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x14U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x15U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x16U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x17U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x18U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x19U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x1aU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x1bU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x1cU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x1dU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x1eU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 0x1fU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                             >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                               >> 8U)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
               ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                  >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 1U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                          >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 2U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                          >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 3U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                          >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 4U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                          >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 5U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                          >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 6U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                          >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                >> 7U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
                          >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_A) 
               | (0x80000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 8U) ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 9U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0xaU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0xbU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                        >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0xcU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                            >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0xdU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                            >> 5U)))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0xeU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                            >> 6U)))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0xfU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                            >> 7U)))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                           >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x10U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 8U)))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x11U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 9U)))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x12U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x13U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                            >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x14U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x15U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x16U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x17U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                             >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x18U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x19U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x1aU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x1bU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                              >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x1cU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x1dU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x1eU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                               >> 8U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                >> 0x1fU) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                             >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                               >> 8U)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
               ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                  >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 1U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                          >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 2U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                          >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 3U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                          >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 4U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                          >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 5U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                          >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 6U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                          >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                 << 0x18U)));
    }
    if ((1U & ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                >> 7U) ^ (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
                          >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__alu__DOT____Vtogcov__ALU_SRC_B) 
               | (0x80000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                 << 0x18U)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U] 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__PC) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__I_TYPE) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U]));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 1U;
        vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 1U;
    } else if ((1U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
        vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN)
                                                    ? 2U
                                                    : 1U);
        if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN)))) {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 1U;
        }
    } else if ((2U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
        if (vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN) {
            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                 == (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_LOW_GOING_HIGH_CLOCKS))) {
                vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 3U;
                vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 1U;
            } else {
                vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 2U;
            }
        } else {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 1U;
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 1U;
        }
    } else if ((3U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
        if (vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN) {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 3U;
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 1U;
        } else {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 4U;
        }
    } else if ((4U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
        if (vlSelf->OTTER_Wrapper__DOT__DB__DOT__BTN) {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 3U;
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 1U;
        } else if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                    == (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_HIGH_GOING_LOW_CLOCKS))) {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 5U;
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 1U;
        } else {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 4U;
        }
    } else if ((5U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
        if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
             == (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS))) {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 0U;
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 1U;
        } else {
            vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 5U;
        }
    } else {
        vlSelf->OTTER_Wrapper__DOT__DB__DOT__NS = 0U;
        vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst = 1U;
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__J_TYPE) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U]));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__B_TYPE) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U]));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__saved_mem_addr2) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__ioIn_buffer) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer));
    }
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
        = (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                              >> 0xbU)))) << 0xbU) 
           | (0x7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU]));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
        = (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                              >> 0xbU)))) << 0x14U) 
           | ((0xff000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                           >> 0xcU)) | ((0x800U & (
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                                                   << 0xbU)) 
                                        | (0x7feU & 
                                           vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU]))));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
        = (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                              >> 0xbU)))) << 0xcU) 
           | ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                         >> 8U)) | ((0x7e0U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU]) 
                                    | (0x1eU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                >> 0x13U)))));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
        = (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU] 
                              >> 0xbU)))) << 0xbU) 
           | ((0x7e0U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xdU]) 
              | (0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                          >> 0x13U))));
    vlSelf->OTTER_Wrapper__DOT__IOBUS_in = 0U;
    vlSelf->OTTER_Wrapper__DOT__IOBUS_in = ((0x11000000U 
                                             == ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                                  << 0x18U) 
                                                 | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                                    >> 8U)))
                                             ? ((0xffff0000U 
                                                 & vlSelf->OTTER_Wrapper__DOT__IOBUS_in) 
                                                | (IData)(vlSelf->SWITCHES))
                                             : ((0x11040000U 
                                                 == 
                                                 ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                                   << 0x18U) 
                                                  | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                                     >> 8U)))
                                                 ? 
                                                ((0xffff0000U 
                                                  & vlSelf->OTTER_Wrapper__DOT__IOBUS_in) 
                                                 | (IData)(vlSelf->OTTER_Wrapper__DOT__r_vga_rd))
                                                 : 
                                                ((0x111c0000U 
                                                  == 
                                                  ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                                    << 0x18U) 
                                                   | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                                      >> 8U)))
                                                  ? 
                                                 ((0xfffffffeU 
                                                   & vlSelf->OTTER_Wrapper__DOT__IOBUS_in) 
                                                  | (IData)(vlSelf->OTTER_Wrapper__DOT__uart_ready))
                                                  : 
                                                 ((0x11200000U 
                                                   == 
                                                   ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[8U] 
                                                     << 0x18U) 
                                                    | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U] 
                                                       >> 8U)))
                                                   ? 
                                                  ((0xffffff00U 
                                                    & vlSelf->OTTER_Wrapper__DOT__IOBUS_in) 
                                                   | (IData)(vlSelf->OTTER_Wrapper__DOT__s_scancode))
                                                   : 0U))));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluA_sel 
        = ((0x37U == (0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                               >> 5U))) || (0x17U == 
                                            (0x7fU 
                                             & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                                                >> 5U))));
    vlSelf->OTTER_Wrapper__DOT__btn_int = 0U;
    if ((0U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
        vlSelf->OTTER_Wrapper__DOT__btn_int = 0U;
    } else if ((1U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
        if ((2U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
            if ((3U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                if ((4U != vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS)) {
                    vlSelf->OTTER_Wrapper__DOT__btn_int 
                        = ((5U == vlSelf->OTTER_Wrapper__DOT__DB__DOT__PS) 
                           && ((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_db_count) 
                               != (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__c_ONE_SHOT_CLOCKS)));
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_eq 
        = (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
             << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                          >> 8U)) == ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                       << 0x18U) | 
                                      (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                       >> 8U)));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_lt 
        = VL_LTS_III(32, ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                           << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                        >> 8U)), ((
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                   << 0x18U) 
                                                  | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                                     >> 8U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                 >> 0xfU));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xeU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xdU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xcU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xbU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xaU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 9U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 8U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 7U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 6U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 5U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 4U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 2U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 1U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
        = ((0x11000000U <= vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__saved_mem_addr2)
            ? vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__ioIn_buffer
            : vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced);
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
        ++(vlSymsp->__Vcoverage[1492]);
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
        ++(vlSymsp->__Vcoverage[1494]);
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
        ++(vlSymsp->__Vcoverage[1496]);
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
        ++(vlSymsp->__Vcoverage[1498]);
    }
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 = 
        ((0x1eU >= (0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                             >> 0x16U))) ? vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers
         [(0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                    >> 0x16U))] : 0U);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc = 
        (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[4U] 
         + ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
             << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                          >> 8U)));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
        = (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[2U] 
           + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]);
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc = 
        (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[3U] 
         + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[5U]);
    __Vtableidx2 = (0x7fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xcU] 
                             >> 5U));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel 
        = VOTTER_Wrapper__ConstPool__TABLE_h276e9b3c_0
        [__Vtableidx2];
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu 
        = (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
             << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                          >> 8U)) < ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                      << 0x18U) | (
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                                   >> 8U)));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
        = ((0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
            ? ((0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                ? ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                    ? 0U : ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                             ? (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                  << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                               >> 8U)) 
                                >> (0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                             >> 8U)))
                             : 0U)) : ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                                        ? ((0x100U 
                                            & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                                            ? 0U : 
                                           (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                              << 0x18U) 
                                             | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                >> 8U)) 
                                            * ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                << 0x18U) 
                                               | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                                  >> 8U))))
                                        : ((0x100U 
                                            & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                                            ? ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                                << 0x18U) 
                                               | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                  >> 8U))
                                            : (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                                 << 0x18U) 
                                                | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                   >> 8U)) 
                                               - ((
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                   << 0x18U) 
                                                  | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                                     >> 8U))))))
            : ((0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                ? ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                    ? ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                        ? (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                             << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                          >> 8U)) & 
                           ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                             << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                          >> 8U))) : 
                       (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                          << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                       >> 8U)) | ((
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                   << 0x18U) 
                                                  | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                                     >> 8U))))
                    : ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                        ? (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                             << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                          >> 8U)) >> 
                           (0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                     >> 8U))) : (((
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                                   << 0x18U) 
                                                  | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                     >> 8U)) 
                                                 ^ 
                                                 ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                   << 0x18U) 
                                                  | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                                     >> 8U)))))
                : ((0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                    ? ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                        ? ((((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                              << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                           >> 8U)) 
                            < ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                             >> 8U)))
                            ? 1U : 0U) : ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu)
                                           ? 1U : 0U))
                    : ((0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU])
                        ? (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                             << 0x18U) | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                          >> 8U)) << 
                           (0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                     >> 8U))) : (((
                                                   vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xbU] 
                                                   << 0x18U) 
                                                  | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                     >> 8U)) 
                                                 + 
                                                 ((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xaU] 
                                                   << 0x18U) 
                                                  | (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[9U] 
                                                     >> 8U)))))));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 = 
        ((0x1eU >= (0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                             >> 0x11U))) ? vlSelf->OTTER_Wrapper__DOT__MCU__DOT__reg_file__DOT__registers
         [(0x1fU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_if_de[0xbU] 
                    >> 0x11U))] : 0U);
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__IOBUS_wr) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_wr))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_wr 
            = vlSelf->OTTER_Wrapper__DOT__IOBUS_wr;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memWrite2) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memWrite2))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memWrite2 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memWrite2;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_count_rst))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_count_rst 
            = vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_rst;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_count_inc))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelf->OTTER_Wrapper__DOT__DB__DOT____Vtogcov__s_count_inc 
            = vlSelf->OTTER_Wrapper__DOT__DB__DOT__s_count_inc;
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_sel) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_sel)))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_sel 
            = ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_sel)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_sel)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_sel) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_sel)))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_sel 
            = ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_sel)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_sel)));
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access1) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__illegal_mem_access1))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__illegal_mem_access1 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access1;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access2) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__illegal_mem_access2))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__illegal_mem_access2 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access2;
    }
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG 
        = ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access1) 
           | ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__illegal_mem_access2) 
              & (IData)((0U != (0xc0U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_ex_mem[7U])))));
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_en) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_en))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rf_wr_en 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rf_wr_en;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_write) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_mem_write))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_mem_write 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_write;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_read2) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_mem_read2))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_mem_read2 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_mem_read2;
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun)))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun 
            = ((0xeU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun)))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun 
            = ((0xdU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun)))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun 
            = ((0xbU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun)))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun 
            = ((7U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_fun)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_fun)));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA)))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA 
            = ((0xeU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA)))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA 
            = ((0xdU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA)))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA 
            = ((0xbU & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA)))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA 
            = ((7U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__weA)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__weA)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_I_immd) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_I_immd));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_J_immd) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_J_immd));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_B_immd) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_B_immd));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_S_immd) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_S_immd));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
               ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
               ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
               ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
               ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                  ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                  ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                  ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                  ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                   ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                   ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                   ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                   ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                    ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                    ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                    ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                    ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                     ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                     ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                     ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                     ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                      ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                      ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                      ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                      ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                       ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                       ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                       ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                       ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                        ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                        ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__IOBUS_in 
                        ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__IOBUS_in ^ vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT____Vtogcov__IOBUS_in) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__IOBUS_in));
    }
    if (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluA_sel) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0U];
    } else {
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1;
    }
    if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluA_sel)))) {
        ++(vlSymsp->__Vcoverage[1014]);
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluA_sel) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluA_sel))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluA_sel 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluA_sel;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__btn_int) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__btn_int))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__btn_int 
            = vlSelf->OTTER_Wrapper__DOT__btn_int;
    }
    vlSelf->OTTER_Wrapper__DOT__s_interrupt = ((IData)(vlSelf->OTTER_Wrapper__DOT__btn_int) 
                                               | (IData)(vlSelf->OTTER_Wrapper__DOT__keyboard_int));
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_eq) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_eq))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_eq 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_eq;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_lt) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_lt))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_lt 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_lt;
    }
    if ((5U > (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
        ++(vlSymsp->__Vcoverage[1493]);
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS)))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS 
            = ((0xeU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS)))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS 
            = ((0xdU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS)))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS 
            = ((0xbU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS)))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS 
            = ((7U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__THOUSANDS)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U > (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
        ++(vlSymsp->__Vcoverage[1495]);
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS)))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS 
            = ((0xeU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS)))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS 
            = ((0xdU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS)))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS 
            = ((0xbU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS)))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS 
            = ((7U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__HUNDREDS)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    if ((5U > (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
        ++(vlSymsp->__Vcoverage[1497]);
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS)))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS 
            = ((0xeU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS)))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS 
            = ((0xdU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS)))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS 
            = ((0xbU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS)))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS 
            = ((7U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__TENS)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    if ((5U > (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
        ++(vlSymsp->__Vcoverage[1499]);
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES)))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES 
            = ((0xeU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES)))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES 
            = ((0xdU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES)))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES 
            = ((0xbU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES)))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES 
            = ((7U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT____Vtogcov__ONES)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val 
        = (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
            << 0xcU) | (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                         << 8U) | (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                    << 4U) | (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))));
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs1) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs1));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jalr_pc) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__branch_pc) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__jal_pc) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT____Vtogcov__memOut2_sliced) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__mem_singlecycle_dualport__DOT__memOut2_sliced));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluB_sel)))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluB_sel 
            = ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluB_sel)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluB_sel)))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluB_sel 
            = ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_aluB_sel)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_aluB_sel)));
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_ltu))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_ltu 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu;
    }
    __Vtableidx4 = (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_eq) 
                     << 8U) | ((0x80U & ((~ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_eq)) 
                                         << 7U)) | 
                               (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_lt) 
                                 << 6U) | ((0x20U & 
                                            ((~ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_lt)) 
                                             << 5U)) 
                                           | (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu) 
                                               << 4U) 
                                              | ((8U 
                                                  & ((~ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_ltu)) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                                       >> 2U))))))));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_cond 
        = VOTTER_Wrapper__ConstPool__TABLE_h01624aed_0
        [__Vtableidx4];
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_rs2) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_rs2));
    }
    if (VL_UNLIKELY(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG)) {
        VL_WRITEF_NX("Error flag is HIGH!\n",0);
    }
    if (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG) {
        ++(vlSymsp->__Vcoverage[508]);
    }
    if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG)))) {
        ++(vlSymsp->__Vcoverage[509]);
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ERR_FLAG))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ERR_FLAG 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ERR_FLAG;
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__s_interrupt) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_interrupt))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->OTTER_Wrapper__DOT____Vtogcov__s_interrupt 
            = vlSelf->OTTER_Wrapper__DOT__s_interrupt;
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xfffeU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xfffdU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xfffbU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((8U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xfff7U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (8U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x10U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xffefU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x20U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xffdfU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x40U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xffbfU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x80U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                  ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xff7fU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x80U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x100U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xfeffU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x100U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x200U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xfdffU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x200U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x400U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xfbffU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x400U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x800U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                   ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xf7ffU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x800U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x1000U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                    ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xefffU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x1000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x2000U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                    ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xdfffU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x2000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x4000U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                    ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0xbfffU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x4000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((0x8000U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val) 
                    ^ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val 
            = ((0x7fffU & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT____Vtogcov__BCD_Val)) 
               | (0x8000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__de_alu_rs1) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__de_alu_rs1));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__m_mem_dout2) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__m_mem_dout2));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__ex_alu_res) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__ex_alu_res));
    }
    if (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_cond) 
         ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_cond))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT____Vtogcov__br_cond 
            = vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_cond;
    }
    __Vtableidx5 = (((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_cond_addr_gen__DOT__br_cond) 
                     << 0xbU) | ((((0U == (7U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                                 >> 2U)))
                                    ? 5U : 0U) << 8U) 
                                 | ((0xfeU & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pipe_de_ex[0xcU] 
                                              >> 4U)) 
                                    | (IData)(vlSelf->OTTER_Wrapper__DOT__s_interrupt))));
    vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel = 
        VOTTER_Wrapper__ConstPool__TABLE_hfde60216_0
        [__Vtableidx5];
    if ((5U != (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
        if ((4U != (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
            if ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
                ++(vlSymsp->__Vcoverage[901]);
            }
            if ((3U != (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
                if ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
                    ++(vlSymsp->__Vcoverage[902]);
                }
                if ((2U != (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
                    if ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
                        ++(vlSymsp->__Vcoverage[903]);
                    }
                    if ((1U != (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
                        ++(vlSymsp->__Vcoverage[904]);
                    }
                }
            }
        }
        if ((4U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
            ++(vlSymsp->__Vcoverage[900]);
        }
    }
    if ((5U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in = 0U;
    } else {
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
            = ((4U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))
                ? 0U : ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))
                         ? vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jal_pc
                         : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))
                             ? vlSelf->OTTER_Wrapper__DOT__MCU__DOT__branch_pc
                             : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel))
                                 ? vlSelf->OTTER_Wrapper__DOT__MCU__DOT__jalr_pc
                                 : ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_out)))));
    }
    if ((1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel 
            = ((6U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel)) 
               | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel)));
    }
    if ((2U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel 
            = ((5U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel)) 
               | (2U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel)));
    }
    if ((4U & ((IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel) 
               ^ (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel 
            = ((3U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_sel)) 
               | (4U & (IData)(vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_sel)));
    }
    if ((1U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffffffeU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (1U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((2U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffffffdU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (2U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((4U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffffffbU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (4U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((8U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
               ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffffff7U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (8U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x10U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffffffefU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x10U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x20U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffffffdfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x20U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x40U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffffffbfU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x40U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x80U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                  ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffffff7fU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x80U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x100U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffffeffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x100U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x200U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffffdffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x200U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x400U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffffbffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x400U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x800U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                   ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffff7ffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x800U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x1000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffffefffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x1000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x2000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffffdfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x2000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x4000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffffbfffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x4000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x8000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                    ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffff7fffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x8000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x10000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffeffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x10000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x20000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffdffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x20000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x40000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfffbffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x40000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x80000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                     ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfff7ffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x80000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x100000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffefffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x100000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x200000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffdfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x200000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x400000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xffbfffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x400000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x800000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                      ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xff7fffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x800000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x1000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfeffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x1000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x2000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfdffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x2000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x4000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xfbffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x4000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x8000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                       ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xf7ffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x8000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x10000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xefffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x10000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x20000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xdfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x20000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if ((0x40000000U & (vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
                        ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0xbfffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x40000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
    if (((vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in 
          ^ vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in 
            = ((0x7fffffffU & vlSelf->OTTER_Wrapper__DOT__MCU__DOT____Vtogcov__pc_in) 
               | (0x80000000U & vlSelf->OTTER_Wrapper__DOT__MCU__DOT__pc_in));
    }
}
