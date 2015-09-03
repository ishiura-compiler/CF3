#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x112 = 154U;
static volatile int32_t t5 = 39;
int8_t x333 = INT8_MAX;
int8_t x336 = INT8_MAX;
int8_t x473 = 3;
volatile int8_t x476 = 57;
volatile int32_t t8 = -18;
volatile int64_t x547 = INT64_MAX;
volatile uint64_t x633 = 1524843316530014LLU;
uint8_t x810 = 31U;
int32_t t13 = 0;
uint64_t x985 = 6LLU;
volatile uint32_t x1001 = 86U;


void f0(void) {
	static uint16_t x29 = 3U;
	static uint8_t x30 = 8U;
	volatile int16_t x31 = INT16_MIN;
	int64_t x32 = -1LL;
	volatile int64_t t0 = 101615899002LL;

	t0 = (((x29<<x30)+x31)*x32);

	if (t0 != 32000LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x45 = 61U;
	uint64_t x46 = 13LLU;
	volatile int8_t x47 = INT8_MIN;
	int8_t x48 = -1;
	volatile int32_t t1 = -101655;

	t1 = (((x45<<x46)+x47)*x48);

	if (t1 != -499584) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int8_t x94 = 1;
	int16_t x95 = INT16_MAX;
	int8_t x96 = INT8_MAX;
	volatile int32_t t2 = 19861651;

	t2 = (((x93<<x94)+x95)*x96);

	if (t2 != 4226179) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x109 = 145209LL;
	uint8_t x110 = 0U;
	static int32_t x111 = -27;
	static int64_t t3 = 229602932094904LL;

	t3 = (((x109<<x110)+x111)*x112);

	if (t3 != 22358028LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x141 = 535597U;
	uint8_t x142 = 1U;
	volatile int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MAX;
	volatile uint32_t t4 = 2009563U;

	t4 = (((x141<<x142)+x143)*x144);

	if (t4 != 744236839U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x153 = 6U;
	volatile int8_t x154 = 0;
	int8_t x155 = -7;
	static uint8_t x156 = 0U;

	t5 = (((x153<<x154)+x155)*x156);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x205 = 1U;
	int8_t x206 = 6;
	volatile uint8_t x207 = UINT8_MAX;
	static int16_t x208 = 2;
	volatile int32_t t6 = -48125397;

	t6 = (((x205<<x206)+x207)*x208);

	if (t6 != 638) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x334 = 2;
	int32_t x335 = -1;
	int32_t t7 = 43;

	t7 = (((x333<<x334)+x335)*x336);

	if (t7 != 64389) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x474 = 11U;
	int8_t x475 = INT8_MIN;

	t8 = (((x473<<x474)+x475)*x476);

	if (t8 != 342912) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x545 = 3524607476124LLU;
	int8_t x546 = 2;
	int64_t x548 = INT64_MIN;
	uint64_t t9 = 16405971963LLU;

	t9 = (((x545<<x546)+x547)*x548);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x634 = 1U;
	int64_t x635 = -1930613476LL;
	uint16_t x636 = UINT16_MAX;
	volatile uint64_t t10 = 10114312177528LLU;

	t10 = (((x633<<x634)+x635)*x636);

	if (t10 != 15393646237739269160LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x809 = 29599032529375262LLU;
	uint64_t x811 = 16270669864240LLU;
	static int32_t x812 = 8907777;
	static uint64_t t11 = 297LLU;

	t11 = (((x809<<x810)+x811)*x812);

	if (t11 != 17511983606966754608LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x897 = UINT16_MAX;
	volatile uint8_t x898 = 0U;
	uint64_t x899 = 31908LLU;
	uint16_t x900 = 119U;
	uint64_t t12 = 33530758101280099LLU;

	t12 = (((x897<<x898)+x899)*x900);

	if (t12 != 11595717LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x937 = 32;
	volatile uint16_t x938 = 0U;
	static uint8_t x939 = UINT8_MAX;
	int32_t x940 = -1;

	t13 = (((x937<<x938)+x939)*x940);

	if (t13 != -287) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x986 = 3U;
	int32_t x987 = INT32_MIN;
	int64_t x988 = INT64_MIN;
	uint64_t t14 = 37LLU;

	t14 = (((x985<<x986)+x987)*x988);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1002 = 30;
	static uint16_t x1003 = 12175U;
	uint32_t x1004 = 589U;
	uint32_t t15 = 38602000U;

	t15 = (((x1001<<x1002)+x1003)*x1004);

	if (t15 != 2154654723U) { NG(); } else { ; }
	
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

