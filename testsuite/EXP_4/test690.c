
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

static volatile uint8_t x11 = 14U;
static int16_t x379 = INT16_MIN;
int32_t x996 = INT32_MAX;


void f0(void) {
    	int32_t x9 = INT32_MIN;
	uint16_t x10 = 0U;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t0 = INT32_MIN;

    t0 = (x9/(x10==(x11/x12)));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x257 = -1;
	volatile int8_t x258 = 1;
	static uint64_t x259 = UINT64_MAX;
	static int64_t x260 = INT64_MIN;
	volatile int32_t t1 = 48354136;

    t1 = (x257/(x258==(x259/x260)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x373 = -1LL;
	static int8_t x374 = 1;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = INT8_MIN;
	static volatile int64_t t2 = 93822271144887141LL;

    t2 = (x373/(x374==(x375/x376)));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x377 = 63799457487105934LLU;
	volatile uint8_t x378 = 0U;
	int64_t x380 = INT64_MAX;
	uint64_t t3 = 399731079613835325LLU;

    t3 = (x377/(x378==(x379/x380)));

    if (t3 != 63799457487105934LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x597 = 1524358U;
	uint8_t x598 = 0U;
	int8_t x599 = 1;
	static int16_t x600 = INT16_MAX;
	uint32_t t4 = 19565U;

    t4 = (x597/(x598==(x599/x600)));

    if (t4 != 1524358U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x801 = 1U;
	volatile int64_t x802 = 1LL;
	uint32_t x803 = UINT32_MAX;
	static int8_t x804 = -1;
	int32_t t5 = -1845505;

    t5 = (x801/(x802==(x803/x804)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x993 = 50U;
	volatile int8_t x994 = 0;
	int16_t x995 = INT16_MIN;
	int32_t t6 = -84139;

    t6 = (x993/(x994==(x995/x996)));

    if (t6 != 50) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x1073 = -1;
	uint64_t x1074 = 1LLU;
	static int32_t x1075 = -1;
	int16_t x1076 = -1;
	volatile int32_t t7 = 585796335;

    t7 = (x1073/(x1074==(x1075/x1076)));

    if (t7 != -1) { NG(); } else { ; }
	
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

