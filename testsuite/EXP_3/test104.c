
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

static int16_t x270 = INT16_MAX;
static uint32_t x375 = UINT32_MAX;
int32_t t3 = -54;
int32_t t4 = 398421549;
int8_t x418 = INT8_MAX;
uint64_t x425 = 3712600445LLU;
static volatile int32_t x426 = 87209181;
uint8_t x504 = 31U;
int32_t x706 = -1;
volatile int64_t x707 = -1LL;
volatile int8_t x746 = -1;
uint8_t x748 = 6U;
int32_t t10 = -1057111454;
uint16_t x1025 = 1U;
int16_t x1312 = -1;
int16_t x1333 = -2046;
int8_t x1334 = INT8_MAX;
int8_t x1335 = 3;
volatile int32_t t15 = 3793;
static int8_t x1425 = -12;
static int8_t x1427 = -1;
int32_t t16 = -18820487;
static int16_t x1434 = 12260;
static int64_t x1435 = -1LL;
int32_t t17 = -2172;
static int32_t t19 = 263808523;
int32_t x1716 = -1;
static volatile int8_t x1973 = -1;
volatile uint8_t x1975 = 3U;
volatile int8_t x2023 = 21;
uint32_t x2361 = UINT32_MAX;
volatile int32_t t27 = -1448;
volatile uint64_t x2422 = 0LLU;
static volatile uint32_t x2423 = 24U;
static int8_t x2424 = -1;
static int8_t x2454 = INT8_MAX;
int32_t x2501 = INT32_MIN;
uint8_t x2503 = 3U;
static int64_t x2539 = -1LL;
volatile int8_t x2747 = 0;
volatile int32_t t32 = -448545933;
volatile uint16_t x2758 = UINT16_MAX;
int32_t t33 = 143;
volatile int8_t x2873 = INT8_MIN;
int16_t x2901 = INT16_MIN;
static uint16_t x2960 = 17U;
int16_t x2962 = 234;
int32_t t38 = 14661;
int16_t x3017 = -46;
int64_t x3057 = -1LL;
int32_t x3058 = INT32_MIN;
int16_t x3059 = -1;
static int16_t x3060 = 12;
volatile uint16_t x3179 = 0U;
static int16_t x3273 = INT16_MIN;
int8_t x3274 = 1;
static int32_t x3421 = -34;
uint64_t x3440 = UINT64_MAX;
volatile int32_t t48 = -229355;
int16_t x3446 = 1;
int8_t x3448 = -1;
uint64_t x3600 = 7LLU;
int32_t t53 = 646293655;
int8_t x3740 = 7;
static int32_t x3798 = -15;
uint8_t x3799 = 1U;
int64_t x3800 = -1LL;
int8_t x3814 = INT8_MIN;
volatile int32_t t56 = -3204131;
static uint16_t x3968 = 10U;
int8_t x3999 = 9;
volatile int32_t t58 = 31;
volatile int32_t t61 = -18783183;
uint32_t x4573 = 36627U;
static uint32_t x4575 = UINT32_MAX;
static int32_t x4765 = -1;
int64_t x4813 = INT64_MIN;
int64_t x4814 = 491158LL;
uint8_t x4842 = 107U;
volatile uint32_t x4982 = 555U;
volatile uint8_t x5000 = 1U;
uint32_t x5074 = 60539U;
static uint64_t x5154 = 22959835450405413LLU;
int64_t x5262 = 958603LL;
static int32_t x5386 = INT32_MIN;
static int32_t x5449 = INT32_MAX;
volatile int64_t x5545 = INT64_MIN;
volatile int32_t t81 = 3921;
uint8_t x5671 = 1U;
int16_t x5716 = 0;
static volatile int32_t t85 = 2872;
uint32_t x5733 = 1U;
uint16_t x5734 = UINT16_MAX;
int32_t x6146 = INT32_MIN;
int8_t x6148 = -1;
uint64_t x6200 = UINT64_MAX;
int16_t x6362 = INT16_MIN;
int32_t x6560 = -1;
volatile uint16_t x6809 = 607U;
int64_t x6826 = INT64_MAX;
int32_t x6828 = -1;
static uint32_t x6923 = 11U;
static volatile int32_t t100 = 1;
uint32_t x6990 = 2U;
uint16_t x6991 = 6U;
int16_t x7134 = -1;
uint16_t x7272 = 1U;
int32_t t104 = 870188;
int32_t x7469 = INT32_MIN;
int8_t x7593 = INT8_MAX;
int64_t x8019 = 1LL;
volatile int32_t t111 = -748;
volatile int32_t t113 = -7;
static int16_t x8201 = -1;
int64_t x8203 = 1LL;
int16_t x8204 = 2;
volatile uint16_t x8213 = UINT16_MAX;
static int32_t t116 = 17945;
int64_t x8340 = -1LL;
static uint16_t x8361 = 4878U;
int32_t x8362 = INT32_MIN;
volatile int32_t t119 = 609586776;
volatile uint8_t x8474 = 10U;
int16_t x8537 = -1;
static int32_t x8629 = INT32_MIN;
int16_t x8630 = INT16_MIN;


