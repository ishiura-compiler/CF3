#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x33 = INT32_MAX;
int64_t x36 = INT64_MIN;
volatile uint16_t x47 = 296U;
volatile uint64_t x49 = 1895LLU;
static int64_t x66 = -8097178792LL;
int64_t x73 = INT64_MAX;
volatile uint64_t t11 = 54548634212787041LLU;
volatile int32_t t14 = 0;
int8_t x109 = -16;
int32_t x111 = -1;
uint64_t x124 = 120341994772LLU;
static uint16_t x137 = UINT16_MAX;
static int64_t x164 = 536494402898746LL;
volatile uint64_t t20 = 1LLU;
volatile int16_t x180 = -1;
int8_t x188 = INT8_MIN;
int8_t x189 = INT8_MIN;
int64_t x196 = -8794178308LL;
volatile int8_t x203 = INT8_MIN;
static int8_t x208 = INT8_MAX;
uint64_t x231 = UINT64_MAX;
volatile int64_t x238 = -1LL;
int64_t x247 = -1LL;
int64_t t31 = 3551403962696231LL;
int32_t x249 = -7645379;
int16_t x262 = 7;
static uint16_t x265 = 26U;
uint8_t x275 = 4U;
volatile int16_t x276 = INT16_MAX;
static int8_t x281 = INT8_MAX;
uint8_t x283 = 41U;
volatile int8_t x286 = INT8_MIN;
volatile int64_t t39 = -674866LL;
volatile int32_t t40 = 173253;
uint32_t x309 = 16281285U;
int64_t x312 = 771358759754233798LL;
uint8_t x318 = UINT8_MAX;
int64_t t43 = 402723092771016138LL;
int32_t x323 = -1;
int8_t x331 = -1;
volatile int64_t t46 = 371208099798593942LL;
int32_t x342 = 200;
uint32_t t49 = 15U;
int32_t x347 = 43;
int64_t x351 = -1LL;
int32_t x362 = INT32_MIN;
int8_t x363 = -1;
uint16_t x370 = 15927U;
int32_t x380 = INT32_MIN;
int64_t x381 = -1LL;
static int8_t x382 = INT8_MAX;
static int16_t x409 = INT16_MIN;
uint32_t x411 = 15197U;
int8_t x416 = INT8_MIN;
static volatile int16_t x438 = INT16_MAX;
int8_t x455 = -1;
int64_t x459 = INT64_MIN;
int16_t x468 = INT16_MIN;
int16_t x470 = -1;
volatile int32_t t67 = -907126;
volatile uint64_t t68 = 1078458818LLU;
int32_t x481 = -1;
int8_t x482 = INT8_MAX;
static volatile int32_t t70 = -563;
int32_t x502 = -1;
int32_t x512 = 2;
int32_t x514 = -1;
int8_t x523 = INT8_MIN;
uint16_t x529 = 3675U;
uint8_t x534 = UINT8_MAX;
int32_t x536 = -28728;
volatile uint64_t t78 = 20037018LLU;
int64_t x549 = INT64_MIN;
int32_t x552 = -24520248;
volatile uint16_t x557 = 7197U;
int16_t x562 = -1;
static int64_t x570 = INT64_MIN;
volatile int64_t t84 = -5601LL;
int16_t x581 = INT16_MAX;
int8_t x583 = -1;
volatile int64_t t85 = 4417052925776911159LL;
static uint32_t x605 = 94622719U;
int64_t t89 = 293008LL;
uint16_t x625 = 4963U;
int8_t x632 = INT8_MIN;
int32_t x670 = INT32_MIN;
int64_t x676 = INT64_MAX;
uint32_t t96 = 64407347U;
static int64_t x684 = INT64_MAX;
int64_t t98 = 195706964039LL;


