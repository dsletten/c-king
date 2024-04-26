	.file	"floats.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC1:
	.string	"%e\n"
.LC5:
	.string	"%Le\n"
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
	lea	rdi, .LC1[rip]
	mov	eax, 1
	call	printf@PLT
	mov	rax, QWORD PTR .LC3[rip]
	mov	QWORD PTR -8[rbp], rax
	movsd	xmm0, QWORD PTR -8[rbp]
	lea	rdi, .LC1[rip]
	mov	eax, 1
	call	printf@PLT
	mov	rax, QWORD PTR .LC4[rip]
	mov	QWORD PTR -8[rbp], rax
	movsd	xmm0, QWORD PTR -8[rbp]
	lea	rdi, .LC1[rip]
	mov	eax, 1
	call	printf@PLT
	fld	TBYTE PTR .LC6[rip]
	lea	rsp, -16[rsp]
	fstp	TBYTE PTR [rsp]
	lea	rdi, .LC5[rip]
	mov	eax, 0
	call	printf@PLT
	add	rsp, 16
	fld	TBYTE PTR .LC7[rip]
	lea	rsp, -16[rsp]
	fstp	TBYTE PTR [rsp]
	lea	rdi, .LC5[rip]
	mov	eax, 0
	call	printf@PLT
	add	rsp, 16
	mov	edi, 0
	call	exit@PLT
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	940572672
	.align 8
.LC2:
	.long	3758096384
	.long	1206910975
	.align 8
.LC3:
	.long	0
	.long	1048576
	.align 8
.LC4:
	.long	4294967295
	.long	2146435071
	.align 16
.LC6:
	.long	0
	.long	2147483648
	.long	1
	.long	0
	.align 16
.LC7:
	.long	4294967295
	.long	4294967295
	.long	32766
	.long	0
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
