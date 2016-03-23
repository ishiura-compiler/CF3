
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

uint32_t x460 = 40U;
volatile int64_t t1 = -6449LL;
uint32_t x463 = 1135112732U;
uint32_t t2 = 33275451U;
static volatile uint16_t x523 = UINT16_MAX;
uint8_t x524 = 1U;
static int16_t x544 = 1;
uint32_t x712 = 4U;
volatile uint16_t x933 = 23U;
int8_t x1155 = INT8_MAX;
volatile int32_t t9 = -12258;
volatile int32_t x1362 = -8;
static uint64_t x1478 = UINT64_MAX;
static uint32_t t12 = 29268U;
uint64_t x1590 = 1116233306870084732LLU;
static uint8_t x1592 = 9U;
int32_t x1711 = INT32_MAX;
volatile uint64_t x1735 = 42612164956263058LLU;
int16_t x1769 = INT16_MIN;
uint64_t x1803 = 1874724502230LLU;
volatile uint8_t x1804 = 0U;
int32_t t19 = 471006146;
int16_t x1866 = INT16_MIN;
int32_t x1867 = 89;
static int32_t x1869 = INT32_MIN;
uint32_t x1871 = UINT32_MAX;
volatile uint32_t t21 = 2451U;
static uint32_t x1981 = UINT32_MAX;
volatile uint8_t x1983 = UINT8_MAX;
int64_t x2029 = -30033729LL;
uint64_t x2031 = 3587721067467LLU;
static volatile int32_t t26 = 4526637;
volatile uint16_t x2434 = 100U;
int8_t x2436 = 2;
volatile uint8_t x2631 = 96U;
int16_t x2759 = INT16_MAX;
int32_t x2885 = INT32_MIN;
uint16_t x2888 = 1U;
int16_t x3013 = INT16_MAX;
volatile uint64_t t34 = 80450095297276LLU;


