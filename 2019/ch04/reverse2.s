   1              		.file	"reverse2.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch04" "reverse2.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 456E7465 		.string	"Enter a two-digit number: "
   8      72206120 
   8      74776F2D 
   8      64696769 
   8      74206E75 
   9              	.LC1:
  10 001b 256400   		.string	"%d"
  11              	.LC2:
  12 001e 54686520 		.string	"The reversal is: %d%d\n"
  12      72657665 
  12      7273616C 
  12      2069733A 
  12      20256425 
  13              		.text
  14              		.globl	main
  16              	main:
  17              	.LFB6:
  18              		.file 1 "reverse2.c"
   1:reverse2.c    **** /*
   2:reverse2.c    ****  *
   3:reverse2.c    ****  *   File:
   4:reverse2.c    ****  *      reverse2.c
   5:reverse2.c    ****  *
   6:reverse2.c    ****  *   Synopsis:
   7:reverse2.c    ****  *
   8:reverse2.c    ****  *   Revision History:
   9:reverse2.c    ****  *      Date    Change Description
  10:reverse2.c    ****  *      ------  -----------------------------------------
  11:reverse2.c    ****  *      191231  Original.
  12:reverse2.c    ****  *
  13:reverse2.c    ****  */
  14:reverse2.c    **** #include <stdio.h>
  15:reverse2.c    **** #include <stdlib.h>
  16:reverse2.c    **** 
  17:reverse2.c    **** int main(void) {
  19              		.loc 1 17 16
  20              		.cfi_startproc
  21 0000 F30F1EFA 		endbr64
  22 0004 55       		push	rbp
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 6, -16
  25 0005 4889E5   		mov	rbp, rsp
  26              		.cfi_def_cfa_register 6
  27 0008 4883EC10 		sub	rsp, 16
  28              		.loc 1 17 16
  29 000c 64488B04 		mov	rax, QWORD PTR fs:40
  29      25280000 
  29      00
  30 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  31 0019 31C0     		xor	eax, eax
  18:reverse2.c    ****   int n;
  19:reverse2.c    **** 
  20:reverse2.c    ****   printf("Enter a two-digit number: ");
  32              		.loc 1 20 3
  33 001b 488D0500 		lea	rax, .LC0[rip]
  33      000000
  34 0022 4889C7   		mov	rdi, rax
  35 0025 B8000000 		mov	eax, 0
  35      00
  36 002a E8000000 		call	printf@PLT
  36      00
  21:reverse2.c    ****   scanf("%d", &n);
  37              		.loc 1 21 3
  38 002f 488D45F4 		lea	rax, -12[rbp]
  39 0033 4889C6   		mov	rsi, rax
  40 0036 488D0500 		lea	rax, .LC1[rip]
  40      000000
  41 003d 4889C7   		mov	rdi, rax
  42 0040 B8000000 		mov	eax, 0
  42      00
  43 0045 E8000000 		call	__isoc99_scanf@PLT
  43      00
  22:reverse2.c    **** 
  23:reverse2.c    ****   printf("The reversal is: %d%d\n", n%10, n/10);
  44              		.loc 1 23 3
  45 004a 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  46 004d 4863D0   		movsx	rdx, eax
  47 0050 4869D267 		imul	rdx, rdx, 1717986919
  47      666666
  48 0057 48C1EA20 		shr	rdx, 32
  49 005b C1FA02   		sar	edx, 2
  50 005e C1F81F   		sar	eax, 31
  51 0061 89D6     		mov	esi, edx
  52 0063 29C6     		sub	esi, eax
  53 0065 8B55F4   		mov	edx, DWORD PTR -12[rbp]
  54 0068 4863C2   		movsx	rax, edx
  55 006b 4869C067 		imul	rax, rax, 1717986919
  55      666666
  56 0072 48C1E820 		shr	rax, 32
  57 0076 C1F802   		sar	eax, 2
  58 0079 89D7     		mov	edi, edx
  59 007b C1FF1F   		sar	edi, 31
  60 007e 29F8     		sub	eax, edi
  61 0080 89C1     		mov	ecx, eax
  62 0082 89C8     		mov	eax, ecx
  63 0084 C1E002   		sal	eax, 2
  64 0087 01C8     		add	eax, ecx
  65 0089 01C0     		add	eax, eax
  66 008b 89D1     		mov	ecx, edx
  67 008d 29C1     		sub	ecx, eax
  68 008f 89F2     		mov	edx, esi
  69 0091 89CE     		mov	esi, ecx
  70 0093 488D0500 		lea	rax, .LC2[rip]
  70      000000
  71 009a 4889C7   		mov	rdi, rax
  72 009d B8000000 		mov	eax, 0
  72      00
  73 00a2 E8000000 		call	printf@PLT
  73      00
  24:reverse2.c    **** 
  25:reverse2.c    ****   exit(EXIT_SUCCESS);
  74              		.loc 1 25 3
  75 00a7 BF000000 		mov	edi, 0
  75      00
  76 00ac E8000000 		call	exit@PLT
  76      00
  77              		.cfi_endproc
  78              	.LFE6:
  80              	.Letext0:
  81              		.file 2 "/usr/include/stdlib.h"
  82              		.file 3 "/usr/include/stdio.h"
 441              		.section	.note.gnu.property,"a"
 442              		.align 8
 443 0000 04000000 		.long	1f - 0f
 444 0004 10000000 		.long	4f - 1f
 445 0008 05000000 		.long	5
 446              	0:
 447 000c 474E5500 		.string	"GNU"
 448              	1:
 449              		.align 8
 450 0010 020000C0 		.long	0xc0000002
 451 0014 04000000 		.long	3f - 2f
 452              	2:
 453 0018 03000000 		.long	0x3
 454              	3:
 455 001c 00000000 		.align 8
 456              	4:
