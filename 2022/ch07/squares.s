   1              		.file	"squares.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2022/ch07" "squares.c"
   6              		.section	.rodata
   7              		.align 8
   8              	.LC0:
   9 0000 54686973 		.string	"This program prints a table of squares."
   9      2070726F 
   9      6772616D 
   9      20707269 
   9      6E747320 
  10              		.align 8
  11              	.LC1:
  12 0028 456E7465 		.string	"Enter number of entries in table: "
  12      72206E75 
  12      6D626572 
  12      206F6620 
  12      656E7472 
  13              	.LC2:
  14 004b 256400   		.string	"%d"
  15              	.LC3:
  16 004e 25323064 		.string	"%20d%20d\n"
  16      25323064 
  16      0A00
  17              		.text
  18              		.globl	main
  20              	main:
  21              	.LFB6:
  22              		.file 1 "squares.c"
   1:squares.c     **** /*
   2:squares.c     ****  *
   3:squares.c     ****  *   File:
   4:squares.c     ****  *      squares.c
   5:squares.c     ****  *
   6:squares.c     ****  *   Synopsis:
   7:squares.c     ****  *
   8:squares.c     ****  *   Revision History:
   9:squares.c     ****  *      Date    Change Description
  10:squares.c     ****  *      ------  -----------------------------------------
  11:squares.c     ****  *      221202  Original.
  12:squares.c     ****  *
  13:squares.c     ****  */
  14:squares.c     **** 
  15:squares.c     **** #include <stdio.h>
  16:squares.c     **** #include <stdlib.h>
  17:squares.c     **** 
  18:squares.c     **** int main(void) {
  23              		.loc 1 18 16
  24              		.cfi_startproc
  25 0000 F30F1EFA 		endbr64
  26 0004 55       		push	rbp
  27              		.cfi_def_cfa_offset 16
  28              		.cfi_offset 6, -16
  29 0005 4889E5   		mov	rbp, rsp
  30              		.cfi_def_cfa_register 6
  31 0008 4883EC20 		sub	rsp, 32
  32              		.loc 1 18 16
  33 000c 64488B04 		mov	rax, QWORD PTR fs:40
  33      25280000 
  33      00
  34 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  35 0019 31C0     		xor	eax, eax
  19:squares.c     ****   printf("This program prints a table of squares.\n");
  36              		.loc 1 19 3
  37 001b 488D0500 		lea	rax, .LC0[rip]
  37      000000
  38 0022 4889C7   		mov	rdi, rax
  39 0025 E8000000 		call	puts@PLT
  39      00
  20:squares.c     **** 
  21:squares.c     ****   printf("Enter number of entries in table: ");
  40              		.loc 1 21 3
  41 002a 488D0500 		lea	rax, .LC1[rip]
  41      000000
  42 0031 4889C7   		mov	rdi, rax
  43 0034 B8000000 		mov	eax, 0
  43      00
  44 0039 E8000000 		call	printf@PLT
  44      00
  22:squares.c     ****   int n;
  23:squares.c     ****   scanf("%d", &n);
  45              		.loc 1 23 3
  46 003e 488D45E8 		lea	rax, -24[rbp]
  47 0042 4889C6   		mov	rsi, rax
  48 0045 488D0500 		lea	rax, .LC2[rip]
  48      000000
  49 004c 4889C7   		mov	rdi, rax
  50 004f B8000000 		mov	eax, 0
  50      00
  51 0054 E8000000 		call	__isoc99_scanf@PLT
  51      00
  52              	.LBB2:
  24:squares.c     **** 
  25:squares.c     ****   for (int i = 1, odd, square = 0; i <= n; i++) {
  53              		.loc 1 25 12
  54 0059 C745EC01 		mov	DWORD PTR -20[rbp], 1
  54      000000
  55              		.loc 1 25 24
  56 0060 C745F000 		mov	DWORD PTR -16[rbp], 0
  56      000000
  57              		.loc 1 25 3
  58 0067 EB31     		jmp	.L2
  59              	.L3:
  26:squares.c     ****     odd = 2*i - 1;
  60              		.loc 1 26 12 discriminator 3
  61 0069 8B45EC   		mov	eax, DWORD PTR -20[rbp]
  62 006c 01C0     		add	eax, eax
  63              		.loc 1 26 9 discriminator 3
  64 006e 83E801   		sub	eax, 1
  65 0071 8945F4   		mov	DWORD PTR -12[rbp], eax
  27:squares.c     ****     square += odd;
  66              		.loc 1 27 12 discriminator 3
  67 0074 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  68 0077 0145F0   		add	DWORD PTR -16[rbp], eax
  28:squares.c     **** 
  29:squares.c     ****     printf("%20d%20d\n", i, square);
  69              		.loc 1 29 5 discriminator 3
  70 007a 8B55F0   		mov	edx, DWORD PTR -16[rbp]
  71 007d 8B45EC   		mov	eax, DWORD PTR -20[rbp]
  72 0080 89C6     		mov	esi, eax
  73 0082 488D0500 		lea	rax, .LC3[rip]
  73      000000
  74 0089 4889C7   		mov	rdi, rax
  75 008c B8000000 		mov	eax, 0
  75      00
  76 0091 E8000000 		call	printf@PLT
  76      00
  25:squares.c     ****     odd = 2*i - 1;
  77              		.loc 1 25 45 discriminator 3
  78 0096 8345EC01 		add	DWORD PTR -20[rbp], 1
  79              	.L2:
  25:squares.c     ****     odd = 2*i - 1;
  80              		.loc 1 25 38 discriminator 1
  81 009a 8B45E8   		mov	eax, DWORD PTR -24[rbp]
  82 009d 3945EC   		cmp	DWORD PTR -20[rbp], eax
  83 00a0 7EC7     		jle	.L3
  84              	.LBE2:
  30:squares.c     ****   }
  31:squares.c     **** 
  32:squares.c     ****   exit(EXIT_SUCCESS);
  85              		.loc 1 32 3
  86 00a2 BF000000 		mov	edi, 0
  86      00
  87 00a7 E8000000 		call	exit@PLT
  87      00
  88              		.cfi_endproc
  89              	.LFE6:
  91              	.Letext0:
  92              		.file 2 "/usr/include/stdlib.h"
  93              		.file 3 "/usr/include/stdio.h"
 509              		.section	.note.gnu.property,"a"
 510              		.align 8
 511 0000 04000000 		.long	1f - 0f
 512 0004 10000000 		.long	4f - 1f
 513 0008 05000000 		.long	5
 514              	0:
 515 000c 474E5500 		.string	"GNU"
 516              	1:
 517              		.align 8
 518 0010 020000C0 		.long	0xc0000002
 519 0014 04000000 		.long	3f - 2f
 520              	2:
 521 0018 03000000 		.long	0x3
 522              	3:
 523 001c 00000000 		.align 8
 524              	4:
