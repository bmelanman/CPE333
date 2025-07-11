#This file contains tests for R-type RISCV instructions WITH NO HAZARDS (by this I mean I added nops to prevent hazards)
#You can check to see if any of your tests fail using this link: https://piazza.com/class/kbprd1f9gqj5ro?cid=13
	
	
	#Setup stuff
	addi a0, zero, 50 #50 is an arbitrary number, most tests will end up with a result of 50 to keep things simple
	addi a1, zero, 16

tests:	
	nop
	nop
	#jal test
	jal t0, skip
	nop
	nop
	beq zero, zero, fail
	skip:
	nop
	nop
	
	#jalr test
	jalr t0, 0(a1)
	nop
	nop
	beq zero, zero, fail
	nop
	nop
	
	j tests
	nop
	nop

fail:
	j fail