#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x89 = 444U;
int16_t x91 = 2;
int32_t t0 = 7;
static uint8_t x203 = 5U;
static volatile int8_t x429 = INT8_MIN;
volatile int32_t x431 = 1;
static int32_t x927 = 1;
volatile int32_t t4 = 471041;
static int8_t x995 = 0;
static volatile uint8_t x996 = 4U;


void f0(void) {
	volatile uint8_t x90 = 9U;
	int8_t x92 = 0;

	t0 = (((x89&x90)<<x91)<<x92);

	if (t0 != 32) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x201 = 2874U;
	uint8_t x202 = 120U;
	int16_t x204 = 3;
	static uint32_t t1 = 157U;

	t1 = (((x201&x202)<<x203)<<x204);

	if (t1 != 14336U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x430 = 390;
	uint32_t x432 = 1U;
	volatile int32_t t2 = -118410;

	t2 = (((x429&x430)<<x431)<<x432);

	if (t2 != 1536) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x593 = UINT8_MAX;
	static uint32_t x594 = 2U;
	static uint32_t x595 = 0U;
	static int64_t x596 = 1LL;
	static uint32_t t3 = 28479208U;

	t3 = (((x593&x594)<<x595)<<x596);

	if (t3 != 4U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x925 = -1;
	uint16_t x926 = UINT16_MAX;
	volatile uint8_t x928 = 3U;

	t4 = (((x925&x926)<<x927)<<x928);

	if (t4 != 1048560) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x993 = UINT16_MAX;
	uint64_t x994 = 34203070546408673LLU;
	volatile uint64_t t5 = 4245LLU;

	t5 = (((x993&x994)<<x995)<<x996);

	if (t5 != 478736LLU) { NG(); } else { ; }
	
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

