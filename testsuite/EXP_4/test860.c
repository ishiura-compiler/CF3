
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

uint8_t x14 = 4U;
int32_t x16 = -1;
volatile uint32_t x437 = UINT32_MAX;
static uint8_t x440 = 4U;
uint32_t t3 = 705770U;
int16_t x735 = -1;
uint8_t x1127 = 38U;
uint32_t x1945 = 656587157U;
uint8_t x2105 = 3U;
volatile int32_t t12 = 685859;
volatile uint32_t t15 = 1001U;
uint8_t x2406 = 4U;
volatile int8_t x2408 = INT8_MIN;
uint32_t x2933 = 0U;
int32_t x3181 = 21;


void f0(void) {
    	static int8_t x13 = 13;
	int32_t x15 = -12;
	static int32_t t0 = 25;

    t0 = (x13<<(x14<<(x15%x16)));

    if (t0 != 208) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x157 = 80;
	uint8_t x158 = 0U;
	static volatile int16_t x159 = INT16_MIN;
	int16_t x160 = -1;
	static volatile int32_t t1 = 329086461;

    t1 = (x157<<(x158<<(x159%x160)));

    if (t1 != 80) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x345 = 3U;
	uint8_t x346 = 1U;
	uint8_t x347 = 22U;
	int8_t x348 = -2;
	uint32_t t2 = 221663U;

    t2 = (x345<<(x346<<(x347%x348)));

    if (t2 != 6U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x438 = 1;
	static int32_t x439 = -6343000;

    t3 = (x437<<(x438<<(x439%x440)));

    if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x733 = 92618U;
	int8_t x734 = 4;
	int32_t x736 = -1;
	volatile uint32_t t4 = 412U;

    t4 = (x733<<(x734<<(x735%x736)));

    if (t4 != 1481888U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x1125 = 5U;
	static uint8_t x1126 = 4U;
	uint8_t x1128 = 6U;
	volatile int32_t t5 = 38819775;

    t5 = (x1125<<(x1126<<(x1127%x1128)));

    if (t5 != 327680) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint8_t x1201 = 1U;
	int16_t x1202 = 15;
	int32_t x1203 = INT32_MIN;
	int8_t x1204 = INT8_MIN;
	int32_t t6 = -2686517;

    t6 = (x1201<<(x1202<<(x1203%x1204)));

    if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x1273 = 1125182U;
	uint8_t x1274 = 1U;
	static int8_t x1275 = 1;
	uint8_t x1276 = 19U;
	volatile uint32_t t7 = 198U;

    t7 = (x1273<<(x1274<<(x1275%x1276)));

    if (t7 != 4500728U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x1597 = UINT16_MAX;
	uint8_t x1598 = 4U;
	uint64_t x1599 = 46LLU;
	uint16_t x1600 = 2U;
	int32_t t8 = -774;

    t8 = (x1597<<(x1598<<(x1599%x1600)));

    if (t8 != 1048560) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x1841 = 20;
	uint32_t x1842 = 0U;
	volatile int8_t x1843 = -1;
	int16_t x1844 = -1;
	int32_t t9 = -125242288;

    t9 = (x1841<<(x1842<<(x1843%x1844)));

    if (t9 != 20) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x1946 = 0LLU;
	static volatile int64_t x1947 = -12179104778LL;
	int8_t x1948 = -1;
	static volatile uint32_t t10 = 86636U;

    t10 = (x1945<<(x1946<<(x1947%x1948)));

    if (t10 != 656587157U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x2106 = 19U;
	uint64_t x2107 = UINT64_MAX;
	int8_t x2108 = -1;
	volatile int32_t t11 = 325390989;

    t11 = (x2105<<(x2106<<(x2107%x2108)));

    if (t11 != 1572864) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x2113 = 0;
	uint32_t x2114 = 2U;
	static uint8_t x2115 = 97U;
	int32_t x2116 = -1;

    t12 = (x2113<<(x2114<<(x2115%x2116)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x2157 = 17359774U;
	static volatile int8_t x2158 = 30;
	int32_t x2159 = INT32_MIN;
	int8_t x2160 = -1;
	uint32_t t13 = 5460317U;

    t13 = (x2157<<(x2158<<(x2159%x2160)));

    if (t13 != 2147483648U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x2309 = UINT64_MAX;
	int16_t x2310 = 0;
	volatile int32_t x2311 = INT32_MAX;
	volatile int32_t x2312 = 1;
	static volatile uint64_t t14 = UINT64_MAX;

    t14 = (x2309<<(x2310<<(x2311%x2312)));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x2345 = UINT32_MAX;
	static uint8_t x2346 = 10U;
	int16_t x2347 = INT16_MIN;
	uint64_t x2348 = 2LLU;

    t15 = (x2345<<(x2346<<(x2347%x2348)));

    if (t15 != 4294966272U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x2361 = 979341515219147212LLU;
	int32_t x2362 = 19;
	uint16_t x2363 = 0U;
	uint32_t x2364 = 2936894U;
	volatile uint64_t t16 = 62LLU;

    t16 = (x2361<<(x2362<<(x2363%x2364)));

    if (t16 != 10329783584593805312LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x2405 = 6717592LLU;
	int16_t x2407 = INT16_MIN;
	volatile uint64_t t17 = 30LLU;

    t17 = (x2405<<(x2406<<(x2407%x2408)));

    if (t17 != 107481472LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x2681 = 2;
	uint16_t x2682 = 1U;
	uint8_t x2683 = 2U;
	int64_t x2684 = -1LL;
	volatile int32_t t18 = -452027494;

    t18 = (x2681<<(x2682<<(x2683%x2684)));

    if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x2934 = 0LLU;
	volatile uint64_t x2935 = UINT64_MAX;
	volatile int64_t x2936 = INT64_MAX;
	uint32_t t19 = 1487885U;

    t19 = (x2933<<(x2934<<(x2935%x2936)));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x3182 = 0;
	static volatile uint16_t x3183 = 3784U;
	int8_t x3184 = -1;
	int32_t t20 = 2185;

    t20 = (x3181<<(x3182<<(x3183%x3184)));

    if (t20 != 21) { NG(); } else { ; }
	
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
    f19();
    f20();


    return 0;
}

