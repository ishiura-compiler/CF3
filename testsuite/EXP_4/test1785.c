#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x72 = -1;
int32_t t1 = 322590321;
volatile int64_t x392 = -1LL;
volatile int32_t t2 = 3;
static int32_t x521 = INT32_MAX;
int16_t x924 = -1;
static uint8_t x1365 = 7U;
int32_t t11 = 3265720;
volatile int32_t t12 = 171729;
int64_t x2007 = INT64_MIN;
int8_t x2044 = -1;
int64_t x2231 = -1LL;
int64_t x2384 = -1LL;
volatile uint32_t t16 = 2133U;
int32_t x2670 = INT32_MIN;
int32_t x2672 = INT32_MIN;
static volatile int16_t x3037 = 7314;
int8_t x3379 = -1;
int32_t x3466 = -1;
static volatile int32_t t22 = -113;
int16_t x3693 = INT16_MAX;


void f0(void) {
	static uint8_t x65 = 36U;
	int16_t x66 = INT16_MIN;
	static volatile int8_t x67 = INT8_MIN;
	static volatile int16_t x68 = INT16_MIN;
	volatile int32_t t0 = -1396;

	t0 = (x65/(x66==(x67&x68)));

	if (t0 != 36) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x69 = 14977;
	static int16_t x70 = INT16_MIN;
	volatile int16_t x71 = INT16_MIN;

	t1 = (x69/(x70==(x71&x72)));

	if (t1 != 14977) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x389 = 0U;
	int8_t x390 = -1;
	int16_t x391 = -1;

	t2 = (x389/(x390==(x391&x392)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x522 = INT32_MIN;
	int32_t x523 = INT32_MIN;
	int16_t x524 = INT16_MIN;
	int32_t t3 = INT32_MAX;

	t3 = (x521/(x522==(x523&x524)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x833 = INT32_MIN;
	uint8_t x834 = 0U;
	static int64_t x835 = INT64_MIN;
	int32_t x836 = 7263807;
	volatile int32_t t4 = INT32_MIN;

	t4 = (x833/(x834==(x835&x836)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x921 = INT16_MIN;
	int32_t x922 = -1;
	volatile uint32_t x923 = UINT32_MAX;
	volatile int32_t t5 = -637605;

	t5 = (x921/(x922==(x923&x924)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x1137 = INT64_MAX;
	static int32_t x1138 = INT32_MIN;
	static int32_t x1139 = -114866837;
	static volatile int32_t x1140 = INT32_MIN;
	volatile int64_t t6 = INT64_MAX;

	t6 = (x1137/(x1138==(x1139&x1140)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x1333 = INT32_MAX;
	int8_t x1334 = 0;
	int32_t x1335 = INT32_MIN;
	uint16_t x1336 = 3716U;
	volatile int32_t t7 = INT32_MAX;

	t7 = (x1333/(x1334==(x1335&x1336)));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x1366 = INT32_MIN;
	int8_t x1367 = INT8_MIN;
	int32_t x1368 = INT32_MIN;
	int32_t t8 = -251;

	t8 = (x1365/(x1366==(x1367&x1368)));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x1521 = 14776199U;
	int16_t x1522 = INT16_MIN;
	int64_t x1523 = -1LL;
	int16_t x1524 = INT16_MIN;
	uint32_t t9 = 978307U;

	t9 = (x1521/(x1522==(x1523&x1524)));

	if (t9 != 14776199U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x1537 = 0U;
	int32_t x1538 = -1;
	int16_t x1539 = -1;
	uint64_t x1540 = UINT64_MAX;
	int32_t t10 = -696252879;

	t10 = (x1537/(x1538==(x1539&x1540)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1549 = INT8_MAX;
	volatile int64_t x1550 = INT64_MIN;
	int64_t x1551 = INT64_MIN;
	int32_t x1552 = -53930588;

	t11 = (x1549/(x1550==(x1551&x1552)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x1829 = INT16_MAX;
	uint32_t x1830 = 0U;
	static int32_t x1831 = INT32_MAX;
	int64_t x1832 = INT64_MIN;

	t12 = (x1829/(x1830==(x1831&x1832)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x2005 = 80017664LLU;
	uint8_t x2006 = 0U;
	int16_t x2008 = INT16_MAX;
	volatile uint64_t t13 = 1102464657941LLU;

	t13 = (x2005/(x2006==(x2007&x2008)));

	if (t13 != 80017664LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x2041 = -1;
	volatile int16_t x2042 = INT16_MIN;
	int16_t x2043 = INT16_MIN;
	static int32_t t14 = 347;

	t14 = (x2041/(x2042==(x2043&x2044)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x2229 = INT16_MAX;
	int16_t x2230 = INT16_MIN;
	int16_t x2232 = INT16_MIN;
	int32_t t15 = 28355218;

	t15 = (x2229/(x2230==(x2231&x2232)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x2381 = 2856U;
	int16_t x2382 = -1;
	static int8_t x2383 = -1;

	t16 = (x2381/(x2382==(x2383&x2384)));

	if (t16 != 2856U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x2669 = INT64_MIN;
	int8_t x2671 = -1;
	volatile int64_t t17 = INT64_MIN;

	t17 = (x2669/(x2670==(x2671&x2672)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x2833 = 39U;
	int32_t x2834 = INT32_MIN;
	volatile int32_t x2835 = INT32_MIN;
	int16_t x2836 = INT16_MIN;
	static volatile int32_t t18 = 3881004;

	t18 = (x2833/(x2834==(x2835&x2836)));

	if (t18 != 39) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x2841 = 3;
	volatile int32_t x2842 = INT32_MIN;
	int64_t x2843 = -1LL;
	int32_t x2844 = INT32_MIN;
	static int32_t t19 = 2;

	t19 = (x2841/(x2842==(x2843&x2844)));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x3038 = 0U;
	uint16_t x3039 = 20996U;
	static int16_t x3040 = 306;
	int32_t t20 = 3;

	t20 = (x3037/(x3038==(x3039&x3040)));

	if (t20 != 7314) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x3377 = -1;
	int8_t x3378 = -1;
	int16_t x3380 = -1;
	volatile int32_t t21 = -460;

	t21 = (x3377/(x3378==(x3379&x3380)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x3465 = 14U;
	int32_t x3467 = -1;
	int32_t x3468 = -1;

	t22 = (x3465/(x3466==(x3467&x3468)));

	if (t22 != 14) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x3694 = INT16_MIN;
	static volatile int8_t x3695 = -7;
	static int16_t x3696 = INT16_MIN;
	volatile int32_t t23 = -7435;

	t23 = (x3693/(x3694==(x3695&x3696)));

	if (t23 != 32767) { NG(); } else { ; }
	
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


    return 0;
}

