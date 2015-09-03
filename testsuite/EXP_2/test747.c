#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x415 = INT8_MIN;
int8_t x661 = 0;
int16_t x725 = INT16_MAX;
uint8_t x728 = 3U;
volatile int32_t x903 = -1;
int16_t x1050 = INT16_MIN;
static int16_t x1052 = 1;
uint8_t x1291 = UINT8_MAX;
uint32_t t7 = 15548052U;
uint16_t x1694 = 2U;
int8_t x2096 = 12;
int8_t x2152 = 0;
uint64_t x2687 = 567388862381512713LLU;
static int32_t x2775 = 23;
uint8_t x2776 = 0U;
uint64_t x3113 = 347241708619643LLU;
uint16_t x3116 = 2U;
uint16_t x3125 = 504U;
volatile uint32_t x3127 = 1535730U;
volatile uint8_t x3510 = 1U;
uint32_t x3512 = 1U;
int32_t x3871 = -1;


void f0(void) {
	static uint64_t x277 = 2LLU;
	static uint16_t x278 = 0U;
	int64_t x279 = INT64_MIN;
	uint8_t x280 = 1U;
	uint64_t t0 = 6LLU;

	t0 = ((x277<<(x278%x279))<<x280);

	if (t0 != 4LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x413 = INT32_MAX;
	int64_t x414 = INT64_MIN;
	int16_t x416 = 0;
	int32_t t1 = INT32_MAX;

	t1 = ((x413<<(x414%x415))<<x416);

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x662 = UINT32_MAX;
	int64_t x663 = -4LL;
	int16_t x664 = 19;
	volatile int32_t t2 = -52971815;

	t2 = ((x661<<(x662%x663))<<x664);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x726 = INT32_MAX;
	int8_t x727 = -1;
	int32_t t3 = -904;

	t3 = ((x725<<(x726%x727))<<x728);

	if (t3 != 262136) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x901 = UINT8_MAX;
	volatile int16_t x902 = INT16_MIN;
	int16_t x904 = 4;
	int32_t t4 = -1;

	t4 = ((x901<<(x902%x903))<<x904);

	if (t4 != 4080) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x945 = UINT16_MAX;
	volatile int32_t x946 = INT32_MAX;
	int16_t x947 = 31;
	static uint8_t x948 = 3U;
	volatile int32_t t5 = -6;

	t5 = ((x945<<(x946%x947))<<x948);

	if (t5 != 1048560) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x1049 = UINT32_MAX;
	int16_t x1051 = INT16_MIN;
	uint32_t t6 = 278U;

	t6 = ((x1049<<(x1050%x1051))<<x1052);

	if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x1289 = UINT32_MAX;
	volatile uint16_t x1290 = 12U;
	int8_t x1292 = 1;

	t7 = ((x1289<<(x1290%x1291))<<x1292);

	if (t7 != 4294959104U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x1693 = INT64_MAX;
	int16_t x1695 = -1;
	uint16_t x1696 = 0U;
	int64_t t8 = INT64_MAX;

	t8 = ((x1693<<(x1694%x1695))<<x1696);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x2093 = INT8_MAX;
	static uint8_t x2094 = 0U;
	int8_t x2095 = -1;
	volatile int32_t t9 = -10051876;

	t9 = ((x2093<<(x2094%x2095))<<x2096);

	if (t9 != 520192) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x2149 = UINT64_MAX;
	static int16_t x2150 = INT16_MAX;
	int8_t x2151 = INT8_MAX;
	uint64_t t10 = 4LLU;

	t10 = ((x2149<<(x2150%x2151))<<x2152);

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x2241 = 223U;
	static volatile uint64_t x2242 = 2911717332LLU;
	static uint16_t x2243 = 13U;
	static uint8_t x2244 = 1U;
	uint32_t t11 = 350U;

	t11 = ((x2241<<(x2242%x2243))<<x2244);

	if (t11 != 7136U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x2389 = INT8_MAX;
	int16_t x2390 = INT16_MIN;
	int64_t x2391 = -1LL;
	int8_t x2392 = 7;
	volatile int32_t t12 = -6712022;

	t12 = ((x2389<<(x2390%x2391))<<x2392);

	if (t12 != 16256) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x2497 = UINT64_MAX;
	uint8_t x2498 = 0U;
	int64_t x2499 = INT64_MIN;
	uint8_t x2500 = 1U;
	uint64_t t13 = 656353085LLU;

	t13 = ((x2497<<(x2498%x2499))<<x2500);

	if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x2685 = 5LL;
	uint16_t x2686 = 29U;
	int8_t x2688 = 2;
	volatile int64_t t14 = -3LL;

	t14 = ((x2685<<(x2686%x2687))<<x2688);

	if (t14 != 10737418240LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x2773 = 5307896793LL;
	int32_t x2774 = INT32_MAX;
	volatile int64_t t15 = -36682851LL;

	t15 = ((x2773<<(x2774%x2775))<<x2776);

	if (t15 != 169852697376LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x3114 = INT64_MIN;
	int8_t x3115 = INT8_MIN;
	volatile uint64_t t16 = 1LLU;

	t16 = ((x3113<<(x3114%x3115))<<x3116);

	if (t16 != 1388966834478572LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x3126 = 0;
	int32_t x3128 = 2;
	int32_t t17 = -2031542;

	t17 = ((x3125<<(x3126%x3127))<<x3128);

	if (t17 != 2016) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x3509 = 11382075U;
	int16_t x3511 = INT16_MAX;
	uint32_t t18 = 668283034U;

	t18 = ((x3509<<(x3510%x3511))<<x3512);

	if (t18 != 45528300U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x3633 = 4156449846LLU;
	int16_t x3634 = -1;
	static int8_t x3635 = 1;
	volatile uint8_t x3636 = 15U;
	uint64_t t19 = 2644LLU;

	t19 = ((x3633<<(x3634%x3635))<<x3636);

	if (t19 != 136198548553728LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x3869 = 1312U;
	int32_t x3870 = 459;
	static uint16_t x3872 = 9U;
	volatile int32_t t20 = 16367221;

	t20 = ((x3869<<(x3870%x3871))<<x3872);

	if (t20 != 671744) { NG(); } else { ; }
	
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


    return 0;
}

