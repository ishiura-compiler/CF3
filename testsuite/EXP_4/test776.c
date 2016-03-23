
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

uint8_t x6 = 1U;
volatile uint64_t t0 = 3954086LLU;
uint32_t x365 = 30694U;
int32_t x368 = INT32_MAX;
int64_t x600 = INT64_MAX;
static uint64_t x709 = 29489643611LLU;
uint64_t x769 = 4379015386LLU;
int64_t x772 = INT64_MAX;
int8_t x842 = 22;


void f0(void) {
    	volatile uint64_t x5 = UINT64_MAX;
	static uint8_t x7 = UINT8_MAX;
	int64_t x8 = INT64_MIN;

    t0 = (x5<<(x6^(x7/x8)));

    if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x101 = 3U;
	uint32_t x102 = 0U;
	static uint8_t x103 = 7U;
	int8_t x104 = INT8_MAX;
	int32_t t1 = -601485320;

    t1 = (x101<<(x102^(x103/x104)));

    if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x366 = 0U;
	uint32_t x367 = 13U;
	uint32_t t2 = 33U;

    t2 = (x365<<(x366^(x367/x368)));

    if (t2 != 30694U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x473 = 1U;
	int16_t x474 = 2;
	int8_t x475 = INT8_MAX;
	int32_t x476 = INT32_MIN;
	volatile int32_t t3 = -229;

    t3 = (x473<<(x474^(x475/x476)));

    if (t3 != 4) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x597 = 327U;
	uint8_t x598 = 0U;
	uint8_t x599 = 27U;
	int32_t t4 = 1954;

    t4 = (x597<<(x598^(x599/x600)));

    if (t4 != 327) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint8_t x710 = 46U;
	uint16_t x711 = UINT16_MAX;
	static uint32_t x712 = UINT32_MAX;
	static uint64_t t5 = 9516757619960298LLU;

    t5 = (x709<<(x710^(x711/x712)));

    if (t5 != 1159325060327014400LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x770 = 0U;
	uint16_t x771 = UINT16_MAX;
	static uint64_t t6 = 66619091119716019LLU;

    t6 = (x769<<(x770^(x771/x772)));

    if (t6 != 4379015386LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x841 = UINT8_MAX;
	uint16_t x843 = 6008U;
	uint8_t x844 = UINT8_MAX;
	static volatile int32_t t7 = 505;

    t7 = (x841<<(x842^(x843/x844)));

    if (t7 != 510) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x869 = 93545983769LLU;
	uint32_t x870 = 6U;
	uint16_t x871 = 286U;
	int32_t x872 = INT32_MAX;
	volatile uint64_t t8 = 29LLU;

    t8 = (x869<<(x870^(x871/x872)));

    if (t8 != 5986942961216LLU) { NG(); } else { ; }
	
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

