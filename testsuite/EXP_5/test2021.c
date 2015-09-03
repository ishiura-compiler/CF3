#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x48 = UINT32_MAX;
static int16_t x85 = INT16_MAX;
int32_t t1 = -14;
int32_t t2 = 1007019672;
static uint64_t x173 = UINT64_MAX;
int64_t x442 = INT64_MIN;


void f0(void) {
	volatile uint64_t x45 = 2LLU;
	int8_t x46 = -1;
	volatile uint16_t x47 = 844U;
	volatile uint64_t t0 = 23858342478746925LLU;

	t0 = (x45<<((x46|x47)^x48));

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x86 = UINT32_MAX;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = -1;

	t1 = (x85<<((x86|x87)^x88));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = -1;
	uint64_t x99 = 5980611241927468LLU;
	volatile uint64_t x100 = UINT64_MAX;

	t2 = (x97<<((x98|x99)^x100));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x174 = INT64_MIN;
	int64_t x175 = -1LL;
	static int32_t x176 = -5;
	static uint64_t t3 = 63462274596LLU;

	t3 = (x173<<((x174|x175)^x176));

	if (t3 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x241 = 287948LLU;
	uint8_t x242 = 32U;
	volatile int16_t x243 = -1;
	uint32_t x244 = UINT32_MAX;
	volatile uint64_t t4 = 7LLU;

	t4 = (x241<<((x242|x243)^x244));

	if (t4 != 287948LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x441 = INT16_MAX;
	static uint64_t x443 = UINT64_MAX;
	int8_t x444 = -1;
	static int32_t t5 = 7121;

	t5 = (x441<<((x442|x443)^x444));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x453 = 2LLU;
	uint16_t x454 = UINT16_MAX;
	uint32_t x455 = UINT32_MAX;
	int8_t x456 = -1;
	uint64_t t6 = 12307902911LLU;

	t6 = (x453<<((x454|x455)^x456));

	if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x493 = 3U;
	static int8_t x494 = -7;
	int16_t x495 = 10275;
	static int16_t x496 = -1;
	volatile int32_t t7 = -209911616;

	t7 = (x493<<((x494|x495)^x496));

	if (t7 != 48) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x629 = 257015U;
	int8_t x630 = INT8_MIN;
	int32_t x631 = 1022;
	uint32_t x632 = UINT32_MAX;
	uint32_t t8 = 46U;

	t8 = (x629<<((x630|x631)^x632));

	if (t8 != 514030U) { NG(); } else { ; }
	
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

