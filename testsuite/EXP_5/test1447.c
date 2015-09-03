#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x649 = 1;
int16_t x650 = INT16_MIN;
int64_t x842 = -293LL;
uint8_t x1072 = 0U;
int32_t t5 = -1213;
volatile uint8_t x1087 = UINT8_MAX;


void f0(void) {
	int64_t x101 = 36386LL;
	int16_t x102 = INT16_MIN;
	int8_t x103 = -1;
	int32_t x104 = 1;
	int64_t t0 = -6866622424692LL;

	t0 = (x101/((x102<x103)==x104));

	if (t0 != 36386LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x185 = 13U;
	int16_t x186 = INT16_MIN;
	int8_t x187 = -2;
	uint8_t x188 = 1U;
	int32_t t1 = 14462017;

	t1 = (x185/((x186<x187)==x188));

	if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x449 = INT16_MIN;
	uint16_t x450 = UINT16_MAX;
	uint64_t x451 = UINT64_MAX;
	volatile int8_t x452 = 1;
	int32_t t2 = -678103560;

	t2 = (x449/((x450<x451)==x452));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x651 = UINT16_MAX;
	int16_t x652 = 1;
	int32_t t3 = 170110392;

	t3 = (x649/((x650<x651)==x652));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x841 = 1293LLU;
	int8_t x843 = INT8_MIN;
	int8_t x844 = 1;
	static volatile uint64_t t4 = 1LLU;

	t4 = (x841/((x842<x843)==x844));

	if (t4 != 1293LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x1069 = UINT8_MAX;
	static uint32_t x1070 = 34439295U;
	uint32_t x1071 = 171U;

	t5 = (x1069/((x1070<x1071)==x1072));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x1085 = 1880929793U;
	int32_t x1086 = INT32_MAX;
	static int16_t x1088 = 0;
	volatile uint32_t t6 = 125394U;

	t6 = (x1085/((x1086<x1087)==x1088));

	if (t6 != 1880929793U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x1109 = -1;
	volatile uint16_t x1110 = UINT16_MAX;
	int64_t x1111 = INT64_MIN;
	uint16_t x1112 = 0U;
	int32_t t7 = 625054080;

	t7 = (x1109/((x1110<x1111)==x1112));

	if (t7 != -1) { NG(); } else { ; }
	
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

