
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

int8_t x19 = INT8_MIN;
int64_t x103 = INT64_MIN;
static int64_t x167 = INT64_MIN;
uint32_t x184 = 7U;
int16_t x186 = 3;
uint64_t x198 = UINT64_MAX;
static int32_t t8 = -44051;
uint16_t x281 = 14U;
int8_t x355 = INT8_MIN;
uint8_t x362 = UINT8_MAX;
uint8_t x364 = 1U;
int32_t x424 = 0;
volatile int32_t t19 = 53;
int8_t x438 = -1;
static int32_t t21 = -1;
int8_t x567 = -1;
volatile int32_t t24 = 64360;
static int8_t x638 = INT8_MIN;
uint8_t x640 = 6U;
int32_t t25 = -16818;
uint32_t x648 = 4U;
int32_t t27 = -3253582;
int64_t x742 = INT64_MIN;
int32_t x789 = 28216220;
volatile int32_t x791 = INT32_MIN;
static volatile int32_t t29 = -510490;
static int8_t x805 = INT8_MAX;
static int8_t x818 = INT8_MAX;
uint16_t x819 = 581U;
volatile int32_t t32 = -26218670;
volatile int32_t t34 = -16322952;
volatile int32_t t35 = -12388078;
static int64_t x864 = 1LL;
uint16_t x870 = 255U;
static int16_t x945 = 82;
volatile int32_t t39 = -9442;
int32_t t40 = -58393392;
int8_t x971 = 3;
uint8_t x972 = 11U;
uint32_t x1004 = 1U;
uint8_t x1032 = 9U;
static uint8_t x1052 = 0U;
static int32_t t46 = -1349;
volatile uint16_t x1059 = 490U;
uint16_t x1084 = 2U;
int16_t x1158 = -1;
int32_t t49 = 1485865;
int64_t x1163 = -1LL;
int16_t x1182 = 15225;
volatile int32_t t51 = 8;
static int64_t x1211 = 2331557155LL;
int8_t x1289 = -1;
uint16_t x1353 = UINT16_MAX;
int32_t t56 = 52140060;
int8_t x1438 = 1;
uint16_t x1439 = 3U;
volatile int32_t t57 = 860957;
static uint64_t x1482 = 0LLU;
static uint8_t x1572 = 23U;
int8_t x1590 = -1;
int64_t x1782 = INT64_MAX;
uint64_t x1783 = 221895LLU;
int64_t x1801 = INT64_MIN;
volatile int32_t t67 = 932;
int8_t x1970 = -2;
static int16_t x1972 = 1;
static uint8_t x1976 = 18U;
volatile int32_t t70 = -4071775;
uint16_t x2214 = 7213U;
volatile int16_t x2235 = -2027;
volatile uint16_t x2248 = 14U;
static volatile int32_t t75 = -2;
volatile int32_t t76 = 80;
uint32_t x2260 = 0U;
uint16_t x2265 = 57U;
uint32_t x2273 = UINT32_MAX;
int16_t x2310 = -1;
static int64_t x2333 = INT64_MIN;
int64_t x2365 = INT64_MIN;
volatile uint64_t x2414 = UINT64_MAX;
int16_t x2431 = -1;
uint32_t x2465 = 2U;
uint16_t x2491 = UINT16_MAX;
uint16_t x2492 = 0U;
uint16_t x2502 = 23293U;
static int64_t x2513 = -1LL;
int64_t x2514 = INT64_MIN;
static volatile int32_t t96 = -3;
static volatile uint16_t x2736 = 2U;
int8_t x2759 = INT8_MAX;
volatile int32_t x2812 = 0;
int32_t t101 = -401;
uint32_t x2894 = UINT32_MAX;
volatile int64_t x2895 = INT64_MIN;
uint64_t x2927 = UINT64_MAX;
int16_t x2961 = 8593;
volatile uint16_t x2962 = UINT16_MAX;
volatile int32_t t106 = 3195;
int8_t x2969 = INT8_MIN;
static uint32_t x2973 = UINT32_MAX;
int64_t x2989 = -1LL;
volatile int16_t x3018 = INT16_MAX;
int8_t x3062 = -1;
volatile int32_t t111 = -1;
uint8_t x3069 = 8U;
int16_t x3071 = -84;
static int16_t x3072 = 6;
uint16_t x3184 = 23U;
static volatile int32_t t114 = -88249907;
int16_t x3256 = 0;
uint8_t x3273 = UINT8_MAX;
int64_t x3275 = -1LL;
int16_t x3332 = 4;
volatile int8_t x3417 = -1;
volatile uint16_t x3420 = 1U;
int32_t t121 = 5369;
volatile uint32_t x3532 = 9U;
int16_t x3575 = INT16_MIN;
static volatile int32_t t125 = -55292;
static uint8_t x3620 = 2U;
uint32_t x3625 = UINT32_MAX;
static int16_t x3627 = INT16_MIN;
static uint32_t x3651 = UINT32_MAX;
int8_t x3652 = 5;
int8_t x3755 = -11;
volatile int64_t x3756 = 0LL;
static volatile int64_t x3785 = INT64_MIN;
int32_t t134 = -18;
volatile uint32_t x3885 = UINT32_MAX;
static int64_t x3887 = -1282907LL;
volatile int32_t t135 = 20813;
uint16_t x4040 = 2U;
int32_t t138 = -13490952;
uint64_t x4065 = UINT64_MAX;
static uint16_t x4066 = 1U;
volatile int32_t x4067 = 7;
volatile int32_t t140 = 9;
int32_t x4162 = INT32_MIN;
int32_t x4245 = INT32_MAX;
static uint16_t x4248 = 4U;
volatile int32_t t148 = 1;
static int64_t x4393 = INT64_MIN;
int8_t x4417 = 9;
int16_t x4418 = -1;
int32_t x4455 = 119206;
int32_t x4456 = 3;
int32_t t151 = 3386699;
int32_t x4754 = INT32_MAX;
volatile int16_t x4817 = -15;
static int8_t x4819 = INT8_MIN;
static int16_t x4827 = -1;
static uint8_t x4828 = 0U;
volatile int32_t t158 = -887909872;
uint32_t x4854 = 125U;
int32_t t159 = 443734881;
volatile int16_t x4870 = -433;
static volatile int32_t t160 = -2028;
static volatile int8_t x4915 = INT8_MAX;
volatile int32_t t162 = 219237;
uint64_t x4958 = UINT64_MAX;
volatile uint8_t x4977 = 3U;
static volatile int8_t x4978 = INT8_MIN;
int32_t t166 = 4602990;
static volatile int64_t x5106 = INT64_MIN;
uint8_t x5107 = 1U;
int8_t x5132 = 23;
volatile int32_t t168 = 21795;
uint8_t x5220 = 1U;
uint16_t x5284 = 29U;
volatile uint8_t x5309 = 36U;
volatile int32_t t177 = 23;
int32_t t178 = -18290975;
static volatile int8_t x5387 = -1;
int8_t x5388 = 1;
int64_t x5478 = INT64_MIN;
uint8_t x5480 = 4U;
int64_t x5568 = 12LL;
int16_t x5571 = INT16_MIN;
int32_t t188 = -8424;
uint64_t x5673 = UINT64_MAX;
int32_t x5676 = 10;
uint8_t x5874 = UINT8_MAX;
static volatile int64_t x5889 = INT64_MIN;
static uint32_t x5908 = 7U;
uint64_t x5971 = 4679LLU;


