#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 5U;
static volatile int64_t x156 = 2LL;
volatile int64_t x258 = INT64_MAX;
volatile uint32_t x275 = UINT32_MAX;
static int32_t t6 = -2586424;
uint8_t x768 = 5U;
int32_t t8 = 19456544;
int8_t x875 = 7;
static int32_t x876 = 15;
static uint64_t x963 = 32LLU;
uint16_t x1072 = 0U;
volatile int16_t x1102 = 0;
volatile uint8_t x1104 = 0U;
uint16_t x1210 = 3707U;
static volatile uint8_t x1270 = 59U;
static uint16_t x1272 = 7U;
volatile uint64_t t16 = 94380007LLU;
int64_t x1335 = INT64_MAX;
static int32_t t18 = -123185153;
uint32_t x1417 = 1U;
static volatile int64_t x1418 = -792418266LL;
int32_t t19 = 106;
int8_t x1436 = 1;
int32_t t20 = -1;
int32_t t23 = 0;
int8_t x1734 = INT8_MAX;
uint8_t x1740 = 2U;
static int32_t x1797 = -1;
volatile uint16_t x1799 = UINT16_MAX;
uint32_t t27 = 11014U;
uint32_t x1939 = UINT32_MAX;
volatile uint8_t x1940 = 4U;
volatile int32_t t29 = -56664;
uint64_t x2123 = 21489081LLU;
int64_t x2282 = 699873437874LL;
volatile uint32_t x2284 = 3U;
volatile int32_t t33 = -5788132;
int8_t x2337 = INT8_MIN;
int8_t x2360 = 7;
uint16_t x2616 = 16U;
static int8_t x2678 = INT8_MIN;
int8_t x2679 = INT8_MAX;
static uint64_t x2779 = 376412LLU;
volatile int8_t x2780 = 50;
volatile int16_t x2858 = -1;
static int64_t x2973 = INT64_MIN;
int32_t x2988 = 1;
uint64_t x3037 = 1076736842705192834LLU;
static uint64_t x3039 = UINT64_MAX;
int8_t x3147 = 16;
uint32_t x3261 = 1557U;
volatile int64_t x3311 = INT64_MAX;
static uint64_t x3466 = UINT64_MAX;
static int8_t x3468 = 23;
uint64_t t55 = 3644344324LLU;
uint64_t x3917 = UINT64_MAX;
int64_t x4230 = INT64_MIN;
uint8_t x4231 = 1U;
uint8_t x4241 = 0U;
volatile uint8_t x4308 = 13U;
int64_t x4341 = -1LL;
uint64_t t64 = 237LLU;
static uint16_t x4516 = 7U;
int32_t x4606 = INT32_MIN;
int8_t x4608 = 1;
uint8_t x4644 = 0U;
int32_t x4790 = -1;
uint8_t x4792 = 15U;
volatile int32_t t72 = 153;
int32_t t73 = -6;
volatile uint16_t x4900 = 0U;
static volatile int32_t t75 = -47;
int8_t x4959 = 2;
static int16_t x5193 = 210;
static int64_t x5307 = 7663LL;
int64_t t80 = 0LL;
uint8_t x5327 = UINT8_MAX;
int64_t x5402 = 1739612LL;
volatile uint64_t t83 = 183627726074604LLU;
int64_t x5455 = INT64_MAX;
uint8_t x5456 = 36U;
int32_t x5489 = INT32_MIN;
static uint64_t t85 = 368425LLU;
int64_t x5561 = 75123887454LL;
int32_t x5562 = INT32_MIN;
int32_t t86 = -260;
volatile uint64_t x5633 = UINT64_MAX;
int16_t x5634 = -176;
uint16_t x5635 = 5U;
int32_t t87 = 1249;
volatile int32_t x5647 = INT32_MAX;
int32_t x5673 = -3;
volatile uint8_t x5852 = 30U;
int16_t x5949 = INT16_MIN;
uint8_t x5950 = 25U;
static volatile uint16_t x5989 = UINT16_MAX;
static uint32_t x6002 = 16399777U;
static int16_t x6061 = -1;
uint8_t x6080 = 0U;
uint8_t x6193 = 8U;
int16_t x6194 = -1;
int32_t x6306 = -996919535;
uint8_t x6318 = 11U;


