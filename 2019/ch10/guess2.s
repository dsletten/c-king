	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movl	$0, -4(%rbp)
	callq	_initialize_generator
	leaq	L_.str(%rip), %rdi
	movl	$100, %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -16(%rbp)         ## 4-byte Spill
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	callq	_choose_new_secret
	movl	%eax, -12(%rbp)
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	-12(%rbp), %edi
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	callq	_play
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	leaq	-5(%rbp), %rsi
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.4(%rip), %rdi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movl	%eax, -32(%rbp)         ## 4-byte Spill
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movsbl	-5(%rbp), %eax
	cmpl	$121, %eax
	movb	$1, %cl
	movb	%cl, -33(%rbp)          ## 1-byte Spill
	je	LBB0_4
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movsbl	-5(%rbp), %eax
	cmpl	$89, %eax
	sete	%cl
	movb	%cl, -33(%rbp)          ## 1-byte Spill
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movb	-33(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB0_1
## %bb.5:
	xorl	%edi, %edi
	callq	_exit
	.cfi_endproc
                                        ## -- End function
	.globl	_initialize_generator   ## -- Begin function initialize_generator
	.p2align	4, 0x90
_initialize_generator:                  ## @initialize_generator
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	movl	%eax, %edi
	callq	_time
	movl	%eax, %ecx
	movl	%ecx, %edi
	callq	_srand
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_choose_new_secret      ## -- Begin function choose_new_secret
	.p2align	4, 0x90
_choose_new_secret:                     ## @choose_new_secret
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	callq	_rand
	cltd
	movl	$100, %ecx
	idivl	%ecx
	addl	$1, %edx
	movl	%edx, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_play                   ## -- Begin function play
	.p2align	4, 0x90
_play:                                  ## @play
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movl	$0, -12(%rbp)
LBB3_1:                                 ## =>This Inner Loop Header: Depth=1
	leaq	L_.str.5(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.6(%rip), %rdi
	leaq	-8(%rbp), %rsi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	-12(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -12(%rbp)
	movl	-8(%rbp), %ecx
	cmpl	-4(%rbp), %ecx
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	jne	LBB3_3
## %bb.2:
	movl	-12(%rbp), %esi
	movl	-12(%rbp), %eax
	cmpl	$1, %eax
	leaq	L_.str.8(%rip), %rcx
	leaq	L_.str.9(%rip), %rdx
	cmoveq	%rcx, %rdx
	leaq	L_.str.7(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	addq	$32, %rsp
	popq	%rbp
	retq
LBB3_3:                                 ##   in Loop: Header=BB3_1 Depth=1
	movl	-8(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jge	LBB3_5
## %bb.4:                               ##   in Loop: Header=BB3_1 Depth=1
	leaq	L_.str.10(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	jmp	LBB3_6
LBB3_5:                                 ##   in Loop: Header=BB3_1 Depth=1
	leaq	L_.str.11(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -32(%rbp)         ## 4-byte Spill
LBB3_6:                                 ##   in Loop: Header=BB3_1 Depth=1
	jmp	LBB3_7
LBB3_7:                                 ##   in Loop: Header=BB3_1 Depth=1
	jmp	LBB3_1
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Guess the secret number between 1 and %d\n\n"

L_.str.1:                               ## @.str.1
	.asciz	"A new number has been chosen.\n"

L_.str.2:                               ## @.str.2
	.asciz	"Play again? (Y/N) "

L_.str.3:                               ## @.str.3
	.asciz	" %c"

L_.str.4:                               ## @.str.4
	.asciz	"\n"

L_.str.5:                               ## @.str.5
	.asciz	"Enter guess: "

L_.str.6:                               ## @.str.6
	.asciz	"%d"

L_.str.7:                               ## @.str.7
	.asciz	"You won in %d %s!\n\n"

L_.str.8:                               ## @.str.8
	.asciz	"guess"

L_.str.9:                               ## @.str.9
	.asciz	"guesses"

L_.str.10:                              ## @.str.10
	.asciz	"Too low; try again.\n"

L_.str.11:                              ## @.str.11
	.asciz	"Too high; try again.\n"


.subsections_via_symbols
