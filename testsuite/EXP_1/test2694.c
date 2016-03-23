
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
    	int64_t x137 = -1LL;
	int64_t x138 = INT64_MIN;
	uint8_t x139 = 31U;
	int32_t x140 = 1;
	static volatile int64_t t0 = 0LL;

    t0 = (((x137^x138)>>x139)<<x140);

    if (t0 != 8589934590LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

