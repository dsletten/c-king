   1              		.file	"conversions.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.section	.rodata
   6              	.LC0:
   7 0000 25640A00 		.string	"%d\n"
   8              	.LC1:
   9 0004 252E3130 		.string	"%.10f\n"
   9      660A00
  10              		.text
  11              		.globl	main
  13              	main:
  14              	.LFB5:
  15              		.file 1 "conversions.c"
   1:conversions.c **** /*
   2:conversions.c ****  *
   3:conversions.c ****  *   File:
   4:conversions.c ****  *      conversions.c
   5:conversions.c ****  *
   6:conversions.c ****  *   Synopsis:
   7:conversions.c ****  *       Chapter 9 ex. 7
   8:conversions.c ****  *
   9:conversions.c ****  *   Revision History:
  10:conversions.c ****  *      Date    Change Description
  11:conversions.c ****  *      ------  -----------------------------------------
  12:conversions.c ****  *      200423  Original.
  13:conversions.c ****  *
  14:conversions.c ****  */
  15:conversions.c **** #include <stdio.h>
  16:conversions.c **** #include <stdlib.h>
  17:conversions.c **** 
  18:conversions.c **** int f(int a, int b);
  19:conversions.c **** 
  20:conversions.c **** int main(void) {
  16              		.loc 1 20 0
  17              		.cfi_startproc
  18 0000 55       		push	rbp
  19              		.cfi_def_cfa_offset 16
  20              		.cfi_offset 6, -16
  21 0001 4889E5   		mov	rbp, rsp
  22              		.cfi_def_cfa_register 6
  23 0004 4883EC10 		sub	rsp, 16
  21:conversions.c ****   int i;
  22:conversions.c ****   float x;
  23:conversions.c ****   
  24:conversions.c ****   i = f(83, 12);
  24              		.loc 1 24 0
  25 0008 BE0C0000 		mov	esi, 12
  25      00
  26 000d BF530000 		mov	edi, 83
  26      00
  27 0012 E8000000 		call	f
  27      00
  28 0017 8945F8   		mov	DWORD PTR -8[rbp], eax
  25:conversions.c ****   printf("%d\n", i);
  29              		.loc 1 25 0
  30 001a 8B45F8   		mov	eax, DWORD PTR -8[rbp]
  31 001d 89C6     		mov	esi, eax
  32 001f 488D3D00 		lea	rdi, .LC0[rip]
  32      000000
  33 0026 B8000000 		mov	eax, 0
  33      00
  34 002b E8000000 		call	printf@PLT
  34      00
  26:conversions.c **** 
  27:conversions.c ****   x = f(83, 12);
  35              		.loc 1 27 0
  36 0030 BE0C0000 		mov	esi, 12
  36      00
  37 0035 BF530000 		mov	edi, 83
  37      00
  38 003a E8000000 		call	f
  38      00
  39 003f F30F2AC0 		cvtsi2ss	xmm0, eax
  40 0043 F30F1145 		movss	DWORD PTR -4[rbp], xmm0
  40      FC
  28:conversions.c ****   printf("%.10f\n", x);
  41              		.loc 1 28 0
  42 0048 F30F5A45 		cvtss2sd	xmm0, DWORD PTR -4[rbp]
  42      FC
  43 004d 488D3D00 		lea	rdi, .LC1[rip]
  43      000000
  44 0054 B8010000 		mov	eax, 1
  44      00
  45 0059 E8000000 		call	printf@PLT
  45      00
  29:conversions.c **** 
  30:conversions.c ****   i = f(3.15, 9.28);
  46              		.loc 1 30 0
  47 005e BE090000 		mov	esi, 9
  47      00
  48 0063 BF030000 		mov	edi, 3
  48      00
  49 0068 E8000000 		call	f
  49      00
  50 006d 8945F8   		mov	DWORD PTR -8[rbp], eax
  31:conversions.c ****   printf("%d\n", i);
  51              		.loc 1 31 0
  52 0070 8B45F8   		mov	eax, DWORD PTR -8[rbp]
  53 0073 89C6     		mov	esi, eax
  54 0075 488D3D00 		lea	rdi, .LC0[rip]
  54      000000
  55 007c B8000000 		mov	eax, 0
  55      00
  56 0081 E8000000 		call	printf@PLT
  56      00
  32:conversions.c **** 
  33:conversions.c ****   x = f(3.15, 9.28);
  57              		.loc 1 33 0
  58 0086 BE090000 		mov	esi, 9
  58      00
  59 008b BF030000 		mov	edi, 3
  59      00
  60 0090 E8000000 		call	f
  60      00
  61 0095 F30F2AC0 		cvtsi2ss	xmm0, eax
  62 0099 F30F1145 		movss	DWORD PTR -4[rbp], xmm0
  62      FC
  34:conversions.c ****   printf("%.10f\n", x);
  63              		.loc 1 34 0
  64 009e F30F5A45 		cvtss2sd	xmm0, DWORD PTR -4[rbp]
  64      FC
  65 00a3 488D3D00 		lea	rdi, .LC1[rip]
  65      000000
  66 00aa B8010000 		mov	eax, 1
  66      00
  67 00af E8000000 		call	printf@PLT
  67      00
  35:conversions.c **** 
  36:conversions.c ****   f(83, 12);
  68              		.loc 1 36 0
  69 00b4 BE0C0000 		mov	esi, 12
  69      00
  70 00b9 BF530000 		mov	edi, 83
  70      00
  71 00be E8000000 		call	f
  71      00
  37:conversions.c ****   (void) f(83, 12);
  72              		.loc 1 37 0
  73 00c3 BE0C0000 		mov	esi, 12
  73      00
  74 00c8 BF530000 		mov	edi, 83
  74      00
  75 00cd E8000000 		call	f
  75      00
  38:conversions.c **** 
  39:conversions.c ****   exit(EXIT_SUCCESS);
  76              		.loc 1 39 0
  77 00d2 BF000000 		mov	edi, 0
  77      00
  78 00d7 E8000000 		call	exit@PLT
  78      00
  79              		.cfi_endproc
  80              	.LFE5:
  82              		.globl	f
  84              	f:
  85              	.LFB6:
  40:conversions.c **** }
  41:conversions.c **** 
  42:conversions.c **** int f(int a, int b) {
  86              		.loc 1 42 0
  87              		.cfi_startproc
  88 00dc 55       		push	rbp
  89              		.cfi_def_cfa_offset 16
  90              		.cfi_offset 6, -16
  91 00dd 4889E5   		mov	rbp, rsp
  92              		.cfi_def_cfa_register 6
  93 00e0 897DFC   		mov	DWORD PTR -4[rbp], edi
  94 00e3 8975F8   		mov	DWORD PTR -8[rbp], esi
  43:conversions.c ****   return a + b;
  95              		.loc 1 43 0
  96 00e6 8B55FC   		mov	edx, DWORD PTR -4[rbp]
  97 00e9 8B45F8   		mov	eax, DWORD PTR -8[rbp]
  98 00ec 01D0     		add	eax, edx
  44:conversions.c **** }
  99              		.loc 1 44 0
 100 00ee 5D       		pop	rbp
 101              		.cfi_def_cfa 7, 8
 102 00ef C3       		ret
 103              		.cfi_endproc
 104              	.LFE6:
 106              	.Letext0:
 107              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h"
 108              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 109              		.file 4 "/usr/include/x86_64-linux-gnu/bits/libio.h"
 110              		.file 5 "/usr/include/stdio.h"
 111              		.file 6 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