void f0(void) {
	uint64_t x5 = 7599570221670593066LLU;
	static volatile int32_t x6 = INT32_MAX;
	int64_t x7 = 930903045461594LL;
	int64_t t0 = -1LL;

	t0 = (((x5<x6)^x7)>>x8);

	if (t0 != 29090720170674LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MAX;
	static uint8_t x131 = 15U;
	uint8_t x132 = 2U;
	volatile int32_t t1 = 301282;

	t1 = (((x129<x130)^x131)>>x132);

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x153 = UINT16_MAX;
	int16_t x154 = 7254;
	static int32_t x155 = 29;
	static volatile int32_t t2 = -192009;

	t2 = (((x153<x154)^x155)>>x156);

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x257 = 30684LLU;
	int8_t x259 = 1;
	volatile uint16_t x260 = 26U;
	static int32_t t3 = -2392;

	t3 = (((x257<x258)^x259)>>x260);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x273 = -55;
	int8_t x274 = INT8_MIN;
	static uint16_t x276 = 0U;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (((x273<x274)^x275)>>x276);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x421 = 38;
	int64_t x422 = INT64_MIN;
	static uint64_t x423 = 114LLU;
	volatile uint16_t x424 = 55U;
	uint64_t t5 = 4019351617LLU;

	t5 = (((x421<x422)^x423)>>x424);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x481 = INT64_MIN;
	int16_t x482 = INT16_MIN;
	uint16_t x483 = 601U;
	static volatile int16_t x484 = 3;

	t6 = (((x481<x482)^x483)>>x484);

	if (t6 != 75) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x753 = 15671LLU;
	volatile int32_t x754 = INT32_MAX;
	uint16_t x755 = 2U;
	int16_t x756 = 0;
	volatile int32_t t7 = 634;

	t7 = (((x753<x754)^x755)>>x756);

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x765 = 3U;
	int64_t x766 = INT64_MAX;
	static int8_t x767 = INT8_MAX;

	t8 = (((x765<x766)^x767)>>x768);

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x873 = -4517191;
	int8_t x874 = INT8_MIN;
	int32_t t9 = -713;

	t9 = (((x873<x874)^x875)>>x876);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x941 = INT16_MIN;
	uint64_t x942 = 179LLU;
	int32_t x943 = 772338;
	uint16_t x944 = 4U;
	int32_t t10 = 1122;

	t10 = (((x941<x942)^x943)>>x944);

	if (t10 != 48271) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x961 = 660LLU;
	int8_t x962 = INT8_MAX;
	uint8_t x964 = 24U;
	uint64_t t11 = 1036173248696050LLU;

	t11 = (((x961<x962)^x963)>>x964);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x1069 = UINT16_MAX;
	volatile int16_t x1070 = -1;
	volatile int32_t x1071 = 91010;
	int32_t t12 = 6922159;

	t12 = (((x1069<x1070)^x1071)>>x1072);

	if (t12 != 91010) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1101 = 11;
	int32_t x1103 = 60310675;
	volatile int32_t t13 = 166491;

	t13 = (((x1101<x1102)^x1103)>>x1104);

	if (t13 != 60310675) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x1185 = 5;
	static uint8_t x1186 = 68U;
	volatile uint8_t x1187 = UINT8_MAX;
	volatile int8_t x1188 = 6;
	volatile int32_t t14 = 1;

	t14 = (((x1185<x1186)^x1187)>>x1188);

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1209 = UINT8_MAX;
	static int32_t x1211 = 450;
	int16_t x1212 = 7;
	volatile int32_t t15 = 370814440;

	t15 = (((x1209<x1210)^x1211)>>x1212);

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x1269 = 917;
	volatile uint64_t x1271 = 10706689157681LLU;

	t16 = (((x1269<x1270)^x1271)>>x1272);

	if (t16 != 83646009044LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1333 = 1U;
	uint32_t x1334 = 4U;
	static uint8_t x1336 = 1U;
	volatile int64_t t17 = -2548LL;

	t17 = (((x1333<x1334)^x1335)>>x1336);

	if (t17 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x1381 = 0U;
	static uint64_t x1382 = 8313LLU;
	uint16_t x1383 = 520U;
	uint16_t x1384 = 6U;

	t18 = (((x1381<x1382)^x1383)>>x1384);

	if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1419 = 288;
	int64_t x1420 = 0LL;

	t19 = (((x1417<x1418)^x1419)>>x1420);

	if (t19 != 288) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1433 = 26997U;
	volatile int64_t x1434 = -64254647547371346LL;
	int8_t x1435 = 11;

	t20 = (((x1433<x1434)^x1435)>>x1436);

	if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1481 = -3865LL;
	uint64_t x1482 = UINT64_MAX;
	volatile uint32_t x1483 = 2338098U;
	volatile int32_t x1484 = 7;
	uint32_t t21 = 6U;

	t21 = (((x1481<x1482)^x1483)>>x1484);

	if (t21 != 18266U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1493 = UINT32_MAX;
	int32_t x1494 = INT32_MIN;
	int32_t x1495 = 679958;
	uint8_t x1496 = 31U;
	volatile int32_t t22 = -17888;

	t22 = (((x1493<x1494)^x1495)>>x1496);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1685 = 577744888;
	static volatile uint16_t x1686 = 350U;
	int8_t x1687 = 0;
	int8_t x1688 = 1;

	t23 = (((x1685<x1686)^x1687)>>x1688);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1733 = 6208779LLU;
	static uint16_t x1735 = 219U;
	volatile uint16_t x1736 = 26U;
	int32_t t24 = -181160;

	t24 = (((x1733<x1734)^x1735)>>x1736);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1737 = 100283784U;
	int32_t x1738 = -1;
	static int16_t x1739 = 136;
	volatile int32_t t25 = 251;

	t25 = (((x1737<x1738)^x1739)>>x1740);

	if (t25 != 34) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1798 = 0;
	uint64_t x1800 = 1LLU;
	int32_t t26 = -495623;

	t26 = (((x1797<x1798)^x1799)>>x1800);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1865 = 0U;
	static int16_t x1866 = 19;
	static uint32_t x1867 = 3759025U;
	uint32_t x1868 = 1U;

	t27 = (((x1865<x1866)^x1867)>>x1868);

	if (t27 != 1879512U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1937 = UINT16_MAX;
	volatile uint32_t x1938 = UINT32_MAX;
	uint32_t t28 = 142604U;

	t28 = (((x1937<x1938)^x1939)>>x1940);

	if (t28 != 268435455U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2001 = 6312;
	uint64_t x2002 = 1419584LLU;
	int32_t x2003 = 4;
	volatile uint64_t x2004 = 0LLU;

	t29 = (((x2001<x2002)^x2003)>>x2004);

	if (t29 != 5) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2085 = -32LL;
	uint16_t x2086 = 1501U;
	uint64_t x2087 = 737LLU;
	volatile uint16_t x2088 = 12U;
	volatile uint64_t t30 = 2088973880LLU;

	t30 = (((x2085<x2086)^x2087)>>x2088);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2121 = -1;
	static uint8_t x2122 = 15U;
	uint16_t x2124 = 3U;
	volatile uint64_t t31 = 20040224LLU;

	t31 = (((x2121<x2122)^x2123)>>x2124);

	if (t31 != 2686135LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2125 = INT8_MIN;
	int8_t x2126 = INT8_MAX;
	int64_t x2127 = INT64_MAX;
	uint8_t x2128 = 27U;
	volatile int64_t t32 = -1LL;

	t32 = (((x2125<x2126)^x2127)>>x2128);

	if (t32 != 68719476735LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2281 = INT16_MAX;
	int16_t x2283 = 520;

	t33 = (((x2281<x2282)^x2283)>>x2284);

	if (t33 != 65) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x2321 = -48;
	volatile uint8_t x2322 = 1U;
	uint8_t x2323 = UINT8_MAX;
	uint16_t x2324 = 3U;
	int32_t t34 = 12;

	t34 = (((x2321<x2322)^x2323)>>x2324);

	if (t34 != 31) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2338 = -6970931LL;
	int64_t x2339 = INT64_MAX;
	int8_t x2340 = 13;
	volatile int64_t t35 = 250930562759LL;

	t35 = (((x2337<x2338)^x2339)>>x2340);

	if (t35 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2357 = INT64_MIN;
	uint32_t x2358 = 88424U;
	volatile int16_t x2359 = INT16_MAX;
	volatile int32_t t36 = -37;

	t36 = (((x2357<x2358)^x2359)>>x2360);

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2373 = INT16_MIN;
	volatile int64_t x2374 = INT64_MAX;
	static int32_t x2375 = 8341;
	uint8_t x2376 = 2U;
	int32_t t37 = 14;

	t37 = (((x2373<x2374)^x2375)>>x2376);

	if (t37 != 2085) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x2389 = INT64_MIN;
	uint64_t x2390 = 3554906980095LLU;
	static uint16_t x2391 = 1983U;
	int16_t x2392 = 0;
	volatile int32_t t38 = -17412;

	t38 = (((x2389<x2390)^x2391)>>x2392);

	if (t38 != 1983) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2613 = -1;
	uint32_t x2614 = 4201787U;
	uint32_t x2615 = 58U;
	volatile uint32_t t39 = 157274164U;

	t39 = (((x2613<x2614)^x2615)>>x2616);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2669 = INT64_MAX;
	uint8_t x2670 = 14U;
	volatile int8_t x2671 = INT8_MAX;
	uint32_t x2672 = 1U;
	volatile int32_t t40 = 2;

	t40 = (((x2669<x2670)^x2671)>>x2672);

	if (t40 != 63) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2677 = -1;
	uint8_t x2680 = 2U;
	volatile int32_t t41 = 45;

	t41 = (((x2677<x2678)^x2679)>>x2680);

	if (t41 != 31) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2769 = UINT32_MAX;
	volatile int64_t x2770 = -1LL;
	static int32_t x2771 = INT32_MAX;
	int32_t x2772 = 31;
	volatile int32_t t42 = 451;

	t42 = (((x2769<x2770)^x2771)>>x2772);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2777 = INT16_MIN;
	volatile int16_t x2778 = -511;
	volatile uint64_t t43 = 2421205485475LLU;

	t43 = (((x2777<x2778)^x2779)>>x2780);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2797 = INT64_MAX;
	int8_t x2798 = -1;
	int32_t x2799 = INT32_MAX;
	static uint32_t x2800 = 2U;
	static int32_t t44 = -77;

	t44 = (((x2797<x2798)^x2799)>>x2800);

	if (t44 != 536870911) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x2809 = 2;
	int64_t x2810 = 496LL;
	uint32_t x2811 = 2518267U;
	uint8_t x2812 = 24U;
	uint32_t t45 = 4179835U;

	t45 = (((x2809<x2810)^x2811)>>x2812);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2817 = 0U;
	volatile int8_t x2818 = INT8_MIN;
	volatile int8_t x2819 = 29;
	uint16_t x2820 = 21U;
	int32_t t46 = -112;

	t46 = (((x2817<x2818)^x2819)>>x2820);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2857 = 1122237U;
	uint64_t x2859 = 2298279989LLU;
	uint32_t x2860 = 4U;
	uint64_t t47 = 3121826349362LLU;

	t47 = (((x2857<x2858)^x2859)>>x2860);

	if (t47 != 143642499LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2974 = INT8_MIN;
	uint64_t x2975 = 27569575LLU;
	volatile uint8_t x2976 = 3U;
	uint64_t t48 = 95265LLU;

	t48 = (((x2973<x2974)^x2975)>>x2976);

	if (t48 != 3446196LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2985 = -94160704;
	int64_t x2986 = INT64_MAX;
	volatile int64_t x2987 = 16492517022900LL;
	static int64_t t49 = -43586600344LL;

	t49 = (((x2985<x2986)^x2987)>>x2988);

	if (t49 != 8246258511450LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x3038 = INT32_MIN;
	uint8_t x3040 = 25U;
	uint64_t t50 = 494048405302373LLU;

	t50 = (((x3037<x3038)^x3039)>>x3040);

	if (t50 != 549755813887LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3145 = 327137566;
	volatile int8_t x3146 = INT8_MIN;
	static int64_t x3148 = 3LL;
	int32_t t51 = 6;

	t51 = (((x3145<x3146)^x3147)>>x3148);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x3262 = -1;
	int8_t x3263 = 1;
	volatile uint64_t x3264 = 15LLU;
	static int32_t t52 = -1265912;

	t52 = (((x3261<x3262)^x3263)>>x3264);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3309 = -771LL;
	uint16_t x3310 = 12262U;
	uint16_t x3312 = 27U;
	volatile int64_t t53 = -3813197663LL;

	t53 = (((x3309<x3310)^x3311)>>x3312);

	if (t53 != 68719476735LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x3465 = 73147LLU;
	uint64_t x3467 = 441554654LLU;
	volatile uint64_t t54 = 6304999931666LLU;

	t54 = (((x3465<x3466)^x3467)>>x3468);

	if (t54 != 52LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3529 = 18U;
	uint32_t x3530 = 1029701U;
	uint64_t x3531 = UINT64_MAX;
	uint16_t x3532 = 4U;

	t55 = (((x3529<x3530)^x3531)>>x3532);

	if (t55 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x3909 = 200LL;
	int64_t x3910 = INT64_MIN;
	volatile uint64_t x3911 = UINT64_MAX;
	int16_t x3912 = 1;
	volatile uint64_t t56 = 139887879596528LLU;

	t56 = (((x3909<x3910)^x3911)>>x3912);

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3918 = -8557LL;
	static uint8_t x3919 = 18U;
	volatile uint8_t x3920 = 0U;
	volatile int32_t t57 = 285;

	t57 = (((x3917<x3918)^x3919)>>x3920);

	if (t57 != 18) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3949 = -1;
	static uint32_t x3950 = UINT32_MAX;
	int32_t x3951 = INT32_MAX;
	volatile uint16_t x3952 = 3U;
	int32_t t58 = 496659016;

	t58 = (((x3949<x3950)^x3951)>>x3952);

	if (t58 != 268435455) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4045 = -10715LL;
	volatile int32_t x4046 = -1;
	uint32_t x4047 = 30U;
	int8_t x4048 = 3;
	uint32_t t59 = 821091U;

	t59 = (((x4045<x4046)^x4047)>>x4048);

	if (t59 != 3U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x4121 = INT8_MIN;
	uint32_t x4122 = 367958568U;
	uint64_t x4123 = 2LLU;
	uint8_t x4124 = 0U;
	uint64_t t60 = 9599LLU;

	t60 = (((x4121<x4122)^x4123)>>x4124);

	if (t60 != 2LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x4229 = UINT8_MAX;
	uint8_t x4232 = 1U;
	volatile int32_t t61 = 6;

	t61 = (((x4229<x4230)^x4231)>>x4232);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x4242 = INT64_MIN;
	uint64_t x4243 = 89LLU;
	volatile int32_t x4244 = 1;
	static uint64_t t62 = 59491877535579LLU;

	t62 = (((x4241<x4242)^x4243)>>x4244);

	if (t62 != 44LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4305 = -294;
	uint16_t x4306 = 11U;
	uint8_t x4307 = 0U;
	static int32_t t63 = 23324;

	t63 = (((x4305<x4306)^x4307)>>x4308);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4342 = -1LL;
	volatile uint64_t x4343 = UINT64_MAX;
	uint8_t x4344 = 3U;

	t64 = (((x4341<x4342)^x4343)>>x4344);

	if (t64 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4513 = INT32_MAX;
	int32_t x4514 = INT32_MIN;
	uint16_t x4515 = 193U;
	static int32_t t65 = 1;

	t65 = (((x4513<x4514)^x4515)>>x4516);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4577 = -11;
	int64_t x4578 = INT64_MIN;
	int8_t x4579 = 1;
	uint16_t x4580 = 25U;
	int32_t t66 = -5935;

	t66 = (((x4577<x4578)^x4579)>>x4580);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x4581 = UINT16_MAX;
	volatile int8_t x4582 = INT8_MIN;
	static int16_t x4583 = 243;
	uint32_t x4584 = 3U;
	static volatile int32_t t67 = 24;

	t67 = (((x4581<x4582)^x4583)>>x4584);

	if (t67 != 30) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4605 = 2U;
	static uint8_t x4607 = 59U;
	int32_t t68 = 23356107;

	t68 = (((x4605<x4606)^x4607)>>x4608);

	if (t68 != 29) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4641 = -1;
	int16_t x4642 = -2841;
	volatile uint32_t x4643 = UINT32_MAX;
	uint32_t t69 = UINT32_MAX;

	t69 = (((x4641<x4642)^x4643)>>x4644);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4737 = UINT16_MAX;
	static int8_t x4738 = INT8_MIN;
	uint8_t x4739 = 0U;
	static uint8_t x4740 = 6U;
	volatile int32_t t70 = -1;

	t70 = (((x4737<x4738)^x4739)>>x4740);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x4789 = 5688;
	uint8_t x4791 = 1U;
	static int32_t t71 = -3;

	t71 = (((x4789<x4790)^x4791)>>x4792);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4793 = -61806LL;
	int16_t x4794 = INT16_MIN;
	volatile int32_t x4795 = 2134;
	uint8_t x4796 = 2U;

	t72 = (((x4793<x4794)^x4795)>>x4796);

	if (t72 != 533) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4837 = 1014853920U;
	uint64_t x4838 = 9259104970309LLU;
	int8_t x4839 = INT8_MAX;
	volatile int8_t x4840 = 1;

	t73 = (((x4837<x4838)^x4839)>>x4840);

	if (t73 != 63) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4897 = UINT32_MAX;
	uint32_t x4898 = UINT32_MAX;
	uint64_t x4899 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (((x4897<x4898)^x4899)>>x4900);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4921 = INT8_MIN;
	volatile int16_t x4922 = -1;
	int32_t x4923 = 504;
	volatile int32_t x4924 = 1;

	t75 = (((x4921<x4922)^x4923)>>x4924);

	if (t75 != 252) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x4957 = INT8_MIN;
	uint8_t x4958 = UINT8_MAX;
	uint8_t x4960 = 14U;
	volatile int32_t t76 = -7285;

	t76 = (((x4957<x4958)^x4959)>>x4960);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4977 = INT8_MIN;
	int64_t x4978 = 1131LL;
	uint8_t x4979 = 7U;
	volatile int16_t x4980 = 1;
	int32_t t77 = 1;

	t77 = (((x4977<x4978)^x4979)>>x4980);

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5194 = -1;
	uint8_t x5195 = UINT8_MAX;
	static volatile uint32_t x5196 = 2U;
	int32_t t78 = 347;

	t78 = (((x5193<x5194)^x5195)>>x5196);

	if (t78 != 63) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5293 = 68869948609LL;
	static int32_t x5294 = -1;
	uint8_t x5295 = 1U;
	uint8_t x5296 = 5U;
	int32_t t79 = 817;

	t79 = (((x5293<x5294)^x5295)>>x5296);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5305 = INT64_MIN;
	int8_t x5306 = -1;
	volatile uint8_t x5308 = 6U;

	t80 = (((x5305<x5306)^x5307)>>x5308);

	if (t80 != 119LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5325 = INT32_MIN;
	volatile int8_t x5326 = -4;
	volatile int64_t x5328 = 31LL;
	volatile int32_t t81 = -903845090;

	t81 = (((x5325<x5326)^x5327)>>x5328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x5393 = 3U;
	volatile int32_t x5394 = INT32_MIN;
	uint16_t x5395 = UINT16_MAX;
	volatile uint32_t x5396 = 2U;
	volatile int32_t t82 = 26529;

	t82 = (((x5393<x5394)^x5395)>>x5396);

	if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5401 = INT16_MIN;
	uint64_t x5403 = 32431LLU;
	static uint8_t x5404 = 31U;

	t83 = (((x5401<x5402)^x5403)>>x5404);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5453 = 3052267;
	int16_t x5454 = -1;
	volatile int64_t t84 = 94809660907532130LL;

	t84 = (((x5453<x5454)^x5455)>>x5456);

	if (t84 != 134217727LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x5490 = INT64_MAX;
	uint64_t x5491 = UINT64_MAX;
	uint8_t x5492 = 11U;

	t85 = (((x5489<x5490)^x5491)>>x5492);

	if (t85 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5563 = INT16_MAX;
	int64_t x5564 = 6LL;

	t86 = (((x5561<x5562)^x5563)>>x5564);

	if (t86 != 511) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5636 = 5U;

	t87 = (((x5633<x5634)^x5635)>>x5636);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x5645 = 1U;
	static int64_t x5646 = -1LL;
	int64_t x5648 = 1LL;
	volatile int32_t t88 = 427004600;

	t88 = (((x5645<x5646)^x5647)>>x5648);

	if (t88 != 1073741823) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x5674 = INT16_MIN;
	volatile uint16_t x5675 = UINT16_MAX;
	uint8_t x5676 = 1U;
	static int32_t t89 = -3421889;

	t89 = (((x5673<x5674)^x5675)>>x5676);

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x5849 = 0;
	uint32_t x5850 = 10477649U;
	volatile uint32_t x5851 = 26U;
	uint32_t t90 = 19644U;

	t90 = (((x5849<x5850)^x5851)>>x5852);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5951 = 46035U;
	int8_t x5952 = 23;
	volatile uint32_t t91 = 0U;

	t91 = (((x5949<x5950)^x5951)>>x5952);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x5990 = INT16_MAX;
	uint8_t x5991 = 8U;
	static uint8_t x5992 = 23U;
	int32_t t92 = -1;

	t92 = (((x5989<x5990)^x5991)>>x5992);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x6001 = -1;
	static volatile uint16_t x6003 = 10U;
	volatile uint8_t x6004 = 4U;
	int32_t t93 = 101194342;

	t93 = (((x6001<x6002)^x6003)>>x6004);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x6062 = INT64_MAX;
	static int32_t x6063 = 6968867;
	uint8_t x6064 = 0U;
	int32_t t94 = 7;

	t94 = (((x6061<x6062)^x6063)>>x6064);

	if (t94 != 6968866) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x6077 = 26020LL;
	uint32_t x6078 = UINT32_MAX;
	static int8_t x6079 = INT8_MAX;
	volatile int32_t t95 = 0;

	t95 = (((x6077<x6078)^x6079)>>x6080);

	if (t95 != 126) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6141 = 2094715826LLU;
	int64_t x6142 = INT64_MAX;
	uint8_t x6143 = UINT8_MAX;
	volatile uint8_t x6144 = 1U;
	static int32_t t96 = 107828;

	t96 = (((x6141<x6142)^x6143)>>x6144);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6195 = INT64_MAX;
	int16_t x6196 = 11;
	int64_t t97 = -4266675853LL;

	t97 = (((x6193<x6194)^x6195)>>x6196);

	if (t97 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6305 = UINT8_MAX;
	static uint32_t x6307 = UINT32_MAX;
	volatile uint8_t x6308 = 24U;
	volatile uint32_t t98 = 49U;

	t98 = (((x6305<x6306)^x6307)>>x6308);

	if (t98 != 255U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6317 = INT16_MIN;
	static int64_t x6319 = INT64_MAX;
	uint16_t x6320 = 5U;
	static int64_t t99 = 2592531687LL;

	t99 = (((x6317<x6318)^x6319)>>x6320);

	if (t99 != 288230376151711743LL) { NG(); } else { ; }
	
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

