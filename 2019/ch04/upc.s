   1              		.file	"upc.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch04" "upc.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 456E7465 		.string	"Enter product type: "
   8      72207072 
   8      6F647563 
   8      74207479 
   8      70653A20 
   9              	.LC1:
  10 0015 25316400 		.string	"%1d"
  11              	.LC2:
  12 0019 456E7465 		.string	"Enter manufacturer's code: "
  12      72206D61 
  12      6E756661 
  12      63747572 
  12      65722773 
  13              	.LC3:
  14 0035 25316425 		.string	"%1d%1d%1d%1d%1d"
  14      31642531 
  14      64253164 
  14      25316400 
  15              	.LC4:
  16 0045 456E7465 		.string	"Enter product code: "
  16      72207072 
  16      6F647563 
  16      7420636F 
  16      64653A20 
  17              	.LC5:
  18 005a 43686563 		.string	"Check digit: %d\n"
  18      6B206469 
  18      6769743A 
  18      2025640A 
  18      00
  19              		.text
  20              		.globl	main
  22              	main:
  23              	.LFB6:
  24              		.file 1 "upc.c"
   1:upc.c         **** /*
   2:upc.c         ****  *
   3:upc.c         ****  *   File:
   4:upc.c         ****  *      upc.c
   5:upc.c         ****  *
   6:upc.c         ****  *   Synopsis:
   7:upc.c         ****  *
   8:upc.c         ****  *   Revision History:
   9:upc.c         ****  *      Date    Change Description
  10:upc.c         ****  *      ------  -----------------------------------------
  11:upc.c         ****  *      190808  Original.
  12:upc.c         ****  *
  13:upc.c         ****  *
  14:upc.c         ****  * "0" "24600" "01003" 0 // Morton's salt
  15:upc.c         ****  * "0" "37000" "00407" 3 // Jif peanut butter
  16:upc.c         ****  * "0" "31200" "01005" 6 // Ocean Spray cranberry sauce
  17:upc.c         ****  * "0" "50428" "26851" 3 // C notebook
  18:upc.c         ****  * "0" "37466" "08331" 5 // Lindt chocolate
  19:upc.c         ****  * "0" "52000" "04144" 6 // Gatorade
  20:upc.c         ****  * "8" "53480" "01000" 3 // MEG
  21:upc.c         ****  * "0" "77890" "17079" 3 // Wegmans tea
  22:upc.c         ****  * "0" "12345" "67890" 5 // Beakman & Jax!
  23:upc.c         ****  *
  24:upc.c         ****  */
  25:upc.c         **** #include <stdio.h>
  26:upc.c         **** #include <stdlib.h>
  27:upc.c         **** 
  28:upc.c         **** int main(void) {
  25              		.loc 1 28 16
  26              		.cfi_startproc
  27 0000 F30F1EFA 		endbr64
  28 0004 55       		push	rbp
  29              		.cfi_def_cfa_offset 16
  30              		.cfi_offset 6, -16
  31 0005 4889E5   		mov	rbp, rsp
  32              		.cfi_def_cfa_register 6
  33 0008 4883EC40 		sub	rsp, 64
  34              		.loc 1 28 16
  35 000c 64488B04 		mov	rax, QWORD PTR fs:40
  35      25280000 
  35      00
  36 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  37 0019 31C0     		xor	eax, eax
  29:upc.c         ****   int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
  30:upc.c         **** 
  31:upc.c         ****   printf("Enter product type: ");
  38              		.loc 1 31 3
  39 001b 488D0500 		lea	rax, .LC0[rip]
  39      000000
  40 0022 4889C7   		mov	rdi, rax
  41 0025 B8000000 		mov	eax, 0
  41      00
  42 002a E8000000 		call	printf@PLT
  42      00
  32:upc.c         ****   scanf("%1d", &d);
  43              		.loc 1 32 3
  44 002f 488D45C0 		lea	rax, -64[rbp]
  45 0033 4889C6   		mov	rsi, rax
  46 0036 488D0500 		lea	rax, .LC1[rip]
  46      000000
  47 003d 4889C7   		mov	rdi, rax
  48 0040 B8000000 		mov	eax, 0
  48      00
  49 0045 E8000000 		call	__isoc99_scanf@PLT
  49      00
  33:upc.c         ****   printf("Enter manufacturer's code: ");
  50              		.loc 1 33 3
  51 004a 488D0500 		lea	rax, .LC2[rip]
  51      000000
  52 0051 4889C7   		mov	rdi, rax
  53 0054 B8000000 		mov	eax, 0
  53      00
  54 0059 E8000000 		call	printf@PLT
  54      00
  34:upc.c         ****   scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  55              		.loc 1 34 3
  56 005e 488D7DD4 		lea	rdi, -44[rbp]
  57 0062 488D75D0 		lea	rsi, -48[rbp]
  58 0066 488D4DCC 		lea	rcx, -52[rbp]
  59 006a 488D55C8 		lea	rdx, -56[rbp]
  60 006e 488D45C4 		lea	rax, -60[rbp]
  61 0072 4989F9   		mov	r9, rdi
  62 0075 4989F0   		mov	r8, rsi
  63 0078 4889C6   		mov	rsi, rax
  64 007b 488D0500 		lea	rax, .LC3[rip]
  64      000000
  65 0082 4889C7   		mov	rdi, rax
  66 0085 B8000000 		mov	eax, 0
  66      00
  67 008a E8000000 		call	__isoc99_scanf@PLT
  67      00
  35:upc.c         ****   printf("Enter product code: ");
  68              		.loc 1 35 3
  69 008f 488D0500 		lea	rax, .LC4[rip]
  69      000000
  70 0096 4889C7   		mov	rdi, rax
  71 0099 B8000000 		mov	eax, 0
  71      00
  72 009e E8000000 		call	printf@PLT
  72      00
  36:upc.c         ****   scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  73              		.loc 1 36 3
  74 00a3 488D7DE8 		lea	rdi, -24[rbp]
  75 00a7 488D75E4 		lea	rsi, -28[rbp]
  76 00ab 488D4DE0 		lea	rcx, -32[rbp]
  77 00af 488D55DC 		lea	rdx, -36[rbp]
  78 00b3 488D45D8 		lea	rax, -40[rbp]
  79 00b7 4989F9   		mov	r9, rdi
  80 00ba 4989F0   		mov	r8, rsi
  81 00bd 4889C6   		mov	rsi, rax
  82 00c0 488D0500 		lea	rax, .LC3[rip]
  82      000000
  83 00c7 4889C7   		mov	rdi, rax
  84 00ca B8000000 		mov	eax, 0
  84      00
  85 00cf E8000000 		call	__isoc99_scanf@PLT
  85      00
  37:upc.c         **** 
  38:upc.c         ****   first_sum = d + i2 + i4 + j1 + j3 + j5;
  86              		.loc 1 38 17
  87 00d4 8B55C0   		mov	edx, DWORD PTR -64[rbp]
  88 00d7 8B45C8   		mov	eax, DWORD PTR -56[rbp]
  89 00da 01C2     		add	edx, eax
  90              		.loc 1 38 22
  91 00dc 8B45D0   		mov	eax, DWORD PTR -48[rbp]
  92 00df 01C2     		add	edx, eax
  93              		.loc 1 38 27
  94 00e1 8B45D8   		mov	eax, DWORD PTR -40[rbp]
  95 00e4 01C2     		add	edx, eax
  96              		.loc 1 38 32
  97 00e6 8B45E0   		mov	eax, DWORD PTR -32[rbp]
  98 00e9 01C2     		add	edx, eax
  99              		.loc 1 38 37
 100 00eb 8B45E8   		mov	eax, DWORD PTR -24[rbp]
 101              		.loc 1 38 13
 102 00ee 01D0     		add	eax, edx
 103 00f0 8945EC   		mov	DWORD PTR -20[rbp], eax
  39:upc.c         ****   second_sum = i1 + i3 + i5 + j2 + j4;
 104              		.loc 1 39 19
 105 00f3 8B55C4   		mov	edx, DWORD PTR -60[rbp]
 106 00f6 8B45CC   		mov	eax, DWORD PTR -52[rbp]
 107 00f9 01C2     		add	edx, eax
 108              		.loc 1 39 24
 109 00fb 8B45D4   		mov	eax, DWORD PTR -44[rbp]
 110 00fe 01C2     		add	edx, eax
 111              		.loc 1 39 29
 112 0100 8B45DC   		mov	eax, DWORD PTR -36[rbp]
 113 0103 01C2     		add	edx, eax
 114              		.loc 1 39 34
 115 0105 8B45E4   		mov	eax, DWORD PTR -28[rbp]
 116              		.loc 1 39 14
 117 0108 01D0     		add	eax, edx
 118 010a 8945F0   		mov	DWORD PTR -16[rbp], eax
  40:upc.c         **** 
  41:upc.c         ****   total = 3 * first_sum + second_sum;
 119              		.loc 1 41 13
 120 010d 8B55EC   		mov	edx, DWORD PTR -20[rbp]
 121 0110 89D0     		mov	eax, edx
 122 0112 01C0     		add	eax, eax
 123 0114 01C2     		add	edx, eax
 124              		.loc 1 41 9
 125 0116 8B45F0   		mov	eax, DWORD PTR -16[rbp]
 126 0119 01D0     		add	eax, edx
 127 011b 8945F4   		mov	DWORD PTR -12[rbp], eax
  42:upc.c         **** 
  43:upc.c         ****   printf("Check digit: %d\n", 9 - ((total - 1) % 10));
 128              		.loc 1 43 43
 129 011e 8B45F4   		mov	eax, DWORD PTR -12[rbp]
 130 0121 8D50FF   		lea	edx, -1[rax]
 131              		.loc 1 43 48
 132 0124 4863C2   		movsx	rax, edx
 133 0127 4869C067 		imul	rax, rax, 1717986919
 133      666666
 134 012e 48C1E820 		shr	rax, 32
 135 0132 C1F802   		sar	eax, 2
 136 0135 89D6     		mov	esi, edx
 137 0137 C1FE1F   		sar	esi, 31
 138 013a 29F0     		sub	eax, esi
 139 013c 89C1     		mov	ecx, eax
 140 013e 89C8     		mov	eax, ecx
 141 0140 C1E002   		sal	eax, 2
 142 0143 01C8     		add	eax, ecx
 143 0145 01C0     		add	eax, eax
 144 0147 89D1     		mov	ecx, edx
 145 0149 29C1     		sub	ecx, eax
 146              		.loc 1 43 3
 147 014b B8090000 		mov	eax, 9
 147      00
 148 0150 29C8     		sub	eax, ecx
 149 0152 89C6     		mov	esi, eax
 150 0154 488D0500 		lea	rax, .LC5[rip]
 150      000000
 151 015b 4889C7   		mov	rdi, rax
 152 015e B8000000 		mov	eax, 0
 152      00
 153 0163 E8000000 		call	printf@PLT
 153      00
  44:upc.c         **** 
  45:upc.c         ****   exit(EXIT_SUCCESS);
 154              		.loc 1 45 3
 155 0168 BF000000 		mov	edi, 0
 155      00
 156 016d E8000000 		call	exit@PLT
 156      00
 157              		.cfi_endproc
 158              	.LFE6:
 160              	.Letext0:
 161              		.file 2 "/usr/include/stdlib.h"
 162              		.file 3 "/usr/include/stdio.h"
 637              		.section	.note.gnu.property,"a"
 638              		.align 8
 639 0000 04000000 		.long	1f - 0f
 640 0004 10000000 		.long	4f - 1f
 641 0008 05000000 		.long	5
 642              	0:
 643 000c 474E5500 		.string	"GNU"
 644              	1:
 645              		.align 8
 646 0010 020000C0 		.long	0xc0000002
 647 0014 04000000 		.long	3f - 2f
 648              	2:
 649 0018 03000000 		.long	0x3
 650              	3:
 651 001c 00000000 		.align 8
 652              	4:
