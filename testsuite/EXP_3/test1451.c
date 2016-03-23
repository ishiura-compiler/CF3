
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

uint16_t x9 = 0U;
volatile uint8_t x10 = 2U;
int32_t t0 = 81;
uint16_t x98 = 6U;
int16_t x99 = INT16_MIN;
volatile int32_t t1 = -9698649;
uint32_t x163 = UINT32_MAX;
volatile int16_t x251 = INT16_MIN;
static volatile int32_t x252 = -1;
volatile int32_t t7 = 21299;
uint8_t x375 = 0U;
int32_t t10 = -686007;
int8_t x809 = 28;
int32_t x864 = 6067;
volatile uint16_t x1070 = 22U;
int8_t x1071 = INT8_MAX;
static int16_t x1162 = 24;
int16_t x1164 = -68;
uint8_t x1374 = 1U;
volatile uint32_t x1431 = 881581U;
volatile int32_t t24 = 969;
static uint16_t x1456 = UINT16_MAX;
static int32_t x1497 = 58;
uint16_t x1498 = 4U;
volatile uint8_t x1500 = UINT8_MAX;
uint64_t x1561 = 7LLU;
uint64_t x1562 = 38LLU;
int32_t t27 = 8;
int16_t x1652 = -382;
int32_t t29 = -962902;
int16_t x1672 = 210;
int16_t x1813 = INT16_MAX;
uint16_t x1814 = 16U;
uint64_t x1965 = 287345869648920787LLU;
uint64_t x1968 = 239384LLU;
int16_t x2168 = -1;
volatile int32_t t37 = -2;
int32_t x2255 = INT32_MAX;
int32_t x2337 = 7;
uint64_t x2339 = 178835137507986LLU;
int16_t x2340 = -1;
int16_t x2409 = 1;
uint8_t x2410 = 8U;
int64_t x2432 = INT64_MIN;
uint16_t x2702 = 1U;
uint8_t x2776 = 0U;
int8_t x2782 = 5;
int32_t t47 = -35621533;
int32_t t48 = 3190205;
static uint64_t x2829 = UINT64_MAX;
uint64_t x2925 = 87969429340039LLU;
int16_t x2928 = -19;
int32_t x2967 = INT32_MIN;
uint32_t x3114 = 0U;
int8_t x3115 = 0;
uint64_t x3296 = 54853191835686LLU;
uint16_t x3481 = UINT16_MAX;
static uint8_t x3482 = 8U;


