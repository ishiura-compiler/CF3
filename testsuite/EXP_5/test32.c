#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x99 = -1;
uint16_t x299 = UINT16_MAX;
static int32_t x342 = 2;
int16_t x343 = INT16_MIN;
int16_t x431 = 1;
uint8_t x432 = 71U;
int32_t t3 = 103;
static int8_t x436 = 0;
static int8_t x742 = -1;
static volatile uint32_t x1687 = UINT32_MAX;
uint64_t x1761 = 425830294190030233LLU;
int16_t x1763 = INT16_MIN;


void f0(void) {
	uint32_t x97 = UINT32_MAX;
	static int16_t x98 = INT16_MIN;
	uint16_t x100 = 0U;
	static volatile uint32_t t0 = UINT32_MAX;

	t0 = (x97<<((x98+x99)*x100));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x297 = 0U;
	volatile int8_t x298 = -1;
	int8_t x300 = 0;
	int32_t t1 = -13359326;

	t1 = (x297<<((x298+x299)*x300));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x341 = 22672U;
	int32_t x344 = 0;
	int32_t t2 = -4;

	t2 = (x341<<((x342+x343)*x344));

	if (t2 != 22672) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x429 = UINT16_MAX;
	volatile int64_t x430 = -1LL;

	t3 = (x429<<((x430+x431)*x432));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x433 = UINT16_MAX;
	volatile uint64_t x434 = 10LLU;
	int64_t x435 = 88030167457LL;
	int32_t t4 = 6042483;

	t4 = (x433<<((x434+x435)*x436));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x741 = 15U;
	uint64_t x743 = 1LLU;
	uint64_t x744 = UINT64_MAX;
	static int32_t t5 = -16764;

	t5 = (x741<<((x742+x743)*x744));

	if (t5 != 15) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x841 = 85U;
	int64_t x842 = INT64_MAX;
	int64_t x843 = INT64_MIN;
	int8_t x844 = -1;
	int32_t t6 = -15385;

	t6 = (x841<<((x842+x843)*x844));

	if (t6 != 170) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x1145 = 3228776705LL;
	int16_t x1146 = INT16_MAX;
	int16_t x1147 = INT16_MIN;
	volatile int16_t x1148 = -1;
	int64_t t7 = 899LL;

	t7 = (x1145<<((x1146+x1147)*x1148));

	if (t7 != 6457553410LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x1317 = UINT16_MAX;
	int64_t x1318 = 12709339392984LL;
	int16_t x1319 = -2795;
	uint16_t x1320 = 0U;
	int32_t t8 = 3091;

	t8 = (x1317<<((x1318+x1319)*x1320));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x1565 = 2017;
	uint32_t x1566 = 3939U;
	int32_t x1567 = -1;
	static int32_t x1568 = INT32_MIN;
	volatile int32_t t9 = -118574765;

	t9 = (x1565<<((x1566+x1567)*x1568));

	if (t9 != 2017) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x1685 = UINT32_MAX;
	static int8_t x1686 = INT8_MIN;
	static volatile uint32_t x1688 = 0U;
	uint32_t t10 = UINT32_MAX;

	t10 = (x1685<<((x1686+x1687)*x1688));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x1762 = 231U;
	uint16_t x1764 = 0U;
	uint64_t t11 = 8551364157849LLU;

	t11 = (x1761<<((x1762+x1763)*x1764));

	if (t11 != 425830294190030233LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1777 = 18931403;
	uint64_t x1778 = 1LLU;
	static volatile int8_t x1779 = -1;
	uint32_t x1780 = UINT32_MAX;
	int32_t t12 = 16682819;

	t12 = (x1777<<((x1778+x1779)*x1780));

	if (t12 != 18931403) { NG(); } else { ; }
	
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

