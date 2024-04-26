	.file	"broker.c"
	.text
	.globl	calculate_commission
	.type	calculate_commission, @function
calculate_commission:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movsd	%xmm0, -8(%rbp)
	movsd	%xmm1, -16(%rbp)
	movsd	%xmm2, -24(%rbp)
	movsd	-16(%rbp), %xmm0
	mulsd	-24(%rbp), %xmm0
	addsd	-8(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	calculate_commission, .-calculate_commission
	.section	.rodata
.LC0:
	.string	"Enter value of trade: "
.LC1:
	.string	"%lf"
.LC3:
	.string	"Are you stupid?!"
.LC22:
	.string	"Commission: $%.2f\n"
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
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movsd	-24(%rbp), %xmm1
	pxor	%xmm0, %xmm0
	ucomisd	%xmm1, %xmm0
	jbe	.L27
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	movl	$1, %edi
	call	exit@PLT
.L27:
	movsd	-24(%rbp), %xmm1
	movsd	.LC4(%rip), %xmm0
	ucomisd	%xmm1, %xmm0
	jbe	.L28
	movsd	-24(%rbp), %xmm1
	movsd	.LC5(%rip), %xmm0
	movq	.LC6(%rip), %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	call	calculate_commission
	movq	%xmm0, %rax
	movq	%rax, -16(%rbp)
	jmp	.L8
.L28:
	movsd	-24(%rbp), %xmm1
	movsd	.LC7(%rip), %xmm0
	ucomisd	%xmm1, %xmm0
	jbe	.L29
	movsd	-24(%rbp), %xmm1
	movsd	.LC8(%rip), %xmm0
	movq	.LC9(%rip), %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	call	calculate_commission
	movq	%xmm0, %rax
	movq	%rax, -16(%rbp)
	jmp	.L8
.L29:
	movsd	-24(%rbp), %xmm1
	movsd	.LC10(%rip), %xmm0
	ucomisd	%xmm1, %xmm0
	jbe	.L30
	movsd	-24(%rbp), %xmm1
	movsd	.LC11(%rip), %xmm0
	movq	.LC12(%rip), %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	call	calculate_commission
	movq	%xmm0, %rax
	movq	%rax, -16(%rbp)
	jmp	.L8
.L30:
	movsd	-24(%rbp), %xmm1
	movsd	.LC13(%rip), %xmm0
	ucomisd	%xmm1, %xmm0
	jbe	.L31
	movsd	-24(%rbp), %xmm1
	movsd	.LC14(%rip), %xmm0
	movq	.LC15(%rip), %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	call	calculate_commission
	movq	%xmm0, %rax
	movq	%rax, -16(%rbp)
	jmp	.L8
.L31:
	movsd	-24(%rbp), %xmm1
	movsd	.LC16(%rip), %xmm0
	ucomisd	%xmm1, %xmm0
	jbe	.L32
	movsd	-24(%rbp), %xmm1
	movsd	.LC17(%rip), %xmm0
	movq	.LC18(%rip), %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	call	calculate_commission
	movq	%xmm0, %rax
	movq	%rax, -16(%rbp)
	jmp	.L8
.L32:
	movsd	-24(%rbp), %xmm1
	movsd	.LC19(%rip), %xmm0
	movq	.LC20(%rip), %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	call	calculate_commission
	movq	%xmm0, %rax
	movq	%rax, -16(%rbp)
.L8:
	movsd	.LC21(%rip), %xmm0
	ucomisd	-16(%rbp), %xmm0
	jbe	.L17
	movsd	.LC21(%rip), %xmm0
	movsd	%xmm0, -16(%rbp)
.L17:
	movq	-16(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leaq	.LC22(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %edi
	call	exit@PLT
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC4:
	.long	0
	.long	1084459008
	.align 8
.LC5:
	.long	2954937500
	.long	1066494066
	.align 8
.LC6:
	.long	0
	.long	1077805056
	.align 8
.LC7:
	.long	0
	.long	1085827584
	.align 8
.LC8:
	.long	41231686
	.long	1065027738
	.align 8
.LC9:
	.long	0
	.long	1078722560
	.align 8
.LC10:
	.long	0
	.long	1087604736
	.align 8
.LC11:
	.long	432932703
	.long	1064032849
	.align 8
.LC12:
	.long	0
	.long	1079181312
	.align 8
.LC13:
	.long	0
	.long	1088973312
	.align 8
.LC14:
	.long	27487791
	.long	1063388604
	.align 8
.LC15:
	.long	0
	.long	1079574528
	.align 8
.LC16:
	.long	0
	.long	1092519040
	.align 8
.LC17:
	.long	27487791
	.long	1062340028
	.align 8
.LC18:
	.long	0
	.long	1080254464
	.align 8
.LC19:
	.long	1216334738
	.long	1062043071
	.align 8
.LC20:
	.long	0
	.long	1081073664
	.align 8
.LC21:
	.long	0
	.long	1078165504
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
