
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

uint32_t x7 = 120U;
int32_t x49 = 306421346;
uint32_t x50 = 83980U;
uint32_t x52 = 7U;
int64_t x87 = INT64_MIN;
uint64_t t3 = 1588978LLU;
volatile int64_t x141 = INT64_MAX;
static int16_t x143 = 614;
uint8_t x392 = 3U;
int32_t t7 = 120730;
int64_t x574 = INT64_MIN;
int64_t x762 = INT64_MIN;
static uint16_t x854 = 2U;
volatile int16_t x897 = 2;
static int16_t x898 = INT16_MAX;
static uint8_t x977 = 12U;
static int16_t x1039 = INT16_MIN;
int8_t x1040 = 32;
uint16_t x1107 = UINT16_MAX;
volatile int8_t x1169 = INT8_MIN;
static volatile int32_t t20 = -204418809;
int8_t x1245 = -1;
int32_t x1246 = INT32_MIN;
uint8_t x1351 = 13U;
int32_t t26 = -2597;
volatile int8_t x1576 = 1;
volatile uint16_t x1612 = 31U;
static int64_t x1638 = INT64_MAX;
uint16_t x1639 = 3U;
int16_t x1732 = 0;
uint32_t t31 = UINT32_MAX;
static uint64_t x1775 = 85691LLU;
int16_t x1776 = 13;
volatile int32_t t32 = 82257857;
int16_t x1786 = -1;
uint16_t x1788 = 2U;
uint16_t x1794 = 0U;
int8_t x1914 = INT8_MAX;
static int8_t x1941 = INT8_MAX;
int8_t x1944 = 1;
int8_t x1974 = 0;
int32_t x2101 = -9827758;
uint16_t x2102 = 2487U;
uint32_t x2103 = UINT32_MAX;
volatile int32_t t41 = 811903145;
static uint16_t x2190 = UINT16_MAX;
int16_t x2191 = INT16_MIN;
volatile int8_t x2205 = 0;
volatile uint32_t x2208 = 7U;
int32_t t45 = 2214359;
uint16_t x2577 = 6U;
uint32_t x2579 = 258U;
static uint8_t x2582 = 11U;
static int64_t x2610 = -1LL;
uint8_t x2612 = 53U;
int64_t t51 = -464551566LL;
volatile int32_t t53 = -6123958;
uint32_t x2689 = 9U;
uint8_t x2769 = UINT8_MAX;
int64_t x2803 = 301776689228LL;
uint64_t x2832 = 8LLU;
volatile int8_t x2933 = -1;
uint32_t x2935 = UINT32_MAX;
uint8_t x2936 = 19U;
uint8_t x3072 = 9U;
volatile int64_t t62 = -82266695073979LL;
int32_t x3126 = -207363546;
static int64_t x3139 = -1LL;
int32_t x3309 = INT32_MIN;
int8_t x3319 = INT8_MAX;
uint16_t x3380 = 13U;
int64_t x3753 = INT64_MIN;
int32_t x3754 = -1;
int32_t x3806 = 0;
int32_t t78 = -1270;
int16_t x4059 = -58;
int64_t x4138 = INT64_MIN;
volatile int16_t x4145 = 26;
uint16_t x4146 = 306U;
int32_t x4147 = -1;
uint16_t x4148 = 14U;
int32_t x4163 = -9387;
uint8_t x4238 = UINT8_MAX;
volatile int32_t t91 = 120429;
int32_t x4258 = -23030;
int64_t x4269 = INT64_MIN;


