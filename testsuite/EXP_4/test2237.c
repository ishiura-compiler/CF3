
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

uint16_t x305 = 241U;
static uint8_t x306 = 4U;


void f0(void) {
    	uint64_t x157 = UINT64_MAX;
	uint8_t x158 = 11U;
	static int8_t x159 = INT8_MAX;
	int16_t x160 = 1;
	static uint64_t t0 = 1068314411LLU;

    t0 = (x157>>(x158<<(x159&x160)));

    if (t0 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x253 = 31U;
	int32_t x254 = 2;
	int64_t x255 = -411964159798291476LL;
	int16_t x256 = 1;
	int32_t t1 = -176960102;

    t1 = (x253>>(x254<<(x255&x256)));

    if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x307 = 0;
	uint32_t x308 = UINT32_MAX;
	volatile int32_t t2 = 1;

    t2 = (x305>>(x306<<(x307&x308)));

    if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x381 = 16;
	uint32_t x382 = 0U;
	volatile uint16_t x383 = 3U;
	int8_t x384 = 0;
	volatile int32_t t3 = 216;

    t3 = (x381>>(x382<<(x383&x384)));

    if (t3 != 16) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

