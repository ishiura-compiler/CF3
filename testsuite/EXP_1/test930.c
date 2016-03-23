
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

static uint32_t x225 = 2588U;
uint8_t x616 = 15U;
static uint64_t x697 = UINT64_MAX;
int16_t x699 = 1;
int8_t x849 = INT8_MAX;
volatile int32_t t4 = -1924466;
static volatile int16_t x1029 = 2541;
int16_t x1030 = INT16_MIN;
int8_t x1031 = 1;
int32_t x1690 = -1;
volatile int32_t t7 = 1;


void f0(void) {
    	int32_t x226 = 18;
	int16_t x227 = 0;
	static uint8_t x228 = 16U;
	uint32_t t0 = 427067596U;

    t0 = (((x225%x226)>>x227)<<x228);

    if (t0 != 917504U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x613 = INT32_MAX;
	static volatile int32_t x614 = 6;
	int8_t x615 = 31;
	int32_t t1 = 113;

    t1 = (((x613%x614)>>x615)<<x616);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x698 = INT64_MIN;
	static uint16_t x700 = 4U;
	volatile uint64_t t2 = 211065LLU;

    t2 = (((x697%x698)>>x699)<<x700);

    if (t2 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x850 = INT8_MIN;
	uint16_t x851 = 3U;
	int16_t x852 = 1;
	int32_t t3 = -14137163;

    t3 = (((x849%x850)>>x851)<<x852);

    if (t3 != 30) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x905 = INT32_MAX;
	int8_t x906 = INT8_MAX;
	static int8_t x907 = 1;
	uint16_t x908 = 3U;

    t4 = (((x905%x906)>>x907)<<x908);

    if (t4 != 24) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x1032 = 0U;
	volatile int32_t t5 = 12297237;

    t5 = (((x1029%x1030)>>x1031)<<x1032);

    if (t5 != 1270) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x1329 = UINT32_MAX;
	int64_t x1330 = -1LL;
	static volatile uint8_t x1331 = 13U;
	static uint32_t x1332 = 2U;
	volatile int64_t t6 = 2976279896570277478LL;

    t6 = (((x1329%x1330)>>x1331)<<x1332);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x1689 = INT32_MIN;
	int16_t x1691 = 7;
	uint32_t x1692 = 27U;

    t7 = (((x1689%x1690)>>x1691)<<x1692);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x2017 = 11572;
	int16_t x2018 = -1;
	uint8_t x2019 = 0U;
	int8_t x2020 = 2;
	static volatile int32_t t8 = -287805;

    t8 = (((x2017%x2018)>>x2019)<<x2020);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x2033 = INT8_MAX;
	uint16_t x2034 = UINT16_MAX;
	int32_t x2035 = 18;
	volatile int8_t x2036 = 6;
	static volatile int32_t t9 = -1;

    t9 = (((x2033%x2034)>>x2035)<<x2036);

    if (t9 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();


    return 0;
}

