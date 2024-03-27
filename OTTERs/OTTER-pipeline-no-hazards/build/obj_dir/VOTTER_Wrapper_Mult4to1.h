// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VOTTER_Wrapper.h for the primary calling header

#ifndef VERILATED_VOTTER_WRAPPER_MULT4TO1_H_
#define VERILATED_VOTTER_WRAPPER_MULT4TO1_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VOTTER_Wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) VOTTER_Wrapper_Mult4to1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sel,1,0);
    CData/*1:0*/ __Vtogcov__sel;
    VL_IN(in0,31,0);
    VL_IN(in1,31,0);
    VL_IN(in2,31,0);
    VL_IN(in3,31,0);
    VL_OUT(out,31,0);
    IData/*31:0*/ __Vtogcov__in0;
    IData/*31:0*/ __Vtogcov__in1;
    IData/*31:0*/ __Vtogcov__in2;
    IData/*31:0*/ __Vtogcov__in3;
    IData/*31:0*/ __Vtogcov__out;

    // INTERNAL VARIABLES
    VOTTER_Wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    VOTTER_Wrapper_Mult4to1(VOTTER_Wrapper__Syms* symsp, const char* v__name);
    ~VOTTER_Wrapper_Mult4to1();
    VL_UNCOPYABLE(VOTTER_Wrapper_Mult4to1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
