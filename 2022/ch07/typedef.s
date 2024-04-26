   1              		.file	"typedef.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2022/ch07" "typedef.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 53697A65 		.string	"Size of char: %lu\n"
   8      206F6620 
   8      63686172 
   8      3A20256C 
   8      750A00
   9              	.LC1:
  10 0013 53697A65 		.string	"Size of short int: %lu\n"
  10      206F6620 
  10      73686F72 
  10      7420696E 
  10      743A2025 
  11              	.LC2:
  12 002b 53697A65 		.string	"Size of int: %lu\n"
  12      206F6620 
  12      696E743A 
  12      20256C75 
  12      0A00
  13              	.LC3:
  14 003d 496E7438 		.string	"Int8: %d\n"
  14      3A202564 
  14      0A00
  15              	.LC4:
  16 0047 496E7431 		.string	"Int16: %hd\n"
  16      363A2025 
  16      68640A00 
  17              	.LC5:
  18 0053 496E7433 		.string	"Int32: %d\n"
  18      323A2025 
  18      640A00
  19              		.text
  20              		.globl	main
  22              	main:
  23              	.LFB6:
  24              		.file 1 "typedef.c"
   1:typedef.c     **** /*
   2:typedef.c     ****  *
   3:typedef.c     ****  *   File:
   4:typedef.c     ****  *      typedef.c
   5:typedef.c     ****  *
   6:typedef.c     ****  *   Synopsis:
   7:typedef.c     ****  *
   8:typedef.c     ****  *   Revision History:
   9:typedef.c     ****  *      Date    Change Description
  10:typedef.c     ****  *      ------  -----------------------------------------
  11:typedef.c     ****  *      230520  Original.
  12:typedef.c     ****  *
  13:typedef.c     ****  */
  14:typedef.c     **** 
  15:typedef.c     **** #include <stdio.h>
  16:typedef.c     **** #include <stdlib.h>
  17:typedef.c     **** 
  18:typedef.c     **** int main(void) {
  25              		.loc 1 18 16
  26              		.cfi_startproc
  27 0000 F30F1EFA 		endbr64
  28 0004 55       		push	rbp
  29              		.cfi_def_cfa_offset 16
  30              		.cfi_offset 6, -16
  31 0005 4889E5   		mov	rbp, rsp
  32              		.cfi_def_cfa_register 6
  33 0008 4883EC10 		sub	rsp, 16
  19:typedef.c     ****   printf("Size of char: %lu\n", sizeof (char));
  34              		.loc 1 19 3
  35 000c BE010000 		mov	esi, 1
  35      00
  36 0011 488D0500 		lea	rax, .LC0[rip]
  36      000000
  37 0018 4889C7   		mov	rdi, rax
  38 001b B8000000 		mov	eax, 0
  38      00
  39 0020 E8000000 		call	printf@PLT
  39      00
  20:typedef.c     ****   printf("Size of short int: %lu\n", sizeof (short int));
  40              		.loc 1 20 3
  41 0025 BE020000 		mov	esi, 2
  41      00
  42 002a 488D0500 		lea	rax, .LC1[rip]
  42      000000
  43 0031 4889C7   		mov	rdi, rax
  44 0034 B8000000 		mov	eax, 0
  44      00
  45 0039 E8000000 		call	printf@PLT
  45      00
  21:typedef.c     ****   printf("Size of int: %lu\n", sizeof (int));
  46              		.loc 1 21 3
  47 003e BE040000 		mov	esi, 4
  47      00
  48 0043 488D0500 		lea	rax, .LC2[rip]
  48      000000
  49 004a 4889C7   		mov	rdi, rax
  50 004d B8000000 		mov	eax, 0
  50      00
  51 0052 E8000000 		call	printf@PLT
  51      00
  22:typedef.c     **** 
  23:typedef.c     ****   typedef char Int8;
  24:typedef.c     ****   typedef short int Int16;
  25:typedef.c     ****   typedef int Int32;
  26:typedef.c     **** 
  27:typedef.c     ****   Int8 i8 = 127;
  52              		.loc 1 27 8
  53 0057 C645F97F 		mov	BYTE PTR -7[rbp], 127
  28:typedef.c     ****   Int16 i16 = 32767;
  54              		.loc 1 28 9
  55 005b 66C745FA 		mov	WORD PTR -6[rbp], 32767
  55      FF7F
  29:typedef.c     ****   Int32 i32 = 2147483647;
  56              		.loc 1 29 9
  57 0061 C745FCFF 		mov	DWORD PTR -4[rbp], 2147483647
  57      FFFF7F
  30:typedef.c     **** 
  31:typedef.c     ****   printf("Int8: %d\n", i8);
  58              		.loc 1 31 3
  59 0068 0FBE45F9 		movsx	eax, BYTE PTR -7[rbp]
  60 006c 89C6     		mov	esi, eax
  61 006e 488D0500 		lea	rax, .LC3[rip]
  61      000000
  62 0075 4889C7   		mov	rdi, rax
  63 0078 B8000000 		mov	eax, 0
  63      00
  64 007d E8000000 		call	printf@PLT
  64      00
  32:typedef.c     ****   printf("Int16: %hd\n", i16);
  65              		.loc 1 32 3
  66 0082 0FBF45FA 		movsx	eax, WORD PTR -6[rbp]
  67 0086 89C6     		mov	esi, eax
  68 0088 488D0500 		lea	rax, .LC4[rip]
  68      000000
  69 008f 4889C7   		mov	rdi, rax
  70 0092 B8000000 		mov	eax, 0
  70      00
  71 0097 E8000000 		call	printf@PLT
  71      00
  33:typedef.c     ****   printf("Int32: %d\n", i32);
  72              		.loc 1 33 3
  73 009c 8B45FC   		mov	eax, DWORD PTR -4[rbp]
  74 009f 89C6     		mov	esi, eax
  75 00a1 488D0500 		lea	rax, .LC5[rip]
  75      000000
  76 00a8 4889C7   		mov	rdi, rax
  77 00ab B8000000 		mov	eax, 0
  77      00
  78 00b0 E8000000 		call	printf@PLT
  78      00
  34:typedef.c     **** 
  35:typedef.c     ****   exit(EXIT_SUCCESS);
  79              		.loc 1 35 3
  80 00b5 BF000000 		mov	edi, 0
  80      00
  81 00ba E8000000 		call	exit@PLT
  81      00
  82              		.cfi_endproc
  83              	.LFE6:
  85              	.Letext0:
  86              		.file 2 "/usr/include/stdlib.h"
  87              		.file 3 "/usr/include/stdio.h"
 458              		.section	.note.gnu.property,"a"
 459              		.align 8
 460 0000 04000000 		.long	1f - 0f
 461 0004 10000000 		.long	4f - 1f
 462 0008 05000000 		.long	5
 463              	0:
 464 000c 474E5500 		.string	"GNU"
 465              	1:
 466              		.align 8
 467 0010 020000C0 		.long	0xc0000002
 468 0014 04000000 		.long	3f - 2f
 469              	2:
 470 0018 03000000 		.long	0x3
 471              	3:
 472 001c 00000000 		.align 8
 473              	4:
