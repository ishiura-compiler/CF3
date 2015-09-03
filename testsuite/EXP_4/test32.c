#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t0 = 439U;
int16_t x248 = 0;
static uint8_t x617 = 7U;
uint8_t x619 = 1U;
uint32_t x620 = UINT32_MAX;
static int32_t x970 = -5;
static uint64_t x1108 = 2LLU;
int32_t t8 = -5;
uint16_t x1583 = UINT16_MAX;
volatile uint16_t x1837 = UINT16_MAX;
volatile int8_t x1839 = 1;
int32_t t11 = 3745;
uint16_t x2013 = UINT16_MAX;
uint32_t x2015 = 1U;
volatile uint32_t x2073 = 21U;
uint32_t x2182 = 5U;
volatile int8_t x2210 = INT8_MIN;
uint64_t x2212 = UINT64_MAX;
static uint64_t x2219 = UINT64_MAX;
int8_t x2267 = 1;
int64_t x2347 = -1LL;
static uint64_t t18 = 164LLU;
static int8_t x2497 = INT8_MAX;
int8_t x2498 = -4;
static volatile int32_t t20 = 195320177;
uint8_t x2574 = 0U;
static int16_t x2802 = 1;
int64_t x2803 = 8LL;
static int8_t x2979 = INT8_MAX;
uint64_t x2980 = 932424282224LLU;
int64_t t24 = INT64_MAX;
int32_t t26 = INT32_MAX;
uint8_t x3579 = 1U;


