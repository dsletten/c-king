   1              		.file	"sum.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch07" "sum.c"
   6              		.section	.rodata
   7              		.align 8
   8              	.LC1:
   9 0000 456E7465 		.string	"Enter numbers (0 to terminate): "
   9      72206E75 
   9      6D626572 
   9      73202830 
   9      20746F20 
  10              	.LC2:
  11 0021 54686520 		.string	"The sum is: %f\n"
  11      73756D20 
  11      69733A20 
  11      25660A00 
  12              		.text
  13              		.globl	main
  15              	main:
  16              	.LFB6:
  17              		.file 1 "sum.c"
   1:sum.c         **** /*
   2:sum.c         ****  *
   3:sum.c         ****  *   File:
   4:sum.c         ****  *      sum.c
   5:sum.c         ****  *
   6:sum.c         ****  *   Synopsis:
   7:sum.c         ****  *      Ex. 5 (See ch06/add_numbers.c)
   8:sum.c         ****  *   Revision History:
   9:sum.c         ****  *      Date    Change Description
  10:sum.c         ****  *      ------  -----------------------------------------
  11:sum.c         ****  *      200213  Original.
  12:sum.c         ****  *
  13:sum.c         ****  */
  14:sum.c         **** #include <stdio.h>
  15:sum.c         **** #include <stdlib.h>
  16:sum.c         **** #include <stdbool.h>
  17:sum.c         **** 
  18:sum.c         **** double read_double();
  19:sum.c         **** 
  20:sum.c         **** int main(void) {
  18              		.loc 1 20 16
  19              		.cfi_startproc
  20 0000 F30F1EFA 		endbr64
  21 0004 55       		push	rbp
  22              		.cfi_def_cfa_offset 16
  23              		.cfi_offset 6, -16
  24 0005 4889E5   		mov	rbp, rsp
  25              		.cfi_def_cfa_register 6
  26 0008 4883EC10 		sub	rsp, 16
  21:sum.c         ****   double sum = 0.0;
  27              		.loc 1 21 10
  28 000c 660FEFC0 		pxor	xmm0, xmm0
  29 0010 F20F1145 		movsd	QWORD PTR -16[rbp], xmm0
  29      F0
  22:sum.c         ****   printf("Enter numbers (0 to terminate): ");
  30              		.loc 1 22 3
  31 0015 488D0500 		lea	rax, .LC1[rip]
  31      000000
  32 001c 4889C7   		mov	rdi, rax
  33 001f B8000000 		mov	eax, 0
  33      00
  34 0024 E8000000 		call	printf@PLT
  34      00
  23:sum.c         ****   
  24:sum.c         ****   /* while ( true ) { */
  25:sum.c         ****   /*   double d = read_double(); */
  26:sum.c         ****     
  27:sum.c         ****   /*   if ( d == 0 ) { */
  28:sum.c         ****   /*     break; */
  29:sum.c         ****   /*   } */
  30:sum.c         **** 
  31:sum.c         ****   /*   sum += d; */
  32:sum.c         ****   /* } */
  33:sum.c         **** 
  34:sum.c         ****   double d;
  35:sum.c         ****   //  while ( d = read_double() ) {    <-- GCC warns! sum.c:35:11: warning: suggest parentheses aro
  36:sum.c         ****   while ( (d = read_double()) ) {
  35              		.loc 1 36 9
  36 0029 EB0F     		jmp	.L2
  37              	.L3:
  37:sum.c         ****     sum += d;
  38              		.loc 1 37 9
  39 002b F20F1045 		movsd	xmm0, QWORD PTR -16[rbp]
  39      F0
  40 0030 F20F5845 		addsd	xmm0, QWORD PTR -8[rbp]
  40      F8
  41 0035 F20F1145 		movsd	QWORD PTR -16[rbp], xmm0
  41      F0
  42              	.L2:
  36:sum.c         ****     sum += d;
  43              		.loc 1 36 16
  44 003a B8000000 		mov	eax, 0
  44      00
  45 003f E8000000 		call	read_double
  45      00
  46 0044 66480F7E 		movq	rax, xmm0
  46      C0
  47 0049 488945F8 		mov	QWORD PTR -8[rbp], rax
  36:sum.c         ****     sum += d;
  48              		.loc 1 36 11
  49 004d 660FEFC0 		pxor	xmm0, xmm0
  50 0051 660F2E45 		ucomisd	xmm0, QWORD PTR -8[rbp]
  50      F8
  51 0056 7AD3     		jp	.L3
  52 0058 660FEFC0 		pxor	xmm0, xmm0
  53 005c 660F2E45 		ucomisd	xmm0, QWORD PTR -8[rbp]
  53      F8
  54 0061 75C8     		jne	.L3
  38:sum.c         ****   }
  39:sum.c         **** 
  40:sum.c         ****   printf("The sum is: %f\n", sum);
  55              		.loc 1 40 3
  56 0063 488B45F0 		mov	rax, QWORD PTR -16[rbp]
  57 0067 66480F6E 		movq	xmm0, rax
  57      C0
  58 006c 488D0500 		lea	rax, .LC2[rip]
  58      000000
  59 0073 4889C7   		mov	rdi, rax
  60 0076 B8010000 		mov	eax, 1
  60      00
  61 007b E8000000 		call	printf@PLT
  61      00
  41:sum.c         **** 
  42:sum.c         ****   exit(EXIT_SUCCESS);
  62              		.loc 1 42 3
  63 0080 BF000000 		mov	edi, 0
  63      00
  64 0085 E8000000 		call	exit@PLT
  64      00
  65              		.cfi_endproc
  66              	.LFE6:
  68              		.section	.rodata
  69              	.LC3:
  70 0031 256C6600 		.string	"%lf"
  71              		.text
  72              		.globl	read_double
  74              	read_double:
  75              	.LFB7:
  43:sum.c         **** }
  44:sum.c         **** 
  45:sum.c         **** double read_double() {
  76              		.loc 1 45 22
  77              		.cfi_startproc
  78 008a F30F1EFA 		endbr64
  79 008e 55       		push	rbp
  80              		.cfi_def_cfa_offset 16
  81              		.cfi_offset 6, -16
  82 008f 4889E5   		mov	rbp, rsp
  83              		.cfi_def_cfa_register 6
  84 0092 4883EC20 		sub	rsp, 32
  85              		.loc 1 45 22
  86 0096 64488B04 		mov	rax, QWORD PTR fs:40
  86      25280000 
  86      00
  87 009f 488945F8 		mov	QWORD PTR -8[rbp], rax
  88 00a3 31C0     		xor	eax, eax
  46:sum.c         ****   double d;
  47:sum.c         **** 
  48:sum.c         ****   int count = scanf("%lf", &d);
  89              		.loc 1 48 15
  90 00a5 488D45F0 		lea	rax, -16[rbp]
  91 00a9 4889C6   		mov	rsi, rax
  92 00ac 488D0500 		lea	rax, .LC3[rip]
  92      000000
  93 00b3 4889C7   		mov	rdi, rax
  94 00b6 B8000000 		mov	eax, 0
  94      00
  95 00bb E8000000 		call	__isoc99_scanf@PLT
  95      00
  96 00c0 8945EC   		mov	DWORD PTR -20[rbp], eax
  49:sum.c         **** 
  50:sum.c         ****   if ( count == 1 ) {
  97              		.loc 1 50 6
  98 00c3 837DEC01 		cmp	DWORD PTR -20[rbp], 1
  99 00c7 7506     		jne	.L12
  51:sum.c         ****     return d;
 100              		.loc 1 51 12
 101 00c9 488B45F0 		mov	rax, QWORD PTR -16[rbp]
 102 00cd EB1A     		jmp	.L10
 103              	.L12:
  52:sum.c         ****   } else {
  53:sum.c         ****     while ( getchar() != '\n' ) {}
 104              		.loc 1 53 11
 105 00cf 90       		nop
 106              	.L9:
 107              		.loc 1 53 13 discriminator 1
 108 00d0 E8000000 		call	getchar@PLT
 108      00
 109              		.loc 1 53 23 discriminator 1
 110 00d5 83F80A   		cmp	eax, 10
 111 00d8 75F6     		jne	.L9
  54:sum.c         ****     return read_double();
 112              		.loc 1 54 12
 113 00da B8000000 		mov	eax, 0
 113      00
 114 00df E8000000 		call	read_double
 114      00
 115 00e4 66480F7E 		movq	rax, xmm0
 115      C0
 116              	.L10:
  55:sum.c         ****   }
  56:sum.c         **** }
 117              		.loc 1 56 1 discriminator 1
 118 00e9 488B55F8 		mov	rdx, QWORD PTR -8[rbp]
 119 00ed 64482B14 		sub	rdx, QWORD PTR fs:40
 119      25280000 
 119      00
 120 00f6 7405     		je	.L11
 121              		.loc 1 56 1 is_stmt 0
 122 00f8 E8000000 		call	__stack_chk_fail@PLT
 122      00
 123              	.L11:
 124 00fd 66480F6E 		movq	xmm0, rax
 124      C0
 125 0102 C9       		leave
 126              		.cfi_def_cfa 7, 8
 127 0103 C3       		ret
 128              		.cfi_endproc
 129              	.LFE7:
 131              	.Letext0:
 132              		.file 2 "/usr/include/stdlib.h"
 133              		.file 3 "/usr/include/stdio.h"
 610              		.section	.note.gnu.property,"a"
 611              		.align 8
 612 0000 04000000 		.long	1f - 0f
 613 0004 10000000 		.long	4f - 1f
 614 0008 05000000 		.long	5
 615              	0:
 616 000c 474E5500 		.string	"GNU"
 617              	1:
 618              		.align 8
 619 0010 020000C0 		.long	0xc0000002
 620 0014 04000000 		.long	3f - 2f
 621              	2:
 622 0018 03000000 		.long	0x3
 623              	3:
 624 001c 00000000 		.align 8
 625              	4:
