#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x145 = 437LLU;
volatile int16_t x286 = 2;
uint64_t t2 = 10LLU;
int64_t t3 = -2926157719583972LL;
static uint32_t x549 = 1U;
int32_t x739 = 6;
volatile int32_t t6 = -12067;
uint64_t x1107 = 8633039423525140LLU;
uint64_t x1137 = 203719569LLU;


void f0(void) {
	static uint8_t x37 = 26U;
	volatile int8_t x38 = INT8_MAX;
	volatile int64_t x39 = INT64_MIN;
	static int16_t x40 = 3;
	volatile int32_t t0 = -28;

	t0 = (x37<<((x38&x39)|x40));

	if (t0 != 208) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x146 = INT32_MAX;
	static uint8_t x147 = 23U;
	static int8_t x148 = 0;
	volatile uint64_t t1 = 15337784LLU;

	t1 = (x145<<((x146&x147)|x148));

	if (t1 != 3665821696LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x285 = 554209901396576LLU;
	int8_t x287 = -1;
	uint16_t x288 = 15U;

	t2 = (x285<<((x286&x287)|x288));

	if (t2 != 18160350048963002368LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x293 = 11595320428454LL;
	int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MAX;
	int16_t x296 = 19;

	t3 = (x293<<((x294&x295)|x296));

	if (t3 != 6079287356793290752LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x550 = INT64_MIN;
	int64_t x551 = INT64_MAX;
	int8_t x552 = 0;
	static uint32_t t4 = 87U;

	t4 = (x549<<((x550&x551)|x552));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x737 = UINT8_MAX;
	uint32_t x738 = UINT32_MAX;
	volatile uint16_t x740 = 4U;
	volatile int32_t t5 = 0;

	t5 = (x737<<((x738&x739)|x740));

	if (t5 != 16320) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x1021 = 3712333;
	int8_t x1022 = 0;
	volatile int8_t x1023 = INT8_MAX;
	int32_t x1024 = 3;

	t6 = (x1021<<((x1022&x1023)|x1024));

	if (t6 != 29698664) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x1033 = UINT8_MAX;
	int16_t x1034 = 47;
	int64_t x1035 = INT64_MIN;
	uint16_t x1036 = 7U;
	int32_t t7 = -1030451677;

	t7 = (x1033<<((x1034&x1035)|x1036));

	if (t7 != 32640) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x1105 = 12LLU;
	uint16_t x1106 = 0U;
	uint8_t x1108 = 5U;
	volatile uint64_t t8 = 665142202947404LLU;

	t8 = (x1105<<((x1106&x1107)|x1108));

	if (t8 != 384LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x1138 = INT16_MAX;
	static int32_t x1139 = INT32_MIN;
	volatile uint16_t x1140 = 0U;
	static volatile uint64_t t9 = 980350343366128LLU;

	t9 = (x1137<<((x1138&x1139)|x1140));

	if (t9 != 203719569LLU) { NG(); } else { ; }
	
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


    return 0;
}

