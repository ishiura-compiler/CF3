#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x145 = 1;
static int64_t x146 = INT64_MAX;
int8_t x148 = 37;
int16_t x196 = 170;
static int16_t x269 = -2072;
uint32_t x381 = 29461504U;
int64_t t6 = -9LL;
int32_t x483 = -1;
int8_t x576 = -1;
uint64_t t8 = 84838381360LLU;
volatile uint32_t t10 = 3U;
volatile int8_t x905 = INT8_MIN;
volatile int8_t x950 = 1;
volatile int32_t t12 = -40;
int64_t x1233 = -1LL;
int64_t x1234 = INT64_MIN;
int64_t t14 = -177642799493848181LL;
int8_t x1328 = -1;
volatile uint64_t t15 = 2303832682LLU;
int32_t x1449 = 33801872;
int32_t x1450 = INT32_MIN;
int32_t t16 = -180;
int8_t x1741 = -1;
int32_t t18 = -4228;
int8_t x1844 = -29;
static uint8_t x1940 = 6U;
volatile int32_t t22 = -554384;
static int8_t x2366 = 27;
uint32_t x2377 = 281746834U;
static int16_t x2378 = INT16_MIN;
volatile int16_t x2475 = 27;
static uint32_t x2476 = UINT32_MAX;
volatile int32_t t27 = 2741646;
volatile int8_t x2809 = -1;
uint32_t x2812 = UINT32_MAX;
int32_t t29 = -29559578;
static uint8_t x2828 = 60U;
volatile uint64_t t30 = 51215LLU;
static uint8_t x2939 = 53U;
volatile uint64_t t32 = 113265014883139LLU;
int8_t x2963 = 2;
volatile int32_t t35 = -12817910;
int64_t x3165 = INT64_MIN;
int32_t x3166 = INT32_MIN;
uint8_t x3168 = 7U;
int32_t x3182 = -1743;
int64_t x3183 = -1LL;
static uint64_t x3245 = UINT64_MAX;
uint64_t x3401 = UINT64_MAX;
static volatile int32_t t43 = -20;


