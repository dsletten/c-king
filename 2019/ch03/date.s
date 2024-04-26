   1              		.file	"date.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch03" "date.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 456E7465 		.string	"Enter a date (mm/dd/yy): "
   8      72206120 
   8      64617465 
   8      20286D6D 
   8      2F64642F 
   9              	.LC1:
  10 001a 25642F25 		.string	"%d/%d/%d"
  10      642F2564 
  10      00
  11              	.LC2:
  12 0023 7363616E 		.string	"scanf returned: %d\n"
  12      66207265 
  12      7475726E 
  12      65643A20 
  12      25640A00 
  13 0037 00       		.align 8
  14              	.LC3:
  15 0038 596F7520 		.string	"You entered the date %.2d%.2d%.2d\n"
  15      656E7465 
  15      72656420 
  15      74686520 
  15      64617465 
  16 005b 00000000 		.align 8
  16      00
  17              	.LC4:
  18 0060 456E7465 		.string	"Enter a strict date (mm/dd/yy): "
  18      72206120 
  18      73747269 
  18      63742064 
  18      61746520 
  19              	.LC5:
  20 0081 2532642F 		.string	"%2d/%2d/%4d"
  20      2532642F 
  20      25346400 
  21              		.text
  22              		.globl	main
  24              	main:
  25              	.LFB6:
  26              		.file 1 "date.c"
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
  11:date.c        ****  *      190729  Original.
  12:date.c        ****  *
  13:date.c        ****  */
  14:date.c        **** #include <stdio.h>
  15:date.c        **** #include <stdlib.h>
  16:date.c        **** 
  17:date.c        **** int main(void) {
  27              		.loc 1 17 16
  28              		.cfi_startproc
  29 0000 F30F1EFA 		endbr64
  30 0004 55       		push	rbp
  31              		.cfi_def_cfa_offset 16
  32              		.cfi_offset 6, -16
  33 0005 4889E5   		mov	rbp, rsp
  34              		.cfi_def_cfa_register 6
  35 0008 4883EC20 		sub	rsp, 32
  36              		.loc 1 17 16
  37 000c 64488B04 		mov	rax, QWORD PTR fs:40
  37      25280000 
  37      00
  38 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  39 0019 31C0     		xor	eax, eax
  18:date.c        ****   int month = 0, day = 0, year = 0;
  40              		.loc 1 18 7
  41 001b C745E800 		mov	DWORD PTR -24[rbp], 0
  41      000000
  42              		.loc 1 18 18
  43 0022 C745EC00 		mov	DWORD PTR -20[rbp], 0
  43      000000
  44              		.loc 1 18 27
  45 0029 C745F000 		mov	DWORD PTR -16[rbp], 0
  45      000000
  19:date.c        **** 
  20:date.c        ****   printf("Enter a date (mm/dd/yy): ");
  46              		.loc 1 20 3
  47 0030 488D0500 		lea	rax, .LC0[rip]
  47      000000
  48 0037 4889C7   		mov	rdi, rax
  49 003a B8000000 		mov	eax, 0
  49      00
  50 003f E8000000 		call	printf@PLT
  50      00
  21:date.c        ****   int result = scanf("%d/%d/%d", &month, &day, &year);
  51              		.loc 1 21 16
  52 0044 488D4DF0 		lea	rcx, -16[rbp]
  53 0048 488D55EC 		lea	rdx, -20[rbp]
  54 004c 488D45E8 		lea	rax, -24[rbp]
  55 0050 4889C6   		mov	rsi, rax
  56 0053 488D0500 		lea	rax, .LC1[rip]
  56      000000
  57 005a 4889C7   		mov	rdi, rax
  58 005d B8000000 		mov	eax, 0
  58      00
  59 0062 E8000000 		call	__isoc99_scanf@PLT
  59      00
  60 0067 8945F4   		mov	DWORD PTR -12[rbp], eax
  22:date.c        **** 
  23:date.c        ****   printf("scanf returned: %d\n", result);
  61              		.loc 1 23 3
  62 006a 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  63 006d 89C6     		mov	esi, eax
  64 006f 488D0500 		lea	rax, .LC2[rip]
  64      000000
  65 0076 4889C7   		mov	rdi, rax
  66 0079 B8000000 		mov	eax, 0
  66      00
  67 007e E8000000 		call	printf@PLT
  67      00
  24:date.c        ****   printf("You entered the date %.2d%.2d%.2d\n", year, month, day);
  68              		.loc 1 24 3
  69 0083 8B4DEC   		mov	ecx, DWORD PTR -20[rbp]
  70 0086 8B55E8   		mov	edx, DWORD PTR -24[rbp]
  71 0089 8B45F0   		mov	eax, DWORD PTR -16[rbp]
  72 008c 89C6     		mov	esi, eax
  73 008e 488D0500 		lea	rax, .LC3[rip]
  73      000000
  74 0095 4889C7   		mov	rdi, rax
  75 0098 B8000000 		mov	eax, 0
  75      00
  76 009d E8000000 		call	printf@PLT
  76      00
  25:date.c        ****   
  26:date.c        ****   printf("Enter a strict date (mm/dd/yy): ");
  77              		.loc 1 26 3
  78 00a2 488D0500 		lea	rax, .LC4[rip]
  78      000000
  79 00a9 4889C7   		mov	rdi, rax
  80 00ac B8000000 		mov	eax, 0
  80      00
  81 00b1 E8000000 		call	printf@PLT
  81      00
  27:date.c        ****   result = scanf("%2d/%2d/%4d", &month, &day, &year);
  82              		.loc 1 27 12
  83 00b6 488D4DF0 		lea	rcx, -16[rbp]
  84 00ba 488D55EC 		lea	rdx, -20[rbp]
  85 00be 488D45E8 		lea	rax, -24[rbp]
  86 00c2 4889C6   		mov	rsi, rax
  87 00c5 488D0500 		lea	rax, .LC5[rip]
  87      000000
  88 00cc 4889C7   		mov	rdi, rax
  89 00cf B8000000 		mov	eax, 0
  89      00
  90 00d4 E8000000 		call	__isoc99_scanf@PLT
  90      00
  91 00d9 8945F4   		mov	DWORD PTR -12[rbp], eax
  28:date.c        **** 
  29:date.c        ****   printf("scanf returned: %d\n", result);
  92              		.loc 1 29 3
  93 00dc 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  94 00df 89C6     		mov	esi, eax
  95 00e1 488D0500 		lea	rax, .LC2[rip]
  95      000000
  96 00e8 4889C7   		mov	rdi, rax
  97 00eb B8000000 		mov	eax, 0
  97      00
  98 00f0 E8000000 		call	printf@PLT
  98      00
  30:date.c        ****   printf("You entered the date %.2d%.2d%.2d\n", year, month, day);
  99              		.loc 1 30 3
 100 00f5 8B4DEC   		mov	ecx, DWORD PTR -20[rbp]
 101 00f8 8B55E8   		mov	edx, DWORD PTR -24[rbp]
 102 00fb 8B45F0   		mov	eax, DWORD PTR -16[rbp]
 103 00fe 89C6     		mov	esi, eax
 104 0100 488D0500 		lea	rax, .LC3[rip]
 104      000000
 105 0107 4889C7   		mov	rdi, rax
 106 010a B8000000 		mov	eax, 0
 106      00
 107 010f E8000000 		call	printf@PLT
 107      00
  31:date.c        ****   
  32:date.c        ****   exit(EXIT_SUCCESS);
 108              		.loc 1 32 3
 109 0114 BF000000 		mov	edi, 0
 109      00
 110 0119 E8000000 		call	exit@PLT
 110      00
 111              		.cfi_endproc
 112              	.LFE6:
 114              	.Letext0:
 115              		.file 2 "/usr/include/stdlib.h"
 116              		.file 3 "/usr/include/stdio.h"
 523              		.section	.note.gnu.property,"a"
 524              		.align 8
 525 0000 04000000 		.long	1f - 0f
 526 0004 10000000 		.long	4f - 1f
 527 0008 05000000 		.long	5
 528              	0:
 529 000c 474E5500 		.string	"GNU"
 530              	1:
 531              		.align 8
 532 0010 020000C0 		.long	0xc0000002
 533 0014 04000000 		.long	3f - 2f
 534              	2:
 535 0018 03000000 		.long	0x3
 536              	3:
 537 001c 00000000 		.align 8
 538              	4:
