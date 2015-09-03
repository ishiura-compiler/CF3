#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = 3;
int64_t x6 = 86504LL;
int64_t t1 = 20LL;
static uint64_t x49 = 16559LLU;
uint64_t t2 = 2359LLU;
int16_t x207 = -15254;
int32_t x208 = 0;
uint32_t t3 = 8607732U;
uint64_t t4 = 360917950440LLU;
int8_t x217 = INT8_MAX;
int32_t x341 = INT32_MIN;
uint32_t x361 = UINT32_MAX;
int64_t x362 = 69131318789023645LL;
uint64_t x383 = 74LLU;
uint64_t t11 = 517505LLU;
uint16_t x388 = 8U;
static volatile int32_t x409 = INT32_MIN;
int8_t x414 = 25;
int8_t x449 = -1;
volatile uint32_t t15 = 120U;
volatile int16_t x881 = INT16_MIN;
uint16_t x883 = UINT16_MAX;
int64_t x903 = 1911780556283LL;
int32_t x998 = 80;
uint64_t x1019 = 36765615073350LLU;
uint64_t t21 = 10625688LLU;
uint64_t t22 = 4901LLU;
int8_t x1197 = INT8_MIN;
int32_t t23 = 59247;
int64_t x1281 = INT64_MIN;
int8_t x1389 = INT8_MIN;
int8_t x1542 = INT8_MAX;
volatile uint32_t x1658 = 70U;
uint8_t x1660 = 19U;
int64_t t31 = -17721LL;
uint32_t x1734 = 810686U;
static uint8_t x1736 = 1U;
volatile uint32_t t32 = 1856U;
volatile int32_t t33 = 238;
uint32_t x1906 = UINT32_MAX;
static volatile uint32_t t36 = 16193U;
volatile int8_t x1914 = INT8_MAX;
uint8_t x1915 = 7U;
int8_t x1931 = -1;
int32_t x1994 = 3251;
uint32_t x2075 = 2U;
int8_t x2076 = 1;
uint64_t t41 = 17053LLU;
int16_t x2382 = INT16_MAX;
uint64_t x2397 = UINT64_MAX;
uint64_t x2398 = 651LLU;
int16_t x2663 = 1;
int32_t x2809 = INT32_MIN;
volatile int8_t x2810 = 29;
int16_t x2933 = INT16_MAX;
uint8_t x2972 = 1U;
static int16_t x3045 = -1;
static int8_t x3165 = INT8_MIN;
int8_t x3166 = 0;
int64_t x3290 = -7291983309LL;
uint64_t x3366 = UINT64_MAX;
int64_t x3382 = 252684969LL;
int32_t x3384 = 2;
volatile uint32_t x3418 = 426922667U;
volatile uint64_t t61 = 1559138LLU;
uint16_t x3600 = 47U;
int32_t x3679 = INT32_MAX;
volatile int32_t x3703 = 2436;
int64_t x3864 = 2LL;
volatile uint32_t t65 = 542U;
volatile int64_t x3874 = 238773906996LL;
static volatile uint8_t x3912 = 0U;
uint32_t x3922 = 288361139U;
uint8_t x3928 = 8U;
uint8_t x3950 = 56U;
volatile uint32_t t71 = 13337085U;
int64_t x3975 = -5239254381LL;
volatile uint64_t t72 = 2071620232173842695LLU;
int32_t x3994 = 1813976;
int64_t x4017 = INT64_MIN;
uint64_t x4019 = UINT64_MAX;
uint32_t x4195 = UINT32_MAX;
volatile uint32_t t76 = 2U;
static int32_t x4262 = 597;
volatile int64_t t78 = 3010634925LL;
uint16_t x4326 = UINT16_MAX;
uint32_t x4347 = 51085958U;
int64_t x4391 = -1571659LL;
static volatile int64_t t81 = 3797788LL;
static uint32_t x4455 = 8821798U;
uint16_t x4456 = 7U;
volatile int64_t t84 = 6977993668LL;
volatile int8_t x4557 = INT8_MAX;
int8_t x4559 = INT8_MAX;
uint16_t x4560 = 3U;
volatile uint8_t x4576 = 2U;
uint16_t x4668 = 7U;
uint64_t t90 = 475060LLU;
volatile uint64_t t93 = 886114682354475LLU;
static volatile uint8_t x4869 = UINT8_MAX;
int64_t t99 = -804947584LL;


