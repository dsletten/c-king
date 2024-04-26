   1              		.file	"linked_list.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.section	.rodata
   6              	.LC1:
   7 0000 25660A00 		.string	"%f\n"
   8              		.text
   9              		.globl	main
  11              	main:
  12              	.LFB5:
  13              		.file 1 "linked_list.c"
   1:linked_list.c **** /*
   2:linked_list.c ****  *
   3:linked_list.c ****  *   File:
   4:linked_list.c ****  *      linked_list.c
   5:linked_list.c ****  *
   6:linked_list.c ****  *   Synopsis:
   7:linked_list.c ****  *
   8:linked_list.c ****  *   Revision History:
   9:linked_list.c ****  *      Date    Change Description
  10:linked_list.c ****  *      ------  -----------------------------------------
  11:linked_list.c ****  *      200615  Original.
  12:linked_list.c ****  *
  13:linked_list.c ****  */
  14:linked_list.c **** 
  15:linked_list.c **** #include <stdio.h>
  16:linked_list.c **** #include <stdlib.h>
  17:linked_list.c **** 
  18:linked_list.c **** #include "cons.h"
  19:linked_list.c **** 
  20:linked_list.c **** DefCons(double, double_cons, double_list);
  21:linked_list.c **** 
  22:linked_list.c **** struct double_cons cons(double car, struct double_cons *cdr);
  23:linked_list.c **** 
  24:linked_list.c **** int main(void) {
  14              		.loc 1 24 0
  15              		.cfi_startproc
  16 0000 55       		push	rbp
  17              		.cfi_def_cfa_offset 16
  18              		.cfi_offset 6, -16
  19 0001 4889E5   		mov	rbp, rsp
  20              		.cfi_def_cfa_register 6
  21 0004 4883EC20 		sub	rsp, 32
  25:linked_list.c ****   struct double_cons c = cons(3.0, NULL);
  22              		.loc 1 25 0
  23 0008 488B0500 		mov	rax, QWORD PTR .LC0[rip]
  23      000000
  24 000f BF000000 		mov	edi, 0
  24      00
  25 0014 488945E8 		mov	QWORD PTR -24[rbp], rax
  26 0018 F20F1045 		movsd	xmm0, QWORD PTR -24[rbp]
  26      E8
  27 001d E8000000 		call	cons
  27      00
  28 0022 66480F7E 		movq	rdx, xmm0
  28      C2
  29 0027 488955F0 		mov	QWORD PTR -16[rbp], rdx
  30 002b 488945F8 		mov	QWORD PTR -8[rbp], rax
  26:linked_list.c ****   printf("%f\n", c.car);
  31              		.loc 1 26 0
  32 002f 488B45F0 		mov	rax, QWORD PTR -16[rbp]
  33 0033 488945E8 		mov	QWORD PTR -24[rbp], rax
  34 0037 F20F1045 		movsd	xmm0, QWORD PTR -24[rbp]
  34      E8
  35 003c 488D3D00 		lea	rdi, .LC1[rip]
  35      000000
  36 0043 B8010000 		mov	eax, 1
  36      00
  37 0048 E8000000 		call	printf@PLT
  37      00
  27:linked_list.c **** 
  28:linked_list.c ****   exit(EXIT_SUCCESS);
  38              		.loc 1 28 0
  39 004d BF000000 		mov	edi, 0
  39      00
  40 0052 E8000000 		call	exit@PLT
  40      00
  41              		.cfi_endproc
  42              	.LFE5:
  44              		.globl	cons
  46              	cons:
  47              	.LFB6:
  29:linked_list.c **** }
  30:linked_list.c **** 
  31:linked_list.c **** struct double_cons cons(double car, struct double_cons *cdr) {
  48              		.loc 1 31 0
  49              		.cfi_startproc
  50 0057 55       		push	rbp
  51              		.cfi_def_cfa_offset 16
  52              		.cfi_offset 6, -16
  53 0058 4889E5   		mov	rbp, rsp
  54              		.cfi_def_cfa_register 6
  55 005b F20F1145 		movsd	QWORD PTR -24[rbp], xmm0
  55      E8
  56 0060 48897DE0 		mov	QWORD PTR -32[rbp], rdi
  32:linked_list.c ****   struct double_cons result = {car, cdr};
  57              		.loc 1 32 0
  58 0064 F20F1045 		movsd	xmm0, QWORD PTR -24[rbp]
  58      E8
  59 0069 F20F1145 		movsd	QWORD PTR -16[rbp], xmm0
  59      F0
  60 006e 488B45E0 		mov	rax, QWORD PTR -32[rbp]
  61 0072 488945F8 		mov	QWORD PTR -8[rbp], rax
  33:linked_list.c ****   return result;
  62              		.loc 1 33 0
  63 0076 488B45F0 		mov	rax, QWORD PTR -16[rbp]
  64 007a 488B55F8 		mov	rdx, QWORD PTR -8[rbp]
  65 007e 488945D0 		mov	QWORD PTR -48[rbp], rax
  66 0082 488955D8 		mov	QWORD PTR -40[rbp], rdx
  67 0086 660F6F45 		movdqa	xmm0, XMMWORD PTR -48[rbp]
  67      D0
  68 008b 4889D0   		mov	rax, rdx
  34:linked_list.c **** }
  69              		.loc 1 34 0
  70 008e 5D       		pop	rbp
  71              		.cfi_def_cfa 7, 8
  72 008f C3       		ret
  73              		.cfi_endproc
  74              	.LFE6:
  76              		.section	.rodata
  77 0004 00000000 		.align 8
  78              	.LC0:
  79 0008 00000000 		.long	0
  80 000c 00000840 		.long	1074266112
  81              		.text
  82              	.Letext0:
  83              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h"
  84              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
  85              		.file 4 "/usr/include/x86_64-linux-gnu/bits/libio.h"
  86              		.file 5 "/usr/include/stdio.h"
  87              		.file 6 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
