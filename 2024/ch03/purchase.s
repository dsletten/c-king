   1              		.file	"purchase.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2024/ch03" "purchase.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 456E7465 		.string	"Enter item number: "
   8      72206974 
   8      656D206E 
   8      756D6265 
   8      723A2000 
   9              	.LC1:
  10 0014 256400   		.string	"%d"
  11              	.LC2:
  12 0017 456E7465 		.string	"Enter unit price: "
  12      7220756E 
  12      69742070 
  12      72696365 
  12      3A2000
  13              	.LC3:
  14 002a 256C6600 		.string	"%lf"
  15 002e 0000     		.align 8
  16              	.LC4:
  17 0030 456E7465 		.string	"Enter purchase date (mm/dd/yy): "
  17      72207075 
  17      72636861 
  17      73652064 
  17      61746520 
  18              	.LC5:
  19 0051 2532642F 		.string	"%2d/%2d/%2d"
  19      2532642F 
  19      25326400 
  20              	.LC6:
  21 005d 4974656D 		.string	"Item\t\tUnit\t\tPurchase"
  21      0909556E 
  21      69740909 
  21      50757263 
  21      68617365 
  22              	.LC7:
  23 0072 09095072 		.string	"\t\tPrice\t\tDate"
  23      69636509 
  23      09446174 
  23      6500
  24              	.LC8:
  25 0080 25640909 		.string	"%d\t\t$%7.2f\t%.2d/%.2d/%.2d\n"
  25      2425372E 
  25      32660925 
  25      2E32642F 
  25      252E3264 
  26              		.text
  27              		.globl	main
  29              	main:
  30              	.LFB6:
  31              		.file 1 "purchase.c"
   1:purchase.c    **** /*
   2:purchase.c    ****  *
   3:purchase.c    ****  *   File:
   4:purchase.c    ****  *      purchase.c
   5:purchase.c    ****  *
   6:purchase.c    ****  *   Synopsis:
   7:purchase.c    ****  *
   8:purchase.c    ****  *   Revision History:
   9:purchase.c    ****  *      Date    Change Description
  10:purchase.c    ****  *      ------  -----------------------------------------
  11:purchase.c    ****  *      240503  Original.
  12:purchase.c    ****  *
  13:purchase.c    ****  */
  14:purchase.c    **** 
  15:purchase.c    **** #include <stdio.h>
  16:purchase.c    **** #include <stdlib.h>
  17:purchase.c    **** 
  18:purchase.c    **** void bail();
  19:purchase.c    **** 
  20:purchase.c    **** int main(void) {
  32              		.loc 1 20 16
  33              		.cfi_startproc
  34 0000 F30F1EFA 		endbr64
  35 0004 55       		push	rbp
  36              		.cfi_def_cfa_offset 16
  37              		.cfi_offset 6, -16
  38 0005 4889E5   		mov	rbp, rsp
  39              		.cfi_def_cfa_register 6
  40 0008 4883EC30 		sub	rsp, 48
  41              		.loc 1 20 16
  42 000c 64488B04 		mov	rax, QWORD PTR fs:40
  42      25280000 
  42      00
  43 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  44 0019 31C0     		xor	eax, eax
  21:purchase.c    ****   int item, result;
  22:purchase.c    ****   printf("Enter item number: ");
  45              		.loc 1 22 3
  46 001b 488D0500 		lea	rax, .LC0[rip]
  46      000000
  47 0022 4889C7   		mov	rdi, rax
  48 0025 B8000000 		mov	eax, 0
  48      00
  49 002a E8000000 		call	printf@PLT
  49      00
  23:purchase.c    ****   result = scanf("%d", &item);
  50              		.loc 1 23 12
  51 002f 488D45DC 		lea	rax, -36[rbp]
  52 0033 4889C6   		mov	rsi, rax
  53 0036 488D0500 		lea	rax, .LC1[rip]
  53      000000
  54 003d 4889C7   		mov	rdi, rax
  55 0040 B8000000 		mov	eax, 0
  55      00
  56 0045 E8000000 		call	__isoc99_scanf@PLT
  56      00
  57 004a 8945EC   		mov	DWORD PTR -20[rbp], eax
  24:purchase.c    **** 
  25:purchase.c    ****   if ( result != 1 ) {
  58              		.loc 1 25 6
  59 004d 837DEC01 		cmp	DWORD PTR -20[rbp], 1
  60 0051 740A     		je	.L2
  26:purchase.c    ****     bail();
  61              		.loc 1 26 5
  62 0053 B8000000 		mov	eax, 0
  62      00
  63 0058 E8000000 		call	bail
  63      00
  64              	.L2:
  27:purchase.c    ****   }
  28:purchase.c    ****   
  29:purchase.c    ****   double price;
  30:purchase.c    ****   printf("Enter unit price: ");
  65              		.loc 1 30 3
  66 005d 488D0500 		lea	rax, .LC2[rip]
  66      000000
  67 0064 4889C7   		mov	rdi, rax
  68 0067 B8000000 		mov	eax, 0
  68      00
  69 006c E8000000 		call	printf@PLT
  69      00
  31:purchase.c    ****   result = scanf("%lf", &price);
  70              		.loc 1 31 12
  71 0071 488D45F0 		lea	rax, -16[rbp]
  72 0075 4889C6   		mov	rsi, rax
  73 0078 488D0500 		lea	rax, .LC3[rip]
  73      000000
  74 007f 4889C7   		mov	rdi, rax
  75 0082 B8000000 		mov	eax, 0
  75      00
  76 0087 E8000000 		call	__isoc99_scanf@PLT
  76      00
  77 008c 8945EC   		mov	DWORD PTR -20[rbp], eax
  32:purchase.c    **** 
  33:purchase.c    ****   if ( result != 1 ) {
  78              		.loc 1 33 6
  79 008f 837DEC01 		cmp	DWORD PTR -20[rbp], 1
  80 0093 740A     		je	.L3
  34:purchase.c    ****     bail();
  81              		.loc 1 34 5
  82 0095 B8000000 		mov	eax, 0
  82      00
  83 009a E8000000 		call	bail
  83      00
  84              	.L3:
  35:purchase.c    ****   }
  36:purchase.c    ****   
  37:purchase.c    ****   int month, day, year;
  38:purchase.c    ****   printf("Enter purchase date (mm/dd/yy): ");
  85              		.loc 1 38 3
  86 009f 488D0500 		lea	rax, .LC4[rip]
  86      000000
  87 00a6 4889C7   		mov	rdi, rax
  88 00a9 B8000000 		mov	eax, 0
  88      00
  89 00ae E8000000 		call	printf@PLT
  89      00
  39:purchase.c    ****   result = scanf("%2d/%2d/%2d", &month, &day, &year);
  90              		.loc 1 39 12
  91 00b3 488D4DE8 		lea	rcx, -24[rbp]
  92 00b7 488D55E4 		lea	rdx, -28[rbp]
  93 00bb 488D45E0 		lea	rax, -32[rbp]
  94 00bf 4889C6   		mov	rsi, rax
  95 00c2 488D0500 		lea	rax, .LC5[rip]
  95      000000
  96 00c9 4889C7   		mov	rdi, rax
  97 00cc B8000000 		mov	eax, 0
  97      00
  98 00d1 E8000000 		call	__isoc99_scanf@PLT
  98      00
  99 00d6 8945EC   		mov	DWORD PTR -20[rbp], eax
  40:purchase.c    **** 
  41:purchase.c    ****   if ( result != 3 ) {
 100              		.loc 1 41 6
 101 00d9 837DEC03 		cmp	DWORD PTR -20[rbp], 3
 102 00dd 740A     		je	.L4
  42:purchase.c    ****     bail();
 103              		.loc 1 42 5
 104 00df B8000000 		mov	eax, 0
 104      00
 105 00e4 E8000000 		call	bail
 105      00
 106              	.L4:
  43:purchase.c    ****   }
  44:purchase.c    **** 
  45:purchase.c    ****   printf("Item\t\tUnit\t\tPurchase\n");
 107              		.loc 1 45 3
 108 00e9 488D0500 		lea	rax, .LC6[rip]
 108      000000
 109 00f0 4889C7   		mov	rdi, rax
 110 00f3 E8000000 		call	puts@PLT
 110      00
  46:purchase.c    ****   printf("\t\tPrice\t\tDate\n");
 111              		.loc 1 46 3
 112 00f8 488D0500 		lea	rax, .LC7[rip]
 112      000000
 113 00ff 4889C7   		mov	rdi, rax
 114 0102 E8000000 		call	puts@PLT
 114      00
  47:purchase.c    ****   printf("%d\t\t$%7.2f\t%.2d/%.2d/%.2d\n", item, price, month, day, year);
 115              		.loc 1 47 3
 116 0107 8B7DE8   		mov	edi, DWORD PTR -24[rbp]
 117 010a 8B4DE4   		mov	ecx, DWORD PTR -28[rbp]
 118 010d 8B55E0   		mov	edx, DWORD PTR -32[rbp]
 119 0110 488B75F0 		mov	rsi, QWORD PTR -16[rbp]
 120 0114 8B45DC   		mov	eax, DWORD PTR -36[rbp]
 121 0117 4189F8   		mov	r8d, edi
 122 011a 66480F6E 		movq	xmm0, rsi
 122      C6
 123 011f 89C6     		mov	esi, eax
 124 0121 488D0500 		lea	rax, .LC8[rip]
 124      000000
 125 0128 4889C7   		mov	rdi, rax
 126 012b B8010000 		mov	eax, 1
 126      00
 127 0130 E8000000 		call	printf@PLT
 127      00
  48:purchase.c    ****   
  49:purchase.c    ****   exit(EXIT_SUCCESS);
 128              		.loc 1 49 3
 129 0135 BF000000 		mov	edi, 0
 129      00
 130 013a E8000000 		call	exit@PLT
 130      00
 131              		.cfi_endproc
 132              	.LFE6:
 134              		.section	.rodata
 135              	.LC9:
 136 009b 4E6F7420 		.string	"Not this time, buddy!\n"
 136      74686973 
 136      2074696D 
 136      652C2062 
 136      75646479 
 137              		.text
 138              		.globl	bail
 140              	bail:
 141              	.LFB7:
  50:purchase.c    **** }
  51:purchase.c    **** 
  52:purchase.c    **** void bail() {
 142              		.loc 1 52 13
 143              		.cfi_startproc
 144 013f F30F1EFA 		endbr64
 145 0143 55       		push	rbp
 146              		.cfi_def_cfa_offset 16
 147              		.cfi_offset 6, -16
 148 0144 4889E5   		mov	rbp, rsp
 149              		.cfi_def_cfa_register 6
  53:purchase.c    ****   fprintf(stderr, "Not this time, buddy!\n");
 150              		.loc 1 53 3
 151 0147 488B0500 		mov	rax, QWORD PTR stderr[rip]
 151      000000
 152 014e 4889C1   		mov	rcx, rax
 153 0151 BA160000 		mov	edx, 22
 153      00
 154 0156 BE010000 		mov	esi, 1
 154      00
 155 015b 488D0500 		lea	rax, .LC9[rip]
 155      000000
 156 0162 4889C7   		mov	rdi, rax
 157 0165 E8000000 		call	fwrite@PLT
 157      00
  54:purchase.c    ****   exit(EXIT_FAILURE);
 158              		.loc 1 54 3
 159 016a BF010000 		mov	edi, 1
 159      00
 160 016f E8000000 		call	exit@PLT
 160      00
 161              		.cfi_endproc
 162              	.LFE7:
 164              	.Letext0:
 165              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h"
 166              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 167              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
 168              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
 169              		.file 6 "/usr/include/stdlib.h"
 170              		.file 7 "/usr/include/stdio.h"
 1087              		.section	.note.gnu.property,"a"
 1088              		.align 8
 1089 0000 04000000 		.long	1f - 0f
 1090 0004 10000000 		.long	4f - 1f
 1091 0008 05000000 		.long	5
 1092              	0:
 1093 000c 474E5500 		.string	"GNU"
 1094              	1:
 1095              		.align 8
 1096 0010 020000C0 		.long	0xc0000002
 1097 0014 04000000 		.long	3f - 2f
 1098              	2:
 1099 0018 03000000 		.long	0x3
 1100              	3:
 1101 001c 00000000 		.align 8
 1102              	4:
