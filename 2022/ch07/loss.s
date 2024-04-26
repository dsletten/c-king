   1              		.file	"loss.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2022/ch07" "loss.c"
   6              		.section	.rodata
   7              	.LC2:
   8 0000 436F7272 		.string	"Correct: %ld\n"
   8      6563743A 
   8      20256C64 
   8      0A00
   9              	.LC3:
  10 000e 466C6F61 		.string	"Float:   %ld\n"
  10      743A2020 
  10      20256C64 
  10      0A00
  11              	.LC4:
  12 001c 446F7562 		.string	"Double:  %ld\n"
  12      6C653A20 
  12      20256C64 
  12      0A00
  13              		.text
  14              		.globl	main
  16              	main:
  17              	.LFB6:
  18              		.file 1 "loss.c"
   1:loss.c        **** /*
   2:loss.c        ****  *
   3:loss.c        ****  *   File:
   4:loss.c        ****  *      loss.c
   5:loss.c        ****  *
   6:loss.c        ****  *   Synopsis:
   7:loss.c        ****  *
   8:loss.c        ****  *   Revision History:
   9:loss.c        ****  *      Date    Change Description
  10:loss.c        ****  *      ------  -----------------------------------------
  11:loss.c        ****  *      230430  Original.
  12:loss.c        ****  *
  13:loss.c        ****  */
  14:loss.c        **** 
  15:loss.c        **** #include <stdio.h>
  16:loss.c        **** #include <stdlib.h>
  17:loss.c        **** 
  18:loss.c        **** int main(void) {
  19              		.loc 1 18 16
  20              		.cfi_startproc
  21 0000 F30F1EFA 		endbr64
  22 0004 55       		push	rbp
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 6, -16
  25 0005 4889E5   		mov	rbp, rsp
  26              		.cfi_def_cfa_register 6
  27 0008 4883EC30 		sub	rsp, 48
  28              	.LBB2:
  19:loss.c        ****   {
  20:loss.c        ****     long int l = 1125899906842623L; //  (1- (expt 2 50))
  29              		.loc 1 20 14
  30 000c 48B8FFFF 		movabs	rax, 1125899906842623
  30      FFFFFFFF 
  30      0300
  31 0016 488945E0 		mov	QWORD PTR -32[rbp], rax
  21:loss.c        ****     float f = 2;
  32              		.loc 1 21 11
  33 001a F30F1005 		movss	xmm0, DWORD PTR .LC0[rip]
  33      00000000 
  34 0022 F30F1145 		movss	DWORD PTR -40[rbp], xmm0
  34      D8
  22:loss.c        ****     double d = 2;
  35              		.loc 1 22 12
  36 0027 F20F1005 		movsd	xmm0, QWORD PTR .LC1[rip]
  36      00000000 
  37 002f F20F1145 		movsd	QWORD PTR -24[rbp], xmm0
  37      E8
  23:loss.c        **** 
  24:loss.c        ****     printf("Correct: %ld\n", 2 * l);
  38              		.loc 1 24 5
  39 0034 488B45E0 		mov	rax, QWORD PTR -32[rbp]
  40 0038 4801C0   		add	rax, rax
  41 003b 4889C6   		mov	rsi, rax
  42 003e 488D0500 		lea	rax, .LC2[rip]
  42      000000
  43 0045 4889C7   		mov	rdi, rax
  44 0048 B8000000 		mov	eax, 0
  44      00
  45 004d E8000000 		call	printf@PLT
  45      00
  25:loss.c        ****     printf("Float:   %ld\n", (long) (f * l));
  46              		.loc 1 25 40
  47 0052 660FEFC0 		pxor	xmm0, xmm0
  48 0056 F3480F2A 		cvtsi2ss	xmm0, QWORD PTR -32[rbp]
  48      45E0
  49 005c F30F5945 		mulss	xmm0, DWORD PTR -40[rbp]
  49      D8
  50              		.loc 1 25 5
  51 0061 F3480F2C 		cvttss2si	rax, xmm0
  51      C0
  52 0066 4889C6   		mov	rsi, rax
  53 0069 488D0500 		lea	rax, .LC3[rip]
  53      000000
  54 0070 4889C7   		mov	rdi, rax
  55 0073 B8000000 		mov	eax, 0
  55      00
  56 0078 E8000000 		call	printf@PLT
  56      00
  26:loss.c        ****     printf("Double:  %ld\n", (long) (d * l));
  57              		.loc 1 26 40
  58 007d 660FEFC0 		pxor	xmm0, xmm0
  59 0081 F2480F2A 		cvtsi2sd	xmm0, QWORD PTR -32[rbp]
  59      45E0
  60 0087 F20F5945 		mulsd	xmm0, QWORD PTR -24[rbp]
  60      E8
  61              		.loc 1 26 5
  62 008c F2480F2C 		cvttsd2si	rax, xmm0
  62      C0
  63 0091 4889C6   		mov	rsi, rax
  64 0094 488D0500 		lea	rax, .LC4[rip]
  64      000000
  65 009b 4889C7   		mov	rdi, rax
  66 009e B8000000 		mov	eax, 0
  66      00
  67 00a3 E8000000 		call	printf@PLT
  67      00
  68              	.LBE2:
  69              	.LBB3:
  27:loss.c        ****   }
  28:loss.c        **** 
  29:loss.c        ****   {
  30:loss.c        ****     long int l = 1125899906842524L; //  (- (expt 2 50) 100)
  70              		.loc 1 30 14
  71 00a8 48B89CFF 		movabs	rax, 1125899906842524
  71      FFFFFFFF 
  71      0300
  72 00b2 488945F0 		mov	QWORD PTR -16[rbp], rax
  31:loss.c        ****     float f = 2;
  73              		.loc 1 31 11
  74 00b6 F30F1005 		movss	xmm0, DWORD PTR .LC0[rip]
  74      00000000 
  75 00be F30F1145 		movss	DWORD PTR -36[rbp], xmm0
  75      DC
  32:loss.c        ****     double d = 2;
  76              		.loc 1 32 12
  77 00c3 F20F1005 		movsd	xmm0, QWORD PTR .LC1[rip]
  77      00000000 
  78 00cb F20F1145 		movsd	QWORD PTR -8[rbp], xmm0
  78      F8
  33:loss.c        **** 
  34:loss.c        ****     printf("Correct: %ld\n", 2 * l);
  79              		.loc 1 34 5
  80 00d0 488B45F0 		mov	rax, QWORD PTR -16[rbp]
  81 00d4 4801C0   		add	rax, rax
  82 00d7 4889C6   		mov	rsi, rax
  83 00da 488D0500 		lea	rax, .LC2[rip]
  83      000000
  84 00e1 4889C7   		mov	rdi, rax
  85 00e4 B8000000 		mov	eax, 0
  85      00
  86 00e9 E8000000 		call	printf@PLT
  86      00
  35:loss.c        ****     printf("Float:   %ld\n", (long) (f * l));
  87              		.loc 1 35 40
  88 00ee 660FEFC0 		pxor	xmm0, xmm0
  89 00f2 F3480F2A 		cvtsi2ss	xmm0, QWORD PTR -16[rbp]
  89      45F0
  90 00f8 F30F5945 		mulss	xmm0, DWORD PTR -36[rbp]
  90      DC
  91              		.loc 1 35 5
  92 00fd F3480F2C 		cvttss2si	rax, xmm0
  92      C0
  93 0102 4889C6   		mov	rsi, rax
  94 0105 488D0500 		lea	rax, .LC3[rip]
  94      000000
  95 010c 4889C7   		mov	rdi, rax
  96 010f B8000000 		mov	eax, 0
  96      00
  97 0114 E8000000 		call	printf@PLT
  97      00
  36:loss.c        ****     printf("Double:  %ld\n", (long) (d * l));
  98              		.loc 1 36 40
  99 0119 660FEFC0 		pxor	xmm0, xmm0
 100 011d F2480F2A 		cvtsi2sd	xmm0, QWORD PTR -16[rbp]
 100      45F0
 101 0123 F20F5945 		mulsd	xmm0, QWORD PTR -8[rbp]
 101      F8
 102              		.loc 1 36 5
 103 0128 F2480F2C 		cvttsd2si	rax, xmm0
 103      C0
 104 012d 4889C6   		mov	rsi, rax
 105 0130 488D0500 		lea	rax, .LC4[rip]
 105      000000
 106 0137 4889C7   		mov	rdi, rax
 107 013a B8000000 		mov	eax, 0
 107      00
 108 013f E8000000 		call	printf@PLT
 108      00
 109              	.LBE3:
  37:loss.c        ****   }
  38:loss.c        **** 
  39:loss.c        ****   exit(EXIT_SUCCESS);
 110              		.loc 1 39 3
 111 0144 BF000000 		mov	edi, 0
 111      00
 112 0149 E8000000 		call	exit@PLT
 112      00
 113              		.cfi_endproc
 114              	.LFE6:
 116              		.section	.rodata
 117 002a 0000     		.align 4
 118              	.LC0:
 119 002c 00000040 		.long	1073741824
 120              		.align 8
 121              	.LC1:
 122 0030 00000000 		.long	0
 123 0034 00000040 		.long	1073741824
 124              		.text
 125              	.Letext0:
 126              		.file 2 "/usr/include/stdlib.h"
 127              		.file 3 "/usr/include/stdio.h"
 529              		.section	.note.gnu.property,"a"
 530              		.align 8
 531 0000 04000000 		.long	1f - 0f
 532 0004 10000000 		.long	4f - 1f
 533 0008 05000000 		.long	5
 534              	0:
 535 000c 474E5500 		.string	"GNU"
 536              	1:
 537              		.align 8
 538 0010 020000C0 		.long	0xc0000002
 539 0014 04000000 		.long	3f - 2f
 540              	2:
 541 0018 03000000 		.long	0x3
 542              	3:
 543 001c 00000000 		.align 8
 544              	4:
