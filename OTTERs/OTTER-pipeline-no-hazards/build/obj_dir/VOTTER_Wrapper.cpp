// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VOTTER_Wrapper__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VOTTER_Wrapper::VOTTER_Wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VOTTER_Wrapper__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , BTNL{vlSymsp->TOP.BTNL}
    , BTNC{vlSymsp->TOP.BTNC}
    , PS2Clk{vlSymsp->TOP.PS2Clk}
    , PS2Data{vlSymsp->TOP.PS2Data}
    , CATHODES{vlSymsp->TOP.CATHODES}
    , ANODES{vlSymsp->TOP.ANODES}
    , VGA_RGB{vlSymsp->TOP.VGA_RGB}
    , VGA_HS{vlSymsp->TOP.VGA_HS}
    , VGA_VS{vlSymsp->TOP.VGA_VS}
    , Tx{vlSymsp->TOP.Tx}
    , SWITCHES{vlSymsp->TOP.SWITCHES}
    , LEDS{vlSymsp->TOP.LEDS}
    , __PVT__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX{vlSymsp->TOP.__PVT__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX}
    , __PVT__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX{vlSymsp->TOP.__PVT__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VOTTER_Wrapper::VOTTER_Wrapper(const char* _vcname__)
    : VOTTER_Wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VOTTER_Wrapper::~VOTTER_Wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VOTTER_Wrapper___024root___eval_debug_assertions(VOTTER_Wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void VOTTER_Wrapper___024root___eval_static(VOTTER_Wrapper___024root* vlSelf);
void VOTTER_Wrapper___024root___eval_initial(VOTTER_Wrapper___024root* vlSelf);
void VOTTER_Wrapper___024root___eval_settle(VOTTER_Wrapper___024root* vlSelf);
void VOTTER_Wrapper___024root___eval(VOTTER_Wrapper___024root* vlSelf);

void VOTTER_Wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VOTTER_Wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VOTTER_Wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VOTTER_Wrapper___024root___eval_static(&(vlSymsp->TOP));
        VOTTER_Wrapper___024root___eval_initial(&(vlSymsp->TOP));
        VOTTER_Wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VOTTER_Wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VOTTER_Wrapper::eventsPending() { return false; }

uint64_t VOTTER_Wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VOTTER_Wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VOTTER_Wrapper___024root___eval_final(VOTTER_Wrapper___024root* vlSelf);

VL_ATTR_COLD void VOTTER_Wrapper::final() {
    VOTTER_Wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VOTTER_Wrapper::hierName() const { return vlSymsp->name(); }
const char* VOTTER_Wrapper::modelName() const { return "VOTTER_Wrapper"; }
unsigned VOTTER_Wrapper::threads() const { return 1; }
void VOTTER_Wrapper::prepareClone() const { contextp()->prepareClone(); }
void VOTTER_Wrapper::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VOTTER_Wrapper::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VOTTER_Wrapper___024root__trace_decl_types(VerilatedVcd* tracep);

void VOTTER_Wrapper___024root__trace_init_top(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VOTTER_Wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_Wrapper___024root*>(voidSelf);
    VOTTER_Wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VOTTER_Wrapper___024root__trace_decl_types(tracep);
    VOTTER_Wrapper___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VOTTER_Wrapper___024root__trace_register(VOTTER_Wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VOTTER_Wrapper::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VOTTER_Wrapper::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VOTTER_Wrapper___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
