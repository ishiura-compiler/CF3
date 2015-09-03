#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x326 = 27U;
int32_t x327 = -65484519;
uint8_t x520 = 0U;
static int64_t x856 = 12LL;


void f0(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MAX;
	int32_t x251 = INT32_MIN;
	volatile uint8_t x252 = 4U;
	static volatile int32_t t0 = 2360230;

	t0 = ((x249>>(x250&x251))<<x252);

	if (t0 != 4080) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x325 = 3U;
	static volatile int64_t x328 = 1LL;
	static volatile int32_t t1 = -3587555;

	t1 = ((x325>>(x326&x327))<<x328);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x369 = 1007483U;
	volatile int32_t x370 = -10;
	static volatile int16_t x371 = 19;
	volatile uint16_t x372 = 1U;
	uint32_t t2 = 0U;

	t2 = ((x369>>(x370&x371))<<x372);

	if (t2 != 6U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x473 = UINT32_MAX;
	static volatile int16_t x474 = 14;
	static volatile int16_t x475 = 0;
	volatile int8_t x476 = 1;
	volatile uint32_t t3 = 2190409U;

	t3 = ((x473>>(x474&x475))<<x476);

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x517 = 2492U;
	int8_t x518 = INT8_MAX;
	static int32_t x519 = INT32_MIN;
	volatile uint32_t t4 = 27U;

	t4 = ((x517>>(x518&x519))<<x520);

	if (t4 != 2492U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x561 = 1837U;
	uint64_t x562 = UINT64_MAX;
	static uint8_t x563 = 10U;
	uint16_t x564 = 7U;
	int32_t t5 = -5673;

	t5 = ((x561>>(x562&x563))<<x564);

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x565 = UINT64_MAX;
	int8_t x566 = 4;
	uint32_t x567 = UINT32_MAX;
	int8_t x568 = 6;
	volatile uint64_t t6 = 21LLU;

	t6 = ((x565>>(x566&x567))<<x568);

	if (t6 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x853 = 7966;
	uint8_t x854 = 0U;
	uint64_t x855 = 7595600LLU;
	volatile int32_t t7 = 126114;

	t7 = ((x853>>(x854&x855))<<x856);

	if (t7 != 32628736) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x869 = UINT64_MAX;
	volatile int8_t x870 = 5;
	static uint64_t x871 = UINT64_MAX;
	uint16_t x872 = 0U;
	uint64_t t8 = 866417LLU;

	t8 = ((x869>>(x870&x871))<<x872);

	if (t8 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x973 = INT16_MAX;
	int64_t x974 = INT64_MIN;
	volatile int32_t x975 = INT32_MAX;
	int8_t x976 = 0;
	volatile int32_t t9 = -11179;

	t9 = ((x973>>(x974&x975))<<x976);

	if (t9 != 32767) { NG(); } else { ; }
	
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


    return 0;
}

