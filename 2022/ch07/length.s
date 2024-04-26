	.file	"length.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"Enter a message: "
.LC1:
	.string	"character"
.LC2:
	.string	"characters"
.LC3:
	.string	"Your message was %d %s long.\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR -4[rbp], 0
	lea	rax, .LC0[rip]
	mov	rdi, rax
	mov	eax, 0
	call	printf@PLT
	jmp	.L2
.L3:
	add	DWORD PTR -4[rbp], 1
.L2:
	call	getchar@PLT
	cmp	eax, 10
	jne	.L3
	cmp	DWORD PTR -4[rbp], 1
	jne	.L4
	lea	rax, .LC1[rip]
	jmp	.L5
.L4:
	lea	rax, .LC2[rip]
.L5:
	mov	ecx, DWORD PTR -4[rbp]
	mov	rdx, rax
	mov	esi, ecx
	lea	rax, .LC3[rip]
	mov	rdi, rax
	mov	eax, 0
	call	printf@PLT
	mov	edi, 0
	call	exit@PLT
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
