
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

int32_t x6 = INT32_MIN;
uint16_t x8 = 4U;


void f0(void) {
    	static uint16_t x5 = 8391U;
	static uint16_t x7 = 93U;
	volatile int32_t t0 = -29;

    t0 = ((x5+x6)/(x7>>x8));

    if (t0 != -429495051) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