void f0(void) {
	uint32_t x37 = 41971U;
	int16_t x38 = -1;
	static int32_t x39 = -1;
	uint64_t x40 = 1LLU;

	t0 = (x37<<(x38*(x39+x40)));

	if (t0 != 41971U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x245 = UINT32_MAX;
	int64_t x246 = -1LL;
	uint64_t x247 = UINT64_MAX;
	uint32_t t1 = 1U;

	t1 = (x245<<(x246*(x247+x248)));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x497 = INT16_MAX;
	static uint32_t x498 = UINT32_MAX;
	int8_t x499 = -1;
	volatile uint64_t x500 = 1LLU;
	volatile int32_t t2 = -1281;

	t2 = (x497<<(x498*(x499+x500)));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x618 = INT64_MIN;
	static volatile int32_t t3 = -262127;

	t3 = (x617<<(x618*(x619+x620)));

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x801 = INT32_MAX;
	static int64_t x802 = INT64_MIN;
	uint8_t x803 = UINT8_MAX;
	uint64_t x804 = 612825064836227LLU;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x801<<(x802*(x803+x804)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x969 = UINT16_MAX;
	int16_t x971 = -1;
	volatile int32_t x972 = -1;
	int32_t t5 = 1;

	t5 = (x969<<(x970*(x971+x972)));

	if (t5 != 67107840) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x1033 = 4U;
	int64_t x1034 = INT64_MIN;
	uint64_t x1035 = UINT64_MAX;
	static uint8_t x1036 = UINT8_MAX;
	int32_t t6 = 504922;

	t6 = (x1033<<(x1034*(x1035+x1036)));

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x1105 = 176;
	volatile int64_t x1106 = INT64_MIN;
	int8_t x1107 = -22;
	volatile int32_t t7 = 23;

	t7 = (x1105<<(x1106*(x1107+x1108)));

	if (t7 != 176) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x1125 = INT16_MAX;
	uint32_t x1126 = UINT32_MAX;
	uint32_t x1127 = UINT32_MAX;
	volatile uint8_t x1128 = 1U;

	t8 = (x1125<<(x1126*(x1127+x1128)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x1221 = UINT16_MAX;
	int8_t x1222 = INT8_MAX;
	int32_t x1223 = 0;
	int8_t x1224 = 0;
	volatile int32_t t9 = -54;

	t9 = (x1221<<(x1222*(x1223+x1224)));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x1581 = 29U;
	int16_t x1582 = 0;
	int16_t x1584 = INT16_MIN;
	static int32_t t10 = -290614;

	t10 = (x1581<<(x1582*(x1583+x1584)));

	if (t10 != 29) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1838 = UINT8_MAX;
	int16_t x1840 = -1;

	t11 = (x1837<<(x1838*(x1839+x1840)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x2014 = 69U;
	volatile int64_t x2016 = -1LL;
	int32_t t12 = 0;

	t12 = (x2013<<(x2014*(x2015+x2016)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x2074 = 2;
	int8_t x2075 = -1;
	volatile uint32_t x2076 = 5U;
	volatile uint32_t t13 = 54488U;

	t13 = (x2073<<(x2074*(x2075+x2076)));

	if (t13 != 5376U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x2181 = INT8_MAX;
	int32_t x2183 = 1;
	int32_t x2184 = -1;
	int32_t t14 = -21;

	t14 = (x2181<<(x2182*(x2183+x2184)));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x2209 = 12515U;
	uint16_t x2211 = 1U;
	volatile uint32_t t15 = 136533U;

	t15 = (x2209<<(x2210*(x2211+x2212)));

	if (t15 != 12515U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x2217 = INT8_MAX;
	int64_t x2218 = INT64_MIN;
	uint16_t x2220 = 1423U;
	int32_t t16 = 3251;

	t16 = (x2217<<(x2218*(x2219+x2220)));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x2265 = UINT32_MAX;
	uint64_t x2266 = UINT64_MAX;
	static int16_t x2268 = -1;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x2265<<(x2266*(x2267+x2268)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x2345 = 2070671LLU;
	int16_t x2346 = 0;
	int8_t x2348 = INT8_MIN;

	t18 = (x2345<<(x2346*(x2347+x2348)));

	if (t18 != 2070671LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x2477 = INT16_MAX;
	int16_t x2478 = -1;
	int8_t x2479 = -1;
	int8_t x2480 = -3;
	int32_t t19 = 59589;

	t19 = (x2477<<(x2478*(x2479+x2480)));

	if (t19 != 524272) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x2499 = INT64_MIN;
	uint64_t x2500 = UINT64_MAX;

	t20 = (x2497<<(x2498*(x2499+x2500)));

	if (t20 != 2032) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x2573 = 551079865U;
	static volatile uint8_t x2575 = 3U;
	int64_t x2576 = -88007348LL;
	volatile uint32_t t21 = 25362804U;

	t21 = (x2573<<(x2574*(x2575+x2576)));

	if (t21 != 551079865U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x2801 = 5;
	static uint64_t x2804 = UINT64_MAX;
	int32_t t22 = -8368322;

	t22 = (x2801<<(x2802*(x2803+x2804)));

	if (t22 != 640) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x2809 = 0U;
	volatile int16_t x2810 = -1;
	int8_t x2811 = -2;
	uint32_t x2812 = UINT32_MAX;
	volatile int32_t t23 = 9610752;

	t23 = (x2809<<(x2810*(x2811+x2812)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x2977 = INT64_MAX;
	uint32_t x2978 = 0U;

	t24 = (x2977<<(x2978*(x2979+x2980)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x3057 = 326LLU;
	static uint8_t x3058 = 0U;
	int64_t x3059 = INT64_MAX;
	uint64_t x3060 = 107188LLU;
	volatile uint64_t t25 = 97830141LLU;

	t25 = (x3057<<(x3058*(x3059+x3060)));

	if (t25 != 326LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x3137 = INT32_MAX;
	volatile uint8_t x3138 = 0U;
	uint64_t x3139 = UINT64_MAX;
	int16_t x3140 = 4;

	t26 = (x3137<<(x3138*(x3139+x3140)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x3341 = 243939U;
	int64_t x3342 = -1LL;
	volatile uint8_t x3343 = 1U;
	static int32_t x3344 = -1;
	volatile uint32_t t27 = 2U;

	t27 = (x3341<<(x3342*(x3343+x3344)));

	if (t27 != 243939U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x3437 = 191U;
	volatile int32_t x3438 = 0;
	uint16_t x3439 = 284U;
	static int16_t x3440 = INT16_MAX;
	volatile int32_t t28 = -946813;

	t28 = (x3437<<(x3438*(x3439+x3440)));

	if (t28 != 191) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x3577 = UINT32_MAX;
	int32_t x3578 = -1;
	static int8_t x3580 = -1;
	uint32_t t29 = UINT32_MAX;

	t29 = (x3577<<(x3578*(x3579+x3580)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
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


    return 0;
}

