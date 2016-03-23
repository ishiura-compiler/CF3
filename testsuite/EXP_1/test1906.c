
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

static int8_t x75 = 31;
static uint64_t x99 = 1LLU;
static int16_t x106 = -69;
int8_t x158 = INT8_MAX;
volatile uint32_t t5 = 954U;
uint16_t x173 = 5525U;
int32_t x174 = -1;
volatile int32_t t6 = 3;
volatile int8_t x185 = INT8_MIN;
int32_t t8 = 14;
volatile uint8_t x321 = 4U;
static int32_t t12 = 130142804;
static int64_t x432 = -95534LL;
uint8_t x551 = 0U;
int64_t x610 = INT64_MIN;
static uint64_t x624 = UINT64_MAX;
int32_t t20 = -41;
volatile uint32_t x647 = 3U;
volatile int32_t t21 = 81;
int64_t x706 = INT64_MAX;
volatile int64_t x708 = 6338904LL;
int16_t x789 = INT16_MIN;
int32_t t25 = 1045846115;
static int16_t x794 = 57;
static uint8_t x865 = UINT8_MAX;
uint16_t x1011 = 5U;
static int32_t t32 = -3927;
static volatile int32_t t33 = -16049579;
volatile int16_t x1066 = 148;
int32_t x1067 = 2;
int16_t x1068 = INT16_MIN;
int32_t t34 = 8119;
int64_t x1113 = 1985LL;
int16_t x1252 = -409;
uint64_t t38 = 521274565297LLU;
uint8_t x1347 = 23U;
int8_t x1377 = 1;
int16_t x1380 = 15825;
int32_t x1458 = INT32_MAX;
int64_t t41 = -342LL;
static uint32_t x1570 = 78851651U;
uint32_t x1572 = 89529541U;
int32_t x1594 = 434;
uint16_t x1668 = 30U;
uint8_t x1675 = 5U;
static int32_t x1676 = -594;
int64_t x1798 = INT64_MIN;
int32_t x1814 = -1;
int32_t x1848 = 191075;
uint16_t x1910 = UINT16_MAX;
int64_t x1912 = -1LL;
volatile int64_t t50 = 84082481915LL;
static uint8_t x1957 = 12U;
volatile uint64_t x1972 = 1461405310LLU;
volatile uint64_t t52 = 3911778862894958080LLU;
int8_t x2012 = -1;
int8_t x2067 = 1;
volatile uint8_t x2068 = UINT8_MAX;
int32_t t55 = -127049153;
uint8_t x2071 = 0U;
static int32_t x2097 = INT32_MIN;
int8_t x2106 = INT8_MIN;
int32_t t58 = -171;
uint16_t x2173 = 6U;
uint64_t x2174 = UINT64_MAX;
static uint32_t x2176 = 44U;
int64_t x2220 = -2073249792LL;
static volatile int64_t t61 = -277761806318LL;
int64_t x2270 = -5994LL;
int8_t x2321 = -56;
static uint32_t x2322 = 34U;
volatile int32_t t65 = 50026480;
static volatile int16_t x2325 = INT16_MIN;
uint16_t x2327 = 0U;
int32_t x2357 = 153136;
uint8_t x2424 = UINT8_MAX;
int32_t t69 = 5;
int16_t x2544 = INT16_MIN;
int32_t x2569 = 760;
uint8_t x2571 = 5U;
volatile uint64_t x2572 = 2709356802957564688LLU;
uint64_t x2581 = 603810241364LLU;
uint8_t x2584 = UINT8_MAX;
volatile uint8_t x2651 = 2U;
uint64_t x2785 = 4030596321LLU;
volatile int32_t x2788 = 3087105;
int64_t x2798 = INT64_MIN;
int32_t t79 = 4;
volatile int32_t t80 = 197;
static volatile int32_t x2877 = 562172526;
volatile int32_t x2878 = INT32_MIN;
uint32_t x2879 = 3U;
volatile uint8_t x2880 = 90U;
int16_t x2944 = 365;
uint8_t x3049 = 1U;
uint32_t x3106 = UINT32_MAX;
uint16_t x3107 = 3U;
uint8_t x3108 = 25U;
uint64_t x3121 = 11619LLU;
static uint16_t x3122 = UINT16_MAX;
static uint8_t x3134 = 7U;
volatile int32_t t88 = -1797678;
int32_t t89 = -67452294;
uint64_t x3209 = 2503951876572503LLU;
int16_t x3211 = 4;
uint8_t x3226 = UINT8_MAX;
uint16_t x3234 = 5U;
volatile int32_t x3238 = -1888;
volatile int16_t x3249 = INT16_MIN;
uint16_t x3252 = UINT16_MAX;
uint8_t x3278 = UINT8_MAX;
volatile int32_t x3322 = -46780852;
static volatile uint16_t x3348 = 1U;
uint32_t x3365 = 386473779U;
static volatile uint32_t t101 = 27439096U;
static uint16_t x3407 = 4U;
volatile int32_t t102 = 11977;
int8_t x3433 = INT8_MAX;
volatile int64_t x3438 = INT64_MAX;
uint64_t t105 = 0LLU;
int32_t x3599 = 1;
int8_t x3638 = 1;
int32_t t110 = 255173470;
int64_t x3768 = 919837682893278LL;
volatile int32_t x3772 = 28420;
int16_t x3793 = INT16_MAX;
int8_t x3796 = INT8_MIN;
int32_t t114 = -77361;
int16_t x3842 = INT16_MAX;
int16_t x3858 = -1;
volatile int16_t x3859 = 0;
int8_t x3860 = INT8_MIN;
uint16_t x4105 = 1046U;
uint64_t x4106 = 38031543579610LLU;
static int64_t x4247 = 12LL;
static volatile uint64_t x4253 = 1432396676LLU;
int64_t x4256 = INT64_MAX;
volatile int64_t t128 = 4337725555230LL;
uint16_t x4327 = 20U;
uint64_t t132 = 11301077LLU;
static int32_t x4380 = -1;
volatile int32_t t134 = 211245490;
uint64_t x4414 = 2978924588LLU;
volatile int32_t t135 = 20;
static uint32_t x4458 = UINT32_MAX;
volatile int64_t x4487 = 0LL;
int32_t t140 = -46243;
uint64_t x4606 = UINT64_MAX;
volatile int8_t x4608 = INT8_MIN;
static int32_t t141 = 1;
uint64_t x4687 = 1LLU;
uint32_t x4688 = 29537U;
volatile int64_t x4750 = INT64_MIN;
static int32_t x4805 = -834099;
uint16_t x4845 = 1800U;
int32_t x4885 = INT32_MIN;
volatile int32_t t152 = -86;
volatile int32_t x4953 = INT32_MAX;
volatile uint8_t x5066 = 2U;
volatile int64_t t156 = -608149281621LL;
volatile uint16_t x5148 = 1U;
int32_t t159 = 1;
int64_t x5285 = INT64_MIN;
int64_t x5410 = 4613793LL;
uint16_t x5441 = UINT16_MAX;
volatile int32_t x5442 = INT32_MAX;
int32_t x5444 = INT32_MAX;
uint8_t x5491 = 15U;
uint16_t x5511 = 15U;
static int8_t x5534 = 1;
int32_t x5535 = 5;
static volatile int32_t t167 = 498;
int16_t x5608 = INT16_MAX;
uint32_t x5738 = 450687339U;
volatile uint64_t t170 = 6LLU;
uint32_t t173 = 1U;
uint32_t x5781 = 504U;
int16_t x5801 = INT16_MIN;
volatile int8_t x5881 = 1;
int8_t x5915 = 28;
uint16_t x5921 = 14600U;
int8_t x5924 = 6;
uint8_t x5991 = 0U;
int16_t x5995 = 1;
uint8_t x5999 = 0U;
uint32_t x6213 = 85959294U;
static uint8_t x6258 = 19U;
static int32_t x6306 = -1;
int32_t x6308 = -1;
int32_t t186 = -565;
uint64_t x6337 = 55503173368758624LLU;
uint16_t x6338 = 41U;
static uint16_t x6390 = 148U;
uint64_t x6418 = 3362LLU;
int32_t t189 = 5;
uint8_t x6427 = 3U;
static int32_t x6435 = 8;
int16_t x6501 = 212;
int8_t x6502 = INT8_MAX;
volatile uint16_t x6503 = 1U;
static int8_t x6504 = -4;
int16_t x6536 = INT16_MIN;
int32_t t195 = 888644185;
int16_t x6601 = -1;
int64_t x6621 = 214745867799186947LL;


