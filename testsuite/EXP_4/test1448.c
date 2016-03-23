
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

uint16_t x38 = 3U;
int16_t x74 = 1;
volatile uint64_t x209 = 278553050421205LLU;
volatile int16_t x211 = INT16_MIN;
uint8_t x244 = 29U;
volatile uint8_t x550 = 45U;
volatile int64_t x552 = INT64_MIN;
volatile uint8_t x633 = 17U;


void f0(void) {
    	volatile uint8_t x37 = 26U;
	uint64_t x39 = 16683737867894340LLU;
	static int16_t x40 = 309;
	int32_t t0 = 4;

    t0 = (x37<<(x38<<(x39==x40)));

    if (t0 != 208) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x73 = 15U;
	volatile uint8_t x75 = 30U;
	int32_t x76 = -1;
	int32_t t1 = -17381;

    t1 = (x73<<(x74<<(x75==x76)));

    if (t1 != 30) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x210 = 46U;
	int64_t x212 = INT64_MIN;
	volatile uint64_t t2 = 489431960823757LLU;

    t2 = (x209<<(x210<<(x211==x212)));

    if (t2 != 14264377763510091776LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x241 = 50LLU;
	uint32_t x242 = 60U;
	uint64_t x243 = 61827668142LLU;
	volatile uint64_t t3 = 561329299754998LLU;

    t3 = (x241<<(x242<<(x243==x244)));

    if (t3 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x549 = 101737LLU;
	uint64_t x551 = 20LLU;
	uint64_t t4 = 24084LLU;

    t4 = (x549<<(x550<<(x551==x552)));

    if (t4 != 3579552463201501184LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x634 = 3;
	volatile int32_t x635 = -11369;
	static int8_t x636 = INT8_MAX;
	int32_t t5 = -7887;

    t5 = (x633<<(x634<<(x635==x636)));

    if (t5 != 136) { NG(); } else { ; }
	
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

