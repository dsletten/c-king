	.file	"parts.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"%p\n%p\n%p\n"
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
	sub	rsp, 96
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	lea	rax, -96[rbp]
	lea	rcx, 36[rax]
	lea	rax, -96[rbp]
	lea	rdx, 4[rax]
	lea	rax, -96[rbp]
	mov	rsi, rax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rax, -48[rbp]
	lea	rcx, 36[rax]
	lea	rax, -48[rbp]
	lea	rdx, 4[rax]
	lea	rax, -48[rbp]
	mov	rsi, rax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	mov	edi, 0
	call	exit@PLT
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
