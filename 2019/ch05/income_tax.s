	.file	"income_tax.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"Enter taxable income: "
.LC1:
	.string	"%lf"
	.text
	.globl	get_income
	.type	get_income, @function
get_income:
.LFB5:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -16[rbp]
	mov	rsi, rax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	movsd	xmm0, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	get_income, .-get_income
	.globl	compute_income_tax
	.type	compute_income_tax, @function
compute_income_tax:
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	movsd	QWORD PTR -8[rbp], xmm0
	movsd	xmm0, QWORD PTR .LC2[rip]
	ucomisd	xmm0, QWORD PTR -8[rbp]
	jb	.L21
	movsd	xmm1, QWORD PTR -8[rbp]
	movsd	xmm0, QWORD PTR .LC3[rip]
	mulsd	xmm0, xmm1
	jmp	.L7
.L21:
	movsd	xmm0, QWORD PTR .LC4[rip]
	ucomisd	xmm0, QWORD PTR -8[rbp]
	jb	.L22
	movsd	xmm0, QWORD PTR -8[rbp]
	movsd	xmm1, QWORD PTR .LC2[rip]
	subsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC5[rip]
	mulsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC6[rip]
	addsd	xmm0, xmm1
	jmp	.L7
.L22:
	movsd	xmm0, QWORD PTR .LC7[rip]
	ucomisd	xmm0, QWORD PTR -8[rbp]
	jb	.L23
	movsd	xmm0, QWORD PTR -8[rbp]
	movsd	xmm1, QWORD PTR .LC4[rip]
	subsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC8[rip]
	mulsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC9[rip]
	addsd	xmm0, xmm1
	jmp	.L7
.L23:
	movsd	xmm0, QWORD PTR .LC10[rip]
	ucomisd	xmm0, QWORD PTR -8[rbp]
	jb	.L24
	movsd	xmm0, QWORD PTR -8[rbp]
	movsd	xmm1, QWORD PTR .LC7[rip]
	subsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC11[rip]
	mulsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC12[rip]
	addsd	xmm0, xmm1
	jmp	.L7
.L24:
	movsd	xmm0, QWORD PTR .LC13[rip]
	ucomisd	xmm0, QWORD PTR -8[rbp]
	jb	.L25
	movsd	xmm0, QWORD PTR -8[rbp]
	movsd	xmm1, QWORD PTR .LC10[rip]
	subsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC14[rip]
	mulsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC15[rip]
	addsd	xmm0, xmm1
	jmp	.L7
.L25:
	movsd	xmm0, QWORD PTR -8[rbp]
	movsd	xmm1, QWORD PTR .LC13[rip]
	subsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC16[rip]
	mulsd	xmm0, xmm1
	movsd	xmm1, QWORD PTR .LC17[rip]
	addsd	xmm0, xmm1
.L7:
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	compute_income_tax, .-compute_income_tax
	.section	.rodata
	.align 8
.LC18:
	.string	"Tax due on a taxable income of %.2f is %.2f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB7:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	eax, 0
	call	get_income
	movq	rax, xmm0
	mov	QWORD PTR -16[rbp], rax
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR -24[rbp], rax
	movsd	xmm0, QWORD PTR -24[rbp]
	call	compute_income_tax
	movq	rax, xmm0
	mov	QWORD PTR -8[rbp], rax
	movsd	xmm0, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR -16[rbp]
	movapd	xmm1, xmm0
	mov	QWORD PTR -24[rbp], rax
	movsd	xmm0, QWORD PTR -24[rbp]
	lea	rdi, .LC18[rip]
	mov	eax, 2
	call	printf@PLT
	mov	edi, 0
	call	exit@PLT
	.cfi_endproc
.LFE7:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC2:
	.long	0
	.long	1082617856
	.align 8
.LC3:
	.long	1202590843
	.long	1065646817
	.align 8
.LC4:
	.long	0
	.long	1084331008
	.align 8
.LC5:
	.long	1202590843
	.long	1066695393
	.align 8
.LC6:
	.long	0
	.long	1075707904
	.align 8
.LC7:
	.long	0
	.long	1085099008
	.align 8
.LC8:
	.long	3951369912
	.long	1067366481
	.align 8
.LC9:
	.long	0
	.long	1078116352
	.align 8
.LC10:
	.long	0
	.long	1085571584
	.align 8
.LC11:
	.long	1202590843
	.long	1067743969
	.align 8
.LC12:
	.long	0
	.long	1079287808
	.align 8
.LC13:
	.long	0
	.long	1086019584
	.align 8
.LC14:
	.long	2576980378
	.long	1068079513
	.align 8
.LC15:
	.long	0
	.long	1080152064
	.align 8
.LC16:
	.long	3951369912
	.long	1068415057
	.align 8
.LC17:
	.long	0
	.long	1080868864
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
