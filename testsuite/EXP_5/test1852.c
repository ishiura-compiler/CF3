#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x94 = INT16_MIN;
int16_t x96 = INT16_MIN;
uint8_t x117 = UINT8_MAX;
int8_t x119 = 1;
int32_t t2 = 4336;
int8_t x275 = 4;
static int16_t x410 = 0;
static int8_t x412 = 4;
static int32_t x532 = -1;
volatile int8_t x630 = INT8_MAX;
int8_t x882 = INT8_MAX;
uint64_t x883 = 0LLU;
volatile int16_t x994 = 6;
volatile uint32_t x1114 = 69U;
int64_t t16 = 61LL;
int64_t x1290 = 1LL;
uint8_t x1292 = 0U;
static int8_t x1491 = 20;
static volatile uint16_t x1492 = 23U;
static uint16_t x1819 = 8U;
volatile uint32_t t21 = 13U;
int16_t x1875 = -1;
int32_t t23 = -1;
static volatile int64_t t25 = -62702984LL;
uint8_t x2276 = 4U;
volatile int32_t t27 = 56107975;
uint16_t x2431 = 24U;
int32_t x2481 = INT32_MAX;
int32_t x2482 = INT32_MIN;
uint8_t x2483 = 14U;
uint8_t x2533 = 0U;
volatile int32_t x2718 = -365;
uint32_t x2808 = UINT32_MAX;
int32_t t36 = -366241;
int8_t x3018 = 2;
static int16_t x3523 = 6;
volatile uint16_t x3524 = 1U;
static int32_t t43 = 52927;
volatile uint16_t x3665 = 827U;
volatile int32_t t46 = 2;
static int64_t x3794 = -9LL;
volatile uint8_t x3795 = 30U;


