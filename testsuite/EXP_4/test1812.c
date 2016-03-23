
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

int16_t x215 = -259;


void f0(void) {
    	uint16_t x5 = UINT16_MAX;
	volatile uint64_t x6 = 0LLU;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t0 = 2;

    t0 = (x5<<(x6/(x7<=x8)));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x213 = UINT16_MAX;
	uint8_t x214 = 3U;
	uint16_t x216 = 3230U;
	volatile int32_t t1 = 30;

    t1 = (x213<<(x214/(x215<=x216)));

    if (t1 != 524280) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

