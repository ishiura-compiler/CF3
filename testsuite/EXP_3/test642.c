#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = -1;
static volatile int32_t t0 = -9;
volatile uint32_t t1 = 3286948U;
int64_t t3 = -84525723LL;
volatile uint16_t x71 = UINT16_MAX;
int32_t x78 = INT32_MIN;
volatile int32_t t6 = 852826313;
uint8_t x85 = UINT8_MAX;
volatile uint32_t t9 = 7U;
static int64_t x133 = -1LL;
static volatile int8_t x134 = INT8_MAX;
uint8_t x144 = UINT8_MAX;
int64_t t13 = -14LL;
static uint8_t x177 = 25U;
int8_t x179 = -1;
int64_t t15 = -4LL;
int8_t x189 = 7;
int8_t x192 = INT8_MIN;
static uint32_t x193 = 63U;
volatile uint64_t x194 = 36412LLU;
int8_t x200 = -4;
int32_t x208 = -1;
volatile int64_t x210 = 235953402375492373LL;
uint16_t x212 = 13U;
int32_t t24 = 407638;
int16_t x229 = INT16_MIN;
int32_t t25 = -9047824;
int32_t x259 = -1;
volatile uint64_t x260 = 87696092372062LLU;
volatile uint64_t t27 = 8757593010460789902LLU;
int8_t x262 = -1;
static uint8_t x273 = 119U;
int16_t x284 = -113;
volatile int64_t t30 = -1733671925627360629LL;
uint8_t x288 = 13U;
int64_t x289 = INT64_MIN;
volatile int64_t t32 = -64450LL;
int32_t x301 = INT32_MAX;
volatile int64_t t35 = -46968005LL;
int64_t x323 = INT64_MIN;
int64_t t37 = 405613LL;
int64_t x330 = -1LL;
int64_t x332 = -1LL;
volatile int64_t t39 = 830697914744443LL;
volatile uint64_t x343 = UINT64_MAX;
uint8_t x344 = UINT8_MAX;
uint16_t x354 = UINT16_MAX;
volatile int64_t x366 = 796068LL;
static uint16_t x399 = 70U;
static int64_t t49 = 38LL;
uint8_t x413 = 11U;
volatile uint64_t t51 = 3397LLU;
int16_t x427 = INT16_MIN;
uint8_t x433 = 105U;
int64_t x478 = 221786894LL;
static int8_t x480 = INT8_MIN;
volatile int16_t x502 = -1;
volatile int16_t x504 = INT16_MAX;
int8_t x505 = 0;
int64_t x507 = INT64_MIN;
volatile uint32_t t64 = 392448522U;
static int8_t x513 = INT8_MAX;
uint8_t x516 = 5U;
uint8_t x533 = 8U;
int64_t x535 = 29339606LL;
int64_t x536 = -1LL;
static uint32_t x539 = 41U;
int32_t x540 = 31;
uint64_t x542 = UINT64_MAX;
int8_t x550 = INT8_MIN;
int32_t t70 = 340994795;
int16_t x563 = INT16_MIN;
static volatile int8_t x568 = INT8_MIN;
int32_t t73 = 247502797;
volatile uint16_t x575 = UINT16_MAX;
static int16_t x582 = 0;
uint16_t x583 = UINT16_MAX;
int32_t x590 = -1;
int64_t x604 = -1LL;
static volatile int64_t t78 = 659401750601LL;
volatile int64_t x641 = -1LL;
volatile uint64_t x643 = UINT64_MAX;
int8_t x669 = -1;
int64_t x670 = INT64_MIN;
uint8_t x673 = 12U;
int64_t x674 = INT64_MIN;
int64_t x684 = 11867442LL;
uint32_t x688 = 124U;
uint64_t x695 = UINT64_MAX;
volatile int8_t x696 = -1;
int16_t x711 = INT16_MIN;
uint8_t x712 = 8U;
volatile int8_t x714 = 15;
volatile int16_t x716 = INT16_MIN;
volatile uint64_t x737 = 1523058LLU;
uint64_t t91 = 367970LLU;
static uint32_t x745 = UINT32_MAX;
int32_t x747 = INT32_MIN;
uint32_t t92 = 7527U;
uint32_t x776 = 2825U;
static int8_t x792 = 3;


