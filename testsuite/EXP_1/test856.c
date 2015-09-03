#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = 8683907023697LL;
uint64_t x141 = 17335131LLU;
uint8_t x142 = 9U;
uint32_t x178 = 3U;
volatile int32_t t8 = 0;
static uint32_t t9 = 227204U;
int16_t x638 = 1;
static volatile uint64_t t10 = 3919286061828581LLU;
int64_t x661 = 259115LL;
static int32_t x663 = -1;
static int64_t x691 = 11309LL;
int32_t x692 = -1;
volatile int64_t t15 = 1528676278LL;
volatile uint8_t x886 = 17U;
int64_t x888 = -1LL;
int16_t x1134 = 11;
static volatile uint8_t x1135 = 6U;
static int16_t x1136 = -1;
uint64_t t18 = 126852485768865LLU;
uint32_t x1137 = 5804363U;
static volatile int8_t x1140 = 1;
volatile int64_t t19 = 2150LL;
static volatile uint64_t x1238 = 2LLU;
volatile uint64_t t20 = 3647894LLU;
int8_t x1334 = 1;
volatile uint16_t x1534 = 4U;
int16_t x1559 = INT16_MAX;
volatile uint32_t t24 = 421859U;
volatile int8_t x1597 = INT8_MAX;
uint64_t x1779 = UINT64_MAX;
static uint16_t x1933 = 31265U;
int16_t x1935 = 218;
volatile uint64_t x1936 = 135LLU;
static volatile uint8_t x2109 = 1U;
uint64_t t31 = 17102631145836LLU;
uint64_t x2229 = 520289LLU;
volatile uint64_t t32 = 1834117LLU;
uint16_t x2240 = 716U;
uint8_t x2377 = 0U;
volatile uint8_t x2378 = 1U;
int64_t x2380 = INT64_MIN;
int8_t x2439 = 8;
int16_t x2673 = 0;
uint64_t x2827 = 1504789047005765050LLU;
static int16_t x2828 = -195;
uint16_t x3018 = 1U;
volatile int64_t x3019 = -66LL;
int64_t t41 = 120820LL;
volatile uint64_t t42 = 10559147LLU;
volatile uint64_t t43 = 205472LLU;
uint16_t x3198 = 5U;
uint16_t x3259 = UINT16_MAX;
volatile uint64_t t45 = 7482525LLU;
volatile uint16_t x3346 = 12U;
static volatile uint64_t t48 = 215LLU;
static volatile uint32_t x3630 = 8U;
int8_t x3631 = INT8_MIN;
volatile uint64_t t53 = 2046LLU;
static volatile uint16_t x3806 = 2U;
uint32_t t55 = 9U;
static volatile uint32_t t56 = 159U;
int32_t x3841 = 50;
int8_t x3902 = 2;
static uint64_t x3903 = 7708LLU;
static uint8_t x4005 = 28U;
int64_t x4074 = 6LL;
uint32_t x4140 = UINT32_MAX;
uint16_t x4161 = 27032U;
volatile uint16_t x4162 = 15U;
volatile int16_t x4164 = 64;
uint64_t t65 = 18431522832711000LLU;
uint8_t x4290 = 7U;
uint32_t x4291 = UINT32_MAX;
int32_t x4300 = INT32_MIN;
volatile int32_t t68 = 6924;
uint8_t x4457 = 5U;
volatile uint32_t t69 = 3U;
static int8_t x4554 = 0;
static uint64_t x4619 = 1317LLU;
uint64_t t71 = 112LLU;
static int8_t x4665 = INT8_MAX;
static volatile int64_t x4723 = 71143LL;
volatile int64_t x4868 = INT64_MAX;
static uint16_t x4905 = 1U;
volatile int8_t x4946 = 5;
volatile uint16_t x4947 = UINT16_MAX;
int8_t x4948 = INT8_MIN;
uint16_t x4968 = UINT16_MAX;
static int16_t x5051 = -733;
int32_t t83 = -1003830;
int32_t x5550 = 12;
volatile int32_t x5552 = -1;
uint64_t x5554 = 1LLU;
int32_t x5672 = -39343;
uint8_t x5741 = 22U;
int8_t x5743 = -1;
int32_t x5744 = INT32_MIN;
uint16_t x5983 = 0U;
uint8_t x6226 = 8U;
static volatile uint16_t x6228 = 1U;
volatile uint64_t t93 = 6651LLU;
uint16_t x6296 = UINT16_MAX;
int8_t x6355 = 1;
int64_t x6356 = 10LL;


void f0(void) {
	volatile int16_t x41 = 1;
	static uint8_t x42 = 29U;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = 5294U;
	volatile uint32_t t0 = 20937397U;

	t0 = (((x41<<x42)+x43)&x44);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x97 = 113U;
	uint16_t x98 = 0U;
	int8_t x99 = -1;
	int64_t x100 = INT64_MIN;

	t1 = (((x97<<x98)+x99)&x100);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x143 = -5032;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t2 = 9978LLU;

	t2 = (((x141<<x142)+x143)&x144);

	if (t2 != 8875573248LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x177 = 33;
	uint8_t x179 = 0U;
	int64_t x180 = 1LL;
	volatile int64_t t3 = -3LL;

	t3 = (((x177<<x178)+x179)&x180);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x253 = 0U;
	int8_t x254 = 1;
	int64_t x255 = 190763756LL;
	int8_t x256 = INT8_MAX;
	int64_t t4 = 31088041751197LL;

	t4 = (((x253<<x254)+x255)&x256);

	if (t4 != 108LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x353 = UINT8_MAX;
	uint8_t x354 = 10U;
	volatile uint32_t x355 = 1213164881U;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t5 = 2087328838693225LLU;

	t5 = (((x353<<x354)+x355)&x356);

	if (t5 != 1213426001LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x493 = 720915770U;
	uint16_t x494 = 5U;
	int32_t x495 = 663;
	int16_t x496 = INT16_MAX;
	uint32_t t6 = 191470U;

	t6 = (((x493<<x494)+x495)&x496);

	if (t6 != 10711U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x505 = UINT8_MAX;
	uint8_t x506 = 5U;
	uint16_t x507 = 394U;
	int8_t x508 = -1;
	int32_t t7 = 50049;

	t7 = (((x505<<x506)+x507)&x508);

	if (t7 != 8554) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x533 = UINT16_MAX;
	int32_t x534 = 0;
	static uint16_t x535 = 1258U;
	int8_t x536 = -1;

	t8 = (((x533<<x534)+x535)&x536);

	if (t8 != 66793) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x609 = 188;
	volatile uint16_t x610 = 3U;
	uint32_t x611 = 8053686U;
	uint32_t x612 = 10237963U;

	t9 = (((x609<<x610)+x611)&x612);

	if (t9 != 1583106U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x637 = UINT64_MAX;
	volatile int32_t x639 = INT32_MIN;
	volatile int32_t x640 = -1736;

	t10 = (((x637<<x638)+x639)&x640);

	if (t10 != 18446744071562066232LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x662 = 6;
	uint16_t x664 = UINT16_MAX;
	volatile int64_t t11 = 56502870372848322LL;

	t11 = (((x661<<x662)+x663)&x664);

	if (t11 != 2751LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x689 = 1258257U;
	int16_t x690 = 0;
	volatile int64_t t12 = 2262LL;

	t12 = (((x689<<x690)+x691)&x692);

	if (t12 != 1269566LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x793 = 1;
	int8_t x794 = 3;
	volatile uint64_t x795 = UINT64_MAX;
	static uint16_t x796 = 722U;
	uint64_t t13 = 107796215583LLU;

	t13 = (((x793<<x794)+x795)&x796);

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x805 = 2037293364803669872LLU;
	uint16_t x806 = 30U;
	int32_t x807 = INT32_MAX;
	int8_t x808 = 3;
	uint64_t t14 = 8888599854LLU;

	t14 = (((x805<<x806)+x807)&x808);

	if (t14 != 3LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x837 = UINT16_MAX;
	static volatile uint32_t x838 = 15U;
	volatile uint16_t x839 = 12U;
	volatile int64_t x840 = -485072301179532176LL;

	t15 = (((x837<<x838)+x839)&x840);

	if (t15 != 1708130304LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x885 = 21740243U;
	static int64_t x887 = -1LL;
	static int64_t t16 = 5134LL;

	t16 = (((x885<<x886)+x887)&x888);

	if (t16 != 1973813247LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x909 = 0;
	volatile uint8_t x910 = 6U;
	static int64_t x911 = INT64_MIN;
	int16_t x912 = INT16_MAX;
	static volatile int64_t t17 = -1878LL;

	t17 = (((x909<<x910)+x911)&x912);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1133 = 2358743444795689LLU;

	t18 = (((x1133<<x1134)+x1135)&x1136);

	if (t18 != 4830706574941571078LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x1138 = 13U;
	int64_t x1139 = INT64_MIN;

	t19 = (((x1137<<x1138)+x1139)&x1140);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1237 = UINT64_MAX;
	uint16_t x1239 = 25U;
	int32_t x1240 = -1;

	t20 = (((x1237<<x1238)+x1239)&x1240);

	if (t20 != 21LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1333 = 1U;
	uint16_t x1335 = 872U;
	uint16_t x1336 = 171U;
	volatile int32_t t21 = -367353807;

	t21 = (((x1333<<x1334)+x1335)&x1336);

	if (t21 != 42) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1533 = 11U;
	static volatile int8_t x1535 = 1;
	volatile int16_t x1536 = INT16_MAX;
	uint32_t t22 = 84U;

	t22 = (((x1533<<x1534)+x1535)&x1536);

	if (t22 != 177U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1557 = 1513098;
	uint16_t x1558 = 0U;
	uint8_t x1560 = 85U;
	static volatile int32_t t23 = 186;

	t23 = (((x1557<<x1558)+x1559)&x1560);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1581 = 8U;
	volatile uint8_t x1582 = 2U;
	uint32_t x1583 = 397166798U;
	int16_t x1584 = -1;

	t24 = (((x1581<<x1582)+x1583)&x1584);

	if (t24 != 397166830U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1598 = 4;
	static int64_t x1599 = 46LL;
	int32_t x1600 = INT32_MAX;
	int64_t t25 = 324294239301LL;

	t25 = (((x1597<<x1598)+x1599)&x1600);

	if (t25 != 2078LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1629 = 14933075;
	uint64_t x1630 = 0LLU;
	int8_t x1631 = INT8_MIN;
	static int32_t x1632 = 829;
	int32_t t26 = -2286943;

	t26 = (((x1629<<x1630)+x1631)&x1632);

	if (t26 != 785) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1689 = 124441231509243125LLU;
	uint8_t x1690 = 4U;
	int64_t x1691 = -1LL;
	int16_t x1692 = -1;
	uint64_t t27 = 3964229540LLU;

	t27 = (((x1689<<x1690)+x1691)&x1692);

	if (t27 != 1991059704147889999LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1777 = 62474LL;
	uint8_t x1778 = 4U;
	uint64_t x1780 = 7LLU;
	volatile uint64_t t28 = 882683886LLU;

	t28 = (((x1777<<x1778)+x1779)&x1780);

	if (t28 != 7LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1934 = 0U;
	volatile uint64_t t29 = 136790858305924LLU;

	t29 = (((x1933<<x1934)+x1935)&x1936);

	if (t29 != 131LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x2069 = 111U;
	volatile int8_t x2070 = 0;
	int16_t x2071 = INT16_MAX;
	static uint32_t x2072 = UINT32_MAX;
	static uint32_t t30 = 18U;

	t30 = (((x2069<<x2070)+x2071)&x2072);

	if (t30 != 32878U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2110 = 1;
	int64_t x2111 = -1LL;
	volatile uint64_t x2112 = 14861725997448368LLU;

	t31 = (((x2109<<x2110)+x2111)&x2112);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x2230 = 0U;
	uint8_t x2231 = 3U;
	int16_t x2232 = -1;

	t32 = (((x2229<<x2230)+x2231)&x2232);

	if (t32 != 520292LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2237 = 49;
	int8_t x2238 = 2;
	int32_t x2239 = -1;
	volatile int32_t t33 = 10179415;

	t33 = (((x2237<<x2238)+x2239)&x2240);

	if (t33 != 192) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2349 = UINT64_MAX;
	int8_t x2350 = 61;
	int16_t x2351 = 0;
	int32_t x2352 = -79256;
	uint64_t t34 = 175291455537863586LLU;

	t34 = (((x2349<<x2350)+x2351)&x2352);

	if (t34 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2373 = 0U;
	uint8_t x2374 = 3U;
	int16_t x2375 = -1;
	volatile int64_t x2376 = 1LL;
	static volatile int64_t t35 = 35695567LL;

	t35 = (((x2373<<x2374)+x2375)&x2376);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x2379 = INT64_MIN;
	volatile int64_t t36 = INT64_MIN;

	t36 = (((x2377<<x2378)+x2379)&x2380);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2437 = 41U;
	int8_t x2438 = 11;
	uint16_t x2440 = 7684U;
	volatile int32_t t37 = 60;

	t37 = (((x2437<<x2438)+x2439)&x2440);

	if (t37 != 2048) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2469 = INT8_MAX;
	uint8_t x2470 = 0U;
	uint8_t x2471 = 0U;
	uint64_t x2472 = 9390LLU;
	uint64_t t38 = 92777907LLU;

	t38 = (((x2469<<x2470)+x2471)&x2472);

	if (t38 != 46LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2674 = 11U;
	int16_t x2675 = 2830;
	int32_t x2676 = INT32_MIN;
	volatile int32_t t39 = 463643;

	t39 = (((x2673<<x2674)+x2675)&x2676);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x2825 = 22207U;
	int8_t x2826 = 1;
	volatile uint64_t t40 = 45716935695737LLU;

	t40 = (((x2825<<x2826)+x2827)&x2828);

	if (t40 != 1504789047005809464LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3017 = 36U;
	uint16_t x3020 = UINT16_MAX;

	t41 = (((x3017<<x3018)+x3019)&x3020);

	if (t41 != 6LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x3101 = UINT64_MAX;
	uint8_t x3102 = 1U;
	int32_t x3103 = -314699296;
	int64_t x3104 = INT64_MIN;

	t42 = (((x3101<<x3102)+x3103)&x3104);

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3149 = UINT64_MAX;
	volatile int64_t x3150 = 16LL;
	volatile int16_t x3151 = INT16_MIN;
	uint8_t x3152 = 53U;

	t43 = (((x3149<<x3150)+x3151)&x3152);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3197 = 6335U;
	volatile int8_t x3199 = INT8_MAX;
	int32_t x3200 = -30987284;
	int32_t t44 = -51;

	t44 = (((x3197<<x3198)+x3199)&x3200);

	if (t44 != 198732) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3257 = 14LLU;
	int8_t x3258 = 0;
	volatile int32_t x3260 = 791500615;

	t45 = (((x3257<<x3258)+x3259)&x3260);

	if (t45 != 65541LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x3345 = 3363725647683LLU;
	static volatile uint32_t x3347 = 56729U;
	uint16_t x3348 = 8U;
	volatile uint64_t t46 = 479696852389LLU;

	t46 = (((x3345<<x3346)+x3347)&x3348);

	if (t46 != 8LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x3365 = UINT16_MAX;
	int64_t x3366 = 7LL;
	int16_t x3367 = INT16_MIN;
	int16_t x3368 = 1;
	int32_t t47 = -23845;

	t47 = (((x3365<<x3366)+x3367)&x3368);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3445 = 10531824LLU;
	int8_t x3446 = 0;
	int64_t x3447 = INT64_MIN;
	static volatile int32_t x3448 = INT32_MIN;

	t48 = (((x3445<<x3446)+x3447)&x3448);

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3497 = UINT8_MAX;
	volatile int16_t x3498 = 1;
	uint64_t x3499 = 20309787898379LLU;
	int64_t x3500 = INT64_MAX;
	uint64_t t49 = 18759353390LLU;

	t49 = (((x3497<<x3498)+x3499)&x3500);

	if (t49 != 20309787898889LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3569 = UINT64_MAX;
	static int8_t x3570 = 17;
	uint16_t x3571 = 1U;
	int16_t x3572 = -39;
	volatile uint64_t t50 = 379743461271952LLU;

	t50 = (((x3569<<x3570)+x3571)&x3572);

	if (t50 != 18446744073709420545LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3589 = 0LLU;
	int8_t x3590 = 15;
	static int8_t x3591 = INT8_MAX;
	static uint16_t x3592 = 27U;
	uint64_t t51 = 1720682063411LLU;

	t51 = (((x3589<<x3590)+x3591)&x3592);

	if (t51 != 27LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3629 = 532541378584056LLU;
	int32_t x3632 = 7954;
	volatile uint64_t t52 = 1391LLU;

	t52 = (((x3629<<x3630)+x3631)&x3632);

	if (t52 != 5888LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3709 = UINT64_MAX;
	int32_t x3710 = 1;
	uint64_t x3711 = 5046LLU;
	uint32_t x3712 = 57360U;

	t53 = (((x3709<<x3710)+x3711)&x3712);

	if (t53 != 16LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3721 = INT16_MAX;
	volatile uint16_t x3722 = 4U;
	uint32_t x3723 = UINT32_MAX;
	volatile uint32_t x3724 = 295673U;
	uint32_t t54 = 190U;

	t54 = (((x3721<<x3722)+x3723)&x3724);

	if (t54 != 295657U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3805 = 6019;
	int32_t x3807 = 300196511;
	static volatile uint32_t x3808 = 3146232U;

	t55 = (((x3805<<x3806)+x3807)&x3808);

	if (t55 != 2097320U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3829 = 6075U;
	volatile uint8_t x3830 = 5U;
	uint8_t x3831 = 76U;
	uint32_t x3832 = 1U;

	t56 = (((x3829<<x3830)+x3831)&x3832);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x3842 = 21U;
	int8_t x3843 = INT8_MIN;
	int64_t x3844 = -1LL;
	volatile int64_t t57 = -214LL;

	t57 = (((x3841<<x3842)+x3843)&x3844);

	if (t57 != 104857472LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x3877 = 21U;
	int16_t x3878 = 24;
	int8_t x3879 = INT8_MIN;
	int32_t x3880 = INT32_MAX;
	volatile int32_t t58 = 1;

	t58 = (((x3877<<x3878)+x3879)&x3880);

	if (t58 != 352321408) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3901 = 26U;
	uint64_t x3904 = 8567665LLU;
	volatile uint64_t t59 = 13606207951274LLU;

	t59 = (((x3901<<x3902)+x3903)&x3904);

	if (t59 != 6656LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x4006 = 4;
	static volatile int8_t x4007 = INT8_MIN;
	static uint64_t x4008 = 749978186071LLU;
	uint64_t t60 = 3LLU;

	t60 = (((x4005<<x4006)+x4007)&x4008);

	if (t60 != 320LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4073 = 951U;
	int8_t x4075 = -1;
	volatile int64_t x4076 = -1LL;
	int64_t t61 = -17488322818457LL;

	t61 = (((x4073<<x4074)+x4075)&x4076);

	if (t61 != 60863LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4137 = 0U;
	uint32_t x4138 = 4U;
	int64_t x4139 = -453968LL;
	static volatile int64_t t62 = 148901959155012LL;

	t62 = (((x4137<<x4138)+x4139)&x4140);

	if (t62 != 4294513328LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x4163 = -1;
	volatile int32_t t63 = -70;

	t63 = (((x4161<<x4162)+x4163)&x4164);

	if (t63 != 64) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4221 = 1195685U;
	int16_t x4222 = 0;
	volatile int16_t x4223 = INT16_MAX;
	static int32_t x4224 = INT32_MAX;
	uint32_t t64 = 1905108405U;

	t64 = (((x4221<<x4222)+x4223)&x4224);

	if (t64 != 1228452U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4285 = 26241343LLU;
	uint8_t x4286 = 8U;
	int32_t x4287 = -108317;
	int8_t x4288 = INT8_MAX;

	t65 = (((x4285<<x4286)+x4287)&x4288);

	if (t65 != 99LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4289 = UINT8_MAX;
	static int64_t x4292 = -1LL;
	volatile int64_t t66 = 245443486LL;

	t66 = (((x4289<<x4290)+x4291)&x4292);

	if (t66 != 32639LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4297 = 28U;
	uint16_t x4298 = 1U;
	uint32_t x4299 = 1319584U;
	volatile uint32_t t67 = 164494U;

	t67 = (((x4297<<x4298)+x4299)&x4300);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x4325 = 4U;
	static uint8_t x4326 = 8U;
	int8_t x4327 = INT8_MIN;
	uint8_t x4328 = 17U;

	t68 = (((x4325<<x4326)+x4327)&x4328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4458 = 5U;
	volatile uint32_t x4459 = 108010478U;
	int32_t x4460 = INT32_MIN;

	t69 = (((x4457<<x4458)+x4459)&x4460);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x4553 = UINT16_MAX;
	int64_t x4555 = INT64_MIN;
	int8_t x4556 = 1;
	static int64_t t70 = -3979198991001190LL;

	t70 = (((x4553<<x4554)+x4555)&x4556);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x4617 = 92010773311434LL;
	static volatile int8_t x4618 = 4;
	uint8_t x4620 = 3U;

	t71 = (((x4617<<x4618)+x4619)&x4620);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4633 = 173980U;
	int16_t x4634 = 4;
	volatile uint64_t x4635 = 136233754407486LLU;
	uint64_t x4636 = UINT64_MAX;
	uint64_t t72 = 42783LLU;

	t72 = (((x4633<<x4634)+x4635)&x4636);

	if (t72 != 136233757191166LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x4666 = 0U;
	static volatile uint8_t x4667 = UINT8_MAX;
	static uint64_t x4668 = 1025925301LLU;
	volatile uint64_t t73 = 884346275502314545LLU;

	t73 = (((x4665<<x4666)+x4667)&x4668);

	if (t73 != 52LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4721 = 3198879514LLU;
	uint16_t x4722 = 62U;
	int16_t x4724 = INT16_MIN;
	volatile uint64_t t74 = 45LLU;

	t74 = (((x4721<<x4722)+x4723)&x4724);

	if (t74 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4805 = 101U;
	volatile int8_t x4806 = 0;
	int64_t x4807 = 4755280687LL;
	static uint64_t x4808 = 1898796328743140LLU;
	uint64_t t75 = 2062410728683LLU;

	t75 = (((x4805<<x4806)+x4807)&x4808);

	if (t75 != 4700557444LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x4865 = 5485;
	volatile int8_t x4866 = 6;
	uint32_t x4867 = 2921U;
	int64_t t76 = 795LL;

	t76 = (((x4865<<x4866)+x4867)&x4868);

	if (t76 != 353961LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x4906 = 1LLU;
	static int32_t x4907 = -1;
	int8_t x4908 = INT8_MIN;
	volatile int32_t t77 = 82;

	t77 = (((x4905<<x4906)+x4907)&x4908);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4945 = UINT32_MAX;
	volatile uint32_t t78 = 1573708733U;

	t78 = (((x4945<<x4946)+x4947)&x4948);

	if (t78 != 65408U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4965 = UINT16_MAX;
	int32_t x4966 = 0;
	uint64_t x4967 = 25550899291177LLU;
	volatile uint64_t t79 = 970LLU;

	t79 = (((x4965<<x4966)+x4967)&x4968);

	if (t79 != 42024LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x5049 = 4;
	int8_t x5050 = 25;
	uint8_t x5052 = 0U;
	int32_t t80 = 23543;

	t80 = (((x5049<<x5050)+x5051)&x5052);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5133 = INT8_MAX;
	uint8_t x5134 = 15U;
	uint16_t x5135 = 1792U;
	uint64_t x5136 = UINT64_MAX;
	volatile uint64_t t81 = 700551LLU;

	t81 = (((x5133<<x5134)+x5135)&x5136);

	if (t81 != 4163328LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5189 = INT16_MAX;
	int8_t x5190 = 0;
	static uint8_t x5191 = 8U;
	int64_t x5192 = INT64_MAX;
	int64_t t82 = -697577553956913LL;

	t82 = (((x5189<<x5190)+x5191)&x5192);

	if (t82 != 32775LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5365 = 3139U;
	static int16_t x5366 = 0;
	uint8_t x5367 = 48U;
	int16_t x5368 = -15;

	t83 = (((x5365<<x5366)+x5367)&x5368);

	if (t83 != 3185) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x5469 = 0U;
	int8_t x5470 = 1;
	static int32_t x5471 = -4;
	int8_t x5472 = -1;
	volatile int32_t t84 = -323926427;

	t84 = (((x5469<<x5470)+x5471)&x5472);

	if (t84 != -4) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5485 = INT32_MAX;
	uint8_t x5486 = 0U;
	volatile int8_t x5487 = -1;
	int32_t x5488 = 44570;
	int32_t t85 = -42210196;

	t85 = (((x5485<<x5486)+x5487)&x5488);

	if (t85 != 44570) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5501 = INT8_MAX;
	int8_t x5502 = 10;
	int16_t x5503 = -1;
	volatile int64_t x5504 = -9399401338854404LL;
	static volatile int64_t t86 = -14780622022882LL;

	t86 = (((x5501<<x5502)+x5503)&x5504);

	if (t86 != 41980LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5549 = INT16_MAX;
	uint8_t x5551 = UINT8_MAX;
	int32_t t87 = 104806034;

	t87 = (((x5549<<x5550)+x5551)&x5552);

	if (t87 != 134213887) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5553 = 11711;
	int8_t x5555 = -27;
	int16_t x5556 = INT16_MIN;
	int32_t t88 = 64847;

	t88 = (((x5553<<x5554)+x5555)&x5556);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5645 = UINT16_MAX;
	static uint32_t x5646 = 0U;
	static int16_t x5647 = 247;
	static uint64_t x5648 = 17416003931396LLU;
	static volatile uint64_t t89 = 36708063LLU;

	t89 = (((x5645<<x5646)+x5647)&x5648);

	if (t89 != 4LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x5669 = 10U;
	uint32_t x5670 = 1U;
	int8_t x5671 = -1;
	static int32_t t90 = 85146839;

	t90 = (((x5669<<x5670)+x5671)&x5672);

	if (t90 != 17) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5742 = 25U;
	int32_t t91 = 1046686482;

	t91 = (((x5741<<x5742)+x5743)&x5744);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x5981 = 1;
	static volatile uint8_t x5982 = 2U;
	uint32_t x5984 = 2U;
	uint32_t t92 = 14765U;

	t92 = (((x5981<<x5982)+x5983)&x5984);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x6225 = UINT32_MAX;
	uint64_t x6227 = 204468LLU;

	t93 = (((x6225<<x6226)+x6227)&x6228);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6281 = 62U;
	uint16_t x6282 = 2U;
	uint16_t x6283 = UINT16_MAX;
	int64_t x6284 = INT64_MIN;
	static volatile int64_t t94 = 111444268761446508LL;

	t94 = (((x6281<<x6282)+x6283)&x6284);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6293 = 3;
	volatile uint8_t x6294 = 0U;
	static int64_t x6295 = INT64_MIN;
	static volatile int64_t t95 = 42501392541530360LL;

	t95 = (((x6293<<x6294)+x6295)&x6296);

	if (t95 != 3LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x6313 = UINT8_MAX;
	static uint16_t x6314 = 3U;
	volatile int64_t x6315 = -1LL;
	volatile int64_t x6316 = INT64_MAX;
	static int64_t t96 = -1LL;

	t96 = (((x6313<<x6314)+x6315)&x6316);

	if (t96 != 2039LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x6353 = UINT64_MAX;
	int8_t x6354 = 0;
	uint64_t t97 = 112290051803629499LLU;

	t97 = (((x6353<<x6354)+x6355)&x6356);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x6357 = UINT64_MAX;
	uint8_t x6358 = 63U;
	uint64_t x6359 = 69965770321812LLU;
	volatile int16_t x6360 = INT16_MIN;
	uint64_t t98 = 307LLU;

	t98 = (((x6357<<x6358)+x6359)&x6360);

	if (t98 != 9223442002625069056LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x6457 = 5409002U;
	uint16_t x6458 = 15U;
	uint8_t x6459 = 7U;
	static volatile int8_t x6460 = -1;
	volatile uint32_t t99 = 1679656306U;

	t99 = (((x6457<<x6458)+x6459)&x6460);

	if (t99 != 1148518407U) { NG(); } else { ; }
	
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
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

