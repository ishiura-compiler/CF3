
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



void f0(void) {
    	volatile uint64_t x5 = 138010751580LLU;
	int32_t x6 = INT32_MIN;
	static int32_t x7 = INT32_MIN;
	int16_t x8 = -1;
	uint64_t t0 = 16383836752LLU;

    t0 = (x5>>(x6^(x7-x8)));

    if (t0 != 69005375790LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x173 = 28858174U;
	static int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MIN;
	int8_t x176 = -20;
	static volatile uint32_t t1 = 2799U;

    t1 = (x173>>(x174^(x175-x176)));

    if (t1 != 27U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

