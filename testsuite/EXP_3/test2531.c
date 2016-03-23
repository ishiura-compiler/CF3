
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

uint64_t x38 = 1LLU;
volatile int16_t x338 = 54;
int32_t x384 = 11;
uint64_t x730 = 760198421658LLU;


void f0(void) {
    	int16_t x37 = 2;
	uint64_t x39 = 2LLU;
	static uint16_t x40 = 0U;
	uint64_t t0 = 60021907118LLU;

    t0 = ((x37|x38)>>(x39|x40));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x337 = 345LL;
	int8_t x339 = 0;
	static uint16_t x340 = 0U;
	volatile int64_t t1 = -92817LL;

    t1 = ((x337|x338)>>(x339|x340));

    if (t1 != 383LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x381 = INT32_MAX;
	volatile int16_t x382 = INT16_MAX;
	volatile uint8_t x383 = 3U;
	volatile int32_t t2 = 12454;

    t2 = ((x381|x382)>>(x383|x384));

    if (t2 != 1048575) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x729 = -1;
	volatile int16_t x731 = 4;
	static uint16_t x732 = 0U;
	uint64_t t3 = 4790LLU;

    t3 = ((x729|x730)>>(x731|x732));

    if (t3 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

