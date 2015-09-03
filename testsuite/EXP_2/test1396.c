#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x29 = 10;
uint64_t x30 = 5492798LLU;
int64_t x31 = INT64_MIN;
int32_t t2 = -8597423;
volatile uint8_t x75 = UINT8_MAX;
volatile int32_t t5 = 59004;
uint16_t x79 = UINT16_MAX;
volatile int64_t x86 = -71LL;
int32_t x94 = INT32_MIN;
volatile int8_t x95 = INT8_MIN;
int64_t x100 = INT64_MIN;
static int32_t x123 = INT32_MIN;
int64_t x131 = 89834LL;
int64_t t12 = 525479LL;
uint32_t x141 = 28694452U;
int64_t x143 = INT64_MAX;
volatile uint64_t x152 = 72796381LLU;
volatile uint16_t x154 = UINT16_MAX;
static int64_t t16 = -15945390674LL;
static uint64_t x157 = 1833LLU;
uint32_t x160 = UINT32_MAX;
static int64_t x184 = INT64_MAX;
static int64_t t21 = 10319324740173408LL;
static int16_t x202 = INT16_MIN;
static int8_t x203 = INT8_MIN;
int32_t t22 = -770921;
volatile int8_t x212 = 5;
static uint32_t t23 = 6298U;
static volatile uint64_t x217 = UINT64_MAX;
static int8_t x220 = INT8_MIN;
volatile uint64_t t24 = 4305939552192757669LLU;
uint32_t x224 = 727198U;
int64_t t25 = -23224424840789LL;
static int64_t x242 = INT64_MIN;
static int32_t x243 = -1;
int8_t x244 = -1;
static uint32_t t29 = 539521289U;
static int8_t x255 = 12;
volatile uint64_t t34 = 1029317651360654LLU;
static int32_t t35 = -7412;
int32_t t36 = -347460198;
volatile int32_t x338 = -1;
uint32_t x345 = 1525U;
volatile int64_t x346 = -99021612241990LL;
int8_t x347 = 0;
uint32_t x355 = 1U;
uint8_t x357 = 0U;
int8_t x359 = INT8_MAX;
int32_t t41 = 16958;
volatile int64_t x371 = INT64_MAX;
int32_t x373 = INT32_MAX;
volatile uint32_t x376 = 115U;
int32_t t45 = -202;
int32_t t46 = 3712;
int32_t x424 = INT32_MAX;
volatile int64_t t49 = -1795271632995306LL;
uint64_t t50 = 65521LLU;
static volatile int32_t t51 = 3;
int8_t x470 = 27;
int16_t x477 = INT16_MIN;
int64_t x478 = INT64_MIN;
int8_t x491 = -1;
int16_t x493 = INT16_MAX;
uint16_t x494 = UINT16_MAX;
volatile int32_t t58 = 0;
uint8_t x527 = 41U;
int16_t x528 = -12644;
uint16_t x539 = 5500U;
volatile int64_t x553 = -1LL;
uint64_t x555 = 7471131189503LLU;
volatile uint16_t x565 = 1U;
int8_t x568 = INT8_MAX;
int8_t x570 = INT8_MIN;
int32_t x576 = INT32_MAX;
uint16_t x584 = 44U;
static volatile int16_t x586 = INT16_MIN;
int16_t x602 = INT16_MIN;
int32_t x609 = -1;
static uint64_t x628 = UINT64_MAX;
volatile int64_t t77 = -3243026558481545LL;
uint32_t x639 = 496U;
static volatile int16_t x656 = INT16_MAX;
int32_t t79 = -34873;
int8_t x668 = 1;
volatile uint16_t x671 = UINT16_MAX;
uint8_t x674 = 6U;
uint64_t x693 = 10169669336737LLU;
int8_t x707 = 11;
int8_t x709 = INT8_MIN;
int8_t x710 = -1;
static uint32_t x730 = UINT32_MAX;
static uint64_t x731 = UINT64_MAX;
int64_t x732 = INT64_MAX;
int32_t x752 = -1;
static volatile int32_t t91 = -1;
static int16_t x755 = -3;
volatile int32_t x761 = INT32_MIN;
volatile uint32_t x764 = 58791609U;
int32_t x766 = INT32_MAX;
int8_t x769 = 33;
static volatile int32_t x774 = 0;
int32_t x775 = 33614140;
uint64_t x776 = 510653194679324992LLU;
volatile uint64_t t97 = 3963381LLU;
static int64_t x816 = 1924238LL;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int32_t x2 = 62439;
	volatile uint64_t x3 = 1157735157532107LLU;
	uint64_t x4 = 33LLU;
	volatile uint64_t t0 = 140669032278886LLU;

	t0 = ((x1/(x2<x3))%x4);

	if (t0 != 3LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x17 = -1;
	int64_t x18 = 26003025332534LL;
	static uint64_t x19 = UINT64_MAX;
	int64_t x20 = -1LL;
	volatile int64_t t1 = -78505208517174212LL;

	t1 = ((x17/(x18<x19))%x20);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x32 = UINT8_MAX;

	t2 = ((x29/(x30<x31))%x32);

	if (t2 != 10) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x37 = INT16_MAX;
	static int32_t x38 = -347;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -1;
	volatile int32_t t3 = 1;

	t3 = ((x37/(x38<x39))%x40);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x61 = INT16_MIN;
	int32_t x62 = -1110147;
	int8_t x63 = INT8_MIN;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t4 = 7;

	t4 = ((x61/(x62<x63))%x64);

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x73 = 1;
	int16_t x74 = INT16_MIN;
	static int32_t x76 = -1;

	t5 = ((x73/(x74<x75))%x76);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	int64_t x80 = INT64_MIN;
	volatile int64_t t6 = -165LL;

	t6 = ((x77/(x78<x79))%x80);

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x85 = -588;
	uint32_t x87 = UINT32_MAX;
	static uint8_t x88 = 11U;
	int32_t t7 = -1;

	t7 = ((x85/(x86<x87))%x88);

	if (t7 != -5) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x93 = 1962;
	volatile int8_t x96 = INT8_MIN;
	int32_t t8 = -985469400;

	t8 = ((x93/(x94<x95))%x96);

	if (t8 != 42) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x97 = 1640;
	volatile uint32_t x98 = 92584387U;
	int16_t x99 = INT16_MIN;
	static volatile int64_t t9 = -165158874959LL;

	t9 = ((x97/(x98<x99))%x100);

	if (t9 != 1640LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x117 = -1;
	uint8_t x118 = 0U;
	uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MAX;
	static int32_t t10 = 497917;

	t10 = ((x117/(x118<x119))%x120);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x121 = INT32_MAX;
	int64_t x122 = INT64_MIN;
	int16_t x124 = INT16_MAX;
	volatile int32_t t11 = -21858703;

	t11 = ((x121/(x122<x123))%x124);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x129 = INT64_MAX;
	volatile int64_t x130 = -131497069488LL;
	uint8_t x132 = 13U;

	t12 = ((x129/(x130<x131))%x132);

	if (t12 != 7LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x137 = -1;
	volatile int8_t x138 = -1;
	int64_t x139 = INT64_MAX;
	int16_t x140 = -1;
	int32_t t13 = -2;

	t13 = ((x137/(x138<x139))%x140);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x142 = 10U;
	uint32_t x144 = UINT32_MAX;
	static uint32_t t14 = 157U;

	t14 = ((x141/(x142<x143))%x144);

	if (t14 != 28694452U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x149 = INT32_MIN;
	int8_t x150 = -4;
	int16_t x151 = -1;
	volatile uint64_t t15 = 2999270LLU;

	t15 = ((x149/(x150<x151))%x152);

	if (t15 != 40413366LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x153 = INT64_MIN;
	volatile int32_t x155 = 12842590;
	static int64_t x156 = 12069574239LL;

	t16 = ((x153/(x154<x155))%x156);

	if (t16 != -4705754879LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x158 = INT8_MIN;
	volatile int16_t x159 = 81;
	uint64_t t17 = 3435LLU;

	t17 = ((x157/(x158<x159))%x160);

	if (t17 != 1833LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x161 = 736035051530337LLU;
	int8_t x162 = INT8_MIN;
	static int64_t x163 = -1LL;
	int8_t x164 = 9;
	uint64_t t18 = 284288220LLU;

	t18 = ((x161/(x162<x163))%x164);

	if (t18 != 6LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x165 = INT8_MIN;
	int64_t x166 = INT64_MIN;
	int8_t x167 = 1;
	static volatile int16_t x168 = -1;
	volatile int32_t t19 = -427;

	t19 = ((x165/(x166<x167))%x168);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x177 = -1;
	int8_t x178 = INT8_MIN;
	int8_t x179 = -1;
	volatile uint64_t x180 = 48007512707842LLU;
	volatile uint64_t t20 = 396723939679338846LLU;

	t20 = ((x177/(x178<x179))%x180);

	if (t20 != 1338259386641LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x181 = INT64_MIN;
	static int32_t x182 = -1;
	int64_t x183 = INT64_MAX;

	t21 = ((x181/(x182<x183))%x184);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x201 = INT8_MIN;
	int32_t x204 = INT32_MIN;

	t22 = ((x201/(x202<x203))%x204);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x209 = 370560748U;
	static int8_t x210 = INT8_MAX;
	uint32_t x211 = 2005070U;

	t23 = ((x209/(x210<x211))%x212);

	if (t23 != 3U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x218 = 2954141U;
	int16_t x219 = -1;

	t24 = ((x217/(x218<x219))%x220);

	if (t24 != 127LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x221 = INT64_MIN;
	static uint8_t x222 = 120U;
	volatile uint32_t x223 = 1297361U;

	t25 = ((x221/(x222<x223))%x224);

	if (t25 != -77632LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x225 = -1;
	int32_t x226 = INT32_MIN;
	static int8_t x227 = INT8_MIN;
	uint8_t x228 = 1U;
	volatile int32_t t26 = -61597493;

	t26 = ((x225/(x226<x227))%x228);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x229 = UINT8_MAX;
	int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	uint8_t x232 = UINT8_MAX;
	int32_t t27 = 110484740;

	t27 = ((x229/(x230<x231))%x232);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x233 = 517998013152581LL;
	static int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MIN;
	static int64_t t28 = -429903829482757235LL;

	t28 = ((x233/(x234<x235))%x236);

	if (t28 != 1334934853LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x241 = UINT32_MAX;

	t29 = ((x241/(x242<x243))%x244);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	static volatile int16_t x247 = -1;
	int64_t x248 = -31755262579LL;
	volatile int64_t t30 = -4193003858103932135LL;

	t30 = ((x245/(x246<x247))%x248);

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x253 = 565U;
	int32_t x254 = -1;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t31 = -2199582;

	t31 = ((x253/(x254<x255))%x256);

	if (t31 != 565) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x265 = 3986004LL;
	int32_t x266 = INT32_MIN;
	volatile int16_t x267 = 1;
	int8_t x268 = -1;
	volatile int64_t t32 = 3201389271366143LL;

	t32 = ((x265/(x266<x267))%x268);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x273 = 998876U;
	int16_t x274 = INT16_MIN;
	int16_t x275 = 451;
	int64_t x276 = INT64_MAX;
	volatile int64_t t33 = -1828250778985435235LL;

	t33 = ((x273/(x274<x275))%x276);

	if (t33 != 998876LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x277 = -1;
	int32_t x278 = -211198;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = 16969076732444848LLU;

	t34 = ((x277/(x278<x279))%x280);

	if (t34 != 1357665542001839LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x289 = -1;
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MIN;

	t35 = ((x289/(x290<x291))%x292);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x329 = -144;
	static volatile int32_t x330 = INT32_MAX;
	static uint64_t x331 = UINT64_MAX;
	int16_t x332 = -1;

	t36 = ((x329/(x330<x331))%x332);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x337 = -1;
	static volatile int64_t x339 = 14444595079544275LL;
	int64_t x340 = INT64_MIN;
	int64_t t37 = -77706951730869LL;

	t37 = ((x337/(x338<x339))%x340);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x341 = -2;
	int8_t x342 = INT8_MIN;
	uint64_t x343 = UINT64_MAX;
	uint64_t x344 = 5112364LLU;
	uint64_t t38 = 1563196925554269LLU;

	t38 = ((x341/(x342<x343))%x344);

	if (t38 != 1240694LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x348 = UINT64_MAX;
	volatile uint64_t t39 = 6555042687247678995LLU;

	t39 = ((x345/(x346<x347))%x348);

	if (t39 != 1525LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x353 = -41581308773882638LL;
	static int64_t x354 = -1LL;
	int8_t x356 = -11;
	volatile int64_t t40 = 1LL;

	t40 = ((x353/(x354<x355))%x356);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x358 = INT64_MIN;
	static uint16_t x360 = 22105U;

	t41 = ((x357/(x358<x359))%x360);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x365 = UINT8_MAX;
	uint64_t x366 = 259263314105LLU;
	static int8_t x367 = -1;
	int16_t x368 = 50;
	volatile int32_t t42 = 244;

	t42 = ((x365/(x366<x367))%x368);

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x369 = INT64_MIN;
	int16_t x370 = 13528;
	int16_t x372 = -2;
	static volatile int64_t t43 = 92LL;

	t43 = ((x369/(x370<x371))%x372);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x374 = -1;
	int32_t x375 = 7;
	volatile uint32_t t44 = 399899806U;

	t44 = ((x373/(x374<x375))%x376);

	if (t44 != 97U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x381 = 0;
	int8_t x382 = INT8_MIN;
	int8_t x383 = -60;
	int16_t x384 = -1;

	t45 = ((x381/(x382<x383))%x384);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x405 = INT8_MAX;
	int16_t x406 = -6;
	int64_t x407 = -1LL;
	static int32_t x408 = -556;

	t46 = ((x405/(x406<x407))%x408);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x413 = UINT16_MAX;
	uint16_t x414 = 0U;
	int8_t x415 = 1;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t47 = 95390LLU;

	t47 = ((x413/(x414<x415))%x416);

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x421 = 6;
	int32_t x422 = INT32_MAX;
	volatile uint64_t x423 = UINT64_MAX;
	int32_t t48 = 253;

	t48 = ((x421/(x422<x423))%x424);

	if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MIN;
	int64_t x427 = -1LL;
	int32_t x428 = INT32_MIN;

	t49 = ((x425/(x426<x427))%x428);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x441 = INT64_MIN;
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MAX;
	volatile uint64_t x444 = 61323751LLU;

	t50 = ((x441/(x442<x443))%x444);

	if (t50 != 10635479LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x449 = 3U;
	volatile int64_t x450 = -189686094216LL;
	int8_t x451 = INT8_MAX;
	uint16_t x452 = 12U;

	t51 = ((x449/(x450<x451))%x452);

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x469 = 146;
	int64_t x471 = 51837437397LL;
	int64_t x472 = INT64_MIN;
	static volatile int64_t t52 = -168326361679LL;

	t52 = ((x469/(x470<x471))%x472);

	if (t52 != 146LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x473 = INT32_MIN;
	uint8_t x474 = UINT8_MAX;
	uint64_t x475 = 302939734LLU;
	int8_t x476 = INT8_MAX;
	static volatile int32_t t53 = -6232938;

	t53 = ((x473/(x474<x475))%x476);

	if (t53 != -8) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x479 = INT8_MIN;
	int32_t x480 = INT32_MIN;
	volatile int32_t t54 = -58;

	t54 = ((x477/(x478<x479))%x480);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x489 = 0U;
	static int64_t x490 = INT64_MIN;
	int16_t x492 = INT16_MIN;
	static int32_t t55 = 208594168;

	t55 = ((x489/(x490<x491))%x492);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x495 = UINT32_MAX;
	int16_t x496 = INT16_MIN;
	int32_t t56 = -68165490;

	t56 = ((x493/(x494<x495))%x496);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x497 = 2U;
	static int16_t x498 = INT16_MIN;
	volatile int64_t x499 = -1LL;
	static int16_t x500 = INT16_MIN;
	uint32_t t57 = 0U;

	t57 = ((x497/(x498<x499))%x500);

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x505 = 1U;
	volatile int16_t x506 = -256;
	int16_t x507 = -7;
	int16_t x508 = INT16_MIN;

	t58 = ((x505/(x506<x507))%x508);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x517 = 1;
	uint32_t x518 = 905U;
	uint32_t x519 = 3977U;
	volatile int32_t x520 = 1;
	int32_t t59 = -3867544;

	t59 = ((x517/(x518<x519))%x520);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x525 = 104LL;
	static volatile int8_t x526 = 27;
	volatile int64_t t60 = 813716892LL;

	t60 = ((x525/(x526<x527))%x528);

	if (t60 != 104LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x529 = -1LL;
	int8_t x530 = -1;
	static int16_t x531 = INT16_MAX;
	int32_t x532 = 15534814;
	int64_t t61 = 14997324LL;

	t61 = ((x529/(x530<x531))%x532);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x537 = UINT64_MAX;
	uint8_t x538 = 14U;
	static int8_t x540 = INT8_MAX;
	uint64_t t62 = 126589LLU;

	t62 = ((x537/(x538<x539))%x540);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x545 = -3874270;
	int8_t x546 = INT8_MAX;
	uint8_t x547 = UINT8_MAX;
	static int8_t x548 = -2;
	int32_t t63 = 0;

	t63 = ((x545/(x546<x547))%x548);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x554 = INT8_MAX;
	int16_t x556 = INT16_MIN;
	volatile int64_t t64 = -222747LL;

	t64 = ((x553/(x554<x555))%x556);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x561 = 95575;
	int32_t x562 = INT32_MIN;
	int16_t x563 = 13;
	volatile int16_t x564 = INT16_MIN;
	volatile int32_t t65 = -181;

	t65 = ((x561/(x562<x563))%x564);

	if (t65 != 30039) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x566 = -1LL;
	static uint16_t x567 = UINT16_MAX;
	static volatile int32_t t66 = -3056;

	t66 = ((x565/(x566<x567))%x568);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x569 = -1;
	static volatile uint64_t x571 = UINT64_MAX;
	int8_t x572 = INT8_MAX;
	int32_t t67 = -4;

	t67 = ((x569/(x570<x571))%x572);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x573 = -4;
	int64_t x574 = INT64_MIN;
	int8_t x575 = INT8_MIN;
	volatile int32_t t68 = -6;

	t68 = ((x573/(x574<x575))%x576);

	if (t68 != -4) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x581 = 101486U;
	int16_t x582 = -6;
	uint16_t x583 = 7U;
	volatile uint32_t t69 = 43U;

	t69 = ((x581/(x582<x583))%x584);

	if (t69 != 22U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x585 = -1LL;
	static int8_t x587 = -40;
	volatile uint64_t x588 = 387399177027226LLU;
	uint64_t t70 = 2043877665324312LLU;

	t70 = ((x585/(x586<x587))%x588);

	if (t70 != 344860381158399LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x593 = 68982076U;
	volatile int8_t x594 = 2;
	int64_t x595 = INT64_MAX;
	int8_t x596 = INT8_MAX;
	uint32_t t71 = 1203706U;

	t71 = ((x593/(x594<x595))%x596);

	if (t71 != 121U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x601 = 10;
	uint16_t x603 = 13U;
	int64_t x604 = INT64_MAX;
	static int64_t t72 = 18329728LL;

	t72 = ((x601/(x602<x603))%x604);

	if (t72 != 10LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x605 = 23U;
	volatile int8_t x606 = -5;
	uint16_t x607 = 7U;
	int32_t x608 = 2223;
	int32_t t73 = 311035;

	t73 = ((x605/(x606<x607))%x608);

	if (t73 != 23) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x610 = -10492;
	int16_t x611 = INT16_MAX;
	uint8_t x612 = 12U;
	static volatile int32_t t74 = 130282730;

	t74 = ((x609/(x610<x611))%x612);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x613 = 63U;
	uint8_t x614 = 111U;
	int16_t x615 = INT16_MAX;
	int64_t x616 = 412LL;
	volatile int64_t t75 = 46LL;

	t75 = ((x613/(x614<x615))%x616);

	if (t75 != 63LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x625 = 834645LL;
	volatile int64_t x626 = INT64_MIN;
	static int16_t x627 = -1;
	volatile uint64_t t76 = 58959888756507LLU;

	t76 = ((x625/(x626<x627))%x628);

	if (t76 != 834645LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x633 = 101U;
	uint32_t x634 = 41U;
	volatile int64_t x635 = INT64_MAX;
	int64_t x636 = INT64_MAX;

	t77 = ((x633/(x634<x635))%x636);

	if (t77 != 101LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x637 = 41U;
	int64_t x638 = -1875LL;
	int16_t x640 = INT16_MIN;
	int32_t t78 = -42;

	t78 = ((x637/(x638<x639))%x640);

	if (t78 != 41) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x653 = UINT8_MAX;
	int8_t x654 = 1;
	static uint32_t x655 = 11298820U;

	t79 = ((x653/(x654<x655))%x656);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x665 = INT32_MAX;
	uint8_t x666 = 0U;
	uint64_t x667 = UINT64_MAX;
	int32_t t80 = 78;

	t80 = ((x665/(x666<x667))%x668);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x669 = 8U;
	int16_t x670 = -1;
	uint64_t x672 = 126LLU;
	uint64_t t81 = 167LLU;

	t81 = ((x669/(x670<x671))%x672);

	if (t81 != 8LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x673 = INT8_MAX;
	int64_t x675 = 20848284425077LL;
	int8_t x676 = INT8_MIN;
	int32_t t82 = -2664809;

	t82 = ((x673/(x674<x675))%x676);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x689 = 556349946618817558LLU;
	static int64_t x690 = -165044LL;
	uint8_t x691 = UINT8_MAX;
	int32_t x692 = -416727;
	volatile uint64_t t83 = 133126858595LLU;

	t83 = ((x689/(x690<x691))%x692);

	if (t83 != 556349946618817558LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x694 = 65U;
	volatile uint32_t x695 = UINT32_MAX;
	volatile int16_t x696 = -1;
	uint64_t t84 = 2348LLU;

	t84 = ((x693/(x694<x695))%x696);

	if (t84 != 10169669336737LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x705 = INT32_MIN;
	volatile int16_t x706 = INT16_MIN;
	int64_t x708 = INT64_MIN;
	int64_t t85 = 1033293LL;

	t85 = ((x705/(x706<x707))%x708);

	if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x711 = INT16_MAX;
	static int16_t x712 = INT16_MIN;
	volatile int32_t t86 = 338565;

	t86 = ((x709/(x710<x711))%x712);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x721 = INT64_MAX;
	uint16_t x722 = 9U;
	int32_t x723 = 88064;
	int64_t x724 = -1LL;
	int64_t t87 = -28113LL;

	t87 = ((x721/(x722<x723))%x724);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x729 = 127U;
	int64_t t88 = 148750558LL;

	t88 = ((x729/(x730<x731))%x732);

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x737 = 1U;
	static int32_t x738 = 28;
	uint16_t x739 = 54U;
	int8_t x740 = -1;
	int32_t t89 = 163373;

	t89 = ((x737/(x738<x739))%x740);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x745 = INT16_MAX;
	uint8_t x746 = 19U;
	int16_t x747 = 42;
	int32_t x748 = 280610783;
	int32_t t90 = 1;

	t90 = ((x745/(x746<x747))%x748);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x749 = INT32_MIN;
	static int8_t x750 = INT8_MAX;
	volatile uint16_t x751 = UINT16_MAX;

	t91 = ((x749/(x750<x751))%x752);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x753 = UINT8_MAX;
	uint32_t x754 = 295U;
	static volatile int16_t x756 = 17;
	volatile int32_t t92 = -2;

	t92 = ((x753/(x754<x755))%x756);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x762 = 24U;
	int32_t x763 = 28775;
	volatile uint32_t t93 = 6825184U;

	t93 = ((x761/(x762<x763))%x764);

	if (t93 != 30985724U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x765 = -1;
	uint64_t x767 = UINT64_MAX;
	int64_t x768 = INT64_MIN;
	int64_t t94 = -16350LL;

	t94 = ((x765/(x766<x767))%x768);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x770 = INT32_MAX;
	uint64_t x771 = UINT64_MAX;
	int16_t x772 = -1873;
	volatile int32_t t95 = -5;

	t95 = ((x769/(x770<x771))%x772);

	if (t95 != 33) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x773 = INT16_MIN;
	volatile uint64_t t96 = 503LLU;

	t96 = ((x773/(x774<x775))%x776);

	if (t96 != 63229065253819136LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x781 = -1;
	uint64_t x782 = 3042373999609970586LLU;
	volatile int8_t x783 = -1;
	uint64_t x784 = UINT64_MAX;

	t97 = ((x781/(x782<x783))%x784);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x793 = UINT32_MAX;
	int64_t x794 = -204155340102486LL;
	static int32_t x795 = INT32_MIN;
	uint8_t x796 = 28U;
	volatile uint32_t t98 = 16158U;

	t98 = ((x793/(x794<x795))%x796);

	if (t98 != 3U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x813 = -30825LL;
	int16_t x814 = -1;
	int8_t x815 = 3;
	int64_t t99 = 21506107766775494LL;

	t99 = ((x813/(x814<x815))%x816);

	if (t99 != -30825LL) { NG(); } else { ; }
	
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

