#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x119 = INT16_MIN;
uint32_t x170 = 1015657663U;
int16_t x171 = 1;
int32_t x172 = -1;
int16_t x280 = 10;
volatile uint16_t x293 = 24078U;
int8_t x326 = INT8_MAX;
volatile int64_t x327 = INT64_MIN;
int32_t t5 = 3034;


void f0(void) {
	static uint64_t x13 = 34654897451667718LLU;
	static volatile uint16_t x14 = 1U;
	int64_t x15 = -1LL;
	int64_t x16 = 0LL;
	volatile uint64_t t0 = 8193445LLU;

	t0 = (x13<<((x14&x15)+x16));

	if (t0 != 69309794903335436LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x117 = 192U;
	uint8_t x118 = UINT8_MAX;
	uint32_t x120 = 1U;
	int32_t t1 = -1580529;

	t1 = (x117<<((x118&x119)+x120));

	if (t1 != 384) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x169 = 203598;
	static volatile int32_t t2 = -995359214;

	t2 = (x169<<((x170&x171)+x172));

	if (t2 != 203598) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MIN;
	uint64_t x279 = 77LLU;
	volatile uint32_t t3 = 2U;

	t3 = (x277<<((x278&x279)+x280));

	if (t3 != 4294966272U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x294 = -1;
	uint8_t x295 = 3U;
	int32_t x296 = -1;
	volatile int32_t t4 = -90902;

	t4 = (x293<<((x294&x295)+x296));

	if (t4 != 96312) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x325 = 26U;
	uint8_t x328 = 2U;

	t5 = (x325<<((x326&x327)+x328));

	if (t5 != 104) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x465 = 2U;
	int16_t x466 = -207;
	uint32_t x467 = 16U;
	int8_t x468 = 5;
	int32_t t6 = -1;

	t6 = (x465<<((x466&x467)+x468));

	if (t6 != 4194304) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x521 = UINT16_MAX;
	static uint64_t x522 = 1901391LLU;
	int8_t x523 = 53;
	uint8_t x524 = 0U;
	volatile int32_t t7 = -2455;

	t7 = (x521<<((x522&x523)+x524));

	if (t7 != 2097120) { NG(); } else { ; }
	
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


    return 0;
}

