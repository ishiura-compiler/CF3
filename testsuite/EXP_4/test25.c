
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

static uint16_t x61 = 7909U;
volatile int16_t x64 = -1;
volatile int32_t t0 = 1;


void f0(void) {
    	static int8_t x62 = INT8_MAX;
	volatile int8_t x63 = INT8_MAX;

    t0 = (x61>>(x62-(x63+x64)));

    if (t0 != 3954) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

