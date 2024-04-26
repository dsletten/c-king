   1              		.file	"test.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.section	.rodata
   6              	.LC0:
   7 0000 53756D3A 		.string	"Sum: %ld\n"
   7      20256C64 
   7      0A00
   8              		.text
   9              		.globl	main
  11              	main:
  12              	.LFB5:
  13              		.file 1 "test.c"
   1:test.c        **** /*
   2:test.c        ****  *
   3:test.c        ****  *   File:
   4:test.c        ****  *      test.c
   5:test.c        ****  *
   6:test.c        ****  *   Synopsis:
   7:test.c        ****  *
   8:test.c        ****  *   Revision History:
   9:test.c        ****  *      Date    Change Description
  10:test.c        ****  *      ------  -----------------------------------------
  11:test.c        ****  *      200408  Original.
  12:test.c        ****  *
  13:test.c        ****  */
  14:test.c        **** #include <stdio.h>
  15:test.c        **** #include <stdlib.h>
  16:test.c        **** 
  17:test.c        **** long sum(int a[10]);
  18:test.c        **** 
  19:test.c        **** int main(void) {
  14              		.loc 1 19 0
  15              		.cfi_startproc
  16 0000 55       		push	rbp
  17              		.cfi_def_cfa_offset 16
  18              		.cfi_offset 6, -16
  19 0001 4889E5   		mov	rbp, rsp
  20              		.cfi_def_cfa_register 6
  21 0004 4883EC20 		sub	rsp, 32
  22              		.loc 1 19 0
  23 0008 64488B04 		mov	rax, QWORD PTR fs:40
  23      25280000 
  23      00
  24 0011 488945F8 		mov	QWORD PTR -8[rbp], rax
  25 0015 31C0     		xor	eax, eax
  20:test.c        ****   int a[5] = {1, 2, 3, 4, 5};
  26              		.loc 1 20 0
  27 0017 C745E001 		mov	DWORD PTR -32[rbp], 1
  27      000000
  28 001e C745E402 		mov	DWORD PTR -28[rbp], 2
  28      000000
  29 0025 C745E803 		mov	DWORD PTR -24[rbp], 3
  29      000000
  30 002c C745EC04 		mov	DWORD PTR -20[rbp], 4
  30      000000
  31 0033 C745F005 		mov	DWORD PTR -16[rbp], 5
  31      000000
  21:test.c        **** 
  22:test.c        ****   printf("Sum: %ld\n", sum(a));
  32              		.loc 1 22 0
  33 003a 488D45E0 		lea	rax, -32[rbp]
  34 003e 4889C7   		mov	rdi, rax
  35 0041 E8000000 		call	sum
  35      00
  36 0046 4889C6   		mov	rsi, rax
  37 0049 488D3D00 		lea	rdi, .LC0[rip]
  37      000000
  38 0050 B8000000 		mov	eax, 0
  38      00
  39 0055 E8000000 		call	printf@PLT
  39      00
  23:test.c        **** 
  24:test.c        ****   exit(EXIT_SUCCESS);
  40              		.loc 1 24 0
  41 005a BF000000 		mov	edi, 0
  41      00
  42 005f E8000000 		call	exit@PLT
  42      00
  43              		.cfi_endproc
  44              	.LFE5:
  46              		.globl	sum
  48              	sum:
  49              	.LFB6:
  25:test.c        **** }
  26:test.c        **** 
  27:test.c        **** long sum(int a[10]) {
  50              		.loc 1 27 0
  51              		.cfi_startproc
  52 0064 55       		push	rbp
  53              		.cfi_def_cfa_offset 16
  54              		.cfi_offset 6, -16
  55 0065 4889E5   		mov	rbp, rsp
  56              		.cfi_def_cfa_register 6
  57 0068 48897DE8 		mov	QWORD PTR -24[rbp], rdi
  28:test.c        ****   long sum = 0;
  58              		.loc 1 28 0
  59 006c 48C745F8 		mov	QWORD PTR -8[rbp], 0
  59      00000000 
  60              	.LBB2:
  29:test.c        ****   for (int i = 0; i < 5; i++) {
  61              		.loc 1 29 0
  62 0074 C745F400 		mov	DWORD PTR -12[rbp], 0
  62      000000
  63 007b EB20     		jmp	.L4
  64              	.L5:
  30:test.c        ****     sum += a[i];
  65              		.loc 1 30 0 discriminator 3
  66 007d 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  67 0080 4898     		cdqe
  68 0082 488D1485 		lea	rdx, 0[0+rax*4]
  68      00000000 
  69 008a 488B45E8 		mov	rax, QWORD PTR -24[rbp]
  70 008e 4801D0   		add	rax, rdx
  71 0091 8B00     		mov	eax, DWORD PTR [rax]
  72 0093 4898     		cdqe
  73 0095 480145F8 		add	QWORD PTR -8[rbp], rax
  29:test.c        ****   for (int i = 0; i < 5; i++) {
  74              		.loc 1 29 0 discriminator 3
  75 0099 8345F401 		add	DWORD PTR -12[rbp], 1
  76              	.L4:
  29:test.c        ****   for (int i = 0; i < 5; i++) {
  77              		.loc 1 29 0 is_stmt 0 discriminator 1
  78 009d 837DF404 		cmp	DWORD PTR -12[rbp], 4
  79 00a1 7EDA     		jle	.L5
  80              	.LBE2:
  31:test.c        ****   }
  32:test.c        **** 
  33:test.c        ****   return sum;
  81              		.loc 1 33 0 is_stmt 1
  82 00a3 488B45F8 		mov	rax, QWORD PTR -8[rbp]
  34:test.c        **** }
  83              		.loc 1 34 0
  84 00a7 5D       		pop	rbp
  85              		.cfi_def_cfa 7, 8
  86 00a8 C3       		ret
  87              		.cfi_endproc
  88              	.LFE6:
  90              	.Letext0:
  91              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h"
  92              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
  93              		.file 4 "/usr/include/x86_64-linux-gnu/bits/libio.h"
  94              		.file 5 "/usr/include/stdio.h"
  95              		.file 6 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
