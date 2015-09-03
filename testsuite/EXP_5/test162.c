#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x125 = 1;
static uint8_t x126 = 0U;
uint8_t x233 = 7U;
static uint64_t x236 = UINT64_MAX;
volatile uint64_t x546 = UINT64_MAX;
volatile uint64_t x905 = 23497644LLU;
int8_t x907 = -1;
volatile int8_t x1020 = -1;
volatile uint32_t t4 = 401999589U;


void f0(void) {
	uint8_t x127 = 3U;
	int8_t x128 = 1;
	int32_t t0 = 19566;

	t0 = (x125<<((x126+x127)^x128));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x234 = -1;
	int16_t x235 = -1;
	int32_t t1 = -15768;

	t1 = (x233<<((x234+x235)^x236));

	if (t1 != 14) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x545 = 1401736520351LLU;
	uint64_t x547 = UINT64_MAX;
	int64_t x548 = -1LL;
	uint64_t t2 = 85698730294LLU;

	t2 = (x545<<((x546+x547)^x548));

	if (t2 != 2803473040702LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x906 = INT16_MAX;
	int16_t x908 = INT16_MAX;
	volatile uint64_t t3 = 18024455237LLU;

	t3 = (x905<<((x906+x907)^x908));

	if (t3 != 46995288LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x1017 = 192U;
	int32_t x1018 = -25;
	static int16_t x1019 = 1;

	t4 = (x1017<<((x1018+x1019)^x1020));

	if (t4 != 1610612736U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

