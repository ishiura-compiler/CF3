#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x51 = -344;
int32_t x63 = INT32_MIN;
volatile uint32_t x64 = 0U;
uint16_t x94 = 14U;
uint32_t x197 = 11766826U;
volatile int32_t t5 = -62;
int16_t x366 = 0;
volatile int8_t x443 = 34;
int64_t x528 = INT64_MAX;
int32_t x611 = INT32_MAX;
int64_t x788 = -15535115919LL;
int32_t t15 = 191867;
int64_t x1077 = 52186LL;
static int8_t x1367 = 2;
int8_t x1487 = INT8_MIN;
uint8_t x1542 = 10U;
static int32_t x1543 = 11499;
int16_t x1654 = 2;
static uint32_t t27 = 4U;
volatile uint64_t t28 = 382747770LLU;
int32_t t30 = -4144;
uint8_t x2013 = 5U;
int16_t x2289 = 1;
uint32_t t34 = 4U;
volatile int8_t x2381 = INT8_MAX;
uint8_t x2382 = 18U;
uint16_t x2446 = 9U;
int64_t t39 = 64856LL;
uint32_t x2872 = UINT32_MAX;
static int64_t x2888 = -1LL;
int32_t t41 = 112616;
int16_t x2978 = 1;
int64_t x2979 = -1LL;
static volatile int32_t t42 = -85122;
static uint16_t x3165 = 1625U;
static volatile uint16_t x3166 = 2U;
uint8_t x3218 = 0U;
static uint32_t x3345 = 22007086U;
int16_t x3346 = 3;
int8_t x3348 = INT8_MAX;
volatile uint32_t t46 = 7390680U;
int8_t x3418 = 17;
int16_t x3526 = 7;
static int8_t x3663 = INT8_MIN;
volatile int16_t x3755 = INT16_MAX;
int32_t t52 = 0;
uint16_t x3860 = 6856U;
uint32_t x4081 = 1991970U;
static volatile uint16_t x4083 = UINT16_MAX;
uint64_t x4198 = 1LLU;
static volatile int8_t x4244 = INT8_MAX;
int8_t x4361 = INT8_MAX;
static int32_t x4363 = 4750212;
volatile int32_t x4364 = INT32_MAX;
volatile int32_t t61 = -2;
volatile uint16_t x4531 = 5U;
volatile uint8_t x4545 = 1U;
uint16_t x4546 = 13U;
static int32_t x4547 = -1;
volatile int8_t x4548 = INT8_MIN;
volatile uint16_t x4566 = 0U;
static uint32_t x4568 = 1U;
int64_t x4673 = INT64_MAX;
static volatile int64_t t70 = INT64_MAX;
volatile uint16_t x4731 = UINT16_MAX;
volatile int64_t x4732 = -389654794172331LL;
volatile uint32_t t73 = UINT32_MAX;
volatile int8_t x4772 = -6;
int16_t x4817 = 0;
uint16_t x4820 = UINT16_MAX;
int64_t x4956 = INT64_MAX;
int32_t x4980 = INT32_MAX;
int32_t x5059 = 685;
int16_t x5099 = 44;
volatile uint64_t t80 = 3879LLU;
uint64_t x5116 = UINT64_MAX;
uint64_t x5187 = 6858LLU;
int8_t x5214 = 6;
static uint64_t x5261 = 14034065388723907LLU;
volatile uint64_t x5380 = 22269284208205LLU;
volatile uint16_t x5413 = 6273U;
int32_t x5416 = INT32_MIN;
uint64_t x5459 = UINT64_MAX;
uint64_t x5503 = 765631719826899332LLU;
static int64_t x5568 = -1LL;
uint32_t x5757 = 11115U;
uint32_t x5758 = 5U;
int32_t x5830 = 11;


void f0(void) {
	int8_t x49 = 30;
	volatile uint8_t x50 = 13U;
	static int32_t x52 = -1;
	int32_t t0 = -831036;

	t0 = ((x49<<x50)|(x51<=x52));

	if (t0 != 245761) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x61 = 2U;
	uint16_t x62 = 7U;
	volatile int32_t t1 = 79;

	t1 = ((x61<<x62)|(x63<=x64));

	if (t1 != 256) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int8_t x95 = INT8_MAX;
	uint64_t x96 = UINT64_MAX;
	volatile uint32_t t2 = 8891029U;

	t2 = ((x93<<x94)|(x95<=x96));

	if (t2 != 4294950913U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x153 = UINT32_MAX;
	uint16_t x154 = 1U;
	int8_t x155 = 0;
	int8_t x156 = 2;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = ((x153<<x154)|(x155<=x156));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x198 = 0U;
	static uint8_t x199 = 6U;
	static volatile uint64_t x200 = 7328406LLU;
	uint32_t t4 = 615887198U;

	t4 = ((x197<<x198)|(x199<=x200));

	if (t4 != 11766827U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x254 = 1LL;
	uint8_t x255 = UINT8_MAX;
	int16_t x256 = -1;

	t5 = ((x253<<x254)|(x255<=x256));

	if (t5 != 131070) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x365 = 298893250806896LL;
	volatile int32_t x367 = -3335;
	uint32_t x368 = 483168389U;
	static volatile int64_t t6 = 125172644120673LL;

	t6 = ((x365<<x366)|(x367<=x368));

	if (t6 != 298893250806896LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x441 = 157298403617958LL;
	volatile uint16_t x442 = 3U;
	uint8_t x444 = 116U;
	static int64_t t7 = 30LL;

	t7 = ((x441<<x442)|(x443<=x444));

	if (t7 != 1258387228943665LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x505 = 0U;
	uint8_t x506 = 3U;
	uint16_t x507 = 978U;
	int64_t x508 = INT64_MIN;
	int32_t t8 = 879;

	t8 = ((x505<<x506)|(x507<=x508));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x525 = INT8_MAX;
	int32_t x526 = 1;
	volatile int16_t x527 = INT16_MIN;
	volatile int32_t t9 = 118547780;

	t9 = ((x525<<x526)|(x527<=x528));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x529 = INT8_MAX;
	uint64_t x530 = 3LLU;
	volatile uint8_t x531 = 6U;
	int64_t x532 = INT64_MAX;
	static int32_t t10 = 46517;

	t10 = ((x529<<x530)|(x531<=x532));

	if (t10 != 1017) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x609 = UINT64_MAX;
	int8_t x610 = 0;
	int64_t x612 = -755LL;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = ((x609<<x610)|(x611<=x612));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x669 = 10;
	uint16_t x670 = 9U;
	int16_t x671 = -2697;
	int64_t x672 = 10782554712LL;
	int32_t t12 = 7081;

	t12 = ((x669<<x670)|(x671<=x672));

	if (t12 != 5121) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x677 = 118781LL;
	uint8_t x678 = 8U;
	uint8_t x679 = 4U;
	uint32_t x680 = UINT32_MAX;
	volatile int64_t t13 = -1028806LL;

	t13 = ((x677<<x678)|(x679<=x680));

	if (t13 != 30407937LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x701 = 183561960;
	uint8_t x702 = 2U;
	uint16_t x703 = 1U;
	int32_t x704 = -1;
	static int32_t t14 = -326913686;

	t14 = ((x701<<x702)|(x703<=x704));

	if (t14 != 734247840) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x785 = UINT8_MAX;
	uint8_t x786 = 18U;
	int16_t x787 = -1;

	t15 = ((x785<<x786)|(x787<=x788));

	if (t15 != 66846720) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x917 = 28839U;
	static int8_t x918 = 1;
	int16_t x919 = INT16_MAX;
	static int16_t x920 = INT16_MAX;
	uint32_t t16 = 0U;

	t16 = ((x917<<x918)|(x919<=x920));

	if (t16 != 57679U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x953 = UINT16_MAX;
	uint16_t x954 = 3U;
	int32_t x955 = -1;
	int16_t x956 = INT16_MIN;
	int32_t t17 = -3;

	t17 = ((x953<<x954)|(x955<=x956));

	if (t17 != 524280) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x957 = 356213487U;
	volatile uint32_t x958 = 7U;
	static int64_t x959 = -60238312458762LL;
	int8_t x960 = INT8_MIN;
	uint32_t t18 = 289U;

	t18 = ((x957<<x958)|(x959<=x960));

	if (t18 != 2645653377U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x993 = UINT32_MAX;
	int8_t x994 = 3;
	uint64_t x995 = 2034663LLU;
	volatile int16_t x996 = -1;
	uint32_t t19 = 690U;

	t19 = ((x993<<x994)|(x995<=x996));

	if (t19 != 4294967289U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1078 = 0LLU;
	uint32_t x1079 = 274U;
	uint8_t x1080 = 41U;
	int64_t t20 = 0LL;

	t20 = ((x1077<<x1078)|(x1079<=x1080));

	if (t20 != 52186LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1165 = 3208U;
	uint8_t x1166 = 2U;
	volatile int8_t x1167 = 2;
	int16_t x1168 = 8893;
	uint32_t t21 = 242U;

	t21 = ((x1165<<x1166)|(x1167<=x1168));

	if (t21 != 12833U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1205 = UINT32_MAX;
	uint8_t x1206 = 3U;
	volatile uint8_t x1207 = 1U;
	static volatile int16_t x1208 = INT16_MIN;
	volatile uint32_t t22 = 174979708U;

	t22 = ((x1205<<x1206)|(x1207<=x1208));

	if (t22 != 4294967288U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1233 = 27;
	static volatile int16_t x1234 = 3;
	int8_t x1235 = INT8_MIN;
	volatile uint8_t x1236 = 1U;
	volatile int32_t t23 = -46;

	t23 = ((x1233<<x1234)|(x1235<=x1236));

	if (t23 != 217) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1365 = 24772804U;
	int8_t x1366 = 0;
	int64_t x1368 = INT64_MIN;
	volatile uint32_t t24 = 62313985U;

	t24 = ((x1365<<x1366)|(x1367<=x1368));

	if (t24 != 24772804U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1485 = UINT64_MAX;
	volatile int64_t x1486 = 19LL;
	int16_t x1488 = INT16_MIN;
	uint64_t t25 = 1236232LLU;

	t25 = ((x1485<<x1486)|(x1487<=x1488));

	if (t25 != 18446744073709027328LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1541 = 55U;
	static int32_t x1544 = INT32_MAX;
	volatile int32_t t26 = -73793314;

	t26 = ((x1541<<x1542)|(x1543<=x1544));

	if (t26 != 56321) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1653 = 1961515982U;
	int64_t x1655 = -1LL;
	volatile int32_t x1656 = -1;

	t27 = ((x1653<<x1654)|(x1655<=x1656));

	if (t27 != 3551096633U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1825 = UINT64_MAX;
	static int8_t x1826 = 6;
	static volatile int8_t x1827 = INT8_MIN;
	int64_t x1828 = -2677742020491527LL;

	t28 = ((x1825<<x1826)|(x1827<=x1828));

	if (t28 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x1893 = 1LLU;
	uint8_t x1894 = 2U;
	volatile int8_t x1895 = -58;
	int16_t x1896 = INT16_MIN;
	uint64_t t29 = 4202673322LLU;

	t29 = ((x1893<<x1894)|(x1895<=x1896));

	if (t29 != 4LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1921 = 36U;
	uint8_t x1922 = 0U;
	int8_t x1923 = -8;
	uint64_t x1924 = 5LLU;

	t30 = ((x1921<<x1922)|(x1923<=x1924));

	if (t30 != 36) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2014 = 15;
	static volatile int32_t x2015 = -830142063;
	uint16_t x2016 = UINT16_MAX;
	volatile int32_t t31 = -817070;

	t31 = ((x2013<<x2014)|(x2015<=x2016));

	if (t31 != 163841) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2045 = 128U;
	static uint8_t x2046 = 0U;
	int16_t x2047 = -1;
	int64_t x2048 = -181188800LL;
	uint32_t t32 = 54U;

	t32 = ((x2045<<x2046)|(x2047<=x2048));

	if (t32 != 128U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2290 = 0U;
	int64_t x2291 = INT64_MAX;
	int16_t x2292 = INT16_MIN;
	int32_t t33 = -48;

	t33 = ((x2289<<x2290)|(x2291<=x2292));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2353 = UINT32_MAX;
	int8_t x2354 = 26;
	volatile int64_t x2355 = -454LL;
	static uint8_t x2356 = 1U;

	t34 = ((x2353<<x2354)|(x2355<=x2356));

	if (t34 != 4227858433U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2383 = -1LL;
	int16_t x2384 = INT16_MIN;
	volatile int32_t t35 = -497;

	t35 = ((x2381<<x2382)|(x2383<=x2384));

	if (t35 != 33292288) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2393 = UINT16_MAX;
	static int16_t x2394 = 4;
	int16_t x2395 = 635;
	volatile uint32_t x2396 = 11U;
	volatile int32_t t36 = 29886917;

	t36 = ((x2393<<x2394)|(x2395<=x2396));

	if (t36 != 1048560) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2445 = 708885919984LLU;
	int8_t x2447 = INT8_MIN;
	volatile int64_t x2448 = -17144603625LL;
	static volatile uint64_t t37 = 22585388075553LLU;

	t37 = ((x2445<<x2446)|(x2447<=x2448));

	if (t37 != 362949591031808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x2589 = 4U;
	volatile uint8_t x2590 = 15U;
	int16_t x2591 = -1973;
	int8_t x2592 = INT8_MAX;
	volatile uint32_t t38 = 0U;

	t38 = ((x2589<<x2590)|(x2591<=x2592));

	if (t38 != 131073U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2861 = 0LL;
	uint8_t x2862 = 1U;
	static int8_t x2863 = INT8_MIN;
	static volatile int16_t x2864 = -1;

	t39 = ((x2861<<x2862)|(x2863<=x2864));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2869 = 389896U;
	int8_t x2870 = 14;
	volatile int64_t x2871 = -7013693565253LL;
	volatile uint32_t t40 = 500734510U;

	t40 = ((x2869<<x2870)|(x2871<=x2872));

	if (t40 != 2093088769U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2885 = 57;
	uint16_t x2886 = 0U;
	int64_t x2887 = INT64_MIN;

	t41 = ((x2885<<x2886)|(x2887<=x2888));

	if (t41 != 57) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2977 = 0;
	static int16_t x2980 = INT16_MIN;

	t42 = ((x2977<<x2978)|(x2979<=x2980));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x3167 = 2U;
	int32_t x3168 = 32096324;
	volatile int32_t t43 = -50541326;

	t43 = ((x3165<<x3166)|(x3167<=x3168));

	if (t43 != 6501) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x3217 = 22061151;
	static uint32_t x3219 = 377U;
	int8_t x3220 = -1;
	volatile int32_t t44 = 158161;

	t44 = ((x3217<<x3218)|(x3219<=x3220));

	if (t44 != 22061151) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3321 = INT16_MAX;
	uint8_t x3322 = 14U;
	uint64_t x3323 = 58LLU;
	uint32_t x3324 = 17795192U;
	static int32_t t45 = 12;

	t45 = ((x3321<<x3322)|(x3323<=x3324));

	if (t45 != 536854529) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x3347 = -21472603;

	t46 = ((x3345<<x3346)|(x3347<=x3348));

	if (t46 != 176056689U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x3417 = 3088U;
	static volatile int64_t x3419 = -9838LL;
	uint16_t x3420 = 13827U;
	volatile int32_t t47 = -4689097;

	t47 = ((x3417<<x3418)|(x3419<=x3420));

	if (t47 != 404750337) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3525 = 119;
	int64_t x3527 = INT64_MIN;
	int8_t x3528 = INT8_MAX;
	volatile int32_t t48 = -3560100;

	t48 = ((x3525<<x3526)|(x3527<=x3528));

	if (t48 != 15233) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x3549 = 2843;
	uint8_t x3550 = 17U;
	uint16_t x3551 = UINT16_MAX;
	uint32_t x3552 = 165032617U;
	static int32_t t49 = 2901;

	t49 = ((x3549<<x3550)|(x3551<=x3552));

	if (t49 != 372637697) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x3645 = 6;
	uint16_t x3646 = 1U;
	int16_t x3647 = INT16_MIN;
	volatile uint16_t x3648 = UINT16_MAX;
	int32_t t50 = 181839;

	t50 = ((x3645<<x3646)|(x3647<=x3648));

	if (t50 != 13) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x3661 = 40U;
	int8_t x3662 = 0;
	uint64_t x3664 = UINT64_MAX;
	volatile int32_t t51 = 11;

	t51 = ((x3661<<x3662)|(x3663<=x3664));

	if (t51 != 41) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x3753 = 3;
	static int8_t x3754 = 0;
	uint32_t x3756 = UINT32_MAX;

	t52 = ((x3753<<x3754)|(x3755<=x3756));

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3809 = 30487U;
	int8_t x3810 = 5;
	volatile int32_t x3811 = 1465;
	volatile int32_t x3812 = INT32_MAX;
	int32_t t53 = -6826;

	t53 = ((x3809<<x3810)|(x3811<=x3812));

	if (t53 != 975585) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3857 = INT8_MAX;
	uint16_t x3858 = 3U;
	int8_t x3859 = 0;
	volatile int32_t t54 = -298486;

	t54 = ((x3857<<x3858)|(x3859<=x3860));

	if (t54 != 1017) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x4013 = 5393895;
	uint8_t x4014 = 2U;
	static int16_t x4015 = INT16_MIN;
	int8_t x4016 = INT8_MIN;
	volatile int32_t t55 = -359027043;

	t55 = ((x4013<<x4014)|(x4015<=x4016));

	if (t55 != 21575581) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x4082 = 0U;
	volatile int32_t x4084 = -13653;
	volatile uint32_t t56 = 6894041U;

	t56 = ((x4081<<x4082)|(x4083<=x4084));

	if (t56 != 1991970U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x4113 = UINT64_MAX;
	static uint16_t x4114 = 20U;
	uint64_t x4115 = 8884723031187LLU;
	int8_t x4116 = -8;
	uint64_t t57 = 7326635105LLU;

	t57 = ((x4113<<x4114)|(x4115<=x4116));

	if (t57 != 18446744073708503041LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4197 = 963720;
	int8_t x4199 = 32;
	uint64_t x4200 = 5894942501103643509LLU;
	int32_t t58 = -8;

	t58 = ((x4197<<x4198)|(x4199<=x4200));

	if (t58 != 1927441) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x4241 = 36U;
	uint8_t x4242 = 2U;
	static int64_t x4243 = INT64_MAX;
	int32_t t59 = 0;

	t59 = ((x4241<<x4242)|(x4243<=x4244));

	if (t59 != 144) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4289 = UINT64_MAX;
	int32_t x4290 = 0;
	volatile uint32_t x4291 = UINT32_MAX;
	uint64_t x4292 = 1644763928LLU;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = ((x4289<<x4290)|(x4291<=x4292));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4362 = 6U;

	t61 = ((x4361<<x4362)|(x4363<=x4364));

	if (t61 != 8129) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4393 = 2037792337U;
	int8_t x4394 = 1;
	static uint8_t x4395 = 1U;
	static volatile uint8_t x4396 = 106U;
	static volatile uint32_t t62 = 30304736U;

	t62 = ((x4393<<x4394)|(x4395<=x4396));

	if (t62 != 4075584675U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x4489 = 923442826110629LLU;
	int8_t x4490 = 0;
	static volatile int64_t x4491 = 876137LL;
	volatile int8_t x4492 = -1;
	uint64_t t63 = 16LLU;

	t63 = ((x4489<<x4490)|(x4491<=x4492));

	if (t63 != 923442826110629LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4529 = 1;
	static uint16_t x4530 = 12U;
	int64_t x4532 = -32164836257060343LL;
	static int32_t t64 = -17530806;

	t64 = ((x4529<<x4530)|(x4531<=x4532));

	if (t64 != 4096) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t t65 = 1770748;

	t65 = ((x4545<<x4546)|(x4547<=x4548));

	if (t65 != 8192) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4565 = 76129629LLU;
	int64_t x4567 = INT64_MIN;
	uint64_t t66 = 442864381866747126LLU;

	t66 = ((x4565<<x4566)|(x4567<=x4568));

	if (t66 != 76129629LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4569 = 39577819LL;
	static uint8_t x4570 = 14U;
	int64_t x4571 = INT64_MAX;
	volatile int32_t x4572 = INT32_MIN;
	static int64_t t67 = -153LL;

	t67 = ((x4569<<x4570)|(x4571<=x4572));

	if (t67 != 648442986496LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x4593 = INT8_MAX;
	int16_t x4594 = 2;
	static int8_t x4595 = INT8_MIN;
	volatile int32_t x4596 = INT32_MIN;
	volatile int32_t t68 = -2591;

	t68 = ((x4593<<x4594)|(x4595<=x4596));

	if (t68 != 508) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4661 = 25284936791139LLU;
	int16_t x4662 = 1;
	int16_t x4663 = INT16_MAX;
	int16_t x4664 = -1;
	static volatile uint64_t t69 = 126331910850037LLU;

	t69 = ((x4661<<x4662)|(x4663<=x4664));

	if (t69 != 50569873582278LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4674 = 0U;
	static uint64_t x4675 = 3LLU;
	int32_t x4676 = -1;

	t70 = ((x4673<<x4674)|(x4675<=x4676));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4709 = 7723U;
	int8_t x4710 = 2;
	uint64_t x4711 = 3837633LLU;
	int32_t x4712 = INT32_MIN;
	volatile int32_t t71 = 4915357;

	t71 = ((x4709<<x4710)|(x4711<=x4712));

	if (t71 != 30893) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x4729 = 4106471U;
	int16_t x4730 = 4;
	volatile uint32_t t72 = 44656504U;

	t72 = ((x4729<<x4730)|(x4731<=x4732));

	if (t72 != 65703536U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4741 = UINT32_MAX;
	int8_t x4742 = 0;
	int16_t x4743 = -19;
	uint8_t x4744 = UINT8_MAX;

	t73 = ((x4741<<x4742)|(x4743<=x4744));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4769 = INT8_MAX;
	int32_t x4770 = 4;
	volatile int64_t x4771 = INT64_MIN;
	volatile int32_t t74 = 191;

	t74 = ((x4769<<x4770)|(x4771<=x4772));

	if (t74 != 2033) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4818 = 3U;
	int32_t x4819 = -3;
	int32_t t75 = -87498;

	t75 = ((x4817<<x4818)|(x4819<=x4820));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4945 = INT8_MAX;
	uint16_t x4946 = 0U;
	static volatile int8_t x4947 = -2;
	uint32_t x4948 = 312U;
	volatile int32_t t76 = 11055;

	t76 = ((x4945<<x4946)|(x4947<=x4948));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x4953 = 1;
	uint16_t x4954 = 0U;
	int16_t x4955 = 1822;
	volatile int32_t t77 = 851870;

	t77 = ((x4953<<x4954)|(x4955<=x4956));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x4977 = 14;
	static volatile int16_t x4978 = 18;
	uint8_t x4979 = UINT8_MAX;
	static volatile int32_t t78 = 2819;

	t78 = ((x4977<<x4978)|(x4979<=x4980));

	if (t78 != 3670017) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x5057 = UINT64_MAX;
	static uint32_t x5058 = 14U;
	int32_t x5060 = -1;
	static volatile uint64_t t79 = 86LLU;

	t79 = ((x5057<<x5058)|(x5059<=x5060));

	if (t79 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x5097 = 1065393790LLU;
	volatile uint32_t x5098 = 21U;
	static volatile uint32_t x5100 = 74095957U;

	t80 = ((x5097<<x5098)|(x5099<=x5100));

	if (t80 != 2234292717486081LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5109 = UINT8_MAX;
	int8_t x5110 = 10;
	int32_t x5111 = -3684;
	int16_t x5112 = -1597;
	volatile int32_t t81 = -8867;

	t81 = ((x5109<<x5110)|(x5111<=x5112));

	if (t81 != 261121) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5113 = 11;
	static int16_t x5114 = 0;
	uint32_t x5115 = UINT32_MAX;
	int32_t t82 = 143041;

	t82 = ((x5113<<x5114)|(x5115<=x5116));

	if (t82 != 11) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5125 = UINT64_MAX;
	uint8_t x5126 = 8U;
	uint32_t x5127 = UINT32_MAX;
	uint8_t x5128 = UINT8_MAX;
	uint64_t t83 = 1LLU;

	t83 = ((x5125<<x5126)|(x5127<=x5128));

	if (t83 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5185 = 1101822861U;
	volatile int8_t x5186 = 0;
	uint32_t x5188 = 10505U;
	volatile uint32_t t84 = 261898U;

	t84 = ((x5185<<x5186)|(x5187<=x5188));

	if (t84 != 1101822861U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5213 = 530330U;
	static uint64_t x5215 = 425922443664452675LLU;
	uint16_t x5216 = 14962U;
	static volatile uint32_t t85 = 130767U;

	t85 = ((x5213<<x5214)|(x5215<=x5216));

	if (t85 != 33941120U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x5262 = 31LL;
	int8_t x5263 = INT8_MAX;
	uint32_t x5264 = 3639U;
	uint64_t t86 = 80187733541937LLU;

	t86 = ((x5261<<x5262)|(x5263<=x5264));

	if (t86 != 4404502162629984257LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5297 = UINT64_MAX;
	volatile uint8_t x5298 = 17U;
	volatile uint64_t x5299 = UINT64_MAX;
	uint32_t x5300 = 6611U;
	uint64_t t87 = 1102005387970LLU;

	t87 = ((x5297<<x5298)|(x5299<=x5300));

	if (t87 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5377 = UINT32_MAX;
	uint32_t x5378 = 14U;
	uint64_t x5379 = 37923716372LLU;
	volatile uint32_t t88 = 3367U;

	t88 = ((x5377<<x5378)|(x5379<=x5380));

	if (t88 != 4294950913U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x5414 = 0U;
	uint8_t x5415 = 71U;
	volatile int32_t t89 = 641441873;

	t89 = ((x5413<<x5414)|(x5415<=x5416));

	if (t89 != 6273) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x5457 = UINT32_MAX;
	volatile uint32_t x5458 = 1U;
	static uint64_t x5460 = 1521451LLU;
	uint32_t t90 = 96U;

	t90 = ((x5457<<x5458)|(x5459<=x5460));

	if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5477 = UINT8_MAX;
	int16_t x5478 = 5;
	int64_t x5479 = -1LL;
	int64_t x5480 = -64LL;
	int32_t t91 = -749733756;

	t91 = ((x5477<<x5478)|(x5479<=x5480));

	if (t91 != 8160) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x5501 = INT8_MAX;
	uint16_t x5502 = 0U;
	static int32_t x5504 = -1;
	int32_t t92 = 11;

	t92 = ((x5501<<x5502)|(x5503<=x5504));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5529 = UINT32_MAX;
	uint8_t x5530 = 0U;
	static int32_t x5531 = -79603270;
	volatile int32_t x5532 = INT32_MIN;
	static volatile uint32_t t93 = UINT32_MAX;

	t93 = ((x5529<<x5530)|(x5531<=x5532));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5565 = 5;
	static uint64_t x5566 = 2LLU;
	volatile uint64_t x5567 = 3380656223043057671LLU;
	static volatile int32_t t94 = 735405;

	t94 = ((x5565<<x5566)|(x5567<=x5568));

	if (t94 != 21) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5665 = 1;
	static uint8_t x5666 = 1U;
	volatile int32_t x5667 = -430413833;
	int8_t x5668 = INT8_MIN;
	int32_t t95 = -117;

	t95 = ((x5665<<x5666)|(x5667<=x5668));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5701 = 10LLU;
	static uint32_t x5702 = 2U;
	int16_t x5703 = INT16_MAX;
	volatile uint8_t x5704 = 2U;
	volatile uint64_t t96 = 5829124784LLU;

	t96 = ((x5701<<x5702)|(x5703<=x5704));

	if (t96 != 40LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x5759 = INT32_MIN;
	int64_t x5760 = -12802717631LL;
	uint32_t t97 = 26882U;

	t97 = ((x5757<<x5758)|(x5759<=x5760));

	if (t97 != 355680U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5777 = 566993063LL;
	uint32_t x5778 = 0U;
	int8_t x5779 = -4;
	int32_t x5780 = INT32_MIN;
	int64_t t98 = 216801143026LL;

	t98 = ((x5777<<x5778)|(x5779<=x5780));

	if (t98 != 566993063LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5829 = 94455057U;
	static volatile int16_t x5831 = 551;
	uint16_t x5832 = 19U;
	uint32_t t99 = 1U;

	t99 = ((x5829<<x5830)|(x5831<=x5832));

	if (t99 != 170428416U) { NG(); } else { ; }
	
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

