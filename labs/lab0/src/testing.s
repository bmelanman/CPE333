.data

mat_len:
    .word 4

matA:
    .word 0x0, 0x1, 0x2, 0x3
    .word 0x4, 0x5, 0x6, 0x7
    .word 0x8, 0x9, 0xA, 0xB
    .word 0xC, 0xD, 0xE, 0xF

matB:
    .word 0x0, 0x1, 0x2, 0x3
    .word 0x4, 0x5, 0x6, 0x7
    .word 0x8, 0x9, 0xA, 0xB
    .word 0xC, 0xD, 0xE, 0xF

matC:
    .word 0x0, 0x1, 0x2, 0x3
    .word 0x4, 0x5, 0x6, 0x7
    .word 0x8, 0x9, 0xA, 0xB
    .word 0xC, 0xD, 0xE, 0xF

.text

j main

    .globl       int32_mult
################################################################################
# Int32Mult: Multiplies two 32-bit integers together.                          #
################################################################################
# Inputs: a0 - The first integer.                                              #
#         a1 - The second integer.                                             #
# Output: a0 - The result of the multiplication.                               #
################################################################################
int32_mult:

    # Base cases
    beq         a0, zero, int32_mult_ret
    bne         a1, zero, int32_mult_start
    mv          a0, zero
    j           int32_mult_ret

int32_mult_start:

    # Save registers t0 - t3
    addi        sp, sp, -16
    sw          t0, 0(sp)
    sw          t1, 4(sp)
    sw          t2, 8(sp)
    sw          t3, 12(sp)

    mv          t0, a0       # multiplicand
    mv          t1, a1       # multiplier
    mv          t2, zero     # negative flag
    mv          a0, zero     # result

    bge         t0, zero, int32_mult_a0_is_pos # if multiplicand < 0, negate
    not         t0, t0          # 2's complement = ~( x ) + 1
    addi        t0, t0, 1
    xori        t2, t2, 1       # negative flag ^= 1

int32_mult_a0_is_pos:
    bge         t1, zero, int32_mult_a1_is_pos # if multiplier < 0, negate
    not         t1, t1          # 2's complement = ~( x ) + 1
    addi        t1, t1, 1
    xori        t2, t2, 1       # negative flag ^= 1

int32_mult_a1_is_pos:
    bgt         t0, t1, int32_mult_loop # if multiplicand > multiplier, don't swap
    mv          t3, t0
    mv          t0, t1
    mv          t1, t3

int32_mult_loop:
    andi        t3, t1, 1       # t3 = multiplier & 1
    beq         t3, zero, int32_mult_skip_add # if multiplier & 1 == 0, skip
    add         a0, a0, t0      # result += multiplicand
int32_mult_skip_add:
    slli        t0, t0, 1       # multiplicand <<= 1
    srai        t1, t1, 1       # multiplier >>= 1
    bne         t1, zero, int32_mult_loop # while ( multiplier != 0 ), loop!

    # Restore registers t0 - t3
    lw          t0, 0(sp)
    lw          t1, 4(sp)
    lw          t2, 8(sp)
    lw          t3, 12(sp)
    addi        sp, sp, 16

int32_mult_ret:
    ret
#End############################################################################

    .globl       matrix_mult
################################################################################
# MatrixMult: Multiplies two matrices together.                                #
################################################################################
# Inputs: a0 - (N) The length of the matrices.                                 #
#         a1 - (matA) The address of the first matrix.                         #
#         a2 - (matB) The address of the second matrix.                        #
#         a3 - (matC) The address of the matrix to store the result .          #
################################################################################
matrix_mult:
    beq         a0, zero, matrix_mult_ret

    # Save registers t0 - t6, a0 - a7, and ra
    addi        sp, sp, -64
    sw          t0, 0(sp)
    sw          t1, 4(sp)
    sw          t2, 8(sp)
    sw          t3, 12(sp)
    sw          t4, 16(sp)
    sw          t5, 20(sp)
    sw          t6, 24(sp)
    sw          a0, 28(sp)
    sw          a1, 32(sp)
    sw          a2, 36(sp)
    sw          a3, 40(sp)
    sw          a4, 44(sp)
    sw          a5, 48(sp)
    sw          a6, 52(sp)
    sw          a7, 56(sp)
    sw          ra, 60(sp)

    # Save inputs so we can use the registers
    mv          a4, a0      # a4 = N
    mv          a5, a1      # a5 = matA
    mv          a6, a2      # a6 = matB
    mv          a7, a3      # a7 = matC

    mv          t0, zero    # i = 0

matrix_mult_loop1:
    mv          t1, zero    # j = 0

matrix_mult_loop2:
    mv          t2, zero    # k = 0
    mv          t3, zero    # sum = 0

    mv          a0, t1      # a0 = j
    mv          a1, a4      # a1 = N
    jal         int32_mult
    mv          t4, a0      # t4 = j * N

matrix_mult_loop3:
    mv          a0, t2      # a0 = k
    mv          a1, a4      # a1 = N
    jal        int32_mult
    mv          t5, a0      # t5 = k * N

    # a0 = matA[j * N + k]
    add         a2, t4, t2  # a2 = j * N + k
    slli        a2, a2, 2   # a2 *= 4
    add         a2, a2, a5  # a2 = &matA[j * N + k]
    lw          a0, 0(a2)   # a0 = matA[j * N + k]

    # a1 = matB[k * N + i]
    add         a2, t5, t0  # a2 = k * N + i
    slli        a2, a2, 2   # a2 *= 4
    add         a2, a2, a6  # a2 = &matB[k * N + i]
    lw          a1, 0(a2)   # a1 = matB[k * N + i]

    jal        int32_mult
    add         t3, t3, a0  # sum += matA[j * N + k] * matB[k * N + i]

    addi        t2, t2, 1   # k++
    blt         t2, a4, matrix_mult_loop3 # if k < N, loop!
# End of matrix_mult_loop3

    # matC[j * N + i] = sum
    add         a2, t4, t0  # a2 = j * N + i
    slli        a2, a2, 2   # a2 *= 4
    add         a2, a2, a7  # a2 = &matC[j * N + i]
    sw          t3, 0(a2)   # matC[j * N + i] = sum

    addi        t1, t1, 1   # j++
    blt         t1, a4, matrix_mult_loop2 # if j < N, loop!
# End of matrix_mult_loop2

    addi        t0, t0, 1   # i++
    blt         t0, a4, matrix_mult_loop1 # if i < N, loop!
# End of matrix_mult_loop1

    # Restore registers t0 - t6, a0 - a7, and ra
    lw          t0, 0(sp)
    lw          t1, 4(sp)
    lw          t2, 8(sp)
    lw          t3, 12(sp)
    lw          t4, 16(sp)
    lw          t5, 20(sp)
    lw          t6, 24(sp)
    lw          a0, 28(sp)
    lw          a1, 32(sp)
    lw          a2, 36(sp)
    lw          a3, 40(sp)
    lw          a4, 44(sp)
    lw          a5, 48(sp)
    lw          a6, 52(sp)
    lw          a7, 56(sp)
    lw          ra, 60(sp)
    addi        sp, sp, 64

matrix_mult_ret:
    ret
#End############################################################################

main:
    la          s1, mat_len
    lw          a0, 0(s1)   # a0 = N
    la          a1, matA
    la          a2, matB
    la          a3, matC
    jal        matrix_mult

end:
    j           end