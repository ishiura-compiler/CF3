#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x36 = 5U;
static uint16_t x88 = 9U;
static volatile uint64_t t2 = 1LLU;


void f0(void) {
	uint8_t x33 = 55U;
	static uint8_t x34 = UINT8_MAX;
	uint8_t x35 = 64U;
	static int32_t t0 = -3;

	t0 = ((x33<<(x34/x35))<<x36);

	if (t0 != 14080) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x85 = INT8_MAX;
	static uint64_t x86 = 2LLU;
	uint32_t x87 = 3458U;
	volatile int32_t t1 = 958282112;

	t1 = ((x85<<(x86/x87))<<x88);

	if (t1 != 65024) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x89 = 293761007722LLU;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MAX;
	int8_t x92 = 41;

	t2 = ((x89<<(x90/x91))<<x92);

	if (t2 != 756837833863331840LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x121 = UINT8_MAX;
	static int32_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = 1;
	int32_t t3 = -99699043;

	t3 = ((x121<<(x122/x123))<<x124);

	if (t3 != 510) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x417 = 6;
	volatile int16_t x418 = INT16_MAX;
	int32_t x419 = INT32_MIN;
	int8_t x420 = 28;
	volatile int32_t t4 = -15271;

	t4 = ((x417<<(x418/x419))<<x420);

	if (t4 != 1610612736) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

