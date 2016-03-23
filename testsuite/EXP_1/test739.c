
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

static uint16_t x137 = 1U;
int16_t x139 = 24;
uint32_t t1 = 177U;
static volatile int8_t x399 = 1;
int64_t x782 = INT64_MIN;
uint8_t x783 = 7U;
int8_t x929 = INT8_MIN;
volatile uint64_t x930 = UINT64_MAX;
int16_t x932 = 0;
uint64_t t4 = 5333433901919757LLU;


void f0(void) {
    	int8_t x138 = 6;
	static uint16_t x140 = 8U;
	int32_t t0 = -2;

    t0 = (((x137/x138)>>x139)>>x140);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x153 = INT32_MAX;
	uint32_t x154 = 366963U;
	uint8_t x155 = 27U;
	uint16_t x156 = 31U;

    t1 = (((x153/x154)>>x155)>>x156);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x397 = 3U;
	uint64_t x398 = 212LLU;
	uint16_t x400 = 24U;
	volatile uint64_t t2 = 1844694LLU;

    t2 = (((x397/x398)>>x399)>>x400);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x781 = INT64_MAX;
	static uint16_t x784 = 25U;
	int64_t t3 = -3253534628LL;

    t3 = (((x781/x782)>>x783)>>x784);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x931 = 25;

    t4 = (((x929/x930)>>x931)>>x932);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

