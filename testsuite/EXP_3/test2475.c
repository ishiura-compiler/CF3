
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

static volatile int16_t x18 = -1;
int8_t x20 = 1;
static uint16_t x72 = 1U;
int8_t x165 = 4;
volatile int32_t t2 = 153022;
int16_t x777 = -5;


void f0(void) {
    	int64_t x17 = INT64_MAX;
	uint8_t x19 = 7U;
	int32_t t0 = -460538458;

    t0 = ((x17>x18)>>(x19|x20));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x69 = INT32_MIN;
	int8_t x70 = -1;
	uint16_t x71 = 8U;
	int32_t t1 = 371674132;

    t1 = ((x69>x70)>>(x71|x72));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x166 = UINT64_MAX;
	static uint8_t x167 = 9U;
	volatile int8_t x168 = 14;

    t2 = ((x165>x166)>>(x167|x168));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x433 = 92U;
	uint64_t x434 = 95595203383306581LLU;
	volatile int8_t x435 = 0;
	int8_t x436 = 13;
	static int32_t t3 = -15;

    t3 = ((x433>x434)>>(x435|x436));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x761 = INT16_MAX;
	int16_t x762 = INT16_MAX;
	uint8_t x763 = 14U;
	int8_t x764 = 1;
	volatile int32_t t4 = -5;

    t4 = ((x761>x762)>>(x763|x764));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x778 = 12;
	uint8_t x779 = 0U;
	int8_t x780 = 3;
	volatile int32_t t5 = -1;

    t5 = ((x777>x778)>>(x779|x780));

    if (t5 != 0) { NG(); } else { ; }
	
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

