
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

uint16_t x81 = 10U;
int32_t t0 = -6;
uint8_t x124 = 15U;
int16_t x321 = INT16_MIN;


void f0(void) {
    	uint8_t x82 = 1U;
	static int8_t x83 = 7;
	volatile uint16_t x84 = 0U;

    t0 = (((x81==x82)<<x83)<<x84);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x121 = INT8_MIN;
	uint32_t x122 = 147U;
	int8_t x123 = 0;
	static volatile int32_t t1 = -2;

    t1 = (((x121==x122)<<x123)<<x124);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x322 = UINT32_MAX;
	int16_t x323 = 15;
	uint16_t x324 = 0U;
	volatile int32_t t2 = 56;

    t2 = (((x321==x322)<<x323)<<x324);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x437 = INT64_MIN;
	volatile uint16_t x438 = 3988U;
	int8_t x439 = 0;
	volatile uint8_t x440 = 11U;
	volatile int32_t t3 = 0;

    t3 = (((x437==x438)<<x439)<<x440);

    if (t3 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

