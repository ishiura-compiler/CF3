
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

static int8_t x252 = INT8_MAX;
static uint16_t x890 = 0U;


void f0(void) {
    	volatile uint16_t x249 = UINT16_MAX;
	static int32_t x250 = 0;
	static volatile int8_t x251 = INT8_MAX;
	volatile int32_t t0 = -9125;

    t0 = (x249>>(x250+(x251^x252)));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x417 = 835;
	static int16_t x418 = 0;
	volatile uint16_t x419 = 0U;
	static uint16_t x420 = 2U;
	int32_t t1 = -329;

    t1 = (x417>>(x418+(x419^x420)));

    if (t1 != 208) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x717 = 2729017770980LLU;
	int8_t x718 = 1;
	int8_t x719 = 0;
	uint8_t x720 = 2U;
	volatile uint64_t t2 = 29829670LLU;

    t2 = (x717>>(x718+(x719^x720)));

    if (t2 != 341127221372LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x801 = 33648;
	int8_t x802 = 5;
	int8_t x803 = 1;
	volatile int8_t x804 = -1;
	int32_t t3 = -175485619;

    t3 = (x801>>(x802+(x803^x804)));

    if (t3 != 4206) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x889 = UINT16_MAX;
	volatile int8_t x891 = INT8_MIN;
	volatile int8_t x892 = INT8_MIN;
	int32_t t4 = -102523;

    t4 = (x889>>(x890+(x891^x892)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

