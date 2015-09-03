#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = INT64_MIN;
uint8_t x8 = UINT8_MAX;
volatile int16_t x24 = INT16_MAX;
static uint64_t x36 = UINT64_MAX;
volatile int32_t t2 = -228;
int16_t x39 = INT16_MAX;
volatile int32_t x54 = INT32_MIN;
uint64_t x56 = 72473875364968LLU;
static int64_t x58 = INT64_MAX;
int32_t x65 = INT32_MIN;
int8_t x68 = INT8_MIN;
uint32_t x75 = 0U;
int8_t x76 = -1;
volatile uint64_t x81 = 848138775310248LLU;
volatile int16_t x106 = INT16_MIN;
static volatile uint64_t x149 = 2400876LLU;
volatile int64_t x162 = -57856934975454LL;
volatile int64_t t14 = -2335671239839795LL;
volatile int32_t x205 = -1;
static int32_t x214 = -1;
int8_t x215 = -1;
int64_t x221 = INT64_MAX;
int32_t x222 = -1294812;
uint64_t x225 = UINT64_MAX;
volatile uint32_t x228 = 279304759U;
uint64_t x229 = 23811LLU;
uint16_t x240 = 253U;
volatile uint64_t x247 = 380LLU;
int32_t x248 = INT32_MIN;
uint32_t t25 = 899817U;
int64_t x323 = INT64_MIN;
static uint64_t t30 = UINT64_MAX;
int64_t x328 = 274220731011225616LL;
int8_t x335 = INT8_MIN;
volatile int16_t x336 = 1;
int64_t t32 = 86629410LL;
static int8_t x350 = -5;
int32_t t34 = 328689936;
volatile int16_t x357 = INT16_MIN;
int64_t x359 = INT64_MIN;
static volatile int32_t x368 = INT32_MAX;
volatile int64_t t36 = INT64_MAX;
int32_t x377 = 271;
uint16_t x389 = 2U;
uint8_t x390 = UINT8_MAX;
uint8_t x400 = 0U;
volatile int32_t t41 = 0;
int8_t x403 = INT8_MIN;
uint8_t x404 = 24U;
int8_t x425 = INT8_MIN;
uint64_t x436 = UINT64_MAX;
volatile int64_t t47 = 92201566152LL;
int64_t x464 = INT64_MAX;
static int32_t x468 = 3;
static int16_t x478 = -1;
volatile int32_t t50 = 92;
volatile int32_t x489 = -1;
volatile int32_t x490 = INT32_MIN;
int16_t x491 = INT16_MIN;
int16_t x501 = -1;
volatile int8_t x502 = -1;
volatile int16_t x507 = INT16_MIN;
volatile uint16_t x517 = 6U;
static int16_t x518 = 121;
volatile int32_t x520 = INT32_MIN;
static volatile uint8_t x540 = 1U;
uint8_t x545 = 75U;
int16_t x548 = -1;
static int32_t x553 = 0;
int32_t t59 = -11198795;
volatile uint16_t x559 = 9127U;
int8_t x567 = INT8_MIN;
volatile uint32_t t62 = 22166U;
int32_t t64 = -2;
volatile int32_t t65 = 209;
static uint64_t x594 = UINT64_MAX;
volatile uint8_t x608 = 9U;
volatile uint8_t x619 = 63U;
volatile uint32_t x634 = 18723536U;
int8_t x644 = -3;
int8_t x662 = -1;
int16_t x663 = INT16_MIN;
int32_t x674 = -53790;
int32_t t77 = 98;
int16_t x701 = -1;
volatile uint16_t x702 = 41U;
volatile int32_t t78 = -33678;
int64_t x722 = INT64_MAX;
int64_t x723 = -20130774268LL;
uint8_t x726 = UINT8_MAX;
int8_t x739 = 0;
int32_t x740 = 108517602;
volatile int32_t t81 = -351232039;
int8_t x749 = INT8_MAX;
int64_t x751 = -1LL;
int8_t x752 = INT8_MAX;
uint8_t x761 = 29U;
int8_t x762 = -1;
volatile int32_t t84 = 35358;
volatile uint64_t x767 = 91774429111722LLU;
volatile int16_t x768 = INT16_MIN;
int64_t x799 = -1LL;
static int32_t x805 = -1;
int8_t x821 = INT8_MAX;
int64_t x822 = 26568188179LL;
uint8_t x823 = 24U;
int64_t t89 = -139860009451287LL;
int8_t x825 = 22;
int16_t x827 = INT16_MIN;
volatile int32_t t90 = -4307;
uint32_t x838 = 587830U;
uint32_t x840 = UINT32_MAX;
int64_t x851 = 1038436LL;
static int64_t x859 = -1LL;
int16_t x877 = -8;
volatile int32_t t97 = 184027232;
uint64_t t98 = 25564116344477LLU;
uint8_t x889 = UINT8_MAX;
int16_t x892 = 5;


