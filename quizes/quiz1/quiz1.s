.data

arr_len:
    .word 16

arr:
    .word 0x2E79, 0x15AF, 0xFFFFB36E, 0xFFFF9FDB
    .word 0xFFFFC3ED, 0xFFFFE5D3, 0xFFFF8D21, 0xFFFF9F88
    .word 0x72A1, 0xFFFFCFB3, 0x00E6, 0xFFFFD4B9
    .word 0x20E9, 0xFFFFC3C5, 0x51ED, 0xFFFFF9C1

.text

j main

################################################################################
# MaxInt: Finds the maximum value in a list of 32-bit signed integers.         #
################################################################################
# Inputs: a0 - The address of the first value in the list of integers.         #
#         a1 - The number of integers in the list.                             #
# Output: a2 - The largest integer in the given list.                          #
# Modifies: t0, t1, t2
################################################################################
maxint:
    beq     a0, zero, done
    beq     a1, zero, err

    mv      t0, a0          # t0 = arr
    mv      t1, a1          # t1 = N

    lw      a2, 0(a0)       # max = arr[0]

loop:
    beq     t1, zero, done  # While N > 0

    addi    t1, t1, -1      # N--
    addi    t0, t0, 4       # arr++

    lw      t2, 0(t0)       # t2 = *arr
    blt     t2, a2, loop    # if t2 < max, continue

    mv      a2, t2          # max = t2
    j       loop

done:
    ret                     # Done!
err:
    mv      a2, zero        # Return 0 on error
    j       done
#End############################################################################

main:
    la      a0, arr         # a0 = &arr
    li      a1, 16          # a1 = 16
    call    maxint          # a2 = maxint(&arr, 16)