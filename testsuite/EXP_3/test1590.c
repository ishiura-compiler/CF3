#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x140 = UINT32_MAX;
volatile int32_t t2 = 46065811;
static uint8_t x591 = 6U;
static uint32_t x592 = 33675U;
volatile int16_t x879 = 0;
int16_t x880 = 86;
uint32_t x1481 = 9U;
int8_t x1691 = INT8_MIN;
uint16_t x1946 = 3U;
uint16_t x2069 = UINT16_MAX;
static uint8_t x2071 = 25U;
volatile uint32_t x2196 = 743016U;
int32_t x2248 = INT32_MAX;
static int8_t x2254 = 3;
volatile uint32_t t15 = 20719U;


void f0(void) {
	uint32_t x137 = 183652U;
	uint8_t x138 = 25U;
	static uint16_t x139 = UINT16_MAX;
	static volatile uint32_t t0 = 41330446U;

	t0 = ((x137<<x138)/(x139<=x140));

	if (t0 != 3355443200U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x345 = 819U;
	uint16_t x346 = 6U;
	int16_t x347 = -4555;
	int64_t x348 = -1LL;
	int32_t t1 = -18910;

	t1 = ((x345<<x346)/(x347<=x348));

	if (t1 != 52416) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x525 = INT8_MAX;
	volatile uint16_t x526 = 6U;
	int64_t x527 = INT64_MIN;
	static int8_t x528 = INT8_MAX;

	t2 = ((x525<<x526)/(x527<=x528));

	if (t2 != 8128) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x589 = 96U;
	uint16_t x590 = 4U;
	volatile int32_t t3 = 7544310;

	t3 = ((x589<<x590)/(x591<=x592));

	if (t3 != 1536) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x853 = UINT32_MAX;
	uint16_t x854 = 16U;
	int32_t x855 = -1;
	static volatile uint16_t x856 = 1879U;
	static volatile uint32_t t4 = 693U;

	t4 = ((x853<<x854)/(x855<=x856));

	if (t4 != 4294901760U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x877 = 75048186LLU;
	volatile uint8_t x878 = 3U;
	volatile uint64_t t5 = 14639252435LLU;

	t5 = ((x877<<x878)/(x879<=x880));

	if (t5 != 600385488LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x1033 = 97U;
	static volatile uint16_t x1034 = 0U;
	int8_t x1035 = INT8_MIN;
	int32_t x1036 = -113;
	volatile int32_t t6 = -15721747;

	t6 = ((x1033<<x1034)/(x1035<=x1036));

	if (t6 != 97) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x1317 = 10U;
	volatile uint8_t x1318 = 1U;
	int16_t x1319 = INT16_MAX;
	static int32_t x1320 = INT32_MAX;
	int32_t t7 = -219;

	t7 = ((x1317<<x1318)/(x1319<=x1320));

	if (t7 != 20) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x1429 = INT8_MAX;
	static int8_t x1430 = 1;
	int64_t x1431 = INT64_MIN;
	volatile int32_t x1432 = INT32_MIN;
	int32_t t8 = -65023;

	t8 = ((x1429<<x1430)/(x1431<=x1432));

	if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x1482 = 0U;
	int16_t x1483 = INT16_MIN;
	int8_t x1484 = INT8_MIN;
	uint32_t t9 = 14493U;

	t9 = ((x1481<<x1482)/(x1483<=x1484));

	if (t9 != 9U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1689 = 25;
	static volatile int8_t x1690 = 16;
	int32_t x1692 = INT32_MAX;
	static volatile int32_t t10 = 52348;

	t10 = ((x1689<<x1690)/(x1691<=x1692));

	if (t10 != 1638400) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x1945 = 37U;
	int32_t x1947 = INT32_MIN;
	volatile uint8_t x1948 = UINT8_MAX;
	static int32_t t11 = 1;

	t11 = ((x1945<<x1946)/(x1947<=x1948));

	if (t11 != 296) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x2070 = 7LLU;
	static int64_t x2072 = INT64_MAX;
	volatile int32_t t12 = -2453;

	t12 = ((x2069<<x2070)/(x2071<=x2072));

	if (t12 != 8388480) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x2193 = 411U;
	static uint16_t x2194 = 16U;
	volatile int64_t x2195 = INT64_MIN;
	int32_t t13 = -2083;

	t13 = ((x2193<<x2194)/(x2195<=x2196));

	if (t13 != 26935296) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x2245 = INT32_MAX;
	uint64_t x2246 = 0LLU;
	int16_t x2247 = INT16_MIN;
	int32_t t14 = INT32_MAX;

	t14 = ((x2245<<x2246)/(x2247<=x2248));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x2253 = 1U;
	volatile uint64_t x2255 = UINT64_MAX;
	volatile int16_t x2256 = -1;

	t15 = ((x2253<<x2254)/(x2255<=x2256));

	if (t15 != 8U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x2497 = 1U;
	static int8_t x2498 = 28;
	uint16_t x2499 = UINT16_MAX;
	int32_t x2500 = INT32_MAX;
	volatile int32_t t16 = 104;

	t16 = ((x2497<<x2498)/(x2499<=x2500));

	if (t16 != 268435456) { NG(); } else { ; }
	
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
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();


    return 0;
}

