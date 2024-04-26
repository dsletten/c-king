   1              		.file	"isbn.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch03" "isbn.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 456E7465 		.string	"Enter ISBN: "
   8      72204953 
   8      424E3A20 
   8      00
   9              	.LC1:
  10 000d 25642D25 		.string	"%d-%d-%d-%d"
  10      642D2564 
  10      2D256400 
  11              	.LC2:
  12 0019 4C616E67 		.string	"Language: %d\n"
  12      75616765 
  12      3A202564 
  12      0A00
  13              	.LC3:
  14 0027 5075626C 		.string	"Publisher: %d\n"
  14      69736865 
  14      723A2025 
  14      640A00
  15              	.LC4:
  16 0036 426F6F6B 		.string	"Book number: %d\n"
  16      206E756D 
  16      6265723A 
  16      2025640A 
  16      00
  17              	.LC5:
  18 0047 43686563 		.string	"Check digit: %d\n"
  18      6B206469 
  18      6769743A 
  18      2025640A 
  18      00
  19              		.text
  20              		.globl	main
  22              	main:
  23              	.LFB6:
  24              		.file 1 "isbn.c"
   1:isbn.c        **** /*
   2:isbn.c        ****  *
   3:isbn.c        ****  *   File:
   4:isbn.c        ****  *      isbn.c
   5:isbn.c        ****  *
   6:isbn.c        ****  *   Synopsis:
   7:isbn.c        ****  *      Break an ISBN entered by user into its components.
   8:isbn.c        ****  *      -What about leading 0's??
   9:isbn.c        ****  *
  10:isbn.c        ****  *      The Flamingo's Smile 0-393-30375-6       
  11:isbn.c        ****  *      Endangered Pleasures 0-316-37057-6
  12:isbn.c        ****  *      C Programming: A Modern Approach 0-393-96945-2 (Norton = 393)
  13:isbn.c        ****  *
  14:isbn.c        ****  *      Modern books use ISBN-13!
  15:isbn.c        ****  *      
  16:isbn.c        ****  *   Revision History:
  17:isbn.c        ****  *      Date    Change Description
  18:isbn.c        ****  *      ------  -----------------------------------------
  19:isbn.c        ****  *      190730  Original.
  20:isbn.c        ****  *
  21:isbn.c        ****  */
  22:isbn.c        **** #include <stdio.h>
  23:isbn.c        **** #include <stdlib.h>
  24:isbn.c        **** 
  25:isbn.c        **** int main(void) {
  25              		.loc 1 25 16
  26              		.cfi_startproc
  27 0000 F30F1EFA 		endbr64
  28 0004 55       		push	rbp
  29              		.cfi_def_cfa_offset 16
  30              		.cfi_offset 6, -16
  31 0005 4889E5   		mov	rbp, rsp
  32              		.cfi_def_cfa_register 6
  33 0008 4883EC20 		sub	rsp, 32
  34              		.loc 1 25 16
  35 000c 64488B04 		mov	rax, QWORD PTR fs:40
  35      25280000 
  35      00
  36 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  37 0019 31C0     		xor	eax, eax
  26:isbn.c        ****   int language, publisher, book_number, check_digit;
  27:isbn.c        **** 
  28:isbn.c        ****   printf("Enter ISBN: ");
  38              		.loc 1 28 3
  39 001b 488D0500 		lea	rax, .LC0[rip]
  39      000000
  40 0022 4889C7   		mov	rdi, rax
  41 0025 B8000000 		mov	eax, 0
  41      00
  42 002a E8000000 		call	printf@PLT
  42      00
  29:isbn.c        ****   scanf("%d-%d-%d-%d", &language, &publisher, &book_number, &check_digit);
  43              		.loc 1 29 3
  44 002f 488D75F4 		lea	rsi, -12[rbp]
  45 0033 488D4DF0 		lea	rcx, -16[rbp]
  46 0037 488D55EC 		lea	rdx, -20[rbp]
  47 003b 488D45E8 		lea	rax, -24[rbp]
  48 003f 4989F0   		mov	r8, rsi
  49 0042 4889C6   		mov	rsi, rax
  50 0045 488D0500 		lea	rax, .LC1[rip]
  50      000000
  51 004c 4889C7   		mov	rdi, rax
  52 004f B8000000 		mov	eax, 0
  52      00
  53 0054 E8000000 		call	__isoc99_scanf@PLT
  53      00
  30:isbn.c        **** 
  31:isbn.c        ****   printf("Language: %d\n", language);
  54              		.loc 1 31 3
  55 0059 8B45E8   		mov	eax, DWORD PTR -24[rbp]
  56 005c 89C6     		mov	esi, eax
  57 005e 488D0500 		lea	rax, .LC2[rip]
  57      000000
  58 0065 4889C7   		mov	rdi, rax
  59 0068 B8000000 		mov	eax, 0
  59      00
  60 006d E8000000 		call	printf@PLT
  60      00
  32:isbn.c        ****   printf("Publisher: %d\n", publisher);
  61              		.loc 1 32 3
  62 0072 8B45EC   		mov	eax, DWORD PTR -20[rbp]
  63 0075 89C6     		mov	esi, eax
  64 0077 488D0500 		lea	rax, .LC3[rip]
  64      000000
  65 007e 4889C7   		mov	rdi, rax
  66 0081 B8000000 		mov	eax, 0
  66      00
  67 0086 E8000000 		call	printf@PLT
  67      00
  33:isbn.c        ****   printf("Book number: %d\n", book_number);
  68              		.loc 1 33 3
  69 008b 8B45F0   		mov	eax, DWORD PTR -16[rbp]
  70 008e 89C6     		mov	esi, eax
  71 0090 488D0500 		lea	rax, .LC4[rip]
  71      000000
  72 0097 4889C7   		mov	rdi, rax
  73 009a B8000000 		mov	eax, 0
  73      00
  74 009f E8000000 		call	printf@PLT
  74      00
  34:isbn.c        ****   printf("Check digit: %d\n", check_digit);
  75              		.loc 1 34 3
  76 00a4 8B45F4   		mov	eax, DWORD PTR -12[rbp]
  77 00a7 89C6     		mov	esi, eax
  78 00a9 488D0500 		lea	rax, .LC5[rip]
  78      000000
  79 00b0 4889C7   		mov	rdi, rax
  80 00b3 B8000000 		mov	eax, 0
  80      00
  81 00b8 E8000000 		call	printf@PLT
  81      00
  35:isbn.c        ****   
  36:isbn.c        ****   exit(EXIT_SUCCESS);
  82              		.loc 1 36 3
  83 00bd BF000000 		mov	edi, 0
  83      00
  84 00c2 E8000000 		call	exit@PLT
  84      00
  85              		.cfi_endproc
  86              	.LFE6:
  88              	.Letext0:
  89              		.file 2 "/usr/include/stdlib.h"
  90              		.file 3 "/usr/include/stdio.h"
 478              		.section	.note.gnu.property,"a"
 479              		.align 8
 480 0000 04000000 		.long	1f - 0f
 481 0004 10000000 		.long	4f - 1f
 482 0008 05000000 		.long	5
 483              	0:
 484 000c 474E5500 		.string	"GNU"
 485              	1:
 486              		.align 8
 487 0010 020000C0 		.long	0xc0000002
 488 0014 04000000 		.long	3f - 2f
 489              	2:
 490 0018 03000000 		.long	0x3
 491              	3:
 492 001c 00000000 		.align 8
 493              	4:
