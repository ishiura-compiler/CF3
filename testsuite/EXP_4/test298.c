
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



void f0(void) {
    	volatile uint8_t x145 = UINT8_MAX;
	static int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	uint16_t x148 = 0U;
	int32_t t0 = 0;

    t0 = (x145/(x146==(x147-x148)));

    if (t0 != 255) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

