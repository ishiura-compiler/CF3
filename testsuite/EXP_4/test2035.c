
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
    	int8_t x1 = INT8_MIN;
	uint32_t x2 = 1006763987U;
	static uint16_t x3 = 0U;
	int16_t x4 = 0;
	volatile uint32_t t0 = 1U;

    t0 = (x1%(x2<<(x3>>x4)));

    if (t0 != 267911220U) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

