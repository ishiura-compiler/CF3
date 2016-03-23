
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

static volatile uint16_t x10 = 3U;
uint32_t x23 = UINT32_MAX;
int16_t x235 = -117;
uint32_t x236 = UINT32_MAX;
uint16_t x358 = 0U;
int32_t x435 = INT32_MAX;
uint32_t x673 = 182340U;
int64_t x715 = -260421635LL;
int8_t x735 = INT8_MIN;
static uint8_t x736 = 0U;
int32_t x761 = 13723;
uint16_t x763 = 10499U;
int8_t x792 = -1;
int64_t x1155 = -1LL;
int16_t x1375 = 0;
int64_t x1376 = -1LL;
int16_t x1598 = 0;
static int16_t x1599 = INT16_MAX;
int16_t x1657 = 2;
volatile int8_t x1659 = -1;
int8_t x1690 = 0;
uint64_t x1691 = UINT64_MAX;
static uint8_t x1694 = 1U;
volatile int32_t x1850 = 22;
int32_t t24 = -30;
uint8_t x1878 = 15U;
int32_t t25 = -5;
static uint8_t x2195 = UINT8_MAX;
int32_t x2391 = INT32_MAX;
volatile int16_t x2392 = -650;
volatile int32_t t31 = -1899899;
static uint64_t x2510 = 4LLU;
int8_t x2569 = 0;
uint32_t x2619 = 1000206U;
volatile int32_t t34 = -1781;
uint64_t x2666 = 4LLU;
int16_t x2761 = INT16_MAX;
int32_t x2764 = INT32_MAX;
int8_t x2953 = 34;
uint8_t x2954 = 7U;
static int16_t x3038 = 2;
int32_t t43 = 50623;
int8_t x3259 = INT8_MAX;
int32_t t45 = 2;
uint8_t x3618 = 8U;
int16_t x3629 = 688;
volatile int16_t x3631 = INT16_MAX;
volatile int32_t t48 = 50;
int64_t x3699 = -1LL;
int16_t x3816 = INT16_MIN;
uint16_t x3821 = 28998U;
static int8_t x3822 = 2;
int32_t x3825 = INT32_MAX;
int64_t x3916 = -437707832923868766LL;
static uint8_t x4105 = 0U;
int64_t x4108 = -1LL;
uint16_t x4150 = 6U;
int16_t x4151 = INT16_MIN;
static uint16_t x4152 = 223U;
static int64_t x4153 = 3445582382551LL;
int8_t x4197 = 1;
uint8_t x4200 = UINT8_MAX;
int32_t x4551 = -11698076;
uint16_t x4552 = 1363U;
int8_t x4798 = 1;
uint8_t x4876 = 3U;
int32_t t69 = 996819396;
static uint16_t x5000 = 50U;
static uint64_t x5017 = 20291471208003LLU;
int16_t x5134 = 21;
uint64_t x5135 = 6LLU;
static uint64_t x5145 = 282498676595984113LLU;
volatile int32_t t78 = 120723;
int32_t t79 = -422279;
static uint32_t x5658 = 1U;
int16_t x5660 = -1;
static int32_t t83 = 0;
int64_t x5867 = -2945LL;
int32_t x5868 = INT32_MIN;
volatile int32_t t84 = -10675;
int32_t t85 = 156;
uint32_t x5935 = 1U;
uint32_t x5936 = UINT32_MAX;
int32_t t86 = -26564474;
uint8_t x6149 = 1U;
uint8_t x6150 = 3U;
volatile int32_t t87 = -155445612;
uint16_t x6169 = 44U;
static int64_t x6172 = INT64_MAX;
static volatile int32_t t88 = -410833;
uint32_t x6249 = 200124998U;
int32_t x6279 = INT32_MIN;
volatile int32_t t90 = 9117;
uint32_t x6287 = 4066U;
static int16_t x6288 = INT16_MIN;
static volatile int32_t t91 = -61503;
uint16_t x6375 = 19589U;
int32_t t93 = -10055695;
int16_t x6413 = 1;
static volatile int8_t x6414 = 1;
static volatile uint16_t x6478 = 1U;
int16_t x6531 = INT16_MIN;
volatile int32_t t97 = -28162314;
int64_t x6609 = 70LL;
int8_t x6611 = -1;
uint8_t x6682 = 0U;
uint64_t x6769 = UINT64_MAX;
int32_t t100 = -452713346;
volatile uint16_t x6913 = UINT16_MAX;
int8_t x6915 = 5;
int32_t x6925 = 2870321;
static uint8_t x6928 = 3U;
uint64_t x7029 = 2098LLU;
int32_t t105 = 93090760;
uint16_t x7377 = UINT16_MAX;
static int8_t x7380 = INT8_MIN;
int64_t x7431 = 4054869330875625914LL;
static int32_t t108 = -788546330;
static uint64_t x7452 = 2110LLU;
int8_t x7459 = 9;
static volatile int32_t t111 = -19185791;
int8_t x7474 = 19;
int8_t x7475 = 7;
static uint64_t x7713 = UINT64_MAX;
int8_t x7714 = 25;
uint32_t x7869 = UINT32_MAX;
static uint8_t x7870 = 12U;
volatile int32_t t117 = 14;
static int8_t x7979 = INT8_MAX;
static uint64_t x8063 = UINT64_MAX;
volatile int32_t t120 = 319997819;
static int64_t x8189 = 3120781209LL;
int32_t x8456 = -11;
uint8_t x8598 = 0U;
static int64_t x8659 = -1LL;
uint8_t x8661 = UINT8_MAX;
int32_t t125 = 6290059;
int32_t t126 = -8;
volatile uint16_t x8779 = UINT16_MAX;
uint8_t x8922 = 15U;
static int32_t x8923 = INT32_MIN;
uint16_t x8981 = 4573U;
uint64_t x8983 = 135943044897LLU;
int64_t x8984 = INT64_MAX;
volatile int32_t t130 = -974665;
int32_t x9037 = 151688417;
int8_t x9040 = 4;
int8_t x9107 = -1;
uint8_t x9170 = 0U;
static uint64_t x9229 = 14964453LLU;
int64_t x9231 = -1LL;
volatile int16_t x9232 = 2;
int8_t x9283 = INT8_MAX;
uint32_t x9353 = 2061216U;
int32_t t138 = -1817;
uint16_t x9514 = 5U;
uint32_t x9516 = 873214U;
volatile int32_t t141 = -186;
volatile int32_t t143 = 69724259;
int16_t x9778 = 0;
uint16_t x9780 = UINT16_MAX;
int64_t x9835 = -1LL;
int32_t t145 = -4086;
uint8_t x9918 = 0U;
static uint8_t x10006 = 1U;
int8_t x10065 = 0;
volatile int32_t t148 = 85220541;
volatile int8_t x10094 = 0;
static int32_t x10096 = INT32_MAX;
volatile int32_t t149 = -3;
volatile int32_t t151 = 0;
volatile int16_t x10379 = -1;
volatile int32_t t154 = 3093;
int64_t x10428 = -102LL;
static uint8_t x10483 = UINT8_MAX;
uint16_t x10528 = 10819U;
volatile int32_t t159 = 6270;
int64_t x10668 = INT64_MIN;
int32_t t160 = -2;
int8_t x10958 = 0;
uint32_t x10998 = 15U;
uint8_t x10999 = UINT8_MAX;
int64_t x11040 = 543772305497299LL;
static uint64_t x11045 = 926356425116265LLU;
uint16_t x11400 = 55U;
volatile uint8_t x11414 = 0U;
volatile int8_t x11491 = -1;
uint64_t x11492 = 498LLU;
static int32_t x11493 = INT32_MAX;
uint8_t x11495 = 51U;
volatile int64_t x11496 = 3506908715336488362LL;
int8_t x11548 = INT8_MIN;
int32_t t171 = 1;
int8_t x11684 = 12;
int32_t t174 = 7982;
volatile int32_t t175 = 514560;
volatile int32_t x11987 = INT32_MIN;
static uint64_t x11989 = 105172940LLU;
int8_t x11990 = 1;
uint16_t x12041 = 369U;
int8_t x12042 = 1;
uint64_t x12093 = UINT64_MAX;
int16_t x12205 = 0;
int8_t x12206 = 2;
static int64_t x12208 = -1622137171088514LL;
int16_t x12385 = 0;
static uint8_t x12386 = 9U;
int64_t x12388 = INT64_MIN;
int8_t x12859 = 0;
static int32_t x12860 = INT32_MAX;
volatile int64_t x13040 = INT64_MAX;
int32_t t191 = 2876;
int8_t x13121 = 22;
int8_t x13158 = 0;
uint32_t x13159 = UINT32_MAX;
static int32_t t195 = 492915666;
int8_t x13369 = 1;
uint8_t x13371 = UINT8_MAX;
static int32_t t197 = 28878;
uint32_t x13573 = 0U;


void f0(void) {
    	static volatile int16_t x9 = INT16_MAX;
	uint32_t x11 = 2058615U;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t0 = -47045602;

    t0 = (((x9<<x10)|x11)<=x12);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x21 = 3U;
	uint8_t x22 = 10U;
	volatile int16_t x24 = 1;
	int32_t t1 = 467;

    t1 = (((x21<<x22)|x23)<=x24);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x117 = UINT8_MAX;
	uint32_t x118 = 8U;
	uint16_t x119 = 7687U;
	volatile int16_t x120 = INT16_MAX;
	int32_t t2 = -19;

    t2 = (((x117<<x118)|x119)<=x120);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x233 = UINT32_MAX;
	uint8_t x234 = 24U;
	static volatile int32_t t3 = 1;

    t3 = (((x233<<x234)|x235)<=x236);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x245 = INT16_MAX;
	volatile uint8_t x246 = 7U;
	uint64_t x247 = 6188426647753LLU;
	volatile int64_t x248 = INT64_MAX;
	volatile int32_t t4 = 1;

    t4 = (((x245<<x246)|x247)<=x248);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x357 = 29226U;
	static int64_t x359 = -2460591201LL;
	static int32_t x360 = INT32_MIN;
	int32_t t5 = -14;

    t5 = (((x357<<x358)|x359)<=x360);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x433 = INT8_MAX;
	uint8_t x434 = 0U;
	int64_t x436 = -1LL;
	volatile int32_t t6 = 13981995;

    t6 = (((x433<<x434)|x435)<=x436);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x674 = 24U;
	uint64_t x675 = UINT64_MAX;
	int16_t x676 = -10;
	int32_t t7 = -62059;

    t7 = (((x673<<x674)|x675)<=x676);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x713 = 127776470534507070LLU;
	uint8_t x714 = 60U;
	int32_t x716 = INT32_MIN;
	volatile int32_t t8 = -470;

    t8 = (((x713<<x714)|x715)<=x716);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x733 = 102176406U;
	uint8_t x734 = 8U;
	int32_t t9 = -64604279;

    t9 = (((x733<<x734)|x735)<=x736);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x762 = 1U;
	uint64_t x764 = 121534277LLU;
	volatile int32_t t10 = 50;

    t10 = (((x761<<x762)|x763)<=x764);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x789 = INT16_MAX;
	static int8_t x790 = 0;
	int32_t x791 = 6032;
	volatile int32_t t11 = -38921;

    t11 = (((x789<<x790)|x791)<=x792);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x837 = 35608101695477761LL;
	static int8_t x838 = 1;
	uint8_t x839 = UINT8_MAX;
	volatile int64_t x840 = 178270LL;
	volatile int32_t t12 = 3;

    t12 = (((x837<<x838)|x839)<=x840);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x873 = UINT32_MAX;
	int8_t x874 = 0;
	volatile uint16_t x875 = 32U;
	volatile int64_t x876 = -1926LL;
	int32_t t13 = -13;

    t13 = (((x873<<x874)|x875)<=x876);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x917 = 5LLU;
	int16_t x918 = 26;
	int32_t x919 = INT32_MIN;
	static uint16_t x920 = UINT16_MAX;
	int32_t t14 = -304787020;

    t14 = (((x917<<x918)|x919)<=x920);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x1153 = 629U;
	int16_t x1154 = 5;
	int8_t x1156 = INT8_MAX;
	static volatile int32_t t15 = -192439;

    t15 = (((x1153<<x1154)|x1155)<=x1156);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x1341 = 94U;
	uint16_t x1342 = 0U;
	volatile int64_t x1343 = 0LL;
	int16_t x1344 = 3;
	volatile int32_t t16 = 81141370;

    t16 = (((x1341<<x1342)|x1343)<=x1344);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1373 = 745463723037279213LLU;
	uint8_t x1374 = 22U;
	volatile int32_t t17 = -4208;

    t17 = (((x1373<<x1374)|x1375)<=x1376);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1593 = 88;
	uint64_t x1594 = 0LLU;
	uint64_t x1595 = UINT64_MAX;
	int8_t x1596 = 21;
	static int32_t t18 = 3;

    t18 = (((x1593<<x1594)|x1595)<=x1596);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x1597 = 52397456255370LLU;
	static volatile int16_t x1600 = 2301;
	volatile int32_t t19 = 4830;

    t19 = (((x1597<<x1598)|x1599)<=x1600);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x1629 = INT8_MAX;
	uint32_t x1630 = 10U;
	uint64_t x1631 = 403703LLU;
	uint32_t x1632 = 489U;
	static volatile int32_t t20 = 4046989;

    t20 = (((x1629<<x1630)|x1631)<=x1632);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1658 = 2U;
	int16_t x1660 = -1;
	volatile int32_t t21 = -2904373;

    t21 = (((x1657<<x1658)|x1659)<=x1660);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1689 = 56382;
	int16_t x1692 = 8478;
	int32_t t22 = 617;

    t22 = (((x1689<<x1690)|x1691)<=x1692);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1693 = INT8_MAX;
	int32_t x1695 = INT32_MAX;
	static int32_t x1696 = INT32_MIN;
	int32_t t23 = 3441;

    t23 = (((x1693<<x1694)|x1695)<=x1696);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1849 = UINT8_MAX;
	int8_t x1851 = INT8_MIN;
	int32_t x1852 = INT32_MIN;

    t24 = (((x1849<<x1850)|x1851)<=x1852);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1877 = 34973392087051715LLU;
	static int8_t x1879 = -1;
	uint64_t x1880 = UINT64_MAX;

    t25 = (((x1877<<x1878)|x1879)<=x1880);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2057 = 23941018128243LL;
	int8_t x2058 = 0;
	volatile uint8_t x2059 = UINT8_MAX;
	int32_t x2060 = INT32_MIN;
	static volatile int32_t t26 = -147;

    t26 = (((x2057<<x2058)|x2059)<=x2060);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x2193 = 2U;
	uint16_t x2194 = 11U;
	int32_t x2196 = 14351432;
	int32_t t27 = -563;

    t27 = (((x2193<<x2194)|x2195)<=x2196);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2317 = UINT16_MAX;
	uint8_t x2318 = 1U;
	volatile int16_t x2319 = -1;
	int32_t x2320 = 291;
	volatile int32_t t28 = -633;

    t28 = (((x2317<<x2318)|x2319)<=x2320);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x2353 = 212936LLU;
	int64_t x2354 = 1LL;
	uint8_t x2355 = 6U;
	int32_t x2356 = -333637394;
	static volatile int32_t t29 = 4741;

    t29 = (((x2353<<x2354)|x2355)<=x2356);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x2389 = INT64_MAX;
	int16_t x2390 = 0;
	volatile int32_t t30 = 390176977;

    t30 = (((x2389<<x2390)|x2391)<=x2392);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x2465 = 19495U;
	int16_t x2466 = 1;
	int8_t x2467 = INT8_MIN;
	volatile int16_t x2468 = INT16_MIN;

    t31 = (((x2465<<x2466)|x2467)<=x2468);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x2509 = 7LL;
	uint8_t x2511 = 28U;
	uint64_t x2512 = UINT64_MAX;
	volatile int32_t t32 = 12521476;

    t32 = (((x2509<<x2510)|x2511)<=x2512);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x2570 = 12;
	int8_t x2571 = INT8_MIN;
	int16_t x2572 = INT16_MIN;
	volatile int32_t t33 = 1058;

    t33 = (((x2569<<x2570)|x2571)<=x2572);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x2617 = 157LL;
	static volatile int16_t x2618 = 33;
	static volatile int64_t x2620 = 2528723637008LL;

    t34 = (((x2617<<x2618)|x2619)<=x2620);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x2665 = UINT64_MAX;
	int32_t x2667 = -1;
	volatile uint16_t x2668 = UINT16_MAX;
	int32_t t35 = 57980;

    t35 = (((x2665<<x2666)|x2667)<=x2668);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x2762 = 3U;
	int16_t x2763 = INT16_MIN;
	volatile int32_t t36 = -28;

    t36 = (((x2761<<x2762)|x2763)<=x2764);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x2937 = UINT64_MAX;
	int16_t x2938 = 57;
	int64_t x2939 = -26073541LL;
	uint8_t x2940 = 27U;
	int32_t t37 = -2;

    t37 = (((x2937<<x2938)|x2939)<=x2940);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x2955 = INT32_MAX;
	uint32_t x2956 = 49557281U;
	int32_t t38 = -1;

    t38 = (((x2953<<x2954)|x2955)<=x2956);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x3037 = UINT64_MAX;
	static volatile uint64_t x3039 = 6894485624037LLU;
	static int8_t x3040 = INT8_MIN;
	int32_t t39 = -29066505;

    t39 = (((x3037<<x3038)|x3039)<=x3040);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x3057 = 1;
	volatile int8_t x3058 = 0;
	static uint8_t x3059 = 28U;
	int64_t x3060 = -1LL;
	volatile int32_t t40 = -9;

    t40 = (((x3057<<x3058)|x3059)<=x3060);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x3173 = INT16_MAX;
	int8_t x3174 = 0;
	static uint32_t x3175 = 2165398U;
	int16_t x3176 = -210;
	int32_t t41 = 398222;

    t41 = (((x3173<<x3174)|x3175)<=x3176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x3197 = UINT8_MAX;
	volatile uint16_t x3198 = 2U;
	uint16_t x3199 = 1U;
	uint64_t x3200 = UINT64_MAX;
	static volatile int32_t t42 = 1064120906;

    t42 = (((x3197<<x3198)|x3199)<=x3200);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x3241 = 49LLU;
	static int64_t x3242 = 4LL;
	volatile int32_t x3243 = -1;
	int16_t x3244 = INT16_MAX;

    t43 = (((x3241<<x3242)|x3243)<=x3244);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x3257 = 412;
	volatile int8_t x3258 = 0;
	volatile uint64_t x3260 = UINT64_MAX;
	static int32_t t44 = -19722034;

    t44 = (((x3257<<x3258)|x3259)<=x3260);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x3541 = 1;
	static int32_t x3542 = 3;
	uint8_t x3543 = 3U;
	volatile uint8_t x3544 = 7U;

    t45 = (((x3541<<x3542)|x3543)<=x3544);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x3565 = INT32_MAX;
	static volatile uint16_t x3566 = 0U;
	volatile uint32_t x3567 = 27635U;
	volatile int64_t x3568 = -477798712814068LL;
	volatile int32_t t46 = 1045795454;

    t46 = (((x3565<<x3566)|x3567)<=x3568);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x3617 = INT16_MAX;
	int32_t x3619 = INT32_MAX;
	uint32_t x3620 = UINT32_MAX;
	static int32_t t47 = 173;

    t47 = (((x3617<<x3618)|x3619)<=x3620);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x3630 = 0U;
	uint8_t x3632 = 98U;

    t48 = (((x3629<<x3630)|x3631)<=x3632);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x3665 = UINT32_MAX;
	int64_t x3666 = 3LL;
	static volatile int32_t x3667 = INT32_MIN;
	static int8_t x3668 = 10;
	static int32_t t49 = 1501096;

    t49 = (((x3665<<x3666)|x3667)<=x3668);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x3697 = 226U;
	static uint8_t x3698 = 3U;
	int8_t x3700 = 13;
	int32_t t50 = 107;

    t50 = (((x3697<<x3698)|x3699)<=x3700);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x3721 = 0;
	int8_t x3722 = 1;
	uint16_t x3723 = UINT16_MAX;
	volatile uint64_t x3724 = UINT64_MAX;
	int32_t t51 = -63;

    t51 = (((x3721<<x3722)|x3723)<=x3724);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x3797 = 15U;
	uint8_t x3798 = 1U;
	int8_t x3799 = INT8_MAX;
	int64_t x3800 = -42660245LL;
	volatile int32_t t52 = -7634732;

    t52 = (((x3797<<x3798)|x3799)<=x3800);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x3813 = 55;
	int16_t x3814 = 0;
	uint8_t x3815 = 1U;
	volatile int32_t t53 = -1988;

    t53 = (((x3813<<x3814)|x3815)<=x3816);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x3823 = INT64_MIN;
	int32_t x3824 = 32083;
	static int32_t t54 = -18007;

    t54 = (((x3821<<x3822)|x3823)<=x3824);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x3826 = 0;
	uint32_t x3827 = UINT32_MAX;
	int8_t x3828 = INT8_MIN;
	volatile int32_t t55 = 14513554;

    t55 = (((x3825<<x3826)|x3827)<=x3828);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x3857 = 1666676176976855335LLU;
	uint8_t x3858 = 7U;
	uint16_t x3859 = UINT16_MAX;
	int16_t x3860 = INT16_MAX;
	volatile int32_t t56 = 2;

    t56 = (((x3857<<x3858)|x3859)<=x3860);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x3913 = 6002036857602855LLU;
	uint16_t x3914 = 55U;
	static volatile uint32_t x3915 = 14618052U;
	volatile int32_t t57 = -3652;

    t57 = (((x3913<<x3914)|x3915)<=x3916);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x3985 = 190107U;
	uint16_t x3986 = 3U;
	volatile uint8_t x3987 = 70U;
	uint32_t x3988 = 7995U;
	int32_t t58 = -7730;

    t58 = (((x3985<<x3986)|x3987)<=x3988);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x4106 = 3LLU;
	static uint64_t x4107 = 94275215086398734LLU;
	int32_t t59 = 274560;

    t59 = (((x4105<<x4106)|x4107)<=x4108);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x4149 = UINT32_MAX;
	int32_t t60 = 56;

    t60 = (((x4149<<x4150)|x4151)<=x4152);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x4154 = 5U;
	uint32_t x4155 = 600322589U;
	int64_t x4156 = INT64_MIN;
	volatile int32_t t61 = -12680371;

    t61 = (((x4153<<x4154)|x4155)<=x4156);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x4169 = 14454525U;
	uint8_t x4170 = 3U;
	volatile int8_t x4171 = 2;
	static volatile int64_t x4172 = INT64_MAX;
	volatile int32_t t62 = 15;

    t62 = (((x4169<<x4170)|x4171)<=x4172);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x4198 = 3LLU;
	static volatile uint64_t x4199 = UINT64_MAX;
	volatile int32_t t63 = 216;

    t63 = (((x4197<<x4198)|x4199)<=x4200);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x4205 = 421685LL;
	uint16_t x4206 = 20U;
	uint8_t x4207 = UINT8_MAX;
	uint8_t x4208 = 0U;
	volatile int32_t t64 = 3;

    t64 = (((x4205<<x4206)|x4207)<=x4208);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x4441 = 125;
	static volatile uint16_t x4442 = 14U;
	int64_t x4443 = 5953776401859LL;
	int16_t x4444 = 125;
	int32_t t65 = -1531362;

    t65 = (((x4441<<x4442)|x4443)<=x4444);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x4549 = 0U;
	static uint8_t x4550 = 24U;
	static int32_t t66 = 6507;

    t66 = (((x4549<<x4550)|x4551)<=x4552);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x4797 = 9081882454025378344LLU;
	uint16_t x4799 = 14U;
	uint64_t x4800 = 32527214225313LLU;
	int32_t t67 = 98248315;

    t67 = (((x4797<<x4798)|x4799)<=x4800);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x4865 = 0U;
	static uint16_t x4866 = 1U;
	uint16_t x4867 = 100U;
	static int8_t x4868 = -11;
	volatile int32_t t68 = -225489;

    t68 = (((x4865<<x4866)|x4867)<=x4868);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x4873 = UINT8_MAX;
	volatile uint16_t x4874 = 17U;
	int32_t x4875 = 14374;

    t69 = (((x4873<<x4874)|x4875)<=x4876);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x4929 = INT16_MAX;
	uint32_t x4930 = 14U;
	volatile uint64_t x4931 = 189151428LLU;
	int64_t x4932 = INT64_MAX;
	volatile int32_t t70 = -310039;

    t70 = (((x4929<<x4930)|x4931)<=x4932);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x4981 = UINT64_MAX;
	uint8_t x4982 = 1U;
	int16_t x4983 = INT16_MIN;
	uint16_t x4984 = 3971U;
	int32_t t71 = 193759;

    t71 = (((x4981<<x4982)|x4983)<=x4984);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x4993 = 30059U;
	int16_t x4994 = 3;
	uint64_t x4995 = 42LLU;
	int64_t x4996 = 188373LL;
	static volatile int32_t t72 = -232354239;

    t72 = (((x4993<<x4994)|x4995)<=x4996);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x4997 = 210;
	int16_t x4998 = 1;
	uint64_t x4999 = 1942LLU;
	volatile int32_t t73 = 10755663;

    t73 = (((x4997<<x4998)|x4999)<=x5000);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x5018 = 2U;
	volatile int16_t x5019 = INT16_MIN;
	int32_t x5020 = 233;
	volatile int32_t t74 = -62770;

    t74 = (((x5017<<x5018)|x5019)<=x5020);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x5029 = UINT32_MAX;
	uint8_t x5030 = 0U;
	static uint8_t x5031 = 0U;
	int16_t x5032 = INT16_MIN;
	volatile int32_t t75 = -19;

    t75 = (((x5029<<x5030)|x5031)<=x5032);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x5133 = UINT64_MAX;
	int8_t x5136 = INT8_MIN;
	volatile int32_t t76 = -43;

    t76 = (((x5133<<x5134)|x5135)<=x5136);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x5146 = 0;
	int16_t x5147 = -121;
	int32_t x5148 = 12;
	volatile int32_t t77 = -64496;

    t77 = (((x5145<<x5146)|x5147)<=x5148);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x5165 = 0U;
	int8_t x5166 = 10;
	int16_t x5167 = INT16_MAX;
	static uint16_t x5168 = 94U;

    t78 = (((x5165<<x5166)|x5167)<=x5168);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x5217 = 110586U;
	uint8_t x5218 = 0U;
	int16_t x5219 = -39;
	int16_t x5220 = INT16_MIN;

    t79 = (((x5217<<x5218)|x5219)<=x5220);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x5369 = 20286U;
	int8_t x5370 = 1;
	int8_t x5371 = 0;
	int32_t x5372 = INT32_MAX;
	volatile int32_t t80 = 241;

    t80 = (((x5369<<x5370)|x5371)<=x5372);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x5613 = INT8_MAX;
	uint8_t x5614 = 4U;
	int16_t x5615 = 139;
	int16_t x5616 = INT16_MIN;
	int32_t t81 = -201;

    t81 = (((x5613<<x5614)|x5615)<=x5616);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x5657 = 8055660806LLU;
	uint16_t x5659 = 2U;
	volatile int32_t t82 = 731644;

    t82 = (((x5657<<x5658)|x5659)<=x5660);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x5761 = 2529719884918678952LLU;
	static uint32_t x5762 = 3U;
	volatile int16_t x5763 = INT16_MAX;
	static uint32_t x5764 = UINT32_MAX;

    t83 = (((x5761<<x5762)|x5763)<=x5764);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x5865 = INT16_MAX;
	uint64_t x5866 = 0LLU;

    t84 = (((x5865<<x5866)|x5867)<=x5868);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x5925 = 5LLU;
	int8_t x5926 = 2;
	int16_t x5927 = 1;
	uint8_t x5928 = UINT8_MAX;

    t85 = (((x5925<<x5926)|x5927)<=x5928);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x5933 = UINT64_MAX;
	uint16_t x5934 = 36U;

    t86 = (((x5933<<x5934)|x5935)<=x5936);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x6151 = 22;
	uint16_t x6152 = 489U;

    t87 = (((x6149<<x6150)|x6151)<=x6152);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x6170 = 3U;
	uint32_t x6171 = 101852071U;

    t88 = (((x6169<<x6170)|x6171)<=x6172);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x6250 = 1;
	uint16_t x6251 = UINT16_MAX;
	uint64_t x6252 = UINT64_MAX;
	int32_t t89 = 629;

    t89 = (((x6249<<x6250)|x6251)<=x6252);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x6277 = 27LLU;
	int8_t x6278 = 5;
	int16_t x6280 = -1;

    t90 = (((x6277<<x6278)|x6279)<=x6280);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x6285 = UINT64_MAX;
	int16_t x6286 = 45;

    t91 = (((x6285<<x6286)|x6287)<=x6288);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x6373 = 36032;
	volatile uint8_t x6374 = 7U;
	int64_t x6376 = INT64_MAX;
	volatile int32_t t92 = -3;

    t92 = (((x6373<<x6374)|x6375)<=x6376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x6385 = INT16_MAX;
	uint64_t x6386 = 0LLU;
	volatile int64_t x6387 = 6317566870510LL;
	int8_t x6388 = -1;

    t93 = (((x6385<<x6386)|x6387)<=x6388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x6415 = INT32_MAX;
	uint32_t x6416 = UINT32_MAX;
	int32_t t94 = 3;

    t94 = (((x6413<<x6414)|x6415)<=x6416);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x6473 = 0;
	volatile uint8_t x6474 = 1U;
	int8_t x6475 = INT8_MAX;
	int8_t x6476 = 1;
	int32_t t95 = 1177822;

    t95 = (((x6473<<x6474)|x6475)<=x6476);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x6477 = 204LLU;
	volatile int64_t x6479 = INT64_MAX;
	volatile uint8_t x6480 = 115U;
	static volatile int32_t t96 = 86011;

    t96 = (((x6477<<x6478)|x6479)<=x6480);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x6529 = 1U;
	uint16_t x6530 = 14U;
	int16_t x6532 = INT16_MAX;

    t97 = (((x6529<<x6530)|x6531)<=x6532);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x6610 = 40U;
	uint8_t x6612 = 5U;
	static volatile int32_t t98 = 3;

    t98 = (((x6609<<x6610)|x6611)<=x6612);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x6681 = 115U;
	int16_t x6683 = INT16_MIN;
	uint32_t x6684 = 1319U;
	volatile int32_t t99 = -228;

    t99 = (((x6681<<x6682)|x6683)<=x6684);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x6770 = 37U;
	int32_t x6771 = INT32_MIN;
	int16_t x6772 = INT16_MIN;

    t100 = (((x6769<<x6770)|x6771)<=x6772);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x6914 = 12;
	static int8_t x6916 = -1;
	static volatile int32_t t101 = 199636009;

    t101 = (((x6913<<x6914)|x6915)<=x6916);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x6926 = 6U;
	int64_t x6927 = -4692149LL;
	int32_t t102 = -1;

    t102 = (((x6925<<x6926)|x6927)<=x6928);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x7030 = 0;
	static int32_t x7031 = INT32_MIN;
	static volatile int64_t x7032 = INT64_MAX;
	static int32_t t103 = 122644419;

    t103 = (((x7029<<x7030)|x7031)<=x7032);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x7069 = 31697196685LLU;
	static uint8_t x7070 = 0U;
	int32_t x7071 = 1;
	uint32_t x7072 = UINT32_MAX;
	volatile int32_t t104 = -652403798;

    t104 = (((x7069<<x7070)|x7071)<=x7072);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x7085 = INT16_MAX;
	int8_t x7086 = 1;
	int16_t x7087 = -1;
	uint32_t x7088 = UINT32_MAX;

    t105 = (((x7085<<x7086)|x7087)<=x7088);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x7205 = 0;
	volatile int8_t x7206 = 0;
	int16_t x7207 = INT16_MIN;
	volatile uint64_t x7208 = 10828LLU;
	static int32_t t106 = -8515425;

    t106 = (((x7205<<x7206)|x7207)<=x7208);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x7378 = 1LL;
	uint8_t x7379 = 28U;
	int32_t t107 = 65252894;

    t107 = (((x7377<<x7378)|x7379)<=x7380);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x7429 = 79U;
	static volatile uint8_t x7430 = 0U;
	uint16_t x7432 = 1183U;

    t108 = (((x7429<<x7430)|x7431)<=x7432);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x7441 = 1896;
	static int16_t x7442 = 1;
	volatile uint8_t x7443 = 0U;
	uint32_t x7444 = 64243218U;
	static int32_t t109 = -745712499;

    t109 = (((x7441<<x7442)|x7443)<=x7444);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x7449 = 434125U;
	int8_t x7450 = 6;
	uint8_t x7451 = UINT8_MAX;
	volatile int32_t t110 = 411666;

    t110 = (((x7449<<x7450)|x7451)<=x7452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x7457 = 4247575350015LLU;
	uint8_t x7458 = 4U;
	uint16_t x7460 = 912U;

    t111 = (((x7457<<x7458)|x7459)<=x7460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x7473 = INT8_MAX;
	int16_t x7476 = -1;
	volatile int32_t t112 = -185;

    t112 = (((x7473<<x7474)|x7475)<=x7476);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x7541 = 61224458921LLU;
	uint32_t x7542 = 20U;
	int16_t x7543 = INT16_MIN;
	static volatile int64_t x7544 = -1LL;
	volatile int32_t t113 = 47390;

    t113 = (((x7541<<x7542)|x7543)<=x7544);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x7549 = 0U;
	uint32_t x7550 = 21U;
	uint16_t x7551 = 38U;
	int8_t x7552 = INT8_MAX;
	int32_t t114 = -56;

    t114 = (((x7549<<x7550)|x7551)<=x7552);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x7715 = INT16_MAX;
	int8_t x7716 = INT8_MIN;
	volatile int32_t t115 = -6;

    t115 = (((x7713<<x7714)|x7715)<=x7716);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x7785 = 40;
	uint8_t x7786 = 0U;
	uint16_t x7787 = 1302U;
	int32_t x7788 = 0;
	int32_t t116 = -489078;

    t116 = (((x7785<<x7786)|x7787)<=x7788);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x7871 = INT8_MAX;
	static int8_t x7872 = INT8_MIN;

    t117 = (((x7869<<x7870)|x7871)<=x7872);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x7977 = 69U;
	static uint8_t x7978 = 1U;
	uint64_t x7980 = UINT64_MAX;
	int32_t t118 = -3755880;

    t118 = (((x7977<<x7978)|x7979)<=x7980);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x8061 = 434445296LLU;
	uint16_t x8062 = 27U;
	volatile int16_t x8064 = -1;
	volatile int32_t t119 = 10264;

    t119 = (((x8061<<x8062)|x8063)<=x8064);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x8117 = 13693588227438850LLU;
	int8_t x8118 = 27;
	int16_t x8119 = 1;
	uint32_t x8120 = 75033U;

    t120 = (((x8117<<x8118)|x8119)<=x8120);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x8190 = 3;
	volatile uint8_t x8191 = 18U;
	volatile int8_t x8192 = INT8_MIN;
	static volatile int32_t t121 = 29;

    t121 = (((x8189<<x8190)|x8191)<=x8192);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x8453 = 18U;
	volatile int64_t x8454 = 13LL;
	volatile uint8_t x8455 = UINT8_MAX;
	volatile int32_t t122 = -481;

    t122 = (((x8453<<x8454)|x8455)<=x8456);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint64_t x8597 = 4537241LLU;
	int16_t x8599 = -1;
	int32_t x8600 = INT32_MAX;
	int32_t t123 = -863658124;

    t123 = (((x8597<<x8598)|x8599)<=x8600);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x8657 = 54980866;
	volatile uint8_t x8658 = 1U;
	static int8_t x8660 = INT8_MAX;
	volatile int32_t t124 = -1;

    t124 = (((x8657<<x8658)|x8659)<=x8660);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x8662 = 1;
	int16_t x8663 = INT16_MIN;
	static int8_t x8664 = INT8_MIN;

    t125 = (((x8661<<x8662)|x8663)<=x8664);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x8721 = 1049;
	static int8_t x8722 = 4;
	static int64_t x8723 = 1LL;
	int32_t x8724 = 91;

    t126 = (((x8721<<x8722)|x8723)<=x8724);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x8777 = 5;
	static uint16_t x8778 = 1U;
	int64_t x8780 = INT64_MIN;
	static volatile int32_t t127 = -10;

    t127 = (((x8777<<x8778)|x8779)<=x8780);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x8845 = 11U;
	volatile uint8_t x8846 = 27U;
	volatile int32_t x8847 = -9942626;
	volatile int64_t x8848 = INT64_MIN;
	volatile int32_t t128 = 1;

    t128 = (((x8845<<x8846)|x8847)<=x8848);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x8921 = 1879U;
	int32_t x8924 = INT32_MAX;
	volatile int32_t t129 = 22643;

    t129 = (((x8921<<x8922)|x8923)<=x8924);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x8982 = 3U;

    t130 = (((x8981<<x8982)|x8983)<=x8984);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x9038 = 2;
	uint32_t x9039 = 57U;
	volatile int32_t t131 = -20;

    t131 = (((x9037<<x9038)|x9039)<=x9040);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x9105 = 7U;
	uint8_t x9106 = 2U;
	static volatile uint16_t x9108 = UINT16_MAX;
	int32_t t132 = -31637;

    t132 = (((x9105<<x9106)|x9107)<=x9108);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x9169 = 1U;
	uint8_t x9171 = 0U;
	uint64_t x9172 = 131112438046279LLU;
	int32_t t133 = 117;

    t133 = (((x9169<<x9170)|x9171)<=x9172);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x9230 = 0;
	int32_t t134 = -924;

    t134 = (((x9229<<x9230)|x9231)<=x9232);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x9265 = 93317;
	int32_t x9266 = 13;
	int16_t x9267 = 0;
	int32_t x9268 = INT32_MIN;
	volatile int32_t t135 = -4766;

    t135 = (((x9265<<x9266)|x9267)<=x9268);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x9281 = UINT64_MAX;
	int32_t x9282 = 7;
	uint32_t x9284 = UINT32_MAX;
	static volatile int32_t t136 = -488;

    t136 = (((x9281<<x9282)|x9283)<=x9284);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x9329 = 16328U;
	uint8_t x9330 = 1U;
	uint8_t x9331 = 16U;
	static volatile int16_t x9332 = -2037;
	volatile int32_t t137 = -5369996;

    t137 = (((x9329<<x9330)|x9331)<=x9332);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x9354 = 0;
	int8_t x9355 = -1;
	uint8_t x9356 = 91U;

    t138 = (((x9353<<x9354)|x9355)<=x9356);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x9513 = 64422414418655LL;
	uint32_t x9515 = 531827U;
	int32_t t139 = -12;

    t139 = (((x9513<<x9514)|x9515)<=x9516);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x9569 = 1575U;
	int8_t x9570 = 3;
	static uint32_t x9571 = 73661237U;
	int8_t x9572 = -1;
	volatile int32_t t140 = -2;

    t140 = (((x9569<<x9570)|x9571)<=x9572);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x9593 = UINT32_MAX;
	static uint16_t x9594 = 18U;
	volatile int16_t x9595 = -1;
	int32_t x9596 = INT32_MIN;

    t141 = (((x9593<<x9594)|x9595)<=x9596);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x9697 = 8;
	volatile uint8_t x9698 = 7U;
	static uint16_t x9699 = UINT16_MAX;
	int64_t x9700 = INT64_MIN;
	volatile int32_t t142 = -2949;

    t142 = (((x9697<<x9698)|x9699)<=x9700);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x9709 = 2601LLU;
	int8_t x9710 = 25;
	uint8_t x9711 = UINT8_MAX;
	volatile int64_t x9712 = -1LL;

    t143 = (((x9709<<x9710)|x9711)<=x9712);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x9777 = 1918992LL;
	uint8_t x9779 = 120U;
	volatile int32_t t144 = 12545815;

    t144 = (((x9777<<x9778)|x9779)<=x9780);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x9833 = UINT32_MAX;
	uint8_t x9834 = 1U;
	volatile int32_t x9836 = -1;

    t145 = (((x9833<<x9834)|x9835)<=x9836);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x9917 = INT8_MAX;
	volatile uint32_t x9919 = UINT32_MAX;
	int8_t x9920 = -7;
	int32_t t146 = -1;

    t146 = (((x9917<<x9918)|x9919)<=x9920);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x10005 = 11224;
	volatile int8_t x10007 = 7;
	int8_t x10008 = -1;
	static int32_t t147 = 57608902;

    t147 = (((x10005<<x10006)|x10007)<=x10008);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x10066 = 10U;
	int64_t x10067 = INT64_MIN;
	int8_t x10068 = -50;

    t148 = (((x10065<<x10066)|x10067)<=x10068);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x10093 = 1;
	static volatile int32_t x10095 = -1;

    t149 = (((x10093<<x10094)|x10095)<=x10096);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x10101 = 10356005U;
	int8_t x10102 = 0;
	static int16_t x10103 = INT16_MIN;
	int8_t x10104 = -1;
	int32_t t150 = 1;

    t150 = (((x10101<<x10102)|x10103)<=x10104);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x10133 = 38171241LLU;
	volatile int8_t x10134 = 0;
	volatile int32_t x10135 = INT32_MAX;
	uint16_t x10136 = 2590U;

    t151 = (((x10133<<x10134)|x10135)<=x10136);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x10253 = INT16_MAX;
	int16_t x10254 = 0;
	volatile uint16_t x10255 = 3U;
	uint8_t x10256 = 48U;
	int32_t t152 = 116173802;

    t152 = (((x10253<<x10254)|x10255)<=x10256);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x10325 = 236693U;
	int16_t x10326 = 3;
	uint16_t x10327 = 15U;
	int16_t x10328 = 8;
	volatile int32_t t153 = 1929524;

    t153 = (((x10325<<x10326)|x10327)<=x10328);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x10377 = 56522707875471415LLU;
	volatile uint16_t x10378 = 1U;
	uint64_t x10380 = 19337LLU;

    t154 = (((x10377<<x10378)|x10379)<=x10380);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x10425 = 2028647700U;
	static int64_t x10426 = 1LL;
	uint16_t x10427 = UINT16_MAX;
	static int32_t t155 = 29188;

    t155 = (((x10425<<x10426)|x10427)<=x10428);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x10473 = 3U;
	volatile uint8_t x10474 = 1U;
	int16_t x10475 = 1;
	int16_t x10476 = INT16_MIN;
	volatile int32_t t156 = 1;

    t156 = (((x10473<<x10474)|x10475)<=x10476);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x10481 = UINT64_MAX;
	static uint8_t x10482 = 1U;
	int64_t x10484 = 700701229883LL;
	volatile int32_t t157 = 1042;

    t157 = (((x10481<<x10482)|x10483)<=x10484);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x10497 = 9;
	static int8_t x10498 = 7;
	static int16_t x10499 = 2959;
	uint8_t x10500 = 27U;
	int32_t t158 = 13413;

    t158 = (((x10497<<x10498)|x10499)<=x10500);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x10525 = UINT16_MAX;
	static uint16_t x10526 = 0U;
	int16_t x10527 = 385;

    t159 = (((x10525<<x10526)|x10527)<=x10528);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x10665 = 1U;
	uint8_t x10666 = 11U;
	volatile int32_t x10667 = INT32_MAX;

    t160 = (((x10665<<x10666)|x10667)<=x10668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x10957 = INT16_MAX;
	uint64_t x10959 = UINT64_MAX;
	int8_t x10960 = INT8_MIN;
	volatile int32_t t161 = 244234;

    t161 = (((x10957<<x10958)|x10959)<=x10960);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x10985 = UINT64_MAX;
	static uint8_t x10986 = 1U;
	uint64_t x10987 = 263857013LLU;
	uint32_t x10988 = UINT32_MAX;
	volatile int32_t t162 = -1531784;

    t162 = (((x10985<<x10986)|x10987)<=x10988);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x10997 = 26LL;
	static int32_t x11000 = INT32_MIN;
	static volatile int32_t t163 = 1;

    t163 = (((x10997<<x10998)|x10999)<=x11000);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x11037 = 1552143149445404LL;
	uint8_t x11038 = 4U;
	static volatile uint8_t x11039 = UINT8_MAX;
	static volatile int32_t t164 = -97784959;

    t164 = (((x11037<<x11038)|x11039)<=x11040);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x11046 = 0U;
	static int32_t x11047 = 924175;
	int32_t x11048 = INT32_MIN;
	volatile int32_t t165 = 2373;

    t165 = (((x11045<<x11046)|x11047)<=x11048);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x11061 = 0;
	static uint64_t x11062 = 7LLU;
	static int8_t x11063 = 6;
	static int8_t x11064 = -18;
	static volatile int32_t t166 = -6028;

    t166 = (((x11061<<x11062)|x11063)<=x11064);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x11397 = 454;
	volatile int8_t x11398 = 3;
	static volatile int32_t x11399 = INT32_MIN;
	int32_t t167 = 2324146;

    t167 = (((x11397<<x11398)|x11399)<=x11400);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x11413 = 486664U;
	int64_t x11415 = 127644818370460210LL;
	static volatile int64_t x11416 = INT64_MIN;
	volatile int32_t t168 = 98;

    t168 = (((x11413<<x11414)|x11415)<=x11416);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x11489 = 1;
	int16_t x11490 = 1;
	static int32_t t169 = 126;

    t169 = (((x11489<<x11490)|x11491)<=x11492);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x11494 = 0;
	int32_t t170 = 371593918;

    t170 = (((x11493<<x11494)|x11495)<=x11496);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x11545 = 627538777LLU;
	int8_t x11546 = 0;
	int64_t x11547 = -1LL;

    t171 = (((x11545<<x11546)|x11547)<=x11548);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x11573 = 39U;
	int8_t x11574 = 2;
	static uint64_t x11575 = 459421767545992433LLU;
	volatile uint64_t x11576 = UINT64_MAX;
	int32_t t172 = -142661211;

    t172 = (((x11573<<x11574)|x11575)<=x11576);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x11637 = 65922058764488LL;
	int32_t x11638 = 13;
	uint32_t x11639 = 3681236U;
	volatile int32_t x11640 = INT32_MAX;
	int32_t t173 = -107018;

    t173 = (((x11637<<x11638)|x11639)<=x11640);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x11681 = INT8_MAX;
	static int64_t x11682 = 6LL;
	int32_t x11683 = -70650316;

    t174 = (((x11681<<x11682)|x11683)<=x11684);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x11697 = 2324LL;
	static uint32_t x11698 = 1U;
	int16_t x11699 = -1;
	int32_t x11700 = -137945519;

    t175 = (((x11697<<x11698)|x11699)<=x11700);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x11717 = 773LLU;
	int16_t x11718 = 27;
	int8_t x11719 = 1;
	uint32_t x11720 = 3U;
	volatile int32_t t176 = -21324;

    t176 = (((x11717<<x11718)|x11719)<=x11720);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x11765 = INT8_MAX;
	int32_t x11766 = 5;
	int16_t x11767 = -1;
	int8_t x11768 = INT8_MIN;
	volatile int32_t t177 = 1;

    t177 = (((x11765<<x11766)|x11767)<=x11768);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x11985 = UINT8_MAX;
	int8_t x11986 = 1;
	uint32_t x11988 = UINT32_MAX;
	int32_t t178 = 476360;

    t178 = (((x11985<<x11986)|x11987)<=x11988);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x11991 = -5146088;
	static int32_t x11992 = INT32_MIN;
	static volatile int32_t t179 = -3;

    t179 = (((x11989<<x11990)|x11991)<=x11992);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x12043 = INT16_MIN;
	int16_t x12044 = INT16_MIN;
	volatile int32_t t180 = 362;

    t180 = (((x12041<<x12042)|x12043)<=x12044);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x12094 = 3U;
	int16_t x12095 = INT16_MIN;
	int32_t x12096 = INT32_MAX;
	volatile int32_t t181 = 899333;

    t181 = (((x12093<<x12094)|x12095)<=x12096);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x12207 = UINT16_MAX;
	int32_t t182 = -242548189;

    t182 = (((x12205<<x12206)|x12207)<=x12208);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x12387 = 14576190LL;
	volatile int32_t t183 = 261081;

    t183 = (((x12385<<x12386)|x12387)<=x12388);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x12429 = UINT64_MAX;
	int32_t x12430 = 1;
	static int16_t x12431 = -3;
	int16_t x12432 = INT16_MIN;
	static int32_t t184 = 0;

    t184 = (((x12429<<x12430)|x12431)<=x12432);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint64_t x12445 = UINT64_MAX;
	uint8_t x12446 = 3U;
	uint16_t x12447 = 29106U;
	uint64_t x12448 = 135281197129LLU;
	static volatile int32_t t185 = -4413043;

    t185 = (((x12445<<x12446)|x12447)<=x12448);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x12469 = 51;
	int8_t x12470 = 22;
	int8_t x12471 = INT8_MIN;
	volatile int64_t x12472 = 201877296172LL;
	static volatile int32_t t186 = 387539945;

    t186 = (((x12469<<x12470)|x12471)<=x12472);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x12721 = 448LLU;
	uint8_t x12722 = 13U;
	uint16_t x12723 = 13635U;
	int64_t x12724 = INT64_MIN;
	static int32_t t187 = -45859242;

    t187 = (((x12721<<x12722)|x12723)<=x12724);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x12857 = 5;
	int16_t x12858 = 0;
	int32_t t188 = 59;

    t188 = (((x12857<<x12858)|x12859)<=x12860);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x12869 = 255117U;
	int64_t x12870 = 3LL;
	int32_t x12871 = 26425921;
	int8_t x12872 = -62;
	volatile int32_t t189 = -25;

    t189 = (((x12869<<x12870)|x12871)<=x12872);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x13037 = 0;
	uint16_t x13038 = 0U;
	int8_t x13039 = -1;
	static int32_t t190 = 455991321;

    t190 = (((x13037<<x13038)|x13039)<=x13040);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x13073 = 3U;
	static uint8_t x13074 = 2U;
	int8_t x13075 = 6;
	int8_t x13076 = 57;

    t191 = (((x13073<<x13074)|x13075)<=x13076);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x13105 = 1U;
	int8_t x13106 = 1;
	int8_t x13107 = -1;
	volatile int64_t x13108 = -1LL;
	int32_t t192 = 254;

    t192 = (((x13105<<x13106)|x13107)<=x13108);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x13122 = 7;
	int32_t x13123 = INT32_MAX;
	int32_t x13124 = INT32_MAX;
	int32_t t193 = 12;

    t193 = (((x13121<<x13122)|x13123)<=x13124);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x13157 = INT16_MAX;
	static int32_t x13160 = 101;
	static int32_t t194 = 117343;

    t194 = (((x13157<<x13158)|x13159)<=x13160);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x13321 = 8957U;
	int8_t x13322 = 0;
	volatile int16_t x13323 = INT16_MIN;
	int32_t x13324 = -15382;

    t195 = (((x13321<<x13322)|x13323)<=x13324);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x13370 = 2U;
	volatile int16_t x13372 = INT16_MAX;
	volatile int32_t t196 = 378804;

    t196 = (((x13369<<x13370)|x13371)<=x13372);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x13541 = INT16_MAX;
	volatile uint8_t x13542 = 3U;
	static int32_t x13543 = -65;
	uint16_t x13544 = UINT16_MAX;

    t197 = (((x13541<<x13542)|x13543)<=x13544);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x13565 = INT8_MAX;
	uint16_t x13566 = 5U;
	uint32_t x13567 = 5U;
	uint8_t x13568 = 23U;
	volatile int32_t t198 = 5;

    t198 = (((x13565<<x13566)|x13567)<=x13568);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint16_t x13574 = 1U;
	uint32_t x13575 = 773875041U;
	uint8_t x13576 = UINT8_MAX;
	volatile int32_t t199 = -15640685;

    t199 = (((x13573<<x13574)|x13575)<=x13576);

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

