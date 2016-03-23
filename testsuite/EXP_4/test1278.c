
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

int32_t x165 = -1;
volatile int8_t x168 = INT8_MIN;
int8_t x491 = INT8_MAX;
static int32_t x492 = INT32_MIN;
static int32_t t4 = 225648;
volatile int64_t t5 = INT64_MAX;
int16_t x911 = INT16_MAX;
volatile int16_t x1149 = INT16_MAX;
static uint16_t x1151 = 34U;
volatile int32_t x1360 = INT32_MAX;


void f0(void) {
    	volatile uint8_t x166 = 1U;
	int32_t x167 = 220167473;
	int32_t t0 = -906638899;

    t0 = (x165/(x166==(x167!=x168)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x305 = INT64_MIN;
	static int64_t x306 = 1LL;
	uint32_t x307 = 184U;
	int64_t x308 = -1306528239LL;
	static volatile int64_t t1 = INT64_MIN;

    t1 = (x305/(x306==(x307!=x308)));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x361 = INT32_MAX;
	uint64_t x362 = 1LLU;
	int32_t x363 = INT32_MAX;
	uint32_t x364 = UINT32_MAX;
	int32_t t2 = INT32_MAX;

    t2 = (x361/(x362==(x363!=x364)));

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x489 = 2816LL;
	int8_t x490 = 1;
	int64_t t3 = -542912979359545LL;

    t3 = (x489/(x490==(x491!=x492)));

    if (t3 != 2816LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x669 = UINT8_MAX;
	int8_t x670 = 1;
	int32_t x671 = -6940;
	uint32_t x672 = 1332771567U;

    t4 = (x669/(x670==(x671!=x672)));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x837 = INT64_MAX;
	uint16_t x838 = 1U;
	int16_t x839 = -2;
	int8_t x840 = INT8_MIN;

    t5 = (x837/(x838==(x839!=x840)));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x909 = INT64_MAX;
	int16_t x910 = 1;
	uint16_t x912 = UINT16_MAX;
	int64_t t6 = INT64_MAX;

    t6 = (x909/(x910==(x911!=x912)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x1137 = 3488U;
	int16_t x1138 = 0;
	int16_t x1139 = -1;
	static int8_t x1140 = -1;
	volatile int32_t t7 = -6;

    t7 = (x1137/(x1138==(x1139!=x1140)));

    if (t7 != 3488) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x1150 = 1LLU;
	int32_t x1152 = INT32_MAX;
	volatile int32_t t8 = -156;

    t8 = (x1149/(x1150==(x1151!=x1152)));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x1297 = -1;
	static uint32_t x1298 = 1U;
	volatile uint16_t x1299 = 50U;
	int8_t x1300 = -1;
	volatile int32_t t9 = 2;

    t9 = (x1297/(x1298==(x1299!=x1300)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x1357 = 23;
	volatile int16_t x1358 = 1;
	volatile uint32_t x1359 = 0U;
	int32_t t10 = -3320;

    t10 = (x1357/(x1358==(x1359!=x1360)));

    if (t10 != 23) { NG(); } else { ; }
	
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

