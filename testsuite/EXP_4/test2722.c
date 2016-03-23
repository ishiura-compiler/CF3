
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



void f0(void) {
    	int32_t x85 = 8840;
	static uint8_t x86 = 1U;
	static int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t0 = -1;

    t0 = (x85<<(x86|(x87^x88)));

    if (t0 != 17680) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x245 = INT16_MAX;
	static uint16_t x246 = 0U;
	uint64_t x247 = UINT64_MAX;
	volatile int8_t x248 = -3;
	int32_t t1 = 847935;

    t1 = (x245<<(x246|(x247^x248)));

    if (t1 != 131068) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

