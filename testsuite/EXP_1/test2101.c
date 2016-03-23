
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

volatile int8_t x343 = 22;
static uint64_t t1 = 142LLU;
volatile uint64_t x753 = UINT64_MAX;
int64_t x755 = 41LL;


void f0(void) {
    	volatile int8_t x341 = 50;
	volatile uint16_t x342 = 29U;
	static int8_t x344 = 7;
	static volatile int32_t t0 = 1;

    t0 = (((x341>>x342)>>x343)+x344);

    if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x541 = UINT64_MAX;
	static int32_t x542 = 10;
	int64_t x543 = 26LL;
	volatile int64_t x544 = INT64_MIN;

    t1 = (((x541>>x542)>>x543)+x544);

    if (t1 != 9223372037123211263LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x601 = INT8_MAX;
	static int32_t x602 = 11;
	int64_t x603 = 0LL;
	int16_t x604 = INT16_MAX;
	static volatile int32_t t2 = -21;

    t2 = (((x601>>x602)>>x603)+x604);

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x754 = 0;
	static int64_t x756 = INT64_MIN;
	static volatile uint64_t t3 = 700546077845926LLU;

    t3 = (((x753>>x754)>>x755)+x756);

    if (t3 != 9223372036863164415LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

