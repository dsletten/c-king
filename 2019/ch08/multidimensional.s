   1              		.file	"multidimensional.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch08" "multidimensional.c"
   6              		.section	.rodata
   7              	.LC1:
   8 0000 25352E31 		.string	"%5.1f"
   8      6600
   9              		.text
  10              		.globl	main
  12              	main:
  13              	.LFB6:
  14              		.file 1 "multidimensional.c"
   1:multidimensional.c **** /*
   2:multidimensional.c ****  *
   3:multidimensional.c ****  *   File:
   4:multidimensional.c ****  *      multidimensional.c
   5:multidimensional.c ****  *
   6:multidimensional.c ****  *   Synopsis:
   7:multidimensional.c ****  *
   8:multidimensional.c ****  *   Revision History:
   9:multidimensional.c ****  *      Date    Change Description
  10:multidimensional.c ****  *      ------  -----------------------------------------
  11:multidimensional.c ****  *      200224  Original.
  12:multidimensional.c ****  *
  13:multidimensional.c ****  */
  14:multidimensional.c **** #include <stdio.h>
  15:multidimensional.c **** #include <stdlib.h>
  16:multidimensional.c **** #include <string.h>
  17:multidimensional.c **** 
  18:multidimensional.c **** #define N 10
  19:multidimensional.c **** 
  20:multidimensional.c **** int main(void) {
  15              		.loc 1 20 16
  16              		.cfi_startproc
  17 0000 F30F1EFA 		endbr64
  18 0004 55       		push	rbp
  19              		.cfi_def_cfa_offset 16
  20              		.cfi_offset 6, -16
  21 0005 4889E5   		mov	rbp, rsp
  22              		.cfi_def_cfa_register 6
  23 0008 4881EC00 		sub	rsp, 1792
  23      070000
  24              		.loc 1 20 16
  25 000f 64488B04 		mov	rax, QWORD PTR fs:40
  25      25280000 
  25      00
  26 0018 488945F8 		mov	QWORD PTR -8[rbp], rax
  27 001c 31C0     		xor	eax, eax
  21:multidimensional.c ****   double identity[N][N] = {0.0};
  28              		.loc 1 21 10
  29 001e 488D95B0 		lea	rdx, -1616[rbp]
  29      F9FFFF
  30 0025 B8000000 		mov	eax, 0
  30      00
  31 002a B9640000 		mov	ecx, 100
  31      00
  32 002f 4889D7   		mov	rdi, rdx
  33 0032 F348AB   		rep stosq
  34              	.LBB2:
  22:multidimensional.c **** 
  23:multidimensional.c ****   /* const int m[2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; */
  24:multidimensional.c **** 
  25:multidimensional.c ****   /* printf("%d\n", m[1][0]); */
  26:multidimensional.c ****   /* m[1][0] = 94; */
  27:multidimensional.c ****   /* printf("%d\n", m[1][0]); */
  28:multidimensional.c **** 
  29:multidimensional.c ****   for (int i = 0; i < N; i++) {
  35              		.loc 1 29 12
  36 0035 C7850CF9 		mov	DWORD PTR -1780[rbp], 0
  36      FFFF0000 
  36      0000
  37              		.loc 1 29 3
  38 003f EB39     		jmp	.L2
  39              	.L3:
  30:multidimensional.c ****     identity[i][i] = 1.0;
  40              		.loc 1 30 20 discriminator 3
  41 0041 8B850CF9 		mov	eax, DWORD PTR -1780[rbp]
  41      FFFF
  42 0047 4863D0   		movsx	rdx, eax
  43 004a 4889D0   		mov	rax, rdx
  44 004d 48C1E002 		sal	rax, 2
  45 0051 4801D0   		add	rax, rdx
  46 0054 4801C0   		add	rax, rax
  47 0057 4801D0   		add	rax, rdx
  48 005a 48C1E003 		sal	rax, 3
  49 005e 4801E8   		add	rax, rbp
  50 0061 482D5006 		sub	rax, 1616
  50      0000
  51 0067 F20F1005 		movsd	xmm0, QWORD PTR .LC0[rip]
  51      00000000 
  52 006f F20F1100 		movsd	QWORD PTR [rax], xmm0
  29:multidimensional.c ****     identity[i][i] = 1.0;
  53              		.loc 1 29 27 discriminator 3
  54 0073 83850CF9 		add	DWORD PTR -1780[rbp], 1
  54      FFFF01
  55              	.L2:
  29:multidimensional.c ****     identity[i][i] = 1.0;
  56              		.loc 1 29 21 discriminator 1
  57 007a 83BD0CF9 		cmp	DWORD PTR -1780[rbp], 9
  57      FFFF09
  58 0081 7EBE     		jle	.L3
  59              	.LBE2:
  60              	.LBB3:
  31:multidimensional.c ****   }
  32:multidimensional.c **** 
  33:multidimensional.c ****   for (int i = 0; i < N; i++) {
  61              		.loc 1 33 12
  62 0083 C78510F9 		mov	DWORD PTR -1776[rbp], 0
  62      FFFF0000 
  62      0000
  63              		.loc 1 33 3
  64 008d EB70     		jmp	.L4
  65              	.L7:
  66              	.LBB4:
  34:multidimensional.c ****     for (int j = 0; j < N; j++) {
  67              		.loc 1 34 14
  68 008f C78514F9 		mov	DWORD PTR -1772[rbp], 0
  68      FFFF0000 
  68      0000
  69              		.loc 1 34 5
  70 0099 EB4A     		jmp	.L5
  71              	.L6:
  35:multidimensional.c ****       printf("%5.1f", identity[i][j]);
  72              		.loc 1 35 7 discriminator 3
  73 009b 8B8514F9 		mov	eax, DWORD PTR -1772[rbp]
  73      FFFF
  74 00a1 4863C8   		movsx	rcx, eax
  75 00a4 8B8510F9 		mov	eax, DWORD PTR -1776[rbp]
  75      FFFF
  76 00aa 4863D0   		movsx	rdx, eax
  77 00ad 4889D0   		mov	rax, rdx
  78 00b0 48C1E002 		sal	rax, 2
  79 00b4 4801D0   		add	rax, rdx
  80 00b7 4801C0   		add	rax, rax
  81 00ba 4801C8   		add	rax, rcx
  82 00bd 488B84C5 		mov	rax, QWORD PTR -1616[rbp+rax*8]
  82      B0F9FFFF 
  83 00c5 66480F6E 		movq	xmm0, rax
  83      C0
  84 00ca 488D0500 		lea	rax, .LC1[rip]
  84      000000
  85 00d1 4889C7   		mov	rdi, rax
  86 00d4 B8010000 		mov	eax, 1
  86      00
  87 00d9 E8000000 		call	printf@PLT
  87      00
  34:multidimensional.c ****     for (int j = 0; j < N; j++) {
  88              		.loc 1 34 29 discriminator 3
  89 00de 838514F9 		add	DWORD PTR -1772[rbp], 1
  89      FFFF01
  90              	.L5:
  34:multidimensional.c ****     for (int j = 0; j < N; j++) {
  91              		.loc 1 34 23 discriminator 1
  92 00e5 83BD14F9 		cmp	DWORD PTR -1772[rbp], 9
  92      FFFF09
  93 00ec 7EAD     		jle	.L6
  94              	.LBE4:
  36:multidimensional.c ****     }
  37:multidimensional.c ****     printf("\n");
  95              		.loc 1 37 5 discriminator 2
  96 00ee BF0A0000 		mov	edi, 10
  96      00
  97 00f3 E8000000 		call	putchar@PLT
  97      00
  33:multidimensional.c ****     for (int j = 0; j < N; j++) {
  98              		.loc 1 33 27 discriminator 2
  99 00f8 838510F9 		add	DWORD PTR -1776[rbp], 1
  99      FFFF01
 100              	.L4:
  33:multidimensional.c ****     for (int j = 0; j < N; j++) {
 101              		.loc 1 33 21 discriminator 1
 102 00ff 83BD10F9 		cmp	DWORD PTR -1776[rbp], 9
 102      FFFF09
 103 0106 7E87     		jle	.L7
 104              	.LBE3:
  38:multidimensional.c ****   }
  39:multidimensional.c **** 
  40:multidimensional.c ****   double copy[N][N];
  41:multidimensional.c ****   memcpy(copy, identity, sizeof(copy));
 105              		.loc 1 41 3
 106 0108 488D85D0 		lea	rax, -816[rbp]
 106      FCFFFF
 107 010f 488D95B0 		lea	rdx, -1616[rbp]
 107      F9FFFF
 108 0116 B9640000 		mov	ecx, 100
 108      00
 109 011b 4889C7   		mov	rdi, rax
 110 011e 4889D6   		mov	rsi, rdx
 111 0121 F348A5   		rep movsq
  42:multidimensional.c **** 
  43:multidimensional.c ****   printf("\n");
 112              		.loc 1 43 3
 113 0124 BF0A0000 		mov	edi, 10
 113      00
 114 0129 E8000000 		call	putchar@PLT
 114      00
 115              	.LBB5:
  44:multidimensional.c **** 
  45:multidimensional.c ****   for (int i = 0; i < N; i++) {
 116              		.loc 1 45 12
 117 012e C78518F9 		mov	DWORD PTR -1768[rbp], 0
 117      FFFF0000 
 117      0000
 118              		.loc 1 45 3
 119 0138 EB70     		jmp	.L8
 120              	.L11:
 121              	.LBB6:
  46:multidimensional.c ****     for (int j = 0; j < N; j++) {
 122              		.loc 1 46 14
 123 013a C7851CF9 		mov	DWORD PTR -1764[rbp], 0
 123      FFFF0000 
 123      0000
 124              		.loc 1 46 5
 125 0144 EB4A     		jmp	.L9
 126              	.L10:
  47:multidimensional.c ****       printf("%5.1f", copy[i][j]);
 127              		.loc 1 47 7 discriminator 3
 128 0146 8B851CF9 		mov	eax, DWORD PTR -1764[rbp]
 128      FFFF
 129 014c 4863C8   		movsx	rcx, eax
 130 014f 8B8518F9 		mov	eax, DWORD PTR -1768[rbp]
 130      FFFF
 131 0155 4863D0   		movsx	rdx, eax
 132 0158 4889D0   		mov	rax, rdx
 133 015b 48C1E002 		sal	rax, 2
 134 015f 4801D0   		add	rax, rdx
 135 0162 4801C0   		add	rax, rax
 136 0165 4801C8   		add	rax, rcx
 137 0168 488B84C5 		mov	rax, QWORD PTR -816[rbp+rax*8]
 137      D0FCFFFF 
 138 0170 66480F6E 		movq	xmm0, rax
 138      C0
 139 0175 488D0500 		lea	rax, .LC1[rip]
 139      000000
 140 017c 4889C7   		mov	rdi, rax
 141 017f B8010000 		mov	eax, 1
 141      00
 142 0184 E8000000 		call	printf@PLT
 142      00
  46:multidimensional.c ****     for (int j = 0; j < N; j++) {
 143              		.loc 1 46 29 discriminator 3
 144 0189 83851CF9 		add	DWORD PTR -1764[rbp], 1
 144      FFFF01
 145              	.L9:
  46:multidimensional.c ****     for (int j = 0; j < N; j++) {
 146              		.loc 1 46 23 discriminator 1
 147 0190 83BD1CF9 		cmp	DWORD PTR -1764[rbp], 9
 147      FFFF09
 148 0197 7EAD     		jle	.L10
 149              	.LBE6:
  48:multidimensional.c ****     }
  49:multidimensional.c ****     printf("\n");
 150              		.loc 1 49 5 discriminator 2
 151 0199 BF0A0000 		mov	edi, 10
 151      00
 152 019e E8000000 		call	putchar@PLT
 152      00
  45:multidimensional.c ****     for (int j = 0; j < N; j++) {
 153              		.loc 1 45 27 discriminator 2
 154 01a3 838518F9 		add	DWORD PTR -1768[rbp], 1
 154      FFFF01
 155              	.L8:
  45:multidimensional.c ****     for (int j = 0; j < N; j++) {
 156              		.loc 1 45 21 discriminator 1
 157 01aa 83BD18F9 		cmp	DWORD PTR -1768[rbp], 9
 157      FFFF09
 158 01b1 7E87     		jle	.L11
 159              	.LBE5:
  50:multidimensional.c ****   }
  51:multidimensional.c **** 
  52:multidimensional.c ****   int a[4][3] = {{0, 0, 1},
 160              		.loc 1 52 7
 161 01b3 C78520F9 		mov	DWORD PTR -1760[rbp], 0
 161      FFFF0000 
 161      0000
 162 01bd C78524F9 		mov	DWORD PTR -1756[rbp], 0
 162      FFFF0000 
 162      0000
 163 01c7 C78528F9 		mov	DWORD PTR -1752[rbp], 1
 163      FFFF0100 
 163      0000
 164 01d1 C7852CF9 		mov	DWORD PTR -1748[rbp], 0
 164      FFFF0000 
 164      0000
 165 01db C78530F9 		mov	DWORD PTR -1744[rbp], 1
 165      FFFF0100 
 165      0000
 166 01e5 C78534F9 		mov	DWORD PTR -1740[rbp], 0
 166      FFFF0000 
 166      0000
 167 01ef C78538F9 		mov	DWORD PTR -1736[rbp], 0
 167      FFFF0000 
 167      0000
 168 01f9 C7853CF9 		mov	DWORD PTR -1732[rbp], 1
 168      FFFF0100 
 168      0000
 169 0203 C78540F9 		mov	DWORD PTR -1728[rbp], 1
 169      FFFF0100 
 169      0000
 170 020d C78544F9 		mov	DWORD PTR -1724[rbp], 1
 170      FFFF0100 
 170      0000
 171 0217 C78548F9 		mov	DWORD PTR -1720[rbp], 0
 171      FFFF0000 
 171      0000
 172 0221 C7854CF9 		mov	DWORD PTR -1716[rbp], 0
 172      FFFF0000 
 172      0000
  53:multidimensional.c **** 		 {0, 1, 0},
  54:multidimensional.c **** 		 {0, 1, 1},
  55:multidimensional.c **** 		 {1, 0, 0}};
  56:multidimensional.c **** 
  57:multidimensional.c ****   int b[4][3] = {{0, 0, 1},  // Initialize 48 bytes to 0 (12 * 4) [8 bytes at a time, i.e., across 
 173              		.loc 1 57 7
 174 022b 48C78550 		mov	QWORD PTR -1712[rbp], 0
 174      F9FFFF00 
 174      000000
 175 0236 48C78558 		mov	QWORD PTR -1704[rbp], 0
 175      F9FFFF00 
 175      000000
 176 0241 48C78560 		mov	QWORD PTR -1696[rbp], 0
 176      F9FFFF00 
 176      000000
 177 024c 48C78568 		mov	QWORD PTR -1688[rbp], 0
 177      F9FFFF00 
 177      000000
 178 0257 48C78570 		mov	QWORD PTR -1680[rbp], 0
 178      F9FFFF00 
 178      000000
 179 0262 48C78578 		mov	QWORD PTR -1672[rbp], 0
 179      F9FFFF00 
 179      000000
 180 026d C78558F9 		mov	DWORD PTR -1704[rbp], 1
 180      FFFF0100 
 180      0000
 181 0277 C78560F9 		mov	DWORD PTR -1696[rbp], 1
 181      FFFF0100 
 181      0000
  58:multidimensional.c **** 		 {0, 1, 0}};
  59:multidimensional.c **** 
  60:multidimensional.c ****   int c[4][3] = {{1, 1, 1},
 182              		.loc 1 60 7
 183 0281 48C78580 		mov	QWORD PTR -1664[rbp], 0
 183      F9FFFF00 
 183      000000
 184 028c 48C78588 		mov	QWORD PTR -1656[rbp], 0
 184      F9FFFF00 
 184      000000
 185 0297 48C78590 		mov	QWORD PTR -1648[rbp], 0
 185      F9FFFF00 
 185      000000
 186 02a2 48C78598 		mov	QWORD PTR -1640[rbp], 0
 186      F9FFFF00 
 186      000000
 187 02ad 48C785A0 		mov	QWORD PTR -1632[rbp], 0
 187      F9FFFF00 
 187      000000
 188 02b8 48C785A8 		mov	QWORD PTR -1624[rbp], 0
 188      F9FFFF00 
 188      000000
 189 02c3 C78580F9 		mov	DWORD PTR -1664[rbp], 1
 189      FFFF0100 
 189      0000
 190 02cd C78584F9 		mov	DWORD PTR -1660[rbp], 1
 190      FFFF0100 
 190      0000
 191 02d7 C78588F9 		mov	DWORD PTR -1656[rbp], 1
 191      FFFF0100 
 191      0000
 192 02e1 C7858CF9 		mov	DWORD PTR -1652[rbp], 1
 192      FFFF0100 
 192      0000
 193 02eb C78590F9 		mov	DWORD PTR -1648[rbp], 1
 193      FFFF0100 
 193      0000
 194 02f5 C78598F9 		mov	DWORD PTR -1640[rbp], 1
 194      FFFF0100 
 194      0000
 195 02ff C785A4F9 		mov	DWORD PTR -1628[rbp], 1
 195      FFFF0100 
 195      0000
  61:multidimensional.c **** 		 {1, 1},
  62:multidimensional.c **** 		 {1},
  63:multidimensional.c **** 		 {1}};
  64:multidimensional.c **** 
  65:multidimensional.c ****   exit(EXIT_SUCCESS);
 196              		.loc 1 65 3
 197 0309 BF000000 		mov	edi, 0
 197      00
 198 030e E8000000 		call	exit@PLT
 198      00
 199              		.cfi_endproc
 200              	.LFE6:
 202              		.section	.rodata
 203 0006 0000     		.align 8
 204              	.LC0:
 205 0008 00000000 		.long	0
 206 000c 0000F03F 		.long	1072693248
 207              		.text
 208              	.Letext0:
 209              		.file 2 "/usr/include/stdlib.h"
 210              		.file 3 "/usr/include/stdio.h"
 716              		.section	.note.gnu.property,"a"
 717              		.align 8
 718 0000 04000000 		.long	1f - 0f
 719 0004 10000000 		.long	4f - 1f
 720 0008 05000000 		.long	5
 721              	0:
 722 000c 474E5500 		.string	"GNU"
 723              	1:
 724              		.align 8
 725 0010 020000C0 		.long	0xc0000002
 726 0014 04000000 		.long	3f - 2f
 727              	2:
 728 0018 03000000 		.long	0x3
 729              	3:
 730 001c 00000000 		.align 8
 731              	4:
