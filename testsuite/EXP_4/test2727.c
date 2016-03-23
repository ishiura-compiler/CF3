
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
    	static volatile int16_t x317 = 3868;
	uint8_t x318 = 30U;
	static int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	static volatile int32_t t0 = 14;

    t0 = (x317>>(x318|(x319^x320)));

    if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

