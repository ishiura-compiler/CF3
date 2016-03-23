
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

static uint32_t x89 = 125743824U;
static int64_t x90 = -1LL;
int8_t x91 = INT8_MIN;
int8_t x92 = INT8_MIN;
volatile int8_t x221 = 2;
uint64_t t2 = 263522512LLU;
static int32_t t3 = -234711;


void f0(void) {
    	volatile int32_t x41 = INT32_MIN;
	static uint32_t x42 = 1017551533U;
	int8_t x43 = -1;
	uint32_t x44 = UINT32_MAX;
	static volatile uint32_t t0 = 52U;

    t0 = ((x41*x42)/(x43==x44));

    if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t t1 = 3153316725LL;

    t1 = ((x89*x90)/(x91==x92));

    if (t1 != -125743824LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x222 = 2497413096388LLU;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;

    t2 = ((x221*x222)/(x223==x224));

    if (t2 != 4994826192776LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x521 = INT8_MAX;
	uint8_t x522 = UINT8_MAX;
	int32_t x523 = INT32_MIN;
	int32_t x524 = INT32_MIN;

    t3 = ((x521*x522)/(x523==x524));

    if (t3 != 32385) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

