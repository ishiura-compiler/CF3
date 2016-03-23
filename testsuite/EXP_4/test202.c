
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

int8_t x243 = INT8_MAX;
static uint32_t x257 = 2U;
volatile uint32_t t1 = 11U;


void f0(void) {
    	int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MIN;
	int8_t x244 = -1;
	static volatile int32_t t0 = -121;

    t0 = (x241<<(x242+(x243-x244)));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x258 = 20U;
	int32_t x259 = -7;
	int16_t x260 = -1;

    t1 = (x257<<(x258+(x259-x260)));

    if (t1 != 32768U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

