
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

int8_t x60 = -1;
uint32_t t0 = 110U;
int32_t x109 = 1841611;
uint16_t x111 = 10U;
int16_t x112 = 36;
volatile uint64_t x149 = 63193164LLU;
int16_t x285 = INT16_MAX;
int32_t x296 = INT32_MIN;
int8_t x312 = -9;
uint64_t x345 = 290LLU;
int64_t t7 = 1569366983179714LL;
int8_t x428 = INT8_MIN;
uint8_t x493 = UINT8_MAX;
int64_t x633 = 1969374LL;
int32_t x636 = INT32_MIN;
static int64_t x845 = -1LL;
uint32_t x848 = UINT32_MAX;
int8_t x867 = INT8_MIN;
static int16_t x868 = -105;
int32_t t12 = 674816950;


void f0(void) {
    	int32_t x57 = INT32_MAX;
	static volatile uint32_t x58 = 12304U;
	static int64_t x59 = -1LL;

    t0 = ((x57-x58)>>(x59^x60));

    if (t0 != 2147471343U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x110 = -1LL;
	volatile int64_t t1 = -388973059301188LL;

    t1 = ((x109-x110)>>(x111^x112));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x150 = 3023775U;
	int64_t x151 = -1LL;
	int32_t x152 = -1;
	static volatile uint64_t t2 = 3470536024669811LLU;

    t2 = ((x149-x150)>>(x151^x152));

    if (t2 != 60169389LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x286 = INT8_MAX;
	int16_t x287 = 1;
	uint8_t x288 = 4U;
	int32_t t3 = 1391406;

    t3 = ((x285-x286)>>(x287^x288));

    if (t3 != 1020) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x293 = UINT16_MAX;
	uint16_t x294 = 897U;
	int32_t x295 = INT32_MIN;
	int32_t t4 = 909371;

    t4 = ((x293-x294)>>(x295^x296));

    if (t4 != 64638) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x309 = 169;
	uint8_t x310 = 62U;
	volatile int16_t x311 = -13;
	static int32_t t5 = -12755;

    t5 = ((x309-x310)>>(x311^x312));

    if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x346 = 9U;
	uint32_t x347 = UINT32_MAX;
	uint32_t x348 = UINT32_MAX;
	static uint64_t t6 = 95521508048LLU;

    t6 = ((x345-x346)>>(x347^x348));

    if (t6 != 281LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x397 = INT32_MIN;
	volatile int64_t x398 = INT64_MIN;
	static uint8_t x399 = 1U;
	int32_t x400 = 1;

    t7 = ((x397-x398)>>(x399^x400));

    if (t7 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x425 = -1;
	volatile int16_t x426 = -1;
	volatile int8_t x427 = INT8_MIN;
	int32_t t8 = 159107086;

    t8 = ((x425-x426)>>(x427^x428));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x494 = -9;
	int32_t x495 = -1;
	volatile int16_t x496 = -1;
	volatile int32_t t9 = 103634;

    t9 = ((x493-x494)>>(x495^x496));

    if (t9 != 264) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x634 = UINT64_MAX;
	static int32_t x635 = INT32_MIN;
	volatile uint64_t t10 = 14839724LLU;

    t10 = ((x633-x634)>>(x635^x636));

    if (t10 != 1969375LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x846 = -783225125109LL;
	int32_t x847 = -24;
	volatile int64_t t11 = -26554681616LL;

    t11 = ((x845-x846)>>(x847^x848));

    if (t11 != 93367LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x865 = 1;
	static volatile int8_t x866 = -3;

    t12 = ((x865-x866)>>(x867^x868));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x869 = 5U;
	int8_t x870 = 0;
	uint8_t x871 = 0U;
	uint8_t x872 = 24U;
	volatile int32_t t13 = 3787;

    t13 = ((x869-x870)>>(x871^x872));

    if (t13 != 0) { NG(); } else { ; }
	
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
    f12();
    f13();


    return 0;
}