void f0(void) {
	uint8_t x1 = 16U;
	uint8_t x2 = UINT8_MAX;
	int32_t x3 = INT32_MAX;
	static volatile int32_t x4 = -14203932;
	volatile int32_t t0 = 12926;

	t0 = (x1%(x2&(x3%x4)));

	if (t0 != 16) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 3529466148440LLU;
	volatile int32_t x10 = -1489766;
	int8_t x11 = -1;
	int32_t x12 = INT32_MIN;
	uint64_t t1 = 1428883LLU;

	t1 = (x9%(x10&(x11%x12)));

	if (t1 != 3529466148440LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int16_t x14 = 1;
	static volatile uint32_t x15 = UINT32_MAX;
	int8_t x16 = INT8_MIN;
	uint32_t t2 = 1385U;

	t2 = (x13%(x14&(x15%x16)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 559043139212617666LLU;
	int32_t x18 = -1;
	static volatile uint64_t x19 = 1354498LLU;
	static int32_t x20 = -18;
	static volatile uint64_t t3 = 95820LLU;

	t3 = (x17%(x18&(x19%x20)));

	if (t3 != 1029024LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x34 = -18;
	static volatile int32_t x35 = -2;
	volatile int64_t t4 = -988881323LL;

	t4 = (x33%(x34&(x35%x36)));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 84803161LLU;
	static uint64_t x38 = 321905612602LLU;
	uint16_t x39 = 1385U;
	int64_t x40 = -2164110568433175LL;
	volatile uint64_t t5 = 69835927LLU;

	t5 = (x37%(x38&(x39%x40)));

	if (t5 != 1081LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x45 = INT32_MIN;
	static uint16_t x46 = UINT16_MAX;
	int8_t x48 = -16;
	int32_t t6 = -19769;

	t6 = (x45%(x46&(x47%x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x50 = 2;
	uint16_t x51 = 8466U;
	volatile int16_t x52 = INT16_MIN;
	static volatile uint64_t t7 = 65874029265LLU;

	t7 = (x49%(x50&(x51%x52)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x65 = 2758U;
	volatile int8_t x67 = -1;
	static uint16_t x68 = UINT16_MAX;
	int64_t t8 = 24065631292528LL;

	t8 = (x65%(x66&(x67%x68)));

	if (t8 != 2758LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x74 = INT8_MIN;
	uint32_t x75 = UINT32_MAX;
	uint32_t x76 = 15491419U;
	int64_t t9 = 14236205503764LL;

	t9 = (x73%(x74&(x75%x76)));

	if (t9 != 1502719LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x77 = UINT16_MAX;
	static int16_t x78 = INT16_MAX;
	volatile int32_t x79 = -1;
	int16_t x80 = -2;
	int32_t t10 = 3345;

	t10 = (x77%(x78&(x79%x80)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = 19051LLU;
	int32_t x86 = -22;
	int64_t x87 = INT64_MIN;
	volatile uint32_t x88 = UINT32_MAX;

	t11 = (x85%(x86&(x87%x88)));

	if (t11 != 19051LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x89 = 10225385LLU;
	volatile uint16_t x90 = UINT16_MAX;
	static volatile int32_t x91 = INT32_MIN;
	static volatile uint16_t x92 = 264U;
	static uint64_t t12 = 8252556469LLU;

	t12 = (x89%(x90&(x91%x92)));

	if (t12 != 32969LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x97 = INT32_MIN;
	uint16_t x98 = UINT16_MAX;
	int64_t x99 = -1LL;
	int64_t x100 = 3584776662LL;
	static int64_t t13 = -3144917461LL;

	t13 = (x97%(x98&(x99%x100)));

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x101 = INT32_MAX;
	int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	int8_t x104 = 12;

	t14 = (x101%(x102&(x103%x104)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x110 = -1;
	static volatile int16_t x112 = INT16_MIN;
	volatile int32_t t15 = -478;

	t15 = (x109%(x110&(x111%x112)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x121 = UINT16_MAX;
	static uint16_t x122 = UINT16_MAX;
	static int8_t x123 = 27;
	volatile uint64_t t16 = 605LLU;

	t16 = (x121%(x122&(x123%x124)));

	if (t16 != 6LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	static int32_t x127 = INT32_MAX;
	int64_t x128 = INT64_MAX;
	volatile int64_t t17 = -37LL;

	t17 = (x125%(x126&(x127%x128)));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x133 = INT64_MIN;
	static uint8_t x134 = UINT8_MAX;
	volatile uint8_t x135 = 5U;
	int64_t x136 = INT64_MIN;
	static volatile int64_t t18 = 1LL;

	t18 = (x133%(x134&(x135%x136)));

	if (t18 != -3LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x138 = 31531866LL;
	static int32_t x139 = INT32_MIN;
	int64_t x140 = 129859LL;
	int64_t t19 = -78LL;

	t19 = (x137%(x138&(x139%x140)));

	if (t19 != 65535LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x161 = INT64_MAX;
	static uint64_t x162 = 3791764708LLU;
	static int32_t x163 = 48;

	t20 = (x161%(x162&(x163%x164)));

	if (t20 != 31LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x177 = INT64_MIN;
	static int16_t x178 = -1;
	uint64_t x179 = 452434306782361009LLU;
	uint64_t t21 = 3572636361LLU;

	t21 = (x177%(x178&(x179%x180)));

	if (t21 != 174685901207555628LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x185 = INT32_MIN;
	static int64_t x186 = INT64_MIN;
	volatile int8_t x187 = -5;
	static int64_t t22 = 11030143LL;

	t22 = (x185%(x186&(x187%x188)));

	if (t22 != -2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x190 = INT64_MAX;
	uint32_t x191 = 21314U;
	volatile int32_t x192 = INT32_MIN;
	volatile int64_t t23 = -1208970308LL;

	t23 = (x189%(x190&(x191%x192)));

	if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x193 = 12U;
	int32_t x194 = INT32_MAX;
	static int16_t x195 = INT16_MIN;
	volatile int64_t t24 = -4115767LL;

	t24 = (x193%(x194&(x195%x196)));

	if (t24 != 12LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x201 = INT32_MIN;
	volatile int8_t x202 = -1;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t25 = 39300LLU;

	t25 = (x201%(x202&(x203%x204)));

	if (t25 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x205 = 4U;
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = 7791;
	uint32_t t26 = 48U;

	t26 = (x205%(x206&(x207%x208)));

	if (t26 != 4U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x209 = -1;
	volatile uint8_t x210 = UINT8_MAX;
	int32_t x211 = 7;
	uint32_t x212 = 6597U;
	uint32_t t27 = 0U;

	t27 = (x209%(x210&(x211%x212)));

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x217 = 1U;
	int32_t x218 = -22;
	static int8_t x219 = -3;
	uint64_t x220 = UINT64_MAX;
	uint64_t t28 = 5630LLU;

	t28 = (x217%(x218&(x219%x220)));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = 15254LL;
	int16_t x232 = INT16_MIN;
	uint64_t t29 = 17LLU;

	t29 = (x229%(x230&(x231%x232)));

	if (t29 != 10046LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x237 = UINT32_MAX;
	static int16_t x239 = INT16_MIN;
	int8_t x240 = -15;
	int64_t t30 = 2205029LL;

	t30 = (x237%(x238&(x239%x240)));

	if (t30 != 7LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x245 = -1;
	static uint32_t x246 = UINT32_MAX;
	int16_t x248 = INT16_MAX;

	t31 = (x245%(x246&(x247%x248)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x250 = 46;
	volatile uint32_t x251 = UINT32_MAX;
	int16_t x252 = -506;
	volatile uint32_t t32 = 1U;

	t32 = (x249%(x250&(x251%x252)));

	if (t32 != 37U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x253 = INT32_MIN;
	uint64_t x254 = UINT64_MAX;
	volatile uint64_t x255 = 1105952316142209373LLU;
	volatile int32_t x256 = INT32_MIN;
	uint64_t t33 = 647LLU;

	t33 = (x253%(x254&(x255%x256)));

	if (t33 != 751507013286718000LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x257 = 127U;
	uint32_t x258 = 88652823U;
	int16_t x259 = INT16_MAX;
	int64_t x260 = INT64_MAX;
	int64_t t34 = -1587268161754638873LL;

	t34 = (x257%(x258&(x259%x260)));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x261 = -9;
	int16_t x263 = 108;
	static int16_t x264 = INT16_MAX;
	volatile int32_t t35 = 24;

	t35 = (x261%(x262&(x263%x264)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x266 = 178LL;
	volatile uint8_t x267 = 121U;
	static int8_t x268 = INT8_MIN;
	volatile int64_t t36 = -396LL;

	t36 = (x265%(x266&(x267%x268)));

	if (t36 != 26LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x273 = -2884;
	static int32_t x274 = INT32_MAX;
	volatile int32_t t37 = 9;

	t37 = (x273%(x274&(x275%x276)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x282 = 6489767897033LLU;
	int16_t x284 = INT16_MIN;
	uint64_t t38 = 43637736LLU;

	t38 = (x281%(x282&(x283%x284)));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x285 = INT32_MIN;
	int32_t x287 = INT32_MAX;
	static int64_t x288 = -52809123693350LL;

	t39 = (x285%(x286&(x287%x288)));

	if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x293 = 3503043;
	int32_t x294 = 105;
	int8_t x295 = 48;
	static int16_t x296 = INT16_MIN;

	t40 = (x293%(x294&(x295%x296)));

	if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x310 = INT8_MAX;
	volatile int64_t x311 = -1LL;
	static volatile int64_t t41 = 3853352738464LL;

	t41 = (x309%(x310&(x311%x312)));

	if (t41 != 12LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x313 = 2;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t42 = 1972356;

	t42 = (x313%(x314&(x315%x316)));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x317 = -1LL;
	volatile uint16_t x319 = 19012U;
	volatile int32_t x320 = INT32_MIN;

	t43 = (x317%(x318&(x319%x320)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x321 = 1;
	uint32_t x322 = 1U;
	int32_t x324 = INT32_MIN;
	volatile uint32_t t44 = 141808189U;

	t44 = (x321%(x322&(x323%x324)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x325 = INT8_MAX;
	static int8_t x326 = -1;
	uint32_t x327 = 14U;
	uint32_t x328 = UINT32_MAX;
	uint32_t t45 = 14304U;

	t45 = (x325%(x326&(x327%x328)));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = -1LL;
	volatile int8_t x332 = INT8_MIN;

	t46 = (x329%(x330&(x331%x332)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x333 = 1;
	uint32_t x334 = UINT32_MAX;
	volatile uint16_t x335 = 1745U;
	uint16_t x336 = 1726U;
	volatile uint32_t t47 = 3308563U;

	t47 = (x333%(x334&(x335%x336)));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = -1;
	int16_t x339 = -1;
	volatile int32_t x340 = 15721591;
	volatile int32_t t48 = -522855442;

	t48 = (x337%(x338&(x339%x340)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x341 = INT8_MIN;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = INT16_MIN;

	t49 = (x341%(x342&(x343%x344)));

	if (t49 != 168U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x345 = 31;
	int16_t x346 = 1;
	int8_t x348 = INT8_MIN;
	static int32_t t50 = 1;

	t50 = (x345%(x346&(x347%x348)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x349 = -1;
	int16_t x350 = INT16_MIN;
	int32_t x352 = -2;
	volatile int64_t t51 = 1484127585304015LL;

	t51 = (x349%(x350&(x351%x352)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x361 = 1407U;
	int16_t x364 = INT16_MIN;
	static uint32_t t52 = 92030U;

	t52 = (x361%(x362&(x363%x364)));

	if (t52 != 1407U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x369 = 24316082U;
	uint64_t x371 = UINT64_MAX;
	volatile uint8_t x372 = 12U;
	volatile uint64_t t53 = 180795857734447LLU;

	t53 = (x369%(x370&(x371%x372)));

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x373 = 114U;
	static volatile int16_t x374 = 1;
	volatile uint16_t x375 = UINT16_MAX;
	volatile uint8_t x376 = 4U;
	volatile int32_t t54 = 3;

	t54 = (x373%(x374&(x375%x376)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x377 = INT8_MAX;
	volatile int64_t x378 = INT64_MIN;
	int16_t x379 = -16;
	static int64_t t55 = 808290344109800LL;

	t55 = (x377%(x378&(x379%x380)));

	if (t55 != 127LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x383 = INT64_MAX;
	volatile uint32_t x384 = UINT32_MAX;
	int64_t t56 = -1091559544LL;

	t56 = (x381%(x382&(x383%x384)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x410 = 10;
	int16_t x412 = -1;
	uint32_t t57 = 32716542U;

	t57 = (x409%(x410&(x411%x412)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x413 = UINT64_MAX;
	int32_t x414 = 29611152;
	uint16_t x415 = UINT16_MAX;
	volatile uint64_t t58 = 446167149097580147LLU;

	t58 = (x413%(x414&(x415%x416)));

	if (t58 != 15LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x421 = 35828301079951624LLU;
	static int8_t x422 = -1;
	volatile int16_t x423 = INT16_MIN;
	static int16_t x424 = 704;
	volatile uint64_t t59 = 39LLU;

	t59 = (x421%(x422&(x423%x424)));

	if (t59 != 35828301079951624LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x425 = 15823119LLU;
	int16_t x426 = -63;
	int32_t x427 = -32920591;
	int32_t x428 = INT32_MIN;
	static volatile uint64_t t60 = 30LLU;

	t60 = (x425%(x426&(x427%x428)));

	if (t60 != 15823119LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x433 = 101439LLU;
	static volatile uint8_t x434 = 28U;
	uint8_t x435 = UINT8_MAX;
	int64_t x436 = INT64_MAX;
	volatile uint64_t t61 = 536917007664538LLU;

	t61 = (x433%(x434&(x435%x436)));

	if (t61 != 23LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x437 = -1;
	volatile int8_t x439 = INT8_MAX;
	static int8_t x440 = 3;
	static volatile int32_t t62 = 116;

	t62 = (x437%(x438&(x439%x440)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x453 = 7U;
	uint16_t x454 = 32623U;
	int8_t x456 = 41;
	static volatile int32_t t63 = 65615;

	t63 = (x453%(x454&(x455%x456)));

	if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x457 = 156U;
	volatile uint32_t x458 = 521U;
	int16_t x460 = INT16_MAX;
	volatile int64_t t64 = -60LL;

	t64 = (x457%(x458&(x459%x460)));

	if (t64 != 156LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x461 = 110U;
	int32_t x462 = -247575317;
	int16_t x463 = 78;
	uint16_t x464 = UINT16_MAX;
	static volatile int32_t t65 = -39;

	t65 = (x461%(x462&(x463%x464)));

	if (t65 != 36) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x465 = -72;
	static int32_t x466 = -5474;
	static volatile uint64_t x467 = 2895310977121LLU;
	uint64_t t66 = 19775579941LLU;

	t66 = (x465%(x466&(x467%x468)));

	if (t66 != 2723374950328LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x469 = -13;
	int32_t x471 = INT32_MAX;
	int16_t x472 = INT16_MIN;

	t67 = (x469%(x470&(x471%x472)));

	if (t67 != -13) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x473 = UINT64_MAX;
	int8_t x474 = INT8_MIN;
	static int32_t x475 = INT32_MIN;
	uint16_t x476 = 1779U;

	t68 = (x473%(x474&(x475%x476)));

	if (t68 != 1279LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x483 = INT64_MAX;
	uint32_t x484 = 10843628U;
	static int64_t t69 = 8784363298500LL;

	t69 = (x481%(x482&(x483%x484)));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MAX;
	int32_t x495 = -1;
	int32_t x496 = 533;

	t70 = (x493%(x494&(x495%x496)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x501 = UINT8_MAX;
	static int32_t x503 = -1;
	int64_t x504 = INT64_MIN;
	volatile int64_t t71 = -12798058LL;

	t71 = (x501%(x502&(x503%x504)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x505 = UINT8_MAX;
	int64_t x506 = INT64_MIN;
	int32_t x507 = INT32_MIN;
	int8_t x508 = -5;
	volatile int64_t t72 = -1254345521100389LL;

	t72 = (x505%(x506&(x507%x508)));

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x509 = INT32_MAX;
	int8_t x510 = -1;
	uint8_t x511 = 123U;
	volatile int32_t t73 = 51205;

	t73 = (x509%(x510&(x511%x512)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x513 = INT16_MIN;
	volatile int64_t x515 = -43LL;
	static uint64_t x516 = UINT64_MAX;
	static volatile uint64_t t74 = 17579944LLU;

	t74 = (x513%(x514&(x515%x516)));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x521 = INT32_MIN;
	static int16_t x522 = INT16_MAX;
	volatile int8_t x524 = INT8_MAX;
	static int32_t t75 = 14054;

	t75 = (x521%(x522&(x523%x524)));

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x530 = INT64_MIN;
	int32_t x531 = -1;
	uint8_t x532 = UINT8_MAX;
	volatile int64_t t76 = -208LL;

	t76 = (x529%(x530&(x531%x532)));

	if (t76 != 3675LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x533 = INT16_MIN;
	int64_t x535 = 2328285469564043377LL;
	int64_t t77 = 0LL;

	t77 = (x533%(x534&(x535%x536)));

	if (t77 != -44LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x541 = -1LL;
	volatile uint8_t x542 = 10U;
	uint64_t x543 = UINT64_MAX;
	uint32_t x544 = 855U;

	t78 = (x541%(x542&(x543%x544)));

	if (t78 != 5LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x545 = INT8_MIN;
	uint16_t x546 = UINT16_MAX;
	int8_t x547 = -1;
	uint16_t x548 = 118U;
	static int32_t t79 = -843210;

	t79 = (x545%(x546&(x547%x548)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x550 = 1261U;
	int8_t x551 = -26;
	volatile int64_t t80 = -395714759286LL;

	t80 = (x549%(x550&(x551%x552)));

	if (t80 != -384LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x553 = INT32_MAX;
	int64_t x554 = -24559516768441LL;
	int64_t x555 = INT64_MIN;
	static volatile uint8_t x556 = UINT8_MAX;
	static volatile int64_t t81 = -7LL;

	t81 = (x553%(x554&(x555%x556)));

	if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x558 = 141;
	int16_t x559 = INT16_MIN;
	uint16_t x560 = 7573U;
	int32_t t82 = 0;

	t82 = (x557%(x558&(x559%x560)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x561 = INT32_MIN;
	uint64_t x563 = 691680003157485LLU;
	int64_t x564 = 1070LL;
	uint64_t t83 = 1891572LLU;

	t83 = (x561%(x562&(x563%x564)));

	if (t83 != 223LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x569 = 0U;
	int8_t x571 = -1;
	uint16_t x572 = 140U;

	t84 = (x569%(x570&(x571%x572)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x582 = INT64_MIN;
	int8_t x584 = INT8_MAX;

	t85 = (x581%(x582&(x583%x584)));

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x597 = INT64_MIN;
	static volatile uint16_t x598 = UINT16_MAX;
	uint8_t x599 = UINT8_MAX;
	uint16_t x600 = 925U;
	int64_t t86 = -72823742186LL;

	t86 = (x597%(x598&(x599%x600)));

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x606 = 717U;
	int16_t x607 = 162;
	volatile int32_t x608 = INT32_MAX;
	static uint32_t t87 = 206U;

	t87 = (x605%(x606&(x607%x608)));

	if (t87 != 127U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x609 = -768;
	int8_t x610 = INT8_MAX;
	int64_t x611 = -15LL;
	int64_t x612 = INT64_MIN;
	static int64_t t88 = 17852400730265LL;

	t88 = (x609%(x610&(x611%x612)));

	if (t88 != -90LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x617 = INT32_MAX;
	uint16_t x618 = 545U;
	int8_t x619 = -1;
	int64_t x620 = INT64_MAX;

	t89 = (x617%(x618&(x619%x620)));

	if (t89 != 527LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x626 = -2;
	int16_t x627 = INT16_MAX;
	static int32_t x628 = -303963;
	static volatile int32_t t90 = -199534440;

	t90 = (x625%(x626&(x627%x628)));

	if (t90 != 4963) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x629 = 3;
	int16_t x630 = -28;
	int64_t x631 = -18928102935900LL;
	int64_t t91 = 1076108722886489LL;

	t91 = (x629%(x630&(x631%x632)));

	if (t91 != 3LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x637 = 100U;
	int16_t x638 = INT16_MAX;
	uint64_t x639 = 86LLU;
	uint16_t x640 = 648U;
	volatile uint64_t t92 = 743379664100LLU;

	t92 = (x637%(x638&(x639%x640)));

	if (t92 != 14LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x641 = INT16_MIN;
	volatile uint64_t x642 = 2243286681521LLU;
	int16_t x643 = INT16_MIN;
	static uint64_t x644 = 2836667290696061499LLU;
	uint64_t t93 = 412584330027LLU;

	t93 = (x641%(x642&(x643%x644)));

	if (t93 != 665598848LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x669 = 2U;
	int8_t x671 = INT8_MIN;
	int16_t x672 = INT16_MIN;
	volatile int32_t t94 = 14;

	t94 = (x669%(x670&(x671%x672)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x673 = -59;
	volatile uint64_t x674 = UINT64_MAX;
	int64_t x675 = 35700335LL;
	uint64_t t95 = 9290377694973419LLU;

	t95 = (x673%(x674&(x675%x676)));

	if (t95 != 14370247LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x677 = -1;
	static uint8_t x678 = 100U;
	static volatile int16_t x679 = 8152;
	volatile uint32_t x680 = UINT32_MAX;

	t96 = (x677%(x678&(x679%x680)));

	if (t96 != 63U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x681 = INT16_MAX;
	static uint16_t x682 = 18U;
	int32_t x683 = INT32_MAX;
	volatile int64_t t97 = 2362925611LL;

	t97 = (x681%(x682&(x683%x684)));

	if (t97 != 7LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x685 = INT16_MIN;
	int64_t x686 = -1LL;
	static uint32_t x687 = UINT32_MAX;
	int32_t x688 = -12969999;

	t98 = (x685%(x686&(x687%x688)));

	if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x693 = 3;
	int8_t x694 = -40;
	int32_t x695 = 822530;
	int64_t x696 = INT64_MIN;
	volatile int64_t t99 = 10971283555LL;

	t99 = (x693%(x694&(x695%x696)));

	if (t99 != 3LL) { NG(); } else { ; }
	
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

