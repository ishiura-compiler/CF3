
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

uint64_t x3 = 3969LLU;
uint8_t x4 = 0U;
volatile uint64_t t0 = 62516173036585LLU;
int64_t x485 = INT64_MAX;
volatile int32_t t4 = 7507755;
uint64_t x697 = 2308LLU;
volatile uint64_t x698 = UINT64_MAX;
int64_t x785 = INT64_MAX;
int8_t x786 = INT8_MIN;
int64_t x787 = INT64_MAX;
int32_t x813 = INT32_MAX;
volatile int32_t t7 = -356713;
static uint64_t x973 = 145362LLU;
uint16_t x974 = 17660U;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MAX;

    t0 = ((x1!=x2)/(x3>>x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x297 = 5517634150633LLU;
	int16_t x298 = 193;
	volatile uint16_t x299 = 884U;
	volatile int8_t x300 = 6;
	volatile int32_t t1 = -486338;

    t1 = ((x297!=x298)/(x299>>x300));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x473 = INT8_MAX;
	volatile uint8_t x474 = 1U;
	static int64_t x475 = INT64_MAX;
	uint32_t x476 = 18U;
	volatile int64_t t2 = 88951LL;

    t2 = ((x473!=x474)/(x475>>x476));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x486 = -1253;
	int16_t x487 = 2387;
	static uint8_t x488 = 2U;
	static volatile int32_t t3 = 0;

    t3 = ((x485!=x486)/(x487>>x488));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x689 = UINT16_MAX;
	int16_t x690 = INT16_MIN;
	int32_t x691 = INT32_MAX;
	uint8_t x692 = 2U;

    t4 = ((x689!=x690)/(x691>>x692));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x699 = UINT32_MAX;
	uint8_t x700 = 4U;
	volatile uint32_t t5 = 8685U;

    t5 = ((x697!=x698)/(x699>>x700));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x788 = 13LL;
	int64_t t6 = 47054LL;

    t6 = ((x785!=x786)/(x787>>x788));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x814 = UINT8_MAX;
	int8_t x815 = 2;
	uint64_t x816 = 1LLU;

    t7 = ((x813!=x814)/(x815>>x816));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x897 = INT64_MAX;
	int8_t x898 = 2;
	uint8_t x899 = UINT8_MAX;
	uint8_t x900 = 0U;
	int32_t t8 = -1077866;

    t8 = ((x897!=x898)/(x899>>x900));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x975 = UINT8_MAX;
	int8_t x976 = 3;
	volatile int32_t t9 = -84500109;

    t9 = ((x973!=x974)/(x975>>x976));

    if (t9 != 0) { NG(); } else { ; }
	
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


    return 0;
}

