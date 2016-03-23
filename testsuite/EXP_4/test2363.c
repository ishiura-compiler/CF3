
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

int16_t x136 = -1273;
static uint64_t x145 = UINT64_MAX;
volatile uint64_t x232 = 113195945210LLU;
static int32_t t5 = -26;


void f0(void) {
    	uint16_t x133 = 3704U;
	uint8_t x134 = 17U;
	int8_t x135 = -1;
	int32_t t0 = 992711833;

    t0 = (x133>>(x134+(x135|x136)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x146 = 1;
	int16_t x147 = INT16_MIN;
	int64_t x148 = -1LL;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = (x145>>(x146+(x147|x148)));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x229 = 30592U;
	int8_t x230 = 9;
	uint64_t x231 = UINT64_MAX;
	uint32_t t2 = 788U;

    t2 = (x229>>(x230+(x231|x232)));

    if (t2 != 119U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x405 = 10637LLU;
	static int32_t x406 = INT32_MIN;
	static uint32_t x407 = 0U;
	int32_t x408 = INT32_MIN;
	uint64_t t3 = 0LLU;

    t3 = (x405>>(x406+(x407|x408)));

    if (t3 != 10637LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x489 = INT64_MAX;
	uint16_t x490 = 63U;
	static int64_t x491 = -54020LL;
	int8_t x492 = INT8_MIN;
	static int64_t t4 = 46587982650LL;

    t4 = (x489>>(x490+(x491|x492)));

    if (t4 != 15LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x501 = 14;
	static volatile uint16_t x502 = 17U;
	int64_t x503 = -61LL;
	int16_t x504 = -19;

    t5 = (x501>>(x502+(x503|x504)));

    if (t5 != 14) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

