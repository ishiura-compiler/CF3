
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

static volatile int32_t t0 = -532982;


void f0(void) {
    	int8_t x101 = -18;
	int8_t x102 = INT8_MAX;
	uint8_t x103 = 9U;
	volatile int16_t x104 = 1;

    t0 = ((x101<=(x102<<x103))>>x104);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x305 = -1;
	static uint32_t x306 = 105935U;
	uint64_t x307 = 2LLU;
	int32_t x308 = 3;
	int32_t t1 = 23685197;

    t1 = ((x305<=(x306<<x307))>>x308);

    if (t1 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

