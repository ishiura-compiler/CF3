#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x19 = UINT64_MAX;
uint64_t t0 = 121951643533LLU;
volatile int16_t x127 = -145;
static int32_t x311 = INT32_MIN;
static int8_t x312 = 0;
static int16_t x349 = -1846;
static uint8_t x370 = 13U;
static int8_t x407 = -4;
uint16_t x525 = 485U;
static uint64_t x527 = 2130497128871838LLU;
uint64_t t7 = 65893417443LLU;
volatile uint8_t x543 = UINT8_MAX;
static int64_t t8 = 168739900LL;
volatile uint64_t t9 = 0LLU;
uint64_t x635 = UINT64_MAX;
uint16_t x636 = 12U;
uint8_t x650 = 0U;
uint8_t x812 = 2U;
static uint64_t t12 = 884261735LLU;
uint32_t x818 = 1408485U;
uint8_t x1118 = 5U;
static int32_t t16 = -5255;
uint32_t x1433 = UINT32_MAX;


void f0(void) {
	int32_t x17 = INT32_MIN;
	volatile int32_t x18 = INT32_MIN;
	volatile uint8_t x20 = 25U;

	t0 = (x17/((x18-x19)<<x20));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x89 = 1667518986771LLU;
	volatile uint64_t x90 = 8769051LLU;
	int8_t x91 = INT8_MAX;
	uint16_t x92 = 2U;
	volatile uint64_t t1 = 1LLU;

	t1 = (x89/((x90-x91)<<x92));

	if (t1 != 47540LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x125 = UINT16_MAX;
	static volatile uint8_t x126 = 11U;
	uint8_t x128 = 18U;
	volatile int32_t t2 = 192778955;

	t2 = (x125/((x126-x127)<<x128));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x309 = 1U;
	static uint64_t x310 = UINT64_MAX;
	uint64_t t3 = 1013265011254701LLU;

	t3 = (x309/((x310-x311)<<x312));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x350 = UINT8_MAX;
	static int8_t x351 = INT8_MAX;
	int8_t x352 = 1;
	int32_t t4 = 1974;

	t4 = (x349/((x350-x351)<<x352));

	if (t4 != -7) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x369 = -1;
	static uint8_t x371 = 0U;
	volatile int16_t x372 = 0;
	volatile int32_t t5 = -1016146670;

	t5 = (x369/((x370-x371)<<x372));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x405 = 49418U;
	uint8_t x406 = UINT8_MAX;
	int16_t x408 = 15;
	volatile uint32_t t6 = 110229139U;

	t6 = (x405/((x406-x407)<<x408));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x526 = 17379142LL;
	static uint32_t x528 = 11U;

	t7 = (x525/((x526-x527)<<x528));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x541 = -1;
	volatile int64_t x542 = INT64_MAX;
	uint8_t x544 = 0U;

	t8 = (x541/((x542-x543)<<x544));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x609 = 47509179031479LLU;
	uint64_t x610 = 188552374525057290LLU;
	static int8_t x611 = -1;
	int32_t x612 = 1;

	t9 = (x609/((x610-x611)<<x612));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x633 = INT32_MIN;
	int64_t x634 = INT64_MIN;
	static uint64_t t10 = 5947256962681298LLU;

	t10 = (x633/((x634-x635)<<x636));

	if (t10 != 4503599626846208LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x649 = INT32_MIN;
	volatile int64_t x651 = -1LL;
	int32_t x652 = 0;
	volatile int64_t t11 = 3288472142221451485LL;

	t11 = (x649/((x650-x651)<<x652));

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x809 = 68433984584729LLU;
	uint64_t x810 = 44619LLU;
	static uint64_t x811 = 0LLU;

	t12 = (x809/((x810-x811)<<x812));

	if (t12 != 383435221LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x817 = -1;
	int32_t x819 = INT32_MIN;
	uint16_t x820 = 26U;
	volatile uint32_t t13 = 5592U;

	t13 = (x817/((x818-x819)<<x820));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x1017 = INT64_MIN;
	static volatile int32_t x1018 = -614171328;
	uint32_t x1019 = 743687394U;
	static volatile uint16_t x1020 = 0U;
	volatile int64_t t14 = 50164LL;

	t14 = (x1017/((x1018-x1019)<<x1020));

	if (t14 != -3140289779LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x1117 = 21893721104875134LLU;
	uint64_t x1119 = 56887LLU;
	volatile uint8_t x1120 = 0U;
	volatile uint64_t t15 = 38048LLU;

	t15 = (x1117/((x1118-x1119)<<x1120));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1269 = 13U;
	int32_t x1270 = 675364;
	int16_t x1271 = INT16_MIN;
	volatile int16_t x1272 = 7;

	t16 = (x1269/((x1270-x1271)<<x1272));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1317 = INT8_MAX;
	int64_t x1318 = 812740718LL;
	int8_t x1319 = -1;
	volatile uint8_t x1320 = 27U;
	volatile int64_t t17 = 246002178LL;

	t17 = (x1317/((x1318-x1319)<<x1320));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1325 = INT16_MAX;
	uint8_t x1326 = UINT8_MAX;
	uint16_t x1327 = 128U;
	volatile uint64_t x1328 = 1LLU;
	static volatile int32_t t18 = -1654793;

	t18 = (x1325/((x1326-x1327)<<x1328));

	if (t18 != 129) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1434 = -1;
	int8_t x1435 = -13;
	uint8_t x1436 = 12U;
	static uint32_t t19 = 234731212U;

	t19 = (x1433/((x1434-x1435)<<x1436));

	if (t19 != 87381U) { NG(); } else { ; }
	
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

