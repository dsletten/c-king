   1              		.file	"deal.unicode.c"
   2              		.intel_syntax noprefix
   3              		.text
   4              	.Ltext0:
   5              		.file 0 "/home/slytobias/c/books/King/2019/ch08" "deal.unicode.c"
   6              		.section	.rodata
   7              	.LC0:
   8 0000 656E5F55 		.string	"en_US.UTF-8"
   8      532E5554 
   8      462D3800 
   9 000c 00000000 		.align 8
  10              	.LC1:
  11 0010 5900     		.string	"Y"
  12 0012 00       		.string	""
  13 0013 00       		.string	""
  14 0014 6F00     		.string	"o"
  15 0016 00       		.string	""
  16 0017 00       		.string	""
  17 0018 7500     		.string	"u"
  18 001a 00       		.string	""
  19 001b 00       		.string	""
  20 001c 7200     		.string	"r"
  21 001e 00       		.string	""
  22 001f 00       		.string	""
  23 0020 2000     		.string	" "
  24 0022 00       		.string	""
  25 0023 00       		.string	""
  26 0024 6800     		.string	"h"
  27 0026 00       		.string	""
  28 0027 00       		.string	""
  29 0028 6100     		.string	"a"
  30 002a 00       		.string	""
  31 002b 00       		.string	""
  32 002c 6E00     		.string	"n"
  33 002e 00       		.string	""
  34 002f 00       		.string	""
  35 0030 6400     		.string	"d"
  36 0032 00       		.string	""
  37 0033 00       		.string	""
  38 0034 3A00     		.string	":"
  39 0036 00       		.string	""
  40 0037 00       		.string	""
  41 0038 2000     		.string	" "
  42 003a 00       		.string	""
  43 003b 00       		.string	""
  44 003c 00       		.string	""
  45 003d 00       		.string	""
  46 003e 00       		.string	""
  47 003f 00       		.string	""
  48              		.align 4
  49              	.LC2:
  50 0040 0A00     		.string	"\n"
  51 0042 00       		.string	""
  52 0043 00       		.string	""
  53 0044 00       		.string	""
  54 0045 00       		.string	""
  55 0046 00       		.string	""
  56 0047 00       		.string	""
  57              		.text
  58              		.globl	main
  60              	main:
  61              	.LFB6:
  62              		.file 1 "deal.unicode.c"
   1:deal.unicode.c **** /*
   2:deal.unicode.c ****  *
   3:deal.unicode.c ****  *   File:
   4:deal.unicode.c ****  *      deal.c
   5:deal.unicode.c ****  *
   6:deal.unicode.c ****  *   Synopsis:
   7:deal.unicode.c ****  *
   8:deal.unicode.c ****  *   Revision History:
   9:deal.unicode.c ****  *      Date    Change Description
  10:deal.unicode.c ****  *      ------  -----------------------------------------
  11:deal.unicode.c ****  *      200227  Original.
  12:deal.unicode.c ****  *
  13:deal.unicode.c ****  *U+2660 	U+2665 	U+2666 	U+2663
  14:deal.unicode.c ****  *♠ 	♥ 	♦ 	♣       
  15:deal.unicode.c ****  */
  16:deal.unicode.c **** #include <stdio.h>
  17:deal.unicode.c **** #include <stdlib.h>
  18:deal.unicode.c **** #include <time.h>
  19:deal.unicode.c **** #include <stdbool.h>
  20:deal.unicode.c **** #include <wchar.h>
  21:deal.unicode.c **** #include <locale.h>
  22:deal.unicode.c **** 
  23:deal.unicode.c **** #define SUITS 4
  24:deal.unicode.c **** #define RANKS 13
  25:deal.unicode.c **** 
  26:deal.unicode.c **** int get_n_cards();
  27:deal.unicode.c **** 
  28:deal.unicode.c **** int main(void) {
  63              		.loc 1 28 16
  64              		.cfi_startproc
  65 0000 F30F1EFA 		endbr64
  66 0004 55       		push	rbp
  67              		.cfi_def_cfa_offset 16
  68              		.cfi_offset 6, -16
  69 0005 4889E5   		mov	rbp, rsp
  70              		.cfi_def_cfa_register 6
  71 0008 4883EC70 		sub	rsp, 112
  72              		.loc 1 28 16
  73 000c 64488B04 		mov	rax, QWORD PTR fs:40
  73      25280000 
  73      00
  74 0015 488945F8 		mov	QWORD PTR -8[rbp], rax
  75 0019 31C0     		xor	eax, eax
  29:deal.unicode.c ****   setlocale(LC_CTYPE, "en_US.UTF-8");
  76              		.loc 1 29 3
  77 001b 488D0500 		lea	rax, .LC0[rip]
  77      000000
  78 0022 4889C6   		mov	rsi, rax
  79 0025 BF000000 		mov	edi, 0
  79      00
  80 002a E8000000 		call	setlocale@PLT
  80      00
  30:deal.unicode.c **** 
  31:deal.unicode.c ****   bool in_hand[SUITS][RANKS] = {false};
  81              		.loc 1 31 8
  82 002f 48C745B0 		mov	QWORD PTR -80[rbp], 0
  82      00000000 
  83 0037 48C745B8 		mov	QWORD PTR -72[rbp], 0
  83      00000000 
  84 003f 48C745C0 		mov	QWORD PTR -64[rbp], 0
  84      00000000 
  85 0047 48C745C8 		mov	QWORD PTR -56[rbp], 0
  85      00000000 
  86 004f 48C745D0 		mov	QWORD PTR -48[rbp], 0
  86      00000000 
  87 0057 48C745D8 		mov	QWORD PTR -40[rbp], 0
  87      00000000 
  88 005f C745E000 		mov	DWORD PTR -32[rbp], 0
  88      000000
  32:deal.unicode.c **** 
  33:deal.unicode.c ****   const char ranks[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'J', 'Q', 'K', 'A'};
  89              		.loc 1 33 14
  90 0066 48B83233 		movabs	rax, 4123106164818064178
  90      34353637 
  90      3839
  91 0070 488945EB 		mov	QWORD PTR -21[rbp], rax
  92 0074 C745F374 		mov	DWORD PTR -13[rbp], 1263618676
  92      4A514B
  93 007b C645F741 		mov	BYTE PTR -9[rbp], 65
  34:deal.unicode.c ****   /* const char suits[] = {'c', 'd', 'h', 's'}; */
  35:deal.unicode.c ****   //  const wchar_t suits[] = {'\u2663', '\u2666', '\u2665', '\u2660'};
  36:deal.unicode.c ****   const wchar_t suits[] = {0x2663, 0x2666, 0x2665, 0x2660};
  94              		.loc 1 36 17
  95 007f C745A063 		mov	DWORD PTR -96[rbp], 9827
  95      260000
  96 0086 C745A466 		mov	DWORD PTR -92[rbp], 9830
  96      260000
  97 008d C745A865 		mov	DWORD PTR -88[rbp], 9829
  97      260000
  98 0094 C745AC60 		mov	DWORD PTR -84[rbp], 9824
  98      260000
  37:deal.unicode.c ****   srand((unsigned) time(NULL));
  99              		.loc 1 37 20
 100 009b BF000000 		mov	edi, 0
 100      00
 101 00a0 E8000000 		call	time@PLT
 101      00
 102              		.loc 1 37 3
 103 00a5 89C7     		mov	edi, eax
 104 00a7 E8000000 		call	srand@PLT
 104      00
  38:deal.unicode.c **** 
  39:deal.unicode.c ****   int cards = get_n_cards();
 105              		.loc 1 39 15
 106 00ac B8000000 		mov	eax, 0
 106      00
 107 00b1 E8000000 		call	get_n_cards
 107      00
 108 00b6 894594   		mov	DWORD PTR -108[rbp], eax
  40:deal.unicode.c **** 
  41:deal.unicode.c ****   wprintf(L"Your hand: ");
 109              		.loc 1 41 3
 110 00b9 488D0500 		lea	rax, .LC1[rip]
 110      000000
 111 00c0 4889C7   		mov	rdi, rax
 112 00c3 B8000000 		mov	eax, 0
 112      00
 113 00c8 E8000000 		call	wprintf@PLT
 113      00
  42:deal.unicode.c **** 
  43:deal.unicode.c ****   while ( cards > 0 ) {
 114              		.loc 1 43 9
 115 00cd E9D30000 		jmp	.L2
 115      00
 116              	.L3:
 117              	.LBB2:
  44:deal.unicode.c ****     int suit = rand() % SUITS;
 118              		.loc 1 44 16
 119 00d2 E8000000 		call	rand@PLT
 119      00
 120              		.loc 1 44 9
 121 00d7 99       		cdq
 122 00d8 C1EA1E   		shr	edx, 30
 123 00db 01D0     		add	eax, edx
 124 00dd 83E003   		and	eax, 3
 125 00e0 29D0     		sub	eax, edx
 126 00e2 894598   		mov	DWORD PTR -104[rbp], eax
  45:deal.unicode.c ****     int rank = rand() % RANKS;
 127              		.loc 1 45 16
 128 00e5 E8000000 		call	rand@PLT
 128      00
 129 00ea 89C2     		mov	edx, eax
 130              		.loc 1 45 9
 131 00ec 4863C2   		movsx	rax, edx
 132 00ef 4869C04F 		imul	rax, rax, 1321528399
 132      ECC44E
 133 00f6 48C1E820 		shr	rax, 32
 134 00fa C1F802   		sar	eax, 2
 135 00fd 89D1     		mov	ecx, edx
 136 00ff C1F91F   		sar	ecx, 31
 137 0102 29C8     		sub	eax, ecx
 138 0104 89459C   		mov	DWORD PTR -100[rbp], eax
 139 0107 8B4D9C   		mov	ecx, DWORD PTR -100[rbp]
 140 010a 89C8     		mov	eax, ecx
 141 010c 01C0     		add	eax, eax
 142 010e 01C8     		add	eax, ecx
 143 0110 C1E002   		sal	eax, 2
 144 0113 01C8     		add	eax, ecx
 145 0115 29C2     		sub	edx, eax
 146 0117 89559C   		mov	DWORD PTR -100[rbp], edx
  46:deal.unicode.c **** 
  47:deal.unicode.c ****     if ( !in_hand[suit][rank] ) {
 147              		.loc 1 47 24
 148 011a 8B459C   		mov	eax, DWORD PTR -100[rbp]
 149 011d 4863C8   		movsx	rcx, eax
 150 0120 8B4598   		mov	eax, DWORD PTR -104[rbp]
 151 0123 4863D0   		movsx	rdx, eax
 152 0126 4889D0   		mov	rax, rdx
 153 0129 4801C0   		add	rax, rax
 154 012c 4801D0   		add	rax, rdx
 155 012f 48C1E002 		sal	rax, 2
 156 0133 4801D0   		add	rax, rdx
 157 0136 4801E8   		add	rax, rbp
 158 0139 4801C8   		add	rax, rcx
 159 013c 4883E850 		sub	rax, 80
 160 0140 0FB600   		movzx	eax, BYTE PTR [rax]
 161              		.loc 1 47 10
 162 0143 83F001   		xor	eax, 1
 163              		.loc 1 47 8
 164 0146 84C0     		test	al, al
 165 0148 745B     		je	.L2
  48:deal.unicode.c ****       in_hand[suit][rank] = true;
 166              		.loc 1 48 27
 167 014a 8B459C   		mov	eax, DWORD PTR -100[rbp]
 168 014d 4863C8   		movsx	rcx, eax
 169 0150 8B4598   		mov	eax, DWORD PTR -104[rbp]
 170 0153 4863D0   		movsx	rdx, eax
 171 0156 4889D0   		mov	rax, rdx
 172 0159 4801C0   		add	rax, rax
 173 015c 4801D0   		add	rax, rdx
 174 015f 48C1E002 		sal	rax, 2
 175 0163 4801D0   		add	rax, rdx
 176 0166 4801E8   		add	rax, rbp
 177 0169 4801C8   		add	rax, rcx
 178 016c 4883E850 		sub	rax, 80
 179 0170 C60001   		mov	BYTE PTR [rax], 1
  49:deal.unicode.c ****       cards--;
 180              		.loc 1 49 12
 181 0173 836D9401 		sub	DWORD PTR -108[rbp], 1
  50:deal.unicode.c **** 
  51:deal.unicode.c ****       /* printf("%c%c ", ranks[rank], suits[suit]); */
  52:deal.unicode.c ****       //      printf("%c", ranks[rank]);
  53:deal.unicode.c ****       //      wprintf(L"%lc ", suits[suit]);
  54:deal.unicode.c ****       putwchar(ranks[rank]);
 182              		.loc 1 54 21
 183 0177 8B459C   		mov	eax, DWORD PTR -100[rbp]
 184 017a 4898     		cdqe
 185 017c 0FB64405 		movzx	eax, BYTE PTR -21[rbp+rax]
 185      EB
 186              		.loc 1 54 7
 187 0181 0FBEC0   		movsx	eax, al
 188 0184 89C7     		mov	edi, eax
 189 0186 E8000000 		call	putwchar@PLT
 189      00
  55:deal.unicode.c ****       putwchar(suits[suit]);
 190              		.loc 1 55 21
 191 018b 8B4598   		mov	eax, DWORD PTR -104[rbp]
 192 018e 4898     		cdqe
 193 0190 8B4485A0 		mov	eax, DWORD PTR -96[rbp+rax*4]
 194              		.loc 1 55 7
 195 0194 89C7     		mov	edi, eax
 196 0196 E8000000 		call	putwchar@PLT
 196      00
  56:deal.unicode.c ****       putwchar(' ');
 197              		.loc 1 56 7
 198 019b BF200000 		mov	edi, 32
 198      00
 199 01a0 E8000000 		call	putwchar@PLT
 199      00
 200              	.L2:
 201              	.LBE2:
  43:deal.unicode.c ****     int suit = rand() % SUITS;
 202              		.loc 1 43 17
 203 01a5 837D9400 		cmp	DWORD PTR -108[rbp], 0
 204 01a9 0F8F23FF 		jg	.L3
 204      FFFF
  57:deal.unicode.c ****     }
  58:deal.unicode.c ****   }
  59:deal.unicode.c **** 
  60:deal.unicode.c ****   wprintf(L"\n");
 205              		.loc 1 60 3
 206 01af 488D0500 		lea	rax, .LC2[rip]
 206      000000
 207 01b6 4889C7   		mov	rdi, rax
 208 01b9 B8000000 		mov	eax, 0
 208      00
 209 01be E8000000 		call	wprintf@PLT
 209      00
  61:deal.unicode.c **** 
  62:deal.unicode.c **** /* setlocale(LC_CTYPE, "UTF-8"); */
  63:deal.unicode.c **** /*     wchar_t star = 0x2605; */
  64:deal.unicode.c **** /*     wprintf(L"%lc\n", star); */
  65:deal.unicode.c ****   exit(EXIT_SUCCESS);
 210              		.loc 1 65 3
 211 01c3 BF000000 		mov	edi, 0
 211      00
 212 01c8 E8000000 		call	exit@PLT
 212      00
 213              		.cfi_endproc
 214              	.LFE6:
 216              		.section	.rodata
 217              		.align 8
 218              	.LC3:
 219 0048 4500     		.string	"E"
 220 004a 00       		.string	""
 221 004b 00       		.string	""
 222 004c 6E00     		.string	"n"
 223 004e 00       		.string	""
 224 004f 00       		.string	""
 225 0050 7400     		.string	"t"
 226 0052 00       		.string	""
 227 0053 00       		.string	""
 228 0054 6500     		.string	"e"
 229 0056 00       		.string	""
 230 0057 00       		.string	""
 231 0058 7200     		.string	"r"
 232 005a 00       		.string	""
 233 005b 00       		.string	""
 234 005c 2000     		.string	" "
 235 005e 00       		.string	""
 236 005f 00       		.string	""
 237 0060 6E00     		.string	"n"
 238 0062 00       		.string	""
 239 0063 00       		.string	""
 240 0064 7500     		.string	"u"
 241 0066 00       		.string	""
 242 0067 00       		.string	""
 243 0068 6D00     		.string	"m"
 244 006a 00       		.string	""
 245 006b 00       		.string	""
 246 006c 6200     		.string	"b"
 247 006e 00       		.string	""
 248 006f 00       		.string	""
 249 0070 6500     		.string	"e"
 250 0072 00       		.string	""
 251 0073 00       		.string	""
 252 0074 7200     		.string	"r"
 253 0076 00       		.string	""
 254 0077 00       		.string	""
 255 0078 2000     		.string	" "
 256 007a 00       		.string	""
 257 007b 00       		.string	""
 258 007c 6F00     		.string	"o"
 259 007e 00       		.string	""
 260 007f 00       		.string	""
 261 0080 6600     		.string	"f"
 262 0082 00       		.string	""
 263 0083 00       		.string	""
 264 0084 2000     		.string	" "
 265 0086 00       		.string	""
 266 0087 00       		.string	""
 267 0088 6300     		.string	"c"
 268 008a 00       		.string	""
 269 008b 00       		.string	""
 270 008c 6100     		.string	"a"
 271 008e 00       		.string	""
 272 008f 00       		.string	""
 273 0090 7200     		.string	"r"
 274 0092 00       		.string	""
 275 0093 00       		.string	""
 276 0094 6400     		.string	"d"
 277 0096 00       		.string	""
 278 0097 00       		.string	""
 279 0098 7300     		.string	"s"
 280 009a 00       		.string	""
 281 009b 00       		.string	""
 282 009c 2000     		.string	" "
 283 009e 00       		.string	""
 284 009f 00       		.string	""
 285 00a0 6900     		.string	"i"
 286 00a2 00       		.string	""
 287 00a3 00       		.string	""
 288 00a4 6E00     		.string	"n"
 289 00a6 00       		.string	""
 290 00a7 00       		.string	""
 291 00a8 2000     		.string	" "
 292 00aa 00       		.string	""
 293 00ab 00       		.string	""
 294 00ac 6800     		.string	"h"
 295 00ae 00       		.string	""
 296 00af 00       		.string	""
 297 00b0 6100     		.string	"a"
 298 00b2 00       		.string	""
 299 00b3 00       		.string	""
 300 00b4 6E00     		.string	"n"
 301 00b6 00       		.string	""
 302 00b7 00       		.string	""
 303 00b8 6400     		.string	"d"
 304 00ba 00       		.string	""
 305 00bb 00       		.string	""
 306 00bc 3A00     		.string	":"
 307 00be 00       		.string	""
 308 00bf 00       		.string	""
 309 00c0 2000     		.string	" "
 310 00c2 00       		.string	""
 311 00c3 00       		.string	""
 312 00c4 00       		.string	""
 313 00c5 00       		.string	""
 314 00c6 00       		.string	""
 315 00c7 00       		.string	""
 316              	.LC4:
 317 00c8 256400   		.string	"%d"
 318              		.text
 319              		.globl	get_n_cards
 321              	get_n_cards:
 322              	.LFB7:
  66:deal.unicode.c **** }
  67:deal.unicode.c **** 
  68:deal.unicode.c **** int get_n_cards() {
 323              		.loc 1 68 19
 324              		.cfi_startproc
 325 01cd F30F1EFA 		endbr64
 326 01d1 55       		push	rbp
 327              		.cfi_def_cfa_offset 16
 328              		.cfi_offset 6, -16
 329 01d2 4889E5   		mov	rbp, rsp
 330              		.cfi_def_cfa_register 6
 331 01d5 4883EC10 		sub	rsp, 16
 332              		.loc 1 68 19
 333 01d9 64488B04 		mov	rax, QWORD PTR fs:40
 333      25280000 
 333      00
 334 01e2 488945F8 		mov	QWORD PTR -8[rbp], rax
 335 01e6 31C0     		xor	eax, eax
  69:deal.unicode.c ****   wprintf(L"Enter number of cards in hand: ");
 336              		.loc 1 69 3
 337 01e8 488D0500 		lea	rax, .LC3[rip]
 337      000000
 338 01ef 4889C7   		mov	rdi, rax
 339 01f2 B8000000 		mov	eax, 0
 339      00
 340 01f7 E8000000 		call	wprintf@PLT
 340      00
  70:deal.unicode.c ****   int n;
  71:deal.unicode.c **** 
  72:deal.unicode.c ****   int count = scanf("%d", &n);
 341              		.loc 1 72 15
 342 01fc 488D45F0 		lea	rax, -16[rbp]
 343 0200 4889C6   		mov	rsi, rax
 344 0203 488D0500 		lea	rax, .LC4[rip]
 344      000000
 345 020a 4889C7   		mov	rdi, rax
 346 020d B8000000 		mov	eax, 0
 346      00
 347 0212 E8000000 		call	__isoc99_scanf@PLT
 347      00
 348 0217 8945F4   		mov	DWORD PTR -12[rbp], eax
  73:deal.unicode.c **** 
  74:deal.unicode.c ****   if ( count == 1  &&  n > 0  &&  n <= SUITS*RANKS ) {
 349              		.loc 1 74 6
 350 021a 837DF401 		cmp	DWORD PTR -12[rbp], 1
 351 021e 7514     		jne	.L11
 352              		.loc 1 74 26 discriminator 1
 353 0220 8B45F0   		mov	eax, DWORD PTR -16[rbp]
 354              		.loc 1 74 20 discriminator 1
 355 0223 85C0     		test	eax, eax
 356 0225 7E0D     		jle	.L11
 357              		.loc 1 74 37 discriminator 2
 358 0227 8B45F0   		mov	eax, DWORD PTR -16[rbp]
 359              		.loc 1 74 31 discriminator 2
 360 022a 83F834   		cmp	eax, 52
 361 022d 7F05     		jg	.L11
  75:deal.unicode.c ****     return n;
 362              		.loc 1 75 12
 363 022f 8B45F0   		mov	eax, DWORD PTR -16[rbp]
 364 0232 EB15     		jmp	.L9
 365              	.L11:
  76:deal.unicode.c ****   } else {
  77:deal.unicode.c ****     while ( getchar() != '\n' ) {}
 366              		.loc 1 77 11
 367 0234 90       		nop
 368              	.L8:
 369              		.loc 1 77 13 discriminator 1
 370 0235 E8000000 		call	getchar@PLT
 370      00
 371              		.loc 1 77 23 discriminator 1
 372 023a 83F80A   		cmp	eax, 10
 373 023d 75F6     		jne	.L8
  78:deal.unicode.c **** 
  79:deal.unicode.c ****     return get_n_cards();
 374              		.loc 1 79 12
 375 023f B8000000 		mov	eax, 0
 375      00
 376 0244 E8000000 		call	get_n_cards
 376      00
 377              	.L9:
  80:deal.unicode.c ****   }
  81:deal.unicode.c **** }
 378              		.loc 1 81 1 discriminator 1
 379 0249 488B55F8 		mov	rdx, QWORD PTR -8[rbp]
 380 024d 64482B14 		sub	rdx, QWORD PTR fs:40
 380      25280000 
 380      00
 381 0256 7405     		je	.L10
 382              		.loc 1 81 1 is_stmt 0
 383 0258 E8000000 		call	__stack_chk_fail@PLT
 383      00
 384              	.L10:
 385 025d C9       		leave
 386              		.cfi_def_cfa 7, 8
 387 025e C3       		ret
 388              		.cfi_endproc
 389              	.LFE7:
 391              	.Letext0:
 392              		.file 2 "/usr/include/x86_64-linux-gnu/bits/types.h"
 393              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h"
 394              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h"
 395              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types/wint_t.h"
 396              		.file 6 "/usr/include/stdlib.h"
 397              		.file 7 "/usr/include/wchar.h"
 398              		.file 8 "/usr/include/stdio.h"
 399              		.file 9 "/usr/include/time.h"
 400              		.file 10 "/usr/include/locale.h"
 1163              		.section	.note.gnu.property,"a"
 1164              		.align 8
 1165 0000 04000000 		.long	1f - 0f
 1166 0004 10000000 		.long	4f - 1f
 1167 0008 05000000 		.long	5
 1168              	0:
 1169 000c 474E5500 		.string	"GNU"
 1170              	1:
 1171              		.align 8
 1172 0010 020000C0 		.long	0xc0000002
 1173 0014 04000000 		.long	3f - 2f
 1174              	2:
 1175 0018 03000000 		.long	0x3
 1176              	3:
 1177 001c 00000000 		.align 8
 1178              	4:
