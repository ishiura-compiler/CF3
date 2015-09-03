#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x17 = 23369058U;
uint8_t x18 = 1U;
int16_t x27 = -10;
uint32_t x29 = 84759U;
int32_t x38 = -1;
volatile int64_t x95 = 1730138324811LL;
int8_t x96 = 2;
uint8_t x101 = UINT8_MAX;
static int32_t x102 = -1;
uint64_t t11 = 1970181LLU;
uint64_t t12 = 234501826LLU;
uint32_t x133 = 1055U;
int16_t x134 = INT16_MAX;
uint16_t x144 = UINT16_MAX;
int64_t t15 = 33LL;
int8_t x145 = 3;
int16_t x149 = -21;
static uint16_t x152 = 80U;
uint32_t t18 = 206874867U;
int32_t t21 = -927;
int16_t x185 = INT16_MIN;
int8_t x195 = 51;
uint16_t x198 = 65U;
uint64_t x199 = UINT64_MAX;
uint64_t t24 = 0LLU;
int16_t x202 = INT16_MAX;
int64_t x212 = -1LL;
int32_t x216 = -1;
static volatile int8_t x219 = -1;
int32_t x222 = INT32_MIN;
int32_t t29 = -7;
volatile int32_t x232 = -1;
uint64_t x238 = 649742782894243LLU;
static int16_t x240 = INT16_MIN;
volatile uint16_t x257 = UINT16_MAX;
static volatile int64_t t32 = 19132780509126LL;
static int8_t x262 = INT8_MAX;
volatile uint64_t x273 = UINT64_MAX;
int32_t x343 = 418;
int64_t x349 = INT64_MIN;
int32_t x354 = -3;
uint8_t x356 = UINT8_MAX;
int32_t t42 = 1;
int64_t t43 = 20516920634268LL;
uint64_t x361 = 68LLU;
int32_t x392 = INT32_MIN;
static int32_t t46 = -7147;
uint64_t x393 = 196871891981666LLU;
int32_t x413 = 932841776;
int32_t x426 = -3196377;
uint8_t x428 = UINT8_MAX;
uint64_t x449 = 5072507060326075992LLU;
int16_t x451 = INT16_MIN;
volatile int32_t x470 = -1900;
int16_t x471 = INT16_MIN;
int16_t x472 = -15111;
uint64_t t56 = 48504749703LLU;
int64_t x498 = -181174LL;
uint64_t x506 = 72LLU;
volatile int32_t t61 = 935;
static volatile int32_t t62 = 250336401;
int8_t x553 = INT8_MIN;
static volatile int32_t t65 = 1696887;
volatile int32_t x571 = INT32_MAX;
volatile uint64_t x604 = 527870774394LLU;
volatile int8_t x624 = 8;
int64_t x634 = INT64_MIN;
int16_t x639 = INT16_MIN;
int8_t x642 = INT8_MIN;
uint32_t x647 = UINT32_MAX;
uint32_t x661 = UINT32_MAX;
volatile uint32_t x663 = UINT32_MAX;
int16_t x665 = 11667;
uint8_t x684 = 37U;
uint32_t x703 = UINT32_MAX;
int16_t x710 = INT16_MAX;
int8_t x711 = INT8_MIN;
static uint16_t x722 = 6792U;
volatile int32_t x723 = INT32_MAX;
int16_t x739 = -1;
volatile uint32_t t87 = 430U;
static int32_t x741 = INT32_MAX;
uint8_t x746 = 37U;
int16_t x748 = -1;
uint32_t x761 = 1376U;
int64_t t91 = 4LL;
int32_t x777 = INT32_MAX;
int32_t x803 = 44221537;
int64_t t96 = -1332460780LL;
static volatile int64_t x826 = INT64_MIN;
int64_t x833 = 1868LL;
uint8_t x839 = 16U;


