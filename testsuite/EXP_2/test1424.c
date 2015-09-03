#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 4;
uint64_t x242 = 21192LLU;
uint8_t x243 = UINT8_MAX;
static int32_t t5 = 121;
int16_t x565 = 4792;
uint8_t x568 = 7U;
static int32_t t7 = 2647;
uint32_t x595 = 1281114U;
static volatile int32_t x667 = INT32_MIN;
uint32_t t11 = 14U;
static uint16_t x951 = 829U;
volatile uint8_t x952 = 23U;
uint32_t x960 = 1U;
volatile int16_t x965 = 0;
int64_t x1087 = INT64_MAX;
uint64_t x1089 = UINT64_MAX;
static uint64_t t18 = 164695955LLU;
int32_t x1146 = -1;
uint8_t x1148 = 30U;
uint16_t x1159 = 1961U;
uint32_t x1160 = 1U;
uint32_t t21 = 23U;
uint8_t x1437 = 0U;
uint8_t x1440 = 14U;
uint8_t x1553 = UINT8_MAX;
volatile int16_t x1585 = 176;
static int16_t x1587 = -5;
static volatile uint8_t x1588 = 0U;
static int64_t x1661 = 1131LL;
static volatile int32_t t29 = -14606126;
int8_t x1992 = 1;
uint32_t x2038 = 130876U;
uint8_t x2040 = 4U;
int32_t x2071 = -1;
int64_t x2233 = 386592LL;
int32_t x2234 = 2900379;
volatile uint16_t x2253 = 35U;
uint8_t x2328 = 24U;
uint32_t x2466 = UINT32_MAX;
volatile int64_t t41 = -818LL;
int16_t x2470 = INT16_MIN;
static uint64_t x2573 = UINT64_MAX;
int64_t x2575 = INT64_MAX;
static uint32_t x2693 = 2U;
volatile int16_t x2695 = INT16_MIN;
volatile int64_t x2727 = -21103586813LL;
uint8_t x2737 = UINT8_MAX;
int64_t x2743 = INT64_MIN;
volatile int32_t x2966 = INT32_MAX;
static volatile uint32_t x3085 = 40U;
int8_t x3088 = 1;
uint32_t x3093 = 13751294U;
int16_t x3095 = -1;
uint16_t x3249 = 48U;
uint32_t x3390 = 47935U;
uint8_t x3392 = 0U;
static int64_t x3433 = 3735486LL;
static int8_t x3435 = INT8_MIN;
uint32_t x3585 = 5U;
volatile uint32_t t61 = 383318874U;
uint32_t x3843 = 317019U;
static volatile int32_t x3854 = -663;
static int32_t x3856 = 14;
uint16_t x4013 = 6435U;
int64_t x4015 = 0LL;
uint32_t x4169 = 4239920U;
uint16_t x4170 = UINT16_MAX;
volatile int8_t x4214 = INT8_MAX;
uint16_t x4596 = 25U;
int8_t x4710 = 3;
uint64_t x4711 = 192181LLU;
int8_t x4712 = 14;
static uint8_t x4872 = 7U;
volatile int32_t t83 = -761543516;
int32_t t84 = 42;
static int8_t x5130 = 1;
uint32_t t89 = 2026U;
int32_t t90 = 10;
uint32_t x5193 = 151877232U;
int16_t x5276 = 0;
uint64_t x5389 = 2261737968137028827LLU;
static int32_t x5391 = INT32_MIN;
uint64_t t95 = 228035868430272766LLU;
volatile int16_t x5490 = -27;
volatile uint32_t t97 = 97U;
int16_t x5615 = 4915;
int8_t x5672 = 1;


