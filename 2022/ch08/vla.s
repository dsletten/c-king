   1              		.file	"vla.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2022/ch08" "vla.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 25640A00 		.string	"%d\n"
   9              		.text
  10              		.globl	main
  12              	main:
  13              	.LFB6:
  14              		.file 1 "vla.c"
   1:vla.c         **** /*
   2:vla.c         ****  *
   3:vla.c         ****  *   File:
   4:vla.c         ****  *      vla.c
   5:vla.c         ****  *
   6:vla.c         ****  *   Synopsis:
   7:vla.c         ****  *      Experiment with variable-length arrays
   8:vla.c         ****  *      
   9:vla.c         ****  *   Revision History:
  10:vla.c         ****  *      Date    Change Description
  11:vla.c         ****  *      ------  -----------------------------------------
  12:vla.c         ****  *      230520  Original.
  13:vla.c         ****  *
  14:vla.c         ****  */
  15:vla.c         **** 
  16:vla.c         **** #include <stdio.h>
  17:vla.c         **** #include <stdlib.h>
  18:vla.c         **** #include <string.h>
  19:vla.c         **** 
  20:vla.c         **** int main(void) {
  15              		.loc 1 20 16
  16              		.cfi_startproc
  17 0000 F30F1EFA 		endbr64
  18 0004 55       		push	rbp
  19              		.cfi_def_cfa_offset 16
  20              		.cfi_offset 6, -16
  21 0005 4889E5   		mov	rbp, rsp
  22              		.cfi_def_cfa_register 6
  23 0008 53       		push	rbx
  24 0009 4883EC28 		sub	rsp, 40
  25              		.cfi_offset 3, -24
  26              		.loc 1 20 16
  27 000d 64488B04 		mov	rax, QWORD PTR fs:40
  27      25280000 
  27      00
  28 0016 488945E8 		mov	QWORD PTR -24[rbp], rax
  29 001a 31C0     		xor	eax, eax
  21:vla.c         ****   int n = 10;
  30              		.loc 1 21 7
  31 001c C745D40A 		mov	DWORD PTR -44[rbp], 10
  31      000000
  22:vla.c         ****   int a[n];
  32              		.loc 1 22 3
  33 0023 8B45D4   		mov	eax, DWORD PTR -44[rbp]
  34              		.loc 1 22 7
  35 0026 4863D0   		movsx	rdx, eax
  36 0029 4883EA01 		sub	rdx, 1
  37 002d 488955D8 		mov	QWORD PTR -40[rbp], rdx
  38 0031 4863D0   		movsx	rdx, eax
  39 0034 4889D6   		mov	rsi, rdx
  40 0037 BF000000 		mov	edi, 0
  40      00
  41 003c 4863D0   		movsx	rdx, eax
  42 003f 4889D1   		mov	rcx, rdx
  43 0042 BB000000 		mov	ebx, 0
  43      00
  44 0047 4898     		cdqe
  45 0049 488D1485 		lea	rdx, 0[0+rax*4]
  45      00000000 
  46 0051 B8100000 		mov	eax, 16
  46      00
  47 0056 4883E801 		sub	rax, 1
  48 005a 4801D0   		add	rax, rdx
  49 005d BB100000 		mov	ebx, 16
  49      00
  50 0062 BA000000 		mov	edx, 0
  50      00
  51 0067 48F7F3   		div	rbx
  52 006a 486BC010 		imul	rax, rax, 16
  53 006e 4889C1   		mov	rcx, rax
  54 0071 4881E100 		and	rcx, -4096
  54      F0FFFF
  55 0078 4889E2   		mov	rdx, rsp
  56 007b 4829CA   		sub	rdx, rcx
  57              	.L2:
  58 007e 4839D4   		cmp	rsp, rdx
  59 0081 7412     		je	.L3
  60 0083 4881EC00 		sub	rsp, 4096
  60      100000
  61 008a 48838C24 		or	QWORD PTR 4088[rsp], 0
  61      F80F0000 
  61      00
  62 0093 EBE9     		jmp	.L2
  63              	.L3:
  64 0095 4889C2   		mov	rdx, rax
  65 0098 81E2FF0F 		and	edx, 4095
  65      0000
  66 009e 4829D4   		sub	rsp, rdx
  67 00a1 4889C2   		mov	rdx, rax
  68 00a4 81E2FF0F 		and	edx, 4095
  68      0000
  69 00aa 4885D2   		test	rdx, rdx
  70 00ad 7410     		je	.L4
  71 00af 25FF0F00 		and	eax, 4095
  71      00
  72 00b4 4883E808 		sub	rax, 8
  73 00b8 4801E0   		add	rax, rsp
  74 00bb 48830800 		or	QWORD PTR [rax], 0
  75              	.L4:
  76 00bf 4889E0   		mov	rax, rsp
  77 00c2 4883C003 		add	rax, 3
  78 00c6 48C1E802 		shr	rax, 2
  79 00ca 48C1E002 		sal	rax, 2
  80 00ce 488945E0 		mov	QWORD PTR -32[rbp], rax
  23:vla.c         **** 
  24:vla.c         ****   printf("%d\n", a[0]);
  81              		.loc 1 24 3
  82 00d2 488B45E0 		mov	rax, QWORD PTR -32[rbp]
  83 00d6 8B00     		mov	eax, DWORD PTR [rax]
  84 00d8 89C6     		mov	esi, eax
  85 00da 488D0500 		lea	rax, .LC0[rip]
  85      000000
  86 00e1 4889C7   		mov	rdi, rax
  87 00e4 B8000000 		mov	eax, 0
  87      00
  88 00e9 E8000000 		call	printf@PLT
  88      00
  25:vla.c         **** 
  26:vla.c         ****   memset(a, 0, n * sizeof(int));
  89              		.loc 1 26 3
  90 00ee 8B45D4   		mov	eax, DWORD PTR -44[rbp]
  91 00f1 4898     		cdqe
  92 00f3 488D1485 		lea	rdx, 0[0+rax*4]
  92      00000000 
  93 00fb 488B45E0 		mov	rax, QWORD PTR -32[rbp]
  94 00ff BE000000 		mov	esi, 0
  94      00
  95 0104 4889C7   		mov	rdi, rax
  96 0107 E8000000 		call	memset@PLT
  96      00
  27:vla.c         ****   
  28:vla.c         ****   printf("%d\n", a[0]);
  97              		.loc 1 28 3
  98 010c 488B45E0 		mov	rax, QWORD PTR -32[rbp]
  99 0110 8B00     		mov	eax, DWORD PTR [rax]
 100 0112 89C6     		mov	esi, eax
 101 0114 488D0500 		lea	rax, .LC0[rip]
 101      000000
 102 011b 4889C7   		mov	rdi, rax
 103 011e B8000000 		mov	eax, 0
 103      00
 104 0123 E8000000 		call	printf@PLT
 104      00
  29:vla.c         **** 
  30:vla.c         ****   exit(EXIT_SUCCESS);
 105              		.loc 1 30 3
 106 0128 BF000000 		mov	edi, 0
 106      00
 107 012d E8000000 		call	exit@PLT
 107      00
 108              		.cfi_endproc
 109              	.LFE6:
 111              	.Letext0:
 112              		.file 2 "/usr/include/stdlib.h"
 113              		.file 3 "/usr/include/string.h"
 114              		.file 4 "/usr/include/stdio.h"
 115              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h"
 540              		.section	.note.gnu.property,"a"
 541              		.align 8
 542 0000 04000000 		.long	1f - 0f
 543 0004 10000000 		.long	4f - 1f
 544 0008 05000000 		.long	5
 545              	0:
 546 000c 474E5500 		.string	"GNU"
 547              	1:
 548              		.align 8
 549 0010 020000C0 		.long	0xc0000002
 550 0014 04000000 		.long	3f - 2f
 551              	2:
 552 0018 03000000 		.long	0x3
 553              	3:
 554 001c 00000000 		.align 8
 555              	4:
