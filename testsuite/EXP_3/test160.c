
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

static uint32_t t0 = 198811U;
uint32_t t2 = 0U;
uint32_t x318 = 728477544U;
volatile int64_t t4 = -1LL;
static uint64_t t5 = 20539LLU;
static volatile uint8_t x895 = 12U;
static int16_t x1019 = 5;
int64_t x1020 = 6LL;
int8_t x1077 = 2;
volatile uint32_t x1078 = 31U;
uint64_t x1080 = UINT64_MAX;
volatile uint16_t x1277 = 1261U;
uint16_t x1279 = 0U;
volatile int32_t t13 = -38;
volatile int16_t x1465 = INT16_MAX;
static volatile int16_t x1579 = 3;
int32_t x1580 = -1;
volatile int32_t t16 = 14;
int64_t x1619 = -1LL;
uint8_t x1664 = 15U;
volatile int8_t x1716 = 1;
volatile int64_t x1842 = 194942LL;
volatile uint16_t x1866 = 32U;
int8_t x1868 = 1;
int32_t t23 = 12453;
int64_t x2038 = -1LL;
volatile uint32_t x2108 = UINT32_MAX;
static int16_t x2114 = 3;


void f0(void) {
    	uint32_t x57 = 3827U;
	int32_t x58 = INT32_MIN;
	int16_t x59 = -1;
	volatile int8_t x60 = 31;

    t0 = ((x57&x58)<<(x59+x60));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x61 = INT16_MIN;
	uint64_t x62 = 15LLU;
	int32_t x63 = -1;
	uint8_t x64 = 3U;
	static volatile uint64_t t1 = 7LLU;

    t1 = ((x61&x62)<<(x63+x64));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x153 = 385696U;
	static int16_t x154 = INT16_MAX;
	int32_t x155 = 22;
	static int32_t x156 = -1;

    t2 = ((x153&x154)<<(x155+x156));

    if (t2 != 1409286144U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x217 = UINT32_MAX;
	int32_t x218 = 0;
	static int16_t x219 = -1;
	volatile uint8_t x220 = 2U;
	uint32_t t3 = 21038U;

    t3 = ((x217&x218)<<(x219+x220));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x317 = 5569020307863LL;
	volatile int8_t x319 = 30;
	int16_t x320 = -2;

    t4 = ((x317&x318)<<(x319+x320));

    if (t4 != 159493576177221632LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x557 = -1;
	uint64_t x558 = 837919570LLU;
	int16_t x559 = -1;
	static int8_t x560 = 4;

    t5 = ((x557&x558)<<(x559+x560));

    if (t5 != 6703356560LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x609 = -25;
	uint32_t x610 = 3785U;
	uint8_t x611 = 2U;
	static volatile uint16_t x612 = 0U;
	static volatile uint32_t t6 = 5840U;

    t6 = ((x609&x610)<<(x611+x612));

    if (t6 != 15108U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x637 = 980841639LL;
	volatile int8_t x638 = INT8_MIN;
	static uint32_t x639 = 23U;
	uint64_t x640 = UINT64_MAX;
	volatile int64_t t7 = -72290058477068184LL;

    t7 = ((x637&x638)<<(x639+x640));

    if (t7 != 4113947846246400LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x697 = INT8_MIN;
	uint8_t x698 = 9U;
	int8_t x699 = 0;
	uint16_t x700 = 30U;
	volatile int32_t t8 = -7;

    t8 = ((x697&x698)<<(x699+x700));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x893 = INT8_MAX;
	volatile int8_t x894 = INT8_MAX;
	int32_t x896 = -1;
	static volatile int32_t t9 = -109;

    t9 = ((x893&x894)<<(x895+x896));

    if (t9 != 260096) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x1017 = 2;
	static int64_t x1018 = INT64_MAX;
	volatile int64_t t10 = -850LL;

    t10 = ((x1017&x1018)<<(x1019+x1020));

    if (t10 != 4096LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1021 = INT64_MAX;
	uint8_t x1022 = 20U;
	uint8_t x1023 = 1U;
	int16_t x1024 = -1;
	volatile int64_t t11 = -118LL;

    t11 = ((x1021&x1022)<<(x1023+x1024));

    if (t11 != 20LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x1079 = 12;
	uint32_t t12 = 12990U;

    t12 = ((x1077&x1078)<<(x1079+x1080));

    if (t12 != 4096U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1278 = INT8_MIN;
	uint8_t x1280 = 7U;

    t13 = ((x1277&x1278)<<(x1279+x1280));

    if (t13 != 147456) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1466 = INT64_MAX;
	volatile uint16_t x1467 = 35U;
	int8_t x1468 = 4;
	volatile int64_t t14 = -8LL;

    t14 = ((x1465&x1466)<<(x1467+x1468));

    if (t14 != 18013848753668096LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x1577 = INT8_MAX;
	int32_t x1578 = INT32_MIN;
	int32_t t15 = -49773;

    t15 = ((x1577&x1578)<<(x1579+x1580));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1601 = -1;
	uint16_t x1602 = 2949U;
	uint16_t x1603 = 2U;
	int64_t x1604 = -1LL;

    t16 = ((x1601&x1602)<<(x1603+x1604));

    if (t16 != 5898) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x1617 = -4527090758131686LL;
	volatile uint16_t x1618 = 20U;
	uint8_t x1620 = 18U;
	static volatile int64_t t17 = 477024640312205966LL;

    t17 = ((x1617&x1618)<<(x1619+x1620));

    if (t17 != 2097152LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1645 = 1646LL;
	int8_t x1646 = 0;
	static volatile int8_t x1647 = 0;
	static volatile uint64_t x1648 = 5LLU;
	int64_t t18 = -11580018129835770LL;

    t18 = ((x1645&x1646)<<(x1647+x1648));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1661 = 130933995U;
	uint16_t x1662 = UINT16_MAX;
	uint32_t x1663 = UINT32_MAX;
	volatile uint32_t t19 = 56153542U;

    t19 = ((x1661&x1662)<<(x1663+x1664));

    if (t19 != 960151552U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x1713 = 16719437;
	static uint16_t x1714 = 11U;
	static int32_t x1715 = -1;
	volatile int32_t t20 = -1;

    t20 = ((x1713&x1714)<<(x1715+x1716));

    if (t20 != 9) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1825 = INT64_MIN;
	int16_t x1826 = 0;
	volatile int64_t x1827 = 15LL;
	volatile int8_t x1828 = -1;
	int64_t t21 = 13794934105LL;

    t21 = ((x1825&x1826)<<(x1827+x1828));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1841 = INT32_MAX;
	int8_t x1843 = -1;
	static uint16_t x1844 = 38U;
	volatile int64_t t22 = 1769LL;

    t22 = ((x1841&x1842)<<(x1843+x1844));

    if (t22 != 26792624467738624LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x1865 = -1;
	volatile int64_t x1867 = -1LL;

    t23 = ((x1865&x1866)<<(x1867+x1868));

    if (t23 != 32) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x2037 = INT32_MAX;
	int8_t x2039 = -14;
	uint8_t x2040 = 29U;
	int64_t t24 = -7398411845269596LL;

    t24 = ((x2037&x2038)<<(x2039+x2040));

    if (t24 != 70368744144896LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x2105 = 76075247945LLU;
	static int32_t x2106 = INT32_MIN;
	uint32_t x2107 = 4U;
	uint64_t t25 = 352305905LLU;

    t25 = ((x2105&x2106)<<(x2107+x2108));

    if (t25 != 601295421440LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x2113 = 1U;
	int8_t x2115 = 14;
	uint8_t x2116 = 0U;
	int32_t t26 = 1;

    t26 = ((x2113&x2114)<<(x2115+x2116));

    if (t26 != 16384) { NG(); } else { ; }
	
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


    return 0;
}

