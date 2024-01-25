.file	"lab0_functions.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	1
	.globl	matadd
	.type	matadd, @function
matadd:
	beq	a0,zero,.L1
	li	a4,0
.L3:
	lw	a6,0(a1)
	lw	a5,0(a2)
	addiw	a4,a4,1
	addi	a1,a1,4
	addw	a5,a5,a6
	sw	a5,0(a3)
	addi	a2,a2,4
	addi	a3,a3,4
	bgt	a0,a4,.L3
.L1:
	ret
	.size	matadd, .-matadd

	.align	1
	.globl	mult
	.type	mult, @function
mult:
	mv	a5,a0
	li	a0,0
	beq	a5,zero,.L10
	beq	a1,zero,.L10
	blt	a5,zero,.L28
	li	a2,0
	blt	a1,zero,.L29
.L13:
	li	a0,0
.L15:
	andi	a3,a1,1
	slliw	a4,a5,1
	srai	a1,a1,1
	beq	a3,zero,.L14
	addw	a0,a0,a5
.L14:
	sext.w	a5,a4
	bne	a1,zero,.L15
	beq	a2,zero,.L10
	negw	a0,a0
.L10:
	ret
.L29:
	li	a2,1
	negw	a1,a1
	j	.L13
.L28:
	negw	a5,a5
	li	a2,1
	bge	a1,zero,.L13
	li	a2,0
	negw	a1,a1
	j	.L13
	.size	mult, .-mult
	.ident	"GCC: (gc891d8dc2) 13.2.0"