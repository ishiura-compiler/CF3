#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x13 = 2U;
volatile int64_t x23 = INT64_MIN;
int32_t t2 = INT32_MIN;
static volatile uint8_t x40 = 4U;
uint16_t x44 = 6843U;
uint64_t x49 = 58658436336517LLU;
int16_t x51 = 289;
static volatile uint64_t t6 = 15LLU;
uint64_t t7 = 1LLU;
volatile int8_t x70 = 0;
int32_t x71 = 32373;
static int32_t t8 = 726;
int64_t x94 = INT64_MAX;
uint32_t x96 = 9826215U;
uint8_t x106 = 8U;
int16_t x110 = INT16_MIN;
int64_t x134 = INT64_MIN;
uint64_t t15 = 114435105359LLU;
uint16_t x148 = 10470U;
static uint8_t x149 = UINT8_MAX;
int8_t x152 = -31;
static int32_t t20 = 3;
int8_t x177 = 5;
static int8_t x178 = INT8_MAX;
static int16_t x181 = 1730;
uint8_t x184 = 3U;
uint64_t x188 = 196772774314227LLU;
static uint64_t t24 = 51LLU;
uint16_t x189 = UINT16_MAX;
int32_t t25 = -60791;
uint8_t x193 = UINT8_MAX;
volatile int8_t x212 = -1;
uint64_t x224 = UINT64_MAX;
uint32_t x235 = 62U;
volatile int32_t x236 = INT32_MIN;
volatile int64_t t34 = 70LL;
uint8_t x270 = 48U;
static uint64_t x273 = 7LLU;
uint16_t x274 = UINT16_MAX;
int32_t x284 = INT32_MIN;
static volatile uint8_t x294 = UINT8_MAX;
volatile uint32_t x309 = UINT32_MAX;
volatile int64_t t43 = -48138447731LL;
int64_t x325 = INT64_MAX;
int16_t x327 = -2;
int16_t x353 = 1;
int16_t x360 = INT16_MAX;
int64_t x372 = 1846945904078671LL;
volatile int32_t t55 = -874083;
volatile int32_t x379 = 1067;
int32_t t56 = -1846046;
volatile int16_t x403 = -1;
static volatile int16_t x407 = INT16_MIN;
int16_t x414 = -1;
int64_t x454 = 3164LL;
int32_t x480 = INT32_MAX;
static int16_t x487 = INT16_MIN;
volatile uint64_t t65 = 3923462LLU;
volatile int16_t x490 = INT16_MIN;
uint16_t x493 = 79U;
volatile int32_t x494 = -1;
volatile int32_t t67 = 316586280;
int16_t x500 = -26;
uint64_t x505 = 1000735LLU;
volatile uint8_t x510 = UINT8_MAX;
uint16_t x514 = 0U;
int64_t x515 = INT64_MIN;
int8_t x517 = 8;
int8_t x520 = INT8_MIN;
static int64_t x527 = -15993259LL;
uint8_t x537 = 0U;
static int32_t x540 = 4;
volatile int32_t t75 = -214;
volatile uint64_t x546 = 111LLU;
volatile uint16_t x550 = UINT16_MAX;
uint32_t x560 = 232U;
int8_t x599 = 1;
static int32_t x601 = 1466;
uint64_t x628 = UINT64_MAX;
int32_t t87 = -197;
volatile int8_t x634 = -1;
int64_t x651 = -1LL;
static volatile uint32_t x654 = UINT32_MAX;
volatile int32_t t91 = -1115339;
static volatile int8_t x670 = 0;
volatile int32_t t94 = 7458899;
uint8_t x689 = UINT8_MAX;
static int8_t x695 = INT8_MIN;
uint64_t x698 = 4258918314980578LLU;
uint16_t x700 = UINT16_MAX;


