
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

int16_t x97 = -703;


void f0(void) {
    	uint16_t x21 = 458U;
	uint16_t x22 = UINT16_MAX;
	int32_t x23 = 14;
	int8_t x24 = 5;
	int32_t t0 = 6152035;

    t0 = (((x21<=x22)>>x23)>>x24);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x98 = INT8_MIN;
	static uint16_t x99 = 7U;
	uint16_t x100 = 15U;
	int32_t t1 = 508463;

    t1 = (((x97<=x98)>>x99)>>x100);

    if (t1 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