void f0(void) {
	static volatile uint8_t x19 = 3U;
	uint32_t x20 = 2U;
	volatile uint32_t t0 = 6529026U;

	t0 = (x17&(x18/(x19/x20)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x21 = 2U;
	volatile int8_t x22 = INT8_MIN;
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MIN;
	int32_t t1 = 40542;

	t1 = (x21&(x22/(x23/x24)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x25 = 1;
	int32_t x26 = 4073247;
	volatile int32_t x28 = -1;
	int32_t t2 = -3158;

	t2 = (x25&(x26/(x27/x28)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x30 = INT64_MIN;
	static int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MIN;
	volatile int64_t t3 = -17501276894105LL;

	t3 = (x29&(x30/(x31/x32)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MAX;
	volatile int8_t x35 = INT8_MIN;
	volatile uint64_t x36 = 225233588402LLU;
	uint64_t t4 = 852782973LLU;

	t4 = (x33&(x34/(x35/x36)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x37 = UINT32_MAX;
	int32_t x39 = INT32_MIN;
	static volatile int8_t x40 = INT8_MIN;
	uint32_t t5 = 350190U;

	t5 = (x37&(x38/(x39/x40)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = INT32_MIN;
	volatile uint16_t x47 = UINT16_MAX;
	static volatile uint32_t x48 = 1139U;
	volatile uint32_t t6 = 22134U;

	t6 = (x45&(x46/(x47/x48)));

	if (t6 != 37675136U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x49 = 66873U;
	volatile int16_t x50 = 37;
	int32_t x51 = -127867441;
	int16_t x52 = INT16_MIN;
	volatile uint32_t t7 = 5U;

	t7 = (x49&(x50/(x51/x52)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	int64_t x88 = 453LL;
	volatile int64_t t8 = -6955434468725LL;

	t8 = (x85&(x86/(x87/x88)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x93 = -56;
	static int16_t x94 = INT16_MAX;
	int64_t t9 = -29177937809302120LL;

	t9 = (x93&(x94/(x95/x96)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x103 = INT64_MIN;
	uint32_t x104 = 107U;
	static volatile int64_t t10 = 257435485798457LL;

	t10 = (x101&(x102/(x103/x104)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x105 = -372;
	int16_t x106 = INT16_MIN;
	volatile uint64_t x107 = 76751053129787915LLU;
	uint64_t x108 = 556376005515467LLU;

	t11 = (x105&(x106/(x107/x108)));

	if (t11 != 134647766961383044LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x117 = INT16_MAX;
	static volatile uint32_t x118 = 250U;
	static uint64_t x119 = UINT64_MAX;
	volatile int64_t x120 = INT64_MAX;

	t12 = (x117&(x118/(x119/x120)));

	if (t12 != 125LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x125 = -1LL;
	int64_t x126 = -1LL;
	int32_t x127 = 475613;
	static int16_t x128 = -10202;
	volatile int64_t t13 = -244654234433LL;

	t13 = (x125&(x126/(x127/x128)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x135 = INT16_MIN;
	uint16_t x136 = 95U;
	volatile uint32_t t14 = 249342453U;

	t14 = (x133&(x134/(x135/x136)));

	if (t14 != 1025U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x141 = 0U;
	volatile int32_t x142 = -1;
	int64_t x143 = INT64_MIN;

	t15 = (x141&(x142/(x143/x144)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MIN;
	static volatile int8_t x148 = INT8_MIN;
	volatile int32_t t16 = -933491;

	t16 = (x145&(x146/(x147/x148)));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x150 = UINT32_MAX;
	uint16_t x151 = 105U;
	volatile uint32_t t17 = 657753U;

	t17 = (x149&(x150/(x151/x152)));

	if (t17 != 4294967275U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x157 = -266726489;
	static uint32_t x158 = 61814170U;
	int16_t x159 = 13479;
	volatile int8_t x160 = INT8_MIN;

	t18 = (x157&(x158/(x159/x160)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x161 = 1;
	static int16_t x162 = INT16_MIN;
	volatile int64_t x163 = INT64_MIN;
	static uint32_t x164 = 59479350U;
	volatile int64_t t19 = 7LL;

	t19 = (x161&(x162/(x163/x164)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x165 = 28357563U;
	int64_t x166 = 2113LL;
	volatile int32_t x167 = -157775049;
	static volatile int32_t x168 = -1;
	volatile int64_t t20 = 9496422LL;

	t20 = (x165&(x166/(x167/x168)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x177 = INT8_MAX;
	uint16_t x178 = UINT16_MAX;
	static int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MIN;

	t21 = (x177&(x178/(x179/x180)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x186 = 17U;
	uint64_t x187 = UINT64_MAX;
	static int8_t x188 = -3;
	uint64_t t22 = 3799986622LLU;

	t22 = (x185&(x186/(x187/x188)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x193 = INT32_MIN;
	static int16_t x194 = 2124;
	int32_t x196 = -1;
	int32_t t23 = INT32_MIN;

	t23 = (x193&(x194/(x195/x196)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x197 = 17U;
	int16_t x200 = INT16_MIN;

	t24 = (x197&(x198/(x199/x200)));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x201 = 51U;
	volatile int16_t x203 = -32;
	static uint64_t x204 = 6792356LLU;
	uint64_t t25 = 8579396936852LLU;

	t25 = (x201&(x202/(x203/x204)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x209 = 23;
	static int64_t x210 = -612077968030LL;
	int16_t x211 = -1;
	volatile int64_t t26 = 1313LL;

	t26 = (x209&(x210/(x211/x212)));

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x213 = INT32_MIN;
	static uint16_t x214 = UINT16_MAX;
	int64_t x215 = INT64_MAX;
	static volatile int64_t t27 = 50873758942559034LL;

	t27 = (x213&(x214/(x215/x216)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x217 = -1;
	int32_t x218 = 0;
	uint32_t x220 = 17304819U;
	volatile uint32_t t28 = 51U;

	t28 = (x217&(x218/(x219/x220)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x221 = INT8_MIN;
	static int32_t x223 = 30687;
	volatile int8_t x224 = INT8_MIN;

	t29 = (x221&(x222/(x223/x224)));

	if (t29 != 8985216) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x229 = INT8_MIN;
	uint64_t x230 = 3445LLU;
	int64_t x231 = INT64_MAX;
	uint64_t t30 = 49834LLU;

	t30 = (x229&(x230/(x231/x232)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x237 = INT64_MIN;
	static int32_t x239 = INT32_MAX;
	volatile uint64_t t31 = 1141169676LLU;

	t31 = (x237&(x238/(x239/x240)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x258 = -200680770411863LL;
	int64_t x259 = INT64_MAX;
	int16_t x260 = -1;

	t32 = (x257&(x258/(x259/x260)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x261 = INT8_MIN;
	static volatile uint32_t x263 = 2U;
	int8_t x264 = 2;
	static volatile uint32_t t33 = 10958U;

	t33 = (x261&(x262/(x263/x264)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x274 = 22839LLU;
	static int32_t x275 = -1;
	uint32_t x276 = UINT32_MAX;
	volatile uint64_t t34 = 6257551308154848956LLU;

	t34 = (x273&(x274/(x275/x276)));

	if (t34 != 22839LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x285 = 3371U;
	int16_t x286 = INT16_MIN;
	volatile int32_t x287 = INT32_MIN;
	static volatile int64_t x288 = -1147LL;
	int64_t t35 = -5LL;

	t35 = (x285&(x286/(x287/x288)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x289 = 11U;
	uint32_t x290 = 56792567U;
	int8_t x291 = -20;
	uint32_t x292 = 536695301U;
	volatile uint32_t t36 = 28U;

	t36 = (x289&(x290/(x291/x292)));

	if (t36 != 10U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x305 = UINT32_MAX;
	volatile int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 2U;
	uint32_t t37 = 821928311U;

	t37 = (x305&(x306/(x307/x308)));

	if (t37 != 512U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x313 = INT8_MIN;
	static int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MIN;
	int8_t x316 = -47;
	static int64_t t38 = -5928492LL;

	t38 = (x313&(x314/(x315/x316)));

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x341 = UINT64_MAX;
	static volatile uint16_t x342 = 16086U;
	volatile int8_t x344 = -1;
	uint64_t t39 = 2567LLU;

	t39 = (x341&(x342/(x343/x344)));

	if (t39 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x345 = 49LLU;
	int32_t x346 = -1;
	volatile int32_t x347 = INT32_MIN;
	static volatile uint8_t x348 = 33U;
	static uint64_t t40 = 414776523117LLU;

	t40 = (x345&(x346/(x347/x348)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x350 = 0U;
	uint64_t x351 = UINT64_MAX;
	static uint8_t x352 = 82U;
	volatile uint64_t t41 = 3596LLU;

	t41 = (x349&(x350/(x351/x352)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x353 = INT16_MIN;
	uint16_t x355 = UINT16_MAX;

	t42 = (x353&(x354/(x355/x356)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x357 = INT64_MIN;
	volatile int32_t x358 = 8795;
	int8_t x359 = -12;
	int32_t x360 = -1;

	t43 = (x357&(x358/(x359/x360)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x362 = -1;
	static int64_t x363 = -1LL;
	static volatile uint64_t x364 = 2480115662308102678LLU;
	volatile uint64_t t44 = 821669455LLU;

	t44 = (x361&(x362/(x363/x364)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x377 = 12205U;
	static uint32_t x378 = 108013U;
	int64_t x379 = -52423397196698LL;
	int16_t x380 = INT16_MIN;
	volatile int64_t t45 = 24LL;

	t45 = (x377&(x378/(x379/x380)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x389 = -10478;
	uint16_t x390 = 1U;
	int32_t x391 = INT32_MIN;

	t46 = (x389&(x390/(x391/x392)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x394 = INT16_MIN;
	uint32_t x395 = 10390U;
	int32_t x396 = 1947;
	static volatile uint64_t t47 = 30881903352480411LLU;

	t47 = (x393&(x394/(x395/x396)));

	if (t47 != 53481728LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x414 = INT8_MAX;
	static int16_t x415 = -17;
	volatile int8_t x416 = 4;
	volatile int32_t t48 = -9;

	t48 = (x413&(x414/(x415/x416)));

	if (t48 != 932841760) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x417 = INT8_MIN;
	uint64_t x418 = 1149LLU;
	volatile uint32_t x419 = UINT32_MAX;
	int32_t x420 = INT32_MAX;
	uint64_t t49 = 86440LLU;

	t49 = (x417&(x418/(x419/x420)));

	if (t49 != 512LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x425 = 1;
	uint8_t x427 = UINT8_MAX;
	static int32_t t50 = 981;

	t50 = (x425&(x426/(x427/x428)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x429 = INT64_MIN;
	volatile uint64_t x430 = 5LLU;
	int64_t x431 = INT64_MIN;
	int16_t x432 = INT16_MIN;
	static volatile uint64_t t51 = 126253466LLU;

	t51 = (x429&(x430/(x431/x432)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x450 = -28;
	int8_t x452 = INT8_MIN;
	volatile uint64_t t52 = 377950904LLU;

	t52 = (x449&(x450/(x451/x452)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x465 = 3U;
	int16_t x466 = 14;
	int16_t x467 = INT16_MIN;
	volatile int8_t x468 = INT8_MIN;
	static volatile int32_t t53 = 156749;

	t53 = (x465&(x466/(x467/x468)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x469 = INT32_MIN;
	volatile int32_t t54 = INT32_MIN;

	t54 = (x469&(x470/(x471/x472)));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x489 = INT16_MIN;
	uint64_t x490 = UINT64_MAX;
	int64_t x491 = INT64_MAX;
	uint32_t x492 = 6531455U;
	uint64_t t55 = 9754519400LLU;

	t55 = (x489&(x490/(x491/x492)));

	if (t55 != 13041664LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x493 = 192282519238LLU;
	volatile int16_t x494 = -1;
	int32_t x495 = INT32_MIN;
	int32_t x496 = 59844047;

	t56 = (x493&(x494/(x495/x496)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x497 = -1;
	static uint32_t x499 = UINT32_MAX;
	int8_t x500 = -1;
	static int64_t t57 = -24550LL;

	t57 = (x497&(x498/(x499/x500)));

	if (t57 != -181174LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x505 = -393091618784LL;
	volatile int16_t x507 = 29;
	uint8_t x508 = 11U;
	static volatile uint64_t t58 = 3716LLU;

	t58 = (x505&(x506/(x507/x508)));

	if (t58 != 32LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x509 = INT8_MAX;
	static uint64_t x510 = 671230588224996421LLU;
	int64_t x511 = INT64_MAX;
	int64_t x512 = INT64_MAX;
	uint64_t t59 = 7245431531577LLU;

	t59 = (x509&(x510/(x511/x512)));

	if (t59 != 69LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x517 = 278LL;
	static uint32_t x518 = UINT32_MAX;
	volatile int64_t x519 = INT64_MIN;
	int32_t x520 = INT32_MAX;
	int64_t t60 = -5LL;

	t60 = (x517&(x518/(x519/x520)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x529 = 10U;
	static int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MIN;
	static int8_t x532 = INT8_MAX;

	t61 = (x529&(x530/(x531/x532)));

	if (t61 != 10) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x533 = INT8_MIN;
	uint16_t x534 = UINT16_MAX;
	static int8_t x535 = 2;
	int16_t x536 = -1;

	t62 = (x533&(x534/(x535/x536)));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x545 = 1U;
	uint8_t x546 = UINT8_MAX;
	static volatile int16_t x547 = INT16_MIN;
	volatile int8_t x548 = 62;
	static int32_t t63 = 3852;

	t63 = (x545&(x546/(x547/x548)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x554 = -1LL;
	static uint32_t x555 = 13U;
	volatile int8_t x556 = 3;
	volatile int64_t t64 = 209423LL;

	t64 = (x553&(x554/(x555/x556)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x557 = -1;
	int16_t x558 = -80;
	volatile uint8_t x559 = UINT8_MAX;
	static volatile int16_t x560 = -1;

	t65 = (x557&(x558/(x559/x560)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x565 = 0U;
	static uint16_t x566 = 13U;
	static uint32_t x567 = UINT32_MAX;
	volatile int64_t x568 = -1LL;
	static int64_t t66 = 62941537475306808LL;

	t66 = (x565&(x566/(x567/x568)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x569 = UINT32_MAX;
	volatile uint16_t x570 = UINT16_MAX;
	int8_t x572 = INT8_MIN;
	uint32_t t67 = 61154U;

	t67 = (x569&(x570/(x571/x572)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x593 = -827;
	int64_t x594 = -1LL;
	uint8_t x595 = 14U;
	int32_t x596 = -1;
	int64_t t68 = -181329852958LL;

	t68 = (x593&(x594/(x595/x596)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x601 = -1LL;
	static uint32_t x602 = UINT32_MAX;
	static int16_t x603 = INT16_MIN;
	uint64_t t69 = 12LLU;

	t69 = (x601&(x602/(x603/x604)));

	if (t69 != 122LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x621 = -1LL;
	int32_t x622 = INT32_MAX;
	int16_t x623 = INT16_MIN;
	volatile int64_t t70 = -19162646554LL;

	t70 = (x621&(x622/(x623/x624)));

	if (t70 != -524287LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x633 = 5730U;
	int64_t x635 = INT64_MIN;
	int64_t x636 = INT64_MIN;
	int64_t t71 = 26028345LL;

	t71 = (x633&(x634/(x635/x636)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x637 = INT64_MAX;
	volatile int64_t x638 = -7LL;
	int32_t x640 = -3580;
	volatile int64_t t72 = 78340340315LL;

	t72 = (x637&(x638/(x639/x640)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x641 = -1;
	int64_t x643 = -7946009821452372LL;
	int64_t x644 = 456LL;
	int64_t t73 = 480397076052496LL;

	t73 = (x641&(x642/(x643/x644)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x645 = 65U;
	int8_t x646 = INT8_MIN;
	int32_t x648 = INT32_MIN;
	volatile uint32_t t74 = 6U;

	t74 = (x645&(x646/(x647/x648)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x662 = INT8_MIN;
	static uint16_t x664 = UINT16_MAX;
	uint32_t t75 = 4652791U;

	t75 = (x661&(x662/(x663/x664)));

	if (t75 != 65534U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x666 = UINT8_MAX;
	int64_t x667 = -1LL;
	uint64_t x668 = 1961544LLU;
	static volatile uint64_t t76 = 54322195724378307LLU;

	t76 = (x665&(x666/(x667/x668)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x681 = -1;
	volatile int16_t x682 = -1;
	static int16_t x683 = 43;
	int32_t t77 = 12;

	t77 = (x681&(x682/(x683/x684)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x689 = INT64_MIN;
	uint8_t x690 = 95U;
	uint16_t x691 = UINT16_MAX;
	int16_t x692 = INT16_MAX;
	int64_t t78 = -880898060LL;

	t78 = (x689&(x690/(x691/x692)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x693 = -1;
	uint8_t x694 = UINT8_MAX;
	uint8_t x695 = UINT8_MAX;
	int64_t x696 = -1LL;
	int64_t t79 = -2792LL;

	t79 = (x693&(x694/(x695/x696)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x701 = 25873601308LLU;
	int16_t x702 = INT16_MIN;
	uint8_t x704 = 121U;
	volatile uint64_t t80 = 27731370129048151LLU;

	t80 = (x701&(x702/(x703/x704)));

	if (t80 != 24LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x709 = 61516732U;
	static uint32_t x712 = 676152419U;
	volatile uint32_t t81 = 65559795U;

	t81 = (x709&(x710/(x711/x712)));

	if (t81 != 276U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x713 = -6;
	uint32_t x714 = UINT32_MAX;
	static int16_t x715 = INT16_MIN;
	volatile uint8_t x716 = 125U;
	volatile uint32_t t82 = 6070961U;

	t82 = (x713&(x714/(x715/x716)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x717 = INT16_MAX;
	int64_t x718 = INT64_MIN;
	int16_t x719 = INT16_MIN;
	static int8_t x720 = INT8_MIN;
	int64_t t83 = 101745152231LL;

	t83 = (x717&(x718/(x719/x720)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x721 = INT16_MIN;
	int16_t x724 = INT16_MAX;
	volatile int32_t t84 = -3;

	t84 = (x721&(x722/(x723/x724)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x725 = -1;
	int16_t x726 = -1;
	static int32_t x727 = INT32_MIN;
	int16_t x728 = 2724;
	int32_t t85 = -8127204;

	t85 = (x725&(x726/(x727/x728)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x729 = -14324LL;
	static int64_t x730 = INT64_MIN;
	uint64_t x731 = 1833786LLU;
	uint8_t x732 = 10U;
	uint64_t t86 = 151120017817133LLU;

	t86 = (x729&(x730/(x731/x732)));

	if (t86 != 50297047828492LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x737 = INT32_MAX;
	volatile int8_t x738 = INT8_MIN;
	static uint32_t x740 = 291U;

	t87 = (x737&(x738/(x739/x740)));

	if (t87 != 291U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x742 = 1;
	int8_t x743 = INT8_MIN;
	volatile uint64_t x744 = 1507228206LLU;
	uint64_t t88 = 17882LLU;

	t88 = (x741&(x742/(x743/x744)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x745 = 3;
	int16_t x747 = INT16_MIN;
	volatile int32_t t89 = -25096574;

	t89 = (x745&(x746/(x747/x748)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x762 = INT8_MAX;
	volatile uint64_t x763 = UINT64_MAX;
	int32_t x764 = INT32_MIN;
	uint64_t t90 = 16867288341787LLU;

	t90 = (x761&(x762/(x763/x764)));

	if (t90 != 96LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x765 = INT32_MAX;
	int16_t x766 = -1;
	int64_t x767 = INT64_MAX;
	int16_t x768 = -7891;

	t91 = (x765&(x766/(x767/x768)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x778 = 5U;
	int32_t x779 = INT32_MIN;
	int16_t x780 = INT16_MIN;
	volatile uint32_t t92 = 155658U;

	t92 = (x777&(x778/(x779/x780)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x785 = -4753943333LL;
	int8_t x786 = -29;
	int32_t x787 = INT32_MIN;
	int64_t x788 = -1LL;
	volatile int64_t t93 = 133122526583LL;

	t93 = (x785&(x786/(x787/x788)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x789 = -7;
	int16_t x790 = 2982;
	volatile int8_t x791 = INT8_MIN;
	uint32_t x792 = 227030290U;
	volatile uint32_t t94 = 21042293U;

	t94 = (x789&(x790/(x791/x792)));

	if (t94 != 161U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x801 = 2413U;
	int16_t x802 = INT16_MIN;
	uint16_t x804 = 118U;
	volatile int32_t t95 = -64;

	t95 = (x801&(x802/(x803/x804)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x813 = INT32_MIN;
	int64_t x814 = -1LL;
	int64_t x815 = INT64_MAX;
	uint8_t x816 = 5U;

	t96 = (x813&(x814/(x815/x816)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x825 = UINT32_MAX;
	int64_t x827 = INT64_MIN;
	volatile int16_t x828 = -9794;
	static int64_t t97 = -424LL;

	t97 = (x825&(x826/(x827/x828)));

	if (t97 != 4294957502LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x834 = 55U;
	int64_t x835 = INT64_MIN;
	static uint32_t x836 = 1U;
	volatile int64_t t98 = 202LL;

	t98 = (x833&(x834/(x835/x836)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x837 = UINT8_MAX;
	static volatile uint16_t x838 = UINT16_MAX;
	uint8_t x840 = 6U;
	volatile int32_t t99 = 196;

	t99 = (x837&(x838/(x839/x840)));

	if (t99 != 255) { NG(); } else { ; }
	
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

