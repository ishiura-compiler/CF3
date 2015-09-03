#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x61 = UINT8_MAX;
volatile int32_t x63 = 42060;
volatile uint64_t t1 = 0LLU;
uint32_t x86 = UINT32_MAX;
uint32_t x215 = UINT32_MAX;
uint16_t x254 = UINT16_MAX;
static volatile int32_t x357 = INT32_MAX;
int32_t x358 = 406536;
volatile int8_t x376 = 0;


void f0(void) {
	volatile int64_t x49 = 1415691LL;
	int16_t x50 = 332;
	uint64_t x51 = 2280269LLU;
	uint8_t x52 = 28U;
	volatile uint64_t t0 = 12243588016456LLU;

	t0 = (x49/((x50&x51)<<x52));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x62 = UINT64_MAX;
	static uint8_t x64 = 0U;

	t1 = (x61/((x62&x63)<<x64));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x85 = 2586054176684410647LL;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = 0;
	volatile int64_t t2 = -441339335LL;

	t2 = (x85/((x86&x87)<<x88));

	if (t2 != 39460657308070LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x137 = -8188805;
	uint16_t x138 = UINT16_MAX;
	uint32_t x139 = 219393U;
	volatile int8_t x140 = 0;
	volatile uint32_t t3 = 0U;

	t3 = (x137/((x138&x139)<<x140));

	if (t3 != 188140U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x213 = -1;
	uint32_t x214 = UINT32_MAX;
	int8_t x216 = 18;
	volatile uint32_t t4 = 14U;

	t4 = (x213/((x214&x215)<<x216));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x253 = -1;
	volatile int64_t x255 = INT64_MAX;
	uint8_t x256 = 0U;
	int64_t t5 = -938793332420312LL;

	t5 = (x253/((x254&x255)<<x256));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x359 = 62U;
	static uint16_t x360 = 20U;
	volatile uint32_t t6 = 22164U;

	t6 = (x357/((x358&x359)<<x360));

	if (t6 != 255U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MAX;
	int64_t x375 = -1LL;
	volatile int64_t t7 = -80137LL;

	t7 = (x373/((x374&x375)<<x376));

	if (t7 != 0LL) { NG(); } else { ; }
	
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

