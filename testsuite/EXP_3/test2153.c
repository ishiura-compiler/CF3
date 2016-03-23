
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

int16_t x62 = 117;
int8_t x64 = 15;


void f0(void) {
    	uint8_t x61 = 6U;
	uint8_t x63 = 6U;
	static volatile int32_t t0 = -617;

    t0 = ((x61^x62)>>(x63>>x64));

    if (t0 != 115) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

