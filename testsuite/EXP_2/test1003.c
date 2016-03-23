
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

static uint64_t x201 = UINT64_MAX;
static int64_t x202 = 129032883LL;
static volatile uint64_t x204 = 208LLU;
int16_t x281 = -3;
uint16_t x282 = UINT16_MAX;
int32_t x284 = INT32_MAX;
int16_t x310 = INT16_MAX;
int32_t x492 = INT32_MIN;
int32_t t6 = 2;
static uint8_t x683 = 19U;
int16_t x684 = 41;
int64_t x870 = 2794133937LL;
volatile int32_t x872 = INT32_MIN;
int16_t x873 = INT16_MAX;
static uint8_t x966 = UINT8_MAX;
int64_t x1082 = 1129LL;
static uint32_t x1114 = 260454850U;
static int32_t x1152 = INT32_MAX;
uint8_t x1246 = 17U;
volatile int32_t t22 = -709;
uint8_t x1391 = 1U;
int8_t x1713 = INT8_MIN;
int8_t x1727 = 0;
int64_t x1753 = -1604LL;
volatile uint8_t x1754 = 63U;
int32_t t31 = -4;
volatile uint32_t x1772 = UINT32_MAX;
static int8_t x1805 = -1;
int64_t x1806 = 486LL;
int32_t t33 = -3;
uint32_t x1971 = 3U;
volatile int32_t t34 = -113828;
int64_t x2146 = 140478LL;
int32_t t35 = 23046;
uint8_t x2151 = 2U;
static uint64_t x2152 = 82270796412007LLU;
uint32_t x2154 = 379122377U;
uint64_t x2169 = 245858972LLU;
int64_t x2172 = -1LL;
volatile int32_t t39 = -3930;
static volatile uint32_t x2353 = UINT32_MAX;
static int64_t x2356 = INT64_MIN;
static uint64_t x2580 = UINT64_MAX;
volatile int8_t x2652 = INT8_MIN;
int16_t x2882 = INT16_MAX;
int8_t x2933 = INT8_MAX;
uint64_t x2934 = 1338986067LLU;
int8_t x2942 = INT8_MAX;
static int8_t x2944 = INT8_MIN;
volatile uint32_t x2958 = 80076133U;
volatile int32_t t51 = -183479;
uint32_t x2991 = 22U;
volatile int32_t t52 = 1;
volatile int32_t t54 = -463415980;
int64_t x3497 = 1LL;
uint32_t x3547 = 1U;
volatile int32_t t57 = 0;
static volatile int8_t x3606 = INT8_MAX;
int8_t x3608 = INT8_MIN;
volatile int32_t t59 = 105;
int64_t x3805 = INT64_MAX;
uint32_t x3858 = 9U;
static uint16_t x3886 = 35U;
volatile uint16_t x3888 = UINT16_MAX;
int32_t t63 = -20739;
volatile int32_t t65 = 10;
static volatile uint8_t x4208 = 6U;
uint8_t x4322 = 44U;
static int16_t x4383 = 21;
int8_t x4608 = -1;
int16_t x4637 = -2780;
volatile uint64_t x4639 = 3LLU;
int64_t x4641 = -1LL;
int32_t t73 = -47919451;
volatile int32_t t74 = 284;
static volatile int32_t x5077 = -1;
volatile int32_t t78 = 231930959;
int32_t x5105 = INT32_MIN;
uint64_t x5106 = UINT64_MAX;
static volatile uint64_t x5179 = 0LLU;
uint64_t x5241 = 6LLU;
uint32_t x5242 = 0U;
volatile int32_t t82 = -728909;
int8_t x5272 = -1;
uint8_t x5315 = 3U;
static volatile int32_t x5316 = INT32_MAX;
int32_t t84 = 44995032;
uint32_t x5326 = 1758376U;
int64_t x5328 = -71706836250570753LL;
uint8_t x5394 = UINT8_MAX;
static uint32_t x5395 = 2U;
volatile int32_t x5425 = INT32_MIN;
int16_t x5452 = -1;
int32_t t91 = 58441;
volatile uint8_t x5911 = 22U;
uint64_t x5966 = 72338155539223LLU;
volatile int8_t x5968 = -1;
uint16_t x5990 = 10U;
int8_t x6059 = 19;
static int16_t x6060 = INT16_MIN;
uint64_t x6074 = 212123089519517717LLU;
uint32_t x6077 = 7U;
volatile int8_t x6083 = 13;
uint16_t x6280 = UINT16_MAX;
uint8_t x6347 = 6U;
uint8_t x6359 = 13U;
uint16_t x6733 = 3U;
volatile uint64_t x6734 = UINT64_MAX;
uint16_t x6736 = UINT16_MAX;
static volatile uint16_t x6838 = UINT16_MAX;
volatile int16_t x6839 = 12;
int16_t x6840 = INT16_MAX;
volatile int32_t t107 = 730599888;
uint32_t x6865 = UINT32_MAX;
uint32_t x6878 = 119165548U;
static int8_t x6930 = 0;
volatile int32_t t110 = 381669;
uint8_t x7027 = 12U;
uint8_t x7096 = 29U;
int32_t x7104 = 1207792;
int16_t x7176 = INT16_MIN;
int8_t x7213 = -1;
static uint64_t x7295 = 19LLU;
volatile uint8_t x7333 = 16U;
uint8_t x7334 = 5U;
static uint32_t x7335 = 1U;
int8_t x7369 = -1;
static int8_t x7372 = INT8_MIN;
int32_t t119 = -36747135;
volatile int32_t t120 = 192766;
volatile int32_t t121 = 0;
uint32_t x7551 = 0U;
static int32_t t125 = -30175;
static int32_t x7673 = -1;
uint64_t x7689 = 13764041LLU;
int32_t x7692 = 24055;
static int8_t x7726 = INT8_MAX;
static int8_t x7732 = -1;
static int32_t x7733 = 456987362;
volatile int64_t x7736 = 1LL;
int16_t x7789 = 324;
static int16_t x7842 = 12964;
int16_t x7852 = INT16_MIN;
static volatile int32_t t133 = 4435448;
int32_t t134 = 7;
int8_t x8153 = 0;
static uint8_t x8155 = 1U;
int64_t x8168 = -1LL;
int16_t x8278 = 1;
int32_t x8612 = INT32_MIN;
volatile int16_t x8648 = INT16_MIN;
int32_t t142 = -3884;
uint32_t x8814 = UINT32_MAX;
static int16_t x8815 = 5;
int16_t x8816 = INT16_MIN;
uint8_t x8819 = 10U;
int8_t x9001 = INT8_MAX;
static int8_t x9002 = INT8_MAX;
int32_t t148 = -59072108;
uint16_t x9087 = 0U;
uint32_t x9157 = 493159833U;
static int64_t x9196 = 182567091404391763LL;
int32_t t153 = 232773;
volatile int32_t t154 = 27706;
uint64_t x9430 = 3599906LLU;
int64_t x9522 = 440385LL;
int8_t x9627 = 26;
uint8_t x9628 = 60U;
int32_t x9685 = INT32_MAX;
volatile uint8_t x9687 = 6U;
uint16_t x9688 = UINT16_MAX;
int32_t t159 = 1952;
volatile int64_t x9933 = INT64_MAX;
int8_t x10110 = 0;
static int16_t x10134 = 4;
int32_t t162 = -450;
static int8_t x10194 = 10;
int16_t x10245 = INT16_MAX;
static int32_t t164 = 77931664;
int64_t x10328 = -1LL;
static uint32_t x10400 = 525745577U;
uint16_t x10459 = 0U;
static int16_t x10576 = 2039;
static uint64_t x10610 = 971230LLU;
int32_t t172 = 4383140;
static uint64_t x10675 = 4LLU;
volatile int16_t x10706 = 6;
uint64_t x10844 = 76LLU;
int32_t t176 = -395374;
int8_t x11013 = 1;
static int16_t x11045 = -1;
int8_t x11047 = 1;
int32_t t183 = 35;
static uint8_t x11367 = 9U;
volatile int16_t x11397 = 55;
int16_t x11399 = 0;
uint8_t x11571 = 1U;
static int8_t x11609 = -2;
uint32_t x11611 = 0U;
static int64_t x11617 = -1LL;
int8_t x11619 = 3;
static int16_t x11637 = 0;
uint64_t x11638 = 528983LLU;
uint8_t x11639 = 30U;
int32_t x11640 = 0;
volatile int32_t t191 = 7319;
static uint32_t x11730 = UINT32_MAX;
uint8_t x11731 = 19U;
uint8_t x11732 = UINT8_MAX;
static volatile int8_t x11754 = 1;
volatile uint32_t x11755 = 0U;
int8_t x11765 = INT8_MIN;
volatile uint32_t x11766 = 1U;
static int8_t x11791 = 1;
int8_t x11946 = INT8_MAX;
static int32_t t197 = -58;
uint8_t x12007 = 5U;
int32_t x12141 = -1;
uint8_t x12142 = 0U;


