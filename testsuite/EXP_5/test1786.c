#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -1LL;
static int8_t x4 = INT8_MIN;
int64_t x383 = INT64_MAX;
uint8_t x384 = UINT8_MAX;
int16_t x456 = INT16_MIN;
static int8_t x666 = -1;
int64_t t4 = -1263527236613LL;
int32_t x1123 = INT32_MIN;
static int32_t t6 = -658;
static int8_t x1609 = INT8_MIN;
volatile int64_t x1612 = INT64_MIN;
int32_t t10 = -10149801;
int16_t x2152 = -1;
static volatile int32_t t12 = -500603;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x3 = INT8_MIN;
	volatile int64_t t0 = -345165LL;

	t0 = (x1%((x2&x3)==x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x381 = -1LL;
	uint8_t x382 = UINT8_MAX;
	int64_t t1 = 1809923370813412980LL;

	t1 = (x381%((x382&x383)==x384));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x453 = 56U;
	volatile int16_t x454 = INT16_MIN;
	volatile int32_t x455 = -26;
	static volatile int32_t t2 = 76190;

	t2 = (x453%((x454&x455)==x456));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x665 = -1;
	static uint32_t x667 = UINT32_MAX;
	static uint32_t x668 = UINT32_MAX;
	volatile int32_t t3 = -3077695;

	t3 = (x665%((x666&x667)==x668));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x729 = 87221104488LL;
	int32_t x730 = INT32_MIN;
	int32_t x731 = INT32_MIN;
	int32_t x732 = INT32_MIN;

	t4 = (x729%((x730&x731)==x732));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x1121 = UINT16_MAX;
	int64_t x1122 = INT64_MIN;
	volatile int64_t x1124 = INT64_MIN;
	volatile int32_t t5 = -123308417;

	t5 = (x1121%((x1122&x1123)==x1124));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x1209 = -1;
	volatile int16_t x1210 = -1;
	volatile int8_t x1211 = -3;
	static int8_t x1212 = -3;

	t6 = (x1209%((x1210&x1211)==x1212));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x1385 = -1;
	uint8_t x1386 = 5U;
	uint8_t x1387 = 1U;
	int8_t x1388 = 1;
	int32_t t7 = 115397440;

	t7 = (x1385%((x1386&x1387)==x1388));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x1589 = INT8_MAX;
	int8_t x1590 = -1;
	volatile int64_t x1591 = INT64_MIN;
	static int64_t x1592 = INT64_MIN;
	volatile int32_t t8 = -54267;

	t8 = (x1589%((x1590&x1591)==x1592));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x1610 = INT8_MIN;
	int64_t x1611 = INT64_MIN;
	int32_t t9 = 109831138;

	t9 = (x1609%((x1610&x1611)==x1612));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x1801 = 5952;
	volatile int32_t x1802 = -6086151;
	int64_t x1803 = INT64_MIN;
	int64_t x1804 = INT64_MIN;

	t10 = (x1801%((x1802&x1803)==x1804));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x1985 = -1;
	uint8_t x1986 = 0U;
	int16_t x1987 = 6;
	uint8_t x1988 = 0U;
	static volatile int32_t t11 = 80;

	t11 = (x1985%((x1986&x1987)==x1988));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x2149 = -1;
	int16_t x2150 = -1;
	uint64_t x2151 = UINT64_MAX;

	t12 = (x2149%((x2150&x2151)==x2152));

	if (t12 != 0) { NG(); } else { ; }
	
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


    return 0;
}

