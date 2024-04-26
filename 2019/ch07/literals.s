   1              		.file	"literals.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.section	.rodata
   6              	.LC0:
   7 0000 25642025 		.string	"%d %d %d %d %d\n"
   7      64202564 
   7      20256420 
   7      25640A00 
   8              	.LC1:
   9 0010 25640A00 		.string	"%d\n"
  10              		.text
  11              		.globl	main
  13              	main:
  14              	.LFB5:
  15              		.file 1 "literals.c"
   1:literals.c    **** /*
   2:literals.c    ****  *
   3:literals.c    ****  *   File:
   4:literals.c    ****  *      literals.c
   5:literals.c    ****  *
   6:literals.c    ****  *   Synopsis:
   7:literals.c    ****  *
   8:literals.c    ****  *   Revision History:
   9:literals.c    ****  *      Date    Change Description
  10:literals.c    ****  *      ------  -----------------------------------------
  11:literals.c    ****  *      200111  Original.
  12:literals.c    ****  *
  13:literals.c    ****  */
  14:literals.c    **** #include <stdio.h>
  15:literals.c    **** #include <stdlib.h>
  16:literals.c    **** 
  17:literals.c    **** int main(void) {
  16              		.loc 1 17 0
  17              		.cfi_startproc
  18 0000 55       		push	rbp
  19              		.cfi_def_cfa_offset 16
  20              		.cfi_offset 6, -16
  21 0001 4889E5   		mov	rbp, rsp
  22              		.cfi_def_cfa_register 6
  23 0004 4883EC20 		sub	rsp, 32
  18:literals.c    ****   int i = 00;
  24              		.loc 1 18 0
  25 0008 C745EC00 		mov	DWORD PTR -20[rbp], 0
  25      000000
  19:literals.c    ****   int j = 0377;
  26              		.loc 1 19 0
  27 000f C745F0FF 		mov	DWORD PTR -16[rbp], 255
  27      000000
  20:literals.c    ****   int k = 0x000;
  28              		.loc 1 20 0
  29 0016 C745F400 		mov	DWORD PTR -12[rbp], 0
  29      000000
  21:literals.c    ****   int m = 0x0000f;
  30              		.loc 1 21 0
  31 001d C745F80F 		mov	DWORD PTR -8[rbp], 15
  31      000000
  22:literals.c    ****   int n = -1;
  32              		.loc 1 22 0
  33 0024 C745FCFF 		mov	DWORD PTR -4[rbp], -1
  33      FFFFFF
  23:literals.c    **** 
  24:literals.c    ****   printf("%d %d %d %d %d\n", i , j, k, m, n);
  34              		.loc 1 24 0
  35 002b 8B7DFC   		mov	edi, DWORD PTR -4[rbp]
  36 002e 8B75F8   		mov	esi, DWORD PTR -8[rbp]
  37 0031 8B4DF4   		mov	ecx, DWORD PTR -12[rbp]
  38 0034 8B55F0   		mov	edx, DWORD PTR -16[rbp]
  39 0037 8B45EC   		mov	eax, DWORD PTR -20[rbp]
  40 003a 4189F9   		mov	r9d, edi
  41 003d 4189F0   		mov	r8d, esi
  42 0040 89C6     		mov	esi, eax
  43 0042 488D3D00 		lea	rdi, .LC0[rip]
  43      000000
  44 0049 B8000000 		mov	eax, 0
  44      00
  45 004e E8000000 		call	printf@PLT
  45      00
  25:literals.c    ****   printf("%d\n", j * -2);
  46              		.loc 1 25 0
  47 0053 8B55F0   		mov	edx, DWORD PTR -16[rbp]
  48 0056 B8000000 		mov	eax, 0
  48      00
  49 005b 29D0     		sub	eax, edx
  50 005d 01C0     		add	eax, eax
  51 005f 89C6     		mov	esi, eax
  52 0061 488D3D00 		lea	rdi, .LC1[rip]
  52      000000
  53 0068 B8000000 		mov	eax, 0
  53      00
  54 006d E8000000 		call	printf@PLT
  54      00
  26:literals.c    **** 
  27:literals.c    ****   exit(EXIT_SUCCESS);
  55              		.loc 1 27 0
  56 0072 BF000000 		mov	edi, 0
  56      00
  57 0077 E8000000 		call	exit@PLT
  57      00
  58              		.cfi_endproc
  59              	.LFE5:
  61              	.Letext0:
  62              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h"
  63              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
  64              		.file 4 "/usr/include/x86_64-linux-gnu/bits/libio.h"
  65              		.file 5 "/usr/include/stdio.h"
  66              		.file 6 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
