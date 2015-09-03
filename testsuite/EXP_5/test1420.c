#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x89 = UINT8_MAX;
int8_t x106 = INT8_MIN;
int16_t x165 = INT16_MIN;
static int32_t t4 = -42492161;
int8_t x205 = -7;
int8_t x208 = 0;
uint8_t x243 = 75U;
static uint16_t x244 = 1U;
uint32_t t7 = 20676U;
static int64_t x265 = 6904039746462LL;
int16_t x268 = 0;
uint8_t x312 = 3U;
volatile uint32_t x344 = 13U;
static volatile int64_t t12 = 294321875704LL;
volatile int16_t x378 = INT16_MIN;
volatile int8_t x416 = 26;
int8_t x417 = -6;
int8_t x419 = -12;
static int8_t x473 = -1;
int32_t x475 = INT32_MIN;
volatile int32_t t19 = -569;
int16_t x542 = INT16_MIN;
int64_t x599 = INT64_MIN;
static uint8_t x640 = 1U;
static int32_t t25 = -1423;
volatile uint8_t x724 = 0U;
uint32_t x736 = 8U;
int16_t x1090 = INT16_MAX;
volatile int32_t t31 = -3682;
static int16_t x1097 = -1;
int32_t x1098 = 24584;
static uint64_t x1099 = 3489LLU;
int32_t x1142 = INT32_MAX;
int32_t t35 = 877828;
uint8_t x1269 = 11U;
static volatile int32_t x1270 = INT32_MAX;
uint64_t x1271 = 27434066786177LLU;
volatile int32_t t39 = 5030513;
static int64_t x1430 = -1LL;
static int16_t x1431 = -1;
volatile int64_t x1474 = 49883496LL;
int8_t x1476 = 2;
int8_t x1655 = INT8_MIN;
uint64_t x1662 = UINT64_MAX;
uint8_t x1664 = 0U;
int32_t t46 = -14;
uint16_t x1694 = 2176U;
volatile uint8_t x1696 = 29U;
int64_t x1797 = -35463163114984037LL;
volatile int64_t t49 = -40770780508068LL;
volatile uint64_t x1918 = UINT64_MAX;
int16_t x1919 = INT16_MAX;
volatile int16_t x2009 = INT16_MIN;
static uint64_t x2011 = UINT64_MAX;
int64_t x2025 = -1LL;
int32_t x2027 = INT32_MIN;
int8_t x2149 = INT8_MAX;
volatile uint16_t x2271 = 5U;
int32_t t60 = 1;
static volatile uint8_t x2365 = 119U;
static int32_t t61 = -19;
volatile int64_t x2395 = -1LL;
uint32_t x2396 = 4U;
int32_t x2513 = INT32_MAX;
int16_t x2519 = INT16_MIN;
int32_t x2622 = INT32_MIN;
int32_t x2665 = INT32_MIN;
uint32_t x2668 = 1U;
static uint32_t x2669 = UINT32_MAX;
uint8_t x2704 = 3U;
uint8_t x2719 = 48U;
int64_t x2797 = INT64_MAX;
static uint32_t x2799 = 162U;
uint16_t x2843 = UINT16_MAX;
int8_t x2916 = 2;
static int32_t t80 = -307386343;
int64_t x2957 = 1468LL;
int64_t t81 = 263660685777198195LL;
volatile uint16_t x3081 = 109U;
int8_t x3120 = 0;
int16_t x3162 = -6;
static int8_t x3164 = 1;
int32_t t88 = -6126;
volatile int8_t x3310 = INT8_MIN;
uint8_t x3312 = 2U;
static int8_t x3387 = INT8_MIN;
int8_t x3425 = INT8_MIN;
static uint64_t x3426 = 3654127399LLU;
static int64_t x3435 = INT64_MIN;
int32_t t94 = -471558;
static int16_t x3461 = 0;
uint64_t x3463 = 72LLU;
uint16_t x3464 = 0U;
int32_t t95 = -360740;
int16_t x3503 = INT16_MIN;
int8_t x3514 = INT8_MIN;
static volatile uint16_t x3515 = 30961U;
uint16_t x3550 = 85U;
static uint64_t x3645 = 55755603974LLU;
uint64_t x3648 = 3LLU;


