   1              		.file	"mystery2.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch03" "mystery2.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 25662564 		.string	"%f%d%f"
   8      256600
   9              	.LC2:
  10 0007 4F6E6520 		.string	"One right!"
  10      72696768 
  10      742100
  11              	.LC3:
  12 0012 54776F20 		.string	"Two right!"
  12      72696768 
  12      742100
  13              	.LC5:
  14 001d 54687265 		.string	"Three right!"
  14      65207269 
  14      67687421 
  14      00
  15              		.text
  16              		.globl	main
  18              	main:
  19              	.LFB6:
  20              		.file 1 "mystery2.c"
   1:mystery2.c    **** /*
   2:mystery2.c    ****  *
   3:mystery2.c    ****  *   File:
   4:mystery2.c    ****  *      mystery2.c
   5:mystery2.c    ****  *
   6:mystery2.c    ****  *   Synopsis:
   7:mystery2.c    ****  *      Exercise 8
   8:mystery2.c    ****  *      
   9:mystery2.c    ****  *   Revision History:
  10:mystery2.c    ****  *      Date    Change Description
  11:mystery2.c    ****  *      ------  -----------------------------------------
  12:mystery2.c    ****  *      190729  Original.
  13:mystery2.c    ****  *
  14:mystery2.c    ****  */
  15:mystery2.c    **** #include <stdio.h>
  16:mystery2.c    **** #include <stdlib.h>
  17:mystery2.c    **** 
  18:mystery2.c    **** int main(void) {
  21              		.loc 1 18 16
  22              		.cfi_startproc
  23 0000 F30F1EFA 		endbr64
  24 0004 55       		push	rbp
  25              		.cfi_def_cfa_offset 16
  26              		.cfi_offset 6, -16
  27 0005 4889E5   		mov	rbp, rsp
  28              		.cfi_def_cfa_register 6
  29 0008 4883EC20 		sub	rsp, 32
  30              		.loc 1 18 16
  31 000c 64488B04 		mov	rax, QWORD PTR fs:40
  31      25280000 
  31      00
  32 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  33 0019 31C0     		xor	eax, eax
  19:mystery2.c    ****   float x, y;
  20:mystery2.c    ****   int i;
  21:mystery2.c    **** 
  22:mystery2.c    ****   scanf("%f%d%f", &x, &i, &y);
  34              		.loc 1 22 3
  35 001b 488D4DF0 		lea	rcx, -16[rbp]
  36 001f 488D55F4 		lea	rdx, -12[rbp]
  37 0023 488D45EC 		lea	rax, -20[rbp]
  38 0027 4889C6   		mov	rsi, rax
  39 002a 488D0500 		lea	rax, .LC0[rip]
  39      000000
  40 0031 4889C7   		mov	rdi, rax
  41 0034 B8000000 		mov	eax, 0
  41      00
  42 0039 E8000000 		call	__isoc99_scanf@PLT
  42      00
  23:mystery2.c    **** 
  24:mystery2.c    ****   if ( x == (float) 12.3 ) {
  43              		.loc 1 24 10
  44 003e F30F1045 		movss	xmm0, DWORD PTR -20[rbp]
  44      EC
  45              		.loc 1 24 6
  46 0043 0F2E0500 		ucomiss	xmm0, DWORD PTR .LC1[rip]
  46      000000
  47 004a 7A18     		jp	.L2
  48 004c 0F2E0500 		ucomiss	xmm0, DWORD PTR .LC1[rip]
  48      000000
  49 0053 750F     		jne	.L2
  25:mystery2.c    ****     printf("One right!\n");
  50              		.loc 1 25 5
  51 0055 488D0500 		lea	rax, .LC2[rip]
  51      000000
  52 005c 4889C7   		mov	rdi, rax
  53 005f E8000000 		call	puts@PLT
  53      00
  54              	.L2:
  26:mystery2.c    ****   }
  27:mystery2.c    **** 
  28:mystery2.c    ****   if ( i == 45 ) {
  55              		.loc 1 28 10
  56 0064 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  57              		.loc 1 28 6
  58 0067 83F82D   		cmp	eax, 45
  59 006a 750F     		jne	.L4
  29:mystery2.c    ****     printf("Two right!\n");
  60              		.loc 1 29 5
  61 006c 488D0500 		lea	rax, .LC3[rip]
  61      000000
  62 0073 4889C7   		mov	rdi, rax
  63 0076 E8000000 		call	puts@PLT
  63      00
  64              	.L4:
  30:mystery2.c    ****   }
  31:mystery2.c    **** 
  32:mystery2.c    ****   if ( y == (float) 0.6 ) {
  65              		.loc 1 32 10
  66 007b F30F1045 		movss	xmm0, DWORD PTR -16[rbp]
  66      F0
  67              		.loc 1 32 6
  68 0080 0F2E0500 		ucomiss	xmm0, DWORD PTR .LC4[rip]
  68      000000
  69 0087 7A18     		jp	.L5
  70 0089 0F2E0500 		ucomiss	xmm0, DWORD PTR .LC4[rip]
  70      000000
  71 0090 750F     		jne	.L5
  33:mystery2.c    ****     printf("Three right!\n");
  72              		.loc 1 33 5
  73 0092 488D0500 		lea	rax, .LC5[rip]
  73      000000
  74 0099 4889C7   		mov	rdi, rax
  75 009c E8000000 		call	puts@PLT
  75      00
  76              	.L5:
  34:mystery2.c    ****   }
  35:mystery2.c    ****   
  36:mystery2.c    ****   exit(EXIT_SUCCESS);
  77              		.loc 1 36 3
  78 00a1 BF000000 		mov	edi, 0
  78      00
  79 00a6 E8000000 		call	exit@PLT
  79      00
  80              		.cfi_endproc
  81              	.LFE6:
  83              		.section	.rodata
  84 002a 0000     		.align 4
  85              	.LC1:
  86 002c CDCC4441 		.long	1095027917
  87              		.align 4
  88              	.LC4:
  89 0030 9A99193F 		.long	1058642330
  90              		.text
  91              	.Letext0:
  92              		.file 2 "/usr/include/stdlib.h"
  93              		.file 3 "/usr/include/stdio.h"
 441              		.section	.note.gnu.property,"a"
 442              		.align 8
 443 0000 04000000 		.long	1f - 0f
 444 0004 10000000 		.long	4f - 1f
 445 0008 05000000 		.long	5
 446              	0:
 447 000c 474E5500 		.string	"GNU"
 448              	1:
 449              		.align 8
 450 0010 020000C0 		.long	0xc0000002
 451 0014 04000000 		.long	3f - 2f
 452              	2:
 453 0018 03000000 		.long	0x3
 454              	3:
 455 001c 00000000 		.align 8
 456              	4:
