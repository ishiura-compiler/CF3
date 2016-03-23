
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

static uint8_t x34 = 0U;
uint8_t x36 = 0U;
int32_t t0 = -96544;
static int32_t t2 = 31477698;
uint32_t x765 = 113907387U;
uint8_t x768 = UINT8_MAX;
int16_t x822 = INT16_MIN;
uint32_t x967 = UINT32_MAX;


void f0(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x35 = 31LL;

    t0 = (x33/(x34==(x35&x36)));

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x301 = 1LLU;
	int64_t x302 = -1LL;
	static int8_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	static uint64_t t1 = 29592244LLU;

    t1 = (x301/(x302==(x303&x304)));

    if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x545 = INT8_MIN;
	int8_t x546 = 0;
	int32_t x547 = INT32_MIN;
	uint8_t x548 = UINT8_MAX;

    t2 = (x545/(x546==(x547&x548)));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x766 = UINT8_MAX;
	static uint16_t x767 = UINT16_MAX;
	static uint32_t t3 = 2444U;

    t3 = (x765/(x766==(x767&x768)));

    if (t3 != 113907387U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x821 = 23U;
	static int64_t x823 = -1LL;
	int16_t x824 = INT16_MIN;
	int32_t t4 = -142265241;

    t4 = (x821/(x822==(x823&x824)));

    if (t4 != 23) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x925 = 372U;
	static int16_t x926 = INT16_MIN;
	int16_t x927 = INT16_MIN;
	int64_t x928 = -1LL;
	volatile int32_t t5 = 532091;

    t5 = (x925/(x926==(x927&x928)));

    if (t5 != 372) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x965 = 1;
	int16_t x966 = INT16_MIN;
	int16_t x968 = INT16_MIN;
	volatile int32_t t6 = -803851;

    t6 = (x965/(x966==(x967&x968)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x1025 = 131415538203808365LLU;
	int8_t x1026 = 0;
	int16_t x1027 = INT16_MIN;
	volatile int16_t x1028 = INT16_MAX;
	uint64_t t7 = 13679638LLU;

    t7 = (x1025/(x1026==(x1027&x1028)));

    if (t7 != 131415538203808365LLU) { NG(); } else { ; }
	
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

