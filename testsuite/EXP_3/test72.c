
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

volatile uint8_t x82 = 0U;
static int64_t x83 = -1LL;
uint64_t x157 = 7LLU;
uint32_t x286 = 9U;
int64_t x395 = INT64_MIN;
static uint64_t t5 = 1747049753997LLU;
int64_t t7 = 36823419322LL;
int32_t x607 = 449;
uint64_t t9 = 141593634737018205LLU;
uint32_t x626 = 1U;
static uint16_t x628 = 0U;
static int64_t x693 = 168168332LL;
uint64_t x973 = 4131336426LLU;
volatile int32_t x975 = -1;
uint8_t x1141 = 1U;
static volatile int32_t t16 = -375984;
volatile int32_t x1356 = 109685236;
int16_t x1382 = 3;
volatile int32_t t18 = -720518;
uint64_t x1497 = UINT64_MAX;
static int8_t x1499 = 1;
int8_t x1500 = -6;
static int8_t x1577 = 7;
uint8_t x1578 = 10U;
int32_t t20 = -703;
static int8_t x1706 = 9;
static int64_t x1708 = 1596LL;
int64_t x1753 = 223476032LL;
static uint64_t x1754 = 16LLU;
int8_t x1822 = 1;
uint8_t x1842 = 1U;
static volatile int16_t x1933 = INT16_MAX;
uint32_t x1934 = 5U;
static int8_t x1954 = 0;
static int8_t x2031 = INT8_MIN;
static int8_t x2090 = 32;
static uint64_t x2091 = UINT64_MAX;
int64_t x2136 = INT64_MAX;
static int64_t t29 = -183189LL;
int8_t x2271 = INT8_MAX;
int32_t x2283 = 61854911;
int64_t t33 = 374407456455LL;
int16_t x2299 = 0;
static int8_t x2300 = -1;
uint32_t x2369 = UINT32_MAX;
int8_t x2370 = 18;
int16_t x2372 = INT16_MAX;
uint32_t t36 = 707908433U;
int32_t x2643 = INT32_MAX;
int16_t x2644 = INT16_MIN;
static int32_t t40 = -1227;
int8_t x2718 = 1;
static uint64_t x3019 = 4168109LLU;
int8_t x3044 = INT8_MIN;
int8_t x3150 = 28;
volatile int8_t x3151 = 5;
uint64_t x3152 = 20512023070LLU;
volatile uint64_t t47 = 1LLU;
uint8_t x3218 = 20U;
volatile int32_t t48 = 1355007;
static int8_t x3341 = 2;
int32_t x3399 = 2005448;
static uint64_t x3445 = UINT64_MAX;
static int16_t x3446 = 10;
int32_t x3448 = 363550396;
volatile uint64_t t52 = 3937LLU;
volatile int8_t x3449 = INT8_MAX;
volatile uint32_t t53 = 10920431U;
volatile uint32_t t54 = 239858U;
volatile uint32_t x3465 = 312043852U;
volatile int8_t x3505 = 5;
int8_t x3506 = 0;
int8_t x3507 = -1;
volatile int16_t x3508 = INT16_MAX;
volatile uint64_t x3521 = UINT64_MAX;
static uint16_t x3565 = 245U;
uint8_t x3566 = 2U;
volatile int32_t x3572 = INT32_MIN;
static int16_t x3598 = 3;
uint32_t x3663 = UINT32_MAX;
uint8_t x3664 = 62U;
int8_t x3682 = 24;
int8_t x3684 = 1;
int8_t x3746 = 19;
volatile int8_t x3946 = 20;
static uint16_t x4014 = 5U;
int16_t x4015 = 79;
int64_t x4077 = 2108225761806559181LL;
static int8_t x4152 = -28;
volatile uint64_t t68 = 2842233403267211133LLU;
uint8_t x4214 = 13U;
uint8_t x4216 = UINT8_MAX;
int32_t x4263 = -2885655;
volatile int8_t x4264 = INT8_MIN;
int32_t t71 = 3;
static uint16_t x4348 = 905U;
volatile int8_t x4641 = 1;
static int8_t x4642 = 3;
int8_t x4643 = 1;
volatile uint64_t x4649 = 210668557LLU;
uint32_t x4850 = 5U;
uint32_t x4852 = 1387U;
volatile uint32_t t80 = 45U;
uint16_t x4949 = 42U;
static uint64_t x4951 = 242732266021218LLU;
uint64_t t82 = 61354292708LLU;
static uint64_t x5016 = 1791873745474621LLU;
int64_t x5200 = -5186650057151LL;
int64_t x5249 = 252223402LL;
volatile int16_t x5250 = 7;
int8_t x5407 = -1;
uint64_t t89 = 13998LLU;
volatile int32_t t90 = 209789195;
uint8_t x5762 = 24U;
uint32_t x5764 = 1316422498U;