void f0(void) {
    	uint16_t x157 = 1646U;
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = 14LL;
	int64_t x160 = INT64_MIN;
	int32_t t0 = 0;

    t0 = ((x157-(x158<<x159))>x160);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x203 = 29U;
	static volatile int32_t t1 = -174731;

    t1 = ((x201-(x202<<x203))>x204);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x237 = 50U;
	uint64_t x238 = 15532612LLU;
	static uint8_t x239 = 2U;
	static int16_t x240 = INT16_MIN;
	int32_t t2 = 1862;

    t2 = ((x237-(x238<<x239))>x240);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x283 = 12U;
	static int32_t t3 = 27;

    t3 = ((x281-(x282<<x283))>x284);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x309 = UINT64_MAX;
	uint8_t x311 = 11U;
	volatile int8_t x312 = INT8_MAX;
	int32_t t4 = 9204;

    t4 = ((x309-(x310<<x311))>x312);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x377 = INT64_MAX;
	uint32_t x378 = 8098U;
	int16_t x379 = 0;
	int64_t x380 = INT64_MIN;
	int32_t t5 = 183486;

    t5 = ((x377-(x378<<x379))>x380);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x489 = -1;
	int32_t x490 = 482174121;
	uint8_t x491 = 0U;

    t6 = ((x489-(x490<<x491))>x492);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x529 = -1;
	static volatile uint8_t x530 = 0U;
	volatile int8_t x531 = 20;
	volatile int16_t x532 = -220;
	static volatile int32_t t7 = -96104;

    t7 = ((x529-(x530<<x531))>x532);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x581 = -1;
	uint64_t x582 = 35089639LLU;
	int8_t x583 = 0;
	int64_t x584 = INT64_MIN;
	int32_t t8 = -14723949;

    t8 = ((x581-(x582<<x583))>x584);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x589 = INT8_MIN;
	uint32_t x590 = 120698629U;
	uint16_t x591 = 5U;
	int16_t x592 = -1;
	static int32_t t9 = 177;

    t9 = ((x589-(x590<<x591))>x592);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x681 = -10;
	int8_t x682 = 35;
	static volatile int32_t t10 = -7070;

    t10 = ((x681-(x682<<x683))>x684);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x841 = INT8_MAX;
	static int32_t x842 = 1745990;
	uint8_t x843 = 10U;
	int64_t x844 = 950876148LL;
	int32_t t11 = -232278772;

    t11 = ((x841-(x842<<x843))>x844);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x869 = -1;
	volatile uint8_t x871 = 21U;
	int32_t t12 = 1;

    t12 = ((x869-(x870<<x871))>x872);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x874 = 1285613590185LLU;
	static volatile int8_t x875 = 3;
	uint64_t x876 = 160249359931151520LLU;
	static int32_t t13 = -5;

    t13 = ((x873-(x874<<x875))>x876);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x965 = INT16_MIN;
	uint8_t x967 = 7U;
	int16_t x968 = INT16_MAX;
	static volatile int32_t t14 = -78;

    t14 = ((x965-(x966<<x967))>x968);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1081 = -1;
	static uint8_t x1083 = 0U;
	volatile uint8_t x1084 = 14U;
	volatile int32_t t15 = -118560;

    t15 = ((x1081-(x1082<<x1083))>x1084);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x1113 = 6U;
	static uint64_t x1115 = 22LLU;
	volatile int8_t x1116 = -14;
	int32_t t16 = -4367;

    t16 = ((x1113-(x1114<<x1115))>x1116);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x1149 = 1;
	volatile uint32_t x1150 = 38U;
	uint32_t x1151 = 3U;
	int32_t t17 = 0;

    t17 = ((x1149-(x1150<<x1151))>x1152);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x1233 = -1;
	int16_t x1234 = 2648;
	uint8_t x1235 = 6U;
	static int16_t x1236 = 106;
	int32_t t18 = 122304;

    t18 = ((x1233-(x1234<<x1235))>x1236);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x1245 = INT16_MIN;
	uint16_t x1247 = 7U;
	int16_t x1248 = INT16_MAX;
	static volatile int32_t t19 = 93759;

    t19 = ((x1245-(x1246<<x1247))>x1248);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x1249 = -1;
	static uint64_t x1250 = UINT64_MAX;
	static uint16_t x1251 = 5U;
	volatile int64_t x1252 = -1LL;
	int32_t t20 = -1;

    t20 = ((x1249-(x1250<<x1251))>x1252);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x1285 = -1;
	uint8_t x1286 = 8U;
	volatile uint8_t x1287 = 9U;
	static uint8_t x1288 = UINT8_MAX;
	volatile int32_t t21 = 2;

    t21 = ((x1285-(x1286<<x1287))>x1288);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x1337 = INT16_MAX;
	uint8_t x1338 = UINT8_MAX;
	int8_t x1339 = 13;
	uint8_t x1340 = 4U;

    t22 = ((x1337-(x1338<<x1339))>x1340);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1389 = 24135677U;
	uint64_t x1390 = 4LLU;
	volatile uint8_t x1392 = UINT8_MAX;
	int32_t t23 = -6039167;

    t23 = ((x1389-(x1390<<x1391))>x1392);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1529 = -58;
	int16_t x1530 = INT16_MAX;
	volatile int8_t x1531 = 0;
	static uint64_t x1532 = UINT64_MAX;
	int32_t t24 = -117851668;

    t24 = ((x1529-(x1530<<x1531))>x1532);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1573 = -19860985815LL;
	uint64_t x1574 = 232843LLU;
	volatile int8_t x1575 = 0;
	int32_t x1576 = INT32_MAX;
	static int32_t t25 = 89035;

    t25 = ((x1573-(x1574<<x1575))>x1576);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1605 = 27U;
	volatile uint64_t x1606 = 2568960LLU;
	int8_t x1607 = 0;
	int64_t x1608 = 7525320LL;
	int32_t t26 = 93;

    t26 = ((x1605-(x1606<<x1607))>x1608);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1625 = -16892977912849LL;
	uint64_t x1626 = 347107010LLU;
	uint32_t x1627 = 1U;
	volatile int16_t x1628 = -15;
	static volatile int32_t t27 = 0;

    t27 = ((x1625-(x1626<<x1627))>x1628);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1714 = INT16_MAX;
	int32_t x1715 = 3;
	volatile int16_t x1716 = -1;
	static int32_t t28 = -9;

    t28 = ((x1713-(x1714<<x1715))>x1716);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1725 = 346;
	uint16_t x1726 = 255U;
	uint64_t x1728 = UINT64_MAX;
	volatile int32_t t29 = -12032;

    t29 = ((x1725-(x1726<<x1727))>x1728);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1755 = 2;
	static int16_t x1756 = INT16_MIN;
	volatile int32_t t30 = 2682645;

    t30 = ((x1753-(x1754<<x1755))>x1756);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1757 = INT8_MIN;
	int16_t x1758 = INT16_MAX;
	volatile uint16_t x1759 = 0U;
	int64_t x1760 = -315437101366469LL;

    t31 = ((x1757-(x1758<<x1759))>x1760);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x1769 = -1;
	volatile uint16_t x1770 = 286U;
	uint16_t x1771 = 0U;
	static int32_t t32 = -1;

    t32 = ((x1769-(x1770<<x1771))>x1772);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x1807 = 0U;
	static int32_t x1808 = 485867;

    t33 = ((x1805-(x1806<<x1807))>x1808);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x1969 = 1421006293923354LL;
	static uint32_t x1970 = UINT32_MAX;
	int8_t x1972 = INT8_MIN;

    t34 = ((x1969-(x1970<<x1971))>x1972);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2145 = INT16_MAX;
	uint32_t x2147 = 2U;
	int32_t x2148 = 1;

    t35 = ((x2145-(x2146<<x2147))>x2148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2149 = 313136075104091949LLU;
	static volatile uint8_t x2150 = 30U;
	volatile int32_t t36 = 272837;

    t36 = ((x2149-(x2150<<x2151))>x2152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x2153 = 18;
	int32_t x2155 = 14;
	int32_t x2156 = -1203;
	int32_t t37 = 1442641;

    t37 = ((x2153-(x2154<<x2155))>x2156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2161 = -1;
	uint32_t x2162 = 1U;
	volatile uint16_t x2163 = 7U;
	static volatile uint32_t x2164 = 225763351U;
	volatile int32_t t38 = -6442;

    t38 = ((x2161-(x2162<<x2163))>x2164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x2170 = 1U;
	volatile int8_t x2171 = 1;

    t39 = ((x2169-(x2170<<x2171))>x2172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2277 = INT16_MAX;
	volatile int16_t x2278 = 1;
	int8_t x2279 = 29;
	int64_t x2280 = 0LL;
	int32_t t40 = -225448;

    t40 = ((x2277-(x2278<<x2279))>x2280);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x2305 = INT32_MIN;
	volatile uint64_t x2306 = 24509LLU;
	int8_t x2307 = 52;
	int32_t x2308 = -1;
	static volatile int32_t t41 = -708968;

    t41 = ((x2305-(x2306<<x2307))>x2308);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x2354 = 5838LL;
	static uint8_t x2355 = 15U;
	static volatile int32_t t42 = -5;

    t42 = ((x2353-(x2354<<x2355))>x2356);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x2445 = 3U;
	uint16_t x2446 = 1U;
	uint16_t x2447 = 4U;
	int32_t x2448 = INT32_MIN;
	volatile int32_t t43 = -978;

    t43 = ((x2445-(x2446<<x2447))>x2448);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x2561 = INT32_MAX;
	uint8_t x2562 = UINT8_MAX;
	int8_t x2563 = 0;
	volatile uint8_t x2564 = UINT8_MAX;
	int32_t t44 = 2005778;

    t44 = ((x2561-(x2562<<x2563))>x2564);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2577 = UINT16_MAX;
	volatile uint32_t x2578 = UINT32_MAX;
	int32_t x2579 = 2;
	volatile int32_t t45 = 108;

    t45 = ((x2577-(x2578<<x2579))>x2580);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x2649 = INT64_MIN;
	volatile uint64_t x2650 = 326089615822460LLU;
	int32_t x2651 = 11;
	int32_t t46 = 623;

    t46 = ((x2649-(x2650<<x2651))>x2652);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x2753 = 6736;
	volatile uint64_t x2754 = UINT64_MAX;
	volatile uint8_t x2755 = 1U;
	int8_t x2756 = INT8_MIN;
	static int32_t t47 = 5;

    t47 = ((x2753-(x2754<<x2755))>x2756);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x2881 = -1;
	int32_t x2883 = 4;
	uint32_t x2884 = UINT32_MAX;
	volatile int32_t t48 = 1027803952;

    t48 = ((x2881-(x2882<<x2883))>x2884);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2935 = 44U;
	volatile uint32_t x2936 = 31U;
	int32_t t49 = 19;

    t49 = ((x2933-(x2934<<x2935))>x2936);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x2941 = UINT32_MAX;
	uint16_t x2943 = 2U;
	int32_t t50 = -1704;

    t50 = ((x2941-(x2942<<x2943))>x2944);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2957 = -12852131655LL;
	volatile uint8_t x2959 = 0U;
	int16_t x2960 = -15748;

    t51 = ((x2957-(x2958<<x2959))>x2960);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x2989 = 418845826097LLU;
	static uint8_t x2990 = UINT8_MAX;
	static volatile int32_t x2992 = INT32_MAX;

    t52 = ((x2989-(x2990<<x2991))>x2992);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x3157 = UINT64_MAX;
	uint64_t x3158 = 89018003LLU;
	uint8_t x3159 = 4U;
	static volatile int16_t x3160 = INT16_MIN;
	int32_t t53 = -553298604;

    t53 = ((x3157-(x3158<<x3159))>x3160);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x3169 = INT8_MAX;
	volatile uint64_t x3170 = 0LLU;
	uint64_t x3171 = 3LLU;
	int64_t x3172 = 5490514384LL;

    t54 = ((x3169-(x3170<<x3171))>x3172);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x3193 = 21U;
	static int64_t x3194 = 16LL;
	uint64_t x3195 = 56LLU;
	volatile int32_t x3196 = INT32_MIN;
	volatile int32_t t55 = 1;

    t55 = ((x3193-(x3194<<x3195))>x3196);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x3498 = UINT32_MAX;
	int16_t x3499 = 1;
	static int32_t x3500 = INT32_MAX;
	static volatile int32_t t56 = -504283580;

    t56 = ((x3497-(x3498<<x3499))>x3500);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x3545 = INT16_MIN;
	int32_t x3546 = 147186203;
	static int16_t x3548 = INT16_MIN;

    t57 = ((x3545-(x3546<<x3547))>x3548);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x3605 = UINT32_MAX;
	int8_t x3607 = 16;
	int32_t t58 = 1;

    t58 = ((x3605-(x3606<<x3607))>x3608);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x3709 = 1LL;
	uint64_t x3710 = 317281LLU;
	static uint32_t x3711 = 2U;
	static int32_t x3712 = 28;

    t59 = ((x3709-(x3710<<x3711))>x3712);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x3806 = UINT8_MAX;
	uint8_t x3807 = 0U;
	int8_t x3808 = 7;
	int32_t t60 = -657611;

    t60 = ((x3805-(x3806<<x3807))>x3808);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x3857 = UINT32_MAX;
	static uint16_t x3859 = 4U;
	uint16_t x3860 = 618U;
	int32_t t61 = -225;

    t61 = ((x3857-(x3858<<x3859))>x3860);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x3861 = UINT8_MAX;
	int16_t x3862 = 231;
	volatile uint16_t x3863 = 0U;
	static int8_t x3864 = INT8_MIN;
	volatile int32_t t62 = 7464;

    t62 = ((x3861-(x3862<<x3863))>x3864);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x3885 = 1;
	volatile uint32_t x3887 = 6U;

    t63 = ((x3885-(x3886<<x3887))>x3888);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x3901 = 10U;
	uint16_t x3902 = 1U;
	int64_t x3903 = 3LL;
	int32_t x3904 = INT32_MIN;
	int32_t t64 = 84365872;

    t64 = ((x3901-(x3902<<x3903))>x3904);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x4181 = UINT32_MAX;
	uint64_t x4182 = UINT64_MAX;
	uint8_t x4183 = 2U;
	volatile int64_t x4184 = -1LL;

    t65 = ((x4181-(x4182<<x4183))>x4184);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x4205 = -1;
	uint16_t x4206 = UINT16_MAX;
	int8_t x4207 = 0;
	static int32_t t66 = -9949361;

    t66 = ((x4205-(x4206<<x4207))>x4208);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x4321 = 67402723417154725LL;
	volatile uint8_t x4323 = 0U;
	int16_t x4324 = INT16_MIN;
	volatile int32_t t67 = 5;

    t67 = ((x4321-(x4322<<x4323))>x4324);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x4325 = INT32_MAX;
	volatile uint32_t x4326 = 95061489U;
	static int8_t x4327 = 0;
	volatile int64_t x4328 = -1LL;
	int32_t t68 = -579593312;

    t68 = ((x4325-(x4326<<x4327))>x4328);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x4381 = 3416U;
	uint32_t x4382 = UINT32_MAX;
	volatile uint16_t x4384 = UINT16_MAX;
	int32_t t69 = 582;

    t69 = ((x4381-(x4382<<x4383))>x4384);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x4605 = INT16_MIN;
	uint8_t x4606 = 70U;
	int8_t x4607 = 2;
	static volatile int32_t t70 = -114141439;

    t70 = ((x4605-(x4606<<x4607))>x4608);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x4638 = 3421318616685734582LLU;
	int64_t x4640 = INT64_MIN;
	volatile int32_t t71 = -3397;

    t71 = ((x4637-(x4638<<x4639))>x4640);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x4642 = UINT32_MAX;
	volatile int8_t x4643 = 6;
	int32_t x4644 = 796305126;
	volatile int32_t t72 = 506959611;

    t72 = ((x4641-(x4642<<x4643))>x4644);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x4669 = UINT32_MAX;
	uint64_t x4670 = UINT64_MAX;
	uint32_t x4671 = 0U;
	int32_t x4672 = -1;

    t73 = ((x4669-(x4670<<x4671))>x4672);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x4929 = -1;
	int64_t x4930 = 62LL;
	int8_t x4931 = 0;
	static uint32_t x4932 = 26128U;

    t74 = ((x4929-(x4930<<x4931))>x4932);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x4933 = INT16_MAX;
	int8_t x4934 = 7;
	uint8_t x4935 = 1U;
	volatile int16_t x4936 = INT16_MIN;
	static int32_t t75 = 407830;

    t75 = ((x4933-(x4934<<x4935))>x4936);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x4953 = 0U;
	uint8_t x4954 = 1U;
	int16_t x4955 = 3;
	uint64_t x4956 = 4530262812745739700LLU;
	int32_t t76 = 102250;

    t76 = ((x4953-(x4954<<x4955))>x4956);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x5009 = 6;
	uint8_t x5010 = UINT8_MAX;
	static uint16_t x5011 = 9U;
	int16_t x5012 = -1;
	static int32_t t77 = -22;

    t77 = ((x5009-(x5010<<x5011))>x5012);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x5078 = 1633078763LL;
	int64_t x5079 = 3LL;
	int64_t x5080 = INT64_MAX;

    t78 = ((x5077-(x5078<<x5079))>x5080);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x5107 = 1U;
	static int16_t x5108 = -1;
	volatile int32_t t79 = 13834;

    t79 = ((x5105-(x5106<<x5107))>x5108);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x5177 = 14U;
	uint64_t x5178 = UINT64_MAX;
	int64_t x5180 = 302424179LL;
	volatile int32_t t80 = -12685114;

    t80 = ((x5177-(x5178<<x5179))>x5180);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x5243 = 0;
	uint8_t x5244 = 8U;
	int32_t t81 = 3;

    t81 = ((x5241-(x5242<<x5243))>x5244);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x5245 = INT8_MIN;
	uint8_t x5246 = 118U;
	int8_t x5247 = 0;
	int16_t x5248 = -1;

    t82 = ((x5245-(x5246<<x5247))>x5248);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x5269 = 87U;
	static int64_t x5270 = 209LL;
	uint16_t x5271 = 14U;
	int32_t t83 = 3;

    t83 = ((x5269-(x5270<<x5271))>x5272);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x5313 = INT16_MAX;
	volatile uint64_t x5314 = UINT64_MAX;

    t84 = ((x5313-(x5314<<x5315))>x5316);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x5321 = -1;
	uint64_t x5322 = 124LLU;
	uint8_t x5323 = 9U;
	static uint16_t x5324 = UINT16_MAX;
	static volatile int32_t t85 = 593442;

    t85 = ((x5321-(x5322<<x5323))>x5324);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x5325 = INT16_MIN;
	uint8_t x5327 = 1U;
	static volatile int32_t t86 = 364;

    t86 = ((x5325-(x5326<<x5327))>x5328);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x5393 = UINT32_MAX;
	static int8_t x5396 = -1;
	static int32_t t87 = 572028;

    t87 = ((x5393-(x5394<<x5395))>x5396);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x5426 = 995220U;
	volatile uint16_t x5427 = 0U;
	volatile uint16_t x5428 = 5105U;
	volatile int32_t t88 = 46351101;

    t88 = ((x5425-(x5426<<x5427))>x5428);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x5449 = 11;
	uint8_t x5450 = 0U;
	static uint16_t x5451 = 9U;
	volatile int32_t t89 = 102677;

    t89 = ((x5449-(x5450<<x5451))>x5452);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x5517 = INT32_MAX;
	static int64_t x5518 = 4583335153734LL;
	volatile uint8_t x5519 = 2U;
	int64_t x5520 = INT64_MIN;
	static volatile int32_t t90 = 1038035;

    t90 = ((x5517-(x5518<<x5519))>x5520);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5757 = 43;
	static int16_t x5758 = INT16_MAX;
	int16_t x5759 = 1;
	uint32_t x5760 = 9922U;

    t91 = ((x5757-(x5758<<x5759))>x5760);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x5785 = 0U;
	uint64_t x5786 = 9LLU;
	static volatile uint32_t x5787 = 21U;
	static int16_t x5788 = INT16_MIN;
	volatile int32_t t92 = 1;

    t92 = ((x5785-(x5786<<x5787))>x5788);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x5857 = 62;
	uint8_t x5858 = UINT8_MAX;
	uint8_t x5859 = 1U;
	int16_t x5860 = 9;
	volatile int32_t t93 = 10680;

    t93 = ((x5857-(x5858<<x5859))>x5860);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x5909 = -1;
	uint8_t x5910 = 0U;
	int64_t x5912 = -2238845600728780LL;
	int32_t t94 = 1883;

    t94 = ((x5909-(x5910<<x5911))>x5912);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x5961 = -123907833;
	uint64_t x5962 = 61LLU;
	uint8_t x5963 = 62U;
	uint64_t x5964 = UINT64_MAX;
	int32_t t95 = 61;

    t95 = ((x5961-(x5962<<x5963))>x5964);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x5965 = 6;
	int16_t x5967 = 10;
	volatile int32_t t96 = -1;

    t96 = ((x5965-(x5966<<x5967))>x5968);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x5989 = INT8_MAX;
	uint64_t x5991 = 10LLU;
	static volatile uint64_t x5992 = 7310642LLU;
	volatile int32_t t97 = 1359174;

    t97 = ((x5989-(x5990<<x5991))>x5992);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x6057 = 836949167U;
	int16_t x6058 = 47;
	volatile int32_t t98 = 1069261317;

    t98 = ((x6057-(x6058<<x6059))>x6060);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x6073 = -1;
	static int16_t x6075 = 1;
	int8_t x6076 = INT8_MIN;
	int32_t t99 = 100229;

    t99 = ((x6073-(x6074<<x6075))>x6076);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x6078 = INT8_MAX;
	uint16_t x6079 = 1U;
	volatile int64_t x6080 = INT64_MAX;
	int32_t t100 = -13;

    t100 = ((x6077-(x6078<<x6079))>x6080);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x6081 = INT16_MIN;
	uint64_t x6082 = UINT64_MAX;
	uint8_t x6084 = UINT8_MAX;
	static int32_t t101 = -32265693;

    t101 = ((x6081-(x6082<<x6083))>x6084);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x6277 = INT8_MIN;
	volatile uint16_t x6278 = 313U;
	uint32_t x6279 = 4U;
	volatile int32_t t102 = -133;

    t102 = ((x6277-(x6278<<x6279))>x6280);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x6345 = -1;
	uint8_t x6346 = 6U;
	volatile int8_t x6348 = -1;
	volatile int32_t t103 = -388;

    t103 = ((x6345-(x6346<<x6347))>x6348);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x6357 = 194;
	static volatile uint32_t x6358 = UINT32_MAX;
	int8_t x6360 = INT8_MAX;
	int32_t t104 = -5;

    t104 = ((x6357-(x6358<<x6359))>x6360);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x6735 = 0;
	int32_t t105 = -183046201;

    t105 = ((x6733-(x6734<<x6735))>x6736);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x6741 = 6784U;
	uint32_t x6742 = 264U;
	uint16_t x6743 = 6U;
	uint64_t x6744 = UINT64_MAX;
	static int32_t t106 = 3912;

    t106 = ((x6741-(x6742<<x6743))>x6744);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x6837 = 7U;

    t107 = ((x6837-(x6838<<x6839))>x6840);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x6866 = INT16_MAX;
	int8_t x6867 = 2;
	uint64_t x6868 = UINT64_MAX;
	volatile int32_t t108 = 0;

    t108 = ((x6865-(x6866<<x6867))>x6868);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x6877 = 159197222339LL;
	static int8_t x6879 = 0;
	int32_t x6880 = -1;
	int32_t t109 = 7;

    t109 = ((x6877-(x6878<<x6879))>x6880);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x6929 = 10158;
	uint8_t x6931 = 2U;
	int16_t x6932 = 354;

    t110 = ((x6929-(x6930<<x6931))>x6932);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x7025 = 1;
	int16_t x7026 = 233;
	static volatile uint16_t x7028 = UINT16_MAX;
	static volatile int32_t t111 = -814697463;

    t111 = ((x7025-(x7026<<x7027))>x7028);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x7093 = -1434813743660LL;
	uint8_t x7094 = 0U;
	int16_t x7095 = 0;
	volatile int32_t t112 = 27;

    t112 = ((x7093-(x7094<<x7095))>x7096);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x7101 = 1669U;
	int64_t x7102 = INT64_MAX;
	int16_t x7103 = 0;
	volatile int32_t t113 = 0;

    t113 = ((x7101-(x7102<<x7103))>x7104);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x7173 = UINT64_MAX;
	int8_t x7174 = INT8_MAX;
	uint8_t x7175 = 6U;
	volatile int32_t t114 = -42;

    t114 = ((x7173-(x7174<<x7175))>x7176);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x7214 = 0;
	uint32_t x7215 = 11U;
	static volatile int64_t x7216 = -1LL;
	volatile int32_t t115 = 5686035;

    t115 = ((x7213-(x7214<<x7215))>x7216);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x7261 = 228195;
	uint8_t x7262 = 50U;
	volatile int32_t x7263 = 0;
	uint8_t x7264 = UINT8_MAX;
	static int32_t t116 = 7445;

    t116 = ((x7261-(x7262<<x7263))>x7264);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x7293 = -1;
	uint16_t x7294 = 2U;
	int64_t x7296 = INT64_MAX;
	volatile int32_t t117 = 62927;

    t117 = ((x7293-(x7294<<x7295))>x7296);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x7336 = -1LL;
	static int32_t t118 = 239250586;

    t118 = ((x7333-(x7334<<x7335))>x7336);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x7370 = UINT32_MAX;
	static int64_t x7371 = 0LL;

    t119 = ((x7369-(x7370<<x7371))>x7372);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x7481 = -1;
	static uint64_t x7482 = 598714LLU;
	static volatile int8_t x7483 = 38;
	volatile int8_t x7484 = -1;

    t120 = ((x7481-(x7482<<x7483))>x7484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x7537 = -1;
	uint8_t x7538 = 25U;
	volatile uint16_t x7539 = 0U;
	int32_t x7540 = -1;

    t121 = ((x7537-(x7538<<x7539))>x7540);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint32_t x7549 = 114U;
	int64_t x7550 = 1787569978239714LL;
	int8_t x7552 = INT8_MIN;
	volatile int32_t t122 = -1;

    t122 = ((x7549-(x7550<<x7551))>x7552);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x7593 = 65U;
	uint32_t x7594 = UINT32_MAX;
	uint8_t x7595 = 2U;
	uint16_t x7596 = UINT16_MAX;
	volatile int32_t t123 = -94;

    t123 = ((x7593-(x7594<<x7595))>x7596);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x7613 = -1LL;
	int32_t x7614 = 427;
	static volatile uint32_t x7615 = 6U;
	int8_t x7616 = -25;
	int32_t t124 = -248953580;

    t124 = ((x7613-(x7614<<x7615))>x7616);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x7645 = INT8_MIN;
	uint64_t x7646 = 8435701849969970497LLU;
	uint8_t x7647 = 3U;
	uint64_t x7648 = 7658005533114LLU;

    t125 = ((x7645-(x7646<<x7647))>x7648);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x7674 = 6;
	uint8_t x7675 = 5U;
	int16_t x7676 = 2292;
	int32_t t126 = -1617829;

    t126 = ((x7673-(x7674<<x7675))>x7676);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x7690 = 59102096U;
	uint8_t x7691 = 5U;
	int32_t t127 = 0;

    t127 = ((x7689-(x7690<<x7691))>x7692);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x7725 = UINT8_MAX;
	int8_t x7727 = 14;
	uint8_t x7728 = 49U;
	int32_t t128 = -10;

    t128 = ((x7725-(x7726<<x7727))>x7728);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x7729 = 5U;
	uint32_t x7730 = 3U;
	static volatile int16_t x7731 = 0;
	volatile int32_t t129 = -25;

    t129 = ((x7729-(x7730<<x7731))>x7732);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x7734 = UINT64_MAX;
	uint8_t x7735 = 21U;
	int32_t t130 = -354243;

    t130 = ((x7733-(x7734<<x7735))>x7736);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x7790 = 15774LLU;
	volatile uint16_t x7791 = 42U;
	volatile uint32_t x7792 = 243796162U;
	volatile int32_t t131 = -21935043;

    t131 = ((x7789-(x7790<<x7791))>x7792);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x7841 = 14;
	uint16_t x7843 = 2U;
	int64_t x7844 = INT64_MAX;
	volatile int32_t t132 = 2705135;

    t132 = ((x7841-(x7842<<x7843))>x7844);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x7849 = -1;
	uint8_t x7850 = 12U;
	static int8_t x7851 = 13;

    t133 = ((x7849-(x7850<<x7851))>x7852);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x8121 = UINT8_MAX;
	volatile int8_t x8122 = INT8_MAX;
	volatile int8_t x8123 = 0;
	uint64_t x8124 = UINT64_MAX;

    t134 = ((x8121-(x8122<<x8123))>x8124);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x8154 = UINT16_MAX;
	int32_t x8156 = -1;
	static volatile int32_t t135 = -79;

    t135 = ((x8153-(x8154<<x8155))>x8156);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x8165 = 147126537U;
	int16_t x8166 = 29;
	static int8_t x8167 = 0;
	volatile int32_t t136 = -342319;

    t136 = ((x8165-(x8166<<x8167))>x8168);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x8277 = -6774541914572423LL;
	volatile int8_t x8279 = 5;
	static int16_t x8280 = INT16_MAX;
	int32_t t137 = 732117;

    t137 = ((x8277-(x8278<<x8279))>x8280);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x8497 = INT8_MIN;
	static int8_t x8498 = 1;
	static uint32_t x8499 = 9U;
	uint32_t x8500 = UINT32_MAX;
	int32_t t138 = 28;

    t138 = ((x8497-(x8498<<x8499))>x8500);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x8501 = INT16_MAX;
	uint32_t x8502 = 101064U;
	int8_t x8503 = 8;
	static int32_t x8504 = INT32_MIN;
	volatile int32_t t139 = -29149;

    t139 = ((x8501-(x8502<<x8503))>x8504);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x8577 = -1;
	uint8_t x8578 = 6U;
	static uint8_t x8579 = 0U;
	int64_t x8580 = INT64_MIN;
	int32_t t140 = 1020998;

    t140 = ((x8577-(x8578<<x8579))>x8580);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x8609 = 11;
	uint8_t x8610 = 23U;
	uint8_t x8611 = 0U;
	volatile int32_t t141 = 10;

    t141 = ((x8609-(x8610<<x8611))>x8612);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x8645 = 6U;
	uint32_t x8646 = UINT32_MAX;
	uint8_t x8647 = 2U;

    t142 = ((x8645-(x8646<<x8647))>x8648);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x8709 = 2U;
	int8_t x8710 = 16;
	int32_t x8711 = 11;
	int64_t x8712 = 63824195LL;
	int32_t t143 = 18468260;

    t143 = ((x8709-(x8710<<x8711))>x8712);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x8813 = -3260054489154LL;
	int32_t t144 = -386608555;

    t144 = ((x8813-(x8814<<x8815))>x8816);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x8817 = INT64_MAX;
	uint16_t x8818 = 17138U;
	int8_t x8820 = INT8_MIN;
	volatile int32_t t145 = 2358272;

    t145 = ((x8817-(x8818<<x8819))>x8820);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x8921 = -1LL;
	static uint32_t x8922 = 7116399U;
	uint16_t x8923 = 1U;
	int8_t x8924 = -1;
	volatile int32_t t146 = 83637;

    t146 = ((x8921-(x8922<<x8923))>x8924);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x8925 = INT16_MIN;
	uint32_t x8926 = 1U;
	int8_t x8927 = 4;
	static volatile uint16_t x8928 = 10590U;
	int32_t t147 = -154721;

    t147 = ((x8925-(x8926<<x8927))>x8928);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x9003 = 3U;
	int64_t x9004 = INT64_MAX;

    t148 = ((x9001-(x9002<<x9003))>x9004);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x9085 = UINT16_MAX;
	static volatile int8_t x9086 = 1;
	uint16_t x9088 = 43U;
	int32_t t149 = 481220396;

    t149 = ((x9085-(x9086<<x9087))>x9088);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x9137 = INT32_MAX;
	int16_t x9138 = INT16_MAX;
	uint8_t x9139 = 0U;
	volatile int64_t x9140 = 222100139439018080LL;
	static volatile int32_t t150 = -136103;

    t150 = ((x9137-(x9138<<x9139))>x9140);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x9149 = -615;
	uint32_t x9150 = 82794500U;
	uint32_t x9151 = 1U;
	static int16_t x9152 = INT16_MIN;
	int32_t t151 = -375837;

    t151 = ((x9149-(x9150<<x9151))>x9152);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x9158 = INT16_MAX;
	int8_t x9159 = 1;
	uint32_t x9160 = 347243659U;
	int32_t t152 = 3081;

    t152 = ((x9157-(x9158<<x9159))>x9160);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x9193 = 273332334LL;
	uint64_t x9194 = 2LLU;
	uint64_t x9195 = 14LLU;

    t153 = ((x9193-(x9194<<x9195))>x9196);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x9253 = INT64_MAX;
	int16_t x9254 = 1526;
	static int8_t x9255 = 5;
	int8_t x9256 = -1;

    t154 = ((x9253-(x9254<<x9255))>x9256);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x9429 = INT64_MAX;
	int8_t x9431 = 7;
	int32_t x9432 = -1;
	static int32_t t155 = 0;

    t155 = ((x9429-(x9430<<x9431))>x9432);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x9521 = INT16_MIN;
	uint8_t x9523 = 26U;
	uint8_t x9524 = 1U;
	volatile int32_t t156 = 0;

    t156 = ((x9521-(x9522<<x9523))>x9524);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x9625 = UINT32_MAX;
	uint32_t x9626 = 71U;
	int32_t t157 = -244596;

    t157 = ((x9625-(x9626<<x9627))>x9628);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x9686 = UINT64_MAX;
	volatile int32_t t158 = 3576;

    t158 = ((x9685-(x9686<<x9687))>x9688);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x9881 = INT8_MIN;
	uint32_t x9882 = 14U;
	static int16_t x9883 = 2;
	volatile int16_t x9884 = 5648;

    t159 = ((x9881-(x9882<<x9883))>x9884);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x9934 = 3;
	static int8_t x9935 = 1;
	static int64_t x9936 = 52493649326760115LL;
	volatile int32_t t160 = 3202;

    t160 = ((x9933-(x9934<<x9935))>x9936);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x10109 = INT8_MAX;
	uint32_t x10111 = 27U;
	static int16_t x10112 = INT16_MIN;
	int32_t t161 = 397845;

    t161 = ((x10109-(x10110<<x10111))>x10112);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x10133 = 1U;
	volatile int16_t x10135 = 0;
	int32_t x10136 = -2495401;

    t162 = ((x10133-(x10134<<x10135))>x10136);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x10193 = UINT32_MAX;
	int16_t x10195 = 0;
	static int16_t x10196 = 81;
	int32_t t163 = 0;

    t163 = ((x10193-(x10194<<x10195))>x10196);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x10246 = 18036U;
	uint8_t x10247 = 0U;
	int32_t x10248 = 55303;

    t164 = ((x10245-(x10246<<x10247))>x10248);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x10325 = -1;
	uint64_t x10326 = 29887062LLU;
	int32_t x10327 = 0;
	static int32_t t165 = 2;

    t165 = ((x10325-(x10326<<x10327))>x10328);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x10397 = INT64_MAX;
	uint8_t x10398 = UINT8_MAX;
	uint8_t x10399 = 0U;
	volatile int32_t t166 = -1002694439;

    t166 = ((x10397-(x10398<<x10399))>x10400);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x10457 = 6764271U;
	uint64_t x10458 = 1LLU;
	static int32_t x10460 = -1;
	static int32_t t167 = 3162695;

    t167 = ((x10457-(x10458<<x10459))>x10460);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x10517 = INT32_MIN;
	uint32_t x10518 = 1U;
	volatile uint8_t x10519 = 1U;
	int64_t x10520 = INT64_MIN;
	int32_t t168 = -83603;

    t168 = ((x10517-(x10518<<x10519))>x10520);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x10573 = 1146192LLU;
	static uint8_t x10574 = 13U;
	int8_t x10575 = 6;
	int32_t t169 = -140895;

    t169 = ((x10573-(x10574<<x10575))>x10576);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x10609 = -1;
	int8_t x10611 = 1;
	int16_t x10612 = 837;
	int32_t t170 = -26908;

    t170 = ((x10609-(x10610<<x10611))>x10612);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x10641 = UINT32_MAX;
	static volatile uint8_t x10642 = 5U;
	static volatile uint16_t x10643 = 1U;
	int64_t x10644 = -1LL;
	int32_t t171 = 3;

    t171 = ((x10641-(x10642<<x10643))>x10644);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x10665 = 25U;
	uint64_t x10666 = 2971998607LLU;
	volatile uint16_t x10667 = 1U;
	static uint8_t x10668 = 59U;

    t172 = ((x10665-(x10666<<x10667))>x10668);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x10673 = 0;
	volatile uint32_t x10674 = 0U;
	int16_t x10676 = -1;
	volatile int32_t t173 = 11882907;

    t173 = ((x10673-(x10674<<x10675))>x10676);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x10705 = -155;
	int64_t x10707 = 12LL;
	static volatile uint16_t x10708 = 21873U;
	int32_t t174 = -4930629;

    t174 = ((x10705-(x10706<<x10707))>x10708);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x10797 = -1;
	int32_t x10798 = 154;
	static int8_t x10799 = 3;
	static uint8_t x10800 = 28U;
	volatile int32_t t175 = -17;

    t175 = ((x10797-(x10798<<x10799))>x10800);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x10841 = INT8_MIN;
	uint64_t x10842 = UINT64_MAX;
	uint8_t x10843 = 22U;

    t176 = ((x10841-(x10842<<x10843))>x10844);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x10901 = INT8_MAX;
	uint64_t x10902 = UINT64_MAX;
	uint8_t x10903 = 23U;
	int16_t x10904 = 5733;
	int32_t t177 = 1099527;

    t177 = ((x10901-(x10902<<x10903))>x10904);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x11005 = -2;
	int8_t x11006 = 1;
	static int8_t x11007 = 26;
	static int8_t x11008 = INT8_MAX;
	volatile int32_t t178 = 369;

    t178 = ((x11005-(x11006<<x11007))>x11008);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x11014 = INT16_MAX;
	static int16_t x11015 = 0;
	static int32_t x11016 = INT32_MAX;
	static int32_t t179 = 72157450;

    t179 = ((x11013-(x11014<<x11015))>x11016);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x11046 = 1;
	int8_t x11048 = INT8_MIN;
	volatile int32_t t180 = 60;

    t180 = ((x11045-(x11046<<x11047))>x11048);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x11145 = 2909212455088907LL;
	uint32_t x11146 = 183539U;
	int8_t x11147 = 31;
	int16_t x11148 = -6;
	static volatile int32_t t181 = 295088;

    t181 = ((x11145-(x11146<<x11147))>x11148);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x11169 = 16393LLU;
	int8_t x11170 = 1;
	static uint8_t x11171 = 2U;
	static volatile uint8_t x11172 = 6U;
	static int32_t t182 = 288382;

    t182 = ((x11169-(x11170<<x11171))>x11172);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x11273 = -1LL;
	volatile uint8_t x11274 = 28U;
	static int8_t x11275 = 14;
	static int64_t x11276 = INT64_MAX;

    t183 = ((x11273-(x11274<<x11275))>x11276);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x11349 = INT8_MAX;
	static volatile uint8_t x11350 = 4U;
	int8_t x11351 = 1;
	int32_t x11352 = -1;
	volatile int32_t t184 = 5383;

    t184 = ((x11349-(x11350<<x11351))>x11352);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x11365 = 0U;
	int8_t x11366 = 5;
	int64_t x11368 = -1LL;
	volatile int32_t t185 = 1;

    t185 = ((x11365-(x11366<<x11367))>x11368);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x11385 = 238;
	uint16_t x11386 = 3700U;
	uint16_t x11387 = 2U;
	static int16_t x11388 = INT16_MIN;
	int32_t t186 = -98067800;

    t186 = ((x11385-(x11386<<x11387))>x11388);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x11398 = 29;
	int32_t x11400 = INT32_MIN;
	volatile int32_t t187 = 2357;

    t187 = ((x11397-(x11398<<x11399))>x11400);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x11569 = INT16_MIN;
	volatile uint32_t x11570 = 19U;
	uint32_t x11572 = 4515U;
	int32_t t188 = -10602;

    t188 = ((x11569-(x11570<<x11571))>x11572);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x11610 = 1292940801LLU;
	int16_t x11612 = 21;
	int32_t t189 = -246343;

    t189 = ((x11609-(x11610<<x11611))>x11612);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x11618 = 26U;
	int8_t x11620 = INT8_MAX;
	static int32_t t190 = -903;

    t190 = ((x11617-(x11618<<x11619))>x11620);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    

    t191 = ((x11637-(x11638<<x11639))>x11640);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x11693 = 506LLU;
	volatile uint8_t x11694 = 28U;
	volatile int64_t x11695 = 0LL;
	volatile uint32_t x11696 = UINT32_MAX;
	static int32_t t192 = -3675;

    t192 = ((x11693-(x11694<<x11695))>x11696);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x11729 = -1;
	int32_t t193 = -216280661;

    t193 = ((x11729-(x11730<<x11731))>x11732);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x11753 = 1;
	int64_t x11756 = 0LL;
	int32_t t194 = -379126;

    t194 = ((x11753-(x11754<<x11755))>x11756);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x11767 = 3LLU;
	uint64_t x11768 = 1LLU;
	volatile int32_t t195 = -763;

    t195 = ((x11765-(x11766<<x11767))>x11768);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x11789 = INT8_MIN;
	uint64_t x11790 = 1318038538LLU;
	int8_t x11792 = 5;
	static volatile int32_t t196 = -6005;

    t196 = ((x11789-(x11790<<x11791))>x11792);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x11945 = 1U;
	int32_t x11947 = 1;
	int32_t x11948 = INT32_MIN;

    t197 = ((x11945-(x11946<<x11947))>x11948);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x12005 = 0LL;
	static int8_t x12006 = 36;
	int64_t x12008 = INT64_MIN;
	int32_t t198 = -378;

    t198 = ((x12005-(x12006<<x12007))>x12008);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x12143 = 13U;
	int16_t x12144 = -1;
	volatile int32_t t199 = -248;

    t199 = ((x12141-(x12142<<x12143))>x12144);

    if (t199 != 0) { NG(); } else { ; }
	
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

