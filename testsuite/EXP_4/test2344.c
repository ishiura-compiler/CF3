
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

static uint64_t x61 = 1LLU;
int16_t x63 = INT16_MIN;
static int8_t x64 = 1;
uint64_t t0 = 67176073073LLU;
volatile int32_t t1 = INT32_MAX;
static volatile uint32_t x621 = UINT32_MAX;
volatile int16_t x624 = -1;
uint32_t t5 = UINT32_MAX;
volatile int32_t t6 = 106;
int64_t x759 = -1LL;
static int16_t x968 = -1;
uint32_t x986 = 9U;
volatile uint64_t x987 = UINT64_MAX;
uint16_t x988 = 30U;
uint8_t x1089 = 3U;
int8_t x1090 = 1;
int32_t x1092 = INT32_MIN;


void f0(void) {
    	uint8_t x62 = 15U;

    t0 = (x61<<(x62^(x63&x64)));

    if (t0 != 32768LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x137 = INT32_MAX;
	static int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MIN;
	volatile int64_t x140 = -1LL;

    t1 = (x137<<(x138^(x139&x140)));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x225 = UINT16_MAX;
	volatile uint16_t x226 = UINT16_MAX;
	int64_t x227 = -1LL;
	uint16_t x228 = UINT16_MAX;
	int32_t t2 = -76296;

    t2 = (x225<<(x226^(x227&x228)));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x313 = 293924U;
	uint8_t x314 = 5U;
	int16_t x315 = 5845;
	int64_t x316 = INT64_MIN;
	uint32_t t3 = 115U;

    t3 = (x313<<(x314^(x315&x316)));

    if (t3 != 9405568U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x489 = 0;
	static uint16_t x490 = 0U;
	uint32_t x491 = 7U;
	int32_t x492 = -1;
	int32_t t4 = -6308;

    t4 = (x489<<(x490^(x491&x492)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x622 = INT32_MIN;
	int32_t x623 = INT32_MIN;

    t5 = (x621<<(x622^(x623&x624)));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x685 = 31421;
	int16_t x686 = 2;
	uint32_t x687 = 598771224U;
	int32_t x688 = INT32_MIN;

    t6 = (x685<<(x686^(x687&x688)));

    if (t6 != 125684) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x757 = INT8_MAX;
	int32_t x758 = -1;
	int64_t x760 = -1LL;
	int32_t t7 = -17756;

    t7 = (x757<<(x758^(x759&x760)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x857 = 0;
	int64_t x858 = 15LL;
	static uint64_t x859 = 1LLU;
	uint32_t x860 = 5U;
	static volatile int32_t t8 = 1;

    t8 = (x857<<(x858^(x859&x860)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x965 = 3;
	int8_t x966 = -1;
	int16_t x967 = -1;
	int32_t t9 = -7;

    t9 = (x965<<(x966^(x967&x968)));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x973 = 30901213U;
	volatile uint16_t x974 = UINT16_MAX;
	int64_t x975 = -1LL;
	static uint16_t x976 = UINT16_MAX;
	uint32_t t10 = 31U;

    t10 = (x973<<(x974^(x975&x976)));

    if (t10 != 30901213U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x985 = 215U;
	int32_t t11 = 498373815;

    t11 = (x985<<(x986^(x987&x988)));

    if (t11 != 1803550720) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1091 = UINT16_MAX;
	static int32_t t12 = -347963;

    t12 = (x1089<<(x1090^(x1091&x1092)));

    if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1101 = 254391U;
	int32_t x1102 = INT32_MIN;
	int8_t x1103 = -1;
	int32_t x1104 = INT32_MIN;
	uint32_t t13 = 466318110U;

    t13 = (x1101<<(x1102^(x1103&x1104)));

    if (t13 != 254391U) { NG(); } else { ; }
	
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


    return 0;
}

