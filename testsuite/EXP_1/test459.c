#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 2;
static int8_t x13 = -1;
volatile int64_t t4 = -2LL;
int8_t x34 = 27;
int64_t x36 = INT64_MAX;
int16_t x49 = 49;
static int32_t x50 = 1030749;
int16_t x52 = 8;
uint16_t x55 = 121U;
static int64_t x60 = INT64_MIN;
static int8_t x64 = -1;
int32_t t10 = -79;
uint16_t x70 = UINT16_MAX;
static int64_t x71 = 1302LL;
volatile uint32_t t11 = 1U;
volatile int32_t x75 = INT32_MAX;
static int16_t x84 = INT16_MIN;
int32_t t14 = 25938;
static int8_t x92 = INT8_MIN;
uint64_t x95 = 1LLU;
int32_t t18 = -3234;
int32_t t20 = 822335;
volatile int64_t x128 = -363899936523LL;
int16_t x134 = INT16_MAX;
int64_t x136 = INT64_MIN;
static uint64_t x137 = 1203821070487384679LLU;
static uint64_t t24 = 1812503660090416276LLU;
int8_t x145 = -1;
int64_t x148 = 3301LL;
volatile int64_t t25 = 652989328565LL;
uint32_t x150 = UINT32_MAX;
int8_t x152 = -1;
uint16_t x164 = 270U;
int64_t x168 = -133135540763787LL;
int64_t t29 = -1509034934339LL;
static uint64_t x172 = 6383828179162184LLU;
int8_t x173 = 5;
static uint64_t x178 = UINT64_MAX;
volatile uint16_t x180 = UINT16_MAX;
int8_t x186 = -3;
static volatile int64_t t34 = 395905572328377LL;
uint8_t x193 = 1U;
int64_t x212 = -1LL;
static int16_t x216 = -10543;
uint64_t x222 = UINT64_MAX;
uint16_t x229 = 8549U;
uint64_t x232 = 4599903420175519103LLU;
volatile int64_t x237 = -114777445LL;
int64_t t41 = 12548759409949002LL;
volatile uint64_t x241 = 4LLU;
volatile int64_t x242 = INT64_MAX;
int8_t x244 = 1;
uint64_t t43 = 6254LLU;
int32_t t44 = 45121;
uint64_t x264 = 151516642255956900LLU;
uint16_t x265 = 8844U;
int8_t x271 = INT8_MIN;
static uint16_t x276 = UINT16_MAX;
uint32_t x277 = 0U;
uint64_t x278 = 218825136484LLU;
volatile int16_t x283 = INT16_MIN;
static uint16_t x284 = 2U;
static volatile int32_t x290 = 420;
volatile uint32_t x292 = 22U;
int16_t x315 = INT16_MAX;
static volatile int32_t x319 = INT32_MIN;
int8_t x320 = -1;
volatile int32_t t56 = -12;
uint8_t x323 = 7U;
static int64_t x334 = -1LL;
volatile int32_t x337 = 0;
static uint32_t x338 = 1278U;
static uint32_t x340 = 2912U;
uint32_t t61 = 34341U;
int8_t x345 = INT8_MIN;
volatile int32_t t63 = -105411;
static int32_t x359 = -1;
volatile uint64_t t65 = 930387878LLU;
int32_t t66 = -71377;
int8_t x383 = INT8_MIN;
int16_t x386 = -1;
int32_t t70 = -109;
int32_t t71 = -115554666;
int8_t x397 = INT8_MIN;
static int64_t t72 = 355498071993731888LL;
static uint32_t t73 = 324781968U;
volatile int32_t t74 = 2617;
int16_t x415 = 1;
static int64_t t75 = -891427195LL;
volatile int64_t x423 = INT64_MAX;
volatile uint64_t x429 = UINT64_MAX;
int64_t x432 = -1788786588163721653LL;
int64_t t77 = -119231401791LL;
int16_t x433 = 0;
int64_t x434 = -31649695217459217LL;
static int16_t x436 = INT16_MIN;
uint32_t x446 = 1547U;
volatile int8_t x454 = 1;
int8_t x455 = INT8_MAX;
int16_t x457 = 4290;
volatile uint16_t x466 = 15154U;
int32_t x472 = INT32_MIN;
int8_t x478 = -1;
static volatile int8_t x491 = -1;
static int8_t x492 = -1;
int32_t t86 = 941;
uint8_t x498 = UINT8_MAX;
int32_t x499 = INT32_MAX;
volatile uint64_t x505 = 461887977LLU;
int8_t x510 = -1;
uint16_t x513 = 25U;
int16_t x515 = -1;
uint8_t x516 = UINT8_MAX;
int16_t x517 = INT16_MAX;
static int16_t x518 = INT16_MIN;
uint8_t x527 = UINT8_MAX;
int8_t x532 = -26;
volatile int32_t t95 = 707681;
int16_t x542 = 954;
int64_t x543 = -69141217340633LL;
static int16_t x566 = INT16_MIN;
int64_t x568 = INT64_MIN;


