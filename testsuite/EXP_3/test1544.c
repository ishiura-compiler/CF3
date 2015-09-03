#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
uint64_t x5 = 1415672243532104LLU;
int32_t t3 = -14371062;
volatile int16_t x17 = -1;
int32_t x18 = INT32_MAX;
int16_t x23 = INT16_MAX;
static uint64_t x24 = 6142LLU;
int16_t x27 = INT16_MIN;
int8_t x36 = INT8_MIN;
int16_t x42 = INT16_MIN;
int32_t t11 = 3866982;
static int8_t x53 = -1;
volatile int32_t t13 = 8540852;
volatile int8_t x71 = -1;
int32_t t16 = 0;
int8_t x78 = -1;
int32_t t19 = -646;
volatile int8_t x95 = 0;
static int16_t x97 = -1;
uint16_t x104 = UINT16_MAX;
uint64_t x109 = UINT64_MAX;
int16_t x110 = 246;
uint64_t x114 = UINT64_MAX;
uint16_t x136 = UINT16_MAX;
static uint16_t x139 = 0U;
volatile int64_t x140 = -1687214LL;
volatile int32_t t31 = 428;
static int32_t t32 = 207;
static int32_t x145 = INT32_MIN;
int32_t x150 = -1;
int64_t x153 = INT64_MIN;
uint32_t x155 = 2U;
int32_t x158 = INT32_MAX;
uint32_t x163 = 538031U;
int16_t x172 = -10188;
volatile uint32_t x192 = UINT32_MAX;
static uint64_t x196 = 945350677953350LLU;
uint16_t x204 = UINT16_MAX;
int8_t x209 = INT8_MIN;
volatile int32_t t48 = 87778;
volatile int32_t t49 = 4064;
int16_t x245 = 10797;
int64_t x248 = 2994174239833113426LL;
static int8_t x262 = -12;
uint16_t x278 = 4U;
volatile int32_t t62 = 669;
int32_t x288 = INT32_MAX;
static uint64_t x294 = UINT64_MAX;
uint64_t x295 = 8LLU;
volatile uint32_t x297 = 3U;
static uint16_t x307 = UINT16_MAX;
static int64_t x308 = INT64_MIN;
volatile int32_t t69 = 59696;
volatile uint64_t x315 = 74617758254LLU;
int64_t x316 = 14765843LL;
volatile int32_t t71 = 1894997;
int8_t x319 = INT8_MIN;
uint64_t x329 = UINT64_MAX;
static int64_t x336 = 146LL;
volatile int32_t t74 = 24053175;
static int8_t x339 = 1;
static int32_t x344 = 9;
int32_t t76 = -11;
uint16_t x348 = 31778U;
volatile int8_t x351 = 1;
static uint64_t x356 = UINT64_MAX;
uint16_t x363 = 2097U;
uint8_t x365 = UINT8_MAX;
uint8_t x369 = UINT8_MAX;
int16_t x377 = INT16_MAX;
uint32_t x378 = UINT32_MAX;
volatile int32_t t85 = -466853;
uint64_t x384 = 8160123282LLU;
volatile int64_t x391 = INT64_MIN;
static int32_t x401 = 305438093;
volatile uint8_t x402 = UINT8_MAX;
static int32_t x408 = INT32_MIN;
volatile uint64_t x414 = UINT64_MAX;
volatile uint8_t x420 = 5U;
static uint32_t x421 = 6583U;
int16_t x423 = INT16_MAX;
volatile int32_t x426 = -1;
volatile uint64_t x428 = 419343LLU;
int32_t t96 = 7340;
uint32_t x433 = 233275775U;


