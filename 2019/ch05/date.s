	.file	"date.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"st"
.LC1:
	.string	"nd"
.LC2:
	.string	"rd"
.LC3:
	.string	"th"
	.text
	.globl	print_ordinal
	.type	print_ordinal, @function
print_ordinal:
.LFB5:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR -4[rbp], edi
	cmp	DWORD PTR -4[rbp], 31
	ja	.L2
	mov	eax, DWORD PTR -4[rbp]
	lea	rdx, 0[0+rax*4]
	lea	rax, .L4[rip]
	mov	eax, DWORD PTR [rdx+rax]
	movsx	rdx, eax
	lea	rax, .L4[rip]
	add	rax, rdx
	jmp	rax
	.section	.rodata
	.align 4
	.align 4
.L4:
	.long	.L2-.L4
	.long	.L3-.L4
	.long	.L5-.L4
	.long	.L6-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L3-.L4
	.long	.L5-.L4
	.long	.L6-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L2-.L4
	.long	.L3-.L4
	.text
.L3:
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L1
.L5:
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L1
.L6:
	lea	rdi, .LC2[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L1
.L2:
	lea	rdi, .LC3[rip]
	mov	eax, 0
	call	printf@PLT
	nop
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	print_ordinal, .-print_ordinal
	.section	.rodata
.LC4:
	.string	"January"
.LC5:
	.string	"February"
.LC6:
	.string	"March"
.LC7:
	.string	"April"
.LC8:
	.string	"May"
.LC9:
	.string	"June"
.LC10:
	.string	"July"
.LC11:
	.string	"August"
.LC12:
	.string	"September"
.LC13:
	.string	"October"
.LC14:
	.string	"November"
.LC15:
	.string	"December"
	.text
	.globl	print_month
	.type	print_month, @function
print_month:
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR -4[rbp], edi
	cmp	DWORD PTR -4[rbp], 12
	ja	.L8
	mov	eax, DWORD PTR -4[rbp]
	lea	rdx, 0[0+rax*4]
	lea	rax, .L11[rip]
	mov	eax, DWORD PTR [rdx+rax]
	movsx	rdx, eax
	lea	rax, .L11[rip]
	add	rax, rdx
	jmp	rax
	.section	.rodata
	.align 4
	.align 4
.L11:
	.long	.L8-.L11
	.long	.L10-.L11
	.long	.L12-.L11
	.long	.L13-.L11
	.long	.L14-.L11
	.long	.L15-.L11
	.long	.L16-.L11
	.long	.L17-.L11
	.long	.L18-.L11
	.long	.L19-.L11
	.long	.L20-.L11
	.long	.L21-.L11
	.long	.L22-.L11
	.text
.L10:
	lea	rdi, .LC4[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L12:
	lea	rdi, .LC5[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L13:
	lea	rdi, .LC6[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L14:
	lea	rdi, .LC7[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L15:
	lea	rdi, .LC8[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L16:
	lea	rdi, .LC9[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L17:
	lea	rdi, .LC10[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L18:
	lea	rdi, .LC11[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L19:
	lea	rdi, .LC12[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L20:
	lea	rdi, .LC13[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L21:
	lea	rdi, .LC14[rip]
	mov	eax, 0
	call	printf@PLT
	jmp	.L8
.L22:
	lea	rdi, .LC15[rip]
	mov	eax, 0
	call	printf@PLT
	nop
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	print_month, .-print_month
	.section	.rodata
.LC16:
	.string	"Enter date (mm/dd/yyyy): "
.LC17:
	.string	"%2d /%2d /%4d"
.LC18:
	.string	"Dated this %d"
.LC19:
	.string	" day of "
.LC20:
	.string	", %4d.\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB7:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	lea	rdi, .LC16[rip]
	mov	eax, 0
	call	printf@PLT
	lea	rcx, -12[rbp]
	lea	rdx, -16[rbp]
	lea	rax, -20[rbp]
	mov	rsi, rax
	lea	rdi, .LC17[rip]
	mov	eax, 0
	call	__isoc99_scanf@PLT
	mov	eax, DWORD PTR -16[rbp]
	mov	esi, eax
	lea	rdi, .LC18[rip]
	mov	eax, 0
	call	printf@PLT
	mov	eax, DWORD PTR -16[rbp]
	mov	edi, eax
	call	print_ordinal
	lea	rdi, .LC19[rip]
	mov	eax, 0
	call	printf@PLT
	mov	eax, DWORD PTR -20[rbp]
	mov	edi, eax
	call	print_month
	mov	eax, DWORD PTR -12[rbp]
	mov	esi, eax
	lea	rdi, .LC20[rip]
	mov	eax, 0
	call	printf@PLT
	mov	edi, 0
	call	exit@PLT
	.cfi_endproc
.LFE7:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
