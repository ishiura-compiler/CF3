
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

uint32_t x113 = 1071998199U;
uint8_t x114 = 7U;
int64_t x173 = 1663LL;
int64_t x285 = INT64_MAX;
uint16_t x287 = 3U;
uint8_t x446 = 1U;
int16_t x518 = 5;
int32_t t4 = -952112462;
uint8_t x875 = 2U;
static uint16_t x1397 = UINT16_MAX;
static int16_t x1400 = 1;
volatile int32_t t9 = -66543050;
uint16_t x1433 = UINT16_MAX;
int64_t x1522 = 10LL;
uint16_t x1553 = 0U;
uint64_t x1589 = 10015433185LLU;
uint32_t t14 = 15U;


void f0(void) {
    	volatile int32_t x115 = 9;
	int8_t x116 = INT8_MIN;
	static uint32_t t0 = 26U;

    t0 = (x113>>(x114|(x115&x116)));

    if (t0 != 8374985U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint64_t x174 = 14LLU;
	uint32_t x175 = UINT32_MAX;
	volatile int8_t x176 = 1;
	volatile int64_t t1 = -27589LL;

    t1 = (x173>>(x174|(x175&x176)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x286 = 1;
	static uint16_t x288 = 5791U;
	volatile int64_t t2 = 52456346997LL;

    t2 = (x285>>(x286|(x287&x288)));

    if (t2 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x445 = 29U;
	static uint32_t x447 = 7836U;
	volatile int8_t x448 = 0;
	static int32_t t3 = 135;

    t3 = (x445>>(x446|(x447&x448)));

    if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x517 = INT8_MAX;
	volatile int16_t x519 = INT16_MIN;
	uint16_t x520 = 16709U;

    t4 = (x517>>(x518|(x519&x520)));

    if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x633 = 6800970596785LLU;
	uint32_t x634 = 1U;
	static uint64_t x635 = 255872744715LLU;
	uint8_t x636 = 0U;
	volatile uint64_t t5 = 7036007029698LLU;

    t5 = (x633>>(x634|(x635&x636)));

    if (t5 != 3400485298392LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x721 = UINT64_MAX;
	uint64_t x722 = 33LLU;
	int8_t x723 = 1;
	static int64_t x724 = 1034587161LL;
	uint64_t t6 = 1659395LLU;

    t6 = (x721>>(x722|(x723&x724)));

    if (t6 != 2147483647LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x873 = UINT64_MAX;
	volatile uint16_t x874 = 4U;
	int64_t x876 = -172181393601LL;
	uint64_t t7 = 449682586063LLU;

    t7 = (x873>>(x874|(x875&x876)));

    if (t7 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x1173 = INT16_MAX;
	int16_t x1174 = 13;
	uint32_t x1175 = 2U;
	uint8_t x1176 = 7U;
	static volatile int32_t t8 = 9561;

    t8 = (x1173>>(x1174|(x1175&x1176)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x1398 = 15U;
	volatile int32_t x1399 = INT32_MIN;

    t9 = (x1397>>(x1398|(x1399&x1400)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x1434 = 15;
	static uint16_t x1435 = 1U;
	uint16_t x1436 = 36U;
	int32_t t10 = -105;

    t10 = (x1433>>(x1434|(x1435&x1436)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x1521 = INT32_MAX;
	static uint16_t x1523 = 2U;
	int32_t x1524 = INT32_MIN;
	volatile int32_t t11 = -738769;

    t11 = (x1521>>(x1522|(x1523&x1524)));

    if (t11 != 2097151) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x1554 = 26;
	int32_t x1555 = INT32_MIN;
	uint64_t x1556 = 31333LLU;
	volatile int32_t t12 = -22137;

    t12 = (x1553>>(x1554|(x1555&x1556)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x1590 = 0U;
	static int64_t x1591 = INT64_MIN;
	static int32_t x1592 = INT32_MAX;
	volatile uint64_t t13 = 49163561609833803LLU;

    t13 = (x1589>>(x1590|(x1591&x1592)));

    if (t13 != 10015433185LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1733 = 365U;
	static int16_t x1734 = 0;
	volatile int8_t x1735 = INT8_MIN;
	int8_t x1736 = INT8_MAX;

    t14 = (x1733>>(x1734|(x1735&x1736)));

    if (t14 != 365U) { NG(); } else { ; }
	
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

