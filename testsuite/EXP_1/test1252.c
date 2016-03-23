
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

uint8_t x19 = 2U;
uint8_t x20 = 6U;
volatile int32_t t0 = 4401;
int32_t x396 = 0;
volatile int32_t t4 = 27;
uint8_t x1180 = 1U;
int32_t t6 = -6031;


void f0(void) {
    	int8_t x17 = INT8_MAX;
	int16_t x18 = INT16_MIN;

    t0 = (((x17!=x18)<<x19)<<x20);

    if (t0 != 256) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x393 = INT8_MIN;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = 8;
	int32_t t1 = 52692517;

    t1 = (((x393!=x394)<<x395)<<x396);

    if (t1 != 256) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x509 = INT32_MAX;
	volatile int32_t x510 = INT32_MIN;
	volatile uint8_t x511 = 14U;
	uint8_t x512 = 5U;
	static int32_t t2 = 1;

    t2 = (((x509!=x510)<<x511)<<x512);

    if (t2 != 524288) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x569 = 10U;
	volatile int8_t x570 = INT8_MIN;
	volatile uint8_t x571 = 3U;
	static uint32_t x572 = 1U;
	static int32_t t3 = 438;

    t3 = (((x569!=x570)<<x571)<<x572);

    if (t3 != 16) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x913 = 305;
	int8_t x914 = -33;
	static volatile uint8_t x915 = 6U;
	int16_t x916 = 4;

    t4 = (((x913!=x914)<<x915)<<x916);

    if (t4 != 1024) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x965 = -1LL;
	uint16_t x966 = 193U;
	uint8_t x967 = 0U;
	static volatile uint8_t x968 = 1U;
	int32_t t5 = -28308;

    t5 = (((x965!=x966)<<x967)<<x968);

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x1177 = 1261031755LLU;
	int8_t x1178 = -1;
	static int64_t x1179 = 9LL;

    t6 = (((x1177!=x1178)<<x1179)<<x1180);

    if (t6 != 1024) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

