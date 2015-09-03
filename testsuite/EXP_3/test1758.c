#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 7;
int16_t x3 = 2;
static uint8_t x63 = UINT8_MAX;
uint32_t t2 = 0U;
volatile int8_t x218 = 1;
volatile uint64_t t3 = 421177700909173LLU;
static int16_t x227 = 1035;
uint8_t x228 = 6U;
uint32_t t4 = 1648U;
uint64_t x353 = 600990621LLU;
int8_t x354 = 3;
int16_t x355 = -1;
uint16_t x390 = 7U;
uint64_t t6 = 736481495LLU;
uint16_t x453 = UINT16_MAX;
static uint8_t x455 = 88U;
int32_t t8 = -4983533;
uint16_t x595 = 259U;
uint8_t x606 = 2U;
int64_t x608 = 15218333833993LL;
int64_t t10 = 1670166114442LL;
int16_t x632 = 0;
uint32_t x698 = 0U;
uint64_t x969 = 132LLU;
int32_t x1000 = INT32_MIN;
static uint64_t x1109 = 3LLU;
volatile uint8_t x1110 = 6U;
static volatile int32_t x1112 = -1;
uint8_t x1185 = 4U;
uint8_t x1186 = 10U;
static uint16_t x1188 = UINT16_MAX;
int16_t x1251 = INT16_MAX;
volatile uint64_t t21 = 907624335435409376LLU;
uint64_t x1510 = 0LLU;
static volatile int8_t x1525 = 10;
uint8_t x1526 = 20U;
int16_t x1619 = -1;
volatile int16_t x1652 = INT16_MAX;
volatile uint64_t x1808 = UINT64_MAX;
volatile int32_t x1848 = INT32_MIN;
int64_t x1996 = INT64_MAX;


void f0(void) {
	int16_t x1 = 0;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 1180487;

	t0 = ((x1<<x2)*(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x25 = INT32_MAX;
	volatile int8_t x26 = 0;
	uint64_t x27 = 289048LLU;
	int64_t x28 = INT64_MAX;
	volatile uint64_t t1 = 69798038347738LLU;

	t1 = ((x25<<x26)*(x27&x28));

	if (t1 != 620725853198056LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x61 = 1747191U;
	int16_t x62 = 16;
	int32_t x64 = -6853;

	t2 = ((x61<<x62)*(x63&x64));

	if (t2 != 4042063872U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x217 = UINT16_MAX;
	static uint64_t x219 = 54LLU;
	int16_t x220 = INT16_MAX;

	t3 = ((x217<<x218)*(x219&x220));

	if (t3 != 7077780LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x225 = 320648U;
	int64_t x226 = 9LL;

	t4 = ((x225<<x226)*(x227&x228));

	if (t4 != 328343552U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x356 = -40LL;
	volatile uint64_t t5 = 1035594838LLU;

	t5 = ((x353<<x354)*(x355&x356));

	if (t5 != 18446743881392552896LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x389 = UINT64_MAX;
	int32_t x391 = INT32_MIN;
	int8_t x392 = -1;

	t6 = ((x389<<x390)*(x391&x392));

	if (t6 != 274877906944LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x421 = UINT32_MAX;
	volatile uint8_t x422 = 1U;
	int8_t x423 = INT8_MIN;
	int64_t x424 = -1LL;
	int64_t t7 = -230776772LL;

	t7 = ((x421<<x422)*(x423&x424));

	if (t7 != -549755813632LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x454 = 1U;
	int16_t x456 = INT16_MAX;

	t8 = ((x453<<x454)*(x455&x456));

	if (t8 != 11534160) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x593 = 925;
	uint8_t x594 = 0U;
	volatile int8_t x596 = 30;
	int32_t t9 = -5;

	t9 = ((x593<<x594)*(x595&x596));

	if (t9 != 1850) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x605 = 3;
	uint32_t x607 = 178280U;

	t10 = ((x605<<x606)*(x607&x608));

	if (t10 != 467040LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x629 = 13;
	int8_t x630 = 16;
	volatile int64_t x631 = -1LL;
	volatile int64_t t11 = 2192325LL;

	t11 = ((x629<<x630)*(x631&x632));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x697 = 2710U;
	uint64_t x699 = UINT64_MAX;
	static int8_t x700 = INT8_MIN;
	volatile uint64_t t12 = 19369LLU;

	t12 = ((x697<<x698)*(x699&x700));

	if (t12 != 18446744073709204736LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x773 = UINT32_MAX;
	uint32_t x774 = 2U;
	static volatile uint64_t x775 = UINT64_MAX;
	volatile int64_t x776 = -1LL;
	uint64_t t13 = 3LLU;

	t13 = ((x773<<x774)*(x775&x776));

	if (t13 != 18446744069414584324LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x929 = 79447587U;
	volatile int8_t x930 = 8;
	volatile int8_t x931 = -1;
	static uint64_t x932 = UINT64_MAX;
	uint64_t t14 = 5331LLU;

	t14 = ((x929<<x930)*(x931&x932));

	if (t14 != 18446744070550838528LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x970 = 3;
	int16_t x971 = 5;
	int8_t x972 = 15;
	volatile uint64_t t15 = 115983964452709LLU;

	t15 = ((x969<<x970)*(x971&x972));

	if (t15 != 5280LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x997 = 0;
	int16_t x998 = 6;
	uint64_t x999 = UINT64_MAX;
	volatile uint64_t t16 = 5205LLU;

	t16 = ((x997<<x998)*(x999&x1000));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1111 = INT16_MIN;
	uint64_t t17 = 94771041LLU;

	t17 = ((x1109<<x1110)*(x1111&x1112));

	if (t17 != 18446744073703260160LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1187 = INT16_MAX;
	volatile int32_t t18 = -221526;

	t18 = ((x1185<<x1186)*(x1187&x1188));

	if (t18 != 134213632) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1249 = UINT64_MAX;
	static volatile uint32_t x1250 = 41U;
	uint64_t x1252 = UINT64_MAX;
	volatile uint64_t t19 = 337037625298915LLU;

	t19 = ((x1249<<x1250)*(x1251&x1252));

	if (t19 != 18374688678694879232LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1357 = UINT16_MAX;
	uint16_t x1358 = 1U;
	int8_t x1359 = -15;
	volatile int16_t x1360 = -88;
	int32_t t20 = -2795754;

	t20 = ((x1357<<x1358)*(x1359&x1360));

	if (t20 != -12582720) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1433 = 267385603616528LLU;
	static volatile uint32_t x1434 = 59U;
	uint64_t x1435 = 225927239LLU;
	int16_t x1436 = 380;

	t21 = ((x1433<<x1434)*(x1435&x1436));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1485 = 762212;
	int32_t x1486 = 2;
	int32_t x1487 = 7;
	static int32_t x1488 = -1;
	volatile int32_t t22 = -91;

	t22 = ((x1485<<x1486)*(x1487&x1488));

	if (t22 != 21341936) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1509 = INT16_MAX;
	uint8_t x1511 = 7U;
	int16_t x1512 = -1;
	volatile int32_t t23 = 188770502;

	t23 = ((x1509<<x1510)*(x1511&x1512));

	if (t23 != 229369) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1527 = INT16_MIN;
	static int16_t x1528 = INT16_MAX;
	int32_t t24 = -740667626;

	t24 = ((x1525<<x1526)*(x1527&x1528));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1617 = 0U;
	int8_t x1618 = 0;
	volatile int16_t x1620 = INT16_MIN;
	volatile int32_t t25 = -100;

	t25 = ((x1617<<x1618)*(x1619&x1620));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1649 = UINT8_MAX;
	static int8_t x1650 = 1;
	int8_t x1651 = INT8_MIN;
	int32_t t26 = 539883080;

	t26 = ((x1649<<x1650)*(x1651&x1652));

	if (t26 != 16646400) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1805 = 274886826577225LL;
	static volatile uint8_t x1806 = 5U;
	int16_t x1807 = -5;
	volatile uint64_t t27 = 7LLU;

	t27 = ((x1805<<x1806)*(x1807&x1808));

	if (t27 != 18402762181457195616LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1845 = 37U;
	uint8_t x1846 = 0U;
	int8_t x1847 = INT8_MAX;
	int32_t t28 = -22171539;

	t28 = ((x1845<<x1846)*(x1847&x1848));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1941 = INT16_MAX;
	volatile uint32_t x1942 = 0U;
	volatile int8_t x1943 = 1;
	uint8_t x1944 = 0U;
	volatile int32_t t29 = -101107509;

	t29 = ((x1941<<x1942)*(x1943&x1944));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1993 = 4;
	static int8_t x1994 = 0;
	uint64_t x1995 = 267381471049LLU;
	uint64_t t30 = 50134837768515440LLU;

	t30 = ((x1993<<x1994)*(x1995&x1996));

	if (t30 != 1069525884196LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2005 = UINT64_MAX;
	uint8_t x2006 = 27U;
	int16_t x2007 = INT16_MAX;
	int32_t x2008 = INT32_MIN;
	volatile uint64_t t31 = 379089LLU;

	t31 = ((x2005<<x2006)*(x2007&x2008));

	if (t31 != 0LLU) { NG(); } else { ; }
	
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
    f31();


    return 0;
}

