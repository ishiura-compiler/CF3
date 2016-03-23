
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

uint64_t x89 = 119449025353079283LLU;
int64_t x90 = -49LL;
int8_t x146 = -1;
volatile int32_t x170 = INT32_MIN;
int8_t x172 = 18;
uint8_t x437 = UINT8_MAX;
volatile int16_t x549 = INT16_MAX;
int16_t x551 = INT16_MAX;
uint32_t x1005 = 1U;
int8_t x1007 = INT8_MAX;
static int16_t x1341 = INT16_MAX;
uint16_t x1342 = UINT16_MAX;
volatile int32_t t10 = 260854034;
volatile int64_t t11 = INT64_MAX;


void f0(void) {
    	volatile int32_t x91 = -1;
	static int8_t x92 = 47;
	volatile uint64_t t0 = 4359054LLU;

    t0 = (x89>>(x90^(x91^x92)));

    if (t0 != 55622786LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x145 = 127983534772917969LL;
	uint16_t x147 = 1U;
	volatile int16_t x148 = -1;
	static int64_t t1 = 180816318LL;

    t1 = (x145>>(x146^(x147^x148)));

    if (t1 != 63991767386458984LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x169 = 24U;
	int32_t x171 = INT32_MIN;
	volatile int32_t t2 = 670766;

    t2 = (x169>>(x170^(x171^x172)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x417 = 26U;
	uint16_t x418 = 2U;
	static volatile int64_t x419 = -1LL;
	static int8_t x420 = -1;
	int32_t t3 = -2277860;

    t3 = (x417>>(x418^(x419^x420)));

    if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x438 = -1;
	int32_t x439 = INT32_MIN;
	static int32_t x440 = INT32_MAX;
	volatile int32_t t4 = 2367;

    t4 = (x437>>(x438^(x439^x440)));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x550 = -1;
	int16_t x552 = INT16_MIN;
	volatile int32_t t5 = 117;

    t5 = (x549>>(x550^(x551^x552)));

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x653 = 0U;
	int16_t x654 = 0;
	static int64_t x655 = INT64_MIN;
	int64_t x656 = INT64_MIN;
	static uint32_t t6 = 39138U;

    t6 = (x653>>(x654^(x655^x656)));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x873 = 31U;
	uint64_t x874 = UINT64_MAX;
	int64_t x875 = -1LL;
	int32_t x876 = 1;
	int32_t t7 = -2;

    t7 = (x873>>(x874^(x875^x876)));

    if (t7 != 15) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x1006 = -3;
	volatile int8_t x1008 = INT8_MIN;
	uint32_t t8 = 229383U;

    t8 = (x1005>>(x1006^(x1007^x1008)));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x1343 = 7U;
	uint16_t x1344 = UINT16_MAX;
	volatile int32_t t9 = 35067;

    t9 = (x1341>>(x1342^(x1343^x1344)));

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x1585 = 12U;
	uint8_t x1586 = 3U;
	int64_t x1587 = INT64_MAX;
	int64_t x1588 = INT64_MAX;

    t10 = (x1585>>(x1586^(x1587^x1588)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1597 = INT64_MAX;
	volatile int64_t x1598 = -1LL;
	volatile int64_t x1599 = -1LL;
	int32_t x1600 = 0;

    t11 = (x1597>>(x1598^(x1599^x1600)));

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
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

