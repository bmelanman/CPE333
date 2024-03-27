# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VOTTER_Wrapper.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VOTTER_Wrapper \
	VOTTER_Wrapper___024root__DepSet_h7e1f943d__0 \
	VOTTER_Wrapper___024root__DepSet_h7e1f943d__1 \
	VOTTER_Wrapper___024root__DepSet_h0b1ac9d0__0 \
	VOTTER_Wrapper_Mult4to1__DepSet_h9204f3ac__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VOTTER_Wrapper__ConstPool_0 \
	VOTTER_Wrapper___024root__Slow \
	VOTTER_Wrapper___024root__DepSet_h7e1f943d__0__Slow \
	VOTTER_Wrapper___024root__DepSet_h7e1f943d__1__Slow \
	VOTTER_Wrapper___024root__DepSet_h0b1ac9d0__0__Slow \
	VOTTER_Wrapper___024unit__Slow \
	VOTTER_Wrapper___024unit__DepSet_hb3802260__0__Slow \
	VOTTER_Wrapper_Mult4to1__Slow \
	VOTTER_Wrapper_Mult4to1__DepSet_h1d4cac4d__0__Slow \
	VOTTER_Wrapper_Mult4to1__DepSet_h9204f3ac__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VOTTER_Wrapper__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VOTTER_Wrapper__Syms \
	VOTTER_Wrapper__Trace__0__Slow \
	VOTTER_Wrapper__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
