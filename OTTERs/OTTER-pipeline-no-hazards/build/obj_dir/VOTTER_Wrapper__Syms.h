// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOTTER_WRAPPER__SYMS_H_
#define VERILATED_VOTTER_WRAPPER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VOTTER_Wrapper.h"

// INCLUDE MODULE CLASSES
#include "VOTTER_Wrapper___024root.h"
#include "VOTTER_Wrapper___024unit.h"
#include "VOTTER_Wrapper_Mult4to1.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VOTTER_Wrapper__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VOTTER_Wrapper* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VOTTER_Wrapper___024root       TOP;
    VOTTER_Wrapper_Mult4to1        TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX;
    VOTTER_Wrapper_Mult4to1        TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX;

    // COVERAGE
    uint32_t __Vcoverage[1783];

    // CONSTRUCTORS
    VOTTER_Wrapper__Syms(VerilatedContext* contextp, const char* namep, VOTTER_Wrapper* modelp);
    ~VOTTER_Wrapper__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
