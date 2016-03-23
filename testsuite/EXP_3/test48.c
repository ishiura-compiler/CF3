
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

int8_t x7 = 7;
static int16_t x8 = 1;
static uint64_t x50 = UINT64_MAX;
volatile uint64_t x53 = 3067LLU;
int8_t x56 = -1;
volatile uint64_t t2 = 57338216LLU;
uint64_t x248 = UINT64_MAX;
int64_t x270 = INT64_MIN;
int16_t x272 = -1;
int8_t x381 = INT8_MIN;
int8_t x383 = -1;
int16_t x521 = 7;
volatile uint8_t x524 = 43U;
volatile int64_t x736 = -1LL;
static int64_t t12 = -2873637447230721411LL;
int32_t x977 = -1;
int16_t x1006 = INT16_MIN;
static volatile int32_t t14 = -3713434;
uint64_t x1134 = UINT64_MAX;
uint8_t x1136 = 8U;
uint64_t t15 = 66LLU;
static uint32_t t16 = 1304U;
static uint8_t x1336 = 5U;
int8_t x1722 = 1;
static uint32_t x1723 = UINT32_MAX;
volatile uint16_t x1724 = 8U;
int32_t x1756 = -1;
int64_t x1957 = INT64_MIN;
int64_t t23 = -4501812094420416285LL;
int8_t x2107 = 4;
uint64_t x2211 = UINT64_MAX;
static volatile uint16_t x2395 = 1U;
uint64_t x2501 = 77984869697693LLU;
volatile uint32_t x2729 = UINT32_MAX;
int16_t x2755 = -1;
uint64_t x2857 = 1448180673764775095LLU;
volatile uint64_t t35 = 216LLU;
int64_t x3074 = INT64_MAX;
int64_t x3076 = -1LL;
uint64_t x3106 = 1038929500712933LLU;
uint32_t x3108 = UINT32_MAX;
static volatile int8_t x3130 = INT8_MAX;
static volatile uint32_t x3632 = UINT32_MAX;
volatile int64_t x3731 = -1LL;
int32_t x3802 = INT32_MIN;
uint32_t x3804 = 1U;
volatile int64_t t45 = 3749765747LL;
int32_t x3827 = 7;
uint8_t x3839 = 1U;
uint64_t t47 = 12125LLU;
uint8_t x3912 = 0U;
uint64_t x3925 = UINT64_MAX;
static int8_t x3927 = 0;
int16_t x3971 = -1;
static int16_t x4286 = 916;
uint16_t x4287 = 1U;
volatile int8_t x4319 = 1;
uint16_t x4439 = 1U;
uint64_t t56 = 1364130222404LLU;
int16_t x4449 = -8;
int32_t t58 = 873;
static int16_t x4681 = -1;
static int8_t x4684 = -1;
volatile int8_t x4691 = 7;
volatile uint64_t t62 = 1222227840988LLU;
volatile int32_t x4885 = -5;
uint8_t x4887 = 43U;
int16_t x4888 = -1;
static volatile int8_t x5077 = INT8_MAX;
static uint16_t x5078 = 5U;
static uint32_t x5159 = UINT32_MAX;
static uint8_t x5160 = 12U;
static int32_t t65 = 11472474;
int32_t t67 = 8;
uint8_t x5668 = 7U;
uint32_t t72 = 1843U;
int32_t x6207 = 9;
int32_t t73 = -108078105;
int8_t x6489 = INT8_MIN;
int64_t x6518 = -1LL;
int32_t x6526 = INT32_MIN;
static int32_t t76 = -1944824;


