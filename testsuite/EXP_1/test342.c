
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

volatile uint32_t x133 = 1817U;
volatile int8_t x468 = 0;


void f0(void) {
    	volatile int8_t x134 = 0;
	uint64_t x135 = 0LLU;
	static int16_t x136 = 21;
	volatile uint32_t t0 = 358U;

    t0 = (((x133-x134)>>x135)<<x136);

    if (t0 != 3810525184U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x465 = UINT32_MAX;
	int32_t x466 = 2;
	static int64_t x467 = 0LL;
	uint32_t t1 = 89409324U;

    t1 = (((x465-x466)>>x467)<<x468);

    if (t1 != 4294967293U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

