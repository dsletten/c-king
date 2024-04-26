	.file	"infinite.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"Yeehaw!"
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
.L2:
	lea	rdi, .LC0[rip]
	call	puts@PLT
	jmp	.L2
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
