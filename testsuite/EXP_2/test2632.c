
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

volatile uint32_t t0 = 1U;
int64_t x11 = -1LL;
uint8_t x405 = UINT8_MAX;
int8_t x408 = -1;
int8_t x498 = INT8_MIN;
static int32_t t6 = 1;
volatile int16_t x509 = 1;
int16_t x635 = INT16_MIN;
static int8_t x708 = INT8_MIN;
volatile int32_t t9 = 188;
volatile uint16_t x1045 = 714U;
uint8_t x1374 = 57U;
static int32_t x1666 = -2;
uint8_t x1668 = UINT8_MAX;


void f0(void) {
    	static uint32_t x1 = 940159564U;
	int16_t x2 = -1;
	static int8_t x3 = -1;
	int16_t x4 = INT16_MIN;

    t0 = ((x1<<(x2^x3))^x4);

    if (t0 != 3354800716U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = UINT64_MAX;
	int32_t x10 = -1;
	int16_t x12 = 1;
	volatile uint64_t t1 = 2845164767LLU;

    t1 = ((x9<<(x10^x11))^x12);

    if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x21 = UINT64_MAX;
	uint32_t x22 = UINT32_MAX;
	volatile int8_t x23 = -9;
	volatile int8_t x24 = -15;
	volatile uint64_t t2 = 42LLU;

    t2 = ((x21<<(x22^x23))^x24);

    if (t2 != 241LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x201 = 1758538525450431LL;
	volatile uint8_t x202 = 3U;
	uint8_t x203 = 11U;
	static int8_t x204 = INT8_MIN;
	static int64_t t3 = 22791856LL;

    t3 = ((x201<<(x202^x203))^x204);

    if (t3 != -450185862515310464LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x329 = INT64_MAX;
	int16_t x330 = -1;
	volatile int32_t x331 = -1;
	static int64_t x332 = INT64_MIN;
	int64_t t4 = -9931763334234194LL;

    t4 = ((x329<<(x330^x331))^x332);

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x406 = UINT64_MAX;
	volatile int8_t x407 = -13;
	int32_t t5 = -8;

    t5 = ((x405<<(x406^x407))^x408);

    if (t5 != -1044481) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x497 = 1377U;
	int8_t x499 = INT8_MIN;
	uint8_t x500 = 0U;

    t6 = ((x497<<(x498^x499))^x500);

    if (t6 != 1377) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x510 = -1;
	uint32_t x511 = UINT32_MAX;
	int64_t x512 = -96891LL;
	int64_t t7 = 50606275070LL;

    t7 = ((x509<<(x510^x511))^x512);

    if (t7 != -96892LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x633 = UINT64_MAX;
	int16_t x634 = INT16_MIN;
	uint64_t x636 = 19809427093LLU;
	uint64_t t8 = 13LLU;

    t8 = ((x633<<(x634^x635))^x636);

    if (t8 != 18446744053900124522LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x705 = INT16_MAX;
	int16_t x706 = INT16_MIN;
	static int16_t x707 = INT16_MIN;

    t9 = ((x705<<(x706^x707))^x708);

    if (t9 != -32641) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x825 = 4U;
	uint8_t x826 = UINT8_MAX;
	uint8_t x827 = UINT8_MAX;
	int64_t x828 = INT64_MAX;
	static volatile int64_t t10 = -627124083LL;

    t10 = ((x825<<(x826^x827))^x828);

    if (t10 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x1046 = 6;
	volatile uint16_t x1047 = 2U;
	int32_t x1048 = INT32_MIN;
	int32_t t11 = -160794531;

    t11 = ((x1045<<(x1046^x1047))^x1048);

    if (t11 != -2147472224) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint8_t x1053 = 6U;
	volatile int16_t x1054 = 6;
	int8_t x1055 = 0;
	int16_t x1056 = -1;
	int32_t t12 = 1017;

    t12 = ((x1053<<(x1054^x1055))^x1056);

    if (t12 != -385) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x1093 = 10U;
	int16_t x1094 = INT16_MIN;
	int16_t x1095 = INT16_MIN;
	static volatile int16_t x1096 = INT16_MIN;
	int32_t t13 = 1244;

    t13 = ((x1093<<(x1094^x1095))^x1096);

    if (t13 != -32758) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x1141 = 14863317;
	volatile int64_t x1142 = INT64_MAX;
	static volatile int64_t x1143 = INT64_MAX;
	int8_t x1144 = 6;
	int32_t t14 = 22;

    t14 = ((x1141<<(x1142^x1143))^x1144);

    if (t14 != 14863315) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x1345 = 17537U;
	int32_t x1346 = 5;
	int16_t x1347 = 8;
	int16_t x1348 = INT16_MAX;
	int32_t t15 = -19;

    t15 = ((x1345<<(x1346^x1347))^x1348);

    if (t15 != 143679487) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x1373 = 228650498670434LLU;
	static uint16_t x1375 = 34U;
	int64_t x1376 = 1565118732764LL;
	uint64_t t16 = 180445972LLU;

    t16 = ((x1373<<(x1374^x1375))^x1376);

    if (t16 != 12015041506430196188LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x1537 = 624722LLU;
	uint32_t x1538 = UINT32_MAX;
	int16_t x1539 = -1;
	static volatile uint16_t x1540 = 7U;
	static volatile uint64_t t17 = 29340722810LLU;

    t17 = ((x1537<<(x1538^x1539))^x1540);

    if (t17 != 624725LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1553 = UINT16_MAX;
	static int16_t x1554 = 11;
	static uint8_t x1555 = 2U;
	volatile int16_t x1556 = 15;
	int32_t t18 = 2013;

    t18 = ((x1553<<(x1554^x1555))^x1556);

    if (t18 != 33553935) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x1665 = 0U;
	static volatile int32_t x1667 = -1;
	static int32_t t19 = -291;

    t19 = ((x1665<<(x1666^x1667))^x1668);

    if (t19 != 255) { NG(); } else { ; }
	
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

