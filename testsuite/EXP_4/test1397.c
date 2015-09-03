#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x176 = -1052;
static volatile uint8_t x478 = 1U;
int32_t t2 = -13587;
uint32_t t4 = 0U;
static int32_t x1068 = -12;
int16_t x1129 = INT16_MAX;


void f0(void) {
	uint64_t x97 = 32592609851177LLU;
	static uint16_t x98 = 14U;
	volatile uint8_t x99 = UINT8_MAX;
	uint32_t x100 = UINT32_MAX;
	static volatile uint64_t t0 = 78493308LLU;

	t0 = (x97<<(x98/(x99<x100)));

	if (t0 != 533997319801683968LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x173 = INT8_MAX;
	static int16_t x174 = 4;
	int32_t x175 = -16460;
	int32_t t1 = -214;

	t1 = (x173<<(x174/(x175<x176)));

	if (t1 != 2032) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x477 = 114U;
	uint64_t x479 = 479LLU;
	int16_t x480 = -51;

	t2 = (x477<<(x478/(x479<x480)));

	if (t2 != 228) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x705 = 1U;
	static int16_t x706 = 20;
	int32_t x707 = -19968;
	uint16_t x708 = 5191U;
	uint32_t t3 = 662U;

	t3 = (x705<<(x706/(x707<x708)));

	if (t3 != 1048576U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x1029 = 155U;
	int16_t x1030 = 20;
	int16_t x1031 = -1;
	static int16_t x1032 = 3336;

	t4 = (x1029<<(x1030/(x1031<x1032)));

	if (t4 != 162529280U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x1065 = 105143586LLU;
	static uint8_t x1066 = 0U;
	volatile int8_t x1067 = INT8_MIN;
	uint64_t t5 = 217040LLU;

	t5 = (x1065<<(x1066/(x1067<x1068)));

	if (t5 != 105143586LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x1097 = 130190378U;
	uint8_t x1098 = 1U;
	static volatile int32_t x1099 = INT32_MIN;
	volatile uint8_t x1100 = 1U;
	static uint32_t t6 = 6U;

	t6 = (x1097<<(x1098/(x1099<x1100)));

	if (t6 != 260380756U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x1130 = 0;
	volatile int64_t x1131 = INT64_MIN;
	static volatile uint8_t x1132 = 124U;
	int32_t t7 = 619669;

	t7 = (x1129<<(x1130/(x1131<x1132)));

	if (t7 != 32767) { NG(); } else { ; }
	
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

