
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

uint32_t x202 = 7U;
volatile int32_t t0 = 860580;
volatile int32_t t1 = -3703273;


void f0(void) {
    	uint8_t x201 = 123U;
	static volatile int64_t x203 = INT64_MIN;
	volatile int16_t x204 = 7;

    t0 = (((x201>>x202)!=x203)>>x204);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x261 = 2001394752620LLU;
	uint64_t x262 = 1LLU;
	volatile int64_t x263 = -5754LL;
	uint8_t x264 = 0U;

    t1 = (((x261>>x262)!=x263)>>x264);

    if (t1 != 1) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

