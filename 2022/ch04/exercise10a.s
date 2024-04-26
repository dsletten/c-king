   1              		.file	"exercise10.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2022/ch04" "exercise10.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 25640A00 		.string	"%d\n"
   9              		.text
  10              		.globl	main
  12              	main:
  13              	.LFB6:
  14              		.file 1 "exercise10.c"
   1:exercise10.c  **** /*
   2:exercise10.c  ****  *
   3:exercise10.c  ****  *   File:
   4:exercise10.c  ****  *      exercise10.c
   5:exercise10.c  ****  *
   6:exercise10.c  ****  *   Synopsis:
   7:exercise10.c  ****  *
   8:exercise10.c  ****  *   Revision History:
   9:exercise10.c  ****  *      Date    Change Description
  10:exercise10.c  ****  *      ------  -----------------------------------------
  11:exercise10.c  ****  *      221005  Original.
  12:exercise10.c  ****  *
  13:exercise10.c  ****  */
  14:exercise10.c  **** 
  15:exercise10.c  **** #include <stdio.h>
  16:exercise10.c  **** #include <stdlib.h>
  17:exercise10.c  **** 
  18:exercise10.c  **** int main(void) {
  15              		.loc 1 18 16
  16              		.cfi_startproc
  17 0000 F30F1EFA 		endbr64
  18 0004 55       		push	rbp
  19              		.cfi_def_cfa_offset 16
  20              		.cfi_offset 6, -16
  21 0005 4889E5   		mov	rbp, rsp
  22              		.cfi_def_cfa_register 6
  23 0008 4883EC10 		sub	rsp, 16
  19:exercise10.c  ****   int i = 1;
  24              		.loc 1 19 7
  25 000c C745FC01 		mov	DWORD PTR -4[rbp], 1
  25      000000
  20:exercise10.c  **** 
  21:exercise10.c  ****   printf("%d\n", (i++) + (i--));
  26              		.loc 1 21 20
  27 0013 8B55FC   		mov	edx, DWORD PTR -4[rbp]
  28 0016 8D4201   		lea	eax, 1[rdx]
  29 0019 8945FC   		mov	DWORD PTR -4[rbp], eax
  30              		.loc 1 21 28
  31 001c 8B45FC   		mov	eax, DWORD PTR -4[rbp]
  32 001f 8D48FF   		lea	ecx, -1[rax]
  33 0022 894DFC   		mov	DWORD PTR -4[rbp], ecx
  34              		.loc 1 21 3
  35 0025 01D0     		add	eax, edx
  36 0027 89C6     		mov	esi, eax
  37 0029 488D0500 		lea	rax, .LC0[rip]
  37      000000
  38 0030 4889C7   		mov	rdi, rax
  39 0033 B8000000 		mov	eax, 0
  39      00
  40 0038 E8000000 		call	printf@PLT
  40      00
  22:exercise10.c  **** 
  23:exercise10.c  ****   exit(EXIT_SUCCESS);
  41              		.loc 1 23 3
  42 003d BF000000 		mov	edi, 0
  42      00
  43 0042 E8000000 		call	exit@PLT
  43      00
  44              		.cfi_endproc
  45              	.LFE6:
  47              	.Letext0:
  48              		.file 2 "/usr/include/stdlib.h"
  49              		.file 3 "/usr/include/stdio.h"
 367              		.section	.note.gnu.property,"a"
 368              		.align 8
 369 0000 04000000 		.long	1f - 0f
 370 0004 10000000 		.long	4f - 1f
 371 0008 05000000 		.long	5
 372              	0:
 373 000c 474E5500 		.string	"GNU"
 374              	1:
 375              		.align 8
 376 0010 020000C0 		.long	0xc0000002
 377 0014 04000000 		.long	3f - 2f
 378              	2:
 379 0018 03000000 		.long	0x3
 380              	3:
 381 001c 00000000 		.align 8
 382              	4:
