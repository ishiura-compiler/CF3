
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x89 = 7254485075273LL;
int8_t x143 = 5;
uint64_t x302 = 1436LLU;
volatile uint64_t t2 = 2974721LLU;
uint32_t x308 = UINT32_MAX;
volatile int32_t t3 = -62;
static uint8_t x347 = 15U;
volatile uint64_t t4 = 468782397801LLU;
int64_t x686 = -1LL;
int64_t t6 = 3LL;
volatile uint64_t x761 = 5097586454877LLU;
static int16_t x942 = 13988;
volatile int32_t x943 = -1;
int32_t x944 = 17;
int64_t x1142 = 2156448554LL;
int16_t x1143 = -1;
volatile int32_t t12 = -1;
volatile int16_t x1259 = 5;
static uint8_t x1291 = 28U;
uint64_t t14 = 1LLU;
int64_t x1307 = -1LL;
int32_t x1529 = INT32_MIN;
uint64_t x1626 = 1LLU;
uint8_t x1628 = 21U;
volatile uint64_t x1650 = UINT64_MAX;
int8_t x1713 = INT8_MAX;
static uint64_t x1716 = UINT64_MAX;
volatile int8_t x1859 = 19;
int8_t x1945 = INT8_MIN;
int8_t x1946 = INT8_MIN;
uint8_t x1948 = 1U;
volatile int32_t t22 = 0;
uint8_t x2072 = 27U;
volatile uint32_t t23 = 47523U;
int32_t x2137 = INT32_MAX;
int64_t x2270 = -1LL;
uint16_t x2314 = UINT16_MAX;
uint32_t x2442 = UINT32_MAX;
int64_t x2484 = -1LL;
volatile int32_t t28 = 90752918;
static int32_t x2665 = INT32_MAX;
static volatile int8_t x2667 = 1;
uint16_t x3390 = UINT16_MAX;
volatile uint16_t x3430 = UINT16_MAX;
uint16_t x3441 = 6U;
uint8_t x3444 = 20U;
int32_t t35 = -2156;
uint64_t x3585 = 5436789085592897LLU;
uint8_t x3587 = 5U;
uint32_t x3694 = 26U;
int32_t t40 = 0;


void f0(void) {
    	uint16_t x90 = 9U;
	int8_t x91 = 5;
	int8_t x92 = 14;
	static volatile int64_t t0 = 3384999146281171LL;

    t0 = ((x89%x90)>>(x91+x92));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x141 = UINT64_MAX;
	static volatile uint32_t x142 = 1041554U;
	int8_t x144 = -1;
	static volatile uint64_t t1 = 1LLU;

    t1 = ((x141%x142)>>(x143+x144));

    if (t1 != 52942LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x301 = -1;
	volatile int8_t x303 = -1;
	static volatile uint8_t x304 = 24U;

    t2 = ((x301%x302)>>(x303+x304));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MIN;
	uint16_t x307 = 6U;

    t3 = ((x305%x306)>>(x307+x308));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x345 = 18U;
	uint64_t x346 = 5314554764344259877LLU;
	int32_t x348 = -1;

    t4 = ((x345%x346)>>(x347+x348));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x353 = 1;
	uint16_t x354 = 2166U;
	int32_t x355 = 26;
	int16_t x356 = 4;
	static volatile int32_t t5 = 0;

    t5 = ((x353%x354)>>(x355+x356));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x685 = INT32_MAX;
	uint32_t x687 = UINT32_MAX;
	static uint16_t x688 = 1U;

    t6 = ((x685%x686)>>(x687+x688));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x733 = 35U;
	int32_t x734 = INT32_MIN;
	uint8_t x735 = 2U;
	volatile int16_t x736 = 14;
	int32_t t7 = 34229998;

    t7 = ((x733%x734)>>(x735+x736));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x762 = INT32_MIN;
	static volatile int16_t x763 = -1;
	uint8_t x764 = 17U;
	volatile uint64_t t8 = 68967429987LLU;

    t8 = ((x761%x762)>>(x763+x764));

    if (t8 != 77782996LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x941 = INT64_MAX;
	volatile int64_t t9 = -323LL;

    t9 = ((x941%x942)>>(x943+x944));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x1013 = INT16_MAX;
	volatile uint16_t x1014 = UINT16_MAX;
	uint32_t x1015 = 3U;
	volatile uint64_t x1016 = UINT64_MAX;
	volatile int32_t t10 = -77;

    t10 = ((x1013%x1014)>>(x1015+x1016));

    if (t10 != 8191) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x1141 = 87704933519023LL;
	uint32_t x1144 = 17U;
	int64_t t11 = -877722622LL;

    t11 = ((x1141%x1142)>>(x1143+x1144));

    if (t11 != 219LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x1245 = 24;
	static volatile int16_t x1246 = INT16_MIN;
	static int8_t x1247 = 2;
	uint32_t x1248 = UINT32_MAX;

    t12 = ((x1245%x1246)>>(x1247+x1248));

    if (t12 != 12) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x1257 = 6;
	uint16_t x1258 = 851U;
	volatile int32_t x1260 = -1;
	volatile int32_t t13 = 1125;

    t13 = ((x1257%x1258)>>(x1259+x1260));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1289 = UINT64_MAX;
	int16_t x1290 = INT16_MIN;
	int8_t x1292 = 9;

    t14 = ((x1289%x1290)>>(x1291+x1292));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1305 = -13;
	uint64_t x1306 = UINT64_MAX;
	volatile int8_t x1308 = 1;
	static volatile uint64_t t15 = 0LLU;

    t15 = ((x1305%x1306)>>(x1307+x1308));

    if (t15 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x1530 = INT32_MIN;
	uint8_t x1531 = 1U;
	uint8_t x1532 = 14U;
	volatile int32_t t16 = -32143;

    t16 = ((x1529%x1530)>>(x1531+x1532));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x1625 = 10U;
	int16_t x1627 = -1;
	static uint64_t t17 = 2144837982441LLU;

    t17 = ((x1625%x1626)>>(x1627+x1628));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x1649 = INT8_MIN;
	uint8_t x1651 = 1U;
	int16_t x1652 = 51;
	volatile uint64_t t18 = 1268853649LLU;

    t18 = ((x1649%x1650)>>(x1651+x1652));

    if (t18 != 4095LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x1714 = UINT8_MAX;
	static uint32_t x1715 = 1U;
	int32_t t19 = 2090348;

    t19 = ((x1713%x1714)>>(x1715+x1716));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x1857 = UINT64_MAX;
	static uint8_t x1858 = 4U;
	static volatile int16_t x1860 = 1;
	uint64_t t20 = 1306225372743LLU;

    t20 = ((x1857%x1858)>>(x1859+x1860));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x1885 = 10U;
	int64_t x1886 = 38070LL;
	static uint8_t x1887 = 1U;
	volatile uint8_t x1888 = 6U;
	static volatile int64_t t21 = 1057LL;

    t21 = ((x1885%x1886)>>(x1887+x1888));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x1947 = -1LL;

    t22 = ((x1945%x1946)>>(x1947+x1948));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x2069 = UINT32_MAX;
	int8_t x2070 = -1;
	uint64_t x2071 = UINT64_MAX;

    t23 = ((x2069%x2070)>>(x2071+x2072));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x2138 = -1117;
	static uint8_t x2139 = 28U;
	int16_t x2140 = -13;
	volatile int32_t t24 = 366265213;

    t24 = ((x2137%x2138)>>(x2139+x2140));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x2269 = -1;
	volatile uint8_t x2271 = 14U;
	int64_t x2272 = -1LL;
	volatile int64_t t25 = -171940160LL;

    t25 = ((x2269%x2270)>>(x2271+x2272));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x2313 = INT8_MAX;
	uint8_t x2315 = 26U;
	int8_t x2316 = -3;
	int32_t t26 = 23624914;

    t26 = ((x2313%x2314)>>(x2315+x2316));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2441 = INT16_MIN;
	int16_t x2443 = -1;
	static int8_t x2444 = 8;
	volatile uint32_t t27 = 0U;

    t27 = ((x2441%x2442)>>(x2443+x2444));

    if (t27 != 33554176U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x2481 = 288;
	static int8_t x2482 = INT8_MAX;
	volatile int32_t x2483 = 1;

    t28 = ((x2481%x2482)>>(x2483+x2484));

    if (t28 != 34) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x2641 = 8U;
	static volatile int32_t x2642 = INT32_MIN;
	static int64_t x2643 = -1LL;
	uint8_t x2644 = 4U;
	uint32_t t29 = 1U;

    t29 = ((x2641%x2642)>>(x2643+x2644));

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x2666 = INT32_MAX;
	int64_t x2668 = -1LL;
	static volatile int32_t t30 = -388488;

    t30 = ((x2665%x2666)>>(x2667+x2668));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x2933 = 0;
	volatile int32_t x2934 = INT32_MIN;
	uint16_t x2935 = 1U;
	int8_t x2936 = -1;
	int32_t t31 = -28;

    t31 = ((x2933%x2934)>>(x2935+x2936));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x3045 = INT32_MIN;
	int16_t x3046 = -1;
	uint8_t x3047 = 16U;
	uint8_t x3048 = 14U;
	static volatile int32_t t32 = 1639378;

    t32 = ((x3045%x3046)>>(x3047+x3048));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x3389 = 0;
	volatile int8_t x3391 = -1;
	uint64_t x3392 = 22LLU;
	static volatile int32_t t33 = 20;

    t33 = ((x3389%x3390)>>(x3391+x3392));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x3429 = INT8_MAX;
	uint8_t x3431 = 10U;
	static volatile int8_t x3432 = 0;
	int32_t t34 = -71164886;

    t34 = ((x3429%x3430)>>(x3431+x3432));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x3442 = 17;
	int64_t x3443 = 1LL;

    t35 = ((x3441%x3442)>>(x3443+x3444));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x3505 = 53U;
	volatile uint32_t x3506 = 3325659U;
	uint32_t x3507 = UINT32_MAX;
	static uint8_t x3508 = 19U;
	volatile uint32_t t36 = 3384388U;

    t36 = ((x3505%x3506)>>(x3507+x3508));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x3586 = 5LL;
	int8_t x3588 = -1;
	static uint64_t t37 = 399501LLU;

    t37 = ((x3585%x3586)>>(x3587+x3588));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x3625 = 9175080566702378658LLU;
	int16_t x3626 = -1;
	int8_t x3627 = 6;
	uint8_t x3628 = 0U;
	volatile uint64_t t38 = 1729050413296367182LLU;

    t38 = ((x3625%x3626)>>(x3627+x3628));

    if (t38 != 143360633854724666LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x3693 = 734092973LLU;
	uint8_t x3695 = 1U;
	int8_t x3696 = -1;
	uint64_t t39 = 104LLU;

    t39 = ((x3693%x3694)>>(x3695+x3696));

    if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x3757 = 35U;
	uint8_t x3758 = 14U;
	static uint64_t x3759 = UINT64_MAX;
	static volatile uint8_t x3760 = 9U;

    t40 = ((x3757%x3758)>>(x3759+x3760));

    if (t40 != 0) { NG(); } else { ; }
	
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


    return 0;
}

