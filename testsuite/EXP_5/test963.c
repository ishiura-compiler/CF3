#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x301 = UINT64_MAX;
int32_t x393 = INT32_MIN;
static uint8_t x394 = UINT8_MAX;
volatile int32_t t1 = INT32_MIN;
volatile uint16_t x525 = 18U;
int64_t x581 = INT64_MIN;
uint16_t x701 = UINT16_MAX;
int32_t t5 = 246759731;
uint8_t x971 = 0U;
int8_t x1169 = 5;
int8_t x1172 = INT8_MIN;
int16_t x1189 = -835;
volatile int32_t t9 = INT32_MIN;
volatile uint8_t x1378 = 0U;
static volatile int32_t t11 = -100;


void f0(void) {
	volatile uint8_t x302 = 119U;
	int8_t x303 = 6;
	static volatile int16_t x304 = INT16_MIN;
	static volatile uint64_t t0 = UINT64_MAX;

	t0 = (x301+((x302<<x303)<=x304));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x395 = 5U;
	int16_t x396 = 1;

	t1 = (x393+((x394<<x395)<=x396));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x526 = 2U;
	static uint8_t x527 = 4U;
	int64_t x528 = -1LL;
	static volatile int32_t t2 = 24;

	t2 = (x525+((x526<<x527)<=x528));

	if (t2 != 18) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x582 = INT16_MAX;
	volatile uint16_t x583 = 1U;
	int32_t x584 = -1;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x581+((x582<<x583)<=x584));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x702 = 151144354U;
	int8_t x703 = 0;
	volatile uint8_t x704 = 2U;
	static volatile int32_t t4 = 3168063;

	t4 = (x701+((x702<<x703)<=x704));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x813 = INT8_MAX;
	static uint32_t x814 = 8U;
	volatile int8_t x815 = 13;
	int64_t x816 = 18650318LL;

	t5 = (x813+((x814<<x815)<=x816));

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x969 = 1;
	uint64_t x970 = UINT64_MAX;
	int16_t x972 = INT16_MIN;
	volatile int32_t t6 = 0;

	t6 = (x969+((x970<<x971)<=x972));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x1170 = 7;
	volatile uint8_t x1171 = 0U;
	volatile int32_t t7 = 0;

	t7 = (x1169+((x1170<<x1171)<=x1172));

	if (t7 != 5) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x1190 = 47564515U;
	uint8_t x1191 = 1U;
	volatile int64_t x1192 = -1LL;
	int32_t t8 = -297135;

	t8 = (x1189+((x1190<<x1191)<=x1192));

	if (t8 != -835) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x1229 = INT32_MIN;
	int16_t x1230 = 3515;
	uint16_t x1231 = 4U;
	int32_t x1232 = INT32_MIN;

	t9 = (x1229+((x1230<<x1231)<=x1232));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x1369 = INT8_MAX;
	int32_t x1370 = INT32_MAX;
	static volatile uint16_t x1371 = 0U;
	volatile int16_t x1372 = INT16_MIN;
	volatile int32_t t10 = -110570;

	t10 = (x1369+((x1370<<x1371)<=x1372));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1377 = -2;
	volatile uint64_t x1379 = 30LLU;
	volatile int16_t x1380 = INT16_MAX;

	t11 = (x1377+((x1378<<x1379)<=x1380));

	if (t11 != -1) { NG(); } else { ; }
	
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

