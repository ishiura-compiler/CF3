#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x144 = -1LL;
uint64_t x184 = 2LLU;
volatile uint8_t x250 = 24U;
int64_t x356 = -1LL;
static int32_t t6 = 70913;
int32_t x688 = INT32_MIN;
volatile uint64_t t11 = 98403LLU;
static int8_t x1352 = INT8_MIN;
int64_t x1818 = -263490830LL;
static volatile int16_t x1841 = -1;
static volatile int32_t x1842 = -4839;
int16_t x1844 = -1;


void f0(void) {
	static uint32_t x101 = 13U;
	int32_t x102 = INT32_MAX;
	int8_t x103 = -1;
	int32_t x104 = -1;
	static uint32_t t0 = 440U;

	t0 = ((x101^x102)<<(x103-x104));

	if (t0 != 2147483634U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x141 = -1;
	int8_t x142 = INT8_MIN;
	uint16_t x143 = 6U;
	volatile int32_t t1 = -8;

	t1 = ((x141^x142)<<(x143-x144));

	if (t1 != 16256) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x181 = INT8_MAX;
	volatile uint8_t x182 = 29U;
	volatile uint64_t x183 = 4LLU;
	int32_t t2 = -61;

	t2 = ((x181^x182)<<(x183-x184));

	if (t2 != 392) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x249 = 195;
	uint32_t x251 = UINT32_MAX;
	int16_t x252 = -1;
	int32_t t3 = 7;

	t3 = ((x249^x250)<<(x251-x252));

	if (t3 != 219) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x289 = INT32_MIN;
	volatile int32_t x290 = INT32_MIN;
	int32_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	int32_t t4 = 1009841168;

	t4 = ((x289^x290)<<(x291-x292));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x353 = 51U;
	int8_t x354 = 8;
	static int16_t x355 = 0;
	volatile int32_t t5 = 58;

	t5 = ((x353^x354)<<(x355-x356));

	if (t5 != 118) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x557 = INT16_MIN;
	int16_t x558 = -277;
	uint64_t x559 = UINT64_MAX;
	int8_t x560 = -1;

	t6 = ((x557^x558)<<(x559-x560));

	if (t6 != 32491) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x685 = 11816279979113667LL;
	uint32_t x686 = UINT32_MAX;
	int32_t x687 = INT32_MIN;
	static int64_t t7 = -43856553LL;

	t7 = ((x685^x686)<<(x687-x688));

	if (t7 != 11816283645887292LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x837 = 368LLU;
	uint32_t x838 = 45658253U;
	int8_t x839 = 61;
	uint32_t x840 = 0U;
	volatile uint64_t t8 = 639301101LLU;

	t8 = ((x837^x838)<<(x839-x840));

	if (t8 != 11529215046068469760LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x905 = -7LL;
	volatile uint64_t x906 = 458384793139565LLU;
	uint64_t x907 = UINT64_MAX;
	volatile int64_t x908 = -1LL;
	volatile uint64_t t9 = 7818634605777363660LLU;

	t9 = ((x905^x906)<<(x907-x908));

	if (t9 != 18446285688916412052LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x1117 = 2587U;
	int16_t x1118 = INT16_MIN;
	volatile uint32_t x1119 = UINT32_MAX;
	int32_t x1120 = -1;
	volatile uint32_t t10 = 0U;

	t10 = ((x1117^x1118)<<(x1119-x1120));

	if (t10 != 4294937115U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1129 = 96610809391081LLU;
	uint32_t x1130 = UINT32_MAX;
	int8_t x1131 = -1;
	int16_t x1132 = -1;

	t11 = ((x1129^x1130)<<(x1131-x1132));

	if (t11 != 96606884354070LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1349 = UINT32_MAX;
	uint64_t x1350 = 5788163112LLU;
	static int8_t x1351 = INT8_MIN;
	uint64_t t12 = 32289582LLU;

	t12 = ((x1349^x1350)<<(x1351-x1352));

	if (t12 != 7096738775LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x1753 = 2;
	static uint16_t x1754 = UINT16_MAX;
	volatile uint16_t x1755 = 15U;
	static volatile uint32_t x1756 = 5U;
	volatile int32_t t13 = 6;

	t13 = ((x1753^x1754)<<(x1755-x1756));

	if (t13 != 67105792) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1817 = -1;
	int64_t x1819 = -1LL;
	volatile int32_t x1820 = -1;
	static int64_t t14 = 298LL;

	t14 = ((x1817^x1818)<<(x1819-x1820));

	if (t14 != 263490829LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1843 = 0;
	int32_t t15 = -2155;

	t15 = ((x1841^x1842)<<(x1843-x1844));

	if (t15 != 9676) { NG(); } else { ; }
	
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


    return 0;
}