void f0(void) {
    	int64_t x121 = -1LL;
	uint8_t x122 = UINT8_MAX;
	volatile uint32_t x123 = 299633120U;
	uint64_t x124 = 4LLU;
	volatile uint32_t t0 = 600410U;

    t0 = ((x121==x122)/(x123>>x124));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x457 = 0U;
	int16_t x458 = -1;
	int64_t x459 = INT64_MAX;

    t1 = ((x457==x458)/(x459>>x460));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x461 = -1;
	int8_t x462 = INT8_MAX;
	static uint32_t x464 = 0U;

    t2 = ((x461==x462)/(x463>>x464));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x521 = INT8_MIN;
	static int64_t x522 = -3302703878LL;
	static int32_t t3 = 46;

    t3 = ((x521==x522)/(x523>>x524));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x541 = -1;
	static int32_t x542 = INT32_MAX;
	uint64_t x543 = UINT64_MAX;
	volatile uint64_t t4 = 8289696356917722LLU;

    t4 = ((x541==x542)/(x543>>x544));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x573 = UINT8_MAX;
	uint16_t x574 = 22U;
	int16_t x575 = 1861;
	static int8_t x576 = 1;
	static volatile int32_t t5 = -73610;

    t5 = ((x573==x574)/(x575>>x576));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x709 = -1LL;
	int32_t x710 = INT32_MIN;
	int16_t x711 = 255;
	int32_t t6 = -7048404;

    t6 = ((x709==x710)/(x711>>x712));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x737 = INT16_MIN;
	uint8_t x738 = 3U;
	volatile int8_t x739 = 54;
	static uint8_t x740 = 1U;
	volatile int32_t t7 = 124;

    t7 = ((x737==x738)/(x739>>x740));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x934 = 58U;
	uint32_t x935 = UINT32_MAX;
	int16_t x936 = 0;
	static uint32_t t8 = 9524926U;

    t8 = ((x933==x934)/(x935>>x936));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x1153 = INT32_MAX;
	uint8_t x1154 = UINT8_MAX;
	static volatile uint8_t x1156 = 0U;

    t9 = ((x1153==x1154)/(x1155>>x1156));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x1285 = INT64_MIN;
	static uint8_t x1286 = 1U;
	uint8_t x1287 = 27U;
	uint16_t x1288 = 0U;
	int32_t t10 = 3344842;

    t10 = ((x1285==x1286)/(x1287>>x1288));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x1361 = -1;
	static uint16_t x1363 = UINT16_MAX;
	uint16_t x1364 = 7U;
	int32_t t11 = -1591469;

    t11 = ((x1361==x1362)/(x1363>>x1364));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x1477 = INT32_MAX;
	volatile uint32_t x1479 = 499868609U;
	uint16_t x1480 = 7U;

    t12 = ((x1477==x1478)/(x1479>>x1480));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x1589 = UINT8_MAX;
	volatile int64_t x1591 = INT64_MAX;
	static int64_t t13 = -4264064LL;

    t13 = ((x1589==x1590)/(x1591>>x1592));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x1709 = INT64_MIN;
	volatile uint64_t x1710 = 17890040148LLU;
	static int32_t x1712 = 3;
	static volatile int32_t t14 = -49;

    t14 = ((x1709==x1710)/(x1711>>x1712));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1733 = INT64_MAX;
	uint16_t x1734 = 14U;
	static uint8_t x1736 = 23U;
	uint64_t t15 = 70193647395LLU;

    t15 = ((x1733==x1734)/(x1735>>x1736));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1770 = INT8_MIN;
	static uint32_t x1771 = 96004552U;
	uint16_t x1772 = 4U;
	uint32_t t16 = 8U;

    t16 = ((x1769==x1770)/(x1771>>x1772));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1801 = UINT32_MAX;
	volatile int8_t x1802 = INT8_MIN;
	static volatile uint64_t t17 = 58462209241LLU;

    t17 = ((x1801==x1802)/(x1803>>x1804));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1825 = -1;
	int8_t x1826 = INT8_MIN;
	int16_t x1827 = INT16_MAX;
	int8_t x1828 = 1;
	int32_t t18 = -33588554;

    t18 = ((x1825==x1826)/(x1827>>x1828));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1853 = -1;
	int8_t x1854 = 1;
	int32_t x1855 = INT32_MAX;
	uint8_t x1856 = 1U;

    t19 = ((x1853==x1854)/(x1855>>x1856));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1865 = 26U;
	uint8_t x1868 = 0U;
	int32_t t20 = 14797623;

    t20 = ((x1865==x1866)/(x1867>>x1868));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1870 = 63U;
	uint64_t x1872 = 4LLU;

    t21 = ((x1869==x1870)/(x1871>>x1872));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1982 = INT16_MAX;
	int8_t x1984 = 5;
	volatile int32_t t22 = 28380064;

    t22 = ((x1981==x1982)/(x1983>>x1984));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x2030 = -9LL;
	uint8_t x2032 = 4U;
	volatile uint64_t t23 = 191678403962LLU;

    t23 = ((x2029==x2030)/(x2031>>x2032));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x2093 = INT32_MAX;
	static uint16_t x2094 = UINT16_MAX;
	int64_t x2095 = INT64_MAX;
	static int8_t x2096 = 1;
	int64_t t24 = -41377611049187985LL;

    t24 = ((x2093==x2094)/(x2095>>x2096));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x2121 = 14190U;
	static int32_t x2122 = INT32_MAX;
	static uint32_t x2123 = UINT32_MAX;
	volatile int8_t x2124 = 6;
	volatile uint32_t t25 = 71932253U;

    t25 = ((x2121==x2122)/(x2123>>x2124));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x2345 = 0U;
	static int64_t x2346 = INT64_MIN;
	uint8_t x2347 = 9U;
	static volatile int8_t x2348 = 2;

    t26 = ((x2345==x2346)/(x2347>>x2348));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x2433 = INT64_MAX;
	static int16_t x2435 = 13936;
	volatile int32_t t27 = 21;

    t27 = ((x2433==x2434)/(x2435>>x2436));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2473 = 12U;
	static volatile int32_t x2474 = INT32_MAX;
	int32_t x2475 = 643;
	int8_t x2476 = 0;
	volatile int32_t t28 = 227411;

    t28 = ((x2473==x2474)/(x2475>>x2476));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x2573 = 165665139;
	static int32_t x2574 = -2298;
	int8_t x2575 = 1;
	uint8_t x2576 = 0U;
	static int32_t t29 = 135160806;

    t29 = ((x2573==x2574)/(x2575>>x2576));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x2629 = 6;
	int64_t x2630 = INT64_MAX;
	static volatile uint32_t x2632 = 5U;
	volatile int32_t t30 = -25;

    t30 = ((x2629==x2630)/(x2631>>x2632));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x2757 = 11U;
	static uint32_t x2758 = 1U;
	static uint64_t x2760 = 9LLU;
	volatile int32_t t31 = 4;

    t31 = ((x2757==x2758)/(x2759>>x2760));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x2886 = 58823U;
	volatile uint8_t x2887 = 27U;
	static int32_t t32 = -17;

    t32 = ((x2885==x2886)/(x2887>>x2888));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x3001 = INT8_MAX;
	uint16_t x3002 = 7U;
	volatile uint32_t x3003 = UINT32_MAX;
	static volatile uint16_t x3004 = 3U;
	uint32_t t33 = 108921357U;

    t33 = ((x3001==x3002)/(x3003>>x3004));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x3014 = -1;
	uint64_t x3015 = UINT64_MAX;
	uint8_t x3016 = 1U;

    t34 = ((x3013==x3014)/(x3015>>x3016));

    if (t34 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

