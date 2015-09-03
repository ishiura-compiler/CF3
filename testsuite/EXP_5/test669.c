#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x60 = 0LL;
uint32_t x540 = UINT32_MAX;
volatile int32_t t3 = -240159820;
static int16_t x549 = 12369;
static int32_t x551 = INT32_MAX;
static int32_t x553 = INT32_MAX;
static uint64_t x657 = 10620297LLU;
uint64_t t6 = 236516302656406LLU;
volatile int64_t x809 = 4396927564656251LL;
uint64_t x811 = UINT64_MAX;
uint64_t x1121 = 2003LLU;
volatile uint64_t t11 = 96LLU;
uint8_t x1224 = 2U;
static uint16_t x1486 = UINT16_MAX;


void f0(void) {
	uint32_t x5 = 3U;
	static uint16_t x6 = 4541U;
	volatile uint16_t x7 = UINT16_MAX;
	static int32_t x8 = 3;
	volatile uint32_t t0 = 43975391U;

	t0 = (x5<<((x6/x7)^x8));

	if (t0 != 24U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x57 = 20U;
	uint16_t x58 = 3U;
	static volatile uint64_t x59 = 66156356424622LLU;
	volatile int32_t t1 = -429570;

	t1 = (x57<<((x58/x59)^x60));

	if (t1 != 20) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x233 = 15972U;
	volatile uint8_t x234 = 51U;
	static int8_t x235 = INT8_MIN;
	uint16_t x236 = 12U;
	int32_t t2 = 3986;

	t2 = (x233<<((x234/x235)^x236));

	if (t2 != 65421312) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x537 = UINT16_MAX;
	volatile int32_t x538 = 135256;
	int16_t x539 = INT16_MIN;

	t3 = (x537<<((x538/x539)^x540));

	if (t3 != 524280) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x550 = INT16_MIN;
	int16_t x552 = 1;
	int32_t t4 = -14758;

	t4 = (x549<<((x550/x551)^x552));

	if (t4 != 24738) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x554 = 1U;
	int16_t x555 = INT16_MIN;
	volatile int8_t x556 = 0;
	volatile int32_t t5 = INT32_MAX;

	t5 = (x553<<((x554/x555)^x556));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x658 = -1;
	int16_t x659 = INT16_MIN;
	volatile int16_t x660 = 1;

	t6 = (x657<<((x658/x659)^x660));

	if (t6 != 21240594LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x677 = 2;
	int8_t x678 = INT8_MAX;
	uint8_t x679 = 6U;
	int8_t x680 = 0;
	static int32_t t7 = -64;

	t7 = (x677<<((x678/x679)^x680));

	if (t7 != 4194304) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x793 = 1;
	int8_t x794 = -1;
	int64_t x795 = -1LL;
	uint16_t x796 = 2U;
	int32_t t8 = 640;

	t8 = (x793<<((x794/x795)^x796));

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x810 = INT64_MAX;
	uint32_t x812 = 1U;
	int64_t t9 = -97782125800LL;

	t9 = (x809<<((x810/x811)^x812));

	if (t9 != 8793855129312502LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x1109 = 1008467271LLU;
	int8_t x1110 = INT8_MIN;
	int8_t x1111 = INT8_MAX;
	int16_t x1112 = -36;
	volatile uint64_t t10 = 437LLU;

	t10 = (x1109<<((x1110/x1111)^x1112));

	if (t10 != 16203927510541402112LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x1122 = 6;
	uint64_t x1123 = 1739754773LLU;
	uint64_t x1124 = 45LLU;

	t11 = (x1121<<((x1122/x1123)^x1124));

	if (t11 != 70474297293930496LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x1221 = 0LL;
	uint16_t x1222 = UINT16_MAX;
	int32_t x1223 = 3569477;
	static volatile int64_t t12 = -338755380LL;

	t12 = (x1221<<((x1222/x1223)^x1224));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1485 = UINT32_MAX;
	volatile int16_t x1487 = INT16_MIN;
	int64_t x1488 = -1LL;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x1485<<((x1486/x1487)^x1488));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x1613 = 123U;
	static uint8_t x1614 = 2U;
	static int16_t x1615 = -22;
	volatile uint16_t x1616 = 0U;
	volatile int32_t t14 = -3;

	t14 = (x1613<<((x1614/x1615)^x1616));

	if (t14 != 123) { NG(); } else { ; }
	
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


    return 0;
}

