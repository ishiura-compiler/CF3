
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

uint16_t x19 = UINT16_MAX;
volatile int32_t t0 = 42899;
uint8_t x142 = 1U;
static int16_t x144 = INT16_MIN;
uint32_t x337 = 136488973U;
int8_t x526 = 3;
int8_t x528 = -1;
volatile int32_t t4 = -5921737;
int16_t x641 = 0;
uint16_t x644 = UINT16_MAX;
int32_t t10 = -25160;
int32_t x815 = -1;
volatile int8_t x884 = -1;
int32_t t13 = -126;
static int32_t x1261 = INT32_MIN;
int32_t x1457 = INT32_MIN;
int64_t x1460 = INT64_MIN;
volatile int32_t t20 = 9255542;
uint8_t x1670 = 3U;
int32_t x1706 = INT32_MIN;
static volatile int32_t x1707 = -1;
volatile int32_t t23 = 1;
static volatile uint8_t x1757 = 1U;
static uint32_t x1759 = 0U;
int32_t x1760 = 0;
uint64_t x1776 = UINT64_MAX;
int16_t x1948 = -1;
int8_t x2066 = INT8_MIN;
int16_t x2214 = 15607;
int16_t x2216 = -1;
int32_t t32 = -37;
static int64_t x2303 = INT64_MAX;
int64_t x2457 = INT64_MIN;
int32_t t36 = -98870;
static volatile int32_t t37 = 62540984;
uint16_t x2606 = UINT16_MAX;
int32_t x2747 = -1;
int32_t x2748 = -1;
int32_t t40 = -410;
static int32_t x2774 = -1;
static int32_t x2775 = INT32_MIN;
volatile int8_t x2841 = -1;
int64_t x2842 = INT64_MIN;
int8_t x3018 = INT8_MIN;
int64_t x3019 = INT64_MIN;
int32_t t44 = 14207;
volatile int16_t x3066 = 18;
static int8_t x3068 = -1;
int16_t x3311 = -1;
int64_t x3434 = INT64_MAX;
uint8_t x3435 = UINT8_MAX;
static int32_t t52 = 0;
int8_t x4061 = 2;
int16_t x4063 = 1;
volatile int8_t x4064 = 1;
static int64_t x4081 = -5LL;
uint8_t x4082 = UINT8_MAX;
int32_t t54 = 9;
uint64_t x4127 = UINT64_MAX;
uint8_t x4248 = UINT8_MAX;
int8_t x4364 = -1;
int8_t x4397 = -1;
int8_t x4448 = -1;
uint8_t x4753 = UINT8_MAX;
volatile int32_t t63 = -1201;
volatile uint8_t x4761 = 0U;
int8_t x4762 = -4;
uint16_t x4763 = 0U;
int8_t x4764 = 0;
static uint64_t x4812 = UINT64_MAX;
int32_t t68 = 202172322;
static int16_t x5036 = -1;
static int64_t x5277 = INT64_MAX;
int64_t x5361 = INT64_MIN;
int8_t x5386 = -1;
int64_t x5388 = INT64_MIN;
uint8_t x5870 = 0U;
int8_t x5904 = 1;
volatile int8_t x6241 = INT8_MIN;
int8_t x6262 = INT8_MIN;
int8_t x6320 = -1;
volatile int8_t x6341 = 0;
volatile uint32_t x6342 = 12246441U;
int8_t x6379 = INT8_MIN;
volatile int32_t x6601 = 14;
uint16_t x6617 = 11059U;
int64_t x6799 = INT64_MIN;
int8_t x6911 = -1;
int32_t t95 = 198957;
static volatile uint64_t x7093 = 59725815000358882LLU;
int8_t x7095 = INT8_MIN;
uint8_t x7246 = 1U;
uint64_t x7247 = UINT64_MAX;
int16_t x7377 = INT16_MIN;
int32_t x7378 = -7177499;
int8_t x7379 = -1;
int8_t x7380 = -1;
uint32_t x7576 = UINT32_MAX;
volatile int32_t t102 = 3;
int64_t x7735 = INT64_MIN;
int32_t x7798 = INT32_MIN;
int16_t x7923 = INT16_MIN;
static uint64_t x7930 = UINT64_MAX;
int16_t x8282 = -1005;
int32_t x8526 = -1;
int8_t x8545 = 0;
volatile uint32_t x8667 = UINT32_MAX;
int32_t x8820 = INT32_MAX;


void f0(void) {
    	uint16_t x17 = 8243U;
	int8_t x18 = -22;
	uint16_t x20 = UINT16_MAX;

    t0 = ((x17!=x18)/(x19==x20));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x141 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	volatile int32_t t1 = -7070867;

    t1 = ((x141!=x142)/(x143==x144));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x169 = 1;
	uint64_t x170 = 7938703320251LLU;
	int16_t x171 = INT16_MIN;
	int16_t x172 = INT16_MIN;
	static int32_t t2 = -30910;

    t2 = ((x169!=x170)/(x171==x172));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x338 = 0;
	static volatile int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MIN;
	int32_t t3 = -438474;

    t3 = ((x337!=x338)/(x339==x340));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x525 = -535661735263LL;
	static int32_t x527 = -1;

    t4 = ((x525!=x526)/(x527==x528));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x569 = UINT32_MAX;
	volatile int32_t x570 = INT32_MIN;
	int32_t x571 = INT32_MIN;
	int32_t x572 = INT32_MIN;
	volatile int32_t t5 = -1;

    t5 = ((x569!=x570)/(x571==x572));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x597 = -62;
	int64_t x598 = INT64_MIN;
	int8_t x599 = -1;
	static int8_t x600 = -1;
	volatile int32_t t6 = -36;

    t6 = ((x597!=x598)/(x599==x600));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x642 = INT64_MIN;
	uint16_t x643 = UINT16_MAX;
	static int32_t t7 = 367712;

    t7 = ((x641!=x642)/(x643==x644));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x657 = INT8_MAX;
	int8_t x658 = INT8_MAX;
	volatile int64_t x659 = -1LL;
	static uint64_t x660 = UINT64_MAX;
	int32_t t8 = 7;

    t8 = ((x657!=x658)/(x659==x660));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x693 = -1;
	static uint32_t x694 = UINT32_MAX;
	volatile uint64_t x695 = UINT64_MAX;
	int8_t x696 = -1;
	volatile int32_t t9 = 16;

    t9 = ((x693!=x694)/(x695==x696));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x709 = INT64_MAX;
	static volatile uint32_t x710 = UINT32_MAX;
	uint32_t x711 = 0U;
	uint32_t x712 = 0U;

    t10 = ((x709!=x710)/(x711==x712));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x813 = UINT16_MAX;
	static int16_t x814 = INT16_MIN;
	uint32_t x816 = UINT32_MAX;
	int32_t t11 = -107294;

    t11 = ((x813!=x814)/(x815==x816));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x881 = INT16_MAX;
	static int32_t x882 = -1;
	int16_t x883 = -1;
	volatile int32_t t12 = 28;

    t12 = ((x881!=x882)/(x883==x884));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x945 = 0U;
	int16_t x946 = INT16_MAX;
	uint64_t x947 = 1LLU;
	int16_t x948 = 1;

    t13 = ((x945!=x946)/(x947==x948));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x1117 = 141U;
	int8_t x1118 = INT8_MIN;
	int32_t x1119 = -1;
	int32_t x1120 = -1;
	static int32_t t14 = -854627764;

    t14 = ((x1117!=x1118)/(x1119==x1120));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1245 = INT8_MAX;
	uint64_t x1246 = 1187736316LLU;
	volatile int8_t x1247 = INT8_MIN;
	int8_t x1248 = INT8_MIN;
	int32_t t15 = 213606;

    t15 = ((x1245!=x1246)/(x1247==x1248));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1253 = INT16_MIN;
	int64_t x1254 = -1LL;
	int16_t x1255 = INT16_MAX;
	static int16_t x1256 = INT16_MAX;
	static int32_t t16 = 21;

    t16 = ((x1253!=x1254)/(x1255==x1256));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1262 = -1;
	int64_t x1263 = -1LL;
	int8_t x1264 = -1;
	static volatile int32_t t17 = 212179;

    t17 = ((x1261!=x1262)/(x1263==x1264));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x1317 = 15U;
	volatile int8_t x1318 = INT8_MIN;
	static int32_t x1319 = INT32_MIN;
	static int32_t x1320 = INT32_MIN;
	volatile int32_t t18 = -8041148;

    t18 = ((x1317!=x1318)/(x1319==x1320));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1437 = -24705995788070428LL;
	int16_t x1438 = 7397;
	volatile int16_t x1439 = INT16_MIN;
	static int16_t x1440 = INT16_MIN;
	volatile int32_t t19 = -521;

    t19 = ((x1437!=x1438)/(x1439==x1440));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x1458 = 392U;
	int64_t x1459 = INT64_MIN;

    t20 = ((x1457!=x1458)/(x1459==x1460));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1541 = -1;
	volatile int8_t x1542 = INT8_MAX;
	int64_t x1543 = -1LL;
	static int8_t x1544 = -1;
	volatile int32_t t21 = -1843221;

    t21 = ((x1541!=x1542)/(x1543==x1544));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1669 = INT16_MAX;
	int32_t x1671 = INT32_MIN;
	int32_t x1672 = INT32_MIN;
	volatile int32_t t22 = 235;

    t22 = ((x1669!=x1670)/(x1671==x1672));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1705 = INT16_MIN;
	int8_t x1708 = -1;

    t23 = ((x1705!=x1706)/(x1707==x1708));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x1758 = 21U;
	int32_t t24 = -899878989;

    t24 = ((x1757!=x1758)/(x1759==x1760));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x1773 = 0U;
	uint16_t x1774 = 1U;
	static int16_t x1775 = -1;
	volatile int32_t t25 = 5949;

    t25 = ((x1773!=x1774)/(x1775==x1776));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x1841 = INT32_MAX;
	int8_t x1842 = -17;
	int64_t x1843 = INT64_MIN;
	static int64_t x1844 = INT64_MIN;
	int32_t t26 = -908788;

    t26 = ((x1841!=x1842)/(x1843==x1844));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1869 = 3U;
	int8_t x1870 = INT8_MIN;
	uint64_t x1871 = UINT64_MAX;
	uint64_t x1872 = UINT64_MAX;
	static volatile int32_t t27 = 211593692;

    t27 = ((x1869!=x1870)/(x1871==x1872));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x1945 = -1;
	static uint32_t x1946 = UINT32_MAX;
	uint32_t x1947 = UINT32_MAX;
	int32_t t28 = -29;

    t28 = ((x1945!=x1946)/(x1947==x1948));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1973 = -330754360LL;
	int64_t x1974 = INT64_MAX;
	int16_t x1975 = INT16_MIN;
	static int16_t x1976 = INT16_MIN;
	volatile int32_t t29 = -4;

    t29 = ((x1973!=x1974)/(x1975==x1976));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x2065 = 112;
	volatile int16_t x2067 = -1;
	volatile uint64_t x2068 = UINT64_MAX;
	int32_t t30 = 115;

    t30 = ((x2065!=x2066)/(x2067==x2068));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x2185 = UINT8_MAX;
	uint8_t x2186 = UINT8_MAX;
	int64_t x2187 = INT64_MIN;
	int64_t x2188 = INT64_MIN;
	volatile int32_t t31 = 4278225;

    t31 = ((x2185!=x2186)/(x2187==x2188));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2213 = UINT16_MAX;
	int64_t x2215 = -1LL;

    t32 = ((x2213!=x2214)/(x2215==x2216));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2301 = UINT16_MAX;
	uint8_t x2302 = 53U;
	static int64_t x2304 = INT64_MAX;
	int32_t t33 = 195110973;

    t33 = ((x2301!=x2302)/(x2303==x2304));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2449 = -1;
	static int16_t x2450 = 275;
	uint64_t x2451 = UINT64_MAX;
	volatile int8_t x2452 = -1;
	volatile int32_t t34 = 3689287;

    t34 = ((x2449!=x2450)/(x2451==x2452));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x2458 = 1697U;
	uint32_t x2459 = UINT32_MAX;
	uint32_t x2460 = UINT32_MAX;
	volatile int32_t t35 = 9;

    t35 = ((x2457!=x2458)/(x2459==x2460));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2489 = INT64_MIN;
	uint16_t x2490 = 13U;
	int16_t x2491 = -1;
	int16_t x2492 = -1;

    t36 = ((x2489!=x2490)/(x2491==x2492));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x2545 = INT32_MIN;
	int8_t x2546 = INT8_MIN;
	uint32_t x2547 = UINT32_MAX;
	uint32_t x2548 = UINT32_MAX;

    t37 = ((x2545!=x2546)/(x2547==x2548));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x2605 = INT8_MIN;
	volatile uint8_t x2607 = 3U;
	uint32_t x2608 = 3U;
	volatile int32_t t38 = 48131;

    t38 = ((x2605!=x2606)/(x2607==x2608));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2725 = -415;
	int8_t x2726 = 8;
	int16_t x2727 = -1;
	int64_t x2728 = -1LL;
	int32_t t39 = 45592;

    t39 = ((x2725!=x2726)/(x2727==x2728));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x2745 = INT64_MAX;
	uint16_t x2746 = 26274U;

    t40 = ((x2745!=x2746)/(x2747==x2748));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x2773 = INT8_MAX;
	int32_t x2776 = INT32_MIN;
	int32_t t41 = -10104193;

    t41 = ((x2773!=x2774)/(x2775==x2776));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x2843 = -1;
	volatile int32_t x2844 = -1;
	int32_t t42 = -1200327;

    t42 = ((x2841!=x2842)/(x2843==x2844));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x3013 = 0;
	volatile int64_t x3014 = INT64_MIN;
	int8_t x3015 = -1;
	static volatile int8_t x3016 = -1;
	static int32_t t43 = -1;

    t43 = ((x3013!=x3014)/(x3015==x3016));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x3017 = INT32_MAX;
	volatile int64_t x3020 = INT64_MIN;

    t44 = ((x3017!=x3018)/(x3019==x3020));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x3065 = -326;
	int16_t x3067 = -1;
	volatile int32_t t45 = -55;

    t45 = ((x3065!=x3066)/(x3067==x3068));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x3117 = -81209933;
	uint8_t x3118 = 67U;
	int32_t x3119 = -1;
	int32_t x3120 = -1;
	static int32_t t46 = 37685698;

    t46 = ((x3117!=x3118)/(x3119==x3120));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x3309 = 7;
	volatile int32_t x3310 = -415723;
	int8_t x3312 = -1;
	int32_t t47 = -52;

    t47 = ((x3309!=x3310)/(x3311==x3312));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x3341 = 7563U;
	int32_t x3342 = INT32_MIN;
	int16_t x3343 = -1;
	uint32_t x3344 = UINT32_MAX;
	volatile int32_t t48 = 104212588;

    t48 = ((x3341!=x3342)/(x3343==x3344));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x3433 = INT8_MIN;
	static volatile uint8_t x3436 = UINT8_MAX;
	int32_t t49 = 458;

    t49 = ((x3433!=x3434)/(x3435==x3436));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x3557 = INT32_MAX;
	int32_t x3558 = INT32_MIN;
	static int16_t x3559 = -1;
	int64_t x3560 = -1LL;
	static int32_t t50 = -38;

    t50 = ((x3557!=x3558)/(x3559==x3560));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x3869 = 268042321085LLU;
	uint8_t x3870 = 6U;
	int8_t x3871 = -1;
	volatile int64_t x3872 = -1LL;
	static int32_t t51 = 1;

    t51 = ((x3869!=x3870)/(x3871==x3872));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x4049 = -1;
	int8_t x4050 = INT8_MIN;
	int16_t x4051 = INT16_MIN;
	static int16_t x4052 = INT16_MIN;

    t52 = ((x4049!=x4050)/(x4051==x4052));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x4062 = INT64_MAX;
	volatile int32_t t53 = -2520;

    t53 = ((x4061!=x4062)/(x4063==x4064));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x4083 = -1;
	volatile int8_t x4084 = -1;

    t54 = ((x4081!=x4082)/(x4083==x4084));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x4125 = 4;
	volatile int32_t x4126 = 99188;
	int8_t x4128 = -1;
	volatile int32_t t55 = 865350;

    t55 = ((x4125!=x4126)/(x4127==x4128));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x4245 = 0U;
	int32_t x4246 = INT32_MIN;
	volatile uint8_t x4247 = UINT8_MAX;
	int32_t t56 = -843022439;

    t56 = ((x4245!=x4246)/(x4247==x4248));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x4361 = 341382271146915LLU;
	uint64_t x4362 = 1727496196LLU;
	uint32_t x4363 = UINT32_MAX;
	int32_t t57 = 2423154;

    t57 = ((x4361!=x4362)/(x4363==x4364));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x4398 = -1LL;
	uint32_t x4399 = UINT32_MAX;
	static int8_t x4400 = -1;
	int32_t t58 = 56049092;

    t58 = ((x4397!=x4398)/(x4399==x4400));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x4445 = INT16_MIN;
	uint64_t x4446 = 31786594537LLU;
	int8_t x4447 = -1;
	int32_t t59 = 0;

    t59 = ((x4445!=x4446)/(x4447==x4448));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x4485 = -1;
	static int64_t x4486 = INT64_MAX;
	volatile int32_t x4487 = -1;
	int32_t x4488 = -1;
	volatile int32_t t60 = 31044;

    t60 = ((x4485!=x4486)/(x4487==x4488));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x4537 = INT64_MIN;
	int32_t x4538 = INT32_MAX;
	static int8_t x4539 = -1;
	uint32_t x4540 = UINT32_MAX;
	int32_t t61 = -51352821;

    t61 = ((x4537!=x4538)/(x4539==x4540));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x4705 = 10U;
	int64_t x4706 = -2256LL;
	int16_t x4707 = -1;
	volatile int8_t x4708 = -1;
	volatile int32_t t62 = 1065689943;

    t62 = ((x4705!=x4706)/(x4707==x4708));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x4754 = INT64_MAX;
	int64_t x4755 = -1LL;
	uint64_t x4756 = UINT64_MAX;

    t63 = ((x4753!=x4754)/(x4755==x4756));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t t64 = 15748;

    t64 = ((x4761!=x4762)/(x4763==x4764));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x4773 = 217048961777LL;
	uint32_t x4774 = 934977U;
	static uint32_t x4775 = UINT32_MAX;
	int16_t x4776 = -1;
	int32_t t65 = -1;

    t65 = ((x4773!=x4774)/(x4775==x4776));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x4809 = 6LLU;
	volatile int16_t x4810 = -1;
	volatile int16_t x4811 = -1;
	int32_t t66 = 523501;

    t66 = ((x4809!=x4810)/(x4811==x4812));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x4973 = INT16_MAX;
	volatile int32_t x4974 = -1;
	int16_t x4975 = INT16_MIN;
	int16_t x4976 = INT16_MIN;
	int32_t t67 = 13957;

    t67 = ((x4973!=x4974)/(x4975==x4976));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x5021 = UINT8_MAX;
	int32_t x5022 = -1;
	volatile int32_t x5023 = -1;
	int8_t x5024 = -1;

    t68 = ((x5021!=x5022)/(x5023==x5024));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x5033 = -1;
	volatile uint8_t x5034 = UINT8_MAX;
	uint64_t x5035 = UINT64_MAX;
	static int32_t t69 = 17549;

    t69 = ((x5033!=x5034)/(x5035==x5036));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x5097 = -1;
	uint64_t x5098 = 4704502927936LLU;
	int32_t x5099 = -1;
	static int32_t x5100 = -1;
	volatile int32_t t70 = 1;

    t70 = ((x5097!=x5098)/(x5099==x5100));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x5181 = 361U;
	int64_t x5182 = -1LL;
	volatile uint64_t x5183 = UINT64_MAX;
	int16_t x5184 = -1;
	static int32_t t71 = -2249072;

    t71 = ((x5181!=x5182)/(x5183==x5184));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x5249 = 9987U;
	uint32_t x5250 = UINT32_MAX;
	volatile int16_t x5251 = -1;
	int32_t x5252 = -1;
	volatile int32_t t72 = -21948602;

    t72 = ((x5249!=x5250)/(x5251==x5252));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x5278 = UINT32_MAX;
	volatile int64_t x5279 = -1LL;
	int8_t x5280 = -1;
	int32_t t73 = 2;

    t73 = ((x5277!=x5278)/(x5279==x5280));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int8_t x5362 = -1;
	volatile int32_t x5363 = -1;
	volatile uint64_t x5364 = UINT64_MAX;
	volatile int32_t t74 = 51547103;

    t74 = ((x5361!=x5362)/(x5363==x5364));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x5385 = -2;
	int64_t x5387 = INT64_MIN;
	volatile int32_t t75 = -406;

    t75 = ((x5385!=x5386)/(x5387==x5388));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x5409 = INT64_MAX;
	uint8_t x5410 = 11U;
	int8_t x5411 = -1;
	volatile int64_t x5412 = -1LL;
	int32_t t76 = -7728652;

    t76 = ((x5409!=x5410)/(x5411==x5412));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x5517 = INT16_MIN;
	static int8_t x5518 = 0;
	volatile int64_t x5519 = -1LL;
	int8_t x5520 = -1;
	volatile int32_t t77 = 0;

    t77 = ((x5517!=x5518)/(x5519==x5520));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x5553 = -42;
	int32_t x5554 = INT32_MIN;
	int32_t x5555 = -1;
	int32_t x5556 = -1;
	int32_t t78 = 399827;

    t78 = ((x5553!=x5554)/(x5555==x5556));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x5565 = INT8_MAX;
	volatile int64_t x5566 = INT64_MIN;
	static volatile int16_t x5567 = -1;
	uint64_t x5568 = UINT64_MAX;
	int32_t t79 = 361672;

    t79 = ((x5565!=x5566)/(x5567==x5568));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x5725 = INT8_MAX;
	static uint32_t x5726 = UINT32_MAX;
	static int64_t x5727 = -1LL;
	int64_t x5728 = -1LL;
	static int32_t t80 = 675497936;

    t80 = ((x5725!=x5726)/(x5727==x5728));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x5857 = INT64_MIN;
	int64_t x5858 = -1LL;
	int32_t x5859 = -1;
	int8_t x5860 = -1;
	int32_t t81 = -75;

    t81 = ((x5857!=x5858)/(x5859==x5860));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x5869 = -1LL;
	static int16_t x5871 = -1;
	int8_t x5872 = -1;
	volatile int32_t t82 = -3150164;

    t82 = ((x5869!=x5870)/(x5871==x5872));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x5889 = -11718969;
	uint64_t x5890 = 6098908718066861365LLU;
	int16_t x5891 = INT16_MIN;
	volatile int16_t x5892 = INT16_MIN;
	int32_t t83 = 119616558;

    t83 = ((x5889!=x5890)/(x5891==x5892));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x5901 = 34U;
	int16_t x5902 = INT16_MIN;
	volatile uint8_t x5903 = 1U;
	int32_t t84 = -33;

    t84 = ((x5901!=x5902)/(x5903==x5904));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x6221 = INT32_MIN;
	uint16_t x6222 = 2946U;
	static int64_t x6223 = -1LL;
	static int32_t x6224 = -1;
	int32_t t85 = 3935;

    t85 = ((x6221!=x6222)/(x6223==x6224));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x6242 = -1;
	uint64_t x6243 = UINT64_MAX;
	int16_t x6244 = -1;
	int32_t t86 = 58938233;

    t86 = ((x6241!=x6242)/(x6243==x6244));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x6261 = 1U;
	static int8_t x6263 = INT8_MIN;
	int8_t x6264 = INT8_MIN;
	static volatile int32_t t87 = -107247;

    t87 = ((x6261!=x6262)/(x6263==x6264));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x6317 = 94U;
	uint64_t x6318 = 1005LLU;
	static int32_t x6319 = -1;
	volatile int32_t t88 = -1;

    t88 = ((x6317!=x6318)/(x6319==x6320));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x6343 = -1;
	int16_t x6344 = -1;
	int32_t t89 = -378427;

    t89 = ((x6341!=x6342)/(x6343==x6344));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x6377 = UINT8_MAX;
	volatile uint64_t x6378 = 4853106854040158LLU;
	volatile int8_t x6380 = INT8_MIN;
	int32_t t90 = -11082;

    t90 = ((x6377!=x6378)/(x6379==x6380));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x6545 = INT16_MIN;
	uint16_t x6546 = 20191U;
	uint8_t x6547 = 1U;
	int8_t x6548 = 1;
	static volatile int32_t t91 = -3627509;

    t91 = ((x6545!=x6546)/(x6547==x6548));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint16_t x6602 = UINT16_MAX;
	int32_t x6603 = INT32_MIN;
	static int32_t x6604 = INT32_MIN;
	volatile int32_t t92 = -118180907;

    t92 = ((x6601!=x6602)/(x6603==x6604));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x6618 = INT32_MAX;
	volatile int8_t x6619 = -1;
	volatile int32_t x6620 = -1;
	int32_t t93 = -206078;

    t93 = ((x6617!=x6618)/(x6619==x6620));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x6797 = INT16_MIN;
	uint8_t x6798 = 123U;
	int64_t x6800 = INT64_MIN;
	static volatile int32_t t94 = -26893757;

    t94 = ((x6797!=x6798)/(x6799==x6800));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x6909 = -1;
	static int64_t x6910 = INT64_MAX;
	uint32_t x6912 = UINT32_MAX;

    t95 = ((x6909!=x6910)/(x6911==x6912));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x6921 = 2U;
	static int8_t x6922 = -3;
	uint64_t x6923 = UINT64_MAX;
	int16_t x6924 = -1;
	volatile int32_t t96 = -38182460;

    t96 = ((x6921!=x6922)/(x6923==x6924));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x7094 = 67829050;
	int8_t x7096 = INT8_MIN;
	volatile int32_t t97 = -156472052;

    t97 = ((x7093!=x7094)/(x7095==x7096));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x7113 = 1;
	static int64_t x7114 = -1LL;
	uint8_t x7115 = 0U;
	uint64_t x7116 = 0LLU;
	int32_t t98 = 190294;

    t98 = ((x7113!=x7114)/(x7115==x7116));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x7245 = -3;
	uint64_t x7248 = UINT64_MAX;
	volatile int32_t t99 = -24;

    t99 = ((x7245!=x7246)/(x7247==x7248));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t t100 = -28998873;

    t100 = ((x7377!=x7378)/(x7379==x7380));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x7421 = -8;
	int64_t x7422 = -1LL;
	static int64_t x7423 = INT64_MAX;
	int64_t x7424 = INT64_MAX;
	static int32_t t101 = 2313223;

    t101 = ((x7421!=x7422)/(x7423==x7424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x7573 = -3;
	uint8_t x7574 = UINT8_MAX;
	int8_t x7575 = -1;

    t102 = ((x7573!=x7574)/(x7575==x7576));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint64_t x7693 = UINT64_MAX;
	static uint32_t x7694 = 3267U;
	int32_t x7695 = -1;
	static int32_t x7696 = -1;
	int32_t t103 = 11914;

    t103 = ((x7693!=x7694)/(x7695==x7696));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x7733 = -1;
	static uint32_t x7734 = 1493833359U;
	static int64_t x7736 = INT64_MIN;
	volatile int32_t t104 = -1;

    t104 = ((x7733!=x7734)/(x7735==x7736));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x7797 = INT64_MAX;
	int64_t x7799 = -1LL;
	int64_t x7800 = -1LL;
	int32_t t105 = -432111;

    t105 = ((x7797!=x7798)/(x7799==x7800));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x7881 = INT8_MIN;
	static int32_t x7882 = INT32_MIN;
	static uint32_t x7883 = UINT32_MAX;
	int32_t x7884 = -1;
	volatile int32_t t106 = -951912421;

    t106 = ((x7881!=x7882)/(x7883==x7884));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x7921 = 35U;
	int32_t x7922 = INT32_MIN;
	int16_t x7924 = INT16_MIN;
	int32_t t107 = -79198;

    t107 = ((x7921!=x7922)/(x7923==x7924));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x7929 = 52U;
	static int32_t x7931 = INT32_MIN;
	int32_t x7932 = INT32_MIN;
	int32_t t108 = 5573;

    t108 = ((x7929!=x7930)/(x7931==x7932));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x8281 = 0;
	volatile int16_t x8283 = -1;
	static volatile int64_t x8284 = -1LL;
	volatile int32_t t109 = -9111380;

    t109 = ((x8281!=x8282)/(x8283==x8284));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x8525 = INT16_MIN;
	int8_t x8527 = -1;
	volatile int16_t x8528 = -1;
	volatile int32_t t110 = 42;

    t110 = ((x8525!=x8526)/(x8527==x8528));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x8546 = UINT16_MAX;
	int32_t x8547 = INT32_MIN;
	int32_t x8548 = INT32_MIN;
	static volatile int32_t t111 = 221929010;

    t111 = ((x8545!=x8546)/(x8547==x8548));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x8665 = -1LL;
	int32_t x8666 = -1;
	int32_t x8668 = -1;
	volatile int32_t t112 = 1923;

    t112 = ((x8665!=x8666)/(x8667==x8668));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x8669 = INT8_MIN;
	uint32_t x8670 = 1076U;
	int16_t x8671 = INT16_MIN;
	int16_t x8672 = INT16_MIN;
	volatile int32_t t113 = -839151;

    t113 = ((x8669!=x8670)/(x8671==x8672));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x8817 = INT64_MAX;
	int8_t x8818 = INT8_MIN;
	int32_t x8819 = INT32_MAX;
	static volatile int32_t t114 = 3798;

    t114 = ((x8817!=x8818)/(x8819==x8820));

    if (t114 != 1) { NG(); } else { ; }
	
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


    return 0;
}

