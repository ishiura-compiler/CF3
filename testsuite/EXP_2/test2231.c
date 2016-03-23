
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

int16_t x7 = INT16_MIN;
volatile uint16_t x8 = UINT16_MAX;
int32_t x85 = 2202976;
volatile int32_t x95 = INT32_MAX;
volatile int8_t x96 = INT8_MAX;
static int32_t x156 = INT32_MAX;
volatile uint32_t t5 = 15U;
volatile int64_t x194 = INT64_MAX;
int64_t x195 = INT64_MIN;
static volatile uint64_t t6 = 3882051703420LLU;
volatile int16_t x208 = INT16_MIN;
int32_t t7 = -41951;
int64_t x242 = INT64_MIN;
int32_t t10 = -1;
int16_t x289 = INT16_MAX;
int8_t x344 = INT8_MAX;
volatile int32_t t12 = -83678;
volatile uint32_t x359 = 546U;
int16_t x361 = INT16_MAX;
int16_t x373 = 0;
int32_t t15 = -13;
uint16_t x382 = UINT16_MAX;
volatile int64_t x383 = INT64_MIN;
volatile uint64_t x437 = 151425LLU;
uint16_t x439 = 7U;
int32_t x444 = INT32_MIN;
static uint32_t x501 = 45U;
int16_t x504 = -1;
uint8_t x533 = 80U;
volatile uint32_t x554 = 10U;
volatile uint8_t x586 = UINT8_MAX;
int64_t t26 = -125505253LL;
uint64_t x641 = 2373LLU;
int16_t x681 = INT16_MAX;
static uint8_t x695 = 20U;
int16_t x721 = 1;
volatile int32_t t35 = -13554;
volatile uint32_t x734 = 10U;
int64_t x735 = INT64_MIN;
int32_t x736 = INT32_MAX;
int16_t x778 = INT16_MIN;
volatile int64_t t39 = 3786061302950290LL;
uint64_t x817 = 3826537LLU;
uint8_t x819 = 11U;
static volatile uint64_t t42 = 213387229053516157LLU;
static volatile int32_t t43 = 309;
volatile uint64_t x841 = UINT64_MAX;
volatile uint8_t x848 = 2U;
static volatile uint64_t t46 = 240LLU;
uint32_t x881 = 5U;
static int16_t x901 = INT16_MAX;
int64_t x904 = INT64_MAX;
uint16_t x932 = UINT16_MAX;
int32_t x934 = 682892929;
volatile int64_t x935 = 0LL;
int16_t x966 = 36;
static int64_t x971 = INT64_MIN;
int16_t x972 = INT16_MIN;
volatile uint8_t x1006 = 47U;
int64_t x1030 = INT64_MIN;
uint32_t x1032 = UINT32_MAX;
int64_t x1122 = 32853329LL;
int64_t t59 = -8998816354656141LL;
int64_t x1234 = 3528LL;
uint32_t x1273 = UINT32_MAX;
int64_t x1276 = INT64_MIN;
int8_t x1280 = INT8_MIN;
int16_t x1285 = INT16_MAX;
static uint32_t x1301 = UINT32_MAX;
uint32_t x1302 = 1U;
static int32_t t68 = -1;
static volatile uint64_t t69 = 28LLU;
int32_t x1440 = INT32_MIN;
volatile int32_t t71 = -2325725;
volatile uint32_t x1469 = UINT32_MAX;
static volatile uint32_t t72 = 4692698U;
int16_t x1528 = 769;
int64_t t74 = 943857003LL;
volatile int32_t t75 = 275813741;
static uint16_t x1613 = UINT16_MAX;
static volatile int32_t t76 = -84;
int8_t x1712 = INT8_MAX;
int8_t x1749 = INT8_MAX;
uint8_t x1750 = 0U;
int8_t x1751 = INT8_MIN;
static volatile int32_t x1752 = INT32_MIN;
volatile int32_t t78 = -643600441;
uint8_t x1783 = 2U;
uint8_t x1842 = 2U;
static int64_t t80 = -31715978LL;
uint64_t x1846 = 201338744353101781LLU;
static uint8_t x1847 = 12U;
volatile int8_t x1854 = INT8_MAX;
uint32_t t83 = 205222822U;
int16_t x1873 = 3688;
volatile int64_t x1877 = 141854748401190365LL;
int64_t x1919 = INT64_MAX;
int16_t x1964 = -1;
static int64_t x1992 = INT64_MIN;
uint8_t x2021 = 1U;
uint16_t x2037 = 1339U;
int32_t x2040 = INT32_MAX;
int32_t t92 = 4;
uint32_t t93 = 12271U;
static int32_t x2086 = 0;
static int32_t t95 = 11188474;
static volatile uint8_t x2121 = 62U;
int8_t x2135 = INT8_MIN;
uint8_t x2191 = 30U;
static int8_t x2201 = 29;
int32_t x2279 = INT32_MIN;
uint32_t x2398 = UINT32_MAX;
uint32_t x2400 = 29032357U;
volatile int32_t x2424 = -1;
static uint8_t x2489 = UINT8_MAX;
int32_t x2501 = 38;
int16_t x2503 = INT16_MAX;
uint8_t x2512 = 1U;
static volatile uint32_t t112 = 5635U;
uint64_t x2533 = 890071656LLU;
volatile int8_t x2559 = 2;
int32_t x2560 = 1047;
uint64_t x2573 = UINT64_MAX;
static uint8_t x2576 = 8U;
static uint64_t x2584 = UINT64_MAX;
static uint64_t x2625 = 12409388013LLU;
static volatile uint64_t t118 = 52342LLU;
static uint16_t x2651 = 1U;
uint8_t x2658 = 18U;
int32_t t120 = -58703;
int64_t x2667 = INT64_MIN;
int64_t t123 = -177543111139736167LL;
static volatile uint16_t x2701 = 3616U;
static int64_t x2702 = INT64_MIN;
static int64_t x2703 = INT64_MAX;
uint64_t x2704 = UINT64_MAX;
static int16_t x2766 = INT16_MIN;
int8_t x2767 = INT8_MAX;
uint64_t x2769 = 26LLU;
int8_t x2781 = 0;
volatile int32_t x2790 = INT32_MIN;
static int8_t x2798 = 2;
static uint8_t x2799 = UINT8_MAX;
int8_t x2832 = 20;
int64_t x2863 = 2LL;
int8_t x2864 = -8;
uint64_t x2877 = 27LLU;
static uint8_t x2881 = UINT8_MAX;
uint32_t x2884 = 12105078U;
uint64_t x2885 = UINT64_MAX;
int16_t x2903 = INT16_MIN;
volatile uint64_t x2921 = 36853LLU;
int64_t x2942 = INT64_MIN;
uint64_t x2943 = 654239545908695723LLU;
static uint8_t x3021 = UINT8_MAX;
uint64_t t144 = 298436LLU;
static uint32_t x3057 = 1702721629U;
uint8_t x3122 = UINT8_MAX;
static int64_t x3123 = INT64_MIN;
volatile int32_t t146 = -10;
uint8_t x3149 = 6U;
int16_t x3170 = INT16_MIN;
int32_t x3222 = INT32_MIN;
volatile uint64_t t150 = 14720LLU;
static uint32_t x3265 = 968U;
uint16_t x3267 = UINT16_MAX;
int32_t x3292 = INT32_MIN;
volatile int32_t t153 = 0;
static int16_t x3317 = 2841;
uint8_t x3320 = 1U;
static int32_t t154 = 25079691;
int32_t x3324 = INT32_MAX;
volatile int32_t t155 = 2145077;
uint64_t x3333 = UINT64_MAX;
volatile uint64_t t156 = 1480363LLU;
volatile int8_t x3402 = -1;
int64_t t159 = 7148278900LL;
int32_t t161 = 355438;
uint16_t x3531 = UINT16_MAX;
volatile int32_t t165 = -1481383;
volatile uint16_t x3536 = 10484U;
static int32_t x3551 = INT32_MIN;
volatile int64_t x3581 = 10662379LL;
static volatile uint32_t x3630 = 9U;
volatile uint64_t t170 = 7007980734676827LLU;
int8_t x3701 = INT8_MAX;
int8_t x3702 = 1;
static int32_t t173 = -511;
int64_t x3743 = INT64_MIN;
uint64_t x3744 = 17LLU;
uint8_t x3769 = 0U;
volatile uint64_t t176 = 6692883LLU;
uint32_t x3861 = UINT32_MAX;
int16_t x3863 = -1;
volatile int64_t x3873 = 1238195952343598900LL;
uint16_t x3875 = 0U;
int32_t x3876 = INT32_MIN;
uint16_t x3920 = 7140U;
uint8_t x3938 = 0U;
uint32_t x3945 = 3U;
static int64_t t185 = -5674486266044LL;
uint16_t x3968 = 14U;
int32_t t186 = 4443;
int32_t x3970 = 3;
uint16_t x3971 = 24U;
int8_t x4098 = INT8_MIN;
volatile int32_t t191 = 5848073;
uint16_t x4118 = 3U;
uint8_t x4285 = 120U;
uint16_t x4286 = 7U;
static volatile int64_t x4301 = INT64_MAX;
int32_t x4313 = 197277;
volatile int64_t x4315 = INT64_MIN;


