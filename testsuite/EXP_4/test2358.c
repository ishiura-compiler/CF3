
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

static uint8_t x158 = 9U;
int64_t x160 = -1LL;
volatile int32_t t0 = -56;
int8_t x316 = INT8_MIN;
static int32_t t1 = -12;
int16_t x466 = 1;
uint8_t x468 = 1U;
int16_t x613 = 208;
int32_t x615 = INT32_MIN;


void f0(void) {
    	int16_t x157 = INT16_MAX;
	int8_t x159 = -1;

    t0 = (x157<<(x158+(x159|x160)));

    if (t0 != 8388352) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x313 = 70U;
	uint16_t x314 = 5U;
	static int64_t x315 = INT64_MAX;

    t1 = (x313<<(x314+(x315|x316)));

    if (t1 != 1120) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x465 = 1643U;
	int16_t x467 = -1;
	volatile uint32_t t2 = 818800U;

    t2 = (x465<<(x466+(x467|x468)));

    if (t2 != 1643U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x614 = 7U;
	static int32_t x616 = INT32_MAX;
	volatile int32_t t3 = 0;

    t3 = (x613<<(x614+(x615|x616)));

    if (t3 != 13312) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

