	.file	"ternary.c"
	.text
	.globl	foo
	.type	foo, @function
foo:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	setg	%al
	movzbl	%al, %eax
	imull	-4(%rbp), %eax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	setle	%al
	movzbl	%al, %eax
	imull	-8(%rbp), %eax
	addl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	foo, .-foo
	.section	.rodata
.LC1:
	.string	"%f\n"
.LC10:
	.string	"%f %f %f %f %f %f %f %f %f\n"
.LC12:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC2(%rip), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC2(%rip), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC3(%rip), %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	pxor	%xmm0, %xmm0
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movq	.LC2(%rip), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movsd	.LC3(%rip), %xmm7
	movsd	.LC4(%rip), %xmm6
	movsd	.LC5(%rip), %xmm5
	movsd	.LC2(%rip), %xmm4
	movsd	.LC6(%rip), %xmm3
	movsd	.LC7(%rip), %xmm2
	movsd	.LC8(%rip), %xmm1
	movq	.LC9(%rip), %rax
	subq	$8, %rsp
	movsd	.LC11(%rip), %xmm0
	leaq	-8(%rsp), %rsp
	movsd	%xmm0, (%rsp)
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC10(%rip), %rdi
	movl	$8, %eax
	call	printf@PLT
	addq	$16, %rsp
	movl	$1, -16(%rbp)
	movl	$3, -12(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L4
	movl	$2, -20(%rbp)
	jmp	.L5
.L4:
	movl	$9, -20(%rbp)
.L5:
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-16(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L6
	movl	$2, -20(%rbp)
	jmp	.L7
.L6:
	movl	$9, -20(%rbp)
.L7:
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$11, %esi
	movl	$7, %edi
	call	foo
	movl	%eax, %esi
	leaq	.LC12(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %edi
	call	exit@PLT
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC2:
	.long	0
	.long	1071644672
	.align 8
.LC3:
	.long	2576980378
	.long	1072273817
	.align 8
.LC4:
	.long	1717986918
	.long	1072064102
	.align 8
.LC5:
	.long	858993459
	.long	1071854387
	.align 8
.LC6:
	.long	2576980378
	.long	1071225241
	.align 8
.LC7:
	.long	858993459
	.long	1070805811
	.align 8
.LC8:
	.long	2576980378
	.long	1070176665
	.align 8
.LC9:
	.long	2576980378
	.long	1069128089
	.align 8
.LC11:
	.long	3435973837
	.long	1072483532
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
