
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

uint64_t x2 = 9LLU;
volatile int16_t x4 = 11;
volatile int16_t x37 = INT16_MIN;
volatile int8_t x40 = 27;
static volatile uint64_t t1 = 543967733446598505LLU;


void f0(void) {
    	int32_t x1 = -1;
	uint16_t x3 = 284U;
	volatile uint64_t t0 = 4LLU;

    t0 = ((x1|(x2&x3))<<x4);

    if (t0 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x38 = INT64_MIN;
	uint64_t x39 = 3743802752903147LLU;

    t1 = ((x37|(x38&x39))<<x40);

    if (t1 != 18446739675663040512LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