void f0(void) {
	static uint16_t x5 = UINT16_MAX;
	volatile uint8_t x6 = UINT8_MAX;
	static int8_t x7 = 3;

	t0 = ((x5&x6)%(x7/x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x21 = 47;
	uint32_t x22 = 2556U;
	uint8_t x23 = 12U;
	int16_t x24 = -1;

	t1 = ((x21&x22)%(x23/x24));

	if (t1 != 44U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x33 = 4;
	uint16_t x34 = UINT16_MAX;
	static int16_t x35 = 65;
	uint8_t x36 = 20U;
	static int32_t t2 = 6;

	t2 = ((x33&x34)%(x35/x36));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x49 = -87;
	int64_t x50 = INT64_MAX;
	int32_t x51 = -2;
	int16_t x52 = -1;

	t3 = ((x49&x50)%(x51/x52));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x53 = INT8_MIN;
	int16_t x54 = 185;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = UINT8_MAX;
	int32_t t4 = -850232;

	t4 = ((x53&x54)%(x55/x56));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x69 = INT64_MIN;
	int16_t x70 = INT16_MIN;
	int16_t x72 = INT16_MAX;
	static int64_t t5 = 54LL;

	t5 = ((x69&x70)%(x71/x72));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x77 = INT16_MAX;
	int8_t x79 = INT8_MAX;
	int8_t x80 = INT8_MAX;

	t6 = ((x77&x78)%(x79/x80));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x86 = -1LL;
	static int32_t x87 = 294603496;
	volatile uint8_t x88 = 9U;
	int64_t t7 = -73492375863718LL;

	t7 = ((x85&x86)%(x87/x88));

	if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x105 = 95152611277LLU;
	int64_t x106 = INT64_MIN;
	volatile int16_t x107 = -1;
	volatile int64_t x108 = -1LL;
	static uint64_t t8 = 11312605001LLU;

	t8 = ((x105&x106)%(x107/x108));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x117 = -1;
	static int8_t x118 = 23;
	static uint32_t x119 = 293494U;
	volatile int16_t x120 = INT16_MAX;

	t9 = ((x117&x118)%(x119/x120));

	if (t9 != 7U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x135 = 90;
	uint32_t x136 = 1U;
	volatile int64_t t10 = -1493752LL;

	t10 = ((x133&x134)%(x135/x136));

	if (t10 != 37LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x137 = 9;
	volatile int64_t x138 = INT64_MIN;
	static uint16_t x139 = 84U;
	uint32_t x140 = 47U;
	volatile int64_t t11 = 2449056LL;

	t11 = ((x137&x138)%(x139/x140));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x141 = INT8_MIN;
	int64_t x142 = INT64_MAX;
	static int64_t x143 = INT64_MIN;
	int64_t t12 = -620LL;

	t12 = ((x141&x142)%(x143/x144));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x161 = INT16_MAX;
	int64_t x162 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	volatile int8_t x164 = INT8_MAX;

	t13 = ((x161&x162)%(x163/x164));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x178 = INT64_MIN;
	uint64_t x180 = 272647905691LLU;
	volatile uint64_t t14 = 414766713LLU;

	t14 = ((x177&x178)%(x179/x180));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x185 = 213086957U;
	volatile int8_t x186 = -17;
	static int64_t x187 = INT64_MAX;
	int32_t x188 = INT32_MIN;

	t15 = ((x185&x186)%(x187/x188));

	if (t15 != 213086957LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x190 = 39;
	static int32_t x191 = 448508431;
	static int32_t t16 = -245872;

	t16 = ((x189&x190)%(x191/x192));

	if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x195 = 1822815193U;
	int8_t x196 = 5;
	volatile uint64_t t17 = 1963766537144174LLU;

	t17 = ((x193&x194)%(x195/x196));

	if (t17 != 60LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x197 = UINT32_MAX;
	static int8_t x198 = -16;
	int32_t x199 = INT32_MAX;
	volatile uint32_t t18 = 51U;

	t18 = ((x197&x198)%(x199/x200));

	if (t18 != 536870895U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x205 = INT64_MIN;
	volatile int16_t x206 = 13;
	int32_t x207 = INT32_MAX;
	volatile int64_t t19 = 87743211217LL;

	t19 = ((x205&x206)%(x207/x208));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x209 = INT32_MIN;
	int8_t x211 = INT8_MIN;
	int64_t t20 = 505337574LL;

	t20 = ((x209&x210)%(x211/x212));

	if (t20 != 5LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x213 = 1U;
	static uint8_t x214 = 2U;
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = 110;
	int32_t t21 = -35000;

	t21 = ((x213&x214)%(x215/x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x217 = INT32_MIN;
	uint32_t x218 = 506U;
	static int64_t x219 = 1314601172206814163LL;
	volatile uint64_t x220 = 1801433212LLU;
	static uint64_t t22 = 7078332848595662979LLU;

	t22 = ((x217&x218)%(x219/x220));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x221 = UINT32_MAX;
	volatile int8_t x222 = -1;
	uint16_t x223 = 1U;
	int8_t x224 = -1;
	volatile uint32_t t23 = 448401U;

	t23 = ((x221&x222)%(x223/x224));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MIN;
	static int8_t x227 = INT8_MIN;
	int8_t x228 = -29;

	t24 = ((x225&x226)%(x227/x228));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x230 = INT32_MIN;
	volatile int32_t x231 = -506628092;
	int32_t x232 = -25630;

	t25 = ((x229&x230)%(x231/x232));

	if (t25 != -6578) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x233 = INT64_MAX;
	volatile uint8_t x234 = UINT8_MAX;
	int16_t x235 = -3;
	static volatile uint64_t x236 = 66839085055LLU;
	static uint64_t t26 = 1834735339699390LLU;

	t26 = ((x233&x234)%(x235/x236));

	if (t26 != 255LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x257 = INT16_MAX;
	uint32_t x258 = 12481621U;

	t27 = ((x257&x258)%(x259/x260));

	if (t27 != 29781LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x261 = 2525097LLU;
	static int64_t x263 = -2349840435LL;
	volatile int16_t x264 = -7;
	volatile uint64_t t28 = 294699790757LLU;

	t28 = ((x261&x262)%(x263/x264));

	if (t28 != 2525097LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x274 = -1;
	uint16_t x275 = 822U;
	int8_t x276 = -6;
	static volatile int32_t t29 = -2494410;

	t29 = ((x273&x274)%(x275/x276));

	if (t29 != 119) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x281 = -1;
	int64_t x282 = -12359534144297802LL;
	uint32_t x283 = UINT32_MAX;

	t30 = ((x281&x282)%(x283/x284));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x285 = UINT32_MAX;
	uint16_t x286 = 1U;
	int64_t x287 = INT64_MIN;
	static int64_t t31 = 18857029LL;

	t31 = ((x285&x286)%(x287/x288));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x290 = 41;
	static int16_t x291 = INT16_MIN;
	int32_t x292 = 2027;

	t32 = ((x289&x290)%(x291/x292));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x293 = 14U;
	uint64_t x294 = 41258LLU;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = INT16_MIN;
	uint64_t t33 = 7211LLU;

	t33 = ((x293&x294)%(x295/x296));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x302 = 14U;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 636335U;
	volatile uint32_t t34 = 0U;

	t34 = ((x301&x302)%(x303/x304));

	if (t34 != 14U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x309 = INT8_MAX;
	int64_t x310 = -1LL;
	int64_t x311 = INT64_MIN;
	static uint8_t x312 = 102U;

	t35 = ((x309&x310)%(x311/x312));

	if (t35 != 127LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x313 = 0;
	int64_t x314 = -31833984LL;
	int16_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	uint64_t t36 = 403013390270471LLU;

	t36 = ((x313&x314)%(x315/x316));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x321 = 169417LL;
	int8_t x322 = INT8_MIN;
	int8_t x324 = INT8_MIN;

	t37 = ((x321&x322)%(x323/x324));

	if (t37 != 169344LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x329 = INT64_MIN;
	int16_t x331 = INT16_MIN;
	static int64_t t38 = -127123881926641806LL;

	t38 = ((x329&x330)%(x331/x332));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x337 = INT16_MAX;
	int64_t x338 = -1LL;
	uint32_t x339 = 838402640U;
	int32_t x340 = 1;

	t39 = ((x337&x338)%(x339/x340));

	if (t39 != 32767LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x341 = -1481606264486LL;
	static int64_t x342 = 7472905325724LL;
	static uint64_t t40 = 188669322LLU;

	t40 = ((x341&x342)%(x343/x344));

	if (t40 != 7159865804824LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x353 = 36U;
	volatile int32_t x355 = -1;
	uint64_t x356 = 1LLU;
	uint64_t t41 = 745500268LLU;

	t41 = ((x353&x354)%(x355/x356));

	if (t41 != 36LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x361 = INT64_MAX;
	static int64_t x362 = INT64_MIN;
	volatile int32_t x363 = INT32_MAX;
	int64_t x364 = -1LL;
	volatile int64_t t42 = 162567635LL;

	t42 = ((x361&x362)%(x363/x364));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x365 = 868;
	int8_t x367 = INT8_MIN;
	int64_t x368 = 24LL;
	int64_t t43 = 1817121356614753303LL;

	t43 = ((x365&x366)%(x367/x368));

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x381 = 15U;
	int16_t x382 = INT16_MIN;
	int16_t x383 = 954;
	int32_t x384 = -1;
	volatile int32_t t44 = -978234;

	t44 = ((x381&x382)%(x383/x384));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x385 = INT32_MAX;
	static uint64_t x386 = UINT64_MAX;
	volatile uint16_t x387 = 30549U;
	int8_t x388 = 2;
	uint64_t t45 = 30856747LLU;

	t45 = ((x385&x386)%(x387/x388));

	if (t45 != 5069LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x389 = -1;
	uint32_t x390 = 42538U;
	static int8_t x391 = -57;
	volatile uint32_t x392 = 619U;
	volatile uint32_t t46 = 38U;

	t46 = ((x389&x390)%(x391/x392));

	if (t46 != 42538U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x397 = INT64_MIN;
	uint32_t x398 = UINT32_MAX;
	volatile int8_t x400 = -3;
	volatile int64_t t47 = -6LL;

	t47 = ((x397&x398)%(x399/x400));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x401 = INT8_MAX;
	uint32_t x402 = 12213U;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	uint32_t t48 = 2218992U;

	t48 = ((x401&x402)%(x403/x404));

	if (t48 != 53U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x405 = INT16_MAX;
	int8_t x406 = INT8_MIN;
	int64_t x407 = INT64_MAX;
	static volatile int32_t x408 = 8696;

	t49 = ((x405&x406)%(x407/x408));

	if (t49 != 32640LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x414 = -89;
	int64_t x415 = INT64_MIN;
	int32_t x416 = INT32_MIN;
	int64_t t50 = -36LL;

	t50 = ((x413&x414)%(x415/x416));

	if (t50 != 3LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x417 = 2583LLU;
	int64_t x418 = INT64_MIN;
	volatile uint8_t x419 = UINT8_MAX;
	int16_t x420 = -1;

	t51 = ((x417&x418)%(x419/x420));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x425 = -1;
	static uint64_t x426 = 911LLU;
	static int16_t x428 = INT16_MIN;
	volatile uint64_t t52 = 16508LLU;

	t52 = ((x425&x426)%(x427/x428));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x429 = 7318242LLU;
	int16_t x430 = -1;
	int8_t x431 = -9;
	static int8_t x432 = -1;
	uint64_t t53 = 1012835LLU;

	t53 = ((x429&x430)%(x431/x432));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x434 = INT64_MIN;
	static int64_t x435 = INT64_MIN;
	uint32_t x436 = 12114745U;
	int64_t t54 = 970856925036LL;

	t54 = ((x433&x434)%(x435/x436));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x437 = 8;
	uint8_t x438 = 0U;
	int16_t x439 = INT16_MIN;
	volatile int64_t x440 = 86LL;
	volatile int64_t t55 = -54101904372LL;

	t55 = ((x437&x438)%(x439/x440));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x441 = UINT16_MAX;
	static volatile int16_t x442 = INT16_MIN;
	static volatile int8_t x443 = INT8_MIN;
	volatile uint32_t x444 = 191373U;
	uint32_t t56 = 4U;

	t56 = ((x441&x442)%(x443/x444));

	if (t56 != 10326U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x449 = INT16_MIN;
	static int16_t x450 = -1;
	uint64_t x451 = 33108004279366019LLU;
	uint32_t x452 = UINT32_MAX;
	static uint64_t t57 = 1037285767397225LLU;

	t57 = ((x449&x450)%(x451/x452));

	if (t57 != 1231811LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x469 = 6634U;
	int16_t x470 = INT16_MIN;
	int8_t x471 = INT8_MIN;
	static uint8_t x472 = 61U;
	static uint32_t t58 = 1575U;

	t58 = ((x469&x470)%(x471/x472));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x477 = -43;
	int64_t x479 = -106068118016LL;
	volatile int64_t t59 = -3178056493948793342LL;

	t59 = ((x477&x478)%(x479/x480));

	if (t59 != 221786884LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x485 = 63997594;
	uint64_t x486 = UINT64_MAX;
	int64_t x487 = 2000848859398LL;
	uint32_t x488 = 57772384U;
	static volatile uint64_t t60 = 122942326326104LLU;

	t60 = ((x485&x486)%(x487/x488));

	if (t60 != 30443LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x489 = INT32_MIN;
	uint16_t x490 = 7U;
	int32_t x491 = -2394421;
	int16_t x492 = -1;
	volatile int32_t t61 = 603415;

	t61 = ((x489&x490)%(x491/x492));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x501 = INT32_MAX;
	static int32_t x503 = INT32_MIN;
	volatile int32_t t62 = -3;

	t62 = ((x501&x502)%(x503/x504));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x506 = INT32_MIN;
	uint8_t x508 = UINT8_MAX;
	static int64_t t63 = -370728936642LL;

	t63 = ((x505&x506)%(x507/x508));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x509 = 3U;
	uint32_t x510 = UINT32_MAX;
	volatile int16_t x511 = INT16_MIN;
	uint32_t x512 = 40491515U;

	t64 = ((x509&x510)%(x511/x512));

	if (t64 != 3U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x514 = INT64_MAX;
	volatile int64_t x515 = INT64_MIN;
	static volatile int64_t t65 = -135417758888LL;

	t65 = ((x513&x514)%(x515/x516));

	if (t65 != 127LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x525 = -8313305644291134LL;
	int16_t x526 = INT16_MIN;
	uint8_t x527 = UINT8_MAX;
	int8_t x528 = INT8_MIN;
	static int64_t t66 = -18LL;

	t66 = ((x525&x526)%(x527/x528));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x534 = UINT64_MAX;
	static uint64_t t67 = 124092228723LLU;

	t67 = ((x533&x534)%(x535/x536));

	if (t67 != 8LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x537 = INT64_MAX;
	uint64_t x538 = UINT64_MAX;
	uint64_t t68 = 6777501938624926009LLU;

	t68 = ((x537&x538)%(x539/x540));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x541 = INT16_MIN;
	int32_t x543 = INT32_MAX;
	volatile int8_t x544 = -45;
	static uint64_t t69 = 15737545765421422LLU;

	t69 = ((x541&x542)%(x543/x544));

	if (t69 != 47689090LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x549 = 1U;
	volatile int32_t x551 = INT32_MIN;
	int8_t x552 = INT8_MAX;

	t70 = ((x549&x550)%(x551/x552));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x553 = 0U;
	static int64_t x554 = INT64_MIN;
	int64_t x555 = INT64_MIN;
	int64_t x556 = -139584738743419LL;
	int64_t t71 = 599024218752725408LL;

	t71 = ((x553&x554)%(x555/x556));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x561 = 5965U;
	int16_t x562 = INT16_MAX;
	int8_t x564 = INT8_MIN;
	int32_t t72 = 31062;

	t72 = ((x561&x562)%(x563/x564));

	if (t72 != 77) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x565 = -423;
	int8_t x566 = INT8_MIN;
	static uint8_t x567 = UINT8_MAX;

	t73 = ((x565&x566)%(x567/x568));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x573 = INT16_MAX;
	uint64_t x574 = 19245185LLU;
	uint8_t x576 = UINT8_MAX;
	uint64_t t74 = 4793619LLU;

	t74 = ((x573&x574)%(x575/x576));

	if (t74 != 89LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x577 = 90708234;
	int32_t x578 = -2023733;
	int16_t x579 = INT16_MIN;
	static volatile uint8_t x580 = 15U;
	volatile int32_t t75 = -3201;

	t75 = ((x577&x578)%(x579/x580));

	if (t75 != 1962) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x581 = UINT16_MAX;
	volatile int8_t x584 = 31;
	int32_t t76 = -251667085;

	t76 = ((x581&x582)%(x583/x584));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x589 = -1;
	int16_t x591 = INT16_MIN;
	int16_t x592 = -4;
	static int32_t t77 = 10;

	t77 = ((x589&x590)%(x591/x592));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x601 = 2U;
	volatile int64_t x602 = INT64_MIN;
	uint16_t x603 = 891U;

	t78 = ((x601&x602)%(x603/x604));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x613 = 0;
	int64_t x614 = INT64_MIN;
	int64_t x615 = INT64_MIN;
	static int8_t x616 = INT8_MIN;
	static int64_t t79 = -3561473821208611519LL;

	t79 = ((x613&x614)%(x615/x616));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x642 = -51675771029038035LL;
	volatile uint16_t x644 = 11217U;
	volatile uint64_t t80 = 30563865427LLU;

	t80 = ((x641&x642)%(x643/x644));

	if (t80 != 949334646166241LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x665 = 1LLU;
	static uint32_t x666 = 485U;
	static volatile int64_t x667 = INT64_MAX;
	static int16_t x668 = INT16_MIN;
	static volatile uint64_t t81 = 4LLU;

	t81 = ((x665&x666)%(x667/x668));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x671 = -1;
	static uint32_t x672 = 139479U;
	volatile int64_t t82 = 216022LL;

	t82 = ((x669&x670)%(x671/x672));

	if (t82 != -1136LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x675 = 4U;
	int16_t x676 = -1;
	int64_t t83 = -27411898818838442LL;

	t83 = ((x673&x674)%(x675/x676));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x677 = 11663751453555LLU;
	int64_t x678 = 32244471909LL;
	volatile int64_t x679 = INT64_MIN;
	volatile int64_t x680 = -17LL;
	volatile uint64_t t84 = 7177161LLU;

	t84 = ((x677&x678)%(x679/x680));

	if (t84 != 15061948513LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x681 = UINT32_MAX;
	volatile int16_t x682 = INT16_MIN;
	int32_t x683 = INT32_MAX;
	int64_t t85 = 61338906512656020LL;

	t85 = ((x681&x682)%(x683/x684));

	if (t85 != 68LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x685 = -92;
	uint32_t x686 = UINT32_MAX;
	int8_t x687 = -6;
	static volatile uint32_t t86 = 3U;

	t86 = ((x685&x686)%(x687/x688));

	if (t86 != 36U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x689 = INT64_MIN;
	int32_t x690 = INT32_MAX;
	volatile int8_t x691 = -1;
	static volatile uint32_t x692 = 23969157U;
	int64_t t87 = -6035736098638771LL;

	t87 = ((x689&x690)%(x691/x692));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x693 = 63;
	uint64_t x694 = 1035446643LLU;
	uint64_t t88 = 111081367948230995LLU;

	t88 = ((x693&x694)%(x695/x696));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x709 = UINT64_MAX;
	int16_t x710 = 1;
	static uint64_t t89 = 943LLU;

	t89 = ((x709&x710)%(x711/x712));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x713 = 17179U;
	static uint16_t x715 = UINT16_MAX;
	uint32_t t90 = 46511U;

	t90 = ((x713&x714)%(x715/x716));

	if (t90 != 11U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x738 = 12;
	static int64_t x739 = INT64_MIN;
	uint64_t x740 = 173735308303691728LLU;

	t91 = ((x737&x738)%(x739/x740));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x746 = UINT8_MAX;
	int16_t x748 = -512;

	t92 = ((x745&x746)%(x747/x748));

	if (t92 != 255U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x761 = 0U;
	volatile uint16_t x762 = UINT16_MAX;
	int16_t x763 = INT16_MIN;
	static int16_t x764 = 1678;
	uint32_t t93 = 3692U;

	t93 = ((x761&x762)%(x763/x764));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x765 = 13U;
	uint64_t x766 = UINT64_MAX;
	static volatile int8_t x767 = -1;
	uint64_t x768 = UINT64_MAX;
	volatile uint64_t t94 = 37705659228LLU;

	t94 = ((x765&x766)%(x767/x768));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x773 = -2;
	uint8_t x774 = 54U;
	int64_t x775 = 4241960000775LL;
	int64_t t95 = 12609990LL;

	t95 = ((x773&x774)%(x775/x776));

	if (t95 != 54LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x777 = INT16_MIN;
	int32_t x778 = 51768656;
	int8_t x779 = INT8_MIN;
	volatile uint8_t x780 = 23U;
	volatile int32_t t96 = 69030;

	t96 = ((x777&x778)%(x779/x780));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x781 = 9;
	uint8_t x782 = 107U;
	static int32_t x783 = -1;
	static uint64_t x784 = 3313675516225606LLU;
	uint64_t t97 = 506542663294LLU;

	t97 = ((x781&x782)%(x783/x784));

	if (t97 != 9LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x785 = 16U;
	int64_t x786 = -1LL;
	static uint8_t x787 = UINT8_MAX;
	uint8_t x788 = 31U;
	volatile int64_t t98 = 34989199599LL;

	t98 = ((x785&x786)%(x787/x788));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x789 = -1;
	int32_t x790 = INT32_MIN;
	static uint8_t x791 = UINT8_MAX;
	int32_t t99 = 9872409;

	t99 = ((x789&x790)%(x791/x792));

	if (t99 != -43) { NG(); } else { ; }
	
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