void f0(void) {
    	uint8_t x5 = UINT8_MAX;
	uint8_t x6 = 5U;
	volatile int32_t t0 = -804170;

    t0 = ((x5<<(x6&x7))%x8);

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x53 = 247377LL;
	static uint32_t x54 = 361U;
	uint8_t x55 = 0U;
	int8_t x56 = -2;
	volatile int64_t t1 = -31411803LL;

    t1 = ((x53<<(x54&x55))%x56);

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x86 = 0;
	int32_t x87 = -946038;
	int64_t x88 = INT64_MIN;
	static volatile int64_t t2 = -2648150539580674693LL;

    t2 = ((x85<<(x86&x87))%x88);

    if (t2 != 2202976LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x93 = 1351641166757673826LLU;
	int64_t x94 = INT64_MIN;
	volatile uint64_t t3 = 986LLU;

    t3 = ((x93<<(x94&x95))%x96);

    if (t3 != 23LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x149 = 164;
	static volatile uint8_t x150 = 0U;
	int32_t x151 = 375907549;
	int64_t x152 = -634240LL;
	volatile int64_t t4 = -350LL;

    t4 = ((x149<<(x150&x151))%x152);

    if (t4 != 164LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x153 = 1716U;
	uint8_t x154 = 41U;
	uint16_t x155 = 19743U;

    t5 = ((x153<<(x154&x155))%x156);

    if (t5 != 878592U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x193 = 600699068798LLU;
	int8_t x196 = 3;

    t6 = ((x193<<(x194&x195))%x196);

    if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x205 = 18;
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = 1U;

    t7 = ((x205<<(x206&x207))%x208);

    if (t7 != 36) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x213 = UINT32_MAX;
	volatile uint32_t x214 = UINT32_MAX;
	uint8_t x215 = 1U;
	int8_t x216 = INT8_MAX;
	static uint32_t t8 = 198U;

    t8 = ((x213<<(x214&x215))%x216);

    if (t8 != 14U) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint16_t x241 = 3750U;
	int16_t x243 = INT16_MAX;
	uint8_t x244 = UINT8_MAX;
	int32_t t9 = 260805495;

    t9 = ((x241<<(x242&x243))%x244);

    if (t9 != 180) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x281 = INT16_MAX;
	int64_t x282 = -1LL;
	uint16_t x283 = 16U;
	static int8_t x284 = -1;

    t10 = ((x281<<(x282&x283))%x284);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x290 = INT32_MIN;
	uint16_t x291 = 125U;
	volatile uint64_t x292 = 53831LLU;
	uint64_t t11 = 31499419120845032LLU;

    t11 = ((x289<<(x290&x291))%x292);

    if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x341 = 140;
	int16_t x342 = INT16_MIN;
	int16_t x343 = 0;

    t12 = ((x341<<(x342&x343))%x344);

    if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x357 = UINT64_MAX;
	uint8_t x358 = UINT8_MAX;
	int16_t x360 = INT16_MIN;
	static uint64_t t13 = 228683416003LLU;

    t13 = ((x357<<(x358&x359))%x360);

    if (t13 != 18446744056529682432LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x362 = 60;
	volatile uint8_t x363 = 0U;
	int8_t x364 = -1;
	int32_t t14 = -275565;

    t14 = ((x361<<(x362&x363))%x364);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x374 = INT16_MAX;
	int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MAX;

    t15 = ((x373<<(x374&x375))%x376);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x381 = 10U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t16 = 26927435;

    t16 = ((x381<<(x382&x383))%x384);

    if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x393 = 1U;
	int8_t x394 = INT8_MAX;
	volatile int64_t x395 = INT64_MIN;
	int8_t x396 = 10;
	int32_t t17 = -15722;

    t17 = ((x393<<(x394&x395))%x396);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x397 = UINT64_MAX;
	int16_t x398 = 6569;
	int16_t x399 = INT16_MIN;
	uint64_t x400 = 3427969502467730LLU;
	uint64_t t18 = 4265970204816174177LLU;

    t18 = ((x397<<(x398&x399))%x400);

    if (t18 != 840180930696485LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x438 = 24U;
	int16_t x440 = INT16_MAX;
	uint64_t t19 = 61141079774LLU;

    t19 = ((x437<<(x438&x439))%x440);

    if (t19 != 20357LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x441 = 120052;
	int8_t x442 = 8;
	volatile int32_t x443 = INT32_MIN;
	static volatile int32_t t20 = 18855345;

    t20 = ((x441<<(x442&x443))%x444);

    if (t20 != 120052) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x481 = 66;
	int64_t x482 = INT64_MIN;
	static int16_t x483 = 125;
	uint32_t x484 = UINT32_MAX;
	uint32_t t21 = 170061038U;

    t21 = ((x481<<(x482&x483))%x484);

    if (t21 != 66U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x502 = 0U;
	int64_t x503 = 34752997568844093LL;
	uint32_t t22 = 1052U;

    t22 = ((x501<<(x502&x503))%x504);

    if (t22 != 45U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x534 = 1U;
	uint8_t x535 = 20U;
	uint16_t x536 = UINT16_MAX;
	int32_t t23 = -601163564;

    t23 = ((x533<<(x534&x535))%x536);

    if (t23 != 80) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	volatile int32_t x555 = INT32_MIN;
	volatile int32_t x556 = INT32_MIN;
	int32_t t24 = 20;

    t24 = ((x553<<(x554&x555))%x556);

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x585 = 691;
	uint8_t x587 = 7U;
	int32_t x588 = INT32_MIN;
	volatile int32_t t25 = -62275;

    t25 = ((x585<<(x586&x587))%x588);

    if (t25 != 88448) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x609 = INT64_MAX;
	int8_t x610 = INT8_MAX;
	int64_t x611 = INT64_MIN;
	int16_t x612 = INT16_MIN;

    t26 = ((x609<<(x610&x611))%x612);

    if (t26 != 32767LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x625 = 41458;
	uint32_t x626 = 7U;
	int64_t x627 = INT64_MAX;
	uint32_t x628 = UINT32_MAX;
	static volatile uint32_t t27 = 1U;

    t27 = ((x625<<(x626&x627))%x628);

    if (t27 != 5306624U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x637 = 121431LLU;
	int64_t x638 = -725663649908730581LL;
	static uint16_t x639 = 0U;
	volatile int64_t x640 = INT64_MIN;
	volatile uint64_t t28 = 61267152384302LLU;

    t28 = ((x637<<(x638&x639))%x640);

    if (t28 != 121431LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x642 = -194257879605853784LL;
	volatile int8_t x643 = INT8_MAX;
	int64_t x644 = -1LL;
	static volatile uint64_t t29 = 355538596453LLU;

    t29 = ((x641<<(x642&x643))%x644);

    if (t29 != 2609141092712448LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x682 = 34;
	int8_t x683 = 3;
	int16_t x684 = INT16_MIN;
	static volatile int32_t t30 = 2611577;

    t30 = ((x681<<(x682&x683))%x684);

    if (t30 != 32764) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x693 = 6097614252571450945LLU;
	static int16_t x694 = 0;
	volatile int8_t x696 = INT8_MAX;
	uint64_t t31 = 219106224979260251LLU;

    t31 = ((x693<<(x694&x695))%x696);

    if (t31 != 10LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x697 = UINT64_MAX;
	volatile uint64_t x698 = 4220255410558796898LLU;
	int64_t x699 = 0LL;
	int16_t x700 = INT16_MIN;
	volatile uint64_t t32 = 58219587LLU;

    t32 = ((x697<<(x698&x699))%x700);

    if (t32 != 32767LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x705 = UINT16_MAX;
	int8_t x706 = 0;
	uint16_t x707 = 13895U;
	uint32_t x708 = 977531U;
	uint32_t t33 = 1U;

    t33 = ((x705<<(x706&x707))%x708);

    if (t33 != 65535U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x709 = UINT16_MAX;
	int8_t x710 = INT8_MAX;
	int16_t x711 = 0;
	int8_t x712 = INT8_MIN;
	int32_t t34 = -1636;

    t34 = ((x709<<(x710&x711))%x712);

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x722 = INT64_MIN;
	int8_t x723 = 1;
	int32_t x724 = INT32_MIN;

    t35 = ((x721<<(x722&x723))%x724);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x725 = 103505331115653LLU;
	volatile int32_t x726 = -14;
	int16_t x727 = 0;
	uint64_t x728 = UINT64_MAX;
	uint64_t t36 = 2025973LLU;

    t36 = ((x725<<(x726&x727))%x728);

    if (t36 != 103505331115653LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x733 = INT16_MAX;
	int32_t t37 = -49;

    t37 = ((x733<<(x734&x735))%x736);

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x761 = 3755825063551LLU;
	volatile int32_t x762 = INT32_MIN;
	uint32_t x763 = 120U;
	int8_t x764 = INT8_MAX;
	uint64_t t38 = 3886752LLU;

    t38 = ((x761<<(x762&x763))%x764);

    if (t38 != 32LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x777 = 4389U;
	uint8_t x779 = UINT8_MAX;
	static int64_t x780 = INT64_MIN;

    t39 = ((x777<<(x778&x779))%x780);

    if (t39 != 4389LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x781 = 0U;
	uint64_t x782 = 1608LLU;
	volatile int32_t x783 = 0;
	static int16_t x784 = INT16_MIN;
	int32_t t40 = -408347107;

    t40 = ((x781<<(x782&x783))%x784);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x785 = 46U;
	uint8_t x786 = 3U;
	static uint64_t x787 = UINT64_MAX;
	int16_t x788 = -11;
	int32_t t41 = -17196144;

    t41 = ((x785<<(x786&x787))%x788);

    if (t41 != 5) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x818 = 0U;
	static int32_t x820 = -1;

    t42 = ((x817<<(x818&x819))%x820);

    if (t42 != 3826537LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x825 = 57U;
	int8_t x826 = 4;
	uint32_t x827 = UINT32_MAX;
	int8_t x828 = INT8_MIN;

    t43 = ((x825<<(x826&x827))%x828);

    if (t43 != 16) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x833 = 361LLU;
	static int32_t x834 = INT32_MIN;
	uint64_t x835 = 1LLU;
	int16_t x836 = 59;
	uint64_t t44 = 6312296771LLU;

    t44 = ((x833<<(x834&x835))%x836);

    if (t44 != 7LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x842 = INT16_MIN;
	volatile int16_t x843 = INT16_MAX;
	uint64_t x844 = 2846040108074LLU;
	volatile uint64_t t45 = 1217531LLU;

    t45 = ((x841<<(x842&x843))%x844);

    if (t45 != 1349342841137LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x845 = 22056547LLU;
	int64_t x846 = INT64_MIN;
	volatile uint16_t x847 = 5U;

    t46 = ((x845<<(x846&x847))%x848);

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x857 = 90112;
	volatile int64_t x858 = 0LL;
	static int32_t x859 = INT32_MIN;
	int32_t x860 = INT32_MIN;
	volatile int32_t t47 = 0;

    t47 = ((x857<<(x858&x859))%x860);

    if (t47 != 90112) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x873 = 0U;
	int16_t x874 = 0;
	int8_t x875 = INT8_MIN;
	static uint8_t x876 = 6U;
	int32_t t48 = 71;

    t48 = ((x873<<(x874&x875))%x876);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x882 = 0U;
	uint16_t x883 = UINT16_MAX;
	int32_t x884 = -422;
	volatile uint32_t t49 = 14931991U;

    t49 = ((x881<<(x882&x883))%x884);

    if (t49 != 5U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x902 = -6;
	uint8_t x903 = 1U;
	static volatile int64_t t50 = 67853958LL;

    t50 = ((x901<<(x902&x903))%x904);

    if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x905 = UINT64_MAX;
	int32_t x906 = INT32_MIN;
	volatile int16_t x907 = INT16_MAX;
	uint64_t x908 = 93051593950LLU;
	volatile uint64_t t51 = 3074556578972835134LLU;

    t51 = ((x905<<(x906&x907))%x908);

    if (t51 != 29353098965LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x929 = UINT8_MAX;
	static uint16_t x930 = 108U;
	volatile uint32_t x931 = 0U;
	static int32_t t52 = 25;

    t52 = ((x929<<(x930&x931))%x932);

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x933 = 135LL;
	volatile uint16_t x936 = 91U;
	int64_t t53 = -2206757215883837LL;

    t53 = ((x933<<(x934&x935))%x936);

    if (t53 != 44LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x965 = INT64_MAX;
	int8_t x967 = 0;
	volatile int16_t x968 = -15;
	static int64_t t54 = -398971898762LL;

    t54 = ((x965<<(x966&x967))%x968);

    if (t54 != 7LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x969 = 313568238674LL;
	uint32_t x970 = 125978U;
	int64_t t55 = -3769032707LL;

    t55 = ((x969<<(x970&x971))%x972);

    if (t55 != 7250LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x1005 = 21U;
	static uint32_t x1007 = 2618204U;
	uint16_t x1008 = 64U;
	uint32_t t56 = 749U;

    t56 = ((x1005<<(x1006&x1007))%x1008);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x1025 = 1115509228958274LLU;
	int32_t x1026 = 9944421;
	int32_t x1027 = INT32_MIN;
	static int8_t x1028 = INT8_MIN;
	static uint64_t t57 = 56555882LLU;

    t57 = ((x1025<<(x1026&x1027))%x1028);

    if (t57 != 1115509228958274LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x1029 = 7983035725125859556LLU;
	uint16_t x1031 = UINT16_MAX;
	volatile uint64_t t58 = 3652099708398296LLU;

    t58 = ((x1029<<(x1030&x1031))%x1032);

    if (t58 != 2687150486LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x1121 = 6158292425541LL;
	int64_t x1123 = INT64_MIN;
	int8_t x1124 = INT8_MAX;

    t59 = ((x1121<<(x1122&x1123))%x1124);

    if (t59 != 88LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x1229 = 88849954LLU;
	uint8_t x1230 = 9U;
	static uint64_t x1231 = UINT64_MAX;
	uint16_t x1232 = UINT16_MAX;
	static uint64_t t60 = 203LLU;

    t60 = ((x1229<<(x1230&x1231))%x1232);

    if (t60 != 56198LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x1233 = 2746;
	int8_t x1235 = 7;
	uint32_t x1236 = 201066U;
	volatile uint32_t t61 = 4408599U;

    t61 = ((x1233<<(x1234&x1235))%x1236);

    if (t61 != 2746U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x1274 = UINT8_MAX;
	uint64_t x1275 = 0LLU;
	int64_t t62 = 14943614091350LL;

    t62 = ((x1273<<(x1274&x1275))%x1276);

    if (t62 != 4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x1277 = 471U;
	int16_t x1278 = -7;
	int8_t x1279 = 1;
	uint32_t t63 = 1288568U;

    t63 = ((x1277<<(x1278&x1279))%x1280);

    if (t63 != 942U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x1286 = -13;
	volatile int64_t x1287 = 7LL;
	uint32_t x1288 = 198941327U;
	uint32_t t64 = 140759678U;

    t64 = ((x1285<<(x1286&x1287))%x1288);

    if (t64 != 262136U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x1303 = INT64_MIN;
	uint64_t x1304 = UINT64_MAX;
	static volatile uint64_t t65 = 1713LLU;

    t65 = ((x1301<<(x1302&x1303))%x1304);

    if (t65 != 4294967295LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x1321 = 189530LLU;
	int64_t x1322 = -4224030702032585607LL;
	int32_t x1323 = 0;
	int8_t x1324 = INT8_MIN;
	static uint64_t t66 = 2038332692LLU;

    t66 = ((x1321<<(x1322&x1323))%x1324);

    if (t66 != 189530LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x1389 = 7;
	volatile int64_t x1390 = INT64_MIN;
	int64_t x1391 = INT64_MAX;
	int64_t x1392 = -80321877836LL;
	int64_t t67 = 57223990748LL;

    t67 = ((x1389<<(x1390&x1391))%x1392);

    if (t67 != 7LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x1397 = 1U;
	int32_t x1398 = INT32_MIN;
	uint8_t x1399 = 31U;
	int16_t x1400 = INT16_MIN;

    t68 = ((x1397<<(x1398&x1399))%x1400);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x1409 = 12545004187LLU;
	uint32_t x1410 = 56U;
	static int8_t x1411 = INT8_MIN;
	int64_t x1412 = 12884323959772LL;

    t69 = ((x1409<<(x1410&x1411))%x1412);

    if (t69 != 12545004187LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x1437 = 472187195U;
	int64_t x1438 = INT64_MIN;
	int32_t x1439 = INT32_MAX;
	uint32_t t70 = 12546U;

    t70 = ((x1437<<(x1438&x1439))%x1440);

    if (t70 != 472187195U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x1465 = 10;
	static volatile uint16_t x1466 = 7U;
	uint8_t x1467 = 0U;
	uint8_t x1468 = 2U;

    t71 = ((x1465<<(x1466&x1467))%x1468);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x1470 = -1;
	uint8_t x1471 = 3U;
	volatile uint32_t x1472 = 553U;

    t72 = ((x1469<<(x1470&x1471))%x1472);

    if (t72 != 437U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x1525 = UINT64_MAX;
	uint8_t x1526 = UINT8_MAX;
	uint8_t x1527 = 15U;
	volatile uint64_t t73 = 11664521899757LLU;

    t73 = ((x1525<<(x1526&x1527))%x1528);

    if (t73 != 660LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x1549 = 146718;
	int32_t x1550 = 198;
	int64_t x1551 = INT64_MIN;
	int64_t x1552 = INT64_MAX;

    t74 = ((x1549<<(x1550&x1551))%x1552);

    if (t74 != 146718LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x1601 = INT16_MAX;
	uint8_t x1602 = 1U;
	int32_t x1603 = 14557131;
	int16_t x1604 = -780;

    t75 = ((x1601<<(x1602&x1603))%x1604);

    if (t75 != 14) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x1614 = 0U;
	uint32_t x1615 = UINT32_MAX;
	static int8_t x1616 = 8;

    t76 = ((x1613<<(x1614&x1615))%x1616);

    if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x1709 = INT16_MAX;
	int8_t x1710 = 3;
	static volatile int64_t x1711 = INT64_MIN;
	volatile int32_t t77 = 1;

    t77 = ((x1709<<(x1710&x1711))%x1712);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    

    t78 = ((x1749<<(x1750&x1751))%x1752);

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x1781 = UINT16_MAX;
	int16_t x1782 = INT16_MAX;
	int64_t x1784 = INT64_MAX;
	volatile int64_t t79 = 62469096LL;

    t79 = ((x1781<<(x1782&x1783))%x1784);

    if (t79 != 262140LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x1841 = 196268;
	static int64_t x1843 = INT64_MIN;
	static int64_t x1844 = -124743731184LL;

    t80 = ((x1841<<(x1842&x1843))%x1844);

    if (t80 != 196268LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x1845 = UINT16_MAX;
	int16_t x1848 = INT16_MAX;
	static volatile int32_t t81 = -41183921;

    t81 = ((x1845<<(x1846&x1847))%x1848);

    if (t81 != 16) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x1853 = 1923LL;
	int16_t x1855 = INT16_MIN;
	int16_t x1856 = 55;
	int64_t t82 = 449223680458633LL;

    t82 = ((x1853<<(x1854&x1855))%x1856);

    if (t82 != 53LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x1869 = UINT32_MAX;
	static volatile int8_t x1870 = INT8_MIN;
	volatile int32_t x1871 = 20;
	volatile uint32_t x1872 = 448275U;

    t83 = ((x1869<<(x1870&x1871))%x1872);

    if (t83 != 44520U) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x1874 = INT8_MIN;
	int8_t x1875 = INT8_MAX;
	static uint64_t x1876 = 954997289LLU;
	volatile uint64_t t84 = 3798458006026545158LLU;

    t84 = ((x1873<<(x1874&x1875))%x1876);

    if (t84 != 3688LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x1878 = 1U;
	volatile int8_t x1879 = INT8_MIN;
	volatile int8_t x1880 = -1;
	volatile int64_t t85 = -396737894353LL;

    t85 = ((x1877<<(x1878&x1879))%x1880);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x1917 = UINT64_MAX;
	int64_t x1918 = INT64_MIN;
	uint32_t x1920 = UINT32_MAX;
	volatile uint64_t t86 = 29303943014685500LLU;

    t86 = ((x1917<<(x1918&x1919))%x1920);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x1961 = INT16_MAX;
	int32_t x1962 = -1;
	volatile uint8_t x1963 = 1U;
	volatile int32_t t87 = 4;

    t87 = ((x1961<<(x1962&x1963))%x1964);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x1977 = INT64_MAX;
	uint16_t x1978 = 4227U;
	int32_t x1979 = 0;
	static volatile int16_t x1980 = -4;
	static volatile int64_t t88 = 4381LL;

    t88 = ((x1977<<(x1978&x1979))%x1980);

    if (t88 != 3LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x1985 = INT16_MAX;
	uint32_t x1986 = 6U;
	int8_t x1987 = INT8_MIN;
	static int16_t x1988 = 1;
	int32_t t89 = -56328;

    t89 = ((x1985<<(x1986&x1987))%x1988);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x1989 = INT16_MAX;
	int16_t x1990 = INT16_MAX;
	int32_t x1991 = 0;
	volatile int64_t t90 = 36412LL;

    t90 = ((x1989<<(x1990&x1991))%x1992);

    if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x2022 = INT64_MIN;
	static volatile uint32_t x2023 = 14382771U;
	volatile int8_t x2024 = -1;
	int32_t t91 = 2222;

    t91 = ((x2021<<(x2022&x2023))%x2024);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x2038 = INT32_MIN;
	int64_t x2039 = 29006LL;

    t92 = ((x2037<<(x2038&x2039))%x2040);

    if (t92 != 1339) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x2069 = 17260021U;
	int64_t x2070 = INT64_MAX;
	int8_t x2071 = 1;
	int32_t x2072 = -1;

    t93 = ((x2069<<(x2070&x2071))%x2072);

    if (t93 != 34520042U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x2077 = UINT8_MAX;
	int8_t x2078 = INT8_MIN;
	uint8_t x2079 = 17U;
	static uint8_t x2080 = UINT8_MAX;
	volatile int32_t t94 = -232;

    t94 = ((x2077<<(x2078&x2079))%x2080);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x2085 = 23;
	volatile int16_t x2087 = INT16_MIN;
	uint16_t x2088 = 33U;

    t95 = ((x2085<<(x2086&x2087))%x2088);

    if (t95 != 23) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x2093 = 2U;
	static uint8_t x2094 = 12U;
	uint32_t x2095 = 14049U;
	int8_t x2096 = INT8_MIN;
	volatile int32_t t96 = -2435199;

    t96 = ((x2093<<(x2094&x2095))%x2096);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x2122 = 5U;
	int32_t x2123 = -11328;
	int64_t x2124 = 13521963279331LL;
	volatile int64_t t97 = 16829843096729004LL;

    t97 = ((x2121<<(x2122&x2123))%x2124);

    if (t97 != 62LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x2133 = 61912734U;
	volatile int16_t x2134 = 0;
	static int32_t x2136 = -1;
	volatile uint32_t t98 = 124464U;

    t98 = ((x2133<<(x2134&x2135))%x2136);

    if (t98 != 61912734U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x2177 = 2336;
	uint8_t x2178 = 8U;
	int16_t x2179 = -4403;
	static volatile int16_t x2180 = -1;
	volatile int32_t t99 = -25712;

    t99 = ((x2177<<(x2178&x2179))%x2180);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x2181 = INT16_MAX;
	int16_t x2182 = 4;
	static int64_t x2183 = -25387LL;
	int8_t x2184 = INT8_MIN;
	volatile int32_t t100 = -4964;

    t100 = ((x2181<<(x2182&x2183))%x2184);

    if (t100 != 112) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x2189 = UINT64_MAX;
	int32_t x2190 = 0;
	int64_t x2192 = INT64_MIN;
	volatile uint64_t t101 = 5LLU;

    t101 = ((x2189<<(x2190&x2191))%x2192);

    if (t101 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x2197 = 4185051483120233LLU;
	int16_t x2198 = INT16_MIN;
	volatile uint8_t x2199 = 111U;
	volatile int8_t x2200 = -1;
	static volatile uint64_t t102 = 22833189533602LLU;

    t102 = ((x2197<<(x2198&x2199))%x2200);

    if (t102 != 4185051483120233LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x2202 = INT16_MIN;
	int8_t x2203 = 42;
	int8_t x2204 = -29;
	volatile int32_t t103 = 3;

    t103 = ((x2201<<(x2202&x2203))%x2204);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x2277 = 54;
	static volatile uint64_t x2278 = 372LLU;
	static int16_t x2280 = -1;
	volatile int32_t t104 = -29624770;

    t104 = ((x2277<<(x2278&x2279))%x2280);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x2361 = INT8_MAX;
	static int16_t x2362 = -14026;
	volatile int8_t x2363 = 5;
	uint16_t x2364 = 3U;
	volatile int32_t t105 = -23216;

    t105 = ((x2361<<(x2362&x2363))%x2364);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint16_t x2397 = UINT16_MAX;
	uint8_t x2399 = 1U;
	uint32_t t106 = 6U;

    t106 = ((x2397<<(x2398&x2399))%x2400);

    if (t106 != 131070U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x2421 = 1U;
	volatile uint8_t x2422 = 28U;
	int16_t x2423 = -1;
	int32_t t107 = -26060;

    t107 = ((x2421<<(x2422&x2423))%x2424);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x2481 = UINT8_MAX;
	uint32_t x2482 = 3U;
	static uint16_t x2483 = 0U;
	int16_t x2484 = 1;
	static int32_t t108 = 4322563;

    t108 = ((x2481<<(x2482&x2483))%x2484);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x2485 = UINT64_MAX;
	volatile int8_t x2486 = 59;
	int16_t x2487 = 1087;
	volatile int32_t x2488 = INT32_MAX;
	uint64_t t109 = 20888559LLU;

    t109 = ((x2485<<(x2486&x2487))%x2488);

    if (t109 != 1879048195LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x2490 = -1;
	static int32_t x2491 = 0;
	volatile int64_t x2492 = -1LL;
	static int64_t t110 = -118423081856690245LL;

    t110 = ((x2489<<(x2490&x2491))%x2492);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x2502 = INT16_MIN;
	int8_t x2504 = INT8_MAX;
	static int32_t t111 = -1701;

    t111 = ((x2501<<(x2502&x2503))%x2504);

    if (t111 != 38) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x2509 = UINT32_MAX;
	int32_t x2510 = 29;
	uint16_t x2511 = 119U;

    t112 = ((x2509<<(x2510&x2511))%x2512);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x2534 = 511U;
	int32_t x2535 = INT32_MIN;
	int8_t x2536 = -1;
	uint64_t t113 = 2741696LLU;

    t113 = ((x2533<<(x2534&x2535))%x2536);

    if (t113 != 890071656LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x2557 = UINT64_MAX;
	static volatile uint32_t x2558 = 6341U;
	uint64_t t114 = 322592717LLU;

    t114 = ((x2557<<(x2558&x2559))%x2560);

    if (t114 != 567LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x2574 = -138;
	int8_t x2575 = 1;
	volatile uint64_t t115 = 1022478813868217750LLU;

    t115 = ((x2573<<(x2574&x2575))%x2576);

    if (t115 != 7LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x2581 = 10;
	volatile int8_t x2582 = 3;
	uint64_t x2583 = 3479114686LLU;
	volatile uint64_t t116 = 830281284LLU;

    t116 = ((x2581<<(x2582&x2583))%x2584);

    if (t116 != 40LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x2605 = 22200LLU;
	int32_t x2606 = INT32_MIN;
	static uint8_t x2607 = 0U;
	volatile int16_t x2608 = -1;
	static uint64_t t117 = 2089005LLU;

    t117 = ((x2605<<(x2606&x2607))%x2608);

    if (t117 != 22200LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x2626 = -1;
	uint16_t x2627 = 22U;
	uint64_t x2628 = 2771802LLU;

    t118 = ((x2625<<(x2626&x2627))%x2628);

    if (t118 != 1951356LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x2649 = INT16_MAX;
	static volatile int32_t x2650 = INT32_MIN;
	static int64_t x2652 = 6LL;
	volatile int64_t t119 = -407700LL;

    t119 = ((x2649<<(x2650&x2651))%x2652);

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x2657 = 7765U;
	int32_t x2659 = INT32_MIN;
	volatile int8_t x2660 = INT8_MIN;

    t120 = ((x2657<<(x2658&x2659))%x2660);

    if (t120 != 85) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x2665 = UINT16_MAX;
	static int8_t x2666 = INT8_MAX;
	static uint64_t x2668 = UINT64_MAX;
	volatile uint64_t t121 = 61355LLU;

    t121 = ((x2665<<(x2666&x2667))%x2668);

    if (t121 != 65535LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x2689 = 1U;
	volatile int64_t x2690 = INT64_MIN;
	volatile uint8_t x2691 = 70U;
	static volatile int64_t x2692 = INT64_MAX;
	volatile int64_t t122 = 1981366198007792412LL;

    t122 = ((x2689<<(x2690&x2691))%x2692);

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x2693 = UINT16_MAX;
	static int8_t x2694 = INT8_MAX;
	static int64_t x2695 = INT64_MIN;
	int64_t x2696 = -1LL;

    t123 = ((x2693<<(x2694&x2695))%x2696);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t t124 = 28LLU;

    t124 = ((x2701<<(x2702&x2703))%x2704);

    if (t124 != 3616LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x2717 = 13;
	int16_t x2718 = INT16_MAX;
	volatile int16_t x2719 = INT16_MIN;
	int64_t x2720 = -948446349778LL;
	int64_t t125 = 3278554343595677LL;

    t125 = ((x2717<<(x2718&x2719))%x2720);

    if (t125 != 13LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x2725 = INT8_MAX;
	int32_t x2726 = INT32_MAX;
	static uint8_t x2727 = 2U;
	int64_t x2728 = INT64_MIN;
	int64_t t126 = -160546LL;

    t126 = ((x2725<<(x2726&x2727))%x2728);

    if (t126 != 508LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x2745 = 87;
	uint8_t x2746 = 2U;
	int64_t x2747 = INT64_MAX;
	int32_t x2748 = INT32_MIN;
	volatile int32_t t127 = -40;

    t127 = ((x2745<<(x2746&x2747))%x2748);

    if (t127 != 348) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x2761 = 1;
	int16_t x2762 = INT16_MAX;
	int16_t x2763 = INT16_MIN;
	int32_t x2764 = INT32_MAX;
	int32_t t128 = -2417;

    t128 = ((x2761<<(x2762&x2763))%x2764);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x2765 = 1475U;
	int64_t x2768 = -733LL;
	static int64_t t129 = -129436908181251LL;

    t129 = ((x2765<<(x2766&x2767))%x2768);

    if (t129 != 9LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x2770 = 24U;
	static int64_t x2771 = INT64_MIN;
	uint16_t x2772 = 97U;
	static volatile uint64_t t130 = 10468LLU;

    t130 = ((x2769<<(x2770&x2771))%x2772);

    if (t130 != 26LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x2782 = INT32_MIN;
	uint8_t x2783 = UINT8_MAX;
	int32_t x2784 = -947;
	volatile int32_t t131 = -1261906;

    t131 = ((x2781<<(x2782&x2783))%x2784);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x2789 = INT64_MAX;
	int8_t x2791 = 31;
	int32_t x2792 = INT32_MAX;
	int64_t t132 = -55LL;

    t132 = ((x2789<<(x2790&x2791))%x2792);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x2797 = 22U;
	int16_t x2800 = INT16_MAX;
	volatile int32_t t133 = -60519294;

    t133 = ((x2797<<(x2798&x2799))%x2800);

    if (t133 != 88) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x2829 = INT32_MAX;
	volatile int16_t x2830 = 3;
	int32_t x2831 = INT32_MIN;
	static int32_t t134 = 101;

    t134 = ((x2829<<(x2830&x2831))%x2832);

    if (t134 != 7) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x2861 = 464LL;
	uint64_t x2862 = 1117LLU;
	static int64_t t135 = -134376734LL;

    t135 = ((x2861<<(x2862&x2863))%x2864);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x2878 = 1U;
	int16_t x2879 = INT16_MIN;
	uint64_t x2880 = UINT64_MAX;
	volatile uint64_t t136 = 100167LLU;

    t136 = ((x2877<<(x2878&x2879))%x2880);

    if (t136 != 27LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x2882 = 0;
	uint64_t x2883 = UINT64_MAX;
	volatile uint32_t t137 = 0U;

    t137 = ((x2881<<(x2882&x2883))%x2884);

    if (t137 != 255U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x2886 = 7U;
	static uint64_t x2887 = UINT64_MAX;
	volatile int64_t x2888 = 36561LL;
	volatile uint64_t t138 = 32061030553LLU;

    t138 = ((x2885<<(x2886&x2887))%x2888);

    if (t138 != 36113LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x2901 = INT8_MAX;
	uint64_t x2902 = 1574LLU;
	static int16_t x2904 = -1;
	int32_t t139 = 306;

    t139 = ((x2901<<(x2902&x2903))%x2904);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x2922 = 4;
	volatile uint8_t x2923 = 10U;
	int8_t x2924 = -1;
	volatile uint64_t t140 = 649LLU;

    t140 = ((x2921<<(x2922&x2923))%x2924);

    if (t140 != 36853LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x2933 = 3524723147161LLU;
	int32_t x2934 = -287499;
	static volatile int16_t x2935 = 0;
	uint8_t x2936 = UINT8_MAX;
	static volatile uint64_t t141 = 15694058LLU;

    t141 = ((x2933<<(x2934&x2935))%x2936);

    if (t141 != 91LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x2941 = INT32_MAX;
	volatile int64_t x2944 = INT64_MAX;
	static int64_t t142 = -1505474617341298LL;

    t142 = ((x2941<<(x2942&x2943))%x2944);

    if (t142 != 2147483647LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x3022 = 0U;
	int64_t x3023 = 1LL;
	volatile int8_t x3024 = -1;
	static int32_t t143 = -1581217;

    t143 = ((x3021<<(x3022&x3023))%x3024);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x3037 = 9378LLU;
	int8_t x3038 = INT8_MIN;
	static int8_t x3039 = 29;
	uint8_t x3040 = UINT8_MAX;

    t144 = ((x3037<<(x3038&x3039))%x3040);

    if (t144 != 198LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x3058 = 6U;
	int8_t x3059 = -1;
	int64_t x3060 = INT64_MIN;
	static volatile int64_t t145 = -327515361926LL;

    t145 = ((x3057<<(x3058&x3059))%x3060);

    if (t145 != 1600001856LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x3121 = UINT16_MAX;
	int16_t x3124 = INT16_MAX;

    t146 = ((x3121<<(x3122&x3123))%x3124);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x3150 = 9U;
	int32_t x3151 = -1;
	volatile int32_t x3152 = -1;
	volatile int32_t t147 = 23;

    t147 = ((x3149<<(x3150&x3151))%x3152);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x3169 = UINT16_MAX;
	uint8_t x3171 = UINT8_MAX;
	int64_t x3172 = -6128LL;
	volatile int64_t t148 = -990652LL;

    t148 = ((x3169<<(x3170&x3171))%x3172);

    if (t148 != 4255LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x3209 = 1993724438LL;
	int8_t x3210 = 6;
	static int16_t x3211 = -1;
	int8_t x3212 = INT8_MAX;
	int64_t t149 = -1222107876LL;

    t149 = ((x3209<<(x3210&x3211))%x3212);

    if (t149 != 103LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x3221 = 13;
	int32_t x3223 = INT32_MAX;
	uint64_t x3224 = UINT64_MAX;

    t150 = ((x3221<<(x3222&x3223))%x3224);

    if (t150 != 13LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x3266 = INT64_MIN;
	uint8_t x3268 = UINT8_MAX;
	volatile uint32_t t151 = 51777977U;

    t151 = ((x3265<<(x3266&x3267))%x3268);

    if (t151 != 203U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x3289 = 8U;
	int16_t x3290 = 6235;
	uint16_t x3291 = 0U;
	int32_t t152 = 931;

    t152 = ((x3289<<(x3290&x3291))%x3292);

    if (t152 != 8) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x3313 = 122U;
	uint16_t x3314 = 13U;
	uint16_t x3315 = UINT16_MAX;
	volatile int16_t x3316 = -1;

    t153 = ((x3313<<(x3314&x3315))%x3316);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x3318 = 1U;
	int8_t x3319 = -12;

    t154 = ((x3317<<(x3318&x3319))%x3320);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x3321 = UINT16_MAX;
	uint32_t x3322 = UINT32_MAX;
	static int8_t x3323 = 7;

    t155 = ((x3321<<(x3322&x3323))%x3324);

    if (t155 != 8388480) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x3334 = 156U;
	int16_t x3335 = -701;
	int16_t x3336 = INT16_MAX;

    t156 = ((x3333<<(x3334&x3335))%x3336);

    if (t156 != 15LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x3365 = 159U;
	int8_t x3366 = INT8_MIN;
	uint8_t x3367 = 6U;
	uint64_t x3368 = 106726905843067LLU;
	uint64_t t157 = 807743LLU;

    t157 = ((x3365<<(x3366&x3367))%x3368);

    if (t157 != 159LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x3389 = UINT64_MAX;
	uint8_t x3390 = UINT8_MAX;
	int16_t x3391 = 0;
	static volatile int64_t x3392 = INT64_MIN;
	uint64_t t158 = 112LLU;

    t158 = ((x3389<<(x3390&x3391))%x3392);

    if (t158 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x3401 = 1;
	static uint16_t x3403 = 10U;
	int64_t x3404 = INT64_MIN;

    t159 = ((x3401<<(x3402&x3403))%x3404);

    if (t159 != 1024LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x3417 = 3891;
	int8_t x3418 = INT8_MIN;
	int8_t x3419 = INT8_MAX;
	int8_t x3420 = INT8_MIN;
	int32_t t160 = -11;

    t160 = ((x3417<<(x3418&x3419))%x3420);

    if (t160 != 51) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x3421 = 236;
	static volatile int8_t x3422 = INT8_MAX;
	volatile int8_t x3423 = 2;
	int16_t x3424 = INT16_MIN;

    t161 = ((x3421<<(x3422&x3423))%x3424);

    if (t161 != 944) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x3441 = UINT16_MAX;
	static int64_t x3442 = INT64_MIN;
	uint16_t x3443 = 4U;
	volatile int32_t x3444 = INT32_MAX;
	int32_t t162 = -27448774;

    t162 = ((x3441<<(x3442&x3443))%x3444);

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x3449 = 78U;
	int32_t x3450 = 19;
	uint16_t x3451 = UINT16_MAX;
	volatile uint16_t x3452 = UINT16_MAX;
	static int32_t t163 = -42366;

    t163 = ((x3449<<(x3450&x3451))%x3452);

    if (t163 != 624) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x3477 = 1677U;
	uint32_t x3478 = 4U;
	int64_t x3479 = -1LL;
	int64_t x3480 = INT64_MIN;
	volatile int64_t t164 = -208213001084627707LL;

    t164 = ((x3477<<(x3478&x3479))%x3480);

    if (t164 != 26832LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x3529 = INT8_MAX;
	uint8_t x3530 = 3U;
	volatile int32_t x3532 = -897816;

    t165 = ((x3529<<(x3530&x3531))%x3532);

    if (t165 != 1016) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x3533 = UINT64_MAX;
	int64_t x3534 = 1LL;
	volatile int64_t x3535 = -725860898LL;
	uint64_t t166 = 159542423983179439LLU;

    t166 = ((x3533<<(x3534&x3535))%x3536);

    if (t166 != 1535LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x3549 = 3917;
	uint16_t x3550 = 174U;
	int64_t x3552 = -3767514943113069LL;
	int64_t t167 = 2LL;

    t167 = ((x3549<<(x3550&x3551))%x3552);

    if (t167 != 3917LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x3582 = 0;
	volatile int8_t x3583 = INT8_MIN;
	static volatile int16_t x3584 = INT16_MAX;
	volatile int64_t t168 = -151450346221606897LL;

    t168 = ((x3581<<(x3582&x3583))%x3584);

    if (t168 != 13104LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x3601 = 71U;
	uint16_t x3602 = 15U;
	volatile int8_t x3603 = -1;
	volatile uint16_t x3604 = 5U;
	static volatile int32_t t169 = 0;

    t169 = ((x3601<<(x3602&x3603))%x3604);

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x3629 = UINT64_MAX;
	int32_t x3631 = INT32_MIN;
	uint32_t x3632 = UINT32_MAX;

    t170 = ((x3629<<(x3630&x3631))%x3632);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x3703 = INT32_MIN;
	uint8_t x3704 = 4U;
	static int32_t t171 = 4522;

    t171 = ((x3701<<(x3702&x3703))%x3704);

    if (t171 != 3) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x3721 = INT64_MAX;
	int8_t x3722 = -12;
	volatile int32_t x3723 = 0;
	volatile uint16_t x3724 = 2713U;
	volatile int64_t t172 = 7LL;

    t172 = ((x3721<<(x3722&x3723))%x3724);

    if (t172 != 26LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x3733 = UINT16_MAX;
	static int64_t x3734 = 190056LL;
	int8_t x3735 = 0;
	int8_t x3736 = INT8_MAX;

    t173 = ((x3733<<(x3734&x3735))%x3736);

    if (t173 != 3) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x3741 = INT8_MAX;
	static volatile int32_t x3742 = INT32_MAX;
	volatile uint64_t t174 = 106584553614LLU;

    t174 = ((x3741<<(x3742&x3743))%x3744);

    if (t174 != 8LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x3770 = 15LLU;
	static volatile int64_t x3771 = INT64_MIN;
	int64_t x3772 = INT64_MIN;
	volatile int64_t t175 = -31368LL;

    t175 = ((x3769<<(x3770&x3771))%x3772);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x3781 = UINT64_MAX;
	static int64_t x3782 = -106705753LL;
	static uint16_t x3783 = 61U;
	int8_t x3784 = INT8_MAX;

    t176 = ((x3781<<(x3782&x3783))%x3784);

    if (t176 != 125LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x3862 = 2;
	static uint64_t x3864 = 31599509980LLU;
	uint64_t t177 = 1221090342474LLU;

    t177 = ((x3861<<(x3862&x3863))%x3864);

    if (t177 != 4294967292LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x3874 = INT16_MAX;
	volatile int64_t t178 = 0LL;

    t178 = ((x3873<<(x3874&x3875))%x3876);

    if (t178 != 230967092LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x3893 = UINT32_MAX;
	int8_t x3894 = 5;
	uint64_t x3895 = UINT64_MAX;
	uint32_t x3896 = 8U;
	volatile uint32_t t179 = 544541433U;

    t179 = ((x3893<<(x3894&x3895))%x3896);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x3897 = 9672U;
	static uint8_t x3898 = UINT8_MAX;
	int64_t x3899 = INT64_MIN;
	static volatile int8_t x3900 = INT8_MIN;
	int32_t t180 = 16453;

    t180 = ((x3897<<(x3898&x3899))%x3900);

    if (t180 != 72) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x3905 = 21879432441LLU;
	uint64_t x3906 = 2020115351156955604LLU;
	int16_t x3907 = 5;
	uint16_t x3908 = 478U;
	uint64_t t181 = 7692LLU;

    t181 = ((x3905<<(x3906&x3907))%x3908);

    if (t181 != 214LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x3917 = 811878227886381192LL;
	static uint64_t x3918 = 213925418623190735LLU;
	int8_t x3919 = 1;
	volatile int64_t t182 = 137LL;

    t182 = ((x3917<<(x3918&x3919))%x3920);

    if (t182 != 2124LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x3933 = 1U;
	volatile uint8_t x3934 = 5U;
	volatile int64_t x3935 = INT64_MIN;
	volatile int8_t x3936 = -54;
	int32_t t183 = -17097;

    t183 = ((x3933<<(x3934&x3935))%x3936);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x3937 = UINT64_MAX;
	int64_t x3939 = -2228188780128977LL;
	int64_t x3940 = 1495914LL;
	uint64_t t184 = 277085213639425317LLU;

    t184 = ((x3937<<(x3938&x3939))%x3940);

    if (t184 != 1331163LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x3946 = INT32_MAX;
	static int32_t x3947 = INT32_MIN;
	int64_t x3948 = -2344350627LL;

    t185 = ((x3945<<(x3946&x3947))%x3948);

    if (t185 != 3LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x3965 = 68998;
	int64_t x3966 = -1LL;
	int8_t x3967 = 3;

    t186 = ((x3965<<(x3966&x3967))%x3968);

    if (t186 != 6) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x3969 = 13344436;
	int32_t x3972 = INT32_MAX;
	int32_t t187 = -15183263;

    t187 = ((x3969<<(x3970&x3971))%x3972);

    if (t187 != 13344436) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x4017 = 0;
	volatile int8_t x4018 = INT8_MIN;
	uint8_t x4019 = 13U;
	static int32_t x4020 = INT32_MAX;
	volatile int32_t t188 = -14;

    t188 = ((x4017<<(x4018&x4019))%x4020);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x4037 = 0;
	int32_t x4038 = INT32_MIN;
	volatile uint8_t x4039 = UINT8_MAX;
	int32_t x4040 = -1;
	volatile int32_t t189 = -3910006;

    t189 = ((x4037<<(x4038&x4039))%x4040);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x4097 = 49U;
	volatile int16_t x4099 = 7;
	int64_t x4100 = INT64_MAX;
	int64_t t190 = -754642043337601112LL;

    t190 = ((x4097<<(x4098&x4099))%x4100);

    if (t190 != 49LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x4101 = 1408U;
	int16_t x4102 = INT16_MAX;
	volatile uint8_t x4103 = 18U;
	static uint16_t x4104 = UINT16_MAX;

    t191 = ((x4101<<(x4102&x4103))%x4104);

    if (t191 != 5632) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint8_t x4117 = UINT8_MAX;
	int64_t x4119 = INT64_MIN;
	int8_t x4120 = INT8_MIN;
	static int32_t t192 = -2008;

    t192 = ((x4117<<(x4118&x4119))%x4120);

    if (t192 != 127) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x4153 = 471165;
	volatile int32_t x4154 = INT32_MIN;
	uint32_t x4155 = 77U;
	uint16_t x4156 = UINT16_MAX;
	volatile int32_t t193 = -9932066;

    t193 = ((x4153<<(x4154&x4155))%x4156);

    if (t193 != 12420) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint16_t x4225 = UINT16_MAX;
	uint8_t x4226 = 12U;
	uint32_t x4227 = 44408736U;
	int32_t x4228 = INT32_MIN;
	volatile int32_t t194 = 6;

    t194 = ((x4225<<(x4226&x4227))%x4228);

    if (t194 != 65535) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x4241 = UINT16_MAX;
	uint8_t x4242 = 7U;
	int8_t x4243 = INT8_MIN;
	uint32_t x4244 = 1U;
	uint32_t t195 = 187199755U;

    t195 = ((x4241<<(x4242&x4243))%x4244);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x4281 = UINT16_MAX;
	static uint32_t x4282 = 1U;
	volatile int32_t x4283 = 3438428;
	uint32_t x4284 = 58602538U;
	uint32_t t196 = 1253U;

    t196 = ((x4281<<(x4282&x4283))%x4284);

    if (t196 != 65535U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x4287 = -1;
	static int32_t x4288 = -1;
	int32_t t197 = -11641634;

    t197 = ((x4285<<(x4286&x4287))%x4288);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x4302 = INT8_MAX;
	int32_t x4303 = INT32_MIN;
	int16_t x4304 = INT16_MIN;
	int64_t t198 = -959094LL;

    t198 = ((x4301<<(x4302&x4303))%x4304);

    if (t198 != 32767LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x4314 = 2U;
	uint64_t x4316 = UINT64_MAX;
	volatile uint64_t t199 = 119LLU;

    t199 = ((x4313<<(x4314&x4315))%x4316);

    if (t199 != 197277LLU) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