void f0(void) {
    	int32_t x11 = INT32_MIN;
	uint16_t x12 = UINT16_MAX;

    t0 = ((x9<<x10)>(x11==x12));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x97 = UINT8_MAX;
	static int64_t x100 = INT64_MIN;

    t1 = ((x97<<x98)>(x99==x100));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x113 = 9005562341275LLU;
	uint16_t x114 = 5U;
	static int16_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	int32_t t2 = -13768;

    t2 = ((x113<<x114)>(x115==x116));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x161 = 4;
	int8_t x162 = 3;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t3 = 1806613;

    t3 = ((x161<<x162)>(x163==x164));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x169 = UINT8_MAX;
	static volatile uint16_t x170 = 1U;
	volatile int16_t x171 = INT16_MIN;
	volatile int16_t x172 = 1;
	int32_t t4 = -130881;

    t4 = ((x169<<x170)>(x171==x172));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x209 = 31731024U;
	int8_t x210 = 7;
	int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MIN;
	int32_t t5 = -56060;

    t5 = ((x209<<x210)>(x211==x212));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x249 = 13214048336871LLU;
	int32_t x250 = 10;
	int32_t t6 = 91690616;

    t6 = ((x249<<x250)>(x251==x252));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x269 = UINT32_MAX;
	static volatile int16_t x270 = 1;
	volatile int32_t x271 = 7;
	uint32_t x272 = 619702612U;

    t7 = ((x269<<x270)>(x271==x272));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x329 = 1853;
	int16_t x330 = 12;
	uint64_t x331 = 9060143478153733634LLU;
	int8_t x332 = INT8_MIN;
	static int32_t t8 = 72285;

    t8 = ((x329<<x330)>(x331==x332));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x373 = 1U;
	uint16_t x374 = 19U;
	int32_t x376 = -77;
	static volatile int32_t t9 = -3701608;

    t9 = ((x373<<x374)>(x375==x376));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x669 = 7947LLU;
	uint8_t x670 = 4U;
	static volatile int64_t x671 = INT64_MIN;
	int16_t x672 = INT16_MAX;

    t10 = ((x669<<x670)>(x671==x672));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x677 = 912U;
	static volatile int8_t x678 = 2;
	uint16_t x679 = UINT16_MAX;
	int8_t x680 = 5;
	volatile int32_t t11 = -26361981;

    t11 = ((x677<<x678)>(x679==x680));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x793 = 49441536867LL;
	uint8_t x794 = 26U;
	uint32_t x795 = UINT32_MAX;
	uint64_t x796 = 1549345834LLU;
	int32_t t12 = 28764;

    t12 = ((x793<<x794)>(x795==x796));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x810 = 3U;
	int32_t x811 = INT32_MIN;
	uint32_t x812 = 3848U;
	int32_t t13 = -60304575;

    t13 = ((x809<<x810)>(x811==x812));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x817 = UINT8_MAX;
	uint8_t x818 = 4U;
	int64_t x819 = -1LL;
	static int32_t x820 = -1;
	static volatile int32_t t14 = 1;

    t14 = ((x817<<x818)>(x819==x820));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x861 = UINT8_MAX;
	uint32_t x862 = 1U;
	int64_t x863 = 1886534417714368LL;
	int32_t t15 = -60811275;

    t15 = ((x861<<x862)>(x863==x864));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x905 = 297405076U;
	int32_t x906 = 0;
	volatile int64_t x907 = -9197031312776LL;
	uint16_t x908 = 9603U;
	volatile int32_t t16 = 149657137;

    t16 = ((x905<<x906)>(x907==x908));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x1049 = INT16_MAX;
	int8_t x1050 = 0;
	static int16_t x1051 = -1;
	int16_t x1052 = INT16_MIN;
	int32_t t17 = 846834190;

    t17 = ((x1049<<x1050)>(x1051==x1052));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x1069 = INT8_MAX;
	static volatile uint8_t x1072 = 32U;
	volatile int32_t t18 = 353;

    t18 = ((x1069<<x1070)>(x1071==x1072));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1161 = 34;
	static volatile int16_t x1163 = INT16_MAX;
	static volatile int32_t t19 = 32963394;

    t19 = ((x1161<<x1162)>(x1163==x1164));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1297 = INT32_MAX;
	volatile uint8_t x1298 = 0U;
	int32_t x1299 = -1;
	uint32_t x1300 = 9702321U;
	volatile int32_t t20 = -15510681;

    t20 = ((x1297<<x1298)>(x1299==x1300));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x1345 = 110LLU;
	uint16_t x1346 = 31U;
	int16_t x1347 = 26;
	int32_t x1348 = INT32_MAX;
	volatile int32_t t21 = -4;

    t21 = ((x1345<<x1346)>(x1347==x1348));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x1373 = UINT64_MAX;
	uint64_t x1375 = 43264099377731LLU;
	int32_t x1376 = INT32_MAX;
	int32_t t22 = -14476;

    t22 = ((x1373<<x1374)>(x1375==x1376));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1385 = UINT64_MAX;
	int32_t x1386 = 1;
	int64_t x1387 = -1LL;
	int32_t x1388 = 372;
	volatile int32_t t23 = -292412666;

    t23 = ((x1385<<x1386)>(x1387==x1388));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1429 = UINT8_MAX;
	uint16_t x1430 = 3U;
	volatile int32_t x1432 = INT32_MIN;

    t24 = ((x1429<<x1430)>(x1431==x1432));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x1453 = 4U;
	uint8_t x1454 = 7U;
	uint16_t x1455 = UINT16_MAX;
	static int32_t t25 = 398795;

    t25 = ((x1453<<x1454)>(x1455==x1456));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1499 = INT8_MIN;
	volatile int32_t t26 = 2959565;

    t26 = ((x1497<<x1498)>(x1499==x1500));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x1563 = 224618599230718LLU;
	static volatile int32_t x1564 = -3086098;

    t27 = ((x1561<<x1562)>(x1563==x1564));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1601 = UINT64_MAX;
	static uint16_t x1602 = 1U;
	int16_t x1603 = INT16_MAX;
	int8_t x1604 = -8;
	volatile int32_t t28 = -977232;

    t28 = ((x1601<<x1602)>(x1603==x1604));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1649 = UINT8_MAX;
	uint64_t x1650 = 14LLU;
	static uint16_t x1651 = UINT16_MAX;

    t29 = ((x1649<<x1650)>(x1651==x1652));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x1669 = 89U;
	uint16_t x1670 = 14U;
	int16_t x1671 = INT16_MAX;
	static volatile int32_t t30 = -189897;

    t30 = ((x1669<<x1670)>(x1671==x1672));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x1815 = INT32_MAX;
	static volatile uint64_t x1816 = UINT64_MAX;
	volatile int32_t t31 = -6637016;

    t31 = ((x1813<<x1814)>(x1815==x1816));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x1873 = UINT64_MAX;
	volatile uint32_t x1874 = 42U;
	uint8_t x1875 = UINT8_MAX;
	int32_t x1876 = 15281;
	int32_t t32 = 144518;

    t32 = ((x1873<<x1874)>(x1875==x1876));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1966 = 2;
	int16_t x1967 = -1;
	volatile int32_t t33 = -15140428;

    t33 = ((x1965<<x1966)>(x1967==x1968));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x2013 = 1660458010461427847LLU;
	int32_t x2014 = 3;
	int64_t x2015 = 1192557751194LL;
	int8_t x2016 = INT8_MIN;
	int32_t t34 = 13384;

    t34 = ((x2013<<x2014)>(x2015==x2016));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x2049 = UINT64_MAX;
	static uint16_t x2050 = 61U;
	int16_t x2051 = -2;
	volatile int32_t x2052 = -1;
	int32_t t35 = -3;

    t35 = ((x2049<<x2050)>(x2051==x2052));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x2165 = 27438U;
	int32_t x2166 = 2;
	int32_t x2167 = INT32_MAX;
	int32_t t36 = 37206;

    t36 = ((x2165<<x2166)>(x2167==x2168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x2197 = 59U;
	int32_t x2198 = 1;
	uint64_t x2199 = 2542815LLU;
	int64_t x2200 = -3032339LL;

    t37 = ((x2197<<x2198)>(x2199==x2200));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x2233 = 16U;
	uint64_t x2234 = 22LLU;
	int32_t x2235 = -1;
	static int16_t x2236 = INT16_MIN;
	int32_t t38 = -193;

    t38 = ((x2233<<x2234)>(x2235==x2236));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x2249 = 79326U;
	volatile uint8_t x2250 = 5U;
	int64_t x2251 = -1LL;
	int8_t x2252 = INT8_MAX;
	static volatile int32_t t39 = -7888760;

    t39 = ((x2249<<x2250)>(x2251==x2252));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x2253 = 3LLU;
	int16_t x2254 = 11;
	static int16_t x2256 = INT16_MIN;
	static int32_t t40 = -2939;

    t40 = ((x2253<<x2254)>(x2255==x2256));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x2338 = 1U;
	volatile int32_t t41 = -1694;

    t41 = ((x2337<<x2338)>(x2339==x2340));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x2411 = INT64_MIN;
	int16_t x2412 = 4;
	int32_t t42 = 8270904;

    t42 = ((x2409<<x2410)>(x2411==x2412));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x2413 = 465751118241LL;
	static int8_t x2414 = 2;
	uint8_t x2415 = 120U;
	uint8_t x2416 = UINT8_MAX;
	int32_t t43 = -429989223;

    t43 = ((x2413<<x2414)>(x2415==x2416));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2429 = 612314LLU;
	uint8_t x2430 = 15U;
	static int32_t x2431 = INT32_MIN;
	volatile int32_t t44 = 337;

    t44 = ((x2429<<x2430)>(x2431==x2432));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x2701 = 10927;
	int16_t x2703 = 0;
	uint8_t x2704 = UINT8_MAX;
	volatile int32_t t45 = -12224119;

    t45 = ((x2701<<x2702)>(x2703==x2704));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x2773 = UINT64_MAX;
	static uint16_t x2774 = 20U;
	int16_t x2775 = -1;
	volatile int32_t t46 = -451493;

    t46 = ((x2773<<x2774)>(x2775==x2776));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x2781 = UINT8_MAX;
	volatile int8_t x2783 = INT8_MIN;
	static uint16_t x2784 = UINT16_MAX;

    t47 = ((x2781<<x2782)>(x2783==x2784));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x2797 = UINT16_MAX;
	uint16_t x2798 = 1U;
	int8_t x2799 = INT8_MAX;
	uint64_t x2800 = 3158083LLU;

    t48 = ((x2797<<x2798)>(x2799==x2800));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x2830 = 1LL;
	int8_t x2831 = 1;
	volatile int64_t x2832 = INT64_MIN;
	volatile int32_t t49 = -423977083;

    t49 = ((x2829<<x2830)>(x2831==x2832));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x2921 = UINT64_MAX;
	uint16_t x2922 = 27U;
	uint32_t x2923 = UINT32_MAX;
	uint16_t x2924 = 3462U;
	int32_t t50 = 951;

    t50 = ((x2921<<x2922)>(x2923==x2924));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x2926 = 4U;
	uint32_t x2927 = 1521426736U;
	volatile int32_t t51 = -3885;

    t51 = ((x2925<<x2926)>(x2927==x2928));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x2965 = 1U;
	static int8_t x2966 = 5;
	int32_t x2968 = INT32_MAX;
	static volatile int32_t t52 = 1150232;

    t52 = ((x2965<<x2966)>(x2967==x2968));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x3113 = 1U;
	volatile int8_t x3116 = INT8_MIN;
	int32_t t53 = 204345;

    t53 = ((x3113<<x3114)>(x3115==x3116));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x3193 = 504LLU;
	int16_t x3194 = 0;
	uint64_t x3195 = UINT64_MAX;
	int8_t x3196 = INT8_MIN;
	volatile int32_t t54 = -1;

    t54 = ((x3193<<x3194)>(x3195==x3196));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x3197 = 10905;
	uint16_t x3198 = 1U;
	int32_t x3199 = -1471546;
	volatile int64_t x3200 = -1LL;
	static int32_t t55 = 9878140;

    t55 = ((x3197<<x3198)>(x3199==x3200));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x3253 = 21;
	static uint8_t x3254 = 7U;
	int16_t x3255 = 3749;
	int32_t x3256 = INT32_MIN;
	volatile int32_t t56 = 7425452;

    t56 = ((x3253<<x3254)>(x3255==x3256));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x3293 = 683245546305056182LLU;
	uint8_t x3294 = 12U;
	static int64_t x3295 = -1LL;
	volatile int32_t t57 = -1727195;

    t57 = ((x3293<<x3294)>(x3295==x3296));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x3297 = 1007U;
	int16_t x3298 = 4;
	uint64_t x3299 = 215372615281943LLU;
	uint8_t x3300 = 44U;
	int32_t t58 = -4341542;

    t58 = ((x3297<<x3298)>(x3299==x3300));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x3321 = 18;
	int8_t x3322 = 1;
	int16_t x3323 = 1875;
	int8_t x3324 = 34;
	int32_t t59 = -5;

    t59 = ((x3321<<x3322)>(x3323==x3324));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x3337 = UINT8_MAX;
	static int8_t x3338 = 1;
	static int16_t x3339 = 0;
	int32_t x3340 = INT32_MIN;
	int32_t t60 = 0;

    t60 = ((x3337<<x3338)>(x3339==x3340));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x3409 = UINT64_MAX;
	int8_t x3410 = 0;
	int32_t x3411 = INT32_MIN;
	static int32_t x3412 = INT32_MIN;
	volatile int32_t t61 = -463;

    t61 = ((x3409<<x3410)>(x3411==x3412));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x3483 = 20U;
	uint64_t x3484 = 30352417LLU;
	volatile int32_t t62 = 72001;

    t62 = ((x3481<<x3482)>(x3483==x3484));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x3513 = 6U;
	uint32_t x3514 = 2U;
	int16_t x3515 = INT16_MAX;
	volatile int32_t x3516 = -1;
	int32_t t63 = -622567;

    t63 = ((x3513<<x3514)>(x3515==x3516));

    if (t63 != 1) { NG(); } else { ; }
	
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


    return 0;
}

