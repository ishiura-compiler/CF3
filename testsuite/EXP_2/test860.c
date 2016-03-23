
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

int16_t x168 = 0;
volatile int32_t t0 = 540;
int16_t x379 = 2;


void f0(void) {
    	int8_t x165 = 0;
	int8_t x166 = 5;
	int16_t x167 = -1;

    t0 = ((x165<<(x166%x167))<<x168);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x377 = 1;
	uint64_t x378 = UINT64_MAX;
	static int8_t x380 = 1;
	int32_t t1 = -13443611;

    t1 = ((x377<<(x378%x379))<<x380);

    if (t1 != 4) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

