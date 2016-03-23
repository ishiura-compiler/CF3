
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

volatile int8_t x89 = 4;
volatile int8_t x165 = INT8_MAX;
uint8_t x166 = 14U;
int8_t x247 = 1;


void f0(void) {
    	volatile uint8_t x90 = 27U;
	int8_t x91 = -4;
	int32_t x92 = -1;
	static int32_t t0 = -183713;

    t0 = (x89<<(x90+(x91+x92)));

    if (t0 != 16777216) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x167 = 9U;
	volatile int16_t x168 = -1;
	volatile int32_t t1 = 30371;

    t1 = (x165<<(x166+(x167+x168)));

    if (t1 != 532676608) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x245 = UINT64_MAX;
	int64_t x246 = 32LL;
	uint64_t x248 = UINT64_MAX;
	static uint64_t t2 = 45716936189LLU;

    t2 = (x245<<(x246+(x247+x248)));

    if (t2 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x289 = INT8_MAX;
	static uint8_t x290 = 20U;
	int64_t x291 = -1LL;
	int8_t x292 = 1;
	static volatile int32_t t3 = 117;

    t3 = (x289<<(x290+(x291+x292)));

    if (t3 != 133169152) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x365 = UINT16_MAX;
	static int16_t x366 = 0;
	uint32_t x367 = 7U;
	volatile int16_t x368 = -1;
	static int32_t t4 = -66733626;

    t4 = (x365<<(x366+(x367+x368)));

    if (t4 != 4194240) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x677 = 171U;
	int32_t x678 = -1;
	int16_t x679 = 14;
	uint64_t x680 = UINT64_MAX;
	volatile int32_t t5 = 0;

    t5 = (x677<<(x678+(x679+x680)));

    if (t5 != 700416) { NG(); } else { ; }
	
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

