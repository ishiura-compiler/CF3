
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

uint8_t x78 = 2U;
static volatile uint64_t x90 = 3158548LLU;
int16_t x237 = -1;
static volatile int8_t x239 = 16;
volatile uint32_t t4 = 216U;
volatile uint32_t x618 = UINT32_MAX;
static int64_t x620 = INT64_MIN;
volatile uint16_t x651 = 1U;
int16_t x716 = -1;


void f0(void) {
    	static volatile int64_t x73 = 4732LL;
	static volatile uint8_t x74 = UINT8_MAX;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	int64_t t0 = -7840918867366LL;

    t0 = ((x73|x74)<<(x75-x76));

    if (t0 != 4863LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x77 = INT64_MAX;
	int32_t x79 = -1;
	uint64_t x80 = UINT64_MAX;
	volatile int64_t t1 = INT64_MAX;

    t1 = ((x77|x78)<<(x79-x80));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x89 = INT8_MAX;
	volatile int8_t x91 = INT8_MIN;
	static int8_t x92 = INT8_MIN;
	volatile uint64_t t2 = 2585665547LLU;

    t2 = ((x89|x90)<<(x91-x92));

    if (t2 != 3158655LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x93 = UINT64_MAX;
	static int64_t x94 = INT64_MAX;
	static int16_t x95 = -1;
	int8_t x96 = -1;
	static uint64_t t3 = UINT64_MAX;

    t3 = ((x93|x94)<<(x95-x96));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x238 = 14795045U;
	uint64_t x240 = UINT64_MAX;

    t4 = ((x237|x238)<<(x239-x240));

    if (t4 != 4294836224U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x409 = 11;
	volatile int64_t x410 = INT64_MAX;
	static int16_t x411 = -1;
	static int16_t x412 = -1;
	static volatile int64_t t5 = INT64_MAX;

    t5 = ((x409|x410)<<(x411-x412));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x609 = 129474521U;
	static int8_t x610 = INT8_MIN;
	uint16_t x611 = UINT16_MAX;
	uint16_t x612 = UINT16_MAX;
	volatile uint32_t t6 = 116060U;

    t6 = ((x609|x610)<<(x611-x612));

    if (t6 != 4294967257U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x617 = INT32_MAX;
	int64_t x619 = INT64_MIN;
	volatile uint32_t t7 = UINT32_MAX;

    t7 = ((x617|x618)<<(x619-x620));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x649 = -1;
	uint32_t x650 = 458U;
	static int64_t x652 = -1LL;
	uint32_t t8 = 64496U;

    t8 = ((x649|x650)<<(x651-x652));

    if (t8 != 4294967292U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x665 = UINT32_MAX;
	uint8_t x666 = 80U;
	int16_t x667 = INT16_MIN;
	int16_t x668 = INT16_MIN;
	volatile uint32_t t9 = UINT32_MAX;

    t9 = ((x665|x666)<<(x667-x668));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x713 = INT8_MIN;
	uint32_t x714 = 1000U;
	int8_t x715 = 3;
	volatile uint32_t t10 = 612863859U;

    t10 = ((x713|x714)<<(x715-x716));

    if (t10 != 4294966912U) { NG(); } else { ; }
	
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
    f9();
    f10();


    return 0;
}

