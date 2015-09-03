#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 2LLU;
volatile int32_t t1 = 48319659;
volatile int16_t x155 = 30;
volatile int16_t x169 = -19;
int64_t x610 = INT64_MIN;
volatile int32_t t7 = 1791;
static int8_t x828 = 0;
int8_t x904 = 5;
uint64_t t11 = 887325LLU;
volatile int16_t x982 = INT16_MIN;
static int8_t x990 = INT8_MAX;
static int32_t x1049 = -31265;
int8_t x1051 = INT8_MAX;


void f0(void) {
	int16_t x1 = 22;
	static int32_t x2 = 45364;
	int64_t x3 = INT64_MAX;
	int32_t t0 = 8719177;

	t0 = (x1%(x2<(x3>>x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x45 = -1;
	uint32_t x46 = 4U;
	volatile uint64_t x47 = 7995998459765LLU;
	static volatile uint32_t x48 = 0U;

	t1 = (x45%(x46<(x47>>x48)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x153 = 104U;
	int16_t x154 = INT16_MIN;
	static uint8_t x156 = 0U;
	int32_t t2 = 20301924;

	t2 = (x153%(x154<(x155>>x156)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MAX;
	uint8_t x172 = 3U;
	int32_t t3 = -5456437;

	t3 = (x169%(x170<(x171>>x172)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	static int64_t x243 = 13023LL;
	volatile uint16_t x244 = 12U;
	int32_t t4 = -141;

	t4 = (x241%(x242<(x243>>x244)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = 0;
	static int32_t x251 = INT32_MAX;
	volatile uint8_t x252 = 29U;
	int32_t t5 = -15;

	t5 = (x249%(x250<(x251>>x252)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x449 = 364458384LLU;
	uint32_t x450 = 12706U;
	volatile int64_t x451 = INT64_MAX;
	uint16_t x452 = 8U;
	uint64_t t6 = 273584903309470LLU;

	t6 = (x449%(x450<(x451>>x452)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x609 = INT32_MIN;
	volatile int64_t x611 = 29720LL;
	uint8_t x612 = 6U;

	t7 = (x609%(x610<(x611>>x612)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x801 = INT16_MIN;
	int16_t x802 = -1;
	int16_t x803 = INT16_MAX;
	volatile uint8_t x804 = 10U;
	volatile int32_t t8 = 83408352;

	t8 = (x801%(x802<(x803>>x804)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x813 = INT64_MIN;
	static uint64_t x814 = 28LLU;
	uint16_t x815 = UINT16_MAX;
	volatile uint8_t x816 = 9U;
	volatile int64_t t9 = 25LL;

	t9 = (x813%(x814<(x815>>x816)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x825 = UINT64_MAX;
	static volatile uint8_t x826 = 5U;
	uint32_t x827 = UINT32_MAX;
	static uint64_t t10 = 2692201108247991622LLU;

	t10 = (x825%(x826<(x827>>x828)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x901 = UINT64_MAX;
	int64_t x902 = -1LL;
	int32_t x903 = INT32_MAX;

	t11 = (x901%(x902<(x903>>x904)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x981 = 30385296U;
	volatile int32_t x983 = INT32_MAX;
	volatile uint8_t x984 = 2U;
	uint32_t t12 = 1252057191U;

	t12 = (x981%(x982<(x983>>x984)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x989 = 14371U;
	int64_t x991 = INT64_MAX;
	uint32_t x992 = 6U;
	int32_t t13 = -1;

	t13 = (x989%(x990<(x991>>x992)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1050 = -114641796;
	volatile int8_t x1052 = 10;
	static int32_t t14 = -105;

	t14 = (x1049%(x1050<(x1051>>x1052)));

	if (t14 != 0) { NG(); } else { ; }
	
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


    return 0;
}

