
	.data
prod_:	.word 0

	.text 			# The .text assembler directive indicates
	.globl fact_		# The following is the code (as oppose to data)
fact_:				# .globl makes main know to the 
				# outside of the program.
# Prologue begins 
	sw $ra, 0($sp)		# Save the return address
	sw $fp, -4($sp)		# Save the frame pointer
	sub $fp, $sp, 8		# Update the frame pointer

	sub $sp, $sp, 8		# Make space for the locals
# Prologue ends

	lw $v0, 12($fp)
	li $t0, 1
	seq $t1, $v0, $t0
	beq $t1, $zero, label0 
	j epilogue_fact_

label0:    	
	lw $v0, prod_
	lw $t0, 12($fp)
	mul $t1, $v0, $t0
	sw $t1, prod_
	lw $v0, 12($fp)
	li $t0, 1
	sub $t1, $v0, $t0
	sw $t1, 0($sp)
	sub $sp, $sp, 4
	jal fact_
	add $sp, $sp, 4

# Epilogue Begins
epilogue_fact_:
	add $sp, $sp, 8
	lw $fp, -4($sp)  
	lw $ra, 0($sp)   
	jr        $31		# Jump back to the called procedure
# Epilogue Ends


	.text 			# The .text assembler directive indicates
	.globl main		# The following is the code (as oppose to data)
main:				# .globl makes main know to the 
				# outside of the program.
# Prologue begins 
	sw $ra, 0($sp)		# Save the return address
	sw $fp, -4($sp)		# Save the frame pointer
	sub $fp, $sp, 8		# Update the frame pointer

	sub $sp, $sp, 12		# Make space for the locals
# Prologue ends

	li $v0, 5
	sw $v0, 0($fp)
	li $v0, 1
	sw $v0, prod_
	lw $v0, 0($fp)
	sw $v0, 0($sp)
	sub $sp, $sp, 4
	jal fact_
	add $sp, $sp, 4
	li $v0, 1
	lw $a0, prod_
	syscall

# Epilogue Begins
epilogue_main:
	add $sp, $sp, 12
	lw $fp, -4($sp)  
	lw $ra, 0($sp)   
	jr        $31		# Jump back to the called procedure
# Epilogue Ends

