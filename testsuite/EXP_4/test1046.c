#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x41 = 0;
volatile uint16_t x44 = 10U;
volatile int32_t t1 = INT32_MAX;
uint32_t x260 = 4U;
volatile uint8_t x267 = 1U;
uint32_t x268 = 14U;
int8_t x466 = -45;
static volatile int32_t t4 = 90147970;


void f0(void) {
	uint8_t x42 = 19U;
	static uint16_t x43 = 0U;
	int32_t t0 = 1;

	t0 = (x41<<(x42*(x43>>x44)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = INT64_MIN;
	uint32_t x107 = 1722U;
	static uint8_t x108 = 29U;

	t1 = (x105<<(x106*(x107>>x108)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x257 = INT8_MAX;
	volatile uint8_t x258 = 0U;
	uint64_t x259 = 34905334804393LLU;
	int32_t t2 = -45;

	t2 = (x257<<(x258*(x259>>x260)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x265 = 337U;
	volatile int8_t x266 = INT8_MAX;
	volatile int32_t t3 = 0;

	t3 = (x265<<(x266*(x267>>x268)));

	if (t3 != 337) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x465 = 664;
	static uint32_t x467 = 1U;
	volatile uint8_t x468 = 7U;

	t4 = (x465<<(x466*(x467>>x468)));

	if (t4 != 664) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

