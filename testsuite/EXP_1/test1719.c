
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

volatile int8_t x4 = 4;
int16_t x86 = 5;
volatile uint8_t x88 = 3U;
volatile int64_t x438 = INT64_MAX;
int16_t x522 = INT16_MIN;
int32_t t4 = -307117408;
int8_t x907 = 12;


void f0(void) {
    	int8_t x1 = 5;
	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = 1U;
	volatile int32_t t0 = -1017;

    t0 = (((x1>x2)>>x3)>>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x85 = 13U;
	uint16_t x87 = 5U;
	volatile int32_t t1 = -1;

    t1 = (((x85>x86)>>x87)>>x88);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x437 = -1;
	int32_t x439 = 0;
	int32_t x440 = 0;
	int32_t t2 = -56;

    t2 = (((x437>x438)>>x439)>>x440);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x493 = 141277125U;
	static volatile int32_t x494 = INT32_MAX;
	int64_t x495 = 1LL;
	static int8_t x496 = 0;
	static int32_t t3 = -10399;

    t3 = (((x493>x494)>>x495)>>x496);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x521 = INT16_MAX;
	int8_t x523 = 2;
	uint8_t x524 = 0U;

    t4 = (((x521>x522)>>x523)>>x524);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x905 = -2017;
	uint16_t x906 = 4U;
	static uint8_t x908 = 5U;
	static volatile int32_t t5 = 1188;

    t5 = (((x905>x906)>>x907)>>x908);

    if (t5 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

