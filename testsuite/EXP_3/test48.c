#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x17 = -2331;
static int16_t x18 = 12977;
volatile int32_t t4 = 487940;
uint16_t x25 = UINT16_MAX;
int16_t x26 = -21;
static int32_t t5 = 5;
uint8_t x39 = 1U;
int64_t x53 = INT64_MIN;
uint32_t x57 = 363U;
static uint32_t x58 = 4756U;
static int8_t x68 = -11;
volatile uint8_t x71 = 8U;
static volatile int32_t t12 = -65834;
int32_t x73 = 67;
volatile int32_t t13 = 6;
int8_t x79 = 59;
volatile uint32_t x81 = 24081972U;
int16_t x99 = INT16_MIN;
volatile int32_t t19 = -1;
static uint32_t x101 = 163U;
int32_t x103 = -1;
int16_t x119 = INT16_MIN;
static volatile int16_t x122 = INT16_MIN;
volatile int8_t x129 = -1;
static uint64_t x132 = 1412336251246317874LLU;
static volatile int32_t t25 = -162909;
volatile int8_t x136 = 1;
volatile int16_t x143 = -1;
volatile int32_t t29 = 14;
uint16_t x156 = 50U;
uint8_t x159 = 9U;
int32_t t32 = 621;
uint8_t x168 = 94U;
volatile int32_t t33 = -1734744;
static int16_t x170 = INT16_MIN;
uint64_t x173 = UINT64_MAX;
volatile int32_t t36 = -1;
volatile int8_t x185 = 15;
static volatile int32_t t37 = 21;
int16_t x191 = -1;
int8_t x211 = INT8_MIN;
volatile int16_t x218 = INT16_MIN;
int32_t x222 = INT32_MIN;
uint8_t x223 = UINT8_MAX;
volatile int32_t t46 = 7157464;
uint32_t x225 = 7U;
static uint8_t x227 = 13U;
int16_t x234 = INT16_MIN;
static uint32_t x236 = 32500326U;
static int32_t x244 = -10459;
static int64_t x246 = INT64_MIN;
int8_t x250 = INT8_MIN;
int32_t x261 = -14371;
int32_t x266 = INT32_MAX;
uint32_t x267 = 166238U;
volatile int64_t x273 = -1LL;
int8_t x281 = -1;
volatile int32_t t58 = -5273;
int64_t x294 = INT64_MAX;
int32_t x299 = -1;
volatile int8_t x300 = -1;
uint8_t x301 = 35U;
int32_t t61 = 56487;
static uint64_t x313 = 3289LLU;
static int32_t x322 = 44;
uint32_t x323 = 31918U;
int8_t x335 = INT8_MIN;
int32_t x353 = INT32_MIN;
volatile int32_t x354 = -120721;
int16_t x360 = 6;
volatile uint32_t x362 = UINT32_MAX;
int32_t x364 = INT32_MIN;
int16_t x367 = INT16_MIN;
static int64_t x368 = -1LL;
volatile uint8_t x374 = 61U;
volatile uint32_t x385 = 735U;
volatile int32_t x386 = -515454831;
uint32_t x391 = 85U;
int32_t t76 = -53305781;
int64_t x393 = -1LL;
int64_t x409 = INT64_MIN;
int64_t x410 = INT64_MIN;
volatile int32_t t80 = -1;
int16_t x424 = 279;
int32_t t85 = 546;
int8_t x433 = INT8_MIN;
int8_t x434 = 1;
volatile int16_t x436 = INT16_MIN;
volatile int32_t t86 = 40850;
uint32_t x438 = 6897U;
int64_t x440 = -1LL;
volatile int32_t t87 = 52;
int32_t t89 = 243563513;
int16_t x451 = INT16_MIN;
static int32_t t90 = -63;
uint16_t x453 = UINT16_MAX;
static volatile int8_t x455 = -1;
int32_t x459 = INT32_MAX;
int32_t t92 = -22893;
int16_t x461 = 37;
volatile uint64_t x462 = 8419094896557242203LLU;
volatile int32_t t93 = 1998;
int8_t x467 = 0;
int32_t t96 = 42;
int8_t x482 = INT8_MIN;
uint16_t x484 = UINT16_MAX;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	uint64_t x2 = UINT64_MAX;
	static volatile int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = 791495;

	t0 = ((x1/x2)<(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	uint8_t x6 = 111U;
	static int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MAX;
	int32_t t1 = -5268220;

	t1 = ((x5/x6)<(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = UINT64_MAX;
	static uint32_t x14 = UINT32_MAX;
	uint64_t x15 = 499724LLU;
	int16_t x16 = 10;
	volatile int32_t t2 = -1004514455;

	t2 = ((x13/x14)<(x15+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x19 = 1U;
	int32_t x20 = -1;
	volatile int32_t t3 = 67973;

	t3 = ((x17/x18)<(x19+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x21 = 0U;
	volatile int64_t x22 = INT64_MIN;
	uint16_t x23 = 1U;
	uint8_t x24 = 6U;

	t4 = ((x21/x22)<(x23+x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x27 = -1;
	static int16_t x28 = INT16_MIN;

	t5 = ((x25/x26)<(x27+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = INT32_MAX;
	volatile int8_t x38 = -1;
	int32_t x40 = -1;
	int32_t t6 = -52136;

	t6 = ((x37/x38)<(x39+x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -1;
	int16_t x42 = INT16_MAX;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = 12354461U;
	int32_t t7 = 1;

	t7 = ((x41/x42)<(x43+x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MAX;
	int32_t x46 = INT32_MIN;
	uint32_t x47 = 3189398U;
	volatile int64_t x48 = -3651156556647523LL;
	volatile int32_t t8 = -20;

	t8 = ((x45/x46)<(x47+x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x54 = 5U;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = -26;
	volatile int32_t t9 = -828;

	t9 = ((x53/x54)<(x55+x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x59 = UINT32_MAX;
	int16_t x60 = -1;
	int32_t t10 = 891701;

	t10 = ((x57/x58)<(x59+x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = INT64_MAX;
	int64_t x66 = 99245165827898852LL;
	volatile int16_t x67 = -1;
	volatile int32_t t11 = -8631539;

	t11 = ((x65/x66)<(x67+x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MIN;
	volatile uint32_t x70 = UINT32_MAX;
	int8_t x72 = INT8_MAX;

	t12 = ((x69/x70)<(x71+x72));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x74 = INT8_MIN;
	int16_t x75 = 1;
	int16_t x76 = 38;

	t13 = ((x73/x74)<(x75+x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x77 = INT64_MIN;
	uint64_t x78 = 2126339659442602LLU;
	uint8_t x80 = 25U;
	volatile int32_t t14 = -8;

	t14 = ((x77/x78)<(x79+x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x82 = INT16_MAX;
	volatile int32_t x83 = INT32_MIN;
	uint8_t x84 = 80U;
	volatile int32_t t15 = -175432434;

	t15 = ((x81/x82)<(x83+x84));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = -27;
	static uint64_t x86 = 901433948996737356LLU;
	volatile uint32_t x87 = 310U;
	uint16_t x88 = 233U;
	int32_t t16 = 220;

	t16 = ((x85/x86)<(x87+x88));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MAX;
	volatile uint16_t x90 = 118U;
	int8_t x91 = INT8_MIN;
	int32_t x92 = -1;
	static int32_t t17 = 96;

	t17 = ((x89/x90)<(x91+x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = 7;
	static int32_t x94 = INT32_MAX;
	int8_t x95 = -16;
	uint32_t x96 = UINT32_MAX;
	static volatile int32_t t18 = -43;

	t18 = ((x93/x94)<(x95+x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x97 = 1435;
	uint16_t x98 = 5U;
	int16_t x100 = 2;

	t19 = ((x97/x98)<(x99+x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x102 = INT16_MIN;
	uint32_t x104 = 1U;
	int32_t t20 = 601;

	t20 = ((x101/x102)<(x103+x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = UINT8_MAX;
	uint32_t x106 = 5U;
	uint32_t x107 = 1397U;
	int32_t x108 = -1;
	int32_t t21 = 10840;

	t21 = ((x105/x106)<(x107+x108));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = -19;
	int32_t x114 = -17;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MAX;
	static volatile int32_t t22 = 7;

	t22 = ((x113/x114)<(x115+x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x117 = UINT64_MAX;
	uint64_t x118 = UINT64_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	int32_t t23 = -1091;

	t23 = ((x117/x118)<(x119+x120));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x121 = INT16_MAX;
	static int32_t x123 = INT32_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t24 = 37;

	t24 = ((x121/x122)<(x123+x124));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x130 = 9U;
	volatile uint64_t x131 = 104320692302990LLU;

	t25 = ((x129/x130)<(x131+x132));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MIN;
	volatile int16_t x134 = 281;
	int8_t x135 = INT8_MIN;
	int32_t t26 = 195143428;

	t26 = ((x133/x134)<(x135+x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = 1745U;
	int8_t x138 = INT8_MAX;
	static uint16_t x139 = 669U;
	uint32_t x140 = 105661U;
	static int32_t t27 = 2;

	t27 = ((x137/x138)<(x139+x140));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x141 = -1;
	volatile int32_t x142 = INT32_MIN;
	int8_t x144 = 13;
	volatile int32_t t28 = 1;

	t28 = ((x141/x142)<(x143+x144));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = 1U;
	int16_t x146 = -1;
	volatile uint32_t x147 = UINT32_MAX;
	int32_t x148 = INT32_MIN;

	t29 = ((x145/x146)<(x147+x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MAX;
	int16_t x151 = INT16_MAX;
	int16_t x152 = 1475;
	int32_t t30 = -21;

	t30 = ((x149/x150)<(x151+x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = INT64_MAX;
	static int16_t x154 = 5;
	uint8_t x155 = UINT8_MAX;
	int32_t t31 = -399;

	t31 = ((x153/x154)<(x155+x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = 713;
	uint32_t x158 = UINT32_MAX;
	uint64_t x160 = UINT64_MAX;

	t32 = ((x157/x158)<(x159+x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = -32;
	uint8_t x166 = 42U;
	int64_t x167 = -17046846616152LL;

	t33 = ((x165/x166)<(x167+x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x169 = 210665LL;
	static int8_t x171 = INT8_MAX;
	static int64_t x172 = INT64_MIN;
	int32_t t34 = -12600;

	t34 = ((x169/x170)<(x171+x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x174 = -1;
	uint64_t x175 = 20670316LLU;
	int8_t x176 = -5;
	volatile int32_t t35 = 15;

	t35 = ((x173/x174)<(x175+x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x181 = INT64_MIN;
	static int16_t x182 = 1;
	int64_t x183 = -1686655LL;
	uint16_t x184 = 10880U;

	t36 = ((x181/x182)<(x183+x184));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MIN;
	volatile uint64_t x188 = 8972339975714951435LLU;

	t37 = ((x185/x186)<(x187+x188));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x189 = UINT64_MAX;
	uint64_t x190 = UINT64_MAX;
	static int8_t x192 = -1;
	int32_t t38 = 81;

	t38 = ((x189/x190)<(x191+x192));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x193 = INT64_MIN;
	uint32_t x194 = 19U;
	int32_t x195 = -34696275;
	int64_t x196 = -1LL;
	int32_t t39 = -739327561;

	t39 = ((x193/x194)<(x195+x196));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MIN;
	int64_t x199 = 8501380948838LL;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t40 = -1;

	t40 = ((x197/x198)<(x199+x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x201 = UINT16_MAX;
	uint64_t x202 = 1937LLU;
	uint64_t x203 = UINT64_MAX;
	static uint32_t x204 = 649444U;
	volatile int32_t t41 = -786710657;

	t41 = ((x201/x202)<(x203+x204));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MIN;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MIN;
	int32_t x208 = 8223588;
	volatile int32_t t42 = 26;

	t42 = ((x205/x206)<(x207+x208));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = UINT32_MAX;
	uint32_t x210 = 982853U;
	int8_t x212 = INT8_MIN;
	int32_t t43 = 3236524;

	t43 = ((x209/x210)<(x211+x212));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = UINT32_MAX;
	int32_t x214 = INT32_MIN;
	uint16_t x215 = 1527U;
	uint16_t x216 = UINT16_MAX;
	int32_t t44 = -1;

	t44 = ((x213/x214)<(x215+x216));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x219 = 5U;
	int64_t x220 = -65628830968937865LL;
	int32_t t45 = -12;

	t45 = ((x217/x218)<(x219+x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x221 = 1581;
	static int32_t x224 = -3057;

	t46 = ((x221/x222)<(x223+x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x226 = INT64_MIN;
	int16_t x228 = 11391;
	int32_t t47 = -125104;

	t47 = ((x225/x226)<(x227+x228));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x229 = UINT8_MAX;
	static volatile int64_t x230 = INT64_MIN;
	uint32_t x231 = 196U;
	static uint8_t x232 = UINT8_MAX;
	volatile int32_t t48 = 297;

	t48 = ((x229/x230)<(x231+x232));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x233 = 115852353;
	volatile uint32_t x235 = 3U;
	static volatile int32_t t49 = 1307;

	t49 = ((x233/x234)<(x235+x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x241 = 1780658648U;
	int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MAX;
	int32_t t50 = -243752519;

	t50 = ((x241/x242)<(x243+x244));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = 1513;
	static volatile int8_t x247 = INT8_MIN;
	static uint32_t x248 = 14589062U;
	static int32_t t51 = -36808;

	t51 = ((x245/x246)<(x247+x248));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = -1LL;
	uint8_t x251 = 41U;
	int16_t x252 = INT16_MIN;
	volatile int32_t t52 = 426;

	t52 = ((x249/x250)<(x251+x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x262 = INT64_MIN;
	uint8_t x263 = UINT8_MAX;
	int32_t x264 = 86;
	volatile int32_t t53 = 472434;

	t53 = ((x261/x262)<(x263+x264));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x265 = UINT32_MAX;
	static uint8_t x268 = 2U;
	volatile int32_t t54 = 1;

	t54 = ((x265/x266)<(x267+x268));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x269 = -5;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = -1LL;
	int32_t x272 = INT32_MAX;
	volatile int32_t t55 = 13;

	t55 = ((x269/x270)<(x271+x272));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x274 = 800U;
	uint8_t x275 = UINT8_MAX;
	volatile int8_t x276 = -1;
	volatile int32_t t56 = 98774;

	t56 = ((x273/x274)<(x275+x276));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	uint8_t x280 = 4U;
	volatile int32_t t57 = -1804;

	t57 = ((x277/x278)<(x279+x280));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x282 = -1;
	static volatile int16_t x283 = INT16_MIN;
	uint32_t x284 = 3U;

	t58 = ((x281/x282)<(x283+x284));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x293 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MAX;
	int32_t t59 = 33;

	t59 = ((x293/x294)<(x295+x296));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x297 = INT8_MIN;
	static uint8_t x298 = UINT8_MAX;
	static int32_t t60 = -1365;

	t60 = ((x297/x298)<(x299+x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x302 = 6U;
	static volatile uint8_t x303 = 13U;
	int16_t x304 = INT16_MAX;

	t61 = ((x301/x302)<(x303+x304));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x305 = -1;
	static int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	volatile int16_t x308 = INT16_MAX;
	volatile int32_t t62 = 26413;

	t62 = ((x305/x306)<(x307+x308));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	int16_t x312 = -1;
	int32_t t63 = 52;

	t63 = ((x309/x310)<(x311+x312));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MIN;
	uint8_t x316 = 0U;
	int32_t t64 = -270747;

	t64 = ((x313/x314)<(x315+x316));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x321 = -1LL;
	volatile uint8_t x324 = 117U;
	int32_t t65 = 1;

	t65 = ((x321/x322)<(x323+x324));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x329 = INT8_MAX;
	uint16_t x330 = 17U;
	volatile int16_t x331 = INT16_MIN;
	int8_t x332 = -1;
	volatile int32_t t66 = -1;

	t66 = ((x329/x330)<(x331+x332));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x333 = 724617U;
	volatile int32_t x334 = -1;
	static int16_t x336 = -1;
	int32_t t67 = 27110384;

	t67 = ((x333/x334)<(x335+x336));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x345 = -10LL;
	static int64_t x346 = INT64_MIN;
	int8_t x347 = -1;
	int32_t x348 = -9953;
	int32_t t68 = -1047;

	t68 = ((x345/x346)<(x347+x348));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x355 = -1;
	static int8_t x356 = INT8_MIN;
	static int32_t t69 = -315;

	t69 = ((x353/x354)<(x355+x356));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x357 = 241305064602167LL;
	volatile int64_t x358 = INT64_MIN;
	int64_t x359 = 6277475059LL;
	int32_t t70 = 2;

	t70 = ((x357/x358)<(x359+x360));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x361 = INT16_MAX;
	static int64_t x363 = INT64_MAX;
	int32_t t71 = 140;

	t71 = ((x361/x362)<(x363+x364));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x365 = 1;
	int16_t x366 = INT16_MIN;
	int32_t t72 = 555686785;

	t72 = ((x365/x366)<(x367+x368));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x369 = -46439408;
	volatile int64_t x370 = -1278168246720LL;
	int32_t x371 = INT32_MAX;
	int8_t x372 = -1;
	static volatile int32_t t73 = 0;

	t73 = ((x369/x370)<(x371+x372));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x373 = INT8_MAX;
	uint16_t x375 = 34U;
	int32_t x376 = -540;
	int32_t t74 = 1;

	t74 = ((x373/x374)<(x375+x376));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x387 = INT32_MIN;
	static int32_t x388 = INT32_MAX;
	volatile int32_t t75 = 145342;

	t75 = ((x385/x386)<(x387+x388));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x389 = 8U;
	int16_t x390 = INT16_MAX;
	volatile uint8_t x392 = 11U;

	t76 = ((x389/x390)<(x391+x392));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	uint8_t x396 = 13U;
	int32_t t77 = 2;

	t77 = ((x393/x394)<(x395+x396));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x397 = -49;
	volatile int32_t x398 = INT32_MIN;
	uint64_t x399 = 3743380409LLU;
	int8_t x400 = -1;
	int32_t t78 = -129587;

	t78 = ((x397/x398)<(x399+x400));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x401 = 3LLU;
	int64_t x402 = 1022779471LL;
	int16_t x403 = INT16_MIN;
	uint8_t x404 = 0U;
	int32_t t79 = 216;

	t79 = ((x401/x402)<(x403+x404));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;

	t80 = ((x409/x410)<(x411+x412));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x413 = -697712295;
	int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MAX;
	volatile int32_t t81 = 7926679;

	t81 = ((x413/x414)<(x415+x416));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x417 = INT16_MIN;
	uint32_t x418 = 1199U;
	uint16_t x419 = 17633U;
	int32_t x420 = INT32_MIN;
	volatile int32_t t82 = 94;

	t82 = ((x417/x418)<(x419+x420));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x421 = -72126907;
	static volatile int8_t x422 = -1;
	uint32_t x423 = 2015971271U;
	volatile int32_t t83 = 199965;

	t83 = ((x421/x422)<(x423+x424));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x425 = INT32_MIN;
	int64_t x426 = 32134681948725LL;
	uint64_t x427 = 127267LLU;
	uint8_t x428 = 23U;
	static volatile int32_t t84 = -106;

	t84 = ((x425/x426)<(x427+x428));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x429 = INT8_MIN;
	static uint32_t x430 = 690810U;
	int64_t x431 = -1081172836921927LL;
	volatile int16_t x432 = -3;

	t85 = ((x429/x430)<(x431+x432));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x435 = INT64_MAX;

	t86 = ((x433/x434)<(x435+x436));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x437 = 4839591100343880886LLU;
	uint64_t x439 = UINT64_MAX;

	t87 = ((x437/x438)<(x439+x440));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x441 = UINT16_MAX;
	volatile uint64_t x442 = UINT64_MAX;
	uint16_t x443 = 1746U;
	int8_t x444 = -1;
	int32_t t88 = -186;

	t88 = ((x441/x442)<(x443+x444));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x445 = -1;
	int64_t x446 = INT64_MIN;
	int32_t x447 = -1;
	static uint32_t x448 = UINT32_MAX;

	t89 = ((x445/x446)<(x447+x448));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x449 = 6962U;
	int64_t x450 = 1509LL;
	static int16_t x452 = INT16_MIN;

	t90 = ((x449/x450)<(x451+x452));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x454 = INT32_MIN;
	static int32_t x456 = INT32_MAX;
	int32_t t91 = 11679172;

	t91 = ((x453/x454)<(x455+x456));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x457 = INT32_MIN;
	static int8_t x458 = 2;
	uint32_t x460 = 438795U;

	t92 = ((x457/x458)<(x459+x460));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x463 = INT8_MIN;
	static int16_t x464 = -1;

	t93 = ((x461/x462)<(x463+x464));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x465 = INT32_MIN;
	volatile uint64_t x466 = 23575977423253LLU;
	uint16_t x468 = 51U;
	volatile int32_t t94 = 28985;

	t94 = ((x465/x466)<(x467+x468));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x469 = INT16_MIN;
	int8_t x470 = -2;
	uint64_t x471 = 164520651411281LLU;
	static int64_t x472 = INT64_MIN;
	static int32_t t95 = 981141;

	t95 = ((x469/x470)<(x471+x472));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x473 = 31LLU;
	uint8_t x474 = 1U;
	int32_t x475 = 34191;
	int8_t x476 = -1;

	t96 = ((x473/x474)<(x475+x476));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x477 = 7U;
	int16_t x478 = 1;
	static int8_t x479 = -1;
	int32_t x480 = INT32_MAX;
	volatile int32_t t97 = 1624;

	t97 = ((x477/x478)<(x479+x480));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x481 = 1011U;
	static uint8_t x483 = 1U;
	volatile int32_t t98 = -3974594;

	t98 = ((x481/x482)<(x483+x484));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = 416957175791148735LL;
	int8_t x486 = INT8_MIN;
	uint64_t x487 = 494603643967920LLU;
	int16_t x488 = -1;
	volatile int32_t t99 = 6;

	t99 = ((x485/x486)<(x487+x488));

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

