
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

volatile uint16_t x230 = 22U;
int8_t x231 = 2;
int16_t x232 = -1;
int64_t x365 = INT64_MAX;
volatile int64_t t1 = 17056034526LL;


void f0(void) {
    	volatile uint8_t x229 = UINT8_MAX;
	int32_t t0 = -157792;

    t0 = (x229>>(x230/(x231>x232)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x366 = 13;
	int32_t x367 = INT32_MAX;
	int8_t x368 = INT8_MAX;

    t1 = (x365>>(x366/(x367>x368)));

    if (t1 != 1125899906842623LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

