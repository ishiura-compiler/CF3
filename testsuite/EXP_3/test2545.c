
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

static int64_t x6 = INT64_MIN;
uint32_t x8 = 10U;
int64_t t0 = -667298LL;
int8_t x275 = 5;


void f0(void) {
    	volatile int64_t x5 = INT64_MIN;
	volatile int8_t x7 = 1;

    t0 = ((x5^x6)>>(x7|x8));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MIN;
	uint8_t x276 = 31U;
	volatile int32_t t1 = 2972899;

    t1 = ((x273^x274)>>(x275|x276));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x397 = 66245888LL;
	int16_t x398 = INT16_MAX;
	static int16_t x399 = 3;
	uint64_t x400 = 2LLU;
	int64_t t2 = 2LL;

    t2 = ((x397^x398)>>(x399|x400));

    if (t2 != 8279391LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x537 = UINT8_MAX;
	uint64_t x538 = UINT64_MAX;
	static uint16_t x539 = 35U;
	uint8_t x540 = 54U;
	static uint64_t t3 = 384406532LLU;

    t3 = ((x537^x538)>>(x539|x540));

    if (t3 != 511LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

