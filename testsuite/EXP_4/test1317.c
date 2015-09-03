#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x35 = -1;
volatile int32_t x99 = INT32_MIN;
int64_t t2 = -51016LL;
static uint32_t x399 = UINT32_MAX;
int16_t x665 = INT16_MIN;
int64_t x858 = 797447254733919983LL;
uint32_t x860 = UINT32_MAX;
volatile int32_t x1111 = INT32_MIN;
int16_t x1323 = -1;
int64_t x1458 = INT64_MAX;


void f0(void) {
	uint8_t x33 = 5U;
	int64_t x34 = -1LL;
	uint32_t x36 = UINT32_MAX;
	volatile int64_t t0 = 1815647499123LL;

	t0 = (x33/(x34&(x35==x36)));

	if (t0 != 5LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x97 = 351U;
	int64_t x98 = INT64_MAX;
	int32_t x100 = INT32_MIN;
	volatile int64_t t1 = 27LL;

	t1 = (x97/(x98&(x99==x100)));

	if (t1 != 351LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x141 = -7958306643LL;
	volatile int32_t x142 = -1;
	int8_t x143 = 0;
	int64_t x144 = 0LL;

	t2 = (x141/(x142&(x143==x144)));

	if (t2 != -7958306643LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x293 = INT16_MIN;
	uint32_t x294 = UINT32_MAX;
	uint32_t x295 = UINT32_MAX;
	static int8_t x296 = -1;
	static uint32_t t3 = 6717587U;

	t3 = (x293/(x294&(x295==x296)));

	if (t3 != 4294934528U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int64_t x318 = INT64_MAX;
	static volatile int8_t x319 = -1;
	volatile uint32_t x320 = UINT32_MAX;
	static uint64_t t4 = UINT64_MAX;

	t4 = (x317/(x318&(x319==x320)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MAX;
	static uint32_t x400 = UINT32_MAX;
	int64_t t5 = INT64_MIN;

	t5 = (x397/(x398&(x399==x400)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x666 = -1;
	volatile uint8_t x667 = UINT8_MAX;
	volatile uint8_t x668 = UINT8_MAX;
	int32_t t6 = -11560821;

	t6 = (x665/(x666&(x667==x668)));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x857 = INT16_MIN;
	volatile uint32_t x859 = UINT32_MAX;
	volatile int64_t t7 = 458268201167LL;

	t7 = (x857/(x858&(x859==x860)));

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x1109 = 66U;
	int16_t x1110 = INT16_MAX;
	static int32_t x1112 = INT32_MIN;
	int32_t t8 = -5433804;

	t8 = (x1109/(x1110&(x1111==x1112)));

	if (t8 != 66) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x1241 = 3U;
	int8_t x1242 = -1;
	int8_t x1243 = 13;
	volatile uint8_t x1244 = 13U;
	int32_t t9 = -5;

	t9 = (x1241/(x1242&(x1243==x1244)));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x1321 = UINT16_MAX;
	static int64_t x1322 = 61180593764441LL;
	uint64_t x1324 = UINT64_MAX;
	int64_t t10 = 2115569LL;

	t10 = (x1321/(x1322&(x1323==x1324)));

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x1409 = 3005LL;
	int32_t x1410 = -1479;
	int16_t x1411 = INT16_MIN;
	int16_t x1412 = INT16_MIN;
	int64_t t11 = 44946874488LL;

	t11 = (x1409/(x1410&(x1411==x1412)));

	if (t11 != 3005LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x1457 = -1LL;
	int16_t x1459 = INT16_MIN;
	static int16_t x1460 = INT16_MIN;
	volatile int64_t t12 = -24LL;

	t12 = (x1457/(x1458&(x1459==x1460)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1549 = 10U;
	int32_t x1550 = INT32_MAX;
	volatile uint32_t x1551 = UINT32_MAX;
	int8_t x1552 = -1;
	int32_t t13 = 322165;

	t13 = (x1549/(x1550&(x1551==x1552)));

	if (t13 != 10) { NG(); } else { ; }
	
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


    return 0;
}