void f0(void) {
    	volatile uint64_t x69 = UINT64_MAX;
	int8_t x70 = 3;
	uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t0 = 662868948042778LLU;

    t0 = ((x69<<x70)-(x71+x72));

    if (t0 != 121LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x81 = UINT16_MAX;
	int32_t x84 = -8275712;
	volatile int64_t t1 = 62LL;

    t1 = ((x81<<x82)-(x83+x84));

    if (t1 != 8341248LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x158 = 21U;
	uint32_t x159 = 25044U;
	int32_t x160 = -1;
	volatile uint64_t t2 = 75435561LLU;

    t2 = ((x157<<x158)-(x159+x160));

    if (t2 != 14655021LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x229 = UINT32_MAX;
	int8_t x230 = 2;
	volatile int64_t x231 = -1181244897LL;
	uint64_t x232 = 167182452458103469LLU;
	uint64_t t3 = 9856868046137131LLU;

    t3 = ((x229<<x230)-(x231+x232));

    if (t3 != 18279561626727660336LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x285 = 13U;
	uint64_t x287 = 14110LLU;
	int64_t x288 = INT64_MIN;
	static uint64_t t4 = 293814970818073470LLU;

    t4 = ((x285<<x286)-(x287+x288));

    if (t4 != 9223372036854768354LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x393 = 63806LLU;
	int8_t x394 = 1;
	volatile int64_t x396 = 12111862324LL;

    t5 = ((x393<<x394)-(x395+x396));

    if (t5 != 9223372024743041096LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x409 = 21079564680878LLU;
	int8_t x410 = 22;
	int32_t x411 = 2;
	int16_t x412 = INT16_MAX;
	uint64_t t6 = 149419630596759122LLU;

    t6 = ((x409<<x410)-(x411+x412));

    if (t6 != 14627126164427079679LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x433 = 49483LL;
	static int8_t x434 = 39;
	int16_t x435 = -18;
	volatile uint32_t x436 = 2538493U;

    t7 = ((x433<<x434)-(x435+x436));

    if (t7 != 27203566936081429LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x505 = 32718U;
	int8_t x506 = 0;
	int32_t x507 = -1;
	int16_t x508 = INT16_MAX;
	uint32_t t8 = 3554U;

    t8 = ((x505<<x506)-(x507+x508));

    if (t8 != 4294967248U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x605 = 216LLU;
	int8_t x606 = 0;
	uint64_t x608 = 8LLU;

    t9 = ((x605<<x606)-(x607+x608));

    if (t9 != 18446744073709551375LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x625 = 5248;
	static uint32_t x627 = 1382995778U;
	volatile uint32_t t10 = 1982302406U;

    t10 = ((x625<<x626)-(x627+x628));

    if (t10 != 2911982014U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x633 = 4U;
	volatile uint8_t x634 = 3U;
	int64_t x635 = INT64_MAX;
	int32_t x636 = -4260882;
	int64_t t11 = 15883LL;

    t11 = ((x633<<x634)-(x635+x636));

    if (t11 != -9223372036850514893LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x694 = 12U;
	volatile uint16_t x695 = UINT16_MAX;
	int16_t x696 = -1;
	volatile int64_t t12 = 73LL;

    t12 = ((x693<<x694)-(x695+x696));

    if (t12 != 688817422338LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x909 = 426311721321LLU;
	static uint32_t x910 = 39U;
	static volatile uint16_t x911 = 207U;
	uint8_t x912 = 2U;
	volatile uint64_t t13 = 3LLU;

    t13 = ((x909<<x910)-(x911+x912));

    if (t13 != 1463868340744224559LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x974 = 9U;
	int8_t x976 = -1;
	uint64_t t14 = 675270484LLU;

    t14 = ((x973<<x974)-(x975+x976));

    if (t14 != 2115244250114LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x1089 = 674877261843LLU;
	uint64_t x1090 = 0LLU;
	volatile uint64_t x1091 = 357342536828LLU;
	int8_t x1092 = INT8_MAX;
	uint64_t t15 = 2874LLU;

    t15 = ((x1089<<x1090)-(x1091+x1092));

    if (t15 != 317534724888LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1142 = 1U;
	int8_t x1143 = -1;
	int32_t x1144 = INT32_MAX;

    t16 = ((x1141<<x1142)-(x1143+x1144));

    if (t16 != -2147483644) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1353 = INT16_MAX;
	volatile uint8_t x1354 = 6U;
	volatile uint16_t x1355 = 23468U;
	volatile int32_t t17 = 6;

    t17 = ((x1353<<x1354)-(x1355+x1356));

    if (t17 != -107611616) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1381 = 37;
	uint8_t x1383 = UINT8_MAX;
	int16_t x1384 = 1523;

    t18 = ((x1381<<x1382)-(x1383+x1384));

    if (t18 != -1482) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1498 = 17;
	uint64_t t19 = 12329682303137382LLU;

    t19 = ((x1497<<x1498)-(x1499+x1500));

    if (t19 != 18446744073709420549LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1579 = -1;
	volatile int8_t x1580 = -1;

    t20 = ((x1577<<x1578)-(x1579+x1580));

    if (t20 != 7170) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x1705 = INT8_MAX;
	uint64_t x1707 = 14404LLU;
	volatile uint64_t t21 = 6957LLU;

    t21 = ((x1705<<x1706)-(x1707+x1708));

    if (t21 != 49024LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1755 = 111U;
	int32_t x1756 = INT32_MIN;
	static volatile int64_t t22 = -514957690741686453LL;

    t22 = ((x1753<<x1754)-(x1755+x1756));

    if (t22 != 14647872716689LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x1821 = 7U;
	volatile uint64_t x1823 = 2237475538310901685LLU;
	static int32_t x1824 = 3340468;
	uint64_t t23 = 389988LLU;

    t23 = ((x1821<<x1822)-(x1823+x1824));

    if (t23 != 16209268535395309477LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1841 = 2385;
	int8_t x1843 = INT8_MAX;
	uint16_t x1844 = 118U;
	int32_t t24 = 130914805;

    t24 = ((x1841<<x1842)-(x1843+x1844));

    if (t24 != 4525) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1935 = UINT8_MAX;
	static int8_t x1936 = INT8_MAX;
	volatile int32_t t25 = 16641;

    t25 = ((x1933<<x1934)-(x1935+x1936));

    if (t25 != 1048162) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x1953 = 11U;
	volatile int32_t x1955 = INT32_MIN;
	uint32_t x1956 = 1716118516U;
	volatile uint32_t t26 = 0U;

    t26 = ((x1953<<x1954)-(x1955+x1956));

    if (t26 != 431365143U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2029 = 284;
	static uint16_t x2030 = 4U;
	int8_t x2032 = -1;
	static volatile int32_t t27 = -1401;

    t27 = ((x2029<<x2030)-(x2031+x2032));

    if (t27 != 4673) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2089 = 9467577422LLU;
	static volatile int32_t x2092 = INT32_MIN;
	static volatile uint64_t t28 = 126421LLU;

    t28 = ((x2089<<x2090)-(x2091+x2092));

    if (t28 != 3769447254566371329LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x2133 = INT8_MAX;
	volatile uint8_t x2134 = 18U;
	static int16_t x2135 = -30;

    t29 = ((x2133<<x2134)-(x2135+x2136));

    if (t29 != -9223372036821483489LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x2197 = 11;
	volatile int32_t x2198 = 7;
	int16_t x2199 = INT16_MIN;
	int8_t x2200 = -1;
	int32_t t30 = -1;

    t30 = ((x2197<<x2198)-(x2199+x2200));

    if (t30 != 34177) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x2269 = 0U;
	uint32_t x2270 = 2U;
	int8_t x2272 = 27;
	int32_t t31 = -80703522;

    t31 = ((x2269<<x2270)-(x2271+x2272));

    if (t31 != -154) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x2281 = 933;
	int8_t x2282 = 1;
	uint32_t x2284 = 988991U;
	uint32_t t32 = 15682U;

    t32 = ((x2281<<x2282)-(x2283+x2284));

    if (t32 != 4232125260U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x2293 = INT64_MAX;
	int8_t x2294 = 0;
	static int8_t x2295 = INT8_MIN;
	int64_t x2296 = 29823827697LL;

    t33 = ((x2293<<x2294)-(x2295+x2296));

    if (t33 != 9223372007030948238LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x2297 = UINT64_MAX;
	uint8_t x2298 = 1U;
	volatile uint64_t t34 = UINT64_MAX;

    t34 = ((x2297<<x2298)-(x2299+x2300));

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x2371 = UINT64_MAX;
	volatile uint64_t t35 = 7LLU;

    t35 = ((x2369<<x2370)-(x2371+x2372));

    if (t35 != 4294672386LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x2377 = 0U;
	static int8_t x2378 = 0;
	int32_t x2379 = 4;
	int16_t x2380 = INT16_MIN;

    t36 = ((x2377<<x2378)-(x2379+x2380));

    if (t36 != 32764U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x2401 = UINT8_MAX;
	uint8_t x2402 = 0U;
	uint32_t x2403 = 0U;
	int8_t x2404 = -5;
	static uint32_t t37 = 5926710U;

    t37 = ((x2401<<x2402)-(x2403+x2404));

    if (t37 != 260U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x2405 = 1U;
	uint8_t x2406 = 14U;
	int32_t x2407 = -9;
	int8_t x2408 = -1;
	static uint32_t t38 = 4488240U;

    t38 = ((x2405<<x2406)-(x2407+x2408));

    if (t38 != 16394U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x2577 = 42;
	static uint64_t x2578 = 2LLU;
	volatile int64_t x2579 = -1LL;
	int8_t x2580 = 25;
	int64_t t39 = -20031072432LL;

    t39 = ((x2577<<x2578)-(x2579+x2580));

    if (t39 != 144LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2641 = 726;
	uint8_t x2642 = 5U;

    t40 = ((x2641<<x2642)-(x2643+x2644));

    if (t40 != -2147427647) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x2717 = 107U;
	static uint64_t x2719 = UINT64_MAX;
	uint32_t x2720 = 706623U;
	uint64_t t41 = 7862363411LLU;

    t41 = ((x2717<<x2718)-(x2719+x2720));

    if (t41 != 18446744073708845208LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x2789 = 1112342U;
	int16_t x2790 = 1;
	volatile int64_t x2791 = -1LL;
	volatile int64_t x2792 = INT64_MAX;
	volatile int64_t t42 = -15LL;

    t42 = ((x2789<<x2790)-(x2791+x2792));

    if (t42 != -9223372036852551122LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x2949 = 10U;
	volatile uint32_t x2950 = 3U;
	int8_t x2951 = INT8_MAX;
	int16_t x2952 = -1;
	int32_t t43 = -9502239;

    t43 = ((x2949<<x2950)-(x2951+x2952));

    if (t43 != -46) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x2997 = UINT64_MAX;
	uint64_t x2998 = 3LLU;
	static volatile int64_t x2999 = INT64_MAX;
	static int64_t x3000 = -65459LL;
	uint64_t t44 = 1154881586393LLU;

    t44 = ((x2997<<x2998)-(x2999+x3000));

    if (t44 != 9223372036854841260LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x3017 = 235669U;
	uint32_t x3018 = 12U;
	uint64_t x3020 = 58443830489LLU;
	uint64_t t45 = 18LLU;

    t45 = ((x3017<<x3018)-(x3019+x3020));

    if (t45 != 18446744016226853242LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x3041 = UINT8_MAX;
	static uint8_t x3042 = 5U;
	int32_t x3043 = -1;
	volatile int32_t t46 = -10;

    t46 = ((x3041<<x3042)-(x3043+x3044));

    if (t46 != 8289) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x3149 = 0;

    t47 = ((x3149<<x3150)-(x3151+x3152));

    if (t47 != 18446744053197528541LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x3217 = 1;
	int8_t x3219 = INT8_MIN;
	int8_t x3220 = INT8_MAX;

    t48 = ((x3217<<x3218)-(x3219+x3220));

    if (t48 != 1048577) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x3342 = 2U;
	int32_t x3343 = INT32_MIN;
	volatile int32_t x3344 = INT32_MAX;
	int32_t t49 = -2;

    t49 = ((x3341<<x3342)-(x3343+x3344));

    if (t49 != 9) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x3353 = 25904LLU;
	volatile int8_t x3354 = 0;
	volatile int16_t x3355 = -276;
	uint64_t x3356 = UINT64_MAX;
	static volatile uint64_t t50 = 12285446662807LLU;

    t50 = ((x3353<<x3354)-(x3355+x3356));

    if (t50 != 26181LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x3397 = UINT32_MAX;
	static int16_t x3398 = 0;
	volatile int8_t x3400 = INT8_MIN;
	volatile uint32_t t51 = 40147419U;

    t51 = ((x3397<<x3398)-(x3399+x3400));

    if (t51 != 4292961975U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x3447 = 0;

    t52 = ((x3445<<x3446)-(x3447+x3448));

    if (t52 != 18446744073346000196LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x3450 = 19U;
	static volatile int8_t x3451 = INT8_MIN;
	uint32_t x3452 = UINT32_MAX;

    t53 = ((x3449<<x3450)-(x3451+x3452));

    if (t53 != 66584705U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x3453 = 7518670U;
	static uint8_t x3454 = 0U;
	int16_t x3455 = INT16_MIN;
	static int8_t x3456 = 1;

    t54 = ((x3453<<x3454)-(x3455+x3456));

    if (t54 != 7551437U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x3466 = 5U;
	int64_t x3467 = 310349602090689LL;
	int32_t x3468 = -14;
	static int64_t t55 = 198LL;

    t55 = ((x3465<<x3466)-(x3467+x3468));

    if (t55 != -310348206622003LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t t56 = -1;

    t56 = ((x3505<<x3506)-(x3507+x3508));

    if (t56 != -32761) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x3522 = 3;
	static int8_t x3523 = INT8_MAX;
	static int8_t x3524 = INT8_MIN;
	uint64_t t57 = 11LLU;

    t57 = ((x3521<<x3522)-(x3523+x3524));

    if (t57 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x3567 = UINT16_MAX;
	static int32_t x3568 = INT32_MIN;
	static volatile int32_t t58 = -110;

    t58 = ((x3565<<x3566)-(x3567+x3568));

    if (t58 != 2147419093) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x3569 = UINT64_MAX;
	static uint16_t x3570 = 1U;
	static int8_t x3571 = 53;
	volatile uint64_t t59 = 99952LLU;

    t59 = ((x3569<<x3570)-(x3571+x3572));

    if (t59 != 2147483593LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x3573 = 24U;
	static int8_t x3574 = 0;
	int32_t x3575 = 1;
	int64_t x3576 = 20394375LL;
	int64_t t60 = -1106127LL;

    t60 = ((x3573<<x3574)-(x3575+x3576));

    if (t60 != -20394352LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x3597 = UINT8_MAX;
	static volatile uint32_t x3599 = 119599U;
	int16_t x3600 = INT16_MIN;
	uint32_t t61 = 12833278U;

    t61 = ((x3597<<x3598)-(x3599+x3600));

    if (t61 != 4294882505U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x3661 = 3U;
	int64_t x3662 = 6LL;
	uint32_t t62 = 1U;

    t62 = ((x3661<<x3662)-(x3663+x3664));

    if (t62 != 131U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x3681 = INT8_MAX;
	uint16_t x3683 = 18U;
	int32_t t63 = 947831;

    t63 = ((x3681<<x3682)-(x3683+x3684));

    if (t63 != 2130706413) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x3745 = 1475180LLU;
	int32_t x3747 = -1;
	static int64_t x3748 = -1LL;
	uint64_t t64 = 8136LLU;

    t64 = ((x3745<<x3746)-(x3747+x3748));

    if (t64 != 773419171842LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x3945 = 984LLU;
	uint16_t x3947 = 39U;
	int64_t x3948 = 163LL;
	volatile uint64_t t65 = 2104313139632240LLU;

    t65 = ((x3945<<x3946)-(x3947+x3948));

    if (t65 != 1031798582LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x4013 = 194539576137LLU;
	static uint8_t x4016 = 1U;
	uint64_t t66 = 407315794LLU;

    t66 = ((x4013<<x4014)-(x4015+x4016));

    if (t66 != 6225266436304LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x4078 = 1U;
	volatile int8_t x4079 = -1;
	uint32_t x4080 = UINT32_MAX;
	int64_t t67 = -36186513LL;

    t67 = ((x4077<<x4078)-(x4079+x4080));

    if (t67 != 4216451519318151068LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x4149 = 13LLU;
	uint8_t x4150 = 0U;
	uint64_t x4151 = 41881399784413LLU;

    t68 = ((x4149<<x4150)-(x4151+x4152));

    if (t68 != 18446702192309767244LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x4213 = 1;
	volatile int8_t x4215 = -7;
	int32_t t69 = 1295292;

    t69 = ((x4213<<x4214)-(x4215+x4216));

    if (t69 != 7944) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x4249 = 9599587LLU;
	int64_t x4250 = 13LL;
	int32_t x4251 = -3;
	volatile int8_t x4252 = INT8_MIN;
	volatile uint64_t t70 = 1855970755342939LLU;

    t70 = ((x4249<<x4250)-(x4251+x4252));

    if (t70 != 78639816835LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint8_t x4261 = 19U;
	uint8_t x4262 = 2U;

    t71 = ((x4261<<x4262)-(x4263+x4264));

    if (t71 != 2885859) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x4345 = UINT64_MAX;
	static volatile uint16_t x4346 = 2U;
	uint64_t x4347 = 6482991078LLU;
	uint64_t t72 = 614906625796456LLU;

    t72 = ((x4345<<x4346)-(x4347+x4348));

    if (t72 != 18446744067226559629LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x4429 = INT8_MAX;
	uint16_t x4430 = 2U;
	int16_t x4431 = 96;
	volatile int8_t x4432 = 0;
	static volatile int32_t t73 = -8152;

    t73 = ((x4429<<x4430)-(x4431+x4432));

    if (t73 != 412) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x4553 = 1302U;
	volatile uint8_t x4554 = 20U;
	uint8_t x4555 = 17U;
	volatile int8_t x4556 = INT8_MAX;
	int32_t t74 = -58;

    t74 = ((x4553<<x4554)-(x4555+x4556));

    if (t74 != 1365245808) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x4644 = 5765U;
	int32_t t75 = 28385884;

    t75 = ((x4641<<x4642)-(x4643+x4644));

    if (t75 != -5758) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x4650 = 53U;
	volatile int16_t x4651 = INT16_MIN;
	volatile uint8_t x4652 = 1U;
	volatile uint64_t t76 = 291662664293033LLU;

    t76 = ((x4649<<x4650)-(x4651+x4652));

    if (t76 != 9340465627166441471LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x4673 = 0U;
	volatile uint16_t x4674 = 16U;
	static uint32_t x4675 = UINT32_MAX;
	int64_t x4676 = 503337224LL;
	static volatile int64_t t77 = -451568218031838LL;

    t77 = ((x4673<<x4674)-(x4675+x4676));

    if (t77 != -4798304519LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x4681 = 29U;
	static int16_t x4682 = 12;
	int8_t x4683 = -1;
	volatile int16_t x4684 = INT16_MAX;
	volatile int32_t t78 = -15;

    t78 = ((x4681<<x4682)-(x4683+x4684));

    if (t78 != 86018) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x4789 = 1260;
	uint16_t x4790 = 2U;
	int32_t x4791 = 0;
	static int16_t x4792 = -1;
	volatile int32_t t79 = 1923;

    t79 = ((x4789<<x4790)-(x4791+x4792));

    if (t79 != 5041) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x4849 = INT8_MAX;
	int16_t x4851 = 1;

    t80 = ((x4849<<x4850)-(x4851+x4852));

    if (t80 != 2676U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x4865 = 25856502;
	int32_t x4866 = 3;
	int32_t x4867 = INT32_MAX;
	int64_t x4868 = -1LL;
	int64_t t81 = -15LL;

    t81 = ((x4865<<x4866)-(x4867+x4868));

    if (t81 != -1940631630LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x4950 = 0U;
	int16_t x4952 = INT16_MAX;

    t82 = ((x4949<<x4950)-(x4951+x4952));

    if (t82 != 18446501341443497673LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x5013 = 16377U;
	uint8_t x5014 = 3U;
	static volatile int16_t x5015 = 335;
	uint64_t t83 = 1527636LLU;

    t83 = ((x5013<<x5014)-(x5015+x5016));

    if (t83 != 18444952199964207676LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x5033 = 707U;
	uint8_t x5034 = 0U;
	static int8_t x5035 = -1;
	uint64_t x5036 = 12LLU;
	uint64_t t84 = 0LLU;

    t84 = ((x5033<<x5034)-(x5035+x5036));

    if (t84 != 696LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x5081 = 375U;
	volatile int16_t x5082 = 7;
	int8_t x5083 = 57;
	uint16_t x5084 = 30685U;
	uint32_t t85 = 221091839U;

    t85 = ((x5081<<x5082)-(x5083+x5084));

    if (t85 != 17258U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x5197 = 176235LL;
	uint16_t x5198 = 10U;
	int8_t x5199 = INT8_MIN;
	int64_t t86 = -1305645822586LL;

    t86 = ((x5197<<x5198)-(x5199+x5200));

    if (t86 != 5186830521919LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x5251 = 0;
	uint32_t x5252 = UINT32_MAX;
	int64_t t87 = 54260439291LL;

    t87 = ((x5249<<x5250)-(x5251+x5252));

    if (t87 != 27989628161LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x5289 = UINT32_MAX;
	static uint8_t x5290 = 1U;
	volatile int16_t x5291 = INT16_MIN;
	int16_t x5292 = INT16_MIN;
	uint32_t t88 = 31U;

    t88 = ((x5289<<x5290)-(x5291+x5292));

    if (t88 != 65534U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x5405 = UINT64_MAX;
	int16_t x5406 = 2;
	uint32_t x5408 = 12U;

    t89 = ((x5405<<x5406)-(x5407+x5408));

    if (t89 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x5465 = 1U;
	uint8_t x5466 = 12U;
	uint16_t x5467 = UINT16_MAX;
	int16_t x5468 = -4;

    t90 = ((x5465<<x5466)-(x5467+x5468));

    if (t90 != -61435) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x5761 = 62U;
	int16_t x5763 = -1348;
	uint32_t t91 = 13281U;

    t91 = ((x5761<<x5762)-(x5763+x5764));

    if (t91 != 4018733538U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x5849 = INT8_MAX;
	int32_t x5850 = 6;
	int64_t x5851 = 123035LL;
	volatile int32_t x5852 = INT32_MIN;
	int64_t t92 = -45909LL;

    t92 = ((x5849<<x5850)-(x5851+x5852));

    if (t92 != 2147368741LL) { NG(); } else { ; }
	
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


    return 0;
}

