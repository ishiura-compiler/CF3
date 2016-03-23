
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

static int32_t x32 = INT32_MIN;
volatile int8_t x41 = 1;
static uint32_t x85 = 1266698222U;
uint64_t x89 = 73368183871960LLU;
int32_t x101 = 16903;
int64_t x104 = -1LL;
int32_t t7 = -46726;
volatile int32_t t10 = -80864484;
int8_t x195 = INT8_MIN;
uint8_t x233 = 10U;
int8_t x242 = INT8_MAX;
volatile uint32_t t14 = 3449U;
volatile int64_t x311 = 6077LL;
uint8_t x321 = 0U;
volatile uint16_t x349 = UINT16_MAX;
uint32_t t18 = 25623U;
int32_t x414 = INT32_MAX;
uint8_t x416 = UINT8_MAX;
uint8_t x424 = UINT8_MAX;
int32_t x437 = 13;
static volatile int16_t x453 = 3;
uint64_t x503 = 1LLU;
static volatile uint32_t x506 = 3861994U;
int32_t x515 = INT32_MAX;
int64_t x516 = -1LL;
volatile int64_t x567 = -39714474443LL;
int32_t x568 = -1;
int32_t t28 = INT32_MAX;
uint32_t x690 = UINT32_MAX;
volatile uint32_t t29 = UINT32_MAX;
uint8_t x706 = 1U;
int16_t x707 = 1;
volatile int64_t x708 = INT64_MIN;
int16_t x728 = INT16_MIN;
int32_t x782 = 123;
int32_t t34 = 745;
int32_t x803 = INT32_MIN;
static int16_t x883 = 1;
volatile int32_t x884 = -2564;
int32_t x929 = INT32_MIN;
static uint8_t x931 = 59U;
int16_t x1005 = 3330;
uint32_t x1007 = 9969164U;
uint32_t x1127 = UINT32_MAX;
volatile int64_t t40 = -4285215547487020LL;
volatile int16_t x1179 = INT16_MAX;
int8_t x1180 = -1;
uint64_t x1190 = 266231315LLU;
int8_t x1244 = -7;
int16_t x1258 = 16326;
uint32_t t46 = UINT32_MAX;
uint32_t x1305 = 464400U;
static int64_t x1330 = INT64_MIN;
static int64_t x1332 = -1LL;
volatile int32_t x1431 = INT32_MIN;
volatile int16_t x1504 = INT16_MAX;
static int64_t x1515 = INT64_MIN;
static uint32_t t55 = 118733U;
volatile int8_t x1600 = INT8_MAX;
uint32_t x1605 = 956438U;
uint32_t x1607 = UINT32_MAX;
int8_t x1608 = -16;
int16_t x1637 = INT16_MAX;
int64_t x1669 = 349227006LL;
volatile uint64_t x1671 = UINT64_MAX;
volatile int16_t x1703 = 13;
static uint16_t x1770 = UINT16_MAX;
static uint64_t t64 = 8372446369419LLU;
int16_t x1817 = INT16_MAX;
volatile uint32_t t67 = 5593771U;
volatile uint32_t x1847 = 1552552969U;
uint32_t x1882 = UINT32_MAX;
int64_t x1894 = INT64_MAX;
volatile int32_t x1899 = -1052677;
uint64_t x1905 = UINT64_MAX;
uint64_t x1979 = 803637313630746081LLU;
int32_t t76 = -1282399;
static volatile uint8_t x2058 = 17U;
volatile uint16_t x2070 = 0U;
uint32_t x2071 = UINT32_MAX;
static int8_t x2123 = INT8_MAX;
volatile uint64_t x2138 = 4485589800198438722LLU;
int8_t x2139 = 5;
uint16_t x2150 = 1U;
uint32_t x2151 = UINT32_MAX;
uint16_t x2223 = 9U;
volatile int32_t x2248 = -1;
uint32_t t88 = UINT32_MAX;
uint32_t x2249 = 4600U;
uint64_t x2253 = 228598LLU;
static int16_t x2262 = 3;
volatile uint8_t x2323 = UINT8_MAX;
static uint8_t x2324 = 1U;
static int64_t x2335 = INT64_MAX;
uint64_t x2406 = 1460618LLU;
static int16_t x2446 = INT16_MIN;
uint64_t x2447 = UINT64_MAX;
static uint8_t x2539 = 26U;
int8_t x2540 = -1;
static uint16_t x2560 = 1U;
int32_t x2618 = -1;
static uint32_t x2635 = 45U;
uint64_t x2654 = 1969LLU;
static volatile int8_t x2690 = INT8_MAX;
int32_t x2728 = -1;
static uint32_t x2741 = UINT32_MAX;
volatile uint32_t t110 = 5699U;
static int16_t x2761 = INT16_MAX;
uint16_t x2762 = 6U;
int16_t x2837 = 0;
volatile int64_t x2838 = 53790053665LL;
int64_t t113 = 3480271LL;
volatile int8_t x2841 = -1;
uint64_t x2842 = 21242978592LLU;
int32_t x2853 = INT32_MIN;
int32_t x2855 = -2;
volatile int32_t x2856 = -1;
static uint64_t t116 = 8057559823901LLU;
static volatile uint8_t x2945 = UINT8_MAX;
int8_t x2947 = 41;
static volatile int32_t t118 = -255;
int64_t x2962 = INT64_MIN;
int8_t x3035 = 20;
volatile int32_t x3044 = INT32_MIN;
uint32_t x3062 = 872U;
uint8_t x3084 = 15U;
int32_t x3166 = INT32_MAX;
uint32_t x3198 = 32751891U;
int8_t x3200 = -1;
int64_t t130 = 301657983961626219LL;
int64_t x3206 = 4038LL;
volatile int16_t x3240 = INT16_MIN;
volatile uint16_t x3321 = 1260U;
static volatile int8_t x3448 = 3;
int16_t x3452 = -44;
volatile uint64_t t135 = 345LLU;
volatile int16_t x3469 = INT16_MIN;
int64_t x3521 = 6166117167LL;
uint8_t x3541 = 35U;
int32_t t140 = 23515433;
static volatile uint64_t x3589 = 59073191LLU;
static uint64_t x3590 = 390385LLU;
uint64_t t142 = 6009249LLU;
static uint8_t x3599 = 3U;
static int32_t x3703 = INT32_MIN;
uint64_t t145 = UINT64_MAX;
int16_t x3745 = INT16_MIN;
uint64_t x3746 = UINT64_MAX;
int8_t x3801 = INT8_MIN;
uint32_t x3802 = 1U;
uint64_t x3877 = 5061842245LLU;
uint32_t x3910 = UINT32_MAX;
int32_t x3911 = -50;
int32_t x3913 = 24393;
int32_t t154 = -903;
uint64_t t155 = 436LLU;
int8_t x4040 = -1;
int16_t x4042 = -7584;
uint64_t x4073 = 12031190556355705LLU;
uint32_t x4136 = UINT32_MAX;
uint64_t t162 = 3933763107149714LLU;
volatile int8_t x4167 = 4;
int32_t x4168 = 3;
volatile uint64_t t163 = 32045601452063770LLU;
uint32_t x4189 = 48133U;
int64_t x4192 = -1LL;
int32_t x4253 = 230123457;
uint8_t x4255 = UINT8_MAX;
int16_t x4256 = -1;
volatile uint32_t x4325 = 0U;
volatile uint32_t t169 = 2852U;
uint64_t x4333 = UINT64_MAX;
int32_t x4336 = -1;
static volatile uint64_t t170 = UINT64_MAX;
static int64_t x4359 = INT64_MIN;
volatile int16_t x4360 = INT16_MIN;
int8_t x4375 = INT8_MAX;
volatile uint64_t t173 = 21859630117842LLU;
static uint16_t x4419 = 10U;
int16_t x4421 = INT16_MAX;
int8_t x4423 = INT8_MIN;
int64_t x4450 = 78018583320889136LL;
volatile uint64_t x4467 = 40LLU;
static int8_t x4532 = INT8_MIN;
uint64_t t181 = 38545591118914376LLU;
static volatile uint32_t t182 = UINT32_MAX;
static volatile uint64_t t185 = 52167345LLU;
volatile int16_t x4837 = INT16_MAX;
uint32_t x4838 = 12084U;
static int64_t x4840 = INT64_MAX;
static volatile uint8_t x4865 = 0U;
static volatile int8_t x4919 = INT8_MIN;
uint8_t x4941 = UINT8_MAX;
uint8_t x4985 = 1U;
volatile uint64_t x4986 = UINT64_MAX;
int8_t x4988 = INT8_MIN;
uint16_t x4994 = UINT16_MAX;
int8_t x5040 = INT8_MIN;
volatile uint32_t x5061 = 6608760U;
uint64_t x5062 = 2404930738341LLU;
uint32_t x5066 = 29U;
int32_t x5067 = INT32_MIN;
uint8_t x5141 = 4U;
volatile uint32_t t198 = 100300U;
uint8_t x5181 = UINT8_MAX;


