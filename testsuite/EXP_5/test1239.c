#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 13061228;
volatile int64_t x200 = -372551089739945172LL;
int16_t x299 = -1;
int32_t x300 = INT32_MAX;


void f0(void) {
	static volatile int16_t x65 = -1;
	static uint32_t x66 = UINT32_MAX;
	int16_t x67 = -1;
	static volatile int8_t x68 = INT8_MIN;

	t0 = (x65/((x66==x67)%x68));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x197 = 3213269994466673LLU;
	uint64_t x198 = UINT64_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile uint64_t t1 = 14LLU;

	t1 = (x197/((x198==x199)%x200));

	if (t1 != 3213269994466673LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x297 = 1416U;
	uint32_t x298 = UINT32_MAX;
	volatile int32_t t2 = -126998;

	t2 = (x297/((x298==x299)%x300));

	if (t2 != 1416) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x485 = -1;
	int16_t x486 = INT16_MIN;
	int16_t x487 = INT16_MIN;
	int64_t x488 = INT64_MIN;
	volatile int64_t t3 = 10114967954LL;

	t3 = (x485/((x486==x487)%x488));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x493 = INT32_MIN;
	static int16_t x494 = -1;
	int8_t x495 = -1;
	static uint64_t x496 = 143081421371074632LLU;
	uint64_t t4 = 424557538353768803LLU;

	t4 = (x493/((x494==x495)%x496));

	if (t4 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x497 = 0LLU;
	volatile int16_t x498 = INT16_MIN;
	static int16_t x499 = INT16_MIN;
	uint64_t x500 = UINT64_MAX;
	uint64_t t5 = 37282482LLU;

	t5 = (x497/((x498==x499)%x500));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();


    return 0;
}

