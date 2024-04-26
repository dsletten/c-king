   1              		.file	"arrays.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch08" "arrays.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 456E7465 		.string	"Enter array size: "
   8      72206172 
   8      72617920 
   8      73697A65 
   8      3A2000
   9              	.LC1:
  10 0013 256400   		.string	"%d"
  11              	.LC2:
  12 0016 6120257A 		.string	"a %zd\n"
  12      640A00
  13              	.LC3:
  14 001d 615B305D 		.string	"a[0] %zd\n"
  14      20257A64 
  14      0A00
  15              	.LC4:
  16 0027 61206C65 		.string	"a length %zd\n"
  16      6E677468 
  16      20257A64 
  16      0A00
  17              	.LC5:
  18 0035 6620257A 		.string	"f %zd\n"
  18      640A00
  19              	.LC6:
  20 003c 665B305D 		.string	"f[0] %zd\n"
  20      20257A64 
  20      0A00
  21              	.LC7:
  22 0046 66206C65 		.string	"f length %zd\n"
  22      6E677468 
  22      20257A64 
  22      0A00
  23              		.text
  24              		.globl	main
  26              	main:
  27              	.LFB6:
  28              		.file 1 "arrays.c"
   1:arrays.c      **** /*
   2:arrays.c      ****  *
   3:arrays.c      ****  *   File:
   4:arrays.c      ****  *      arrays.c
   5:arrays.c      ****  *
   6:arrays.c      ****  *   Synopsis:
   7:arrays.c      ****  *
   8:arrays.c      ****  *   Revision History:
   9:arrays.c      ****  *      Date    Change Description
  10:arrays.c      ****  *      ------  -----------------------------------------
  11:arrays.c      ****  *      200221  Original.
  12:arrays.c      ****  *
  13:arrays.c      ****  */
  14:arrays.c      **** #include <stdio.h>
  15:arrays.c      **** #include <stdlib.h>
  16:arrays.c      **** 
  17:arrays.c      **** #define LENGTH(a) (sizeof(a) / sizeof(a[0]))
  18:arrays.c      **** 
  19:arrays.c      **** int main(void) {
  29              		.loc 1 19 16
  30              		.cfi_startproc
  31 0000 F30F1EFA 		endbr64
  32 0004 55       		push	rbp
  33              		.cfi_def_cfa_offset 16
  34              		.cfi_offset 6, -16
  35 0005 4889E5   		mov	rbp, rsp
  36              		.cfi_def_cfa_register 6
  37 0008 4157     		push	r15
  38 000a 4156     		push	r14
  39 000c 4155     		push	r13
  40 000e 4154     		push	r12
  41 0010 53       		push	rbx
  42 0011 4881ECD8 		sub	rsp, 216
  42      000000
  43              		.cfi_offset 15, -24
  44              		.cfi_offset 14, -32
  45              		.cfi_offset 13, -40
  46              		.cfi_offset 12, -48
  47              		.cfi_offset 3, -56
  48              		.loc 1 19 16
  49 0018 64488B04 		mov	rax, QWORD PTR fs:40
  49      25280000 
  49      00
  50 0021 488945C8 		mov	QWORD PTR -56[rbp], rax
  51 0025 31C0     		xor	eax, eax
  20:arrays.c      ****   int a[5] = {0, 1, 2, 3, 4};
  52              		.loc 1 20 7
  53 0027 C78520FF 		mov	DWORD PTR -224[rbp], 0
  53      FFFF0000 
  53      0000
  54 0031 C78524FF 		mov	DWORD PTR -220[rbp], 1
  54      FFFF0100 
  54      0000
  55 003b C78528FF 		mov	DWORD PTR -216[rbp], 2
  55      FFFF0200 
  55      0000
  56 0045 C7852CFF 		mov	DWORD PTR -212[rbp], 3
  56      FFFF0300 
  56      0000
  57 004f C78530FF 		mov	DWORD PTR -208[rbp], 4
  57      FFFF0400 
  57      0000
  21:arrays.c      ****   int b[5] = {2, 3};
  58              		.loc 1 21 7
  59 0059 48C78540 		mov	QWORD PTR -192[rbp], 0
  59      FFFFFF00 
  59      000000
  60 0064 48C78548 		mov	QWORD PTR -184[rbp], 0
  60      FFFFFF00 
  60      000000
  61 006f C78550FF 		mov	DWORD PTR -176[rbp], 0
  61      FFFF0000 
  61      0000
  62 0079 C78540FF 		mov	DWORD PTR -192[rbp], 2
  62      FFFF0200 
  62      0000
  63 0083 C78544FF 		mov	DWORD PTR -188[rbp], 3
  63      FFFF0300 
  63      0000
  22:arrays.c      ****   int c[5] = {0};
  64              		.loc 1 22 7
  65 008d 48C78560 		mov	QWORD PTR -160[rbp], 0
  65      FFFFFF00 
  65      000000
  66 0098 48C78568 		mov	QWORD PTR -152[rbp], 0
  66      FFFFFF00 
  66      000000
  67 00a3 C78570FF 		mov	DWORD PTR -144[rbp], 0
  67      FFFF0000 
  67      0000
  23:arrays.c      ****   double d[5] = {0};
  68              		.loc 1 23 10
  69 00ad 48C745A0 		mov	QWORD PTR -96[rbp], 0
  69      00000000 
  70 00b5 48C745A8 		mov	QWORD PTR -88[rbp], 0
  70      00000000 
  71 00bd 48C745B0 		mov	QWORD PTR -80[rbp], 0
  71      00000000 
  72 00c5 48C745B8 		mov	QWORD PTR -72[rbp], 0
  72      00000000 
  73 00cd 48C745C0 		mov	QWORD PTR -64[rbp], 0
  73      00000000 
  24:arrays.c      ****   int e[] = {2, 4, 6, 8, 10};
  74              		.loc 1 24 7
  75 00d5 C7458002 		mov	DWORD PTR -128[rbp], 2
  75      000000
  76 00dc C7458404 		mov	DWORD PTR -124[rbp], 4
  76      000000
  77 00e3 C7458806 		mov	DWORD PTR -120[rbp], 6
  77      000000
  78 00ea C7458C08 		mov	DWORD PTR -116[rbp], 8
  78      000000
  79 00f1 C745900A 		mov	DWORD PTR -112[rbp], 10
  79      000000
  25:arrays.c      **** 
  26:arrays.c      ****   int i;
  27:arrays.c      ****   printf("Enter array size: ");
  80              		.loc 1 27 3
  81 00f8 488D0500 		lea	rax, .LC0[rip]
  81      000000
  82 00ff 4889C7   		mov	rdi, rax
  83 0102 B8000000 		mov	eax, 0
  83      00
  84 0107 E8000000 		call	printf@PLT
  84      00
  28:arrays.c      ****   scanf("%d", &i);
  85              		.loc 1 28 3
  86 010c 488D850C 		lea	rax, -244[rbp]
  86      FFFFFF
  87 0113 4889C6   		mov	rsi, rax
  88 0116 488D0500 		lea	rax, .LC1[rip]
  88      000000
  89 011d 4889C7   		mov	rdi, rax
  90 0120 B8000000 		mov	eax, 0
  90      00
  91 0125 E8000000 		call	__isoc99_scanf@PLT
  91      00
  29:arrays.c      **** 
  30:arrays.c      ****   double f[i];
  92              		.loc 1 30 3
  93 012a 8B9D0CFF 		mov	ebx, DWORD PTR -244[rbp]
  93      FFFF
  94              		.loc 1 30 10
  95 0130 4863C3   		movsx	rax, ebx
  96 0133 4883E801 		sub	rax, 1
  97 0137 48898510 		mov	QWORD PTR -240[rbp], rax
  97      FFFFFF
  98 013e 4863C3   		movsx	rax, ebx
  99 0141 4989C6   		mov	r14, rax
 100 0144 41BF0000 		mov	r15d, 0
 100      0000
 101 014a 4863C3   		movsx	rax, ebx
 102 014d 4989C4   		mov	r12, rax
 103 0150 41BD0000 		mov	r13d, 0
 103      0000
 104 0156 4863C3   		movsx	rax, ebx
 105 0159 488D14C5 		lea	rdx, 0[0+rax*8]
 105      00000000 
 106 0161 B8100000 		mov	eax, 16
 106      00
 107 0166 4883E801 		sub	rax, 1
 108 016a 4801D0   		add	rax, rdx
 109 016d B9100000 		mov	ecx, 16
 109      00
 110 0172 BA000000 		mov	edx, 0
 110      00
 111 0177 48F7F1   		div	rcx
 112 017a 486BC010 		imul	rax, rax, 16
 113 017e 4889C1   		mov	rcx, rax
 114 0181 4881E100 		and	rcx, -4096
 114      F0FFFF
 115 0188 4889E2   		mov	rdx, rsp
 116 018b 4829CA   		sub	rdx, rcx
 117              	.L2:
 118 018e 4839D4   		cmp	rsp, rdx
 119 0191 7412     		je	.L3
 120 0193 4881EC00 		sub	rsp, 4096
 120      100000
 121 019a 48838C24 		or	QWORD PTR 4088[rsp], 0
 121      F80F0000 
 121      00
 122 01a3 EBE9     		jmp	.L2
 123              	.L3:
 124 01a5 4889C2   		mov	rdx, rax
 125 01a8 81E2FF0F 		and	edx, 4095
 125      0000
 126 01ae 4829D4   		sub	rsp, rdx
 127 01b1 4889C2   		mov	rdx, rax
 128 01b4 81E2FF0F 		and	edx, 4095
 128      0000
 129 01ba 4885D2   		test	rdx, rdx
 130 01bd 7410     		je	.L4
 131 01bf 25FF0F00 		and	eax, 4095
 131      00
 132 01c4 4883E808 		sub	rax, 8
 133 01c8 4801E0   		add	rax, rsp
 134 01cb 48830800 		or	QWORD PTR [rax], 0
 135              	.L4:
 136 01cf 4889E0   		mov	rax, rsp
 137 01d2 4883C007 		add	rax, 7
 138 01d6 48C1E803 		shr	rax, 3
 139 01da 48C1E003 		sal	rax, 3
 140 01de 48898518 		mov	QWORD PTR -232[rbp], rax
 140      FFFFFF
  31:arrays.c      **** 
  32:arrays.c      ****   printf("a %zd\n", sizeof(a));
 141              		.loc 1 32 3
 142 01e5 BE140000 		mov	esi, 20
 142      00
 143 01ea 488D0500 		lea	rax, .LC2[rip]
 143      000000
 144 01f1 4889C7   		mov	rdi, rax
 145 01f4 B8000000 		mov	eax, 0
 145      00
 146 01f9 E8000000 		call	printf@PLT
 146      00
  33:arrays.c      ****   printf("a[0] %zd\n", sizeof(a[0]));
 147              		.loc 1 33 3
 148 01fe BE040000 		mov	esi, 4
 148      00
 149 0203 488D0500 		lea	rax, .LC3[rip]
 149      000000
 150 020a 4889C7   		mov	rdi, rax
 151 020d B8000000 		mov	eax, 0
 151      00
 152 0212 E8000000 		call	printf@PLT
 152      00
  34:arrays.c      ****   printf("a length %zd\n", sizeof(a) / sizeof(a[0]));
 153              		.loc 1 34 3
 154 0217 BE050000 		mov	esi, 5
 154      00
 155 021c 488D0500 		lea	rax, .LC4[rip]
 155      000000
 156 0223 4889C7   		mov	rdi, rax
 157 0226 B8000000 		mov	eax, 0
 157      00
 158 022b E8000000 		call	printf@PLT
 158      00
  35:arrays.c      ****   printf("a length %zd\n", LENGTH(a));
 159              		.loc 1 35 3
 160 0230 BE050000 		mov	esi, 5
 160      00
 161 0235 488D0500 		lea	rax, .LC4[rip]
 161      000000
 162 023c 4889C7   		mov	rdi, rax
 163 023f B8000000 		mov	eax, 0
 163      00
 164 0244 E8000000 		call	printf@PLT
 164      00
  36:arrays.c      **** 
  37:arrays.c      ****   printf("f %zd\n", sizeof(f));
 165              		.loc 1 37 3
 166 0249 4863C3   		movsx	rax, ebx
 167 024c 48C1E003 		sal	rax, 3
 168 0250 4889C6   		mov	rsi, rax
 169 0253 488D0500 		lea	rax, .LC5[rip]
 169      000000
 170 025a 4889C7   		mov	rdi, rax
 171 025d B8000000 		mov	eax, 0
 171      00
 172 0262 E8000000 		call	printf@PLT
 172      00
  38:arrays.c      ****   printf("f[0] %zd\n", sizeof(f[0]));
 173              		.loc 1 38 3
 174 0267 BE080000 		mov	esi, 8
 174      00
 175 026c 488D0500 		lea	rax, .LC6[rip]
 175      000000
 176 0273 4889C7   		mov	rdi, rax
 177 0276 B8000000 		mov	eax, 0
 177      00
 178 027b E8000000 		call	printf@PLT
 178      00
  39:arrays.c      ****   printf("f length %zd\n", sizeof(f) / sizeof(f[0]));
 179              		.loc 1 39 34
 180 0280 4863C3   		movsx	rax, ebx
 181 0283 48C1E003 		sal	rax, 3
 182              		.loc 1 39 38
 183 0287 48C1E803 		shr	rax, 3
 184              		.loc 1 39 3
 185 028b 4889C6   		mov	rsi, rax
 186 028e 488D0500 		lea	rax, .LC7[rip]
 186      000000
 187 0295 4889C7   		mov	rdi, rax
 188 0298 B8000000 		mov	eax, 0
 188      00
 189 029d E8000000 		call	printf@PLT
 189      00
  40:arrays.c      ****   printf("f length %zd\n", LENGTH(f));
 190              		.loc 1 40 28
 191 02a2 4863C3   		movsx	rax, ebx
 192 02a5 48C1E003 		sal	rax, 3
 193 02a9 48C1E803 		shr	rax, 3
 194              		.loc 1 40 3
 195 02ad 4889C6   		mov	rsi, rax
 196 02b0 488D0500 		lea	rax, .LC7[rip]
 196      000000
 197 02b7 4889C7   		mov	rdi, rax
 198 02ba B8000000 		mov	eax, 0
 198      00
 199 02bf E8000000 		call	printf@PLT
 199      00
  41:arrays.c      ****   
  42:arrays.c      ****   exit(EXIT_SUCCESS);
 200              		.loc 1 42 3
 201 02c4 BF000000 		mov	edi, 0
 201      00
 202 02c9 E8000000 		call	exit@PLT
 202      00
 203              		.cfi_endproc
 204              	.LFE6:
 206              	.Letext0:
 207              		.file 2 "/usr/include/stdlib.h"
 208              		.file 3 "/usr/include/stdio.h"
 681              		.section	.note.gnu.property,"a"
 682              		.align 8
 683 0000 04000000 		.long	1f - 0f
 684 0004 10000000 		.long	4f - 1f
 685 0008 05000000 		.long	5
 686              	0:
 687 000c 474E5500 		.string	"GNU"
 688              	1:
 689              		.align 8
 690 0010 020000C0 		.long	0xc0000002
 691 0014 04000000 		.long	3f - 2f
 692              	2:
 693 0018 03000000 		.long	0x3
 694              	3:
 695 001c 00000000 		.align 8
 696              	4:
