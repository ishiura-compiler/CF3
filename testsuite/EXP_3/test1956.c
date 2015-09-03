#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x247 = 8;
int32_t x405 = -965187;
uint8_t x816 = 0U;
int32_t t5 = -271;


void f0(void) {
	volatile uint8_t x245 = 22U;
	int32_t x246 = INT32_MIN;
	uint16_t x248 = 6U;
	volatile int32_t t0 = 1;

	t0 = ((x245==x246)<<(x247|x248));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x257 = -160310859;
	int64_t x258 = INT64_MAX;
	volatile int16_t x259 = 1;
	uint8_t x260 = 0U;
	static volatile int32_t t1 = 208831;

	t1 = ((x257==x258)<<(x259|x260));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x406 = 255U;
	uint8_t x407 = 7U;
	uint32_t x408 = 2U;
	volatile int32_t t2 = 934932248;

	t2 = ((x405==x406)<<(x407|x408));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x453 = UINT64_MAX;
	volatile int16_t x454 = -1;
	int8_t x455 = 6;
	int8_t x456 = 2;
	int32_t t3 = 1;

	t3 = ((x453==x454)<<(x455|x456));

	if (t3 != 64) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x505 = -1;
	uint32_t x506 = 1632709U;
	static uint16_t x507 = 0U;
	uint16_t x508 = 0U;
	volatile int32_t t4 = -30537966;

	t4 = ((x505==x506)<<(x507|x508));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x813 = 15U;
	static int32_t x814 = INT32_MIN;
	int16_t x815 = 13;

	t5 = ((x813==x814)<<(x815|x816));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x1161 = INT16_MIN;
	volatile int32_t x1162 = INT32_MAX;
	uint8_t x1163 = 0U;
	int16_t x1164 = 9;
	volatile int32_t t6 = 12;

	t6 = ((x1161==x1162)<<(x1163|x1164));

	if (t6 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();


    return 0;
}

