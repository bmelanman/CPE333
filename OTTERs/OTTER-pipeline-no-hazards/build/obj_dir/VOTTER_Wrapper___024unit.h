// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VOTTER_Wrapper.h for the primary calling header

#ifndef VERILATED_VOTTER_WRAPPER___024UNIT_H_
#define VERILATED_VOTTER_WRAPPER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VOTTER_Wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) VOTTER_Wrapper___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VOTTER_Wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    VOTTER_Wrapper___024unit(VOTTER_Wrapper__Syms* symsp, const char* v__name);
    ~VOTTER_Wrapper___024unit();
    VL_UNCOPYABLE(VOTTER_Wrapper___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
