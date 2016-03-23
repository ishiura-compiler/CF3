
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

int8_t x181 = -5;
static int8_t x262 = -1;
static int16_t x264 = INT16_MIN;
static uint32_t x289 = UINT32_MAX;
int32_t x340 = -1;
volatile uint32_t t6 = 50111861U;
int8_t x365 = INT8_MIN;
int32_t x368 = -1;
int8_t x556 = 17;


void f0(void) {
    	volatile int16_t x129 = -1;
	volatile int8_t x130 = -2;
	volatile int16_t x131 = INT16_MIN;
	volatile int16_t x132 = INT16_MIN;
	volatile int32_t t0 = -10668;

    t0 = ((x129*x130)>>(x131-x132));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x165 = 10791170876760LL;
	uint64_t x166 = UINT64_MAX;
	volatile uint32_t x167 = UINT32_MAX;
	static int8_t x168 = -2;
	volatile uint64_t t1 = 720515542288620LLU;

    t1 = ((x165*x166)>>(x167-x168));

    if (t1 != 9223366641269337428LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x182 = -1LL;
	int16_t x183 = 0;
	int8_t x184 = -2;
	static volatile int64_t t2 = 19404LL;

    t2 = ((x181*x182)>>(x183-x184));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x261 = 14491410LLU;
	static int16_t x263 = INT16_MIN;
	volatile uint64_t t3 = 2LLU;

    t3 = ((x261*x262)>>(x263-x264));

    if (t3 != 18446744073695060206LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x290 = INT32_MIN;
	int8_t x291 = 12;
	volatile uint16_t x292 = 7U;
	volatile uint32_t t4 = 16075U;

    t4 = ((x289*x290)>>(x291-x292));

    if (t4 != 67108864U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x301 = INT64_MAX;
	static int32_t x302 = 0;
	int32_t x303 = INT32_MIN;
	volatile int32_t x304 = INT32_MIN;
	volatile int64_t t5 = -17157LL;

    t5 = ((x301*x302)>>(x303-x304));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x337 = 43;
	static uint32_t x338 = 1242U;
	int16_t x339 = 1;

    t6 = ((x337*x338)>>(x339-x340));

    if (t6 != 13351U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x366 = INT16_MIN;
	volatile int32_t x367 = 1;
	static int32_t t7 = -3;

    t7 = ((x365*x366)>>(x367-x368));

    if (t7 != 1048576) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x397 = INT16_MIN;
	static int8_t x398 = -2;
	int64_t x399 = -1LL;
	static volatile int64_t x400 = -1LL;
	volatile int32_t t8 = 11;

    t8 = ((x397*x398)>>(x399-x400));

    if (t8 != 65536) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x509 = 14810U;
	uint8_t x510 = UINT8_MAX;
	int16_t x511 = -1;
	int32_t x512 = -1;
	uint32_t t9 = 1813U;

    t9 = ((x509*x510)>>(x511-x512));

    if (t9 != 3776550U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x553 = 467256742730820426LLU;
	static uint64_t x554 = 589LLU;
	static uint16_t x555 = 67U;
	volatile uint64_t t10 = 2093063LLU;

    t10 = ((x553*x554)>>(x555-x556));

    if (t10 != 15063LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x737 = INT32_MIN;
	uint32_t x738 = 12256U;
	volatile int16_t x739 = 0;
	int32_t x740 = -1;
	static volatile uint32_t t11 = 111121911U;

    t11 = ((x737*x738)>>(x739-x740));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x777 = 13002U;
	static uint8_t x778 = 36U;
	int8_t x779 = INT8_MIN;
	volatile int8_t x780 = INT8_MIN;
	volatile int32_t t12 = 350082951;

    t12 = ((x777*x778)>>(x779-x780));

    if (t12 != 468072) { NG(); } else { ; }
	
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
    f10();
    f11();
    f12();


    return 0;
}

