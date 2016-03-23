
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

int32_t x192 = -60818;
int8_t x274 = INT8_MAX;
int64_t x275 = 167413999LL;
int64_t x276 = 1917LL;
volatile uint64_t x297 = 194728337418903LLU;
static int32_t x343 = INT32_MIN;
int32_t x473 = INT32_MAX;
uint8_t x475 = 1U;
uint8_t x582 = 53U;
int32_t x1041 = 1;
int16_t x1489 = INT16_MAX;
static volatile int16_t x1491 = INT16_MIN;
static int64_t x1656 = INT64_MIN;
int32_t t13 = 79128;
int8_t x1770 = INT8_MIN;
int8_t x1772 = -6;
int8_t x1940 = -19;
static int8_t x2097 = 11;
uint16_t x2098 = 1U;
uint32_t x2321 = 1017226U;
uint32_t x2497 = 18648205U;
int64_t x2643 = 0LL;
int8_t x2644 = INT8_MIN;
volatile int32_t t22 = 1;
volatile uint32_t t23 = 3U;
uint32_t t24 = 3759U;
static int64_t x2806 = INT64_MAX;
int64_t x2807 = INT64_MAX;
uint64_t x2866 = 18LLU;
volatile int16_t x2941 = 5;
int32_t x2944 = -1;
static int32_t x3027 = -1;
int64_t x3043 = INT64_MIN;
uint8_t x3166 = 0U;
uint64_t x3205 = 1661264068LLU;
int32_t x3273 = INT32_MAX;
volatile int32_t x3274 = -1;
static uint8_t x3298 = 69U;


