#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x27 = -1LL;
uint16_t x69 = UINT16_MAX;
int16_t x74 = INT16_MIN;
int32_t t2 = 12276012;
volatile int64_t t5 = -210068188649129884LL;
volatile int64_t x499 = INT64_MIN;
uint64_t x517 = 0LLU;
static volatile int16_t x520 = -1;


void f0(void) {
	static uint16_t x25 = UINT16_MAX;
	uint64_t x26 = UINT64_MAX;
	volatile uint8_t x28 = 38U;
	int32_t t0 = -10899;

	t0 = ((x25<<(x26-x27))-x28);

	if (t0 != 65497) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x70 = -1LL;
	volatile int8_t x71 = -1;
	static int32_t x72 = 53;
	volatile int32_t t1 = 417;

	t1 = ((x69<<(x70-x71))-x72);

	if (t1 != 65482) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x73 = 14U;
	int16_t x75 = INT16_MIN;
	int32_t x76 = 3561;

	t2 = ((x73<<(x74-x75))-x76);

	if (t2 != -3547) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x157 = 1918755U;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	int8_t x160 = -1;
	static uint32_t t3 = 1353134072U;

	t3 = ((x157<<(x158-x159))-x160);

	if (t3 != 1918756U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x201 = 7602982LL;
	int16_t x202 = INT16_MIN;
	volatile int16_t x203 = INT16_MIN;
	static uint64_t x204 = 27160683LLU;
	uint64_t t4 = 10177187568LLU;

	t4 = ((x201<<(x202-x203))-x204);

	if (t4 != 18446744073689993915LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MIN;
	uint16_t x216 = 20543U;

	t5 = ((x213<<(x214-x215))-x216);

	if (t5 != 9223372036854755264LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = 0;
	static uint32_t x379 = UINT32_MAX;
	uint8_t x380 = UINT8_MAX;
	volatile uint32_t t6 = 359063U;

	t6 = ((x377<<(x378-x379))-x380);

	if (t6 != 4294967039U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x497 = UINT32_MAX;
	static int64_t x498 = INT64_MIN;
	volatile uint8_t x500 = 20U;
	volatile uint32_t t7 = 2293U;

	t7 = ((x497<<(x498-x499))-x500);

	if (t7 != 4294967275U) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x518 = 1;
	int8_t x519 = 1;
	uint64_t t8 = 129523847918891LLU;

	t8 = ((x517<<(x518-x519))-x520);

	if (t8 != 1LLU) { NG(); } else { ; }
	
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


    return 0;
}

