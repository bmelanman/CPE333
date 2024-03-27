// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_Wrapper.h for the primary calling header

#include "VOTTER_Wrapper__pch.h"
#include "VOTTER_Wrapper_Mult4to1.h"
#include "VOTTER_Wrapper__Syms.h"

VL_ATTR_COLD void VOTTER_Wrapper_Mult4to1___eval_initial__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX(VOTTER_Wrapper_Mult4to1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VOTTER_Wrapper_Mult4to1___eval_initial__TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[1782]);
}

VL_ATTR_COLD void VOTTER_Wrapper_Mult4to1___eval_initial__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX(VOTTER_Wrapper_Mult4to1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VOTTER_Wrapper_Mult4to1___eval_initial__TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[1782]);
    if ((1U & vlSelf->__Vtogcov__in1)) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->__Vtogcov__in1 = (0xfffffffeU & vlSelf->__Vtogcov__in1);
    }
}

VL_ATTR_COLD void VOTTER_Wrapper_Mult4to1___configure_coverage(VOTTER_Wrapper_Mult4to1* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VOTTER_Wrapper_Mult4to1___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1647]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1648]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1649]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1650]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1651]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1652]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1653]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1654]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1655]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1656]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1657]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1658]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1659]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1660]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1661]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1662]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1663]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1664]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1665]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1666]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1667]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1668]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1669]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1670]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1671]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1672]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1673]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1674]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1675]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1676]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1677]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1678]), first, "../muxes/Mult4to1.sv", 16, 18, "", "v_toggle/Mult4to1", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "../muxes/Mult4to1.sv", 17, 18, "", "v_toggle/Mult4to1", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1680]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1681]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1682]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1683]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1684]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1685]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1686]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1687]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1688]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1689]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1690]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1691]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1692]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1693]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1694]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1695]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1696]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1697]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1698]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1699]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1700]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1701]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1702]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1703]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1704]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1705]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1706]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1707]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1708]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1709]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1710]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1711]), first, "../muxes/Mult4to1.sv", 18, 18, "", "v_toggle/Mult4to1", "in2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1712]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1713]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1714]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1715]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1716]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1717]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1718]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1719]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1720]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1721]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1722]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1723]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1724]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1725]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1726]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1727]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1728]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1729]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1730]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1731]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1732]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1733]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1734]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1735]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1736]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1737]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1738]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1739]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1740]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1741]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1742]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1743]), first, "../muxes/Mult4to1.sv", 19, 18, "", "v_toggle/Mult4to1", "in3[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1744]), first, "../muxes/Mult4to1.sv", 20, 17, "", "v_toggle/Mult4to1", "sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1745]), first, "../muxes/Mult4to1.sv", 20, 17, "", "v_toggle/Mult4to1", "sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1746]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1747]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1748]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1749]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1750]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1751]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1752]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1753]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1754]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1755]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1756]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1757]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1758]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1759]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1760]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1761]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1762]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1763]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1764]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1765]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1766]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1767]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1768]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1769]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1770]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1771]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1772]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1773]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1774]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1775]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1776]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1777]), first, "../muxes/Mult4to1.sv", 21, 25, "", "v_toggle/Mult4to1", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1778]), first, "../muxes/Mult4to1.sv", 25, 14, "", "v_line/Mult4to1", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1779]), first, "../muxes/Mult4to1.sv", 26, 14, "", "v_line/Mult4to1", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1780]), first, "../muxes/Mult4to1.sv", 27, 14, "", "v_line/Mult4to1", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1781]), first, "../muxes/Mult4to1.sv", 28, 13, "", "v_line/Mult4to1", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1782]), first, "../muxes/Mult4to1.sv", 23, 5, "", "v_line/Mult4to1", "block", "23-24");
}
