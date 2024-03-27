// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VOTTER_Wrapper__pch.h"
#include "VOTTER_Wrapper.h"
#include "VOTTER_Wrapper___024root.h"
#include "VOTTER_Wrapper___024unit.h"
#include "VOTTER_Wrapper_Mult4to1.h"

// FUNCTIONS
VOTTER_Wrapper__Syms::~VOTTER_Wrapper__Syms()
{
}

VOTTER_Wrapper__Syms::VOTTER_Wrapper__Syms(VerilatedContext* contextp, const char* namep, VOTTER_Wrapper* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX{this, Verilated::catName(namep, "OTTER_Wrapper.MCU.ALU_SRC_B_MUX")}
    , TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX{this, Verilated::catName(namep, "OTTER_Wrapper.MCU.RF_WB_MUX")}
{
        // Check resources
        Verilated::stackCheck(227);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX = &TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX;
    TOP.__PVT__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX = &TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__OTTER_Wrapper__DOT__MCU__DOT__ALU_SRC_B_MUX.__Vconfigure(true);
    TOP__OTTER_Wrapper__DOT__MCU__DOT__RF_WB_MUX.__Vconfigure(false);
}
