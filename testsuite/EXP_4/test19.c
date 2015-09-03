#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x129 = UINT32_MAX;
int16_t x168 = -14;
volatile uint64_t t2 = 466324LLU;
int16_t x392 = INT16_MAX;
volatile int8_t x687 = 1;
volatile uint64_t t4 = 420895474LLU;
volatile uint32_t t6 = 5009810U;


void f0(void) {
	static volatile int16_t x130 = 21;
	volatile int8_t x131 = -1;
	static int64_t x132 = -1LL;
	static uint32_t t0 = 12U;

	t0 = (x129<<(x130-(x131+x132)));

	if (t0 != 4286578688U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x141 = 14U;
	int16_t x142 = -1;
	int8_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	static int32_t t1 = 309;

	t1 = (x141<<(x142-(x143+x144)));

	if (t1 != 28) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x165 = UINT64_MAX;
	uint32_t x166 = UINT32_MAX;
	int8_t x167 = -1;

	t2 = (x165<<(x166-(x167+x168)));

	if (t2 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x389 = 1LL;
	volatile int16_t x390 = INT16_MAX;
	static uint64_t x391 = UINT64_MAX;
	volatile int64_t t3 = 64731146337793399LL;

	t3 = (x389<<(x390-(x391+x392)));

	if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x685 = 25314LLU;
	int8_t x686 = 0;
	uint32_t x688 = UINT32_MAX;

	t4 = (x685<<(x686-(x687+x688)));

	if (t4 != 25314LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x857 = 157579U;
	uint16_t x858 = 24U;
	static volatile uint8_t x859 = 12U;
	uint64_t x860 = UINT64_MAX;
	uint32_t t5 = 93U;

	t5 = (x857<<(x858-(x859+x860)));

	if (t5 != 1290887168U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x1161 = UINT32_MAX;
	static uint8_t x1162 = 3U;
	int8_t x1163 = -25;
	int16_t x1164 = -1;

	t6 = (x1161<<(x1162-(x1163+x1164)));

	if (t6 != 3758096384U) { NG(); } else { ; }
	
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

