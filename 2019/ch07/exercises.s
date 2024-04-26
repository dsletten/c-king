   1              		.file	"exercises.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch07" "exercises.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 25642025 		.string	"%d %d %d\n"
   8      64202564 
   8      0A00
   9              	.LC2:
  10 000a 25660A00 		.string	"%f\n"
  11              	.LC7:
  12 000e 25640A00 		.string	"%d\n"
  13              	.LC8:
  14 0012 25630A00 		.string	"%c\n"
  15              	.LC9:
  16 0016 256C750A 		.string	"%lu\n"
  16      00
  17              	.LC16:
  18 001b 2565202D 		.string	"%e -> %d + %e\n"
  18      3E202564 
  18      202B2025 
  18      650A00
  19              	.LC17:
  20 002a 2565202D 		.string	"%e -> %e + %e\n"
  20      3E202565 
  20      202B2025 
  20      650A00
  21              		.text
  22              		.globl	main
  24              	main:
  25              	.LFB6:
  26              		.file 1 "exercises.c"
   1:exercises.c   **** /*
   2:exercises.c   ****  *
   3:exercises.c   ****  *   File:
   4:exercises.c   ****  *      exercises.c
   5:exercises.c   ****  *
   6:exercises.c   ****  *   Synopsis:
   7:exercises.c   ****  *
   8:exercises.c   ****  *   Revision History:
   9:exercises.c   ****  *      Date    Change Description
  10:exercises.c   ****  *      ------  -----------------------------------------
  11:exercises.c   ****  *      200213  Original.
  12:exercises.c   ****  *
  13:exercises.c   ****  */
  14:exercises.c   **** #include <stdio.h>
  15:exercises.c   **** #include <stdlib.h>
  16:exercises.c   **** #include <math.h>
  17:exercises.c   **** 
  18:exercises.c   **** int main(void) {
  27              		.loc 1 18 16
  28              		.cfi_startproc
  29 0000 F30F1EFA 		endbr64
  30 0004 55       		push	rbp
  31              		.cfi_def_cfa_offset 16
  32              		.cfi_offset 6, -16
  33 0005 4889E5   		mov	rbp, rsp
  34              		.cfi_def_cfa_register 6
  35 0008 4881ECA0 		sub	rsp, 160
  35      000000
  36              		.loc 1 18 16
  37 000f 64488B04 		mov	rax, QWORD PTR fs:40
  37      25280000 
  37      00
  38 0018 488945F8 		mov	QWORD PTR -8[rbp], rax
  39 001c 31C0     		xor	eax, eax
  19:exercises.c   ****   {
  20:exercises.c   ****     //
  21:exercises.c   ****     //    1.
  22:exercises.c   ****     //    
  23:exercises.c   ****     printf("%d %d %d\n", 077, 0x77, 0XABC);
  40              		.loc 1 23 5
  41 001e B9BC0A00 		mov	ecx, 2748
  41      00
  42 0023 BA770000 		mov	edx, 119
  42      00
  43 0028 BE3F0000 		mov	esi, 63
  43      00
  44 002d 488D0500 		lea	rax, .LC0[rip]
  44      000000
  45 0034 4889C7   		mov	rdi, rax
  46 0037 B8000000 		mov	eax, 0
  46      00
  47 003c E8000000 		call	printf@PLT
  47      00
  24:exercises.c   ****   }
  25:exercises.c   **** 
  26:exercises.c   ****   {
  27:exercises.c   ****     //
  28:exercises.c   ****     //    3.
  29:exercises.c   ****     //    
  30:exercises.c   ****     printf("%f\n", 010E2);
  48              		.loc 1 30 5
  49 0041 488B0500 		mov	rax, QWORD PTR .LC1[rip]
  49      000000
  50 0048 66480F6E 		movq	xmm0, rax
  50      C0
  51 004d 488D0500 		lea	rax, .LC2[rip]
  51      000000
  52 0054 4889C7   		mov	rdi, rax
  53 0057 B8010000 		mov	eax, 1
  53      00
  54 005c E8000000 		call	printf@PLT
  54      00
  31:exercises.c   ****     printf("%f\n", 02.7);
  55              		.loc 1 31 5
  56 0061 488B0500 		mov	rax, QWORD PTR .LC3[rip]
  56      000000
  57 0068 66480F6E 		movq	xmm0, rax
  57      C0
  58 006d 488D0500 		lea	rax, .LC2[rip]
  58      000000
  59 0074 4889C7   		mov	rdi, rax
  60 0077 B8010000 		mov	eax, 1
  60      00
  61 007c E8000000 		call	printf@PLT
  61      00
  32:exercises.c   ****     printf("%f\n", 007.);
  62              		.loc 1 32 5
  63 0081 488B0500 		mov	rax, QWORD PTR .LC4[rip]
  63      000000
  64 0088 66480F6E 		movq	xmm0, rax
  64      C0
  65 008d 488D0500 		lea	rax, .LC2[rip]
  65      000000
  66 0094 4889C7   		mov	rdi, rax
  67 0097 B8010000 		mov	eax, 1
  67      00
  68 009c E8000000 		call	printf@PLT
  68      00
  33:exercises.c   ****     printf("%f\n", 32.1E+5);
  69              		.loc 1 33 5
  70 00a1 488B0500 		mov	rax, QWORD PTR .LC5[rip]
  70      000000
  71 00a8 66480F6E 		movq	xmm0, rax
  71      C0
  72 00ad 488D0500 		lea	rax, .LC2[rip]
  72      000000
  73 00b4 4889C7   		mov	rdi, rax
  74 00b7 B8010000 		mov	eax, 1
  74      00
  75 00bc E8000000 		call	printf@PLT
  75      00
  34:exercises.c   ****     printf("%f\n", 3.978e-2);
  76              		.loc 1 34 5
  77 00c1 488B0500 		mov	rax, QWORD PTR .LC6[rip]
  77      000000
  78 00c8 66480F6E 		movq	xmm0, rax
  78      C0
  79 00cd 488D0500 		lea	rax, .LC2[rip]
  79      000000
  80 00d4 4889C7   		mov	rdi, rax
  81 00d7 B8010000 		mov	eax, 1
  81      00
  82 00dc E8000000 		call	printf@PLT
  82      00
  83              	.LBB2:
  35:exercises.c   ****   }
  36:exercises.c   **** 
  37:exercises.c   ****   {
  38:exercises.c   ****     //
  39:exercises.c   ****     //    6.
  40:exercises.c   ****     //    
  41:exercises.c   ****     char c = 'a';
  84              		.loc 1 41 10
  85 00e1 C68564FF 		mov	BYTE PTR -156[rbp], 97
  85      FFFF61
  42:exercises.c   ****     int i = 5;
  86              		.loc 1 42 9
  87 00e8 C78568FF 		mov	DWORD PTR -152[rbp], 5
  87      FFFF0500 
  87      0000
  43:exercises.c   **** 
  44:exercises.c   ****     i += c;
  88              		.loc 1 44 7
  89 00f2 0FBE8564 		movsx	eax, BYTE PTR -156[rbp]
  89      FFFFFF
  90 00f9 018568FF 		add	DWORD PTR -152[rbp], eax
  90      FFFF
  45:exercises.c   ****     printf("%d\n", i);
  91              		.loc 1 45 5
  92 00ff 8B8568FF 		mov	eax, DWORD PTR -152[rbp]
  92      FFFF
  93 0105 89C6     		mov	esi, eax
  94 0107 488D0500 		lea	rax, .LC7[rip]
  94      000000
  95 010e 4889C7   		mov	rdi, rax
  96 0111 B8000000 		mov	eax, 0
  96      00
  97 0116 E8000000 		call	printf@PLT
  97      00
  46:exercises.c   **** 
  47:exercises.c   ****     c = 2 * c - 1;
  98              		.loc 1 47 11
  99 011b 0FB68564 		movzx	eax, BYTE PTR -156[rbp]
  99      FFFFFF
 100 0122 01C0     		add	eax, eax
 101              		.loc 1 47 15
 102 0124 83E801   		sub	eax, 1
 103              		.loc 1 47 7
 104 0127 888564FF 		mov	BYTE PTR -156[rbp], al
 104      FFFF
  48:exercises.c   ****     printf("%c\n", c);
 105              		.loc 1 48 5
 106 012d 0FBE8564 		movsx	eax, BYTE PTR -156[rbp]
 106      FFFFFF
 107 0134 89C6     		mov	esi, eax
 108 0136 488D0500 		lea	rax, .LC8[rip]
 108      000000
 109 013d 4889C7   		mov	rdi, rax
 110 0140 B8000000 		mov	eax, 0
 110      00
 111 0145 E8000000 		call	printf@PLT
 111      00
  49:exercises.c   ****     printf("%d\n", c);
 112              		.loc 1 49 5
 113 014a 0FBE8564 		movsx	eax, BYTE PTR -156[rbp]
 113      FFFFFF
 114 0151 89C6     		mov	esi, eax
 115 0153 488D0500 		lea	rax, .LC7[rip]
 115      000000
 116 015a 4889C7   		mov	rdi, rax
 117 015d B8000000 		mov	eax, 0
 117      00
 118 0162 E8000000 		call	printf@PLT
 118      00
  50:exercises.c   **** 
  51:exercises.c   ****     putchar(c);
 119              		.loc 1 51 5
 120 0167 0FBE8564 		movsx	eax, BYTE PTR -156[rbp]
 120      FFFFFF
 121 016e 89C7     		mov	edi, eax
 122 0170 E8000000 		call	putchar@PLT
 122      00
 123              	.LBE2:
 124              	.LBB3:
  52:exercises.c   ****     //    printf(c); // Core dump!
  53:exercises.c   ****   }
  54:exercises.c   **** 
  55:exercises.c   ****   {
  56:exercises.c   ****     //
  57:exercises.c   ****     //    14.
  58:exercises.c   ****     //    
  59:exercises.c   ****     int i;
  60:exercises.c   ****     long j;
  61:exercises.c   ****     unsigned int k;
  62:exercises.c   ****     printf("%lu\n", (unsigned long) sizeof(j * k));
 125              		.loc 1 62 5
 126 0175 BE080000 		mov	esi, 8
 126      00
 127 017a 488D0500 		lea	rax, .LC9[rip]
 127      000000
 128 0181 4889C7   		mov	rdi, rax
 129 0184 B8000000 		mov	eax, 0
 129      00
 130 0189 E8000000 		call	printf@PLT
 130      00
  63:exercises.c   ****     printf("%lu\n", (unsigned long) sizeof((int) j * k));
 131              		.loc 1 63 5
 132 018e BE040000 		mov	esi, 4
 132      00
 133 0193 488D0500 		lea	rax, .LC9[rip]
 133      000000
 134 019a 4889C7   		mov	rdi, rax
 135 019d B8000000 		mov	eax, 0
 135      00
 136 01a2 E8000000 		call	printf@PLT
 136      00
  64:exercises.c   ****     printf("%lu\n", (unsigned long) sizeof(i + (int) j * k));
 137              		.loc 1 64 5
 138 01a7 BE040000 		mov	esi, 4
 138      00
 139 01ac 488D0500 		lea	rax, .LC9[rip]
 139      000000
 140 01b3 4889C7   		mov	rdi, rax
 141 01b6 B8000000 		mov	eax, 0
 141      00
 142 01bb E8000000 		call	printf@PLT
 142      00
 143              	.LBE3:
 144              	.LBB4:
  65:exercises.c   **** 
  66:exercises.c   ****   }
  67:exercises.c   **** 
  68:exercises.c   ****   {
  69:exercises.c   ****     //
  70:exercises.c   ****     //    15.
  71:exercises.c   ****     //
  72:exercises.c   ****     int i = 10;
 145              		.loc 1 72 9
 146 01c0 C7856CFF 		mov	DWORD PTR -148[rbp], 10
 146      FFFF0A00 
 146      0000
  73:exercises.c   ****     float f = 20;
 147              		.loc 1 73 11
 148 01ca F30F1005 		movss	xmm0, DWORD PTR .LC10[rip]
 148      00000000 
 149 01d2 F30F1185 		movss	DWORD PTR -144[rbp], xmm0
 149      70FFFFFF 
  74:exercises.c   ****     double d = 30;
 150              		.loc 1 74 12
 151 01da F20F1005 		movsd	xmm0, QWORD PTR .LC11[rip]
 151      00000000 
 152 01e2 F20F1145 		movsd	QWORD PTR -96[rbp], xmm0
 152      A0
  75:exercises.c   **** 
  76:exercises.c   ****     double result = i * f / d;
 153              		.loc 1 76 23
 154 01e7 660FEFC0 		pxor	xmm0, xmm0
 155 01eb F30F2A85 		cvtsi2ss	xmm0, DWORD PTR -148[rbp]
 155      6CFFFFFF 
 156 01f3 F30F5985 		mulss	xmm0, DWORD PTR -144[rbp]
 156      70FFFFFF 
 157 01fb F30F5AC0 		cvtss2sd	xmm0, xmm0
 158              		.loc 1 76 12
 159 01ff F20F5E45 		divsd	xmm0, QWORD PTR -96[rbp]
 159      A0
 160 0204 F20F1145 		movsd	QWORD PTR -88[rbp], xmm0
 160      A8
 161              	.LBE4:
 162              	.LBB5:
  77:exercises.c   ****   }
  78:exercises.c   **** 
  79:exercises.c   ****   {
  80:exercises.c   ****     //
  81:exercises.c   ****     //    16.
  82:exercises.c   ****     //
  83:exercises.c   ****     int i = 10;
 163              		.loc 1 83 9
 164 0209 C78574FF 		mov	DWORD PTR -140[rbp], 10
 164      FFFF0A00 
 164      0000
  84:exercises.c   ****     float f = 20;
 165              		.loc 1 84 11
 166 0213 F30F1005 		movss	xmm0, DWORD PTR .LC10[rip]
 166      00000000 
 167 021b F30F1185 		movss	DWORD PTR -136[rbp], xmm0
 167      78FFFFFF 
  85:exercises.c   ****     double d = i + f;
 168              		.loc 1 85 18
 169 0223 660FEFC0 		pxor	xmm0, xmm0
 170 0227 F30F2A85 		cvtsi2ss	xmm0, DWORD PTR -140[rbp]
 170      74FFFFFF 
 171 022f F30F5885 		addss	xmm0, DWORD PTR -136[rbp]
 171      78FFFFFF 
 172              		.loc 1 85 12
 173 0237 F30F5AC0 		cvtss2sd	xmm0, xmm0
 174 023b F20F1145 		movsd	QWORD PTR -80[rbp], xmm0
 174      B0
 175              	.LBE5:
 176              	.LBB6:
  86:exercises.c   ****   }
  87:exercises.c   **** 
  88:exercises.c   ****   {
  89:exercises.c   ****     //
  90:exercises.c   ****     //    17.
  91:exercises.c   ****     //
  92:exercises.c   ****     char c = '\1';
 177              		.loc 1 92 10
 178 0240 C68565FF 		mov	BYTE PTR -155[rbp], 1
 178      FFFF01
  93:exercises.c   ****     short int s = 2;
 179              		.loc 1 93 15
 180 0247 66C78566 		mov	WORD PTR -154[rbp], 2
 180      FFFFFF02 
 180      00
  94:exercises.c   ****     int i = -3;
 181              		.loc 1 94 9
 182 0250 C7857CFF 		mov	DWORD PTR -132[rbp], -3
 182      FFFFFDFF 
 182      FFFF
  95:exercises.c   ****     long int m = 5;
 183              		.loc 1 95 14
 184 025a 48C745B8 		mov	QWORD PTR -72[rbp], 5
 184      05000000 
  96:exercises.c   ****     float f = 6.5;
 185              		.loc 1 96 11
 186 0262 F30F1005 		movss	xmm0, DWORD PTR .LC12[rip]
 186      00000000 
 187 026a F30F1145 		movss	DWORD PTR -128[rbp], xmm0
 187      80
  97:exercises.c   ****     double d = 7.5;
 188              		.loc 1 97 12
 189 026f F20F1005 		movsd	xmm0, QWORD PTR .LC13[rip]
 189      00000000 
 190 0277 F20F1145 		movsd	QWORD PTR -64[rbp], xmm0
 190      C0
  98:exercises.c   **** 
  99:exercises.c   ****     int ex1 = c * i;
 191              		.loc 1 99 17
 192 027c 0FBE8565 		movsx	eax, BYTE PTR -155[rbp]
 192      FFFFFF
 193              		.loc 1 99 9
 194 0283 8B957CFF 		mov	edx, DWORD PTR -132[rbp]
 194      FFFF
 195 0289 0FAFC2   		imul	eax, edx
 196 028c 894584   		mov	DWORD PTR -124[rbp], eax
 100:exercises.c   ****     long int ex2 = s + m;
 197              		.loc 1 100 22
 198 028f 480FBF95 		movsx	rdx, WORD PTR -154[rbp]
 198      66FFFFFF 
 199              		.loc 1 100 14
 200 0297 488B45B8 		mov	rax, QWORD PTR -72[rbp]
 201 029b 4801D0   		add	rax, rdx
 202 029e 488945C8 		mov	QWORD PTR -56[rbp], rax
 101:exercises.c   ****     float ex3 = f / c;
 203              		.loc 1 101 19
 204 02a2 0FBE8565 		movsx	eax, BYTE PTR -155[rbp]
 204      FFFFFF
 205 02a9 660FEFC9 		pxor	xmm1, xmm1
 206 02ad F30F2AC8 		cvtsi2ss	xmm1, eax
 207              		.loc 1 101 11
 208 02b1 F30F1045 		movss	xmm0, DWORD PTR -128[rbp]
 208      80
 209 02b6 F30F5EC1 		divss	xmm0, xmm1
 210 02ba F30F1145 		movss	DWORD PTR -120[rbp], xmm0
 210      88
 102:exercises.c   ****     double ex4 = d / s;
 211              		.loc 1 102 20
 212 02bf 0FBF8566 		movsx	eax, WORD PTR -154[rbp]
 212      FFFFFF
 213 02c6 660FEFC9 		pxor	xmm1, xmm1
 214 02ca F20F2AC8 		cvtsi2sd	xmm1, eax
 215              		.loc 1 102 12
 216 02ce F20F1045 		movsd	xmm0, QWORD PTR -64[rbp]
 216      C0
 217 02d3 F20F5EC1 		divsd	xmm0, xmm1
 218 02d7 F20F1145 		movsd	QWORD PTR -48[rbp], xmm0
 218      D0
 103:exercises.c   ****     double ex5 = f - d;
 219              		.loc 1 103 20
 220 02dc 660FEFC0 		pxor	xmm0, xmm0
 221 02e0 F30F5A45 		cvtss2sd	xmm0, DWORD PTR -128[rbp]
 221      80
 222              		.loc 1 103 12
 223 02e5 F20F5C45 		subsd	xmm0, QWORD PTR -64[rbp]
 223      C0
 224 02ea F20F1145 		movsd	QWORD PTR -40[rbp], xmm0
 224      D8
 104:exercises.c   ****     int ex6 = (int) f;
 225              		.loc 1 104 9
 226 02ef F30F1045 		movss	xmm0, DWORD PTR -128[rbp]
 226      80
 227 02f4 F30F2CC0 		cvttss2si	eax, xmm0
 228 02f8 89458C   		mov	DWORD PTR -116[rbp], eax
 229              	.LBE6:
 230              	.LBB7:
 105:exercises.c   ****   }
 106:exercises.c   ****   
 107:exercises.c   ****   {
 108:exercises.c   ****     //
 109:exercises.c   ****     //    18.
 110:exercises.c   ****     //    
 111:exercises.c   ****     float f = 1.2345e9;
 231              		.loc 1 111 11
 232 02fb F30F1005 		movss	xmm0, DWORD PTR .LC14[rip]
 232      00000000 
 233 0303 F30F1145 		movss	DWORD PTR -112[rbp], xmm0
 233      90
 112:exercises.c   ****     double d = 1.2345e9;
 234              		.loc 1 112 12
 235 0308 F20F1005 		movsd	xmm0, QWORD PTR .LC15[rip]
 235      00000000 
 236 0310 F20F1145 		movsd	QWORD PTR -32[rbp], xmm0
 236      E0
 113:exercises.c   ****     
 114:exercises.c   ****     float frac_f = f - (int) f;
 237              		.loc 1 114 24
 238 0315 F30F1045 		movss	xmm0, DWORD PTR -112[rbp]
 238      90
 239 031a F30F2CC0 		cvttss2si	eax, xmm0
 240              		.loc 1 114 22
 241 031e 660FEFC9 		pxor	xmm1, xmm1
 242 0322 F30F2AC8 		cvtsi2ss	xmm1, eax
 243              		.loc 1 114 11
 244 0326 F30F1045 		movss	xmm0, DWORD PTR -112[rbp]
 244      90
 245 032b F30F5CC1 		subss	xmm0, xmm1
 246 032f F30F1145 		movss	DWORD PTR -108[rbp], xmm0
 246      94
 115:exercises.c   ****     printf("%e -> %d + %e\n", f, (int) f, frac_f);
 247              		.loc 1 115 5
 248 0334 660FEFC0 		pxor	xmm0, xmm0
 249 0338 F30F5A45 		cvtss2sd	xmm0, DWORD PTR -108[rbp]
 249      94
 250 033d F30F104D 		movss	xmm1, DWORD PTR -112[rbp]
 250      90
 251 0342 F30F2CD1 		cvttss2si	edx, xmm1
 252 0346 660FEFDB 		pxor	xmm3, xmm3
 253 034a F30F5A5D 		cvtss2sd	xmm3, DWORD PTR -112[rbp]
 253      90
 254 034f 66480F7E 		movq	rax, xmm3
 254      D8
 255 0354 660F28C8 		movapd	xmm1, xmm0
 256 0358 89D6     		mov	esi, edx
 257 035a 66480F6E 		movq	xmm0, rax
 257      C0
 258 035f 488D0500 		lea	rax, .LC16[rip]
 258      000000
 259 0366 4889C7   		mov	rdi, rax
 260 0369 B8020000 		mov	eax, 2
 260      00
 261 036e E8000000 		call	printf@PLT
 261      00
 116:exercises.c   **** 
 117:exercises.c   ****     double frac_d = d - (int) d;
 262              		.loc 1 117 25
 263 0373 F20F1045 		movsd	xmm0, QWORD PTR -32[rbp]
 263      E0
 264 0378 F20F2CC0 		cvttsd2si	eax, xmm0
 265              		.loc 1 117 23
 266 037c 660FEFC9 		pxor	xmm1, xmm1
 267 0380 F20F2AC8 		cvtsi2sd	xmm1, eax
 268              		.loc 1 117 12
 269 0384 F20F1045 		movsd	xmm0, QWORD PTR -32[rbp]
 269      E0
 270 0389 F20F5CC1 		subsd	xmm0, xmm1
 271 038d F20F1145 		movsd	QWORD PTR -24[rbp], xmm0
 271      E8
 118:exercises.c   ****     printf("%e -> %d + %e\n", d, (int) d, frac_d);
 272              		.loc 1 118 5
 273 0392 F20F1045 		movsd	xmm0, QWORD PTR -32[rbp]
 273      E0
 274 0397 F20F2CD0 		cvttsd2si	edx, xmm0
 275 039b F20F1045 		movsd	xmm0, QWORD PTR -24[rbp]
 275      E8
 276 03a0 488B45E0 		mov	rax, QWORD PTR -32[rbp]
 277 03a4 660F28C8 		movapd	xmm1, xmm0
 278 03a8 89D6     		mov	esi, edx
 279 03aa 66480F6E 		movq	xmm0, rax
 279      C0
 280 03af 488D0500 		lea	rax, .LC16[rip]
 280      000000
 281 03b6 4889C7   		mov	rdi, rax
 282 03b9 B8020000 		mov	eax, 2
 282      00
 283 03be E8000000 		call	printf@PLT
 283      00
 119:exercises.c   **** 
 120:exercises.c   ****     double whole;
 121:exercises.c   ****     double fraction = modf(f, &whole);
 284              		.loc 1 121 23
 285 03c3 660FEFE4 		pxor	xmm4, xmm4
 286 03c7 F30F5A65 		cvtss2sd	xmm4, DWORD PTR -112[rbp]
 286      90
 287 03cc 66480F7E 		movq	rax, xmm4
 287      E0
 288 03d1 488D5598 		lea	rdx, -104[rbp]
 289 03d5 4889D7   		mov	rdi, rdx
 290 03d8 66480F6E 		movq	xmm0, rax
 290      C0
 291 03dd E8000000 		call	modf@PLT
 291      00
 292 03e2 66480F7E 		movq	rax, xmm0
 292      C0
 293 03e7 488945F0 		mov	QWORD PTR -16[rbp], rax
 122:exercises.c   ****     printf("%e -> %e + %e\n", f, whole, fraction);
 294              		.loc 1 122 5
 295 03eb F20F1045 		movsd	xmm0, QWORD PTR -104[rbp]
 295      98
 296 03f0 660FEFED 		pxor	xmm5, xmm5
 297 03f4 F30F5A6D 		cvtss2sd	xmm5, DWORD PTR -112[rbp]
 297      90
 298 03f9 66480F7E 		movq	rax, xmm5
 298      E8
 299 03fe F20F104D 		movsd	xmm1, QWORD PTR -16[rbp]
 299      F0
 300 0403 660F28D1 		movapd	xmm2, xmm1
 301 0407 660F28C8 		movapd	xmm1, xmm0
 302 040b 66480F6E 		movq	xmm0, rax
 302      C0
 303 0410 488D0500 		lea	rax, .LC17[rip]
 303      000000
 304 0417 4889C7   		mov	rdi, rax
 305 041a B8030000 		mov	eax, 3
 305      00
 306 041f E8000000 		call	printf@PLT
 306      00
 123:exercises.c   **** 
 124:exercises.c   ****     fraction = modf(d, &whole);
 307              		.loc 1 124 16
 308 0424 488D5598 		lea	rdx, -104[rbp]
 309 0428 488B45E0 		mov	rax, QWORD PTR -32[rbp]
 310 042c 4889D7   		mov	rdi, rdx
 311 042f 66480F6E 		movq	xmm0, rax
 311      C0
 312 0434 E8000000 		call	modf@PLT
 312      00
 313 0439 66480F7E 		movq	rax, xmm0
 313      C0
 314 043e 488945F0 		mov	QWORD PTR -16[rbp], rax
 125:exercises.c   ****     printf("%e -> %e + %e\n", d, whole, fraction);
 315              		.loc 1 125 5
 316 0442 F20F1045 		movsd	xmm0, QWORD PTR -104[rbp]
 316      98
 317 0447 F20F104D 		movsd	xmm1, QWORD PTR -16[rbp]
 317      F0
 318 044c 488B45E0 		mov	rax, QWORD PTR -32[rbp]
 319 0450 660F28D1 		movapd	xmm2, xmm1
 320 0454 660F28C8 		movapd	xmm1, xmm0
 321 0458 66480F6E 		movq	xmm0, rax
 321      C0
 322 045d 488D0500 		lea	rax, .LC17[rip]
 322      000000
 323 0464 4889C7   		mov	rdi, rax
 324 0467 B8030000 		mov	eax, 3
 324      00
 325 046c E8000000 		call	printf@PLT
 325      00
 326              	.LBE7:
 126:exercises.c   ****   }
 127:exercises.c   ****     
 128:exercises.c   ****   exit(EXIT_SUCCESS);
 327              		.loc 1 128 3
 328 0471 BF000000 		mov	edi, 0
 328      00
 329 0476 E8000000 		call	exit@PLT
 329      00
 330              		.cfi_endproc
 331              	.LFE6:
 333              		.section	.rodata
 334 0039 00000000 		.align 8
 334      000000
 335              	.LC1:
 336 0040 00000000 		.long	0
 337 0044 00408F40 		.long	1083129856
 338              		.align 8
 339              	.LC3:
 340 0048 9A999999 		.long	-1717986918
 341 004c 99990540 		.long	1074108825
 342              		.align 8
 343              	.LC4:
 344 0050 00000000 		.long	0
 345 0054 00001C40 		.long	1075576832
 346              		.align 8
 347              	.LC5:
 348 0058 00000000 		.long	0
 349 005c 887D4841 		.long	1095269768
 350              		.align 8
 351              	.LC6:
 352 0060 CBDB114E 		.long	1309793227
 353 0064 0B5EA43F 		.long	1067736587
 354              		.align 4
 355              	.LC10:
 356 0068 0000A041 		.long	1101004800
 357 006c 00000000 		.align 8
 358              	.LC11:
 359 0070 00000000 		.long	0
 360 0074 00003E40 		.long	1077805056
 361              		.align 4
 362              	.LC12:
 363 0078 0000D040 		.long	1087373312
 364 007c 00000000 		.align 8
 365              	.LC13:
 366 0080 00000000 		.long	0
 367 0084 00001E40 		.long	1075707904
 368              		.align 4
 369              	.LC14:
 370 0088 F329934E 		.long	1318267379
 371 008c 00000000 		.align 8
 372              	.LC15:
 373 0090 00000068 		.long	1744830464
 374 0094 3E65D241 		.long	1104307518
 375              		.text
 376              	.Letext0:
 377              		.file 2 "/usr/include/stdlib.h"
 378              		.file 3 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 379              		.file 4 "/usr/include/stdio.h"
 1074              		.section	.note.gnu.property,"a"
 1075              		.align 8
 1076 0000 04000000 		.long	1f - 0f
 1077 0004 10000000 		.long	4f - 1f
 1078 0008 05000000 		.long	5
 1079              	0:
 1080 000c 474E5500 		.string	"GNU"
 1081              	1:
 1082              		.align 8
 1083 0010 020000C0 		.long	0xc0000002
 1084 0014 04000000 		.long	3f - 2f
 1085              	2:
 1086 0018 03000000 		.long	0x3
 1087              	3:
 1088 001c 00000000 		.align 8
 1089              	4:
