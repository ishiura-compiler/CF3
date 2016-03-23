
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

int32_t x3 = INT32_MIN;
uint8_t x53 = 8U;
volatile int64_t x54 = -1LL;
int32_t t1 = -1256363;
uint16_t x161 = 2U;
int8_t x196 = INT8_MAX;
int32_t t3 = -52813874;
int32_t x270 = INT32_MAX;
volatile int32_t x271 = INT32_MAX;
int64_t x319 = INT64_MAX;
static volatile int32_t t5 = -12789;
int8_t x588 = INT8_MIN;
static volatile int8_t x589 = -1;
int64_t x613 = INT64_MIN;
uint32_t x680 = 17054U;
volatile int32_t t9 = -11;
volatile int16_t x777 = INT16_MIN;
uint64_t x780 = 7781729LLU;
int32_t t10 = -892186041;
uint16_t x968 = 3U;
int64_t x1179 = -1LL;
static volatile uint32_t x1389 = 301558U;
int32_t x1391 = -1;
volatile int8_t x1392 = -1;
volatile int32_t t20 = -16274;
volatile int32_t t21 = -2026020;
int64_t x2009 = 28011LL;
int8_t x2011 = -1;
volatile int32_t t23 = -972540;
static int64_t x2152 = INT64_MIN;
int16_t x2171 = INT16_MIN;
int16_t x2173 = -908;
int32_t x2280 = INT32_MAX;
int32_t x2288 = INT32_MIN;
int32_t t29 = 17942;
int32_t x2329 = INT32_MIN;
int64_t x2330 = -1LL;
int16_t x2508 = -6;
int32_t x2555 = INT32_MIN;
int64_t x2556 = 4022677976LL;
volatile int64_t x2578 = INT64_MIN;
static int64_t x2579 = INT64_MIN;
int32_t x2693 = INT32_MIN;
static int64_t x2695 = -1LL;
volatile int32_t t36 = 4164;
int32_t t37 = 311678;
volatile int64_t x2861 = INT64_MIN;
static int32_t x2864 = -1;
static int32_t t40 = 2418127;
uint8_t x3114 = 0U;
int8_t x3116 = -9;
volatile int32_t t41 = 2;
int16_t x3137 = INT16_MIN;
int32_t t42 = 27;
int64_t x3532 = -822736926809491944LL;
volatile int32_t x3653 = INT32_MIN;
int8_t x3654 = INT8_MIN;
int32_t t46 = -4180;
static volatile int16_t x4018 = INT16_MIN;
int64_t x4020 = INT64_MIN;
static volatile int32_t x4221 = INT32_MIN;
int8_t x4317 = INT8_MIN;
int8_t x4440 = INT8_MIN;
int32_t t55 = -563481432;
static int32_t x4669 = -1;
int64_t x4745 = INT64_MIN;
volatile int32_t t62 = -11128257;
int8_t x5470 = -1;
uint8_t x5629 = 2U;
static int16_t x5632 = -1;
int16_t x6101 = -1;
volatile int32_t x6103 = -1;
int16_t x6108 = -1;
volatile int32_t t71 = 44888;
int64_t x6582 = -1LL;
int16_t x6583 = -1;
uint64_t x6669 = 9LLU;
volatile int32_t t74 = -28;
int8_t x6686 = INT8_MIN;
int8_t x6687 = INT8_MIN;
volatile int32_t t76 = -43078;
int8_t x6843 = INT8_MIN;
static volatile int32_t x6862 = -1;
int8_t x6986 = -1;
volatile int8_t x7076 = INT8_MIN;
int32_t t83 = 201110;
int64_t x7285 = INT64_MIN;
uint32_t x7288 = 642U;
int8_t x7521 = INT8_MIN;
uint64_t x7523 = UINT64_MAX;
int8_t x7524 = INT8_MIN;
volatile int32_t t87 = -7864;
volatile int8_t x7528 = -7;
int8_t x7642 = -1;
uint16_t x7869 = 657U;
static uint16_t x7901 = 3602U;
static volatile int32_t t95 = -63560918;
volatile int32_t x8067 = INT32_MIN;
uint32_t x8107 = UINT32_MAX;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	static int32_t x2 = INT32_MIN;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -39;

    t0 = ((x1%(x2==x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x55 = -1;
	int8_t x56 = INT8_MAX;

    t1 = ((x53%(x54==x55))==x56);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x162 = UINT16_MAX;
	static uint16_t x163 = UINT16_MAX;
	uint16_t x164 = 6932U;
	volatile int32_t t2 = 0;

    t2 = ((x161%(x162==x163))==x164);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x193 = INT8_MIN;
	int16_t x194 = -1;
	uint32_t x195 = UINT32_MAX;

    t3 = ((x193%(x194==x195))==x196);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x269 = 459568180LLU;
	static uint8_t x272 = 57U;
	volatile int32_t t4 = -3293996;

    t4 = ((x269%(x270==x271))==x272);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x317 = INT64_MIN;
	static int64_t x318 = INT64_MAX;
	int16_t x320 = INT16_MIN;

    t5 = ((x317%(x318==x319))==x320);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x585 = 10;
	volatile uint32_t x586 = UINT32_MAX;
	static int16_t x587 = -1;
	static volatile int32_t t6 = -1;

    t6 = ((x585%(x586==x587))==x588);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x590 = -1;
	static int32_t x591 = -1;
	int16_t x592 = INT16_MAX;
	volatile int32_t t7 = -1;

    t7 = ((x589%(x590==x591))==x592);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x614 = -1;
	volatile int16_t x615 = -1;
	int16_t x616 = -2;
	int32_t t8 = 371;

    t8 = ((x613%(x614==x615))==x616);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x677 = 13;
	int8_t x678 = 0;
	uint32_t x679 = 0U;

    t9 = ((x677%(x678==x679))==x680);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x778 = -1;
	volatile uint64_t x779 = UINT64_MAX;

    t10 = ((x777%(x778==x779))==x780);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x789 = 3U;
	volatile int8_t x790 = -1;
	uint64_t x791 = UINT64_MAX;
	int64_t x792 = -1LL;
	int32_t t11 = 3256;

    t11 = ((x789%(x790==x791))==x792);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x797 = INT16_MIN;
	int8_t x798 = -1;
	static int8_t x799 = -1;
	int16_t x800 = -1;
	volatile int32_t t12 = 10071844;

    t12 = ((x797%(x798==x799))==x800);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x965 = UINT32_MAX;
	int32_t x966 = -1;
	int64_t x967 = -1LL;
	int32_t t13 = 134048;

    t13 = ((x965%(x966==x967))==x968);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x1177 = INT32_MAX;
	static int32_t x1178 = -1;
	int32_t x1180 = -1;
	int32_t t14 = -170416061;

    t14 = ((x1177%(x1178==x1179))==x1180);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1197 = -62;
	static int16_t x1198 = -1;
	volatile uint64_t x1199 = UINT64_MAX;
	int8_t x1200 = INT8_MAX;
	int32_t t15 = -55413;

    t15 = ((x1197%(x1198==x1199))==x1200);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1225 = 8810U;
	volatile int32_t x1226 = -1;
	int8_t x1227 = -1;
	uint32_t x1228 = 40025519U;
	int32_t t16 = 0;

    t16 = ((x1225%(x1226==x1227))==x1228);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x1297 = 3U;
	static volatile int16_t x1298 = -1;
	int8_t x1299 = -1;
	volatile uint64_t x1300 = UINT64_MAX;
	int32_t t17 = -3934694;

    t17 = ((x1297%(x1298==x1299))==x1300);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x1390 = UINT32_MAX;
	volatile int32_t t18 = -7628946;

    t18 = ((x1389%(x1390==x1391))==x1392);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1633 = -1;
	int32_t x1634 = -1;
	uint64_t x1635 = UINT64_MAX;
	static int8_t x1636 = -1;
	volatile int32_t t19 = -65;

    t19 = ((x1633%(x1634==x1635))==x1636);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x1745 = 0;
	uint32_t x1746 = UINT32_MAX;
	volatile int16_t x1747 = -1;
	static volatile uint16_t x1748 = UINT16_MAX;

    t20 = ((x1745%(x1746==x1747))==x1748);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1829 = 2U;
	volatile int64_t x1830 = -1LL;
	int64_t x1831 = -1LL;
	int64_t x1832 = INT64_MIN;

    t21 = ((x1829%(x1830==x1831))==x1832);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x1981 = -15LL;
	int64_t x1982 = -1LL;
	static int64_t x1983 = -1LL;
	static int8_t x1984 = 31;
	static volatile int32_t t22 = -18541;

    t22 = ((x1981%(x1982==x1983))==x1984);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x2010 = -1;
	static volatile int8_t x2012 = INT8_MAX;

    t23 = ((x2009%(x2010==x2011))==x2012);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x2129 = 245262;
	int64_t x2130 = INT64_MAX;
	int64_t x2131 = INT64_MAX;
	uint64_t x2132 = 7325936LLU;
	volatile int32_t t24 = -15;

    t24 = ((x2129%(x2130==x2131))==x2132);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x2149 = INT16_MIN;
	int32_t x2150 = INT32_MIN;
	static int32_t x2151 = INT32_MIN;
	volatile int32_t t25 = -7337;

    t25 = ((x2149%(x2150==x2151))==x2152);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2169 = INT64_MAX;
	volatile int16_t x2170 = INT16_MIN;
	uint16_t x2172 = 71U;
	volatile int32_t t26 = -5040524;

    t26 = ((x2169%(x2170==x2171))==x2172);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x2174 = -1LL;
	int64_t x2175 = -1LL;
	volatile int32_t x2176 = 169757227;
	static int32_t t27 = 1090972;

    t27 = ((x2173%(x2174==x2175))==x2176);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x2277 = INT32_MIN;
	int32_t x2278 = -1;
	int32_t x2279 = -1;
	int32_t t28 = -1555710;

    t28 = ((x2277%(x2278==x2279))==x2280);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x2285 = UINT8_MAX;
	int8_t x2286 = INT8_MIN;
	int8_t x2287 = INT8_MIN;

    t29 = ((x2285%(x2286==x2287))==x2288);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x2331 = -1;
	static int64_t x2332 = 1941636LL;
	volatile int32_t t30 = -22548;

    t30 = ((x2329%(x2330==x2331))==x2332);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x2505 = -1051;
	int8_t x2506 = INT8_MAX;
	int8_t x2507 = INT8_MAX;
	int32_t t31 = -92060305;

    t31 = ((x2505%(x2506==x2507))==x2508);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x2553 = INT64_MIN;
	int32_t x2554 = INT32_MIN;
	volatile int32_t t32 = -828;

    t32 = ((x2553%(x2554==x2555))==x2556);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x2577 = -1;
	int16_t x2580 = -1;
	int32_t t33 = 1830;

    t33 = ((x2577%(x2578==x2579))==x2580);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2694 = -1;
	static uint32_t x2696 = 121858738U;
	volatile int32_t t34 = -166;

    t34 = ((x2693%(x2694==x2695))==x2696);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x2717 = -15LL;
	volatile uint64_t x2718 = UINT64_MAX;
	uint64_t x2719 = UINT64_MAX;
	uint16_t x2720 = 4112U;
	int32_t t35 = -81386;

    t35 = ((x2717%(x2718==x2719))==x2720);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x2785 = 26U;
	int16_t x2786 = -1;
	volatile int32_t x2787 = -1;
	static int8_t x2788 = -52;

    t36 = ((x2785%(x2786==x2787))==x2788);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x2809 = 0U;
	uint32_t x2810 = UINT32_MAX;
	static int32_t x2811 = -1;
	volatile int32_t x2812 = -1;

    t37 = ((x2809%(x2810==x2811))==x2812);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2845 = -1;
	volatile uint64_t x2846 = UINT64_MAX;
	int16_t x2847 = -1;
	int32_t x2848 = INT32_MAX;
	int32_t t38 = -6;

    t38 = ((x2845%(x2846==x2847))==x2848);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2862 = INT32_MIN;
	int32_t x2863 = INT32_MIN;
	volatile int32_t t39 = -70141;

    t39 = ((x2861%(x2862==x2863))==x2864);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x3081 = 29082391U;
	int8_t x3082 = -1;
	uint32_t x3083 = UINT32_MAX;
	int16_t x3084 = INT16_MIN;

    t40 = ((x3081%(x3082==x3083))==x3084);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x3113 = -1LL;
	static volatile int16_t x3115 = 0;

    t41 = ((x3113%(x3114==x3115))==x3116);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int8_t x3138 = INT8_MAX;
	int8_t x3139 = INT8_MAX;
	uint16_t x3140 = UINT16_MAX;

    t42 = ((x3137%(x3138==x3139))==x3140);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x3209 = 2500161;
	volatile uint64_t x3210 = UINT64_MAX;
	int32_t x3211 = -1;
	static int64_t x3212 = INT64_MIN;
	int32_t t43 = 14;

    t43 = ((x3209%(x3210==x3211))==x3212);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x3473 = INT64_MIN;
	int16_t x3474 = -1;
	uint32_t x3475 = UINT32_MAX;
	static uint16_t x3476 = 435U;
	volatile int32_t t44 = -2003779;

    t44 = ((x3473%(x3474==x3475))==x3476);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x3529 = 8589LLU;
	int64_t x3530 = INT64_MIN;
	static int64_t x3531 = INT64_MIN;
	volatile int32_t t45 = 832601;

    t45 = ((x3529%(x3530==x3531))==x3532);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x3655 = INT8_MIN;
	int16_t x3656 = -11719;

    t46 = ((x3653%(x3654==x3655))==x3656);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x4017 = UINT32_MAX;
	volatile int16_t x4019 = INT16_MIN;
	volatile int32_t t47 = -15;

    t47 = ((x4017%(x4018==x4019))==x4020);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x4222 = -1;
	int8_t x4223 = -1;
	int64_t x4224 = 1056216788311965LL;
	volatile int32_t t48 = 162878514;

    t48 = ((x4221%(x4222==x4223))==x4224);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x4265 = -385666321LL;
	static int8_t x4266 = INT8_MAX;
	int8_t x4267 = INT8_MAX;
	volatile int32_t x4268 = -32;
	int32_t t49 = 81193;

    t49 = ((x4265%(x4266==x4267))==x4268);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x4318 = -1LL;
	int32_t x4319 = -1;
	int32_t x4320 = INT32_MIN;
	volatile int32_t t50 = -10584;

    t50 = ((x4317%(x4318==x4319))==x4320);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x4321 = INT32_MAX;
	uint32_t x4322 = UINT32_MAX;
	int16_t x4323 = -1;
	uint8_t x4324 = UINT8_MAX;
	static int32_t t51 = 0;

    t51 = ((x4321%(x4322==x4323))==x4324);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x4341 = INT16_MAX;
	int8_t x4342 = INT8_MIN;
	static int8_t x4343 = INT8_MIN;
	static uint64_t x4344 = UINT64_MAX;
	int32_t t52 = -15453702;

    t52 = ((x4341%(x4342==x4343))==x4344);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x4349 = UINT8_MAX;
	int8_t x4350 = -1;
	int32_t x4351 = -1;
	uint64_t x4352 = UINT64_MAX;
	volatile int32_t t53 = -4285;

    t53 = ((x4349%(x4350==x4351))==x4352);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x4437 = 14;
	int32_t x4438 = INT32_MIN;
	int32_t x4439 = INT32_MIN;
	int32_t t54 = -3277;

    t54 = ((x4437%(x4438==x4439))==x4440);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x4461 = INT8_MAX;
	volatile int16_t x4462 = -1;
	static int32_t x4463 = -1;
	static int16_t x4464 = INT16_MIN;

    t55 = ((x4461%(x4462==x4463))==x4464);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x4561 = -16563404482173LL;
	static uint16_t x4562 = UINT16_MAX;
	uint16_t x4563 = UINT16_MAX;
	int64_t x4564 = INT64_MIN;
	volatile int32_t t56 = 1;

    t56 = ((x4561%(x4562==x4563))==x4564);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x4657 = 3999545U;
	int64_t x4658 = -1LL;
	int16_t x4659 = -1;
	static int32_t x4660 = 13356;
	volatile int32_t t57 = -5;

    t57 = ((x4657%(x4658==x4659))==x4660);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x4670 = INT16_MIN;
	int16_t x4671 = INT16_MIN;
	static int64_t x4672 = INT64_MAX;
	int32_t t58 = 6668;

    t58 = ((x4669%(x4670==x4671))==x4672);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x4746 = -1;
	volatile uint32_t x4747 = UINT32_MAX;
	static int32_t x4748 = INT32_MAX;
	int32_t t59 = -57;

    t59 = ((x4745%(x4746==x4747))==x4748);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x4929 = INT32_MIN;
	int16_t x4930 = -1;
	uint64_t x4931 = UINT64_MAX;
	int16_t x4932 = INT16_MAX;
	volatile int32_t t60 = 260703701;

    t60 = ((x4929%(x4930==x4931))==x4932);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x5005 = -1;
	static volatile int8_t x5006 = INT8_MIN;
	int8_t x5007 = INT8_MIN;
	static int8_t x5008 = INT8_MAX;
	int32_t t61 = -1817;

    t61 = ((x5005%(x5006==x5007))==x5008);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x5041 = UINT64_MAX;
	int32_t x5042 = INT32_MAX;
	int32_t x5043 = INT32_MAX;
	static int16_t x5044 = INT16_MIN;

    t62 = ((x5041%(x5042==x5043))==x5044);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x5265 = INT64_MIN;
	static int64_t x5266 = -1LL;
	int32_t x5267 = -1;
	uint16_t x5268 = 17U;
	static volatile int32_t t63 = 7213;

    t63 = ((x5265%(x5266==x5267))==x5268);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x5289 = 48821873U;
	int16_t x5290 = -1;
	static volatile int16_t x5291 = -1;
	volatile int64_t x5292 = 5969920732136351LL;
	volatile int32_t t64 = -2345203;

    t64 = ((x5289%(x5290==x5291))==x5292);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x5469 = 338335447LLU;
	uint32_t x5471 = UINT32_MAX;
	int32_t x5472 = -20169162;
	volatile int32_t t65 = 7091;

    t65 = ((x5469%(x5470==x5471))==x5472);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x5553 = INT64_MIN;
	int32_t x5554 = INT32_MIN;
	volatile int32_t x5555 = INT32_MIN;
	int32_t x5556 = INT32_MIN;
	static int32_t t66 = -149955088;

    t66 = ((x5553%(x5554==x5555))==x5556);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x5630 = -1;
	uint64_t x5631 = UINT64_MAX;
	volatile int32_t t67 = -50971;

    t67 = ((x5629%(x5630==x5631))==x5632);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x6033 = INT32_MIN;
	int16_t x6034 = -1;
	int64_t x6035 = -1LL;
	static uint16_t x6036 = 23U;
	volatile int32_t t68 = 3972748;

    t68 = ((x6033%(x6034==x6035))==x6036);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x6102 = -1;
	static int8_t x6104 = INT8_MIN;
	volatile int32_t t69 = 0;

    t69 = ((x6101%(x6102==x6103))==x6104);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x6105 = 312U;
	int8_t x6106 = 0;
	int8_t x6107 = 0;
	int32_t t70 = -12;

    t70 = ((x6105%(x6106==x6107))==x6108);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x6221 = -1;
	int8_t x6222 = INT8_MIN;
	int8_t x6223 = INT8_MIN;
	int32_t x6224 = INT32_MIN;

    t71 = ((x6221%(x6222==x6223))==x6224);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x6361 = INT32_MIN;
	int8_t x6362 = INT8_MIN;
	static int8_t x6363 = INT8_MIN;
	int64_t x6364 = -6979LL;
	static int32_t t72 = -3093;

    t72 = ((x6361%(x6362==x6363))==x6364);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x6581 = 15U;
	int8_t x6584 = INT8_MAX;
	volatile int32_t t73 = -2045;

    t73 = ((x6581%(x6582==x6583))==x6584);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x6670 = INT32_MIN;
	volatile int32_t x6671 = INT32_MIN;
	static volatile int8_t x6672 = 1;

    t74 = ((x6669%(x6670==x6671))==x6672);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x6685 = 384;
	uint16_t x6688 = 2U;
	volatile int32_t t75 = -114125;

    t75 = ((x6685%(x6686==x6687))==x6688);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x6737 = INT16_MIN;
	int16_t x6738 = -1;
	int8_t x6739 = -1;
	volatile uint64_t x6740 = UINT64_MAX;

    t76 = ((x6737%(x6738==x6739))==x6740);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x6841 = -1;
	int8_t x6842 = INT8_MIN;
	int32_t x6844 = -447;
	int32_t t77 = 379749;

    t77 = ((x6841%(x6842==x6843))==x6844);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x6861 = 15U;
	static uint64_t x6863 = UINT64_MAX;
	volatile uint16_t x6864 = 8110U;
	int32_t t78 = 7145510;

    t78 = ((x6861%(x6862==x6863))==x6864);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x6921 = -1;
	static int8_t x6922 = -1;
	int64_t x6923 = -1LL;
	static uint16_t x6924 = UINT16_MAX;
	int32_t t79 = 0;

    t79 = ((x6921%(x6922==x6923))==x6924);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x6957 = UINT64_MAX;
	static volatile int16_t x6958 = INT16_MIN;
	int16_t x6959 = INT16_MIN;
	int16_t x6960 = INT16_MIN;
	int32_t t80 = 0;

    t80 = ((x6957%(x6958==x6959))==x6960);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x6985 = -1;
	int32_t x6987 = -1;
	static volatile int32_t x6988 = INT32_MIN;
	volatile int32_t t81 = 127033;

    t81 = ((x6985%(x6986==x6987))==x6988);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x7073 = INT16_MIN;
	int8_t x7074 = -1;
	int16_t x7075 = -1;
	int32_t t82 = -4;

    t82 = ((x7073%(x7074==x7075))==x7076);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x7097 = 1U;
	volatile int16_t x7098 = INT16_MIN;
	volatile int16_t x7099 = INT16_MIN;
	static uint32_t x7100 = UINT32_MAX;

    t83 = ((x7097%(x7098==x7099))==x7100);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x7137 = 7;
	int32_t x7138 = -1;
	uint32_t x7139 = UINT32_MAX;
	int8_t x7140 = INT8_MAX;
	volatile int32_t t84 = -170121;

    t84 = ((x7137%(x7138==x7139))==x7140);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x7209 = INT64_MIN;
	static int32_t x7210 = -1;
	volatile int8_t x7211 = -1;
	int16_t x7212 = INT16_MIN;
	volatile int32_t t85 = -10;

    t85 = ((x7209%(x7210==x7211))==x7212);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x7286 = INT32_MIN;
	int32_t x7287 = INT32_MIN;
	int32_t t86 = -18411235;

    t86 = ((x7285%(x7286==x7287))==x7288);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x7522 = -1;

    t87 = ((x7521%(x7522==x7523))==x7524);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x7525 = UINT8_MAX;
	uint64_t x7526 = UINT64_MAX;
	int64_t x7527 = -1LL;
	int32_t t88 = 116638;

    t88 = ((x7525%(x7526==x7527))==x7528);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x7613 = 208118912U;
	int64_t x7614 = -1LL;
	static int64_t x7615 = -1LL;
	volatile uint64_t x7616 = UINT64_MAX;
	volatile int32_t t89 = 156194917;

    t89 = ((x7613%(x7614==x7615))==x7616);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x7641 = INT8_MIN;
	uint32_t x7643 = UINT32_MAX;
	int8_t x7644 = INT8_MIN;
	int32_t t90 = 5003;

    t90 = ((x7641%(x7642==x7643))==x7644);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x7725 = INT16_MIN;
	uint64_t x7726 = UINT64_MAX;
	volatile int64_t x7727 = -1LL;
	int16_t x7728 = -4494;
	int32_t t91 = 218194;

    t91 = ((x7725%(x7726==x7727))==x7728);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x7729 = INT16_MIN;
	int16_t x7730 = -1;
	int16_t x7731 = -1;
	uint32_t x7732 = 15052452U;
	static volatile int32_t t92 = 14135;

    t92 = ((x7729%(x7730==x7731))==x7732);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x7870 = -1;
	uint32_t x7871 = UINT32_MAX;
	uint16_t x7872 = 412U;
	static int32_t t93 = 1697650;

    t93 = ((x7869%(x7870==x7871))==x7872);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x7893 = 407753LL;
	static int64_t x7894 = INT64_MIN;
	int64_t x7895 = INT64_MIN;
	int16_t x7896 = INT16_MAX;
	int32_t t94 = 160636497;

    t94 = ((x7893%(x7894==x7895))==x7896);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x7902 = -1;
	static uint32_t x7903 = UINT32_MAX;
	int16_t x7904 = -191;

    t95 = ((x7901%(x7902==x7903))==x7904);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x8065 = 15U;
	int32_t x8066 = INT32_MIN;
	uint8_t x8068 = UINT8_MAX;
	int32_t t96 = -1;

    t96 = ((x8065%(x8066==x8067))==x8068);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x8073 = -4051;
	uint64_t x8074 = UINT64_MAX;
	int8_t x8075 = -1;
	static int32_t x8076 = -2805;
	int32_t t97 = -23913696;

    t97 = ((x8073%(x8074==x8075))==x8076);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x8105 = UINT8_MAX;
	volatile int8_t x8106 = -1;
	static int64_t x8108 = -4365638244582205LL;
	volatile int32_t t98 = -16099320;

    t98 = ((x8105%(x8106==x8107))==x8108);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x8225 = 18U;
	int64_t x8226 = INT64_MIN;
	int64_t x8227 = INT64_MIN;
	static int8_t x8228 = INT8_MAX;
	int32_t t99 = 2265;

    t99 = ((x8225%(x8226==x8227))==x8228);

    if (t99 != 0) { NG(); } else { ; }
	
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

