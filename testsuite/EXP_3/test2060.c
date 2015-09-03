#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -8923;
uint64_t x34 = 7902953LLU;
volatile uint16_t x41 = 6U;
uint16_t x69 = 17U;
static uint64_t x70 = 59LLU;


void f0(void) {
	volatile uint8_t x13 = 1U;
	static uint16_t x14 = 2256U;
	volatile int8_t x15 = 0;
	int8_t x16 = 1;

	t0 = ((x13*x14)<<(x15^x16));

	if (t0 != 4512) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x33 = 891U;
	int32_t x35 = -1;
	int32_t x36 = -1;
	uint64_t t1 = 1535773124161115LLU;

	t1 = ((x33*x34)<<(x35^x36));

	if (t1 != 7041531123LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x42 = UINT8_MAX;
	static int16_t x43 = -1;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t2 = -71675652;

	t2 = ((x41*x42)<<(x43^x44));

	if (t2 != 1530) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x71 = -96;
	static int8_t x72 = INT8_MIN;
	static volatile uint64_t t3 = 63466LLU;

	t3 = ((x69*x70)<<(x71^x72));

	if (t3 != 4307852197888LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x93 = INT8_MIN;
	int32_t x94 = -1;
	static int8_t x95 = 2;
	uint8_t x96 = 2U;
	int32_t t4 = 3;

	t4 = ((x93*x94)<<(x95^x96));

	if (t4 != 128) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

