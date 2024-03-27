# Jump to the beginning of the program
start:
    j main

################################################################################
# Int32Mult: Multiplies two 32-bit integers together.                          #
################################################################################
# Inputs: a0 - The first integer.                                              #
#         a1 - The second integer.                                             #
# Output: a0 - The result of the multiplication.                               #
################################################################################
int32_mult:
    beq         a0, zero, int32_mult_ret    # Base cases
    beq         a1, zero, int32_mult_zero

int32_mult_start:
    sw          t0, 0(sp)                   # Save register t0
    mv          t0, a0                      # t0 = a0
    mv          a0, zero                    # a0 = 0

int32_mult_loop:
    add         a0, a0, t0                  # a0 += t0
    addi        a1, a1, -1                  # a1--
    bne         a1, zero, int32_mult_loop   # Loop!

    lw          t0, 0(sp) # Restore register t0

int32_mult_ret:
    ret

int32_mult_zero:
    mv          a0, zero
    j           int32_mult_ret
#End############################################################################

main:
    li    a0, 0x1234
    li    a1, 0xABCD

    call  int32_mult

    # 0x1234 * 0xABCD = 0x0c374fa4

end:
    j end
# Done!