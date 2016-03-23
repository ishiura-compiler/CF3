
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

uint64_t x46 = 30329040LLU;
uint64_t t0 = 1068947009290LLU;


void f0(void) {
    	uint8_t x45 = 11U;
	int8_t x47 = 1;
	volatile int8_t x48 = -1;

    t0 = (x45+(x46<<(x47+x48)));

    if (t0 != 30329051LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x61 = 2U;
	volatile uint32_t x62 = 322960463U;
	volatile int8_t x63 = -1;
	uint8_t x64 = 1U;
	static volatile uint32_t t1 = 3886U;

    t1 = (x61+(x62<<(x63+x64)));

    if (t1 != 322960465U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x293 = INT64_MIN;
	volatile int8_t x294 = INT8_MAX;
	volatile uint8_t x295 = 1U;
	volatile int8_t x296 = 0;
	volatile int64_t t2 = 3010293219LL;

    t2 = (x293+(x294<<(x295+x296)));

    if (t2 != -9223372036854775554LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