void f0(void) {
    	uint8_t x5 = 15U;
	int64_t x6 = -346527LL;
	uint8_t x8 = 21U;
	volatile int32_t t0 = 7579;

    t0 = ((x5*(x6>x7))<<x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x51 = INT32_MIN;
	static int32_t t1 = -75;

    t1 = ((x49*(x50>x51))<<x52);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MIN;
	uint16_t x79 = 2213U;
	static volatile uint8_t x80 = 0U;
	static uint64_t t2 = 406577540LLU;

    t2 = ((x77*(x78>x79))<<x80);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x85 = 16914966097650LLU;
	int64_t x86 = 1037252302024LL;
	uint8_t x88 = 12U;

    t3 = ((x85*(x86>x87))<<x88);

    if (t3 != 69283701135974400LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x142 = INT8_MIN;
	int16_t x144 = 8;
	volatile int64_t t4 = 87319461378024844LL;

    t4 = ((x141*(x142>x143))<<x144);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x181 = 29777070467533272LLU;
	int8_t x182 = 1;
	uint32_t x183 = 145U;
	uint8_t x184 = 1U;
	volatile uint64_t t5 = 8679591718309224726LLU;

    t5 = ((x181*(x182>x183))<<x184);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x337 = 1;
	uint16_t x338 = 1U;
	int64_t x339 = INT64_MIN;
	volatile uint64_t x340 = 14LLU;
	static int32_t t6 = 296144768;

    t6 = ((x337*(x338>x339))<<x340);

    if (t6 != 16384) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x389 = 50;
	int32_t x390 = 1040077731;
	int32_t x391 = INT32_MIN;

    t7 = ((x389*(x390>x391))<<x392);

    if (t7 != 400) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x573 = 2U;
	volatile uint8_t x575 = 38U;
	static uint8_t x576 = 3U;
	volatile int32_t t8 = 120;

    t8 = ((x573*(x574>x575))<<x576);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x729 = 14U;
	int64_t x730 = INT64_MIN;
	int32_t x731 = -49;
	int16_t x732 = 0;
	volatile int32_t t9 = 4;

    t9 = ((x729*(x730>x731))<<x732);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x761 = -11;
	uint64_t x763 = UINT64_MAX;
	int8_t x764 = 2;
	int32_t t10 = 90710192;

    t10 = ((x761*(x762>x763))<<x764);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x805 = INT16_MAX;
	int32_t x806 = -334680229;
	static volatile uint16_t x807 = UINT16_MAX;
	uint8_t x808 = 3U;
	static volatile int32_t t11 = 32751;

    t11 = ((x805*(x806>x807))<<x808);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x853 = 16;
	uint16_t x855 = 1931U;
	uint8_t x856 = 0U;
	int32_t t12 = -1042690;

    t12 = ((x853*(x854>x855))<<x856);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x899 = INT32_MAX;
	volatile uint8_t x900 = 3U;
	volatile int32_t t13 = -146;

    t13 = ((x897*(x898>x899))<<x900);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x978 = INT8_MIN;
	uint64_t x979 = 54326290644557LLU;
	int8_t x980 = 0;
	static volatile int32_t t14 = 130875148;

    t14 = ((x977*(x978>x979))<<x980);

    if (t14 != 12) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x1037 = 1LLU;
	int8_t x1038 = 9;
	uint64_t t15 = 435LLU;

    t15 = ((x1037*(x1038>x1039))<<x1040);

    if (t15 != 4294967296LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1065 = 5U;
	static uint64_t x1066 = 5453098090689LLU;
	int8_t x1067 = INT8_MAX;
	uint8_t x1068 = 3U;
	volatile int32_t t16 = -891;

    t16 = ((x1065*(x1066>x1067))<<x1068);

    if (t16 != 40) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x1077 = 2223U;
	uint16_t x1078 = 11U;
	volatile uint64_t x1079 = UINT64_MAX;
	uint16_t x1080 = 19U;
	int32_t t17 = -21077161;

    t17 = ((x1077*(x1078>x1079))<<x1080);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1105 = -59492;
	volatile int32_t x1106 = -1;
	uint64_t x1108 = 1LLU;
	volatile int32_t t18 = 192679;

    t18 = ((x1105*(x1106>x1107))<<x1108);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1137 = 8U;
	int32_t x1138 = INT32_MAX;
	static int16_t x1139 = INT16_MAX;
	uint16_t x1140 = 3U;
	static uint32_t t19 = 17745196U;

    t19 = ((x1137*(x1138>x1139))<<x1140);

    if (t19 != 64U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1170 = -1;
	int32_t x1171 = -1;
	uint16_t x1172 = 1U;

    t20 = ((x1169*(x1170>x1171))<<x1172);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x1205 = INT32_MIN;
	int64_t x1206 = -1LL;
	volatile int8_t x1207 = 7;
	int8_t x1208 = 2;
	int32_t t21 = 2010;

    t21 = ((x1205*(x1206>x1207))<<x1208);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x1247 = INT8_MAX;
	uint16_t x1248 = 4U;
	static volatile int32_t t22 = 1;

    t22 = ((x1245*(x1246>x1247))<<x1248);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1349 = 270;
	uint32_t x1350 = 46U;
	uint8_t x1352 = 0U;
	volatile int32_t t23 = 944845635;

    t23 = ((x1349*(x1350>x1351))<<x1352);

    if (t23 != 270) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1477 = 6U;
	int16_t x1478 = 0;
	uint64_t x1479 = UINT64_MAX;
	volatile int16_t x1480 = 0;
	int32_t t24 = 127232288;

    t24 = ((x1477*(x1478>x1479))<<x1480);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x1509 = UINT16_MAX;
	uint8_t x1510 = 64U;
	int16_t x1511 = -1;
	uint8_t x1512 = 3U;
	static volatile int32_t t25 = 0;

    t25 = ((x1509*(x1510>x1511))<<x1512);

    if (t25 != 524280) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1569 = INT8_MIN;
	static uint64_t x1570 = 11LLU;
	int64_t x1571 = INT64_MIN;
	uint16_t x1572 = 3U;

    t26 = ((x1569*(x1570>x1571))<<x1572);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x1573 = UINT32_MAX;
	volatile int64_t x1574 = -12133LL;
	int64_t x1575 = -1914325242846610LL;
	volatile uint32_t t27 = 3U;

    t27 = ((x1573*(x1574>x1575))<<x1576);

    if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x1597 = 61U;
	uint32_t x1598 = 7148396U;
	static int16_t x1599 = 1353;
	volatile uint16_t x1600 = 0U;
	int32_t t28 = 204710;

    t28 = ((x1597*(x1598>x1599))<<x1600);

    if (t28 != 61) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1609 = INT32_MIN;
	volatile int16_t x1610 = INT16_MIN;
	volatile int8_t x1611 = -3;
	static volatile int32_t t29 = 2491;

    t29 = ((x1609*(x1610>x1611))<<x1612);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x1637 = UINT16_MAX;
	static volatile uint8_t x1640 = 5U;
	int32_t t30 = 335;

    t30 = ((x1637*(x1638>x1639))<<x1640);

    if (t30 != 2097120) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1729 = UINT32_MAX;
	int8_t x1730 = INT8_MIN;
	volatile int64_t x1731 = -19646172008519764LL;

    t31 = ((x1729*(x1730>x1731))<<x1732);

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x1773 = INT8_MIN;
	volatile uint16_t x1774 = UINT16_MAX;

    t32 = ((x1773*(x1774>x1775))<<x1776);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1777 = 106682582512LL;
	uint8_t x1778 = 1U;
	int8_t x1779 = 0;
	uint8_t x1780 = 1U;
	int64_t t33 = -29LL;

    t33 = ((x1777*(x1778>x1779))<<x1780);

    if (t33 != 213365165024LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1785 = INT32_MIN;
	int16_t x1787 = -1;
	static int32_t t34 = -36;

    t34 = ((x1785*(x1786>x1787))<<x1788);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1793 = 1618LL;
	int16_t x1795 = -1;
	int16_t x1796 = 51;
	volatile int64_t t35 = 13751336749574588LL;

    t35 = ((x1793*(x1794>x1795))<<x1796);

    if (t35 != 3643412098542731264LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1833 = INT64_MIN;
	int16_t x1834 = 96;
	uint8_t x1835 = UINT8_MAX;
	int8_t x1836 = 2;
	volatile int64_t t36 = -115043393110074891LL;

    t36 = ((x1833*(x1834>x1835))<<x1836);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x1913 = INT32_MIN;
	int32_t x1915 = INT32_MAX;
	uint16_t x1916 = 0U;
	volatile int32_t t37 = 0;

    t37 = ((x1913*(x1914>x1915))<<x1916);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1942 = -1LL;
	volatile uint16_t x1943 = UINT16_MAX;
	int32_t t38 = 11851;

    t38 = ((x1941*(x1942>x1943))<<x1944);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1973 = -1LL;
	uint64_t x1975 = 4141374430801414367LLU;
	volatile int8_t x1976 = 49;
	volatile int64_t t39 = -16151359519LL;

    t39 = ((x1973*(x1974>x1975))<<x1976);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x2061 = 17092U;
	int16_t x2062 = 4;
	int64_t x2063 = -1LL;
	volatile uint32_t x2064 = 3U;
	int32_t t40 = 484295;

    t40 = ((x2061*(x2062>x2063))<<x2064);

    if (t40 != 136736) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2104 = 1;

    t41 = ((x2101*(x2102>x2103))<<x2104);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x2189 = UINT32_MAX;
	uint8_t x2192 = 3U;
	uint32_t t42 = 973189U;

    t42 = ((x2189*(x2190>x2191))<<x2192);

    if (t42 != 4294967288U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x2206 = 104;
	int32_t x2207 = INT32_MIN;
	volatile int32_t t43 = 2;

    t43 = ((x2205*(x2206>x2207))<<x2208);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x2273 = 197U;
	uint8_t x2274 = 11U;
	int64_t x2275 = INT64_MAX;
	uint32_t x2276 = 17U;
	static volatile uint32_t t44 = 639746158U;

    t44 = ((x2273*(x2274>x2275))<<x2276);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x2329 = 18U;
	static int64_t x2330 = INT64_MAX;
	static int8_t x2331 = -1;
	static uint32_t x2332 = 2U;

    t45 = ((x2329*(x2330>x2331))<<x2332);

    if (t45 != 72) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x2413 = INT8_MAX;
	int64_t x2414 = 8064097LL;
	volatile int64_t x2415 = -14504772659116405LL;
	uint16_t x2416 = 18U;
	volatile int32_t t46 = -1;

    t46 = ((x2413*(x2414>x2415))<<x2416);

    if (t46 != 33292288) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2477 = INT32_MIN;
	int64_t x2478 = -12092311918LL;
	int16_t x2479 = INT16_MIN;
	uint16_t x2480 = 0U;
	int32_t t47 = -72;

    t47 = ((x2477*(x2478>x2479))<<x2480);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2553 = 163042452426LLU;
	int32_t x2554 = -7820286;
	int64_t x2555 = -1LL;
	uint32_t x2556 = 17U;
	static uint64_t t48 = 284LLU;

    t48 = ((x2553*(x2554>x2555))<<x2556);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x2578 = -1;
	volatile uint8_t x2580 = 12U;
	int32_t t49 = -924584;

    t49 = ((x2577*(x2578>x2579))<<x2580);

    if (t49 != 24576) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x2581 = 230424552U;
	uint8_t x2583 = 112U;
	int8_t x2584 = 0;
	volatile uint32_t t50 = 1U;

    t50 = ((x2581*(x2582>x2583))<<x2584);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x2609 = INT64_MAX;
	int8_t x2611 = INT8_MAX;

    t51 = ((x2609*(x2610>x2611))<<x2612);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x2613 = INT8_MAX;
	int8_t x2614 = INT8_MAX;
	volatile uint8_t x2615 = 0U;
	volatile uint16_t x2616 = 7U;
	int32_t t52 = -22;

    t52 = ((x2613*(x2614>x2615))<<x2616);

    if (t52 != 16256) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x2665 = -1;
	uint32_t x2666 = 2194U;
	int32_t x2667 = INT32_MIN;
	uint8_t x2668 = 0U;

    t53 = ((x2665*(x2666>x2667))<<x2668);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x2690 = 667LL;
	uint16_t x2691 = UINT16_MAX;
	static int8_t x2692 = 7;
	volatile uint32_t t54 = 89U;

    t54 = ((x2689*(x2690>x2691))<<x2692);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x2770 = INT8_MIN;
	int16_t x2771 = INT16_MIN;
	uint8_t x2772 = 10U;
	volatile int32_t t55 = -3372736;

    t55 = ((x2769*(x2770>x2771))<<x2772);

    if (t55 != 261120) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x2801 = 85U;
	uint64_t x2802 = 188992255LLU;
	int16_t x2804 = 28;
	int32_t t56 = 431;

    t56 = ((x2801*(x2802>x2803))<<x2804);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x2809 = 55U;
	int8_t x2810 = INT8_MIN;
	static volatile uint16_t x2811 = 115U;
	volatile int8_t x2812 = 0;
	int32_t t57 = 11;

    t57 = ((x2809*(x2810>x2811))<<x2812);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x2813 = -1;
	int32_t x2814 = INT32_MIN;
	int8_t x2815 = 14;
	static uint8_t x2816 = 3U;
	int32_t t58 = 0;

    t58 = ((x2813*(x2814>x2815))<<x2816);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x2829 = 6341U;
	int8_t x2830 = -2;
	int32_t x2831 = -74977601;
	int32_t t59 = 616;

    t59 = ((x2829*(x2830>x2831))<<x2832);

    if (t59 != 1623296) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x2917 = UINT32_MAX;
	static volatile int32_t x2918 = 565;
	int32_t x2919 = 52475;
	static volatile int8_t x2920 = 24;
	uint32_t t60 = 15133U;

    t60 = ((x2917*(x2918>x2919))<<x2920);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint16_t x2934 = 563U;
	volatile int32_t t61 = 280;

    t61 = ((x2933*(x2934>x2935))<<x2936);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x3069 = 188LL;
	static int8_t x3070 = 23;
	volatile int8_t x3071 = -1;

    t62 = ((x3069*(x3070>x3071))<<x3072);

    if (t62 != 96256LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x3105 = INT16_MAX;
	int16_t x3106 = INT16_MIN;
	static int64_t x3107 = INT64_MIN;
	uint16_t x3108 = 15U;
	volatile int32_t t63 = -260755;

    t63 = ((x3105*(x3106>x3107))<<x3108);

    if (t63 != 1073709056) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x3125 = INT8_MAX;
	static volatile uint64_t x3127 = 47877517557976LLU;
	int8_t x3128 = 13;
	int32_t t64 = -378653513;

    t64 = ((x3125*(x3126>x3127))<<x3128);

    if (t64 != 1040384) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x3137 = INT8_MAX;
	uint16_t x3138 = 687U;
	uint8_t x3140 = 9U;
	int32_t t65 = 55845;

    t65 = ((x3137*(x3138>x3139))<<x3140);

    if (t65 != 65024) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3189 = -1390118267708LL;
	uint32_t x3190 = 5U;
	uint16_t x3191 = 22351U;
	static uint8_t x3192 = 10U;
	int64_t t66 = -3LL;

    t66 = ((x3189*(x3190>x3191))<<x3192);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3285 = INT16_MIN;
	volatile int32_t x3286 = -200391;
	static uint64_t x3287 = UINT64_MAX;
	int16_t x3288 = 0;
	int32_t t67 = 25;

    t67 = ((x3285*(x3286>x3287))<<x3288);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x3310 = 445U;
	uint64_t x3311 = 72998LLU;
	uint8_t x3312 = 1U;
	volatile int32_t t68 = 1;

    t68 = ((x3309*(x3310>x3311))<<x3312);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x3317 = INT64_MIN;
	int16_t x3318 = INT16_MIN;
	uint8_t x3320 = 51U;
	volatile int64_t t69 = -15520915145596577LL;

    t69 = ((x3317*(x3318>x3319))<<x3320);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x3349 = 475U;
	volatile uint64_t x3350 = 200800677242544496LLU;
	volatile int16_t x3351 = INT16_MAX;
	volatile uint8_t x3352 = 0U;
	volatile int32_t t70 = -102298959;

    t70 = ((x3349*(x3350>x3351))<<x3352);

    if (t70 != 475) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x3377 = 1711174LLU;
	int8_t x3378 = 0;
	int16_t x3379 = INT16_MIN;
	static volatile uint64_t t71 = 1316758LLU;

    t71 = ((x3377*(x3378>x3379))<<x3380);

    if (t71 != 14017937408LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x3441 = INT32_MIN;
	uint16_t x3442 = UINT16_MAX;
	uint16_t x3443 = UINT16_MAX;
	int8_t x3444 = 3;
	int32_t t72 = 49;

    t72 = ((x3441*(x3442>x3443))<<x3444);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x3657 = INT8_MAX;
	int32_t x3658 = INT32_MIN;
	int16_t x3659 = INT16_MAX;
	uint16_t x3660 = 0U;
	volatile int32_t t73 = 244;

    t73 = ((x3657*(x3658>x3659))<<x3660);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x3665 = UINT16_MAX;
	int8_t x3666 = INT8_MIN;
	uint8_t x3667 = UINT8_MAX;
	int8_t x3668 = 1;
	static volatile int32_t t74 = -2079724;

    t74 = ((x3665*(x3666>x3667))<<x3668);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x3677 = UINT64_MAX;
	static volatile int8_t x3678 = 1;
	static volatile int64_t x3679 = -320807599163272LL;
	uint16_t x3680 = 5U;
	uint64_t t75 = 340LLU;

    t75 = ((x3677*(x3678>x3679))<<x3680);

    if (t75 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x3755 = UINT64_MAX;
	static uint8_t x3756 = 13U;
	static volatile int64_t t76 = -116818979552571LL;

    t76 = ((x3753*(x3754>x3755))<<x3756);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x3777 = -13;
	volatile int8_t x3778 = 11;
	int32_t x3779 = INT32_MAX;
	uint8_t x3780 = 2U;
	static volatile int32_t t77 = -194513;

    t77 = ((x3777*(x3778>x3779))<<x3780);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x3805 = 6285;
	static uint8_t x3807 = 95U;
	volatile uint8_t x3808 = 13U;

    t78 = ((x3805*(x3806>x3807))<<x3808);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x3857 = -792;
	int32_t x3858 = INT32_MIN;
	int16_t x3859 = 0;
	volatile int32_t x3860 = 5;
	int32_t t79 = 311;

    t79 = ((x3857*(x3858>x3859))<<x3860);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x3861 = -30336537;
	volatile int64_t x3862 = -1LL;
	static int32_t x3863 = 893711;
	volatile uint8_t x3864 = 25U;
	int32_t t80 = -248;

    t80 = ((x3861*(x3862>x3863))<<x3864);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x3949 = 9330288675152LL;
	static int16_t x3950 = INT16_MAX;
	static uint64_t x3951 = 8366648623LLU;
	static uint16_t x3952 = 14U;
	int64_t t81 = -369107359569LL;

    t81 = ((x3949*(x3950>x3951))<<x3952);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x4053 = INT8_MAX;
	uint32_t x4054 = UINT32_MAX;
	int32_t x4055 = -192399054;
	uint8_t x4056 = 2U;
	volatile int32_t t82 = 34;

    t82 = ((x4053*(x4054>x4055))<<x4056);

    if (t82 != 508) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x4057 = UINT64_MAX;
	int16_t x4058 = INT16_MIN;
	volatile uint64_t x4060 = 6LLU;
	static volatile uint64_t t83 = 21344920981LLU;

    t83 = ((x4057*(x4058>x4059))<<x4060);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x4085 = UINT64_MAX;
	int16_t x4086 = -1;
	static int16_t x4087 = 1;
	static volatile uint8_t x4088 = 1U;
	uint64_t t84 = 33353LLU;

    t84 = ((x4085*(x4086>x4087))<<x4088);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x4137 = 182U;
	int16_t x4139 = -581;
	static uint8_t x4140 = 2U;
	uint32_t t85 = 1897U;

    t85 = ((x4137*(x4138>x4139))<<x4140);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t t86 = 254055982;

    t86 = ((x4145*(x4146>x4147))<<x4148);

    if (t86 != 425984) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x4161 = 0U;
	uint16_t x4162 = UINT16_MAX;
	static volatile uint32_t x4164 = 0U;
	uint32_t t87 = 20768905U;

    t87 = ((x4161*(x4162>x4163))<<x4164);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x4169 = INT64_MIN;
	int32_t x4170 = -1;
	static int64_t x4171 = -1LL;
	int16_t x4172 = 38;
	volatile int64_t t88 = 462898727770254LL;

    t88 = ((x4169*(x4170>x4171))<<x4172);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x4197 = 60647U;
	uint32_t x4198 = 86769U;
	int16_t x4199 = -1;
	static uint16_t x4200 = 0U;
	static uint32_t t89 = 16397621U;

    t89 = ((x4197*(x4198>x4199))<<x4200);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x4205 = INT64_MIN;
	static volatile int16_t x4206 = -1;
	uint8_t x4207 = 14U;
	uint16_t x4208 = 5U;
	int64_t t90 = 22278LL;

    t90 = ((x4205*(x4206>x4207))<<x4208);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x4237 = UINT8_MAX;
	int8_t x4239 = INT8_MIN;
	uint8_t x4240 = 15U;

    t91 = ((x4237*(x4238>x4239))<<x4240);

    if (t91 != 8355840) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x4249 = -42;
	uint8_t x4250 = 5U;
	static uint64_t x4251 = UINT64_MAX;
	volatile uint8_t x4252 = 28U;
	static volatile int32_t t92 = 109;

    t92 = ((x4249*(x4250>x4251))<<x4252);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x4257 = -1;
	int8_t x4259 = -15;
	uint8_t x4260 = 0U;
	volatile int32_t t93 = -9862150;

    t93 = ((x4257*(x4258>x4259))<<x4260);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x4270 = 6U;
	int16_t x4271 = 13;
	uint16_t x4272 = 53U;
	static volatile int64_t t94 = 1454607060603140295LL;

    t94 = ((x4269*(x4270>x4271))<<x4272);

    if (t94 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}