void f0(void) {
	uint8_t x2 = 14U;
	volatile int16_t x3 = INT16_MAX;
	static int16_t x4 = -33;
	volatile int32_t t0 = -48502259;

	t0 = ((x1-x2)<=(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = -315904293606656LL;
	int32_t x7 = 212638017;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -5502;

	t1 = ((x5-x6)<=(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int32_t x10 = -1;
	int8_t x11 = 1;
	static volatile uint16_t x12 = 0U;
	static int32_t t2 = 53678;

	t2 = ((x9-x10)<=(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -11;
	static int8_t x14 = 2;
	int64_t x15 = INT64_MAX;
	static int32_t x16 = 219;

	t3 = ((x13-x14)<=(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x19 = 2695758504LLU;
	uint16_t x20 = 5U;
	volatile int32_t t4 = -1353737;

	t4 = ((x17-x18)<=(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	int64_t x22 = 137948891255451489LL;
	int32_t t5 = 1;

	t5 = ((x21-x22)<=(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	static int64_t x26 = INT64_MIN;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -40;

	t6 = ((x25-x26)<=(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 3188U;
	volatile uint64_t x30 = 739189236320763476LLU;
	uint16_t x31 = 12883U;
	uint16_t x32 = 3U;
	int32_t t7 = -517;

	t7 = ((x29-x30)<=(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -91;
	volatile int8_t x34 = INT8_MIN;
	static uint16_t x35 = 936U;
	volatile int32_t t8 = 274371;

	t8 = ((x33-x34)<=(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 68934LLU;
	static int64_t x38 = INT64_MIN;
	volatile int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t9 = -626818;

	t9 = ((x37-x38)<=(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x41 = 29U;
	volatile uint16_t x43 = 0U;
	uint8_t x44 = UINT8_MAX;
	static int32_t t10 = 27;

	t10 = ((x41-x42)<=(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 0;
	volatile int32_t x46 = 7230898;
	uint16_t x47 = UINT16_MAX;
	uint64_t x48 = 3904157294LLU;

	t11 = ((x45-x46)<=(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = INT64_MAX;
	static uint16_t x55 = UINT16_MAX;
	int8_t x56 = -1;
	int32_t t12 = -7661852;

	t12 = ((x53-x54)<=(x55<=x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 22881U;
	volatile int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MAX;
	int32_t x60 = INT32_MAX;

	t13 = ((x57-x58)<=(x59<=x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -10185014LL;
	static int32_t x62 = -1;
	static uint64_t x63 = 3720451256513797LLU;
	static int8_t x64 = INT8_MIN;
	int32_t t14 = 76035;

	t14 = ((x61-x62)<=(x63<=x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = 206U;
	static int8_t x66 = INT8_MIN;
	volatile int32_t x67 = -1;
	int8_t x68 = 47;
	volatile int32_t t15 = -11965356;

	t15 = ((x65-x66)<=(x67<=x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = -1;
	static int8_t x72 = INT8_MAX;

	t16 = ((x69-x70)<=(x71<=x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 258360518LL;
	int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int8_t x76 = -1;
	int32_t t17 = 32590652;

	t17 = ((x73-x74)<=(x75<=x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	int8_t x79 = INT8_MAX;
	int8_t x80 = INT8_MIN;
	int32_t t18 = -2;

	t18 = ((x77-x78)<=(x79<=x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MAX;
	uint8_t x86 = 2U;
	int64_t x87 = -1283469930LL;
	int64_t x88 = INT64_MIN;

	t19 = ((x85-x86)<=(x87<=x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 106U;
	int64_t x90 = -19024LL;
	volatile int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	volatile int32_t t20 = -6845;

	t20 = ((x89-x90)<=(x91<=x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x93 = 923840U;
	volatile int32_t x94 = INT32_MAX;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t21 = 2650188;

	t21 = ((x93-x94)<=(x95<=x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x98 = 3387U;
	int8_t x99 = INT8_MAX;
	int64_t x100 = -1LL;
	int32_t t22 = 6293;

	t22 = ((x97-x98)<=(x99<=x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x101 = 3U;
	static int32_t x102 = 2;
	int16_t x103 = -6;
	volatile int32_t t23 = 77;

	t23 = ((x101-x102)<=(x103<=x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x111 = 10;
	int64_t x112 = -17LL;
	volatile int32_t t24 = -138;

	t24 = ((x109-x110)<=(x111<=x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	volatile int32_t x115 = 7;
	int64_t x116 = INT64_MAX;
	int32_t t25 = -226398047;

	t25 = ((x113-x114)<=(x115<=x116));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -5442056299LL;
	int8_t x118 = INT8_MAX;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = -1LL;
	int32_t t26 = 1;

	t26 = ((x117-x118)<=(x119<=x120));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -123672;
	uint8_t x122 = 4U;
	static volatile int32_t x123 = -522672827;
	int32_t x124 = -61626;
	int32_t t27 = 5015;

	t27 = ((x121-x122)<=(x123<=x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = -13046LL;
	int64_t x126 = 13354238127LL;
	int8_t x127 = 3;
	int16_t x128 = INT16_MIN;
	int32_t t28 = 1093365;

	t28 = ((x125-x126)<=(x127<=x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = UINT64_MAX;
	uint32_t x130 = 6196767U;
	uint32_t x131 = 164908843U;
	uint32_t x132 = 23U;
	int32_t t29 = -1089946;

	t29 = ((x129-x130)<=(x131<=x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = 104U;
	int8_t x134 = INT8_MAX;
	uint64_t x135 = 7855798050552917968LLU;
	volatile int32_t t30 = 12129206;

	t30 = ((x133-x134)<=(x135<=x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x137 = 14051U;
	volatile int32_t x138 = -511;

	t31 = ((x137-x138)<=(x139<=x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x141 = 515396U;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	static volatile int16_t x144 = INT16_MIN;

	t32 = ((x141-x142)<=(x143<=x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x146 = -1;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 1098093870U;
	volatile int32_t t33 = 491126;

	t33 = ((x145-x146)<=(x147<=x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	uint64_t x151 = 56306500786LLU;
	static int32_t x152 = 85450039;
	int32_t t34 = 107;

	t34 = ((x149-x150)<=(x151<=x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x154 = INT8_MIN;
	int8_t x156 = -1;
	static volatile int32_t t35 = -23283;

	t35 = ((x153-x154)<=(x155<=x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MAX;
	int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t36 = -4;

	t36 = ((x157-x158)<=(x159<=x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x161 = INT8_MIN;
	int8_t x162 = 43;
	volatile int64_t x164 = -1LL;
	int32_t t37 = -77823883;

	t37 = ((x161-x162)<=(x163<=x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = UINT32_MAX;
	static int16_t x170 = -1437;
	volatile uint64_t x171 = 1172LLU;
	static int32_t t38 = 28633009;

	t38 = ((x169-x170)<=(x171<=x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 1U;
	int16_t x174 = -236;
	int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MAX;
	volatile int32_t t39 = 95;

	t39 = ((x173-x174)<=(x175<=x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = 0;
	int8_t x182 = INT8_MIN;
	int32_t x183 = 430;
	int64_t x184 = 5671392654LL;
	int32_t t40 = -7912605;

	t40 = ((x181-x182)<=(x183<=x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = INT8_MIN;
	int16_t x186 = -6272;
	int32_t x187 = INT32_MAX;
	int32_t x188 = 425592;
	volatile int32_t t41 = 13;

	t41 = ((x185-x186)<=(x187<=x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = -1;
	int64_t x190 = INT64_MIN;
	volatile uint16_t x191 = 28948U;
	volatile int32_t t42 = 9553;

	t42 = ((x189-x190)<=(x191<=x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 566765394U;
	int16_t x194 = INT16_MIN;
	uint8_t x195 = 4U;
	volatile int32_t t43 = -2599057;

	t43 = ((x193-x194)<=(x195<=x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MAX;
	volatile int8_t x198 = INT8_MIN;
	uint64_t x199 = UINT64_MAX;
	int16_t x200 = -1;
	volatile int32_t t44 = -1;

	t44 = ((x197-x198)<=(x199<=x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	static volatile int64_t x202 = 790146233LL;
	int8_t x203 = INT8_MAX;
	int32_t t45 = 4;

	t45 = ((x201-x202)<=(x203<=x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = -5822;
	int32_t x206 = -906;
	int64_t x207 = 459271932192LL;
	int32_t x208 = 8;
	int32_t t46 = 91941;

	t46 = ((x205-x206)<=(x207<=x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x210 = UINT16_MAX;
	static volatile int16_t x211 = 0;
	volatile uint8_t x212 = UINT8_MAX;
	volatile int32_t t47 = 1;

	t47 = ((x209-x210)<=(x211<=x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x213 = INT8_MIN;
	static volatile int16_t x214 = INT16_MIN;
	int32_t x215 = -1;
	static int32_t x216 = -1;

	t48 = ((x213-x214)<=(x215<=x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x221 = UINT8_MAX;
	uint8_t x222 = 2U;
	uint8_t x223 = UINT8_MAX;
	static int16_t x224 = -1;

	t49 = ((x221-x222)<=(x223<=x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	uint64_t x231 = 27LLU;
	volatile uint16_t x232 = 25332U;
	volatile int32_t t50 = -963941;

	t50 = ((x229-x230)<=(x231<=x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = -1LL;
	volatile int64_t x234 = 9082865506963560LL;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MAX;
	volatile int32_t t51 = 1081886;

	t51 = ((x233-x234)<=(x235<=x236));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = INT32_MIN;
	uint32_t x238 = 138567U;
	static int16_t x239 = INT16_MIN;
	int8_t x240 = 0;
	static volatile int32_t t52 = -15;

	t52 = ((x237-x238)<=(x239<=x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MIN;
	static uint64_t x242 = 69642677934LLU;
	int64_t x243 = 1724257259LL;
	uint32_t x244 = 22757U;
	int32_t t53 = 19;

	t53 = ((x241-x242)<=(x243<=x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x246 = -1;
	uint64_t x247 = UINT64_MAX;
	int32_t t54 = 12640;

	t54 = ((x245-x246)<=(x247<=x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = INT16_MAX;
	volatile uint8_t x250 = 0U;
	static uint8_t x251 = 14U;
	int64_t x252 = 723434208383925LL;
	int32_t t55 = -3007015;

	t55 = ((x249-x250)<=(x251<=x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x253 = -1;
	static int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MIN;
	int32_t t56 = -284336906;

	t56 = ((x253-x254)<=(x255<=x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	volatile int8_t x258 = -1;
	int64_t x259 = INT64_MAX;
	int8_t x260 = -1;
	int32_t t57 = 10937;

	t57 = ((x257-x258)<=(x259<=x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x263 = UINT16_MAX;
	int64_t x264 = -10LL;
	volatile int32_t t58 = -695;

	t58 = ((x261-x262)<=(x263<=x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x265 = UINT8_MAX;
	static uint8_t x266 = UINT8_MAX;
	int8_t x267 = 0;
	volatile int8_t x268 = INT8_MAX;
	int32_t t59 = 12630;

	t59 = ((x265-x266)<=(x267<=x268));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = -1LL;
	uint32_t x271 = 120U;
	uint64_t x272 = 3201419341574751LLU;
	static int32_t t60 = 4806;

	t60 = ((x269-x270)<=(x271<=x272));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x273 = 107U;
	int64_t x274 = -469LL;
	volatile int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t61 = -458;

	t61 = ((x273-x274)<=(x275<=x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x277 = -1LL;
	static int64_t x279 = 2145265843690768992LL;
	int64_t x280 = INT64_MIN;

	t62 = ((x277-x278)<=(x279<=x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x281 = INT8_MAX;
	volatile int8_t x282 = INT8_MAX;
	static volatile int64_t x283 = -1LL;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t63 = -12;

	t63 = ((x281-x282)<=(x283<=x284));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x285 = 6U;
	uint16_t x286 = 32183U;
	int32_t x287 = INT32_MIN;
	int32_t t64 = -1;

	t64 = ((x285-x286)<=(x287<=x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x289 = UINT32_MAX;
	volatile int32_t x290 = -1;
	uint32_t x291 = UINT32_MAX;
	static uint8_t x292 = 6U;
	volatile int32_t t65 = -1;

	t65 = ((x289-x290)<=(x291<=x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = 1;
	static int32_t x296 = -245;
	volatile int32_t t66 = -9;

	t66 = ((x293-x294)<=(x295<=x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x298 = 0U;
	uint64_t x299 = 2674LLU;
	int32_t x300 = 113;
	int32_t t67 = 60104;

	t67 = ((x297-x298)<=(x299<=x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x301 = -1;
	int8_t x302 = INT8_MAX;
	volatile int16_t x303 = 12;
	int8_t x304 = INT8_MIN;
	int32_t t68 = -26;

	t68 = ((x301-x302)<=(x303<=x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x305 = 63402U;
	static volatile int8_t x306 = INT8_MIN;

	t69 = ((x305-x306)<=(x307<=x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	uint8_t x311 = 84U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t70 = -236;

	t70 = ((x309-x310)<=(x311<=x312));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x313 = 276LLU;
	int32_t x314 = INT32_MIN;

	t71 = ((x313-x314)<=(x315<=x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MIN;
	static volatile int8_t x318 = INT8_MIN;
	static int32_t x320 = 93261;
	static int32_t t72 = 600926;

	t72 = ((x317-x318)<=(x319<=x320));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x330 = UINT8_MAX;
	int8_t x331 = -1;
	static uint16_t x332 = 6U;
	volatile int32_t t73 = 0;

	t73 = ((x329-x330)<=(x331<=x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = -625;
	int64_t x335 = -25310LL;

	t74 = ((x333-x334)<=(x335<=x336));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = -1060;
	uint16_t x338 = 1U;
	static int16_t x340 = 118;
	static volatile int32_t t75 = -1;

	t75 = ((x337-x338)<=(x339<=x340));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = -27;
	uint32_t x342 = UINT32_MAX;
	uint32_t x343 = 181108596U;

	t76 = ((x341-x342)<=(x343<=x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x345 = 3;
	uint64_t x346 = UINT64_MAX;
	int32_t x347 = 2;
	static volatile int32_t t77 = 13;

	t77 = ((x345-x346)<=(x347<=x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x349 = 1U;
	static int32_t x350 = 1;
	uint32_t x352 = 103U;
	static int32_t t78 = -2604175;

	t78 = ((x349-x350)<=(x351<=x352));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = 1068U;
	static int16_t x354 = -39;
	volatile uint32_t x355 = 98782U;
	int32_t t79 = -324692;

	t79 = ((x353-x354)<=(x355<=x356));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	int16_t x359 = -1;
	volatile int8_t x360 = INT8_MIN;
	static volatile int32_t t80 = -20;

	t80 = ((x357-x358)<=(x359<=x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = 100910LL;
	uint32_t x362 = UINT32_MAX;
	int8_t x364 = INT8_MIN;
	static int32_t t81 = 14401;

	t81 = ((x361-x362)<=(x363<=x364));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x366 = INT8_MIN;
	uint64_t x367 = UINT64_MAX;
	volatile int8_t x368 = INT8_MIN;
	int32_t t82 = -144016629;

	t82 = ((x365-x366)<=(x367<=x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x370 = 26U;
	static int16_t x371 = INT16_MIN;
	int16_t x372 = 7680;
	static int32_t t83 = -1;

	t83 = ((x369-x370)<=(x371<=x372));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = 2493;
	int16_t x374 = -89;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = 733864;
	volatile int32_t t84 = 6238;

	t84 = ((x373-x374)<=(x375<=x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x379 = 2;
	volatile int64_t x380 = 1275470LL;

	t85 = ((x377-x378)<=(x379<=x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = INT16_MIN;
	static uint16_t x382 = UINT16_MAX;
	volatile int16_t x383 = 1;
	volatile int32_t t86 = 5;

	t86 = ((x381-x382)<=(x383<=x384));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = 833;
	uint8_t x386 = 29U;
	int32_t x387 = -1;
	volatile int8_t x388 = -15;
	volatile int32_t t87 = 1;

	t87 = ((x385-x386)<=(x387<=x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = -1;
	int32_t x390 = -1526757;
	static int16_t x392 = INT16_MIN;
	int32_t t88 = 9052667;

	t88 = ((x389-x390)<=(x391<=x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x393 = 1950;
	static uint64_t x394 = 888731757LLU;
	volatile uint32_t x395 = 0U;
	static volatile uint8_t x396 = UINT8_MAX;
	static int32_t t89 = -92;

	t89 = ((x393-x394)<=(x395<=x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = -8;
	int32_t x399 = 58;
	int16_t x400 = -4510;
	static volatile int32_t t90 = 0;

	t90 = ((x397-x398)<=(x399<=x400));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x403 = 8730506U;
	static uint64_t x404 = 911884191478LLU;
	int32_t t91 = -260;

	t91 = ((x401-x402)<=(x403<=x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x405 = UINT8_MAX;
	uint32_t x406 = 6885U;
	uint32_t x407 = UINT32_MAX;
	int32_t t92 = -3397;

	t92 = ((x405-x406)<=(x407<=x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x413 = -15920087768687LL;
	int8_t x415 = -1;
	int16_t x416 = INT16_MIN;
	volatile int32_t t93 = 68553;

	t93 = ((x413-x414)<=(x415<=x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x417 = 0U;
	volatile uint32_t x418 = 16769007U;
	int64_t x419 = -1LL;
	int32_t t94 = 188;

	t94 = ((x417-x418)<=(x419<=x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x422 = 51U;
	volatile int16_t x424 = INT16_MIN;
	static volatile int32_t t95 = 12;

	t95 = ((x421-x422)<=(x423<=x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = INT8_MIN;
	uint8_t x427 = 13U;

	t96 = ((x425-x426)<=(x427<=x428));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x429 = 602U;
	int64_t x430 = -1LL;
	int64_t x431 = 8287423839311394LL;
	int16_t x432 = INT16_MAX;
	volatile int32_t t97 = 13;

	t97 = ((x429-x430)<=(x431<=x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x434 = INT8_MAX;
	uint64_t x435 = UINT64_MAX;
	uint8_t x436 = 6U;
	static volatile int32_t t98 = 275;

	t98 = ((x433-x434)<=(x435<=x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x437 = 29U;
	int16_t x438 = -1;
	uint8_t x439 = UINT8_MAX;
	static int16_t x440 = 2;
	volatile int32_t t99 = -1845443;

	t99 = ((x437-x438)<=(x439<=x440));

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

