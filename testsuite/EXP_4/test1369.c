
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

static uint64_t x17 = UINT64_MAX;
int8_t x20 = INT8_MIN;
volatile uint16_t x73 = 375U;
int32_t x75 = 1;
static volatile uint64_t x76 = 1LLU;
static int8_t x96 = 0;
int32_t t2 = -130400581;
int8_t x126 = 6;


void f0(void) {
    	int32_t x18 = 1;
	static int8_t x19 = 32;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = (x17>>(x18^(x19!=x20)));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x74 = 0U;
	int32_t t1 = 226907;

    t1 = (x73>>(x74^(x75!=x76)));

    if (t1 != 375) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x93 = 0;
	static uint8_t x94 = 0U;
	int16_t x95 = INT16_MIN;

    t2 = (x93>>(x94^(x95!=x96)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x125 = 1;
	int32_t x127 = -1;
	uint32_t x128 = 7835231U;
	int32_t t3 = -812837;

    t3 = (x125>>(x126^(x127!=x128)));

    if (t3 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

