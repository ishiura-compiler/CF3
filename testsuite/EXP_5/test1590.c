#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = UINT64_MAX;
uint64_t x193 = 190LLU;
uint64_t x195 = UINT64_MAX;
int16_t x251 = 4;
uint8_t x429 = 113U;
uint32_t x430 = 39230790U;
static volatile int32_t t5 = -109;
int32_t x682 = -16998545;
int8_t x683 = INT8_MAX;
int64_t x946 = INT64_MIN;
uint8_t x948 = 27U;
volatile int32_t t7 = -3842744;
uint64_t x1002 = 6109355678269526LLU;
int32_t x1003 = INT32_MIN;
uint16_t x1447 = 1182U;
uint8_t x1456 = 2U;
static uint16_t x1475 = 235U;
uint64_t x1476 = 6LLU;


void f0(void) {
	volatile uint64_t x157 = UINT64_MAX;
	volatile int32_t x158 = INT32_MIN;
	volatile uint16_t x159 = 1818U;
	int8_t x160 = 0;

	t0 = (x157/((x158<=x159)<<x160));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x194 = INT64_MIN;
	uint8_t x196 = 5U;
	volatile uint64_t t1 = 5160067296301223LLU;

	t1 = (x193/((x194<=x195)<<x196));

	if (t1 != 5LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x225 = INT64_MAX;
	uint16_t x226 = 27162U;
	volatile uint32_t x227 = 7657611U;
	int32_t x228 = 8;
	volatile int64_t t2 = 1LL;

	t2 = (x225/((x226<=x227)<<x228));

	if (t2 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x249 = -1LL;
	int32_t x250 = -1;
	static int16_t x252 = 1;
	static volatile int64_t t3 = 24117646033267LL;

	t3 = (x249/((x250<=x251)<<x252));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x431 = UINT32_MAX;
	volatile uint8_t x432 = 1U;
	int32_t t4 = 140;

	t4 = (x429/((x430<=x431)<<x432));

	if (t4 != 56) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x533 = 7113414;
	int8_t x534 = INT8_MIN;
	volatile int16_t x535 = -7;
	int16_t x536 = 0;

	t5 = (x533/((x534<=x535)<<x536));

	if (t5 != 7113414) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x681 = 958201LLU;
	int8_t x684 = 9;
	volatile uint64_t t6 = 163064028518337LLU;

	t6 = (x681/((x682<=x683)<<x684));

	if (t6 != 1871LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x945 = 1U;
	volatile uint8_t x947 = 1U;

	t7 = (x945/((x946<=x947)<<x948));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x1001 = INT64_MAX;
	static int8_t x1004 = 0;
	int64_t t8 = INT64_MAX;

	t8 = (x1001/((x1002<=x1003)<<x1004));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x1077 = UINT32_MAX;
	volatile int16_t x1078 = INT16_MIN;
	volatile int8_t x1079 = -2;
	int8_t x1080 = 5;
	uint32_t t9 = 1364010U;

	t9 = (x1077/((x1078<=x1079)<<x1080));

	if (t9 != 134217727U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1109 = -1;
	uint8_t x1110 = UINT8_MAX;
	uint32_t x1111 = UINT32_MAX;
	int8_t x1112 = 13;
	static int32_t t10 = 8988;

	t10 = (x1109/((x1110<=x1111)<<x1112));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x1313 = INT8_MIN;
	int32_t x1314 = INT32_MIN;
	int64_t x1315 = 5086138331845LL;
	uint64_t x1316 = 3LLU;
	int32_t t11 = 1754977;

	t11 = (x1313/((x1314<=x1315)<<x1316));

	if (t11 != -16) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x1445 = INT16_MIN;
	int32_t x1446 = 8;
	int64_t x1448 = 11LL;
	volatile int32_t t12 = -769662;

	t12 = (x1445/((x1446<=x1447)<<x1448));

	if (t12 != -16) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1453 = 5392604;
	int32_t x1454 = -19714544;
	int32_t x1455 = 2377991;
	volatile int32_t t13 = -51117488;

	t13 = (x1453/((x1454<=x1455)<<x1456));

	if (t13 != 1348151) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1473 = INT8_MAX;
	int32_t x1474 = INT32_MIN;
	int32_t t14 = 0;

	t14 = (x1473/((x1474<=x1475)<<x1476));

	if (t14 != 1) { NG(); } else { ; }
	
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

