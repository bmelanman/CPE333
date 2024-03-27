// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_Wrapper.h for the primary calling header

#include "VOTTER_Wrapper__pch.h"
#include "VOTTER_Wrapper_Mult4to1.h"

VL_ATTR_COLD void VOTTER_Wrapper_Mult4to1___ctor_var_reset(VOTTER_Wrapper_Mult4to1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VOTTER_Wrapper_Mult4to1___ctor_var_reset\n"); );
    // Body
    vlSelf->in0 = VL_RAND_RESET_I(32);
    vlSelf->in1 = VL_RAND_RESET_I(32);
    vlSelf->in2 = VL_RAND_RESET_I(32);
    vlSelf->in3 = VL_RAND_RESET_I(32);
    vlSelf->sel = VL_RAND_RESET_I(2);
    vlSelf->out = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in3 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__sel = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__out = VL_RAND_RESET_I(32);
}
