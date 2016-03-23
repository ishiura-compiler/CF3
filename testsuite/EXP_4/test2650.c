
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

static uint64_t x19 = UINT64_MAX;
int32_t x42 = 0;
static volatile int32_t t1 = 23818316;


void f0(void) {
    	int64_t x17 = -868279750LL;
	int8_t x18 = INT8_MIN;
	volatile int8_t x20 = INT8_MAX;
	static volatile int64_t t0 = -31380232057999LL;

    t0 = (x17/(x18==(x19^x20)));

    if (t0 != -868279750LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x41 = INT16_MIN;
	int32_t x43 = INT32_MIN;
	volatile int32_t x44 = INT32_MIN;

    t1 = (x41/(x42==(x43^x44)));

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x77 = UINT16_MAX;
	volatile int16_t x78 = -1;
	int16_t x79 = INT16_MIN;
	static int16_t x80 = INT16_MAX;
	volatile int32_t t2 = 1;

    t2 = (x77/(x78==(x79^x80)));

    if (t2 != 65535) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

