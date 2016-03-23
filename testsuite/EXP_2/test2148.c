
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

volatile int64_t x214 = 33549473137LL;


void f0(void) {
    	uint8_t x213 = 5U;
	int16_t x215 = 2;
	uint16_t x216 = 0U;
	volatile int64_t t0 = -5895936LL;

    t0 = ((x213^(x214>>x215))<<x216);

    if (t0 != 8387368281LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

