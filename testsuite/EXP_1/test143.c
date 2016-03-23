
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
    	int8_t x1 = INT8_MAX;
	static volatile uint8_t x2 = 58U;
	uint8_t x3 = 2U;
	uint8_t x4 = 71U;
	volatile int32_t t0 = 13952220;

    t0 = (((x1+x2)>>x3)*x4);

    if (t0 != 3266) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

