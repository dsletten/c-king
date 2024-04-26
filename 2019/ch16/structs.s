   1              		.file	"structs.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.section	.rodata
   6              	.LC1:
   7 0000 25642025 		.string	"%d %f\n"
   7      660A00
   8              		.text
   9              		.globl	main
  11              	main:
  12              	.LFB5:
  13              		.file 1 "structs.c"
   1:structs.c     **** /*
   2:structs.c     ****  *
   3:structs.c     ****  *   File:
   4:structs.c     ****  *      structs.c
   5:structs.c     ****  *
   6:structs.c     ****  *   Synopsis:
   7:structs.c     ****  *
   8:structs.c     ****  *   Revision History:
   9:structs.c     ****  *      Date    Change Description
  10:structs.c     ****  *      ------  -----------------------------------------
  11:structs.c     ****  *      200615  Original.
  12:structs.c     ****  *
  13:structs.c     ****  */
  14:structs.c     **** 
  15:structs.c     **** #include <stdio.h>
  16:structs.c     **** #include <stdlib.h>
  17:structs.c     **** 
  18:structs.c     **** struct a {
  19:structs.c     ****   int i;
  20:structs.c     ****   double d;
  21:structs.c     **** };
  22:structs.c     **** 
  23:structs.c     **** struct a f(int i, double d);
  24:structs.c     **** 
  25:structs.c     **** int main(void) {
  14              		.loc 1 25 0
  15              		.cfi_startproc
  16 0000 55       		push	rbp
  17              		.cfi_def_cfa_offset 16
  18              		.cfi_offset 6, -16
  19 0001 4889E5   		mov	rbp, rsp
  20              		.cfi_def_cfa_register 6
  21 0004 4883EC20 		sub	rsp, 32
  26:structs.c     ****   struct a a1 = f(3, 2.57184);
  22              		.loc 1 26 0
  23 0008 488B0500 		mov	rax, QWORD PTR .LC0[rip]
  23      000000
  24 000f 488945E8 		mov	QWORD PTR -24[rbp], rax
  25 0013 F20F1045 		movsd	xmm0, QWORD PTR -24[rbp]
  25      E8
  26 0018 BF030000 		mov	edi, 3
  26      00
  27 001d E8000000 		call	f
  27      00
  28 0022 89C2     		mov	edx, eax
  29 0024 66480F7E 		movq	rax, xmm0
  29      C0
  30 0029 8955F0   		mov	DWORD PTR -16[rbp], edx
  31 002c 488945F8 		mov	QWORD PTR -8[rbp], rax
  27:structs.c     **** 
  28:structs.c     ****   printf("%d %f\n", a1.i, a1.d);
  32              		.loc 1 28 0
  33 0030 488B55F8 		mov	rdx, QWORD PTR -8[rbp]
  34 0034 8B45F0   		mov	eax, DWORD PTR -16[rbp]
  35 0037 488955E8 		mov	QWORD PTR -24[rbp], rdx
  36 003b F20F1045 		movsd	xmm0, QWORD PTR -24[rbp]
  36      E8
  37 0040 89C6     		mov	esi, eax
  38 0042 488D3D00 		lea	rdi, .LC1[rip]
  38      000000
  39 0049 B8010000 		mov	eax, 1
  39      00
  40 004e E8000000 		call	printf@PLT
  40      00
  29:structs.c     **** 
  30:structs.c     ****   exit(EXIT_SUCCESS);
  41              		.loc 1 30 0
  42 0053 BF000000 		mov	edi, 0
  42      00
  43 0058 E8000000 		call	exit@PLT
  43      00
  44              		.cfi_endproc
  45              	.LFE5:
  47              		.globl	f
  49              	f:
  50              	.LFB6:
  31:structs.c     **** }
  32:structs.c     **** 
  33:structs.c     **** struct a f(int i, double d) {
  51              		.loc 1 33 0
  52              		.cfi_startproc
  53 005d 55       		push	rbp
  54              		.cfi_def_cfa_offset 16
  55              		.cfi_offset 6, -16
  56 005e 4889E5   		mov	rbp, rsp
  57              		.cfi_def_cfa_register 6
  58 0061 53       		push	rbx
  59              		.cfi_offset 3, -24
  60 0062 897DE4   		mov	DWORD PTR -28[rbp], edi
  61 0065 F20F1145 		movsd	QWORD PTR -40[rbp], xmm0
  61      D8
  34:structs.c     ****   struct a a1 = {i, d};
  62              		.loc 1 34 0
  63 006a 8B45E4   		mov	eax, DWORD PTR -28[rbp]
  64 006d 8945E8   		mov	DWORD PTR -24[rbp], eax
  65 0070 F20F1045 		movsd	xmm0, QWORD PTR -40[rbp]
  65      D8
  66 0075 F20F1145 		movsd	QWORD PTR -16[rbp], xmm0
  66      F0
  35:structs.c     **** 
  36:structs.c     ****   return a1;
  67              		.loc 1 36 0
  68 007a 488B45E8 		mov	rax, QWORD PTR -24[rbp]
  69 007e 488B55F0 		mov	rdx, QWORD PTR -16[rbp]
  70 0082 4889C1   		mov	rcx, rax
  71 0085 4889D3   		mov	rbx, rdx
  72 0088 4889C6   		mov	rsi, rax
  73 008b 4889D7   		mov	rdi, rdx
  74 008e 89C8     		mov	eax, ecx
  75 0090 48897DD0 		mov	QWORD PTR -48[rbp], rdi
  76 0094 F20F1045 		movsd	xmm0, QWORD PTR -48[rbp]
  76      D0
  37:structs.c     **** }
  77              		.loc 1 37 0
  78 0099 5B       		pop	rbx
  79 009a 5D       		pop	rbp
  80              		.cfi_def_cfa 7, 8
  81 009b C3       		ret
  82              		.cfi_endproc
  83              	.LFE6:
  85              		.section	.rodata
  86 0007 00       		.align 8
  87              	.LC0:
  88 0008 6C5B94D9 		.long	3650378604
  89 000c 20930440 		.long	1074041632
  90              		.text
  91              	.Letext0:
  92              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h"
  93              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
  94              		.file 4 "/usr/include/x86_64-linux-gnu/bits/libio.h"
  95              		.file 5 "/usr/include/stdio.h"
  96              		.file 6 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
