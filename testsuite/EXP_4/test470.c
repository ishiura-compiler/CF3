
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

static volatile int32_t t2 = 16595495;
volatile uint32_t x200 = UINT32_MAX;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint64_t x2 = 124313758861LLU;
	int32_t x3 = -1;
	int16_t x4 = -1;
	int32_t t0 = -28773506;

    t0 = (x1==(x2<<(x3*x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x93 = INT16_MIN;
	uint16_t x94 = 338U;
	static int16_t x95 = -1;
	static volatile uint32_t x96 = UINT32_MAX;
	volatile int32_t t1 = 24598917;

    t1 = (x93==(x94<<(x95*x96)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x185 = -1LL;
	uint64_t x186 = 3839LLU;
	int16_t x187 = -1;
	uint64_t x188 = UINT64_MAX;

    t2 = (x185==(x186<<(x187*x188)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x197 = 106U;
	volatile uint32_t x198 = 1U;
	int16_t x199 = -1;
	volatile int32_t t3 = -33048;

    t3 = (x197==(x198<<(x199*x200)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x209 = INT8_MIN;
	uint16_t x210 = 21U;
	static uint64_t x211 = UINT64_MAX;
	int16_t x212 = 0;
	volatile int32_t t4 = -1;

    t4 = (x209==(x210<<(x211*x212)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x281 = -1;
	static uint16_t x282 = 0U;
	static uint8_t x283 = 0U;
	uint16_t x284 = 2762U;
	static volatile int32_t t5 = 7819;

    t5 = (x281==(x282<<(x283*x284)));

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

