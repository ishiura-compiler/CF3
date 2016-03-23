
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
    	int8_t x305 = INT8_MAX;
	volatile uint8_t x306 = 2U;
	int32_t x307 = INT32_MAX;
	uint8_t x308 = 27U;
	int32_t t0 = -16205966;

    t0 = (((x305<<x306)|x307)>>x308);

    if (t0 != 15) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

