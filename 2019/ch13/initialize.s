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
	lea	rax, [rip + L_.str]
	mov	qword ptr [rbp - 16], rax
	mov	dword ptr [rbp - 20], 7303014
	mov	dword ptr [rbp - 24], 7496034
	mov	rsi, qword ptr [rbp - 16]
	lea	rax, [rip + L_.str.1]
	xor	ecx, ecx
	mov	dl, cl
	mov	rdi, rax
	mov	qword ptr [rbp - 32], rax ## 8-byte Spill
	mov	al, dl
	mov	dword ptr [rbp - 36], ecx ## 4-byte Spill
	mov	byte ptr [rbp - 37], dl ## 1-byte Spill
	call	_printf
	lea	rsi, [rbp - 20]
	mov	rdi, qword ptr [rbp - 32] ## 8-byte Reload
	mov	dl, byte ptr [rbp - 37] ## 1-byte Reload
	mov	dword ptr [rbp - 44], eax ## 4-byte Spill
	mov	al, dl
	call	_printf
	lea	rsi, [rbp - 24]
	mov	rdi, qword ptr [rbp - 32] ## 8-byte Reload
	mov	dl, byte ptr [rbp - 37] ## 1-byte Reload
	mov	dword ptr [rbp - 48], eax ## 4-byte Spill
	mov	al, dl
	call	_printf
	mov	edi, dword ptr [rbp - 36] ## 4-byte Reload
	mov	dword ptr [rbp - 52], eax ## 4-byte Spill
	call	_exit
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"pung"

L___const.main.foo:                     ## @__const.main.foo
	.asciz	"foo"

L___const.main.bar:                     ## @__const.main.bar
	.asciz	"bar"

L_.str.1:                               ## @.str.1
	.asciz	"%s\n"


.subsections_via_symbols
