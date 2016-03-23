
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

int32_t t0 = -3;


void f0(void) {
    	volatile uint8_t x393 = 31U;
	volatile int8_t x394 = INT8_MIN;
	uint16_t x395 = 10U;
	uint8_t x396 = 2U;

    t0 = (((x393&x394)<<x395)<<x396);

    if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

