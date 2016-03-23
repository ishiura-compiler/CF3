
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

int32_t x30 = -1;


void f0(void) {
    	static uint8_t x29 = 0U;
	volatile int16_t x31 = -1;
	uint8_t x32 = 2U;
	int32_t t0 = 493421;

    t0 = (x29>>(x30^(x31*x32)));

    if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

