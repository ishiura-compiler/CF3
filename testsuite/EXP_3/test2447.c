
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

int32_t x290 = INT32_MAX;
volatile uint16_t x291 = 0U;


void f0(void) {
    	uint32_t x145 = UINT32_MAX;
	static volatile int8_t x146 = 14;
	uint8_t x147 = 3U;
	uint16_t x148 = 10U;
	volatile int32_t t0 = 50410;

    t0 = ((x145!=x146)>>(x147|x148));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x289 = INT8_MIN;
	uint16_t x292 = 2U;
	int32_t t1 = 153;

    t1 = ((x289!=x290)>>(x291|x292));

    if (t1 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

