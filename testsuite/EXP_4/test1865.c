#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x318 = 1;
volatile uint32_t x402 = 1U;
static uint64_t x619 = UINT64_MAX;
int16_t x764 = INT16_MIN;
int64_t x817 = 6692783LL;
volatile uint64_t x818 = UINT64_MAX;
static uint64_t x989 = UINT64_MAX;
static volatile uint64_t t7 = 1235073790LLU;


void f0(void) {
	volatile uint8_t x141 = UINT8_MAX;
	uint32_t x142 = UINT32_MAX;
	volatile uint8_t x143 = 6U;
	uint32_t x144 = 5U;
	volatile int32_t t0 = -24;

	t0 = (x141<<(x142+(x143|x144)));

	if (t0 != 16320) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int16_t x319 = INT16_MIN;
	int8_t x320 = -1;
	int32_t t1 = 2128371;

	t1 = (x317<<(x318+(x319|x320)));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x401 = 829918803U;
	int64_t x403 = -1LL;
	static int32_t x404 = -1;
	static volatile uint32_t t2 = 420840423U;

	t2 = (x401<<(x402+(x403|x404)));

	if (t2 != 829918803U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x501 = 3U;
	uint16_t x502 = 1U;
	int64_t x503 = -1LL;
	int8_t x504 = -1;
	volatile int32_t t3 = 1520;

	t3 = (x501<<(x502+(x503|x504)));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x617 = UINT8_MAX;
	static uint16_t x618 = 3U;
	static int64_t x620 = INT64_MIN;
	int32_t t4 = 1;

	t4 = (x617<<(x618+(x619|x620)));

	if (t4 != 1020) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x761 = UINT32_MAX;
	static volatile uint8_t x762 = 6U;
	int8_t x763 = -1;
	static uint32_t t5 = 73647U;

	t5 = (x761<<(x762+(x763|x764)));

	if (t5 != 4294967264U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x819 = 1U;
	int16_t x820 = 0;
	static volatile int64_t t6 = -1LL;

	t6 = (x817<<(x818+(x819|x820)));

	if (t6 != 6692783LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x990 = 25U;
	static uint16_t x991 = 2U;
	uint64_t x992 = UINT64_MAX;

	t7 = (x989<<(x990+(x991|x992)));

	if (t7 != 18446744073692774400LLU) { NG(); } else { ; }
	
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

