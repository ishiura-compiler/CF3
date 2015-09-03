#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x5 = -1;
int64_t t2 = 44LL;
static int32_t x22 = INT32_MAX;
volatile uint32_t x23 = 33U;
int16_t x42 = INT16_MIN;
int64_t x43 = INT64_MAX;
static int16_t x52 = INT16_MIN;
static int32_t x71 = 42741661;
uint8_t x72 = 6U;
volatile uint32_t x111 = 14825486U;
int64_t t13 = 2LL;
volatile int32_t t14 = 15;
int8_t x117 = 11;
static int8_t x129 = -1;
volatile int32_t t18 = 0;
int64_t x136 = -1LL;
uint64_t t19 = 410134688713216LLU;
uint16_t x139 = UINT16_MAX;
int64_t t20 = 378079804LL;
uint64_t x147 = 257337193201174515LLU;
static volatile uint64_t t21 = 8603LLU;
int64_t x163 = INT64_MAX;
volatile int32_t x167 = 20835373;
static uint64_t x169 = UINT64_MAX;
int16_t x174 = -10;
static int32_t x175 = INT32_MAX;
int8_t x186 = INT8_MIN;
int16_t x189 = INT16_MIN;
uint32_t x192 = UINT32_MAX;
uint8_t x194 = 93U;
uint64_t x209 = 1024481926683642LLU;
int8_t x216 = INT8_MAX;
static int16_t x218 = 3816;
volatile uint64_t t35 = 6LLU;
int16_t x224 = INT16_MIN;
int16_t x247 = INT16_MIN;
int8_t x249 = INT8_MAX;
int64_t x252 = INT64_MIN;
int64_t x265 = -1LL;
volatile int32_t x276 = INT32_MAX;
static int64_t x282 = INT64_MIN;
int64_t t43 = 50LL;
int8_t x286 = INT8_MIN;
int64_t x287 = -630922204505708600LL;
static volatile uint8_t x294 = 7U;
uint8_t x296 = UINT8_MAX;
static volatile uint32_t x304 = 1264121223U;
int16_t x309 = INT16_MIN;
int8_t x312 = INT8_MIN;
uint32_t x315 = 1U;
uint8_t x316 = UINT8_MAX;
uint64_t t49 = 105930193LLU;
static int8_t x321 = INT8_MAX;
int32_t x338 = -4526;
volatile int32_t t53 = -26971760;
static uint16_t x344 = UINT16_MAX;
static volatile uint16_t x362 = 8398U;
static uint8_t x364 = 7U;
int32_t t56 = 806;
int16_t x378 = 0;
uint32_t x379 = 114290U;
static int32_t x385 = INT32_MIN;
volatile uint16_t x412 = 1U;
int64_t t61 = -3LL;
static volatile uint64_t x421 = 2568371LLU;
volatile uint32_t x423 = 248767579U;
uint32_t t63 = 313612U;
volatile int32_t t64 = -1;
static volatile int16_t x449 = 0;
volatile int16_t x451 = 0;
volatile int16_t x454 = 56;
volatile int16_t x457 = INT16_MIN;
int64_t x463 = -1LL;
uint64_t x465 = 2725LLU;
static int32_t x466 = -2003241;
int8_t x470 = -1;
int64_t x480 = 509940618108235LL;
int16_t x482 = 29;
uint32_t t72 = 42404U;
uint16_t x496 = 114U;
volatile uint64_t t74 = 3164165LLU;
int16_t x498 = INT16_MIN;
static int8_t x510 = 7;
int16_t x521 = INT16_MAX;
uint16_t x524 = 52U;
static int8_t x529 = -1;
static uint16_t x545 = 15U;
uint8_t x546 = UINT8_MAX;
volatile int32_t t81 = 1;
uint32_t t82 = 1U;
volatile uint8_t x566 = UINT8_MAX;
volatile int8_t x568 = INT8_MIN;
uint32_t x575 = UINT32_MAX;
uint16_t x576 = 1U;
uint32_t t85 = 14624263U;
static int8_t x580 = INT8_MIN;
static uint32_t x597 = 1874436010U;
uint32_t t90 = 842174782U;
volatile uint64_t x610 = UINT64_MAX;
volatile int32_t x611 = INT32_MIN;
static int16_t x614 = -208;
int16_t x623 = 13208;
int8_t x640 = 3;
uint64_t x651 = 29108121794LLU;
int8_t x655 = -1;
static volatile uint8_t x660 = 3U;


