
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

static int16_t x29 = -2583;
int8_t x30 = 1;
uint8_t x31 = 16U;


void f0(void) {
    	uint16_t x32 = 8U;
	int32_t t0 = 0;

    t0 = ((x29>x30)<<(x31|x32));

    if (t0 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

