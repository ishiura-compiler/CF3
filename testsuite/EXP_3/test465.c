
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

uint8_t x2 = 0U;
uint32_t x3 = 343U;
uint32_t x686 = 3U;
int16_t x777 = INT16_MAX;
int16_t x779 = 0;
int8_t x859 = INT8_MIN;
int64_t t8 = -36540LL;
uint32_t x1037 = 3060U;
int16_t x1038 = 1;
static uint8_t x1055 = 6U;
uint16_t x1174 = 5U;
int64_t x1175 = -7479406723LL;
volatile int32_t t15 = -62;
static int32_t x1451 = 0;
volatile int64_t x1617 = INT64_MAX;
static volatile int16_t x1619 = -1;
uint16_t x1620 = 0U;
volatile int64_t t20 = -16323466LL;
int8_t x1849 = INT8_MAX;
int32_t x1850 = 0;
uint8_t x1853 = UINT8_MAX;
static int8_t x1855 = INT8_MIN;
volatile int16_t x1856 = -1;
volatile uint8_t x2058 = 16U;
static int8_t x2065 = INT8_MAX;
int8_t x2164 = -8;
uint64_t t27 = 23170852401722688LLU;
uint32_t x2168 = UINT32_MAX;
int64_t x2257 = 31705895320LL;
int32_t x2260 = -1;
int64_t t31 = -23179562LL;
uint32_t x2405 = UINT32_MAX;
uint32_t t33 = 647822U;
volatile int64_t x2560 = -1LL;
int16_t x2732 = 889;
int32_t x2783 = INT32_MIN;
static int32_t t41 = -4;
volatile int8_t x3138 = 0;
static uint32_t x3389 = 254U;
uint8_t x3613 = UINT8_MAX;
volatile int32_t t44 = 93574406;
int32_t x3625 = 2307864;
uint16_t x3626 = 7U;
uint32_t x3708 = UINT32_MAX;
volatile uint32_t t47 = 93173U;
uint32_t x4082 = 14U;
uint32_t x4084 = 673750U;
volatile uint32_t t49 = 101110746U;
static int32_t x4154 = 14;
volatile uint64_t t50 = 336546049105LLU;
int8_t x4275 = INT8_MIN;
static uint8_t x4276 = UINT8_MAX;
uint16_t x4430 = 0U;
int8_t x4431 = INT8_MIN;
uint16_t x4450 = 7U;
uint64_t x4701 = 405556LLU;
int32_t x4702 = 3;
int8_t x4945 = INT8_MAX;
uint8_t x5030 = 0U;
uint16_t x5031 = 6551U;
uint64_t x5158 = 6LLU;
volatile uint8_t x5262 = 2U;
uint16_t x5418 = 2U;
static uint16_t x5420 = 71U;
int16_t x5775 = -1;
uint64_t x5917 = 372018380718237LLU;
uint16_t x5920 = UINT16_MAX;
uint64_t t64 = 1173824189155356821LLU;
uint64_t x6203 = 6320685426238LLU;
static uint64_t x6316 = UINT64_MAX;
uint8_t x6544 = UINT8_MAX;
volatile int32_t t70 = 2;
int8_t x6599 = -1;
uint8_t x6600 = UINT8_MAX;
volatile int32_t t72 = -400642;
uint8_t x6750 = 5U;
volatile int16_t x6751 = -1;
uint32_t x6954 = 1U;
int16_t x6999 = 0;
static int64_t x7000 = -1LL;
int64_t x7012 = INT64_MIN;
uint8_t x7058 = 1U;
volatile int32_t x7060 = -277;
static int64_t x7088 = -20663LL;
volatile int64_t t78 = 42003LL;
uint64_t t79 = 991LLU;
int32_t x7618 = 1;
int16_t x7664 = -1;
int32_t t81 = -1022065;
int64_t x7775 = -1LL;
volatile int64_t t82 = 966874LL;
int8_t x8022 = 13;
uint64_t x8125 = 11767064773LLU;
volatile uint8_t x8250 = 2U;
static int16_t x8444 = -1;
uint64_t x8531 = 3553038428104399LLU;
uint16_t x8757 = 6U;
volatile uint8_t x8782 = 4U;
static int8_t x8784 = 11;
volatile uint8_t x9105 = 0U;
uint32_t t96 = 3U;
volatile int64_t x9171 = -9LL;


