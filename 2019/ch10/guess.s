	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15
	.intel_syntax noprefix
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	sub	rsp, 32
	mov	dword ptr [rbp - 4], 0
	call	_initialize_generator
	lea	rdi, [rip + L_.str]
	mov	esi, 100
	mov	al, 0
	call	_printf
	mov	dword ptr [rbp - 12], eax ## 4-byte Spill
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	call	_choose_new_secret
	lea	rdi, [rip + L_.str.1]
	mov	al, 0
	call	_printf
	mov	dword ptr [rbp - 16], eax ## 4-byte Spill
	call	_play
	lea	rdi, [rip + L_.str.2]
	mov	al, 0
	call	_printf
	lea	rdi, [rip + L_.str.3]
	lea	rsi, [rbp - 5]
	mov	dword ptr [rbp - 20], eax ## 4-byte Spill
	mov	al, 0
	call	_scanf
	lea	rdi, [rip + L_.str.4]
	mov	dword ptr [rbp - 24], eax ## 4-byte Spill
	mov	al, 0
	call	_printf
	mov	dword ptr [rbp - 28], eax ## 4-byte Spill
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movsx	eax, byte ptr [rbp - 5]
	cmp	eax, 121
	mov	cl, 1
	mov	byte ptr [rbp - 29], cl ## 1-byte Spill
	je	LBB0_4
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movsx	eax, byte ptr [rbp - 5]
	cmp	eax, 89
	sete	cl
	mov	byte ptr [rbp - 29], cl ## 1-byte Spill
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	mov	al, byte ptr [rbp - 29] ## 1-byte Reload
	test	al, 1
	jne	LBB0_1
## %bb.5:
	xor	edi, edi
	call	_exit
	.cfi_endproc
                                        ## -- End function
	.globl	_initialize_generator   ## -- Begin function initialize_generator
	.p2align	4, 0x90
_initialize_generator:                  ## @initialize_generator
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	xor	eax, eax
	mov	edi, eax
	call	_time
	mov	ecx, eax
	mov	edi, ecx
	call	_srand
	pop	rbp
	ret
	.cfi_endproc
                                        ## -- End function
	.globl	_choose_new_secret      ## -- Begin function choose_new_secret
	.p2align	4, 0x90
_choose_new_secret:                     ## @choose_new_secret
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	call	_rand
	mov	rcx, qword ptr [rip + _secret@GOTPCREL]
	cdq
	mov	esi, 100
	idiv	esi
	add	edx, 1
	mov	dword ptr [rcx], edx
	pop	rbp
	ret
	.cfi_endproc
                                        ## -- End function
	.globl	_play                   ## -- Begin function play
	.p2align	4, 0x90
_play:                                  ## @play
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	sub	rsp, 32
	mov	dword ptr [rbp - 8], 0
LBB3_1:                                 ## =>This Inner Loop Header: Depth=1
	lea	rdi, [rip + L_.str.5]
	mov	al, 0
	call	_printf
	lea	rdi, [rip + L_.str.6]
	lea	rsi, [rbp - 4]
	mov	dword ptr [rbp - 12], eax ## 4-byte Spill
	mov	al, 0
	call	_scanf
	mov	rsi, qword ptr [rip + _secret@GOTPCREL]
	mov	ecx, dword ptr [rbp - 8]
	add	ecx, 1
	mov	dword ptr [rbp - 8], ecx
	mov	ecx, dword ptr [rbp - 4]
	cmp	ecx, dword ptr [rsi]
	mov	dword ptr [rbp - 16], eax ## 4-byte Spill
	jne	LBB3_3
## %bb.2:
	mov	esi, dword ptr [rbp - 8]
	mov	eax, dword ptr [rbp - 8]
	cmp	eax, 1
	lea	rcx, [rip + L_.str.8]
	lea	rdx, [rip + L_.str.9]
	cmove	rdx, rcx
	lea	rdi, [rip + L_.str.7]
	mov	al, 0
	call	_printf
	mov	dword ptr [rbp - 20], eax ## 4-byte Spill
	add	rsp, 32
	pop	rbp
	ret
LBB3_3:                                 ##   in Loop: Header=BB3_1 Depth=1
	mov	rax, qword ptr [rip + _secret@GOTPCREL]
	mov	ecx, dword ptr [rbp - 4]
	cmp	ecx, dword ptr [rax]
	jge	LBB3_5
## %bb.4:                               ##   in Loop: Header=BB3_1 Depth=1
	lea	rdi, [rip + L_.str.10]
	mov	al, 0
	call	_printf
	mov	dword ptr [rbp - 24], eax ## 4-byte Spill
	jmp	LBB3_6
LBB3_5:                                 ##   in Loop: Header=BB3_1 Depth=1
	lea	rdi, [rip + L_.str.11]
	mov	al, 0
	call	_printf
	mov	dword ptr [rbp - 28], eax ## 4-byte Spill
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

	.comm	_secret,4,2             ## @secret
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
