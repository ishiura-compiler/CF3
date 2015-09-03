#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x334 = 5U;
uint64_t x405 = 1889675036319706LLU;
int32_t x408 = INT32_MIN;
int32_t t5 = 89226;


void f0(void) {
	uint16_t x329 = UINT16_MAX;
	static volatile uint32_t x330 = 0U;
	int8_t x331 = -1;
	int16_t x332 = 0;
	int32_t t0 = -281;

	t0 = (x329<<(x330<<(x331&x332)));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x333 = 1433758306U;
	int16_t x335 = INT16_MIN;
	uint8_t x336 = 31U;
	volatile uint32_t t1 = 826977064U;

	t1 = (x333<<(x334<<(x335&x336)));

	if (t1 != 2930592832U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x406 = 3U;
	int8_t x407 = INT8_MAX;
	uint64_t t2 = 4305504471199083792LLU;

	t2 = (x405<<(x406<<(x407&x408)));

	if (t2 != 15117400290557648LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x429 = 308834U;
	int16_t x430 = 0;
	int32_t x431 = INT32_MIN;
	uint8_t x432 = UINT8_MAX;
	volatile uint32_t t3 = 271U;

	t3 = (x429<<(x430<<(x431&x432)));

	if (t3 != 308834U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x441 = 1;
	static uint8_t x442 = 26U;
	int16_t x443 = INT16_MIN;
	uint16_t x444 = 6U;
	volatile int32_t t4 = 904;

	t4 = (x441<<(x442<<(x443&x444)));

	if (t4 != 67108864) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x605 = 3895U;
	uint16_t x606 = 7U;
	volatile int64_t x607 = INT64_MIN;
	uint32_t x608 = 921U;

	t5 = (x605<<(x606<<(x607&x608)));

	if (t5 != 498560) { NG(); } else { ; }
	
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

