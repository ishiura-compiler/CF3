
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

volatile uint32_t x53 = UINT32_MAX;
int8_t x55 = 0;
int64_t x59 = INT64_MIN;
int16_t x583 = INT16_MIN;
uint64_t t4 = UINT64_MAX;
static int8_t x600 = INT8_MAX;
volatile int32_t t5 = 350862116;


void f0(void) {
    	uint8_t x54 = 5U;
	int8_t x56 = INT8_MAX;
	uint32_t t0 = 47U;

    t0 = (x53>>(x54^(x55%x56)));

    if (t0 != 134217727U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x57 = INT32_MAX;
	volatile int64_t x58 = -1LL;
	volatile int8_t x60 = 29;
	static int32_t t1 = 1;

    t1 = (x57>>(x58^(x59%x60)));

    if (t1 != 1048575) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x97 = 586;
	volatile int8_t x98 = 20;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	volatile int32_t t2 = 476905410;

    t2 = (x97>>(x98^(x99%x100)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x493 = 603;
	static uint32_t x494 = 22U;
	int32_t x495 = INT32_MIN;
	int8_t x496 = 1;
	int32_t t3 = -3677633;

    t3 = (x493>>(x494^(x495%x496)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x581 = UINT64_MAX;
	int8_t x582 = 0;
	int8_t x584 = INT8_MIN;

    t4 = (x581>>(x582^(x583%x584)));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x597 = 66U;
	int8_t x598 = -1;
	static int16_t x599 = -4;

    t5 = (x597>>(x598^(x599%x600)));

    if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x629 = UINT32_MAX;
	int16_t x630 = 1;
	int64_t x631 = -1LL;
	int16_t x632 = -1;
	volatile uint32_t t6 = 125U;

    t6 = (x629>>(x630^(x631%x632)));

    if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x681 = 256152714968LLU;
	int8_t x682 = -3;
	int32_t x683 = -307985;
	static int8_t x684 = 7;
	volatile uint64_t t7 = 44178540LLU;

    t7 = (x681>>(x682^(x683%x684)));

    if (t7 != 2001193085LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x697 = 43;
	static uint64_t x698 = 4LLU;
	int64_t x699 = -24LL;
	uint8_t x700 = 3U;
	volatile int32_t t8 = 181;

    t8 = (x697>>(x698^(x699%x700)));

    if (t8 != 2) { NG(); } else { ; }
	
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


    return 0;
}

