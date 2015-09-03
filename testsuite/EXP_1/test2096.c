#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x193 = INT8_MIN;
uint64_t x196 = 21LLU;
uint32_t x265 = 61886U;
uint32_t x266 = 205256013U;
int32_t x267 = 8;
uint32_t x294 = UINT32_MAX;
volatile uint64_t t3 = 46759647LLU;
uint16_t x422 = 711U;
static int16_t x423 = 0;
int16_t x532 = -67;
uint32_t x597 = 1436875U;
static uint8_t x599 = 7U;
volatile int64_t x704 = -22551996LL;
volatile int64_t t8 = 13372314LL;
volatile int32_t t9 = -52;
volatile int8_t x822 = INT8_MIN;
int64_t x824 = INT64_MIN;
int64_t t10 = 11275327549LL;
volatile int32_t x882 = INT32_MAX;
uint16_t x883 = 3U;


void f0(void) {
	int64_t x194 = INT64_MIN;
	static uint64_t x195 = 0LLU;
	volatile uint64_t t0 = 12371349224LLU;

	t0 = (((x193^x194)<<x195)*x196);

	if (t0 != 9223372036854773120LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x233 = 311U;
	static uint32_t x234 = 8294771U;
	uint16_t x235 = 31U;
	volatile uint8_t x236 = UINT8_MAX;
	volatile uint32_t t1 = 0U;

	t1 = (((x233^x234)<<x235)*x236);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x268 = -1;
	static volatile uint32_t t2 = 598365266U;

	t2 = (((x265^x266)<<x267)*x268);

	if (t2 != 3304787200U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x293 = INT8_MAX;
	uint8_t x295 = 14U;
	uint64_t x296 = 4346277986965373780LLU;

	t3 = (((x293^x294)<<x295)*x296);

	if (t3 != 11134373667058745344LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x421 = 11516;
	uint8_t x424 = 0U;
	volatile int32_t t4 = 398124;

	t4 = (((x421^x422)<<x423)*x424);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x529 = 20649473U;
	int8_t x530 = INT8_MIN;
	volatile int8_t x531 = 1;
	uint32_t t5 = 11U;

	t5 = (((x529^x530)<<x531)*x532);

	if (t5 != 2767046266U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x598 = -300337933;
	uint64_t x600 = 41339371147463LLU;
	uint64_t t6 = 28662475010LLU;

	t6 = (((x597^x598)<<x599)*x600);

	if (t6 != 8583792091485291520LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x697 = 2789208387215LL;
	uint64_t x698 = 1880LLU;
	static int8_t x699 = 13;
	uint16_t x700 = 26U;
	uint64_t t7 = 4LLU;

	t7 = (((x697^x698)<<x699)*x700);

	if (t7 != 594079072552402944LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x701 = INT16_MIN;
	static uint32_t x702 = 5U;
	int8_t x703 = 29;

	t8 = (((x701^x702)<<x703)*x704);

	if (t8 != -60537553299701760LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x805 = 0;
	uint16_t x806 = 0U;
	uint16_t x807 = 1U;
	uint16_t x808 = 16U;

	t9 = (((x805^x806)<<x807)*x808);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x821 = INT8_MIN;
	uint8_t x823 = 2U;

	t10 = (((x821^x822)<<x823)*x824);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x881 = 1832591U;
	static int8_t x884 = 0;
	static uint32_t t11 = 3U;

	t11 = (((x881^x882)<<x883)*x884);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x949 = INT32_MIN;
	int8_t x950 = -1;
	int8_t x951 = 0;
	int32_t x952 = -1;
	volatile int32_t t12 = -3922619;

	t12 = (((x949^x950)<<x951)*x952);

	if (t12 != -2147483647) { NG(); } else { ; }
	
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

