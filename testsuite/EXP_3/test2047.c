
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

int8_t x85 = INT8_MAX;
int16_t x218 = -1;
int32_t x233 = -1;
uint64_t x339 = UINT64_MAX;
static int8_t x340 = 0;
volatile int64_t x361 = INT64_MIN;
uint8_t x363 = 30U;
static int16_t x369 = 381;
int8_t x371 = 6;
static uint16_t x438 = 2U;
int8_t x617 = 1;
int32_t t8 = 9;
uint16_t x648 = 0U;
int8_t x718 = INT8_MIN;
uint64_t t12 = 83862780682268LLU;
int32_t t13 = 1;
volatile int32_t x893 = INT32_MAX;
volatile uint64_t x895 = UINT64_MAX;
static int8_t x977 = INT8_MIN;
int8_t x979 = 19;
int8_t x1038 = INT8_MIN;
volatile int64_t x1385 = INT64_MAX;
volatile int16_t x1387 = 1;
int8_t x1538 = INT8_MIN;
int8_t x1540 = 22;
int8_t x1557 = -1;
uint8_t x1560 = 3U;
uint16_t x1570 = 1U;
int8_t x1572 = 2;
int64_t x1646 = -2856895787LL;
uint8_t x1648 = 2U;
volatile uint8_t x1664 = 2U;
uint64_t x1673 = 45532187LLU;
volatile int8_t x1755 = INT8_MAX;
uint16_t x1776 = 18U;
volatile int32_t t33 = -337;
int16_t x1869 = INT16_MIN;
static uint16_t x1871 = UINT16_MAX;
volatile int32_t t34 = 109542;
uint64_t x1904 = 0LLU;
volatile int32_t x1921 = 1853979;
static uint8_t x1924 = 11U;
static volatile int8_t x1925 = 0;
volatile uint32_t x2044 = 11U;
volatile uint64_t x2048 = 1LLU;
uint8_t x2060 = 0U;
volatile int32_t t40 = 31821;
static int32_t x2202 = INT32_MIN;
int8_t x2203 = INT8_MAX;
static volatile int32_t t44 = -28;
static volatile uint32_t x2357 = UINT32_MAX;
static int16_t x2390 = INT16_MIN;
volatile uint32_t t46 = 6162848U;
volatile int32_t x2449 = 123;
int8_t x2450 = -25;
int64_t x2510 = -1LL;
static volatile int8_t x2698 = -1;
static int32_t t53 = -1508583;
int16_t x2772 = 0;
uint8_t x2783 = 9U;
int8_t x2804 = 0;
int32_t t56 = -71;
uint16_t x2884 = 0U;
static volatile uint8_t x2901 = 1U;
int64_t x3082 = INT64_MAX;
static int32_t t60 = -3042;
volatile uint32_t t64 = 429490560U;
volatile int16_t x3493 = INT16_MIN;
int8_t x3494 = 0;
static volatile int32_t x3553 = INT32_MIN;
uint64_t x3593 = 0LLU;
static volatile uint32_t x3595 = UINT32_MAX;
volatile int64_t t71 = -41546218915LL;
int32_t x3677 = -11355427;
int8_t x3680 = 1;
volatile int16_t x3809 = INT16_MAX;
uint8_t x3812 = 1U;
volatile uint32_t x3836 = 8U;
static volatile int64_t x3862 = -1LL;
int64_t x3864 = 0LL;
volatile uint32_t t79 = 11806554U;
int16_t x3900 = 4;
int16_t x3929 = 2361;
static uint16_t x4197 = UINT16_MAX;
volatile uint32_t x4199 = 4727135U;
int32_t x4277 = -25626960;
volatile uint64_t x4279 = UINT64_MAX;
uint32_t x4280 = 15U;
int16_t x4359 = 13024;
volatile uint64_t x4477 = 64079LLU;
uint32_t x4480 = 0U;
static int32_t x4554 = INT32_MAX;
uint32_t x4575 = 1U;
uint16_t x4693 = 4670U;
static int64_t t93 = -511612731422195126LL;
uint64_t t96 = 138154728913327LLU;
uint16_t x4863 = 11179U;
int64_t x4875 = INT64_MAX;
static volatile int32_t x4909 = INT32_MAX;
uint16_t x5255 = UINT16_MAX;
int64_t x5289 = INT64_MAX;
int8_t x5390 = -1;
int8_t x5392 = 13;
uint16_t x5410 = 3U;
uint16_t x5455 = UINT16_MAX;
static int8_t x5456 = 27;
static int16_t x5561 = INT16_MIN;
uint32_t x5563 = 4393755U;
int16_t x5577 = -1;
int8_t x5580 = 3;
volatile int32_t t112 = 11;
int32_t x5589 = INT32_MAX;
uint32_t x5592 = 5U;
int32_t x5670 = INT32_MIN;
uint64_t x5671 = 3688169336846LLU;
int16_t x5873 = INT16_MIN;
int16_t x5876 = 0;
int16_t x5997 = INT16_MIN;
uint64_t x6070 = UINT64_MAX;
static volatile uint64_t x6107 = 22219985634792239LLU;
static uint64_t t122 = 32769963326790654LLU;
uint8_t x6154 = 23U;
uint64_t x6194 = 1210939LLU;
uint16_t x6195 = UINT16_MAX;
static int64_t x6222 = -1451LL;
static volatile int16_t x6223 = INT16_MAX;
static int32_t t126 = -303731;
int64_t x6238 = INT64_MAX;
int8_t x6257 = -1;
int32_t x6260 = 1;
volatile uint64_t t129 = 1473962910480LLU;
uint8_t x6450 = UINT8_MAX;
int64_t x6485 = -61761LL;
int8_t x6486 = -1;
static volatile uint16_t x6488 = 2U;
int64_t x6677 = INT64_MIN;
static int64_t x6680 = 0LL;
uint8_t x6811 = 6U;
int64_t x6841 = 7330LL;
uint8_t x6846 = UINT8_MAX;
volatile uint8_t x6847 = 27U;
int16_t x6905 = -1;
uint32_t x6906 = UINT32_MAX;
volatile int8_t x6907 = INT8_MAX;
int16_t x6938 = -1688;
static uint8_t x6940 = 31U;
uint8_t x6980 = 11U;
uint32_t t143 = 12U;


