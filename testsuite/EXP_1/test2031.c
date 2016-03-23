
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

static int16_t x159 = 1;
uint32_t x321 = UINT32_MAX;


void f0(void) {
    	static uint32_t x157 = 8260304U;
	uint16_t x158 = 1U;
	int32_t x160 = INT32_MAX;
	volatile uint32_t t0 = 251183U;

    t0 = (((x157>>x158)<<x159)+x160);

    if (t0 != 2155743951U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x309 = 8854U;
	int16_t x310 = 1;
	uint16_t x311 = 16U;
	uint8_t x312 = 4U;
	int32_t t1 = 12423806;

    t1 = (((x309>>x310)<<x311)+x312);

    if (t1 != 290127876) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x322 = 0U;
	static uint32_t x323 = 0U;
	int8_t x324 = INT8_MIN;
	volatile uint32_t t2 = 17U;

    t2 = (((x321>>x322)<<x323)+x324);

    if (t2 != 4294967167U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

