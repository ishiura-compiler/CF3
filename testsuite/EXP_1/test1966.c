
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

uint64_t t1 = 252113LLU;


void f0(void) {
    	volatile uint32_t x393 = UINT32_MAX;
	uint8_t x394 = 26U;
	int32_t x395 = INT32_MIN;
	static uint16_t x396 = 7U;
	static uint32_t t0 = 2676U;

    t0 = (((x393>>x394)+x395)<<x396);

    if (t0 != 8064U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x637 = 0U;
	volatile int16_t x638 = 0;
	static uint64_t x639 = UINT64_MAX;
	uint8_t x640 = 5U;

    t1 = (((x637>>x638)+x639)<<x640);

    if (t1 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

