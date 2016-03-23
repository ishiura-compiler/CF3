
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

uint16_t x308 = 2U;
uint8_t x483 = 0U;
volatile uint32_t x662 = 62989U;
volatile int8_t x664 = 10;


void f0(void) {
    	uint64_t x305 = UINT64_MAX;
	static int16_t x306 = INT16_MAX;
	int8_t x307 = 4;
	static uint64_t t0 = 5289027823381277083LLU;

    t0 = ((x305&x306)<<(x307|x308));

    if (t0 != 2097088LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x481 = 179107LLU;
	int32_t x482 = INT32_MAX;
	volatile uint8_t x484 = 0U;
	volatile uint64_t t1 = 119591001412964137LLU;

    t1 = ((x481&x482)<<(x483|x484));

    if (t1 != 179107LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x661 = INT16_MIN;
	uint32_t x663 = 6U;
	volatile uint32_t t2 = 59781U;

    t2 = ((x661&x662)<<(x663|x664));

    if (t2 != 536870912U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	static int32_t x702 = INT32_MIN;
	uint8_t x703 = 0U;
	uint64_t x704 = 3LLU;
	int32_t t3 = -729;

    t3 = ((x701&x702)<<(x703|x704));

    if (t3 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

