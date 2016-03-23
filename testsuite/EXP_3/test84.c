
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

uint16_t x1 = 7U;
volatile int16_t x17 = INT16_MAX;
int32_t x18 = 2;
int32_t x19 = -1715;
static int64_t t1 = 6549704618LL;
uint64_t x173 = 3833LLU;
volatile uint64_t t3 = 23999567096505893LLU;
static int8_t x205 = INT8_MAX;
static uint64_t x272 = UINT64_MAX;


void f0(void) {
    	uint32_t x2 = 0U;
	int16_t x3 = -10;
	int64_t x4 = -1LL;
	int64_t t0 = 16305LL;

    t0 = ((x1<<x2)^(x3+x4));

    if (t0 != -14LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x20 = 335432LL;

    t1 = ((x17<<x18)^(x19+x20));

    if (t1 != 321641LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x169 = 1094186617347014212LLU;
	volatile uint64_t x170 = 15LLU;
	static volatile uint32_t x171 = UINT32_MAX;
	volatile int8_t x172 = 28;
	uint64_t t2 = 9058LLU;

    t2 = ((x169<<x170)^(x171+x172));

    if (t2 != 12283342009302908955LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x174 = 12U;
	int16_t x175 = -1;
	volatile int16_t x176 = INT16_MIN;

    t3 = ((x173<<x174)^(x175+x176));

    if (t3 != 18446744073693884415LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x206 = 3U;
	int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t4 = 14692;

    t4 = ((x205<<x206)^(x207+x208));

    if (t4 != -1017) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x269 = 4;
	static uint32_t x270 = 3U;
	static int16_t x271 = 1;
	volatile uint64_t t5 = 116514LLU;

    t5 = ((x269<<x270)^(x271+x272));

    if (t5 != 32LLU) { NG(); } else { ; }
	
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

