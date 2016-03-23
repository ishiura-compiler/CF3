
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

uint64_t x3 = 8690593772LLU;
int8_t x48 = 6;
static uint64_t t1 = 1573885539699LLU;
uint64_t x346 = 1514979839467723619LLU;


void f0(void) {
    	uint64_t x1 = 37826293345349LLU;
	volatile uint8_t x2 = 83U;
	uint8_t x4 = 49U;
	uint64_t t0 = 297599LLU;

    t0 = (x1*(x2>>(x3>>x4)));

    if (t0 != 3139582347663967LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x45 = 2LLU;
	int16_t x46 = 3;
	volatile uint16_t x47 = 14U;

    t1 = (x45*(x46>>(x47>>x48)));

    if (t1 != 6LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x345 = INT16_MAX;
	uint8_t x347 = 1U;
	volatile uint16_t x348 = 5U;
	static volatile uint64_t t2 = 0LLU;

    t2 = (x345*(x346>>(x347>>x348)));

    if (t2 != 1156097486496425117LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