void f0(void) {
	uint8_t x7 = UINT8_MAX;
	uint32_t x8 = 2U;
	int64_t t0 = -4796866345448LL;

	t0 = (x5+((x6+x7)<<x8));

	if (t0 != 347039LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x29 = INT64_MIN;
	uint32_t x30 = 16230U;
	int16_t x31 = -3158;
	uint16_t x32 = 1U;

	t1 = (x29+((x30+x31)<<x32));

	if (t1 != -9223372036854749664LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x50 = INT8_MIN;
	volatile int32_t x51 = 624;
	int8_t x52 = 0;

	t2 = (x49+((x50+x51)<<x52));

	if (t2 != 17055LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x205 = 38U;
	uint32_t x206 = UINT32_MAX;

	t3 = (x205+((x206+x207)<<x208));

	if (t3 != 4294952079U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x213 = 417U;
	int8_t x214 = -1;
	static uint64_t x215 = 2591911LLU;
	volatile uint8_t x216 = 13U;

	t4 = (x213+((x214+x215)<<x216));

	if (t4 != 21232927137LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x218 = UINT32_MAX;
	int16_t x219 = 0;
	int16_t x220 = 8;
	volatile uint32_t t5 = 269701U;

	t5 = (x217+((x218+x219)<<x220));

	if (t5 != 4294967167U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x309 = UINT32_MAX;
	int32_t x310 = 439;
	uint8_t x311 = 111U;
	volatile int64_t x312 = 10LL;
	uint32_t t6 = 3229U;

	t6 = (x309+((x310+x311)<<x312));

	if (t6 != 563199U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x313 = UINT32_MAX;
	uint8_t x314 = 3U;
	static uint32_t x315 = 10U;
	int16_t x316 = 12;
	uint32_t t7 = 95712U;

	t7 = (x313+((x314+x315)<<x316));

	if (t7 != 53247U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x317 = 7784U;
	int32_t x318 = -6747687;
	uint32_t x319 = UINT32_MAX;
	static int16_t x320 = 14;
	volatile uint32_t t8 = 3U;

	t8 = (x317+((x318+x319)<<x320));

	if (t8 != 1115037288U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x342 = INT8_MIN;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = 1U;
	volatile uint32_t t9 = 802060166U;

	t9 = (x341+((x342+x343)<<x344));

	if (t9 != 2147483390U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x363 = UINT64_MAX;
	int16_t x364 = 3;
	volatile uint64_t t10 = 129514LLU;

	t10 = (x361+((x362+x363)<<x364));

	if (t10 != 553050554607156447LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x381 = 1;
	uint32_t x382 = 64U;
	static uint8_t x384 = 2U;

	t11 = (x381+((x382+x383)<<x384));

	if (t11 != 553LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x385 = UINT32_MAX;
	static uint32_t x386 = 239599U;
	int16_t x387 = INT16_MIN;
	volatile uint32_t t12 = 970874U;

	t12 = (x385+((x386+x387)<<x388));

	if (t12 != 52948735U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x410 = INT32_MIN;
	volatile uint64_t x411 = 3303431958138158LLU;
	volatile uint8_t x412 = 1U;
	volatile uint64_t t13 = 662LLU;

	t13 = (x409+((x410+x411)<<x412));

	if (t13 != 6606857473825372LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x413 = INT32_MIN;
	volatile int16_t x415 = 7;
	volatile uint16_t x416 = 7U;
	int32_t t14 = 1;

	t14 = (x413+((x414+x415)<<x416));

	if (t14 != -2147479552) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x450 = UINT32_MAX;
	static uint16_t x451 = UINT16_MAX;
	static int16_t x452 = 0;

	t15 = (x449+((x450+x451)<<x452));

	if (t15 != 65533U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x521 = UINT32_MAX;
	int16_t x522 = 0;
	uint32_t x523 = 7996022U;
	static int16_t x524 = 22;
	volatile uint32_t t16 = 72U;

	t16 = (x521+((x522+x523)<<x524));

	if (t16 != 2642411519U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x882 = -820;
	int8_t x884 = 7;
	volatile int32_t t17 = 1;

	t17 = (x881+((x882+x883)<<x884));

	if (t17 != 8250752) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x901 = -1;
	volatile int16_t x902 = INT16_MIN;
	int8_t x904 = 1;
	static volatile int64_t t18 = 1033244961432580LL;

	t18 = (x901+((x902+x903)<<x904));

	if (t18 != 3823561047029LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x941 = INT32_MIN;
	static volatile int32_t x942 = INT32_MIN;
	uint64_t x943 = 17144101205LLU;
	uint16_t x944 = 1U;
	uint64_t t19 = 68761810753871589LLU;

	t19 = (x941+((x942+x943)<<x944));

	if (t19 != 27845751466LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x997 = INT16_MIN;
	uint16_t x999 = 4974U;
	int64_t x1000 = 0LL;
	volatile int32_t t20 = 893105;

	t20 = (x997+((x998+x999)<<x1000));

	if (t20 != -27714) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1017 = -1LL;
	int16_t x1018 = -1899;
	int16_t x1020 = 13;

	t21 = (x1017+((x1018+x1019)<<x1020));

	if (t21 != 301183918665326591LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1093 = 13U;
	static uint64_t x1094 = UINT64_MAX;
	int8_t x1095 = INT8_MAX;
	volatile uint8_t x1096 = 7U;

	t22 = (x1093+((x1094+x1095)<<x1096));

	if (t22 != 16141LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1198 = 2;
	uint16_t x1199 = UINT16_MAX;
	int16_t x1200 = 1;

	t23 = (x1197+((x1198+x1199)<<x1200));

	if (t23 != 130946) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1282 = 5U;
	static volatile int32_t x1283 = INT32_MIN;
	static int64_t x1284 = 5LL;
	static int64_t t24 = -21836773590023LL;

	t24 = (x1281+((x1282+x1283)<<x1284));

	if (t24 != -9223372036854775648LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1349 = 627842879U;
	int32_t x1350 = INT32_MAX;
	static uint32_t x1351 = 160106U;
	volatile uint16_t x1352 = 22U;
	volatile uint32_t t25 = 52U;

	t25 = (x1349+((x1350+x1351)<<x1352));

	if (t25 != 2141986623U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1390 = UINT16_MAX;
	uint16_t x1391 = 366U;
	int8_t x1392 = 2;
	volatile int32_t t26 = -1;

	t26 = (x1389+((x1390+x1391)<<x1392));

	if (t26 != 263476) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1413 = 322279U;
	volatile int16_t x1414 = -8;
	uint64_t x1415 = UINT64_MAX;
	uint8_t x1416 = 3U;
	uint64_t t27 = 862057550657604LLU;

	t27 = (x1413+((x1414+x1415)<<x1416));

	if (t27 != 322207LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1521 = 6;
	int32_t x1522 = 0;
	int32_t x1523 = 434527;
	int32_t x1524 = 0;
	volatile int32_t t28 = -119821;

	t28 = (x1521+((x1522+x1523)<<x1524));

	if (t28 != 434533) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1541 = INT8_MAX;
	static uint8_t x1543 = UINT8_MAX;
	int16_t x1544 = 1;
	int32_t t29 = -430;

	t29 = (x1541+((x1542+x1543)<<x1544));

	if (t29 != 891) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1637 = -358632542;
	int64_t x1638 = -51873301LL;
	static int32_t x1639 = INT32_MAX;
	uint8_t x1640 = 10U;
	int64_t t30 = 10102642944426LL;

	t30 = (x1637+((x1638+x1639)<<x1640));

	if (t30 != 2145546361762LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1657 = INT64_MIN;
	static uint8_t x1659 = UINT8_MAX;

	t31 = (x1657+((x1658+x1659)<<x1660));

	if (t31 != -9223372036684382208LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1733 = 506U;
	int8_t x1735 = INT8_MIN;

	t32 = (x1733+((x1734+x1735)<<x1736));

	if (t32 != 1621622U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1793 = -1;
	static int16_t x1794 = -233;
	static uint8_t x1795 = UINT8_MAX;
	volatile uint16_t x1796 = 7U;

	t33 = (x1793+((x1794+x1795)<<x1796));

	if (t33 != 2815) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1829 = INT32_MIN;
	uint64_t x1830 = 121739124755499LLU;
	uint64_t x1831 = 362205047552973260LLU;
	static uint8_t x1832 = 13U;
	uint64_t t34 = 96954880946385032LLU;

	t34 = (x1829+((x1830+x1831)<<x1832));

	if (t34 != 16701984668278251520LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1905 = UINT8_MAX;
	uint64_t x1907 = UINT64_MAX;
	uint8_t x1908 = 1U;
	volatile uint64_t t35 = 51460391313582028LLU;

	t35 = (x1905+((x1906+x1907)<<x1908));

	if (t35 != 8589934843LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1909 = INT16_MIN;
	volatile uint16_t x1910 = 1U;
	uint32_t x1911 = UINT32_MAX;
	uint8_t x1912 = 2U;

	t36 = (x1909+((x1910+x1911)<<x1912));

	if (t36 != 4294934528U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1913 = 14U;
	static uint8_t x1916 = 2U;
	volatile int32_t t37 = 5;

	t37 = (x1913+((x1914+x1915)<<x1916));

	if (t37 != 550) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1929 = -1;
	uint64_t x1930 = 3LLU;
	int8_t x1932 = 0;
	volatile uint64_t t38 = 3025018738931873LLU;

	t38 = (x1929+((x1930+x1931)<<x1932));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1993 = UINT64_MAX;
	int16_t x1995 = 1;
	volatile uint8_t x1996 = 17U;
	uint64_t t39 = 65337554224LLU;

	t39 = (x1993+((x1994+x1995)<<x1996));

	if (t39 != 426246143LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2033 = INT16_MIN;
	uint64_t x2034 = 2008512455062LLU;
	int16_t x2035 = -7814;
	static int8_t x2036 = 8;
	volatile uint64_t t40 = 52093644983LLU;

	t40 = (x2033+((x2034+x2035)<<x2036));

	if (t40 != 514179186462720LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2073 = 13365130LLU;
	int8_t x2074 = INT8_MIN;

	t41 = (x2073+((x2074+x2075)<<x2076));

	if (t41 != 4308332174LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2129 = -1;
	int64_t x2130 = 52455073393086710LL;
	uint8_t x2131 = UINT8_MAX;
	volatile int32_t x2132 = 0;
	volatile int64_t t42 = -40148994887LL;

	t42 = (x2129+((x2130+x2131)<<x2132));

	if (t42 != 52455073393086964LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x2377 = 0U;
	uint16_t x2378 = UINT16_MAX;
	int64_t x2379 = 203198943LL;
	uint8_t x2380 = 1U;
	int64_t t43 = 26630402LL;

	t43 = (x2377+((x2378+x2379)<<x2380));

	if (t43 != 406528956LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2381 = 6;
	int8_t x2383 = INT8_MIN;
	int8_t x2384 = 9;
	volatile int32_t t44 = 6;

	t44 = (x2381+((x2382+x2383)<<x2384));

	if (t44 != 16711174) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2399 = UINT16_MAX;
	static uint8_t x2400 = 4U;
	volatile uint64_t t45 = 13055LLU;

	t45 = (x2397+((x2398+x2399)<<x2400));

	if (t45 != 1058975LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2413 = 5187732000LL;
	int16_t x2414 = 2933;
	int32_t x2415 = -1;
	int8_t x2416 = 1;
	static volatile int64_t t46 = 426816062027377LL;

	t46 = (x2413+((x2414+x2415)<<x2416));

	if (t46 != 5187737864LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2661 = 1;
	uint16_t x2662 = 662U;
	volatile uint32_t x2664 = 2U;
	int32_t t47 = -122;

	t47 = (x2661+((x2662+x2663)<<x2664));

	if (t47 != 2653) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2777 = INT32_MIN;
	int64_t x2778 = INT64_MAX;
	uint64_t x2779 = 0LLU;
	uint32_t x2780 = 3U;
	volatile uint64_t t48 = 255LLU;

	t48 = (x2777+((x2778+x2779)<<x2780));

	if (t48 != 18446744071562067960LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2811 = INT16_MAX;
	uint8_t x2812 = 10U;
	static int32_t t49 = 101;

	t49 = (x2809+((x2810+x2811)<<x2812));

	if (t49 != -2113900544) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2934 = UINT16_MAX;
	static uint16_t x2935 = UINT16_MAX;
	volatile uint64_t x2936 = 4LLU;
	int32_t t50 = -3619986;

	t50 = (x2933+((x2934+x2935)<<x2936));

	if (t50 != 2129887) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2969 = UINT64_MAX;
	volatile uint64_t x2970 = 207044687089138LLU;
	int16_t x2971 = 43;
	static volatile uint64_t t51 = 1640LLU;

	t51 = (x2969+((x2970+x2971)<<x2972));

	if (t51 != 414089374178361LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2985 = 45LLU;
	static volatile uint64_t x2986 = UINT64_MAX;
	volatile int64_t x2987 = -1LL;
	uint8_t x2988 = 0U;
	static volatile uint64_t t52 = 298LLU;

	t52 = (x2985+((x2986+x2987)<<x2988));

	if (t52 != 43LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3046 = -1;
	uint8_t x3047 = 2U;
	volatile int8_t x3048 = 11;
	static int32_t t53 = -475245;

	t53 = (x3045+((x3046+x3047)<<x3048));

	if (t53 != 2047) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x3167 = 2820258925LLU;
	int8_t x3168 = 3;
	volatile uint64_t t54 = 65080608544941LLU;

	t54 = (x3165+((x3166+x3167)<<x3168));

	if (t54 != 22562071272LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x3289 = -1;
	uint64_t x3291 = UINT64_MAX;
	int8_t x3292 = 0;
	volatile uint64_t t55 = 86LLU;

	t55 = (x3289+((x3290+x3291)<<x3292));

	if (t55 != 18446744066417568305LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3365 = 5887800498LLU;
	static int64_t x3367 = INT64_MIN;
	int16_t x3368 = 11;
	volatile uint64_t t56 = 24159698LLU;

	t56 = (x3365+((x3366+x3367)<<x3368));

	if (t56 != 5887798450LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x3381 = 1LLU;
	static uint32_t x3383 = UINT32_MAX;
	volatile uint64_t t57 = 1804883427LLU;

	t57 = (x3381+((x3382+x3383)<<x3384));

	if (t57 != 18190609057LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x3385 = 7LLU;
	uint8_t x3386 = 116U;
	uint16_t x3387 = 112U;
	int8_t x3388 = 15;
	uint64_t t58 = 1543584643453092LLU;

	t58 = (x3385+((x3386+x3387)<<x3388));

	if (t58 != 7471111LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x3417 = -706556;
	uint32_t x3419 = UINT32_MAX;
	int8_t x3420 = 1;
	volatile uint32_t t59 = 176087U;

	t59 = (x3417+((x3418+x3419)<<x3420));

	if (t59 != 853138776U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3485 = 3U;
	int64_t x3486 = 185249691913798LL;
	int16_t x3487 = -1;
	static uint32_t x3488 = 2U;
	int64_t t60 = -120593296LL;

	t60 = (x3485+((x3486+x3487)<<x3488));

	if (t60 != 740998767655191LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x3581 = 11U;
	volatile int16_t x3582 = INT16_MIN;
	volatile uint64_t x3583 = UINT64_MAX;
	uint8_t x3584 = 9U;

	t61 = (x3581+((x3582+x3583)<<x3584));

	if (t61 != 18446744073692773899LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x3597 = 0U;
	uint32_t x3598 = 0U;
	uint64_t x3599 = UINT64_MAX;
	volatile uint64_t t62 = 1LLU;

	t62 = (x3597+((x3598+x3599)<<x3600));

	if (t62 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3677 = -9;
	volatile uint32_t x3678 = 7316U;
	uint32_t x3680 = 0U;
	uint32_t t63 = 1812U;

	t63 = (x3677+((x3678+x3679)<<x3680));

	if (t63 != 2147490954U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3701 = INT64_MIN;
	int32_t x3702 = 3;
	uint32_t x3704 = 4U;
	static int64_t t64 = 285168605957LL;

	t64 = (x3701+((x3702+x3703)<<x3704));

	if (t64 != -9223372036854736784LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3861 = INT32_MIN;
	int16_t x3862 = 201;
	static volatile uint32_t x3863 = UINT32_MAX;

	t65 = (x3861+((x3862+x3863)<<x3864));

	if (t65 != 2147484448U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x3873 = -1;
	int8_t x3875 = INT8_MIN;
	uint8_t x3876 = 0U;
	static volatile int64_t t66 = -349978072137638LL;

	t66 = (x3873+((x3874+x3875)<<x3876));

	if (t66 != 238773906867LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3901 = UINT64_MAX;
	volatile int64_t x3902 = INT64_MIN;
	volatile uint64_t x3903 = 692264971LLU;
	int16_t x3904 = 1;
	uint64_t t67 = 35230382115334LLU;

	t67 = (x3901+((x3902+x3903)<<x3904));

	if (t67 != 1384529941LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3909 = -7184854842LL;
	uint32_t x3910 = 10538802U;
	int32_t x3911 = INT32_MIN;
	volatile int64_t t68 = 192LL;

	t68 = (x3909+((x3910+x3911)<<x3912));

	if (t68 != -5026832392LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3921 = -1LL;
	int16_t x3923 = INT16_MAX;
	uint16_t x3924 = 2U;
	volatile int64_t t69 = 960400172150573605LL;

	t69 = (x3921+((x3922+x3923)<<x3924));

	if (t69 != 1153575623LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3925 = 4123U;
	volatile uint8_t x3926 = 71U;
	uint16_t x3927 = UINT16_MAX;
	int32_t t70 = 1;

	t70 = (x3925+((x3926+x3927)<<x3928));

	if (t70 != 16799259) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3949 = 5252307U;
	int16_t x3951 = INT16_MAX;
	static uint32_t x3952 = 14U;

	t71 = (x3949+((x3950+x3951)<<x3952));

	if (t71 != 543024339U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3973 = 498985394066219LL;
	static volatile uint64_t x3974 = 5997704LLU;
	static uint8_t x3976 = 4U;

	t72 = (x3973+((x3974+x3975)<<x3976));

	if (t72 != 498901661959387LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x3993 = INT32_MIN;
	static int16_t x3995 = -1;
	static int8_t x3996 = 1;
	int32_t t73 = 22619;

	t73 = (x3993+((x3994+x3995)<<x3996));

	if (t73 != -2143855698) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x4018 = UINT32_MAX;
	int16_t x4020 = 0;
	uint64_t t74 = 63890756894970LLU;

	t74 = (x4017+((x4018+x4019)<<x4020));

	if (t74 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4085 = INT16_MAX;
	static uint32_t x4086 = 56555645U;
	int16_t x4087 = INT16_MIN;
	uint32_t x4088 = 11U;
	volatile uint32_t t75 = 226033U;

	t75 = (x4085+((x4086+x4087)<<x4088));

	if (t75 != 4089735167U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4193 = -870;
	volatile int16_t x4194 = -60;
	int8_t x4196 = 0;

	t76 = (x4193+((x4194+x4195)<<x4196));

	if (t76 != 4294966365U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4205 = 92874U;
	int8_t x4206 = -1;
	int16_t x4207 = 2;
	static uint8_t x4208 = 7U;
	volatile uint32_t t77 = 124U;

	t77 = (x4205+((x4206+x4207)<<x4208));

	if (t77 != 93002U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4261 = 19U;
	int64_t x4263 = -1LL;
	static uint64_t x4264 = 0LLU;

	t78 = (x4261+((x4262+x4263)<<x4264));

	if (t78 != 615LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4325 = UINT16_MAX;
	volatile int64_t x4327 = 468242560292LL;
	uint8_t x4328 = 0U;
	int64_t t79 = -1LL;

	t79 = (x4325+((x4326+x4327)<<x4328));

	if (t79 != 468242691362LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x4345 = 108LLU;
	volatile int32_t x4346 = 82865;
	uint64_t x4348 = 23LLU;
	volatile uint64_t t80 = 259LLU;

	t80 = (x4345+((x4346+x4347)<<x4348));

	if (t80 != 461373548LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x4389 = INT8_MAX;
	int32_t x4390 = INT32_MAX;
	static volatile int64_t x4392 = 10LL;

	t81 = (x4389+((x4390+x4391)<<x4392));

	if (t81 != 2197413875839LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4405 = 414475U;
	int16_t x4406 = 2;
	int64_t x4407 = -1LL;
	int8_t x4408 = 2;
	volatile int64_t t82 = -7974982178LL;

	t82 = (x4405+((x4406+x4407)<<x4408));

	if (t82 != 414479LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x4437 = INT64_MIN;
	int8_t x4438 = -3;
	int16_t x4439 = 10;
	uint16_t x4440 = 1U;
	static int64_t t83 = -370928306092592807LL;

	t83 = (x4437+((x4438+x4439)<<x4440));

	if (t83 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x4453 = UINT32_MAX;
	int64_t x4454 = -1967LL;

	t84 = (x4453+((x4454+x4455)<<x4456));

	if (t84 != 5423905663LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4558 = 5U;
	volatile int32_t t85 = 113540;

	t85 = (x4557+((x4558+x4559)<<x4560));

	if (t85 != 1183) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4573 = -1LL;
	volatile int64_t x4574 = -1LL;
	static int32_t x4575 = INT32_MAX;
	volatile int64_t t86 = -5039142420LL;

	t86 = (x4573+((x4574+x4575)<<x4576));

	if (t86 != 8589934583LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4653 = 3U;
	int16_t x4654 = -1;
	static uint8_t x4655 = 102U;
	uint16_t x4656 = 15U;
	int32_t t87 = 14;

	t87 = (x4653+((x4654+x4655)<<x4656));

	if (t87 != 3309571) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x4665 = UINT64_MAX;
	volatile uint64_t x4666 = UINT64_MAX;
	int32_t x4667 = -1;
	static volatile uint64_t t88 = 9893LLU;

	t88 = (x4665+((x4666+x4667)<<x4668));

	if (t88 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4729 = 3U;
	int8_t x4730 = INT8_MAX;
	int64_t x4731 = -74LL;
	int32_t x4732 = 0;
	volatile int64_t t89 = -29486460968836772LL;

	t89 = (x4729+((x4730+x4731)<<x4732));

	if (t89 != 56LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x4745 = 6;
	static uint64_t x4746 = 5LLU;
	int8_t x4747 = INT8_MAX;
	uint8_t x4748 = 0U;

	t90 = (x4745+((x4746+x4747)<<x4748));

	if (t90 != 138LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4765 = 5002U;
	uint32_t x4766 = 2940U;
	uint32_t x4767 = 23U;
	int8_t x4768 = 2;
	volatile uint32_t t91 = 2847U;

	t91 = (x4765+((x4766+x4767)<<x4768));

	if (t91 != 16854U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4797 = -357546;
	static uint16_t x4798 = UINT16_MAX;
	uint16_t x4799 = UINT16_MAX;
	static uint16_t x4800 = 10U;
	volatile int32_t t92 = 632;

	t92 = (x4797+((x4798+x4799)<<x4800));

	if (t92 != 133858134) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4825 = INT32_MIN;
	static uint64_t x4826 = UINT64_MAX;
	int64_t x4827 = INT64_MIN;
	static uint8_t x4828 = 28U;

	t93 = (x4825+((x4826+x4827)<<x4828));

	if (t93 != 18446744071293632512LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x4870 = 16326U;
	uint64_t x4871 = UINT64_MAX;
	static int64_t x4872 = 1LL;
	uint64_t t94 = 772255705646805LLU;

	t94 = (x4869+((x4870+x4871)<<x4872));

	if (t94 != 32905LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x5081 = 2U;
	static uint32_t x5082 = 194U;
	static uint32_t x5083 = 7652133U;
	int32_t x5084 = 10;
	uint32_t t95 = 6765834U;

	t95 = (x5081+((x5082+x5083)<<x5084));

	if (t95 != 3541015554U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5093 = INT8_MIN;
	int16_t x5094 = INT16_MAX;
	static int64_t x5095 = -1LL;
	uint32_t x5096 = 0U;
	int64_t t96 = 476LL;

	t96 = (x5093+((x5094+x5095)<<x5096));

	if (t96 != 32638LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x5097 = INT64_MIN;
	volatile int16_t x5098 = 181;
	volatile int32_t x5099 = -1;
	int16_t x5100 = 1;
	static int64_t t97 = -1893794056LL;

	t97 = (x5097+((x5098+x5099)<<x5100));

	if (t97 != -9223372036854775448LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5109 = -20;
	uint8_t x5110 = 4U;
	uint8_t x5111 = 55U;
	int64_t x5112 = 24LL;
	int32_t t98 = -5626271;

	t98 = (x5109+((x5110+x5111)<<x5112));

	if (t98 != 989855724) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5117 = UINT16_MAX;
	volatile int64_t x5118 = -1LL;
	volatile int64_t x5119 = 50795479632627LL;
	uint16_t x5120 = 0U;

	t99 = (x5117+((x5118+x5119)<<x5120));

	if (t99 != 50795479698161LL) { NG(); } else { ; }
	
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

