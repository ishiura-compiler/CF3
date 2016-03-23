
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

int8_t x444 = INT8_MAX;


void f0(void) {
    	uint8_t x293 = UINT8_MAX;
	int8_t x294 = -1;
	int16_t x295 = -1;
	static uint16_t x296 = 8U;
	int32_t t0 = -1;

    t0 = (x293/(x294==(x295%x296)));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x441 = UINT16_MAX;
	static volatile int16_t x442 = 0;
	int8_t x443 = INT8_MAX;
	int32_t t1 = -7137403;

    t1 = (x441/(x442==(x443%x444)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

