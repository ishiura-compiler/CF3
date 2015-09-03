#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x236 = 17;
uint8_t x344 = 2U;


void f0(void) {
	int16_t x177 = INT16_MAX;
	int8_t x178 = 1;
	volatile uint8_t x179 = 4U;
	int32_t x180 = 0;
	int32_t t0 = 0;

	t0 = (((x177<<x178)<x179)<<x180);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x233 = 1002LLU;
	uint16_t x234 = 11U;
	int16_t x235 = -1;
	int32_t t1 = -728;

	t1 = (((x233<<x234)<x235)<<x236);

	if (t1 != 131072) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x341 = UINT32_MAX;
	int8_t x342 = 0;
	volatile uint32_t x343 = 1U;
	int32_t t2 = -60846557;

	t2 = (((x341<<x342)<x343)<<x344);

	if (t2 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();


    return 0;
}

