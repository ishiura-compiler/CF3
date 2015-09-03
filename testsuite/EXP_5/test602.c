#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x183 = INT64_MAX;
uint32_t x211 = UINT32_MAX;
int32_t x537 = INT32_MIN;
int8_t x538 = INT8_MIN;
volatile uint32_t x561 = 1678U;
uint8_t x890 = UINT8_MAX;
uint64_t x892 = UINT64_MAX;
uint64_t t5 = 381274LLU;
static int8_t x1086 = 0;
static volatile int16_t x1098 = INT16_MIN;
static int32_t x1100 = -1;
volatile int32_t x1358 = -1;
int64_t x1359 = INT64_MIN;
int64_t t8 = 209302851093200431LL;
static int16_t x1406 = -1;
volatile int16_t x1407 = INT16_MIN;
uint8_t x1471 = UINT8_MAX;


void f0(void) {
	int64_t x181 = INT64_MIN;
	static int16_t x182 = INT16_MIN;
	uint8_t x184 = 0U;
	int64_t t0 = INT64_MIN;

	t0 = (x181/((x182/x183)==x184));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x209 = INT16_MAX;
	uint32_t x210 = UINT32_MAX;
	uint32_t x212 = 1U;
	static volatile int32_t t1 = 210;

	t1 = (x209/((x210/x211)==x212));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MAX;
	static uint8_t x363 = UINT8_MAX;
	uint8_t x364 = 0U;
	int64_t t2 = INT64_MIN;

	t2 = (x361/((x362/x363)==x364));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x539 = UINT64_MAX;
	uint8_t x540 = 0U;
	volatile int32_t t3 = INT32_MIN;

	t3 = (x537/((x538/x539)==x540));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x562 = INT8_MIN;
	static uint16_t x563 = 761U;
	static uint16_t x564 = 0U;
	uint32_t t4 = 390706U;

	t4 = (x561/((x562/x563)==x564));

	if (t4 != 1678U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x889 = 995LLU;
	static int8_t x891 = INT8_MIN;

	t5 = (x889/((x890/x891)==x892));

	if (t5 != 995LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x1085 = INT16_MAX;
	int32_t x1087 = 2916;
	int16_t x1088 = 0;
	int32_t t6 = -732447079;

	t6 = (x1085/((x1086/x1087)==x1088));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x1097 = -3;
	static int16_t x1099 = INT16_MAX;
	int32_t t7 = -266081812;

	t7 = (x1097/((x1098/x1099)==x1100));

	if (t7 != -3) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x1357 = 208043380164652LL;
	static int16_t x1360 = 0;

	t8 = (x1357/((x1358/x1359)==x1360));

	if (t8 != 208043380164652LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x1405 = INT64_MIN;
	uint8_t x1408 = 0U;
	static int64_t t9 = INT64_MIN;

	t9 = (x1405/((x1406/x1407)==x1408));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x1425 = -1;
	int32_t x1426 = INT32_MIN;
	int32_t x1427 = INT32_MAX;
	uint32_t x1428 = UINT32_MAX;
	int32_t t10 = -2025764;

	t10 = (x1425/((x1426/x1427)==x1428));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1469 = 119620LLU;
	static int8_t x1470 = INT8_MIN;
	uint8_t x1472 = 0U;
	uint64_t t11 = 1768404556LLU;

	t11 = (x1469/((x1470/x1471)==x1472));

	if (t11 != 119620LLU) { NG(); } else { ; }
	
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


    return 0;
}