void f0(void) {
    	volatile uint16_t x13 = 48U;
	int16_t x14 = INT16_MAX;
	int16_t x15 = -1;
	static volatile int32_t x16 = -1;
	volatile int32_t t0 = 1015771371;

    t0 = ((x13|x14)<<(x15%x16));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x17 = 30U;
	int8_t x18 = INT8_MAX;
	uint16_t x19 = 1U;
	uint64_t x20 = 9437439749082539LLU;
	volatile int32_t t1 = 1;

    t1 = ((x17|x18)<<(x19%x20));

    if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x29 = 882U;
	static uint64_t x30 = UINT64_MAX;
	volatile int8_t x31 = 0;
	uint64_t t2 = UINT64_MAX;

    t2 = ((x29|x30)<<(x31%x32));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x42 = 1374U;
	static int8_t x43 = 0;
	int32_t x44 = INT32_MAX;
	uint32_t t3 = 14U;

    t3 = ((x41|x42)<<(x43%x44));

    if (t3 != 1375U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x86 = 622017674;
	static volatile int8_t x87 = INT8_MIN;
	int64_t x88 = -1LL;
	volatile uint32_t t4 = 65926893U;

    t4 = ((x85|x86)<<(x87%x88));

    if (t4 != 1871937518U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x90 = -453872118;
	static volatile int8_t x91 = INT8_MAX;
	int8_t x92 = -19;
	volatile uint64_t t5 = 215606167125LLU;

    t5 = ((x89|x90)<<(x91%x92));

    if (t5 != 18446743659244896256LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x97 = 532489329LLU;
	int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MAX;
	int8_t x100 = -1;
	uint64_t t6 = 58326265570LLU;

    t6 = ((x97|x98)<<(x99%x100));

    if (t6 != 18446744072094557297LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x102 = 102U;
	uint16_t x103 = 1256U;

    t7 = ((x101|x102)<<(x103%x104));

    if (t7 != 16999) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x105 = UINT8_MAX;
	int64_t x106 = 2444451980LL;
	static uint32_t x107 = 24U;
	uint16_t x108 = 21U;
	static int64_t t8 = -2394497983LL;

    t8 = ((x105|x106)<<(x107%x108));

    if (t8 != 19555616760LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x129 = 1994566LLU;
	uint16_t x130 = 9U;
	int64_t x131 = INT64_MIN;
	volatile int32_t x132 = INT32_MIN;
	volatile uint64_t t9 = 1482648330759108LLU;

    t9 = ((x129|x130)<<(x131%x132));

    if (t9 != 1994575LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x153 = 25264U;
	int32_t x154 = 125250952;
	uint8_t x155 = 4U;
	uint8_t x156 = UINT8_MAX;

    t10 = ((x153|x154)<<(x155%x156));

    if (t10 != 2004286336) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x173 = INT8_MAX;
	int64_t x174 = 1547519835495829LL;
	uint32_t x175 = 1U;
	volatile uint8_t x176 = UINT8_MAX;
	int64_t t11 = -15360LL;

    t11 = ((x173|x174)<<(x175%x176));

    if (t11 != 3095039670991870LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x193 = INT8_MAX;
	int8_t x194 = 0;
	int8_t x196 = INT8_MIN;
	volatile int32_t t12 = -12229778;

    t12 = ((x193|x194)<<(x195%x196));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x234 = INT32_MAX;
	static uint64_t x235 = UINT64_MAX;
	int8_t x236 = -1;
	static volatile int32_t t13 = INT32_MAX;

    t13 = ((x233|x234)<<(x235%x236));

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x241 = 15657626U;
	uint8_t x243 = UINT8_MAX;
	int8_t x244 = -1;

    t14 = ((x241|x242)<<(x243%x244));

    if (t14 != 15657727U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x309 = 19336U;
	static int64_t x310 = INT64_MAX;
	int64_t x312 = -1LL;
	static volatile int64_t t15 = INT64_MAX;

    t15 = ((x309|x310)<<(x311%x312));

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x322 = UINT16_MAX;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = -1;
	volatile int32_t t16 = -8173;

    t16 = ((x321|x322)<<(x323%x324));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x350 = UINT32_MAX;
	int16_t x351 = INT16_MAX;
	uint16_t x352 = 2U;
	uint32_t t17 = 956561573U;

    t17 = ((x349|x350)<<(x351%x352));

    if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x405 = UINT8_MAX;
	uint32_t x406 = 845293512U;
	volatile uint16_t x407 = 2U;
	static int64_t x408 = -493859662417348LL;

    t18 = ((x405|x406)<<(x407%x408));

    if (t18 != 3381174268U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x413 = 5881U;
	volatile uint8_t x415 = 7U;
	volatile uint32_t t19 = 16493U;

    t19 = ((x413|x414)<<(x415%x416));

    if (t19 != 4294967168U) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x421 = INT16_MIN;
	uint32_t x422 = 8U;
	volatile uint16_t x423 = UINT16_MAX;
	static uint32_t t20 = 33202U;

    t20 = ((x421|x422)<<(x423%x424));

    if (t20 != 4294934536U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x438 = 222U;
	int64_t x439 = INT64_MIN;
	int8_t x440 = INT8_MIN;
	volatile int32_t t21 = 13241991;

    t21 = ((x437|x438)<<(x439%x440));

    if (t21 != 223) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x454 = UINT16_MAX;
	volatile int32_t x455 = INT32_MAX;
	int16_t x456 = INT16_MAX;
	volatile int32_t t22 = 406274;

    t22 = ((x453|x454)<<(x455%x456));

    if (t22 != 131070) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x501 = 7214U;
	int16_t x502 = 21;
	uint32_t x504 = UINT32_MAX;
	int32_t t23 = 9;

    t23 = ((x501|x502)<<(x503%x504));

    if (t23 != 14462) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x505 = 14;
	static uint16_t x507 = UINT16_MAX;
	volatile int32_t x508 = -1;
	uint32_t t24 = 0U;

    t24 = ((x505|x506)<<(x507%x508));

    if (t24 != 3861998U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x513 = 1U;
	volatile uint32_t x514 = 103668U;
	static volatile uint32_t t25 = 1015400658U;

    t25 = ((x513|x514)<<(x515%x516));

    if (t25 != 103669U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x565 = 1;
	static uint32_t x566 = 400111U;
	volatile uint32_t t26 = 10788779U;

    t26 = ((x565|x566)<<(x567%x568));

    if (t26 != 400111U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x669 = 46LLU;
	static int16_t x670 = INT16_MIN;
	uint32_t x671 = 0U;
	int64_t x672 = INT64_MIN;
	volatile uint64_t t27 = 581114741LLU;

    t27 = ((x669|x670)<<(x671%x672));

    if (t27 != 18446744073709518894LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x677 = INT32_MAX;
	uint8_t x678 = 35U;
	static uint32_t x679 = 108U;
	int64_t x680 = -1LL;

    t28 = ((x677|x678)<<(x679%x680));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x689 = -13;
	static volatile uint64_t x691 = 30336829543LLU;
	uint8_t x692 = 1U;

    t29 = ((x689|x690)<<(x691%x692));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x697 = UINT16_MAX;
	int8_t x698 = INT8_MAX;
	int8_t x699 = INT8_MAX;
	volatile int32_t x700 = -1;
	volatile int32_t t30 = 961;

    t30 = ((x697|x698)<<(x699%x700));

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x705 = 2;
	int32_t t31 = -25;

    t31 = ((x705|x706)<<(x707%x708));

    if (t31 != 6) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x725 = 14202883525174683LLU;
	int64_t x726 = INT64_MIN;
	static uint8_t x727 = 0U;
	volatile uint64_t t32 = 2275237014169LLU;

    t32 = ((x725|x726)<<(x727%x728));

    if (t32 != 9237574920379950491LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x733 = 0U;
	static int16_t x734 = INT16_MAX;
	static volatile uint8_t x735 = 50U;
	static int8_t x736 = 35;
	static volatile int32_t t33 = -1506;

    t33 = ((x733|x734)<<(x735%x736));

    if (t33 != 1073709056) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x781 = 303;
	uint8_t x783 = 20U;
	uint8_t x784 = UINT8_MAX;

    t34 = ((x781|x782)<<(x783%x784));

    if (t34 != 401604608) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x801 = INT32_MIN;
	uint64_t x802 = UINT64_MAX;
	int16_t x804 = -1;
	uint64_t t35 = UINT64_MAX;

    t35 = ((x801|x802)<<(x803%x804));

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x861 = 141946412LLU;
	uint16_t x862 = UINT16_MAX;
	static uint8_t x863 = 5U;
	int64_t x864 = -95LL;
	uint64_t t36 = 94722LLU;

    t36 = ((x861|x862)<<(x863%x864));

    if (t36 != 4542431200LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x881 = -97128;
	volatile uint64_t x882 = 3782425LLU;
	volatile uint64_t t37 = 146157399LLU;

    t37 = ((x881|x882)<<(x883%x884));

    if (t37 != 18446744073709514546LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x930 = 95U;
	static int8_t x932 = -20;
	volatile uint32_t t38 = 55568U;

    t38 = ((x929|x930)<<(x931%x932));

    if (t38 != 49807360U) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x1006 = 9U;
	uint8_t x1008 = 12U;
	int32_t t39 = -720158798;

    t39 = ((x1005|x1006)<<(x1007%x1008));

    if (t39 != 854784) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x1125 = 2LL;
	volatile uint32_t x1126 = UINT32_MAX;
	static int32_t x1128 = -1;

    t40 = ((x1125|x1126)<<(x1127%x1128));

    if (t40 != 4294967295LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x1177 = 6466U;
	int32_t x1178 = 1004013;
	volatile int32_t t41 = -49903;

    t41 = ((x1177|x1178)<<(x1179%x1180));

    if (t41 != 1006063) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x1189 = 52U;
	int8_t x1191 = -1;
	volatile int64_t x1192 = -1LL;
	uint64_t t42 = 6494841651183LLU;

    t42 = ((x1189|x1190)<<(x1191%x1192));

    if (t42 != 266231351LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x1241 = INT32_MAX;
	uint64_t x1242 = 138457LLU;
	int16_t x1243 = 198;
	static volatile uint64_t t43 = 5804766140LLU;

    t43 = ((x1241|x1242)<<(x1243%x1244));

    if (t43 != 8589934588LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x1257 = UINT32_MAX;
	static int64_t x1259 = -1LL;
	static volatile int8_t x1260 = -1;
	uint32_t t44 = UINT32_MAX;

    t44 = ((x1257|x1258)<<(x1259%x1260));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x1285 = 1345899515640LLU;
	uint32_t x1286 = 207970175U;
	int32_t x1287 = INT32_MIN;
	int8_t x1288 = 1;
	static volatile uint64_t t45 = 25181911466600LLU;

    t45 = ((x1285|x1286)<<(x1287%x1288));

    if (t45 != 1345901682687LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint32_t x1289 = 19U;
	volatile int16_t x1290 = -1;
	int16_t x1291 = 2554;
	int8_t x1292 = -1;

    t46 = ((x1289|x1290)<<(x1291%x1292));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x1306 = 44U;
	int64_t x1307 = INT64_MIN;
	int32_t x1308 = INT32_MIN;
	uint32_t t47 = 411U;

    t47 = ((x1305|x1306)<<(x1307%x1308));

    if (t47 != 464444U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x1329 = 8496625889LLU;
	int64_t x1331 = -1LL;
	uint64_t t48 = 11050LLU;

    t48 = ((x1329|x1330)<<(x1331%x1332));

    if (t48 != 9223372045351401697LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x1341 = 44;
	uint64_t x1342 = UINT64_MAX;
	int16_t x1343 = 2;
	int64_t x1344 = INT64_MAX;
	uint64_t t49 = 1902911LLU;

    t49 = ((x1341|x1342)<<(x1343%x1344));

    if (t49 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x1413 = 29088LLU;
	int16_t x1414 = INT16_MIN;
	int32_t x1415 = -1;
	uint64_t x1416 = 76LLU;
	volatile uint64_t t50 = 672896LLU;

    t50 = ((x1413|x1414)<<(x1415%x1416));

    if (t50 != 18446617629872357376LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint8_t x1429 = 100U;
	uint16_t x1430 = 59U;
	int32_t x1432 = -1;
	volatile int32_t t51 = 74;

    t51 = ((x1429|x1430)<<(x1431%x1432));

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x1501 = INT8_MAX;
	uint32_t x1502 = 95297982U;
	volatile int8_t x1503 = 2;
	volatile uint32_t t52 = 0U;

    t52 = ((x1501|x1502)<<(x1503%x1504));

    if (t52 != 381192188U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x1509 = 25923148LLU;
	int64_t x1510 = INT64_MIN;
	int64_t x1511 = -266935076413LL;
	static volatile int64_t x1512 = -1LL;
	uint64_t t53 = 6069911LLU;

    t53 = ((x1509|x1510)<<(x1511%x1512));

    if (t53 != 9223372036880698956LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x1513 = UINT32_MAX;
	static int32_t x1514 = -49;
	static int32_t x1516 = -1;
	volatile uint32_t t54 = UINT32_MAX;

    t54 = ((x1513|x1514)<<(x1515%x1516));

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x1569 = UINT32_MAX;
	int32_t x1570 = INT32_MAX;
	int8_t x1571 = 2;
	uint8_t x1572 = UINT8_MAX;

    t55 = ((x1569|x1570)<<(x1571%x1572));

    if (t55 != 4294967292U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x1597 = 1105756204LLU;
	int16_t x1598 = INT16_MAX;
	static int16_t x1599 = INT16_MAX;
	volatile uint64_t t56 = 233052LLU;

    t56 = ((x1597|x1598)<<(x1599%x1600));

    if (t56 != 2211577854LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x1606 = 177U;
	volatile uint32_t t57 = 43U;

    t57 = ((x1605|x1606)<<(x1607%x1608));

    if (t57 != 1281064960U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x1638 = INT8_MAX;
	int32_t x1639 = INT32_MIN;
	int16_t x1640 = INT16_MIN;
	volatile int32_t t58 = -17;

    t58 = ((x1637|x1638)<<(x1639%x1640));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x1670 = UINT8_MAX;
	static volatile int32_t x1672 = INT32_MAX;
	static volatile int64_t t59 = -1878LL;

    t59 = ((x1669|x1670)<<(x1671%x1672));

    if (t59 != 2793816056LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x1701 = 1;
	volatile int32_t x1702 = 52;
	static int16_t x1704 = -1;
	int32_t t60 = 2751037;

    t60 = ((x1701|x1702)<<(x1703%x1704));

    if (t60 != 53) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x1749 = 11641952;
	static int32_t x1750 = 124;
	static uint16_t x1751 = 14U;
	int64_t x1752 = -6LL;
	int32_t t61 = 0;

    t61 = ((x1749|x1750)<<(x1751%x1752));

    if (t61 != 46567920) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x1761 = INT32_MAX;
	int16_t x1762 = 2;
	int16_t x1763 = INT16_MIN;
	int8_t x1764 = -1;
	int32_t t62 = INT32_MAX;

    t62 = ((x1761|x1762)<<(x1763%x1764));

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x1769 = 4432U;
	static volatile int16_t x1771 = -12369;
	int8_t x1772 = -1;
	uint32_t t63 = 288848791U;

    t63 = ((x1769|x1770)<<(x1771%x1772));

    if (t63 != 65535U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x1773 = -7;
	uint64_t x1774 = 505724130701302329LLU;
	static volatile uint8_t x1775 = 1U;
	static int64_t x1776 = INT64_MIN;

    t64 = ((x1773|x1774)<<(x1775%x1776));

    if (t64 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x1793 = UINT64_MAX;
	static int8_t x1794 = INT8_MAX;
	uint8_t x1795 = 7U;
	uint64_t x1796 = 30050433LLU;
	volatile uint64_t t65 = 1650678945253LLU;

    t65 = ((x1793|x1794)<<(x1795%x1796));

    if (t65 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x1805 = UINT32_MAX;
	int16_t x1806 = 53;
	int8_t x1807 = -1;
	uint32_t x1808 = 7U;
	static volatile uint32_t t66 = 436976U;

    t66 = ((x1805|x1806)<<(x1807%x1808));

    if (t66 != 4294967288U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x1818 = 10221171U;
	int8_t x1819 = 2;
	int64_t x1820 = -11LL;

    t67 = ((x1817|x1818)<<(x1819%x1820));

    if (t67 != 40894460U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x1845 = INT16_MAX;
	uint32_t x1846 = 3771054U;
	static uint16_t x1848 = 41U;
	static volatile uint32_t t68 = 255427632U;

    t68 = ((x1845|x1846)<<(x1847%x1848));

    if (t68 != 4278190080U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x1865 = 308054LLU;
	static uint32_t x1866 = 37073U;
	volatile int64_t x1867 = INT64_MIN;
	volatile int16_t x1868 = -1;
	volatile uint64_t t69 = 5303LLU;

    t69 = ((x1865|x1866)<<(x1867%x1868));

    if (t69 != 308183LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x1881 = 44U;
	uint64_t x1883 = 24034LLU;
	volatile uint8_t x1884 = 3U;
	static volatile uint32_t t70 = 1076729U;

    t70 = ((x1881|x1882)<<(x1883%x1884));

    if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x1885 = -1LL;
	uint64_t x1886 = UINT64_MAX;
	volatile uint64_t x1887 = 1405224424311829777LLU;
	volatile uint8_t x1888 = 14U;
	uint64_t t71 = 3LLU;

    t71 = ((x1885|x1886)<<(x1887%x1888));

    if (t71 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x1893 = INT16_MAX;
	volatile int8_t x1895 = INT8_MIN;
	uint16_t x1896 = 2U;
	int64_t t72 = INT64_MAX;

    t72 = ((x1893|x1894)<<(x1895%x1896));

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x1897 = UINT8_MAX;
	int8_t x1898 = 0;
	static int32_t x1900 = -1;
	volatile int32_t t73 = 26205;

    t73 = ((x1897|x1898)<<(x1899%x1900));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x1906 = -1;
	int64_t x1907 = -1LL;
	volatile int8_t x1908 = -1;
	uint64_t t74 = UINT64_MAX;

    t74 = ((x1905|x1906)<<(x1907%x1908));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x1977 = UINT64_MAX;
	static int64_t x1978 = 11280LL;
	volatile int8_t x1980 = INT8_MAX;
	uint64_t t75 = 101358678659LLU;

    t75 = ((x1977|x1978)<<(x1979%x1980));

    if (t75 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x1985 = 7U;
	static int32_t x1986 = 2504;
	uint8_t x1987 = UINT8_MAX;
	uint8_t x1988 = UINT8_MAX;

    t76 = ((x1985|x1986)<<(x1987%x1988));

    if (t76 != 2511) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x2041 = 5U;
	int16_t x2042 = INT16_MIN;
	static volatile int64_t x2043 = -35067240528LL;
	int16_t x2044 = -1;
	uint32_t t77 = 52U;

    t77 = ((x2041|x2042)<<(x2043%x2044));

    if (t77 != 4294934533U) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x2057 = 2121U;
	int8_t x2059 = INT8_MIN;
	int64_t x2060 = -1LL;
	uint32_t t78 = 34717U;

    t78 = ((x2057|x2058)<<(x2059%x2060));

    if (t78 != 2137U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x2061 = INT64_MAX;
	int64_t x2062 = INT64_MAX;
	int32_t x2063 = INT32_MAX;
	int16_t x2064 = -1;
	int64_t t79 = INT64_MAX;

    t79 = ((x2061|x2062)<<(x2063%x2064));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x2069 = UINT64_MAX;
	int16_t x2072 = INT16_MAX;
	volatile uint64_t t80 = 4391821280670316LLU;

    t80 = ((x2069|x2070)<<(x2071%x2072));

    if (t80 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x2113 = 4;
	uint8_t x2114 = 6U;
	uint8_t x2115 = UINT8_MAX;
	int8_t x2116 = 25;
	volatile int32_t t81 = 329351915;

    t81 = ((x2113|x2114)<<(x2115%x2116));

    if (t81 != 192) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x2121 = UINT64_MAX;
	static int8_t x2122 = 0;
	int64_t x2124 = -1LL;
	uint64_t t82 = UINT64_MAX;

    t82 = ((x2121|x2122)<<(x2123%x2124));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x2125 = UINT64_MAX;
	int16_t x2126 = INT16_MAX;
	volatile uint16_t x2127 = UINT16_MAX;
	uint32_t x2128 = 21U;
	volatile uint64_t t83 = 49004682752479LLU;

    t83 = ((x2125|x2126)<<(x2127%x2128));

    if (t83 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x2137 = UINT8_MAX;
	static int8_t x2140 = -1;
	volatile uint64_t t84 = 39180LLU;

    t84 = ((x2137|x2138)<<(x2139%x2140));

    if (t84 != 4485589800198438911LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x2149 = UINT16_MAX;
	static volatile uint8_t x2152 = 36U;
	volatile int32_t t85 = 1069566408;

    t85 = ((x2149|x2150)<<(x2151%x2152));

    if (t85 != 524280) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x2165 = 20250663085647914LLU;
	uint32_t x2166 = 3002239U;
	static volatile int32_t x2167 = INT32_MIN;
	int16_t x2168 = INT16_MIN;
	volatile uint64_t t86 = 584299772578LLU;

    t86 = ((x2165|x2166)<<(x2167%x2168));

    if (t86 != 20250663085666175LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x2221 = UINT16_MAX;
	uint64_t x2222 = 14LLU;
	int16_t x2224 = INT16_MIN;
	uint64_t t87 = 58616235465323LLU;

    t87 = ((x2221|x2222)<<(x2223%x2224));

    if (t87 != 33553920LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x2245 = UINT32_MAX;
	int8_t x2246 = INT8_MIN;
	int16_t x2247 = INT16_MAX;

    t88 = ((x2245|x2246)<<(x2247%x2248));

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2250 = -3;
	static int32_t x2251 = 1048;
	volatile int64_t x2252 = -1LL;
	volatile uint32_t t89 = 3504U;

    t89 = ((x2249|x2250)<<(x2251%x2252));

    if (t89 != 4294967293U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x2254 = UINT8_MAX;
	int64_t x2255 = INT64_MIN;
	static int16_t x2256 = INT16_MIN;
	uint64_t t90 = 129177473002065LLU;

    t90 = ((x2253|x2254)<<(x2255%x2256));

    if (t90 != 228607LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x2261 = 161U;
	static int16_t x2263 = INT16_MIN;
	static int16_t x2264 = -1;
	uint32_t t91 = 18580U;

    t91 = ((x2261|x2262)<<(x2263%x2264));

    if (t91 != 163U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x2273 = -1;
	uint64_t x2274 = UINT64_MAX;
	int32_t x2275 = -1;
	int8_t x2276 = -1;
	volatile uint64_t t92 = UINT64_MAX;

    t92 = ((x2273|x2274)<<(x2275%x2276));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x2277 = INT64_MAX;
	int64_t x2278 = INT64_MAX;
	int32_t x2279 = INT32_MIN;
	static int8_t x2280 = INT8_MIN;
	int64_t t93 = INT64_MAX;

    t93 = ((x2277|x2278)<<(x2279%x2280));

    if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x2321 = 34954894340LL;
	uint16_t x2322 = 1U;
	int64_t t94 = 203600LL;

    t94 = ((x2321|x2322)<<(x2323%x2324));

    if (t94 != 34954894341LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x2325 = -17;
	uint64_t x2326 = 3562062262700893340LLU;
	int8_t x2327 = 0;
	uint8_t x2328 = 105U;
	uint64_t t95 = UINT64_MAX;

    t95 = ((x2325|x2326)<<(x2327%x2328));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x2333 = UINT32_MAX;
	int16_t x2334 = -1;
	int32_t x2336 = INT32_MAX;
	volatile uint32_t t96 = 3U;

    t96 = ((x2333|x2334)<<(x2335%x2336));

    if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x2405 = INT32_MIN;
	uint64_t x2407 = 25530965227994522LLU;
	static uint64_t x2408 = 1LLU;
	uint64_t t97 = 70893559660LLU;

    t97 = ((x2405|x2406)<<(x2407%x2408));

    if (t97 != 18446744071563528586LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x2433 = -1;
	static uint64_t x2434 = 35LLU;
	static int64_t x2435 = INT64_MIN;
	int64_t x2436 = INT64_MIN;
	uint64_t t98 = UINT64_MAX;

    t98 = ((x2433|x2434)<<(x2435%x2436));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x2445 = UINT64_MAX;
	volatile uint8_t x2448 = 30U;
	volatile uint64_t t99 = 251244370098LLU;

    t99 = ((x2445|x2446)<<(x2447%x2448));

    if (t99 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x2521 = 16U;
	uint16_t x2522 = 318U;
	int8_t x2523 = 0;
	static int64_t x2524 = INT64_MAX;
	static int32_t t100 = 294;

    t100 = ((x2521|x2522)<<(x2523%x2524));

    if (t100 != 318) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x2537 = 15;
	int16_t x2538 = INT16_MAX;
	volatile int32_t t101 = -164737;

    t101 = ((x2537|x2538)<<(x2539%x2540));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x2557 = 836477;
	uint64_t x2558 = UINT64_MAX;
	static volatile int8_t x2559 = -1;
	uint64_t t102 = UINT64_MAX;

    t102 = ((x2557|x2558)<<(x2559%x2560));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x2601 = 0;
	int16_t x2602 = INT16_MAX;
	int8_t x2603 = 0;
	int64_t x2604 = 12LL;
	int32_t t103 = 7193274;

    t103 = ((x2601|x2602)<<(x2603%x2604));

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x2617 = UINT32_MAX;
	uint8_t x2619 = 0U;
	static uint16_t x2620 = 1043U;
	uint32_t t104 = UINT32_MAX;

    t104 = ((x2617|x2618)<<(x2619%x2620));

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x2633 = INT16_MIN;
	uint64_t x2634 = 4224001646LLU;
	static uint8_t x2636 = 3U;
	volatile uint64_t t105 = 29184883592246490LLU;

    t105 = ((x2633|x2634)<<(x2635%x2636));

    if (t105 != 18446744073709528686LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x2653 = INT16_MIN;
	int16_t x2655 = 6;
	static uint32_t x2656 = UINT32_MAX;
	uint64_t t106 = 912692221701170820LLU;

    t106 = ((x2653|x2654)<<(x2655%x2656));

    if (t106 != 18446744073707580480LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x2665 = UINT32_MAX;
	static int16_t x2666 = -1;
	uint64_t x2667 = 26301519LLU;
	uint8_t x2668 = 55U;
	volatile uint32_t t107 = 238838419U;

    t107 = ((x2665|x2666)<<(x2667%x2668));

    if (t107 != 4278190080U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x2689 = 1LL;
	volatile int8_t x2691 = -1;
	static int8_t x2692 = -1;
	volatile int64_t t108 = -37853678564LL;

    t108 = ((x2689|x2690)<<(x2691%x2692));

    if (t108 != 127LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x2725 = 404684340U;
	static int32_t x2726 = -1;
	uint16_t x2727 = 109U;
	uint32_t t109 = UINT32_MAX;

    t109 = ((x2725|x2726)<<(x2727%x2728));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x2742 = INT8_MIN;
	int64_t x2743 = INT64_MAX;
	int8_t x2744 = 5;

    t110 = ((x2741|x2742)<<(x2743%x2744));

    if (t110 != 4294967292U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x2763 = INT8_MIN;
	volatile int8_t x2764 = INT8_MIN;
	int32_t t111 = -327051;

    t111 = ((x2761|x2762)<<(x2763%x2764));

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x2789 = 28171090U;
	volatile uint64_t x2790 = UINT64_MAX;
	volatile uint64_t x2791 = 36LLU;
	int64_t x2792 = -1LL;
	static volatile uint64_t t112 = 144LLU;

    t112 = ((x2789|x2790)<<(x2791%x2792));

    if (t112 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x2839 = 1U;
	int8_t x2840 = INT8_MIN;

    t113 = ((x2837|x2838)<<(x2839%x2840));

    if (t113 != 107580107330LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x2843 = 1U;
	static uint32_t x2844 = UINT32_MAX;
	uint64_t t114 = 15554427LLU;

    t114 = ((x2841|x2842)<<(x2843%x2844));

    if (t114 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x2854 = 1LLU;
	volatile uint64_t t115 = 1011636209131LLU;

    t115 = ((x2853|x2854)<<(x2855%x2856));

    if (t115 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x2889 = 76932345LLU;
	int16_t x2890 = INT16_MIN;
	static volatile int32_t x2891 = INT32_MAX;
	static int32_t x2892 = INT32_MAX;

    t116 = ((x2889|x2890)<<(x2891%x2892));

    if (t116 != 18446744073709544697LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x2946 = INT8_MAX;
	uint32_t x2948 = 2U;
	int32_t t117 = 53;

    t117 = ((x2945|x2946)<<(x2947%x2948));

    if (t117 != 510) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x2949 = 190U;
	uint8_t x2950 = 62U;
	uint8_t x2951 = 24U;
	int64_t x2952 = -1LL;

    t118 = ((x2949|x2950)<<(x2951%x2952));

    if (t118 != 190) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x2961 = UINT64_MAX;
	uint8_t x2963 = 12U;
	static int32_t x2964 = INT32_MIN;
	static volatile uint64_t t119 = 593775LLU;

    t119 = ((x2961|x2962)<<(x2963%x2964));

    if (t119 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x2969 = INT32_MIN;
	static volatile uint32_t x2970 = UINT32_MAX;
	int16_t x2971 = INT16_MIN;
	uint8_t x2972 = 1U;
	uint32_t t120 = UINT32_MAX;

    t120 = ((x2969|x2970)<<(x2971%x2972));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x2993 = 60LLU;
	static int16_t x2994 = -1;
	int8_t x2995 = -1;
	int16_t x2996 = -1;
	static uint64_t t121 = UINT64_MAX;

    t121 = ((x2993|x2994)<<(x2995%x2996));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x3033 = UINT32_MAX;
	uint8_t x3034 = 3U;
	static volatile int8_t x3036 = INT8_MAX;
	static volatile uint32_t t122 = 623682609U;

    t122 = ((x3033|x3034)<<(x3035%x3036));

    if (t122 != 4293918720U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x3041 = INT64_MAX;
	static uint32_t x3042 = UINT32_MAX;
	int64_t x3043 = INT64_MIN;
	volatile int64_t t123 = INT64_MAX;

    t123 = ((x3041|x3042)<<(x3043%x3044));

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x3061 = UINT16_MAX;
	static int8_t x3063 = 1;
	int32_t x3064 = 13425523;
	volatile uint32_t t124 = 12162558U;

    t124 = ((x3061|x3062)<<(x3063%x3064));

    if (t124 != 131070U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x3081 = INT8_MIN;
	uint64_t x3082 = UINT64_MAX;
	uint64_t x3083 = 846LLU;
	static uint64_t t125 = 4497143551986LLU;

    t125 = ((x3081|x3082)<<(x3083%x3084));

    if (t125 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x3137 = INT16_MIN;
	volatile uint64_t x3138 = UINT64_MAX;
	volatile int32_t x3139 = INT32_MIN;
	int16_t x3140 = INT16_MIN;
	volatile uint64_t t126 = UINT64_MAX;

    t126 = ((x3137|x3138)<<(x3139%x3140));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x3149 = INT8_MAX;
	uint32_t x3150 = 5U;
	static uint8_t x3151 = 7U;
	int64_t x3152 = -1LL;
	volatile uint32_t t127 = 2U;

    t127 = ((x3149|x3150)<<(x3151%x3152));

    if (t127 != 127U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x3161 = INT8_MAX;
	uint32_t x3162 = UINT32_MAX;
	static int64_t x3163 = INT64_MAX;
	int32_t x3164 = INT32_MAX;
	uint32_t t128 = 5457848U;

    t128 = ((x3161|x3162)<<(x3163%x3164));

    if (t128 != 4294967294U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x3165 = UINT32_MAX;
	uint32_t x3167 = 0U;
	volatile int32_t x3168 = 50351180;
	volatile uint32_t t129 = UINT32_MAX;

    t129 = ((x3165|x3166)<<(x3167%x3168));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x3197 = 513062921496554540LL;
	int32_t x3199 = INT32_MAX;

    t130 = ((x3197|x3198)<<(x3199%x3200));

    if (t130 != 513062921509268799LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint64_t x3205 = 67483913584973902LLU;
	static uint16_t x3207 = 3U;
	int8_t x3208 = INT8_MIN;
	uint64_t t131 = 59915388786311649LLU;

    t131 = ((x3205|x3206)<<(x3207%x3208));

    if (t131 != 539871308679806576LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x3237 = 53419U;
	int32_t x3238 = -1;
	static int64_t x3239 = INT64_MIN;
	uint32_t t132 = UINT32_MAX;

    t132 = ((x3237|x3238)<<(x3239%x3240));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x3322 = 369U;
	static int8_t x3323 = 1;
	static int64_t x3324 = 32LL;
	volatile int32_t t133 = 1;

    t133 = ((x3321|x3322)<<(x3323%x3324));

    if (t133 != 3066) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x3445 = UINT32_MAX;
	uint16_t x3446 = 6U;
	uint64_t x3447 = UINT64_MAX;
	uint32_t t134 = UINT32_MAX;

    t134 = ((x3445|x3446)<<(x3447%x3448));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x3449 = UINT64_MAX;
	volatile uint16_t x3450 = 12U;
	volatile uint16_t x3451 = 72U;

    t135 = ((x3449|x3450)<<(x3451%x3452));

    if (t135 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x3453 = 10U;
	uint64_t x3454 = 239LLU;
	static int8_t x3455 = -6;
	int8_t x3456 = -1;
	static uint64_t t136 = 12381729506LLU;

    t136 = ((x3453|x3454)<<(x3455%x3456));

    if (t136 != 239LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x3470 = 7706565110460077773LLU;
	static uint64_t x3471 = UINT64_MAX;
	uint64_t x3472 = UINT64_MAX;
	volatile uint64_t t137 = 8224974011229LLU;

    t137 = ((x3469|x3470)<<(x3471%x3472));

    if (t137 != 18446744073709541069LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x3489 = INT8_MIN;
	uint32_t x3490 = 172154173U;
	int32_t x3491 = -193;
	volatile int16_t x3492 = -1;
	uint32_t t138 = 1657631U;

    t138 = ((x3489|x3490)<<(x3491%x3492));

    if (t138 != 4294967229U) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x3522 = 22277929LLU;
	volatile int32_t x3523 = -1;
	int64_t x3524 = -1LL;
	uint64_t t139 = 30LLU;

    t139 = ((x3521|x3522)<<(x3523%x3524));

    if (t139 != 6171393839LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x3542 = 9U;
	uint64_t x3543 = 1859LLU;
	int8_t x3544 = 1;

    t140 = ((x3541|x3542)<<(x3543%x3544));

    if (t140 != 43) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x3581 = 156877614152LLU;
	uint16_t x3582 = 849U;
	int8_t x3583 = 1;
	int8_t x3584 = 1;
	static uint64_t t141 = 25593835876616LLU;

    t141 = ((x3581|x3582)<<(x3583%x3584));

    if (t141 != 156877614937LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x3591 = 3910832494661036LLU;
	int8_t x3592 = INT8_MAX;

    t142 = ((x3589|x3590)<<(x3591%x3592));

    if (t142 != 16248351662953988096LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x3597 = INT8_MAX;
	int16_t x3598 = 20;
	uint64_t x3600 = 50LLU;
	int32_t t143 = -194206;

    t143 = ((x3597|x3598)<<(x3599%x3600));

    if (t143 != 1016) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x3701 = UINT64_MAX;
	int8_t x3702 = -1;
	int8_t x3704 = INT8_MIN;
	volatile uint64_t t144 = UINT64_MAX;

    t144 = ((x3701|x3702)<<(x3703%x3704));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x3713 = UINT64_MAX;
	uint8_t x3714 = 62U;
	int8_t x3715 = INT8_MAX;
	volatile int8_t x3716 = INT8_MAX;

    t145 = ((x3713|x3714)<<(x3715%x3716));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x3717 = 18U;
	uint32_t x3718 = 106792U;
	static uint8_t x3719 = 0U;
	uint16_t x3720 = 25967U;
	uint32_t t146 = 354045U;

    t146 = ((x3717|x3718)<<(x3719%x3720));

    if (t146 != 106810U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x3747 = INT16_MAX;
	int8_t x3748 = 7;
	uint64_t t147 = UINT64_MAX;

    t147 = ((x3745|x3746)<<(x3747%x3748));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x3781 = 537U;
	volatile int8_t x3782 = INT8_MAX;
	uint64_t x3783 = UINT64_MAX;
	static int8_t x3784 = 9;
	volatile int32_t t148 = -1069865;

    t148 = ((x3781|x3782)<<(x3783%x3784));

    if (t148 != 40896) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x3803 = INT16_MIN;
	int64_t x3804 = -1LL;
	uint32_t t149 = 517682452U;

    t149 = ((x3801|x3802)<<(x3803%x3804));

    if (t149 != 4294967169U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x3817 = 10342;
	volatile uint16_t x3818 = UINT16_MAX;
	int64_t x3819 = -1LL;
	int16_t x3820 = -1;
	static volatile int32_t t150 = 63874;

    t150 = ((x3817|x3818)<<(x3819%x3820));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x3878 = 75907;
	volatile int64_t x3879 = INT64_MAX;
	int32_t x3880 = INT32_MAX;
	uint64_t t151 = 45753108503264LLU;

    t151 = ((x3877|x3878)<<(x3879%x3880));

    if (t151 != 10123705230LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x3881 = INT32_MAX;
	static uint8_t x3882 = UINT8_MAX;
	int32_t x3883 = INT32_MIN;
	volatile int8_t x3884 = -1;
	volatile int32_t t152 = INT32_MAX;

    t152 = ((x3881|x3882)<<(x3883%x3884));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint32_t x3909 = UINT32_MAX;
	int8_t x3912 = -2;
	volatile uint32_t t153 = UINT32_MAX;

    t153 = ((x3909|x3910)<<(x3911%x3912));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x3914 = 0U;
	static int64_t x3915 = INT64_MAX;
	volatile int8_t x3916 = -1;

    t154 = ((x3913|x3914)<<(x3915%x3916));

    if (t154 != 24393) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x3921 = 69363821843640239LLU;
	int32_t x3922 = -1;
	volatile int16_t x3923 = 6562;
	static uint32_t x3924 = 86U;

    t155 = ((x3921|x3922)<<(x3923%x3924));

    if (t155 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x3953 = 3U;
	uint32_t x3954 = UINT32_MAX;
	static volatile uint16_t x3955 = UINT16_MAX;
	int64_t x3956 = -1LL;
	volatile uint32_t t156 = UINT32_MAX;

    t156 = ((x3953|x3954)<<(x3955%x3956));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x4037 = 80U;
	static int16_t x4038 = INT16_MAX;
	static uint16_t x4039 = UINT16_MAX;
	volatile int32_t t157 = 9741197;

    t157 = ((x4037|x4038)<<(x4039%x4040));

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x4041 = UINT64_MAX;
	uint8_t x4043 = 5U;
	int16_t x4044 = INT16_MIN;
	volatile uint64_t t158 = 311811636815471397LLU;

    t158 = ((x4041|x4042)<<(x4043%x4044));

    if (t158 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x4045 = UINT32_MAX;
	volatile uint16_t x4046 = 366U;
	int8_t x4047 = INT8_MAX;
	volatile int8_t x4048 = -1;
	uint32_t t159 = UINT32_MAX;

    t159 = ((x4045|x4046)<<(x4047%x4048));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x4053 = INT64_MAX;
	static volatile uint64_t x4054 = 63870757LLU;
	uint32_t x4055 = 6U;
	int32_t x4056 = INT32_MIN;
	volatile uint64_t t160 = 114LLU;

    t160 = ((x4053|x4054)<<(x4055%x4056));

    if (t160 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x4074 = -1LL;
	uint8_t x4075 = 31U;
	static volatile int8_t x4076 = INT8_MIN;
	uint64_t t161 = 11LLU;

    t161 = ((x4073|x4074)<<(x4075%x4076));

    if (t161 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x4133 = 672;
	uint64_t x4134 = UINT64_MAX;
	int8_t x4135 = 61;

    t162 = ((x4133|x4134)<<(x4135%x4136));

    if (t162 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x4165 = -21;
	static uint64_t x4166 = UINT64_MAX;

    t163 = ((x4165|x4166)<<(x4167%x4168));

    if (t163 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x4185 = 1010;
	volatile int32_t x4186 = 18886;
	volatile uint32_t x4187 = UINT32_MAX;
	uint8_t x4188 = 111U;
	volatile int32_t t164 = 3916734;

    t164 = ((x4185|x4186)<<(x4187%x4188));

    if (t164 != 1244544) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x4190 = -1;
	volatile int16_t x4191 = INT16_MAX;
	volatile uint32_t t165 = UINT32_MAX;

    t165 = ((x4189|x4190)<<(x4191%x4192));

    if (t165 != UINT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x4225 = 48LLU;
	int32_t x4226 = 29196485;
	int8_t x4227 = -1;
	int16_t x4228 = -1;
	volatile uint64_t t166 = 2544608652386904LLU;

    t166 = ((x4225|x4226)<<(x4227%x4228));

    if (t166 != 29196533LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x4254 = 10LLU;
	volatile uint64_t t167 = 3199725084359720LLU;

    t167 = ((x4253|x4254)<<(x4255%x4256));

    if (t167 != 230123467LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x4321 = 21U;
	uint16_t x4322 = 63U;
	int16_t x4323 = 0;
	int8_t x4324 = INT8_MAX;
	volatile int32_t t168 = -15099882;

    t168 = ((x4321|x4322)<<(x4323%x4324));

    if (t168 != 63) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x4326 = 48;
	volatile int32_t x4327 = INT32_MIN;
	volatile int16_t x4328 = -1;

    t169 = ((x4325|x4326)<<(x4327%x4328));

    if (t169 != 48U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x4334 = -2LL;
	uint16_t x4335 = 1U;

    t170 = ((x4333|x4334)<<(x4335%x4336));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x4357 = -1;
	static volatile uint32_t x4358 = 4U;
	volatile uint32_t t171 = UINT32_MAX;

    t171 = ((x4357|x4358)<<(x4359%x4360));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x4361 = UINT16_MAX;
	volatile uint16_t x4362 = UINT16_MAX;
	int32_t x4363 = INT32_MAX;
	int32_t x4364 = -1;
	volatile int32_t t172 = -11;

    t172 = ((x4361|x4362)<<(x4363%x4364));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x4373 = INT8_MAX;
	uint64_t x4374 = 800447481989LLU;
	int64_t x4376 = -1LL;

    t173 = ((x4373|x4374)<<(x4375%x4376));

    if (t173 != 800447482111LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x4409 = -1LL;
	uint64_t x4410 = 7653060554179LLU;
	uint8_t x4411 = 4U;
	int8_t x4412 = INT8_MIN;
	uint64_t t174 = 2399879455310438853LLU;

    t174 = ((x4409|x4410)<<(x4411%x4412));

    if (t174 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x4417 = -1;
	static uint32_t x4418 = 14U;
	int32_t x4420 = -1106386;
	volatile uint32_t t175 = 7887219U;

    t175 = ((x4417|x4418)<<(x4419%x4420));

    if (t175 != 4294966272U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x4422 = UINT64_MAX;
	static int16_t x4424 = -1;
	uint64_t t176 = UINT64_MAX;

    t176 = ((x4421|x4422)<<(x4423%x4424));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x4437 = UINT32_MAX;
	uint16_t x4438 = 29U;
	uint32_t x4439 = 11U;
	uint8_t x4440 = 60U;
	volatile uint32_t t177 = 1790053461U;

    t177 = ((x4437|x4438)<<(x4439%x4440));

    if (t177 != 4294965248U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x4449 = 22;
	int32_t x4451 = INT32_MIN;
	int16_t x4452 = INT16_MIN;
	volatile int64_t t178 = -383013329LL;

    t178 = ((x4449|x4450)<<(x4451%x4452));

    if (t178 != 78018583320889142LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x4465 = -1;
	uint64_t x4466 = 6329299740780LLU;
	int16_t x4468 = -1;
	volatile uint64_t t179 = 2868379706609LLU;

    t179 = ((x4465|x4466)<<(x4467%x4468));

    if (t179 != 18446742974197923840LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x4477 = INT64_MAX;
	int16_t x4478 = INT16_MAX;
	int32_t x4479 = 0;
	int32_t x4480 = INT32_MIN;
	int64_t t180 = INT64_MAX;

    t180 = ((x4477|x4478)<<(x4479%x4480));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x4529 = 115738LLU;
	int8_t x4530 = INT8_MIN;
	int16_t x4531 = 1052;

    t181 = ((x4529|x4530)<<(x4531%x4532));

    if (t181 != 18446744046329135104LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x4553 = UINT32_MAX;
	int16_t x4554 = -1;
	uint16_t x4555 = 1U;
	int64_t x4556 = -1LL;

    t182 = ((x4553|x4554)<<(x4555%x4556));

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x4585 = -1;
	uint64_t x4586 = 7831LLU;
	int64_t x4587 = INT64_MIN;
	int64_t x4588 = INT64_MIN;
	uint64_t t183 = UINT64_MAX;

    t183 = ((x4585|x4586)<<(x4587%x4588));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x4729 = UINT64_MAX;
	static volatile uint64_t x4730 = 45765376545672633LLU;
	uint8_t x4731 = 5U;
	static int64_t x4732 = INT64_MIN;
	uint64_t t184 = 337713309591247LLU;

    t184 = ((x4729|x4730)<<(x4731%x4732));

    if (t184 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x4785 = 16954050757713125LLU;
	int64_t x4786 = -171748194316722LL;
	uint8_t x4787 = 3U;
	int32_t x4788 = 200760;

    t185 = ((x4785|x4786)<<(x4787%x4788));

    if (t185 != 18445581883197552504LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x4805 = 6LLU;
	uint8_t x4806 = 4U;
	static uint8_t x4807 = 7U;
	int32_t x4808 = 795102;
	static volatile uint64_t t186 = 426LLU;

    t186 = ((x4805|x4806)<<(x4807%x4808));

    if (t186 != 768LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x4839 = 26U;
	volatile uint32_t t187 = 93218U;

    t187 = ((x4837|x4838)<<(x4839%x4840));

    if (t187 != 4227858432U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x4866 = UINT32_MAX;
	static int32_t x4867 = INT32_MAX;
	int8_t x4868 = -1;
	volatile uint32_t t188 = UINT32_MAX;

    t188 = ((x4865|x4866)<<(x4867%x4868));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x4905 = UINT8_MAX;
	int8_t x4906 = 43;
	static uint32_t x4907 = 1813U;
	volatile int8_t x4908 = 2;
	int32_t t189 = -37700730;

    t189 = ((x4905|x4906)<<(x4907%x4908));

    if (t189 != 510) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x4917 = INT8_MAX;
	static volatile int8_t x4918 = 0;
	int32_t x4920 = -1;
	int32_t t190 = 1592674;

    t190 = ((x4917|x4918)<<(x4919%x4920));

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x4942 = UINT32_MAX;
	uint16_t x4943 = 0U;
	int64_t x4944 = -277155184359025LL;
	static uint32_t t191 = UINT32_MAX;

    t191 = ((x4941|x4942)<<(x4943%x4944));

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x4987 = INT32_MIN;
	volatile uint64_t t192 = UINT64_MAX;

    t192 = ((x4985|x4986)<<(x4987%x4988));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x4993 = INT8_MAX;
	int64_t x4995 = INT64_MAX;
	int8_t x4996 = 40;
	int32_t t193 = -235382187;

    t193 = ((x4993|x4994)<<(x4995%x4996));

    if (t193 != 8388480) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x5033 = -13;
	uint64_t x5034 = 3781670556414LLU;
	int8_t x5035 = INT8_MIN;
	int8_t x5036 = 1;
	uint64_t t194 = UINT64_MAX;

    t194 = ((x5033|x5034)<<(x5035%x5036));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x5037 = 308658LLU;
	int64_t x5038 = 535284777LL;
	int32_t x5039 = INT32_MIN;
	uint64_t t195 = 111982222393LLU;

    t195 = ((x5037|x5038)<<(x5039%x5040));

    if (t195 != 535297467LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x5063 = INT64_MAX;
	uint16_t x5064 = 1U;
	static uint64_t t196 = 22952LLU;

    t196 = ((x5061|x5062)<<(x5063%x5064));

    if (t196 != 2404937293821LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x5065 = 1U;
	int8_t x5068 = -1;
	volatile uint32_t t197 = 11U;

    t197 = ((x5065|x5066)<<(x5067%x5068));

    if (t197 != 29U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x5142 = 6272U;
	uint32_t x5143 = UINT32_MAX;
	uint8_t x5144 = 3U;

    t198 = ((x5141|x5142)<<(x5143%x5144));

    if (t198 != 6276U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x5182 = INT32_MAX;
	static int8_t x5183 = INT8_MAX;
	uint16_t x5184 = 1U;
	volatile int32_t t199 = INT32_MAX;

    t199 = ((x5181|x5182)<<(x5183%x5184));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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

