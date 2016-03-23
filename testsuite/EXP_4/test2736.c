
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

volatile uint32_t x197 = 184109U;
uint8_t x198 = 17U;
int64_t x492 = INT64_MAX;
static uint64_t x705 = 18326LLU;
int16_t x707 = -1;
int32_t x842 = INT32_MAX;
static uint64_t x929 = 4029LLU;


void f0(void) {
    	uint64_t x177 = 1008727792861LLU;
	volatile int8_t x178 = -41;
	static uint8_t x179 = 1U;
	static int16_t x180 = -1;
	uint64_t t0 = 172LLU;

    t0 = (x177<<(x178^(x179^x180)));

    if (t0 != 13346903479851941888LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x199 = 1;
	volatile uint8_t x200 = 17U;
	volatile uint32_t t1 = 6449U;

    t1 = (x197<<(x198^(x199^x200)));

    if (t1 != 368218U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x489 = INT16_MAX;
	int32_t x490 = -1;
	static volatile int64_t x491 = INT64_MIN;
	int32_t t2 = -492213364;

    t2 = (x489<<(x490^(x491^x492)));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x706 = 28U;
	int16_t x708 = -1;
	volatile uint64_t t3 = 207086805569LLU;

    t3 = (x705<<(x706^(x707^x708)));

    if (t3 != 4919348166656LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x841 = INT8_MAX;
	static int32_t x843 = INT32_MAX;
	static int8_t x844 = 11;
	int32_t t4 = 25023;

    t4 = (x841<<(x842^(x843^x844)));

    if (t4 != 260096) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x921 = UINT64_MAX;
	int32_t x922 = INT32_MAX;
	volatile int32_t x923 = -1;
	volatile int32_t x924 = INT32_MIN;
	static volatile uint64_t t5 = UINT64_MAX;

    t5 = (x921<<(x922^(x923^x924)));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x930 = INT16_MAX;
	int16_t x931 = INT16_MAX;
	int8_t x932 = 1;
	volatile uint64_t t6 = 10LLU;

    t6 = (x929<<(x930^(x931^x932)));

    if (t6 != 8058LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x973 = UINT16_MAX;
	volatile int64_t x974 = INT64_MIN;
	int64_t x975 = INT64_MAX;
	int32_t x976 = -1;
	int32_t t7 = 0;

    t7 = (x973<<(x974^(x975^x976)));

    if (t7 != 65535) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();


    return 0;
}

