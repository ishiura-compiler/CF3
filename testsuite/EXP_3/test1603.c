#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x114 = 8LL;
int32_t x116 = -1;
static int16_t x279 = INT16_MIN;
uint16_t x423 = UINT16_MAX;
uint64_t x457 = 848LLU;
uint64_t x459 = 8271591405131LLU;
static uint64_t t5 = 7928LLU;


void f0(void) {
	int16_t x113 = INT16_MAX;
	int32_t x115 = INT32_MIN;
	static volatile int32_t t0 = 90297;

	t0 = ((x113>>x114)/(x115<=x116));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x173 = 3174LL;
	uint64_t x174 = 6LLU;
	static int32_t x175 = 211881938;
	static int32_t x176 = INT32_MAX;
	int64_t t1 = -3015728976LL;

	t1 = ((x173>>x174)/(x175<=x176));

	if (t1 != 49LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x265 = INT32_MAX;
	int16_t x266 = 27;
	int8_t x267 = INT8_MIN;
	int8_t x268 = -1;
	int32_t t2 = 33327062;

	t2 = ((x265>>x266)/(x267<=x268));

	if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x277 = INT64_MAX;
	uint8_t x278 = 0U;
	uint64_t x280 = UINT64_MAX;
	static volatile int64_t t3 = INT64_MAX;

	t3 = ((x277>>x278)/(x279<=x280));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x421 = INT64_MAX;
	uint8_t x422 = 37U;
	uint32_t x424 = 1082461503U;
	volatile int64_t t4 = 3556215812434395LL;

	t4 = ((x421>>x422)/(x423<=x424));

	if (t4 != 67108863LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x458 = 3U;
	volatile int8_t x460 = INT8_MIN;

	t5 = ((x457>>x458)/(x459<=x460));

	if (t5 != 106LLU) { NG(); } else { ; }
	
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

