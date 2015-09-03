#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x26 = 0;
int32_t t0 = 85064;
int8_t x42 = -1;
uint8_t x43 = 0U;
static uint8_t x115 = 0U;
uint32_t t2 = 3481901U;
int8_t x350 = INT8_MIN;
uint8_t x351 = 0U;
volatile int32_t t5 = 169;
volatile uint64_t x437 = UINT64_MAX;
int32_t x438 = INT32_MIN;
int16_t x440 = INT16_MIN;
uint32_t x551 = 10U;
uint16_t x815 = 1U;
static int16_t x971 = -1;
static int8_t x1043 = INT8_MIN;
volatile uint64_t t13 = 117644LLU;
uint32_t x1086 = 46U;
static volatile int64_t t15 = 1170835521729LL;


void f0(void) {
	static volatile int16_t x25 = 1;
	volatile int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MAX;

	t0 = (x25<<((x26*x27)*x28));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x41 = UINT32_MAX;
	static uint64_t x44 = UINT64_MAX;
	static uint32_t t1 = UINT32_MAX;

	t1 = (x41<<((x42*x43)*x44));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x113 = 127521U;
	int64_t x114 = -1LL;
	uint32_t x116 = UINT32_MAX;

	t2 = (x113<<((x114*x115)*x116));

	if (t2 != 127521U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x209 = INT64_MAX;
	volatile int8_t x210 = INT8_MIN;
	static uint32_t x211 = UINT32_MAX;
	int8_t x212 = 0;
	int64_t t3 = INT64_MAX;

	t3 = (x209<<((x210*x211)*x212));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x349 = 33472436706647696LLU;
	int64_t x352 = INT64_MIN;
	volatile uint64_t t4 = 461447LLU;

	t4 = (x349<<((x350*x351)*x352));

	if (t4 != 33472436706647696LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x373 = INT16_MAX;
	uint8_t x374 = 0U;
	uint32_t x375 = 3U;
	int8_t x376 = INT8_MAX;

	t5 = (x373<<((x374*x375)*x376));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x439 = 45U;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x437<<((x438*x439)*x440));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x549 = 134123874;
	static int32_t x550 = INT32_MIN;
	uint32_t x552 = 1565181450U;
	int32_t t7 = -146435;

	t7 = (x549<<((x550*x551)*x552));

	if (t7 != 134123874) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x561 = 3;
	uint8_t x562 = 43U;
	int32_t x563 = 53;
	volatile uint8_t x564 = 0U;
	int32_t t8 = -3;

	t8 = (x561<<((x562*x563)*x564));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x813 = INT16_MAX;
	static int16_t x814 = -1;
	int32_t x816 = -1;
	volatile int32_t t9 = 453046;

	t9 = (x813<<((x814*x815)*x816));

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x833 = 38U;
	volatile int16_t x834 = INT16_MIN;
	int16_t x835 = 0;
	int64_t x836 = -3LL;
	volatile int32_t t10 = -198753;

	t10 = (x833<<((x834*x835)*x836));

	if (t10 != 38) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x893 = UINT32_MAX;
	int16_t x894 = INT16_MIN;
	static uint16_t x895 = 0U;
	uint32_t x896 = 348U;
	static uint32_t t11 = UINT32_MAX;

	t11 = (x893<<((x894*x895)*x896));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x969 = 0LLU;
	static int32_t x970 = -30780875;
	uint16_t x972 = 0U;
	static uint64_t t12 = 24LLU;

	t12 = (x969<<((x970*x971)*x972));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1041 = 525052475844422043LLU;
	volatile uint64_t x1042 = 127505708479LLU;
	static int64_t x1044 = INT64_MIN;

	t13 = (x1041<<((x1042*x1043)*x1044));

	if (t13 != 525052475844422043LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x1061 = INT64_MAX;
	volatile uint16_t x1062 = 0U;
	int8_t x1063 = INT8_MAX;
	uint16_t x1064 = 73U;
	int64_t t14 = INT64_MAX;

	t14 = (x1061<<((x1062*x1063)*x1064));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1085 = 24475716LL;
	static int16_t x1087 = INT16_MAX;
	volatile int32_t x1088 = INT32_MIN;

	t15 = (x1085<<((x1086*x1087)*x1088));

	if (t15 != 24475716LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1149 = 15611527LLU;
	int64_t x1150 = -1LL;
	int16_t x1151 = 0;
	int32_t x1152 = -11;
	volatile uint64_t t16 = 480846967LLU;

	t16 = (x1149<<((x1150*x1151)*x1152));

	if (t16 != 15611527LLU) { NG(); } else { ; }
	
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


    return 0;
}

