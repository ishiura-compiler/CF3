
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

uint64_t x247 = 11LLU;
volatile uint16_t x263 = 0U;
static uint8_t x264 = 3U;


void f0(void) {
    	uint16_t x245 = 34U;
	static int8_t x246 = INT8_MIN;
	uint8_t x248 = 2U;
	volatile int32_t t0 = -517681016;

    t0 = (((x245==x246)>>x247)<<x248);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x261 = INT64_MIN;
	uint64_t x262 = 1606436196876LLU;
	int32_t t1 = -1;

    t1 = (((x261==x262)>>x263)<<x264);

    if (t1 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