void f0(void) {
	volatile int16_t x5 = INT16_MAX;
	uint8_t x6 = 1U;
	int32_t x7 = INT32_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t0 = 157843;

	t0 = ((x5<<(x6<x7))^x8);

	if (t0 != 32512) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x14 = -7677LL;
	int64_t x15 = INT64_MAX;
	static int16_t x16 = 1860;
	volatile int32_t t1 = 990234282;

	t1 = ((x13<<(x14<x15))^x16);

	if (t1 != 1856) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MAX;
	int8_t x22 = INT8_MIN;
	int8_t x24 = -1;

	t2 = ((x21<<(x22<x23))^x24);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x37 = 6U;
	int8_t x38 = INT8_MAX;
	static uint16_t x39 = 10U;
	volatile int32_t t3 = 20111;

	t3 = ((x37<<(x38<x39))^x40);

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x41 = UINT64_MAX;
	volatile int16_t x42 = INT16_MAX;
	int32_t x43 = INT32_MIN;
	uint64_t t4 = 1952LLU;

	t4 = ((x41<<(x42<x43))^x44);

	if (t4 != 18446744073709544772LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x45 = 294774967853LLU;
	int64_t x46 = INT64_MIN;
	uint32_t x47 = 21876U;
	static int8_t x48 = INT8_MIN;
	static uint64_t t5 = 67674115599LLU;

	t5 = ((x45<<(x46<x47))^x48);

	if (t5 != 18446743484159615962LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x50 = -1LL;
	uint64_t x52 = UINT64_MAX;

	t6 = ((x49<<(x50<x51))^x52);

	if (t6 != 18446626756836878581LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x61 = UINT64_MAX;
	uint8_t x62 = UINT8_MAX;
	int16_t x63 = INT16_MIN;
	int8_t x64 = INT8_MIN;

	t7 = ((x61<<(x62<x63))^x64);

	if (t7 != 127LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x69 = INT16_MAX;
	volatile int8_t x72 = INT8_MIN;

	t8 = ((x69<<(x70<x71))^x72);

	if (t8 != -65410) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x77 = 597729LL;
	static volatile int64_t x78 = -1LL;
	volatile int16_t x79 = -1;
	static int32_t x80 = INT32_MIN;
	int64_t t9 = -26673916843LL;

	t9 = ((x77<<(x78<x79))^x80);

	if (t9 != -2146885919LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x81 = 78LLU;
	volatile int32_t x82 = 59;
	static volatile uint8_t x83 = 1U;
	int32_t x84 = 5;
	volatile uint64_t t10 = 1587660089932639722LLU;

	t10 = ((x81<<(x82<x83))^x84);

	if (t10 != 75LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x93 = 28510U;
	static int8_t x95 = INT8_MIN;
	uint32_t t11 = 3173U;

	t11 = ((x93<<(x94<x95))^x96);

	if (t11 != 9797881U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x105 = 10;
	int32_t x107 = INT32_MAX;
	volatile int32_t x108 = 104393623;
	int32_t t12 = 0;

	t12 = ((x105<<(x106<x107))^x108);

	if (t12 != 104393603) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x109 = INT8_MAX;
	uint8_t x111 = UINT8_MAX;
	static int64_t x112 = INT64_MIN;
	int64_t t13 = -3256LL;

	t13 = ((x109<<(x110<x111))^x112);

	if (t13 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x117 = 6;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = -1;
	uint32_t x120 = 1U;
	volatile uint32_t t14 = 11260U;

	t14 = ((x117<<(x118<x119))^x120);

	if (t14 != 7U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x133 = 23524;
	static volatile uint64_t x135 = 1346223256532855868LLU;
	uint64_t x136 = 773827404298LLU;

	t15 = ((x133<<(x134<x135))^x136);

	if (t15 != 773827426798LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x141 = 3971U;
	static uint64_t x142 = 971121181722496291LLU;
	int8_t x143 = -13;
	static volatile int32_t x144 = -1;
	int32_t t16 = 319966;

	t16 = ((x141<<(x142<x143))^x144);

	if (t16 != -7943) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MAX;
	volatile int8_t x147 = INT8_MIN;
	static int32_t t17 = 57151;

	t17 = ((x145<<(x146<x147))^x148);

	if (t17 != 22297) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x150 = 38965;
	int32_t x151 = -1;
	int32_t t18 = -334738301;

	t18 = ((x149<<(x150<x151))^x152);

	if (t18 != -226) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x157 = UINT64_MAX;
	static int64_t x158 = -15911293733864250LL;
	int8_t x159 = -1;
	volatile uint16_t x160 = UINT16_MAX;
	static volatile uint64_t t19 = 91881413502239353LLU;

	t19 = ((x157<<(x158<x159))^x160);

	if (t19 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x165 = INT32_MAX;
	static uint64_t x166 = UINT64_MAX;
	int16_t x167 = INT16_MAX;
	uint8_t x168 = UINT8_MAX;

	t20 = ((x165<<(x166<x167))^x168);

	if (t20 != 2147483392) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x169 = 982U;
	int32_t x170 = -22495;
	volatile uint32_t x171 = 5U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t21 = 1139;

	t21 = ((x169<<(x170<x171))^x172);

	if (t21 != -31786) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MAX;
	int64_t t22 = -285LL;

	t22 = ((x177<<(x178<x179))^x180);

	if (t22 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x182 = 628LL;
	uint16_t x183 = 72U;
	volatile int32_t t23 = 63258216;

	t23 = ((x181<<(x182<x183))^x184);

	if (t23 != 1729) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x185 = 328U;
	uint8_t x186 = 44U;
	volatile uint16_t x187 = 17425U;

	t24 = ((x185<<(x186<x187))^x188);

	if (t24 != 196772774314595LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x190 = 34U;
	uint64_t x191 = UINT64_MAX;
	static volatile uint8_t x192 = 119U;

	t25 = ((x189<<(x190<x191))^x192);

	if (t25 != 130953) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x194 = UINT32_MAX;
	uint32_t x195 = 1223U;
	volatile uint64_t x196 = 236314525880LLU;
	uint64_t t26 = 1930235617440086796LLU;

	t26 = ((x193<<(x194<x195))^x196);

	if (t26 != 236314525767LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x201 = 125225428971152659LLU;
	static int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	volatile uint64_t t27 = 5232480LLU;

	t27 = ((x201<<(x202<x203))^x204);

	if (t27 != 125225428971133676LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x209 = 49U;
	int32_t x210 = 270872548;
	uint32_t x211 = 2425U;
	volatile int32_t t28 = -1;

	t28 = ((x209<<(x210<x211))^x212);

	if (t28 != -50) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x214 = -372714;
	uint16_t x215 = 2U;
	int8_t x216 = -32;
	uint64_t t29 = 5982444884LLU;

	t29 = ((x213<<(x214<x215))^x216);

	if (t29 != 30LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x221 = 47U;
	volatile int16_t x222 = INT16_MIN;
	static uint64_t x223 = UINT64_MAX;
	volatile uint64_t t30 = 1078033681956600516LLU;

	t30 = ((x221<<(x222<x223))^x224);

	if (t30 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x225 = INT64_MAX;
	int16_t x226 = -1;
	int8_t x227 = INT8_MIN;
	static volatile int32_t x228 = 595356;
	int64_t t31 = 9759663927841LL;

	t31 = ((x225<<(x226<x227))^x228);

	if (t31 != 9223372036854180451LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x233 = 3926;
	int32_t x234 = INT32_MAX;
	volatile int32_t t32 = -52778566;

	t32 = ((x233<<(x234<x235))^x236);

	if (t32 != -2147479722) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x237 = 15858U;
	int64_t x238 = -1LL;
	volatile int64_t x239 = -3LL;
	uint16_t x240 = UINT16_MAX;
	int32_t t33 = -1007810914;

	t33 = ((x237<<(x238<x239))^x240);

	if (t33 != 49677) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x245 = INT64_MAX;
	static int16_t x246 = INT16_MAX;
	int8_t x247 = 3;
	int16_t x248 = 780;

	t34 = ((x245<<(x246<x247))^x248);

	if (t34 != 9223372036854775027LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x261 = 3262U;
	static volatile uint16_t x262 = UINT16_MAX;
	int8_t x263 = -1;
	static volatile int16_t x264 = INT16_MIN;
	int32_t t35 = 74;

	t35 = ((x261<<(x262<x263))^x264);

	if (t35 != -29506) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x269 = 500U;
	volatile uint32_t x271 = UINT32_MAX;
	volatile int64_t x272 = INT64_MIN;
	int64_t t36 = -2815194050986891LL;

	t36 = ((x269<<(x270<x271))^x272);

	if (t36 != -9223372036854774808LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x275 = -1;
	uint64_t x276 = 9844918291LLU;
	uint64_t t37 = 1000558508214211LLU;

	t37 = ((x273<<(x274<x275))^x276);

	if (t37 != 9844918292LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x277 = 67154476502183LLU;
	int32_t x278 = 3;
	int8_t x279 = 0;
	static int16_t x280 = -2;
	volatile uint64_t t38 = 22621616595LLU;

	t38 = ((x277<<(x278<x279))^x280);

	if (t38 != 18446676919233049433LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x281 = 3U;
	int64_t x282 = INT64_MAX;
	int16_t x283 = INT16_MIN;
	volatile uint32_t t39 = 17230U;

	t39 = ((x281<<(x282<x283))^x284);

	if (t39 != 2147483651U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x285 = INT16_MAX;
	volatile int8_t x286 = 0;
	uint32_t x287 = UINT32_MAX;
	int64_t x288 = -1LL;
	int64_t t40 = 21977138LL;

	t40 = ((x285<<(x286<x287))^x288);

	if (t40 != -65535LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x293 = 4U;
	static int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t41 = -42215487;

	t41 = ((x293<<(x294<x295))^x296);

	if (t41 != -124) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x305 = 44U;
	uint32_t x306 = UINT32_MAX;
	volatile int8_t x307 = INT8_MIN;
	volatile int64_t x308 = 11238022661LL;
	int64_t t42 = -154475958754138LL;

	t42 = ((x305<<(x306<x307))^x308);

	if (t42 != 11238022697LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x310 = UINT16_MAX;
	int16_t x311 = -39;
	static volatile int64_t x312 = 25549098336656933LL;

	t43 = ((x309<<(x310<x311))^x312);

	if (t43 != 25549102541431258LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x313 = 2596U;
	int8_t x314 = -17;
	int16_t x315 = INT16_MAX;
	int8_t x316 = 13;
	int32_t t44 = 1538;

	t44 = ((x313<<(x314<x315))^x316);

	if (t44 != 5189) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x317 = 7;
	uint8_t x318 = 47U;
	volatile int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MAX;
	volatile int32_t t45 = 1;

	t45 = ((x317<<(x318<x319))^x320);

	if (t45 != 2147483640) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x326 = 3095222436120816813LL;
	static volatile uint64_t x328 = 0LLU;
	static uint64_t t46 = 194112423382666653LLU;

	t46 = ((x325<<(x326<x327))^x328);

	if (t46 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x333 = UINT64_MAX;
	volatile uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 15U;
	volatile int64_t x336 = 154241958067192LL;
	static volatile uint64_t t47 = 1545LLU;

	t47 = ((x333<<(x334<x335))^x336);

	if (t47 != 18446589831751484423LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = INT32_MAX;
	int8_t x339 = -2;
	volatile uint64_t x340 = 991175341436639LLU;
	uint64_t t48 = 1349359208691873446LLU;

	t48 = ((x337<<(x338<x339))^x340);

	if (t48 != 991173256483104LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x341 = 147U;
	uint32_t x342 = 9092925U;
	int16_t x343 = INT16_MIN;
	int32_t x344 = 102990504;
	int32_t t49 = 12948369;

	t49 = ((x341<<(x342<x343))^x344);

	if (t49 != 102990734) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x354 = 1475861012LLU;
	static volatile uint8_t x355 = 46U;
	int64_t x356 = -22345756LL;
	volatile int64_t t50 = -775031867909416LL;

	t50 = ((x353<<(x354<x355))^x356);

	if (t50 != -22345755LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x357 = 6914731803592267LL;
	volatile uint16_t x358 = 3589U;
	static uint64_t x359 = 430897LLU;
	volatile int64_t t51 = -424175LL;

	t51 = ((x357<<(x358<x359))^x360);

	if (t51 != 13829463607210857LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int32_t x362 = -15399;
	volatile int32_t x363 = -448;
	uint8_t x364 = 38U;
	static int32_t t52 = -212;

	t52 = ((x361<<(x362<x363))^x364);

	if (t52 != 131032) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x365 = 270418;
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = 5U;
	volatile int8_t x368 = -6;
	int32_t t53 = -1;

	t53 = ((x365<<(x366<x367))^x368);

	if (t53 != -270424) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x369 = INT8_MAX;
	int64_t x370 = INT64_MIN;
	static int64_t x371 = -1LL;
	int64_t t54 = 5273931183350LL;

	t54 = ((x369<<(x370<x371))^x372);

	if (t54 != 1846945904078769LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = INT16_MIN;
	volatile int64_t x375 = INT64_MIN;
	volatile int8_t x376 = INT8_MIN;

	t55 = ((x373<<(x374<x375))^x376);

	if (t55 != -2147483521) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x377 = UINT8_MAX;
	int32_t x378 = 1;
	uint8_t x380 = UINT8_MAX;

	t56 = ((x377<<(x378<x379))^x380);

	if (t56 != 257) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x401 = UINT64_MAX;
	static int8_t x402 = INT8_MAX;
	int8_t x404 = 1;
	uint64_t t57 = 108652085LLU;

	t57 = ((x401<<(x402<x403))^x404);

	if (t57 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x405 = 16U;
	uint32_t x406 = 353367U;
	int64_t x408 = INT64_MIN;
	volatile int64_t t58 = 376310681140129534LL;

	t58 = ((x405<<(x406<x407))^x408);

	if (t58 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x413 = 452U;
	volatile int32_t x415 = INT32_MIN;
	uint16_t x416 = 13455U;
	volatile uint32_t t59 = 0U;

	t59 = ((x413<<(x414<x415))^x416);

	if (t59 != 13643U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x429 = 3U;
	static int32_t x430 = -190729417;
	volatile int64_t x431 = INT64_MIN;
	int8_t x432 = 6;
	volatile int32_t t60 = 581212;

	t60 = ((x429<<(x430<x431))^x432);

	if (t60 != 5) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x433 = 2U;
	int16_t x434 = INT16_MIN;
	volatile int16_t x435 = INT16_MIN;
	int32_t x436 = INT32_MAX;
	uint32_t t61 = 1960U;

	t61 = ((x433<<(x434<x435))^x436);

	if (t61 != 2147483645U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x453 = UINT64_MAX;
	int32_t x455 = 24514;
	volatile int64_t x456 = INT64_MIN;
	uint64_t t62 = 278757LLU;

	t62 = ((x453<<(x454<x455))^x456);

	if (t62 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x457 = UINT8_MAX;
	uint16_t x458 = UINT16_MAX;
	int8_t x459 = -1;
	volatile int8_t x460 = -1;
	static volatile int32_t t63 = 6747;

	t63 = ((x457<<(x458<x459))^x460);

	if (t63 != -256) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x477 = 6418035LLU;
	volatile int64_t x478 = INT64_MIN;
	int8_t x479 = INT8_MAX;
	uint64_t t64 = 15081040844LLU;

	t64 = ((x477<<(x478<x479))^x480);

	if (t64 != 2134647577LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x485 = 8323564922840LLU;
	int64_t x486 = INT64_MIN;
	static volatile int16_t x488 = -505;

	t65 = ((x485<<(x486<x487))^x488);

	if (t65 != 18446727426579706295LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x489 = 1U;
	int16_t x491 = INT16_MIN;
	int64_t x492 = INT64_MIN;
	int64_t t66 = 55623555757LL;

	t66 = ((x489<<(x490<x491))^x492);

	if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x495 = -1;
	int32_t x496 = INT32_MIN;

	t67 = ((x493<<(x494<x495))^x496);

	if (t67 != -2147483569) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x497 = 22;
	static int16_t x498 = -1;
	uint8_t x499 = 10U;
	volatile int32_t t68 = 15;

	t68 = ((x497<<(x498<x499))^x500);

	if (t68 != -54) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x506 = 1695LL;
	int32_t x507 = 15689650;
	int64_t x508 = 840055630139593827LL;
	volatile uint64_t t69 = 0LLU;

	t69 = ((x505<<(x506<x507))^x508);

	if (t69 != 840055630140481117LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x509 = 10671;
	volatile int64_t x511 = INT64_MIN;
	volatile int16_t x512 = 3381;
	static volatile int32_t t70 = -163574;

	t70 = ((x509<<(x510<x511))^x512);

	if (t70 != 9370) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x513 = INT64_MAX;
	int16_t x516 = -1;
	int64_t t71 = INT64_MIN;

	t71 = ((x513<<(x514<x515))^x516);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x518 = -1;
	int8_t x519 = INT8_MAX;
	volatile int32_t t72 = 977;

	t72 = ((x517<<(x518<x519))^x520);

	if (t72 != -112) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x525 = 828650456LLU;
	uint64_t x526 = 68971082294689LLU;
	uint64_t x528 = UINT64_MAX;
	uint64_t t73 = 164788LLU;

	t73 = ((x525<<(x526<x527))^x528);

	if (t73 != 18446744072052250703LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x529 = 1;
	int32_t x530 = INT32_MIN;
	int64_t x531 = INT64_MAX;
	static uint32_t x532 = 116551U;
	uint32_t t74 = 1U;

	t74 = ((x529<<(x530<x531))^x532);

	if (t74 != 116549U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x538 = 301022995389LL;
	uint64_t x539 = 187528404697486676LLU;

	t75 = ((x537<<(x538<x539))^x540);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x545 = 35U;
	static int8_t x547 = -1;
	int8_t x548 = -1;
	int32_t t76 = 3;

	t76 = ((x545<<(x546<x547))^x548);

	if (t76 != -71) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x549 = 612758789;
	int16_t x551 = 40;
	volatile int64_t x552 = -12198089969503LL;
	volatile int64_t t77 = -1LL;

	t77 = ((x549<<(x550<x551))^x552);

	if (t77 != -12198551501404LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x557 = 4LL;
	volatile uint16_t x558 = 7U;
	static volatile uint8_t x559 = UINT8_MAX;
	int64_t t78 = -66991189363LL;

	t78 = ((x557<<(x558<x559))^x560);

	if (t78 != 224LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x565 = 0U;
	volatile uint8_t x566 = UINT8_MAX;
	static int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MIN;
	volatile int32_t t79 = -28;

	t79 = ((x565<<(x566<x567))^x568);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x577 = 733U;
	static int32_t x578 = INT32_MIN;
	int32_t x579 = -1544136;
	static uint8_t x580 = 0U;
	uint32_t t80 = 32518627U;

	t80 = ((x577<<(x578<x579))^x580);

	if (t80 != 1466U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x593 = 242210U;
	int8_t x594 = -3;
	int32_t x595 = INT32_MAX;
	volatile uint16_t x596 = UINT16_MAX;
	uint32_t t81 = 625712459U;

	t81 = ((x593<<(x594<x595))^x596);

	if (t81 != 498619U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x597 = UINT8_MAX;
	int32_t x598 = 1946152;
	int16_t x600 = INT16_MIN;
	static volatile int32_t t82 = -152;

	t82 = ((x597<<(x598<x599))^x600);

	if (t82 != -32513) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x602 = INT8_MIN;
	int16_t x603 = -245;
	int64_t x604 = INT64_MIN;
	volatile int64_t t83 = -1LL;

	t83 = ((x601<<(x602<x603))^x604);

	if (t83 != -9223372036854774342LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x605 = INT16_MAX;
	uint32_t x606 = 515832609U;
	uint8_t x607 = 7U;
	uint8_t x608 = 55U;
	static volatile int32_t t84 = -33286216;

	t84 = ((x605<<(x606<x607))^x608);

	if (t84 != 32712) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x617 = 46;
	uint64_t x618 = 7745409439851LLU;
	static uint8_t x619 = 0U;
	int16_t x620 = INT16_MIN;
	static int32_t t85 = 2891;

	t85 = ((x617<<(x618<x619))^x620);

	if (t85 != -32722) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x625 = 830;
	int16_t x626 = 1444;
	int16_t x627 = 14126;
	volatile uint64_t t86 = 1017LLU;

	t86 = ((x625<<(x626<x627))^x628);

	if (t86 != 18446744073709549955LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x629 = INT8_MAX;
	int8_t x630 = INT8_MAX;
	uint8_t x631 = 69U;
	static int8_t x632 = -2;

	t87 = ((x629<<(x630<x631))^x632);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x633 = INT64_MAX;
	int8_t x635 = -1;
	static int32_t x636 = -1;
	int64_t t88 = INT64_MIN;

	t88 = ((x633<<(x634<x635))^x636);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x645 = UINT8_MAX;
	uint32_t x646 = 185954379U;
	volatile int16_t x647 = INT16_MIN;
	uint64_t x648 = 922LLU;
	volatile uint64_t t89 = 14809683408LLU;

	t89 = ((x645<<(x646<x647))^x648);

	if (t89 != 612LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x649 = 1U;
	uint16_t x650 = UINT16_MAX;
	uint16_t x652 = 37U;
	int32_t t90 = -118834;

	t90 = ((x649<<(x650<x651))^x652);

	if (t90 != 36) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x653 = UINT8_MAX;
	static int8_t x655 = -1;
	uint8_t x656 = 12U;

	t91 = ((x653<<(x654<x655))^x656);

	if (t91 != 243) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x669 = UINT16_MAX;
	static int16_t x671 = 5;
	int64_t x672 = 72LL;
	int64_t t92 = -8687667LL;

	t92 = ((x669<<(x670<x671))^x672);

	if (t92 != 130998LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x673 = UINT64_MAX;
	int64_t x674 = INT64_MIN;
	int64_t x675 = -378862076LL;
	static int32_t x676 = -1;
	uint64_t t93 = 182397885937098853LLU;

	t93 = ((x673<<(x674<x675))^x676);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x681 = 4477U;
	volatile int8_t x682 = -1;
	int16_t x683 = -1;
	int8_t x684 = -21;

	t94 = ((x681<<(x682<x683))^x684);

	if (t94 != -4458) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x690 = 4458877284LL;
	int16_t x691 = INT16_MAX;
	int32_t x692 = INT32_MIN;
	volatile int32_t t95 = 523496634;

	t95 = ((x689<<(x690<x691))^x692);

	if (t95 != -2147483393) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x693 = 2948069LLU;
	int8_t x694 = INT8_MIN;
	int16_t x696 = -1;
	volatile uint64_t t96 = 394371LLU;

	t96 = ((x693<<(x694<x695))^x696);

	if (t96 != 18446744073706603546LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x697 = 367;
	uint8_t x699 = 42U;
	int32_t t97 = 4265400;

	t97 = ((x697<<(x698<x699))^x700);

	if (t97 != 65168) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x709 = 1U;
	uint16_t x710 = 12U;
	static int64_t x711 = INT64_MIN;
	int8_t x712 = INT8_MIN;
	volatile int32_t t98 = -71;

	t98 = ((x709<<(x710<x711))^x712);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x713 = 2U;
	int16_t x714 = INT16_MIN;
	int8_t x715 = INT8_MIN;
	int8_t x716 = INT8_MAX;
	volatile int32_t t99 = 9513657;

	t99 = ((x713<<(x714<x715))^x716);

	if (t99 != 123) { NG(); } else { ; }
	
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

