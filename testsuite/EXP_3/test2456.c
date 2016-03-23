
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

uint16_t x105 = 237U;
static int8_t x106 = 11;
volatile int32_t t1 = 662393485;
uint16_t x340 = 16U;
int32_t t2 = -66534496;
uint8_t x900 = 1U;
static uint8_t x1121 = 110U;
int32_t x1153 = 3;
volatile int8_t x1156 = 28;
volatile uint64_t x1454 = 8234133LLU;
static uint32_t x1455 = 1U;
volatile int32_t t13 = -23;
volatile int8_t x1993 = INT8_MIN;
volatile int16_t x1995 = 3;
int32_t t14 = 1001291004;
uint8_t x2195 = 0U;
volatile uint8_t x2196 = 6U;
uint32_t x2405 = UINT32_MAX;
static int64_t x2407 = 15LL;
static int16_t x2453 = 10327;
uint8_t x2456 = 1U;
volatile uint32_t x2498 = UINT32_MAX;
volatile int32_t t19 = -960;


void f0(void) {
    	volatile uint8_t x107 = 5U;
	uint8_t x108 = 5U;
	volatile int32_t t0 = 622340619;

    t0 = ((x105==x106)<<(x107|x108));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x189 = 1480918U;
	uint16_t x190 = 93U;
	uint16_t x191 = 1U;
	volatile uint8_t x192 = 0U;

    t1 = ((x189==x190)<<(x191|x192));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x337 = 5U;
	int16_t x338 = INT16_MIN;
	static uint8_t x339 = 10U;

    t2 = ((x337==x338)<<(x339|x340));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	uint8_t x379 = 0U;
	uint8_t x380 = 7U;
	volatile int32_t t3 = 29716;

    t3 = ((x377==x378)<<(x379|x380));

    if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x537 = INT32_MIN;
	volatile uint16_t x538 = UINT16_MAX;
	int8_t x539 = 2;
	static uint32_t x540 = 1U;
	static int32_t t4 = 28;

    t4 = ((x537==x538)<<(x539|x540));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x553 = INT8_MIN;
	uint64_t x554 = UINT64_MAX;
	uint16_t x555 = 0U;
	int32_t x556 = 1;
	volatile int32_t t5 = 15;

    t5 = ((x553==x554)<<(x555|x556));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x897 = 1;
	uint32_t x898 = 7U;
	uint8_t x899 = 0U;
	int32_t t6 = -28511456;

    t6 = ((x897==x898)<<(x899|x900));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x961 = INT32_MAX;
	volatile uint16_t x962 = 6U;
	uint16_t x963 = 24U;
	static volatile uint8_t x964 = 27U;
	int32_t t7 = 903;

    t7 = ((x961==x962)<<(x963|x964));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x1122 = UINT64_MAX;
	uint64_t x1123 = 15LLU;
	uint64_t x1124 = 8LLU;
	int32_t t8 = -5;

    t8 = ((x1121==x1122)<<(x1123|x1124));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x1154 = INT8_MIN;
	int32_t x1155 = 5;
	int32_t t9 = 39667810;

    t9 = ((x1153==x1154)<<(x1155|x1156));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x1377 = 644099135446LLU;
	uint32_t x1378 = 2U;
	int8_t x1379 = 1;
	static uint8_t x1380 = 22U;
	int32_t t10 = -221;

    t10 = ((x1377==x1378)<<(x1379|x1380));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x1453 = 0;
	int8_t x1456 = 13;
	int32_t t11 = 11949;

    t11 = ((x1453==x1454)<<(x1455|x1456));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x1597 = 909LLU;
	uint8_t x1598 = UINT8_MAX;
	volatile uint8_t x1599 = 12U;
	int8_t x1600 = 3;
	int32_t t12 = 15779;

    t12 = ((x1597==x1598)<<(x1599|x1600));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x1869 = -1LL;
	int32_t x1870 = -1;
	static uint32_t x1871 = 3U;
	static volatile int8_t x1872 = 1;

    t13 = ((x1869==x1870)<<(x1871|x1872));

    if (t13 != 8) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x1994 = 304064336530255596LLU;
	static int16_t x1996 = 3;

    t14 = ((x1993==x1994)<<(x1995|x1996));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x2193 = INT8_MIN;
	volatile int32_t x2194 = 78520458;
	static int32_t t15 = 212594;

    t15 = ((x2193==x2194)<<(x2195|x2196));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x2317 = 65731842700270667LLU;
	int8_t x2318 = 1;
	static uint64_t x2319 = 1LLU;
	volatile int8_t x2320 = 17;
	int32_t t16 = -124;

    t16 = ((x2317==x2318)<<(x2319|x2320));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x2406 = -3LL;
	uint8_t x2408 = 0U;
	int32_t t17 = -235731661;

    t17 = ((x2405==x2406)<<(x2407|x2408));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x2454 = 202U;
	static volatile int32_t x2455 = 1;
	volatile int32_t t18 = 56101497;

    t18 = ((x2453==x2454)<<(x2455|x2456));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x2497 = 566830583;
	static int8_t x2499 = 1;
	int16_t x2500 = 14;

    t19 = ((x2497==x2498)<<(x2499|x2500));

    if (t19 != 0) { NG(); } else { ; }
	
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


    return 0;
}

