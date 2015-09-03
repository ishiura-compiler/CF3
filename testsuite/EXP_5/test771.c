#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x33 = 1U;
volatile int32_t x35 = 22838833;
static int32_t t0 = 88362;
int32_t x487 = -1;
int64_t x821 = -1LL;
volatile int32_t x828 = 0;
static int32_t t4 = -76;
int16_t x1112 = INT16_MIN;
int8_t x1398 = 0;
static int64_t x1399 = 2648121270070529392LL;
int64_t x1614 = -1LL;
int32_t x1615 = 14982;
int8_t x1616 = -1;
int32_t t9 = -46;
int32_t t10 = 22835942;
int8_t x1970 = -1;
volatile uint32_t t12 = 2095084U;


void f0(void) {
	int8_t x34 = -1;
	volatile int64_t x36 = -1LL;

	t0 = (x33/((x34%x35)==x36));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = -1;
	int16_t x123 = -101;
	volatile uint32_t x124 = UINT32_MAX;
	volatile int32_t t1 = 353;

	t1 = (x121/((x122%x123)==x124));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x485 = -126;
	int16_t x486 = INT16_MIN;
	int8_t x488 = 0;
	int32_t t2 = -473218;

	t2 = (x485/((x486%x487)==x488));

	if (t2 != -126) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x822 = INT32_MIN;
	int16_t x823 = -1;
	volatile int16_t x824 = 0;
	int64_t t3 = -3078063LL;

	t3 = (x821/((x822%x823)==x824));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x825 = -12;
	uint8_t x826 = 14U;
	int64_t x827 = -1LL;

	t4 = (x825/((x826%x827)==x828));

	if (t4 != -12) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x1109 = UINT16_MAX;
	static volatile int64_t x1110 = INT64_MIN;
	uint16_t x1111 = UINT16_MAX;
	volatile int32_t t5 = 7761;

	t5 = (x1109/((x1110%x1111)==x1112));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x1397 = INT16_MAX;
	int32_t x1400 = 0;
	int32_t t6 = -27;

	t6 = (x1397/((x1398%x1399)==x1400));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x1545 = UINT16_MAX;
	int8_t x1546 = -1;
	uint8_t x1547 = 11U;
	static int32_t x1548 = -1;
	int32_t t7 = 168;

	t7 = (x1545/((x1546%x1547)==x1548));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x1581 = 10;
	int64_t x1582 = INT64_MIN;
	int64_t x1583 = -1LL;
	int64_t x1584 = 0LL;
	static int32_t t8 = -17807450;

	t8 = (x1581/((x1582%x1583)==x1584));

	if (t8 != 10) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x1613 = 11;

	t9 = (x1613/((x1614%x1615)==x1616));

	if (t9 != 11) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x1701 = -6;
	int16_t x1702 = INT16_MIN;
	int16_t x1703 = INT16_MAX;
	volatile int16_t x1704 = -1;

	t10 = (x1701/((x1702%x1703)==x1704));

	if (t10 != -6) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x1817 = INT16_MAX;
	int16_t x1818 = INT16_MIN;
	int32_t x1819 = INT32_MIN;
	int16_t x1820 = INT16_MIN;
	int32_t t11 = 61859;

	t11 = (x1817/((x1818%x1819)==x1820));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1969 = 730938710U;
	static uint16_t x1971 = 46U;
	int8_t x1972 = -1;

	t12 = (x1969/((x1970%x1971)==x1972));

	if (t12 != 730938710U) { NG(); } else { ; }
	
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

