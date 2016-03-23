
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

uint64_t t0 = 19827683439454LLU;
int32_t x202 = INT32_MIN;
uint8_t x315 = 7U;
int8_t x613 = INT8_MAX;
uint64_t x963 = 35643000267766668LLU;
static uint16_t x964 = 25U;
int16_t x966 = INT16_MIN;
static uint32_t x1019 = 30178689U;
volatile int32_t t9 = -1;
int8_t x1031 = INT8_MAX;
volatile int32_t t10 = -1;
uint8_t x1092 = 1U;
int8_t x1686 = INT8_MAX;
int16_t x1689 = INT16_MAX;
int16_t x1691 = INT16_MIN;
volatile uint8_t x1692 = 2U;
static int64_t x1741 = 1911524619LL;
int64_t t16 = 52LL;


void f0(void) {
    	uint64_t x41 = 125436067LLU;
	static int16_t x42 = -1;
	int64_t x43 = INT64_MIN;
	uint32_t x44 = 26U;

    t0 = ((x41/(x42>x43))>>x44);

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x201 = INT32_MAX;
	uint64_t x203 = 44409362484LLU;
	volatile int16_t x204 = 0;
	volatile int32_t t1 = INT32_MAX;

    t1 = ((x201/(x202>x203))>>x204);

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x313 = INT8_MAX;
	volatile uint32_t x314 = UINT32_MAX;
	int8_t x316 = 0;
	int32_t t2 = 5977261;

    t2 = ((x313/(x314>x315))>>x316);

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x525 = 5U;
	volatile int64_t x526 = INT64_MAX;
	volatile int32_t x527 = INT32_MIN;
	uint16_t x528 = 1U;
	int32_t t3 = 1;

    t3 = ((x525/(x526>x527))>>x528);

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x614 = -1;
	int16_t x615 = INT16_MIN;
	uint8_t x616 = 19U;
	int32_t t4 = 263;

    t4 = ((x613/(x614>x615))>>x616);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x961 = 2U;
	int32_t x962 = -148739;
	int32_t t5 = 0;

    t5 = ((x961/(x962>x963))>>x964);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x965 = 229575048734686LLU;
	volatile uint32_t x967 = 67302686U;
	uint8_t x968 = 6U;
	volatile uint64_t t6 = 5104164LLU;

    t6 = ((x965/(x966>x967))>>x968);

    if (t6 != 3587110136479LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x989 = INT32_MAX;
	int64_t x990 = INT64_MAX;
	int8_t x991 = INT8_MAX;
	int8_t x992 = 0;
	volatile int32_t t7 = INT32_MAX;

    t7 = ((x989/(x990>x991))>>x992);

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x1017 = UINT32_MAX;
	static volatile uint64_t x1018 = UINT64_MAX;
	static volatile uint8_t x1020 = 1U;
	volatile uint32_t t8 = 5457956U;

    t8 = ((x1017/(x1018>x1019))>>x1020);

    if (t8 != 2147483647U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x1021 = 33U;
	volatile uint8_t x1022 = 101U;
	int16_t x1023 = -6304;
	volatile uint8_t x1024 = 5U;

    t9 = ((x1021/(x1022>x1023))>>x1024);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x1029 = 3;
	int64_t x1030 = INT64_MAX;
	static uint16_t x1032 = 22U;

    t10 = ((x1029/(x1030>x1031))>>x1032);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x1089 = 8U;
	volatile int64_t x1090 = INT64_MAX;
	volatile int8_t x1091 = INT8_MIN;
	volatile int32_t t11 = -4280358;

    t11 = ((x1089/(x1090>x1091))>>x1092);

    if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x1093 = 5250421U;
	uint64_t x1094 = UINT64_MAX;
	int16_t x1095 = INT16_MAX;
	int64_t x1096 = 9LL;
	volatile uint32_t t12 = 801279498U;

    t12 = ((x1093/(x1094>x1095))>>x1096);

    if (t12 != 10254U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x1317 = 1U;
	int8_t x1318 = INT8_MIN;
	int32_t x1319 = INT32_MIN;
	static int32_t x1320 = 1;
	int32_t t13 = -6;

    t13 = ((x1317/(x1318>x1319))>>x1320);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1685 = 461697300U;
	int16_t x1687 = INT16_MIN;
	uint8_t x1688 = 0U;
	static volatile uint32_t t14 = 6990U;

    t14 = ((x1685/(x1686>x1687))>>x1688);

    if (t14 != 461697300U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x1690 = INT32_MAX;
	volatile int32_t t15 = -140573793;

    t15 = ((x1689/(x1690>x1691))>>x1692);

    if (t15 != 8191) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x1742 = INT64_MAX;
	static uint32_t x1743 = 30U;
	uint8_t x1744 = 14U;

    t16 = ((x1741/(x1742>x1743))>>x1744);

    if (t16 != 116670LL) { NG(); } else { ; }
	
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

