
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

volatile uint32_t t0 = 2709851U;


void f0(void) {
    	uint32_t x117 = 421U;
	int8_t x118 = 9;
	int8_t x119 = INT8_MIN;
	static int8_t x120 = INT8_MAX;

    t0 = (x117>>(x118+(x119+x120)));

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x325 = 50;
	uint32_t x326 = 14U;
	uint8_t x327 = 3U;
	int8_t x328 = -1;
	volatile int32_t t1 = -1;

    t1 = (x325>>(x326+(x327+x328)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x637 = 1764LLU;
	uint16_t x638 = 22U;
	int16_t x639 = -1;
	uint16_t x640 = 2U;
	uint64_t t2 = 46469LLU;

    t2 = (x637>>(x638+(x639+x640)));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

