#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x64 = -1LL;
int32_t t0 = -8;
int64_t x237 = INT64_MIN;
int32_t x238 = INT32_MAX;


void f0(void) {
	uint16_t x61 = 11U;
	uint16_t x62 = 27022U;
	volatile uint64_t x63 = UINT64_MAX;

	t0 = ((x61|x62)%(x63==x64));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x105 = INT8_MAX;
	uint64_t x106 = 154173377773LLU;
	uint8_t x107 = 1U;
	int8_t x108 = 1;
	volatile uint64_t t1 = 26986244988392LLU;

	t1 = ((x105|x106)%(x107==x108));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x239 = -1;
	int8_t x240 = -1;
	int64_t t2 = 679748224362174999LL;

	t2 = ((x237|x238)%(x239==x240));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x301 = 35;
	int16_t x302 = INT16_MIN;
	uint32_t x303 = UINT32_MAX;
	int8_t x304 = -1;
	volatile int32_t t3 = 14;

	t3 = ((x301|x302)%(x303==x304));

	if (t3 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();


    return 0;
}

