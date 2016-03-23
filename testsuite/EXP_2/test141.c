
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

int8_t x102 = -1;
static volatile uint16_t x280 = 6U;
volatile uint64_t x320 = 466LLU;
volatile uint64_t x629 = UINT64_MAX;
int32_t x1032 = INT32_MIN;
static int32_t x1536 = -1;
volatile uint64_t t9 = 1238235LLU;
uint8_t x1666 = 10U;
uint32_t x1798 = UINT32_MAX;
int8_t x1799 = 1;
int64_t x1800 = INT64_MIN;
int64_t x1915 = 0LL;
uint8_t x1974 = 1U;
int32_t x2407 = -1;
int64_t x2408 = INT64_MIN;
int64_t t17 = -8359LL;


void f0(void) {
    	volatile int8_t x101 = 22;
	int8_t x103 = 9;
	int64_t x104 = INT64_MIN;
	int64_t t0 = INT64_MIN;

    t0 = ((x101>>(x102+x103))+x104);

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x209 = 235958280U;
	uint16_t x210 = 2U;
	uint64_t x211 = 2LLU;
	int32_t x212 = INT32_MIN;
	uint32_t t1 = 3U;

    t1 = ((x209>>(x210+x211))+x212);

    if (t1 != 2162231040U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x277 = 4881550;
	volatile uint64_t x278 = UINT64_MAX;
	uint8_t x279 = 15U;
	volatile int32_t t2 = -411102041;

    t2 = ((x277>>(x278+x279))+x280);

    if (t2 != 303) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x317 = 2U;
	int16_t x318 = -1;
	int8_t x319 = 4;
	volatile uint64_t t3 = 27210060LLU;

    t3 = ((x317>>(x318+x319))+x320);

    if (t3 != 466LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x630 = -1;
	uint8_t x631 = 14U;
	int8_t x632 = INT8_MIN;
	static uint64_t t4 = 21719839LLU;

    t4 = ((x629>>(x630+x631))+x632);

    if (t4 != 2251799813685119LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x1029 = UINT8_MAX;
	volatile int32_t x1030 = -1;
	static uint8_t x1031 = 12U;
	static volatile int32_t t5 = INT32_MIN;

    t5 = ((x1029>>(x1030+x1031))+x1032);

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x1233 = 5071U;
	int32_t x1234 = -1;
	volatile int8_t x1235 = 1;
	uint8_t x1236 = UINT8_MAX;
	static int32_t t6 = -124956914;

    t6 = ((x1233>>(x1234+x1235))+x1236);

    if (t6 != 5326) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x1393 = 149U;
	uint16_t x1394 = 29U;
	int8_t x1395 = -1;
	static volatile int64_t x1396 = INT64_MIN;
	static int64_t t7 = INT64_MIN;

    t7 = ((x1393>>(x1394+x1395))+x1396);

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x1501 = 3410024667LL;
	uint32_t x1502 = UINT32_MAX;
	uint16_t x1503 = 29U;
	static volatile int32_t x1504 = -323;
	int64_t t8 = 9991247204LL;

    t8 = ((x1501>>(x1502+x1503))+x1504);

    if (t8 != -311LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x1533 = 32767953508LLU;
	volatile int8_t x1534 = 1;
	static int16_t x1535 = -1;

    t9 = ((x1533>>(x1534+x1535))+x1536);

    if (t9 != 32767953507LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x1665 = UINT8_MAX;
	uint16_t x1667 = 0U;
	static volatile int32_t x1668 = INT32_MAX;
	int32_t t10 = INT32_MAX;

    t10 = ((x1665>>(x1666+x1667))+x1668);

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1725 = 299346626767624431LLU;
	uint32_t x1726 = UINT32_MAX;
	uint8_t x1727 = 6U;
	uint16_t x1728 = 1U;
	uint64_t t11 = 9744456928941LLU;

    t11 = ((x1725>>(x1726+x1727))+x1728);

    if (t11 != 9354582086488264LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x1769 = 10;
	int32_t x1770 = -1;
	uint8_t x1771 = 7U;
	int64_t x1772 = INT64_MAX;
	static volatile int64_t t12 = INT64_MAX;

    t12 = ((x1769>>(x1770+x1771))+x1772);

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1797 = INT8_MAX;
	volatile int64_t t13 = 15828777293350LL;

    t13 = ((x1797>>(x1798+x1799))+x1800);

    if (t13 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1913 = INT64_MAX;
	uint32_t x1914 = 31U;
	int64_t x1916 = INT64_MIN;
	int64_t t14 = -57718554LL;

    t14 = ((x1913>>(x1914+x1915))+x1916);

    if (t14 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1973 = 11U;
	volatile int8_t x1975 = 0;
	static uint32_t x1976 = 199871890U;
	volatile uint32_t t15 = 132U;

    t15 = ((x1973>>(x1974+x1975))+x1976);

    if (t15 != 199871895U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x2241 = 14216;
	uint64_t x2242 = UINT64_MAX;
	int8_t x2243 = 2;
	int8_t x2244 = INT8_MAX;
	volatile int32_t t16 = -43579103;

    t16 = ((x2241>>(x2242+x2243))+x2244);

    if (t16 != 7235) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x2405 = 40250U;
	uint32_t x2406 = 1U;

    t17 = ((x2405>>(x2406+x2407))+x2408);

    if (t17 != -9223372036854735558LL) { NG(); } else { ; }
	
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


    return 0;
}

