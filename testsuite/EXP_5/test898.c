#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 957853;
volatile uint8_t x115 = 3U;
int64_t x154 = 2LL;
volatile int16_t x165 = -1;
volatile int8_t x167 = 1;
int64_t x185 = -65770LL;
uint32_t x188 = 718687672U;
int64_t t4 = -659740731764991417LL;
int16_t x209 = 7585;
volatile int8_t x341 = -1;
static uint8_t x343 = 0U;
int32_t x377 = INT32_MIN;
int32_t x569 = INT32_MIN;
static uint32_t x570 = 12U;
static int8_t x572 = INT8_MIN;
volatile uint16_t x727 = 6U;
volatile int64_t t16 = 680628581242024917LL;
uint64_t t17 = 52133600831LLU;
uint8_t x1051 = 0U;


void f0(void) {
	int32_t x105 = -14672003;
	uint8_t x106 = UINT8_MAX;
	volatile uint8_t x107 = 7U;
	int32_t x108 = 10447098;

	t0 = (x105+((x106<<x107)%x108));

	if (t0 != -14639363) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x113 = 12U;
	uint16_t x114 = UINT16_MAX;
	uint8_t x116 = 27U;
	static int32_t t1 = 20;

	t1 = (x113+((x114<<x115)%x116));

	if (t1 != 33) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x153 = 5;
	uint32_t x155 = 21U;
	int16_t x156 = INT16_MAX;
	volatile int64_t t2 = -5174809356934935LL;

	t2 = (x153+((x154<<x155)%x156));

	if (t2 != 133LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x166 = 5;
	uint32_t x168 = 2U;
	uint32_t t3 = UINT32_MAX;

	t3 = (x165+((x166<<x167)%x168));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x186 = 8785;
	uint16_t x187 = 7U;

	t4 = (x185+((x186<<x187)%x188));

	if (t4 != 1058710LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x210 = UINT64_MAX;
	static int32_t x211 = 39;
	static uint64_t x212 = 58872198316LLU;
	volatile uint64_t t5 = 22515468612LLU;

	t5 = (x209+((x210<<x211)%x212));

	if (t5 != 10091550493LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x237 = INT32_MIN;
	volatile int16_t x238 = 1;
	uint8_t x239 = 0U;
	int16_t x240 = -1;
	int32_t t6 = INT32_MIN;

	t6 = (x237+((x238<<x239)%x240));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x342 = UINT64_MAX;
	uint8_t x344 = UINT8_MAX;
	uint64_t t7 = UINT64_MAX;

	t7 = (x341+((x342<<x343)%x344));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x378 = 37U;
	uint32_t x379 = 6U;
	int16_t x380 = -375;
	volatile int32_t t8 = -50;

	t8 = (x377+((x378<<x379)%x380));

	if (t8 != -2147483530) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x397 = -5;
	int64_t x398 = 1LL;
	uint8_t x399 = 14U;
	int64_t x400 = -1LL;
	volatile int64_t t9 = 7248458055090LL;

	t9 = (x397+((x398<<x399)%x400));

	if (t9 != -5LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x537 = 37U;
	uint16_t x538 = UINT16_MAX;
	int8_t x539 = 1;
	int32_t x540 = -3571;
	static int32_t t10 = -516247993;

	t10 = (x537+((x538<<x539)%x540));

	if (t10 != 2551) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x557 = UINT64_MAX;
	static uint8_t x558 = 15U;
	uint8_t x559 = 0U;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t11 = 6602399900LLU;

	t11 = (x557+((x558<<x559)%x560));

	if (t11 != 14LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x571 = 6;
	uint32_t t12 = 4U;

	t12 = (x569+((x570<<x571)%x572));

	if (t12 != 2147484416U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x705 = 0U;
	volatile int8_t x706 = INT8_MAX;
	static int32_t x707 = 0;
	int8_t x708 = INT8_MIN;
	volatile int32_t t13 = -29268;

	t13 = (x705+((x706<<x707)%x708));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x725 = INT16_MIN;
	uint16_t x726 = UINT16_MAX;
	volatile int8_t x728 = INT8_MIN;
	int32_t t14 = 1032088562;

	t14 = (x725+((x726<<x727)%x728));

	if (t14 != -32704) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x817 = INT64_MAX;
	uint16_t x818 = UINT16_MAX;
	int32_t x819 = 10;
	int16_t x820 = -1;
	volatile int64_t t15 = INT64_MAX;

	t15 = (x817+((x818<<x819)%x820));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x833 = INT32_MAX;
	int64_t x834 = 1745LL;
	static int32_t x835 = 1;
	static int64_t x836 = INT64_MIN;

	t16 = (x833+((x834<<x835)%x836));

	if (t16 != 2147487137LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x925 = UINT8_MAX;
	uint64_t x926 = 6339659889626962LLU;
	static volatile int16_t x927 = 6;
	volatile int16_t x928 = INT16_MIN;

	t17 = (x925+((x926<<x927)%x928));

	if (t17 != 405738232936125823LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x985 = 262038747U;
	uint64_t x986 = UINT64_MAX;
	uint8_t x987 = 10U;
	int32_t x988 = INT32_MAX;
	uint64_t t18 = 27793347079428LLU;

	t18 = (x985+((x986<<x987)%x988));

	if (t18 != 2409521374LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1049 = INT8_MIN;
	static volatile int16_t x1050 = INT16_MAX;
	volatile uint64_t x1052 = UINT64_MAX;
	volatile uint64_t t19 = 12921168822LLU;

	t19 = (x1049+((x1050<<x1051)%x1052));

	if (t19 != 32639LLU) { NG(); } else { ; }
	
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


    return 0;
}

