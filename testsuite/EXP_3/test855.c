
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

uint32_t x63 = 140541U;
uint32_t x117 = 2085416761U;
static int8_t x118 = 11;
int16_t x120 = INT16_MIN;
uint64_t x121 = 6276653316692LLU;
volatile int16_t x258 = 6;
int16_t x260 = -1;
volatile int64_t t4 = 168185199131417022LL;
int64_t x300 = INT64_MIN;
static uint32_t x562 = 3U;
uint32_t x605 = UINT32_MAX;
static uint8_t x610 = 16U;
static int16_t x611 = 263;
uint8_t x622 = 10U;
uint64_t x624 = UINT64_MAX;
volatile int64_t t15 = 18277660830959966LL;
int64_t x836 = 36155765657LL;


void f0(void) {
    	uint64_t x61 = UINT64_MAX;
	volatile int8_t x62 = 16;
	uint32_t x64 = 23676516U;
	uint64_t t0 = 32028690LLU;

    t0 = ((x61<<x62)+(x63%x64));

    if (t0 != 75005LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x119 = -1LL;
	int64_t t1 = -6603697250020LL;

    t1 = ((x117<<x118)+(x119%x120));

    if (t1 != 1736034303LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x122 = 4U;
	uint32_t x123 = 504398903U;
	int64_t x124 = -268205LL;
	volatile uint64_t t2 = 14LLU;

    t2 = ((x121<<x122)+(x123%x124));

    if (t2 != 100426453240575LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x125 = 243;
	volatile uint8_t x126 = 13U;
	int8_t x127 = 0;
	static int64_t x128 = INT64_MIN;
	int64_t t3 = -456112LL;

    t3 = ((x125<<x126)+(x127%x128));

    if (t3 != 1990656LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x257 = 4;
	int64_t x259 = -350LL;

    t4 = ((x257<<x258)+(x259%x260));

    if (t4 != 256LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x297 = 9330U;
	uint16_t x298 = 5U;
	static int8_t x299 = INT8_MAX;
	int64_t t5 = -367407893206175563LL;

    t5 = ((x297<<x298)+(x299%x300));

    if (t5 != 298687LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x413 = 10U;
	uint8_t x414 = 5U;
	int32_t x415 = 1063;
	int8_t x416 = -1;
	int32_t t6 = -21;

    t6 = ((x413<<x414)+(x415%x416));

    if (t6 != 320) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x553 = UINT8_MAX;
	int8_t x554 = 17;
	static uint8_t x555 = 0U;
	volatile int64_t x556 = INT64_MIN;
	int64_t t7 = -25201054346LL;

    t7 = ((x553<<x554)+(x555%x556));

    if (t7 != 33423360LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint16_t x561 = 10928U;
	int8_t x563 = 1;
	int8_t x564 = INT8_MIN;
	static int32_t t8 = -1482930;

    t8 = ((x561<<x562)+(x563%x564));

    if (t8 != 87425) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x565 = INT8_MAX;
	uint8_t x566 = 4U;
	int8_t x567 = 0;
	static int64_t x568 = 312628364076LL;
	int64_t t9 = -7LL;

    t9 = ((x565<<x566)+(x567%x568));

    if (t9 != 2032LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x606 = 9LLU;
	int32_t x607 = INT32_MAX;
	volatile int64_t x608 = INT64_MAX;
	static int64_t t10 = -169LL;

    t10 = ((x605<<x606)+(x607%x608));

    if (t10 != 6442450431LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x609 = 3493LLU;
	uint64_t x612 = 4883014453008492LLU;
	uint64_t t11 = 10499445LLU;

    t11 = ((x609<<x610)+(x611%x612));

    if (t11 != 228917511LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x621 = 17;
	static int16_t x623 = -1;
	uint64_t t12 = 10LLU;

    t12 = ((x621<<x622)+(x623%x624));

    if (t12 != 17408LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x681 = 8318957;
	uint8_t x682 = 3U;
	volatile int64_t x683 = 2016952LL;
	volatile uint8_t x684 = UINT8_MAX;
	volatile int64_t t13 = -15302299027808LL;

    t13 = ((x681<<x682)+(x683%x684));

    if (t13 != 66551813LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x737 = UINT64_MAX;
	uint8_t x738 = 55U;
	volatile uint8_t x739 = 127U;
	uint8_t x740 = 7U;
	volatile uint64_t t14 = 19362043LLU;

    t14 = ((x737<<x738)+(x739%x740));

    if (t14 != 18410715276690587649LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x749 = 14U;
	uint16_t x750 = 15U;
	static int64_t x751 = -305234375999LL;
	int64_t x752 = -1LL;

    t15 = ((x749<<x750)+(x751%x752));

    if (t15 != 458752LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x833 = 29U;
	uint8_t x834 = 9U;
	uint32_t x835 = 10189262U;
	int64_t t16 = 3134LL;

    t16 = ((x833<<x834)+(x835%x836));

    if (t16 != 10204110LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x877 = 313149U;
	volatile int8_t x878 = 7;
	int64_t x879 = INT64_MIN;
	volatile uint64_t x880 = 178159283704790766LLU;
	uint64_t t17 = 77LLU;

    t17 = ((x877<<x878)+(x879%x880));

    if (t17 != 137248567950529814LLU) { NG(); } else { ; }
	
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


    return 0;
}

