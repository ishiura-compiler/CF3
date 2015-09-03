#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 1865704096620LL;
static uint64_t x4 = 297009LLU;
uint32_t x24 = 988310U;
static int32_t x161 = INT32_MAX;
static int32_t x163 = -1;
volatile int16_t x164 = -1;
int32_t t2 = 154697;
int16_t x560 = -42;
uint64_t x597 = UINT64_MAX;
volatile int32_t x658 = 0;
int32_t x659 = INT32_MIN;
int16_t x660 = INT16_MIN;
int16_t x741 = INT16_MAX;
static uint32_t x963 = UINT32_MAX;
volatile int64_t t8 = 265068706286224LL;
int16_t x1079 = INT16_MIN;
volatile uint32_t x1080 = 140645U;
int64_t x1353 = INT64_MAX;
uint16_t x1354 = 14U;
int16_t x1356 = INT16_MIN;
static int8_t x1414 = 1;
uint16_t x1446 = 51U;
static volatile int8_t x1574 = 6;


void f0(void) {
	static volatile uint8_t x2 = 2U;
	int16_t x3 = -1;
	volatile uint64_t t0 = 137600374103LLU;

	t0 = ((x1>>x2)/(x3/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = 1U;
	uint8_t x22 = 31U;
	int32_t x23 = -2888;
	uint32_t t1 = 3564782U;

	t1 = ((x21>>x22)/(x23/x24));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x162 = 21;

	t2 = ((x161>>x162)/(x163/x164));

	if (t2 != 1023) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x309 = INT16_MAX;
	static int16_t x310 = 29;
	int8_t x311 = 2;
	int32_t x312 = -1;
	static volatile int32_t t3 = -47;

	t3 = ((x309>>x310)/(x311/x312));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x557 = 8LL;
	uint8_t x558 = 41U;
	int8_t x559 = INT8_MAX;
	int64_t t4 = 75309260468387LL;

	t4 = ((x557>>x558)/(x559/x560));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x598 = 1U;
	uint64_t x599 = UINT64_MAX;
	uint64_t x600 = 139003951886LLU;
	uint64_t t5 = 2192846870972621LLU;

	t5 = ((x597>>x598)/(x599/x600));

	if (t5 != 69501975974LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x657 = 12U;
	uint32_t t6 = 1603670U;

	t6 = ((x657>>x658)/(x659/x660));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x742 = 5;
	int32_t x743 = INT32_MIN;
	int8_t x744 = INT8_MAX;
	int32_t t7 = 1018;

	t7 = ((x741>>x742)/(x743/x744));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x961 = INT16_MAX;
	int8_t x962 = 14;
	static int64_t x964 = -1LL;

	t8 = ((x961>>x962)/(x963/x964));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x1065 = 2623U;
	static int8_t x1066 = 3;
	int64_t x1067 = INT64_MIN;
	int32_t x1068 = 13146993;
	int64_t t9 = 179018949215LL;

	t9 = ((x1065>>x1066)/(x1067/x1068));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x1077 = INT8_MAX;
	uint16_t x1078 = 13U;
	volatile uint32_t t10 = 253U;

	t10 = ((x1077>>x1078)/(x1079/x1080));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x1355 = INT32_MIN;
	static int64_t t11 = 6118478007LL;

	t11 = ((x1353>>x1354)/(x1355/x1356));

	if (t11 != 8589934591LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x1413 = 0;
	int64_t x1415 = INT64_MIN;
	int32_t x1416 = INT32_MIN;
	volatile int64_t t12 = 32753LL;

	t12 = ((x1413>>x1414)/(x1415/x1416));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1445 = INT64_MAX;
	static int64_t x1447 = INT64_MIN;
	static int64_t x1448 = -180329LL;
	volatile int64_t t13 = 49657029LL;

	t13 = ((x1445>>x1446)/(x1447/x1448));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1573 = 21837802914996110LLU;
	volatile int8_t x1575 = INT8_MIN;
	int8_t x1576 = INT8_MAX;
	static uint64_t t14 = 25292016778416LLU;

	t14 = ((x1573>>x1574)/(x1575/x1576));

	if (t14 != 0LLU) { NG(); } else { ; }
	
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

