
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

static uint32_t x265 = 4U;
static volatile int64_t x465 = INT64_MAX;
volatile int64_t t2 = -292266267502891LL;
static uint32_t x469 = 82946U;
volatile int16_t x594 = 5639;
int8_t x596 = 39;
static uint32_t x743 = UINT32_MAX;
int32_t x765 = 474505253;
static int32_t t8 = -1544;
static uint32_t x817 = 66U;
int8_t x818 = INT8_MIN;
uint32_t t9 = 20445427U;
uint32_t x969 = UINT32_MAX;
uint32_t x992 = 17U;
int32_t x1577 = 10251828;
volatile int16_t x1578 = -2450;
volatile uint16_t x1579 = 1823U;
volatile int32_t t15 = -120622493;
uint8_t x1764 = 29U;
int64_t x1861 = INT64_MAX;
int8_t x1906 = INT8_MIN;
volatile int32_t t22 = -1;
int8_t x2350 = INT8_MAX;
int32_t x2395 = -1;
int8_t x2428 = 3;
int32_t t26 = -64433;
int16_t x2435 = INT16_MAX;
static volatile uint64_t x2545 = 25350373LLU;
int8_t x2630 = -1;
uint8_t x2631 = 0U;
static uint32_t x2865 = 7389U;


void f0(void) {
    	uint32_t x21 = 490U;
	int8_t x22 = -1;
	volatile uint8_t x23 = 39U;
	volatile int8_t x24 = 6;
	volatile uint32_t t0 = 12643527U;

    t0 = ((x21/(x22<=x23))>>x24);

    if (t0 != 7U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x266 = -6;
	volatile int64_t x267 = INT64_MAX;
	int8_t x268 = 26;
	uint32_t t1 = 2495U;

    t1 = ((x265/(x266<=x267))>>x268);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x466 = UINT64_MAX;
	int16_t x467 = -1;
	uint32_t x468 = 16U;

    t2 = ((x465/(x466<=x467))>>x468);

    if (t2 != 140737488355327LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x470 = INT8_MAX;
	static uint32_t x471 = UINT32_MAX;
	static volatile int64_t x472 = 1LL;
	uint32_t t3 = 2U;

    t3 = ((x469/(x470<=x471))>>x472);

    if (t3 != 41473U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x593 = 1439502592LLU;
	int32_t x595 = INT32_MAX;
	uint64_t t4 = 1800380611511911LLU;

    t4 = ((x593/(x594<=x595))>>x596);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x605 = 53U;
	int8_t x606 = -2;
	volatile uint16_t x607 = 1122U;
	int8_t x608 = 3;
	static int32_t t5 = 66;

    t5 = ((x605/(x606<=x607))>>x608);

    if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x713 = 11746U;
	static uint8_t x714 = UINT8_MAX;
	int64_t x715 = INT64_MAX;
	volatile int8_t x716 = 11;
	volatile uint32_t t6 = 2892733U;

    t6 = ((x713/(x714<=x715))>>x716);

    if (t6 != 5U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x741 = INT8_MAX;
	int64_t x742 = 13209920LL;
	uint32_t x744 = 25U;
	volatile int32_t t7 = 334811;

    t7 = ((x741/(x742<=x743))>>x744);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x766 = 3;
	uint8_t x767 = UINT8_MAX;
	uint8_t x768 = 2U;

    t8 = ((x765/(x766<=x767))>>x768);

    if (t8 != 118626313) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x819 = 26;
	static uint8_t x820 = 0U;

    t9 = ((x817/(x818<=x819))>>x820);

    if (t9 != 66U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x970 = INT16_MIN;
	int32_t x971 = -1;
	uint8_t x972 = 0U;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = ((x969/(x970<=x971))>>x972);

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x989 = 39483;
	uint16_t x990 = 838U;
	int16_t x991 = INT16_MAX;
	int32_t t11 = -4755;

    t11 = ((x989/(x990<=x991))>>x992);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1273 = 4U;
	int32_t x1274 = INT32_MIN;
	int32_t x1275 = -1;
	static int8_t x1276 = 20;
	int32_t t12 = 1036904;

    t12 = ((x1273/(x1274<=x1275))>>x1276);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x1301 = 4252535957937LLU;
	volatile int8_t x1302 = INT8_MIN;
	int8_t x1303 = -43;
	volatile uint8_t x1304 = 0U;
	static volatile uint64_t t13 = 2LLU;

    t13 = ((x1301/(x1302<=x1303))>>x1304);

    if (t13 != 4252535957937LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x1437 = 4U;
	static int32_t x1438 = INT32_MIN;
	volatile int16_t x1439 = -1;
	int16_t x1440 = 11;
	static volatile int32_t t14 = 184298;

    t14 = ((x1437/(x1438<=x1439))>>x1440);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1580 = 0U;

    t15 = ((x1577/(x1578<=x1579))>>x1580);

    if (t15 != 10251828) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x1761 = INT64_MAX;
	volatile int8_t x1762 = INT8_MAX;
	volatile uint8_t x1763 = UINT8_MAX;
	int64_t t16 = 1289081180597325LL;

    t16 = ((x1761/(x1762<=x1763))>>x1764);

    if (t16 != 17179869183LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x1833 = 13003U;
	static int8_t x1834 = -26;
	int16_t x1835 = 9196;
	uint8_t x1836 = 0U;
	volatile int32_t t17 = 23924;

    t17 = ((x1833/(x1834<=x1835))>>x1836);

    if (t17 != 13003) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x1862 = -1;
	static uint16_t x1863 = 14U;
	int32_t x1864 = 5;
	int64_t t18 = 0LL;

    t18 = ((x1861/(x1862<=x1863))>>x1864);

    if (t18 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1905 = UINT8_MAX;
	uint32_t x1907 = UINT32_MAX;
	int8_t x1908 = 4;
	volatile int32_t t19 = 12149964;

    t19 = ((x1905/(x1906<=x1907))>>x1908);

    if (t19 != 15) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x1933 = 57U;
	int32_t x1934 = -1;
	static uint16_t x1935 = 8U;
	uint8_t x1936 = 7U;
	volatile int32_t t20 = 371;

    t20 = ((x1933/(x1934<=x1935))>>x1936);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x1973 = INT64_MAX;
	volatile int16_t x1974 = INT16_MIN;
	int8_t x1975 = 0;
	int8_t x1976 = 0;
	int64_t t21 = INT64_MAX;

    t21 = ((x1973/(x1974<=x1975))>>x1976);

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x2077 = UINT16_MAX;
	volatile uint32_t x2078 = 50436650U;
	int8_t x2079 = -19;
	uint8_t x2080 = 6U;

    t22 = ((x2077/(x2078<=x2079))>>x2080);

    if (t22 != 1023) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x2221 = 7293708998547LLU;
	volatile uint8_t x2222 = UINT8_MAX;
	uint16_t x2223 = 5617U;
	volatile int8_t x2224 = 0;
	static volatile uint64_t t23 = 27LLU;

    t23 = ((x2221/(x2222<=x2223))>>x2224);

    if (t23 != 7293708998547LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x2349 = 96LLU;
	int64_t x2351 = 8990861517280LL;
	static int8_t x2352 = 0;
	uint64_t t24 = 38290863713555398LLU;

    t24 = ((x2349/(x2350<=x2351))>>x2352);

    if (t24 != 96LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x2393 = 0U;
	int32_t x2394 = INT32_MIN;
	uint8_t x2396 = 0U;
	volatile int32_t t25 = 680;

    t25 = ((x2393/(x2394<=x2395))>>x2396);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x2425 = 2U;
	uint64_t x2426 = 830281804007151830LLU;
	int8_t x2427 = INT8_MIN;

    t26 = ((x2425/(x2426<=x2427))>>x2428);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x2433 = 5573321;
	static volatile int64_t x2434 = 3LL;
	uint8_t x2436 = 1U;
	volatile int32_t t27 = -5376;

    t27 = ((x2433/(x2434<=x2435))>>x2436);

    if (t27 != 2786660) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x2546 = INT32_MIN;
	static int8_t x2547 = INT8_MIN;
	volatile int64_t x2548 = 1LL;
	uint64_t t28 = 145456487458LLU;

    t28 = ((x2545/(x2546<=x2547))>>x2548);

    if (t28 != 12675186LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x2629 = 25478U;
	static uint16_t x2632 = 0U;
	int32_t t29 = -21;

    t29 = ((x2629/(x2630<=x2631))>>x2632);

    if (t29 != 25478) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x2866 = -1814;
	int32_t x2867 = INT32_MAX;
	int8_t x2868 = 16;
	volatile uint32_t t30 = 0U;

    t30 = ((x2865/(x2866<=x2867))>>x2868);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x3229 = 35U;
	int8_t x3230 = INT8_MAX;
	volatile uint64_t x3231 = UINT64_MAX;
	uint16_t x3232 = 4U;
	int32_t t31 = 4;

    t31 = ((x3229/(x3230<=x3231))>>x3232);

    if (t31 != 2) { NG(); } else { ; }
	
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


    return 0;
}