void f0(void) {
    	static volatile uint32_t x1 = 14U;
	int8_t x4 = INT8_MIN;
	volatile uint32_t t0 = 271931626U;

    t0 = ((x1<<x2)*(x3*x4));

    if (t0 != 4294352640U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x101 = 16U;
	uint16_t x102 = 15U;
	int8_t x103 = 1;
	static int64_t x104 = -368498LL;
	volatile int64_t t1 = 1499286LL;

    t1 = ((x101<<x102)*(x103*x104));

    if (t1 != -193199079424LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 0U;
	int32_t x351 = -1;
	static int32_t x352 = -1;
	static volatile uint32_t t2 = UINT32_MAX;

    t2 = ((x349<<x350)*(x351*x352));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x377 = UINT64_MAX;
	uint8_t x378 = 26U;
	int16_t x379 = -3;
	static int8_t x380 = INT8_MIN;
	uint64_t t3 = 230LLU;

    t3 = ((x377<<x378)*(x379*x380));

    if (t3 != 18446744047939747840LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x685 = 0;
	int16_t x687 = -15007;
	int32_t x688 = -1;
	int32_t t4 = -6;

    t4 = ((x685<<x686)*(x687*x688));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x778 = 1;
	volatile uint16_t x780 = 10U;
	volatile int32_t t5 = -49673;

    t5 = ((x777<<x778)*(x779*x780));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x781 = 17366;
	int8_t x782 = 1;
	int32_t x783 = INT32_MIN;
	uint32_t x784 = 35U;
	uint32_t t6 = 7947836U;

    t6 = ((x781<<x782)*(x783*x784));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x857 = 4942819556LLU;
	volatile uint16_t x858 = 24U;
	int16_t x860 = INT16_MIN;
	uint64_t t7 = 19894LLU;

    t7 = ((x857<<x858)*(x859*x860));

    if (t7 != 6645342725161877504LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x1005 = 1;
	volatile uint64_t x1006 = 29LLU;
	volatile int16_t x1007 = INT16_MAX;
	int64_t x1008 = -1LL;

    t8 = ((x1005<<x1006)*(x1007*x1008));

    if (t8 != -17591649173504LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x1039 = 3692U;
	uint16_t x1040 = UINT16_MAX;
	static uint32_t t9 = 26771621U;

    t9 = ((x1037<<x1038)*(x1039*x1040));

    if (t9 != 3297196576U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x1053 = 1976456LLU;
	uint16_t x1054 = 7U;
	uint64_t x1056 = 4201164925943LLU;
	uint64_t t10 = 28279LLU;

    t10 = ((x1053<<x1054)*(x1055*x1056));

    if (t10 != 12898030470055962624LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1097 = 114395791LL;
	static uint32_t x1098 = 0U;
	uint32_t x1099 = UINT32_MAX;
	int16_t x1100 = INT16_MIN;
	int64_t t11 = 4325562291987519LL;

    t11 = ((x1097<<x1098)*(x1099*x1100));

    if (t11 != 3748521279488LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x1109 = INT8_MAX;
	int16_t x1110 = 0;
	uint8_t x1111 = 18U;
	uint64_t x1112 = 54926362653239LLU;
	uint64_t t12 = 924896689LLU;

    t12 = ((x1109<<x1110)*(x1111*x1112));

    if (t12 != 125561665025304354LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x1165 = 104U;
	volatile int16_t x1166 = 3;
	uint16_t x1167 = 1877U;
	int16_t x1168 = -1;
	static volatile int32_t t13 = -3;

    t13 = ((x1165<<x1166)*(x1167*x1168));

    if (t13 != -1561664) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1173 = 238U;
	volatile int16_t x1176 = 2;
	static int64_t t14 = -6035906087979401LL;

    t14 = ((x1173<<x1174)*(x1175*x1176));

    if (t14 != -113926323204736LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x1237 = 10U;
	int8_t x1238 = 1;
	int32_t x1239 = -55;
	int16_t x1240 = -1;

    t15 = ((x1237<<x1238)*(x1239*x1240));

    if (t15 != 1100) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x1245 = 768U;
	uint8_t x1246 = 2U;
	volatile uint8_t x1247 = 15U;
	static int16_t x1248 = INT16_MIN;
	int32_t t16 = 882;

    t16 = ((x1245<<x1246)*(x1247*x1248));

    if (t16 != -1509949440) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x1349 = UINT16_MAX;
	static uint16_t x1350 = 3U;
	int32_t x1351 = INT32_MIN;
	uint64_t x1352 = UINT64_MAX;
	volatile uint64_t t17 = 1518373315LLU;

    t17 = ((x1349<<x1350)*(x1351*x1352));

    if (t17 != 1125882726973440LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1449 = UINT8_MAX;
	int16_t x1450 = 2;
	int64_t x1452 = -117120LL;
	int64_t t18 = -327566071LL;

    t18 = ((x1449<<x1450)*(x1451*x1452));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1453 = 16150503902LL;
	int16_t x1454 = 1;
	static int64_t x1455 = -1LL;
	int32_t x1456 = 1254935;
	volatile int64_t t19 = 313671667248090LL;

    t19 = ((x1453<<x1454)*(x1455*x1456));

    if (t19 != -40535665228512740LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1618 = 0U;

    t20 = ((x1617<<x1618)*(x1619*x1620));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x1641 = 1;
	uint8_t x1642 = 8U;
	int8_t x1643 = INT8_MAX;
	static volatile int64_t x1644 = 17029607715326LL;
	volatile int64_t t21 = 248050LL;

    t21 = ((x1641<<x1642)*(x1643*x1644));

    if (t21 != 553666606040678912LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x1851 = INT16_MAX;
	uint8_t x1852 = UINT8_MAX;
	volatile int32_t t22 = 57;

    t22 = ((x1849<<x1850)*(x1851*x1852));

    if (t22 != 1061159295) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x1854 = 15U;
	int32_t t23 = -11;

    t23 = ((x1853<<x1854)*(x1855*x1856));

    if (t23 != 1069547520) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x1925 = 1702259570U;
	static int8_t x1926 = 0;
	uint64_t x1927 = UINT64_MAX;
	uint32_t x1928 = UINT32_MAX;
	uint64_t t24 = 47858977197991163LLU;

    t24 = ((x1925<<x1926)*(x1927*x1928));

    if (t24 != 11135594892958788466LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x2057 = 434;
	static uint64_t x2059 = UINT64_MAX;
	volatile int32_t x2060 = -1;
	static uint64_t t25 = 33584603583LLU;

    t25 = ((x2057<<x2058)*(x2059*x2060));

    if (t25 != 28442624LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x2066 = 1U;
	uint32_t x2067 = 1033004U;
	uint8_t x2068 = 12U;
	static uint32_t t26 = 1U;

    t26 = ((x2065<<x2066)*(x2067*x2068));

    if (t26 != 3148596192U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x2161 = 126229U;
	int16_t x2162 = 3;
	volatile uint64_t x2163 = UINT64_MAX;

    t27 = ((x2161<<x2162)*(x2163*x2164));

    if (t27 != 8078656LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x2165 = UINT64_MAX;
	volatile int8_t x2166 = 58;
	uint32_t x2167 = UINT32_MAX;
	uint64_t t28 = 1467394456LLU;

    t28 = ((x2165<<x2166)*(x2167*x2168));

    if (t28 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x2233 = 1;
	uint8_t x2234 = 7U;
	static int8_t x2235 = INT8_MIN;
	uint8_t x2236 = 91U;
	volatile int32_t t29 = -1;

    t29 = ((x2233<<x2234)*(x2235*x2236));

    if (t29 != -1490944) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x2249 = UINT32_MAX;
	static uint8_t x2250 = 1U;
	uint8_t x2251 = UINT8_MAX;
	volatile int16_t x2252 = INT16_MIN;
	volatile uint32_t t30 = 8093U;

    t30 = ((x2249<<x2250)*(x2251*x2252));

    if (t30 != 16711680U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2258 = 14;
	int16_t x2259 = -533;

    t31 = ((x2257<<x2258)*(x2259*x2260));

    if (t31 != 276877184295895040LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x2321 = UINT8_MAX;
	uint8_t x2322 = 5U;
	int8_t x2323 = 47;
	int8_t x2324 = INT8_MIN;
	int32_t t32 = 1;

    t32 = ((x2321<<x2322)*(x2323*x2324));

    if (t32 != -49090560) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2406 = 15U;
	uint32_t x2407 = 211380U;
	int32_t x2408 = -554101;

    t33 = ((x2405<<x2406)*(x2407*x2408));

    if (t33 != 2007105536U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x2461 = 67U;
	int16_t x2462 = 0;
	int64_t x2463 = 186LL;
	uint16_t x2464 = 13U;
	int64_t t34 = 42287098091LL;

    t34 = ((x2461<<x2462)*(x2463*x2464));

    if (t34 != 162006LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x2557 = 3958U;
	uint64_t x2558 = 1LLU;
	volatile int32_t x2559 = INT32_MAX;
	volatile int64_t t35 = 2285682766606552LL;

    t35 = ((x2557<<x2558)*(x2559*x2560));

    if (t35 != -16999480549652LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x2577 = INT16_MAX;
	static uint16_t x2578 = 2U;
	int16_t x2579 = -1;
	static int8_t x2580 = INT8_MIN;
	volatile int32_t t36 = -19;

    t36 = ((x2577<<x2578)*(x2579*x2580));

    if (t36 != 16776704) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x2729 = INT8_MAX;
	int16_t x2730 = 0;
	static uint16_t x2731 = 15729U;
	int32_t t37 = 0;

    t37 = ((x2729<<x2730)*(x2731*x2732));

    if (t37 != 1775851287) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x2745 = 2U;
	int8_t x2746 = 0;
	static int8_t x2747 = -1;
	volatile uint64_t x2748 = 405037265359847LLU;
	volatile uint64_t t38 = 841384LLU;

    t38 = ((x2745<<x2746)*(x2747*x2748));

    if (t38 != 18445933999178831922LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x2781 = 39561639241243LL;
	int64_t x2782 = 2LL;
	volatile uint64_t x2784 = 362782LLU;
	volatile uint64_t t39 = 462486LLU;

    t39 = ((x2781<<x2782)*(x2783*x2784));

    if (t39 != 8858628484772134912LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x2929 = UINT32_MAX;
	uint16_t x2930 = 3U;
	volatile int64_t x2931 = -1LL;
	static int8_t x2932 = INT8_MIN;
	int64_t t40 = -4636041166LL;

    t40 = ((x2929<<x2930)*(x2931*x2932));

    if (t40 != 549755812864LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x3121 = 2;
	int32_t x3122 = 1;
	int8_t x3123 = -1;
	int32_t x3124 = -52246192;

    t41 = ((x3121<<x3122)*(x3123*x3124));

    if (t41 != 208984768) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x3137 = 2707852067684LLU;
	volatile int8_t x3139 = -1;
	volatile uint32_t x3140 = UINT32_MAX;
	uint64_t t42 = 16717824LLU;

    t42 = ((x3137<<x3138)*(x3139*x3140));

    if (t42 != 2707852067684LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x3390 = 8U;
	volatile int32_t x3391 = -1;
	uint64_t x3392 = UINT64_MAX;
	volatile uint64_t t43 = 104360504LLU;

    t43 = ((x3389<<x3390)*(x3391*x3392));

    if (t43 != 65024LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x3614 = 1;
	uint8_t x3615 = 4U;
	volatile uint16_t x3616 = UINT16_MAX;

    t44 = ((x3613<<x3614)*(x3615*x3616));

    if (t44 != 133691400) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x3627 = 9989LL;
	volatile int8_t x3628 = INT8_MIN;
	int64_t t45 = 8697385919423LL;

    t45 = ((x3625<<x3626)*(x3627*x3628));

    if (t45 != -377704505278464LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x3705 = 23756614910371LLU;
	uint8_t x3706 = 48U;
	int16_t x3707 = 104;
	volatile uint64_t t46 = 22666792515757725LLU;

    t46 = ((x3705<<x3706)*(x3707*x3708));

    if (t46 != 6181190488566005760LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x4009 = 119U;
	static uint8_t x4010 = 2U;
	uint16_t x4011 = 6U;
	uint32_t x4012 = 48U;

    t47 = ((x4009<<x4010)*(x4011*x4012));

    if (t47 != 137088U) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x4045 = 27U;
	uint16_t x4046 = 4U;
	int8_t x4047 = INT8_MAX;
	int8_t x4048 = 36;
	volatile int32_t t48 = -108;

    t48 = ((x4045<<x4046)*(x4047*x4048));

    if (t48 != 1975104) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x4081 = 0;
	int8_t x4083 = INT8_MIN;

    t49 = ((x4081<<x4082)*(x4083*x4084));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x4153 = 75924046585633LLU;
	int8_t x4155 = INT8_MAX;
	static int32_t x4156 = -1;

    t50 = ((x4153<<x4154)*(x4155*x4156));

    if (t50 != 8040370097491558400LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x4225 = 36U;
	int8_t x4226 = 1;
	uint32_t x4227 = UINT32_MAX;
	uint64_t x4228 = 48658LLU;
	static volatile uint64_t t51 = 1388LLU;

    t51 = ((x4225<<x4226)*(x4227*x4228));

    if (t51 != 15046885342087920LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x4273 = UINT8_MAX;
	uint32_t x4274 = 2U;
	volatile int32_t t52 = -18156064;

    t52 = ((x4273<<x4274)*(x4275*x4276));

    if (t52 != -33292800) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x4429 = 1;
	uint64_t x4432 = 2169LLU;
	uint64_t t53 = 535430586LLU;

    t53 = ((x4429<<x4430)*(x4431*x4432));

    if (t53 != 18446744073709273984LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x4449 = 257U;
	int8_t x4451 = INT8_MIN;
	volatile int32_t x4452 = -5;
	uint32_t t54 = 2635U;

    t54 = ((x4449<<x4450)*(x4451*x4452));

    if (t54 != 21053440U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x4703 = INT8_MIN;
	int8_t x4704 = -7;
	uint64_t t55 = 21938540LLU;

    t55 = ((x4701<<x4702)*(x4703*x4704));

    if (t55 != 2907025408LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x4946 = 0;
	uint16_t x4947 = 80U;
	int64_t x4948 = 251404866989LL;
	volatile int64_t t56 = 6683167935810LL;

    t56 = ((x4945<<x4946)*(x4947*x4948));

    if (t56 != 2554273448608240LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x5029 = 1258U;
	static int8_t x5032 = -36;
	int32_t t57 = 54083;

    t57 = ((x5029<<x5030)*(x5031*x5032));

    if (t57 != -296681688) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x5157 = 192U;
	int16_t x5159 = INT16_MIN;
	int64_t x5160 = -1LL;
	volatile int64_t t58 = -190970233LL;

    t58 = ((x5157<<x5158)*(x5159*x5160));

    if (t58 != 402653184LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x5261 = 1U;
	volatile int16_t x5263 = -1;
	uint32_t x5264 = UINT32_MAX;
	uint32_t t59 = 9U;

    t59 = ((x5261<<x5262)*(x5263*x5264));

    if (t59 != 4U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x5417 = UINT8_MAX;
	uint8_t x5419 = UINT8_MAX;
	int32_t t60 = 649853697;

    t60 = ((x5417<<x5418)*(x5419*x5420));

    if (t60 != 18467100) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x5569 = INT8_MAX;
	volatile uint16_t x5570 = 3U;
	volatile int8_t x5571 = INT8_MIN;
	uint8_t x5572 = 1U;
	int32_t t61 = 463246;

    t61 = ((x5569<<x5570)*(x5571*x5572));

    if (t61 != -130048) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x5765 = 59;
	volatile uint16_t x5766 = 18U;
	int32_t x5767 = -1;
	int8_t x5768 = INT8_MIN;
	volatile int32_t t62 = 166;

    t62 = ((x5765<<x5766)*(x5767*x5768));

    if (t62 != 1979711488) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x5773 = UINT32_MAX;
	uint32_t x5774 = 2U;
	int16_t x5776 = -1;
	uint32_t t63 = 1499503U;

    t63 = ((x5773<<x5774)*(x5775*x5776));

    if (t63 != 4294967292U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x5918 = 23U;
	volatile int8_t x5919 = 8;

    t64 = ((x5917<<x5918)*(x5919*x5920));

    if (t64 != 6189275187028951040LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x6173 = 25;
	static uint32_t x6174 = 24U;
	uint16_t x6175 = 3738U;
	static volatile uint32_t x6176 = 4U;
	volatile uint32_t t65 = 13460U;

    t65 = ((x6173<<x6174)*(x6175*x6176));

    if (t65 != 671088640U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x6201 = INT8_MAX;
	volatile uint8_t x6202 = 1U;
	volatile int16_t x6204 = -1;
	volatile uint64_t t66 = 1172604502938731LLU;

    t66 = ((x6201<<x6202)*(x6203*x6204));

    if (t66 != 18445138619611287164LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x6313 = 60357059917669475LL;
	static volatile uint8_t x6314 = 5U;
	int64_t x6315 = INT64_MIN;
	static uint64_t t67 = 7366LLU;

    t67 = ((x6313<<x6314)*(x6315*x6316));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x6337 = 9;
	uint8_t x6338 = 13U;
	volatile uint64_t x6339 = 886LLU;
	static int32_t x6340 = 68981920;
	volatile uint64_t t68 = 3LLU;

    t68 = ((x6337<<x6338)*(x6339*x6340));

    if (t68 != 4506106512015360LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x6457 = 3060672LLU;
	static volatile uint16_t x6458 = 14U;
	volatile uint8_t x6459 = UINT8_MAX;
	int16_t x6460 = 0;
	volatile uint64_t t69 = 43LLU;

    t69 = ((x6457<<x6458)*(x6459*x6460));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x6541 = 5U;
	uint16_t x6542 = 10U;
	uint8_t x6543 = 75U;

    t70 = ((x6541<<x6542)*(x6543*x6544));

    if (t70 != 97920000) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x6597 = 23082U;
	static uint16_t x6598 = 7U;
	uint32_t t71 = 418U;

    t71 = ((x6597<<x6598)*(x6599*x6600));

    if (t71 != 3541570816U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x6745 = UINT8_MAX;
	int8_t x6746 = 2;
	int8_t x6747 = -3;
	int8_t x6748 = INT8_MIN;

    t72 = ((x6745<<x6746)*(x6747*x6748));

    if (t72 != 391680) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x6749 = INT16_MAX;
	int32_t x6752 = -1;
	int32_t t73 = 7;

    t73 = ((x6749<<x6750)*(x6751*x6752));

    if (t73 != 1048544) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x6953 = UINT64_MAX;
	int64_t x6955 = -414LL;
	int8_t x6956 = INT8_MIN;
	static uint64_t t74 = 135867786705LLU;

    t74 = ((x6953<<x6954)*(x6955*x6956));

    if (t74 != 18446744073709445632LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x6997 = 370244148U;
	uint16_t x6998 = 2U;
	int64_t t75 = -905147738LL;

    t75 = ((x6997<<x6998)*(x6999*x7000));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x7009 = UINT8_MAX;
	volatile int8_t x7010 = 0;
	int8_t x7011 = 0;
	int64_t t76 = 10302138112090454LL;

    t76 = ((x7009<<x7010)*(x7011*x7012));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x7057 = 31U;
	uint8_t x7059 = 14U;
	static uint32_t t77 = 1888525U;

    t77 = ((x7057<<x7058)*(x7059*x7060));

    if (t77 != 4294726860U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x7085 = 1478015713U;
	int8_t x7086 = 1;
	int16_t x7087 = INT16_MAX;

    t78 = ((x7085<<x7086)*(x7087*x7088));

    if (t78 != -2001424001505636946LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x7233 = 9659549LLU;
	uint8_t x7234 = 8U;
	uint8_t x7235 = 0U;
	int32_t x7236 = -7299705;

    t79 = ((x7233<<x7234)*(x7235*x7236));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x7617 = UINT16_MAX;
	uint64_t x7619 = 2274404316734368932LLU;
	static volatile int32_t x7620 = INT32_MIN;
	uint64_t t80 = 14LLU;

    t80 = ((x7617<<x7618)*(x7619*x7620));

    if (t80 != 15126795806293622784LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x7661 = 3U;
	uint16_t x7662 = 5U;
	int16_t x7663 = -2;

    t81 = ((x7661<<x7662)*(x7663*x7664));

    if (t81 != 192) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x7773 = 58;
	volatile int8_t x7774 = 7;
	uint8_t x7776 = UINT8_MAX;

    t82 = ((x7773<<x7774)*(x7775*x7776));

    if (t82 != -1893120LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x8013 = UINT16_MAX;
	volatile int32_t x8014 = 0;
	int16_t x8015 = -1;
	int64_t x8016 = -1LL;
	int64_t t83 = 601017624308597300LL;

    t83 = ((x8013<<x8014)*(x8015*x8016));

    if (t83 != 65535LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x8021 = 3;
	int64_t x8023 = 308LL;
	int8_t x8024 = 1;
	int64_t t84 = 2059573LL;

    t84 = ((x8021<<x8022)*(x8023*x8024));

    if (t84 != 7569408LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x8126 = 0;
	volatile int8_t x8127 = 62;
	int16_t x8128 = INT16_MAX;
	static uint64_t t85 = 19409838LLU;

    t85 = ((x8125<<x8126)*(x8127*x8128));

    if (t85 != 23905427507847242LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x8153 = 0;
	int8_t x8154 = 3;
	static volatile uint16_t x8155 = UINT16_MAX;
	int64_t x8156 = 235391LL;
	int64_t t86 = 363813128660LL;

    t86 = ((x8153<<x8154)*(x8155*x8156));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x8249 = 16U;
	int64_t x8251 = -1LL;
	volatile int32_t x8252 = -1;
	int64_t t87 = -32LL;

    t87 = ((x8249<<x8250)*(x8251*x8252));

    if (t87 != 64LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x8369 = 31U;
	uint8_t x8370 = 1U;
	int32_t x8371 = INT32_MIN;
	uint64_t x8372 = UINT64_MAX;
	static uint64_t t88 = 1548902843209LLU;

    t88 = ((x8369<<x8370)*(x8371*x8372));

    if (t88 != 133143986176LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x8441 = 9856U;
	uint16_t x8442 = 8U;
	uint32_t x8443 = UINT32_MAX;
	uint32_t t89 = 0U;

    t89 = ((x8441<<x8442)*(x8443*x8444));

    if (t89 != 2523136U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x8529 = 429U;
	int64_t x8530 = 0LL;
	int16_t x8532 = INT16_MAX;
	uint64_t t90 = 23573LLU;

    t90 = ((x8529<<x8530)*(x8531*x8532));

    if (t90 != 9877756984189007645LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x8689 = 12U;
	volatile int8_t x8690 = 20;
	int32_t x8691 = -1;
	int8_t x8692 = 0;
	volatile int32_t t91 = 935825;

    t91 = ((x8689<<x8690)*(x8691*x8692));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x8741 = 428013468250985LLU;
	static uint32_t x8742 = 0U;
	static int64_t x8743 = -1LL;
	int16_t x8744 = 12;
	volatile uint64_t t92 = 253LLU;

    t92 = ((x8741<<x8742)*(x8743*x8744));

    if (t92 != 18441607912090539796LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x8758 = 10;
	int32_t x8759 = INT32_MAX;
	uint64_t x8760 = 13418LLU;
	volatile uint64_t t93 = 955298LLU;

    t93 = ((x8757<<x8758)*(x8759*x8760));

    if (t93 != 177038964175540224LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x8781 = UINT32_MAX;
	int16_t x8783 = 1;
	uint32_t t94 = 1978093453U;

    t94 = ((x8781<<x8782)*(x8783*x8784));

    if (t94 != 4294967120U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x9041 = 3201U;
	int8_t x9042 = 10;
	int8_t x9043 = -4;
	int8_t x9044 = -14;
	uint32_t t95 = 1308U;

    t95 = ((x9041<<x9042)*(x9043*x9044));

    if (t95 != 183558144U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x9106 = 0;
	uint32_t x9107 = 3U;
	static uint8_t x9108 = 0U;

    t96 = ((x9105<<x9106)*(x9107*x9108));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x9169 = INT16_MAX;
	uint16_t x9170 = 1U;
	int64_t x9172 = 73861277207LL;
	volatile int64_t t97 = -664929115497464LL;

    t97 = ((x9169<<x9170)*(x9171*x9172));

    if (t97 != -43563824464351842LL) { NG(); } else { ; }
	
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


    return 0;
}

