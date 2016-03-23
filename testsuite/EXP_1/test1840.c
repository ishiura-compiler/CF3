
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

static int32_t t0 = -13;


void f0(void) {
    	int8_t x33 = INT8_MAX;
	static int64_t x34 = INT64_MAX;
	int8_t x35 = 18;
	int8_t x36 = 1;

    t0 = (((x33<=x34)<<x35)<<x36);

    if (t0 != 524288) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

