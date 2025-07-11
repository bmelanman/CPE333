#This file contains tests for R-type RISCV instructions WITH NO HAZARDS (by this I mean I added nops to prevent hazards)
#You can check to see if any of your tests fail using this link: https://piazza.com/class/kbprd1f9gqj5ro?cid=13


	#Setup stuff
	addi a0, zero, 50 #50 is an arbitrary number, most tests will end up with a result of 50 to keep things simple
	addi a1, zero, 1
	addi a2, zero, -50

tests:	
	nop
	nop
	
	#BEQ test
	beq zero, a0, fail
	nop
	nop
	
	#BNE test
	bne zero, zero, fail
	nop
	nop
	
	#BLT test
	blt a0, zero, fail
	nop
	nop
	
	#BGE test
	bge zero, a0, fail
	nop
	nop
	
	#BLTU test
	bltu a2, zero, fail
	nop
	nop
	
	#BGEU test
	bgeu zero, a2, fail
	nop
	nop
	
	j tests
	nop
	nop

fail:
	j fail