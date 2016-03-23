
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

uint32_t x291 = 1U;


void f0(void) {
    	int64_t x157 = -1LL;
	uint8_t x158 = 42U;
	int32_t x159 = 3;
	volatile uint16_t x160 = 2U;
	static int64_t t0 = -902LL;

    t0 = (((x157&x158)>>x159)<<x160);

    if (t0 != 20LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x289 = UINT32_MAX;
	static volatile int32_t x290 = 431910;
	volatile uint8_t x292 = 5U;
	uint32_t t1 = 15U;

    t1 = (((x289&x290)>>x291)<<x292);

    if (t1 != 6910560U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

