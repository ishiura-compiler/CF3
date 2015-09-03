#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x163 = UINT64_MAX;
int32_t x247 = -1;
static int64_t x248 = -1LL;
int64_t t4 = 107384LL;
int8_t x523 = -6;
volatile int8_t x574 = 1;
int16_t x576 = -1;
int32_t x620 = -1;
uint64_t x760 = UINT64_MAX;
static volatile int64_t t10 = 9885LL;
int64_t t11 = 8860290832943609LL;
int64_t t13 = -9100LL;
int64_t x1013 = INT64_MIN;
int32_t x1014 = INT32_MIN;
volatile int64_t t14 = 63290595599687460LL;
uint64_t x1242 = 3LLU;
int16_t x1291 = -5;
volatile int32_t t17 = 104763342;
volatile int8_t x1339 = -1;
int16_t x1406 = INT16_MIN;
uint16_t x1492 = 2U;
static volatile int64_t t20 = 319780195581LL;
uint32_t x1588 = UINT32_MAX;


void f0(void) {
	static volatile int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = UINT64_MAX;
	int8_t x8 = -15;
	int64_t t0 = -63496232904296944LL;

	t0 = ((x5%x6)>>(x7^x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x93 = UINT16_MAX;
	volatile uint32_t x94 = UINT32_MAX;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MIN;
	static uint32_t t1 = 442312550U;

	t1 = ((x93%x94)>>(x95^x96));

	if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x161 = 2740U;
	int8_t x162 = INT8_MAX;
	static int32_t x164 = -3;
	volatile uint32_t t2 = 28002584U;

	t2 = ((x161%x162)>>(x163^x164));

	if (t2 != 18U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x213 = INT32_MIN;
	static uint32_t x214 = UINT32_MAX;
	uint16_t x215 = 23U;
	volatile uint8_t x216 = 2U;
	uint32_t t3 = 28929U;

	t3 = ((x213%x214)>>(x215^x216));

	if (t3 != 1024U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;

	t4 = ((x245%x246)>>(x247^x248));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x493 = INT16_MAX;
	uint16_t x494 = 23U;
	uint16_t x495 = 2U;
	uint32_t x496 = 2U;
	volatile int32_t t5 = -1995990;

	t5 = ((x493%x494)>>(x495^x496));

	if (t5 != 15) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x521 = 1U;
	int32_t x522 = -1;
	volatile uint32_t x524 = UINT32_MAX;
	volatile int32_t t6 = 3779;

	t6 = ((x521%x522)>>(x523^x524));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x573 = UINT64_MAX;
	int8_t x575 = -1;
	static volatile uint64_t t7 = 1LLU;

	t7 = ((x573%x574)>>(x575^x576));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x617 = INT16_MIN;
	uint64_t x618 = UINT64_MAX;
	int8_t x619 = -1;
	uint64_t t8 = 1532LLU;

	t8 = ((x617%x618)>>(x619^x620));

	if (t8 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x685 = -5023;
	volatile int32_t x686 = -1;
	volatile uint64_t x687 = UINT64_MAX;
	volatile int64_t x688 = -1LL;
	volatile int32_t t9 = 3802;

	t9 = ((x685%x686)>>(x687^x688));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x757 = INT64_MAX;
	int32_t x758 = INT32_MIN;
	int64_t x759 = -1LL;

	t10 = ((x757%x758)>>(x759^x760));

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x849 = 12U;
	static int64_t x850 = INT64_MIN;
	uint8_t x851 = 34U;
	uint32_t x852 = 9U;

	t11 = ((x849%x850)>>(x851^x852));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x885 = UINT16_MAX;
	volatile int16_t x886 = -1;
	int8_t x887 = 0;
	uint16_t x888 = 11U;
	volatile int32_t t12 = -3474;

	t12 = ((x885%x886)>>(x887^x888));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x941 = INT64_MAX;
	volatile uint16_t x942 = UINT16_MAX;
	volatile int8_t x943 = -1;
	int64_t x944 = -1LL;

	t13 = ((x941%x942)>>(x943^x944));

	if (t13 != 32767LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1015 = -1LL;
	volatile int16_t x1016 = -27;

	t14 = ((x1013%x1014)>>(x1015^x1016));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x1241 = 9968;
	uint8_t x1243 = 1U;
	static int8_t x1244 = 19;
	uint64_t t15 = 17235295430427057LLU;

	t15 = ((x1241%x1242)>>(x1243^x1244));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1289 = 113046U;
	uint16_t x1290 = UINT16_MAX;
	volatile uint64_t x1292 = UINT64_MAX;
	volatile uint32_t t16 = 424886487U;

	t16 = ((x1289%x1290)>>(x1291^x1292));

	if (t16 != 2969U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1325 = UINT16_MAX;
	uint8_t x1326 = 53U;
	int8_t x1327 = -8;
	int8_t x1328 = -1;

	t17 = ((x1325%x1326)>>(x1327^x1328));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1337 = 18640822LL;
	uint16_t x1338 = UINT16_MAX;
	volatile int8_t x1340 = -1;
	static int64_t t18 = 1LL;

	t18 = ((x1337%x1338)>>(x1339^x1340));

	if (t18 != 28882LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1405 = INT16_MIN;
	uint16_t x1407 = UINT16_MAX;
	uint16_t x1408 = UINT16_MAX;
	volatile int32_t t19 = -253;

	t19 = ((x1405%x1406)>>(x1407^x1408));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1489 = INT64_MIN;
	int32_t x1490 = INT32_MIN;
	volatile int32_t x1491 = 4;

	t20 = ((x1489%x1490)>>(x1491^x1492));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1585 = INT64_MAX;
	int64_t x1586 = -7267LL;
	int32_t x1587 = -1;
	int64_t t21 = -4563LL;

	t21 = ((x1585%x1586)>>(x1587^x1588));

	if (t21 != 2750LL) { NG(); } else { ; }
	
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
    f19();
    f20();
    f21();


    return 0;
}