void f0(void) {
	volatile uint16_t x17 = 47U;
	int64_t x18 = -1LL;
	int16_t x19 = -1;
	static int8_t x20 = -1;
	volatile int32_t t0 = 0;

	t0 = (x17<<((x18&x19)^x20));

	if (t0 != 47) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x93 = 533498U;
	int8_t x95 = -1;
	static uint32_t t1 = 2028081U;

	t1 = (x93<<((x94&x95)^x96));

	if (t1 != 533498U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x118 = INT16_MAX;
	uint8_t x120 = 9U;

	t2 = (x117<<((x118&x119)^x120));

	if (t2 != 65280) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MAX;
	uint8_t x163 = 14U;
	uint64_t x164 = 0LLU;
	int32_t t3 = -10039;

	t3 = (x161<<((x162&x163)^x164));

	if (t3 != 536854528) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x273 = 472;
	volatile int16_t x274 = INT16_MIN;
	uint64_t x276 = 0LLU;
	int32_t t4 = 2614279;

	t4 = (x273<<((x274&x275)^x276));

	if (t4 != 472) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x297 = 0U;
	static int8_t x298 = -11;
	int8_t x299 = -3;
	static uint32_t x300 = UINT32_MAX;
	volatile int32_t t5 = -5231;

	t5 = (x297<<((x298&x299)^x300));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x337 = UINT32_MAX;
	uint16_t x338 = 515U;
	int64_t x339 = 0LL;
	static uint8_t x340 = 9U;
	uint32_t t6 = 433U;

	t6 = (x337<<((x338&x339)^x340));

	if (t6 != 4294966784U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x409 = 2U;
	uint16_t x411 = 4039U;
	volatile int32_t t7 = 13444728;

	t7 = (x409<<((x410&x411)^x412));

	if (t7 != 32) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x529 = 41U;
	volatile int64_t x530 = -1LL;
	int64_t x531 = -1LL;
	int32_t t8 = 115;

	t8 = (x529<<((x530&x531)^x532));

	if (t8 != 41) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x629 = 29U;
	int64_t x631 = INT64_MIN;
	static uint8_t x632 = 4U;
	volatile int32_t t9 = -422502906;

	t9 = (x629<<((x630&x631)^x632));

	if (t9 != 464) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x649 = 0U;
	volatile int64_t x650 = INT64_MIN;
	uint32_t x651 = 5157U;
	uint16_t x652 = 1U;
	int32_t t10 = 110;

	t10 = (x649<<((x650&x651)^x652));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x753 = 77U;
	static uint16_t x754 = 1U;
	uint16_t x755 = 8U;
	volatile uint64_t x756 = 1LLU;
	volatile uint32_t t11 = 22U;

	t11 = (x753<<((x754&x755)^x756));

	if (t11 != 154U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x853 = 4U;
	int16_t x854 = -1;
	static int16_t x855 = INT16_MAX;
	int16_t x856 = INT16_MAX;
	static int32_t t12 = -1519101;

	t12 = (x853<<((x854&x855)^x856));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x881 = 278336768LL;
	volatile uint8_t x884 = 2U;
	int64_t t13 = 137125103451829622LL;

	t13 = (x881<<((x882&x883)^x884));

	if (t13 != 1113347072LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x993 = 91U;
	static int8_t x995 = -1;
	uint8_t x996 = 1U;
	volatile int32_t t14 = -82520456;

	t14 = (x993<<((x994&x995)^x996));

	if (t14 != 11648) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x1105 = UINT32_MAX;
	volatile int32_t x1106 = -1;
	int8_t x1107 = -1;
	static int16_t x1108 = -1;
	uint32_t t15 = UINT32_MAX;

	t15 = (x1105<<((x1106&x1107)^x1108));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1113 = 517LL;
	uint8_t x1115 = 0U;
	volatile int16_t x1116 = 14;

	t16 = (x1113<<((x1114&x1115)^x1116));

	if (t16 != 8470528LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x1289 = 6517;
	static int8_t x1291 = -1;
	volatile int32_t t17 = 399112;

	t17 = (x1289<<((x1290&x1291)^x1292));

	if (t17 != 13034) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1489 = INT16_MAX;
	int32_t x1490 = INT32_MAX;
	int32_t t18 = -978;

	t18 = (x1489<<((x1490&x1491)^x1492));

	if (t18 != 262136) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1589 = 187949U;
	int64_t x1590 = 2535277449180848754LL;
	static volatile int16_t x1591 = 507;
	volatile int8_t x1592 = INT8_MAX;
	volatile uint32_t t19 = 187U;

	t19 = (x1589<<((x1590&x1591)^x1592));

	if (t19 != 1539678208U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1689 = 3;
	int64_t x1690 = INT64_MIN;
	int8_t x1691 = INT8_MIN;
	int64_t x1692 = INT64_MIN;
	volatile int32_t t20 = -63443;

	t20 = (x1689<<((x1690&x1691)^x1692));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1817 = UINT32_MAX;
	uint8_t x1818 = UINT8_MAX;
	uint8_t x1820 = 7U;

	t21 = (x1817<<((x1818&x1819)^x1820));

	if (t21 != 4294934528U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1873 = UINT16_MAX;
	int32_t x1874 = -1;
	volatile int32_t x1876 = -1;
	int32_t t22 = -1616;

	t22 = (x1873<<((x1874&x1875)^x1876));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1973 = 10;
	volatile int64_t x1974 = 23074LL;
	int32_t x1975 = INT32_MIN;
	volatile uint8_t x1976 = 0U;

	t23 = (x1973<<((x1974&x1975)^x1976));

	if (t23 != 10) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1981 = UINT64_MAX;
	uint64_t x1982 = UINT64_MAX;
	static int32_t x1983 = -1;
	static int8_t x1984 = -4;
	uint64_t t24 = 29939107130LLU;

	t24 = (x1981<<((x1982&x1983)^x1984));

	if (t24 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x2101 = 4554165700593LL;
	int64_t x2102 = -3LL;
	int64_t x2103 = INT64_MIN;
	int64_t x2104 = INT64_MIN;

	t25 = (x2101<<((x2102&x2103)^x2104));

	if (t25 != 4554165700593LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2257 = 1;
	volatile int64_t x2258 = INT64_MIN;
	static int32_t x2259 = INT32_MAX;
	uint8_t x2260 = 9U;
	int32_t t26 = -44723;

	t26 = (x2257<<((x2258&x2259)^x2260));

	if (t26 != 512) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2273 = 1;
	int32_t x2274 = -1;
	int32_t x2275 = 15;

	t27 = (x2273<<((x2274&x2275)^x2276));

	if (t27 != 2048) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x2361 = 6;
	int16_t x2362 = -18;
	volatile int8_t x2363 = -1;
	volatile int8_t x2364 = -21;
	static volatile int32_t t28 = -12;

	t28 = (x2361<<((x2362&x2363)^x2364));

	if (t28 != 192) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2429 = 3;
	static int32_t x2430 = INT32_MAX;
	int64_t x2432 = 2LL;
	volatile int32_t t29 = 1052;

	t29 = (x2429<<((x2430&x2431)^x2432));

	if (t29 != 201326592) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x2484 = 0U;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x2481<<((x2482&x2483)^x2484));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x2497 = 103233223582326LLU;
	static int32_t x2498 = INT32_MIN;
	static int8_t x2499 = INT8_MIN;
	volatile int32_t x2500 = INT32_MIN;
	uint64_t t31 = 82214319368007006LLU;

	t31 = (x2497<<((x2498&x2499)^x2500));

	if (t31 != 103233223582326LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2534 = 3;
	volatile int8_t x2535 = -6;
	static volatile int16_t x2536 = 1;
	int32_t t32 = -49;

	t32 = (x2533<<((x2534&x2535)^x2536));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x2601 = INT16_MAX;
	static volatile int64_t x2602 = INT64_MIN;
	int16_t x2603 = -1;
	static int64_t x2604 = INT64_MIN;
	static int32_t t33 = 0;

	t33 = (x2601<<((x2602&x2603)^x2604));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2609 = UINT8_MAX;
	uint64_t x2610 = UINT64_MAX;
	static uint32_t x2611 = UINT32_MAX;
	uint32_t x2612 = UINT32_MAX;
	volatile int32_t t34 = -178424453;

	t34 = (x2609<<((x2610&x2611)^x2612));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x2717 = 31U;
	volatile int16_t x2719 = INT16_MIN;
	volatile int16_t x2720 = INT16_MIN;
	int32_t t35 = 69121601;

	t35 = (x2717<<((x2718&x2719)^x2720));

	if (t35 != 31) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2805 = 7U;
	int8_t x2806 = -6;
	volatile int16_t x2807 = -1;

	t36 = (x2805<<((x2806&x2807)^x2808));

	if (t36 != 224) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x3017 = 48;
	int64_t x3019 = 0LL;
	uint8_t x3020 = 1U;
	int32_t t37 = 508;

	t37 = (x3017<<((x3018&x3019)^x3020));

	if (t37 != 96) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x3041 = UINT64_MAX;
	static uint16_t x3042 = UINT16_MAX;
	static int64_t x3043 = INT64_MIN;
	static volatile uint16_t x3044 = 52U;
	uint64_t t38 = 19228898LLU;

	t38 = (x3041<<((x3042&x3043)^x3044));

	if (t38 != 18442240474082181120LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x3213 = 0;
	int8_t x3214 = -1;
	int64_t x3215 = -1LL;
	static int16_t x3216 = -1;
	volatile int32_t t39 = 0;

	t39 = (x3213<<((x3214&x3215)^x3216));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x3433 = 1;
	uint8_t x3434 = 2U;
	int32_t x3435 = 0;
	uint32_t x3436 = 4U;
	int32_t t40 = -29398;

	t40 = (x3433<<((x3434&x3435)^x3436));

	if (t40 != 16) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3441 = 1;
	int32_t x3442 = INT32_MIN;
	uint16_t x3443 = UINT16_MAX;
	uint16_t x3444 = 0U;
	static int32_t t41 = 76;

	t41 = (x3441<<((x3442&x3443)^x3444));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3521 = 1LL;
	static uint16_t x3522 = 5U;
	volatile int64_t t42 = -43975606929597LL;

	t42 = (x3521<<((x3522&x3523)^x3524));

	if (t42 != 32LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3565 = 30U;
	int8_t x3566 = 10;
	uint64_t x3567 = UINT64_MAX;
	static uint8_t x3568 = 2U;

	t43 = (x3565<<((x3566&x3567)^x3568));

	if (t43 != 7680) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x3666 = 27U;
	uint8_t x3667 = 3U;
	static uint32_t x3668 = 14U;
	volatile int32_t t44 = 26628;

	t44 = (x3665<<((x3666&x3667)^x3668));

	if (t44 != 6774784) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3693 = 3644302224633300209LLU;
	int8_t x3694 = 7;
	int32_t x3695 = INT32_MAX;
	static uint8_t x3696 = 0U;
	uint64_t t45 = 2826LLU;

	t45 = (x3693<<((x3694&x3695)^x3696));

	if (t45 != 5302082910323636352LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x3741 = 1U;
	static int8_t x3742 = -18;
	int16_t x3743 = -1;
	int32_t x3744 = -1;

	t46 = (x3741<<((x3742&x3743)^x3744));

	if (t46 != 131072) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3793 = UINT8_MAX;
	volatile uint8_t x3796 = 0U;
	int32_t t47 = -80;

	t47 = (x3793<<((x3794&x3795)^x3796));

	if (t47 != 1069547520) { NG(); } else { ; }
	
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
    f44();
    f45();
    f46();
    f47();


    return 0;
}

