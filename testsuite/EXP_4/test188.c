
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

uint64_t x21 = 38763023590724LLU;
int16_t x22 = 16;
uint8_t x24 = 1U;
volatile uint64_t t0 = 9337010LLU;
int8_t x58 = -1;
volatile int8_t x273 = 0;
uint8_t x316 = 3U;


void f0(void) {
    	int16_t x23 = 0;

    t0 = (x21<<(x22^(x23+x24)));

    if (t0 != 5080747028083376128LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x57 = UINT16_MAX;
	int32_t x59 = INT32_MAX;
	static int32_t x60 = INT32_MIN;
	volatile int32_t t1 = 16831295;

    t1 = (x57<<(x58^(x59+x60)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x274 = UINT32_MAX;
	static int8_t x275 = -1;
	static int8_t x276 = -1;
	static volatile int32_t t2 = -8807642;

    t2 = (x273<<(x274^(x275+x276)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x313 = UINT8_MAX;
	uint16_t x314 = 0U;
	int32_t x315 = 19;
	volatile int32_t t3 = -8;

    t3 = (x313<<(x314^(x315+x316)));

    if (t3 != 1069547520) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x641 = 391U;
	int32_t x642 = INT32_MIN;
	uint32_t x643 = 12U;
	int32_t x644 = INT32_MIN;
	volatile uint32_t t4 = 14U;

    t4 = (x641<<(x642^(x643+x644)));

    if (t4 != 1601536U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

