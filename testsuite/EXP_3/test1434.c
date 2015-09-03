#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 7;
uint64_t x4 = 35796836481LLU;
static uint32_t x274 = 0U;
static uint16_t x529 = 15292U;
int64_t x785 = INT64_MAX;
uint32_t x787 = 1857084U;
int8_t x1165 = 5;
int16_t x1168 = 131;
int8_t x1494 = 1;
int8_t x1795 = -1;
int32_t t11 = -423271873;


void f0(void) {
	uint32_t x1 = 0U;
	uint8_t x3 = 29U;
	volatile uint32_t t0 = 26569U;

	t0 = ((x1>>x2)/(x3<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x177 = 60681527373LL;
	uint64_t x178 = 1LLU;
	uint8_t x179 = 0U;
	volatile uint64_t x180 = UINT64_MAX;
	volatile int64_t t1 = 3778409586411LL;

	t1 = ((x177>>x178)/(x179<x180));

	if (t1 != 30340763686LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x273 = INT32_MAX;
	volatile int64_t x275 = INT64_MIN;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t2 = INT32_MAX;

	t2 = ((x273>>x274)/(x275<x276));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x530 = 3U;
	static uint8_t x531 = 127U;
	uint32_t x532 = 311U;
	volatile int32_t t3 = -872728;

	t3 = ((x529>>x530)/(x531<x532));

	if (t3 != 1911) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x786 = 4U;
	int64_t x788 = INT64_MAX;
	static int64_t t4 = 0LL;

	t4 = ((x785>>x786)/(x787<x788));

	if (t4 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x1166 = 13U;
	int64_t x1167 = -26LL;
	volatile int32_t t5 = -400976;

	t5 = ((x1165>>x1166)/(x1167<x1168));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x1317 = 12U;
	int32_t x1318 = 0;
	uint16_t x1319 = 0U;
	int64_t x1320 = 18783450253559LL;
	volatile int32_t t6 = -2054810;

	t6 = ((x1317>>x1318)/(x1319<x1320));

	if (t6 != 12) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x1493 = UINT16_MAX;
	int8_t x1495 = -2;
	volatile int16_t x1496 = INT16_MAX;
	volatile int32_t t7 = -1;

	t7 = ((x1493>>x1494)/(x1495<x1496));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x1525 = 1018548;
	volatile uint8_t x1526 = 26U;
	int32_t x1527 = INT32_MIN;
	int64_t x1528 = -1LL;
	int32_t t8 = 109103742;

	t8 = ((x1525>>x1526)/(x1527<x1528));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x1589 = UINT32_MAX;
	volatile uint8_t x1590 = 1U;
	int32_t x1591 = INT32_MIN;
	int32_t x1592 = 280384;
	uint32_t t9 = 10377U;

	t9 = ((x1589>>x1590)/(x1591<x1592));

	if (t9 != 2147483647U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1641 = UINT16_MAX;
	int8_t x1642 = 28;
	static volatile int16_t x1643 = 1;
	static uint16_t x1644 = 9U;
	int32_t t10 = 27;

	t10 = ((x1641>>x1642)/(x1643<x1644));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1793 = 0;
	uint8_t x1794 = 3U;
	volatile int16_t x1796 = INT16_MAX;

	t11 = ((x1793>>x1794)/(x1795<x1796));

	if (t11 != 0) { NG(); } else { ; }
	
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


    return 0;
}

