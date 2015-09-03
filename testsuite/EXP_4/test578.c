#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 2LLU;
int32_t x4 = INT32_MIN;
volatile uint32_t t5 = 26U;
int8_t x957 = INT8_MAX;
volatile int64_t x959 = -1LL;
int32_t t7 = -78930;
uint16_t x1246 = 2U;
static int16_t x1439 = INT16_MAX;
uint32_t x1558 = 12U;
int64_t x1560 = INT64_MIN;
int32_t t13 = 0;
static uint32_t x1729 = UINT32_MAX;
uint64_t x1808 = UINT64_MAX;
uint32_t x1852 = UINT32_MAX;
int32_t t19 = 61993;
int8_t x2039 = INT8_MAX;
int32_t x2097 = 3784919;
uint32_t x2129 = 827418916U;
volatile uint32_t x2425 = UINT32_MAX;
uint16_t x2562 = 1U;
uint16_t x2585 = UINT16_MAX;


void f0(void) {
	uint16_t x1 = 7704U;
	int16_t x3 = 889;
	static volatile int32_t t0 = 0;

	t0 = (x1<<(x2<<(x3/x4)));

	if (t0 != 30816) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x185 = 885663LLU;
	uint64_t x186 = 3LLU;
	static uint32_t x187 = 662515U;
	int8_t x188 = -3;
	uint64_t t1 = 59620803411LLU;

	t1 = (x185<<(x186<<(x187/x188)));

	if (t1 != 7085304LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x197 = INT16_MAX;
	uint8_t x198 = 7U;
	static uint8_t x199 = 18U;
	static int16_t x200 = INT16_MIN;
	int32_t t2 = 32173209;

	t2 = (x197<<(x198<<(x199/x200)));

	if (t2 != 4194176) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x501 = 1U;
	static uint8_t x502 = 15U;
	int8_t x503 = -15;
	int32_t x504 = INT32_MAX;
	uint32_t t3 = 402615U;

	t3 = (x501<<(x502<<(x503/x504)));

	if (t3 != 32768U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x789 = 45U;
	uint8_t x790 = 1U;
	int8_t x791 = INT8_MIN;
	int16_t x792 = INT16_MIN;
	int32_t t4 = -25;

	t4 = (x789<<(x790<<(x791/x792)));

	if (t4 != 90) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x809 = 1U;
	int16_t x810 = 1;
	static int8_t x811 = INT8_MIN;
	int32_t x812 = INT32_MIN;

	t5 = (x809<<(x810<<(x811/x812)));

	if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x901 = UINT8_MAX;
	uint16_t x902 = 11U;
	volatile int8_t x903 = INT8_MIN;
	int32_t x904 = INT32_MIN;
	volatile int32_t t6 = -5;

	t6 = (x901<<(x902<<(x903/x904)));

	if (t6 != 522240) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x958 = 18U;
	int16_t x960 = 6;

	t7 = (x957<<(x958<<(x959/x960)));

	if (t7 != 33292288) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x1005 = 1609LLU;
	uint8_t x1006 = 6U;
	volatile int16_t x1007 = -27;
	volatile int64_t x1008 = INT64_MIN;
	uint64_t t8 = 66180360354026LLU;

	t8 = (x1005<<(x1006<<(x1007/x1008)));

	if (t8 != 102976LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x1161 = 292U;
	volatile uint8_t x1162 = 5U;
	uint64_t x1163 = 1LLU;
	int64_t x1164 = -38451539887225LL;
	int32_t t9 = -1644;

	t9 = (x1161<<(x1162<<(x1163/x1164)));

	if (t9 != 9344) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x1245 = 1;
	int8_t x1247 = -1;
	int64_t x1248 = 3488060LL;
	static volatile int32_t t10 = -564;

	t10 = (x1245<<(x1246<<(x1247/x1248)));

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x1437 = UINT32_MAX;
	uint64_t x1438 = 5LLU;
	int16_t x1440 = INT16_MIN;
	static volatile uint32_t t11 = 31U;

	t11 = (x1437<<(x1438<<(x1439/x1440)));

	if (t11 != 4294967264U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x1557 = 31805LLU;
	int16_t x1559 = 0;
	volatile uint64_t t12 = 1339336926538LLU;

	t12 = (x1557<<(x1558<<(x1559/x1560)));

	if (t12 != 130273280LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1717 = 10372418;
	uint16_t x1718 = 5U;
	int8_t x1719 = -1;
	int32_t x1720 = -30700;

	t13 = (x1717<<(x1718<<(x1719/x1720)));

	if (t13 != 331917376) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1730 = 0U;
	int16_t x1731 = -31;
	volatile int16_t x1732 = INT16_MIN;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x1729<<(x1730<<(x1731/x1732)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1773 = 197085926196518LLU;
	static uint16_t x1774 = 0U;
	int8_t x1775 = -3;
	int16_t x1776 = INT16_MIN;
	uint64_t t15 = 7817LLU;

	t15 = (x1773<<(x1774<<(x1775/x1776)));

	if (t15 != 197085926196518LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x1805 = 25611U;
	int32_t x1806 = 1;
	int16_t x1807 = 3;
	int32_t t16 = 5962890;

	t16 = (x1805<<(x1806<<(x1807/x1808)));

	if (t16 != 51222) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1829 = 3U;
	int32_t x1830 = 20;
	static int32_t x1831 = -1;
	int32_t x1832 = INT32_MAX;
	int32_t t17 = 2;

	t17 = (x1829<<(x1830<<(x1831/x1832)));

	if (t17 != 3145728) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1849 = UINT16_MAX;
	uint64_t x1850 = 3LLU;
	static uint16_t x1851 = 7182U;
	volatile int32_t t18 = -20;

	t18 = (x1849<<(x1850<<(x1851/x1852)));

	if (t18 != 524280) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x1861 = 20U;
	static uint8_t x1862 = 0U;
	int32_t x1863 = -1;
	int8_t x1864 = INT8_MAX;

	t19 = (x1861<<(x1862<<(x1863/x1864)));

	if (t19 != 20) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1941 = UINT16_MAX;
	static uint64_t x1942 = 8LLU;
	int8_t x1943 = INT8_MIN;
	int64_t x1944 = INT64_MAX;
	int32_t t20 = -10852832;

	t20 = (x1941<<(x1942<<(x1943/x1944)));

	if (t20 != 16776960) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x2037 = 1164;
	static volatile int64_t x2038 = 0LL;
	int64_t x2040 = INT64_MAX;
	int32_t t21 = 11600956;

	t21 = (x2037<<(x2038<<(x2039/x2040)));

	if (t21 != 1164) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x2098 = 9;
	int8_t x2099 = INT8_MIN;
	int64_t x2100 = 12408708098061034LL;
	static int32_t t22 = -121914236;

	t22 = (x2097<<(x2098<<(x2099/x2100)));

	if (t22 != 1937878528) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x2130 = 0U;
	volatile uint32_t x2131 = 2152U;
	uint8_t x2132 = UINT8_MAX;
	uint32_t t23 = 557081U;

	t23 = (x2129<<(x2130<<(x2131/x2132)));

	if (t23 != 827418916U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x2353 = UINT32_MAX;
	uint8_t x2354 = 0U;
	int32_t x2355 = INT32_MIN;
	int64_t x2356 = INT64_MAX;
	uint32_t t24 = UINT32_MAX;

	t24 = (x2353<<(x2354<<(x2355/x2356)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x2393 = 1U;
	volatile int16_t x2394 = 1;
	static int32_t x2395 = -1;
	int8_t x2396 = INT8_MAX;
	static int32_t t25 = -295934174;

	t25 = (x2393<<(x2394<<(x2395/x2396)));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x2397 = INT8_MAX;
	volatile int16_t x2398 = 0;
	uint8_t x2399 = 52U;
	int64_t x2400 = -522179531487LL;
	int32_t t26 = -86117828;

	t26 = (x2397<<(x2398<<(x2399/x2400)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2426 = 15U;
	int8_t x2427 = -1;
	uint16_t x2428 = 24089U;
	static volatile uint32_t t27 = 245773746U;

	t27 = (x2425<<(x2426<<(x2427/x2428)));

	if (t27 != 4294934528U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2493 = 30;
	uint16_t x2494 = 1U;
	static int16_t x2495 = -3;
	int8_t x2496 = INT8_MIN;
	volatile int32_t t28 = 112469;

	t28 = (x2493<<(x2494<<(x2495/x2496)));

	if (t28 != 60) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2561 = 103U;
	volatile uint8_t x2563 = UINT8_MAX;
	volatile int64_t x2564 = INT64_MIN;
	static volatile int32_t t29 = 7;

	t29 = (x2561<<(x2562<<(x2563/x2564)));

	if (t29 != 206) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2586 = 1U;
	uint16_t x2587 = 138U;
	static int64_t x2588 = -83575018914487929LL;
	int32_t t30 = 3397;

	t30 = (x2585<<(x2586<<(x2587/x2588)));

	if (t30 != 131070) { NG(); } else { ; }
	
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
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();


    return 0;
}