void f0(void) {
	uint64_t x147 = UINT64_MAX;
	volatile int64_t t0 = 777471629693416264LL;

	t0 = ((x145/x146)<<(x147+x148));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x189 = -47;
	int16_t x190 = INT16_MIN;
	volatile int16_t x191 = -1;
	volatile uint16_t x192 = 2U;
	int32_t t1 = -5559278;

	t1 = ((x189/x190)<<(x191+x192));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x193 = INT8_MAX;
	int64_t x194 = -823224LL;
	int8_t x195 = INT8_MIN;
	int64_t t2 = -167829246111365LL;

	t2 = ((x193/x194)<<(x195+x196));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x213 = -1;
	volatile int32_t x214 = INT32_MIN;
	static volatile int64_t x215 = -1LL;
	uint8_t x216 = 27U;
	volatile int32_t t3 = -65039;

	t3 = ((x213/x214)<<(x215+x216));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x270 = 2684477139600LLU;
	int16_t x271 = -1;
	int8_t x272 = 1;
	static volatile uint64_t t4 = 337546597430054764LLU;

	t4 = ((x269/x270)<<(x271+x272));

	if (t4 != 6871633LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x377 = -1;
	int16_t x378 = -1;
	int8_t x379 = 14;
	int32_t x380 = -1;
	volatile int32_t t5 = -1;

	t5 = ((x377/x378)<<(x379+x380));

	if (t5 != 8192) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x382 = INT64_MIN;
	uint16_t x383 = 2U;
	static uint64_t x384 = UINT64_MAX;

	t6 = ((x381/x382)<<(x383+x384));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x481 = -1;
	volatile int64_t x482 = INT64_MAX;
	uint8_t x484 = 1U;
	volatile int64_t t7 = -253746LL;

	t7 = ((x481/x482)<<(x483+x484));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x573 = 10717828955437LLU;
	static uint32_t x574 = 108917368U;
	uint8_t x575 = 3U;

	t8 = ((x573/x574)<<(x575+x576));

	if (t8 != 393612LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x677 = 1;
	uint64_t x678 = UINT64_MAX;
	int16_t x679 = 4;
	volatile uint16_t x680 = 30U;
	static volatile uint64_t t9 = 57301LLU;

	t9 = ((x677/x678)<<(x679+x680));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x741 = 6857U;
	uint16_t x742 = UINT16_MAX;
	int16_t x743 = -1;
	uint16_t x744 = 2U;

	t10 = ((x741/x742)<<(x743+x744));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x906 = -1;
	int8_t x907 = -13;
	int8_t x908 = 23;
	int32_t t11 = 174671;

	t11 = ((x905/x906)<<(x907+x908));

	if (t11 != 131072) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x949 = 3833;
	static uint32_t x951 = UINT32_MAX;
	volatile uint8_t x952 = 1U;

	t12 = ((x949/x950)<<(x951+x952));

	if (t12 != 3833) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x1165 = 418824LLU;
	uint32_t x1166 = UINT32_MAX;
	volatile int16_t x1167 = -1;
	int16_t x1168 = 19;
	volatile uint64_t t13 = 3891447554270041561LLU;

	t13 = ((x1165/x1166)<<(x1167+x1168));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x1235 = 15U;
	uint64_t x1236 = UINT64_MAX;

	t14 = ((x1233/x1234)<<(x1235+x1236));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1325 = 24705508314075050LLU;
	uint8_t x1326 = UINT8_MAX;
	int16_t x1327 = 52;

	t15 = ((x1325/x1326)<<(x1327+x1328));

	if (t15 != 15226670340139646976LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1451 = 7LLU;
	int32_t x1452 = -1;

	t16 = ((x1449/x1450)<<(x1451+x1452));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1573 = UINT16_MAX;
	int32_t x1574 = 1;
	int64_t x1575 = -1LL;
	uint8_t x1576 = 5U;
	static int32_t t17 = -151656566;

	t17 = ((x1573/x1574)<<(x1575+x1576));

	if (t17 != 1048560) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1742 = 215;
	int32_t x1743 = -1;
	uint32_t x1744 = 16U;

	t18 = ((x1741/x1742)<<(x1743+x1744));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x1841 = -1;
	int16_t x1842 = INT16_MAX;
	static int64_t x1843 = 46LL;
	volatile int32_t t19 = 4;

	t19 = ((x1841/x1842)<<(x1843+x1844));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x1937 = 0;
	int32_t x1938 = -1;
	static int16_t x1939 = 7;
	volatile int32_t t20 = -565363630;

	t20 = ((x1937/x1938)<<(x1939+x1940));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x2157 = -1LL;
	int64_t x2158 = INT64_MAX;
	int32_t x2159 = -1;
	int32_t x2160 = 1;
	volatile int64_t t21 = 897843457LL;

	t21 = ((x2157/x2158)<<(x2159+x2160));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x2353 = 0;
	volatile int8_t x2354 = -1;
	int8_t x2355 = -1;
	uint8_t x2356 = 17U;

	t22 = ((x2353/x2354)<<(x2355+x2356));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x2365 = INT16_MAX;
	volatile int64_t x2367 = -1LL;
	int64_t x2368 = 6LL;
	volatile int32_t t23 = -159;

	t23 = ((x2365/x2366)<<(x2367+x2368));

	if (t23 != 38816) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x2379 = -1;
	int8_t x2380 = 2;
	volatile uint32_t t24 = 944U;

	t24 = ((x2377/x2378)<<(x2379+x2380));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x2441 = INT8_MIN;
	static uint64_t x2442 = 1621613LLU;
	uint8_t x2443 = 15U;
	uint16_t x2444 = 0U;
	uint64_t t25 = 1LLU;

	t25 = ((x2441/x2442)<<(x2443+x2444));

	if (t25 != 372754109523853312LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2473 = 1614U;
	int32_t x2474 = -1;
	volatile uint32_t t26 = 118597519U;

	t26 = ((x2473/x2474)<<(x2475+x2476));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2629 = INT32_MIN;
	int32_t x2630 = INT32_MIN;
	uint16_t x2631 = 25U;
	static int8_t x2632 = 0;

	t27 = ((x2629/x2630)<<(x2631+x2632));

	if (t27 != 33554432) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2741 = 0U;
	volatile uint64_t x2742 = UINT64_MAX;
	uint8_t x2743 = 3U;
	static int64_t x2744 = -1LL;
	volatile uint64_t t28 = 8659929848393434LLU;

	t28 = ((x2741/x2742)<<(x2743+x2744));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2810 = 13;
	static uint8_t x2811 = 6U;

	t29 = ((x2809/x2810)<<(x2811+x2812));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2825 = INT8_MIN;
	uint64_t x2826 = 45173088LLU;
	int8_t x2827 = -1;

	t30 = ((x2825/x2826)<<(x2827+x2828));

	if (t30 != 11529215046068469760LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x2909 = UINT32_MAX;
	static volatile int16_t x2910 = 1;
	volatile int64_t x2911 = -1LL;
	static uint16_t x2912 = 2U;
	static uint32_t t31 = 36U;

	t31 = ((x2909/x2910)<<(x2911+x2912));

	if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2937 = -1;
	uint64_t x2938 = 1357578LLU;
	uint64_t x2940 = UINT64_MAX;

	t32 = ((x2937/x2938)<<(x2939+x2940));

	if (t32 != 9074753249151549440LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2949 = 1693U;
	static volatile uint64_t x2950 = UINT64_MAX;
	uint8_t x2951 = 18U;
	volatile uint64_t x2952 = UINT64_MAX;
	uint64_t t33 = 38588591LLU;

	t33 = ((x2949/x2950)<<(x2951+x2952));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x2961 = UINT8_MAX;
	static uint16_t x2962 = UINT16_MAX;
	int16_t x2964 = 8;
	int32_t t34 = -21669;

	t34 = ((x2961/x2962)<<(x2963+x2964));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2969 = 7949;
	int32_t x2970 = 125753;
	volatile uint64_t x2971 = UINT64_MAX;
	volatile uint8_t x2972 = 9U;

	t35 = ((x2969/x2970)<<(x2971+x2972));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x3167 = 1;
	int64_t t36 = 89513993850194453LL;

	t36 = ((x3165/x3166)<<(x3167+x3168));

	if (t36 != 1099511627776LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x3173 = UINT8_MAX;
	volatile int16_t x3174 = -6820;
	volatile uint16_t x3175 = 3U;
	uint16_t x3176 = 10U;
	int32_t t37 = -406255;

	t37 = ((x3173/x3174)<<(x3175+x3176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x3181 = 739955860952735LLU;
	int16_t x3184 = 1;
	static uint64_t t38 = 1351305LLU;

	t38 = ((x3181/x3182)<<(x3183+x3184));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x3237 = UINT16_MAX;
	uint64_t x3238 = 1676280860800540227LLU;
	static uint8_t x3239 = 0U;
	uint8_t x3240 = 41U;
	uint64_t t39 = 923115194611255182LLU;

	t39 = ((x3237/x3238)<<(x3239+x3240));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x3246 = 724U;
	uint16_t x3247 = 0U;
	volatile uint8_t x3248 = 4U;
	static volatile uint64_t t40 = 19432926198LLU;

	t40 = ((x3245/x3246)<<(x3247+x3248));

	if (t40 != 407662852457669648LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x3293 = -1LL;
	int8_t x3294 = INT8_MIN;
	int16_t x3295 = -4;
	uint32_t x3296 = 25U;
	int64_t t41 = 1455558LL;

	t41 = ((x3293/x3294)<<(x3295+x3296));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x3402 = 2U;
	uint8_t x3403 = 1U;
	int8_t x3404 = -1;
	volatile uint64_t t42 = 11791LLU;

	t42 = ((x3401/x3402)<<(x3403+x3404));

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3529 = 0U;
	int8_t x3530 = INT8_MIN;
	int32_t x3531 = -1;
	uint32_t x3532 = 1U;

	t43 = ((x3529/x3530)<<(x3531+x3532));

	if (t43 != 0) { NG(); } else { ; }
	
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
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();


    return 0;
}

