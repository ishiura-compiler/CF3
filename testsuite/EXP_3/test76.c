
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

static uint64_t x53 = UINT64_MAX;
uint8_t x54 = 2U;


void f0(void) {
    	uint8_t x55 = 2U;
	volatile int16_t x56 = 27;
	volatile uint64_t t0 = 59596LLU;

    t0 = ((x53<<x54)<<(x55+x56));

    if (t0 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