void f0(void) {
	int8_t x45 = INT8_MAX;
	int64_t x46 = -298890176LL;
	int16_t x47 = INT16_MIN;
	static uint8_t x48 = 3U;

	t0 = ((x45<<(x46<x47))>>x48);

	if (t0 != 31) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x237 = 2;
	static int16_t x238 = INT16_MAX;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = 4;
	int32_t t1 = 59;

	t1 = ((x237<<(x238<x239))>>x240);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x241 = 28;
	int8_t x244 = 0;
	volatile int32_t t2 = -48;

	t2 = ((x241<<(x242<x243))>>x244);

	if (t2 != 28) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x257 = UINT64_MAX;
	int16_t x258 = -14310;
	int32_t x259 = INT32_MAX;
	static int8_t x260 = 5;
	static volatile uint64_t t3 = 1590904573970808859LLU;

	t3 = ((x257<<(x258<x259))>>x260);

	if (t3 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x293 = 10;
	static int16_t x294 = -1;
	int64_t x295 = INT64_MIN;
	int16_t x296 = 1;
	int32_t t4 = -390671;

	t4 = ((x293<<(x294<x295))>>x296);

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x405 = INT16_MAX;
	int8_t x406 = INT8_MAX;
	static volatile int64_t x407 = INT64_MAX;
	static uint8_t x408 = 5U;

	t5 = ((x405<<(x406<x407))>>x408);

	if (t5 != 2047) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x465 = UINT64_MAX;
	int8_t x466 = INT8_MIN;
	volatile int16_t x467 = 959;
	uint8_t x468 = 6U;
	uint64_t t6 = 1426LLU;

	t6 = ((x465<<(x466<x467))>>x468);

	if (t6 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x566 = INT8_MIN;
	static int16_t x567 = 798;

	t7 = ((x565<<(x566<x567))>>x568);

	if (t7 != 74) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x593 = 31U;
	uint16_t x594 = 13U;
	int8_t x596 = 11;
	int32_t t8 = 3933;

	t8 = ((x593<<(x594<x595))>>x596);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x665 = 9;
	static volatile int64_t x666 = INT64_MIN;
	uint8_t x668 = 6U;
	int32_t t9 = 38449684;

	t9 = ((x665<<(x666<x667))>>x668);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x677 = INT64_MAX;
	int32_t x678 = INT32_MAX;
	int16_t x679 = INT16_MIN;
	int16_t x680 = 1;
	volatile int64_t t10 = 109290LL;

	t10 = ((x677<<(x678<x679))>>x680);

	if (t10 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x685 = UINT32_MAX;
	volatile int8_t x686 = 0;
	uint64_t x687 = 2836627890656LLU;
	uint8_t x688 = 15U;

	t11 = ((x685<<(x686<x687))>>x688);

	if (t11 != 131071U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x689 = 525U;
	static uint8_t x690 = UINT8_MAX;
	int8_t x691 = INT8_MIN;
	uint32_t x692 = 30U;
	volatile uint32_t t12 = 61235U;

	t12 = ((x689<<(x690<x691))>>x692);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x885 = 10193266;
	uint32_t x886 = 335950U;
	static int32_t x887 = INT32_MIN;
	volatile int16_t x888 = 2;
	volatile int32_t t13 = -83;

	t13 = ((x885<<(x886<x887))>>x888);

	if (t13 != 5096633) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x949 = 232LL;
	int8_t x950 = -1;
	int64_t t14 = -7791LL;

	t14 = ((x949<<(x950<x951))>>x952);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x957 = 31U;
	volatile int64_t x958 = INT64_MAX;
	static uint32_t x959 = 15660467U;
	volatile int32_t t15 = 25375;

	t15 = ((x957<<(x958<x959))>>x960);

	if (t15 != 15) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x966 = -140145761LL;
	int8_t x967 = INT8_MIN;
	int32_t x968 = 3;
	volatile int32_t t16 = -14504;

	t16 = ((x965<<(x966<x967))>>x968);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1085 = UINT16_MAX;
	int32_t x1086 = -1;
	static volatile uint8_t x1088 = 0U;
	volatile int32_t t17 = -51913;

	t17 = ((x1085<<(x1086<x1087))>>x1088);

	if (t17 != 131070) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1090 = INT16_MAX;
	int16_t x1091 = -1;
	volatile uint64_t x1092 = 8LLU;

	t18 = ((x1089<<(x1090<x1091))>>x1092);

	if (t18 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1117 = 2U;
	static volatile uint32_t x1118 = 543737U;
	volatile uint64_t x1119 = UINT64_MAX;
	volatile uint8_t x1120 = 30U;
	volatile int32_t t19 = 234637985;

	t19 = ((x1117<<(x1118<x1119))>>x1120);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1145 = 470702LLU;
	int16_t x1147 = INT16_MIN;
	uint64_t t20 = 4LLU;

	t20 = ((x1145<<(x1146<x1147))>>x1148);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1157 = UINT32_MAX;
	int32_t x1158 = 1967134;

	t21 = ((x1157<<(x1158<x1159))>>x1160);

	if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1221 = UINT16_MAX;
	volatile uint64_t x1222 = 13038194618095216LLU;
	int8_t x1223 = 1;
	uint8_t x1224 = 13U;
	int32_t t22 = 7389;

	t22 = ((x1221<<(x1222<x1223))>>x1224);

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1373 = INT64_MAX;
	int64_t x1374 = -1LL;
	volatile int64_t x1375 = -142394573264LL;
	int64_t x1376 = 15LL;
	volatile int64_t t23 = 73828321681254LL;

	t23 = ((x1373<<(x1374<x1375))>>x1376);

	if (t23 != 281474976710655LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1438 = INT32_MIN;
	int32_t x1439 = 148696182;
	static int32_t t24 = -51317066;

	t24 = ((x1437<<(x1438<x1439))>>x1440);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1554 = 657;
	static int16_t x1555 = INT16_MIN;
	int64_t x1556 = 21LL;
	volatile int32_t t25 = -21;

	t25 = ((x1553<<(x1554<x1555))>>x1556);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1586 = 1773;
	int32_t t26 = -1679980;

	t26 = ((x1585<<(x1586<x1587))>>x1588);

	if (t26 != 176) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1662 = 26914545U;
	uint8_t x1663 = 32U;
	uint8_t x1664 = 2U;
	volatile int64_t t27 = -488841113LL;

	t27 = ((x1661<<(x1662<x1663))>>x1664);

	if (t27 != 282LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1829 = 34U;
	int32_t x1830 = INT32_MIN;
	int8_t x1831 = -42;
	uint32_t x1832 = 21U;
	volatile int32_t t28 = -718069640;

	t28 = ((x1829<<(x1830<x1831))>>x1832);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x1957 = 1000U;
	int64_t x1958 = -1LL;
	int32_t x1959 = -1;
	static int8_t x1960 = 0;

	t29 = ((x1957<<(x1958<x1959))>>x1960);

	if (t29 != 1000) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1969 = 82U;
	int32_t x1970 = 1;
	int16_t x1971 = INT16_MAX;
	int8_t x1972 = 12;
	int32_t t30 = -126;

	t30 = ((x1969<<(x1970<x1971))>>x1972);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1989 = 79695710;
	int16_t x1990 = INT16_MIN;
	int16_t x1991 = INT16_MIN;
	static int32_t t31 = 0;

	t31 = ((x1989<<(x1990<x1991))>>x1992);

	if (t31 != 39847855) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x2037 = 0;
	int16_t x2039 = INT16_MIN;
	static volatile int32_t t32 = -6;

	t32 = ((x2037<<(x2038<x2039))>>x2040);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2069 = INT64_MAX;
	int8_t x2070 = INT8_MAX;
	int16_t x2072 = 5;
	volatile int64_t t33 = 346073LL;

	t33 = ((x2069<<(x2070<x2071))>>x2072);

	if (t33 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2129 = 4;
	int32_t x2130 = INT32_MIN;
	uint8_t x2131 = UINT8_MAX;
	volatile int16_t x2132 = 27;
	int32_t t34 = 15028517;

	t34 = ((x2129<<(x2130<x2131))>>x2132);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2235 = 211898052U;
	int8_t x2236 = 12;
	volatile int64_t t35 = 4239141755263LL;

	t35 = ((x2233<<(x2234<x2235))>>x2236);

	if (t35 != 188LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x2254 = -1LL;
	int16_t x2255 = 376;
	uint64_t x2256 = 5LLU;
	volatile int32_t t36 = 4016;

	t36 = ((x2253<<(x2254<x2255))>>x2256);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2277 = 31220114686LL;
	uint8_t x2278 = 0U;
	int32_t x2279 = INT32_MIN;
	int8_t x2280 = 1;
	int64_t t37 = 131330LL;

	t37 = ((x2277<<(x2278<x2279))>>x2280);

	if (t37 != 15610057343LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x2325 = UINT16_MAX;
	static uint32_t x2326 = 1880176704U;
	int8_t x2327 = INT8_MAX;
	volatile int32_t t38 = 27;

	t38 = ((x2325<<(x2326<x2327))>>x2328);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2393 = UINT32_MAX;
	int64_t x2394 = INT64_MAX;
	int16_t x2395 = -1;
	static uint8_t x2396 = 4U;
	volatile uint32_t t39 = 16471992U;

	t39 = ((x2393<<(x2394<x2395))>>x2396);

	if (t39 != 268435455U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2421 = UINT8_MAX;
	int32_t x2422 = INT32_MAX;
	int16_t x2423 = -1;
	static uint8_t x2424 = 28U;
	volatile int32_t t40 = 2125802;

	t40 = ((x2421<<(x2422<x2423))>>x2424);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2465 = 62828078281795LL;
	uint8_t x2467 = 11U;
	uint8_t x2468 = 3U;

	t41 = ((x2465<<(x2466<x2467))>>x2468);

	if (t41 != 7853509785224LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x2469 = UINT32_MAX;
	int32_t x2471 = -1513;
	uint8_t x2472 = 0U;
	uint32_t t42 = 24663926U;

	t42 = ((x2469<<(x2470<x2471))>>x2472);

	if (t42 != 4294967294U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x2574 = -217377LL;
	static volatile int8_t x2576 = 29;
	volatile uint64_t t43 = 2022777206752LLU;

	t43 = ((x2573<<(x2574<x2575))>>x2576);

	if (t43 != 34359738367LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2657 = 1U;
	volatile int8_t x2658 = 4;
	volatile uint16_t x2659 = 32059U;
	uint16_t x2660 = 7U;
	uint32_t t44 = 5559848U;

	t44 = ((x2657<<(x2658<x2659))>>x2660);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2694 = INT16_MAX;
	volatile uint8_t x2696 = 1U;
	uint32_t t45 = 167U;

	t45 = ((x2693<<(x2694<x2695))>>x2696);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2725 = 4U;
	int32_t x2726 = 1;
	volatile int8_t x2728 = 29;
	volatile int32_t t46 = -693408288;

	t46 = ((x2725<<(x2726<x2727))>>x2728);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2738 = 11;
	int16_t x2739 = INT16_MIN;
	volatile int8_t x2740 = 0;
	volatile int32_t t47 = 45055;

	t47 = ((x2737<<(x2738<x2739))>>x2740);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2741 = 27;
	int32_t x2742 = -1;
	int8_t x2744 = 1;
	static int32_t t48 = 986955;

	t48 = ((x2741<<(x2742<x2743))>>x2744);

	if (t48 != 13) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2753 = 1870360157016013LL;
	uint32_t x2754 = UINT32_MAX;
	uint64_t x2755 = 217696LLU;
	int8_t x2756 = 0;
	int64_t t49 = 1383563962LL;

	t49 = ((x2753<<(x2754<x2755))>>x2756);

	if (t49 != 1870360157016013LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2825 = UINT16_MAX;
	int16_t x2826 = INT16_MIN;
	uint32_t x2827 = UINT32_MAX;
	static int8_t x2828 = 5;
	static volatile int32_t t50 = 81;

	t50 = ((x2825<<(x2826<x2827))>>x2828);

	if (t50 != 4095) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2917 = UINT64_MAX;
	static uint16_t x2918 = 6U;
	int8_t x2919 = INT8_MAX;
	static volatile uint16_t x2920 = 10U;
	uint64_t t51 = 30411LLU;

	t51 = ((x2917<<(x2918<x2919))>>x2920);

	if (t51 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2965 = INT16_MAX;
	int8_t x2967 = -24;
	uint8_t x2968 = 13U;
	volatile int32_t t52 = 104484987;

	t52 = ((x2965<<(x2966<x2967))>>x2968);

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2973 = UINT16_MAX;
	volatile int8_t x2974 = INT8_MAX;
	uint16_t x2975 = 3U;
	uint8_t x2976 = 15U;
	int32_t t53 = 58;

	t53 = ((x2973<<(x2974<x2975))>>x2976);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3086 = 0;
	int16_t x3087 = INT16_MIN;
	volatile uint32_t t54 = 1420416295U;

	t54 = ((x3085<<(x3086<x3087))>>x3088);

	if (t54 != 20U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3094 = UINT32_MAX;
	int8_t x3096 = 0;
	static volatile uint32_t t55 = 1815U;

	t55 = ((x3093<<(x3094<x3095))>>x3096);

	if (t55 != 13751294U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3109 = INT32_MAX;
	uint8_t x3110 = 92U;
	int8_t x3111 = INT8_MIN;
	uint16_t x3112 = 19U;
	int32_t t56 = -14286;

	t56 = ((x3109<<(x3110<x3111))>>x3112);

	if (t56 != 4095) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3145 = UINT32_MAX;
	uint32_t x3146 = 54219U;
	static uint16_t x3147 = 3U;
	int8_t x3148 = 6;
	volatile uint32_t t57 = 2U;

	t57 = ((x3145<<(x3146<x3147))>>x3148);

	if (t57 != 67108863U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3250 = UINT8_MAX;
	uint8_t x3251 = 15U;
	uint8_t x3252 = 0U;
	int32_t t58 = 6039;

	t58 = ((x3249<<(x3250<x3251))>>x3252);

	if (t58 != 48) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3389 = INT16_MAX;
	volatile uint64_t x3391 = 2LLU;
	volatile int32_t t59 = -19752;

	t59 = ((x3389<<(x3390<x3391))>>x3392);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3434 = 14537667U;
	uint8_t x3436 = 30U;
	static int64_t t60 = -3312LL;

	t60 = ((x3433<<(x3434<x3435))>>x3436);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3586 = 304698U;
	int8_t x3587 = INT8_MAX;
	uint16_t x3588 = 15U;

	t61 = ((x3585<<(x3586<x3587))>>x3588);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3653 = 12U;
	volatile uint32_t x3654 = 430343210U;
	int8_t x3655 = INT8_MIN;
	static int32_t x3656 = 3;
	volatile int32_t t62 = -171;

	t62 = ((x3653<<(x3654<x3655))>>x3656);

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3729 = 150597337;
	int16_t x3730 = INT16_MIN;
	uint32_t x3731 = 954694036U;
	int8_t x3732 = 5;
	volatile int32_t t63 = -15138;

	t63 = ((x3729<<(x3730<x3731))>>x3732);

	if (t63 != 4706166) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3769 = 989U;
	static int64_t x3770 = -1LL;
	int64_t x3771 = 821575417LL;
	volatile uint8_t x3772 = 0U;
	volatile uint32_t t64 = 1U;

	t64 = ((x3769<<(x3770<x3771))>>x3772);

	if (t64 != 1978U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x3841 = 18370477094LLU;
	uint8_t x3842 = 88U;
	int16_t x3844 = 7;
	uint64_t t65 = 104501158941201LLU;

	t65 = ((x3841<<(x3842<x3843))>>x3844);

	if (t65 != 287038704LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3853 = 600813U;
	int32_t x3855 = INT32_MIN;
	uint32_t t66 = 4694U;

	t66 = ((x3853<<(x3854<x3855))>>x3856);

	if (t66 != 36U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x3893 = 1U;
	static int16_t x3894 = -15351;
	uint64_t x3895 = 362355595058114LLU;
	int8_t x3896 = 20;
	volatile uint32_t t67 = 110533958U;

	t67 = ((x3893<<(x3894<x3895))>>x3896);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x4009 = 1;
	int64_t x4010 = -1LL;
	int64_t x4011 = -1LL;
	uint32_t x4012 = 0U;
	int32_t t68 = 526;

	t68 = ((x4009<<(x4010<x4011))>>x4012);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4014 = INT32_MIN;
	uint8_t x4016 = 18U;
	volatile int32_t t69 = -429;

	t69 = ((x4013<<(x4014<x4015))>>x4016);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4017 = 5899U;
	int16_t x4018 = INT16_MAX;
	int32_t x4019 = INT32_MAX;
	int16_t x4020 = 1;
	static volatile int32_t t70 = -333;

	t70 = ((x4017<<(x4018<x4019))>>x4020);

	if (t70 != 5899) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x4041 = 13U;
	int16_t x4042 = INT16_MIN;
	static int32_t x4043 = INT32_MIN;
	volatile int16_t x4044 = 1;
	int32_t t71 = -15;

	t71 = ((x4041<<(x4042<x4043))>>x4044);

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x4081 = UINT16_MAX;
	int32_t x4082 = INT32_MIN;
	int8_t x4083 = INT8_MAX;
	volatile int32_t x4084 = 20;
	int32_t t72 = -195492;

	t72 = ((x4081<<(x4082<x4083))>>x4084);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4171 = INT8_MAX;
	static uint8_t x4172 = 15U;
	uint32_t t73 = 11281U;

	t73 = ((x4169<<(x4170<x4171))>>x4172);

	if (t73 != 129U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4213 = 37;
	static volatile int32_t x4215 = INT32_MAX;
	uint8_t x4216 = 16U;
	volatile int32_t t74 = -97189303;

	t74 = ((x4213<<(x4214<x4215))>>x4216);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4325 = UINT16_MAX;
	volatile int16_t x4326 = -1;
	int8_t x4327 = INT8_MAX;
	int8_t x4328 = 18;
	volatile int32_t t75 = -2;

	t75 = ((x4325<<(x4326<x4327))>>x4328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x4329 = UINT32_MAX;
	int32_t x4330 = INT32_MAX;
	volatile int32_t x4331 = -1;
	uint32_t x4332 = 2U;
	volatile uint32_t t76 = 2U;

	t76 = ((x4329<<(x4330<x4331))>>x4332);

	if (t76 != 1073741823U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4405 = UINT16_MAX;
	int8_t x4406 = INT8_MAX;
	int64_t x4407 = INT64_MIN;
	uint16_t x4408 = 6U;
	volatile int32_t t77 = -31946605;

	t77 = ((x4405<<(x4406<x4407))>>x4408);

	if (t77 != 1023) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4417 = 12957LL;
	uint64_t x4418 = 41403LLU;
	static int64_t x4419 = INT64_MAX;
	volatile int32_t x4420 = 1;
	int64_t t78 = 1792070266391557927LL;

	t78 = ((x4417<<(x4418<x4419))>>x4420);

	if (t78 != 12957LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x4537 = 41096;
	int16_t x4538 = INT16_MIN;
	uint64_t x4539 = UINT64_MAX;
	int16_t x4540 = 1;
	int32_t t79 = 1;

	t79 = ((x4537<<(x4538<x4539))>>x4540);

	if (t79 != 41096) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x4593 = 0U;
	int8_t x4594 = INT8_MIN;
	static int32_t x4595 = INT32_MAX;
	volatile int32_t t80 = 3912447;

	t80 = ((x4593<<(x4594<x4595))>>x4596);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4709 = 2;
	volatile int32_t t81 = -8;

	t81 = ((x4709<<(x4710<x4711))>>x4712);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4869 = 3U;
	volatile uint8_t x4870 = UINT8_MAX;
	static volatile int32_t x4871 = 28179530;
	volatile int32_t t82 = -916236210;

	t82 = ((x4869<<(x4870<x4871))>>x4872);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4889 = 13U;
	int64_t x4890 = INT64_MAX;
	int32_t x4891 = 41568;
	int32_t x4892 = 0;

	t83 = ((x4889<<(x4890<x4891))>>x4892);

	if (t83 != 13) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4941 = 51U;
	int8_t x4942 = -1;
	static int64_t x4943 = 0LL;
	uint8_t x4944 = 3U;

	t84 = ((x4941<<(x4942<x4943))>>x4944);

	if (t84 != 12) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4993 = 1613U;
	int64_t x4994 = INT64_MIN;
	volatile int64_t x4995 = -2212816903163284LL;
	volatile int64_t x4996 = 3LL;
	volatile uint32_t t85 = 8U;

	t85 = ((x4993<<(x4994<x4995))>>x4996);

	if (t85 != 403U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5005 = UINT16_MAX;
	volatile int16_t x5006 = 1;
	uint16_t x5007 = UINT16_MAX;
	static volatile uint8_t x5008 = 3U;
	volatile int32_t t86 = 1;

	t86 = ((x5005<<(x5006<x5007))>>x5008);

	if (t86 != 16383) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5109 = UINT8_MAX;
	int16_t x5110 = -1;
	int8_t x5111 = INT8_MIN;
	volatile uint8_t x5112 = 13U;
	int32_t t87 = -93821454;

	t87 = ((x5109<<(x5110<x5111))>>x5112);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5117 = UINT64_MAX;
	int8_t x5118 = INT8_MIN;
	int64_t x5119 = INT64_MIN;
	static uint64_t x5120 = 14LLU;
	volatile uint64_t t88 = 18LLU;

	t88 = ((x5117<<(x5118<x5119))>>x5120);

	if (t88 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x5129 = 126946U;
	volatile int8_t x5131 = INT8_MIN;
	uint16_t x5132 = 4U;

	t89 = ((x5129<<(x5130<x5131))>>x5132);

	if (t89 != 7934U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x5153 = 12;
	uint64_t x5154 = UINT64_MAX;
	int16_t x5155 = 125;
	static volatile int16_t x5156 = 2;

	t90 = ((x5153<<(x5154<x5155))>>x5156);

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x5194 = INT64_MAX;
	uint8_t x5195 = 1U;
	uint16_t x5196 = 0U;
	uint32_t t91 = 2060666651U;

	t91 = ((x5193<<(x5194<x5195))>>x5196);

	if (t91 != 151877232U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x5233 = 888777393U;
	volatile uint64_t x5234 = 130003519743929LLU;
	int16_t x5235 = INT16_MAX;
	uint8_t x5236 = 26U;
	uint32_t t92 = 4U;

	t92 = ((x5233<<(x5234<x5235))>>x5236);

	if (t92 != 13U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5273 = 513U;
	int64_t x5274 = INT64_MIN;
	int16_t x5275 = INT16_MAX;
	static volatile uint32_t t93 = 885256U;

	t93 = ((x5273<<(x5274<x5275))>>x5276);

	if (t93 != 1026U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5345 = INT8_MAX;
	int32_t x5346 = INT32_MIN;
	static int64_t x5347 = -4380593469250331LL;
	volatile int32_t x5348 = 26;
	int32_t t94 = -363445962;

	t94 = ((x5345<<(x5346<x5347))>>x5348);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5390 = INT16_MIN;
	uint8_t x5392 = 4U;

	t95 = ((x5389<<(x5390<x5391))>>x5392);

	if (t95 != 141358623008564301LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5489 = 5298U;
	uint16_t x5491 = 5U;
	int32_t x5492 = 1;
	static int32_t t96 = -390430466;

	t96 = ((x5489<<(x5490<x5491))>>x5492);

	if (t96 != 5298) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x5493 = 58929155U;
	uint32_t x5494 = UINT32_MAX;
	volatile int16_t x5495 = -2052;
	int32_t x5496 = 0;

	t97 = ((x5493<<(x5494<x5495))>>x5496);

	if (t97 != 58929155U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5613 = 2181;
	static int16_t x5614 = -1;
	volatile uint8_t x5616 = 19U;
	int32_t t98 = 15524;

	t98 = ((x5613<<(x5614<x5615))>>x5616);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x5669 = INT8_MAX;
	volatile uint64_t x5670 = UINT64_MAX;
	int16_t x5671 = 1418;
	static volatile int32_t t99 = -519949;

	t99 = ((x5669<<(x5670<x5671))>>x5672);

	if (t99 != 63) { NG(); } else { ; }
	
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

