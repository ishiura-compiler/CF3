
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

volatile uint16_t x156 = 1U;
volatile uint32_t t0 = 10U;
static uint64_t x331 = UINT64_MAX;


void f0(void) {
    	volatile uint32_t x153 = 63086443U;
	volatile int64_t x154 = INT64_MIN;
	volatile int64_t x155 = INT64_MIN;

    t0 = (x153<<(x154-(x155*x156)));

    if (t0 != 63086443U) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x269 = 27U;
	static int16_t x270 = 15;
	int8_t x271 = 1;
	uint16_t x272 = 2U;
	volatile int32_t t1 = 1341272;

    t1 = (x269<<(x270-(x271*x272)));

    if (t1 != 221184) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x329 = 491U;
	volatile uint16_t x330 = 1U;
	uint8_t x332 = 7U;
	uint32_t t2 = 35U;

    t2 = (x329<<(x330-(x331*x332)));

    if (t2 != 125696U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

