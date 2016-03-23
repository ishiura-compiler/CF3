
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

int8_t x155 = 12;
static int32_t x156 = -1;
uint32_t x229 = UINT32_MAX;
int64_t x230 = 0LL;
int16_t x282 = INT16_MIN;
uint32_t t2 = 54460217U;


void f0(void) {
    	volatile int8_t x153 = INT8_MAX;
	uint8_t x154 = 19U;
	int32_t t0 = 32;

    t0 = ((x153>>(x154^x155))+x156);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x231 = 0;
	volatile uint32_t x232 = 0U;
	uint32_t t1 = UINT32_MAX;

    t1 = ((x229>>(x230^x231))+x232);

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x281 = 232U;
	volatile int16_t x283 = INT16_MIN;
	uint32_t x284 = 676507297U;

    t2 = ((x281>>(x282^x283))+x284);

    if (t2 != 676507529U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x537 = INT16_MAX;
	volatile int8_t x538 = 1;
	uint8_t x539 = 26U;
	volatile int16_t x540 = INT16_MIN;
	int32_t t3 = -1;

    t3 = ((x537>>(x538^x539))+x540);

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x653 = 13090U;
	int8_t x654 = 22;
	int16_t x655 = 0;
	int64_t x656 = INT64_MAX;
	int64_t t4 = INT64_MAX;

    t4 = ((x653>>(x654^x655))+x656);

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

