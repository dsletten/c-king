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
	sub	rsp, 64
	mov	dword ptr [rbp - 4], 0
	mov	dword ptr [rbp - 8], 0
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmp	dword ptr [rbp - 8], 32
	jge	LBB0_4
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	mov	edi, dword ptr [rbp - 8]
	call	_digit_to_hex_char
	movsx	esi, al
	lea	rdi, [rip + L_.str]
	mov	al, 0
	call	_printf
	mov	dword ptr [rbp - 20], eax ## 4-byte Spill
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	mov	eax, dword ptr [rbp - 8]
	add	eax, 1
	mov	dword ptr [rbp - 8], eax
	jmp	LBB0_1
LBB0_4:
	lea	rax, [rip + L_.str.1]
	xor	ecx, ecx
	mov	dl, cl
	mov	rdi, rax
	mov	qword ptr [rbp - 32], rax ## 8-byte Spill
	mov	al, dl
	mov	dword ptr [rbp - 36], ecx ## 4-byte Spill
	mov	byte ptr [rbp - 37], dl ## 1-byte Spill
	call	_printf
	lea	rdi, [rip + L_.str.2]
	mov	qword ptr [rbp - 16], rdi
	mov	rdi, qword ptr [rbp - 16]
	mov	dl, byte ptr [rbp - 37] ## 1-byte Reload
	mov	dword ptr [rbp - 44], eax ## 4-byte Spill
	mov	al, dl
	call	_printf
	mov	rdi, qword ptr [rbp - 32] ## 8-byte Reload
	mov	dl, byte ptr [rbp - 37] ## 1-byte Reload
	mov	dword ptr [rbp - 48], eax ## 4-byte Spill
	mov	al, dl
	call	_printf
	mov	rdi, qword ptr [rbp - 16]
	mov	byte ptr [rdi + 3], 107
	mov	rdi, qword ptr [rbp - 16]
	mov	dl, byte ptr [rbp - 37] ## 1-byte Reload
	mov	dword ptr [rbp - 52], eax ## 4-byte Spill
	mov	al, dl
	call	_printf
	mov	rdi, qword ptr [rbp - 32] ## 8-byte Reload
	mov	dl, byte ptr [rbp - 37] ## 1-byte Reload
	mov	dword ptr [rbp - 56], eax ## 4-byte Spill
	mov	al, dl
	call	_printf
	mov	edi, dword ptr [rbp - 36] ## 4-byte Reload
	mov	dword ptr [rbp - 60], eax ## 4-byte Spill
	call	_exit
	.cfi_endproc
                                        ## -- End function
	.globl	_digit_to_hex_char      ## -- Begin function digit_to_hex_char
	.p2align	4, 0x90
_digit_to_hex_char:                     ## @digit_to_hex_char
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	mov	dword ptr [rbp - 4], edi
	mov	eax, dword ptr [rbp - 4]
	cdq
	mov	edi, 16
	idiv	edi
	movsxd	rcx, edx
	lea	rsi, [rip + L_.str.3]
	movsx	edx, byte ptr [rsi + rcx]
	mov	eax, edx
	pop	rbp
	ret
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%c"

L_.str.1:                               ## @.str.1
	.asciz	"\n"

L_.str.2:                               ## @.str.2
	.asciz	"pung"

L_.str.3:                               ## @.str.3
	.asciz	"0123456789ABCDEF"


.subsections_via_symbols
