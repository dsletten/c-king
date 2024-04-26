   1              		.file	"volume.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch02" "volume.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 456E7465 		.string	"Enter radius: "
   8      72207261 
   8      64697573 
   8      3A2000
   9              	.LC1:
  10 000f 256C6600 		.string	"%lf"
  11 0013 00000000 		.align 8
  11      00
  12              	.LC3:
  13 0018 566F6C75 		.string	"Volume of sphere with radius %f: %f\n"
  13      6D65206F 
  13      66207370 
  13      68657265 
  13      20776974 
  14              		.text
  15              		.globl	main
  17              	main:
  18              	.LFB6:
  19              		.file 1 "volume.c"
   1:volume.c      **** /*
   2:volume.c      ****  *
   3:volume.c      ****  *   File:
   4:volume.c      ****  *      volume.c
   5:volume.c      ****  *
   6:volume.c      ****  *   Synopsis:
   7:volume.c      ****  *
   8:volume.c      ****  *   Revision History:
   9:volume.c      ****  *      Date    Change Description
  10:volume.c      ****  *      ------  -----------------------------------------
  11:volume.c      ****  *      190725  Original.
  12:volume.c      ****  *
  13:volume.c      ****  */
  14:volume.c      **** #include <stdio.h>
  15:volume.c      **** #include <stdlib.h>
  16:volume.c      **** #include <math.h>
  17:volume.c      **** 
  18:volume.c      **** // https://www.gnu.org/software/libc/manual/html_node/Mathematical-Constants.html
  19:volume.c      **** //#define PI 3.141592653589793
  20:volume.c      **** //           3.14159265358979323846264338327950288  !!
  21:volume.c      **** ///Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/us
  22:volume.c      **** //#define M_PI        3.14159265358979323846264338327950288   /* pi             */
  23:volume.c      **** 
  24:volume.c      **** int main(void) {
  20              		.loc 1 24 16
  21              		.cfi_startproc
  22 0000 F30F1EFA 		endbr64
  23 0004 55       		push	rbp
  24              		.cfi_def_cfa_offset 16
  25              		.cfi_offset 6, -16
  26 0005 4889E5   		mov	rbp, rsp
  27              		.cfi_def_cfa_register 6
  28 0008 4883EC20 		sub	rsp, 32
  29              		.loc 1 24 16
  30 000c 64488B04 		mov	rax, QWORD PTR fs:40
  30      25280000 
  30      00
  31 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  32 0019 31C0     		xor	eax, eax
  25:volume.c      ****   double radius;
  26:volume.c      ****   printf("Enter radius: ");
  33              		.loc 1 26 3
  34 001b 488D0500 		lea	rax, .LC0[rip]
  34      000000
  35 0022 4889C7   		mov	rdi, rax
  36 0025 B8000000 		mov	eax, 0
  36      00
  37 002a E8000000 		call	printf@PLT
  37      00
  27:volume.c      ****   scanf("%lf", &radius);
  38              		.loc 1 27 3
  39 002f 488D45E8 		lea	rax, -24[rbp]
  40 0033 4889C6   		mov	rsi, rax
  41 0036 488D0500 		lea	rax, .LC1[rip]
  41      000000
  42 003d 4889C7   		mov	rdi, rax
  43 0040 B8000000 		mov	eax, 0
  43      00
  44 0045 E8000000 		call	__isoc99_scanf@PLT
  44      00
  28:volume.c      **** 
  29:volume.c      ****   double volume = (4.0/3.0) * M_PI * radius * radius * radius;
  45              		.loc 1 29 36
  46 004a F20F104D 		movsd	xmm1, QWORD PTR -24[rbp]
  46      E8
  47 004f F20F1005 		movsd	xmm0, QWORD PTR .LC2[rip]
  47      00000000 
  48 0057 F20F59C8 		mulsd	xmm1, xmm0
  49              		.loc 1 29 45
  50 005b F20F1045 		movsd	xmm0, QWORD PTR -24[rbp]
  50      E8
  51 0060 F20F59C8 		mulsd	xmm1, xmm0
  52              		.loc 1 29 54
  53 0064 F20F1045 		movsd	xmm0, QWORD PTR -24[rbp]
  53      E8
  54              		.loc 1 29 10
  55 0069 F20F59C1 		mulsd	xmm0, xmm1
  56 006d F20F1145 		movsd	QWORD PTR -16[rbp], xmm0
  56      F0
  30:volume.c      **** 
  31:volume.c      ****   printf("Volume of sphere with radius %f: %f\n", radius, volume);
  57              		.loc 1 31 3
  58 0072 488B45E8 		mov	rax, QWORD PTR -24[rbp]
  59 0076 F20F1045 		movsd	xmm0, QWORD PTR -16[rbp]
  59      F0
  60 007b 660F28C8 		movapd	xmm1, xmm0
  61 007f 66480F6E 		movq	xmm0, rax
  61      C0
  62 0084 488D0500 		lea	rax, .LC3[rip]
  62      000000
  63 008b 4889C7   		mov	rdi, rax
  64 008e B8020000 		mov	eax, 2
  64      00
  65 0093 E8000000 		call	printf@PLT
  65      00
  32:volume.c      ****   
  33:volume.c      ****   exit(EXIT_SUCCESS);
  66              		.loc 1 33 3
  67 0098 BF000000 		mov	edi, 0
  67      00
  68 009d E8000000 		call	exit@PLT
  68      00
  69              		.cfi_endproc
  70              	.LFE6:
  72              		.section	.rodata
  73 003d 000000   		.align 8
  74              	.LC2:
  75 0040 65732D38 		.long	942502757
  76 0044 52C11040 		.long	1074839890
  77              		.text
  78              	.Letext0:
  79              		.file 2 "/usr/include/stdlib.h"
  80              		.file 3 "/usr/include/stdio.h"
 462              		.section	.note.gnu.property,"a"
 463              		.align 8
 464 0000 04000000 		.long	1f - 0f
 465 0004 10000000 		.long	4f - 1f
 466 0008 05000000 		.long	5
 467              	0:
 468 000c 474E5500 		.string	"GNU"
 469              	1:
 470              		.align 8
 471 0010 020000C0 		.long	0xc0000002
 472 0014 04000000 		.long	3f - 2f
 473              	2:
 474 0018 03000000 		.long	0x3
 475              	3:
 476 001c 00000000 		.align 8
 477              	4:
