
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

uint8_t x294 = 0U;
int64_t x473 = 39761190636LL;
volatile int64_t t1 = -2036170772809LL;
static int64_t x849 = 15543676079151709LL;
int16_t x1100 = -1;
int32_t t4 = -7647;


void f0(void) {
    	volatile uint32_t x293 = UINT32_MAX;
	static int64_t x295 = -1LL;
	int32_t x296 = -1;
	uint32_t t0 = 19864670U;

    t0 = (x293<<(x294^(x295*x296)));

    if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x474 = 1;
	int32_t x475 = -1;
	static int8_t x476 = -3;

    t1 = (x473<<(x474^(x475*x476)));

    if (t1 != 159044762544LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x850 = 5U;
	int8_t x851 = INT8_MAX;
	volatile int8_t x852 = 0;
	volatile int64_t t2 = 4911732LL;

    t2 = (x849<<(x850^(x851*x852)));

    if (t2 != 497397634532854688LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x869 = 0;
	int16_t x870 = 16;
	uint8_t x871 = 0U;
	static uint8_t x872 = UINT8_MAX;
	volatile int32_t t3 = -1;

    t3 = (x869<<(x870^(x871*x872)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x1097 = 3;
	int8_t x1098 = INT8_MIN;
	static int8_t x1099 = INT8_MAX;

    t4 = (x1097<<(x1098^(x1099*x1100)));

    if (t4 != 6) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

