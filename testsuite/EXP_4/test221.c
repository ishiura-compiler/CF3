
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

static int64_t x489 = 63372701792LL;
int32_t x722 = INT32_MAX;
int8_t x893 = 0;
int32_t t3 = 166861;
int32_t x1729 = INT32_MAX;
uint64_t x1766 = UINT64_MAX;
uint16_t x2009 = 31U;
int64_t x2011 = -1LL;
int16_t x2109 = 2040;
volatile uint32_t x2111 = UINT32_MAX;
int32_t x2292 = -1;
int8_t x2344 = 1;
int32_t t13 = -90;
uint8_t x2534 = 14U;
static volatile int32_t t14 = -248882728;
static int16_t x2582 = 3;
int8_t x2584 = 4;
int32_t t16 = -380;
static uint64_t x2710 = UINT64_MAX;


void f0(void) {
    	int16_t x189 = INT16_MAX;
	int8_t x190 = -1;
	static int8_t x191 = -14;
	volatile int8_t x192 = 0;
	volatile int32_t t0 = 402;

    t0 = (x189>>(x190-(x191-x192)));

    if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x490 = UINT32_MAX;
	volatile int16_t x491 = -1;
	uint32_t x492 = 2U;
	int64_t t1 = 2000754058703804297LL;

    t1 = (x489>>(x490-(x491-x492)));

    if (t1 != 15843175448LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x721 = 72U;
	int32_t x723 = INT32_MAX;
	int8_t x724 = 1;
	static volatile int32_t t2 = 19191209;

    t2 = (x721>>(x722-(x723-x724)));

    if (t2 != 36) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x894 = -1;
	static int8_t x895 = -8;
	uint32_t x896 = UINT32_MAX;

    t3 = (x893>>(x894-(x895-x896)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x1285 = UINT16_MAX;
	int16_t x1286 = INT16_MIN;
	static int16_t x1287 = INT16_MAX;
	uint16_t x1288 = UINT16_MAX;
	volatile int32_t t4 = -21884;

    t4 = (x1285>>(x1286-(x1287-x1288)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x1465 = INT8_MAX;
	int16_t x1466 = -1;
	uint32_t x1467 = UINT32_MAX;
	uint8_t x1468 = 28U;
	volatile int32_t t5 = -244047272;

    t5 = (x1465>>(x1466-(x1467-x1468)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x1730 = 3U;
	int32_t x1731 = -1;
	int16_t x1732 = 1;
	static int32_t t6 = 524918741;

    t6 = (x1729>>(x1730-(x1731-x1732)));

    if (t6 != 67108863) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x1765 = UINT16_MAX;
	int8_t x1767 = -2;
	int64_t x1768 = -1LL;
	volatile int32_t t7 = 22611283;

    t7 = (x1765>>(x1766-(x1767-x1768)));

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x2010 = INT32_MAX;
	volatile int32_t x2012 = INT32_MIN;
	int32_t t8 = -48;

    t8 = (x2009>>(x2010-(x2011-x2012)));

    if (t8 != 31) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x2110 = INT32_MAX;
	static int32_t x2112 = INT32_MIN;
	static int32_t t9 = -1;

    t9 = (x2109>>(x2110-(x2111-x2112)));

    if (t9 != 2040) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x2145 = 30327U;
	volatile int16_t x2146 = -1;
	uint64_t x2147 = UINT64_MAX;
	volatile uint8_t x2148 = 12U;
	uint32_t t10 = 11U;

    t10 = (x2145>>(x2146-(x2147-x2148)));

    if (t10 != 7U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x2269 = UINT32_MAX;
	static int64_t x2270 = INT64_MIN;
	int64_t x2271 = INT64_MIN;
	static uint8_t x2272 = 0U;
	static volatile uint32_t t11 = UINT32_MAX;

    t11 = (x2269>>(x2270-(x2271-x2272)));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x2289 = UINT32_MAX;
	static uint32_t x2290 = 1U;
	int8_t x2291 = -10;
	static uint32_t t12 = 80383399U;

    t12 = (x2289>>(x2290-(x2291-x2292)));

    if (t12 != 4194303U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x2341 = 13835877;
	int8_t x2342 = -1;
	int8_t x2343 = -1;

    t13 = (x2341>>(x2342-(x2343-x2344)));

    if (t13 != 6917938) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x2533 = UINT8_MAX;
	volatile int8_t x2535 = 2;
	int8_t x2536 = -1;

    t14 = (x2533>>(x2534-(x2535-x2536)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x2581 = 1U;
	static int16_t x2583 = -1;
	volatile int32_t t15 = 184276882;

    t15 = (x2581>>(x2582-(x2583-x2584)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x2701 = 16382U;
	uint16_t x2702 = 2U;
	static volatile uint8_t x2703 = 1U;
	uint8_t x2704 = 12U;

    t16 = (x2701>>(x2702-(x2703-x2704)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x2705 = 1497933710311LL;
	int8_t x2706 = -1;
	static int16_t x2707 = -1;
	uint8_t x2708 = 6U;
	static int64_t t17 = 28231463LL;

    t17 = (x2705>>(x2706-(x2707-x2708)));

    if (t17 != 23405214223LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x2709 = 45549391681479LL;
	int64_t x2711 = -1LL;
	static int16_t x2712 = 28;
	int64_t t18 = -527481258747LL;

    t18 = (x2709>>(x2710-(x2711-x2712)));

    if (t18 != 169684LL) { NG(); } else { ; }
	
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
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();


    return 0;
}