void f0(void) {
    	volatile uint8_t x5 = 25U;
	static volatile uint8_t x6 = 5U;
	static int64_t x7 = -1LL;
	int8_t x8 = -1;
	int32_t t0 = -13066121;

    t0 = (x5>>(x6-(x7&x8)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x85 = 7;
	static uint64_t x86 = 3LLU;
	volatile int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MAX;
	int32_t t1 = 17;

    t1 = (x85>>(x86-(x87&x88)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x189 = 5586773LLU;
	static volatile uint8_t x190 = 46U;
	volatile uint16_t x191 = 36U;
	volatile uint64_t t2 = 2236503039795067013LLU;

    t2 = (x189>>(x190-(x191&x192)));

    if (t2 != 5455LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x273 = INT8_MAX;
	int32_t t3 = 20586;

    t3 = (x273>>(x274-(x275&x276)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x298 = 5;
	int64_t x299 = -1LL;
	static int8_t x300 = 1;
	uint64_t t4 = 4829LLU;

    t4 = (x297>>(x298-(x299&x300)));

    if (t4 != 12170521088681LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x341 = INT32_MAX;
	int64_t x342 = INT64_MIN;
	int64_t x344 = INT64_MIN;
	volatile int32_t t5 = INT32_MAX;

    t5 = (x341>>(x342-(x343&x344)));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x474 = 7U;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t6 = 1172566;

    t6 = (x473>>(x474-(x475&x476)));

    if (t6 != 33554431) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x581 = 877807U;
	volatile uint32_t x583 = UINT32_MAX;
	static uint8_t x584 = 25U;
	uint32_t t7 = 2U;

    t7 = (x581>>(x582-(x583&x584)));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x845 = UINT64_MAX;
	volatile uint16_t x846 = 1U;
	int32_t x847 = 145383;
	volatile int64_t x848 = INT64_MIN;
	volatile uint64_t t8 = 1761029003LLU;

    t8 = (x845>>(x846-(x847&x848)));

    if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x1042 = 20;
	int8_t x1043 = 1;
	int8_t x1044 = INT8_MAX;
	volatile int32_t t9 = -24448;

    t9 = (x1041>>(x1042-(x1043&x1044)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x1413 = INT64_MAX;
	uint64_t x1414 = 3LLU;
	static volatile uint16_t x1415 = UINT16_MAX;
	int32_t x1416 = INT32_MIN;
	int64_t t10 = 83604180394899398LL;

    t10 = (x1413>>(x1414-(x1415&x1416)));

    if (t10 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x1490 = 10U;
	volatile uint8_t x1492 = UINT8_MAX;
	static int32_t t11 = -14981;

    t11 = (x1489>>(x1490-(x1491&x1492)));

    if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x1501 = 43052251;
	uint16_t x1502 = 28U;
	uint16_t x1503 = 20U;
	int16_t x1504 = -1;
	int32_t t12 = 173992;

    t12 = (x1501>>(x1502-(x1503&x1504)));

    if (t12 != 168172) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1653 = INT8_MAX;
	static uint8_t x1654 = 6U;
	int16_t x1655 = INT16_MAX;

    t13 = (x1653>>(x1654-(x1655&x1656)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1749 = 29U;
	uint16_t x1750 = 0U;
	static uint8_t x1751 = UINT8_MAX;
	int16_t x1752 = INT16_MIN;
	uint32_t t14 = 357416353U;

    t14 = (x1749>>(x1750-(x1751&x1752)));

    if (t14 != 29U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1769 = 6561;
	int8_t x1771 = INT8_MIN;
	volatile int32_t t15 = 21533;

    t15 = (x1769>>(x1770-(x1771&x1772)));

    if (t15 != 6561) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x1937 = INT64_MAX;
	volatile int64_t x1938 = 18LL;
	uint16_t x1939 = 0U;
	int64_t t16 = 3905274LL;

    t16 = (x1937>>(x1938-(x1939&x1940)));

    if (t16 != 35184372088831LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x2029 = INT8_MAX;
	uint8_t x2030 = 22U;
	static int8_t x2031 = 8;
	int32_t x2032 = INT32_MIN;
	int32_t t17 = -35740;

    t17 = (x2029>>(x2030-(x2031&x2032)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x2099 = 1;
	uint16_t x2100 = 7339U;
	int32_t t18 = 135;

    t18 = (x2097>>(x2098-(x2099&x2100)));

    if (t18 != 11) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x2322 = 2U;
	int8_t x2323 = INT8_MAX;
	int64_t x2324 = INT64_MIN;
	uint32_t t19 = 57U;

    t19 = (x2321>>(x2322-(x2323&x2324)));

    if (t19 != 254306U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x2397 = 22U;
	uint64_t x2398 = UINT64_MAX;
	int64_t x2399 = -1LL;
	uint64_t x2400 = UINT64_MAX;
	volatile uint32_t t20 = 11U;

    t20 = (x2397>>(x2398-(x2399&x2400)));

    if (t20 != 22U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x2498 = 10;
	int64_t x2499 = INT64_MIN;
	volatile int32_t x2500 = 124780;
	volatile uint32_t t21 = 7U;

    t21 = (x2497>>(x2498-(x2499&x2500)));

    if (t21 != 18211U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x2641 = 11630U;
	int32_t x2642 = 28;

    t22 = (x2641>>(x2642-(x2643&x2644)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x2681 = UINT32_MAX;
	int32_t x2682 = 23;
	int8_t x2683 = 2;
	int32_t x2684 = INT32_MIN;

    t23 = (x2681>>(x2682-(x2683&x2684)));

    if (t23 != 511U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x2789 = UINT32_MAX;
	static uint8_t x2790 = 3U;
	int64_t x2791 = -1LL;
	int32_t x2792 = -1;

    t24 = (x2789>>(x2790-(x2791&x2792)));

    if (t24 != 268435455U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x2805 = INT64_MAX;
	int8_t x2808 = -3;
	int64_t t25 = -3156022LL;

    t25 = (x2805>>(x2806-(x2807&x2808)));

    if (t25 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2849 = INT64_MAX;
	int64_t x2850 = -1LL;
	int8_t x2851 = -9;
	int64_t x2852 = -1LL;
	static int64_t t26 = -13LL;

    t26 = (x2849>>(x2850-(x2851&x2852)));

    if (t26 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x2865 = INT8_MAX;
	static int64_t x2867 = INT64_MIN;
	uint8_t x2868 = 12U;
	static volatile int32_t t27 = 730890454;

    t27 = (x2865>>(x2866-(x2867&x2868)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x2942 = INT64_MIN;
	static volatile int64_t x2943 = INT64_MIN;
	int32_t t28 = 30;

    t28 = (x2941>>(x2942-(x2943&x2944)));

    if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x2989 = 13043U;
	int16_t x2990 = 2;
	volatile uint8_t x2991 = 70U;
	volatile uint8_t x2992 = 2U;
	volatile int32_t t29 = 610272431;

    t29 = (x2989>>(x2990-(x2991&x2992)));

    if (t29 != 13043) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x3017 = 101U;
	uint8_t x3018 = 16U;
	static uint32_t x3019 = 415749969U;
	int64_t x3020 = INT64_MIN;
	volatile int32_t t30 = -192154;

    t30 = (x3017>>(x3018-(x3019&x3020)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x3025 = UINT64_MAX;
	static uint8_t x3026 = 13U;
	int32_t x3028 = -13;
	volatile uint64_t t31 = 176101809LLU;

    t31 = (x3025>>(x3026-(x3027&x3028)));

    if (t31 != 274877906943LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x3041 = 2296087U;
	int16_t x3042 = 3;
	uint32_t x3044 = 7514606U;
	static uint32_t t32 = 559U;

    t32 = (x3041>>(x3042-(x3043&x3044)));

    if (t32 != 287010U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x3113 = INT64_MAX;
	volatile int32_t x3114 = 1;
	static int32_t x3115 = INT32_MIN;
	uint32_t x3116 = 88135787U;
	int64_t t33 = 54956634LL;

    t33 = (x3113>>(x3114-(x3115&x3116)));

    if (t33 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x3165 = 1772926864248964248LLU;
	uint8_t x3167 = 110U;
	volatile int8_t x3168 = INT8_MIN;
	uint64_t t34 = 334823LLU;

    t34 = (x3165>>(x3166-(x3167&x3168)));

    if (t34 != 1772926864248964248LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x3206 = 37U;
	static uint32_t x3207 = UINT32_MAX;
	static int64_t x3208 = INT64_MIN;
	volatile uint64_t t35 = 6289615232LLU;

    t35 = (x3205>>(x3206-(x3207&x3208)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x3275 = -1;
	int32_t x3276 = -1;
	volatile int32_t t36 = INT32_MAX;

    t36 = (x3273>>(x3274-(x3275&x3276)));

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x3297 = 137694480261660LLU;
	static int64_t x3299 = -1LL;
	uint8_t x3300 = 63U;
	volatile uint64_t t37 = 8LLU;

    t37 = (x3297>>(x3298-(x3299&x3300)));

    if (t37 != 2151476254088LLU) { NG(); } else { ; }
	
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


    return 0;
}