void f0(void) {
	static uint64_t x6 = 1286734LLU;
	int64_t x7 = 455401799LL;
	uint32_t x8 = UINT32_MAX;
	static volatile uint64_t t0 = 1LLU;

	t0 = (((x5*x6)-x7)+x8);

	if (t0 != 3838278762LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	static uint32_t x10 = UINT32_MAX;
	int64_t x11 = -1LL;
	volatile uint16_t x12 = UINT16_MAX;
	static int64_t t1 = -515933234967828349LL;

	t1 = (((x9*x10)-x11)+x12);

	if (t1 != 2147549184LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	uint32_t x14 = UINT32_MAX;
	uint32_t x15 = 0U;
	uint8_t x16 = UINT8_MAX;

	t2 = (((x13*x14)-x15)+x16);

	if (t2 != -4294967040LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = UINT32_MAX;
	static int16_t x24 = 0;
	static volatile uint32_t t3 = 1030445864U;

	t3 = (((x21*x22)-x23)+x24);

	if (t3 != 2147483616U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x41 = 115084059U;
	uint64_t x44 = 2743365177685383LLU;
	volatile uint64_t t4 = 136LLU;

	t4 = (((x41*x42)-x43)+x44);

	if (t4 != 9226115406234269064LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x45 = INT8_MAX;
	uint8_t x46 = 3U;
	int16_t x47 = INT16_MIN;
	static int16_t x48 = -1;
	int32_t t5 = 1037727891;

	t5 = (((x45*x46)-x47)+x48);

	if (t5 != 33148) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x49 = -1;
	int8_t x50 = INT8_MIN;
	static uint64_t x51 = 1671430113016280LLU;
	static uint64_t t6 = 1044565156120035LLU;

	t6 = (((x49*x50)-x51)+x52);

	if (t6 != 18445072643596502696LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x57 = UINT32_MAX;
	int32_t x58 = -44;
	int8_t x59 = -1;
	int64_t x60 = -1LL;
	volatile int64_t t7 = -644001LL;

	t7 = (((x57*x58)-x59)+x60);

	if (t7 != 44LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x69 = 19344515LLU;
	int32_t x70 = INT32_MAX;
	volatile uint64_t t8 = 2LLU;

	t8 = (((x69*x70)-x71)+x72);

	if (t8 != 41542029578904550LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x85 = UINT32_MAX;
	uint16_t x86 = 83U;
	static int64_t x87 = -1LL;
	int16_t x88 = 23;
	int64_t t9 = 125734947987964LL;

	t9 = (((x85*x86)-x87)+x88);

	if (t9 != 4294967237LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x89 = 1255399LL;
	static volatile int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MAX;
	int32_t x92 = -467609219;
	volatile int64_t t10 = -1231091633463511LL;

	t10 = (((x89*x90)-x91)+x92);

	if (t10 != -628300418LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x97 = UINT8_MAX;
	static int16_t x98 = -1;
	static uint8_t x99 = UINT8_MAX;
	int32_t x100 = 150524988;
	int32_t t11 = -8322558;

	t11 = (((x97*x98)-x99)+x100);

	if (t11 != 150524478) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x101 = INT16_MIN;
	volatile int8_t x102 = 13;
	uint16_t x103 = 143U;
	static int64_t x104 = INT64_MAX;
	volatile int64_t t12 = 0LL;

	t12 = (((x101*x102)-x103)+x104);

	if (t12 != 9223372036854349680LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x109 = INT32_MAX;
	int64_t x110 = -1LL;
	uint32_t x112 = 33406978U;

	t13 = (((x109*x110)-x111)+x112);

	if (t13 != -2128902155LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x113 = -12527600;
	int8_t x114 = -1;
	uint16_t x115 = 499U;
	volatile int8_t x116 = INT8_MAX;

	t14 = (((x113*x114)-x115)+x116);

	if (t14 != 12527228) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x118 = 335;
	int32_t x119 = 508608;
	uint64_t x120 = 1576348509025698822LLU;
	volatile uint64_t t15 = 26557858362267063LLU;

	t15 = (((x117*x118)-x119)+x120);

	if (t15 != 1576348509025193899LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x121 = 0;
	volatile int64_t x122 = INT64_MAX;
	static int64_t x123 = -17995419544LL;
	static int64_t x124 = INT64_MIN;
	static int64_t t16 = 1562969LL;

	t16 = (((x121*x122)-x123)+x124);

	if (t16 != -9223372018859356264LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x125 = UINT32_MAX;
	int64_t x126 = -1LL;
	volatile int8_t x127 = -1;
	int8_t x128 = INT8_MAX;
	volatile int64_t t17 = -5341750LL;

	t17 = (((x125*x126)-x127)+x128);

	if (t17 != -4294967167LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x130 = 1;
	int8_t x131 = 6;
	static int16_t x132 = INT16_MIN;

	t18 = (((x129*x130)-x131)+x132);

	if (t18 != -32775) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x133 = INT64_MIN;
	uint64_t x134 = 1LLU;
	static int32_t x135 = -124716;

	t19 = (((x133*x134)-x135)+x136);

	if (t19 != 9223372036854900523LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x137 = UINT16_MAX;
	int64_t x138 = -16628048187472LL;
	uint8_t x140 = 3U;

	t20 = (((x137*x138)-x139)+x140);

	if (t20 != -1089719137966043052LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int16_t x146 = INT16_MAX;
	int8_t x148 = INT8_MAX;

	t21 = (((x145*x146)-x147)+x148);

	if (t21 != 18189406884803311757LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x157 = -7;
	int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	static uint64_t x160 = 65293977592076800LLU;
	uint64_t t22 = 722509430133060453LLU;

	t22 = (((x157*x158)-x159)+x160);

	if (t22 != 65293977592108679LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x161 = INT16_MIN;
	static volatile int32_t x162 = -400;
	volatile int16_t x164 = INT16_MIN;
	volatile int64_t t23 = 1037267LL;

	t23 = (((x161*x162)-x163)+x164);

	if (t23 != -9223372036841701375LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x165 = -1LL;
	uint16_t x166 = 61U;
	int32_t x168 = INT32_MAX;
	int64_t t24 = -14358425271LL;

	t24 = (((x165*x166)-x167)+x168);

	if (t24 != 2126648213LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x170 = INT8_MIN;
	volatile int32_t x171 = INT32_MIN;
	int32_t x172 = 47318052;
	static volatile uint64_t t25 = 604470938808LLU;

	t25 = (((x169*x170)-x171)+x172);

	if (t25 != 2194801828LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x173 = -415939421550290LL;
	static int16_t x176 = -1462;
	static int64_t t26 = -4234106751556505LL;

	t26 = (((x173*x174)-x175)+x176);

	if (t26 != 4159392068017791LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x177 = 3U;
	int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	volatile int32_t t27 = -962967210;

	t27 = (((x177*x178)-x179)+x180);

	if (t27 != 2147483391) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x185 = 48;
	static uint32_t x187 = 11789U;
	int64_t x188 = INT64_MIN;
	volatile int64_t t28 = 27755471734742600LL;

	t28 = (((x185*x186)-x187)+x188);

	if (t28 != -9223372032559826445LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x190 = 53;
	static uint64_t x191 = UINT64_MAX;
	volatile uint64_t t29 = 29756773LLU;

	t29 = (((x189*x190)-x191)+x192);

	if (t29 != 4293230592LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x193 = -2269;
	int8_t x195 = -8;
	int16_t x196 = INT16_MIN;
	static int32_t t30 = 3;

	t30 = (((x193*x194)-x195)+x196);

	if (t30 != -243777) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x197 = 0U;
	static uint8_t x198 = 3U;
	volatile uint32_t x199 = UINT32_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	uint32_t t31 = 6403U;

	t31 = (((x197*x198)-x199)+x200);

	if (t31 != 65536U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	int64_t x207 = -1LL;
	uint8_t x208 = 2U;
	volatile int64_t t32 = -1033816LL;

	t32 = (((x205*x206)-x207)+x208);

	if (t32 != 131LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x210 = -1;
	static uint8_t x211 = 42U;
	int16_t x212 = -1;
	volatile uint64_t t33 = 448974163813814LLU;

	t33 = (((x209*x210)-x211)+x212);

	if (t33 != 18445719591782867931LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int64_t x214 = INT64_MIN;
	uint8_t x215 = 4U;
	uint64_t t34 = 558119629157782547LLU;

	t34 = (((x213*x214)-x215)+x216);

	if (t34 != 9223372036854775931LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x217 = 1971640235459933LLU;
	int8_t x219 = -59;
	static int8_t x220 = INT8_MIN;

	t35 = (((x217*x218)-x219)+x220);

	if (t35 != 7523779138515104259LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x221 = -4872966LL;
	int32_t x222 = -183880732;
	static int16_t x223 = 13874;
	volatile int64_t t36 = -126908440968419LL;

	t36 = (((x221*x222)-x223)+x224);

	if (t36 != 896044555044470LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x245 = 316428010;
	uint8_t x246 = 3U;
	int8_t x248 = 1;
	static volatile int32_t t37 = 356755;

	t37 = (((x245*x246)-x247)+x248);

	if (t37 != 949316799) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x250 = UINT32_MAX;
	static uint32_t x251 = UINT32_MAX;
	static int64_t t38 = 3821442521371014409LL;

	t38 = (((x249*x250)-x251)+x252);

	if (t38 != -9223372032559808638LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x253 = -1;
	static volatile uint64_t x254 = 3816237765161928442LLU;
	int16_t x255 = INT16_MIN;
	static int8_t x256 = INT8_MAX;
	volatile uint64_t t39 = 2569LLU;

	t39 = (((x253*x254)-x255)+x256);

	if (t39 != 14630506308547656069LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x257 = UINT32_MAX;
	static volatile uint32_t x258 = 5400U;
	uint64_t x259 = 4LLU;
	volatile int16_t x260 = 8;
	volatile uint64_t t40 = 318003495033532647LLU;

	t40 = (((x257*x258)-x259)+x260);

	if (t40 != 4294961900LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x266 = 554U;
	int16_t x267 = -18;
	volatile int16_t x268 = INT16_MIN;
	static int64_t t41 = -17431134947506840LL;

	t41 = (((x265*x266)-x267)+x268);

	if (t41 != -33304LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x273 = INT32_MIN;
	static volatile int64_t x274 = -379587LL;
	volatile uint32_t x275 = 27547U;
	volatile int64_t t42 = -3LL;

	t42 = (((x273*x274)-x275)+x276);

	if (t42 != 815159022949476LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x281 = 0;
	volatile int8_t x283 = INT8_MAX;
	volatile uint8_t x284 = UINT8_MAX;

	t43 = (((x281*x282)-x283)+x284);

	if (t43 != 128LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x285 = UINT32_MAX;
	int64_t x288 = INT64_MIN;
	int64_t t44 = 5209878796714LL;

	t44 = (((x285*x286)-x287)+x288);

	if (t44 != -8592449832349067080LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x293 = 0U;
	int16_t x295 = -239;
	static volatile int32_t t45 = 2361285;

	t45 = (((x293*x294)-x295)+x296);

	if (t45 != 494) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x301 = INT16_MIN;
	volatile uint64_t x302 = 15077007754123219LLU;
	int64_t x303 = INT64_MAX;
	static uint64_t t46 = 24465LLU;

	t46 = (((x301*x302)-x303)+x304);

	if (t46 != 13242071941167150472LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x310 = 8U;
	int16_t x311 = -1;
	volatile int32_t t47 = 7840;

	t47 = (((x309*x310)-x311)+x312);

	if (t47 != -262271) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x313 = INT8_MAX;
	int32_t x314 = -1;
	uint32_t t48 = 10928453U;

	t48 = (((x313*x314)-x315)+x316);

	if (t48 != 127U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x317 = 1U;
	uint8_t x318 = 8U;
	volatile uint64_t x319 = 268600123471794210LLU;
	int16_t x320 = 175;

	t49 = (((x317*x318)-x319)+x320);

	if (t49 != 18178143950237757589LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x322 = 4638306125LLU;
	int32_t x323 = -1;
	uint16_t x324 = 109U;
	static uint64_t t50 = 32030898576227LLU;

	t50 = (((x321*x322)-x323)+x324);

	if (t50 != 589064877985LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x329 = UINT8_MAX;
	int32_t x330 = 7714597;
	int64_t x331 = -31662292207LL;
	uint8_t x332 = 1U;
	volatile int64_t t51 = 6LL;

	t51 = (((x329*x330)-x331)+x332);

	if (t51 != 33629514443LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x333 = 0U;
	int8_t x334 = -15;
	int32_t x335 = INT32_MAX;
	uint8_t x336 = 1U;
	static int32_t t52 = -1084;

	t52 = (((x333*x334)-x335)+x336);

	if (t52 != -2147483646) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x337 = 18U;
	int16_t x339 = 3;
	uint16_t x340 = 4U;

	t53 = (((x337*x338)-x339)+x340);

	if (t53 != -81467) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x341 = -2;
	int16_t x342 = -4;
	static uint8_t x343 = 0U;
	static int32_t t54 = -6824;

	t54 = (((x341*x342)-x343)+x344);

	if (t54 != 65543) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x349 = 16U;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 24030LLU;
	uint64_t x352 = 6939LLU;
	volatile uint64_t t55 = 124LLU;

	t55 = (((x349*x350)-x351)+x352);

	if (t55 != 18446744073709532477LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x361 = -15;
	volatile int16_t x363 = INT16_MIN;

	t56 = (((x361*x362)-x363)+x364);

	if (t56 != -93195) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x369 = -1LL;
	uint64_t x370 = UINT64_MAX;
	static volatile int64_t x371 = INT64_MIN;
	uint32_t x372 = 68877U;
	volatile uint64_t t57 = 38817LLU;

	t57 = (((x369*x370)-x371)+x372);

	if (t57 != 9223372036854844686LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x377 = -4;
	uint8_t x380 = 8U;
	uint32_t t58 = 39514686U;

	t58 = (((x377*x378)-x379)+x380);

	if (t58 != 4294853014U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x386 = UINT64_MAX;
	int8_t x387 = INT8_MIN;
	uint16_t x388 = 11923U;
	volatile uint64_t t59 = 8832417020LLU;

	t59 = (((x385*x386)-x387)+x388);

	if (t59 != 2147495699LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x393 = 42U;
	int64_t x394 = 6602240538461LL;
	volatile int64_t x395 = 12024LL;
	int16_t x396 = INT16_MIN;
	int64_t t60 = 5LL;

	t60 = (((x393*x394)-x395)+x396);

	if (t60 != 277294102570570LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x409 = INT16_MIN;
	int64_t x410 = -68LL;
	int32_t x411 = INT32_MIN;

	t61 = (((x409*x410)-x411)+x412);

	if (t61 != 2149711873LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x422 = INT16_MIN;
	int8_t x424 = 15;
	volatile uint64_t t62 = 222871437353LLU;

	t62 = (((x421*x422)-x423)+x424);

	if (t62 != 18446743989300403124LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x425 = -15;
	int16_t x426 = INT16_MIN;
	static int16_t x427 = INT16_MIN;
	uint32_t x428 = 23021U;

	t63 = (((x425*x426)-x427)+x428);

	if (t63 != 547309U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x445 = 19U;
	uint16_t x446 = UINT16_MAX;
	uint8_t x447 = UINT8_MAX;
	int8_t x448 = INT8_MAX;

	t64 = (((x445*x446)-x447)+x448);

	if (t64 != 1245037) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x450 = INT64_MIN;
	volatile int64_t x452 = INT64_MIN;
	int64_t t65 = INT64_MIN;

	t65 = (((x449*x450)-x451)+x452);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x453 = -1;
	volatile int16_t x455 = 117;
	volatile int8_t x456 = INT8_MIN;
	volatile int32_t t66 = 465109299;

	t66 = (((x453*x454)-x455)+x456);

	if (t66 != -301) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x458 = 3U;
	volatile uint16_t x459 = 3U;
	int32_t x460 = INT32_MAX;
	volatile int32_t t67 = 861022086;

	t67 = (((x457*x458)-x459)+x460);

	if (t67 != 2147385340) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x461 = INT16_MIN;
	int8_t x462 = INT8_MAX;
	int32_t x464 = 0;
	volatile int64_t t68 = -1256834725630LL;

	t68 = (((x461*x462)-x463)+x464);

	if (t68 != -4161535LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x467 = UINT16_MAX;
	int32_t x468 = INT32_MIN;
	volatile uint64_t t69 = 7676974LLU;

	t69 = (((x465*x466)-x467)+x468);

	if (t69 != 18446744066103170708LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x469 = 43;
	static int8_t x471 = -1;
	int8_t x472 = -1;
	static volatile int32_t t70 = 4;

	t70 = (((x469*x470)-x471)+x472);

	if (t70 != -43) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x477 = -1;
	int64_t x478 = -324046868403574830LL;
	volatile uint16_t x479 = 208U;
	int64_t t71 = 457592LL;

	t71 = (((x477*x478)-x479)+x480);

	if (t71 != 324556809021682857LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x481 = INT8_MIN;
	uint32_t x483 = 606227991U;
	static int32_t x484 = -1;

	t72 = (((x481*x482)-x483)+x484);

	if (t72 != 3688735592U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x485 = INT16_MAX;
	uint32_t x486 = 227989U;
	int32_t x487 = -1;
	volatile uint8_t x488 = 105U;
	uint32_t t73 = 98U;

	t73 = (((x485*x486)-x487)+x488);

	if (t73 != 3175548373U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x493 = UINT64_MAX;
	uint8_t x494 = 2U;
	uint64_t x495 = 1185197410LLU;

	t74 = (((x493*x494)-x495)+x496);

	if (t74 != 18446744072524354318LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x497 = INT16_MIN;
	int8_t x499 = -1;
	uint32_t x500 = 3782556U;
	volatile uint32_t t75 = 6426916U;

	t75 = (((x497*x498)-x499)+x500);

	if (t75 != 1077524381U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x509 = -1;
	static int8_t x511 = INT8_MIN;
	int64_t x512 = 381937774813995LL;
	volatile int64_t t76 = 1LL;

	t76 = (((x509*x510)-x511)+x512);

	if (t76 != 381937774814116LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x522 = 188;
	volatile int32_t x523 = -1;
	int32_t t77 = -223;

	t77 = (((x521*x522)-x523)+x524);

	if (t77 != 6160249) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x530 = 2547256403LL;
	int64_t x531 = INT64_MIN;
	int16_t x532 = INT16_MIN;
	volatile int64_t t78 = -912LL;

	t78 = (((x529*x530)-x531)+x532);

	if (t78 != 9223372034307486637LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x533 = INT8_MIN;
	static int8_t x534 = INT8_MIN;
	int32_t x535 = INT32_MAX;
	int64_t x536 = 7868221400750LL;
	volatile int64_t t79 = 1357333884LL;

	t79 = (((x533*x534)-x535)+x536);

	if (t79 != 7866073933487LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x547 = -820387116494515LL;
	uint64_t x548 = 0LLU;
	uint64_t t80 = 178801166992781LLU;

	t80 = (((x545*x546)-x547)+x548);

	if (t80 != 820387116498340LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x549 = -1;
	int8_t x550 = 1;
	int16_t x551 = INT16_MAX;
	uint16_t x552 = UINT16_MAX;

	t81 = (((x549*x550)-x551)+x552);

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x553 = 26U;
	uint16_t x554 = 274U;
	int16_t x555 = -1;
	uint16_t x556 = UINT16_MAX;

	t82 = (((x553*x554)-x555)+x556);

	if (t82 != 72660U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x561 = INT16_MAX;
	uint8_t x562 = 44U;
	int16_t x563 = -1;
	static volatile int64_t x564 = INT64_MIN;
	int64_t t83 = 200218332249LL;

	t83 = (((x561*x562)-x563)+x564);

	if (t83 != -9223372036853334059LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x565 = -1;
	volatile int32_t x567 = 215;
	volatile int32_t t84 = 19611040;

	t84 = (((x565*x566)-x567)+x568);

	if (t84 != -598) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x573 = 1;
	uint16_t x574 = 346U;

	t85 = (((x573*x574)-x575)+x576);

	if (t85 != 348U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x577 = 1;
	static volatile uint32_t x578 = 206953362U;
	int8_t x579 = 1;
	static uint32_t t86 = 384U;

	t86 = (((x577*x578)-x579)+x580);

	if (t86 != 206953233U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x581 = -6495;
	volatile int16_t x582 = 4751;
	int16_t x583 = -1;
	int64_t x584 = -94828925654323417LL;
	volatile int64_t t87 = 64215486377838134LL;

	t87 = (((x581*x582)-x583)+x584);

	if (t87 != -94828925685181161LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x589 = UINT8_MAX;
	volatile uint8_t x590 = 2U;
	int64_t x591 = INT64_MAX;
	static int8_t x592 = INT8_MAX;
	volatile int64_t t88 = 2132739LL;

	t88 = (((x589*x590)-x591)+x592);

	if (t88 != -9223372036854775170LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x593 = INT8_MIN;
	int64_t x594 = -1LL;
	int16_t x595 = -1;
	int64_t x596 = INT64_MIN;
	static int64_t t89 = 1014174770436697LL;

	t89 = (((x593*x594)-x595)+x596);

	if (t89 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x598 = 19;
	uint8_t x599 = UINT8_MAX;
	uint32_t x600 = 10U;

	t90 = (((x597*x598)-x599)+x600);

	if (t90 != 1254545577U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x609 = UINT16_MAX;
	static uint8_t x612 = 17U;
	volatile uint64_t t91 = 4559998319663486502LLU;

	t91 = (((x609*x610)-x611)+x612);

	if (t91 != 2147418130LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x613 = INT16_MIN;
	volatile int16_t x615 = -1;
	volatile int32_t x616 = INT32_MIN;
	int32_t t92 = -79749;

	t92 = (((x613*x614)-x615)+x616);

	if (t92 != -2140667903) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x617 = -1LL;
	int8_t x618 = -1;
	uint16_t x619 = 23280U;
	int8_t x620 = -1;
	volatile int64_t t93 = -513LL;

	t93 = (((x617*x618)-x619)+x620);

	if (t93 != -23280LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x621 = UINT32_MAX;
	volatile int32_t x622 = INT32_MIN;
	volatile int64_t x624 = -1LL;
	int64_t t94 = -46043170544596534LL;

	t94 = (((x621*x622)-x623)+x624);

	if (t94 != 2147470439LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x637 = INT32_MAX;
	int64_t x638 = -1LL;
	int8_t x639 = INT8_MAX;
	volatile int64_t t95 = -25356507063LL;

	t95 = (((x637*x638)-x639)+x640);

	if (t95 != -2147483771LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x645 = 52LLU;
	uint16_t x646 = 6052U;
	int16_t x647 = INT16_MAX;
	volatile int64_t x648 = -76903782799LL;
	volatile uint64_t t96 = 843766706689278637LLU;

	t96 = (((x645*x646)-x647)+x648);

	if (t96 != 18446743996806050754LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x649 = 49;
	uint8_t x650 = 48U;
	static int64_t x652 = INT64_MIN;
	volatile uint64_t t97 = 453186554148695LLU;

	t97 = (((x649*x650)-x651)+x652);

	if (t97 != 9223372007746656366LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x653 = UINT64_MAX;
	static int32_t x654 = INT32_MAX;
	static uint32_t x656 = 116934979U;
	volatile uint64_t t98 = 88886LLU;

	t98 = (((x653*x654)-x655)+x656);

	if (t98 != 18446744071679002949LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x657 = INT16_MIN;
	int16_t x658 = -1;
	uint16_t x659 = 237U;
	volatile int32_t t99 = 207576356;

	t99 = (((x657*x658)-x659)+x660);

	if (t99 != 32534) { NG(); } else { ; }
	
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

