
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

int16_t x86 = INT16_MIN;
static uint32_t x292 = 22U;
uint8_t x355 = 0U;
volatile int64_t x517 = 248322414810LL;
volatile int64_t t3 = 540595835862204LL;
volatile uint64_t x746 = UINT64_MAX;
uint8_t x748 = 4U;
int16_t x1056 = 4;
uint16_t x1455 = 300U;
static int64_t x1706 = INT64_MAX;
uint8_t x1708 = 0U;
uint8_t x1736 = 5U;
uint32_t x1865 = 56U;


void f0(void) {
    	volatile uint8_t x85 = UINT8_MAX;
	uint8_t x87 = 2U;
	int32_t x88 = 11;
	int32_t t0 = -356875;

    t0 = ((x85&x86)>>(x87>>x88));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x289 = 592U;
	static int16_t x290 = INT16_MIN;
	uint8_t x291 = 2U;
	volatile int32_t t1 = 208;

    t1 = ((x289&x290)>>(x291>>x292));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x353 = -95;
	int8_t x354 = INT8_MAX;
	static uint8_t x356 = 5U;
	static volatile int32_t t2 = -17766436;

    t2 = ((x353&x354)>>(x355>>x356));

    if (t2 != 33) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x518 = 1;
	volatile uint16_t x519 = 1892U;
	int8_t x520 = 16;

    t3 = ((x517&x518)>>(x519>>x520));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x573 = 69696975;
	static int32_t x574 = INT32_MIN;
	uint16_t x575 = 5U;
	int64_t x576 = 1LL;
	int32_t t4 = -18182593;

    t4 = ((x573&x574)>>(x575>>x576));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x745 = -1;
	int32_t x747 = 42;
	volatile uint64_t t5 = 87LLU;

    t5 = ((x745&x746)>>(x747>>x748));

    if (t5 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x1053 = INT32_MIN;
	volatile uint32_t x1054 = 9428842U;
	static uint32_t x1055 = 1U;
	uint32_t t6 = 6035124U;

    t6 = ((x1053&x1054)>>(x1055>>x1056));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x1157 = 1209560;
	int64_t x1158 = -1LL;
	uint8_t x1159 = 43U;
	int32_t x1160 = 29;
	static volatile int64_t t7 = 52LL;

    t7 = ((x1157&x1158)>>(x1159>>x1160));

    if (t7 != 1209560LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x1345 = 28030U;
	volatile int16_t x1346 = -1;
	uint32_t x1347 = UINT32_MAX;
	static int16_t x1348 = 31;
	static volatile int32_t t8 = 38943;

    t8 = ((x1345&x1346)>>(x1347>>x1348));

    if (t8 != 14015) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x1453 = INT16_MAX;
	volatile int64_t x1454 = -1LL;
	uint32_t x1456 = 29U;
	static int64_t t9 = -7LL;

    t9 = ((x1453&x1454)>>(x1455>>x1456));

    if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x1705 = 7U;
	uint16_t x1707 = 12U;
	static int64_t t10 = -3600942282041LL;

    t10 = ((x1705&x1706)>>(x1707>>x1708));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x1733 = INT32_MAX;
	volatile int16_t x1734 = -1;
	int8_t x1735 = 1;
	volatile int32_t t11 = INT32_MAX;

    t11 = ((x1733&x1734)>>(x1735>>x1736));

    if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x1866 = INT32_MIN;
	volatile int64_t x1867 = 751290953LL;
	int8_t x1868 = 55;
	volatile uint32_t t12 = 245746801U;

    t12 = ((x1865&x1866)>>(x1867>>x1868));

    if (t12 != 0U) { NG(); } else { ; }
	
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


    return 0;
}

