   1              		.file	"overflow.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2022/ch07" "overflow.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 50726F64 		.string	"Product: %ld\n"
   8      7563743A 
   8      20256C64 
   8      0A00
   9              		.text
  10              		.globl	main
  12              	main:
  13              	.LFB6:
  14              		.file 1 "overflow.c"
   1:overflow.c    **** /*
   2:overflow.c    ****  *
   3:overflow.c    ****  *   File:
   4:overflow.c    ****  *      overflow.c
   5:overflow.c    ****  *
   6:overflow.c    ****  *   Synopsis: See King 129 页
   7:overflow.c    ****  *
   8:overflow.c    ****  *   Revision History:
   9:overflow.c    ****  *      Date    Change Description
  10:overflow.c    ****  *      ------  -----------------------------------------
  11:overflow.c    ****  *      230503  Original.
  12:overflow.c    ****  *
  13:overflow.c    ****  */
  14:overflow.c    **** 
  15:overflow.c    **** #include <stdio.h>
  16:overflow.c    **** #include <stdlib.h>
  17:overflow.c    **** 
  18:overflow.c    **** int main(void) {
  15              		.loc 1 18 16
  16              		.cfi_startproc
  17 0000 F30F1EFA 		endbr64
  18 0004 55       		push	rbp
  19              		.cfi_def_cfa_offset 16
  20              		.cfi_offset 6, -16
  21 0005 4889E5   		mov	rbp, rsp
  22              		.cfi_def_cfa_register 6
  23 0008 4883EC10 		sub	rsp, 16
  19:overflow.c    ****     int i = 200000;
  24              		.loc 1 19 9
  25 000c C745F440 		mov	DWORD PTR -12[rbp], 200000
  25      0D0300
  20:overflow.c    ****     long product = i * i;
  26              		.loc 1 20 22
  27 0013 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  28 0016 0FAFC0   		imul	eax, eax
  29              		.loc 1 20 10
  30 0019 4898     		cdqe
  31 001b 488945F8 		mov	QWORD PTR -8[rbp], rax
  21:overflow.c    ****     printf("Product: %ld\n", product); // (format t "~D~%" (mod (* 200000 200000) (expt 2 32))) => 
  32              		.loc 1 21 5
  33 001f 488B45F8 		mov	rax, QWORD PTR -8[rbp]
  34 0023 4889C6   		mov	rsi, rax
  35 0026 488D0500 		lea	rax, .LC0[rip]
  35      000000
  36 002d 4889C7   		mov	rdi, rax
  37 0030 B8000000 		mov	eax, 0
  37      00
  38 0035 E8000000 		call	printf@PLT
  38      00
  22:overflow.c    ****     product = (long) i * i;
  39              		.loc 1 22 15
  40 003a 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  41 003d 4863D0   		movsx	rdx, eax
  42              		.loc 1 22 24
  43 0040 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  44 0043 4898     		cdqe
  45              		.loc 1 22 13
  46 0045 480FAFC2 		imul	rax, rdx
  47 0049 488945F8 		mov	QWORD PTR -8[rbp], rax
  23:overflow.c    ****     printf("Product: %ld\n", product);
  48              		.loc 1 23 5
  49 004d 488B45F8 		mov	rax, QWORD PTR -8[rbp]
  50 0051 4889C6   		mov	rsi, rax
  51 0054 488D0500 		lea	rax, .LC0[rip]
  51      000000
  52 005b 4889C7   		mov	rdi, rax
  53 005e B8000000 		mov	eax, 0
  53      00
  54 0063 E8000000 		call	printf@PLT
  54      00
  24:overflow.c    **** 
  25:overflow.c    ****   exit(EXIT_SUCCESS);
  55              		.loc 1 25 3
  56 0068 BF000000 		mov	edi, 0
  56      00
  57 006d E8000000 		call	exit@PLT
  57      00
  58              		.cfi_endproc
  59              	.LFE6:
  61              	.Letext0:
  62              		.file 2 "/usr/include/stdlib.h"
  63              		.file 3 "/usr/include/stdio.h"
 409              		.section	.note.gnu.property,"a"
 410              		.align 8
 411 0000 04000000 		.long	1f - 0f
 412 0004 10000000 		.long	4f - 1f
 413 0008 05000000 		.long	5
 414              	0:
 415 000c 474E5500 		.string	"GNU"
 416              	1:
 417              		.align 8
 418 0010 020000C0 		.long	0xc0000002
 419 0014 04000000 		.long	3f - 2f
 420              	2:
 421 0018 03000000 		.long	0x3
 422              	3:
 423 001c 00000000 		.align 8
 424              	4:
