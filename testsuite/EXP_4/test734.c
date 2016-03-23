
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

static volatile int32_t t0 = -254716;
static volatile int64_t x14 = INT64_MAX;
volatile uint16_t x16 = 202U;
int8_t x336 = -1;
volatile int32_t t4 = 1360;
int16_t x437 = 11;
static volatile int8_t x482 = 1;
int16_t x484 = INT16_MIN;
int32_t t7 = 690490;
uint16_t x509 = UINT16_MAX;
uint8_t x512 = UINT8_MAX;
int32_t t8 = -3915;
int16_t x791 = INT16_MIN;
volatile uint8_t x839 = 39U;
static volatile uint32_t t10 = 53748U;
uint32_t x1088 = UINT32_MAX;


void f0(void) {
    	int16_t x5 = 7102;
	volatile uint8_t x6 = 4U;
	volatile int8_t x7 = -1;
	static int8_t x8 = 2;

    t0 = (x5<<(x6>>(x7/x8)));

    if (t0 != 113632) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x13 = 11114U;
	uint16_t x15 = 12354U;
	volatile int32_t t1 = -249873;

    t1 = (x13<<(x14>>(x15/x16)));

    if (t1 != 88912) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x125 = UINT16_MAX;
	static int32_t x126 = 1;
	int16_t x127 = 58;
	uint32_t x128 = 2421275U;
	static volatile int32_t t2 = -36309;

    t2 = (x125<<(x126>>(x127/x128)));

    if (t2 != 131070) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint64_t x293 = 8388463602844783LLU;
	volatile int8_t x294 = 54;
	int16_t x295 = INT16_MIN;
	static volatile int64_t x296 = INT64_MIN;
	static uint64_t t3 = 65245282672032LLU;

    t3 = (x293<<(x294>>(x295/x296)));

    if (t3 != 1999598234552500224LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x333 = UINT8_MAX;
	int8_t x334 = 0;
	uint32_t x335 = 35U;

    t4 = (x333<<(x334>>(x335/x336)));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x438 = 2U;
	uint8_t x439 = 22U;
	int32_t x440 = -1146;
	static int32_t t5 = 98649;

    t5 = (x437<<(x438>>(x439/x440)));

    if (t5 != 44) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x481 = UINT32_MAX;
	int8_t x483 = -4;
	uint32_t t6 = 4U;

    t6 = (x481<<(x482>>(x483/x484)));

    if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x501 = UINT8_MAX;
	uint16_t x502 = 0U;
	volatile int16_t x503 = 8;
	int32_t x504 = 12;

    t7 = (x501<<(x502>>(x503/x504)));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x510 = 3U;
	volatile int16_t x511 = 7226;

    t8 = (x509<<(x510>>(x511/x512)));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x789 = UINT8_MAX;
	volatile int32_t x790 = 7;
	static uint16_t x792 = UINT16_MAX;
	static int32_t t9 = 1;

    t9 = (x789<<(x790>>(x791/x792)));

    if (t9 != 32640) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x837 = 34100U;
	uint32_t x838 = 9U;
	int16_t x840 = INT16_MIN;

    t10 = (x837<<(x838>>(x839/x840)));

    if (t10 != 17459200U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x937 = 193U;
	uint8_t x938 = 0U;
	static volatile int8_t x939 = 61;
	static int32_t x940 = INT32_MIN;
	volatile uint32_t t11 = 589U;

    t11 = (x937<<(x938>>(x939/x940)));

    if (t11 != 193U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1085 = 3U;
	uint8_t x1086 = 1U;
	static int16_t x1087 = INT16_MIN;
	volatile int32_t t12 = -1;

    t12 = (x1085<<(x1086>>(x1087/x1088)));

    if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x1161 = 3U;
	int16_t x1162 = 8;
	static uint8_t x1163 = 1U;
	volatile int16_t x1164 = INT16_MIN;
	static volatile int32_t t13 = -170054;

    t13 = (x1161<<(x1162>>(x1163/x1164)));

    if (t13 != 768) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x1165 = UINT8_MAX;
	uint8_t x1166 = UINT8_MAX;
	volatile int8_t x1167 = INT8_MAX;
	volatile int8_t x1168 = 6;
	static int32_t t14 = -246956;

    t14 = (x1165<<(x1166>>(x1167/x1168)));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1177 = 561819LL;
	uint16_t x1178 = 8U;
	uint64_t x1179 = UINT64_MAX;
	int64_t x1180 = 809261454772627126LL;
	static volatile int64_t t15 = -3835133231563960499LL;

    t15 = (x1177<<(x1178>>(x1179/x1180)));

    if (t15 != 561819LL) { NG(); } else { ; }
	
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


    return 0;
}