void f0(void) {
	uint32_t x5 = 6U;
	uint16_t x6 = UINT16_MAX;
	static int16_t x7 = INT16_MIN;
	uint8_t x8 = 2U;

	t0 = (((x5*x6)<=x7)/x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x14 = UINT8_MAX;
	static volatile int32_t x15 = 170022;
	uint64_t x16 = 58570267860044935LLU;
	volatile uint64_t t1 = 3737277900LLU;

	t1 = (((x13*x14)<=x15)/x16);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = UINT32_MAX;
	static uint16_t x18 = UINT16_MAX;
	int8_t x19 = -1;
	static volatile int32_t x20 = INT32_MIN;
	int32_t t2 = -683697220;

	t2 = (((x17*x18)<=x19)/x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 55666107812601110LLU;
	static int32_t x22 = INT32_MAX;
	int64_t x23 = -1LL;
	static volatile int16_t x24 = 564;
	volatile int32_t t3 = 457531174;

	t3 = (((x21*x22)<=x23)/x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	uint64_t x26 = UINT64_MAX;
	static uint8_t x27 = 0U;
	static int64_t x28 = INT64_MAX;

	t4 = (((x25*x26)<=x27)/x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x30 = 5705;
	static int32_t x31 = -1;
	uint8_t x32 = 3U;
	static volatile int32_t t5 = 439;

	t5 = (((x29*x30)<=x31)/x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = 15670457LL;
	static int32_t x35 = -83670033;
	volatile int64_t t6 = 14338040653384089LL;

	t6 = (((x33*x34)<=x35)/x36);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x51 = INT64_MIN;
	volatile int32_t t7 = -137212416;

	t7 = (((x49*x50)<=x51)/x52);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = 0;
	static uint16_t x54 = 2U;
	static volatile int32_t x56 = INT32_MIN;
	int32_t t8 = 1;

	t8 = (((x53*x54)<=x55)/x56);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x57 = 1;
	static uint16_t x58 = 3725U;
	int64_t x59 = -1LL;
	int64_t t9 = -10163LL;

	t9 = (((x57*x58)<=x59)/x60);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x61 = 0;
	uint64_t x62 = 12070412687325160LLU;
	int64_t x63 = INT64_MAX;

	t10 = (((x61*x62)<=x63)/x64);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x69 = -1;
	uint32_t x72 = UINT32_MAX;

	t11 = (((x69*x70)<=x71)/x72);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = 1U;
	int64_t x74 = INT64_MIN;
	static int64_t x76 = -1LL;
	volatile int64_t t12 = -357639293006587155LL;

	t12 = (((x73*x74)<=x75)/x76);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x77 = INT8_MAX;
	int16_t x78 = -1;
	int32_t x79 = INT32_MIN;
	int64_t x80 = 762773610992269147LL;
	int64_t t13 = 1943305473529794450LL;

	t13 = (((x77*x78)<=x79)/x80);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x81 = 2LLU;
	int16_t x82 = -7080;
	int8_t x83 = -8;

	t14 = (((x81*x82)<=x83)/x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x86 = 42;
	int32_t x87 = INT32_MIN;
	static int16_t x88 = INT16_MIN;
	int32_t t15 = -183;

	t15 = (((x85*x86)<=x87)/x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MAX;
	uint16_t x90 = 4U;
	static volatile int64_t x91 = INT64_MAX;
	int32_t t16 = -231;

	t16 = (((x89*x90)<=x91)/x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MAX;
	int16_t x94 = -9;
	uint64_t x96 = UINT64_MAX;
	static volatile uint64_t t17 = 178728518LLU;

	t17 = (((x93*x94)<=x95)/x96);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MAX;
	static uint16_t x107 = 121U;
	volatile int32_t x108 = INT32_MAX;

	t18 = (((x105*x106)<=x107)/x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x117 = INT64_MIN;
	uint64_t x118 = 2628427LLU;
	volatile uint8_t x119 = 8U;
	int32_t x120 = -1;
	int32_t t19 = 26313891;

	t19 = (((x117*x118)<=x119)/x120);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = INT8_MIN;
	uint8_t x122 = 14U;
	volatile int32_t x123 = -1;
	static int32_t x124 = INT32_MIN;

	t20 = (((x121*x122)<=x123)/x124);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x125 = 8798U;
	int16_t x126 = 7;
	static uint8_t x127 = 109U;
	int64_t t21 = 104275738761058LL;

	t21 = (((x125*x126)<=x127)/x128);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = 62;
	int16_t x130 = 9;
	static int8_t x131 = -2;
	volatile int8_t x132 = INT8_MAX;
	int32_t t22 = -65307828;

	t22 = (((x129*x130)<=x131)/x132);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x133 = 2U;
	volatile int16_t x135 = INT16_MIN;
	int64_t t23 = -61315596LL;

	t23 = (((x133*x134)<=x135)/x136);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x138 = 42U;
	int32_t x139 = -6;
	static uint64_t x140 = 522308LLU;

	t24 = (((x137*x138)<=x139)/x140);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x146 = UINT8_MAX;
	volatile int32_t x147 = INT32_MIN;

	t25 = (((x145*x146)<=x147)/x148);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = INT16_MIN;
	int64_t x151 = 62629779206LL;
	volatile int32_t t26 = -198;

	t26 = (((x149*x150)<=x151)/x152);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x157 = 222436564129235830LL;
	int16_t x158 = 0;
	int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MIN;
	static int32_t t27 = 0;

	t27 = (((x157*x158)<=x159)/x160);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x161 = 2419075U;
	static int8_t x162 = -17;
	uint32_t x163 = 43225U;
	volatile int32_t t28 = 103;

	t28 = (((x161*x162)<=x163)/x164);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = 146U;
	int8_t x167 = INT8_MIN;

	t29 = (((x165*x166)<=x167)/x168);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x169 = -14;
	uint64_t x170 = 201512006012977270LLU;
	uint16_t x171 = UINT16_MAX;
	uint64_t t30 = 25931893736467LLU;

	t30 = (((x169*x170)<=x171)/x172);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x174 = 55U;
	int32_t x175 = -29594753;
	static uint64_t x176 = 38LLU;
	static uint64_t t31 = 41916169481348LLU;

	t31 = (((x173*x174)<=x175)/x176);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x177 = UINT16_MAX;
	volatile int64_t x179 = INT64_MIN;
	int32_t t32 = -26;

	t32 = (((x177*x178)<=x179)/x180);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x185 = UINT16_MAX;
	uint64_t x187 = 109693978203876510LLU;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t33 = 1454;

	t33 = (((x185*x186)<=x187)/x188);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x189 = UINT32_MAX;
	uint16_t x190 = UINT16_MAX;
	uint64_t x191 = 465917819929004LLU;
	int64_t x192 = INT64_MAX;

	t34 = (((x189*x190)<=x191)/x192);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x194 = INT32_MAX;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = 1117042005859103626LLU;
	volatile uint64_t t35 = 340526LLU;

	t35 = (((x193*x194)<=x195)/x196);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x197 = UINT64_MAX;
	volatile int8_t x198 = INT8_MAX;
	int64_t x199 = 4153928785LL;
	int32_t x200 = -228;
	volatile int32_t t36 = 22;

	t36 = (((x197*x198)<=x199)/x200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = -2;
	int64_t x210 = 1551402LL;
	int8_t x211 = INT8_MIN;
	int64_t t37 = 11579LL;

	t37 = (((x209*x210)<=x211)/x212);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = -1;
	volatile uint16_t x214 = 17U;
	volatile uint8_t x215 = UINT8_MAX;
	static int32_t t38 = 323;

	t38 = (((x213*x214)<=x215)/x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x221 = -1;
	int8_t x223 = 0;
	static int8_t x224 = -1;
	int32_t t39 = -13413015;

	t39 = (((x221*x222)<=x223)/x224);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x230 = 26055;
	int8_t x231 = INT8_MIN;
	volatile uint64_t t40 = 2LLU;

	t40 = (((x229*x230)<=x231)/x232);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x238 = -1;
	static int8_t x239 = INT8_MAX;
	static int64_t x240 = -1LL;

	t41 = (((x237*x238)<=x239)/x240);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x243 = 141LLU;
	int32_t t42 = 4;

	t42 = (((x241*x242)<=x243)/x244);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x249 = -38LL;
	static int32_t x250 = INT32_MIN;
	static volatile uint16_t x251 = UINT16_MAX;
	uint64_t x252 = 24558989113LLU;

	t43 = (((x249*x250)<=x251)/x252);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x257 = 10623119LL;
	volatile int8_t x258 = -10;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MAX;

	t44 = (((x257*x258)<=x259)/x260);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x261 = INT8_MIN;
	static uint32_t x262 = 5668449U;
	int32_t x263 = -5329;
	volatile uint64_t t45 = 8304225660906LLU;

	t45 = (((x261*x262)<=x263)/x264);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x266 = INT8_MIN;
	volatile int32_t x267 = 501187814;
	uint16_t x268 = 891U;
	volatile int32_t t46 = 634;

	t46 = (((x265*x266)<=x267)/x268);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x269 = 12563681LL;
	static volatile int16_t x270 = INT16_MIN;
	static volatile int64_t x272 = INT64_MIN;
	volatile int64_t t47 = -6157500LL;

	t47 = (((x269*x270)<=x271)/x272);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x273 = 1U;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	int32_t t48 = 133885;

	t48 = (((x273*x274)<=x275)/x276);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x279 = INT8_MIN;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t49 = -269;

	t49 = (((x277*x278)<=x279)/x280);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x281 = 12478678551LL;
	static int32_t x282 = -1;
	volatile int32_t t50 = 113;

	t50 = (((x281*x282)<=x283)/x284);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x289 = 540093266U;
	uint64_t x291 = 24890808219544703LLU;
	volatile uint32_t t51 = 3105U;

	t51 = (((x289*x290)<=x291)/x292);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x293 = -531;
	int8_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	static volatile int16_t x296 = -1;
	volatile int32_t t52 = -8149380;

	t52 = (((x293*x294)<=x295)/x296);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x305 = INT64_MAX;
	int64_t x306 = -1LL;
	int32_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t53 = -4903861;

	t53 = (((x305*x306)<=x307)/x308);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = UINT16_MAX;
	int8_t x311 = 2;
	static volatile int64_t x312 = INT64_MIN;
	int64_t t54 = 90571386243LL;

	t54 = (((x309*x310)<=x311)/x312);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x313 = -1LL;
	volatile int64_t x314 = -1LL;
	static int16_t x316 = -184;
	int32_t t55 = 50764;

	t55 = (((x313*x314)<=x315)/x316);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MIN;

	t56 = (((x317*x318)<=x319)/x320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x321 = UINT64_MAX;
	int8_t x322 = -1;
	volatile int64_t x324 = -1LL;
	volatile int64_t t57 = -2357LL;

	t57 = (((x321*x322)<=x323)/x324);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x329 = 43810378240105317LLU;
	int64_t x330 = -1LL;
	volatile uint16_t x331 = UINT16_MAX;
	static int16_t x332 = INT16_MAX;
	volatile int32_t t58 = -160390879;

	t58 = (((x329*x330)<=x331)/x332);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x333 = INT32_MIN;
	uint32_t x335 = 107811U;
	static uint8_t x336 = 3U;
	volatile int32_t t59 = 8;

	t59 = (((x333*x334)<=x335)/x336);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x339 = -919;
	uint32_t t60 = 1135U;

	t60 = (((x337*x338)<=x339)/x340);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x341 = 791;
	static int8_t x342 = INT8_MIN;
	static volatile uint64_t x343 = UINT64_MAX;
	volatile uint32_t x344 = 127027708U;

	t61 = (((x341*x342)<=x343)/x344);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x346 = 1;
	volatile uint32_t x347 = 4053383U;
	int16_t x348 = -1;
	volatile int32_t t62 = -1313167;

	t62 = (((x345*x346)<=x347)/x348);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x353 = -2990;
	uint64_t x354 = 20LLU;
	uint32_t x355 = 15736U;
	int8_t x356 = INT8_MAX;

	t63 = (((x353*x354)<=x355)/x356);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x357 = 42U;
	int16_t x358 = INT16_MIN;
	uint64_t x360 = 89935330114216LLU;
	static volatile uint64_t t64 = 46LLU;

	t64 = (((x357*x358)<=x359)/x360);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x365 = 177U;
	static int64_t x366 = -7740286313LL;
	uint32_t x367 = UINT32_MAX;
	uint64_t x368 = 28736283476765LLU;

	t65 = (((x365*x366)<=x367)/x368);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x369 = 7436U;
	uint16_t x370 = 2U;
	int32_t x371 = INT32_MAX;
	static volatile int16_t x372 = -5;

	t66 = (((x369*x370)<=x371)/x372);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x373 = INT16_MAX;
	uint8_t x374 = 10U;
	uint32_t x375 = 0U;
	volatile int16_t x376 = -1;
	static volatile int32_t t67 = 238029;

	t67 = (((x373*x374)<=x375)/x376);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x381 = INT8_MIN;
	static uint64_t x382 = 20274LLU;
	int8_t x384 = -1;
	static volatile int32_t t68 = -13336261;

	t68 = (((x381*x382)<=x383)/x384);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x385 = 749997410550LL;
	int32_t x387 = INT32_MIN;
	int64_t x388 = -1LL;
	int64_t t69 = -4899LL;

	t69 = (((x385*x386)<=x387)/x388);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x389 = -1;
	uint16_t x390 = UINT16_MAX;
	static volatile int32_t x391 = INT32_MIN;
	int32_t x392 = -20;

	t70 = (((x389*x390)<=x391)/x392);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x393 = 15U;
	uint32_t x394 = 1943783777U;
	static int64_t x395 = INT64_MAX;
	int16_t x396 = 620;

	t71 = (((x393*x394)<=x395)/x396);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x398 = 610U;
	static volatile int32_t x399 = INT32_MIN;
	int64_t x400 = INT64_MAX;

	t72 = (((x397*x398)<=x399)/x400);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x401 = UINT8_MAX;
	static volatile int8_t x402 = INT8_MAX;
	int32_t x403 = INT32_MIN;
	volatile uint32_t x404 = UINT32_MAX;

	t73 = (((x401*x402)<=x403)/x404);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x409 = 69069703451LL;
	uint16_t x410 = 14U;
	uint16_t x411 = 4U;
	int32_t x412 = INT32_MIN;

	t74 = (((x409*x410)<=x411)/x412);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x413 = -1;
	uint64_t x414 = 1053243715351983LLU;
	int64_t x416 = INT64_MIN;

	t75 = (((x413*x414)<=x415)/x416);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x421 = INT8_MIN;
	static uint64_t x422 = 2989653274329LLU;
	int8_t x424 = -9;
	int32_t t76 = -1065802042;

	t76 = (((x421*x422)<=x423)/x424);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x430 = INT8_MIN;
	volatile int32_t x431 = INT32_MIN;

	t77 = (((x429*x430)<=x431)/x432);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x435 = INT64_MAX;
	static volatile int32_t t78 = -5400726;

	t78 = (((x433*x434)<=x435)/x436);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x437 = -120;
	static uint16_t x438 = 2U;
	int8_t x439 = 4;
	int64_t x440 = INT64_MIN;
	static volatile int64_t t79 = 14033888LL;

	t79 = (((x437*x438)<=x439)/x440);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x445 = INT16_MIN;
	static volatile int8_t x447 = 17;
	static int16_t x448 = -1;
	volatile int32_t t80 = 2166;

	t80 = (((x445*x446)<=x447)/x448);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x453 = 4331971907212812LL;
	int8_t x456 = -5;
	int32_t t81 = -97591876;

	t81 = (((x453*x454)<=x455)/x456);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x458 = -1;
	uint64_t x459 = 785260760338989903LLU;
	static int16_t x460 = INT16_MIN;
	int32_t t82 = 569;

	t82 = (((x457*x458)<=x459)/x460);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x465 = INT16_MIN;
	uint64_t x467 = 8418706283LLU;
	static int64_t x468 = -47436861613287059LL;
	int64_t t83 = -800664172294008LL;

	t83 = (((x465*x466)<=x467)/x468);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x469 = 0;
	int32_t x470 = -1;
	static uint16_t x471 = 154U;
	static int32_t t84 = -15582993;

	t84 = (((x469*x470)<=x471)/x472);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x477 = INT16_MAX;
	int8_t x479 = -3;
	volatile uint32_t x480 = 8114U;
	volatile uint32_t t85 = 1271967U;

	t85 = (((x477*x478)<=x479)/x480);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x489 = -1;
	uint32_t x490 = UINT32_MAX;

	t86 = (((x489*x490)<=x491)/x492);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x493 = -1355973515LL;
	static uint64_t x494 = 196151LLU;
	int32_t x495 = -40667839;
	static int8_t x496 = INT8_MIN;
	volatile int32_t t87 = -1657094;

	t87 = (((x493*x494)<=x495)/x496);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x497 = -13;
	volatile int16_t x500 = 141;
	int32_t t88 = -14;

	t88 = (((x497*x498)<=x499)/x500);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x506 = 206U;
	int8_t x507 = -41;
	uint8_t x508 = 29U;
	int32_t t89 = -3784444;

	t89 = (((x505*x506)<=x507)/x508);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x509 = 478U;
	int64_t x511 = INT64_MAX;
	uint32_t x512 = 119U;
	static volatile uint32_t t90 = 173494105U;

	t90 = (((x509*x510)<=x511)/x512);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x514 = -1;
	static int32_t t91 = 151;

	t91 = (((x513*x514)<=x515)/x516);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x519 = UINT16_MAX;
	static int32_t x520 = INT32_MIN;
	int32_t t92 = -39237832;

	t92 = (((x517*x518)<=x519)/x520);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x525 = -49;
	int8_t x526 = -1;
	int8_t x528 = INT8_MIN;
	int32_t t93 = 5503;

	t93 = (((x525*x526)<=x527)/x528);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x529 = 13;
	int8_t x530 = INT8_MIN;
	int64_t x531 = INT64_MAX;
	static int32_t t94 = -155002;

	t94 = (((x529*x530)<=x531)/x532);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x533 = -6;
	int64_t x534 = -29LL;
	int32_t x535 = INT32_MAX;
	static int8_t x536 = -1;

	t95 = (((x533*x534)<=x535)/x536);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x537 = -62706276LL;
	static int32_t x538 = INT32_MIN;
	int64_t x539 = -957375LL;
	uint8_t x540 = 12U;
	volatile int32_t t96 = -799927;

	t96 = (((x537*x538)<=x539)/x540);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x541 = 120U;
	int8_t x544 = -1;
	static int32_t t97 = 127;

	t97 = (((x541*x542)<=x543)/x544);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x561 = UINT16_MAX;
	static int8_t x562 = -28;
	static int64_t x563 = -1LL;
	static uint64_t x564 = 382980816046290LLU;
	volatile uint64_t t98 = 370902342LLU;

	t98 = (((x561*x562)<=x563)/x564);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x565 = -7LL;
	uint64_t x567 = 986899234LLU;
	int64_t t99 = -10LL;

	t99 = (((x565*x566)<=x567)/x568);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

