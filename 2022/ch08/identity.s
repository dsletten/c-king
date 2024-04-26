   1              		.file	"identity.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2022/ch08" "identity.c"
   6              		.globl	main
   8              	main:
   9              	.LFB6:
  10              		.file 1 "identity.c"
   1:identity.c    **** /*
   2:identity.c    ****  *
   3:identity.c    ****  *   File:
   4:identity.c    ****  *      identity.c
   5:identity.c    ****  *
   6:identity.c    ****  *   Synopsis:
   7:identity.c    ****  *
   8:identity.c    ****  *   Revision History:
   9:identity.c    ****  *      Date    Change Description
  10:identity.c    ****  *      ------  -----------------------------------------
  11:identity.c    ****  *      230608  Original.
  12:identity.c    ****  *
  13:identity.c    ****  */
  14:identity.c    **** 
  15:identity.c    **** #include <stdio.h>
  16:identity.c    **** #include <stdlib.h>
  17:identity.c    **** 
  18:identity.c    **** #define N 10
  19:identity.c    **** 
  20:identity.c    **** int main(void) {
  11              		.loc 1 20 16
  12              		.cfi_startproc
  13 0000 F30F1EFA 		endbr64
  14 0004 55       		push	rbp
  15              		.cfi_def_cfa_offset 16
  16              		.cfi_offset 6, -16
  17 0005 4889E5   		mov	rbp, rsp
  18              		.cfi_def_cfa_register 6
  19 0008 4881EC40 		sub	rsp, 832
  19      030000
  20              		.loc 1 20 16
  21 000f 64488B04 		mov	rax, QWORD PTR fs:40
  21      25280000 
  21      00
  22 0018 488945F8 		mov	QWORD PTR -8[rbp], rax
  23 001c 31C0     		xor	eax, eax
  24              	.LBB2:
  21:identity.c    ****   double identity[N][N];
  22:identity.c    **** 
  23:identity.c    ****   for (int i = 0; i < N; i++) {
  25              		.loc 1 23 12
  26 001e C785C8FC 		mov	DWORD PTR -824[rbp], 0
  26      FFFF0000 
  26      0000
  27              		.loc 1 23 3
  28 0028 EB6A     		jmp	.L2
  29              	.L7:
  30              	.LBB3:
  24:identity.c    ****     for (int j = 0; j < N; j++) {
  31              		.loc 1 24 14
  32 002a C785CCFC 		mov	DWORD PTR -820[rbp], 0
  32      FFFF0000 
  32      0000
  33              		.loc 1 24 5
  34 0034 EB4E     		jmp	.L3
  35              	.L6:
  25:identity.c    ****       identity[i][j] = i == j;
  36              		.loc 1 25 22
  37 0036 8B85C8FC 		mov	eax, DWORD PTR -824[rbp]
  37      FFFF
  38 003c 3B85CCFC 		cmp	eax, DWORD PTR -820[rbp]
  38      FFFF
  39 0042 750A     		jne	.L4
  40              		.loc 1 25 22 is_stmt 0 discriminator 1
  41 0044 F20F1005 		movsd	xmm0, QWORD PTR .LC0[rip]
  41      00000000 
  42 004c EB04     		jmp	.L5
  43              	.L4:
  44              		.loc 1 25 22 discriminator 2
  45 004e 660FEFC0 		pxor	xmm0, xmm0
  46              	.L5:
  47              		.loc 1 25 22 discriminator 4
  48 0052 8B85CCFC 		mov	eax, DWORD PTR -820[rbp]
  48      FFFF
  49 0058 4863C8   		movsx	rcx, eax
  50 005b 8B85C8FC 		mov	eax, DWORD PTR -824[rbp]
  50      FFFF
  51 0061 4863D0   		movsx	rdx, eax
  52 0064 4889D0   		mov	rax, rdx
  53 0067 48C1E002 		sal	rax, 2
  54 006b 4801D0   		add	rax, rdx
  55 006e 4801C0   		add	rax, rax
  56 0071 4801C8   		add	rax, rcx
  57 0074 F20F1184 		movsd	QWORD PTR -816[rbp+rax*8], xmm0
  57      C5D0FCFF 
  57      FF
  24:identity.c    ****     for (int j = 0; j < N; j++) {
  58              		.loc 1 24 29 is_stmt 1 discriminator 4
  59 007d 8385CCFC 		add	DWORD PTR -820[rbp], 1
  59      FFFF01
  60              	.L3:
  24:identity.c    ****     for (int j = 0; j < N; j++) {
  61              		.loc 1 24 23 discriminator 2
  62 0084 83BDCCFC 		cmp	DWORD PTR -820[rbp], 9
  62      FFFF09
  63 008b 7EA9     		jle	.L6
  64              	.LBE3:
  23:identity.c    ****     for (int j = 0; j < N; j++) {
  65              		.loc 1 23 27 discriminator 2
  66 008d 8385C8FC 		add	DWORD PTR -824[rbp], 1
  66      FFFF01
  67              	.L2:
  23:identity.c    ****     for (int j = 0; j < N; j++) {
  68              		.loc 1 23 21 discriminator 1
  69 0094 83BDC8FC 		cmp	DWORD PTR -824[rbp], 9
  69      FFFF09
  70 009b 7E8D     		jle	.L7
  71              	.LBE2:
  26:identity.c    ****     }
  27:identity.c    ****   }
  28:identity.c    ****   
  29:identity.c    ****   exit(EXIT_SUCCESS);
  72              		.loc 1 29 3
  73 009d BF000000 		mov	edi, 0
  73      00
  74 00a2 E8000000 		call	exit@PLT
  74      00
  75              		.cfi_endproc
  76              	.LFE6:
  78              		.section	.rodata
  79              		.align 8
  80              	.LC0:
  81 0000 00000000 		.long	0
  82 0004 0000F03F 		.long	1072693248
  83              		.text
  84              	.Letext0:
  85              		.file 2 "/usr/include/stdlib.h"
 430              		.section	.note.gnu.property,"a"
 431              		.align 8
 432 0000 04000000 		.long	1f - 0f
 433 0004 10000000 		.long	4f - 1f
 434 0008 05000000 		.long	5
 435              	0:
 436 000c 474E5500 		.string	"GNU"
 437              	1:
 438              		.align 8
 439 0010 020000C0 		.long	0xc0000002
 440 0014 04000000 		.long	3f - 2f
 441              	2:
 442 0018 03000000 		.long	0x3
 443              	3:
 444 001c 00000000 		.align 8
 445              	4:
