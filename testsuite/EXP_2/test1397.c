#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 21376;
volatile uint16_t x609 = 7862U;
int32_t x610 = INT32_MIN;
static volatile int8_t x612 = 0;
int32_t t1 = 564;
int32_t x746 = -160;
int8_t x779 = 1;
int32_t x812 = 4;
volatile int32_t t5 = 0;
int16_t x966 = INT16_MIN;
static uint32_t x1219 = 286128886U;
uint64_t t7 = 13LLU;
volatile uint16_t x1427 = 131U;
volatile uint32_t x1618 = 11U;
uint8_t x1793 = 15U;
static volatile int32_t t11 = -55;
volatile uint16_t x1977 = 0U;
int32_t t13 = -15268;
volatile int16_t x2395 = INT16_MIN;
uint16_t x2833 = 13585U;
uint32_t x2834 = 9U;
int16_t x2835 = 108;
int32_t t18 = -2614248;
int64_t x3033 = 6263263335355LL;
uint64_t x3034 = 84LLU;
uint64_t x3035 = UINT64_MAX;
uint16_t x3057 = 0U;
static int32_t x3059 = -227;
uint64_t t23 = 14378LLU;


void f0(void) {
	uint16_t x217 = 85U;
	volatile int16_t x218 = INT16_MAX;
	uint64_t x219 = 13975953799383863LLU;
	volatile int8_t x220 = 0;

	t0 = ((x217/(x218<x219))<<x220);

	if (t0 != 85) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x611 = -1LL;

	t1 = ((x609/(x610<x611))<<x612);

	if (t1 != 7862) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x737 = 249;
	static int8_t x738 = INT8_MIN;
	int8_t x739 = INT8_MAX;
	int8_t x740 = 5;
	static volatile int32_t t2 = -17;

	t2 = ((x737/(x738<x739))<<x740);

	if (t2 != 7968) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x745 = 354U;
	uint8_t x747 = 3U;
	static uint16_t x748 = 1U;
	uint32_t t3 = 48014512U;

	t3 = ((x745/(x746<x747))<<x748);

	if (t3 != 708U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x777 = UINT32_MAX;
	int32_t x778 = -1;
	uint8_t x780 = 13U;
	volatile uint32_t t4 = 15836783U;

	t4 = ((x777/(x778<x779))<<x780);

	if (t4 != 4294959104U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x809 = 100U;
	volatile int16_t x810 = INT16_MIN;
	volatile int8_t x811 = -1;

	t5 = ((x809/(x810<x811))<<x812);

	if (t5 != 1600) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x965 = 0U;
	int64_t x967 = 248056LL;
	volatile uint8_t x968 = 17U;
	volatile int32_t t6 = -7587;

	t6 = ((x965/(x966<x967))<<x968);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x1217 = 1093836LLU;
	static int64_t x1218 = INT64_MIN;
	uint8_t x1220 = 2U;

	t7 = ((x1217/(x1218<x1219))<<x1220);

	if (t7 != 4375344LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x1425 = 134177U;
	static int64_t x1426 = -1LL;
	uint32_t x1428 = 3U;
	uint32_t t8 = 7U;

	t8 = ((x1425/(x1426<x1427))<<x1428);

	if (t8 != 1073416U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x1513 = 80100492638446412LLU;
	uint8_t x1514 = 103U;
	uint16_t x1515 = 2205U;
	volatile uint8_t x1516 = 26U;
	volatile uint64_t t9 = 0LLU;

	t9 = ((x1513/(x1514<x1515))<<x1516);

	if (t9 != 16503495316964638720LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x1617 = 2145;
	int32_t x1619 = INT32_MIN;
	uint8_t x1620 = 15U;
	int32_t t10 = 1;

	t10 = ((x1617/(x1618<x1619))<<x1620);

	if (t10 != 70287360) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x1794 = -1431;
	static uint8_t x1795 = 3U;
	uint16_t x1796 = 13U;

	t11 = ((x1793/(x1794<x1795))<<x1796);

	if (t11 != 122880) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x1978 = 29U;
	volatile int32_t x1979 = -91901246;
	int16_t x1980 = 6;
	volatile int32_t t12 = 433809057;

	t12 = ((x1977/(x1978<x1979))<<x1980);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x2301 = 5U;
	int16_t x2302 = INT16_MIN;
	static uint16_t x2303 = 873U;
	uint8_t x2304 = 14U;

	t13 = ((x2301/(x2302<x2303))<<x2304);

	if (t13 != 81920) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x2317 = 1;
	uint16_t x2318 = 11919U;
	int64_t x2319 = 212708740LL;
	uint8_t x2320 = 0U;
	volatile int32_t t14 = 11036900;

	t14 = ((x2317/(x2318<x2319))<<x2320);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x2393 = UINT32_MAX;
	int64_t x2394 = INT64_MIN;
	int8_t x2396 = 0;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = ((x2393/(x2394<x2395))<<x2396);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x2545 = 6;
	uint8_t x2546 = 1U;
	volatile int16_t x2547 = INT16_MAX;
	int64_t x2548 = 1LL;
	int32_t t16 = 1823806;

	t16 = ((x2545/(x2546<x2547))<<x2548);

	if (t16 != 12) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x2725 = 25797;
	volatile int64_t x2726 = INT64_MIN;
	int64_t x2727 = 4092820228818249LL;
	uint8_t x2728 = 4U;
	int32_t t17 = -23957;

	t17 = ((x2725/(x2726<x2727))<<x2728);

	if (t17 != 412752) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x2836 = 0;

	t18 = ((x2833/(x2834<x2835))<<x2836);

	if (t18 != 13585) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x2905 = 50U;
	int8_t x2906 = INT8_MIN;
	uint16_t x2907 = 6088U;
	int16_t x2908 = 0;
	static volatile int32_t t19 = 4;

	t19 = ((x2905/(x2906<x2907))<<x2908);

	if (t19 != 50) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x3009 = 11756455U;
	static uint64_t x3010 = 10LLU;
	static volatile int16_t x3011 = INT16_MIN;
	int8_t x3012 = 13;
	volatile uint32_t t20 = 3561762U;

	t20 = ((x3009/(x3010<x3011))<<x3012);

	if (t20 != 1819598848U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x3036 = 0;
	volatile int64_t t21 = 311817951986155731LL;

	t21 = ((x3033/(x3034<x3035))<<x3036);

	if (t21 != 6263263335355LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x3058 = -231;
	int64_t x3060 = 25LL;
	int32_t t22 = 347;

	t22 = ((x3057/(x3058<x3059))<<x3060);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x3161 = 4466710677937704LLU;
	int32_t x3162 = INT32_MIN;
	int64_t x3163 = 21769664594LL;
	static volatile uint8_t x3164 = 1U;

	t23 = ((x3161/(x3162<x3163))<<x3164);

	if (t23 != 8933421355875408LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x3169 = UINT32_MAX;
	uint16_t x3170 = 98U;
	uint32_t x3171 = 49926U;
	uint64_t x3172 = 5LLU;
	volatile uint32_t t24 = 25370U;

	t24 = ((x3169/(x3170<x3171))<<x3172);

	if (t24 != 4294967264U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x3205 = 1U;
	int32_t x3206 = INT32_MIN;
	int32_t x3207 = 1222;
	uint8_t x3208 = 28U;
	volatile int32_t t25 = 224915;

	t25 = ((x3205/(x3206<x3207))<<x3208);

	if (t25 != 268435456) { NG(); } else { ; }
	
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


    return 0;
}

