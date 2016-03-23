
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

int64_t t0 = -162391887988342LL;


void f0(void) {
    	int64_t x253 = INT64_MIN;
	int32_t x254 = 1;
	int16_t x255 = INT16_MAX;
	int16_t x256 = INT16_MAX;

    t0 = (x253+(x254/(x255==x256)));

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x257 = INT8_MIN;
	uint16_t x258 = 3U;
	uint8_t x259 = UINT8_MAX;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t1 = 15202952;

    t1 = (x257+(x258/(x259==x260)));

    if (t1 != -125) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

