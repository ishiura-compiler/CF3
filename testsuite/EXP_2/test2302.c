
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

int32_t x195 = INT32_MAX;
int8_t x294 = INT8_MIN;
int8_t x321 = 1;
volatile int32_t x322 = INT32_MIN;
int32_t x555 = 3970;


void f0(void) {
    	volatile uint8_t x193 = 15U;
	static int32_t x194 = INT32_MIN;
	static uint8_t x196 = 5U;
	volatile int32_t t0 = -2034674;

    t0 = ((x193>>(x194&x195))<<x196);

    if (t0 != 480) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x293 = 1154007U;
	volatile int16_t x295 = 0;
	int8_t x296 = 1;
	volatile uint32_t t1 = 2025033047U;

    t1 = ((x293>>(x294&x295))<<x296);

    if (t1 != 2308014U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x323 = 1U;
	uint16_t x324 = 2U;
	static volatile int32_t t2 = -281673043;

    t2 = ((x321>>(x322&x323))<<x324);

    if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x381 = 1;
	uint8_t x382 = UINT8_MAX;
	static int16_t x383 = 2;
	static int16_t x384 = 3;
	static volatile int32_t t3 = 0;

    t3 = ((x381>>(x382&x383))<<x384);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x533 = UINT8_MAX;
	int64_t x534 = INT64_MIN;
	int16_t x535 = INT16_MAX;
	int8_t x536 = 0;
	int32_t t4 = 2075211;

    t4 = ((x533>>(x534&x535))<<x536);

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x553 = 687;
	static int8_t x554 = 4;
	uint8_t x556 = 9U;
	volatile int32_t t5 = 622295722;

    t5 = ((x553>>(x554&x555))<<x556);

    if (t5 != 351744) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