void f0(void) {
    	volatile int16_t x33 = INT16_MAX;
	uint64_t x34 = 14LLU;
	uint16_t x35 = 0U;
	volatile int8_t x36 = 0;
	static int32_t t0 = -4011196;

    t0 = ((x33==x34)<<(x35+x36));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x117 = 415252663634965LLU;
	static int32_t x118 = INT32_MIN;
	volatile int32_t x119 = 45;
	int32_t x120 = -20;
	int32_t t1 = 1996;

    t1 = ((x117==x118)<<(x119+x120));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x269 = 8279925419486787016LLU;
	int8_t x271 = 0;
	volatile int8_t x272 = 10;
	volatile int32_t t2 = -59;

    t2 = ((x269==x270)<<(x271+x272));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x373 = 54U;
	int64_t x374 = 4051762LL;
	uint8_t x376 = 22U;

    t3 = ((x373==x374)<<(x375+x376));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x381 = INT32_MIN;
	int32_t x382 = INT32_MIN;
	int8_t x383 = -1;
	int8_t x384 = 1;

    t4 = ((x381==x382)<<(x383+x384));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x417 = UINT64_MAX;
	int8_t x419 = 3;
	static uint64_t x420 = UINT64_MAX;
	int32_t t5 = -1;

    t5 = ((x417==x418)<<(x419+x420));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x427 = 0U;
	int8_t x428 = 9;
	int32_t t6 = 23940383;

    t6 = ((x425==x426)<<(x427+x428));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x501 = UINT32_MAX;
	int16_t x502 = INT16_MIN;
	int32_t x503 = -1;
	volatile int32_t t7 = 732082;

    t7 = ((x501==x502)<<(x503+x504));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x705 = INT8_MIN;
	static int16_t x708 = 14;
	volatile int32_t t8 = -14294;

    t8 = ((x705==x706)<<(x707+x708));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x745 = 26;
	int32_t x747 = -1;
	volatile int32_t t9 = -7233;

    t9 = ((x745==x746)<<(x747+x748));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x929 = INT64_MIN;
	volatile uint16_t x930 = 2655U;
	uint16_t x931 = 14U;
	int8_t x932 = -1;

    t10 = ((x929==x930)<<(x931+x932));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x1026 = INT64_MIN;
	uint16_t x1027 = 29U;
	volatile uint32_t x1028 = UINT32_MAX;
	int32_t t11 = 30;

    t11 = ((x1025==x1026)<<(x1027+x1028));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1029 = 6329U;
	int32_t x1030 = -1;
	int8_t x1031 = -1;
	volatile int8_t x1032 = 3;
	int32_t t12 = -1;

    t12 = ((x1029==x1030)<<(x1031+x1032));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x1185 = -1LL;
	int32_t x1186 = INT32_MIN;
	int16_t x1187 = 3;
	int32_t x1188 = -1;
	static int32_t t13 = -913;

    t13 = ((x1185==x1186)<<(x1187+x1188));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1309 = INT16_MIN;
	int32_t x1310 = -1;
	int8_t x1311 = 3;
	int32_t t14 = -565269;

    t14 = ((x1309==x1310)<<(x1311+x1312));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x1336 = UINT64_MAX;

    t15 = ((x1333==x1334)<<(x1335+x1336));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x1426 = 1;
	static uint8_t x1428 = 4U;

    t16 = ((x1425==x1426)<<(x1427+x1428));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1433 = INT8_MIN;
	volatile int8_t x1436 = 7;

    t17 = ((x1433==x1434)<<(x1435+x1436));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1457 = -1957681LL;
	static uint16_t x1458 = 39U;
	uint8_t x1459 = 10U;
	uint16_t x1460 = 20U;
	int32_t t18 = 1800;

    t18 = ((x1457==x1458)<<(x1459+x1460));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1613 = 12163U;
	static int16_t x1614 = INT16_MAX;
	int8_t x1615 = 2;
	int16_t x1616 = 1;

    t19 = ((x1613==x1614)<<(x1615+x1616));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x1713 = INT8_MIN;
	int16_t x1714 = -1;
	volatile uint16_t x1715 = 3U;
	volatile int32_t t20 = 110;

    t20 = ((x1713==x1714)<<(x1715+x1716));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1974 = -1;
	volatile int8_t x1976 = -1;
	int32_t t21 = 58;

    t21 = ((x1973==x1974)<<(x1975+x1976));

    if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x2021 = -1;
	int16_t x2022 = INT16_MIN;
	volatile uint32_t x2024 = 3U;
	int32_t t22 = 112804;

    t22 = ((x2021==x2022)<<(x2023+x2024));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x2089 = INT64_MIN;
	uint16_t x2090 = 0U;
	uint32_t x2091 = UINT32_MAX;
	int16_t x2092 = 5;
	volatile int32_t t23 = -2927;

    t23 = ((x2089==x2090)<<(x2091+x2092));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x2241 = INT64_MIN;
	int32_t x2242 = INT32_MIN;
	volatile uint8_t x2243 = 2U;
	int16_t x2244 = -1;
	int32_t t24 = 20086816;

    t24 = ((x2241==x2242)<<(x2243+x2244));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x2321 = INT32_MIN;
	int32_t x2322 = INT32_MIN;
	volatile int8_t x2323 = 14;
	static volatile uint32_t x2324 = 2U;
	volatile int32_t t25 = 3457474;

    t25 = ((x2321==x2322)<<(x2323+x2324));

    if (t25 != 65536) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x2362 = UINT16_MAX;
	int8_t x2363 = 8;
	int16_t x2364 = 0;
	int32_t t26 = -241422;

    t26 = ((x2361==x2362)<<(x2363+x2364));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x2369 = 0U;
	volatile int32_t x2370 = 486827;
	uint32_t x2371 = 6U;
	volatile int16_t x2372 = -1;

    t27 = ((x2369==x2370)<<(x2371+x2372));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x2421 = -4300800207LL;
	volatile int32_t t28 = -201;

    t28 = ((x2421==x2422)<<(x2423+x2424));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x2453 = -1;
	uint8_t x2455 = 7U;
	static volatile int8_t x2456 = -1;
	volatile int32_t t29 = 1619340;

    t29 = ((x2453==x2454)<<(x2455+x2456));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint32_t x2502 = 564709U;
	int32_t x2504 = -1;
	int32_t t30 = -2145487;

    t30 = ((x2501==x2502)<<(x2503+x2504));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x2537 = UINT32_MAX;
	uint64_t x2538 = 15467533116385756LLU;
	uint8_t x2540 = 20U;
	volatile int32_t t31 = 474533875;

    t31 = ((x2537==x2538)<<(x2539+x2540));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x2745 = 2;
	int8_t x2746 = -1;
	uint16_t x2748 = 5U;

    t32 = ((x2745==x2746)<<(x2747+x2748));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x2757 = -1LL;
	volatile uint16_t x2759 = 0U;
	int16_t x2760 = 17;

    t33 = ((x2757==x2758)<<(x2759+x2760));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x2857 = INT64_MAX;
	uint32_t x2858 = UINT32_MAX;
	volatile int32_t x2859 = 1;
	static int16_t x2860 = -1;
	int32_t t34 = -1;

    t34 = ((x2857==x2858)<<(x2859+x2860));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2874 = 3U;
	int8_t x2875 = -1;
	static volatile int16_t x2876 = 16;
	static volatile int32_t t35 = 501855396;

    t35 = ((x2873==x2874)<<(x2875+x2876));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x2902 = INT8_MAX;
	int32_t x2903 = 0;
	int8_t x2904 = 5;
	static int32_t t36 = -59437769;

    t36 = ((x2901==x2902)<<(x2903+x2904));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x2957 = 18647;
	static uint64_t x2958 = 7355513898LLU;
	int32_t x2959 = -13;
	int32_t t37 = 13217772;

    t37 = ((x2957==x2958)<<(x2959+x2960));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2961 = -1;
	uint32_t x2963 = 11U;
	int8_t x2964 = 2;

    t38 = ((x2961==x2962)<<(x2963+x2964));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x2973 = INT16_MAX;
	int32_t x2974 = -966569741;
	volatile int64_t x2975 = 4LL;
	uint64_t x2976 = UINT64_MAX;
	int32_t t39 = 11258462;

    t39 = ((x2973==x2974)<<(x2975+x2976));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x3018 = -1;
	uint64_t x3019 = 4LLU;
	int8_t x3020 = -1;
	volatile int32_t t40 = -57033;

    t40 = ((x3017==x3018)<<(x3019+x3020));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x3053 = INT16_MAX;
	int32_t x3054 = INT32_MAX;
	static uint64_t x3055 = UINT64_MAX;
	static uint8_t x3056 = 17U;
	int32_t t41 = 1964912;

    t41 = ((x3053==x3054)<<(x3055+x3056));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t t42 = -3;

    t42 = ((x3057==x3058)<<(x3059+x3060));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x3113 = INT8_MIN;
	int32_t x3114 = -261645561;
	volatile int32_t x3115 = -1;
	int8_t x3116 = 12;
	volatile int32_t t43 = 8092;

    t43 = ((x3113==x3114)<<(x3115+x3116));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x3177 = -3;
	int64_t x3178 = INT64_MIN;
	static int8_t x3180 = 1;
	static int32_t t44 = 104582;

    t44 = ((x3177==x3178)<<(x3179+x3180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x3275 = -5;
	static uint32_t x3276 = 8U;
	volatile int32_t t45 = -16181;

    t45 = ((x3273==x3274)<<(x3275+x3276));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x3285 = 68U;
	int32_t x3286 = INT32_MIN;
	int64_t x3287 = 1LL;
	volatile int32_t x3288 = -1;
	int32_t t46 = 2;

    t46 = ((x3285==x3286)<<(x3287+x3288));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x3422 = INT8_MAX;
	int8_t x3423 = -1;
	uint16_t x3424 = 1U;
	volatile int32_t t47 = -12078840;

    t47 = ((x3421==x3422)<<(x3423+x3424));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x3437 = UINT64_MAX;
	volatile int8_t x3438 = 4;
	uint8_t x3439 = 24U;

    t48 = ((x3437==x3438)<<(x3439+x3440));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x3445 = UINT8_MAX;
	int16_t x3447 = 21;
	volatile int32_t t49 = -166;

    t49 = ((x3445==x3446)<<(x3447+x3448));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x3477 = 7LLU;
	uint64_t x3478 = UINT64_MAX;
	int64_t x3479 = -1LL;
	static volatile uint32_t x3480 = 3U;
	volatile int32_t t50 = 3138;

    t50 = ((x3477==x3478)<<(x3479+x3480));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x3589 = UINT64_MAX;
	uint32_t x3590 = 866048186U;
	volatile int8_t x3591 = 2;
	int16_t x3592 = 0;
	volatile int32_t t51 = 6;

    t51 = ((x3589==x3590)<<(x3591+x3592));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x3597 = -1LL;
	int64_t x3598 = -405742420LL;
	int64_t x3599 = 1LL;
	static int32_t t52 = -4;

    t52 = ((x3597==x3598)<<(x3599+x3600));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x3677 = INT32_MIN;
	static volatile int64_t x3678 = INT64_MAX;
	uint32_t x3679 = 27U;
	uint8_t x3680 = 3U;

    t53 = ((x3677==x3678)<<(x3679+x3680));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x3737 = 3U;
	volatile int16_t x3738 = -1;
	int8_t x3739 = -3;
	volatile int32_t t54 = 1189247;

    t54 = ((x3737==x3738)<<(x3739+x3740));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x3797 = INT32_MIN;
	volatile int32_t t55 = -536;

    t55 = ((x3797==x3798)<<(x3799+x3800));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x3813 = UINT32_MAX;
	uint64_t x3815 = UINT64_MAX;
	int8_t x3816 = 20;

    t56 = ((x3813==x3814)<<(x3815+x3816));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x3965 = INT32_MIN;
	static int32_t x3966 = INT32_MIN;
	uint8_t x3967 = 5U;
	volatile int32_t t57 = -38677;

    t57 = ((x3965==x3966)<<(x3967+x3968));

    if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x3997 = 2401;
	int32_t x3998 = INT32_MAX;
	static uint16_t x4000 = 1U;

    t58 = ((x3997==x3998)<<(x3999+x4000));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x4065 = 46283474;
	volatile int8_t x4066 = INT8_MAX;
	int8_t x4067 = 1;
	int64_t x4068 = 5LL;
	volatile int32_t t59 = -3;

    t59 = ((x4065==x4066)<<(x4067+x4068));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x4137 = 2748U;
	static volatile int64_t x4138 = -31LL;
	uint32_t x4139 = 1U;
	uint8_t x4140 = 2U;
	volatile int32_t t60 = -67860;

    t60 = ((x4137==x4138)<<(x4139+x4140));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x4309 = INT64_MIN;
	volatile int32_t x4310 = -262;
	uint32_t x4311 = UINT32_MAX;
	uint8_t x4312 = 1U;

    t61 = ((x4309==x4310)<<(x4311+x4312));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x4337 = -239;
	int64_t x4338 = -1LL;
	volatile uint8_t x4339 = 24U;
	uint8_t x4340 = 3U;
	static int32_t t62 = 316701;

    t62 = ((x4337==x4338)<<(x4339+x4340));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x4501 = 13;
	volatile uint8_t x4502 = 0U;
	int64_t x4503 = -1LL;
	uint8_t x4504 = 27U;
	volatile int32_t t63 = 96242;

    t63 = ((x4501==x4502)<<(x4503+x4504));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x4505 = INT16_MAX;
	uint32_t x4506 = 118U;
	volatile int32_t x4507 = -1;
	volatile uint8_t x4508 = 6U;
	int32_t t64 = 3012;

    t64 = ((x4505==x4506)<<(x4507+x4508));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x4574 = INT8_MIN;
	int8_t x4576 = 1;
	volatile int32_t t65 = 51834287;

    t65 = ((x4573==x4574)<<(x4575+x4576));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x4637 = UINT32_MAX;
	static int16_t x4638 = -145;
	volatile uint32_t x4639 = 1U;
	uint8_t x4640 = 3U;
	volatile int32_t t66 = -356;

    t66 = ((x4637==x4638)<<(x4639+x4640));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x4673 = 0U;
	int32_t x4674 = -1;
	uint64_t x4675 = UINT64_MAX;
	volatile int8_t x4676 = 1;
	int32_t t67 = -120687;

    t67 = ((x4673==x4674)<<(x4675+x4676));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x4737 = -3;
	uint16_t x4738 = UINT16_MAX;
	uint8_t x4739 = 23U;
	int8_t x4740 = -1;
	int32_t t68 = -1;

    t68 = ((x4737==x4738)<<(x4739+x4740));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x4766 = -1;
	volatile uint8_t x4767 = 11U;
	int8_t x4768 = 1;
	volatile int32_t t69 = -288014;

    t69 = ((x4765==x4766)<<(x4767+x4768));

    if (t69 != 4096) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x4815 = 8U;
	static int8_t x4816 = -5;
	int32_t t70 = 172402;

    t70 = ((x4813==x4814)<<(x4815+x4816));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x4841 = 1442185325715457231LLU;
	uint32_t x4843 = UINT32_MAX;
	uint16_t x4844 = 2U;
	int32_t t71 = 206;

    t71 = ((x4841==x4842)<<(x4843+x4844));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x4981 = 244280259426649147LLU;
	uint8_t x4983 = 25U;
	int8_t x4984 = -1;
	int32_t t72 = 334094;

    t72 = ((x4981==x4982)<<(x4983+x4984));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x4997 = INT32_MIN;
	uint32_t x4998 = 10U;
	int16_t x4999 = 23;
	volatile int32_t t73 = 352903084;

    t73 = ((x4997==x4998)<<(x4999+x5000));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x5073 = 898;
	int8_t x5075 = -1;
	int32_t x5076 = 4;
	static int32_t t74 = -3771;

    t74 = ((x5073==x5074)<<(x5075+x5076));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x5153 = INT16_MIN;
	volatile int16_t x5155 = 28;
	int16_t x5156 = 1;
	int32_t t75 = 1;

    t75 = ((x5153==x5154)<<(x5155+x5156));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x5261 = 495290737U;
	int16_t x5263 = 0;
	uint16_t x5264 = 10U;
	volatile int32_t t76 = -457515;

    t76 = ((x5261==x5262)<<(x5263+x5264));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x5301 = UINT16_MAX;
	int16_t x5302 = -42;
	int16_t x5303 = -1;
	static int16_t x5304 = 3;
	int32_t t77 = -105;

    t77 = ((x5301==x5302)<<(x5303+x5304));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x5385 = -1031270732;
	volatile int8_t x5387 = 7;
	int64_t x5388 = -1LL;
	volatile int32_t t78 = 120;

    t78 = ((x5385==x5386)<<(x5387+x5388));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x5433 = -1LL;
	int16_t x5434 = INT16_MIN;
	int8_t x5435 = -1;
	int16_t x5436 = 1;
	int32_t t79 = -205;

    t79 = ((x5433==x5434)<<(x5435+x5436));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x5450 = -1;
	uint8_t x5451 = 1U;
	volatile uint32_t x5452 = UINT32_MAX;
	int32_t t80 = 1399182;

    t80 = ((x5449==x5450)<<(x5451+x5452));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x5546 = 79898713136675412LLU;
	int8_t x5547 = 0;
	uint16_t x5548 = 16U;

    t81 = ((x5545==x5546)<<(x5547+x5548));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x5605 = 1146LL;
	uint64_t x5606 = 1128336746685263LLU;
	uint16_t x5607 = 25U;
	static int16_t x5608 = -5;
	int32_t t82 = -46079;

    t82 = ((x5605==x5606)<<(x5607+x5608));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x5669 = UINT8_MAX;
	static uint64_t x5670 = UINT64_MAX;
	uint64_t x5672 = UINT64_MAX;
	volatile int32_t t83 = -544;

    t83 = ((x5669==x5670)<<(x5671+x5672));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x5697 = 1U;
	static int8_t x5698 = 0;
	uint8_t x5699 = 2U;
	volatile int64_t x5700 = -1LL;
	volatile int32_t t84 = 435115797;

    t84 = ((x5697==x5698)<<(x5699+x5700));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x5713 = INT16_MIN;
	static volatile int8_t x5714 = 8;
	int8_t x5715 = 1;

    t85 = ((x5713==x5714)<<(x5715+x5716));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x5735 = -1;
	static uint16_t x5736 = 30U;
	int32_t t86 = -172;

    t86 = ((x5733==x5734)<<(x5735+x5736));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x5737 = INT32_MIN;
	int32_t x5738 = INT32_MIN;
	volatile uint8_t x5739 = 1U;
	uint16_t x5740 = 5U;
	volatile int32_t t87 = 24;

    t87 = ((x5737==x5738)<<(x5739+x5740));

    if (t87 != 64) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x6021 = -7;
	int64_t x6022 = -7LL;
	int64_t x6023 = -23LL;
	int16_t x6024 = 31;
	volatile int32_t t88 = -2054551;

    t88 = ((x6021==x6022)<<(x6023+x6024));

    if (t88 != 256) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x6145 = -482;
	uint8_t x6147 = 7U;
	volatile int32_t t89 = 1;

    t89 = ((x6145==x6146)<<(x6147+x6148));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x6197 = INT8_MAX;
	int16_t x6198 = -125;
	int8_t x6199 = 32;
	static int32_t t90 = 634;

    t90 = ((x6197==x6198)<<(x6199+x6200));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x6333 = INT16_MIN;
	uint64_t x6334 = 85892063LLU;
	volatile int64_t x6335 = -1LL;
	static uint16_t x6336 = 9U;
	volatile int32_t t91 = 30;

    t91 = ((x6333==x6334)<<(x6335+x6336));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x6361 = 109792014704996185LL;
	static uint8_t x6363 = 3U;
	static int16_t x6364 = 14;
	int32_t t92 = 353105711;

    t92 = ((x6361==x6362)<<(x6363+x6364));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x6557 = 0;
	volatile uint32_t x6558 = 4U;
	int32_t x6559 = 20;
	volatile int32_t t93 = -14103709;

    t93 = ((x6557==x6558)<<(x6559+x6560));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x6677 = INT16_MIN;
	int32_t x6678 = INT32_MIN;
	uint8_t x6679 = 16U;
	int16_t x6680 = -1;
	int32_t t94 = 132203005;

    t94 = ((x6677==x6678)<<(x6679+x6680));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x6701 = INT8_MIN;
	volatile uint64_t x6702 = UINT64_MAX;
	int16_t x6703 = 3;
	uint64_t x6704 = UINT64_MAX;
	volatile int32_t t95 = 62243;

    t95 = ((x6701==x6702)<<(x6703+x6704));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x6753 = 621497452U;
	static volatile uint16_t x6754 = UINT16_MAX;
	uint8_t x6755 = 10U;
	uint64_t x6756 = UINT64_MAX;
	volatile int32_t t96 = 1;

    t96 = ((x6753==x6754)<<(x6755+x6756));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x6810 = -3390;
	uint8_t x6811 = 7U;
	int8_t x6812 = -1;
	volatile int32_t t97 = 25581892;

    t97 = ((x6809==x6810)<<(x6811+x6812));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x6813 = -108993413605LL;
	static int32_t x6814 = -30;
	static uint8_t x6815 = 5U;
	uint32_t x6816 = 12U;
	int32_t t98 = -2922322;

    t98 = ((x6813==x6814)<<(x6815+x6816));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x6825 = INT64_MAX;
	uint8_t x6827 = 15U;
	static int32_t t99 = -1751696;

    t99 = ((x6825==x6826)<<(x6827+x6828));

    if (t99 != 16384) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x6921 = 1;
	volatile int8_t x6922 = -6;
	int64_t x6924 = -1LL;

    t100 = ((x6921==x6922)<<(x6923+x6924));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x6989 = INT16_MAX;
	int8_t x6992 = 13;
	volatile int32_t t101 = 2845653;

    t101 = ((x6989==x6990)<<(x6991+x6992));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x7089 = 406U;
	static int64_t x7090 = INT64_MAX;
	int64_t x7091 = -1LL;
	volatile int16_t x7092 = 29;
	volatile int32_t t102 = -4949;

    t102 = ((x7089==x7090)<<(x7091+x7092));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x7133 = -153950194LL;
	volatile int8_t x7135 = -1;
	int16_t x7136 = 15;
	static int32_t t103 = -3048;

    t103 = ((x7133==x7134)<<(x7135+x7136));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x7269 = -1;
	int64_t x7270 = -1LL;
	int8_t x7271 = -1;

    t104 = ((x7269==x7270)<<(x7271+x7272));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x7345 = INT16_MIN;
	int16_t x7346 = INT16_MIN;
	static int64_t x7347 = -1LL;
	volatile int32_t x7348 = 3;
	int32_t t105 = -13828;

    t105 = ((x7345==x7346)<<(x7347+x7348));

    if (t105 != 4) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x7470 = INT8_MIN;
	int16_t x7471 = 1;
	int64_t x7472 = -1LL;
	int32_t t106 = -268212028;

    t106 = ((x7469==x7470)<<(x7471+x7472));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x7581 = 67347U;
	int64_t x7582 = INT64_MIN;
	uint64_t x7583 = UINT64_MAX;
	static uint8_t x7584 = 30U;
	static volatile int32_t t107 = 136860;

    t107 = ((x7581==x7582)<<(x7583+x7584));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x7594 = UINT16_MAX;
	uint32_t x7595 = UINT32_MAX;
	uint8_t x7596 = 8U;
	int32_t t108 = -431613115;

    t108 = ((x7593==x7594)<<(x7595+x7596));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x7693 = 55U;
	uint64_t x7694 = 0LLU;
	int8_t x7695 = -1;
	uint32_t x7696 = 5U;
	volatile int32_t t109 = 227004748;

    t109 = ((x7693==x7694)<<(x7695+x7696));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x8017 = -1;
	uint64_t x8018 = UINT64_MAX;
	int8_t x8020 = -1;
	volatile int32_t t110 = 30602630;

    t110 = ((x8017==x8018)<<(x8019+x8020));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x8077 = 2128575244U;
	int16_t x8078 = INT16_MAX;
	uint8_t x8079 = 2U;
	uint64_t x8080 = UINT64_MAX;

    t111 = ((x8077==x8078)<<(x8079+x8080));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x8089 = UINT32_MAX;
	volatile uint16_t x8090 = UINT16_MAX;
	int64_t x8091 = -1LL;
	volatile uint8_t x8092 = 1U;
	volatile int32_t t112 = -10;

    t112 = ((x8089==x8090)<<(x8091+x8092));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x8157 = INT16_MIN;
	volatile int64_t x8158 = INT64_MIN;
	volatile uint8_t x8159 = 12U;
	int32_t x8160 = -1;

    t113 = ((x8157==x8158)<<(x8159+x8160));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x8169 = INT8_MIN;
	static volatile uint64_t x8170 = 309771977391LLU;
	volatile uint64_t x8171 = UINT64_MAX;
	int16_t x8172 = 2;
	int32_t t114 = 115;

    t114 = ((x8169==x8170)<<(x8171+x8172));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x8202 = 4027072442530LLU;
	volatile int32_t t115 = -819;

    t115 = ((x8201==x8202)<<(x8203+x8204));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x8214 = UINT64_MAX;
	int16_t x8215 = 8;
	static uint32_t x8216 = UINT32_MAX;

    t116 = ((x8213==x8214)<<(x8215+x8216));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x8337 = INT16_MAX;
	int64_t x8338 = -1LL;
	uint8_t x8339 = 1U;
	volatile int32_t t117 = -981643955;

    t117 = ((x8337==x8338)<<(x8339+x8340));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x8363 = 2U;
	int8_t x8364 = -1;
	int32_t t118 = -119459402;

    t118 = ((x8361==x8362)<<(x8363+x8364));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x8385 = -154749;
	int8_t x8386 = INT8_MIN;
	volatile int8_t x8387 = INT8_MAX;
	volatile int32_t x8388 = -106;

    t119 = ((x8385==x8386)<<(x8387+x8388));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x8473 = INT8_MIN;
	uint32_t x8475 = 5U;
	uint32_t x8476 = UINT32_MAX;
	int32_t t120 = 3;

    t120 = ((x8473==x8474)<<(x8475+x8476));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x8485 = INT64_MIN;
	int16_t x8486 = INT16_MIN;
	int16_t x8487 = 0;
	int8_t x8488 = 1;
	int32_t t121 = -1;

    t121 = ((x8485==x8486)<<(x8487+x8488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x8501 = 1LLU;
	uint32_t x8502 = 816U;
	static uint8_t x8503 = 1U;
	volatile uint8_t x8504 = 2U;
	volatile int32_t t122 = -500029023;

    t122 = ((x8501==x8502)<<(x8503+x8504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x8538 = UINT64_MAX;
	volatile uint8_t x8539 = 11U;
	uint32_t x8540 = UINT32_MAX;
	int32_t t123 = -21460692;

    t123 = ((x8537==x8538)<<(x8539+x8540));

    if (t123 != 1024) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x8631 = 1;
	int16_t x8632 = -1;
	int32_t t124 = 15403;

    t124 = ((x8629==x8630)<<(x8631+x8632));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x8669 = INT8_MIN;
	int8_t x8670 = 1;
	uint64_t x8671 = UINT64_MAX;
	uint16_t x8672 = 2U;
	volatile int32_t t125 = -32990;

    t125 = ((x8669==x8670)<<(x8671+x8672));

    if (t125 != 0) { NG(); } else { ; }
	
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


    return 0;
}

