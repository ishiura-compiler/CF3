#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x77 = INT16_MAX;
int64_t t1 = 850857LL;
int16_t x348 = -46;
int64_t x383 = -1LL;
uint8_t x409 = 13U;
volatile uint8_t x513 = UINT8_MAX;
uint8_t x638 = 9U;
int8_t x681 = INT8_MAX;
uint64_t x857 = 92276657184583340LLU;
volatile int16_t x858 = 6;
int16_t x860 = INT16_MIN;
volatile int64_t x936 = INT64_MAX;
int16_t x966 = 0;
volatile uint32_t x1023 = 12U;
int64_t t14 = -3086010648740088988LL;
uint8_t x1321 = 0U;
volatile uint16_t x1359 = UINT16_MAX;
static uint64_t x1799 = UINT64_MAX;
static int64_t t19 = -3259131671618445LL;
int64_t x1845 = 358159724LL;
static uint8_t x1979 = 1U;
static uint32_t x1980 = 682122U;
static volatile uint32_t t21 = 1347576U;
int64_t x2148 = INT64_MIN;
volatile int64_t x2264 = INT64_MAX;
int8_t x2265 = INT8_MAX;
static uint32_t x2268 = 6798U;


void f0(void) {
	int16_t x78 = 1;
	volatile uint16_t x79 = 14954U;
	static uint64_t x80 = 6344262252263086669LLU;
	volatile uint64_t t0 = 14LLU;

	t0 = ((x77<<x78)*(x79-x80));

	if (t0 != 6282237531442102214LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x173 = 1;
	uint8_t x174 = 0U;
	int64_t x175 = 798038213612183849LL;
	static int64_t x176 = -1547430LL;

	t1 = ((x173<<x174)*(x175-x176));

	if (t1 != 798038213613731279LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x201 = 129131570714LL;
	uint8_t x202 = 9U;
	static volatile uint64_t x203 = UINT64_MAX;
	static int16_t x204 = 2;
	static volatile uint64_t t2 = 52756259884LLU;

	t2 = ((x201<<x202)*(x203-x204));

	if (t2 != 18446545727616934912LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x345 = 59U;
	uint8_t x346 = 2U;
	volatile int8_t x347 = 1;
	int32_t t3 = -3739308;

	t3 = ((x345<<x346)*(x347-x348));

	if (t3 != 11092) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = 3;
	static int64_t x384 = -1LL;
	volatile int64_t t4 = 303LL;

	t4 = ((x381<<x382)*(x383-x384));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x410 = 0U;
	uint64_t x411 = 99LLU;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t5 = 48675490504LLU;

	t5 = ((x409<<x410)*(x411-x412));

	if (t5 != 2951LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x421 = 103U;
	uint16_t x422 = 0U;
	int8_t x423 = -29;
	static uint8_t x424 = UINT8_MAX;
	int32_t t6 = 242374;

	t6 = ((x421<<x422)*(x423-x424));

	if (t6 != -29252) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x514 = 14U;
	int16_t x515 = -13720;
	uint64_t x516 = UINT64_MAX;
	static uint64_t t7 = 190364728LLU;

	t7 = ((x513<<x514)*(x515-x516));

	if (t7 != 18446744016392667136LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x637 = UINT16_MAX;
	static volatile int16_t x639 = INT16_MIN;
	uint32_t x640 = 60794U;
	static uint32_t t8 = 237U;

	t8 = ((x637<<x638)*(x639-x640));

	if (t8 != 249230336U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x682 = 4U;
	int32_t x683 = INT32_MIN;
	static int64_t x684 = -129123LL;
	volatile int64_t t9 = -2LL;

	t9 = ((x681<<x682)*(x683-x684));

	if (t9 != -4363424394800LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x859 = INT16_MIN;
	uint64_t t10 = 7857LLU;

	t10 = ((x857<<x858)*(x859-x860));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x881 = 459068558U;
	static uint16_t x882 = 1U;
	volatile int64_t x883 = 7919LL;
	static int16_t x884 = INT16_MIN;
	volatile int64_t t11 = 3312881093LL;

	t11 = ((x881<<x882)*(x883-x884));

	if (t11 != 37356244838692LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x933 = 0;
	static uint8_t x934 = 3U;
	int8_t x935 = INT8_MAX;
	volatile int64_t t12 = -20831LL;

	t12 = ((x933<<x934)*(x935-x936));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x965 = UINT16_MAX;
	volatile int64_t x967 = -158LL;
	int64_t x968 = 9985902893LL;
	int64_t t13 = -2670794LL;

	t13 = ((x965<<x966)*(x967-x968));

	if (t13 != -654426156447285LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x1021 = 16248028U;
	static int8_t x1022 = 9;
	int64_t x1024 = -1LL;

	t14 = ((x1021<<x1022)*(x1023-x1024));

	if (t14 != 52312299520LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1322 = 14U;
	uint16_t x1323 = UINT16_MAX;
	int64_t x1324 = 10277LL;
	int64_t t15 = -3323809227857LL;

	t15 = ((x1321<<x1322)*(x1323-x1324));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x1357 = UINT64_MAX;
	uint8_t x1358 = 33U;
	static int8_t x1360 = -62;
	uint64_t t16 = 39298008810868LLU;

	t16 = ((x1357<<x1358)*(x1359-x1360));

	if (t16 != 18446180599770120192LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1481 = 864U;
	uint16_t x1482 = 0U;
	volatile uint16_t x1483 = 10209U;
	static uint32_t x1484 = UINT32_MAX;
	static uint32_t t17 = 3937369U;

	t17 = ((x1481<<x1482)*(x1483-x1484));

	if (t17 != 8821440U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1797 = INT8_MAX;
	uint8_t x1798 = 0U;
	int64_t x1800 = -1LL;
	volatile uint64_t t18 = 4LLU;

	t18 = ((x1797<<x1798)*(x1799-x1800));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1817 = 0U;
	int16_t x1818 = 1;
	int16_t x1819 = INT16_MAX;
	static int64_t x1820 = INT64_MAX;

	t19 = ((x1817<<x1818)*(x1819-x1820));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1846 = 0U;
	static int32_t x1847 = -693748230;
	uint16_t x1848 = UINT16_MAX;
	static volatile int64_t t20 = 170308876117861LL;

	t20 = ((x1845<<x1846)*(x1847-x1848));

	if (t20 != -248496146579800860LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1977 = INT32_MAX;
	int16_t x1978 = 0;

	t21 = ((x1977<<x1978)*(x1979-x1980));

	if (t21 != 2148165769U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x2145 = 86741487430204295LLU;
	uint32_t x2146 = 17U;
	int16_t x2147 = -195;
	volatile uint64_t t22 = 18698LLU;

	t22 = ((x2145<<x2146)*(x2147-x2148));

	if (t22 != 11236354767386443776LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x2261 = 0;
	static int8_t x2262 = 1;
	static int64_t x2263 = 167081LL;
	volatile int64_t t23 = -13858652323416343LL;

	t23 = ((x2261<<x2262)*(x2263-x2264));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x2266 = 1;
	int16_t x2267 = -1;
	uint32_t t24 = 54699U;

	t24 = ((x2265<<x2266)*(x2267-x2268));

	if (t24 != 4293240350U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x2345 = 7453LLU;
	static uint16_t x2346 = 1U;
	uint64_t x2347 = 2244217896032578LLU;
	int64_t x2348 = INT64_MIN;
	static uint64_t t25 = 833970644214LLU;

	t25 = ((x2345<<x2346)*(x2347-x2348));

	if (t25 != 15005567884552056052LLU) { NG(); } else { ; }
	
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

