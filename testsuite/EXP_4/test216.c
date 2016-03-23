
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

int16_t x190 = INT16_MIN;


void f0(void) {
    	int64_t x189 = INT64_MAX;
	int16_t x191 = -1;
	static int16_t x192 = INT16_MAX;
	static int64_t t0 = INT64_MAX;

    t0 = (x189<<(x190-(x191-x192)));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

