
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

static int8_t x344 = 12;
int64_t x469 = INT64_MIN;
int64_t x866 = -1LL;
uint8_t x867 = 0U;
uint64_t t4 = 551760245442216422LLU;
static int16_t x1249 = INT16_MIN;
uint8_t x1251 = 1U;
volatile uint8_t x1624 = 2U;
static int16_t x1824 = 1;
uint64_t t7 = 63LLU;


void f0(void) {
    	int8_t x289 = -2;
	uint8_t x290 = UINT8_MAX;
	uint32_t x291 = 1U;
	volatile uint8_t x292 = 1U;
	int32_t t0 = -28936800;

    t0 = (((x289&x290)>>x291)>>x292);

    if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x341 = 11048330531LLU;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = 2U;
	volatile uint64_t t1 = 280466986614234040LLU;

    t1 = (((x341&x342)>>x343)>>x344);

    if (t1 != 674336LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x470 = UINT64_MAX;
	static int32_t x471 = 0;
	static volatile uint8_t x472 = 2U;
	uint64_t t2 = 14388393LLU;

    t2 = (((x469&x470)>>x471)>>x472);

    if (t2 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x865 = INT64_MAX;
	int8_t x868 = 1;
	int64_t t3 = -44909407490953LL;

    t3 = (((x865&x866)>>x867)>>x868);

    if (t3 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x1141 = UINT64_MAX;
	int16_t x1142 = INT16_MAX;
	uint32_t x1143 = 0U;
	volatile int8_t x1144 = 10;

    t4 = (((x1141&x1142)>>x1143)>>x1144);

    if (t4 != 31LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x1250 = UINT8_MAX;
	static uint16_t x1252 = 1U;
	static volatile int32_t t5 = -1;

    t5 = (((x1249&x1250)>>x1251)>>x1252);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x1621 = INT16_MIN;
	static uint8_t x1622 = UINT8_MAX;
	uint32_t x1623 = 1U;
	volatile int32_t t6 = -16;

    t6 = (((x1621&x1622)>>x1623)>>x1624);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x1821 = 1047391313748LLU;
	uint64_t x1822 = 5018470514071034875LLU;
	int32_t x1823 = 3;

    t7 = (((x1821&x1822)>>x1823)>>x1824);

    if (t7 != 22498644405LLU) { NG(); } else { ; }
	
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

