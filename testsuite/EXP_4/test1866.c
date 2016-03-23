
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

volatile int32_t x180 = INT32_MAX;
int64_t t0 = INT64_MAX;
int64_t x651 = INT64_MIN;
static volatile uint16_t x652 = 820U;
uint16_t x850 = 1U;
int16_t x926 = 0;
int64_t t5 = INT64_MIN;
static uint8_t x938 = 1U;
volatile int32_t t6 = 15;
int32_t x1049 = INT32_MIN;
int8_t x1050 = 1;
static int8_t x1058 = 0;
int32_t t8 = -25779507;
volatile int32_t x1209 = INT32_MIN;
int64_t x1211 = INT64_MIN;
int32_t t10 = -6;
volatile uint64_t x1705 = 25040778420443393LLU;
volatile int64_t x1707 = INT64_MAX;
uint16_t x1870 = 0U;
uint32_t x1872 = 568U;
int8_t x2040 = 5;
uint16_t x2228 = UINT16_MAX;
int64_t x2349 = -1LL;
int8_t x2352 = -1;
int8_t x2490 = 0;
static volatile int64_t x2492 = INT64_MIN;
int32_t t22 = -483032667;
int16_t x2906 = 0;
int32_t x3036 = INT32_MIN;
int32_t x3152 = INT32_MAX;
int32_t t27 = 48642372;
uint8_t x3436 = UINT8_MAX;


