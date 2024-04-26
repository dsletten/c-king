   1              		.file	"phone.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2022/ch07" "phone.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 456E7465 		.string	"Enter phone number: "
   8      72207068 
   8      6F6E6520 
   8      6E756D62 
   8      65723A20 
   9              		.text
  10              		.globl	main
  12              	main:
  13              	.LFB6:
  14              		.file 1 "phone.c"
   1:phone.c       **** /*
   2:phone.c       ****  *
   3:phone.c       ****  *   File:
   4:phone.c       ****  *      phone.c
   5:phone.c       ****  *
   6:phone.c       ****  *   Synopsis:
   7:phone.c       ****  *
   8:phone.c       ****  *   Revision History:
   9:phone.c       ****  *      Date    Change Description
  10:phone.c       ****  *      ------  -----------------------------------------
  11:phone.c       ****  *      230507  Original.
  12:phone.c       ****  *
  13:phone.c       ****  */
  14:phone.c       **** 
  15:phone.c       **** /* (defun cases (s n) */
  16:phone.c       **** /*   (loop for ch across s */
  17:phone.c       **** /*         do (format t "case '~C':~%" ch)  */
  18:phone.c       **** /*         finally (format t "digit = '~D';~%break;~%" n))) */
  19:phone.c       **** 
  20:phone.c       **** /* (loop for n from 2 */
  21:phone.c       **** /*       for s in '("ABC" "DEF" "GHI" "JKL" "MNO" "PRS" "TUV" "WXY")  */
  22:phone.c       **** /*       do (cases s n)) */
  23:phone.c       **** 
  24:phone.c       **** #include <stdio.h>
  25:phone.c       **** #include <stdlib.h>
  26:phone.c       **** 
  27:phone.c       **** char translate(char ch);
  28:phone.c       **** 
  29:phone.c       **** int main(void) {
  15              		.loc 1 29 16
  16              		.cfi_startproc
  17 0000 F30F1EFA 		endbr64
  18 0004 55       		push	rbp
  19              		.cfi_def_cfa_offset 16
  20              		.cfi_offset 6, -16
  21 0005 4889E5   		mov	rbp, rsp
  22              		.cfi_def_cfa_register 6
  23 0008 4883EC10 		sub	rsp, 16
  30:phone.c       ****   printf("Enter phone number: ");
  24              		.loc 1 30 3
  25 000c 488D0500 		lea	rax, .LC0[rip]
  25      000000
  26 0013 4889C7   		mov	rdi, rax
  27 0016 B8000000 		mov	eax, 0
  27      00
  28 001b E8000000 		call	printf@PLT
  28      00
  31:phone.c       **** 
  32:phone.c       ****   char ch;
  33:phone.c       ****   while ( (ch = getchar()) != '\n' ) {
  29              		.loc 1 33 9
  30 0020 EB15     		jmp	.L2
  31              	.L3:
  34:phone.c       ****     printf("%c", translate(ch));
  32              		.loc 1 34 18
  33 0022 0FBE45FF 		movsx	eax, BYTE PTR -1[rbp]
  34 0026 89C7     		mov	edi, eax
  35 0028 E8000000 		call	translate
  35      00
  36              		.loc 1 34 5
  37 002d 0FBEC0   		movsx	eax, al
  38 0030 89C7     		mov	edi, eax
  39 0032 E8000000 		call	putchar@PLT
  39      00
  40              	.L2:
  33:phone.c       ****     printf("%c", translate(ch));
  41              		.loc 1 33 17
  42 0037 E8000000 		call	getchar@PLT
  42      00
  33:phone.c       ****     printf("%c", translate(ch));
  43              		.loc 1 33 15
  44 003c 8845FF   		mov	BYTE PTR -1[rbp], al
  33:phone.c       ****     printf("%c", translate(ch));
  45              		.loc 1 33 28
  46 003f 807DFF0A 		cmp	BYTE PTR -1[rbp], 10
  47 0043 75DD     		jne	.L3
  35:phone.c       ****   }
  36:phone.c       **** 
  37:phone.c       ****   printf("\n");
  48              		.loc 1 37 3
  49 0045 BF0A0000 		mov	edi, 10
  49      00
  50 004a E8000000 		call	putchar@PLT
  50      00
  38:phone.c       **** 
  39:phone.c       ****   exit(EXIT_SUCCESS);
  51              		.loc 1 39 3
  52 004f BF000000 		mov	edi, 0
  52      00
  53 0054 E8000000 		call	exit@PLT
  53      00
  54              		.cfi_endproc
  55              	.LFE6:
  57              		.globl	translate
  59              	translate:
  60              	.LFB7:
  40:phone.c       **** }
  41:phone.c       **** 
  42:phone.c       **** char translate(char ch) {
  61              		.loc 1 42 25
  62              		.cfi_startproc
  63 0059 F30F1EFA 		endbr64
  64 005d 55       		push	rbp
  65              		.cfi_def_cfa_offset 16
  66              		.cfi_offset 6, -16
  67 005e 4889E5   		mov	rbp, rsp
  68              		.cfi_def_cfa_register 6
  69 0061 89F8     		mov	eax, edi
  70 0063 8845FC   		mov	BYTE PTR -4[rbp], al
  43:phone.c       ****     switch ( ch ) {
  71              		.loc 1 43 5
  72 0066 0FBE45FC 		movsx	eax, BYTE PTR -4[rbp]
  73 006a 83E841   		sub	eax, 65
  74 006d 83F818   		cmp	eax, 24
  75 0070 775B     		ja	.L5
  76 0072 89C0     		mov	eax, eax
  77 0074 488D1485 		lea	rdx, 0[0+rax*4]
  77      00000000 
  78 007c 488D0500 		lea	rax, .L7[rip]
  78      000000
  79 0083 8B0402   		mov	eax, DWORD PTR [rdx+rax]
  80 0086 4898     		cdqe
  81 0088 488D1500 		lea	rdx, .L7[rip]
  81      000000
  82 008f 4801D0   		add	rax, rdx
  83 0092 3EFFE0   		notrack jmp	rax
  84              		.section	.rodata
  85 0015 000000   		.align 4
  86              		.align 4
  87              	.L7:
  88 0018 00000000 		.long	.L14-.L7
  89 001c 00000000 		.long	.L14-.L7
  90 0020 00000000 		.long	.L14-.L7
  91 0024 00000000 		.long	.L13-.L7
  92 0028 00000000 		.long	.L13-.L7
  93 002c 00000000 		.long	.L13-.L7
  94 0030 00000000 		.long	.L12-.L7
  95 0034 00000000 		.long	.L12-.L7
  96 0038 00000000 		.long	.L12-.L7
  97 003c 00000000 		.long	.L11-.L7
  98 0040 00000000 		.long	.L11-.L7
  99 0044 00000000 		.long	.L11-.L7
 100 0048 00000000 		.long	.L10-.L7
 101 004c 00000000 		.long	.L10-.L7
 102 0050 00000000 		.long	.L10-.L7
 103 0054 00000000 		.long	.L9-.L7
 104 0058 00000000 		.long	.L5-.L7
 105 005c 00000000 		.long	.L9-.L7
 106 0060 00000000 		.long	.L9-.L7
 107 0064 00000000 		.long	.L8-.L7
 108 0068 00000000 		.long	.L8-.L7
 109 006c 00000000 		.long	.L8-.L7
 110 0070 00000000 		.long	.L6-.L7
 111 0074 00000000 		.long	.L6-.L7
 112 0078 00000000 		.long	.L6-.L7
 113              		.text
 114              	.L14:
  44:phone.c       ****       case 'A':
  45:phone.c       ****       case 'B':
  46:phone.c       ****       case 'C':
  47:phone.c       ****         return '2';
 115              		.loc 1 47 16
 116 0095 B8320000 		mov	eax, 50
 116      00
 117 009a EB35     		jmp	.L15
 118              	.L13:
  48:phone.c       ****         
  49:phone.c       ****       case 'D':
  50:phone.c       ****       case 'E':
  51:phone.c       ****       case 'F':
  52:phone.c       ****         return '3';
 119              		.loc 1 52 16
 120 009c B8330000 		mov	eax, 51
 120      00
 121 00a1 EB2E     		jmp	.L15
 122              	.L12:
  53:phone.c       ****         
  54:phone.c       ****       case 'G':
  55:phone.c       ****       case 'H':
  56:phone.c       ****       case 'I':
  57:phone.c       ****         return '4';
 123              		.loc 1 57 16
 124 00a3 B8340000 		mov	eax, 52
 124      00
 125 00a8 EB27     		jmp	.L15
 126              	.L11:
  58:phone.c       ****         
  59:phone.c       ****       case 'J':
  60:phone.c       ****       case 'K':
  61:phone.c       ****       case 'L':
  62:phone.c       ****         return '5';
 127              		.loc 1 62 16
 128 00aa B8350000 		mov	eax, 53
 128      00
 129 00af EB20     		jmp	.L15
 130              	.L10:
  63:phone.c       ****         
  64:phone.c       ****       case 'M':
  65:phone.c       ****       case 'N':
  66:phone.c       ****       case 'O':
  67:phone.c       ****         return '6';
 131              		.loc 1 67 16
 132 00b1 B8360000 		mov	eax, 54
 132      00
 133 00b6 EB19     		jmp	.L15
 134              	.L9:
  68:phone.c       ****         
  69:phone.c       ****       case 'P':
  70:phone.c       ****       case 'R':
  71:phone.c       ****       case 'S':
  72:phone.c       ****         return '7';
 135              		.loc 1 72 16
 136 00b8 B8370000 		mov	eax, 55
 136      00
 137 00bd EB12     		jmp	.L15
 138              	.L8:
  73:phone.c       ****         
  74:phone.c       ****       case 'T':
  75:phone.c       ****       case 'U':
  76:phone.c       ****       case 'V':
  77:phone.c       ****         return '8';
 139              		.loc 1 77 16
 140 00bf B8380000 		mov	eax, 56
 140      00
 141 00c4 EB0B     		jmp	.L15
 142              	.L6:
  78:phone.c       ****         
  79:phone.c       ****       case 'W':
  80:phone.c       ****       case 'X':
  81:phone.c       ****       case 'Y':
  82:phone.c       ****         return '9';
 143              		.loc 1 82 16
 144 00c6 B8390000 		mov	eax, 57
 144      00
 145 00cb EB04     		jmp	.L15
 146              	.L5:
  83:phone.c       ****         
  84:phone.c       ****       default:
  85:phone.c       ****         return ch;
 147              		.loc 1 85 16
 148 00cd 0FB645FC 		movzx	eax, BYTE PTR -4[rbp]
 149              	.L15:
  86:phone.c       ****     }
  87:phone.c       **** }
 150              		.loc 1 87 1
 151 00d1 5D       		pop	rbp
 152              		.cfi_def_cfa 7, 8
 153 00d2 C3       		ret
 154              		.cfi_endproc
 155              	.LFE7:
 157              	.Letext0:
 158              		.file 2 "/usr/include/stdlib.h"
 159              		.file 3 "/usr/include/stdio.h"
 575              		.section	.note.gnu.property,"a"
 576              		.align 8
 577 0000 04000000 		.long	1f - 0f
 578 0004 10000000 		.long	4f - 1f
 579 0008 05000000 		.long	5
 580              	0:
 581 000c 474E5500 		.string	"GNU"
 582              	1:
 583              		.align 8
 584 0010 020000C0 		.long	0xc0000002
 585 0014 04000000 		.long	3f - 2f
 586              	2:
 587 0018 03000000 		.long	0x3
 588              	3:
 589 001c 00000000 		.align 8
 590              	4:
