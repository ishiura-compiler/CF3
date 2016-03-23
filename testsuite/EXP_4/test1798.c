
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = INT64_MIN;
int32_t x6 = 46903;
volatile int32_t x8 = -10116611;
int16_t x34 = -1;
int32_t t2 = 10268;
volatile int8_t x63 = INT8_MIN;
int16_t x64 = INT16_MIN;
volatile uint16_t x86 = 7U;
static int64_t x93 = 56700LL;
volatile int64_t t6 = -3403125270544LL;
static uint64_t x101 = 45962920063776264LLU;
static uint16_t x164 = 2900U;
volatile int64_t x178 = INT64_MIN;
volatile int8_t x194 = INT8_MIN;
uint8_t x195 = 98U;
uint64_t t14 = UINT64_MAX;
int8_t x227 = INT8_MIN;
static volatile int16_t x228 = -279;
volatile uint32_t t20 = 7956U;
int8_t x308 = 5;
int16_t x318 = INT16_MIN;
uint8_t x343 = 3U;
int64_t x344 = -1LL;
int8_t x376 = 1;
int8_t x391 = INT8_MIN;
static volatile int8_t x406 = 1;
volatile int8_t x428 = 0;
volatile int32_t t30 = 1948336;
uint8_t x453 = 1U;
int64_t x457 = INT64_MAX;
static volatile uint32_t x460 = 55772U;
int16_t x487 = INT16_MAX;
volatile int32_t t36 = -68630;
uint8_t x489 = 1U;
static int16_t x491 = INT16_MAX;
int8_t x498 = INT8_MAX;
volatile int32_t t38 = 89372;
static volatile int32_t t39 = -5616846;
int32_t x507 = -5871;
int8_t x511 = -1;
uint8_t x521 = UINT8_MAX;
uint32_t x538 = 630792867U;
static uint32_t x585 = 741005U;
int8_t x587 = INT8_MAX;
static uint8_t x588 = 11U;
volatile uint32_t t44 = 22632250U;
int64_t x591 = -1LL;
int32_t x594 = 9144243;
static volatile int32_t t47 = -464;
uint16_t x652 = 756U;
int16_t x664 = -291;
volatile int32_t t50 = -7570;
int64_t x673 = 10352330692568LL;
uint64_t x676 = 123644332LLU;
int32_t x679 = INT32_MAX;
static int16_t x716 = 1;
uint32_t t56 = UINT32_MAX;
static uint16_t x757 = 756U;
volatile int8_t x758 = 7;
static int16_t x759 = -1;
int64_t x760 = INT64_MIN;
int32_t t58 = -50049783;
volatile uint32_t x765 = 83U;
int64_t x768 = -200286297843174212LL;
uint64_t x793 = 93877569893698LLU;
uint16_t x805 = 19U;
int64_t x807 = 3176845654055504981LL;
static volatile uint8_t x808 = 0U;
uint64_t t62 = 3268380163504030LLU;
int32_t t63 = 1552823;
volatile int32_t x855 = 335857;
volatile uint64_t t64 = UINT64_MAX;
volatile uint16_t x915 = 981U;
static int64_t x928 = -80716561030639LL;
static int16_t x949 = 11052;
volatile uint64_t x985 = 24887634331021LLU;
volatile uint8_t x986 = 0U;
static volatile uint64_t t71 = 91LLU;
int32_t t72 = -42;
uint16_t x1054 = 0U;
int32_t t76 = INT32_MAX;
uint8_t x1073 = 5U;
volatile int64_t x1082 = INT64_MIN;
int64_t x1099 = INT64_MAX;
static int32_t x1100 = -336601238;
int64_t x1130 = 0LL;
uint32_t t82 = 47133951U;
int16_t x1145 = INT16_MAX;
uint8_t x1218 = 0U;
volatile uint8_t x1220 = 0U;
int16_t x1230 = INT16_MAX;
volatile int32_t t89 = -51;
int64_t x1250 = -1LL;
uint32_t x1251 = 26046083U;
int32_t t90 = INT32_MAX;
uint8_t x1289 = 11U;
int32_t x1292 = 11019;
volatile uint32_t t96 = 74U;
volatile int8_t x1349 = 4;
uint64_t x1351 = 119805825438240289LLU;
uint64_t x1371 = UINT64_MAX;
uint16_t x1397 = 456U;
uint16_t x1415 = 1313U;
int32_t x1417 = 21989293;
volatile int32_t x1420 = INT32_MIN;
int8_t x1439 = 1;
int16_t x1463 = 0;
static volatile int16_t x1502 = INT16_MAX;
static int16_t x1504 = -1;
int32_t t106 = -62264722;
static volatile uint8_t x1513 = 80U;
static volatile int8_t x1516 = 9;
volatile uint8_t x1527 = 8U;
uint16_t x1534 = 1411U;
uint32_t x1581 = 1495354861U;
volatile uint32_t t114 = 148813U;
int64_t t115 = INT64_MAX;
int8_t x1619 = INT8_MIN;
static uint64_t x1625 = 6419741LLU;
uint64_t x1672 = 106656316411834314LLU;
int16_t x1675 = INT16_MIN;
volatile int32_t t122 = 15;
uint16_t x1705 = 74U;
volatile int32_t t123 = 2;
static uint8_t x1710 = 2U;
int32_t x1745 = INT32_MAX;
static uint16_t x1774 = UINT16_MAX;
static int16_t x1789 = 3109;
static volatile int8_t x1794 = 0;
static uint32_t x1796 = UINT32_MAX;
uint32_t x1823 = UINT32_MAX;
int32_t x1824 = INT32_MAX;
static int64_t x1845 = INT64_MAX;
int64_t t135 = INT64_MAX;
int32_t x1870 = INT32_MAX;
int64_t x1891 = INT64_MIN;
uint8_t x1901 = 58U;
volatile uint32_t x1923 = UINT32_MAX;
static uint64_t x1973 = 1140LLU;
int64_t x1974 = -1LL;
int32_t t145 = -11;
uint64_t x2020 = 810885LLU;
int32_t x2083 = 15;
uint8_t x2094 = UINT8_MAX;
int32_t x2095 = 9190;
static int16_t x2120 = INT16_MIN;
int64_t x2157 = INT64_MAX;
int8_t x2158 = INT8_MAX;
static volatile uint16_t x2165 = 21U;
uint64_t x2198 = 235790LLU;
int8_t x2211 = INT8_MIN;
static int64_t x2218 = -1LL;
volatile int8_t x2219 = INT8_MAX;
uint8_t x2230 = 0U;
volatile int64_t x2231 = 1670766345395937LL;
uint8_t x2260 = 0U;
uint32_t t165 = 8816U;
static int32_t x2263 = INT32_MIN;
volatile int32_t t166 = -358044;
volatile int32_t t167 = 137;
uint64_t x2313 = 18LLU;
uint32_t x2314 = 8769U;
static uint32_t x2318 = 5U;
int16_t x2329 = 16363;
volatile int32_t t171 = 0;
int64_t x2379 = INT64_MAX;
uint8_t x2380 = 13U;
volatile uint64_t x2413 = 1010105LLU;
volatile int32_t t177 = INT32_MAX;
int8_t x2454 = -1;
int8_t x2463 = INT8_MAX;
volatile uint8_t x2464 = 0U;
static int16_t x2487 = 32;
volatile int32_t t180 = 85851868;
int32_t x2540 = INT32_MAX;
int32_t t184 = INT32_MAX;
uint8_t x2565 = UINT8_MAX;
int16_t x2566 = -1655;
static volatile int8_t x2567 = INT8_MAX;
static volatile uint64_t x2599 = UINT64_MAX;
int16_t x2602 = INT16_MIN;
static uint64_t t189 = UINT64_MAX;
uint64_t x2637 = UINT64_MAX;
uint16_t x2638 = 1U;
uint8_t x2640 = 15U;
static volatile uint16_t x2657 = 439U;
int16_t x2660 = INT16_MIN;
volatile int32_t t191 = 37;
int16_t x2675 = -1641;
uint32_t t192 = 0U;
uint64_t x2704 = 33827913073403808LLU;
static uint8_t x2726 = UINT8_MAX;
uint32_t x2733 = UINT32_MAX;
volatile int8_t x2751 = INT8_MAX;
static uint16_t x2753 = UINT16_MAX;
volatile int32_t x2756 = INT32_MIN;
int32_t x2760 = INT32_MIN;
int8_t x2779 = -1;
int32_t t199 = INT32_MAX;


void f0(void) {
    	volatile uint16_t x1 = 2U;
	int16_t x2 = INT16_MAX;
	static volatile int32_t x3 = -7;
	volatile int32_t t0 = -495;

    t0 = (x1<<(x2*(x3<=x4)));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 131145927001775308LLU;
	int32_t x7 = INT32_MAX;
	volatile uint64_t t1 = 108859405944517740LLU;

    t1 = (x5<<(x6*(x7<=x8)));

    if (t1 != 131145927001775308LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x33 = 1U;
	static int64_t x35 = 885912437LL;
	volatile int8_t x36 = INT8_MIN;

    t2 = (x33<<(x34*(x35<=x36)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x61 = 174904659LLU;
	int16_t x62 = 4;
	uint64_t t3 = 2LLU;

    t3 = (x61<<(x62*(x63<=x64)));

    if (t3 != 174904659LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x81 = 26863U;
	int64_t x82 = INT64_MIN;
	uint16_t x83 = 12U;
	int8_t x84 = INT8_MIN;
	uint32_t t4 = 21565716U;

    t4 = (x81<<(x82*(x83<=x84)));

    if (t4 != 26863U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x85 = 44478946LLU;
	static int16_t x87 = INT16_MIN;
	uint8_t x88 = UINT8_MAX;
	uint64_t t5 = 45031228604LLU;

    t5 = (x85<<(x86*(x87<=x88)));

    if (t5 != 5693305088LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x94 = 50U;
	int64_t x95 = INT64_MAX;
	static uint8_t x96 = 0U;

    t6 = (x93<<(x94*(x95<=x96)));

    if (t6 != 56700LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x102 = INT8_MIN;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = INT16_MAX;
	volatile uint64_t t7 = 3685908404244236320LLU;

    t7 = (x101<<(x102*(x103<=x104)));

    if (t7 != 45962920063776264LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x133 = 57U;
	static int64_t x134 = -1LL;
	uint16_t x135 = 31U;
	int8_t x136 = -1;
	volatile int32_t t8 = -6135921;

    t8 = (x133<<(x134*(x135<=x136)));

    if (t8 != 57) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x157 = INT16_MAX;
	static uint64_t x158 = 32627343689110984LLU;
	int16_t x159 = -1;
	int32_t x160 = INT32_MIN;
	int32_t t9 = 301;

    t9 = (x157<<(x158*(x159<=x160)));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x161 = UINT16_MAX;
	int32_t x162 = INT32_MIN;
	uint64_t x163 = 14910984568LLU;
	int32_t t10 = 84542271;

    t10 = (x161<<(x162*(x163<=x164)));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x177 = 1356259;
	static int8_t x179 = -2;
	uint64_t x180 = 18735259690LLU;
	static volatile int32_t t11 = 82586;

    t11 = (x177<<(x178*(x179<=x180)));

    if (t11 != 1356259) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x185 = INT32_MAX;
	int16_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	int32_t x188 = INT32_MIN;
	volatile int32_t t12 = INT32_MAX;

    t12 = (x185<<(x186*(x187<=x188)));

    if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x193 = 69U;
	volatile int8_t x196 = -1;
	int32_t t13 = 0;

    t13 = (x193<<(x194*(x195<=x196)));

    if (t13 != 69) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x205 = UINT64_MAX;
	int16_t x206 = -17;
	static uint16_t x207 = 1127U;
	int64_t x208 = INT64_MIN;

    t14 = (x205<<(x206*(x207<=x208)));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x209 = UINT32_MAX;
	volatile uint64_t x210 = 18LLU;
	int8_t x211 = INT8_MAX;
	static volatile int8_t x212 = -52;
	volatile uint32_t t15 = UINT32_MAX;

    t15 = (x209<<(x210*(x211<=x212)));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x213 = 1895232133668LLU;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = 0;
	uint64_t t16 = 2012451265661355LLU;

    t16 = (x213<<(x214*(x215<=x216)));

    if (t16 != 1895232133668LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x225 = UINT8_MAX;
	static int8_t x226 = 2;
	int32_t t17 = 7;

    t17 = (x225<<(x226*(x227<=x228)));

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x265 = 440LLU;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MAX;
	static uint16_t x268 = 3U;
	static volatile uint64_t t18 = 18564LLU;

    t18 = (x265<<(x266*(x267<=x268)));

    if (t18 != 440LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x285 = UINT8_MAX;
	int32_t x286 = INT32_MAX;
	volatile uint8_t x287 = 2U;
	int32_t x288 = -1;
	static int32_t t19 = -1;

    t19 = (x285<<(x286*(x287<=x288)));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x297 = 3427U;
	int64_t x298 = -1LL;
	volatile uint16_t x299 = 23845U;
	uint8_t x300 = 3U;

    t20 = (x297<<(x298*(x299<=x300)));

    if (t20 != 3427U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x305 = 92U;
	int16_t x306 = 5;
	int64_t x307 = INT64_MAX;
	volatile int32_t t21 = -556895;

    t21 = (x305<<(x306*(x307<=x308)));

    if (t21 != 92) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x317 = UINT8_MAX;
	static int8_t x319 = INT8_MAX;
	int32_t x320 = -1;
	int32_t t22 = -130434;

    t22 = (x317<<(x318*(x319<=x320)));

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x341 = 230502U;
	uint32_t x342 = 621647U;
	volatile uint32_t t23 = 387U;

    t23 = (x341<<(x342*(x343<=x344)));

    if (t23 != 230502U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x349 = 1;
	static int8_t x350 = INT8_MIN;
	static int64_t x351 = INT64_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t24 = -254;

    t24 = (x349<<(x350*(x351<=x352)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x365 = UINT8_MAX;
	uint16_t x366 = 1U;
	int32_t x367 = -1;
	uint64_t x368 = 32215010LLU;
	int32_t t25 = -26244532;

    t25 = (x365<<(x366*(x367<=x368)));

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x373 = INT16_MAX;
	int8_t x374 = INT8_MIN;
	volatile uint32_t x375 = 435U;
	int32_t t26 = -7;

    t26 = (x373<<(x374*(x375<=x376)));

    if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x389 = INT32_MAX;
	volatile uint8_t x390 = 0U;
	static volatile int16_t x392 = -1;
	static volatile int32_t t27 = INT32_MAX;

    t27 = (x389<<(x390*(x391<=x392)));

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x405 = UINT32_MAX;
	uint32_t x407 = UINT32_MAX;
	uint8_t x408 = 5U;
	static volatile uint32_t t28 = UINT32_MAX;

    t28 = (x405<<(x406*(x407<=x408)));

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x417 = UINT16_MAX;
	int8_t x418 = INT8_MAX;
	static uint16_t x419 = UINT16_MAX;
	int8_t x420 = INT8_MIN;
	static int32_t t29 = 7593636;

    t29 = (x417<<(x418*(x419<=x420)));

    if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x425 = 405;
	volatile int16_t x426 = INT16_MIN;
	uint64_t x427 = 8372901346666516983LLU;

    t30 = (x425<<(x426*(x427<=x428)));

    if (t30 != 405) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x429 = INT8_MAX;
	uint64_t x430 = UINT64_MAX;
	int32_t x431 = INT32_MAX;
	volatile int64_t x432 = 60160845LL;
	int32_t t31 = -585592917;

    t31 = (x429<<(x430*(x431<=x432)));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x437 = UINT16_MAX;
	static int64_t x438 = 6309LL;
	uint32_t x439 = 233478U;
	int64_t x440 = 0LL;
	volatile int32_t t32 = -44;

    t32 = (x437<<(x438*(x439<=x440)));

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x454 = 8LL;
	uint16_t x455 = 2430U;
	static int64_t x456 = 569LL;
	int32_t t33 = 89152020;

    t33 = (x453<<(x454*(x455<=x456)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x458 = 2655LL;
	int8_t x459 = -1;
	int64_t t34 = INT64_MAX;

    t34 = (x457<<(x458*(x459<=x460)));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x461 = 13U;
	volatile uint16_t x462 = 116U;
	static int64_t x463 = -1LL;
	static int16_t x464 = -57;
	int32_t t35 = -129603449;

    t35 = (x461<<(x462*(x463<=x464)));

    if (t35 != 13) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x485 = 13037U;
	int64_t x486 = INT64_MIN;
	static int16_t x488 = -1;

    t36 = (x485<<(x486*(x487<=x488)));

    if (t36 != 13037) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x490 = INT32_MAX;
	int8_t x492 = INT8_MIN;
	static int32_t t37 = -1;

    t37 = (x489<<(x490*(x491<=x492)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x497 = 0U;
	uint64_t x499 = 252301321377148635LLU;
	uint16_t x500 = UINT16_MAX;

    t38 = (x497<<(x498*(x499<=x500)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x501 = UINT16_MAX;
	uint16_t x502 = 2U;
	volatile uint32_t x503 = 5U;
	int8_t x504 = -1;

    t39 = (x501<<(x502*(x503<=x504)));

    if (t39 != 262140) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x505 = UINT64_MAX;
	volatile int8_t x506 = -1;
	static volatile int64_t x508 = INT64_MIN;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = (x505<<(x506*(x507<=x508)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x509 = 2;
	int32_t x510 = INT32_MIN;
	volatile int64_t x512 = INT64_MIN;
	volatile int32_t t41 = -3160;

    t41 = (x509<<(x510*(x511<=x512)));

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x522 = 24U;
	int64_t x523 = 742LL;
	static int8_t x524 = -1;
	volatile int32_t t42 = 15449;

    t42 = (x521<<(x522*(x523<=x524)));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x537 = 104U;
	uint16_t x539 = UINT16_MAX;
	uint32_t x540 = 1914U;
	int32_t t43 = 3;

    t43 = (x537<<(x538*(x539<=x540)));

    if (t43 != 104) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x586 = -1;

    t44 = (x585<<(x586*(x587<=x588)));

    if (t44 != 741005U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	uint16_t x590 = 7U;
	uint64_t x592 = UINT64_MAX;
	static uint32_t t45 = 12771U;

    t45 = (x589<<(x590*(x591<=x592)));

    if (t45 != 4294967168U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x593 = INT16_MAX;
	uint32_t x595 = UINT32_MAX;
	int64_t x596 = -1LL;
	volatile int32_t t46 = 125489;

    t46 = (x593<<(x594*(x595<=x596)));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x617 = 110U;
	int32_t x618 = INT32_MIN;
	volatile uint8_t x619 = 60U;
	int8_t x620 = -1;

    t47 = (x617<<(x618*(x619<=x620)));

    if (t47 != 110) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x641 = 1118054U;
	int16_t x642 = INT16_MIN;
	uint16_t x643 = UINT16_MAX;
	static int8_t x644 = 40;
	uint32_t t48 = 1041579102U;

    t48 = (x641<<(x642*(x643<=x644)));

    if (t48 != 1118054U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x649 = 1U;
	int8_t x650 = 0;
	int8_t x651 = -1;
	volatile int32_t t49 = 9;

    t49 = (x649<<(x650*(x651<=x652)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x661 = 6U;
	int8_t x662 = -2;
	uint8_t x663 = 0U;

    t50 = (x661<<(x662*(x663<=x664)));

    if (t50 != 6) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x665 = INT16_MAX;
	uint64_t x666 = 18566864464164642LLU;
	uint64_t x667 = UINT64_MAX;
	int16_t x668 = INT16_MAX;
	volatile int32_t t51 = 741407;

    t51 = (x665<<(x666*(x667<=x668)));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x674 = INT32_MAX;
	uint64_t x675 = 1038507638498005LLU;
	int64_t t52 = -170668322008LL;

    t52 = (x673<<(x674*(x675<=x676)));

    if (t52 != 10352330692568LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x677 = 12U;
	int32_t x678 = INT32_MIN;
	uint64_t x680 = 0LLU;
	volatile int32_t t53 = 98;

    t53 = (x677<<(x678*(x679<=x680)));

    if (t53 != 12) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x685 = 1041U;
	uint32_t x686 = 2021006103U;
	int64_t x687 = 5726175531LL;
	static int16_t x688 = INT16_MIN;
	int32_t t54 = -2570;

    t54 = (x685<<(x686*(x687<=x688)));

    if (t54 != 1041) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x713 = 18;
	volatile int16_t x714 = -6735;
	int32_t x715 = 63769784;
	volatile int32_t t55 = -73751485;

    t55 = (x713<<(x714*(x715<=x716)));

    if (t55 != 18) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x737 = UINT32_MAX;
	int16_t x738 = INT16_MIN;
	int8_t x739 = INT8_MAX;
	int32_t x740 = -15;

    t56 = (x737<<(x738*(x739<=x740)));

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x753 = UINT8_MAX;
	static int16_t x754 = 2731;
	volatile int16_t x755 = INT16_MIN;
	static volatile int64_t x756 = INT64_MIN;
	volatile int32_t t57 = -338396;

    t57 = (x753<<(x754*(x755<=x756)));

    if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
    

    t58 = (x757<<(x758*(x759<=x760)));

    if (t58 != 756) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x766 = 37U;
	uint8_t x767 = UINT8_MAX;
	uint32_t t59 = 83963219U;

    t59 = (x765<<(x766*(x767<=x768)));

    if (t59 != 83U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x794 = 1;
	int16_t x795 = 16;
	int32_t x796 = INT32_MIN;
	uint64_t t60 = 129334LLU;

    t60 = (x793<<(x794*(x795<=x796)));

    if (t60 != 93877569893698LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x806 = INT32_MIN;
	volatile int32_t t61 = 0;

    t61 = (x805<<(x806*(x807<=x808)));

    if (t61 != 19) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x809 = 1440LLU;
	int32_t x810 = INT32_MIN;
	uint64_t x811 = 1920LLU;
	volatile uint32_t x812 = 50U;

    t62 = (x809<<(x810*(x811<=x812)));

    if (t62 != 1440LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x849 = 5U;
	static int8_t x850 = -1;
	uint16_t x851 = UINT16_MAX;
	int8_t x852 = 2;

    t63 = (x849<<(x850*(x851<=x852)));

    if (t63 != 5) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x853 = UINT64_MAX;
	static volatile int64_t x854 = -166LL;
	static volatile int16_t x856 = 4;

    t64 = (x853<<(x854*(x855<=x856)));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x881 = 118U;
	static uint64_t x882 = 84520LLU;
	uint16_t x883 = 117U;
	int16_t x884 = INT16_MIN;
	volatile uint32_t t65 = 28877U;

    t65 = (x881<<(x882*(x883<=x884)));

    if (t65 != 118U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x893 = 0U;
	uint32_t x894 = 87026U;
	volatile int16_t x895 = INT16_MIN;
	volatile uint64_t x896 = 4248601469702422LLU;
	int32_t t66 = -109;

    t66 = (x893<<(x894*(x895<=x896)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x901 = INT32_MAX;
	static int8_t x902 = INT8_MIN;
	static int64_t x903 = INT64_MAX;
	int8_t x904 = INT8_MAX;
	volatile int32_t t67 = INT32_MAX;

    t67 = (x901<<(x902*(x903<=x904)));

    if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x913 = INT32_MAX;
	uint64_t x914 = 70LLU;
	int64_t x916 = -78979LL;
	int32_t t68 = INT32_MAX;

    t68 = (x913<<(x914*(x915<=x916)));

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x925 = INT64_MAX;
	volatile int8_t x926 = -1;
	int16_t x927 = -1;
	int64_t t69 = INT64_MAX;

    t69 = (x925<<(x926*(x927<=x928)));

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x950 = INT32_MIN;
	volatile int8_t x951 = INT8_MIN;
	int32_t x952 = INT32_MIN;
	static int32_t t70 = -371;

    t70 = (x949<<(x950*(x951<=x952)));

    if (t70 != 11052) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x987 = INT16_MAX;
	int32_t x988 = INT32_MIN;

    t71 = (x985<<(x986*(x987<=x988)));

    if (t71 != 24887634331021LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x993 = 28;
	int8_t x994 = INT8_MAX;
	volatile int32_t x995 = INT32_MAX;
	static uint16_t x996 = 88U;

    t72 = (x993<<(x994*(x995<=x996)));

    if (t72 != 28) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x1013 = UINT8_MAX;
	volatile int64_t x1014 = -52339032LL;
	int32_t x1015 = INT32_MAX;
	volatile int8_t x1016 = -1;
	static int32_t t73 = 27309192;

    t73 = (x1013<<(x1014*(x1015<=x1016)));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x1021 = UINT8_MAX;
	int32_t x1022 = INT32_MAX;
	int32_t x1023 = 505241396;
	uint8_t x1024 = 0U;
	static volatile int32_t t74 = 1;

    t74 = (x1021<<(x1022*(x1023<=x1024)));

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x1033 = UINT32_MAX;
	volatile int32_t x1034 = INT32_MAX;
	uint32_t x1035 = 95651858U;
	static uint32_t x1036 = 17U;
	volatile uint32_t t75 = UINT32_MAX;

    t75 = (x1033<<(x1034*(x1035<=x1036)));

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x1053 = INT32_MAX;
	int16_t x1055 = INT16_MAX;
	static uint16_t x1056 = 9743U;

    t76 = (x1053<<(x1054*(x1055<=x1056)));

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x1065 = UINT16_MAX;
	int8_t x1066 = 1;
	int8_t x1067 = 0;
	int8_t x1068 = 10;
	volatile int32_t t77 = 1;

    t77 = (x1065<<(x1066*(x1067<=x1068)));

    if (t77 != 131070) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x1074 = 2U;
	int32_t x1075 = -1;
	int16_t x1076 = INT16_MIN;
	volatile int32_t t78 = 71939;

    t78 = (x1073<<(x1074*(x1075<=x1076)));

    if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x1081 = 990U;
	static volatile int16_t x1083 = INT16_MAX;
	int64_t x1084 = -1LL;
	static int32_t t79 = 9;

    t79 = (x1081<<(x1082*(x1083<=x1084)));

    if (t79 != 990) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x1097 = 11U;
	static int64_t x1098 = 18578078LL;
	volatile int32_t t80 = -20317096;

    t80 = (x1097<<(x1098*(x1099<=x1100)));

    if (t80 != 11) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x1113 = INT16_MAX;
	uint16_t x1114 = UINT16_MAX;
	static uint16_t x1115 = 503U;
	int8_t x1116 = INT8_MAX;
	volatile int32_t t81 = 546588;

    t81 = (x1113<<(x1114*(x1115<=x1116)));

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x1129 = 215073U;
	int64_t x1131 = INT64_MAX;
	uint8_t x1132 = UINT8_MAX;

    t82 = (x1129<<(x1130*(x1131<=x1132)));

    if (t82 != 215073U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x1146 = UINT16_MAX;
	static int8_t x1147 = -14;
	volatile int16_t x1148 = -34;
	volatile int32_t t83 = -1;

    t83 = (x1145<<(x1146*(x1147<=x1148)));

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x1157 = 26592399;
	volatile int64_t x1158 = 216822602214LL;
	static uint8_t x1159 = 0U;
	static int8_t x1160 = -1;
	volatile int32_t t84 = 81068;

    t84 = (x1157<<(x1158*(x1159<=x1160)));

    if (t84 != 26592399) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x1189 = 14;
	static volatile int16_t x1190 = -1606;
	volatile int16_t x1191 = INT16_MAX;
	uint8_t x1192 = 4U;
	static volatile int32_t t85 = 122876062;

    t85 = (x1189<<(x1190*(x1191<=x1192)));

    if (t85 != 14) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x1193 = UINT64_MAX;
	volatile uint8_t x1194 = UINT8_MAX;
	int8_t x1195 = 52;
	int64_t x1196 = INT64_MIN;
	volatile uint64_t t86 = UINT64_MAX;

    t86 = (x1193<<(x1194*(x1195<=x1196)));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x1217 = 2387532251838451LLU;
	int64_t x1219 = INT64_MAX;
	static uint64_t t87 = 45889443859697LLU;

    t87 = (x1217<<(x1218*(x1219<=x1220)));

    if (t87 != 2387532251838451LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x1225 = 72U;
	int16_t x1226 = 13546;
	static uint16_t x1227 = UINT16_MAX;
	uint16_t x1228 = 242U;
	static volatile int32_t t88 = 0;

    t88 = (x1225<<(x1226*(x1227<=x1228)));

    if (t88 != 72) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x1229 = 1284U;
	volatile int32_t x1231 = -11962358;
	uint32_t x1232 = 0U;

    t89 = (x1229<<(x1230*(x1231<=x1232)));

    if (t89 != 1284) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x1249 = INT32_MAX;
	uint8_t x1252 = 112U;

    t90 = (x1249<<(x1250*(x1251<=x1252)));

    if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x1265 = 5627U;
	uint16_t x1266 = 247U;
	int8_t x1267 = INT8_MIN;
	int32_t x1268 = INT32_MIN;
	int32_t t91 = -15;

    t91 = (x1265<<(x1266*(x1267<=x1268)));

    if (t91 != 5627) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x1290 = INT8_MIN;
	int32_t x1291 = INT32_MAX;
	int32_t t92 = -163;

    t92 = (x1289<<(x1290*(x1291<=x1292)));

    if (t92 != 11) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x1305 = 4U;
	int16_t x1306 = 0;
	static int16_t x1307 = -4874;
	static int8_t x1308 = INT8_MAX;
	volatile int32_t t93 = -14131390;

    t93 = (x1305<<(x1306*(x1307<=x1308)));

    if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x1321 = 9043U;
	static uint8_t x1322 = UINT8_MAX;
	int32_t x1323 = INT32_MAX;
	int64_t x1324 = INT64_MIN;
	volatile uint32_t t94 = 10U;

    t94 = (x1321<<(x1322*(x1323<=x1324)));

    if (t94 != 9043U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x1325 = 3U;
	volatile int64_t x1326 = INT64_MIN;
	int8_t x1327 = INT8_MAX;
	volatile int16_t x1328 = -1;
	volatile int32_t t95 = -35;

    t95 = (x1325<<(x1326*(x1327<=x1328)));

    if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x1345 = 159U;
	volatile int64_t x1346 = -1LL;
	uint32_t x1347 = UINT32_MAX;
	static int64_t x1348 = INT64_MIN;

    t96 = (x1345<<(x1346*(x1347<=x1348)));

    if (t96 != 159U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x1350 = -1LL;
	uint8_t x1352 = UINT8_MAX;
	volatile int32_t t97 = 249624;

    t97 = (x1349<<(x1350*(x1351<=x1352)));

    if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x1369 = 0;
	int16_t x1370 = 5;
	static int16_t x1372 = INT16_MIN;
	static volatile int32_t t98 = -117900;

    t98 = (x1369<<(x1370*(x1371<=x1372)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x1385 = 6U;
	static int8_t x1386 = INT8_MAX;
	int16_t x1387 = INT16_MIN;
	uint64_t x1388 = 140848196286793752LLU;
	volatile int32_t t99 = -1883;

    t99 = (x1385<<(x1386*(x1387<=x1388)));

    if (t99 != 6) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x1389 = INT32_MAX;
	static int8_t x1390 = 9;
	static int8_t x1391 = -1;
	int64_t x1392 = INT64_MIN;
	static volatile int32_t t100 = INT32_MAX;

    t100 = (x1389<<(x1390*(x1391<=x1392)));

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x1398 = INT64_MAX;
	int64_t x1399 = INT64_MAX;
	int64_t x1400 = INT64_MIN;
	static int32_t t101 = -246078131;

    t101 = (x1397<<(x1398*(x1399<=x1400)));

    if (t101 != 456) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x1413 = 86LL;
	static volatile int64_t x1414 = 204LL;
	static volatile int16_t x1416 = INT16_MIN;
	int64_t t102 = -325LL;

    t102 = (x1413<<(x1414*(x1415<=x1416)));

    if (t102 != 86LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x1418 = -22;
	uint16_t x1419 = 6379U;
	volatile int32_t t103 = -176;

    t103 = (x1417<<(x1418*(x1419<=x1420)));

    if (t103 != 21989293) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x1437 = 9U;
	uint16_t x1438 = 18U;
	int16_t x1440 = -1;
	volatile int32_t t104 = 1;

    t104 = (x1437<<(x1438*(x1439<=x1440)));

    if (t104 != 9) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x1461 = 1U;
	uint8_t x1462 = 8U;
	static volatile int8_t x1464 = 0;
	volatile int32_t t105 = 43;

    t105 = (x1461<<(x1462*(x1463<=x1464)));

    if (t105 != 256) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x1501 = INT16_MAX;
	static int32_t x1503 = INT32_MAX;

    t106 = (x1501<<(x1502*(x1503<=x1504)));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x1514 = 1U;
	uint16_t x1515 = 36U;
	int32_t t107 = 5583405;

    t107 = (x1513<<(x1514*(x1515<=x1516)));

    if (t107 != 80) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x1521 = UINT32_MAX;
	int8_t x1522 = 2;
	static int8_t x1523 = -35;
	static uint32_t x1524 = 38306U;
	static volatile uint32_t t108 = UINT32_MAX;

    t108 = (x1521<<(x1522*(x1523<=x1524)));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x1525 = 0U;
	int8_t x1526 = 0;
	volatile uint16_t x1528 = UINT16_MAX;
	int32_t t109 = 894036756;

    t109 = (x1525<<(x1526*(x1527<=x1528)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x1533 = 60116168967872796LLU;
	static volatile int64_t x1535 = -1LL;
	int32_t x1536 = -666;
	uint64_t t110 = 1853361683208LLU;

    t110 = (x1533<<(x1534*(x1535<=x1536)));

    if (t110 != 60116168967872796LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x1541 = 3210061926LLU;
	uint32_t x1542 = 0U;
	int64_t x1543 = 187590956376096LL;
	static int16_t x1544 = 1;
	volatile uint64_t t111 = 888972LLU;

    t111 = (x1541<<(x1542*(x1543<=x1544)));

    if (t111 != 3210061926LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x1553 = 123414392319LL;
	volatile uint32_t x1554 = 90255771U;
	int64_t x1555 = 461460570LL;
	int32_t x1556 = 31884203;
	volatile int64_t t112 = -698883022783248LL;

    t112 = (x1553<<(x1554*(x1555<=x1556)));

    if (t112 != 123414392319LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x1561 = UINT32_MAX;
	static int32_t x1562 = INT32_MIN;
	int32_t x1563 = INT32_MAX;
	int32_t x1564 = -1;
	static volatile uint32_t t113 = UINT32_MAX;

    t113 = (x1561<<(x1562*(x1563<=x1564)));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x1582 = 47LLU;
	uint8_t x1583 = UINT8_MAX;
	int32_t x1584 = INT32_MIN;

    t114 = (x1581<<(x1582*(x1583<=x1584)));

    if (t114 != 1495354861U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x1597 = INT64_MAX;
	uint32_t x1598 = 361U;
	int64_t x1599 = -140685611551513563LL;
	int64_t x1600 = INT64_MIN;

    t115 = (x1597<<(x1598*(x1599<=x1600)));

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x1617 = 7453U;
	uint64_t x1618 = UINT64_MAX;
	uint32_t x1620 = 1792088767U;
	static volatile uint32_t t116 = 946360608U;

    t116 = (x1617<<(x1618*(x1619<=x1620)));

    if (t116 != 7453U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x1626 = 1;
	uint32_t x1627 = UINT32_MAX;
	int64_t x1628 = INT64_MIN;
	volatile uint64_t t117 = 830017327052LLU;

    t117 = (x1625<<(x1626*(x1627<=x1628)));

    if (t117 != 6419741LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x1653 = UINT16_MAX;
	volatile uint32_t x1654 = 53835811U;
	uint8_t x1655 = 2U;
	int8_t x1656 = -9;
	int32_t t118 = 175871;

    t118 = (x1653<<(x1654*(x1655<=x1656)));

    if (t118 != 65535) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x1669 = INT16_MAX;
	volatile int8_t x1670 = -18;
	int64_t x1671 = INT64_MIN;
	volatile int32_t t119 = -162;

    t119 = (x1669<<(x1670*(x1671<=x1672)));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x1673 = 231U;
	volatile int8_t x1674 = -15;
	uint64_t x1676 = 17040LLU;
	int32_t t120 = -792;

    t120 = (x1673<<(x1674*(x1675<=x1676)));

    if (t120 != 231) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x1677 = INT16_MAX;
	uint32_t x1678 = 16595503U;
	uint8_t x1679 = 29U;
	int32_t x1680 = INT32_MIN;
	static int32_t t121 = 18999550;

    t121 = (x1677<<(x1678*(x1679<=x1680)));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x1689 = 0U;
	volatile int64_t x1690 = -1LL;
	volatile uint64_t x1691 = 740206831469LLU;
	uint16_t x1692 = 544U;

    t122 = (x1689<<(x1690*(x1691<=x1692)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x1706 = -65659284099692LL;
	static int32_t x1707 = -497;
	int64_t x1708 = INT64_MIN;

    t123 = (x1705<<(x1706*(x1707<=x1708)));

    if (t123 != 74) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x1709 = UINT8_MAX;
	int8_t x1711 = INT8_MAX;
	int64_t x1712 = INT64_MIN;
	static volatile int32_t t124 = -1708;

    t124 = (x1709<<(x1710*(x1711<=x1712)));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x1721 = 0;
	int8_t x1722 = 6;
	volatile uint32_t x1723 = 136U;
	static int16_t x1724 = INT16_MAX;
	int32_t t125 = -1055487;

    t125 = (x1721<<(x1722*(x1723<=x1724)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1729 = 27351959LL;
	uint8_t x1730 = 0U;
	uint16_t x1731 = 14726U;
	int16_t x1732 = INT16_MAX;
	volatile int64_t t126 = 750736LL;

    t126 = (x1729<<(x1730*(x1731<=x1732)));

    if (t126 != 27351959LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x1746 = 3U;
	static int64_t x1747 = 12327683380502LL;
	volatile uint8_t x1748 = 1U;
	volatile int32_t t127 = INT32_MAX;

    t127 = (x1745<<(x1746*(x1747<=x1748)));

    if (t127 != INT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1757 = INT32_MAX;
	int16_t x1758 = -1;
	int16_t x1759 = INT16_MAX;
	int8_t x1760 = -1;
	volatile int32_t t128 = INT32_MAX;

    t128 = (x1757<<(x1758*(x1759<=x1760)));

    if (t128 != INT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x1773 = UINT16_MAX;
	int16_t x1775 = INT16_MIN;
	static int64_t x1776 = -139657849052888415LL;
	int32_t t129 = -115;

    t129 = (x1773<<(x1774*(x1775<=x1776)));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1790 = -59;
	int8_t x1791 = -1;
	uint64_t x1792 = 3LLU;
	int32_t t130 = 80;

    t130 = (x1789<<(x1790*(x1791<=x1792)));

    if (t130 != 3109) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1793 = 13;
	int16_t x1795 = 31;
	static volatile int32_t t131 = 9563240;

    t131 = (x1793<<(x1794*(x1795<=x1796)));

    if (t131 != 13) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x1813 = UINT16_MAX;
	uint32_t x1814 = 0U;
	uint8_t x1815 = UINT8_MAX;
	uint64_t x1816 = 1411713LLU;
	int32_t t132 = -1090;

    t132 = (x1813<<(x1814*(x1815<=x1816)));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x1821 = UINT16_MAX;
	int64_t x1822 = INT64_MIN;
	int32_t t133 = 182927702;

    t133 = (x1821<<(x1822*(x1823<=x1824)));

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x1841 = UINT32_MAX;
	static volatile int64_t x1842 = -227839LL;
	uint8_t x1843 = 10U;
	int16_t x1844 = INT16_MIN;
	uint32_t t134 = UINT32_MAX;

    t134 = (x1841<<(x1842*(x1843<=x1844)));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x1846 = 19U;
	volatile uint8_t x1847 = 25U;
	static int64_t x1848 = INT64_MIN;

    t135 = (x1845<<(x1846*(x1847<=x1848)));

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1849 = 112173U;
	uint8_t x1850 = 5U;
	volatile uint32_t x1851 = 7U;
	uint32_t x1852 = 0U;
	uint32_t t136 = 14U;

    t136 = (x1849<<(x1850*(x1851<=x1852)));

    if (t136 != 112173U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1869 = 3704793LL;
	int64_t x1871 = INT64_MIN;
	uint64_t x1872 = 1LLU;
	volatile int64_t t137 = 1071375LL;

    t137 = (x1869<<(x1870*(x1871<=x1872)));

    if (t137 != 3704793LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x1889 = UINT16_MAX;
	static volatile int8_t x1890 = 1;
	uint8_t x1892 = 1U;
	volatile int32_t t138 = -17;

    t138 = (x1889<<(x1890*(x1891<=x1892)));

    if (t138 != 131070) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x1902 = 251090;
	volatile uint64_t x1903 = 941954721935254LLU;
	static int8_t x1904 = 7;
	int32_t t139 = -139316164;

    t139 = (x1901<<(x1902*(x1903<=x1904)));

    if (t139 != 58) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x1905 = UINT16_MAX;
	uint16_t x1906 = 6909U;
	uint32_t x1907 = UINT32_MAX;
	static int16_t x1908 = 12;
	static int32_t t140 = 251072;

    t140 = (x1905<<(x1906*(x1907<=x1908)));

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x1921 = 58;
	int16_t x1922 = -1019;
	static uint64_t x1924 = 40546729LLU;
	int32_t t141 = -15029741;

    t141 = (x1921<<(x1922*(x1923<=x1924)));

    if (t141 != 58) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1953 = 131298685LL;
	volatile uint16_t x1954 = 864U;
	int32_t x1955 = 11;
	int64_t x1956 = -1LL;
	int64_t t142 = -12LL;

    t142 = (x1953<<(x1954*(x1955<=x1956)));

    if (t142 != 131298685LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1975 = INT16_MAX;
	static int8_t x1976 = -38;
	volatile uint64_t t143 = 28703391LLU;

    t143 = (x1973<<(x1974*(x1975<=x1976)));

    if (t143 != 1140LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x1977 = 419U;
	uint8_t x1978 = 111U;
	uint16_t x1979 = 1635U;
	uint16_t x1980 = 142U;
	uint32_t t144 = 717114405U;

    t144 = (x1977<<(x1978*(x1979<=x1980)));

    if (t144 != 419U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1989 = INT16_MAX;
	int32_t x1990 = INT32_MAX;
	int16_t x1991 = 1112;
	int32_t x1992 = INT32_MIN;

    t145 = (x1989<<(x1990*(x1991<=x1992)));

    if (t145 != 32767) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1997 = 64U;
	static int32_t x1998 = INT32_MAX;
	volatile uint16_t x1999 = UINT16_MAX;
	int64_t x2000 = -30LL;
	int32_t t146 = -8304519;

    t146 = (x1997<<(x1998*(x1999<=x2000)));

    if (t146 != 64) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x2017 = 1U;
	volatile int32_t x2018 = INT32_MIN;
	int16_t x2019 = -1;
	int32_t t147 = -19556;

    t147 = (x2017<<(x2018*(x2019<=x2020)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x2037 = 623349534911332857LL;
	volatile int32_t x2038 = INT32_MIN;
	volatile int16_t x2039 = INT16_MAX;
	int8_t x2040 = 13;
	volatile int64_t t148 = 297553LL;

    t148 = (x2037<<(x2038*(x2039<=x2040)));

    if (t148 != 623349534911332857LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x2065 = 398;
	int8_t x2066 = INT8_MIN;
	volatile uint64_t x2067 = 61LLU;
	uint8_t x2068 = 28U;
	volatile int32_t t149 = 143095;

    t149 = (x2065<<(x2066*(x2067<=x2068)));

    if (t149 != 398) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x2069 = 4U;
	uint64_t x2070 = UINT64_MAX;
	int8_t x2071 = INT8_MIN;
	uint64_t x2072 = 11118606LLU;
	static int32_t t150 = -5849;

    t150 = (x2069<<(x2070*(x2071<=x2072)));

    if (t150 != 4) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x2081 = 0U;
	volatile int16_t x2082 = 1;
	static uint32_t x2084 = 1738135048U;
	static int32_t t151 = -71513682;

    t151 = (x2081<<(x2082*(x2083<=x2084)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x2093 = 0;
	int64_t x2096 = -1LL;
	volatile int32_t t152 = 926117;

    t152 = (x2093<<(x2094*(x2095<=x2096)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x2097 = UINT16_MAX;
	volatile uint16_t x2098 = UINT16_MAX;
	int8_t x2099 = INT8_MIN;
	uint64_t x2100 = 3291124770LLU;
	volatile int32_t t153 = -1;

    t153 = (x2097<<(x2098*(x2099<=x2100)));

    if (t153 != 65535) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x2117 = 3529776521845LLU;
	int16_t x2118 = INT16_MAX;
	uint8_t x2119 = 7U;
	uint64_t t154 = 7162494588391160034LLU;

    t154 = (x2117<<(x2118*(x2119<=x2120)));

    if (t154 != 3529776521845LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint8_t x2137 = 2U;
	static int32_t x2138 = 102;
	uint64_t x2139 = UINT64_MAX;
	volatile int8_t x2140 = INT8_MAX;
	int32_t t155 = 8190393;

    t155 = (x2137<<(x2138*(x2139<=x2140)));

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x2141 = 7;
	uint32_t x2142 = 7154U;
	static int32_t x2143 = 22241;
	static uint8_t x2144 = 11U;
	volatile int32_t t156 = -12;

    t156 = (x2141<<(x2142*(x2143<=x2144)));

    if (t156 != 7) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x2159 = INT32_MAX;
	int32_t x2160 = INT32_MIN;
	int64_t t157 = INT64_MAX;

    t157 = (x2157<<(x2158*(x2159<=x2160)));

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x2166 = -111;
	uint8_t x2167 = 4U;
	static int16_t x2168 = -1;
	volatile int32_t t158 = 3;

    t158 = (x2165<<(x2166*(x2167<=x2168)));

    if (t158 != 21) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x2177 = UINT64_MAX;
	volatile uint32_t x2178 = 4U;
	volatile int16_t x2179 = 2;
	int64_t x2180 = INT64_MIN;
	uint64_t t159 = UINT64_MAX;

    t159 = (x2177<<(x2178*(x2179<=x2180)));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x2197 = 32278211918LL;
	int8_t x2199 = 7;
	int16_t x2200 = -12342;
	static volatile int64_t t160 = -88LL;

    t160 = (x2197<<(x2198*(x2199<=x2200)));

    if (t160 != 32278211918LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x2209 = 1;
	volatile uint32_t x2210 = 161U;
	int64_t x2212 = INT64_MIN;
	int32_t t161 = -21;

    t161 = (x2209<<(x2210*(x2211<=x2212)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x2217 = 6U;
	int64_t x2220 = -1LL;
	volatile int32_t t162 = -6;

    t162 = (x2217<<(x2218*(x2219<=x2220)));

    if (t162 != 6) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x2229 = INT64_MAX;
	uint64_t x2232 = UINT64_MAX;
	int64_t t163 = INT64_MAX;

    t163 = (x2229<<(x2230*(x2231<=x2232)));

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x2245 = 44U;
	int8_t x2246 = INT8_MIN;
	volatile int8_t x2247 = -13;
	int64_t x2248 = INT64_MIN;
	static uint32_t t164 = 10455U;

    t164 = (x2245<<(x2246*(x2247<=x2248)));

    if (t164 != 44U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x2257 = 0U;
	int16_t x2258 = -10;
	uint8_t x2259 = 2U;

    t165 = (x2257<<(x2258*(x2259<=x2260)));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x2261 = 1;
	int8_t x2262 = 18;
	int32_t x2264 = -1757;

    t166 = (x2261<<(x2262*(x2263<=x2264)));

    if (t166 != 262144) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x2269 = 54U;
	int16_t x2270 = 21;
	int8_t x2271 = INT8_MIN;
	volatile int8_t x2272 = INT8_MIN;

    t167 = (x2269<<(x2270*(x2271<=x2272)));

    if (t167 != 113246208) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x2315 = UINT32_MAX;
	volatile int16_t x2316 = 293;
	static volatile uint64_t t168 = 104075907411088520LLU;

    t168 = (x2313<<(x2314*(x2315<=x2316)));

    if (t168 != 18LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x2317 = 123U;
	volatile int16_t x2319 = INT16_MIN;
	int16_t x2320 = INT16_MIN;
	int32_t t169 = 8334;

    t169 = (x2317<<(x2318*(x2319<=x2320)));

    if (t169 != 3936) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x2330 = UINT32_MAX;
	static int32_t x2331 = INT32_MAX;
	static volatile int32_t x2332 = -1571373;
	int32_t t170 = -841;

    t170 = (x2329<<(x2330*(x2331<=x2332)));

    if (t170 != 16363) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x2337 = UINT8_MAX;
	int16_t x2338 = -31;
	uint32_t x2339 = UINT32_MAX;
	volatile uint16_t x2340 = 3835U;

    t171 = (x2337<<(x2338*(x2339<=x2340)));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x2357 = UINT8_MAX;
	int32_t x2358 = -1;
	uint32_t x2359 = UINT32_MAX;
	uint64_t x2360 = 387516LLU;
	int32_t t172 = 983;

    t172 = (x2357<<(x2358*(x2359<=x2360)));

    if (t172 != 255) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x2373 = 27;
	int16_t x2374 = INT16_MIN;
	static uint32_t x2375 = UINT32_MAX;
	int16_t x2376 = 1;
	volatile int32_t t173 = -40;

    t173 = (x2373<<(x2374*(x2375<=x2376)));

    if (t173 != 27) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x2377 = INT32_MAX;
	static uint32_t x2378 = UINT32_MAX;
	int32_t t174 = INT32_MAX;

    t174 = (x2377<<(x2378*(x2379<=x2380)));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x2401 = UINT8_MAX;
	static int64_t x2402 = INT64_MIN;
	static int32_t x2403 = INT32_MIN;
	uint32_t x2404 = 12568874U;
	static volatile int32_t t175 = 92568025;

    t175 = (x2401<<(x2402*(x2403<=x2404)));

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x2414 = 7752U;
	volatile int64_t x2415 = 6883824LL;
	uint32_t x2416 = 130051U;
	volatile uint64_t t176 = 124LLU;

    t176 = (x2413<<(x2414*(x2415<=x2416)));

    if (t176 != 1010105LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x2421 = INT32_MAX;
	int64_t x2422 = INT64_MIN;
	volatile int16_t x2423 = INT16_MAX;
	int64_t x2424 = -1LL;

    t177 = (x2421<<(x2422*(x2423<=x2424)));

    if (t177 != INT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x2453 = 0U;
	static uint64_t x2455 = UINT64_MAX;
	static volatile uint64_t x2456 = 29426730751243LLU;
	static int32_t t178 = -26753;

    t178 = (x2453<<(x2454*(x2455<=x2456)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x2461 = 26;
	static volatile int64_t x2462 = -3125664849LL;
	int32_t t179 = -3813;

    t179 = (x2461<<(x2462*(x2463<=x2464)));

    if (t179 != 26) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x2485 = UINT8_MAX;
	uint64_t x2486 = 78674146102052LLU;
	int16_t x2488 = INT16_MIN;

    t180 = (x2485<<(x2486*(x2487<=x2488)));

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x2517 = INT32_MAX;
	volatile int16_t x2518 = -2;
	static uint16_t x2519 = UINT16_MAX;
	int64_t x2520 = INT64_MIN;
	volatile int32_t t181 = INT32_MAX;

    t181 = (x2517<<(x2518*(x2519<=x2520)));

    if (t181 != INT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x2533 = 32094881U;
	int8_t x2534 = -57;
	uint16_t x2535 = 1674U;
	int8_t x2536 = INT8_MIN;
	volatile uint32_t t182 = 462075410U;

    t182 = (x2533<<(x2534*(x2535<=x2536)));

    if (t182 != 32094881U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x2537 = INT32_MAX;
	uint8_t x2538 = 0U;
	int8_t x2539 = -1;
	volatile int32_t t183 = INT32_MAX;

    t183 = (x2537<<(x2538*(x2539<=x2540)));

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x2557 = INT32_MAX;
	int16_t x2558 = 1;
	int32_t x2559 = INT32_MIN;
	int64_t x2560 = INT64_MIN;

    t184 = (x2557<<(x2558*(x2559<=x2560)));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x2568 = -1;
	int32_t t185 = 4392111;

    t185 = (x2565<<(x2566*(x2567<=x2568)));

    if (t185 != 255) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x2581 = 15243107U;
	volatile int32_t x2582 = INT32_MIN;
	int64_t x2583 = -1LL;
	int64_t x2584 = INT64_MIN;
	static volatile uint32_t t186 = 423U;

    t186 = (x2581<<(x2582*(x2583<=x2584)));

    if (t186 != 15243107U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x2597 = 46U;
	static int8_t x2598 = 36;
	volatile int8_t x2600 = 24;
	int32_t t187 = 316847374;

    t187 = (x2597<<(x2598*(x2599<=x2600)));

    if (t187 != 46) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x2601 = UINT32_MAX;
	int8_t x2603 = INT8_MIN;
	int16_t x2604 = INT16_MIN;
	uint32_t t188 = UINT32_MAX;

    t188 = (x2601<<(x2602*(x2603<=x2604)));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x2629 = UINT64_MAX;
	static int16_t x2630 = INT16_MIN;
	int64_t x2631 = 185LL;
	uint8_t x2632 = 80U;

    t189 = (x2629<<(x2630*(x2631<=x2632)));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x2639 = 8U;
	uint64_t t190 = 2608823LLU;

    t190 = (x2637<<(x2638*(x2639<=x2640)));

    if (t190 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x2658 = INT64_MIN;
	static int64_t x2659 = -1LL;

    t191 = (x2657<<(x2658*(x2659<=x2660)));

    if (t191 != 439) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x2673 = 1929U;
	volatile uint32_t x2674 = 6912U;
	volatile int64_t x2676 = INT64_MIN;

    t192 = (x2673<<(x2674*(x2675<=x2676)));

    if (t192 != 1929U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x2701 = INT8_MAX;
	int16_t x2702 = INT16_MIN;
	int16_t x2703 = -1;
	int32_t t193 = -850457;

    t193 = (x2701<<(x2702*(x2703<=x2704)));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x2725 = 61494531;
	int32_t x2727 = 33781;
	int64_t x2728 = INT64_MIN;
	volatile int32_t t194 = 0;

    t194 = (x2725<<(x2726*(x2727<=x2728)));

    if (t194 != 61494531) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x2734 = INT64_MIN;
	int8_t x2735 = INT8_MIN;
	int16_t x2736 = INT16_MIN;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = (x2733<<(x2734*(x2735<=x2736)));

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x2749 = INT8_MAX;
	volatile int8_t x2750 = 1;
	uint16_t x2752 = 5U;
	int32_t t196 = -99;

    t196 = (x2749<<(x2750*(x2751<=x2752)));

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x2754 = 3109U;
	int16_t x2755 = -5;
	static int32_t t197 = 58;

    t197 = (x2753<<(x2754*(x2755<=x2756)));

    if (t197 != 65535) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x2757 = 112U;
	int8_t x2758 = -3;
	uint8_t x2759 = UINT8_MAX;
	volatile int32_t t198 = 42861536;

    t198 = (x2757<<(x2758*(x2759<=x2760)));

    if (t198 != 112) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x2777 = INT32_MAX;
	uint8_t x2778 = 7U;
	volatile int64_t x2780 = INT64_MIN;

    t199 = (x2777<<(x2778*(x2779<=x2780)));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

