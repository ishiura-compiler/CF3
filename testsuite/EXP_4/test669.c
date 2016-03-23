
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

static int8_t x23 = INT8_MIN;
uint8_t x366 = 4U;
static int16_t x368 = INT16_MIN;
int16_t x461 = INT16_MAX;
volatile uint16_t x498 = 1U;
static int8_t x499 = INT8_MIN;
uint32_t x637 = 63015197U;
static uint64_t x639 = UINT64_MAX;
static int64_t x640 = -1LL;
volatile uint32_t t5 = 1U;
static volatile uint8_t x686 = 5U;
uint8_t x933 = UINT8_MAX;
static uint16_t x934 = 0U;


void f0(void) {
    	int8_t x21 = INT8_MAX;
	uint32_t x22 = 20U;
	int64_t x24 = -56439036046LL;
	int32_t t0 = 6;

    t0 = (x21>>(x22<<(x23/x24)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x365 = 3;
	static volatile int8_t x367 = INT8_MIN;
	volatile int32_t t1 = -285591;

    t1 = (x365>>(x366<<(x367/x368)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x462 = 25;
	uint64_t x463 = 3LLU;
	static uint8_t x464 = 76U;
	static int32_t t2 = 872;

    t2 = (x461>>(x462<<(x463/x464)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x497 = UINT16_MAX;
	static uint32_t x500 = UINT32_MAX;
	static volatile int32_t t3 = -8012604;

    t3 = (x497>>(x498<<(x499/x500)));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x545 = 679U;
	uint64_t x546 = 23LLU;
	int8_t x547 = INT8_MIN;
	uint16_t x548 = UINT16_MAX;
	static volatile int32_t t4 = -12336713;

    t4 = (x545>>(x546<<(x547/x548)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x638 = 0LLU;

    t5 = (x637>>(x638<<(x639/x640)));

    if (t5 != 63015197U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x685 = INT64_MAX;
	static int8_t x687 = 23;
	volatile uint64_t x688 = 568922979616402331LLU;
	volatile int64_t t6 = -15491LL;

    t6 = (x685>>(x686<<(x687/x688)));

    if (t6 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x829 = INT16_MAX;
	uint64_t x830 = 31LLU;
	volatile uint8_t x831 = 67U;
	int32_t x832 = INT32_MIN;
	int32_t t7 = -782;

    t7 = (x829>>(x830<<(x831/x832)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x935 = INT16_MIN;
	static int32_t x936 = INT32_MAX;
	volatile int32_t t8 = -1459;

    t8 = (x933>>(x934<<(x935/x936)));

    if (t8 != 255) { NG(); } else { ; }
	
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
    f8();


    return 0;
}

