	.file	"conversion.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC1:
	.string	"int + float: %f\n"
.LC3:
	.string	"int + double: %f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB5:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	rax, QWORD PTR .LC0[rip]
	mov	QWORD PTR -8[rbp], rax
	movsd	xmm0, QWORD PTR -8[rbp]
	lea	rdi, .LC1[rip]
	mov	eax, 1
	call	printf@PLT
	mov	rax, QWORD PTR .LC2[rip]
	mov	QWORD PTR -8[rbp], rax
	movsd	xmm0, QWORD PTR -8[rbp]
	lea	rdi, .LC3[rip]
	mov	eax, 1
	call	printf@PLT
	mov	edi, 0
	call	exit@PLT
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	3221225472
	.long	1079700684
	.align 8
.LC2:
	.long	3435973837
	.long	1079700684
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
