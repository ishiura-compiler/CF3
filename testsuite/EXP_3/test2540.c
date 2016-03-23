
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

static volatile uint16_t x562 = 672U;


void f0(void) {
    	int64_t x141 = -1LL;
	int8_t x142 = -1;
	volatile uint64_t x143 = 18LLU;
	volatile int8_t x144 = 48;
	volatile int64_t t0 = -4056030021LL;

    t0 = ((x141^x142)<<(x143|x144));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x381 = 19710U;
	uint32_t x382 = 27U;
	int16_t x383 = 0;
	volatile uint64_t x384 = 2LLU;
	uint32_t t1 = 4U;

    t1 = ((x381^x382)<<(x383|x384));

    if (t1 != 78740U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x561 = 65303989043468LLU;
	uint16_t x563 = 4U;
	static uint32_t x564 = 3U;
	static uint64_t t2 = 38LLU;

    t2 = ((x561^x562)<<(x563|x564));

    if (t2 != 8358910597649920LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x729 = INT32_MIN;
	static volatile int64_t x730 = -1LL;
	static uint32_t x731 = 0U;
	uint8_t x732 = 12U;
	int64_t t3 = -5312007LL;

    t3 = ((x729^x730)<<(x731|x732));

    if (t3 != 8796093018112LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

