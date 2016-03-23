
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

volatile int64_t t0 = 62LL;
int16_t x141 = 4;
static volatile int8_t x142 = 1;
int16_t x143 = 744;
volatile int32_t t2 = 119;
uint16_t x241 = 49U;
uint8_t x243 = 0U;
volatile int64_t t3 = 96625989484LL;
static volatile uint64_t x541 = 895LLU;
int8_t x542 = -1;
uint32_t x543 = 536U;
int32_t x544 = INT32_MIN;
static uint16_t x621 = UINT16_MAX;
volatile uint32_t x624 = UINT32_MAX;
static uint32_t x933 = 72884U;
static int16_t x935 = -45;
static int16_t x936 = -1;
static volatile int8_t x1028 = 0;
uint64_t x1292 = 6LLU;
int32_t x1424 = -13;
uint64_t x1590 = 1862216840195081LLU;
volatile int64_t x1591 = INT64_MIN;
int32_t t17 = -1998;
int32_t t21 = 26;
int8_t x1967 = -1;
volatile int64_t x2082 = 13801LL;
volatile int64_t t25 = -138LL;
int16_t x2120 = -1;
volatile uint64_t x2240 = UINT64_MAX;
volatile uint16_t x2298 = 1245U;
volatile uint32_t t28 = 14U;
static int8_t x2474 = INT8_MAX;
static uint64_t x2481 = 26965231153566LLU;
volatile uint64_t t34 = 4483847391784LLU;
int32_t x2518 = INT32_MAX;
static int16_t x2694 = INT16_MAX;
volatile uint32_t t37 = 10306U;
static int8_t x2792 = -21;
static volatile uint64_t x2794 = UINT64_MAX;
int32_t x2795 = 1;
static uint8_t x2796 = 19U;
uint64_t x2798 = UINT64_MAX;
int16_t x2799 = INT16_MAX;
static int64_t x2889 = INT64_MAX;
volatile int32_t x3145 = INT32_MAX;
uint8_t x3148 = 0U;
volatile int16_t x3417 = -24;
int16_t x3502 = INT16_MAX;
int16_t x3504 = -1;
int32_t t44 = 79302561;
uint8_t x3653 = UINT8_MAX;
int8_t x3654 = -3;
uint32_t x3750 = 1890523424U;
int64_t x3794 = INT64_MAX;
int16_t x3795 = -1;
int8_t x3796 = -1;
int32_t t51 = 28;
int16_t x3935 = -1;
static uint64_t x3966 = 733947422091908LLU;
static int32_t x4056 = -1;
volatile int8_t x4096 = -1;
static volatile uint64_t t56 = 17154219492LLU;
int64_t x4137 = -390LL;
uint16_t x4161 = 2548U;
uint64_t x4253 = 1848LLU;
int64_t x4255 = -1LL;
int32_t t61 = -214469761;
volatile uint8_t x4505 = 67U;
uint32_t x4646 = UINT32_MAX;
volatile uint32_t t65 = 15U;
uint64_t x4828 = 7713534LLU;
static uint64_t x4838 = 5081598299LLU;
int8_t x4964 = -1;
static volatile uint16_t x5029 = 77U;
static int8_t x5215 = -1;
static uint8_t x5216 = 0U;
uint8_t x5359 = 8U;
static int32_t t76 = -202186378;
int8_t x5406 = INT8_MIN;
volatile int8_t x5466 = 0;
uint32_t x5601 = UINT32_MAX;
static volatile int16_t x5603 = 0;
int32_t x5682 = -1;


void f0(void) {
    	int8_t x93 = -59;
	volatile int64_t x94 = 8177876216069162LL;
	volatile int8_t x95 = -1;
	int64_t x96 = -1LL;

    t0 = ((x93+x94)>>(x95*x96));

    if (t0 != 4088938108034551LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x144 = 0;
	static volatile int32_t t1 = -588976463;

    t1 = ((x141+x142)>>(x143*x144));

    if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x145 = 1;
	int16_t x146 = 54;
	int8_t x147 = 0;
	uint16_t x148 = 245U;

    t2 = ((x145+x146)>>(x147*x148));

    if (t2 != 55) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x242 = 440219720304869LL;
	int64_t x244 = 2663264354LL;

    t3 = ((x241+x242)>>(x243*x244));

    if (t3 != 440219720304918LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x353 = 12697U;
	static volatile int32_t x354 = -1;
	static uint8_t x355 = 0U;
	static int16_t x356 = INT16_MAX;
	uint32_t t4 = 63361U;

    t4 = ((x353+x354)>>(x355*x356));

    if (t4 != 12696U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x401 = -119;
	int64_t x402 = 113135023341LL;
	int8_t x403 = 0;
	volatile int8_t x404 = 0;
	volatile int64_t t5 = 29840LL;

    t5 = ((x401+x402)>>(x403*x404));

    if (t5 != 113135023222LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t t6 = 10763316LLU;

    t6 = ((x541+x542)>>(x543*x544));

    if (t6 != 894LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x622 = 991;
	int16_t x623 = -1;
	volatile int32_t t7 = -343582296;

    t7 = ((x621+x622)>>(x623*x624));

    if (t7 != 33263) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x677 = INT16_MIN;
	static uint16_t x678 = UINT16_MAX;
	uint32_t x679 = UINT32_MAX;
	int16_t x680 = -1;
	int32_t t8 = -838071;

    t8 = ((x677+x678)>>(x679*x680));

    if (t8 != 16383) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x701 = -1;
	int64_t x702 = 45723265485091LL;
	static uint64_t x703 = UINT64_MAX;
	int32_t x704 = -1;
	int64_t t9 = 537087069542LL;

    t9 = ((x701+x702)>>(x703*x704));

    if (t9 != 22861632742545LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x934 = 2088026823LLU;
	uint64_t t10 = 314163LLU;

    t10 = ((x933+x934)>>(x935*x936));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1025 = 2656120010LLU;
	int16_t x1026 = INT16_MAX;
	int8_t x1027 = INT8_MIN;
	volatile uint64_t t11 = 93LLU;

    t11 = ((x1025+x1026)>>(x1027*x1028));

    if (t11 != 2656152777LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x1105 = -3LL;
	uint32_t x1106 = 137642U;
	int32_t x1107 = -1;
	volatile uint64_t x1108 = UINT64_MAX;
	int64_t t12 = 5673201684296LL;

    t12 = ((x1105+x1106)>>(x1107*x1108));

    if (t12 != 68819LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1289 = 16323U;
	uint64_t x1290 = 0LLU;
	uint8_t x1291 = 1U;
	volatile uint64_t t13 = 459126931LLU;

    t13 = ((x1289+x1290)>>(x1291*x1292));

    if (t13 != 255LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x1421 = INT64_MIN;
	static uint64_t x1422 = UINT64_MAX;
	uint8_t x1423 = 0U;
	uint64_t t14 = 107106268112881LLU;

    t14 = ((x1421+x1422)>>(x1423*x1424));

    if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1437 = UINT16_MAX;
	int8_t x1438 = -60;
	uint32_t x1439 = UINT32_MAX;
	int16_t x1440 = -1;
	static int32_t t15 = -408;

    t15 = ((x1437+x1438)>>(x1439*x1440));

    if (t15 != 32737) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1589 = UINT32_MAX;
	int16_t x1592 = 0;
	uint64_t t16 = 181371764397315673LLU;

    t16 = ((x1589+x1590)>>(x1591*x1592));

    if (t16 != 1862221135162376LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1693 = INT16_MAX;
	int8_t x1694 = 8;
	uint32_t x1695 = UINT32_MAX;
	int8_t x1696 = -7;

    t17 = ((x1693+x1694)>>(x1695*x1696));

    if (t17 != 256) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1789 = UINT16_MAX;
	uint64_t x1790 = 1171688LLU;
	uint64_t x1791 = 564868362397900LLU;
	static int8_t x1792 = 0;
	uint64_t t18 = 55619149LLU;

    t18 = ((x1789+x1790)>>(x1791*x1792));

    if (t18 != 1237223LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x1801 = INT16_MIN;
	uint64_t x1802 = 1968290589LLU;
	uint64_t x1803 = 5163546822LLU;
	volatile int64_t x1804 = INT64_MIN;
	uint64_t t19 = 47180087031LLU;

    t19 = ((x1801+x1802)>>(x1803*x1804));

    if (t19 != 1968257821LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x1817 = INT8_MIN;
	uint16_t x1818 = UINT16_MAX;
	int8_t x1819 = -1;
	static volatile int16_t x1820 = -1;
	int32_t t20 = 2;

    t20 = ((x1817+x1818)>>(x1819*x1820));

    if (t20 != 32703) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x1853 = 232;
	int16_t x1854 = -19;
	static int32_t x1855 = -29;
	static uint16_t x1856 = 0U;

    t21 = ((x1853+x1854)>>(x1855*x1856));

    if (t21 != 213) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1929 = 234477139252254LLU;
	volatile int16_t x1930 = INT16_MAX;
	int8_t x1931 = INT8_MIN;
	uint32_t x1932 = 0U;
	uint64_t t22 = 308425LLU;

    t22 = ((x1929+x1930)>>(x1931*x1932));

    if (t22 != 234477139285021LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1965 = 51364986;
	int16_t x1966 = INT16_MIN;
	int16_t x1968 = -1;
	volatile int32_t t23 = 32;

    t23 = ((x1965+x1966)>>(x1967*x1968));

    if (t23 != 25666109) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x2057 = 41;
	int16_t x2058 = 1;
	uint64_t x2059 = UINT64_MAX;
	int8_t x2060 = 0;
	static volatile int32_t t24 = -1;

    t24 = ((x2057+x2058)>>(x2059*x2060));

    if (t24 != 42) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x2081 = 3203U;
	int16_t x2083 = INT16_MAX;
	uint32_t x2084 = 0U;

    t25 = ((x2081+x2082)>>(x2083*x2084));

    if (t25 != 17004LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x2117 = 166002U;
	int8_t x2118 = -1;
	uint32_t x2119 = UINT32_MAX;
	uint32_t t26 = 70U;

    t26 = ((x2117+x2118)>>(x2119*x2120));

    if (t26 != 83000U) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x2237 = 1758U;
	static int16_t x2238 = INT16_MAX;
	int32_t x2239 = -1;
	uint32_t t27 = 113U;

    t27 = ((x2237+x2238)>>(x2239*x2240));

    if (t27 != 17262U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x2297 = UINT32_MAX;
	uint32_t x2299 = 0U;
	uint32_t x2300 = 568U;

    t28 = ((x2297+x2298)>>(x2299*x2300));

    if (t28 != 1244U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x2313 = -1;
	static volatile uint32_t x2314 = UINT32_MAX;
	uint16_t x2315 = 2U;
	int8_t x2316 = 1;
	uint32_t t29 = 478U;

    t29 = ((x2313+x2314)>>(x2315*x2316));

    if (t29 != 1073741823U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x2393 = 0;
	uint64_t x2394 = 3LLU;
	uint32_t x2395 = 384U;
	static int8_t x2396 = 0;
	uint64_t t30 = 10165896136411430LLU;

    t30 = ((x2393+x2394)>>(x2395*x2396));

    if (t30 != 3LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x2409 = INT32_MAX;
	int8_t x2410 = INT8_MIN;
	int8_t x2411 = 0;
	volatile int32_t x2412 = 1350241;
	volatile int32_t t31 = -873510;

    t31 = ((x2409+x2410)>>(x2411*x2412));

    if (t31 != 2147483519) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2461 = 1U;
	static uint8_t x2462 = 1U;
	static int16_t x2463 = INT16_MIN;
	int8_t x2464 = 0;
	int32_t t32 = -455891010;

    t32 = ((x2461+x2462)>>(x2463*x2464));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x2473 = INT16_MAX;
	int8_t x2475 = 0;
	volatile int8_t x2476 = -23;
	volatile int32_t t33 = 0;

    t33 = ((x2473+x2474)>>(x2475*x2476));

    if (t33 != 32894) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x2482 = UINT32_MAX;
	static uint32_t x2483 = 4876U;
	int32_t x2484 = INT32_MIN;

    t34 = ((x2481+x2482)>>(x2483*x2484));

    if (t34 != 26969526120861LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2517 = -5;
	int16_t x2519 = 0;
	volatile uint64_t x2520 = 391265947878LLU;
	int32_t t35 = -10;

    t35 = ((x2517+x2518)>>(x2519*x2520));

    if (t35 != 2147483642) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x2605 = INT8_MIN;
	static volatile uint32_t x2606 = 9594U;
	static volatile uint32_t x2607 = 3855719U;
	static volatile uint8_t x2608 = 0U;
	volatile uint32_t t36 = 9813598U;

    t36 = ((x2605+x2606)>>(x2607*x2608));

    if (t36 != 9466U) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x2693 = 30U;
	uint64_t x2695 = UINT64_MAX;
	int16_t x2696 = -1;

    t37 = ((x2693+x2694)>>(x2695*x2696));

    if (t37 != 16398U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x2789 = UINT32_MAX;
	uint64_t x2790 = 45262243LLU;
	uint32_t x2791 = UINT32_MAX;
	uint64_t t38 = 2021LLU;

    t38 = ((x2789+x2790)>>(x2791*x2792));

    if (t38 != 2069LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x2793 = 81U;
	uint64_t t39 = 128708699016LLU;

    t39 = ((x2793+x2794)>>(x2795*x2796));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2797 = INT32_MAX;
	static uint16_t x2800 = 0U;
	volatile uint64_t t40 = 1004222812LLU;

    t40 = ((x2797+x2798)>>(x2799*x2800));

    if (t40 != 2147483646LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x2890 = -251427379650758423LL;
	static int16_t x2891 = -1;
	int16_t x2892 = -1;
	int64_t t41 = -377418496LL;

    t41 = ((x2889+x2890)>>(x2891*x2892));

    if (t41 != 4485972328602008692LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x3146 = INT16_MIN;
	uint64_t x3147 = UINT64_MAX;
	volatile int32_t t42 = -5736922;

    t42 = ((x3145+x3146)>>(x3147*x3148));

    if (t42 != 2147450879) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x3418 = 17128U;
	static uint32_t x3419 = 1U;
	uint8_t x3420 = 7U;
	static volatile int32_t t43 = -1;

    t43 = ((x3417+x3418)>>(x3419*x3420));

    if (t43 != 133) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x3501 = -1;
	int64_t x3503 = -1LL;

    t44 = ((x3501+x3502)>>(x3503*x3504));

    if (t44 != 16383) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x3509 = -1;
	uint64_t x3510 = 0LLU;
	int8_t x3511 = -8;
	int64_t x3512 = -1LL;
	volatile uint64_t t45 = 1611LLU;

    t45 = ((x3509+x3510)>>(x3511*x3512));

    if (t45 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x3641 = 11LLU;
	uint32_t x3642 = 151265U;
	int64_t x3643 = INT64_MAX;
	int32_t x3644 = 0;
	uint64_t t46 = 230055381723733LLU;

    t46 = ((x3641+x3642)>>(x3643*x3644));

    if (t46 != 151276LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x3655 = INT32_MIN;
	uint32_t x3656 = 218590U;
	int32_t t47 = -3;

    t47 = ((x3653+x3654)>>(x3655*x3656));

    if (t47 != 252) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x3749 = INT32_MIN;
	volatile int16_t x3751 = 0;
	uint16_t x3752 = 12U;
	uint32_t t48 = 10U;

    t48 = ((x3749+x3750)>>(x3751*x3752));

    if (t48 != 4038007072U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x3793 = 3LLU;
	static volatile uint64_t t49 = 1219048828956464142LLU;

    t49 = ((x3793+x3794)>>(x3795*x3796));

    if (t49 != 4611686018427387905LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x3889 = INT8_MIN;
	uint32_t x3890 = 17992U;
	uint8_t x3891 = 0U;
	uint32_t x3892 = 2U;
	volatile uint32_t t50 = 2U;

    t50 = ((x3889+x3890)>>(x3891*x3892));

    if (t50 != 17864U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3897 = -1;
	static volatile int16_t x3898 = 47;
	static int32_t x3899 = -1;
	static int16_t x3900 = -10;

    t51 = ((x3897+x3898)>>(x3899*x3900));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x3933 = INT8_MIN;
	uint64_t x3934 = 265243LLU;
	int8_t x3936 = -1;
	static uint64_t t52 = 11LLU;

    t52 = ((x3933+x3934)>>(x3935*x3936));

    if (t52 != 132557LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x3965 = 1;
	uint8_t x3967 = 4U;
	volatile uint8_t x3968 = 5U;
	uint64_t t53 = 1112879205819799LLU;

    t53 = ((x3965+x3966)>>(x3967*x3968));

    if (t53 != 699946806LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x4053 = 27735466LLU;
	static uint32_t x4054 = 45434615U;
	int8_t x4055 = -1;
	volatile uint64_t t54 = 1031287951032LLU;

    t54 = ((x4053+x4054)>>(x4055*x4056));

    if (t54 != 36585040LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x4085 = 277498051U;
	uint64_t x4086 = 103669004447LLU;
	int32_t x4087 = 1181;
	int16_t x4088 = 0;
	static uint64_t t55 = 2190699991985044226LLU;

    t55 = ((x4085+x4086)>>(x4087*x4088));

    if (t55 != 103946502498LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x4093 = UINT64_MAX;
	int8_t x4094 = 0;
	static int8_t x4095 = -1;

    t56 = ((x4093+x4094)>>(x4095*x4096));

    if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x4138 = UINT32_MAX;
	uint8_t x4139 = 1U;
	volatile int32_t x4140 = 0;
	volatile int64_t t57 = 22739967LL;

    t57 = ((x4137+x4138)>>(x4139*x4140));

    if (t57 != 4294966905LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x4162 = 10U;
	static uint32_t x4163 = 3130U;
	static int32_t x4164 = INT32_MIN;
	int32_t t58 = 361;

    t58 = ((x4161+x4162)>>(x4163*x4164));

    if (t58 != 2558) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x4254 = UINT64_MAX;
	int8_t x4256 = -1;
	static uint64_t t59 = 5LLU;

    t59 = ((x4253+x4254)>>(x4255*x4256));

    if (t59 != 923LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x4265 = INT16_MIN;
	static volatile uint32_t x4266 = 2947080U;
	int16_t x4267 = INT16_MIN;
	int8_t x4268 = 0;
	volatile uint32_t t60 = 520589U;

    t60 = ((x4265+x4266)>>(x4267*x4268));

    if (t60 != 2914312U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x4401 = 2761;
	static uint16_t x4402 = UINT16_MAX;
	int64_t x4403 = INT64_MIN;
	static int16_t x4404 = 0;

    t61 = ((x4401+x4402)>>(x4403*x4404));

    if (t61 != 68296) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x4506 = 4985313885LLU;
	int16_t x4507 = -52;
	static int8_t x4508 = -1;
	volatile uint64_t t62 = 163814760347LLU;

    t62 = ((x4505+x4506)>>(x4507*x4508));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x4569 = 2527;
	int16_t x4570 = INT16_MAX;
	volatile int8_t x4571 = -1;
	int8_t x4572 = -1;
	volatile int32_t t63 = 759;

    t63 = ((x4569+x4570)>>(x4571*x4572));

    if (t63 != 17647) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x4601 = UINT32_MAX;
	int64_t x4602 = -1LL;
	uint16_t x4603 = 1U;
	static int32_t x4604 = 0;
	int64_t t64 = 148483624LL;

    t64 = ((x4601+x4602)>>(x4603*x4604));

    if (t64 != 4294967294LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x4645 = -31787393;
	static int32_t x4647 = -1;
	static int8_t x4648 = -2;

    t65 = ((x4645+x4646)>>(x4647*x4648));

    if (t65 != 1065794975U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x4761 = 5066320U;
	volatile int16_t x4762 = INT16_MIN;
	static int16_t x4763 = -1;
	uint64_t x4764 = UINT64_MAX;
	volatile uint32_t t66 = 72120041U;

    t66 = ((x4761+x4762)>>(x4763*x4764));

    if (t66 != 2516776U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x4825 = -1;
	volatile uint32_t x4826 = UINT32_MAX;
	int8_t x4827 = 0;
	volatile uint32_t t67 = 3930U;

    t67 = ((x4825+x4826)>>(x4827*x4828));

    if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x4837 = INT32_MAX;
	int32_t x4839 = 61907763;
	volatile int64_t x4840 = 0LL;
	volatile uint64_t t68 = 15861870LLU;

    t68 = ((x4837+x4838)>>(x4839*x4840));

    if (t68 != 7229081946LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x4961 = 29482U;
	static int64_t x4962 = 3309LL;
	static int64_t x4963 = -1LL;
	volatile int64_t t69 = -6226565945LL;

    t69 = ((x4961+x4962)>>(x4963*x4964));

    if (t69 != 16395LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x4993 = UINT8_MAX;
	volatile int16_t x4994 = INT16_MAX;
	static int64_t x4995 = INT64_MAX;
	int8_t x4996 = 0;
	static volatile int32_t t70 = -1069766933;

    t70 = ((x4993+x4994)>>(x4995*x4996));

    if (t70 != 33022) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x5030 = 6100516032823101LL;
	uint64_t x5031 = 1LLU;
	static volatile uint8_t x5032 = 10U;
	volatile int64_t t71 = 510226LL;

    t71 = ((x5029+x5030)>>(x5031*x5032));

    if (t71 != 5957535188303LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x5213 = 740400U;
	volatile uint8_t x5214 = 3U;
	uint32_t t72 = 121U;

    t72 = ((x5213+x5214)>>(x5215*x5216));

    if (t72 != 740403U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x5269 = 2287U;
	uint8_t x5270 = 80U;
	int16_t x5271 = -1;
	int16_t x5272 = -1;
	uint32_t t73 = 373U;

    t73 = ((x5269+x5270)>>(x5271*x5272));

    if (t73 != 1183U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x5297 = 8663002;
	int32_t x5298 = -1;
	uint16_t x5299 = 0U;
	volatile int64_t x5300 = -1LL;
	volatile int32_t t74 = 2708838;

    t74 = ((x5297+x5298)>>(x5299*x5300));

    if (t74 != 8663001) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x5321 = 246192210U;
	volatile int8_t x5322 = -1;
	int8_t x5323 = 0;
	static int16_t x5324 = -1;
	uint32_t t75 = 137840U;

    t75 = ((x5321+x5322)>>(x5323*x5324));

    if (t75 != 246192209U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x5357 = INT16_MAX;
	volatile uint8_t x5358 = 0U;
	int64_t x5360 = 1LL;

    t76 = ((x5357+x5358)>>(x5359*x5360));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x5405 = UINT16_MAX;
	int16_t x5407 = 0;
	int32_t x5408 = -4088;
	int32_t t77 = 43275389;

    t77 = ((x5405+x5406)>>(x5407*x5408));

    if (t77 != 65407) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x5465 = 10741LLU;
	uint8_t x5467 = 0U;
	volatile int16_t x5468 = INT16_MIN;
	volatile uint64_t t78 = 72977LLU;

    t78 = ((x5465+x5466)>>(x5467*x5468));

    if (t78 != 10741LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x5577 = UINT64_MAX;
	volatile int32_t x5578 = -4893624;
	int8_t x5579 = -1;
	int16_t x5580 = -1;
	volatile uint64_t t79 = 120525826064435LLU;

    t79 = ((x5577+x5578)>>(x5579*x5580));

    if (t79 != 9223372036852328995LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x5602 = INT16_MAX;
	int16_t x5604 = 1;
	uint32_t t80 = 154341924U;

    t80 = ((x5601+x5602)>>(x5603*x5604));

    if (t80 != 32766U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x5681 = UINT64_MAX;
	static int64_t x5683 = -1LL;
	int32_t x5684 = -1;
	volatile uint64_t t81 = 7756546953653711LLU;

    t81 = ((x5681+x5682)>>(x5683*x5684));

    if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
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


    return 0;
}

