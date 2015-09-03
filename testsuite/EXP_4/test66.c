#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x56 = -1;
static volatile uint64_t x174 = UINT64_MAX;
volatile int64_t t4 = 20637032844762LL;
uint16_t x650 = 11U;
int16_t x691 = 32;
int32_t t6 = -30771049;
uint32_t x974 = UINT32_MAX;
volatile uint64_t x1020 = UINT64_MAX;
int8_t x1070 = 0;
int64_t x1221 = 2212LL;
uint64_t x1222 = UINT64_MAX;
uint64_t t11 = 896940943114LLU;


void f0(void) {
	int16_t x53 = -93;
	static volatile uint64_t x54 = UINT64_MAX;
	uint8_t x55 = 57U;
	static volatile uint64_t t0 = 65779327142LLU;

	t0 = (x53+(x54<<(x55+x56)));

	if (t0 != 18374686479671623587LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x173 = INT8_MIN;
	volatile int8_t x175 = 2;
	volatile uint32_t x176 = UINT32_MAX;
	uint64_t t1 = 2287843054436LLU;

	t1 = (x173+(x174<<(x175+x176)));

	if (t1 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x253 = 36U;
	uint16_t x254 = 229U;
	uint32_t x255 = 15U;
	uint8_t x256 = 0U;
	int32_t t2 = 31;

	t2 = (x253+(x254<<(x255+x256)));

	if (t2 != 7503908) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x425 = INT16_MAX;
	int64_t x426 = 7808228LL;
	static uint16_t x427 = 1U;
	volatile int32_t x428 = -1;
	volatile int64_t t3 = 910570591593548LL;

	t3 = (x425+(x426<<(x427+x428)));

	if (t3 != 7840995LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x517 = 43775116224312LL;
	static int64_t x518 = 263363490314LL;
	static int8_t x519 = -2;
	static volatile uint8_t x520 = 25U;

	t4 = (x517+(x518<<(x519+x520)));

	if (t4 != 2209296856872167224LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x649 = 0U;
	int8_t x651 = -1;
	int8_t x652 = 5;
	int32_t t5 = 7087;

	t5 = (x649+(x650<<(x651+x652)));

	if (t5 != 176) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x689 = 1;
	int8_t x690 = INT8_MAX;
	static volatile int16_t x692 = -14;

	t6 = (x689+(x690<<(x691+x692)));

	if (t6 != 33292289) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x885 = 53;
	uint32_t x886 = 94029619U;
	uint32_t x887 = UINT32_MAX;
	volatile int8_t x888 = 28;
	static uint32_t t7 = 34783294U;

	t7 = (x885+(x886<<(x887+x888)));

	if (t7 != 2550136885U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x973 = 710608244LLU;
	uint32_t x975 = UINT32_MAX;
	static uint32_t x976 = 5U;
	volatile uint64_t t8 = 1882LLU;

	t8 = (x973+(x974<<(x975+x976)));

	if (t8 != 5005575524LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x1017 = 82U;
	uint8_t x1018 = UINT8_MAX;
	uint16_t x1019 = 18U;
	static volatile uint32_t t9 = 27U;

	t9 = (x1017+(x1018<<(x1019+x1020)));

	if (t9 != 33423442U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x1069 = INT16_MAX;
	int8_t x1071 = -1;
	int16_t x1072 = 12;
	int32_t t10 = 1;

	t10 = (x1069+(x1070<<(x1071+x1072)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1223 = 2U;
	volatile uint32_t x1224 = UINT32_MAX;

	t11 = (x1221+(x1222<<(x1223+x1224)));

	if (t11 != 2210LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1261 = INT16_MAX;
	int16_t x1262 = 0;
	static volatile int8_t x1263 = -1;
	uint8_t x1264 = 25U;
	volatile int32_t t12 = 0;

	t12 = (x1261+(x1262<<(x1263+x1264)));

	if (t12 != 32767) { NG(); } else { ; }
	
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


    return 0;
}