void f0(void) {
    	int64_t x177 = INT64_MAX;
	uint8_t x178 = 1U;
	int16_t x179 = INT16_MAX;

    t0 = (x177/(x178==(x179<=x180)));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x409 = UINT32_MAX;
	int8_t x410 = 0;
	int64_t x411 = INT64_MAX;
	int64_t x412 = -18784360LL;
	uint32_t t1 = UINT32_MAX;

    t1 = (x409/(x410==(x411<=x412)));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x649 = INT32_MIN;
	int8_t x650 = 1;
	int32_t t2 = INT32_MIN;

    t2 = (x649/(x650==(x651<=x652)));

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x729 = 1270713629893407LLU;
	int32_t x730 = 1;
	uint64_t x731 = 35000029096LLU;
	volatile uint64_t x732 = UINT64_MAX;
	static uint64_t t3 = 219LLU;

    t3 = (x729/(x730==(x731<=x732)));

    if (t3 != 1270713629893407LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x849 = -1LL;
	int8_t x851 = INT8_MAX;
	static volatile uint32_t x852 = UINT32_MAX;
	volatile int64_t t4 = 9LL;

    t4 = (x849/(x850==(x851<=x852)));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x925 = INT64_MIN;
	int64_t x927 = INT64_MAX;
	static uint32_t x928 = 58272766U;

    t5 = (x925/(x926==(x927<=x928)));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x937 = INT16_MIN;
	static int8_t x939 = -1;
	volatile uint8_t x940 = 0U;

    t6 = (x937/(x938==(x939<=x940)));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x1051 = 1604314385LLU;
	static uint64_t x1052 = 33168503014604LLU;
	volatile int32_t t7 = INT32_MIN;

    t7 = (x1049/(x1050==(x1051<=x1052)));

    if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x1057 = 0;
	int8_t x1059 = -6;
	volatile uint64_t x1060 = 741966LLU;

    t8 = (x1057/(x1058==(x1059<=x1060)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x1210 = 1;
	int64_t x1212 = -1LL;
	volatile int32_t t9 = INT32_MIN;

    t9 = (x1209/(x1210==(x1211<=x1212)));

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x1389 = INT8_MIN;
	volatile uint16_t x1390 = 1U;
	volatile int64_t x1391 = -1LL;
	volatile int8_t x1392 = -1;

    t10 = (x1389/(x1390==(x1391<=x1392)));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1541 = INT32_MIN;
	int8_t x1542 = 0;
	int32_t x1543 = -124321309;
	uint32_t x1544 = 11491752U;
	volatile int32_t t11 = INT32_MIN;

    t11 = (x1541/(x1542==(x1543<=x1544)));

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x1629 = -1;
	volatile uint8_t x1630 = 1U;
	volatile int8_t x1631 = INT8_MIN;
	static int16_t x1632 = 15594;
	volatile int32_t t12 = 4;

    t12 = (x1629/(x1630==(x1631<=x1632)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x1706 = 0U;
	int8_t x1708 = INT8_MAX;
	static volatile uint64_t t13 = 39LLU;

    t13 = (x1705/(x1706==(x1707<=x1708)));

    if (t13 != 25040778420443393LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1825 = UINT32_MAX;
	static uint16_t x1826 = 0U;
	uint64_t x1827 = 941222LLU;
	static uint16_t x1828 = 6656U;
	static uint32_t t14 = UINT32_MAX;

    t14 = (x1825/(x1826==(x1827<=x1828)));

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1869 = 92884537447837964LL;
	volatile uint32_t x1871 = 12162U;
	int64_t t15 = -9088962120079241LL;

    t15 = (x1869/(x1870==(x1871<=x1872)));

    if (t15 != 92884537447837964LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x2037 = UINT8_MAX;
	uint32_t x2038 = 0U;
	uint32_t x2039 = 27194411U;
	int32_t t16 = -102657886;

    t16 = (x2037/(x2038==(x2039<=x2040)));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x2225 = -1;
	int8_t x2226 = 1;
	uint8_t x2227 = 7U;
	int32_t t17 = -21;

    t17 = (x2225/(x2226==(x2227<=x2228)));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x2350 = 1;
	volatile int16_t x2351 = INT16_MIN;
	volatile int64_t t18 = 12916669700186833LL;

    t18 = (x2349/(x2350==(x2351<=x2352)));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x2421 = UINT8_MAX;
	uint8_t x2422 = 1U;
	int16_t x2423 = -2;
	uint8_t x2424 = 62U;
	volatile int32_t t19 = -101377210;

    t19 = (x2421/(x2422==(x2423<=x2424)));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x2457 = UINT32_MAX;
	int16_t x2458 = 1;
	volatile uint8_t x2459 = UINT8_MAX;
	uint64_t x2460 = UINT64_MAX;
	uint32_t t20 = UINT32_MAX;

    t20 = (x2457/(x2458==(x2459<=x2460)));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x2489 = INT64_MIN;
	volatile int8_t x2491 = INT8_MAX;
	int64_t t21 = INT64_MIN;

    t21 = (x2489/(x2490==(x2491<=x2492)));

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x2585 = 49U;
	uint8_t x2586 = 1U;
	uint8_t x2587 = 1U;
	volatile int32_t x2588 = INT32_MAX;

    t22 = (x2585/(x2586==(x2587<=x2588)));

    if (t22 != 49) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x2761 = INT8_MIN;
	volatile int8_t x2762 = 1;
	volatile uint32_t x2763 = 132928321U;
	volatile int32_t x2764 = -1;
	int32_t t23 = 2095642;

    t23 = (x2761/(x2762==(x2763<=x2764)));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x2905 = INT16_MIN;
	volatile int16_t x2907 = 3532;
	static int16_t x2908 = INT16_MIN;
	int32_t t24 = -11605;

    t24 = (x2905/(x2906==(x2907<=x2908)));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x2997 = UINT32_MAX;
	volatile uint8_t x2998 = 0U;
	volatile int16_t x2999 = -4958;
	volatile uint32_t x3000 = 2U;
	uint32_t t25 = UINT32_MAX;

    t25 = (x2997/(x2998==(x2999<=x3000)));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x3033 = INT16_MAX;
	uint8_t x3034 = 0U;
	int16_t x3035 = 741;
	volatile int32_t t26 = 5258;

    t26 = (x3033/(x3034==(x3035<=x3036)));

    if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x3149 = INT8_MIN;
	int32_t x3150 = 1;
	int16_t x3151 = 1;

    t27 = (x3149/(x3150==(x3151<=x3152)));

    if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x3433 = 1106007735U;
	int8_t x3434 = 1;
	int16_t x3435 = -1730;
	uint32_t t28 = 3U;

    t28 = (x3433/(x3434==(x3435<=x3436)));

    if (t28 != 1106007735U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x3437 = INT32_MIN;
	int32_t x3438 = 1;
	int32_t x3439 = INT32_MIN;
	int16_t x3440 = -1;
	int32_t t29 = INT32_MIN;

    t29 = (x3437/(x3438==(x3439<=x3440)));

    if (t29 != INT32_MIN) { NG(); } else { ; }
	
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


    return 0;
}

