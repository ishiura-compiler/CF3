#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x170 = 0;
int16_t x172 = -1;
static volatile uint64_t t0 = 74LLU;
int32_t x482 = INT32_MIN;
int32_t x484 = -1;
int32_t t1 = 7538;
static int32_t x613 = 9138827;
int8_t x614 = INT8_MIN;
int8_t x616 = INT8_MAX;
volatile uint32_t t4 = 15U;
uint32_t x1205 = 10U;
int16_t x1577 = INT16_MAX;


void f0(void) {
	static volatile uint64_t x169 = 888423904816995947LLU;
	static volatile int16_t x171 = INT16_MAX;

	t0 = (x169<<((x170*x171)-x172));

	if (t0 != 1776847809633991894LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x481 = 200156291;
	static int8_t x483 = 0;

	t1 = (x481<<((x482*x483)-x484));

	if (t1 != 400312582) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x615 = -1;
	volatile int32_t t2 = -19103;

	t2 = (x613<<((x614*x615)-x616));

	if (t2 != 18277654) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x637 = 13U;
	static volatile int32_t x638 = -1;
	volatile uint64_t x639 = UINT64_MAX;
	int16_t x640 = -3;
	volatile uint32_t t3 = 1294293430U;

	t3 = (x637<<((x638*x639)-x640));

	if (t3 != 208U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x693 = 24U;
	static int32_t x694 = INT32_MAX;
	static uint8_t x695 = 0U;
	int64_t x696 = -1LL;

	t4 = (x693<<((x694*x695)-x696));

	if (t4 != 48U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x885 = 3810664571652LLU;
	uint32_t x886 = UINT32_MAX;
	volatile int16_t x887 = -1;
	static volatile int8_t x888 = 1;
	uint64_t t5 = 3510680519LLU;

	t5 = (x885<<((x886*x887)-x888));

	if (t5 != 3810664571652LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x1206 = INT16_MAX;
	volatile int8_t x1207 = -1;
	int16_t x1208 = INT16_MIN;
	uint32_t t6 = 466047429U;

	t6 = (x1205<<((x1206*x1207)-x1208));

	if (t6 != 20U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x1405 = INT8_MAX;
	volatile uint64_t x1406 = 2478566LLU;
	int64_t x1407 = INT64_MIN;
	uint64_t x1408 = UINT64_MAX;
	volatile int32_t t7 = -20432120;

	t7 = (x1405<<((x1406*x1407)-x1408));

	if (t7 != 254) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x1469 = 34610144612801134LL;
	int64_t x1470 = INT64_MIN;
	uint8_t x1471 = 0U;
	volatile int8_t x1472 = -1;
	int64_t t8 = 844LL;

	t8 = (x1469<<((x1470*x1471)-x1472));

	if (t8 != 69220289225602268LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x1578 = -1;
	int8_t x1579 = -1;
	int16_t x1580 = -1;
	int32_t t9 = 1;

	t9 = (x1577<<((x1578*x1579)-x1580));

	if (t9 != 131068) { NG(); } else { ; }
	
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

