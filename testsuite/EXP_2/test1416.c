
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

static int32_t x11 = -1;
volatile uint64_t t0 = 119018LLU;
uint32_t x63 = UINT32_MAX;


void f0(void) {
    	volatile uint32_t x9 = 4016U;
	int32_t x10 = -1;
	static uint64_t x12 = 1108999680LLU;

    t0 = ((x9/(x10==x11))-x12);

    if (t0 != 18446744072600555952LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x61 = -1772664LL;
	int16_t x62 = -1;
	volatile int16_t x64 = 1;
	static volatile int64_t t1 = -142913319447835LL;

    t1 = ((x61/(x62==x63))-x64);

    if (t1 != -1772665LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

