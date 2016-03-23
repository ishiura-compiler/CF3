
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

int64_t x85 = 1290LL;
int8_t x132 = 1;
static int32_t t1 = 47;
static volatile int16_t x198 = -1;
static uint32_t x251 = UINT32_MAX;
static int8_t x252 = INT8_MIN;
int8_t x426 = -42;
int16_t x508 = -1;
volatile uint64_t x540 = UINT64_MAX;


void f0(void) {
    	int8_t x86 = -1;
	static volatile int32_t x87 = INT32_MIN;
	int8_t x88 = -1;
	volatile int64_t t0 = 291972151893331LL;

    t0 = (x85>>(x86^(x87|x88)));

    if (t0 != 1290LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x129 = 3U;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = -1;

    t1 = (x129>>(x130^(x131|x132)));

    if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x197 = 7U;
	static uint64_t x199 = UINT64_MAX;
	int8_t x200 = -1;
	static volatile int32_t t2 = 9149610;

    t2 = (x197>>(x198^(x199|x200)));

    if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x201 = INT32_MAX;
	uint64_t x202 = UINT64_MAX;
	volatile int64_t x203 = -1LL;
	int16_t x204 = -2057;
	int32_t t3 = INT32_MAX;

    t3 = (x201>>(x202^(x203|x204)));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x249 = 116298436;
	volatile int32_t x250 = -1;
	volatile int32_t t4 = 480772;

    t4 = (x249>>(x250^(x251|x252)));

    if (t4 != 116298436) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x293 = INT16_MAX;
	uint8_t x294 = 10U;
	uint8_t x295 = 5U;
	static int8_t x296 = 0;
	volatile int32_t t5 = -694865126;

    t5 = (x293>>(x294^(x295|x296)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x297 = 101U;
	int8_t x298 = -1;
	volatile int64_t x299 = -1LL;
	int64_t x300 = -187006695361558526LL;
	volatile int32_t t6 = 6;

    t6 = (x297>>(x298^(x299|x300)));

    if (t6 != 101) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x365 = INT8_MAX;
	static int8_t x366 = -1;
	int32_t x367 = -1;
	volatile int8_t x368 = -1;
	int32_t t7 = -44351;

    t7 = (x365>>(x366^(x367|x368)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x425 = 8U;
	int8_t x427 = -58;
	int64_t x428 = INT64_MIN;
	volatile int32_t t8 = 113;

    t8 = (x425>>(x426^(x427|x428)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x505 = INT16_MAX;
	uint64_t x506 = UINT64_MAX;
	int8_t x507 = INT8_MIN;
	volatile int32_t t9 = -153958;

    t9 = (x505>>(x506^(x507|x508)));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x537 = 0;
	static int32_t x538 = -1;
	int16_t x539 = INT16_MIN;
	int32_t t10 = 14628;

    t10 = (x537>>(x538^(x539|x540)));

    if (t10 != 0) { NG(); } else { ; }
	
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

