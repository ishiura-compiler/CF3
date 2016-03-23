
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

static uint8_t x1 = UINT8_MAX;
uint32_t x31 = 90U;
int64_t x77 = INT64_MAX;


void f0(void) {
    	int32_t x2 = -43877;
	volatile int16_t x3 = 33;
	uint8_t x4 = 3U;
	int32_t t0 = -15846;

    t0 = (x1<<(x2&(x3>>x4)));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x29 = 3U;
	uint16_t x30 = 20899U;
	uint32_t x32 = 6U;
	volatile int32_t t1 = 0;

    t1 = (x29<<(x30&(x31>>x32)));

    if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x78 = INT64_MIN;
	uint16_t x79 = 15U;
	volatile int8_t x80 = 12;
	volatile int64_t t2 = INT64_MAX;

    t2 = (x77<<(x78&(x79>>x80)));

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

