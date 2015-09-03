#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x14 = -1;
uint8_t x93 = 31U;
uint16_t x191 = UINT16_MAX;
static int32_t x192 = 0;
int16_t x270 = -1;
static uint8_t x271 = 61U;
volatile int16_t x277 = INT16_MIN;
uint16_t x319 = UINT16_MAX;
int8_t x320 = 3;
static uint32_t x345 = 37U;
int32_t x347 = 1949919;


void f0(void) {
	static uint16_t x13 = 30740U;
	uint64_t x15 = UINT64_MAX;
	uint8_t x16 = 2U;
	volatile uint64_t t0 = 1571LLU;

	t0 = ((x13+x14)&(x15<<x16));

	if (t0 != 30736LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x29 = INT32_MIN;
	uint16_t x30 = UINT16_MAX;
	static uint8_t x31 = UINT8_MAX;
	volatile uint8_t x32 = 3U;
	int32_t t1 = -19;

	t1 = ((x29+x30)&(x31<<x32));

	if (t1 != 2040) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x81 = -1;
	int32_t x82 = -1;
	static uint16_t x83 = 0U;
	uint8_t x84 = 0U;
	int32_t t2 = -253301;

	t2 = ((x81+x82)&(x83<<x84));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x94 = -71;
	uint32_t x95 = 1U;
	volatile uint16_t x96 = 0U;
	volatile uint32_t t3 = 701U;

	t3 = ((x93+x94)&(x95<<x96));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x189 = INT64_MIN;
	uint32_t x190 = UINT32_MAX;
	volatile int64_t t4 = 309425835925LL;

	t4 = ((x189+x190)&(x191<<x192));

	if (t4 != 65535LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x269 = INT32_MAX;
	uint64_t x272 = 13LLU;
	static volatile int32_t t5 = 12149;

	t5 = ((x269+x270)&(x271<<x272));

	if (t5 != 499712) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x278 = -1;
	uint8_t x279 = 125U;
	volatile int8_t x280 = 0;
	static volatile int32_t t6 = 0;

	t6 = ((x277+x278)&(x279<<x280));

	if (t6 != 125) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x317 = -2636239;
	volatile int16_t x318 = -1;
	static int32_t t7 = 26942;

	t7 = ((x317+x318)&(x319<<x320));

	if (t7 != 509488) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x346 = 2;
	int8_t x348 = 1;
	uint32_t t8 = 248U;

	t8 = ((x345+x346)&(x347<<x348));

	if (t8 != 38U) { NG(); } else { ; }
	
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