void f0(void) {
    	int8_t x5 = INT8_MAX;
	uint64_t x6 = 267814LLU;
	static uint64_t t0 = 121540671873710LLU;

    t0 = ((x5/x6)<<(x7+x8));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x49 = 5LL;
	int16_t x51 = -78;
	static volatile int8_t x52 = INT8_MAX;
	uint64_t t1 = 491466773994300205LLU;

    t1 = ((x49/x50)<<(x51+x52));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x54 = 6U;
	volatile int32_t x55 = 61;

    t2 = ((x53/x54)<<(x55+x56));

    if (t2 != 17293822569102704640LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x117 = INT32_MIN;
	static uint32_t x118 = UINT32_MAX;
	static int16_t x119 = -1;
	uint16_t x120 = 3U;
	volatile uint32_t t3 = 770319U;

    t3 = ((x117/x118)<<(x119+x120));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x245 = 0;
	int8_t x246 = -1;
	static uint8_t x247 = 3U;
	static int32_t t4 = -963275627;

    t4 = ((x245/x246)<<(x247+x248));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x269 = -5;
	volatile int16_t x271 = 52;
	int64_t t5 = -15694158538461900LL;

    t5 = ((x269/x270)<<(x271+x272));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x382 = -4;
	volatile uint16_t x384 = 1U;
	volatile int32_t t6 = 44724;

    t6 = ((x381/x382)<<(x383+x384));

    if (t6 != 32) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x522 = INT64_MIN;
	static volatile int32_t x523 = -1;
	int64_t t7 = -514567426LL;

    t7 = ((x521/x522)<<(x523+x524));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x569 = UINT64_MAX;
	int16_t x570 = INT16_MIN;
	uint8_t x571 = 1U;
	int64_t x572 = -1LL;
	uint64_t t8 = 30LLU;

    t8 = ((x569/x570)<<(x571+x572));

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x685 = UINT16_MAX;
	int64_t x686 = INT64_MIN;
	int16_t x687 = 0;
	static int8_t x688 = 1;
	int64_t t9 = -25007LL;

    t9 = ((x685/x686)<<(x687+x688));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x733 = INT8_MAX;
	static int16_t x734 = -1721;
	int16_t x735 = 7;
	int32_t t10 = -8969110;

    t10 = ((x733/x734)<<(x735+x736));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x897 = INT16_MAX;
	int32_t x898 = 3885;
	int16_t x899 = 1;
	int8_t x900 = 7;
	int32_t t11 = 20;

    t11 = ((x897/x898)<<(x899+x900));

    if (t11 != 2048) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x913 = 260U;
	static int64_t x914 = INT64_MIN;
	int16_t x915 = -1;
	static int8_t x916 = 10;

    t12 = ((x913/x914)<<(x915+x916));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x978 = INT64_MIN;
	int16_t x979 = -1;
	static volatile uint32_t x980 = 28U;
	int64_t t13 = -1794428720224231072LL;

    t13 = ((x977/x978)<<(x979+x980));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1005 = INT16_MIN;
	int64_t x1007 = -1LL;
	uint32_t x1008 = 18U;

    t14 = ((x1005/x1006)<<(x1007+x1008));

    if (t14 != 131072) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x1133 = -8981;
	uint64_t x1135 = UINT64_MAX;

    t15 = ((x1133/x1134)<<(x1135+x1136));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1245 = 94965935U;
	static uint8_t x1246 = 5U;
	volatile uint8_t x1247 = 1U;
	int8_t x1248 = -1;

    t16 = ((x1245/x1246)<<(x1247+x1248));

    if (t16 != 18993187U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1305 = 3U;
	int16_t x1306 = INT16_MIN;
	int8_t x1307 = 1;
	uint32_t x1308 = UINT32_MAX;
	volatile int32_t t17 = -121676;

    t17 = ((x1305/x1306)<<(x1307+x1308));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1333 = 1547;
	uint32_t x1334 = 35019U;
	volatile uint32_t x1335 = UINT32_MAX;
	volatile uint32_t t18 = 70041738U;

    t18 = ((x1333/x1334)<<(x1335+x1336));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1657 = -1LL;
	int16_t x1658 = 3;
	static uint32_t x1659 = 12U;
	volatile int32_t x1660 = -1;
	volatile int64_t t19 = -11742874LL;

    t19 = ((x1657/x1658)<<(x1659+x1660));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1721 = UINT16_MAX;
	volatile int32_t t20 = -43619;

    t20 = ((x1721/x1722)<<(x1723+x1724));

    if (t20 != 8388480) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x1753 = UINT8_MAX;
	int64_t x1754 = INT64_MAX;
	uint32_t x1755 = 20U;
	static volatile int64_t t21 = 4143675371863LL;

    t21 = ((x1753/x1754)<<(x1755+x1756));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x1797 = 734LLU;
	uint32_t x1798 = 23428082U;
	volatile uint8_t x1799 = 2U;
	uint64_t x1800 = 58LLU;
	volatile uint64_t t22 = 838154263LLU;

    t22 = ((x1797/x1798)<<(x1799+x1800));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x1958 = INT64_MIN;
	int8_t x1959 = -1;
	static uint8_t x1960 = 40U;

    t23 = ((x1957/x1958)<<(x1959+x1960));

    if (t23 != 549755813888LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1977 = 9;
	int64_t x1978 = 246LL;
	static int16_t x1979 = 0;
	uint8_t x1980 = 1U;
	int64_t t24 = -2250556579812694LL;

    t24 = ((x1977/x1978)<<(x1979+x1980));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x2001 = 14;
	uint32_t x2002 = UINT32_MAX;
	uint8_t x2003 = 13U;
	int16_t x2004 = -1;
	volatile uint32_t t25 = 148U;

    t25 = ((x2001/x2002)<<(x2003+x2004));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x2105 = INT16_MAX;
	int32_t x2106 = INT32_MIN;
	int32_t x2108 = -1;
	volatile int32_t t26 = -1;

    t26 = ((x2105/x2106)<<(x2107+x2108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2209 = INT16_MAX;
	int16_t x2210 = INT16_MIN;
	int16_t x2212 = 3;
	int32_t t27 = -6353;

    t27 = ((x2209/x2210)<<(x2211+x2212));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x2313 = INT8_MIN;
	volatile int16_t x2314 = INT16_MIN;
	uint16_t x2315 = 0U;
	uint8_t x2316 = 3U;
	volatile int32_t t28 = 2;

    t28 = ((x2313/x2314)<<(x2315+x2316));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2341 = 0;
	int32_t x2342 = 13;
	uint64_t x2343 = 14LLU;
	volatile int8_t x2344 = -6;
	volatile int32_t t29 = 6115;

    t29 = ((x2341/x2342)<<(x2343+x2344));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x2393 = -5;
	static int32_t x2394 = INT32_MAX;
	uint64_t x2396 = UINT64_MAX;
	volatile int32_t t30 = 312581;

    t30 = ((x2393/x2394)<<(x2395+x2396));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x2502 = UINT64_MAX;
	uint16_t x2503 = 9U;
	int64_t x2504 = -1LL;
	uint64_t t31 = 2172536318877170LLU;

    t31 = ((x2501/x2502)<<(x2503+x2504));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x2730 = INT64_MIN;
	static uint8_t x2731 = 28U;
	int64_t x2732 = -1LL;
	volatile int64_t t32 = -56274LL;

    t32 = ((x2729/x2730)<<(x2731+x2732));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x2753 = 1007415080LLU;
	int16_t x2754 = 2219;
	volatile int32_t x2756 = 1;
	volatile uint64_t t33 = 4580639LLU;

    t33 = ((x2753/x2754)<<(x2755+x2756));

    if (t33 != 453995LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x2789 = 0U;
	static volatile int16_t x2790 = 140;
	uint8_t x2791 = 8U;
	static int8_t x2792 = 0;
	static uint32_t t34 = 610214U;

    t34 = ((x2789/x2790)<<(x2791+x2792));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2858 = INT8_MIN;
	static uint16_t x2859 = 27U;
	volatile int8_t x2860 = -1;

    t35 = ((x2857/x2858)<<(x2859+x2860));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2989 = 125LL;
	static volatile int64_t x2990 = 1734069869711214LL;
	uint16_t x2991 = 1U;
	int8_t x2992 = 15;
	int64_t t36 = 16929LL;

    t36 = ((x2989/x2990)<<(x2991+x2992));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint8_t x3053 = UINT8_MAX;
	int64_t x3054 = INT64_MIN;
	uint32_t x3055 = UINT32_MAX;
	int32_t x3056 = 48;
	volatile int64_t t37 = 1380349949LL;

    t37 = ((x3053/x3054)<<(x3055+x3056));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x3073 = -34;
	static uint8_t x3075 = 25U;
	int64_t t38 = 267543715170LL;

    t38 = ((x3073/x3074)<<(x3075+x3076));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x3105 = 3;
	int8_t x3107 = 48;
	uint64_t t39 = 8026286429593290792LLU;

    t39 = ((x3105/x3106)<<(x3107+x3108));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x3129 = 18LLU;
	uint8_t x3131 = 1U;
	uint8_t x3132 = 33U;
	volatile uint64_t t40 = 136LLU;

    t40 = ((x3129/x3130)<<(x3131+x3132));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x3477 = -1;
	int16_t x3478 = -801;
	int64_t x3479 = -1LL;
	static int8_t x3480 = 1;
	volatile int32_t t41 = 0;

    t41 = ((x3477/x3478)<<(x3479+x3480));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x3565 = 1;
	uint32_t x3566 = 61937U;
	int8_t x3567 = -1;
	int32_t x3568 = 1;
	volatile uint32_t t42 = 79000U;

    t42 = ((x3565/x3566)<<(x3567+x3568));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x3629 = -15458;
	static int64_t x3630 = -12132113369LL;
	int8_t x3631 = 1;
	int64_t t43 = -641597065920LL;

    t43 = ((x3629/x3630)<<(x3631+x3632));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x3729 = INT32_MIN;
	static int8_t x3730 = INT8_MIN;
	int16_t x3732 = 2;
	int32_t t44 = -7;

    t44 = ((x3729/x3730)<<(x3731+x3732));

    if (t44 != 33554432) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x3801 = INT64_MIN;
	uint32_t x3803 = UINT32_MAX;

    t45 = ((x3801/x3802)<<(x3803+x3804));

    if (t45 != 4294967296LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x3825 = -3309;
	int64_t x3826 = -201338LL;
	int64_t x3828 = -1LL;
	int64_t t46 = 70071LL;

    t46 = ((x3825/x3826)<<(x3827+x3828));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x3837 = INT8_MIN;
	uint64_t x3838 = UINT64_MAX;
	uint64_t x3840 = UINT64_MAX;

    t47 = ((x3837/x3838)<<(x3839+x3840));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x3909 = 123U;
	int16_t x3910 = INT16_MAX;
	uint16_t x3911 = 0U;
	volatile int32_t t48 = 119352483;

    t48 = ((x3909/x3910)<<(x3911+x3912));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x3926 = 5U;
	uint16_t x3928 = 62U;
	uint64_t t49 = 268388916306845LLU;

    t49 = ((x3925/x3926)<<(x3927+x3928));

    if (t49 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x3969 = -11769;
	uint16_t x3970 = UINT16_MAX;
	int8_t x3972 = 1;
	volatile int32_t t50 = 220;

    t50 = ((x3969/x3970)<<(x3971+x3972));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x4149 = UINT64_MAX;
	static volatile uint8_t x4150 = 50U;
	int8_t x4151 = -6;
	uint8_t x4152 = 7U;
	uint64_t t51 = 505800LLU;

    t51 = ((x4149/x4150)<<(x4151+x4152));

    if (t51 != 737869762948382064LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x4181 = 40295111473826271LLU;
	static int8_t x4182 = INT8_MIN;
	uint32_t x4183 = UINT32_MAX;
	static int8_t x4184 = 2;
	uint64_t t52 = 56988LLU;

    t52 = ((x4181/x4182)<<(x4183+x4184));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x4285 = 26096U;
	uint64_t x4288 = 2LLU;
	int32_t t53 = -3;

    t53 = ((x4285/x4286)<<(x4287+x4288));

    if (t53 != 224) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x4317 = -1LL;
	volatile uint8_t x4318 = UINT8_MAX;
	int32_t x4320 = -1;
	int64_t t54 = 68348LL;

    t54 = ((x4317/x4318)<<(x4319+x4320));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x4345 = -1;
	int16_t x4346 = INT16_MIN;
	int16_t x4347 = -1;
	uint8_t x4348 = 3U;
	volatile int32_t t55 = 3276;

    t55 = ((x4345/x4346)<<(x4347+x4348));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x4437 = UINT64_MAX;
	static int8_t x4438 = -4;
	int64_t x4440 = -1LL;

    t56 = ((x4437/x4438)<<(x4439+x4440));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x4441 = -1;
	int8_t x4442 = -1;
	int32_t x4443 = 1;
	uint8_t x4444 = 0U;
	int32_t t57 = 43;

    t57 = ((x4441/x4442)<<(x4443+x4444));

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x4450 = -126;
	static int8_t x4451 = 6;
	volatile uint16_t x4452 = 18U;

    t58 = ((x4449/x4450)<<(x4451+x4452));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x4573 = INT8_MAX;
	int32_t x4574 = INT32_MIN;
	uint16_t x4575 = 7U;
	uint32_t x4576 = UINT32_MAX;
	int32_t t59 = 192029;

    t59 = ((x4573/x4574)<<(x4575+x4576));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x4682 = 2851997LL;
	uint16_t x4683 = 54U;
	volatile int64_t t60 = 3372819001945LL;

    t60 = ((x4681/x4682)<<(x4683+x4684));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x4689 = INT32_MAX;
	uint32_t x4690 = UINT32_MAX;
	int16_t x4692 = 0;
	uint32_t t61 = 509299U;

    t61 = ((x4689/x4690)<<(x4691+x4692));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x4729 = UINT16_MAX;
	uint64_t x4730 = 132464LLU;
	int64_t x4731 = 44LL;
	volatile int8_t x4732 = -1;

    t62 = ((x4729/x4730)<<(x4731+x4732));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x4886 = INT64_MIN;
	volatile int64_t t63 = 320LL;

    t63 = ((x4885/x4886)<<(x4887+x4888));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x5079 = 5U;
	uint64_t x5080 = UINT64_MAX;
	volatile int32_t t64 = 12726;

    t64 = ((x5077/x5078)<<(x5079+x5080));

    if (t64 != 400) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x5157 = UINT8_MAX;
	static volatile int32_t x5158 = 1;

    t65 = ((x5157/x5158)<<(x5159+x5160));

    if (t65 != 522240) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x5205 = -3LL;
	static uint8_t x5206 = 72U;
	uint8_t x5207 = 1U;
	int16_t x5208 = -1;
	int64_t t66 = -2045010480906376LL;

    t66 = ((x5205/x5206)<<(x5207+x5208));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x5345 = -1;
	volatile int8_t x5346 = INT8_MAX;
	uint8_t x5347 = 14U;
	volatile uint8_t x5348 = 14U;

    t67 = ((x5345/x5346)<<(x5347+x5348));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x5405 = 0;
	volatile uint64_t x5406 = UINT64_MAX;
	static int32_t x5407 = -1;
	int32_t x5408 = 2;
	uint64_t t68 = 63336289LLU;

    t68 = ((x5405/x5406)<<(x5407+x5408));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x5457 = 1329U;
	int32_t x5458 = -1;
	uint64_t x5459 = 12LLU;
	int16_t x5460 = -1;
	uint32_t t69 = 4715U;

    t69 = ((x5457/x5458)<<(x5459+x5460));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x5665 = 12U;
	int32_t x5666 = INT32_MAX;
	uint64_t x5667 = 2LLU;
	volatile int32_t t70 = 1;

    t70 = ((x5665/x5666)<<(x5667+x5668));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x5909 = -1;
	volatile uint64_t x5910 = UINT64_MAX;
	uint64_t x5911 = 25LLU;
	uint16_t x5912 = 4U;
	uint64_t t71 = 121263LLU;

    t71 = ((x5909/x5910)<<(x5911+x5912));

    if (t71 != 536870912LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x6037 = UINT32_MAX;
	int32_t x6038 = INT32_MIN;
	uint64_t x6039 = UINT64_MAX;
	int16_t x6040 = 7;

    t72 = ((x6037/x6038)<<(x6039+x6040));

    if (t72 != 64U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x6205 = -2;
	static int32_t x6206 = -1;
	uint32_t x6208 = UINT32_MAX;

    t73 = ((x6205/x6206)<<(x6207+x6208));

    if (t73 != 512) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x6490 = 173051652585LLU;
	uint64_t x6491 = UINT64_MAX;
	volatile uint16_t x6492 = 35U;
	volatile uint64_t t74 = 30593378LLU;

    t74 = ((x6489/x6490)<<(x6491+x6492));

    if (t74 != 1831318237619421184LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x6517 = INT32_MIN;
	int8_t x6519 = 7;
	uint32_t x6520 = UINT32_MAX;
	int64_t t75 = 315339630LL;

    t75 = ((x6517/x6518)<<(x6519+x6520));

    if (t75 != 137438953472LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x6525 = 15U;
	uint16_t x6527 = 15U;
	uint32_t x6528 = 2U;

    t76 = ((x6525/x6526)<<(x6527+x6528));

    if (t76 != 0) { NG(); } else { ; }
	
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


    return 0;
}