void f0(void) {
    	int32_t x5 = -1;
	uint32_t x6 = 119663U;
	uint8_t x7 = 3U;
	volatile uint8_t x8 = 7U;
	volatile int32_t t0 = -53147;

    t0 = ((x5>(x6%x7))<<x8);

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x17 = 7U;
	int16_t x18 = -183;
	static int64_t x20 = 0LL;
	volatile int32_t t1 = 72;

    t1 = ((x17>(x18%x19))<<x20);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x101 = -622;
	volatile int16_t x102 = INT16_MIN;
	int16_t x104 = 28;
	volatile int32_t t2 = 1852473;

    t2 = ((x101>(x102%x103))<<x104);

    if (t2 != 268435456) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x137 = INT8_MIN;
	static int32_t x138 = -603313666;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 2U;
	volatile int32_t t3 = 11889;

    t3 = ((x137>(x138%x139))<<x140);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x165 = INT32_MIN;
	int8_t x166 = 0;
	static uint8_t x168 = 0U;
	volatile int32_t t4 = -504268;

    t4 = ((x165>(x166%x167))<<x168);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x181 = 30LL;
	int32_t x182 = -7114;
	int32_t x183 = INT32_MAX;
	static volatile int32_t t5 = 86340;

    t5 = ((x181>(x182%x183))<<x184);

    if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x185 = INT32_MAX;
	uint16_t x187 = 468U;
	uint16_t x188 = 15U;
	int32_t t6 = 75;

    t6 = ((x185>(x186%x187))<<x188);

    if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x189 = 1990LL;
	int16_t x190 = INT16_MAX;
	int32_t x191 = INT32_MAX;
	int16_t x192 = 27;
	volatile int32_t t7 = 569535535;

    t7 = ((x189>(x190%x191))<<x192);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x197 = UINT16_MAX;
	static int32_t x199 = -1;
	int64_t x200 = 0LL;

    t8 = ((x197>(x198%x199))<<x200);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x205 = -1;
	int64_t x206 = INT64_MIN;
	uint16_t x207 = 237U;
	static uint32_t x208 = 19U;
	int32_t t9 = -6203;

    t9 = ((x205>(x206%x207))<<x208);

    if (t9 != 524288) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x229 = 602U;
	int16_t x230 = -1;
	static int64_t x231 = INT64_MAX;
	static int32_t x232 = 1;
	static int32_t t10 = 2180798;

    t10 = ((x229>(x230%x231))<<x232);

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x282 = 15U;
	int16_t x283 = INT16_MIN;
	volatile uint32_t x284 = 3U;
	int32_t t11 = -12942;

    t11 = ((x281>(x282%x283))<<x284);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x285 = INT8_MIN;
	volatile int32_t x286 = 17083452;
	uint16_t x287 = UINT16_MAX;
	int8_t x288 = 1;
	static volatile int32_t t12 = -11126;

    t12 = ((x285>(x286%x287))<<x288);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x341 = 74;
	int16_t x342 = 1686;
	int8_t x343 = INT8_MIN;
	uint8_t x344 = 14U;
	volatile int32_t t13 = 0;

    t13 = ((x341>(x342%x343))<<x344);

    if (t13 != 16384) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x353 = 16391592502LLU;
	int16_t x354 = 7987;
	uint16_t x356 = 1U;
	int32_t t14 = -58727;

    t14 = ((x353>(x354%x355))<<x356);

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x361 = -15;
	uint64_t x363 = 28LLU;
	volatile int32_t t15 = -576;

    t15 = ((x361>(x362%x363))<<x364);

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x389 = 519348LLU;
	int8_t x390 = INT8_MIN;
	volatile int16_t x391 = INT16_MIN;
	uint16_t x392 = 29U;
	int32_t t16 = -1;

    t16 = ((x389>(x390%x391))<<x392);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x397 = 48U;
	uint8_t x398 = 2U;
	uint64_t x399 = UINT64_MAX;
	uint8_t x400 = 28U;
	static volatile int32_t t17 = 1;

    t17 = ((x397>(x398%x399))<<x400);

    if (t17 != 268435456) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x421 = INT32_MAX;
	uint8_t x422 = 47U;
	uint64_t x423 = 83155160451767LLU;
	volatile int32_t t18 = 102;

    t18 = ((x421>(x422%x423))<<x424);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x433 = 3U;
	int32_t x434 = INT32_MIN;
	static int64_t x435 = INT64_MIN;
	uint8_t x436 = 5U;

    t19 = ((x433>(x434%x435))<<x436);

    if (t19 != 32) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x437 = -27;
	int16_t x439 = INT16_MAX;
	static uint16_t x440 = 1U;
	volatile int32_t t20 = 1553376;

    t20 = ((x437>(x438%x439))<<x440);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x465 = 5601720U;
	static volatile uint32_t x466 = UINT32_MAX;
	volatile int64_t x467 = -1LL;
	volatile int16_t x468 = 1;

    t21 = ((x465>(x466%x467))<<x468);

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x501 = 1U;
	uint64_t x502 = 55LLU;
	uint8_t x503 = UINT8_MAX;
	volatile uint16_t x504 = 2U;
	int32_t t22 = -3332096;

    t22 = ((x501>(x502%x503))<<x504);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x565 = INT64_MAX;
	volatile int32_t x566 = INT32_MAX;
	volatile uint8_t x568 = 7U;
	int32_t t23 = -126321;

    t23 = ((x565>(x566%x567))<<x568);

    if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x593 = INT32_MIN;
	uint16_t x594 = 23U;
	int16_t x595 = -1;
	uint8_t x596 = 31U;

    t24 = ((x593>(x594%x595))<<x596);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x637 = 7U;
	int32_t x639 = INT32_MIN;

    t25 = ((x637>(x638%x639))<<x640);

    if (t25 != 64) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x645 = -1999215;
	int64_t x646 = INT64_MIN;
	uint16_t x647 = UINT16_MAX;
	static volatile int32_t t26 = -15850;

    t26 = ((x645>(x646%x647))<<x648);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x713 = INT64_MAX;
	volatile uint32_t x714 = UINT32_MAX;
	int16_t x715 = -1;
	int32_t x716 = 3;

    t27 = ((x713>(x714%x715))<<x716);

    if (t27 != 8) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x741 = 101U;
	static int64_t x743 = -2480LL;
	int16_t x744 = 6;
	volatile int32_t t28 = 32981370;

    t28 = ((x741>(x742%x743))<<x744);

    if (t28 != 64) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x790 = INT16_MIN;
	uint16_t x792 = 7U;

    t29 = ((x789>(x790%x791))<<x792);

    if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x793 = INT16_MAX;
	volatile uint8_t x794 = UINT8_MAX;
	static int64_t x795 = INT64_MIN;
	int8_t x796 = 14;
	volatile int32_t t30 = -192550244;

    t30 = ((x793>(x794%x795))<<x796);

    if (t30 != 16384) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x806 = INT16_MIN;
	int8_t x807 = -6;
	uint16_t x808 = 6U;
	int32_t t31 = -7;

    t31 = ((x805>(x806%x807))<<x808);

    if (t31 != 64) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x817 = 267095739;
	volatile uint16_t x820 = 0U;

    t32 = ((x817>(x818%x819))<<x820);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x821 = -1;
	int16_t x822 = INT16_MIN;
	int16_t x823 = INT16_MAX;
	uint8_t x824 = 5U;
	int32_t t33 = -1534;

    t33 = ((x821>(x822%x823))<<x824);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x829 = INT64_MIN;
	int32_t x830 = INT32_MIN;
	uint64_t x831 = 31822564221LLU;
	int16_t x832 = 19;

    t34 = ((x829>(x830%x831))<<x832);

    if (t34 != 524288) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x845 = INT32_MAX;
	int64_t x846 = -1LL;
	int16_t x847 = INT16_MAX;
	uint16_t x848 = 9U;

    t35 = ((x845>(x846%x847))<<x848);

    if (t35 != 512) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x861 = UINT32_MAX;
	static volatile uint16_t x862 = 390U;
	uint64_t x863 = 211846905638915LLU;
	int32_t t36 = 8729676;

    t36 = ((x861>(x862%x863))<<x864);

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x869 = -1LL;
	uint64_t x871 = UINT64_MAX;
	uint16_t x872 = 0U;
	volatile int32_t t37 = 21776953;

    t37 = ((x869>(x870%x871))<<x872);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x933 = INT32_MAX;
	int16_t x934 = -12820;
	int16_t x935 = -10;
	volatile int8_t x936 = 5;
	static int32_t t38 = 100882;

    t38 = ((x933>(x934%x935))<<x936);

    if (t38 != 32) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x946 = 0;
	uint64_t x947 = UINT64_MAX;
	volatile int16_t x948 = 0;

    t39 = ((x945>(x946%x947))<<x948);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x953 = -1;
	int16_t x954 = INT16_MIN;
	static volatile int8_t x955 = INT8_MAX;
	uint8_t x956 = 15U;

    t40 = ((x953>(x954%x955))<<x956);

    if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x969 = INT32_MAX;
	int64_t x970 = INT64_MIN;
	volatile int32_t t41 = 0;

    t41 = ((x969>(x970%x971))<<x972);

    if (t41 != 2048) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x977 = -123;
	volatile int8_t x978 = 7;
	int8_t x979 = -1;
	uint16_t x980 = 14U;
	volatile int32_t t42 = -65883;

    t42 = ((x977>(x978%x979))<<x980);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1001 = INT32_MIN;
	int16_t x1002 = -1;
	int32_t x1003 = 228790;
	int32_t t43 = -51928288;

    t43 = ((x1001>(x1002%x1003))<<x1004);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x1005 = INT32_MIN;
	int32_t x1006 = -1;
	uint32_t x1007 = UINT32_MAX;
	int8_t x1008 = 0;
	volatile int32_t t44 = 0;

    t44 = ((x1005>(x1006%x1007))<<x1008);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1029 = INT32_MIN;
	uint16_t x1030 = UINT16_MAX;
	int64_t x1031 = -1744765957042566072LL;
	volatile int32_t t45 = 28;

    t45 = ((x1029>(x1030%x1031))<<x1032);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1049 = -8;
	volatile uint8_t x1050 = 37U;
	uint32_t x1051 = UINT32_MAX;

    t46 = ((x1049>(x1050%x1051))<<x1052);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x1057 = INT32_MAX;
	int16_t x1058 = INT16_MIN;
	static uint8_t x1060 = 3U;
	static int32_t t47 = 40252122;

    t47 = ((x1057>(x1058%x1059))<<x1060);

    if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x1081 = -1;
	uint8_t x1082 = 76U;
	volatile int64_t x1083 = INT64_MIN;
	volatile int32_t t48 = 3514;

    t48 = ((x1081>(x1082%x1083))<<x1084);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x1157 = UINT16_MAX;
	int64_t x1159 = INT64_MIN;
	static uint8_t x1160 = 5U;

    t49 = ((x1157>(x1158%x1159))<<x1160);

    if (t49 != 32) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x1161 = 25782854U;
	int32_t x1162 = INT32_MAX;
	uint16_t x1164 = 4U;
	static int32_t t50 = -1;

    t50 = ((x1161>(x1162%x1163))<<x1164);

    if (t50 != 16) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x1181 = 877350200LL;
	int32_t x1183 = INT32_MIN;
	uint16_t x1184 = 0U;

    t51 = ((x1181>(x1182%x1183))<<x1184);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x1209 = -1;
	int32_t x1210 = -1;
	int64_t x1212 = 1LL;
	volatile int32_t t52 = 8501600;

    t52 = ((x1209>(x1210%x1211))<<x1212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x1265 = -1LL;
	volatile uint64_t x1266 = 1605705LLU;
	volatile int32_t x1267 = 1;
	uint8_t x1268 = 12U;
	volatile int32_t t53 = 2314846;

    t53 = ((x1265>(x1266%x1267))<<x1268);

    if (t53 != 4096) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x1290 = -1;
	int8_t x1291 = INT8_MAX;
	volatile int8_t x1292 = 0;
	static volatile int32_t t54 = -2;

    t54 = ((x1289>(x1290%x1291))<<x1292);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x1341 = -3;
	int64_t x1342 = -1LL;
	int8_t x1343 = 22;
	volatile uint16_t x1344 = 1U;
	int32_t t55 = -49965;

    t55 = ((x1341>(x1342%x1343))<<x1344);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x1354 = -1;
	uint64_t x1355 = UINT64_MAX;
	int32_t x1356 = 2;

    t56 = ((x1353>(x1354%x1355))<<x1356);

    if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x1437 = -27;
	int16_t x1440 = 1;

    t57 = ((x1437>(x1438%x1439))<<x1440);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x1449 = 28;
	static volatile int64_t x1450 = -29159LL;
	int32_t x1451 = INT32_MIN;
	uint16_t x1452 = 0U;
	volatile int32_t t58 = 1309;

    t58 = ((x1449>(x1450%x1451))<<x1452);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x1469 = INT64_MAX;
	volatile int64_t x1470 = 6LL;
	volatile int8_t x1471 = -6;
	static uint8_t x1472 = 0U;
	int32_t t59 = -1759374;

    t59 = ((x1469>(x1470%x1471))<<x1472);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x1481 = -38;
	volatile int16_t x1483 = INT16_MIN;
	uint8_t x1484 = 1U;
	volatile int32_t t60 = 54769;

    t60 = ((x1481>(x1482%x1483))<<x1484);

    if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x1533 = -20;
	uint8_t x1534 = 19U;
	int8_t x1535 = 1;
	static uint32_t x1536 = 0U;
	int32_t t61 = 179893258;

    t61 = ((x1533>(x1534%x1535))<<x1536);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x1569 = 3195U;
	int32_t x1570 = -1;
	uint64_t x1571 = 3413206073125LLU;
	volatile int32_t t62 = 106885;

    t62 = ((x1569>(x1570%x1571))<<x1572);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x1589 = 114U;
	int64_t x1591 = -1176LL;
	uint8_t x1592 = 11U;
	int32_t t63 = 5;

    t63 = ((x1589>(x1590%x1591))<<x1592);

    if (t63 != 2048) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x1781 = 320094;
	int8_t x1784 = 6;
	volatile int32_t t64 = 111386746;

    t64 = ((x1781>(x1782%x1783))<<x1784);

    if (t64 != 64) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x1802 = INT32_MIN;
	static volatile uint64_t x1803 = 77661268584852635LLU;
	uint32_t x1804 = 2U;
	int32_t t65 = 589881;

    t65 = ((x1801>(x1802%x1803))<<x1804);

    if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x1849 = 1018596U;
	uint16_t x1850 = UINT16_MAX;
	int8_t x1851 = -1;
	int8_t x1852 = 2;
	volatile int32_t t66 = 108367;

    t66 = ((x1849>(x1850%x1851))<<x1852);

    if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x1957 = INT8_MIN;
	int32_t x1958 = 107;
	uint32_t x1959 = UINT32_MAX;
	volatile int8_t x1960 = 21;

    t67 = ((x1957>(x1958%x1959))<<x1960);

    if (t67 != 2097152) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x1969 = 10107113638LLU;
	volatile int32_t x1971 = INT32_MIN;
	int32_t t68 = 3681;

    t68 = ((x1969>(x1970%x1971))<<x1972);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x1973 = UINT16_MAX;
	volatile uint8_t x1974 = UINT8_MAX;
	int8_t x1975 = INT8_MAX;
	int32_t t69 = 1;

    t69 = ((x1973>(x1974%x1975))<<x1976);

    if (t69 != 262144) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2013 = INT8_MAX;
	static volatile int16_t x2014 = INT16_MIN;
	volatile uint32_t x2015 = 1907945078U;
	int16_t x2016 = 14;

    t70 = ((x2013>(x2014%x2015))<<x2016);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x2157 = INT16_MIN;
	volatile uint8_t x2158 = UINT8_MAX;
	int64_t x2159 = -1LL;
	uint16_t x2160 = 1U;
	volatile int32_t t71 = -3684452;

    t71 = ((x2157>(x2158%x2159))<<x2160);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x2213 = 20;
	volatile int16_t x2215 = -1;
	int8_t x2216 = 8;
	int32_t t72 = 642067;

    t72 = ((x2213>(x2214%x2215))<<x2216);

    if (t72 != 256) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2217 = INT8_MIN;
	static int8_t x2218 = 2;
	uint8_t x2219 = UINT8_MAX;
	static uint32_t x2220 = 0U;
	volatile int32_t t73 = 27789;

    t73 = ((x2217>(x2218%x2219))<<x2220);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x2233 = UINT8_MAX;
	volatile uint64_t x2234 = 7172903932447731351LLU;
	int8_t x2236 = 0;
	static int32_t t74 = -4106;

    t74 = ((x2233>(x2234%x2235))<<x2236);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x2245 = INT32_MIN;
	static int8_t x2246 = -26;
	volatile uint32_t x2247 = 9091693U;

    t75 = ((x2245>(x2246%x2247))<<x2248);

    if (t75 != 16384) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x2249 = -107893645;
	static int8_t x2250 = INT8_MIN;
	int64_t x2251 = -1LL;
	static int16_t x2252 = 13;

    t76 = ((x2249>(x2250%x2251))<<x2252);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2257 = INT8_MIN;
	int32_t x2258 = -4;
	int8_t x2259 = INT8_MIN;
	volatile int32_t t77 = -1270;

    t77 = ((x2257>(x2258%x2259))<<x2260);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x2266 = INT32_MIN;
	uint32_t x2267 = UINT32_MAX;
	uint8_t x2268 = 5U;
	int32_t t78 = -124973333;

    t78 = ((x2265>(x2266%x2267))<<x2268);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x2274 = 29498U;
	uint32_t x2275 = UINT32_MAX;
	uint8_t x2276 = 2U;
	volatile int32_t t79 = 15;

    t79 = ((x2273>(x2274%x2275))<<x2276);

    if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x2297 = INT64_MIN;
	volatile uint8_t x2298 = 69U;
	static int32_t x2299 = INT32_MIN;
	uint32_t x2300 = 7U;
	int32_t t80 = 19224684;

    t80 = ((x2297>(x2298%x2299))<<x2300);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint32_t x2309 = UINT32_MAX;
	int64_t x2311 = INT64_MIN;
	uint16_t x2312 = 3U;
	volatile int32_t t81 = 219636654;

    t81 = ((x2309>(x2310%x2311))<<x2312);

    if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x2334 = 2202200LL;
	uint16_t x2335 = 194U;
	uint8_t x2336 = 0U;
	volatile int32_t t82 = -121;

    t82 = ((x2333>(x2334%x2335))<<x2336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x2337 = 171U;
	uint32_t x2338 = 5836U;
	uint64_t x2339 = UINT64_MAX;
	static uint32_t x2340 = 1U;
	static int32_t t83 = -509;

    t83 = ((x2337>(x2338%x2339))<<x2340);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x2366 = 62;
	volatile uint8_t x2367 = UINT8_MAX;
	static int8_t x2368 = 1;
	int32_t t84 = -31;

    t84 = ((x2365>(x2366%x2367))<<x2368);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x2413 = -11859120;
	uint32_t x2415 = 1650666U;
	volatile uint8_t x2416 = 25U;
	int32_t t85 = -1578;

    t85 = ((x2413>(x2414%x2415))<<x2416);

    if (t85 != 33554432) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x2421 = 2602U;
	volatile uint16_t x2422 = 75U;
	uint8_t x2423 = UINT8_MAX;
	int16_t x2424 = 7;
	static int32_t t86 = -1;

    t86 = ((x2421>(x2422%x2423))<<x2424);

    if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x2429 = INT64_MIN;
	static volatile int32_t x2430 = INT32_MIN;
	volatile uint8_t x2432 = 19U;
	int32_t t87 = -2303347;

    t87 = ((x2429>(x2430%x2431))<<x2432);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x2433 = 3U;
	int32_t x2434 = -1;
	int32_t x2435 = -196689;
	uint8_t x2436 = 0U;
	volatile int32_t t88 = -55704;

    t88 = ((x2433>(x2434%x2435))<<x2436);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2466 = INT32_MIN;
	int8_t x2467 = INT8_MIN;
	static int16_t x2468 = 11;
	volatile int32_t t89 = -559335;

    t89 = ((x2465>(x2466%x2467))<<x2468);

    if (t89 != 2048) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x2489 = INT32_MAX;
	static int64_t x2490 = INT64_MIN;
	int32_t t90 = -2062532;

    t90 = ((x2489>(x2490%x2491))<<x2492);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x2501 = 52547525;
	int64_t x2503 = INT64_MAX;
	volatile uint8_t x2504 = 3U;
	volatile int32_t t91 = -1772;

    t91 = ((x2501>(x2502%x2503))<<x2504);

    if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x2509 = 111U;
	int16_t x2510 = INT16_MIN;
	uint64_t x2511 = UINT64_MAX;
	int8_t x2512 = 0;
	int32_t t92 = -1;

    t92 = ((x2509>(x2510%x2511))<<x2512);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x2515 = INT16_MIN;
	volatile uint16_t x2516 = 14U;
	static int32_t t93 = 244;

    t93 = ((x2513>(x2514%x2515))<<x2516);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x2565 = INT64_MAX;
	uint16_t x2566 = 0U;
	int64_t x2567 = INT64_MIN;
	uint16_t x2568 = 7U;
	volatile int32_t t94 = 13933;

    t94 = ((x2565>(x2566%x2567))<<x2568);

    if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x2605 = -1;
	static uint64_t x2606 = 86LLU;
	uint16_t x2607 = 2U;
	uint16_t x2608 = 0U;
	int32_t t95 = 8714;

    t95 = ((x2605>(x2606%x2607))<<x2608);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x2693 = 7305LL;
	int16_t x2694 = -8;
	static uint64_t x2695 = 42849676317398202LLU;
	uint16_t x2696 = 3U;

    t96 = ((x2693>(x2694%x2695))<<x2696);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x2733 = 4114U;
	uint8_t x2734 = 13U;
	int64_t x2735 = -1LL;
	volatile int32_t t97 = 20958;

    t97 = ((x2733>(x2734%x2735))<<x2736);

    if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x2737 = UINT32_MAX;
	volatile int64_t x2738 = INT64_MIN;
	static volatile int32_t x2739 = 1;
	static int16_t x2740 = 1;
	volatile int32_t t98 = -18074088;

    t98 = ((x2737>(x2738%x2739))<<x2740);

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x2757 = 2;
	static int16_t x2758 = INT16_MAX;
	volatile uint8_t x2760 = 5U;
	volatile int32_t t99 = -12500;

    t99 = ((x2757>(x2758%x2759))<<x2760);

    if (t99 != 32) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x2765 = UINT8_MAX;
	uint8_t x2766 = 12U;
	int8_t x2767 = -1;
	uint16_t x2768 = 14U;
	int32_t t100 = 27682;

    t100 = ((x2765>(x2766%x2767))<<x2768);

    if (t100 != 16384) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x2809 = 0U;
	int8_t x2810 = 52;
	static int32_t x2811 = INT32_MIN;

    t101 = ((x2809>(x2810%x2811))<<x2812);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x2817 = INT64_MIN;
	int8_t x2818 = INT8_MIN;
	int16_t x2819 = INT16_MIN;
	static volatile int8_t x2820 = 0;
	static int32_t t102 = -365828524;

    t102 = ((x2817>(x2818%x2819))<<x2820);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x2889 = 3996885641LLU;
	int16_t x2890 = INT16_MIN;
	uint16_t x2891 = UINT16_MAX;
	uint8_t x2892 = 1U;
	int32_t t103 = -26;

    t103 = ((x2889>(x2890%x2891))<<x2892);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x2893 = INT8_MIN;
	int8_t x2896 = 11;
	static volatile int32_t t104 = -670231749;

    t104 = ((x2893>(x2894%x2895))<<x2896);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x2925 = 896594933;
	static volatile int16_t x2926 = -10;
	uint8_t x2928 = 0U;
	int32_t t105 = 6412;

    t105 = ((x2925>(x2926%x2927))<<x2928);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x2963 = INT16_MAX;
	int8_t x2964 = 28;

    t106 = ((x2961>(x2962%x2963))<<x2964);

    if (t106 != 268435456) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x2970 = 1U;
	int16_t x2971 = -1;
	int32_t x2972 = 17;
	volatile int32_t t107 = -8146871;

    t107 = ((x2969>(x2970%x2971))<<x2972);

    if (t107 != 131072) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x2974 = UINT32_MAX;
	int16_t x2975 = INT16_MAX;
	uint8_t x2976 = 3U;
	volatile int32_t t108 = -31466;

    t108 = ((x2973>(x2974%x2975))<<x2976);

    if (t108 != 8) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x2990 = -1LL;
	int16_t x2991 = INT16_MIN;
	volatile uint16_t x2992 = 0U;
	volatile int32_t t109 = 1259;

    t109 = ((x2989>(x2990%x2991))<<x2992);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x3017 = UINT16_MAX;
	uint16_t x3019 = UINT16_MAX;
	uint16_t x3020 = 0U;
	volatile int32_t t110 = -140;

    t110 = ((x3017>(x3018%x3019))<<x3020);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x3061 = -4346;
	uint32_t x3063 = UINT32_MAX;
	uint8_t x3064 = 17U;

    t111 = ((x3061>(x3062%x3063))<<x3064);

    if (t111 != 131072) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x3070 = 363U;
	volatile int32_t t112 = -86770;

    t112 = ((x3069>(x3070%x3071))<<x3072);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x3149 = 84U;
	volatile int8_t x3150 = INT8_MAX;
	int64_t x3151 = -1LL;
	static uint8_t x3152 = 0U;
	static int32_t t113 = 33;

    t113 = ((x3149>(x3150%x3151))<<x3152);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x3181 = INT64_MIN;
	static uint32_t x3182 = 4U;
	int32_t x3183 = INT32_MAX;

    t114 = ((x3181>(x3182%x3183))<<x3184);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x3201 = UINT32_MAX;
	static uint8_t x3202 = UINT8_MAX;
	static int8_t x3203 = INT8_MIN;
	int16_t x3204 = 2;
	volatile int32_t t115 = 1;

    t115 = ((x3201>(x3202%x3203))<<x3204);

    if (t115 != 4) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint8_t x3253 = UINT8_MAX;
	int64_t x3254 = -1LL;
	volatile uint16_t x3255 = 14U;
	volatile int32_t t116 = -24424003;

    t116 = ((x3253>(x3254%x3255))<<x3256);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3265 = -1;
	volatile int64_t x3266 = -5LL;
	int32_t x3267 = -1;
	static int32_t x3268 = 0;
	static int32_t t117 = -114;

    t117 = ((x3265>(x3266%x3267))<<x3268);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x3274 = 0U;
	uint8_t x3276 = 3U;
	volatile int32_t t118 = -1301;

    t118 = ((x3273>(x3274%x3275))<<x3276);

    if (t118 != 8) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x3297 = INT8_MIN;
	uint8_t x3298 = 54U;
	volatile int64_t x3299 = INT64_MIN;
	static int8_t x3300 = 3;
	int32_t t119 = 9;

    t119 = ((x3297>(x3298%x3299))<<x3300);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x3329 = 3435;
	int16_t x3330 = INT16_MIN;
	uint8_t x3331 = 71U;
	static int32_t t120 = -32;

    t120 = ((x3329>(x3330%x3331))<<x3332);

    if (t120 != 16) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x3418 = INT8_MIN;
	int64_t x3419 = INT64_MAX;

    t121 = ((x3417>(x3418%x3419))<<x3420);

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x3477 = UINT64_MAX;
	uint32_t x3478 = UINT32_MAX;
	static uint32_t x3479 = UINT32_MAX;
	int8_t x3480 = 0;
	int32_t t122 = -2001613;

    t122 = ((x3477>(x3478%x3479))<<x3480);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x3529 = UINT32_MAX;
	int8_t x3530 = INT8_MIN;
	uint64_t x3531 = UINT64_MAX;
	static volatile int32_t t123 = -255713618;

    t123 = ((x3529>(x3530%x3531))<<x3532);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x3533 = UINT32_MAX;
	int8_t x3534 = INT8_MIN;
	int32_t x3535 = -1;
	static int8_t x3536 = 24;
	int32_t t124 = 7;

    t124 = ((x3533>(x3534%x3535))<<x3536);

    if (t124 != 16777216) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x3573 = -1;
	int8_t x3574 = INT8_MIN;
	static int16_t x3576 = 1;

    t125 = ((x3573>(x3574%x3575))<<x3576);

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x3597 = UINT16_MAX;
	static volatile int16_t x3598 = 10;
	volatile int8_t x3599 = INT8_MAX;
	volatile int8_t x3600 = 1;
	int32_t t126 = 57;

    t126 = ((x3597>(x3598%x3599))<<x3600);

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x3617 = -7;
	int64_t x3618 = INT64_MIN;
	int16_t x3619 = -1;
	volatile int32_t t127 = 10;

    t127 = ((x3617>(x3618%x3619))<<x3620);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x3626 = -1;
	static volatile int8_t x3628 = 1;
	int32_t t128 = 2160303;

    t128 = ((x3625>(x3626%x3627))<<x3628);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x3629 = INT64_MIN;
	int32_t x3630 = 24;
	volatile int64_t x3631 = -1LL;
	uint8_t x3632 = 12U;
	volatile int32_t t129 = -14;

    t129 = ((x3629>(x3630%x3631))<<x3632);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x3649 = 34U;
	static int8_t x3650 = 9;
	static int32_t t130 = 17017383;

    t130 = ((x3649>(x3650%x3651))<<x3652);

    if (t130 != 32) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x3753 = 6713956;
	int64_t x3754 = INT64_MIN;
	static volatile int32_t t131 = -37369;

    t131 = ((x3753>(x3754%x3755))<<x3756);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x3786 = 1U;
	int8_t x3787 = INT8_MAX;
	uint8_t x3788 = 4U;
	int32_t t132 = -5678;

    t132 = ((x3785>(x3786%x3787))<<x3788);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x3793 = 5383LLU;
	int32_t x3794 = 217;
	uint32_t x3795 = 8148064U;
	volatile int8_t x3796 = 5;
	int32_t t133 = 261298497;

    t133 = ((x3793>(x3794%x3795))<<x3796);

    if (t133 != 32) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x3833 = UINT16_MAX;
	int8_t x3834 = -1;
	static int32_t x3835 = INT32_MIN;
	int16_t x3836 = 13;

    t134 = ((x3833>(x3834%x3835))<<x3836);

    if (t134 != 8192) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x3886 = UINT32_MAX;
	uint8_t x3888 = 5U;

    t135 = ((x3885>(x3886%x3887))<<x3888);

    if (t135 != 32) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x3945 = INT64_MIN;
	static volatile uint8_t x3946 = UINT8_MAX;
	uint64_t x3947 = UINT64_MAX;
	static uint8_t x3948 = 7U;
	static volatile int32_t t136 = 20128212;

    t136 = ((x3945>(x3946%x3947))<<x3948);

    if (t136 != 128) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x3985 = INT64_MIN;
	volatile uint16_t x3986 = 39U;
	uint64_t x3987 = 318871240LLU;
	static int32_t x3988 = 6;
	int32_t t137 = 15853407;

    t137 = ((x3985>(x3986%x3987))<<x3988);

    if (t137 != 64) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x4037 = 1;
	int8_t x4038 = INT8_MIN;
	static int8_t x4039 = INT8_MIN;

    t138 = ((x4037>(x4038%x4039))<<x4040);

    if (t138 != 4) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x4053 = 88U;
	uint64_t x4054 = 8680810462979836LLU;
	static int32_t x4055 = INT32_MIN;
	int8_t x4056 = 2;
	int32_t t139 = -13730070;

    t139 = ((x4053>(x4054%x4055))<<x4056);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x4068 = 0U;

    t140 = ((x4065>(x4066%x4067))<<x4068);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x4077 = -6654;
	int32_t x4078 = 11629349;
	static volatile int32_t x4079 = INT32_MAX;
	uint8_t x4080 = 1U;
	volatile int32_t t141 = -119960382;

    t141 = ((x4077>(x4078%x4079))<<x4080);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x4085 = INT8_MIN;
	uint32_t x4086 = 0U;
	int16_t x4087 = INT16_MIN;
	int16_t x4088 = 5;
	volatile int32_t t142 = -1;

    t142 = ((x4085>(x4086%x4087))<<x4088);

    if (t142 != 32) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x4161 = -26340LL;
	int16_t x4163 = INT16_MIN;
	int8_t x4164 = 26;
	volatile int32_t t143 = -8;

    t143 = ((x4161>(x4162%x4163))<<x4164);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x4217 = UINT64_MAX;
	int8_t x4218 = -10;
	int64_t x4219 = INT64_MAX;
	uint8_t x4220 = 6U;
	volatile int32_t t144 = 28;

    t144 = ((x4217>(x4218%x4219))<<x4220);

    if (t144 != 64) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x4246 = 0;
	int16_t x4247 = 1;
	static volatile int32_t t145 = -3697996;

    t145 = ((x4245>(x4246%x4247))<<x4248);

    if (t145 != 16) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x4253 = -2;
	int32_t x4254 = INT32_MIN;
	uint16_t x4255 = UINT16_MAX;
	int16_t x4256 = 1;
	static volatile int32_t t146 = 1;

    t146 = ((x4253>(x4254%x4255))<<x4256);

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x4269 = 0LL;
	int64_t x4270 = -30287331219LL;
	int16_t x4271 = 7;
	static int32_t x4272 = 0;
	int32_t t147 = -18;

    t147 = ((x4269>(x4270%x4271))<<x4272);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x4373 = 264222111077448LLU;
	int32_t x4374 = -776313622;
	static int16_t x4375 = INT16_MIN;
	int16_t x4376 = 2;

    t148 = ((x4373>(x4374%x4375))<<x4376);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x4394 = INT32_MIN;
	static int8_t x4395 = INT8_MIN;
	uint16_t x4396 = 1U;
	int32_t t149 = -965347;

    t149 = ((x4393>(x4394%x4395))<<x4396);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x4419 = INT16_MAX;
	uint16_t x4420 = 8U;
	volatile int32_t t150 = 0;

    t150 = ((x4417>(x4418%x4419))<<x4420);

    if (t150 != 256) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x4453 = UINT8_MAX;
	volatile int16_t x4454 = INT16_MIN;

    t151 = ((x4453>(x4454%x4455))<<x4456);

    if (t151 != 8) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x4513 = INT8_MIN;
	uint8_t x4514 = 0U;
	volatile int8_t x4515 = INT8_MAX;
	uint8_t x4516 = 0U;
	int32_t t152 = 9505091;

    t152 = ((x4513>(x4514%x4515))<<x4516);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x4529 = INT16_MIN;
	int64_t x4530 = INT64_MIN;
	static int16_t x4531 = 444;
	static uint8_t x4532 = 7U;
	volatile int32_t t153 = 22211630;

    t153 = ((x4529>(x4530%x4531))<<x4532);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x4753 = INT16_MIN;
	static uint16_t x4755 = 15U;
	static uint8_t x4756 = 6U;
	volatile int32_t t154 = 4268;

    t154 = ((x4753>(x4754%x4755))<<x4756);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x4777 = INT16_MIN;
	int16_t x4778 = INT16_MIN;
	static int64_t x4779 = 7291LL;
	int8_t x4780 = 0;
	int32_t t155 = -10;

    t155 = ((x4777>(x4778%x4779))<<x4780);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x4785 = 150890260389842LL;
	static volatile uint8_t x4786 = 5U;
	uint64_t x4787 = UINT64_MAX;
	int8_t x4788 = 29;
	volatile int32_t t156 = 107335;

    t156 = ((x4785>(x4786%x4787))<<x4788);

    if (t156 != 536870912) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x4818 = INT8_MIN;
	volatile int8_t x4820 = 3;
	int32_t t157 = -159;

    t157 = ((x4817>(x4818%x4819))<<x4820);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x4825 = UINT64_MAX;
	int32_t x4826 = -1;

    t158 = ((x4825>(x4826%x4827))<<x4828);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x4853 = 1;
	uint32_t x4855 = UINT32_MAX;
	static int8_t x4856 = 1;

    t159 = ((x4853>(x4854%x4855))<<x4856);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x4869 = 475;
	int32_t x4871 = -1;
	static volatile int32_t x4872 = 1;

    t160 = ((x4869>(x4870%x4871))<<x4872);

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x4893 = 0U;
	int16_t x4894 = INT16_MIN;
	int32_t x4895 = INT32_MIN;
	static int8_t x4896 = 1;
	static int32_t t161 = -73441945;

    t161 = ((x4893>(x4894%x4895))<<x4896);

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x4913 = 49;
	int32_t x4914 = -1;
	uint8_t x4916 = 0U;

    t162 = ((x4913>(x4914%x4915))<<x4916);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x4957 = -2;
	volatile int16_t x4959 = INT16_MIN;
	uint8_t x4960 = 13U;
	int32_t t163 = 224271475;

    t163 = ((x4957>(x4958%x4959))<<x4960);

    if (t163 != 8192) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x4979 = 14757423065589LLU;
	int16_t x4980 = 17;
	static volatile int32_t t164 = -214961;

    t164 = ((x4977>(x4978%x4979))<<x4980);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x5065 = -1;
	int64_t x5066 = INT64_MIN;
	int64_t x5067 = INT64_MIN;
	uint64_t x5068 = 8LLU;
	int32_t t165 = 114145;

    t165 = ((x5065>(x5066%x5067))<<x5068);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x5085 = -36574633336503LL;
	int32_t x5086 = -1;
	static int8_t x5087 = INT8_MAX;
	int64_t x5088 = 11LL;

    t166 = ((x5085>(x5086%x5087))<<x5088);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x5105 = INT64_MAX;
	static int16_t x5108 = 19;
	int32_t t167 = -319;

    t167 = ((x5105>(x5106%x5107))<<x5108);

    if (t167 != 524288) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x5129 = INT32_MIN;
	static uint32_t x5130 = UINT32_MAX;
	static int8_t x5131 = -5;

    t168 = ((x5129>(x5130%x5131))<<x5132);

    if (t168 != 8388608) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x5145 = INT32_MIN;
	int32_t x5146 = -1;
	int32_t x5147 = INT32_MAX;
	uint8_t x5148 = 6U;
	int32_t t169 = -441057;

    t169 = ((x5145>(x5146%x5147))<<x5148);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x5217 = INT64_MAX;
	volatile int8_t x5218 = INT8_MIN;
	int64_t x5219 = INT64_MIN;
	static int32_t t170 = 1142;

    t170 = ((x5217>(x5218%x5219))<<x5220);

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x5265 = -1LL;
	static int64_t x5266 = INT64_MAX;
	static int64_t x5267 = -17256819442701LL;
	uint8_t x5268 = 0U;
	volatile int32_t t171 = -49696854;

    t171 = ((x5265>(x5266%x5267))<<x5268);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x5277 = 186204521LL;
	uint32_t x5278 = 3500014U;
	volatile uint16_t x5279 = 13U;
	static uint8_t x5280 = 4U;
	int32_t t172 = -54056757;

    t172 = ((x5277>(x5278%x5279))<<x5280);

    if (t172 != 16) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x5281 = INT32_MIN;
	static int64_t x5282 = -499444LL;
	uint32_t x5283 = 851964745U;
	static volatile int32_t t173 = -1;

    t173 = ((x5281>(x5282%x5283))<<x5284);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x5285 = 5486LLU;
	int32_t x5286 = INT32_MIN;
	static volatile uint32_t x5287 = UINT32_MAX;
	int16_t x5288 = 15;
	int32_t t174 = -1025138;

    t174 = ((x5285>(x5286%x5287))<<x5288);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x5310 = INT8_MIN;
	volatile int8_t x5311 = INT8_MAX;
	uint16_t x5312 = 1U;
	int32_t t175 = -4;

    t175 = ((x5309>(x5310%x5311))<<x5312);

    if (t175 != 2) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x5349 = INT8_MIN;
	int8_t x5350 = -1;
	static volatile uint16_t x5351 = 25U;
	int8_t x5352 = 0;
	int32_t t176 = -1330537;

    t176 = ((x5349>(x5350%x5351))<<x5352);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x5353 = INT32_MIN;
	int64_t x5354 = 7278314515644LL;
	volatile int16_t x5355 = INT16_MIN;
	static int32_t x5356 = 10;

    t177 = ((x5353>(x5354%x5355))<<x5356);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x5361 = 96U;
	uint16_t x5362 = 129U;
	int64_t x5363 = INT64_MIN;
	volatile int8_t x5364 = 7;

    t178 = ((x5361>(x5362%x5363))<<x5364);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x5385 = 18813U;
	int16_t x5386 = INT16_MIN;
	volatile int32_t t179 = -5844196;

    t179 = ((x5385>(x5386%x5387))<<x5388);

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x5429 = INT32_MAX;
	static int32_t x5430 = INT32_MIN;
	int32_t x5431 = -1;
	static uint16_t x5432 = 1U;
	int32_t t180 = 1;

    t180 = ((x5429>(x5430%x5431))<<x5432);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x5445 = INT64_MAX;
	int16_t x5446 = INT16_MAX;
	uint64_t x5447 = UINT64_MAX;
	volatile uint32_t x5448 = 0U;
	static int32_t t181 = 5;

    t181 = ((x5445>(x5446%x5447))<<x5448);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x5457 = UINT64_MAX;
	int8_t x5458 = -19;
	static int8_t x5459 = -1;
	static uint8_t x5460 = 0U;
	int32_t t182 = -1;

    t182 = ((x5457>(x5458%x5459))<<x5460);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x5477 = UINT8_MAX;
	uint32_t x5479 = 4U;
	int32_t t183 = -228350;

    t183 = ((x5477>(x5478%x5479))<<x5480);

    if (t183 != 16) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x5525 = INT8_MIN;
	volatile int16_t x5526 = INT16_MIN;
	volatile uint64_t x5527 = 7260174803180LLU;
	int8_t x5528 = 0;
	static volatile int32_t t184 = -121236246;

    t184 = ((x5525>(x5526%x5527))<<x5528);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x5537 = INT8_MIN;
	int16_t x5538 = -1;
	static int32_t x5539 = -2626;
	uint16_t x5540 = 6U;
	static int32_t t185 = 2472;

    t185 = ((x5537>(x5538%x5539))<<x5540);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x5565 = -1;
	int16_t x5566 = INT16_MAX;
	static int16_t x5567 = -1;
	volatile int32_t t186 = 107687;

    t186 = ((x5565>(x5566%x5567))<<x5568);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x5569 = INT64_MIN;
	static uint64_t x5570 = UINT64_MAX;
	uint64_t x5572 = 9LLU;
	int32_t t187 = 78;

    t187 = ((x5569>(x5570%x5571))<<x5572);

    if (t187 != 512) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x5573 = 1U;
	uint8_t x5574 = UINT8_MAX;
	uint16_t x5575 = 15U;
	int8_t x5576 = 0;

    t188 = ((x5573>(x5574%x5575))<<x5576);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x5601 = 1LL;
	uint64_t x5602 = 4472036124637846LLU;
	volatile uint64_t x5603 = 1030309668922LLU;
	volatile int32_t x5604 = 0;
	volatile int32_t t189 = 67383060;

    t189 = ((x5601>(x5602%x5603))<<x5604);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x5613 = INT32_MIN;
	volatile int16_t x5614 = INT16_MIN;
	int16_t x5615 = -1;
	static volatile uint64_t x5616 = 4LLU;
	volatile int32_t t190 = -3;

    t190 = ((x5613>(x5614%x5615))<<x5616);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x5645 = 909112U;
	uint16_t x5646 = 248U;
	int16_t x5647 = INT16_MIN;
	int16_t x5648 = 1;
	volatile int32_t t191 = -1;

    t191 = ((x5645>(x5646%x5647))<<x5648);

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x5674 = 79261561364LLU;
	static volatile int32_t x5675 = INT32_MAX;
	static volatile int32_t t192 = 268527141;

    t192 = ((x5673>(x5674%x5675))<<x5676);

    if (t192 != 1024) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x5697 = 20643U;
	volatile uint8_t x5698 = 5U;
	static uint32_t x5699 = 216027U;
	uint32_t x5700 = 1U;
	volatile int32_t t193 = -92533;

    t193 = ((x5697>(x5698%x5699))<<x5700);

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x5757 = 13;
	uint8_t x5758 = 18U;
	static uint64_t x5759 = UINT64_MAX;
	int16_t x5760 = 3;
	static volatile int32_t t194 = 1;

    t194 = ((x5757>(x5758%x5759))<<x5760);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x5873 = INT64_MAX;
	int32_t x5875 = 9230;
	uint32_t x5876 = 2U;
	volatile int32_t t195 = -24675126;

    t195 = ((x5873>(x5874%x5875))<<x5876);

    if (t195 != 4) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x5890 = INT16_MIN;
	int64_t x5891 = INT64_MAX;
	uint8_t x5892 = 31U;
	static int32_t t196 = -5209;

    t196 = ((x5889>(x5890%x5891))<<x5892);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x5905 = UINT16_MAX;
	int64_t x5906 = INT64_MIN;
	uint8_t x5907 = 1U;
	int32_t t197 = -52004384;

    t197 = ((x5905>(x5906%x5907))<<x5908);

    if (t197 != 128) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x5969 = -5;
	static volatile int64_t x5970 = INT64_MAX;
	int16_t x5972 = 6;
	int32_t t198 = -485484136;

    t198 = ((x5969>(x5970%x5971))<<x5972);

    if (t198 != 64) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x5985 = INT64_MIN;
	uint32_t x5986 = 2527375U;
	int64_t x5987 = -63149863LL;
	uint8_t x5988 = 0U;
	volatile int32_t t199 = 945188;

    t199 = ((x5985>(x5986%x5987))<<x5988);

    if (t199 != 0) { NG(); } else { ; }
	
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

