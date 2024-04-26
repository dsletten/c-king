   1              		.file	"squares.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch06" "squares.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 25640A00 		.string	"%d\n"
   9              		.text
  10              		.globl	main
  12              	main:
  13              	.LFB6:
  14              		.file 1 "squares.c"
   1:squares.c     **** /*
   2:squares.c     ****  *
   3:squares.c     ****  *   File:
   4:squares.c     ****  *      squares.c
   5:squares.c     ****  *
   6:squares.c     ****  *   Synopsis:
   7:squares.c     ****  *      Exercise 6. Print even squares <= limit
   8:squares.c     ****  *   Revision History:
   9:squares.c     ****  *      Date    Change Description
  10:squares.c     ****  *      ------  -----------------------------------------
  11:squares.c     ****  *      200108  Original.
  12:squares.c     ****  *
  13:squares.c     ****  */
  14:squares.c     **** #include <stdio.h>
  15:squares.c     **** #include <stdlib.h>
  16:squares.c     **** 
  17:squares.c     **** int get_limit();
  18:squares.c     **** 
  19:squares.c     **** int main(void) {
  15              		.loc 1 19 16
  16              		.cfi_startproc
  17 0000 F30F1EFA 		endbr64
  18 0004 55       		push	rbp
  19              		.cfi_def_cfa_offset 16
  20              		.cfi_offset 6, -16
  21 0005 4889E5   		mov	rbp, rsp
  22              		.cfi_def_cfa_register 6
  23 0008 4883EC10 		sub	rsp, 16
  20:squares.c     ****   int limit = get_limit();
  24              		.loc 1 20 15
  25 000c B8000000 		mov	eax, 0
  25      00
  26 0011 E8000000 		call	get_limit
  26      00
  27 0016 8945FC   		mov	DWORD PTR -4[rbp], eax
  21:squares.c     **** 
  22:squares.c     ****   int i;
  23:squares.c     ****   int square;
  24:squares.c     ****   for (i = 2, square = i * i; square <= limit; i += 2, square = i * i) {
  28              		.loc 1 24 10
  29 0019 C745F402 		mov	DWORD PTR -12[rbp], 2
  29      000000
  30              		.loc 1 24 22
  31 0020 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  32 0023 0FAFC0   		imul	eax, eax
  33 0026 8945F8   		mov	DWORD PTR -8[rbp], eax
  34              		.loc 1 24 3
  35 0029 EB26     		jmp	.L2
  36              	.L3:
  25:squares.c     ****     printf("%d\n", square);
  37              		.loc 1 25 5 discriminator 3
  38 002b 8B45F8   		mov	eax, DWORD PTR -8[rbp]
  39 002e 89C6     		mov	esi, eax
  40 0030 488D0500 		lea	rax, .LC0[rip]
  40      000000
  41 0037 4889C7   		mov	rdi, rax
  42 003a B8000000 		mov	eax, 0
  42      00
  43 003f E8000000 		call	printf@PLT
  43      00
  24:squares.c     ****     printf("%d\n", square);
  44              		.loc 1 24 50 discriminator 3
  45 0044 8345F402 		add	DWORD PTR -12[rbp], 2
  24:squares.c     ****     printf("%d\n", square);
  46              		.loc 1 24 63 discriminator 3
  47 0048 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  48 004b 0FAFC0   		imul	eax, eax
  49 004e 8945F8   		mov	DWORD PTR -8[rbp], eax
  50              	.L2:
  24:squares.c     ****     printf("%d\n", square);
  51              		.loc 1 24 38 discriminator 1
  52 0051 8B45F8   		mov	eax, DWORD PTR -8[rbp]
  53 0054 3B45FC   		cmp	eax, DWORD PTR -4[rbp]
  54 0057 7ED2     		jle	.L3
  26:squares.c     ****   }
  27:squares.c     **** 
  28:squares.c     ****   exit(EXIT_SUCCESS);
  55              		.loc 1 28 3
  56 0059 BF000000 		mov	edi, 0
  56      00
  57 005e E8000000 		call	exit@PLT
  57      00
  58              		.cfi_endproc
  59              	.LFE6:
  61              		.section	.rodata
  62              	.LC1:
  63 0004 456E7465 		.string	"Enter the upper limit: "
  63      72207468 
  63      65207570 
  63      70657220 
  63      6C696D69 
  64              	.LC2:
  65 001c 256400   		.string	"%d"
  66              		.text
  67              		.globl	get_limit
  69              	get_limit:
  70              	.LFB7:
  29:squares.c     **** }
  30:squares.c     **** 
  31:squares.c     **** int get_limit() {
  71              		.loc 1 31 17
  72              		.cfi_startproc
  73 0063 F30F1EFA 		endbr64
  74 0067 55       		push	rbp
  75              		.cfi_def_cfa_offset 16
  76              		.cfi_offset 6, -16
  77 0068 4889E5   		mov	rbp, rsp
  78              		.cfi_def_cfa_register 6
  79 006b 4883EC10 		sub	rsp, 16
  80              		.loc 1 31 17
  81 006f 64488B04 		mov	rax, QWORD PTR fs:40
  81      25280000 
  81      00
  82 0078 488945F8 		mov	QWORD PTR -8[rbp], rax
  83 007c 31C0     		xor	eax, eax
  32:squares.c     ****   int limit;
  33:squares.c     **** 
  34:squares.c     ****   printf("Enter the upper limit: ");
  84              		.loc 1 34 3
  85 007e 488D0500 		lea	rax, .LC1[rip]
  85      000000
  86 0085 4889C7   		mov	rdi, rax
  87 0088 B8000000 		mov	eax, 0
  87      00
  88 008d E8000000 		call	printf@PLT
  88      00
  35:squares.c     ****   int count = scanf("%d", &limit);
  89              		.loc 1 35 15
  90 0092 488D45F0 		lea	rax, -16[rbp]
  91 0096 4889C6   		mov	rsi, rax
  92 0099 488D0500 		lea	rax, .LC2[rip]
  92      000000
  93 00a0 4889C7   		mov	rdi, rax
  94 00a3 B8000000 		mov	eax, 0
  94      00
  95 00a8 E8000000 		call	__isoc99_scanf@PLT
  95      00
  96 00ad 8945F4   		mov	DWORD PTR -12[rbp], eax
  36:squares.c     **** 
  37:squares.c     ****   if ( count != 1 ) {
  97              		.loc 1 37 6
  98 00b0 837DF401 		cmp	DWORD PTR -12[rbp], 1
  99 00b4 7417     		je	.L5
  38:squares.c     ****     while ( getchar() != '\n' );
 100              		.loc 1 38 11
 101 00b6 90       		nop
 102              	.L6:
 103              		.loc 1 38 13 discriminator 1
 104 00b7 E8000000 		call	getchar@PLT
 104      00
 105              		.loc 1 38 23 discriminator 1
 106 00bc 83F80A   		cmp	eax, 10
 107 00bf 75F6     		jne	.L6
  39:squares.c     ****     return get_limit();
 108              		.loc 1 39 12
 109 00c1 B8000000 		mov	eax, 0
 109      00
 110 00c6 E8000000 		call	get_limit
 110      00
 111 00cb EB16     		jmp	.L9
 112              	.L5:
  40:squares.c     ****   } else if ( limit < 0 ) {
 113              		.loc 1 40 21
 114 00cd 8B45F0   		mov	eax, DWORD PTR -16[rbp]
 115              		.loc 1 40 13
 116 00d0 85C0     		test	eax, eax
 117 00d2 790C     		jns	.L8
  41:squares.c     ****     return get_limit();
 118              		.loc 1 41 12
 119 00d4 B8000000 		mov	eax, 0
 119      00
 120 00d9 E8000000 		call	get_limit
 120      00
 121 00de EB03     		jmp	.L9
 122              	.L8:
  42:squares.c     ****   } else {
  43:squares.c     ****     return limit;
 123              		.loc 1 43 12
 124 00e0 8B45F0   		mov	eax, DWORD PTR -16[rbp]
 125              	.L9:
  44:squares.c     ****   }
  45:squares.c     **** }
 126              		.loc 1 45 1 discriminator 1
 127 00e3 488B55F8 		mov	rdx, QWORD PTR -8[rbp]
 128 00e7 64482B14 		sub	rdx, QWORD PTR fs:40
 128      25280000 
 128      00
 129 00f0 7405     		je	.L10
 130              		.loc 1 45 1 is_stmt 0
 131 00f2 E8000000 		call	__stack_chk_fail@PLT
 131      00
 132              	.L10:
 133 00f7 C9       		leave
 134              		.cfi_def_cfa 7, 8
 135 00f8 C3       		ret
 136              		.cfi_endproc
 137              	.LFE7:
 139              	.Letext0:
 140              		.file 2 "/usr/include/stdlib.h"
 141              		.file 3 "/usr/include/stdio.h"
 623              		.section	.note.gnu.property,"a"
 624              		.align 8
 625 0000 04000000 		.long	1f - 0f
 626 0004 10000000 		.long	4f - 1f
 627 0008 05000000 		.long	5
 628              	0:
 629 000c 474E5500 		.string	"GNU"
 630              	1:
 631              		.align 8
 632 0010 020000C0 		.long	0xc0000002
 633 0014 04000000 		.long	3f - 2f
 634              	2:
 635 0018 03000000 		.long	0x3
 636              	3:
 637 001c 00000000 		.align 8
 638              	4:
