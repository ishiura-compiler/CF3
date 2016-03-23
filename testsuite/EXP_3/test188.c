
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

int64_t x66 = INT64_MIN;
int8_t x412 = 3;
volatile uint64_t t2 = 361026661062831711LLU;
static int8_t x523 = 11;


void f0(void) {
    	static int8_t x65 = INT8_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	volatile int8_t x68 = 1;
	static int64_t t0 = 17260914LL;

    t0 = ((x65^x66)<<(x67+x68));

    if (t0 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x389 = 861U;
	static int8_t x390 = INT8_MAX;
	int8_t x391 = 0;
	static uint16_t x392 = 3U;
	volatile int32_t t1 = -94503406;

    t1 = ((x389^x390)<<(x391+x392));

    if (t1 != 6416) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x409 = UINT32_MAX;
	uint64_t x410 = 457769LLU;
	int32_t x411 = -1;

    t2 = ((x409^x410)<<(x411+x412));

    if (t2 != 17178038104LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x521 = 4166257LLU;
	volatile uint32_t x522 = UINT32_MAX;
	volatile uint32_t x524 = UINT32_MAX;
	volatile uint64_t t3 = 196535859995LLU;

    t3 = ((x521^x522)<<(x523+x524));

    if (t3 != 4393780262912LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();


    return 0;
}