void f0(void) {
	uint64_t x65 = UINT64_MAX;
	int32_t x66 = 1;
	static int8_t x67 = -1;
	uint16_t x68 = 4U;
	static volatile uint64_t t0 = 34546443599LLU;

	t0 = (x65*((x66<x67)<<x68));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x90 = INT32_MAX;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = 1U;
	static volatile int32_t t1 = 2;

	t1 = (x89*((x90<x91)<<x92));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x105 = -123732;
	volatile int16_t x107 = -1;
	volatile int8_t x108 = 0;
	volatile int32_t t2 = -1;

	t2 = (x105*((x106<x107)<<x108));

	if (t2 != -123732) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x166 = UINT64_MAX;
	static int16_t x167 = INT16_MIN;
	volatile uint64_t x168 = 0LLU;
	volatile int32_t t3 = 85446;

	t3 = (x165*((x166<x167)<<x168));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x189 = INT16_MIN;
	uint8_t x190 = 5U;
	uint16_t x191 = 4U;
	volatile uint8_t x192 = 2U;

	t4 = (x189*((x190<x191)<<x192));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x206 = -1;
	static uint8_t x207 = UINT8_MAX;
	volatile int32_t t5 = 131925182;

	t5 = (x205*((x206<x207)<<x208));

	if (t5 != -7) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x237 = 3U;
	static volatile uint64_t x238 = 6521LLU;
	int32_t x239 = INT32_MIN;
	int8_t x240 = 0;
	int32_t t6 = 870574;

	t6 = (x237*((x238<x239)<<x240));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x241 = 386U;
	static int32_t x242 = 107937354;

	t7 = (x241*((x242<x243)<<x244));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = -1;
	int64_t t8 = -4LL;

	t8 = (x265*((x266<x267)<<x268));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x297 = INT64_MAX;
	volatile int64_t x298 = 14593365035LL;
	int64_t x299 = 1959400LL;
	int8_t x300 = 1;
	int64_t t9 = 1126626330336LL;

	t9 = (x297*((x298<x299)<<x300));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x309 = 23841U;
	uint16_t x310 = 15U;
	uint16_t x311 = UINT16_MAX;
	static uint32_t t10 = 1U;

	t10 = (x309*((x310<x311)<<x312));

	if (t10 != 190728U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x317 = UINT32_MAX;
	uint64_t x318 = 4518558696259865448LLU;
	int8_t x319 = INT8_MAX;
	uint8_t x320 = 14U;
	volatile uint32_t t11 = 16U;

	t11 = (x317*((x318<x319)<<x320));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x341 = INT64_MIN;
	uint32_t x342 = UINT32_MAX;
	int32_t x343 = -1811592;

	t12 = (x341*((x342<x343)<<x344));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x345 = 3U;
	static uint64_t x346 = UINT64_MAX;
	volatile int16_t x347 = -1;
	volatile int8_t x348 = 0;
	static volatile int32_t t13 = 1390262;

	t13 = (x345*((x346<x347)<<x348));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x369 = INT16_MIN;
	int64_t x370 = INT64_MIN;
	static int8_t x371 = 3;
	uint8_t x372 = 2U;
	static volatile int32_t t14 = -1;

	t14 = (x369*((x370<x371)<<x372));

	if (t14 != -131072) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x377 = INT32_MIN;
	volatile int32_t x379 = 50853;
	uint8_t x380 = 0U;
	volatile int32_t t15 = INT32_MIN;

	t15 = (x377*((x378<x379)<<x380));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x389 = UINT8_MAX;
	static uint64_t x390 = 21775332LLU;
	uint64_t x391 = 3799371688626LLU;
	uint8_t x392 = 2U;
	int32_t t16 = -1859477;

	t16 = (x389*((x390<x391)<<x392));

	if (t16 != 1020) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x413 = -1LL;
	volatile uint16_t x414 = 4U;
	int64_t x415 = -1LL;
	int64_t t17 = -3887827524850901LL;

	t17 = (x413*((x414<x415)<<x416));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x418 = INT16_MIN;
	int8_t x420 = 1;
	volatile int32_t t18 = 0;

	t18 = (x417*((x418<x419)<<x420));

	if (t18 != -12) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x474 = 57;
	uint16_t x476 = 17U;

	t19 = (x473*((x474<x475)<<x476));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x533 = 871898847493735LLU;
	uint32_t x534 = 2125612U;
	static int16_t x535 = -1;
	uint8_t x536 = 2U;
	volatile uint64_t t20 = 0LLU;

	t20 = (x533*((x534<x535)<<x536));

	if (t20 != 3487595389974940LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x541 = 353096U;
	int8_t x543 = 10;
	int16_t x544 = 21;
	uint32_t t21 = 1226U;

	t21 = (x541*((x542<x543)<<x544));

	if (t21 != 1761607680U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x597 = INT8_MIN;
	int8_t x598 = -19;
	uint16_t x600 = 5U;
	int32_t t22 = -66988;

	t22 = (x597*((x598<x599)<<x600));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x609 = 8U;
	int32_t x610 = INT32_MAX;
	uint16_t x611 = UINT16_MAX;
	uint8_t x612 = 5U;
	int32_t t23 = 692;

	t23 = (x609*((x610<x611)<<x612));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x637 = 2U;
	int64_t x638 = INT64_MIN;
	int8_t x639 = INT8_MIN;
	int32_t t24 = -21221;

	t24 = (x637*((x638<x639)<<x640));

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x713 = -1;
	static uint64_t x714 = 137302834851569LLU;
	uint8_t x715 = 2U;
	uint8_t x716 = 12U;

	t25 = (x713*((x714<x715)<<x716));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x721 = INT16_MIN;
	volatile int8_t x722 = 5;
	uint8_t x723 = 4U;
	int32_t t26 = 3968651;

	t26 = (x721*((x722<x723)<<x724));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x733 = 120U;
	static int16_t x734 = -1;
	static int8_t x735 = INT8_MIN;
	uint32_t t27 = 1U;

	t27 = (x733*((x734<x735)<<x736));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x765 = UINT64_MAX;
	int16_t x766 = INT16_MAX;
	int64_t x767 = -1LL;
	uint16_t x768 = 0U;
	volatile uint64_t t28 = 118280666785LLU;

	t28 = (x765*((x766<x767)<<x768));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x817 = INT8_MIN;
	volatile int32_t x818 = INT32_MIN;
	volatile uint16_t x819 = 5678U;
	int8_t x820 = 24;
	int32_t t29 = INT32_MIN;

	t29 = (x817*((x818<x819)<<x820));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1061 = 1U;
	uint32_t x1062 = 20U;
	static volatile int8_t x1063 = INT8_MIN;
	static volatile uint32_t x1064 = 6U;
	volatile int32_t t30 = -9287075;

	t30 = (x1061*((x1062<x1063)<<x1064));

	if (t30 != 64) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1089 = INT8_MIN;
	static volatile uint64_t x1091 = UINT64_MAX;
	static uint8_t x1092 = 14U;

	t31 = (x1089*((x1090<x1091)<<x1092));

	if (t31 != -2097152) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1100 = 3U;
	volatile int32_t t32 = 102;

	t32 = (x1097*((x1098<x1099)<<x1100));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1121 = -827690683LL;
	uint64_t x1122 = 7079LLU;
	static int16_t x1123 = INT16_MIN;
	uint16_t x1124 = 1U;
	int64_t t33 = -1663704LL;

	t33 = (x1121*((x1122<x1123)<<x1124));

	if (t33 != -1655381366LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1141 = 3943115LLU;
	int8_t x1143 = -1;
	uint32_t x1144 = 9U;
	volatile uint64_t t34 = 190578144790LLU;

	t34 = (x1141*((x1142<x1143)<<x1144));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1181 = INT16_MIN;
	uint64_t x1182 = UINT64_MAX;
	volatile uint8_t x1183 = 40U;
	uint16_t x1184 = 0U;

	t35 = (x1181*((x1182<x1183)<<x1184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1237 = -1;
	volatile int32_t x1238 = -1;
	uint8_t x1239 = 55U;
	static uint16_t x1240 = 0U;
	volatile int32_t t36 = -111019;

	t36 = (x1237*((x1238<x1239)<<x1240));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1272 = 0U;
	volatile int32_t t37 = 23892;

	t37 = (x1269*((x1270<x1271)<<x1272));

	if (t37 != 11) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1321 = INT32_MAX;
	volatile uint64_t x1322 = UINT64_MAX;
	int16_t x1323 = 0;
	static volatile int16_t x1324 = 9;
	volatile int32_t t38 = -11224;

	t38 = (x1321*((x1322<x1323)<<x1324));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1333 = -128746;
	uint8_t x1334 = 0U;
	int8_t x1335 = INT8_MIN;
	uint16_t x1336 = 1U;

	t39 = (x1333*((x1334<x1335)<<x1336));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1405 = 4U;
	int16_t x1406 = 11;
	uint32_t x1407 = 2366896U;
	int8_t x1408 = 1;
	int32_t t40 = 3351;

	t40 = (x1405*((x1406<x1407)<<x1408));

	if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1429 = INT32_MAX;
	volatile uint8_t x1432 = 4U;
	int32_t t41 = -1840144;

	t41 = (x1429*((x1430<x1431)<<x1432));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1473 = INT64_MAX;
	volatile int8_t x1475 = -2;
	volatile int64_t t42 = -1LL;

	t42 = (x1473*((x1474<x1475)<<x1476));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1545 = 3;
	int32_t x1546 = INT32_MAX;
	int16_t x1547 = -879;
	static uint8_t x1548 = 0U;
	volatile int32_t t43 = 1;

	t43 = (x1545*((x1546<x1547)<<x1548));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x1653 = -99;
	int64_t x1654 = INT64_MAX;
	int32_t x1656 = 1;
	int32_t t44 = -28;

	t44 = (x1653*((x1654<x1655)<<x1656));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1657 = 12U;
	volatile int8_t x1658 = INT8_MAX;
	uint8_t x1659 = 1U;
	volatile uint16_t x1660 = 0U;
	int32_t t45 = -1;

	t45 = (x1657*((x1658<x1659)<<x1660));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1661 = -108371;
	int8_t x1663 = INT8_MIN;

	t46 = (x1661*((x1662<x1663)<<x1664));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1693 = UINT8_MAX;
	int32_t x1695 = -1;
	volatile int32_t t47 = -1;

	t47 = (x1693*((x1694<x1695)<<x1696));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1769 = 23U;
	int8_t x1770 = INT8_MAX;
	static int64_t x1771 = 41LL;
	static uint8_t x1772 = 10U;
	volatile int32_t t48 = 1;

	t48 = (x1769*((x1770<x1771)<<x1772));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1798 = 4336268083298585LL;
	int64_t x1799 = -12LL;
	int16_t x1800 = 5;

	t49 = (x1797*((x1798<x1799)<<x1800));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1833 = -43;
	volatile int16_t x1834 = INT16_MAX;
	uint64_t x1835 = 78LLU;
	int8_t x1836 = 27;
	static int32_t t50 = 835159;

	t50 = (x1833*((x1834<x1835)<<x1836));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1917 = INT64_MIN;
	int8_t x1920 = 13;
	volatile int64_t t51 = 0LL;

	t51 = (x1917*((x1918<x1919)<<x1920));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1993 = UINT32_MAX;
	static int8_t x1994 = 1;
	int32_t x1995 = INT32_MIN;
	static uint8_t x1996 = 1U;
	uint32_t t52 = 688354U;

	t52 = (x1993*((x1994<x1995)<<x1996));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x2010 = INT8_MIN;
	uint8_t x2012 = 2U;
	int32_t t53 = -7345;

	t53 = (x2009*((x2010<x2011)<<x2012));

	if (t53 != -131072) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2017 = INT64_MAX;
	uint8_t x2018 = 27U;
	int64_t x2019 = -3LL;
	volatile uint16_t x2020 = 5U;
	int64_t t54 = -240642299288651LL;

	t54 = (x2017*((x2018<x2019)<<x2020));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2026 = INT8_MIN;
	volatile uint32_t x2028 = 2U;
	int64_t t55 = 479363582LL;

	t55 = (x2025*((x2026<x2027)<<x2028));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x2150 = INT16_MAX;
	uint32_t x2151 = 13032U;
	static volatile uint8_t x2152 = 14U;
	volatile int32_t t56 = 1084936;

	t56 = (x2149*((x2150<x2151)<<x2152));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2169 = -14975101829LL;
	static int32_t x2170 = -1;
	int16_t x2171 = INT16_MIN;
	int8_t x2172 = 0;
	int64_t t57 = -963648910898LL;

	t57 = (x2169*((x2170<x2171)<<x2172));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2181 = 1U;
	uint16_t x2182 = 20954U;
	int8_t x2183 = -14;
	uint8_t x2184 = 0U;
	int32_t t58 = -50457;

	t58 = (x2181*((x2182<x2183)<<x2184));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2209 = 1331U;
	volatile int64_t x2210 = INT64_MIN;
	int8_t x2211 = 14;
	int16_t x2212 = 0;
	int32_t t59 = 64;

	t59 = (x2209*((x2210<x2211)<<x2212));

	if (t59 != 1331) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2269 = 181602;
	uint32_t x2270 = 174U;
	volatile uint16_t x2272 = 0U;

	t60 = (x2269*((x2270<x2271)<<x2272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2366 = 12433748LLU;
	volatile int8_t x2367 = 1;
	volatile uint64_t x2368 = 1LLU;

	t61 = (x2365*((x2366<x2367)<<x2368));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2381 = -1LL;
	uint16_t x2382 = 0U;
	volatile int64_t x2383 = -1LL;
	uint32_t x2384 = 4U;
	static volatile int64_t t62 = -53442LL;

	t62 = (x2381*((x2382<x2383)<<x2384));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2393 = INT8_MIN;
	int8_t x2394 = -1;
	int32_t t63 = -233219697;

	t63 = (x2393*((x2394<x2395)<<x2396));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2453 = -1;
	uint64_t x2454 = 2453647LLU;
	static volatile int32_t x2455 = -400924575;
	uint8_t x2456 = 4U;
	int32_t t64 = -2397252;

	t64 = (x2453*((x2454<x2455)<<x2456));

	if (t64 != -16) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x2481 = 133U;
	int8_t x2482 = -1;
	uint32_t x2483 = UINT32_MAX;
	volatile uint16_t x2484 = 5U;
	static uint32_t t65 = 16U;

	t65 = (x2481*((x2482<x2483)<<x2484));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2514 = 16U;
	int32_t x2515 = INT32_MIN;
	int8_t x2516 = 1;
	volatile int32_t t66 = -73264;

	t66 = (x2513*((x2514<x2515)<<x2516));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2517 = -1;
	uint8_t x2518 = UINT8_MAX;
	static uint64_t x2520 = 0LLU;
	int32_t t67 = -1878919;

	t67 = (x2517*((x2518<x2519)<<x2520));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2545 = 484;
	int16_t x2546 = 730;
	uint32_t x2547 = UINT32_MAX;
	uint16_t x2548 = 1U;
	volatile int32_t t68 = 21;

	t68 = (x2545*((x2546<x2547)<<x2548));

	if (t68 != 968) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x2621 = INT8_MIN;
	static volatile int32_t x2623 = 25067113;
	int8_t x2624 = 14;
	static volatile int32_t t69 = 1943;

	t69 = (x2621*((x2622<x2623)<<x2624));

	if (t69 != -2097152) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2666 = -1LL;
	static int32_t x2667 = INT32_MIN;
	volatile int32_t t70 = 51708137;

	t70 = (x2665*((x2666<x2667)<<x2668));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x2670 = UINT8_MAX;
	int32_t x2671 = INT32_MIN;
	int32_t x2672 = 1;
	volatile uint32_t t71 = 3941U;

	t71 = (x2669*((x2670<x2671)<<x2672));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2701 = INT8_MAX;
	int16_t x2702 = INT16_MIN;
	int8_t x2703 = INT8_MIN;
	volatile int32_t t72 = -3028707;

	t72 = (x2701*((x2702<x2703)<<x2704));

	if (t72 != 1016) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x2705 = 5696U;
	int16_t x2706 = INT16_MAX;
	volatile int64_t x2707 = -1LL;
	int8_t x2708 = 25;
	static volatile int32_t t73 = -305;

	t73 = (x2705*((x2706<x2707)<<x2708));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2717 = -1;
	int32_t x2718 = INT32_MIN;
	int8_t x2720 = 2;
	volatile int32_t t74 = -69152;

	t74 = (x2717*((x2718<x2719)<<x2720));

	if (t74 != -4) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2798 = 121117;
	volatile uint32_t x2800 = 6U;
	int64_t t75 = -2LL;

	t75 = (x2797*((x2798<x2799)<<x2800));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x2841 = INT16_MIN;
	uint32_t x2842 = 43507301U;
	volatile uint32_t x2844 = 31U;
	volatile int32_t t76 = 859767444;

	t76 = (x2841*((x2842<x2843)<<x2844));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2853 = UINT8_MAX;
	uint32_t x2854 = UINT32_MAX;
	uint32_t x2855 = 30663U;
	uint32_t x2856 = 1U;
	volatile int32_t t77 = 148;

	t77 = (x2853*((x2854<x2855)<<x2856));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2909 = -1;
	int32_t x2910 = 907926;
	uint32_t x2911 = 1520U;
	uint32_t x2912 = 2U;
	volatile int32_t t78 = 0;

	t78 = (x2909*((x2910<x2911)<<x2912));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2913 = -371454027LL;
	static uint64_t x2914 = UINT64_MAX;
	int8_t x2915 = -1;
	static volatile int64_t t79 = 4406714553472627LL;

	t79 = (x2913*((x2914<x2915)<<x2916));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2929 = 308U;
	int64_t x2930 = INT64_MIN;
	int16_t x2931 = -8;
	uint64_t x2932 = 0LLU;

	t80 = (x2929*((x2930<x2931)<<x2932));

	if (t80 != 308) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2958 = UINT16_MAX;
	static uint8_t x2959 = 14U;
	uint8_t x2960 = 3U;

	t81 = (x2957*((x2958<x2959)<<x2960));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x2965 = INT32_MIN;
	static int8_t x2966 = -1;
	uint64_t x2967 = 12351LLU;
	uint16_t x2968 = 3U;
	int32_t t82 = 741849;

	t82 = (x2965*((x2966<x2967)<<x2968));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3082 = 6LLU;
	uint32_t x3083 = 17U;
	uint8_t x3084 = 0U;
	volatile int32_t t83 = -154263;

	t83 = (x3081*((x3082<x3083)<<x3084));

	if (t83 != 109) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3117 = 11;
	int8_t x3118 = INT8_MIN;
	uint16_t x3119 = UINT16_MAX;
	static int32_t t84 = -58695956;

	t84 = (x3117*((x3118<x3119)<<x3120));

	if (t84 != 11) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3121 = -31;
	int8_t x3122 = INT8_MAX;
	int8_t x3123 = INT8_MIN;
	uint32_t x3124 = 2U;
	int32_t t85 = 1;

	t85 = (x3121*((x3122<x3123)<<x3124));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x3161 = UINT64_MAX;
	uint32_t x3163 = UINT32_MAX;
	volatile uint64_t t86 = 402388558357264LLU;

	t86 = (x3161*((x3162<x3163)<<x3164));

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3249 = 0U;
	static int8_t x3250 = INT8_MAX;
	volatile uint16_t x3251 = 69U;
	volatile int16_t x3252 = 1;
	int32_t t87 = -35287885;

	t87 = (x3249*((x3250<x3251)<<x3252));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x3277 = -2;
	int32_t x3278 = INT32_MIN;
	uint32_t x3279 = 4U;
	uint8_t x3280 = 19U;

	t88 = (x3277*((x3278<x3279)<<x3280));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3309 = 6119U;
	static uint64_t x3311 = 978LLU;
	int32_t t89 = 12970176;

	t89 = (x3309*((x3310<x3311)<<x3312));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3361 = UINT32_MAX;
	volatile int64_t x3362 = 120883233453053361LL;
	int64_t x3363 = INT64_MIN;
	int16_t x3364 = 1;
	uint32_t t90 = 2166227U;

	t90 = (x3361*((x3362<x3363)<<x3364));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3385 = -407;
	int64_t x3386 = INT64_MAX;
	uint8_t x3388 = 28U;
	int32_t t91 = -6994160;

	t91 = (x3385*((x3386<x3387)<<x3388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3427 = -10;
	uint16_t x3428 = 0U;
	int32_t t92 = -45;

	t92 = (x3425*((x3426<x3427)<<x3428));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x3433 = INT32_MAX;
	int64_t x3434 = -2344305641LL;
	volatile uint8_t x3436 = 12U;
	volatile int32_t t93 = -770196;

	t93 = (x3433*((x3434<x3435)<<x3436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3457 = 810171;
	uint32_t x3458 = UINT32_MAX;
	int32_t x3459 = INT32_MAX;
	int8_t x3460 = 0;

	t94 = (x3457*((x3458<x3459)<<x3460));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3462 = 0LLU;

	t95 = (x3461*((x3462<x3463)<<x3464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3501 = INT32_MIN;
	int64_t x3502 = INT64_MAX;
	uint8_t x3504 = 12U;
	int32_t t96 = 24799833;

	t96 = (x3501*((x3502<x3503)<<x3504));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3513 = 60860388U;
	uint8_t x3516 = 8U;
	static volatile uint32_t t97 = 8856U;

	t97 = (x3513*((x3514<x3515)<<x3516));

	if (t97 != 2695357440U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x3549 = 3933984799552705LLU;
	uint16_t x3551 = UINT16_MAX;
	int16_t x3552 = 2;
	uint64_t t98 = 1004120LLU;

	t98 = (x3549*((x3550<x3551)<<x3552));

	if (t98 != 15735939198210820LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x3646 = INT16_MIN;
	uint16_t x3647 = 74U;
	static volatile uint64_t t99 = 3698380LLU;

	t99 = (x3645*((x3646<x3647)<<x3648));

	if (t99 != 446044831792LLU) { NG(); } else { ; }
	
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

