#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x166 = 4U;
int32_t x168 = 957859904;
volatile int64_t x493 = INT64_MAX;
int16_t x654 = 1;
int64_t x656 = 20319613LL;
static uint64_t x739 = 317427964340LLU;
volatile uint64_t t4 = 60231563163423LLU;
int64_t x748 = INT64_MAX;


void f0(void) {
	int16_t x165 = 102;
	uint16_t x167 = 25750U;
	static volatile int32_t t0 = 1;

	t0 = (x165<<(x166/(x167<=x168)));

	if (t0 != 1632) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x494 = 0U;
	int16_t x495 = -1;
	int64_t x496 = -1LL;
	static int64_t t1 = INT64_MAX;

	t1 = (x493<<(x494/(x495<=x496)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x505 = 11U;
	volatile uint64_t x506 = 2LLU;
	int8_t x507 = INT8_MIN;
	int16_t x508 = 3116;
	int32_t t2 = 843;

	t2 = (x505<<(x506/(x507<=x508)));

	if (t2 != 44) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x653 = UINT8_MAX;
	static int8_t x655 = -1;
	int32_t t3 = -4;

	t3 = (x653<<(x654/(x655<=x656)));

	if (t3 != 510) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x737 = 801644290LLU;
	uint32_t x738 = 1U;
	static int32_t x740 = -37265;

	t4 = (x737<<(x738/(x739<=x740)));

	if (t4 != 1603288580LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x745 = 854460;
	volatile uint64_t x746 = 1LLU;
	int8_t x747 = -5;
	volatile int32_t t5 = 2684;

	t5 = (x745<<(x746/(x747<=x748)));

	if (t5 != 1708920) { NG(); } else { ; }
	
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

