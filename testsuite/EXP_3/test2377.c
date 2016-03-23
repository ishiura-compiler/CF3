
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
    	static int8_t x357 = -47;
	uint64_t x358 = 63125385LLU;
	static int16_t x359 = 1;
	volatile uint16_t x360 = 50U;
	volatile uint64_t t0 = 138795923834401263LLU;

    t0 = ((x357-x358)>>(x359|x360));

    if (t0 != 8191LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

