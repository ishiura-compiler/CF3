#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x9 = INT16_MIN;
static int32_t x11 = 29;
int16_t x81 = INT16_MIN;
int16_t x82 = INT16_MAX;
int32_t x106 = INT32_MAX;
volatile uint16_t x359 = 5U;
uint64_t x360 = UINT64_MAX;
volatile uint64_t t4 = 26126392LLU;
uint8_t x897 = 4U;
volatile uint16_t x899 = 0U;
int32_t t11 = 7998077;
uint64_t x962 = UINT64_MAX;
int16_t x966 = 336;
volatile int8_t x968 = -1;
uint16_t x1322 = 5230U;
int16_t x1517 = -25;


void f0(void) {
	uint64_t x10 = UINT64_MAX;
	int8_t x12 = -6;
	uint64_t t0 = 185400654315940718LLU;

	t0 = (x9-(x10>>(x11-x12)));

	if (t0 != 18446744073172647937LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x26 = 28500LLU;
	static uint64_t x27 = 31LLU;
	static volatile uint32_t x28 = 0U;
	uint64_t t1 = 8041235071152645LLU;

	t1 = (x25-(x26>>(x27-x28)));

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x83 = UINT64_MAX;
	int8_t x84 = -1;
	int32_t t2 = 0;

	t2 = (x81-(x82>>(x83-x84)));

	if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x105 = 15U;
	int8_t x107 = 20;
	int8_t x108 = 2;
	volatile uint32_t t3 = 611U;

	t3 = (x105-(x106>>(x107-x108)));

	if (t3 != 4294959120U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x357 = 2697245470327LLU;
	int32_t x358 = 11;

	t4 = (x357-(x358>>(x359-x360)));

	if (t4 != 2697245470327LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x457 = -1;
	uint8_t x458 = 114U;
	int64_t x459 = -1LL;
	int16_t x460 = -1;
	volatile int32_t t5 = 306461;

	t5 = (x457-(x458>>(x459-x460)));

	if (t5 != -115) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x517 = INT16_MIN;
	int8_t x518 = INT8_MAX;
	uint16_t x519 = 3U;
	uint32_t x520 = UINT32_MAX;
	static volatile int32_t t6 = 2581526;

	t6 = (x517-(x518>>(x519-x520)));

	if (t6 != -32775) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x533 = 2892251655938LLU;
	int64_t x534 = 7443288LL;
	static int8_t x535 = 31;
	volatile uint16_t x536 = 16U;
	uint64_t t7 = 13531996035788LLU;

	t7 = (x533-(x534>>(x535-x536)));

	if (t7 != 2892251655711LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x629 = -1;
	int8_t x630 = 0;
	static uint16_t x631 = 11U;
	volatile uint32_t x632 = UINT32_MAX;
	volatile int32_t t8 = -64010;

	t8 = (x629-(x630>>(x631-x632)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x797 = UINT64_MAX;
	uint16_t x798 = 425U;
	static int32_t x799 = -1;
	int16_t x800 = -20;
	static volatile uint64_t t9 = UINT64_MAX;

	t9 = (x797-(x798>>(x799-x800)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x833 = INT64_MIN;
	int16_t x834 = 7;
	uint16_t x835 = 1U;
	static int8_t x836 = -17;
	static int64_t t10 = INT64_MIN;

	t10 = (x833-(x834>>(x835-x836)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x898 = 115652414;
	int16_t x900 = -1;

	t11 = (x897-(x898>>(x899-x900)));

	if (t11 != -57826203) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x961 = 9LLU;
	volatile int64_t x963 = INT64_MAX;
	volatile int64_t x964 = INT64_MAX;
	volatile uint64_t t12 = 25643293LLU;

	t12 = (x961-(x962>>(x963-x964)));

	if (t12 != 10LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x965 = 1284;
	int32_t x967 = -1;
	static int32_t t13 = -120;

	t13 = (x965-(x966>>(x967-x968)));

	if (t13 != 948) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1121 = INT32_MAX;
	int16_t x1122 = INT16_MAX;
	int64_t x1123 = INT64_MIN;
	volatile int64_t x1124 = INT64_MIN;
	volatile int32_t t14 = 44;

	t14 = (x1121-(x1122>>(x1123-x1124)));

	if (t14 != 2147450880) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x1205 = UINT64_MAX;
	static int64_t x1206 = 40999651LL;
	volatile int64_t x1207 = INT64_MIN;
	int64_t x1208 = INT64_MIN;
	uint64_t t15 = 107211806550758748LLU;

	t15 = (x1205-(x1206>>(x1207-x1208)));

	if (t15 != 18446744073668551964LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1321 = INT8_MIN;
	uint32_t x1323 = UINT32_MAX;
	int16_t x1324 = -14;
	volatile int32_t t16 = -1;

	t16 = (x1321-(x1322>>(x1323-x1324)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x1333 = UINT32_MAX;
	static int32_t x1334 = INT32_MAX;
	volatile int8_t x1335 = 1;
	static int32_t x1336 = -1;
	volatile uint32_t t17 = 607853U;

	t17 = (x1333-(x1334>>(x1335-x1336)));

	if (t17 != 3758096384U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1518 = 0;
	int32_t x1519 = 13;
	uint32_t x1520 = 1U;
	int32_t t18 = -165312;

	t18 = (x1517-(x1518>>(x1519-x1520)));

	if (t18 != -25) { NG(); } else { ; }
	
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
    f17();
    f18();


    return 0;
}

