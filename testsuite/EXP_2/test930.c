
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

uint64_t x93 = UINT64_MAX;
uint8_t x94 = 10U;
volatile int32_t t1 = -3659149;
static int8_t x349 = INT8_MAX;
uint16_t x352 = 3U;
static int16_t x454 = 952;
int8_t x455 = -4;
static int8_t x456 = 1;


void f0(void) {
    	int8_t x95 = INT8_MAX;
	uint8_t x96 = 12U;
	uint64_t t0 = 115LLU;

    t0 = ((x93>>(x94%x95))<<x96);

    if (t0 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x97 = 35U;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	int16_t x100 = 1;

    t1 = ((x97>>(x98%x99))<<x100);

    if (t1 != 70) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint32_t x213 = 1U;
	volatile int64_t x214 = INT64_MIN;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 2U;
	uint32_t t2 = 1911958U;

    t2 = ((x213>>(x214%x215))<<x216);

    if (t2 != 4U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x221 = 0U;
	volatile int64_t x222 = 10LL;
	int32_t x223 = INT32_MIN;
	int8_t x224 = 1;
	volatile int32_t t3 = -1;

    t3 = ((x221>>(x222%x223))<<x224);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x261 = 77U;
	int16_t x262 = -15;
	int32_t x263 = -1;
	int8_t x264 = 0;
	static volatile int32_t t4 = 28391;

    t4 = ((x261>>(x262%x263))<<x264);

    if (t4 != 77) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x350 = -256546;
	int8_t x351 = -1;
	static volatile int32_t t5 = -13702389;

    t5 = ((x349>>(x350%x351))<<x352);

    if (t5 != 1016) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x453 = 3LLU;
	static volatile uint64_t t6 = 51188834326467LLU;

    t6 = ((x453>>(x454%x455))<<x456);

    if (t6 != 6LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