void f0(void) {
	int32_t x5 = INT32_MAX;
	int64_t x7 = -713LL;
	int64_t t0 = -2LL;

	t0 = (x5|(x6/(x7<x8)));

	if (t0 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x21 = INT32_MAX;
	static int32_t x22 = INT32_MAX;
	static int32_t x23 = 70;
	int32_t t1 = INT32_MAX;

	t1 = (x21|(x22/(x23<x24)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x33 = 2;
	int16_t x34 = -1;
	int32_t x35 = -160800608;

	t2 = (x33|(x34/(x35<x36)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x37 = INT64_MAX;
	volatile int64_t x38 = INT64_MIN;
	int32_t x40 = 6401445;
	volatile int64_t t3 = -2008813LL;

	t3 = (x37|(x38/(x39<x40)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x53 = -1;
	uint64_t x55 = 101065504LLU;
	volatile int32_t t4 = -169;

	t4 = (x53|(x54/(x55<x56)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x57 = INT8_MIN;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	int64_t t5 = -71559348987242636LL;

	t5 = (x57|(x58/(x59<x60)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x66 = 719774U;
	int32_t x67 = -172426;
	volatile uint32_t t6 = 341U;

	t6 = (x65|(x66/(x67<x68)));

	if (t6 != 2148203422U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x73 = 1;
	static uint64_t x74 = 3811395594007370076LLU;
	static volatile uint64_t t7 = 480LLU;

	t7 = (x73|(x74/(x75<x76)));

	if (t7 != 3811395594007370077LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x82 = INT16_MIN;
	uint32_t x83 = 119316U;
	uint32_t x84 = UINT32_MAX;
	uint64_t t8 = 2200960905684178LLU;

	t8 = (x81|(x82/(x83<x84)));

	if (t8 != 18446744073709531048LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x93 = -21;
	volatile int32_t x94 = -1;
	static uint32_t x95 = 214U;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t9 = 988428644;

	t9 = (x93|(x94/(x95<x96)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x105 = -6810;
	uint64_t x107 = 62LLU;
	int8_t x108 = INT8_MAX;
	volatile int32_t t10 = 2041403;

	t10 = (x105|(x106/(x107<x108)));

	if (t10 != -6810) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = UINT16_MAX;
	static int8_t x119 = INT8_MIN;
	uint64_t x120 = UINT64_MAX;
	int32_t t11 = -112038711;

	t11 = (x117|(x118/(x119<x120)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x137 = UINT32_MAX;
	int64_t x138 = -6906698337LL;
	static int64_t x139 = INT64_MIN;
	int32_t x140 = 53517709;
	int64_t t12 = -1800432594638595LL;

	t12 = (x137|(x138/(x139<x140)));

	if (t12 != -4294967297LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x150 = UINT8_MAX;
	static volatile uint16_t x151 = 9033U;
	int64_t x152 = INT64_MAX;
	static volatile uint64_t t13 = 268711753432LLU;

	t13 = (x149|(x150/(x151<x152)));

	if (t13 != 2401023LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x161 = 178891;
	int8_t x163 = INT8_MIN;
	volatile int8_t x164 = INT8_MAX;

	t14 = (x161|(x162/(x163<x164)));

	if (t14 != -57856934806805LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x206 = 743653427395LLU;
	static int64_t x207 = -37LL;
	int16_t x208 = INT16_MAX;
	static uint64_t t15 = UINT64_MAX;

	t15 = (x205|(x206/(x207<x208)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x213 = -23;
	uint8_t x216 = 80U;
	int32_t t16 = -11;

	t16 = (x213|(x214/(x215<x216)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x223 = 7;
	static uint16_t x224 = 14U;
	int64_t t17 = -1537454547060LL;

	t17 = (x221|(x222/(x223<x224)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x226 = INT32_MAX;
	int8_t x227 = 0;
	static volatile uint64_t t18 = UINT64_MAX;

	t18 = (x225|(x226/(x227<x228)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x230 = -1096368890LL;
	int64_t x231 = -1LL;
	int32_t x232 = INT32_MAX;
	volatile uint64_t t19 = 23675803556636613LLU;

	t19 = (x229|(x230/(x231<x232)));

	if (t19 != 18446744072613199111LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x237 = 3LL;
	int32_t x238 = -197;
	int8_t x239 = -1;
	volatile int64_t t20 = -4558389LL;

	t20 = (x237|(x238/(x239<x240)));

	if (t20 != -197LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x245 = 3832827373193LLU;
	int8_t x246 = INT8_MIN;
	static volatile uint64_t t21 = 1696LLU;

	t21 = (x245|(x246/(x247<x248)));

	if (t21 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x249 = INT32_MIN;
	uint32_t x250 = 9U;
	static volatile int16_t x251 = -1290;
	uint32_t x252 = UINT32_MAX;
	uint32_t t22 = 19584U;

	t22 = (x249|(x250/(x251<x252)));

	if (t22 != 2147483657U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x277 = INT64_MIN;
	uint8_t x278 = 6U;
	static volatile int64_t x279 = -1LL;
	uint32_t x280 = 60U;
	volatile int64_t t23 = 269877LL;

	t23 = (x277|(x278/(x279<x280)));

	if (t23 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x281 = -1;
	volatile int32_t x282 = INT32_MIN;
	volatile uint16_t x283 = 383U;
	uint32_t x284 = 430865U;
	static volatile int32_t t24 = 779891;

	t24 = (x281|(x282/(x283<x284)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x289 = 89U;
	int32_t x290 = 15544;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 5400U;

	t25 = (x289|(x290/(x291<x292)));

	if (t25 != 15609U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x297 = -1;
	uint64_t x298 = 184946603LLU;
	static int64_t x299 = -9558915LL;
	static int32_t x300 = -1;
	uint64_t t26 = UINT64_MAX;

	t26 = (x297|(x298/(x299<x300)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x301 = -3;
	static volatile uint16_t x302 = 25U;
	int32_t x303 = INT32_MIN;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t27 = -33937021;

	t27 = (x301|(x302/(x303<x304)));

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x309 = -1;
	int64_t x310 = INT64_MAX;
	static int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;
	int64_t t28 = 791396LL;

	t28 = (x309|(x310/(x311<x312)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x317 = 0U;
	volatile uint8_t x318 = 3U;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = 3U;
	volatile int32_t t29 = 1;

	t29 = (x317|(x318/(x319<x320)));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x321 = UINT64_MAX;
	uint16_t x322 = UINT16_MAX;
	uint64_t x324 = UINT64_MAX;

	t30 = (x321|(x322/(x323<x324)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x325 = 2054606LLU;
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	volatile uint64_t t31 = 237273865173LLU;

	t31 = (x325|(x326/(x327<x328)));

	if (t31 != 18446744073709541838LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x333 = -1LL;
	uint32_t x334 = UINT32_MAX;

	t32 = (x333|(x334/(x335<x336)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MAX;
	int64_t t33 = 73833241560911505LL;

	t33 = (x345|(x346/(x347<x348)));

	if (t33 != -2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x349 = -623600045;
	int32_t x351 = -113388;
	int32_t x352 = -1;

	t34 = (x349|(x350/(x351<x352)));

	if (t34 != -5) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x358 = 39LLU;
	static int8_t x360 = -8;
	static uint64_t t35 = 393LLU;

	t35 = (x357|(x358/(x359<x360)));

	if (t35 != 18446744073709518887LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x365 = INT64_MAX;
	uint8_t x366 = UINT8_MAX;
	volatile int8_t x367 = -1;

	t36 = (x365|(x366/(x367<x368)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x373 = -1;
	volatile int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	static int64_t x376 = 17498474454LL;
	static int32_t t37 = -4077608;

	t37 = (x373|(x374/(x375<x376)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x378 = INT32_MIN;
	volatile int16_t x379 = INT16_MIN;
	static int64_t x380 = -1LL;
	static int32_t t38 = 100394;

	t38 = (x377|(x378/(x379<x380)));

	if (t38 != -2147483377) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x385 = INT8_MIN;
	volatile int64_t x386 = -1LL;
	volatile int8_t x387 = -3;
	int16_t x388 = 131;
	volatile int64_t t39 = 98039LL;

	t39 = (x385|(x386/(x387<x388)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x391 = INT32_MIN;
	uint16_t x392 = 62U;
	volatile int32_t t40 = 880256506;

	t40 = (x389|(x390/(x391<x392)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x397 = INT8_MAX;
	static int32_t x398 = -1;
	int16_t x399 = INT16_MIN;

	t41 = (x397|(x398/(x399<x400)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x401 = INT16_MIN;
	int64_t x402 = 2056528LL;
	int64_t t42 = 101779428640020LL;

	t42 = (x401|(x402/(x403<x404)));

	if (t42 != -7856LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x409 = -37;
	static int8_t x410 = 1;
	int64_t x411 = INT64_MIN;
	int16_t x412 = -35;
	volatile int32_t t43 = -416896139;

	t43 = (x409|(x410/(x411<x412)));

	if (t43 != -37) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x413 = -22690637304LL;
	int32_t x414 = -22;
	volatile int64_t x415 = INT64_MIN;
	uint16_t x416 = 0U;
	volatile int64_t t44 = 489201LL;

	t44 = (x413|(x414/(x415<x416)));

	if (t44 != -22LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x426 = 0;
	static int64_t x427 = -1LL;
	int16_t x428 = 2;
	int32_t t45 = 67850;

	t45 = (x425|(x426/(x427<x428)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x433 = UINT16_MAX;
	volatile int8_t x434 = -1;
	static int64_t x435 = INT64_MIN;
	int32_t t46 = 1511;

	t46 = (x433|(x434/(x435<x436)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x445 = INT8_MAX;
	int64_t x446 = -446537LL;
	volatile int64_t x447 = -37096110074088LL;
	int16_t x448 = -12;

	t47 = (x445|(x446/(x447<x448)));

	if (t47 != -446465LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x461 = 5U;
	int16_t x462 = 1;
	uint8_t x463 = UINT8_MAX;
	volatile int32_t t48 = -72;

	t48 = (x461|(x462/(x463<x464)));

	if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x465 = 377081828846LLU;
	static int16_t x466 = -1;
	int64_t x467 = -1LL;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x465|(x466/(x467<x468)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x477 = INT8_MIN;
	volatile int16_t x479 = -1;
	int64_t x480 = INT64_MAX;

	t50 = (x477|(x478/(x479<x480)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x492 = 0;
	volatile int32_t t51 = 3381;

	t51 = (x489|(x490/(x491<x492)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x493 = INT8_MIN;
	int32_t x494 = INT32_MIN;
	int8_t x495 = INT8_MIN;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t52 = 5893726;

	t52 = (x493|(x494/(x495<x496)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x497 = INT16_MIN;
	volatile uint16_t x498 = 846U;
	int32_t x499 = INT32_MIN;
	volatile int32_t x500 = INT32_MAX;
	int32_t t53 = 279494;

	t53 = (x497|(x498/(x499<x500)));

	if (t53 != -31922) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x503 = -42;
	static volatile int8_t x504 = -27;
	volatile int32_t t54 = -671;

	t54 = (x501|(x502/(x503<x504)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x505 = -2;
	uint8_t x506 = 79U;
	uint16_t x508 = 32U;
	int32_t t55 = 212204;

	t55 = (x505|(x506/(x507<x508)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x519 = 29921268U;
	int32_t t56 = -31;

	t56 = (x517|(x518/(x519<x520)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x537 = -957;
	int64_t x538 = INT64_MIN;
	int64_t x539 = -6804LL;
	static volatile int64_t t57 = -217563LL;

	t57 = (x537|(x538/(x539<x540)));

	if (t57 != -957LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x546 = INT64_MIN;
	int8_t x547 = INT8_MIN;
	int64_t t58 = -7758555351801LL;

	t58 = (x545|(x546/(x547<x548)));

	if (t58 != -9223372036854775733LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x554 = 27;
	static int16_t x555 = INT16_MAX;
	uint64_t x556 = 56556765363691531LLU;

	t59 = (x553|(x554/(x555<x556)));

	if (t59 != 27) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x557 = -24;
	uint8_t x558 = 23U;
	int16_t x560 = INT16_MAX;
	volatile int32_t t60 = 341487;

	t60 = (x557|(x558/(x559<x560)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x561 = INT8_MIN;
	int16_t x562 = INT16_MIN;
	uint16_t x563 = 7U;
	uint32_t x564 = 425U;
	int32_t t61 = -15294968;

	t61 = (x561|(x562/(x563<x564)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x565 = 38U;
	static uint16_t x566 = 0U;
	uint16_t x568 = UINT16_MAX;

	t62 = (x565|(x566/(x567<x568)));

	if (t62 != 38U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x573 = 16971721729778876LLU;
	uint32_t x574 = 63897311U;
	uint64_t x575 = 117657347471LLU;
	int32_t x576 = -1;
	volatile uint64_t t63 = 11LLU;

	t63 = (x573|(x574/(x575<x576)));

	if (t63 != 16971721780166399LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x581 = 48U;
	static int32_t x582 = INT32_MIN;
	int32_t x583 = -84030;
	static volatile int16_t x584 = -233;

	t64 = (x581|(x582/(x583<x584)));

	if (t64 != -2147483600) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x585 = -52966389;
	static int16_t x586 = INT16_MIN;
	int16_t x587 = INT16_MIN;
	static int32_t x588 = -1;

	t65 = (x585|(x586/(x587<x588)));

	if (t65 != -13301) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x593 = 4006;
	static uint64_t x595 = 17245088497LLU;
	static volatile int64_t x596 = -1LL;
	uint64_t t66 = UINT64_MAX;

	t66 = (x593|(x594/(x595<x596)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x605 = INT8_MIN;
	uint64_t x606 = 2349108528600845LLU;
	int64_t x607 = 0LL;
	static uint64_t t67 = 292420LLU;

	t67 = (x605|(x606/(x607<x608)));

	if (t67 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x613 = INT8_MAX;
	int16_t x614 = INT16_MAX;
	int16_t x615 = INT16_MAX;
	uint16_t x616 = UINT16_MAX;
	volatile int32_t t68 = -1696988;

	t68 = (x613|(x614/(x615<x616)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x617 = 1368U;
	volatile int64_t x618 = -44638LL;
	volatile int64_t x620 = 3820781140LL;
	int64_t t69 = 615LL;

	t69 = (x617|(x618/(x619<x620)));

	if (t69 != -43526LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x629 = 107U;
	uint32_t x630 = 19U;
	volatile uint32_t x631 = 171U;
	int16_t x632 = INT16_MAX;
	static volatile uint32_t t70 = 988U;

	t70 = (x629|(x630/(x631<x632)));

	if (t70 != 123U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x633 = UINT16_MAX;
	uint32_t x635 = 7183U;
	uint64_t x636 = 1188837185859LLU;
	volatile uint32_t t71 = 1445939U;

	t71 = (x633|(x634/(x635<x636)));

	if (t71 != 18743295U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x641 = 27642;
	uint8_t x642 = UINT8_MAX;
	uint32_t x643 = 1339907U;
	int32_t t72 = 268340005;

	t72 = (x641|(x642/(x643<x644)));

	if (t72 != 27647) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x661 = INT16_MAX;
	int16_t x664 = 794;
	volatile int32_t t73 = 498318869;

	t73 = (x661|(x662/(x663<x664)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x669 = INT32_MIN;
	static uint16_t x670 = UINT16_MAX;
	int16_t x671 = 63;
	uint16_t x672 = 185U;
	int32_t t74 = 0;

	t74 = (x669|(x670/(x671<x672)));

	if (t74 != -2147418113) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x673 = 6U;
	volatile int64_t x675 = 9LL;
	uint32_t x676 = UINT32_MAX;
	volatile uint32_t t75 = 3U;

	t75 = (x673|(x674/(x675<x676)));

	if (t75 != 4294913510U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x681 = 33202842894291671LLU;
	int8_t x682 = -1;
	int16_t x683 = INT16_MIN;
	int16_t x684 = 3;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x681|(x682/(x683<x684)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x697 = INT8_MIN;
	int16_t x698 = INT16_MIN;
	static int32_t x699 = INT32_MIN;
	int8_t x700 = INT8_MIN;

	t77 = (x697|(x698/(x699<x700)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x703 = INT16_MIN;
	static int8_t x704 = -2;

	t78 = (x701|(x702/(x703<x704)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x721 = 25395U;
	volatile int16_t x724 = INT16_MIN;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x721|(x722/(x723<x724)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x725 = 4;
	int64_t x727 = INT64_MIN;
	uint8_t x728 = 34U;
	volatile int32_t t80 = 14197;

	t80 = (x725|(x726/(x727<x728)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x737 = 41;
	int16_t x738 = -1;

	t81 = (x737|(x738/(x739<x740)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x741 = 1920U;
	static uint8_t x742 = UINT8_MAX;
	int16_t x743 = 924;
	uint64_t x744 = 7833LLU;
	static volatile int32_t t82 = -3344;

	t82 = (x741|(x742/(x743<x744)));

	if (t82 != 2047) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x750 = 40966U;
	volatile uint32_t t83 = 102U;

	t83 = (x749|(x750/(x751<x752)));

	if (t83 != 41087U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x763 = INT8_MIN;
	uint16_t x764 = 238U;

	t84 = (x761|(x762/(x763<x764)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x765 = INT16_MIN;
	uint8_t x766 = 3U;
	static int32_t t85 = -291549659;

	t85 = (x765|(x766/(x767<x768)));

	if (t85 != -32765) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x797 = INT8_MIN;
	int64_t x798 = 118242247298858756LL;
	volatile uint32_t x800 = 45373397U;
	static volatile int64_t t86 = 860217979LL;

	t86 = (x797|(x798/(x799<x800)));

	if (t86 != -124LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x806 = 1;
	volatile int16_t x807 = INT16_MIN;
	int32_t x808 = 11847;
	static volatile int32_t t87 = -5875456;

	t87 = (x805|(x806/(x807<x808)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x813 = INT16_MIN;
	volatile int32_t x814 = INT32_MAX;
	volatile uint8_t x815 = 0U;
	volatile int32_t x816 = INT32_MAX;
	static volatile int32_t t88 = -1093;

	t88 = (x813|(x814/(x815<x816)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x824 = INT8_MAX;

	t89 = (x821|(x822/(x823<x824)));

	if (t89 != 26568188287LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x826 = 0;
	uint16_t x828 = UINT16_MAX;

	t90 = (x825|(x826/(x827<x828)));

	if (t90 != 22) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x837 = -209;
	volatile int64_t x839 = -1LL;
	uint32_t t91 = 1142U;

	t91 = (x837|(x838/(x839<x840)));

	if (t91 != 4294967103U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x845 = UINT64_MAX;
	uint32_t x846 = UINT32_MAX;
	uint8_t x847 = 4U;
	uint8_t x848 = UINT8_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (x845|(x846/(x847<x848)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x849 = -1;
	int64_t x850 = -8632945831762LL;
	uint64_t x852 = 2124270442399753041LLU;
	int64_t t93 = 255431239775413LL;

	t93 = (x849|(x850/(x851<x852)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x857 = 146364U;
	uint8_t x858 = 1U;
	uint16_t x860 = 2U;
	volatile uint32_t t94 = 1448421830U;

	t94 = (x857|(x858/(x859<x860)));

	if (t94 != 146365U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x865 = INT64_MIN;
	uint64_t x866 = 225000438716876072LLU;
	uint16_t x867 = 1U;
	static volatile int8_t x868 = INT8_MAX;
	volatile uint64_t t95 = 1401799787461LLU;

	t95 = (x865|(x866/(x867<x868)));

	if (t95 != 9448372475571651880LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x873 = -1;
	int32_t x874 = -454051440;
	uint64_t x875 = 7LLU;
	int64_t x876 = INT64_MIN;
	volatile int32_t t96 = 848681;

	t96 = (x873|(x874/(x875<x876)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x878 = 32111U;
	int64_t x879 = INT64_MIN;
	volatile int64_t x880 = INT64_MAX;

	t97 = (x877|(x878/(x879<x880)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x881 = -10722;
	uint64_t x882 = 6665LLU;
	int64_t x883 = -30300578LL;
	int16_t x884 = INT16_MIN;

	t98 = (x881|(x882/(x883<x884)));

	if (t98 != 18446744073709542943LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x890 = INT8_MAX;
	int32_t x891 = -1;
	static int32_t t99 = -775420535;

	t99 = (x889|(x890/(x891<x892)));

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

