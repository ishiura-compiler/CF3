
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

static volatile uint32_t t1 = 9173209U;
volatile uint64_t t2 = UINT64_MAX;
int16_t x582 = INT16_MIN;
volatile uint8_t x584 = 0U;


void f0(void) {
    	uint64_t x145 = 27135188LLU;
	int64_t x146 = -35953493619LL;
	uint32_t x147 = 2356U;
	uint64_t x148 = 20LLU;
	volatile uint64_t t0 = 839980509LLU;

    t0 = ((x145/(x146<=x147))<<x148);

    if (t0 != 28453306892288LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x305 = UINT32_MAX;
	static volatile int16_t x306 = -191;
	int64_t x307 = -1LL;
	int32_t x308 = 1;

    t1 = ((x305/(x306<=x307))<<x308);

    if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x333 = UINT64_MAX;
	int32_t x334 = -1;
	uint16_t x335 = 115U;
	static volatile uint16_t x336 = 0U;

    t2 = ((x333/(x334<=x335))<<x336);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x581 = 6;
	uint16_t x583 = 420U;
	int32_t t3 = 97;

    t3 = ((x581/(x582<=x583))<<x584);

    if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x841 = 2U;
	int8_t x842 = 5;
	int64_t x843 = INT64_MAX;
	int16_t x844 = 0;
	uint32_t t4 = 22U;

    t4 = ((x841/(x842<=x843))<<x844);

    if (t4 != 2U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

