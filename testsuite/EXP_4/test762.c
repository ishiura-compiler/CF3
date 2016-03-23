
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

static volatile int64_t x19 = -1LL;
volatile int32_t t1 = 4343;
int16_t x386 = 7;
static int8_t x387 = INT8_MAX;
int16_t x493 = INT16_MAX;
volatile int32_t t6 = 321243;
volatile uint8_t x839 = 70U;
volatile int32_t x988 = INT32_MIN;
volatile int32_t t9 = 122374404;
int8_t x1002 = 1;
int64_t x1040 = INT64_MAX;
volatile uint32_t t12 = UINT32_MAX;
int16_t x1283 = 0;


void f0(void) {
    	uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 5U;
	volatile uint64_t x11 = 1421LLU;
	int64_t x12 = INT64_MAX;
	volatile int32_t t0 = -50;

    t0 = (x9<<(x10|(x11/x12)));

    if (t0 != 8160) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x17 = UINT8_MAX;
	uint32_t x18 = 14U;
	volatile int8_t x20 = 3;

    t1 = (x17<<(x18|(x19/x20)));

    if (t1 != 4177920) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x165 = 18LL;
	static volatile int32_t x166 = 1;
	int16_t x167 = 1;
	int16_t x168 = INT16_MIN;
	int64_t t2 = -1179310531693LL;

    t2 = (x165<<(x166|(x167/x168)));

    if (t2 != 36LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x233 = UINT32_MAX;
	int8_t x234 = 1;
	static uint16_t x235 = UINT16_MAX;
	int16_t x236 = 14477;
	static uint32_t t3 = 6830654U;

    t3 = (x233<<(x234|(x235/x236)));

    if (t3 != 4294967264U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x385 = UINT64_MAX;
	int64_t x388 = -173244LL;
	volatile uint64_t t4 = 6582033631LLU;

    t4 = (x385<<(x386|(x387/x388)));

    if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x473 = 478577418U;
	int8_t x474 = 22;
	uint32_t x475 = 6U;
	uint8_t x476 = 2U;
	uint32_t t5 = 5514U;

    t5 = (x473<<(x474|(x475/x476)));

    if (t5 != 2231369728U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x494 = 2U;
	uint16_t x495 = 4U;
	int32_t x496 = INT32_MAX;

    t6 = (x493<<(x494|(x495/x496)));

    if (t6 != 131068) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x501 = 257438075;
	uint8_t x502 = 0U;
	static int16_t x503 = INT16_MIN;
	static volatile uint16_t x504 = UINT16_MAX;
	int32_t t7 = -713;

    t7 = (x501<<(x502|(x503/x504)));

    if (t7 != 257438075) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x837 = 26769966LLU;
	uint8_t x838 = 55U;
	volatile uint16_t x840 = 15219U;
	uint64_t t8 = 729683282140339475LLU;

    t8 = (x837<<(x838|(x839/x840)));

    if (t8 != 1657324662872342528LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x985 = 541U;
	uint16_t x986 = 7U;
	static int8_t x987 = INT8_MIN;

    t9 = (x985<<(x986|(x987/x988)));

    if (t9 != 69248) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x1001 = 1172U;
	uint8_t x1003 = 127U;
	volatile uint32_t x1004 = UINT32_MAX;
	int32_t t10 = -123145829;

    t10 = (x1001<<(x1002|(x1003/x1004)));

    if (t10 != 2344) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1005 = 118505257048292LLU;
	uint16_t x1006 = 5U;
	int16_t x1007 = INT16_MAX;
	int32_t x1008 = 7021;
	uint64_t t11 = 263197987673623LLU;

    t11 = (x1005<<(x1006|(x1007/x1008)));

    if (t11 != 3792168225545344LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x1037 = UINT32_MAX;
	uint8_t x1038 = 0U;
	uint16_t x1039 = 2497U;

    t12 = (x1037<<(x1038|(x1039/x1040)));

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1069 = 39264U;
	static volatile uint8_t x1070 = 6U;
	volatile uint8_t x1071 = UINT8_MAX;
	uint8_t x1072 = UINT8_MAX;
	static uint32_t t13 = 4338U;

    t13 = (x1069<<(x1070|(x1071/x1072)));

    if (t13 != 5025792U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x1205 = 260U;
	static uint8_t x1206 = 11U;
	static volatile int64_t x1207 = -1LL;
	int64_t x1208 = 4545615529666249633LL;
	static volatile int32_t t14 = 0;

    t14 = (x1205<<(x1206|(x1207/x1208)));

    if (t14 != 532480) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1249 = 7U;
	uint8_t x1250 = 2U;
	static int64_t x1251 = 816235177049LL;
	static int64_t x1252 = INT64_MAX;
	static int32_t t15 = -1831;

    t15 = (x1249<<(x1250|(x1251/x1252)));

    if (t15 != 28) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1281 = 13U;
	uint8_t x1282 = 4U;
	uint64_t x1284 = UINT64_MAX;
	volatile int32_t t16 = 3;

    t16 = (x1281<<(x1282|(x1283/x1284)));

    if (t16 != 208) { NG(); } else { ; }
	
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


    return 0;
}

