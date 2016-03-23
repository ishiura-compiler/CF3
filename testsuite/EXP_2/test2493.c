
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

static int16_t x109 = INT16_MAX;
volatile uint8_t x111 = 18U;
int16_t x112 = 30;
volatile uint16_t x211 = 1U;
int32_t x253 = INT32_MAX;


void f0(void) {
    	uint8_t x110 = 15U;
	int32_t t0 = -150713984;

    t0 = ((x109>>(x110|x111))+x112);

    if (t0 != 30) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x209 = UINT32_MAX;
	volatile uint32_t x210 = 9U;
	int32_t x212 = 34;
	uint32_t t1 = 151066976U;

    t1 = ((x209>>(x210|x211))+x212);

    if (t1 != 8388641U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x254 = 13;
	uint32_t x255 = 23U;
	int32_t x256 = INT32_MIN;
	volatile int32_t t2 = INT32_MIN;

    t2 = ((x253>>(x254|x255))+x256);

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

