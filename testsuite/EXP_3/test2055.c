
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

int32_t x234 = -1;
int32_t t0 = -23;


void f0(void) {
    	int8_t x233 = INT8_MAX;
	uint8_t x235 = 0U;
	uint32_t x236 = 21U;

    t0 = ((x233!=x234)>>(x235>>x236));

    if (t0 != 1) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

