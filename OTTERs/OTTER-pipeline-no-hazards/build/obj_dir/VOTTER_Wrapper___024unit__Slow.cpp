// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_Wrapper.h for the primary calling header

#include "VOTTER_Wrapper__pch.h"
#include "VOTTER_Wrapper__Syms.h"
#include "VOTTER_Wrapper___024unit.h"

void VOTTER_Wrapper___024unit___ctor_var_reset(VOTTER_Wrapper___024unit* vlSelf);

VOTTER_Wrapper___024unit::VOTTER_Wrapper___024unit(VOTTER_Wrapper__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VOTTER_Wrapper___024unit___ctor_var_reset(this);
}

void VOTTER_Wrapper___024unit___configure_coverage(VOTTER_Wrapper___024unit* vlSelf, bool first);

void VOTTER_Wrapper___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    VOTTER_Wrapper___024unit___configure_coverage(this, first);
}

VOTTER_Wrapper___024unit::~VOTTER_Wrapper___024unit() {
}

// Coverage
void VOTTER_Wrapper___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{VerilatedModule::name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
