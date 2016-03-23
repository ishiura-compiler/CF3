
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

int16_t x29 = INT16_MAX;
uint16_t x45 = 2U;
int8_t x48 = -1;
volatile int16_t x168 = INT16_MIN;
static uint16_t x382 = 3U;
uint32_t x507 = 518U;


void f0(void) {
    	uint64_t x1 = 42989LLU;
	uint32_t x2 = 1U;
	uint32_t x3 = UINT32_MAX;
	static uint64_t x4 = 509542755415083015LLU;
	uint64_t t0 = 46249060390LLU;

    t0 = ((x1<<x2)%(x3<=x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x30 = 9U;
	int8_t x31 = INT8_MIN;
	uint32_t x32 = UINT32_MAX;
	int32_t t1 = -1;

    t1 = ((x29<<x30)%(x31<=x32));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x46 = 19;
	volatile int64_t x47 = -231756LL;
	volatile int32_t t2 = -201;

    t2 = ((x45<<x46)%(x47<=x48));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x165 = 14636500U;
	static int64_t x166 = 8LL;
	uint64_t x167 = 3390266589450955887LLU;
	volatile uint32_t t3 = 18036143U;

    t3 = ((x165<<x166)%(x167<=x168));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x381 = UINT16_MAX;
	int32_t x383 = -578925;
	uint16_t x384 = UINT16_MAX;
	int32_t t4 = -996413400;

    t4 = ((x381<<x382)%(x383<=x384));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x405 = UINT8_MAX;
	int16_t x406 = 0;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	static int32_t t5 = -16800241;

    t5 = ((x405<<x406)%(x407<=x408));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x505 = 382U;
	uint8_t x506 = 2U;
	static uint64_t x508 = UINT64_MAX;
	static int32_t t6 = -4166;

    t6 = ((x505<<x506)%(x507<=x508));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x553 = 21;
	volatile uint16_t x554 = 1U;
	int8_t x555 = -4;
	int8_t x556 = -4;
	volatile int32_t t7 = -121;

    t7 = ((x553<<x554)%(x555<=x556));

    if (t7 != 0) { NG(); } else { ; }
	
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


    return 0;
}