void f0(void) {
    	uint16_t x86 = UINT16_MAX;
	volatile uint32_t x87 = 17729400U;
	volatile uint8_t x88 = 5U;
	volatile uint32_t t0 = 24776012U;

    t0 = ((x85!=x86)*(x87>>x88));

    if (t0 != 554043U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x217 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	static uint16_t x220 = 28U;
	volatile int32_t t1 = -31523;

    t1 = ((x217!=x218)*(x219>>x220));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x234 = INT64_MAX;
	int8_t x235 = INT8_MAX;
	int16_t x236 = 9;
	int32_t t2 = -23227366;

    t2 = ((x233!=x234)*(x235>>x236));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MAX;
	volatile uint64_t t3 = UINT64_MAX;

    t3 = ((x337!=x338)*(x339>>x340));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x362 = 787621U;
	uint8_t x364 = 28U;
	int32_t t4 = -15;

    t4 = ((x361!=x362)*(x363>>x364));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x370 = UINT32_MAX;
	static volatile uint8_t x372 = 12U;
	static volatile int32_t t5 = -8;

    t5 = ((x369!=x370)*(x371>>x372));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x433 = 17677U;
	int32_t x434 = INT32_MIN;
	volatile int32_t x435 = INT32_MAX;
	volatile uint64_t x436 = 13LLU;
	int32_t t6 = 694728775;

    t6 = ((x433!=x434)*(x435>>x436));

    if (t6 != 262143) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x437 = -32;
	int16_t x439 = 5283;
	uint16_t x440 = 19U;
	volatile int32_t t7 = -24679004;

    t7 = ((x437!=x438)*(x439>>x440));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x618 = 0U;
	volatile uint16_t x619 = UINT16_MAX;
	int8_t x620 = 1;

    t8 = ((x617!=x618)*(x619>>x620));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x645 = -1;
	uint64_t x646 = UINT64_MAX;
	uint16_t x647 = 21247U;
	volatile int32_t t9 = 71189913;

    t9 = ((x645!=x646)*(x647>>x648));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x669 = 26;
	int8_t x670 = 0;
	volatile uint64_t x671 = UINT64_MAX;
	static uint32_t x672 = 8U;
	volatile uint64_t t10 = 62681552890LLU;

    t10 = ((x669!=x670)*(x671>>x672));

    if (t10 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x717 = 627226018LLU;
	uint32_t x719 = 27U;
	uint8_t x720 = 1U;
	volatile uint32_t t11 = 7324U;

    t11 = ((x717!=x718)*(x719>>x720));

    if (t11 != 13U) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint32_t x753 = UINT32_MAX;
	int8_t x754 = 2;
	uint64_t x755 = UINT64_MAX;
	int8_t x756 = 39;

    t12 = ((x753!=x754)*(x755>>x756));

    if (t12 != 33554431LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x805 = INT64_MIN;
	volatile int64_t x806 = -1LL;
	uint8_t x807 = UINT8_MAX;
	int16_t x808 = 5;

    t13 = ((x805!=x806)*(x807>>x808));

    if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x809 = 5113U;
	static int32_t x810 = INT32_MAX;
	static int16_t x811 = 2391;
	int8_t x812 = 0;
	volatile int32_t t14 = 1;

    t14 = ((x809!=x810)*(x811>>x812));

    if (t14 != 2391) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x894 = -1;
	volatile int8_t x896 = 0;
	static volatile uint64_t t15 = UINT64_MAX;

    t15 = ((x893!=x894)*(x895>>x896));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x978 = UINT16_MAX;
	volatile int8_t x980 = 18;
	static int32_t t16 = -100252;

    t16 = ((x977!=x978)*(x979>>x980));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x1017 = 28;
	int16_t x1018 = INT16_MAX;
	int64_t x1019 = INT64_MAX;
	uint32_t x1020 = 11U;
	volatile int64_t t17 = -15418521962LL;

    t17 = ((x1017!=x1018)*(x1019>>x1020));

    if (t17 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x1037 = INT16_MIN;
	uint16_t x1039 = 19966U;
	uint8_t x1040 = 0U;
	volatile int32_t t18 = 1;

    t18 = ((x1037!=x1038)*(x1039>>x1040));

    if (t18 != 19966) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1157 = 26U;
	uint16_t x1158 = 3065U;
	static uint64_t x1159 = 95104076213817919LLU;
	uint8_t x1160 = 3U;
	static volatile uint64_t t19 = 7079949894818LLU;

    t19 = ((x1157!=x1158)*(x1159>>x1160));

    if (t19 != 11888009526727239LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1161 = 91U;
	int8_t x1162 = 0;
	uint32_t x1163 = 826302172U;
	uint8_t x1164 = 23U;
	uint32_t t20 = 4U;

    t20 = ((x1161!=x1162)*(x1163>>x1164));

    if (t20 != 98U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1386 = 5555027058LLU;
	volatile int32_t x1388 = 2;
	volatile int32_t t21 = 0;

    t21 = ((x1385!=x1386)*(x1387>>x1388));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1457 = INT64_MIN;
	volatile int8_t x1458 = INT8_MIN;
	uint8_t x1459 = UINT8_MAX;
	uint16_t x1460 = 6U;
	int32_t t22 = -58;

    t22 = ((x1457!=x1458)*(x1459>>x1460));

    if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1537 = INT16_MIN;
	uint32_t x1539 = 740113U;
	uint32_t t23 = 2829U;

    t23 = ((x1537!=x1538)*(x1539>>x1540));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x1558 = INT32_MIN;
	int64_t x1559 = 120LL;
	volatile int64_t t24 = 31228LL;

    t24 = ((x1557!=x1558)*(x1559>>x1560));

    if (t24 != 15LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1569 = 112;
	static uint16_t x1571 = 2U;
	volatile int32_t t25 = 16623;

    t25 = ((x1569!=x1570)*(x1571>>x1572));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x1625 = UINT16_MAX;
	int32_t x1626 = -40;
	uint64_t x1627 = UINT64_MAX;
	int8_t x1628 = 0;
	uint64_t t26 = UINT64_MAX;

    t26 = ((x1625!=x1626)*(x1627>>x1628));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x1645 = INT32_MAX;
	uint64_t x1647 = 3604376398927404877LLU;
	volatile uint64_t t27 = 22119986630956LLU;

    t27 = ((x1645!=x1646)*(x1647>>x1648));

    if (t27 != 901094099731851219LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1661 = 19U;
	int8_t x1662 = INT8_MAX;
	static uint32_t x1663 = 1337629U;
	volatile uint32_t t28 = 2884U;

    t28 = ((x1661!=x1662)*(x1663>>x1664));

    if (t28 != 334407U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x1674 = UINT32_MAX;
	static uint16_t x1675 = 513U;
	volatile int8_t x1676 = 2;
	int32_t t29 = 191;

    t29 = ((x1673!=x1674)*(x1675>>x1676));

    if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x1753 = 1321U;
	int32_t x1754 = -1;
	int8_t x1756 = 0;
	volatile int32_t t30 = 473241;

    t30 = ((x1753!=x1754)*(x1755>>x1756));

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1765 = 51U;
	uint64_t x1766 = 860795706LLU;
	int64_t x1767 = 55212265LL;
	static int8_t x1768 = 27;
	int64_t t31 = -117292LL;

    t31 = ((x1765!=x1766)*(x1767>>x1768));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x1773 = INT16_MAX;
	static uint8_t x1774 = UINT8_MAX;
	static volatile int8_t x1775 = INT8_MAX;
	volatile int32_t t32 = 25423638;

    t32 = ((x1773!=x1774)*(x1775>>x1776));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x1817 = -990;
	static int16_t x1818 = INT16_MIN;
	uint8_t x1819 = UINT8_MAX;
	uint16_t x1820 = 19U;

    t33 = ((x1817!=x1818)*(x1819>>x1820));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x1870 = INT16_MAX;
	uint16_t x1872 = 3U;

    t34 = ((x1869!=x1870)*(x1871>>x1872));

    if (t34 != 8191) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x1901 = 398U;
	uint32_t x1902 = 634U;
	int32_t x1903 = INT32_MAX;
	int32_t t35 = INT32_MAX;

    t35 = ((x1901!=x1902)*(x1903>>x1904));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x1922 = -1;
	volatile int8_t x1923 = INT8_MAX;
	volatile int32_t t36 = 111109;

    t36 = ((x1921!=x1922)*(x1923>>x1924));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x1926 = 0LLU;
	uint16_t x1927 = 0U;
	uint8_t x1928 = 10U;
	int32_t t37 = 14719;

    t37 = ((x1925!=x1926)*(x1927>>x1928));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x2041 = 1288401658U;
	uint16_t x2042 = 14U;
	volatile int8_t x2043 = 1;
	volatile int32_t t38 = 2646;

    t38 = ((x2041!=x2042)*(x2043>>x2044));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x2045 = -1;
	int64_t x2046 = INT64_MIN;
	uint64_t x2047 = 6243208240267158LLU;
	volatile uint64_t t39 = 844LLU;

    t39 = ((x2045!=x2046)*(x2047>>x2048));

    if (t39 != 3121604120133579LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x2057 = -1;
	int16_t x2058 = INT16_MAX;
	volatile uint8_t x2059 = 90U;

    t40 = ((x2057!=x2058)*(x2059>>x2060));

    if (t40 != 90) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x2085 = 2165219799887920679LLU;
	int16_t x2086 = INT16_MIN;
	int64_t x2087 = INT64_MAX;
	int8_t x2088 = 0;
	volatile int64_t t41 = INT64_MAX;

    t41 = ((x2085!=x2086)*(x2087>>x2088));

    if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x2197 = UINT64_MAX;
	int64_t x2198 = INT64_MIN;
	uint8_t x2199 = 96U;
	uint16_t x2200 = 1U;
	volatile int32_t t42 = -417766980;

    t42 = ((x2197!=x2198)*(x2199>>x2200));

    if (t42 != 48) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x2201 = 1345U;
	uint8_t x2204 = 5U;
	volatile int32_t t43 = 27766061;

    t43 = ((x2201!=x2202)*(x2203>>x2204));

    if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x2341 = INT64_MIN;
	int32_t x2342 = INT32_MIN;
	int32_t x2343 = 102966446;
	volatile int8_t x2344 = 0;

    t44 = ((x2341!=x2342)*(x2343>>x2344));

    if (t44 != 102966446) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x2358 = INT16_MIN;
	static uint64_t x2359 = 2323813078653LLU;
	uint8_t x2360 = 3U;
	volatile uint64_t t45 = 2789893018101203LLU;

    t45 = ((x2357!=x2358)*(x2359>>x2360));

    if (t45 != 290476634831LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x2389 = -5828925995759LL;
	volatile uint32_t x2391 = 25U;
	uint16_t x2392 = 3U;

    t46 = ((x2389!=x2390)*(x2391>>x2392));

    if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x2393 = 351U;
	uint32_t x2394 = 423U;
	volatile int32_t x2395 = INT32_MAX;
	int8_t x2396 = 2;
	static volatile int32_t t47 = 40104753;

    t47 = ((x2393!=x2394)*(x2395>>x2396));

    if (t47 != 536870911) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x2451 = 2U;
	uint16_t x2452 = 2U;
	volatile int32_t t48 = -3722372;

    t48 = ((x2449!=x2450)*(x2451>>x2452));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x2509 = UINT16_MAX;
	volatile uint64_t x2511 = 2LLU;
	int8_t x2512 = 1;
	volatile uint64_t t49 = 43466585719LLU;

    t49 = ((x2509!=x2510)*(x2511>>x2512));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x2641 = INT32_MIN;
	int16_t x2642 = INT16_MIN;
	uint16_t x2643 = 21U;
	static uint32_t x2644 = 1U;
	int32_t t50 = 0;

    t50 = ((x2641!=x2642)*(x2643>>x2644));

    if (t50 != 10) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2649 = INT32_MIN;
	int64_t x2650 = INT64_MAX;
	uint16_t x2651 = UINT16_MAX;
	uint8_t x2652 = 0U;
	volatile int32_t t51 = 4199;

    t51 = ((x2649!=x2650)*(x2651>>x2652));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x2661 = UINT8_MAX;
	int32_t x2662 = -1945;
	uint8_t x2663 = UINT8_MAX;
	uint8_t x2664 = 22U;
	static volatile int32_t t52 = 3613;

    t52 = ((x2661!=x2662)*(x2663>>x2664));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x2697 = 3267078036LL;
	uint16_t x2699 = UINT16_MAX;
	uint8_t x2700 = 0U;

    t53 = ((x2697!=x2698)*(x2699>>x2700));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x2769 = -1;
	int64_t x2770 = INT64_MAX;
	int16_t x2771 = 78;
	volatile int32_t t54 = -2;

    t54 = ((x2769!=x2770)*(x2771>>x2772));

    if (t54 != 78) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint16_t x2781 = 51U;
	static volatile uint8_t x2782 = 96U;
	uint16_t x2784 = 7U;
	volatile int32_t t55 = -232;

    t55 = ((x2781!=x2782)*(x2783>>x2784));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x2801 = 11471996LLU;
	int64_t x2802 = -1LL;
	static int32_t x2803 = 5928336;

    t56 = ((x2801!=x2802)*(x2803>>x2804));

    if (t56 != 5928336) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x2881 = INT64_MIN;
	int32_t x2882 = 12;
	volatile uint32_t x2883 = 9U;
	uint32_t t57 = 356026416U;

    t57 = ((x2881!=x2882)*(x2883>>x2884));

    if (t57 != 9U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x2902 = -1;
	volatile uint64_t x2903 = 2837311LLU;
	int32_t x2904 = 1;
	static uint64_t t58 = 24892844LLU;

    t58 = ((x2901!=x2902)*(x2903>>x2904));

    if (t58 != 1418655LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x3081 = INT32_MIN;
	uint8_t x3083 = 26U;
	int8_t x3084 = 0;
	int32_t t59 = -213976;

    t59 = ((x3081!=x3082)*(x3083>>x3084));

    if (t59 != 26) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x3125 = 0;
	int32_t x3126 = INT32_MAX;
	static int32_t x3127 = 22677799;
	int32_t x3128 = 16;

    t60 = ((x3125!=x3126)*(x3127>>x3128));

    if (t60 != 346) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x3145 = 7441;
	int8_t x3146 = -1;
	static volatile int64_t x3147 = INT64_MAX;
	uint16_t x3148 = 38U;
	int64_t t61 = 6570LL;

    t61 = ((x3145!=x3146)*(x3147>>x3148));

    if (t61 != 33554431LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x3225 = INT8_MAX;
	int16_t x3226 = -1;
	volatile uint64_t x3227 = 7561903635012887LLU;
	static volatile uint8_t x3228 = 31U;
	uint64_t t62 = 4690979795671322LLU;

    t62 = ((x3225!=x3226)*(x3227>>x3228));

    if (t62 != 3521285LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint64_t x3281 = 518936652925LLU;
	uint16_t x3282 = UINT16_MAX;
	volatile int32_t x3283 = 2525243;
	uint64_t x3284 = 1LLU;
	static volatile int32_t t63 = -28;

    t63 = ((x3281!=x3282)*(x3283>>x3284));

    if (t63 != 1262621) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x3389 = -3;
	uint8_t x3390 = 0U;
	uint32_t x3391 = UINT32_MAX;
	static uint8_t x3392 = 1U;

    t64 = ((x3389!=x3390)*(x3391>>x3392));

    if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x3405 = INT8_MIN;
	uint32_t x3406 = UINT32_MAX;
	static uint8_t x3407 = 13U;
	volatile int8_t x3408 = 0;
	static int32_t t65 = 103;

    t65 = ((x3405!=x3406)*(x3407>>x3408));

    if (t65 != 13) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x3417 = -4;
	uint32_t x3418 = 16U;
	uint8_t x3419 = 12U;
	int64_t x3420 = 13LL;
	int32_t t66 = 132204057;

    t66 = ((x3417!=x3418)*(x3419>>x3420));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x3481 = 108U;
	int16_t x3482 = -15992;
	volatile int32_t x3483 = 3;
	volatile uint8_t x3484 = 0U;
	volatile int32_t t67 = 3935;

    t67 = ((x3481!=x3482)*(x3483>>x3484));

    if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x3495 = 20U;
	uint8_t x3496 = 8U;
	int32_t t68 = 50054624;

    t68 = ((x3493!=x3494)*(x3495>>x3496));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x3554 = 71095U;
	uint16_t x3555 = 0U;
	static uint8_t x3556 = 1U;
	volatile int32_t t69 = 3;

    t69 = ((x3553!=x3554)*(x3555>>x3556));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x3594 = UINT64_MAX;
	static uint8_t x3596 = 3U;
	uint32_t t70 = 127U;

    t70 = ((x3593!=x3594)*(x3595>>x3596));

    if (t70 != 536870911U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x3617 = UINT32_MAX;
	volatile int64_t x3618 = -111LL;
	static int64_t x3619 = INT64_MAX;
	int8_t x3620 = 31;

    t71 = ((x3617!=x3618)*(x3619>>x3620));

    if (t71 != 4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x3678 = 115038U;
	int64_t x3679 = INT64_MAX;
	int64_t t72 = 34118076299562720LL;

    t72 = ((x3677!=x3678)*(x3679>>x3680));

    if (t72 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x3681 = UINT16_MAX;
	uint16_t x3682 = 1U;
	int64_t x3683 = INT64_MAX;
	uint16_t x3684 = 7U;
	int64_t t73 = -59043327125115LL;

    t73 = ((x3681!=x3682)*(x3683>>x3684));

    if (t73 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x3725 = 506189840166014680LLU;
	int64_t x3726 = -33361913LL;
	int8_t x3727 = INT8_MAX;
	volatile uint16_t x3728 = 4U;
	int32_t t74 = -71;

    t74 = ((x3725!=x3726)*(x3727>>x3728));

    if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x3810 = INT64_MIN;
	volatile uint64_t x3811 = 86921203846383725LLU;
	volatile uint64_t t75 = 244LLU;

    t75 = ((x3809!=x3810)*(x3811>>x3812));

    if (t75 != 43460601923191862LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x3833 = -1LL;
	volatile uint32_t x3834 = 152U;
	uint16_t x3835 = 834U;
	int32_t t76 = 482;

    t76 = ((x3833!=x3834)*(x3835>>x3836));

    if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x3845 = INT64_MAX;
	int8_t x3846 = INT8_MIN;
	uint8_t x3847 = UINT8_MAX;
	static int16_t x3848 = 13;
	int32_t t77 = 18;

    t77 = ((x3845!=x3846)*(x3847>>x3848));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x3861 = -95;
	uint32_t x3863 = 59771400U;
	uint32_t t78 = 263969U;

    t78 = ((x3861!=x3862)*(x3863>>x3864));

    if (t78 != 59771400U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x3881 = 533128791U;
	int8_t x3882 = INT8_MIN;
	uint32_t x3883 = UINT32_MAX;
	volatile uint8_t x3884 = 1U;

    t79 = ((x3881!=x3882)*(x3883>>x3884));

    if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x3897 = 3U;
	uint32_t x3898 = 1101892523U;
	static int32_t x3899 = 13220580;
	static int32_t t80 = 13446914;

    t80 = ((x3897!=x3898)*(x3899>>x3900));

    if (t80 != 826286) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x3930 = -1;
	static volatile uint16_t x3931 = 12844U;
	uint8_t x3932 = 7U;
	int32_t t81 = 1;

    t81 = ((x3929!=x3930)*(x3931>>x3932));

    if (t81 != 100) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x3941 = 90U;
	volatile int8_t x3942 = INT8_MIN;
	uint64_t x3943 = 1008583283689LLU;
	int32_t x3944 = 1;
	uint64_t t82 = 4878LLU;

    t82 = ((x3941!=x3942)*(x3943>>x3944));

    if (t82 != 504291641844LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x4049 = 46U;
	uint8_t x4050 = 37U;
	uint16_t x4051 = 80U;
	static volatile uint8_t x4052 = 9U;
	int32_t t83 = 131253;

    t83 = ((x4049!=x4050)*(x4051>>x4052));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x4109 = UINT16_MAX;
	static int8_t x4110 = INT8_MIN;
	int64_t x4111 = INT64_MAX;
	volatile uint8_t x4112 = 23U;
	volatile int64_t t84 = 393LL;

    t84 = ((x4109!=x4110)*(x4111>>x4112));

    if (t84 != 1099511627775LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x4161 = 4LLU;
	uint8_t x4162 = 98U;
	int16_t x4163 = INT16_MAX;
	uint8_t x4164 = 8U;
	volatile int32_t t85 = 6;

    t85 = ((x4161!=x4162)*(x4163>>x4164));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x4198 = INT8_MIN;
	volatile int16_t x4200 = 2;
	uint32_t t86 = 55271U;

    t86 = ((x4197!=x4198)*(x4199>>x4200));

    if (t86 != 1181783U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x4278 = INT64_MIN;
	uint64_t t87 = 81432LLU;

    t87 = ((x4277!=x4278)*(x4279>>x4280));

    if (t87 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x4357 = INT8_MIN;
	int16_t x4358 = 5110;
	uint16_t x4360 = 5U;
	int32_t t88 = 166;

    t88 = ((x4357!=x4358)*(x4359>>x4360));

    if (t88 != 407) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x4478 = 26761812953957LLU;
	static uint16_t x4479 = UINT16_MAX;
	volatile int32_t t89 = -1;

    t89 = ((x4477!=x4478)*(x4479>>x4480));

    if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x4553 = -1;
	static uint16_t x4555 = UINT16_MAX;
	int8_t x4556 = 5;
	volatile int32_t t90 = 1809024;

    t90 = ((x4553!=x4554)*(x4555>>x4556));

    if (t90 != 2047) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x4573 = INT16_MIN;
	uint32_t x4574 = UINT32_MAX;
	int32_t x4576 = 0;
	uint32_t t91 = 5618722U;

    t91 = ((x4573!=x4574)*(x4575>>x4576));

    if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x4629 = INT8_MAX;
	int8_t x4630 = -6;
	uint8_t x4631 = 0U;
	uint32_t x4632 = 2U;
	static int32_t t92 = -1381255;

    t92 = ((x4629!=x4630)*(x4631>>x4632));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x4694 = 1379U;
	int64_t x4695 = 111128LL;
	int32_t x4696 = 1;

    t93 = ((x4693!=x4694)*(x4695>>x4696));

    if (t93 != 55564LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x4785 = -1;
	volatile uint8_t x4786 = 119U;
	static uint64_t x4787 = UINT64_MAX;
	volatile uint8_t x4788 = 0U;
	static uint64_t t94 = UINT64_MAX;

    t94 = ((x4785!=x4786)*(x4787>>x4788));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x4793 = -1;
	uint16_t x4794 = 209U;
	int8_t x4795 = 1;
	int8_t x4796 = 0;
	volatile int32_t t95 = 1;

    t95 = ((x4793!=x4794)*(x4795>>x4796));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x4805 = INT32_MIN;
	static uint8_t x4806 = 5U;
	uint64_t x4807 = UINT64_MAX;
	uint16_t x4808 = 36U;

    t96 = ((x4805!=x4806)*(x4807>>x4808));

    if (t96 != 268435455LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x4837 = -19026802716LL;
	int64_t x4838 = -1LL;
	uint16_t x4839 = UINT16_MAX;
	static int8_t x4840 = 1;
	static int32_t t97 = 16164153;

    t97 = ((x4837!=x4838)*(x4839>>x4840));

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x4861 = -1;
	uint8_t x4862 = 0U;
	volatile int8_t x4864 = 27;
	int32_t t98 = -815658301;

    t98 = ((x4861!=x4862)*(x4863>>x4864));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x4865 = -75LL;
	uint8_t x4866 = 4U;
	volatile int16_t x4867 = INT16_MAX;
	int8_t x4868 = 0;
	volatile int32_t t99 = -705871086;

    t99 = ((x4865!=x4866)*(x4867>>x4868));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x4873 = 1U;
	uint32_t x4874 = 1556508346U;
	uint8_t x4876 = 31U;
	static int64_t t100 = 439231083LL;

    t100 = ((x4873!=x4874)*(x4875>>x4876));

    if (t100 != 4294967295LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x4910 = 5159U;
	volatile int64_t x4911 = 9783LL;
	int8_t x4912 = 1;
	volatile int64_t t101 = -866134797605664LL;

    t101 = ((x4909!=x4910)*(x4911>>x4912));

    if (t101 != 4891LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x4913 = 0U;
	uint32_t x4914 = 55362599U;
	int64_t x4915 = 1528328250LL;
	static volatile uint8_t x4916 = 6U;
	volatile int64_t t102 = 26229479LL;

    t102 = ((x4913!=x4914)*(x4915>>x4916));

    if (t102 != 23880128LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x5017 = -5;
	uint32_t x5018 = 7996945U;
	int16_t x5019 = INT16_MAX;
	uint16_t x5020 = 2U;
	int32_t t103 = -3190557;

    t103 = ((x5017!=x5018)*(x5019>>x5020));

    if (t103 != 8191) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x5085 = 1893970;
	volatile uint64_t x5086 = 4015768080LLU;
	uint16_t x5087 = 2685U;
	static int8_t x5088 = 0;
	volatile int32_t t104 = -12;

    t104 = ((x5085!=x5086)*(x5087>>x5088));

    if (t104 != 2685) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x5089 = INT32_MIN;
	uint16_t x5090 = 2U;
	static int16_t x5091 = 60;
	volatile uint32_t x5092 = 18U;
	int32_t t105 = 603700;

    t105 = ((x5089!=x5090)*(x5091>>x5092));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x5253 = INT32_MIN;
	int64_t x5254 = INT64_MIN;
	int64_t x5256 = 1LL;
	volatile int32_t t106 = -2;

    t106 = ((x5253!=x5254)*(x5255>>x5256));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x5290 = INT64_MIN;
	volatile int16_t x5291 = 5;
	volatile uint8_t x5292 = 1U;
	volatile int32_t t107 = 15;

    t107 = ((x5289!=x5290)*(x5291>>x5292));

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x5389 = INT64_MIN;
	static uint8_t x5391 = UINT8_MAX;
	volatile int32_t t108 = 18;

    t108 = ((x5389!=x5390)*(x5391>>x5392));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x5409 = UINT16_MAX;
	int64_t x5411 = INT64_MAX;
	uint8_t x5412 = 35U;
	volatile int64_t t109 = -296LL;

    t109 = ((x5409!=x5410)*(x5411>>x5412));

    if (t109 != 268435455LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x5453 = UINT32_MAX;
	static int32_t x5454 = -1;
	static int32_t t110 = -1;

    t110 = ((x5453!=x5454)*(x5455>>x5456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x5562 = 8017;
	static int8_t x5564 = 1;
	volatile uint32_t t111 = 1U;

    t111 = ((x5561!=x5562)*(x5563>>x5564));

    if (t111 != 2196877U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x5578 = UINT32_MAX;
	volatile uint8_t x5579 = 44U;

    t112 = ((x5577!=x5578)*(x5579>>x5580));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x5590 = INT32_MIN;
	uint8_t x5591 = 100U;
	int32_t t113 = 47177;

    t113 = ((x5589!=x5590)*(x5591>>x5592));

    if (t113 != 3) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x5669 = -995073106;
	int32_t x5672 = 1;
	volatile uint64_t t114 = 1804652563353441212LLU;

    t114 = ((x5669!=x5670)*(x5671>>x5672));

    if (t114 != 1844084668423LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x5733 = INT32_MAX;
	int8_t x5734 = INT8_MAX;
	volatile int64_t x5735 = INT64_MAX;
	volatile int8_t x5736 = 7;
	int64_t t115 = 368928689382590275LL;

    t115 = ((x5733!=x5734)*(x5735>>x5736));

    if (t115 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x5769 = 5U;
	int8_t x5770 = -1;
	int8_t x5771 = INT8_MAX;
	int8_t x5772 = 0;
	volatile int32_t t116 = 122;

    t116 = ((x5769!=x5770)*(x5771>>x5772));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x5809 = UINT32_MAX;
	static int32_t x5810 = INT32_MAX;
	static volatile int8_t x5811 = 44;
	static uint8_t x5812 = 0U;
	static int32_t t117 = 29544;

    t117 = ((x5809!=x5810)*(x5811>>x5812));

    if (t117 != 44) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x5874 = 24U;
	uint16_t x5875 = 5251U;
	volatile int32_t t118 = 99639064;

    t118 = ((x5873!=x5874)*(x5875>>x5876));

    if (t118 != 5251) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x5981 = 588U;
	volatile int16_t x5982 = 411;
	uint8_t x5983 = 9U;
	uint16_t x5984 = 0U;
	static int32_t t119 = 164;

    t119 = ((x5981!=x5982)*(x5983>>x5984));

    if (t119 != 9) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x5998 = INT64_MIN;
	int8_t x5999 = 1;
	static int8_t x6000 = 0;
	int32_t t120 = 3332;

    t120 = ((x5997!=x5998)*(x5999>>x6000));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x6069 = -52;
	int16_t x6071 = 14480;
	uint32_t x6072 = 1U;
	volatile int32_t t121 = -6315;

    t121 = ((x6069!=x6070)*(x6071>>x6072));

    if (t121 != 7240) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x6105 = 43844U;
	volatile int64_t x6106 = 83243606148467LL;
	uint8_t x6108 = 0U;

    t122 = ((x6105!=x6106)*(x6107>>x6108));

    if (t122 != 22219985634792239LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x6153 = -6980157321LL;
	volatile uint8_t x6155 = 1U;
	int32_t x6156 = 1;
	int32_t t123 = 27;

    t123 = ((x6153!=x6154)*(x6155>>x6156));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x6193 = INT64_MIN;
	static int8_t x6196 = 1;
	volatile int32_t t124 = -13832;

    t124 = ((x6193!=x6194)*(x6195>>x6196));

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x6213 = 7854LL;
	uint64_t x6214 = UINT64_MAX;
	int16_t x6215 = 3;
	volatile uint8_t x6216 = 8U;
	volatile int32_t t125 = 3556811;

    t125 = ((x6213!=x6214)*(x6215>>x6216));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x6221 = 3U;
	uint16_t x6224 = 10U;

    t126 = ((x6221!=x6222)*(x6223>>x6224));

    if (t126 != 31) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x6237 = -22;
	int64_t x6239 = INT64_MAX;
	int8_t x6240 = 1;
	volatile int64_t t127 = 13LL;

    t127 = ((x6237!=x6238)*(x6239>>x6240));

    if (t127 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x6258 = 96U;
	volatile uint32_t x6259 = UINT32_MAX;
	volatile uint32_t t128 = 47737U;

    t128 = ((x6257!=x6258)*(x6259>>x6260));

    if (t128 != 2147483647U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x6277 = -1LL;
	uint32_t x6278 = 11U;
	uint64_t x6279 = UINT64_MAX;
	uint16_t x6280 = 1U;

    t129 = ((x6277!=x6278)*(x6279>>x6280));

    if (t129 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x6445 = 622191297095889093LLU;
	uint32_t x6446 = UINT32_MAX;
	static int8_t x6447 = 8;
	uint8_t x6448 = 2U;
	volatile int32_t t130 = 180;

    t130 = ((x6445!=x6446)*(x6447>>x6448));

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x6449 = 9;
	uint8_t x6451 = 62U;
	int8_t x6452 = 0;
	static int32_t t131 = 1;

    t131 = ((x6449!=x6450)*(x6451>>x6452));

    if (t131 != 62) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x6487 = UINT32_MAX;
	static uint32_t t132 = 5422444U;

    t132 = ((x6485!=x6486)*(x6487>>x6488));

    if (t132 != 1073741823U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x6678 = -1;
	int32_t x6679 = 7;
	static int32_t t133 = 3;

    t133 = ((x6677!=x6678)*(x6679>>x6680));

    if (t133 != 7) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x6805 = INT32_MIN;
	int8_t x6806 = 0;
	static int16_t x6807 = INT16_MAX;
	uint8_t x6808 = 20U;
	int32_t t134 = -35;

    t134 = ((x6805!=x6806)*(x6807>>x6808));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x6809 = INT8_MIN;
	int32_t x6810 = INT32_MAX;
	int8_t x6812 = 2;
	volatile int32_t t135 = -2472;

    t135 = ((x6809!=x6810)*(x6811>>x6812));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x6842 = INT64_MIN;
	volatile int16_t x6843 = INT16_MAX;
	static volatile int8_t x6844 = 3;
	int32_t t136 = 90860738;

    t136 = ((x6841!=x6842)*(x6843>>x6844));

    if (t136 != 4095) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x6845 = INT64_MAX;
	int16_t x6848 = 28;
	int32_t t137 = 162;

    t137 = ((x6845!=x6846)*(x6847>>x6848));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x6893 = 916LLU;
	int8_t x6894 = INT8_MIN;
	static volatile uint64_t x6895 = 3851438294LLU;
	uint32_t x6896 = 58U;
	uint64_t t138 = 5LLU;

    t138 = ((x6893!=x6894)*(x6895>>x6896));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x6908 = 10;
	int32_t t139 = -192;

    t139 = ((x6905!=x6906)*(x6907>>x6908));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x6937 = 3U;
	static volatile int32_t x6939 = INT32_MAX;
	volatile int32_t t140 = 1009015;

    t140 = ((x6937!=x6938)*(x6939>>x6940));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x6953 = UINT8_MAX;
	static volatile uint64_t x6954 = 1340934709080746LLU;
	int32_t x6955 = INT32_MAX;
	int16_t x6956 = 0;
	volatile int32_t t141 = INT32_MAX;

    t141 = ((x6953!=x6954)*(x6955>>x6956));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x6977 = INT16_MIN;
	static uint64_t x6978 = UINT64_MAX;
	static uint16_t x6979 = UINT16_MAX;
	int32_t t142 = -109;

    t142 = ((x6977!=x6978)*(x6979>>x6980));

    if (t142 != 31) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x7001 = INT64_MAX;
	static uint16_t x7002 = 10U;
	volatile uint32_t x7003 = 482269U;
	uint8_t x7004 = 3U;

    t143 = ((x7001!=x7002)*(x7003>>x7004));

    if (t143 != 60283U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x7013 = 1;
	volatile int16_t x7014 = INT16_MIN;
	uint8_t x7015 = UINT8_MAX;
	volatile uint8_t x7016 = 19U;
	static volatile int32_t t144 = -248;

    t144 = ((x7013!=x7014)*(x7015>>x7016));

    if (t144 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();


    return 0;
}

