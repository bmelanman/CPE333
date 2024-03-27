# build directory
BUILD = build

# source files
C_FILES 	:= $(wildcard src/*.c)
AS_FILES 	:= $(wildcard src/*.s)
ASP_FILES 	:= $(wildcard src/*.S)

# object files
OBJS := $(patsubst src/%.c,build/%.o,$(C_FILES)) \
		$(patsubst src/%.s,build/%.o,$(AS_FILES)) \
		$(patsubst src/%.S,build/%.o,$(ASP_FILES))

# settings for the compilers
CC 		:= riscv64-unknown-elf-gcc
LD 		:= riscv64-unknown-elf-ld
OBJCOPY := riscv64-unknown-elf-objcopy
OBJDUMP := riscv64-unknown-elf-objdump

TARGET_ARCH = -march=rv32i -mabi=ilp32
CCFLAGS = -O0 $(TARGET_ARCH)

all: dirs $(OBJS)

# how to build a .o file from a .c file
$(BUILD)/%.o: src/%.c
	$(CC) -c -o $@ $< $(CCFLAGS)

# how to build a .o file from a .s file
$(BUILD)/%.o: src/%.s
	$(CC) -c -o $@ $< $(CCFLAGS)

# how to build a .o file from a .S file
$(BUILD)/%.o: src/%.S
	$(CC) -c -o $@ $< $(CCFLAGS)

# make software project folder
dirs:
	@mkdir -p $(BUILD)

# 'clean' rule: delete all the files so we can start afresh
clean:
	rm -rf $(BUILD)