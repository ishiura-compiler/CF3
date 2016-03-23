
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

uint8_t x2 = UINT8_MAX;
int8_t x4 = 6;
int16_t x235 = 4;
volatile int32_t t1 = -32642183;
volatile int16_t x257 = INT16_MIN;
static int64_t t4 = -1059390LL;
int16_t x1163 = INT16_MAX;
uint64_t t7 = 6404251LLU;
int8_t x1270 = 3;
int32_t t8 = 58;
int32_t x1553 = 2278;
uint16_t x1554 = 9U;
volatile int8_t x1645 = 4;
uint16_t x2091 = 453U;


void f0(void) {
    	static int8_t x1 = 17;
	int32_t x3 = 616;
	static volatile int32_t t0 = -230;

    t0 = (x1&(x2<<(x3>>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x233 = 0U;
	volatile uint8_t x234 = UINT8_MAX;
	int8_t x236 = 4;

    t1 = (x233&(x234<<(x235>>x236)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x258 = 33;
	static int8_t x259 = INT8_MAX;
	uint8_t x260 = 3U;
	volatile int32_t t2 = -1;

    t2 = (x257&(x258<<(x259>>x260)));

    if (t2 != 1081344) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x313 = UINT8_MAX;
	uint64_t x314 = UINT64_MAX;
	volatile uint8_t x315 = 1U;
	uint8_t x316 = 27U;
	volatile uint64_t t3 = 130386322939625LLU;

    t3 = (x313&(x314<<(x315>>x316)));

    if (t3 != 255LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x589 = INT32_MIN;
	int64_t x590 = INT64_MAX;
	uint16_t x591 = 0U;
	static int16_t x592 = 0;

    t4 = (x589&(x590<<(x591>>x592)));

    if (t4 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x729 = 30U;
	static int8_t x730 = 1;
	volatile int8_t x731 = 13;
	volatile int32_t x732 = 27;
	int32_t t5 = 133;

    t5 = (x729&(x730<<(x731>>x732)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x861 = INT32_MAX;
	volatile int32_t x862 = INT32_MAX;
	uint32_t x863 = 14506U;
	int8_t x864 = 17;
	int32_t t6 = INT32_MAX;

    t6 = (x861&(x862<<(x863>>x864)));

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x1161 = INT64_MAX;
	uint64_t x1162 = 5LLU;
	int16_t x1164 = 26;

    t7 = (x1161&(x1162<<(x1163>>x1164)));

    if (t7 != 5LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x1269 = -1;
	uint32_t x1271 = 47U;
	volatile int8_t x1272 = 23;

    t8 = (x1269&(x1270<<(x1271>>x1272)));

    if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x1555 = 9U;
	static volatile int8_t x1556 = 1;
	static int32_t t9 = 98008154;

    t9 = (x1553&(x1554<<(x1555>>x1556)));

    if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x1646 = INT32_MAX;
	uint8_t x1647 = 4U;
	uint8_t x1648 = 3U;
	int32_t t10 = -17319602;

    t10 = (x1645&(x1646<<(x1647>>x1648)));

    if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1749 = -1LL;
	int32_t x1750 = 58700556;
	uint16_t x1751 = 0U;
	uint16_t x1752 = 1U;
	volatile int64_t t11 = -3LL;

    t11 = (x1749&(x1750<<(x1751>>x1752)));

    if (t11 != 58700556LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x2089 = 0U;
	static uint64_t x2090 = 7863415007272411479LLU;
	volatile uint16_t x2092 = 10U;
	static volatile uint64_t t12 = 630421305241878054LLU;

    t12 = (x2089&(x2090<<(x2091>>x2092)));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x2125 = 7U;
	volatile int64_t x2126 = INT64_MAX;
	uint8_t x2127 = UINT8_MAX;
	int16_t x2128 = 24;
	int64_t t13 = -169722LL;

    t13 = (x2125&(x2126<<(x2127>>x2128)));

    if (t13 != 7LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x2137 = -1LL;
	uint16_t x2138 = UINT16_MAX;
	uint64_t x2139 = 449798LLU;
	static int8_t x2140 = 60;
	volatile int64_t t14 = 7774371636815975LL;

    t14 = (x2137&(x2138<<(x2139>>x2140)));

    if (t14 != 65535LL) { NG(); } else { ; }
	
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


    return 0;
}

