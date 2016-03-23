
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

static uint16_t x269 = 12U;
int8_t x272 = 0;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile uint32_t x2 = 1118438234U;
	int64_t x3 = 147578229723966753LL;
	uint8_t x4 = 1U;
	volatile int64_t t0 = 3LL;

    t0 = ((x1*x2)|(x3<<x4));

    if (t0 != 295156461869161026LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x161 = INT16_MIN;
	int16_t x162 = 2956;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = 14LL;
	volatile int32_t t1 = -4640444;

    t1 = ((x161*x162)|(x163<<x164));

    if (t1 != -16384) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x270 = 0U;
	static uint64_t x271 = 284871926086LLU;
	static uint64_t t2 = 4LLU;

    t2 = ((x269*x270)|(x271<<x272));

    if (t2 != 284871926086LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

