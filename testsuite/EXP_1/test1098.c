
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

volatile int16_t x317 = INT16_MAX;
int8_t x318 = 2;
int8_t x367 = 59;
int8_t x1109 = INT8_MAX;
static int8_t x1110 = 20;
volatile uint16_t x1334 = 0U;


void f0(void) {
    	static int8_t x319 = 11;
	static volatile int8_t x320 = 0;
	int32_t t0 = 102464704;

    t0 = (((x317<<x318)>x319)<<x320);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x365 = 6893U;
	int32_t x366 = 4;
	uint8_t x368 = 1U;
	int32_t t1 = -1;

    t1 = (((x365<<x366)>x367)<<x368);

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x761 = 0U;
	static uint8_t x762 = 7U;
	volatile int8_t x763 = INT8_MAX;
	uint8_t x764 = 0U;
	volatile int32_t t2 = 0;

    t2 = (((x761<<x762)>x763)<<x764);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x1111 = 0U;
	static uint8_t x1112 = 8U;
	int32_t t3 = -17159189;

    t3 = (((x1109<<x1110)>x1111)<<x1112);

    if (t3 != 256) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x1333 = 469;
	int8_t x1335 = -1;
	static uint8_t x1336 = 0U;
	int32_t t4 = -4054053;

    t4 = (((x1333<<x1334)>x1335)<<x1336);

    if (t4 != 1) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