void f0(void) {
    	int32_t x49 = INT32_MIN;
	static volatile uint64_t x50 = 35359101156173LLU;
	uint32_t x51 = 0U;
	uint16_t x52 = 3752U;
	int32_t t0 = 492472114;

    t0 = (((x49<=x50)>>x51)-x52);

    if (t0 != -3752) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x61 = 1;
	uint8_t x62 = 0U;
	static int32_t x63 = 9;
	int64_t x64 = -1LL;
	static volatile int64_t t1 = 194LL;

    t1 = (((x61<=x62)>>x63)-x64);

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x73 = -882;
	int8_t x74 = INT8_MIN;
	int8_t x76 = -3;
	volatile int32_t t2 = 15709;

    t2 = (((x73<=x74)>>x75)-x76);

    if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x97 = INT16_MIN;
	static int32_t x98 = 2061714;
	int16_t x100 = INT16_MAX;
	volatile int32_t t3 = 2542;

    t3 = (((x97<=x98)>>x99)-x100);

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x105 = 3U;
	uint8_t x107 = 9U;
	static volatile int8_t x108 = INT8_MIN;
	volatile int32_t t4 = -117;

    t4 = (((x105<=x106)>>x107)-x108);

    if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x157 = -1LL;
	int8_t x159 = 14;
	uint32_t x160 = 11U;

    t5 = (((x157<=x158)>>x159)-x160);

    if (t5 != 4294967285U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x175 = 12U;
	int16_t x176 = -1;

    t6 = (((x173<=x174)>>x175)-x176);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x186 = UINT16_MAX;
	static uint8_t x187 = 0U;
	int8_t x188 = -1;
	int32_t t7 = 177;

    t7 = (((x185<=x186)>>x187)-x188);

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x197 = -1;
	volatile uint64_t x198 = UINT64_MAX;
	uint8_t x199 = 2U;
	static uint8_t x200 = 23U;

    t8 = (((x197<=x198)>>x199)-x200);

    if (t8 != -23) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x301 = INT32_MAX;
	static volatile int16_t x302 = -2445;
	int16_t x303 = 4;
	volatile int16_t x304 = INT16_MIN;
	int32_t t9 = 2026;

    t9 = (((x301<=x302)>>x303)-x304);

    if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x322 = 0;
	int16_t x323 = 9;
	int64_t x324 = 1705253966573513479LL;
	static volatile int64_t t10 = -88LL;

    t10 = (((x321<=x322)>>x323)-x324);

    if (t10 != -1705253966573513479LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x373 = -1LL;
	uint64_t x374 = 3413LLU;
	uint64_t x375 = 1LLU;
	uint64_t x376 = UINT64_MAX;
	uint64_t t11 = 10364591058063589LLU;

    t11 = (((x373<=x374)>>x375)-x376);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x385 = 668U;
	volatile int8_t x386 = 0;
	int8_t x387 = 0;
	int16_t x388 = INT16_MIN;

    t12 = (((x385<=x386)>>x387)-x388);

    if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x397 = INT64_MIN;
	int8_t x398 = -1;
	int32_t x399 = 1;
	int64_t x400 = 7570LL;
	static int64_t t13 = 128545LL;

    t13 = (((x397<=x398)>>x399)-x400);

    if (t13 != -7570LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x429 = UINT8_MAX;
	int16_t x430 = INT16_MIN;
	uint64_t x431 = 0LLU;
	int64_t t14 = 1854830245LL;

    t14 = (((x429<=x430)>>x431)-x432);

    if (t14 != 95534LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x497 = 40;
	uint16_t x498 = UINT16_MAX;
	volatile uint16_t x499 = 6U;
	int64_t x500 = 4338357575845001LL;
	volatile int64_t t15 = -82024791918029LL;

    t15 = (((x497<=x498)>>x499)-x500);

    if (t15 != -4338357575845001LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x529 = 108507099U;
	int32_t x530 = INT32_MIN;
	uint8_t x531 = 2U;
	static uint32_t x532 = UINT32_MAX;
	uint32_t t16 = 21U;

    t16 = (((x529<=x530)>>x531)-x532);

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x549 = INT8_MAX;
	volatile uint16_t x550 = 52U;
	int16_t x552 = INT16_MIN;
	volatile int32_t t17 = -251083321;

    t17 = (((x549<=x550)>>x551)-x552);

    if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x609 = INT16_MIN;
	volatile int32_t x611 = 1;
	static uint8_t x612 = 1U;
	volatile int32_t t18 = -27880978;

    t18 = (((x609<=x610)>>x611)-x612);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x621 = INT32_MAX;
	int64_t x622 = INT64_MIN;
	uint8_t x623 = 3U;
	volatile uint64_t t19 = 42859LLU;

    t19 = (((x621<=x622)>>x623)-x624);

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x633 = UINT8_MAX;
	int64_t x634 = INT64_MIN;
	int16_t x635 = 7;
	int8_t x636 = INT8_MAX;

    t20 = (((x633<=x634)>>x635)-x636);

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x645 = INT16_MIN;
	uint32_t x646 = UINT32_MAX;
	uint8_t x648 = UINT8_MAX;

    t21 = (((x645<=x646)>>x647)-x648);

    if (t21 != -255) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x673 = UINT32_MAX;
	int8_t x674 = INT8_MAX;
	uint16_t x675 = 28U;
	static int8_t x676 = -1;
	int32_t t22 = 31042;

    t22 = (((x673<=x674)>>x675)-x676);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x677 = -2;
	static uint64_t x678 = 114403274169369218LLU;
	static uint64_t x679 = 1LLU;
	volatile uint16_t x680 = 47U;
	int32_t t23 = 1266614;

    t23 = (((x677<=x678)>>x679)-x680);

    if (t23 != -47) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x705 = INT32_MIN;
	uint16_t x707 = 3U;
	volatile int64_t t24 = -5251971656LL;

    t24 = (((x705<=x706)>>x707)-x708);

    if (t24 != -6338904LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x790 = 11U;
	static int16_t x791 = 1;
	static int16_t x792 = -1;

    t25 = (((x789<=x790)>>x791)-x792);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x793 = INT64_MIN;
	uint32_t x795 = 2U;
	uint8_t x796 = UINT8_MAX;
	volatile int32_t t26 = -147366410;

    t26 = (((x793<=x794)>>x795)-x796);

    if (t26 != -255) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x849 = 15628657;
	int16_t x850 = 1531;
	int8_t x851 = 0;
	uint8_t x852 = UINT8_MAX;
	int32_t t27 = -6;

    t27 = (((x849<=x850)>>x851)-x852);

    if (t27 != -255) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x866 = -1;
	int16_t x867 = 1;
	int64_t x868 = -1505190LL;
	int64_t t28 = -11344591LL;

    t28 = (((x865<=x866)>>x867)-x868);

    if (t28 != 1505190LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x929 = INT32_MIN;
	int8_t x930 = INT8_MAX;
	static int16_t x931 = 1;
	uint16_t x932 = 11185U;
	int32_t t29 = 3;

    t29 = (((x929<=x930)>>x931)-x932);

    if (t29 != -11185) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x949 = INT32_MIN;
	volatile uint16_t x950 = 13U;
	static volatile int8_t x951 = 1;
	int64_t x952 = 1860396LL;
	static volatile int64_t t30 = 7818719500LL;

    t30 = (((x949<=x950)>>x951)-x952);

    if (t30 != -1860396LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x953 = UINT8_MAX;
	int16_t x954 = INT16_MIN;
	int8_t x955 = 5;
	uint16_t x956 = 0U;
	static volatile int32_t t31 = 593910;

    t31 = (((x953<=x954)>>x955)-x956);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x1009 = INT16_MAX;
	int16_t x1010 = INT16_MIN;
	volatile uint16_t x1012 = 20678U;

    t32 = (((x1009<=x1010)>>x1011)-x1012);

    if (t32 != -20678) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x1037 = 1;
	uint8_t x1038 = UINT8_MAX;
	int8_t x1039 = 1;
	volatile uint16_t x1040 = UINT16_MAX;

    t33 = (((x1037<=x1038)>>x1039)-x1040);

    if (t33 != -65535) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x1065 = INT16_MAX;

    t34 = (((x1065<=x1066)>>x1067)-x1068);

    if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1114 = 4;
	uint16_t x1115 = 20U;
	static int16_t x1116 = -5;
	static int32_t t35 = 130417;

    t35 = (((x1113<=x1114)>>x1115)-x1116);

    if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x1249 = INT64_MIN;
	static int8_t x1250 = 11;
	static int8_t x1251 = 1;
	int32_t t36 = -1200;

    t36 = (((x1249<=x1250)>>x1251)-x1252);

    if (t36 != 409) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1253 = -1;
	int8_t x1254 = 1;
	uint16_t x1255 = 0U;
	volatile uint8_t x1256 = 0U;
	int32_t t37 = 59;

    t37 = (((x1253<=x1254)>>x1255)-x1256);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1269 = UINT64_MAX;
	volatile int32_t x1270 = -1;
	volatile uint8_t x1271 = 10U;
	uint64_t x1272 = 4026LLU;

    t38 = (((x1269<=x1270)>>x1271)-x1272);

    if (t38 != 18446744073709547590LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1345 = 0U;
	volatile int8_t x1346 = INT8_MAX;
	static uint32_t x1348 = 0U;
	static uint32_t t39 = 122297609U;

    t39 = (((x1345<=x1346)>>x1347)-x1348);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1378 = 4;
	uint16_t x1379 = 8U;
	volatile int32_t t40 = 3870531;

    t40 = (((x1377<=x1378)>>x1379)-x1380);

    if (t40 != -15825) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x1457 = -1;
	static volatile int16_t x1459 = 1;
	static volatile int64_t x1460 = INT64_MAX;

    t41 = (((x1457<=x1458)>>x1459)-x1460);

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x1569 = INT32_MAX;
	int8_t x1571 = 0;
	uint32_t t42 = 406U;

    t42 = (((x1569<=x1570)>>x1571)-x1572);

    if (t42 != 4205437755U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x1593 = INT16_MAX;
	uint32_t x1595 = 28U;
	volatile uint32_t x1596 = 1190108004U;
	uint32_t t43 = 22884U;

    t43 = (((x1593<=x1594)>>x1595)-x1596);

    if (t43 != 3104859292U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x1665 = INT32_MIN;
	uint32_t x1666 = UINT32_MAX;
	volatile int16_t x1667 = 0;
	static int32_t t44 = 1;

    t44 = (((x1665<=x1666)>>x1667)-x1668);

    if (t44 != -29) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x1673 = INT64_MAX;
	static volatile int8_t x1674 = -55;
	volatile int32_t t45 = -562589408;

    t45 = (((x1673<=x1674)>>x1675)-x1676);

    if (t45 != 594) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x1797 = INT64_MIN;
	uint8_t x1799 = 2U;
	uint8_t x1800 = 11U;
	volatile int32_t t46 = 24;

    t46 = (((x1797<=x1798)>>x1799)-x1800);

    if (t46 != -11) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x1813 = 3522166846933667LLU;
	volatile uint16_t x1815 = 1U;
	int64_t x1816 = 590694490453161422LL;
	static volatile int64_t t47 = -7714975147656442LL;

    t47 = (((x1813<=x1814)>>x1815)-x1816);

    if (t47 != -590694490453161422LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x1837 = INT16_MIN;
	int32_t x1838 = -1;
	int8_t x1839 = 1;
	int32_t x1840 = -47215;
	int32_t t48 = -15;

    t48 = (((x1837<=x1838)>>x1839)-x1840);

    if (t48 != 47215) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x1845 = 0U;
	static volatile int8_t x1846 = 19;
	static uint32_t x1847 = 0U;
	static int32_t t49 = 0;

    t49 = (((x1845<=x1846)>>x1847)-x1848);

    if (t49 != -191074) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x1909 = -1LL;
	volatile int16_t x1911 = 2;

    t50 = (((x1909<=x1910)>>x1911)-x1912);

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1958 = INT32_MIN;
	int8_t x1959 = 11;
	int64_t x1960 = -1LL;
	volatile int64_t t51 = 118LL;

    t51 = (((x1957<=x1958)>>x1959)-x1960);

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x1969 = 6;
	volatile int8_t x1970 = INT8_MIN;
	static uint8_t x1971 = 9U;

    t52 = (((x1969<=x1970)>>x1971)-x1972);

    if (t52 != 18446744072248146306LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x2009 = -36349569;
	int16_t x2010 = INT16_MAX;
	uint16_t x2011 = 3U;
	volatile int32_t t53 = 1;

    t53 = (((x2009<=x2010)>>x2011)-x2012);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x2029 = 1;
	uint8_t x2030 = 23U;
	uint16_t x2031 = 13U;
	int64_t x2032 = -5671559660270LL;
	volatile int64_t t54 = -779247LL;

    t54 = (((x2029<=x2030)>>x2031)-x2032);

    if (t54 != 5671559660270LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x2065 = INT64_MIN;
	int32_t x2066 = -8387;

    t55 = (((x2065<=x2066)>>x2067)-x2068);

    if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x2069 = 157595;
	uint64_t x2070 = UINT64_MAX;
	static volatile int8_t x2072 = INT8_MIN;
	int32_t t56 = 1;

    t56 = (((x2069<=x2070)>>x2071)-x2072);

    if (t56 != 129) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x2098 = 1358U;
	static uint16_t x2099 = 9U;
	volatile int8_t x2100 = 10;
	int32_t t57 = 7095509;

    t57 = (((x2097<=x2098)>>x2099)-x2100);

    if (t57 != -10) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x2105 = UINT32_MAX;
	uint8_t x2107 = 9U;
	static int8_t x2108 = INT8_MAX;

    t58 = (((x2105<=x2106)>>x2107)-x2108);

    if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x2145 = -7;
	int8_t x2146 = INT8_MIN;
	int32_t x2147 = 15;
	int16_t x2148 = INT16_MIN;
	volatile int32_t t59 = 2;

    t59 = (((x2145<=x2146)>>x2147)-x2148);

    if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x2175 = 1U;
	static uint32_t t60 = 1004269449U;

    t60 = (((x2173<=x2174)>>x2175)-x2176);

    if (t60 != 4294967252U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x2217 = INT32_MIN;
	static int64_t x2218 = INT64_MAX;
	int32_t x2219 = 12;

    t61 = (((x2217<=x2218)>>x2219)-x2220);

    if (t61 != 2073249792LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x2229 = INT32_MIN;
	volatile int64_t x2230 = INT64_MIN;
	uint64_t x2231 = 27LLU;
	int16_t x2232 = -1;
	static volatile int32_t t62 = -30675178;

    t62 = (((x2229<=x2230)>>x2231)-x2232);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x2269 = -1;
	uint8_t x2271 = 1U;
	static volatile int8_t x2272 = INT8_MIN;
	static volatile int32_t t63 = -437;

    t63 = (((x2269<=x2270)>>x2271)-x2272);

    if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x2317 = INT32_MIN;
	volatile uint32_t x2318 = UINT32_MAX;
	int16_t x2319 = 0;
	uint64_t x2320 = UINT64_MAX;
	uint64_t t64 = 51680LLU;

    t64 = (((x2317<=x2318)>>x2319)-x2320);

    if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x2323 = 1U;
	uint8_t x2324 = 25U;

    t65 = (((x2321<=x2322)>>x2323)-x2324);

    if (t65 != -25) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x2326 = 26;
	static uint8_t x2328 = 0U;
	int32_t t66 = 1;

    t66 = (((x2325<=x2326)>>x2327)-x2328);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x2358 = 39LLU;
	static uint8_t x2359 = 0U;
	uint16_t x2360 = 1844U;
	int32_t t67 = -2612229;

    t67 = (((x2357<=x2358)>>x2359)-x2360);

    if (t67 != -1844) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x2381 = INT64_MIN;
	volatile uint16_t x2382 = 0U;
	uint16_t x2383 = 2U;
	static int64_t x2384 = -1LL;
	int64_t t68 = -1023990LL;

    t68 = (((x2381<=x2382)>>x2383)-x2384);

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x2421 = INT32_MIN;
	int32_t x2422 = INT32_MIN;
	volatile int8_t x2423 = 1;

    t69 = (((x2421<=x2422)>>x2423)-x2424);

    if (t69 != -255) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2505 = INT8_MIN;
	int8_t x2506 = -1;
	uint16_t x2507 = 4U;
	int16_t x2508 = INT16_MIN;
	static volatile int32_t t70 = 361749;

    t70 = (((x2505<=x2506)>>x2507)-x2508);

    if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x2541 = 0U;
	uint64_t x2542 = 698111425007255352LLU;
	uint8_t x2543 = 1U;
	int32_t t71 = 3055;

    t71 = (((x2541<=x2542)>>x2543)-x2544);

    if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x2570 = INT32_MAX;
	volatile uint64_t t72 = 713030142LLU;

    t72 = (((x2569<=x2570)>>x2571)-x2572);

    if (t72 != 15737387270751986928LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2582 = 11;
	volatile int8_t x2583 = 17;
	volatile int32_t t73 = -137212;

    t73 = (((x2581<=x2582)>>x2583)-x2584);

    if (t73 != -255) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x2621 = 33U;
	volatile uint8_t x2622 = 7U;
	int16_t x2623 = 22;
	uint64_t x2624 = UINT64_MAX;
	uint64_t t74 = 721120710332807LLU;

    t74 = (((x2621<=x2622)>>x2623)-x2624);

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x2649 = 2;
	int64_t x2650 = -31255181LL;
	uint8_t x2652 = 5U;
	static volatile int32_t t75 = -249325;

    t75 = (((x2649<=x2650)>>x2651)-x2652);

    if (t75 != -5) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x2669 = 77987814U;
	static int16_t x2670 = 606;
	uint8_t x2671 = 1U;
	int32_t x2672 = -1387071;
	volatile int32_t t76 = 0;

    t76 = (((x2669<=x2670)>>x2671)-x2672);

    if (t76 != 1387071) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x2777 = 40U;
	int16_t x2778 = INT16_MIN;
	int8_t x2779 = 28;
	int32_t x2780 = 1983021;
	volatile int32_t t77 = 942156;

    t77 = (((x2777<=x2778)>>x2779)-x2780);

    if (t77 != -1983021) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x2786 = UINT8_MAX;
	static uint8_t x2787 = 19U;
	int32_t t78 = -212559513;

    t78 = (((x2785<=x2786)>>x2787)-x2788);

    if (t78 != -3087105) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x2797 = INT8_MIN;
	int8_t x2799 = 8;
	static int32_t x2800 = -1;

    t79 = (((x2797<=x2798)>>x2799)-x2800);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x2801 = 6767696U;
	int32_t x2802 = -1;
	static uint8_t x2803 = 13U;
	int8_t x2804 = -33;

    t80 = (((x2801<=x2802)>>x2803)-x2804);

    if (t80 != 33) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x2809 = UINT16_MAX;
	static int32_t x2810 = INT32_MIN;
	static int8_t x2811 = 1;
	int8_t x2812 = 25;
	int32_t t81 = 139378506;

    t81 = (((x2809<=x2810)>>x2811)-x2812);

    if (t81 != -25) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t t82 = -268890;

    t82 = (((x2877<=x2878)>>x2879)-x2880);

    if (t82 != -90) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x2941 = INT64_MIN;
	int32_t x2942 = INT32_MIN;
	uint8_t x2943 = 15U;
	int32_t t83 = -8856;

    t83 = (((x2941<=x2942)>>x2943)-x2944);

    if (t83 != -365) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x2973 = 11;
	int16_t x2974 = -533;
	int16_t x2975 = 1;
	int32_t x2976 = INT32_MAX;
	int32_t t84 = 862593873;

    t84 = (((x2973<=x2974)>>x2975)-x2976);

    if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x3050 = UINT64_MAX;
	int8_t x3051 = 0;
	static int8_t x3052 = -1;
	volatile int32_t t85 = 2810719;

    t85 = (((x3049<=x3050)>>x3051)-x3052);

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x3105 = 59;
	volatile int32_t t86 = 1151582;

    t86 = (((x3105<=x3106)>>x3107)-x3108);

    if (t86 != -25) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x3123 = 7;
	volatile int64_t x3124 = -1LL;
	volatile int64_t t87 = -2879396048947351LL;

    t87 = (((x3121<=x3122)>>x3123)-x3124);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x3133 = 39284U;
	int16_t x3135 = 30;
	static volatile uint16_t x3136 = 0U;

    t88 = (((x3133<=x3134)>>x3135)-x3136);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x3153 = 2U;
	static int32_t x3154 = INT32_MIN;
	uint8_t x3155 = 7U;
	int8_t x3156 = INT8_MIN;

    t89 = (((x3153<=x3154)>>x3155)-x3156);

    if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x3193 = -50744088587148421LL;
	static volatile int16_t x3194 = INT16_MIN;
	uint8_t x3195 = 7U;
	static int64_t x3196 = -168826062205LL;
	int64_t t90 = -4266963971LL;

    t90 = (((x3193<=x3194)>>x3195)-x3196);

    if (t90 != 168826062205LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x3210 = -3326;
	volatile uint64_t x3212 = 197036378020508717LLU;
	static volatile uint64_t t91 = 10684LLU;

    t91 = (((x3209<=x3210)>>x3211)-x3212);

    if (t91 != 18249707695689042899LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x3225 = INT8_MAX;
	uint8_t x3227 = 8U;
	uint16_t x3228 = 30U;
	static int32_t t92 = 92942;

    t92 = (((x3225<=x3226)>>x3227)-x3228);

    if (t92 != -30) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x3233 = INT32_MIN;
	int8_t x3235 = 0;
	static uint64_t x3236 = 4217911891034958062LLU;
	static volatile uint64_t t93 = 8443626041542994LLU;

    t93 = (((x3233<=x3234)>>x3235)-x3236);

    if (t93 != 14228832182674593555LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x3237 = UINT64_MAX;
	int16_t x3239 = 1;
	int8_t x3240 = INT8_MIN;
	int32_t t94 = -1;

    t94 = (((x3237<=x3238)>>x3239)-x3240);

    if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x3250 = 312614LL;
	volatile int16_t x3251 = 2;
	int32_t t95 = 1;

    t95 = (((x3249<=x3250)>>x3251)-x3252);

    if (t95 != -65535) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x3277 = -1944547566291624LL;
	int8_t x3279 = 10;
	int64_t x3280 = INT64_MAX;
	static volatile int64_t t96 = -9486LL;

    t96 = (((x3277<=x3278)>>x3279)-x3280);

    if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x3285 = INT16_MIN;
	static uint8_t x3286 = 0U;
	static uint16_t x3287 = 0U;
	int32_t x3288 = -1;
	volatile int32_t t97 = 191986894;

    t97 = (((x3285<=x3286)>>x3287)-x3288);

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x3293 = INT64_MIN;
	int16_t x3294 = INT16_MAX;
	uint16_t x3295 = 0U;
	uint16_t x3296 = UINT16_MAX;
	int32_t t98 = -1586;

    t98 = (((x3293<=x3294)>>x3295)-x3296);

    if (t98 != -65534) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x3321 = UINT32_MAX;
	int8_t x3323 = 0;
	uint32_t x3324 = 1U;
	static uint32_t t99 = UINT32_MAX;

    t99 = (((x3321<=x3322)>>x3323)-x3324);

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x3345 = 4U;
	uint32_t x3346 = UINT32_MAX;
	int8_t x3347 = 14;
	volatile int32_t t100 = -3362404;

    t100 = (((x3345<=x3346)>>x3347)-x3348);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x3366 = 7U;
	uint8_t x3367 = 1U;
	uint32_t x3368 = UINT32_MAX;

    t101 = (((x3365<=x3366)>>x3367)-x3368);

    if (t101 != 1U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x3405 = 281542LLU;
	volatile int16_t x3406 = INT16_MIN;
	int16_t x3408 = -1;

    t102 = (((x3405<=x3406)>>x3407)-x3408);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x3434 = 1LLU;
	int8_t x3435 = 1;
	static int8_t x3436 = -1;
	int32_t t103 = 2211;

    t103 = (((x3433<=x3434)>>x3435)-x3436);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x3437 = INT32_MAX;
	uint16_t x3439 = 31U;
	int8_t x3440 = INT8_MAX;
	volatile int32_t t104 = -1103;

    t104 = (((x3437<=x3438)>>x3439)-x3440);

    if (t104 != -127) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x3529 = 1;
	uint8_t x3530 = 13U;
	uint8_t x3531 = 1U;
	uint64_t x3532 = UINT64_MAX;

    t105 = (((x3529<=x3530)>>x3531)-x3532);

    if (t105 != 1LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x3537 = 706U;
	static uint8_t x3538 = 6U;
	int8_t x3539 = 12;
	static volatile int32_t x3540 = 88026;
	int32_t t106 = 728;

    t106 = (((x3537<=x3538)>>x3539)-x3540);

    if (t106 != -88026) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x3597 = UINT8_MAX;
	static int8_t x3598 = INT8_MAX;
	uint32_t x3600 = 170785746U;
	volatile uint32_t t107 = 13857060U;

    t107 = (((x3597<=x3598)>>x3599)-x3600);

    if (t107 != 4124181550U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x3637 = INT8_MIN;
	volatile uint64_t x3639 = 15LLU;
	volatile uint16_t x3640 = 589U;
	int32_t t108 = 201732400;

    t108 = (((x3637<=x3638)>>x3639)-x3640);

    if (t108 != -589) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x3657 = INT32_MIN;
	volatile int16_t x3658 = -1;
	volatile uint8_t x3659 = 10U;
	int16_t x3660 = INT16_MIN;
	int32_t t109 = -1;

    t109 = (((x3657<=x3658)>>x3659)-x3660);

    if (t109 != 32768) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x3661 = INT16_MIN;
	static volatile uint8_t x3662 = UINT8_MAX;
	uint8_t x3663 = 1U;
	volatile int8_t x3664 = -28;

    t110 = (((x3661<=x3662)>>x3663)-x3664);

    if (t110 != 28) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x3681 = 6U;
	static int8_t x3682 = -1;
	int32_t x3683 = 0;
	uint8_t x3684 = 2U;
	int32_t t111 = -73477;

    t111 = (((x3681<=x3682)>>x3683)-x3684);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x3765 = 235947LL;
	int8_t x3766 = -1;
	uint8_t x3767 = 0U;
	int64_t t112 = 55675935LL;

    t112 = (((x3765<=x3766)>>x3767)-x3768);

    if (t112 != -919837682893278LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x3769 = UINT16_MAX;
	volatile uint32_t x3770 = UINT32_MAX;
	int64_t x3771 = 15LL;
	static int32_t t113 = 1;

    t113 = (((x3769<=x3770)>>x3771)-x3772);

    if (t113 != -28420) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x3794 = 441219421LL;
	uint16_t x3795 = 5U;

    t114 = (((x3793<=x3794)>>x3795)-x3796);

    if (t114 != 128) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x3841 = INT32_MIN;
	uint16_t x3843 = 1U;
	int32_t x3844 = 135963;
	static volatile int32_t t115 = 1539014;

    t115 = (((x3841<=x3842)>>x3843)-x3844);

    if (t115 != -135963) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x3857 = UINT32_MAX;
	volatile int32_t t116 = 188317319;

    t116 = (((x3857<=x3858)>>x3859)-x3860);

    if (t116 != 129) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3881 = INT32_MIN;
	int64_t x3882 = INT64_MIN;
	volatile int16_t x3883 = 0;
	static volatile uint8_t x3884 = 43U;
	volatile int32_t t117 = 57321335;

    t117 = (((x3881<=x3882)>>x3883)-x3884);

    if (t117 != -43) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x3885 = INT64_MIN;
	static int32_t x3886 = INT32_MIN;
	uint16_t x3887 = 6U;
	int8_t x3888 = -1;
	volatile int32_t t118 = -792;

    t118 = (((x3885<=x3886)>>x3887)-x3888);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x4005 = UINT64_MAX;
	uint64_t x4006 = 61002956681392593LLU;
	uint8_t x4007 = 7U;
	int16_t x4008 = 121;
	int32_t t119 = -1;

    t119 = (((x4005<=x4006)>>x4007)-x4008);

    if (t119 != -121) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x4029 = INT16_MAX;
	static int64_t x4030 = INT64_MIN;
	static int8_t x4031 = 1;
	static int8_t x4032 = INT8_MIN;
	int32_t t120 = 0;

    t120 = (((x4029<=x4030)>>x4031)-x4032);

    if (t120 != 128) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x4033 = -10;
	uint8_t x4034 = UINT8_MAX;
	uint16_t x4035 = 1U;
	static volatile int8_t x4036 = 0;
	int32_t t121 = -267;

    t121 = (((x4033<=x4034)>>x4035)-x4036);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x4061 = INT32_MAX;
	static int8_t x4062 = INT8_MIN;
	int16_t x4063 = 0;
	int16_t x4064 = INT16_MAX;
	int32_t t122 = 24;

    t122 = (((x4061<=x4062)>>x4063)-x4064);

    if (t122 != -32767) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x4107 = 1U;
	volatile int64_t x4108 = 67968158891LL;
	static int64_t t123 = 6LL;

    t123 = (((x4105<=x4106)>>x4107)-x4108);

    if (t123 != -67968158891LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x4121 = INT64_MIN;
	int64_t x4122 = -1649627LL;
	static uint16_t x4123 = 14U;
	int8_t x4124 = INT8_MAX;
	static volatile int32_t t124 = 3177216;

    t124 = (((x4121<=x4122)>>x4123)-x4124);

    if (t124 != -127) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x4133 = -1;
	int16_t x4134 = -1;
	static uint16_t x4135 = 29U;
	int64_t x4136 = INT64_MAX;
	volatile int64_t t125 = -365931LL;

    t125 = (((x4133<=x4134)>>x4135)-x4136);

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x4233 = INT8_MIN;
	int32_t x4234 = 1086249;
	volatile uint16_t x4235 = 8U;
	int8_t x4236 = -1;
	static volatile int32_t t126 = 2;

    t126 = (((x4233<=x4234)>>x4235)-x4236);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x4245 = 12160U;
	static int16_t x4246 = -4;
	int16_t x4248 = -2;
	volatile int32_t t127 = 197164771;

    t127 = (((x4245<=x4246)>>x4247)-x4248);

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x4254 = 6495874U;
	static volatile uint8_t x4255 = 1U;

    t128 = (((x4253<=x4254)>>x4255)-x4256);

    if (t128 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x4265 = 21827U;
	uint16_t x4266 = UINT16_MAX;
	int8_t x4267 = 0;
	volatile int8_t x4268 = INT8_MAX;
	int32_t t129 = 28485;

    t129 = (((x4265<=x4266)>>x4267)-x4268);

    if (t129 != -126) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x4317 = 6285U;
	int32_t x4318 = -1;
	uint8_t x4319 = 1U;
	int8_t x4320 = INT8_MIN;
	int32_t t130 = -389525687;

    t130 = (((x4317<=x4318)>>x4319)-x4320);

    if (t130 != 128) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x4325 = -1;
	volatile int8_t x4326 = INT8_MIN;
	static int32_t x4328 = 804723060;
	int32_t t131 = -107;

    t131 = (((x4325<=x4326)>>x4327)-x4328);

    if (t131 != -804723060) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x4345 = -18321459761529984LL;
	static uint8_t x4346 = 3U;
	int8_t x4347 = 2;
	uint64_t x4348 = 2522370LLU;

    t132 = (((x4345<=x4346)>>x4347)-x4348);

    if (t132 != 18446744073707029246LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x4373 = -16;
	int8_t x4374 = -58;
	uint8_t x4375 = 5U;
	uint16_t x4376 = UINT16_MAX;
	static volatile int32_t t133 = -1;

    t133 = (((x4373<=x4374)>>x4375)-x4376);

    if (t133 != -65535) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x4377 = INT8_MAX;
	static uint64_t x4378 = 698651107378LLU;
	uint16_t x4379 = 29U;

    t134 = (((x4377<=x4378)>>x4379)-x4380);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x4413 = -1;
	static int8_t x4415 = 0;
	int8_t x4416 = -3;

    t135 = (((x4413<=x4414)>>x4415)-x4416);

    if (t135 != 3) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x4433 = INT64_MIN;
	static volatile int16_t x4434 = -1;
	int8_t x4435 = 11;
	uint8_t x4436 = 12U;
	int32_t t136 = 3997835;

    t136 = (((x4433<=x4434)>>x4435)-x4436);

    if (t136 != -12) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x4457 = 11U;
	uint16_t x4459 = 2U;
	uint16_t x4460 = UINT16_MAX;
	int32_t t137 = 2216;

    t137 = (((x4457<=x4458)>>x4459)-x4460);

    if (t137 != -65535) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x4473 = -152LL;
	static int16_t x4474 = INT16_MIN;
	uint32_t x4475 = 29U;
	int64_t x4476 = -3997LL;
	int64_t t138 = -61550LL;

    t138 = (((x4473<=x4474)>>x4475)-x4476);

    if (t138 != 3997LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x4485 = 107LL;
	int32_t x4486 = 58;
	static uint16_t x4488 = UINT16_MAX;
	int32_t t139 = -47461365;

    t139 = (((x4485<=x4486)>>x4487)-x4488);

    if (t139 != -65535) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x4525 = UINT16_MAX;
	int32_t x4526 = INT32_MAX;
	static uint32_t x4527 = 9U;
	int32_t x4528 = -2987;

    t140 = (((x4525<=x4526)>>x4527)-x4528);

    if (t140 != 2987) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x4605 = 43U;
	static uint8_t x4607 = 15U;

    t141 = (((x4605<=x4606)>>x4607)-x4608);

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x4613 = 186U;
	int16_t x4614 = 3;
	int8_t x4615 = 1;
	static int16_t x4616 = INT16_MIN;
	int32_t t142 = -6344;

    t142 = (((x4613<=x4614)>>x4615)-x4616);

    if (t142 != 32768) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x4685 = 14121U;
	static int16_t x4686 = INT16_MAX;
	volatile uint32_t t143 = 554241103U;

    t143 = (((x4685<=x4686)>>x4687)-x4688);

    if (t143 != 4294937759U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x4729 = INT64_MIN;
	int32_t x4730 = INT32_MAX;
	static int64_t x4731 = 0LL;
	int16_t x4732 = INT16_MIN;
	int32_t t144 = 464476992;

    t144 = (((x4729<=x4730)>>x4731)-x4732);

    if (t144 != 32769) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x4749 = INT16_MIN;
	int64_t x4751 = 11LL;
	uint8_t x4752 = UINT8_MAX;
	int32_t t145 = -901357;

    t145 = (((x4749<=x4750)>>x4751)-x4752);

    if (t145 != -255) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x4753 = INT64_MIN;
	uint64_t x4754 = 125533945243068326LLU;
	static int8_t x4755 = 1;
	uint16_t x4756 = 170U;
	int32_t t146 = -587079;

    t146 = (((x4753<=x4754)>>x4755)-x4756);

    if (t146 != -170) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x4777 = INT64_MIN;
	int64_t x4778 = INT64_MIN;
	static volatile uint64_t x4779 = 2LLU;
	static int32_t x4780 = INT32_MAX;
	volatile int32_t t147 = -54;

    t147 = (((x4777<=x4778)>>x4779)-x4780);

    if (t147 != -2147483647) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x4806 = INT64_MIN;
	static uint8_t x4807 = 27U;
	int8_t x4808 = -6;
	volatile int32_t t148 = -8;

    t148 = (((x4805<=x4806)>>x4807)-x4808);

    if (t148 != 6) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x4821 = -10130;
	static int8_t x4822 = -1;
	uint8_t x4823 = 11U;
	int8_t x4824 = -22;
	volatile int32_t t149 = 72;

    t149 = (((x4821<=x4822)>>x4823)-x4824);

    if (t149 != 22) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x4846 = -1;
	volatile int16_t x4847 = 0;
	int8_t x4848 = -1;
	int32_t t150 = 29;

    t150 = (((x4845<=x4846)>>x4847)-x4848);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint8_t x4869 = 1U;
	int16_t x4870 = INT16_MAX;
	uint8_t x4871 = 1U;
	volatile int8_t x4872 = -1;
	static volatile int32_t t151 = -250781;

    t151 = (((x4869<=x4870)>>x4871)-x4872);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x4886 = UINT32_MAX;
	uint8_t x4887 = 1U;
	static int32_t x4888 = 206145;

    t152 = (((x4885<=x4886)>>x4887)-x4888);

    if (t152 != -206145) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x4941 = -76292628LL;
	volatile int8_t x4942 = -1;
	uint16_t x4943 = 1U;
	int16_t x4944 = INT16_MAX;
	int32_t t153 = 792;

    t153 = (((x4941<=x4942)>>x4943)-x4944);

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x4954 = INT32_MIN;
	int64_t x4955 = 0LL;
	int8_t x4956 = -1;
	int32_t t154 = -248029476;

    t154 = (((x4953<=x4954)>>x4955)-x4956);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x5065 = INT16_MAX;
	static int16_t x5067 = 0;
	uint16_t x5068 = 1377U;
	volatile int32_t t155 = 2694;

    t155 = (((x5065<=x5066)>>x5067)-x5068);

    if (t155 != -1377) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x5073 = INT8_MAX;
	volatile int8_t x5074 = INT8_MAX;
	static uint8_t x5075 = 5U;
	int64_t x5076 = 1LL;

    t156 = (((x5073<=x5074)>>x5075)-x5076);

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x5133 = -1;
	static volatile uint16_t x5134 = UINT16_MAX;
	int32_t x5135 = 31;
	uint64_t x5136 = 1022LLU;
	volatile uint64_t t157 = 1353264452127LLU;

    t157 = (((x5133<=x5134)>>x5135)-x5136);

    if (t157 != 18446744073709550594LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x5145 = -79;
	volatile int8_t x5146 = 0;
	static int64_t x5147 = 24LL;
	static volatile int32_t t158 = -790719156;

    t158 = (((x5145<=x5146)>>x5147)-x5148);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x5149 = 0U;
	static uint8_t x5150 = UINT8_MAX;
	uint16_t x5151 = 4U;
	int16_t x5152 = -230;

    t159 = (((x5149<=x5150)>>x5151)-x5152);

    if (t159 != 230) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x5286 = 52U;
	int8_t x5287 = 5;
	uint32_t x5288 = 272399079U;
	volatile uint32_t t160 = 23U;

    t160 = (((x5285<=x5286)>>x5287)-x5288);

    if (t160 != 4022568217U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x5329 = INT16_MIN;
	int8_t x5330 = INT8_MIN;
	int64_t x5331 = 0LL;
	volatile uint8_t x5332 = 16U;
	volatile int32_t t161 = 19;

    t161 = (((x5329<=x5330)>>x5331)-x5332);

    if (t161 != -15) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x5409 = INT32_MAX;
	int8_t x5411 = 1;
	int8_t x5412 = INT8_MIN;
	int32_t t162 = -5;

    t162 = (((x5409<=x5410)>>x5411)-x5412);

    if (t162 != 128) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x5443 = 19U;
	volatile int32_t t163 = -19664;

    t163 = (((x5441<=x5442)>>x5443)-x5444);

    if (t163 != -2147483647) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x5445 = 29635U;
	uint8_t x5446 = 1U;
	volatile uint8_t x5447 = 17U;
	uint64_t x5448 = 15099525391022691LLU;
	volatile uint64_t t164 = 8705760116LLU;

    t164 = (((x5445<=x5446)>>x5447)-x5448);

    if (t164 != 18431644548318528925LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x5489 = INT64_MIN;
	volatile int16_t x5490 = INT16_MIN;
	static int32_t x5492 = -1;
	int32_t t165 = 1;

    t165 = (((x5489<=x5490)>>x5491)-x5492);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x5509 = UINT16_MAX;
	uint16_t x5510 = UINT16_MAX;
	volatile int32_t x5512 = INT32_MAX;
	static int32_t t166 = -970371720;

    t166 = (((x5509<=x5510)>>x5511)-x5512);

    if (t166 != -2147483647) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x5533 = 3751385U;
	int16_t x5536 = -26;

    t167 = (((x5533<=x5534)>>x5535)-x5536);

    if (t167 != 26) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x5605 = 2;
	uint8_t x5606 = UINT8_MAX;
	int32_t x5607 = 28;
	volatile int32_t t168 = 83578320;

    t168 = (((x5605<=x5606)>>x5607)-x5608);

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x5713 = 46;
	int32_t x5714 = INT32_MIN;
	int32_t x5715 = 7;
	int64_t x5716 = -2324527459239244256LL;
	int64_t t169 = -541859486322063468LL;

    t169 = (((x5713<=x5714)>>x5715)-x5716);

    if (t169 != 2324527459239244256LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x5737 = INT16_MAX;
	static uint8_t x5739 = 16U;
	uint64_t x5740 = 28246LLU;

    t170 = (((x5737<=x5738)>>x5739)-x5740);

    if (t170 != 18446744073709523370LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x5741 = -1;
	int8_t x5742 = INT8_MIN;
	uint16_t x5743 = 16U;
	int16_t x5744 = 489;
	static int32_t t171 = -377197;

    t171 = (((x5741<=x5742)>>x5743)-x5744);

    if (t171 != -489) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x5773 = 24;
	volatile int32_t x5774 = INT32_MIN;
	volatile int8_t x5775 = 6;
	static int32_t x5776 = -7643;
	int32_t t172 = 1847299;

    t172 = (((x5773<=x5774)>>x5775)-x5776);

    if (t172 != 7643) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x5777 = 62721945U;
	int64_t x5778 = 756082589LL;
	uint8_t x5779 = 1U;
	uint32_t x5780 = 12339635U;

    t173 = (((x5777<=x5778)>>x5779)-x5780);

    if (t173 != 4282627661U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x5782 = 196172U;
	uint64_t x5783 = 4LLU;
	uint16_t x5784 = 231U;
	volatile int32_t t174 = 0;

    t174 = (((x5781<=x5782)>>x5783)-x5784);

    if (t174 != -231) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x5802 = 1U;
	int8_t x5803 = 12;
	int16_t x5804 = -1;
	static volatile int32_t t175 = -1937720;

    t175 = (((x5801<=x5802)>>x5803)-x5804);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x5882 = -388170LL;
	static int8_t x5883 = 0;
	int8_t x5884 = INT8_MAX;
	int32_t t176 = 54805;

    t176 = (((x5881<=x5882)>>x5883)-x5884);

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x5913 = -1;
	int16_t x5914 = INT16_MIN;
	int8_t x5916 = INT8_MIN;
	static volatile int32_t t177 = -31;

    t177 = (((x5913<=x5914)>>x5915)-x5916);

    if (t177 != 128) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x5922 = 174315U;
	static int8_t x5923 = 21;
	int32_t t178 = -16315;

    t178 = (((x5921<=x5922)>>x5923)-x5924);

    if (t178 != -6) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x5945 = INT8_MIN;
	static int64_t x5946 = INT64_MIN;
	int8_t x5947 = 2;
	int8_t x5948 = INT8_MIN;
	volatile int32_t t179 = -121;

    t179 = (((x5945<=x5946)>>x5947)-x5948);

    if (t179 != 128) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x5989 = 1893414844LLU;
	int64_t x5990 = 7562385999222LL;
	int32_t x5992 = 278;
	static volatile int32_t t180 = -514973;

    t180 = (((x5989<=x5990)>>x5991)-x5992);

    if (t180 != -277) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x5993 = INT8_MAX;
	int32_t x5994 = 35;
	static volatile int16_t x5996 = INT16_MIN;
	volatile int32_t t181 = -256724765;

    t181 = (((x5993<=x5994)>>x5995)-x5996);

    if (t181 != 32768) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x5997 = 4U;
	int16_t x5998 = -1;
	volatile uint16_t x6000 = 99U;
	int32_t t182 = 11556885;

    t182 = (((x5997<=x5998)>>x5999)-x6000);

    if (t182 != -99) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x6053 = 1;
	static int8_t x6054 = INT8_MAX;
	uint16_t x6055 = 10U;
	int32_t x6056 = -1;
	volatile int32_t t183 = -987781030;

    t183 = (((x6053<=x6054)>>x6055)-x6056);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x6214 = 0U;
	int8_t x6215 = 0;
	uint16_t x6216 = 221U;
	volatile int32_t t184 = 6623089;

    t184 = (((x6213<=x6214)>>x6215)-x6216);

    if (t184 != -221) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x6257 = 225LLU;
	volatile uint16_t x6259 = 7U;
	uint16_t x6260 = UINT16_MAX;
	int32_t t185 = -197197370;

    t185 = (((x6257<=x6258)>>x6259)-x6260);

    if (t185 != -65535) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x6305 = INT32_MIN;
	static int16_t x6307 = 1;

    t186 = (((x6305<=x6306)>>x6307)-x6308);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x6339 = 0U;
	uint32_t x6340 = 797652428U;
	volatile uint32_t t187 = 1U;

    t187 = (((x6337<=x6338)>>x6339)-x6340);

    if (t187 != 3497314868U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x6389 = 145;
	int16_t x6391 = 2;
	static volatile uint64_t x6392 = UINT64_MAX;
	volatile uint64_t t188 = 1934404416LLU;

    t188 = (((x6389<=x6390)>>x6391)-x6392);

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x6417 = INT32_MAX;
	int32_t x6419 = 1;
	int16_t x6420 = 3545;

    t189 = (((x6417<=x6418)>>x6419)-x6420);

    if (t189 != -3545) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x6425 = INT64_MIN;
	static int8_t x6426 = INT8_MAX;
	static volatile uint64_t x6428 = 81190LLU;
	uint64_t t190 = 4068875710961LLU;

    t190 = (((x6425<=x6426)>>x6427)-x6428);

    if (t190 != 18446744073709470426LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x6433 = UINT16_MAX;
	static uint64_t x6434 = 7007954945LLU;
	int64_t x6436 = -1LL;
	int64_t t191 = -6LL;

    t191 = (((x6433<=x6434)>>x6435)-x6436);

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t t192 = 387;

    t192 = (((x6501<=x6502)>>x6503)-x6504);

    if (t192 != 4) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x6505 = INT8_MIN;
	volatile uint16_t x6506 = UINT16_MAX;
	int8_t x6507 = 16;
	static int16_t x6508 = 3267;
	volatile int32_t t193 = 31;

    t193 = (((x6505<=x6506)>>x6507)-x6508);

    if (t193 != -3267) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x6521 = -1;
	uint64_t x6522 = UINT64_MAX;
	static uint8_t x6523 = 9U;
	int16_t x6524 = 107;
	int32_t t194 = 301664;

    t194 = (((x6521<=x6522)>>x6523)-x6524);

    if (t194 != -107) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x6533 = INT16_MIN;
	static uint32_t x6534 = UINT32_MAX;
	volatile uint8_t x6535 = 4U;

    t195 = (((x6533<=x6534)>>x6535)-x6536);

    if (t195 != 32768) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x6537 = INT64_MIN;
	int64_t x6538 = INT64_MIN;
	uint16_t x6539 = 7U;
	int16_t x6540 = -3357;
	static int32_t t196 = 1;

    t196 = (((x6537<=x6538)>>x6539)-x6540);

    if (t196 != 3357) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x6553 = UINT16_MAX;
	uint16_t x6554 = UINT16_MAX;
	static uint8_t x6555 = 0U;
	static uint32_t x6556 = 45U;
	volatile uint32_t t197 = 4U;

    t197 = (((x6553<=x6554)>>x6555)-x6556);

    if (t197 != 4294967252U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x6602 = INT32_MIN;
	uint8_t x6603 = 0U;
	volatile int16_t x6604 = INT16_MIN;
	volatile int32_t t198 = 111804588;

    t198 = (((x6601<=x6602)>>x6603)-x6604);

    if (t198 != 32768) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x6622 = INT32_MIN;
	volatile int16_t x6623 = 0;
	uint16_t x6624 = 43U;
	int32_t t199 = 110189164;

    t199 = (((x6621<=x6622)>>x6623)-x6624);

    if (t199 != -43) { NG(); } else { ; }
	
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

