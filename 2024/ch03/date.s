   1              		.file	"date.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2024/ch03" "date.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 456E7465 		.string	"Enter a date (mm/dd/yy): "
   8      72206120 
   8      64617465 
   8      20286D6D 
   8      2F64642F 
   9              	.LC1:
  10 001a 2532642F 		.string	"%2d/%2d/%2d"
  10      2532642F 
  10      25326400 
  11              	.LC2:
  12 0026 54727969 		.string	"Trying to suck, eh?\n"
  12      6E672074 
  12      6F207375 
  12      636B2C20 
  12      65683F0A 
  13 003b 00000000 		.align 8
  13      00
  14              	.LC3:
  15 0040 596F7520 		.string	"You entered the date %.2d%.2d%.2d\n"
  15      656E7465 
  15      72656420 
  15      74686520 
  15      64617465 
  16              		.text
  17              		.globl	main
  19              	main:
  20              	.LFB6:
  21              		.file 1 "date.c"
   1:date.c        **** /*
   2:date.c        ****  *
   3:date.c        ****  *   File:
   4:date.c        ****  *      date.c
   5:date.c        ****  *
   6:date.c        ****  *   Synopsis:
   7:date.c        ****  *
   8:date.c        ****  *   Revision History:
   9:date.c        ****  *      Date    Change Description
  10:date.c        ****  *      ------  -----------------------------------------
  11:date.c        ****  *      240503  Original.
  12:date.c        ****  *
  13:date.c        ****  */
  14:date.c        **** 
  15:date.c        **** #include <stdio.h>
  16:date.c        **** #include <stdlib.h>
  17:date.c        **** 
  18:date.c        **** int main(void) {
  22              		.loc 1 18 16
  23              		.cfi_startproc
  24 0000 F30F1EFA 		endbr64
  25 0004 55       		push	rbp
  26              		.cfi_def_cfa_offset 16
  27              		.cfi_offset 6, -16
  28 0005 4889E5   		mov	rbp, rsp
  29              		.cfi_def_cfa_register 6
  30 0008 4883EC20 		sub	rsp, 32
  31              		.loc 1 18 16
  32 000c 64488B04 		mov	rax, QWORD PTR fs:40
  32      25280000 
  32      00
  33 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  34 0019 31C0     		xor	eax, eax
  19:date.c        ****   int month, day, year;
  20:date.c        ****   printf("Enter a date (mm/dd/yy): ");
  35              		.loc 1 20 3
  36 001b 488D0500 		lea	rax, .LC0[rip]
  36      000000
  37 0022 4889C7   		mov	rdi, rax
  38 0025 B8000000 		mov	eax, 0
  38      00
  39 002a E8000000 		call	printf@PLT
  39      00
  21:date.c        ****   int result = scanf("%2d/%2d/%2d", &month, &day, &year);
  40              		.loc 1 21 16
  41 002f 488D4DF0 		lea	rcx, -16[rbp]
  42 0033 488D55EC 		lea	rdx, -20[rbp]
  43 0037 488D45E8 		lea	rax, -24[rbp]
  44 003b 4889C6   		mov	rsi, rax
  45 003e 488D0500 		lea	rax, .LC1[rip]
  45      000000
  46 0045 4889C7   		mov	rdi, rax
  47 0048 B8000000 		mov	eax, 0
  47      00
  48 004d E8000000 		call	__isoc99_scanf@PLT
  48      00
  49 0052 8945F4   		mov	DWORD PTR -12[rbp], eax
  22:date.c        **** 
  23:date.c        ****   if ( result != 3 ) {
  50              		.loc 1 23 6
  51 0055 837DF403 		cmp	DWORD PTR -12[rbp], 3
  52 0059 742D     		je	.L2
  24:date.c        ****     fprintf(stderr, "Trying to suck, eh?\n");
  53              		.loc 1 24 5
  54 005b 488B0500 		mov	rax, QWORD PTR stderr[rip]
  54      000000
  55 0062 4889C1   		mov	rcx, rax
  56 0065 BA140000 		mov	edx, 20
  56      00
  57 006a BE010000 		mov	esi, 1
  57      00
  58 006f 488D0500 		lea	rax, .LC2[rip]
  58      000000
  59 0076 4889C7   		mov	rdi, rax
  60 0079 E8000000 		call	fwrite@PLT
  60      00
  25:date.c        ****     exit(EXIT_FAILURE);
  61              		.loc 1 25 5
  62 007e BF010000 		mov	edi, 1
  62      00
  63 0083 E8000000 		call	exit@PLT
  63      00
  64              	.L2:
  26:date.c        ****   } else {
  27:date.c        ****     printf("You entered the date %.2d%.2d%.2d\n", year, month, day);
  65              		.loc 1 27 5
  66 0088 8B4DEC   		mov	ecx, DWORD PTR -20[rbp]
  67 008b 8B55E8   		mov	edx, DWORD PTR -24[rbp]
  68 008e 8B45F0   		mov	eax, DWORD PTR -16[rbp]
  69 0091 89C6     		mov	esi, eax
  70 0093 488D0500 		lea	rax, .LC3[rip]
  70      000000
  71 009a 4889C7   		mov	rdi, rax
  72 009d B8000000 		mov	eax, 0
  72      00
  73 00a2 E8000000 		call	printf@PLT
  73      00
  28:date.c        ****     exit(EXIT_SUCCESS);
  74              		.loc 1 28 5
  75 00a7 BF000000 		mov	edi, 0
  75      00
  76 00ac E8000000 		call	exit@PLT
  76      00
  77              		.cfi_endproc
  78              	.LFE6:
  80              	.Letext0:
  81              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h"
  82              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
  83              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
  84              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
  85              		.file 6 "/usr/include/stdlib.h"
  86              		.file 7 "/usr/include/stdio.h"
 940              		.section	.note.gnu.property,"a"
 941              		.align 8
 942 0000 04000000 		.long	1f - 0f
 943 0004 10000000 		.long	4f - 1f
 944 0008 05000000 		.long	5
 945              	0:
 946 000c 474E5500 		.string	"GNU"
 947              	1:
 948              		.align 8
 949 0010 020000C0 		.long	0xc0000002
 950 0014 04000000 		.long	3f - 2f
 951              	2:
 952 0018 03000000 		.long	0x3
 953              	3:
 954 001c 00000000 		.align 8
 955              	4:
