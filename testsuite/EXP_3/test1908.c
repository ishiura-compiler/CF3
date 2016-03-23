
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

uint8_t x262 = 0U;
int64_t x263 = -338145007174804LL;
volatile int32_t x307 = INT32_MIN;
int8_t x450 = 2;
int32_t x452 = 1960630;
static int64_t x453 = 14730608810LL;
int8_t x462 = 1;
int16_t x464 = INT16_MAX;
volatile int32_t x555 = INT32_MIN;
static int64_t x556 = -440832LL;
uint16_t x749 = 34U;
volatile int64_t x752 = -1LL;
volatile uint64_t x877 = 54113365584LLU;
int64_t x985 = 15LL;


void f0(void) {
    	uint32_t x261 = 0U;
	int32_t x264 = 56;
	uint32_t t0 = 14373939U;

    t0 = ((x261>>x262)/(x263<=x264));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x305 = 0U;
	uint8_t x306 = 0U;
	int8_t x308 = INT8_MIN;
	int32_t t1 = 6;

    t1 = ((x305>>x306)/(x307<=x308));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x413 = INT64_MAX;
	int64_t x414 = 0LL;
	int16_t x415 = INT16_MIN;
	static volatile int16_t x416 = -1;
	int64_t t2 = INT64_MAX;

    t2 = ((x413>>x414)/(x415<=x416));

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x449 = UINT16_MAX;
	int32_t x451 = -1;
	volatile int32_t t3 = -1;

    t3 = ((x449>>x450)/(x451<=x452));

    if (t3 != 16383) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x454 = 0;
	int16_t x455 = INT16_MIN;
	static int32_t x456 = -1;
	volatile int64_t t4 = -3505LL;

    t4 = ((x453>>x454)/(x455<=x456));

    if (t4 != 14730608810LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x461 = UINT8_MAX;
	volatile int32_t x463 = INT32_MIN;
	volatile int32_t t5 = -654;

    t5 = ((x461>>x462)/(x463<=x464));

    if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x553 = UINT64_MAX;
	int32_t x554 = 0;
	uint64_t t6 = UINT64_MAX;

    t6 = ((x553>>x554)/(x555<=x556));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x729 = UINT8_MAX;
	uint8_t x730 = 13U;
	static int8_t x731 = INT8_MAX;
	uint16_t x732 = 12316U;
	volatile int32_t t7 = -164351;

    t7 = ((x729>>x730)/(x731<=x732));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x750 = 0U;
	int8_t x751 = -1;
	volatile int32_t t8 = 28720;

    t8 = ((x749>>x750)/(x751<=x752));

    if (t8 != 34) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x769 = UINT32_MAX;
	uint16_t x770 = 3U;
	int64_t x771 = INT64_MIN;
	int32_t x772 = -1;
	volatile uint32_t t9 = 0U;

    t9 = ((x769>>x770)/(x771<=x772));

    if (t9 != 536870911U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x878 = 1;
	int16_t x879 = -5756;
	int64_t x880 = -1LL;
	static uint64_t t10 = 223946793615927LLU;

    t10 = ((x877>>x878)/(x879<=x880));

    if (t10 != 27056682792LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x986 = 50U;
	int64_t x987 = INT64_MIN;
	static uint16_t x988 = 469U;
	volatile int64_t t11 = 1065594157097LL;

    t11 = ((x985>>x986)/(x987<=x988));

    if (t11 != 0LL) { NG(); } else { ; }
	
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
    f11();


    return 0;
}

