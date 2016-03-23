
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

static volatile int64_t t0 = 1LL;
int16_t x775 = -1;
static uint16_t x798 = 11U;
uint32_t t6 = 6082U;
int32_t x903 = INT32_MAX;


void f0(void) {
    	int64_t x201 = 2684298298930319LL;
	int32_t x202 = -1;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = -1;

    t0 = (x201>>(x202+(x203*x204)));

    if (t0 != 2684298298930319LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x233 = 5995085945LLU;
	volatile int64_t x234 = -1LL;
	int8_t x235 = -1;
	int8_t x236 = -1;
	uint64_t t1 = 77233221769437732LLU;

    t1 = (x233>>(x234+(x235*x236)));

    if (t1 != 5995085945LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x377 = 17;
	uint32_t x378 = 1U;
	uint8_t x379 = 1U;
	int32_t x380 = 1;
	static int32_t t2 = -897722028;

    t2 = (x377>>(x378+(x379*x380)));

    if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x729 = INT8_MAX;
	uint8_t x730 = 1U;
	int8_t x731 = -1;
	uint8_t x732 = 0U;
	volatile int32_t t3 = -396772;

    t3 = (x729>>(x730+(x731*x732)));

    if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x773 = INT64_MAX;
	int32_t x774 = -1;
	static int8_t x776 = -1;
	int64_t t4 = INT64_MAX;

    t4 = (x773>>(x774+(x775*x776)));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x797 = 2070120LLU;
	static int32_t x799 = 290;
	uint16_t x800 = 0U;
	uint64_t t5 = 124LLU;

    t5 = (x797>>(x798+(x799*x800)));

    if (t5 != 1010LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x853 = UINT32_MAX;
	volatile int8_t x854 = 7;
	uint16_t x855 = 20U;
	uint32_t x856 = 1U;

    t6 = (x853>>(x854+(x855*x856)));

    if (t6 != 31U) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x901 = INT64_MAX;
	uint16_t x902 = 8U;
	static int16_t x904 = 0;
	volatile int64_t t7 = -29011068745689LL;

    t7 = (x901>>(x902+(x903*x904)));

    if (t7 != 36028797018963967LL) { NG(); } else { ; }
	
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

