
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

uint32_t x91 = 41U;
volatile uint32_t x433 = UINT32_MAX;
uint8_t x434 = 1U;
int64_t x837 = 620LL;


void f0(void) {
    	uint64_t x89 = 112720981874062LLU;
	uint8_t x90 = 46U;
	int8_t x92 = -1;
	static uint64_t t0 = 6LLU;

    t0 = (x89<<(x90-(x91+x92)));

    if (t0 != 7214142839939968LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x435 = INT32_MAX;
	int32_t x436 = INT32_MIN;
	volatile uint32_t t1 = 0U;

    t1 = (x433<<(x434-(x435+x436)));

    if (t1 != 4294967292U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x838 = 1U;
	int8_t x839 = -1;
	int16_t x840 = -1;
	static volatile int64_t t2 = 3LL;

    t2 = (x837<<(x838-(x839+x840)));

    if (t2 != 4960LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

