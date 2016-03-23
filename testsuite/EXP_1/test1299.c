
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

int8_t x34 = -1;
uint8_t x100 = 1U;
int64_t x222 = -1LL;
int8_t x223 = -1;
int32_t x243 = -1;
int8_t x280 = 2;
int32_t t8 = 4082;
uint16_t x388 = 0U;
int64_t x393 = INT64_MAX;
volatile int64_t x396 = 1LL;
int32_t t10 = 64647896;
uint32_t x424 = 0U;
int32_t x434 = INT32_MIN;
volatile int32_t t12 = 45;
static uint32_t x478 = 5254U;
int64_t x499 = INT64_MAX;
volatile uint16_t x526 = UINT16_MAX;
int32_t t15 = 100;
volatile int64_t x533 = INT64_MIN;
uint32_t x535 = 3U;
int16_t x584 = 5;
static int8_t x670 = -14;
int32_t t20 = 405;
int8_t x677 = 0;
volatile int8_t x680 = 0;
int32_t x742 = 2029197;
static int32_t x745 = 188;
int8_t x749 = 5;
volatile int16_t x750 = -1;
volatile int32_t t26 = 1;
static int16_t x853 = 0;
static uint64_t x854 = 1223592296LLU;
volatile int8_t x855 = 1;
int32_t t27 = 2;
static volatile uint64_t x857 = UINT64_MAX;
int8_t x923 = INT8_MIN;
int32_t t30 = -11;
volatile int64_t x993 = INT64_MIN;
int8_t x994 = INT8_MAX;
volatile int64_t x995 = INT64_MIN;
static int64_t x1161 = -1LL;
int32_t x1209 = INT32_MAX;
volatile int32_t t37 = 56587;
int16_t x1319 = INT16_MAX;
int32_t t40 = 63;
static volatile int64_t x1394 = -19296982195466616LL;
static volatile int32_t t43 = -1520;
uint32_t x1415 = UINT32_MAX;
static int32_t x1430 = 1;
int32_t t45 = 0;
int64_t x1510 = -1LL;
uint8_t x1526 = 8U;
int32_t t49 = 24973163;
uint16_t x1565 = 8990U;
volatile uint16_t x1567 = 1U;
static uint16_t x1568 = 13U;
int64_t x1610 = INT64_MIN;
int32_t x1611 = -220;
uint16_t x1626 = UINT16_MAX;
int8_t x1631 = INT8_MIN;
static volatile int8_t x1632 = 5;
int64_t x1725 = 3258849644188258LL;
int32_t t58 = 105192040;
uint64_t x1859 = 922323560030LLU;
int32_t t59 = 1036206;
int32_t t61 = 32576;
int16_t x2070 = INT16_MAX;
static int8_t x2072 = 0;
int16_t x2125 = -1888;
uint8_t x2128 = 27U;
volatile int32_t t69 = -18;
uint8_t x2261 = UINT8_MAX;
static int32_t x2262 = -1;
uint64_t x2299 = 4LLU;
int8_t x2335 = INT8_MIN;
volatile int32_t t74 = 498;
int8_t x2505 = INT8_MIN;
int64_t x2507 = INT64_MAX;
uint8_t x2538 = UINT8_MAX;
static int64_t x2539 = -256291372270125566LL;
volatile int64_t x2549 = 721900732179458284LL;
int32_t t79 = -3;
volatile int32_t t80 = -1;
int32_t x2614 = -2009;
uint8_t x2636 = 1U;
int32_t t82 = 716;
uint8_t x2658 = 1U;
volatile int32_t t84 = -519;
volatile int32_t t86 = 95261;
uint8_t x2778 = 126U;
int32_t t88 = -760;
static volatile int16_t x2847 = 635;
uint8_t x2848 = 1U;
int64_t x2866 = 5671456048LL;
int8_t x2904 = 2;
int16_t x3065 = 1;
static int8_t x3067 = INT8_MAX;
uint8_t x3094 = 62U;
uint16_t x3096 = 0U;
static uint16_t x3252 = 19U;
volatile int16_t x3357 = -1;
int32_t x3359 = -1;
uint32_t x3362 = UINT32_MAX;
int64_t x3437 = 348LL;
static int16_t x3439 = 2;
int16_t x3484 = 1;
volatile int32_t t108 = 104992;
uint16_t x3532 = 1U;
volatile int32_t t111 = 9825340;
uint16_t x3576 = 0U;
static volatile uint32_t x3598 = UINT32_MAX;
uint16_t x3600 = 1U;
volatile uint16_t x3652 = 0U;
int32_t t115 = 2;
int16_t x3686 = INT16_MAX;
volatile int32_t t117 = 6392;
uint8_t x3740 = 3U;
int32_t t120 = 34682961;
int32_t x3805 = INT32_MAX;
int16_t x3806 = -7;
static volatile int16_t x3861 = 2869;
int32_t x3864 = 2;
static int16_t x3894 = INT16_MAX;
volatile int32_t t125 = 28457094;
uint64_t x4126 = UINT64_MAX;
int32_t x4127 = -1;
int32_t t128 = 2082147;
int8_t x4135 = -1;
int32_t x4286 = -3179085;
int64_t x4291 = 51LL;
int8_t x4306 = 0;
uint8_t x4308 = 18U;
uint64_t x4350 = 6444LLU;
int8_t x4384 = 0;
uint8_t x4439 = UINT8_MAX;
volatile int32_t x4440 = 4;
volatile int32_t t138 = -69145051;
int64_t x4487 = -7522165497533LL;
int64_t x4507 = -1LL;
static int64_t x4514 = -1LL;
int8_t x4516 = 0;
int16_t x4519 = INT16_MIN;
static uint8_t x4520 = 19U;
volatile int32_t t142 = 41964;
int8_t x4580 = 1;
int64_t x4601 = -1LL;
int8_t x4603 = INT8_MIN;
static uint8_t x4604 = 1U;
volatile int64_t x4613 = INT64_MAX;
uint32_t x4615 = UINT32_MAX;
static uint64_t x4662 = 198786548865LLU;
volatile uint32_t x4699 = 3435U;
int32_t t151 = -1;
uint16_t x4786 = 117U;
volatile int8_t x4787 = INT8_MIN;
uint8_t x4792 = 6U;
int8_t x4820 = 1;
int8_t x4821 = 1;
int8_t x4824 = 1;
volatile int32_t t158 = 898611;
int64_t x4854 = 1021431044949943LL;
int16_t x4855 = INT16_MIN;
uint32_t x4856 = 2U;
uint32_t x4873 = UINT32_MAX;
int8_t x4881 = -1;
int32_t t162 = -4983603;
static volatile int64_t x4892 = 25LL;
int32_t t163 = -399;
int16_t x4934 = -3462;
int32_t x4993 = INT32_MIN;
int32_t x5094 = -1;
int32_t x5095 = 254572;
int32_t x5108 = 11;
volatile int32_t t168 = -719867;
int8_t x5151 = -1;
int32_t t169 = -23;
int64_t x5179 = INT64_MIN;
volatile int8_t x5194 = INT8_MAX;
uint8_t x5248 = 15U;
int16_t x5318 = -60;
static int16_t x5331 = INT16_MIN;
int16_t x5363 = INT16_MIN;
static int8_t x5373 = 0;
int32_t t177 = -109809;
static volatile int8_t x5399 = INT8_MIN;
static int8_t x5400 = 0;
volatile int32_t x5446 = INT32_MAX;
static int32_t t181 = -3331;
uint8_t x5577 = 2U;
int32_t t183 = 4;
int8_t x5641 = -1;
volatile int32_t t186 = -52088566;
uint32_t x5827 = UINT32_MAX;
volatile int32_t x5867 = -1;
uint64_t x5927 = UINT64_MAX;
static int32_t t189 = -295493;
static volatile int32_t t192 = 1392617;
int32_t x6074 = INT32_MIN;
static int16_t x6076 = 1;
uint8_t x6216 = 18U;
volatile int32_t t195 = -12269;
int32_t x6245 = INT32_MIN;
int32_t x6337 = INT32_MAX;
volatile int8_t x6339 = INT8_MIN;
uint16_t x6352 = 31U;


void f0(void) {
    	static volatile uint16_t x1 = UINT16_MAX;
	int32_t x2 = 0;
	static int64_t x3 = INT64_MIN;
	uint16_t x4 = 0U;
	volatile int32_t t0 = 11837;

    t0 = (((x1!=x2)>x3)>>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x33 = INT16_MIN;
	uint16_t x35 = 25U;
	volatile int8_t x36 = 0;
	volatile int32_t t1 = -2964413;

    t1 = (((x33!=x34)>x35)>>x36);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x53 = 199182;
	volatile int64_t x54 = INT64_MAX;
	static volatile int32_t x55 = -2;
	int16_t x56 = 1;
	volatile int32_t t2 = 54064;

    t2 = (((x53!=x54)>x55)>>x56);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x77 = INT32_MIN;
	static int8_t x78 = -1;
	static volatile int64_t x79 = -1LL;
	static uint8_t x80 = 5U;
	int32_t t3 = 0;

    t3 = (((x77!=x78)>x79)>>x80);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x97 = INT32_MIN;
	int64_t x98 = 45105828LL;
	uint64_t x99 = 0LLU;
	volatile int32_t t4 = -84428683;

    t4 = (((x97!=x98)>x99)>>x100);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x145 = INT16_MIN;
	uint16_t x146 = 7030U;
	uint64_t x147 = UINT64_MAX;
	volatile uint8_t x148 = 1U;
	int32_t t5 = 5797;

    t5 = (((x145!=x146)>x147)>>x148);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x221 = INT16_MIN;
	uint8_t x224 = 4U;
	static int32_t t6 = 2;

    t6 = (((x221!=x222)>x223)>>x224);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x241 = 1U;
	int8_t x242 = 12;
	uint8_t x244 = 7U;
	volatile int32_t t7 = -1104;

    t7 = (((x241!=x242)>x243)>>x244);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x277 = INT16_MAX;
	uint64_t x278 = 4066306847LLU;
	uint8_t x279 = UINT8_MAX;

    t8 = (((x277!=x278)>x279)>>x280);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x385 = INT32_MIN;
	int64_t x386 = -14LL;
	uint8_t x387 = UINT8_MAX;
	volatile int32_t t9 = -266;

    t9 = (((x385!=x386)>x387)>>x388);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x394 = -575;
	static int32_t x395 = -2516215;

    t10 = (((x393!=x394)>x395)>>x396);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MAX;
	int32_t x423 = INT32_MIN;
	volatile int32_t t11 = 157;

    t11 = (((x421!=x422)>x423)>>x424);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x433 = 1U;
	uint64_t x435 = 2264919984129375533LLU;
	int16_t x436 = 1;

    t12 = (((x433!=x434)>x435)>>x436);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x477 = 4499U;
	int8_t x479 = -1;
	int16_t x480 = 29;
	static int32_t t13 = 143;

    t13 = (((x477!=x478)>x479)>>x480);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x497 = INT16_MIN;
	int8_t x498 = INT8_MIN;
	static volatile int8_t x500 = 0;
	volatile int32_t t14 = -289504;

    t14 = (((x497!=x498)>x499)>>x500);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x525 = 222561295U;
	static int16_t x527 = INT16_MIN;
	uint8_t x528 = 1U;

    t15 = (((x525!=x526)>x527)>>x528);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x534 = -1LL;
	uint8_t x536 = 11U;
	static volatile int32_t t16 = -6;

    t16 = (((x533!=x534)>x535)>>x536);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x569 = 210U;
	volatile int32_t x570 = -89784;
	int16_t x571 = 968;
	int8_t x572 = 5;
	int32_t t17 = -24462869;

    t17 = (((x569!=x570)>x571)>>x572);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x581 = 5U;
	int32_t x582 = 4;
	int16_t x583 = 1;
	volatile int32_t t18 = -2429;

    t18 = (((x581!=x582)>x583)>>x584);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x589 = INT64_MAX;
	uint8_t x590 = 0U;
	uint32_t x591 = 28433389U;
	static uint8_t x592 = 22U;
	volatile int32_t t19 = 6877;

    t19 = (((x589!=x590)>x591)>>x592);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x669 = INT16_MAX;
	uint16_t x671 = UINT16_MAX;
	volatile uint8_t x672 = 1U;

    t20 = (((x669!=x670)>x671)>>x672);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x678 = INT8_MIN;
	int64_t x679 = -1LL;
	volatile int32_t t21 = 7;

    t21 = (((x677!=x678)>x679)>>x680);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x733 = INT16_MIN;
	int8_t x734 = INT8_MIN;
	uint64_t x735 = 17464LLU;
	int8_t x736 = 0;
	int32_t t22 = 13125230;

    t22 = (((x733!=x734)>x735)>>x736);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x741 = INT16_MIN;
	volatile uint8_t x743 = UINT8_MAX;
	static int64_t x744 = 29LL;
	volatile int32_t t23 = 107;

    t23 = (((x741!=x742)>x743)>>x744);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x746 = 18127699;
	uint16_t x747 = 1735U;
	uint8_t x748 = 1U;
	int32_t t24 = 124876;

    t24 = (((x745!=x746)>x747)>>x748);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x751 = INT64_MIN;
	int16_t x752 = 6;
	static int32_t t25 = 56576337;

    t25 = (((x749!=x750)>x751)>>x752);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x773 = -2;
	int64_t x774 = 51042592LL;
	static int16_t x775 = INT16_MAX;
	volatile uint8_t x776 = 10U;

    t26 = (((x773!=x774)>x775)>>x776);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x856 = 3U;

    t27 = (((x853!=x854)>x855)>>x856);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x858 = 7164;
	volatile uint8_t x859 = 18U;
	volatile uint8_t x860 = 25U;
	volatile int32_t t28 = 55547;

    t28 = (((x857!=x858)>x859)>>x860);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x921 = INT8_MAX;
	uint8_t x922 = 44U;
	int16_t x924 = 0;
	volatile int32_t t29 = 0;

    t29 = (((x921!=x922)>x923)>>x924);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x957 = -1;
	int64_t x958 = -855516114220443219LL;
	volatile int8_t x959 = -1;
	int64_t x960 = 10LL;

    t30 = (((x957!=x958)>x959)>>x960);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x973 = UINT8_MAX;
	uint32_t x974 = 11U;
	int16_t x975 = 1162;
	volatile int8_t x976 = 8;
	volatile int32_t t31 = -1;

    t31 = (((x973!=x974)>x975)>>x976);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x981 = -1;
	volatile uint8_t x982 = 8U;
	uint8_t x983 = 13U;
	uint16_t x984 = 6U;
	int32_t t32 = 44455;

    t32 = (((x981!=x982)>x983)>>x984);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x989 = 332021U;
	volatile int8_t x990 = INT8_MIN;
	volatile uint16_t x991 = UINT16_MAX;
	static int64_t x992 = 0LL;
	int32_t t33 = -579;

    t33 = (((x989!=x990)>x991)>>x992);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x996 = 0U;
	volatile int32_t t34 = -7;

    t34 = (((x993!=x994)>x995)>>x996);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x1117 = INT16_MIN;
	int16_t x1118 = INT16_MAX;
	volatile uint16_t x1119 = UINT16_MAX;
	uint8_t x1120 = 16U;
	volatile int32_t t35 = -119522376;

    t35 = (((x1117!=x1118)>x1119)>>x1120);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1162 = 3935678;
	int16_t x1163 = -1;
	int8_t x1164 = 10;
	static volatile int32_t t36 = 5855610;

    t36 = (((x1161!=x1162)>x1163)>>x1164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1210 = -1;
	volatile int64_t x1211 = 97954665LL;
	int16_t x1212 = 3;

    t37 = (((x1209!=x1210)>x1211)>>x1212);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x1241 = INT64_MIN;
	int16_t x1242 = INT16_MAX;
	uint8_t x1243 = 1U;
	static uint64_t x1244 = 14LLU;
	volatile int32_t t38 = 12;

    t38 = (((x1241!=x1242)>x1243)>>x1244);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1309 = -1LL;
	int16_t x1310 = INT16_MIN;
	int32_t x1311 = 1356104;
	int16_t x1312 = 13;
	volatile int32_t t39 = -24031664;

    t39 = (((x1309!=x1310)>x1311)>>x1312);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x1317 = 9U;
	static int8_t x1318 = -11;
	int16_t x1320 = 3;

    t40 = (((x1317!=x1318)>x1319)>>x1320);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1385 = -240;
	uint32_t x1386 = UINT32_MAX;
	int64_t x1387 = INT64_MIN;
	volatile uint8_t x1388 = 5U;
	volatile int32_t t41 = 3;

    t41 = (((x1385!=x1386)>x1387)>>x1388);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x1393 = 202602U;
	volatile int32_t x1395 = INT32_MAX;
	uint8_t x1396 = 0U;
	int32_t t42 = 0;

    t42 = (((x1393!=x1394)>x1395)>>x1396);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x1405 = INT16_MIN;
	volatile int64_t x1406 = -266787891LL;
	int8_t x1407 = INT8_MIN;
	int32_t x1408 = 30;

    t43 = (((x1405!=x1406)>x1407)>>x1408);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x1413 = -27;
	volatile int64_t x1414 = INT64_MIN;
	volatile uint8_t x1416 = 1U;
	volatile int32_t t44 = 0;

    t44 = (((x1413!=x1414)>x1415)>>x1416);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x1429 = -2784204181750717418LL;
	volatile uint16_t x1431 = UINT16_MAX;
	volatile uint8_t x1432 = 0U;

    t45 = (((x1429!=x1430)>x1431)>>x1432);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x1509 = UINT16_MAX;
	int64_t x1511 = INT64_MAX;
	uint8_t x1512 = 25U;
	int32_t t46 = -116388254;

    t46 = (((x1509!=x1510)>x1511)>>x1512);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x1513 = INT8_MIN;
	int16_t x1514 = -1;
	static int16_t x1515 = INT16_MAX;
	static uint8_t x1516 = 0U;
	int32_t t47 = 29165474;

    t47 = (((x1513!=x1514)>x1515)>>x1516);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x1525 = INT8_MIN;
	static int32_t x1527 = INT32_MIN;
	uint8_t x1528 = 4U;
	volatile int32_t t48 = 848;

    t48 = (((x1525!=x1526)>x1527)>>x1528);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1553 = INT8_MIN;
	volatile uint16_t x1554 = 0U;
	volatile int32_t x1555 = 1;
	uint16_t x1556 = 24U;

    t49 = (((x1553!=x1554)>x1555)>>x1556);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x1566 = -60003690487672285LL;
	int32_t t50 = -14815615;

    t50 = (((x1565!=x1566)>x1567)>>x1568);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x1609 = INT8_MAX;
	int8_t x1612 = 1;
	int32_t t51 = -3121;

    t51 = (((x1609!=x1610)>x1611)>>x1612);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x1625 = -1;
	uint8_t x1627 = 1U;
	int8_t x1628 = 2;
	int32_t t52 = -1;

    t52 = (((x1625!=x1626)>x1627)>>x1628);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x1629 = 65909769LLU;
	volatile int8_t x1630 = INT8_MAX;
	volatile int32_t t53 = -3;

    t53 = (((x1629!=x1630)>x1631)>>x1632);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x1637 = INT16_MIN;
	int8_t x1638 = -1;
	int32_t x1639 = 3735;
	uint16_t x1640 = 8U;
	int32_t t54 = 337095848;

    t54 = (((x1637!=x1638)>x1639)>>x1640);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x1726 = 138771U;
	static int8_t x1727 = 1;
	uint32_t x1728 = 14U;
	int32_t t55 = -93239;

    t55 = (((x1725!=x1726)>x1727)>>x1728);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x1761 = -1;
	static int8_t x1762 = 3;
	volatile int32_t x1763 = INT32_MIN;
	static int32_t x1764 = 1;
	volatile int32_t t56 = -161126043;

    t56 = (((x1761!=x1762)>x1763)>>x1764);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x1769 = 22997800LLU;
	int32_t x1770 = -1;
	int16_t x1771 = INT16_MIN;
	int8_t x1772 = 1;
	volatile int32_t t57 = 19;

    t57 = (((x1769!=x1770)>x1771)>>x1772);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x1805 = 5U;
	int16_t x1806 = INT16_MAX;
	volatile int16_t x1807 = INT16_MIN;
	uint64_t x1808 = 0LLU;

    t58 = (((x1805!=x1806)>x1807)>>x1808);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x1857 = 5U;
	static int32_t x1858 = -35;
	uint8_t x1860 = 30U;

    t59 = (((x1857!=x1858)>x1859)>>x1860);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x1993 = INT32_MIN;
	uint8_t x1994 = 8U;
	static uint32_t x1995 = 25369U;
	uint8_t x1996 = 17U;
	volatile int32_t t60 = 1;

    t60 = (((x1993!=x1994)>x1995)>>x1996);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x2013 = -1;
	int8_t x2014 = -1;
	int32_t x2015 = INT32_MAX;
	uint16_t x2016 = 13U;

    t61 = (((x2013!=x2014)>x2015)>>x2016);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x2017 = UINT64_MAX;
	static uint32_t x2018 = 3U;
	static int32_t x2019 = INT32_MIN;
	uint8_t x2020 = 13U;
	int32_t t62 = 1;

    t62 = (((x2017!=x2018)>x2019)>>x2020);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x2053 = -1;
	volatile int32_t x2054 = INT32_MIN;
	static int32_t x2055 = INT32_MIN;
	uint8_t x2056 = 27U;
	int32_t t63 = 30666952;

    t63 = (((x2053!=x2054)>x2055)>>x2056);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x2069 = 61443118LLU;
	int8_t x2071 = -1;
	static volatile int32_t t64 = 13;

    t64 = (((x2069!=x2070)>x2071)>>x2072);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x2085 = 41;
	int64_t x2086 = INT64_MIN;
	volatile int64_t x2087 = 1111191766LL;
	static uint8_t x2088 = 5U;
	int32_t t65 = 5785;

    t65 = (((x2085!=x2086)>x2087)>>x2088);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x2126 = -1609825;
	volatile int64_t x2127 = INT64_MIN;
	volatile int32_t t66 = -7;

    t66 = (((x2125!=x2126)>x2127)>>x2128);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x2157 = -1;
	static volatile uint8_t x2158 = 1U;
	uint16_t x2159 = 0U;
	uint32_t x2160 = 3U;
	volatile int32_t t67 = 424405;

    t67 = (((x2157!=x2158)>x2159)>>x2160);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x2213 = INT64_MIN;
	int64_t x2214 = INT64_MIN;
	static uint32_t x2215 = 21U;
	uint8_t x2216 = 2U;
	int32_t t68 = 0;

    t68 = (((x2213!=x2214)>x2215)>>x2216);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x2237 = 18946U;
	static volatile int8_t x2238 = INT8_MAX;
	uint8_t x2239 = 0U;
	static volatile int8_t x2240 = 4;

    t69 = (((x2237!=x2238)>x2239)>>x2240);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x2263 = INT64_MAX;
	int32_t x2264 = 0;
	volatile int32_t t70 = 14563127;

    t70 = (((x2261!=x2262)>x2263)>>x2264);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x2297 = UINT64_MAX;
	uint64_t x2298 = UINT64_MAX;
	static uint8_t x2300 = 12U;
	static volatile int32_t t71 = -147358;

    t71 = (((x2297!=x2298)>x2299)>>x2300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x2333 = INT32_MAX;
	static uint8_t x2334 = UINT8_MAX;
	uint8_t x2336 = 0U;
	int32_t t72 = 447;

    t72 = (((x2333!=x2334)>x2335)>>x2336);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x2377 = UINT8_MAX;
	uint64_t x2378 = 7846LLU;
	int16_t x2379 = -1;
	int8_t x2380 = 0;
	int32_t t73 = -273;

    t73 = (((x2377!=x2378)>x2379)>>x2380);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x2401 = UINT64_MAX;
	volatile int8_t x2402 = 8;
	uint8_t x2403 = 1U;
	int8_t x2404 = 0;

    t74 = (((x2401!=x2402)>x2403)>>x2404);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x2501 = 4LLU;
	static uint32_t x2502 = 1517U;
	static volatile uint16_t x2503 = 6112U;
	static uint8_t x2504 = 0U;
	int32_t t75 = 0;

    t75 = (((x2501!=x2502)>x2503)>>x2504);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x2506 = INT32_MIN;
	int16_t x2508 = 0;
	static volatile int32_t t76 = 0;

    t76 = (((x2505!=x2506)>x2507)>>x2508);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x2509 = 9U;
	static int64_t x2510 = INT64_MIN;
	int64_t x2511 = INT64_MAX;
	uint8_t x2512 = 5U;
	static int32_t t77 = 16;

    t77 = (((x2509!=x2510)>x2511)>>x2512);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x2537 = 4;
	volatile uint16_t x2540 = 3U;
	static int32_t t78 = 9591970;

    t78 = (((x2537!=x2538)>x2539)>>x2540);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x2550 = INT32_MIN;
	static volatile int32_t x2551 = 2;
	volatile uint8_t x2552 = 4U;

    t79 = (((x2549!=x2550)>x2551)>>x2552);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x2597 = INT64_MAX;
	uint8_t x2598 = 42U;
	uint16_t x2599 = 5021U;
	uint32_t x2600 = 4U;

    t80 = (((x2597!=x2598)>x2599)>>x2600);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x2613 = INT16_MIN;
	static uint64_t x2615 = UINT64_MAX;
	uint8_t x2616 = 0U;
	int32_t t81 = -1;

    t81 = (((x2613!=x2614)>x2615)>>x2616);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x2633 = UINT8_MAX;
	int16_t x2634 = 1;
	uint8_t x2635 = 3U;

    t82 = (((x2633!=x2634)>x2635)>>x2636);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x2653 = 1U;
	int64_t x2654 = INT64_MIN;
	static int16_t x2655 = INT16_MIN;
	int16_t x2656 = 26;
	int32_t t83 = -1;

    t83 = (((x2653!=x2654)>x2655)>>x2656);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2657 = 8;
	int8_t x2659 = 1;
	int64_t x2660 = 0LL;

    t84 = (((x2657!=x2658)>x2659)>>x2660);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x2685 = 8LLU;
	int16_t x2686 = -1;
	int8_t x2687 = 4;
	int64_t x2688 = 1LL;
	int32_t t85 = -1016;

    t85 = (((x2685!=x2686)>x2687)>>x2688);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x2749 = INT64_MIN;
	int32_t x2750 = INT32_MIN;
	int64_t x2751 = INT64_MIN;
	volatile uint8_t x2752 = 10U;

    t86 = (((x2749!=x2750)>x2751)>>x2752);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x2761 = -3;
	uint64_t x2762 = 82622LLU;
	volatile int64_t x2763 = INT64_MIN;
	int8_t x2764 = 1;
	int32_t t87 = 0;

    t87 = (((x2761!=x2762)>x2763)>>x2764);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x2777 = INT64_MIN;
	int32_t x2779 = -1;
	static int32_t x2780 = 1;

    t88 = (((x2777!=x2778)>x2779)>>x2780);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x2841 = INT8_MIN;
	int8_t x2842 = INT8_MIN;
	uint8_t x2843 = UINT8_MAX;
	uint8_t x2844 = 1U;
	static int32_t t89 = 4645;

    t89 = (((x2841!=x2842)>x2843)>>x2844);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x2845 = 15U;
	int8_t x2846 = 1;
	static volatile int32_t t90 = 83;

    t90 = (((x2845!=x2846)>x2847)>>x2848);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x2865 = INT64_MAX;
	int32_t x2867 = 1461703;
	static uint32_t x2868 = 0U;
	volatile int32_t t91 = 84953778;

    t91 = (((x2865!=x2866)>x2867)>>x2868);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x2901 = 9968U;
	int8_t x2902 = INT8_MAX;
	uint8_t x2903 = UINT8_MAX;
	int32_t t92 = -16064;

    t92 = (((x2901!=x2902)>x2903)>>x2904);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x2933 = 0;
	static uint32_t x2934 = UINT32_MAX;
	int8_t x2935 = INT8_MIN;
	int16_t x2936 = 3;
	volatile int32_t t93 = 2204989;

    t93 = (((x2933!=x2934)>x2935)>>x2936);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x2969 = -22748807;
	int8_t x2970 = 6;
	int8_t x2971 = -1;
	uint32_t x2972 = 21U;
	int32_t t94 = -3;

    t94 = (((x2969!=x2970)>x2971)>>x2972);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x2977 = INT32_MAX;
	int64_t x2978 = -222717790190LL;
	int8_t x2979 = -1;
	int32_t x2980 = 14;
	static int32_t t95 = -102;

    t95 = (((x2977!=x2978)>x2979)>>x2980);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x2985 = INT16_MAX;
	uint8_t x2986 = 14U;
	static int32_t x2987 = 304;
	uint8_t x2988 = 5U;
	static volatile int32_t t96 = 56;

    t96 = (((x2985!=x2986)>x2987)>>x2988);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x3066 = UINT64_MAX;
	uint8_t x3068 = 24U;
	static int32_t t97 = -38;

    t97 = (((x3065!=x3066)>x3067)>>x3068);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x3089 = -6451547588LL;
	int8_t x3090 = -1;
	uint32_t x3091 = UINT32_MAX;
	static volatile int8_t x3092 = 0;
	int32_t t98 = 0;

    t98 = (((x3089!=x3090)>x3091)>>x3092);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x3093 = UINT8_MAX;
	uint16_t x3095 = UINT16_MAX;
	int32_t t99 = 3805;

    t99 = (((x3093!=x3094)>x3095)>>x3096);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x3209 = -282680643;
	int8_t x3210 = -1;
	volatile int64_t x3211 = INT64_MIN;
	uint16_t x3212 = 1U;
	int32_t t100 = -866166751;

    t100 = (((x3209!=x3210)>x3211)>>x3212);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x3249 = UINT8_MAX;
	int32_t x3250 = INT32_MIN;
	volatile uint16_t x3251 = 2U;
	volatile int32_t t101 = -28;

    t101 = (((x3249!=x3250)>x3251)>>x3252);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x3281 = INT8_MAX;
	static int32_t x3282 = 13245845;
	volatile int32_t x3283 = -200347;
	uint16_t x3284 = 8U;
	volatile int32_t t102 = -2984981;

    t102 = (((x3281!=x3282)>x3283)>>x3284);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint8_t x3309 = 7U;
	static uint16_t x3310 = 28094U;
	int8_t x3311 = -1;
	volatile uint16_t x3312 = 4U;
	static volatile int32_t t103 = 64574;

    t103 = (((x3309!=x3310)>x3311)>>x3312);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x3358 = 54;
	uint8_t x3360 = 5U;
	volatile int32_t t104 = -247248;

    t104 = (((x3357!=x3358)>x3359)>>x3360);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3361 = INT16_MIN;
	int8_t x3363 = 3;
	uint16_t x3364 = 28U;
	volatile int32_t t105 = -251776;

    t105 = (((x3361!=x3362)>x3363)>>x3364);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x3413 = INT16_MAX;
	uint64_t x3414 = 255036114LLU;
	int32_t x3415 = 0;
	uint8_t x3416 = 3U;
	int32_t t106 = -102806100;

    t106 = (((x3413!=x3414)>x3415)>>x3416);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x3438 = INT32_MIN;
	uint32_t x3440 = 23U;
	int32_t t107 = -1;

    t107 = (((x3437!=x3438)>x3439)>>x3440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x3481 = INT16_MAX;
	static uint8_t x3482 = 15U;
	static int64_t x3483 = -1LL;

    t108 = (((x3481!=x3482)>x3483)>>x3484);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x3505 = 6U;
	int32_t x3506 = INT32_MAX;
	volatile uint8_t x3507 = UINT8_MAX;
	volatile int8_t x3508 = 17;
	int32_t t109 = 24334937;

    t109 = (((x3505!=x3506)>x3507)>>x3508);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x3529 = -1;
	static int16_t x3530 = INT16_MIN;
	int64_t x3531 = -1LL;
	int32_t t110 = 45882808;

    t110 = (((x3529!=x3530)>x3531)>>x3532);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x3541 = UINT32_MAX;
	int64_t x3542 = -1LL;
	int32_t x3543 = 3771632;
	uint16_t x3544 = 24U;

    t111 = (((x3541!=x3542)>x3543)>>x3544);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x3573 = -1;
	int64_t x3574 = 15LL;
	uint16_t x3575 = 1U;
	volatile int32_t t112 = -118;

    t112 = (((x3573!=x3574)>x3575)>>x3576);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x3597 = -1;
	static int64_t x3599 = -682869850790197LL;
	volatile int32_t t113 = 3246931;

    t113 = (((x3597!=x3598)>x3599)>>x3600);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x3649 = 51531647U;
	volatile uint16_t x3650 = UINT16_MAX;
	uint64_t x3651 = 256029LLU;
	int32_t t114 = -283;

    t114 = (((x3649!=x3650)>x3651)>>x3652);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x3657 = INT16_MIN;
	volatile int32_t x3658 = INT32_MIN;
	uint64_t x3659 = UINT64_MAX;
	uint8_t x3660 = 9U;

    t115 = (((x3657!=x3658)>x3659)>>x3660);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x3685 = 1417720;
	int32_t x3687 = 3144;
	int8_t x3688 = 1;
	volatile int32_t t116 = -14816725;

    t116 = (((x3685!=x3686)>x3687)>>x3688);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x3697 = INT8_MAX;
	int8_t x3698 = -3;
	uint64_t x3699 = 152122702LLU;
	static int8_t x3700 = 6;

    t117 = (((x3697!=x3698)>x3699)>>x3700);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x3725 = UINT64_MAX;
	int64_t x3726 = -1LL;
	int16_t x3727 = INT16_MIN;
	volatile uint8_t x3728 = 4U;
	volatile int32_t t118 = -217;

    t118 = (((x3725!=x3726)>x3727)>>x3728);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x3737 = UINT16_MAX;
	uint64_t x3738 = 8506LLU;
	uint32_t x3739 = 1224566454U;
	volatile int32_t t119 = -813761;

    t119 = (((x3737!=x3738)>x3739)>>x3740);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x3765 = 44;
	int64_t x3766 = INT64_MAX;
	volatile int32_t x3767 = -1;
	volatile uint8_t x3768 = 6U;

    t120 = (((x3765!=x3766)>x3767)>>x3768);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x3807 = 320U;
	volatile int8_t x3808 = 0;
	volatile int32_t t121 = -808535;

    t121 = (((x3805!=x3806)>x3807)>>x3808);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x3829 = 2U;
	static int16_t x3830 = INT16_MIN;
	int8_t x3831 = INT8_MIN;
	uint32_t x3832 = 2U;
	int32_t t122 = -774;

    t122 = (((x3829!=x3830)>x3831)>>x3832);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x3862 = UINT32_MAX;
	volatile int16_t x3863 = 28;
	volatile int32_t t123 = 252991177;

    t123 = (((x3861!=x3862)>x3863)>>x3864);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x3885 = 221;
	static int64_t x3886 = -1LL;
	uint64_t x3887 = UINT64_MAX;
	static uint16_t x3888 = 0U;
	volatile int32_t t124 = 24;

    t124 = (((x3885!=x3886)>x3887)>>x3888);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x3893 = 27716U;
	static int16_t x3895 = -1;
	volatile uint16_t x3896 = 17U;

    t125 = (((x3893!=x3894)>x3895)>>x3896);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x3981 = 1840U;
	uint8_t x3982 = 97U;
	volatile int8_t x3983 = INT8_MAX;
	uint16_t x3984 = 3U;
	int32_t t126 = 19331;

    t126 = (((x3981!=x3982)>x3983)>>x3984);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x4017 = INT32_MAX;
	static int16_t x4018 = -592;
	uint32_t x4019 = 1377U;
	static int8_t x4020 = 8;
	static int32_t t127 = -51730;

    t127 = (((x4017!=x4018)>x4019)>>x4020);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x4125 = UINT16_MAX;
	uint16_t x4128 = 8U;

    t128 = (((x4125!=x4126)>x4127)>>x4128);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x4133 = UINT8_MAX;
	static int16_t x4134 = 2465;
	volatile uint32_t x4136 = 9U;
	volatile int32_t t129 = 12;

    t129 = (((x4133!=x4134)>x4135)>>x4136);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x4157 = INT8_MIN;
	int16_t x4158 = INT16_MAX;
	uint16_t x4159 = UINT16_MAX;
	int8_t x4160 = 24;
	static int32_t t130 = -28894;

    t130 = (((x4157!=x4158)>x4159)>>x4160);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x4213 = UINT64_MAX;
	int16_t x4214 = INT16_MIN;
	int16_t x4215 = INT16_MIN;
	uint8_t x4216 = 29U;
	volatile int32_t t131 = 6367513;

    t131 = (((x4213!=x4214)>x4215)>>x4216);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x4249 = INT64_MAX;
	static int64_t x4250 = -1LL;
	uint32_t x4251 = 4U;
	int8_t x4252 = 16;
	volatile int32_t t132 = 352114307;

    t132 = (((x4249!=x4250)>x4251)>>x4252);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x4285 = -84478982898565958LL;
	static uint32_t x4287 = 716U;
	uint8_t x4288 = 2U;
	static volatile int32_t t133 = -12866774;

    t133 = (((x4285!=x4286)>x4287)>>x4288);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x4289 = 27398LLU;
	int8_t x4290 = INT8_MIN;
	volatile int8_t x4292 = 6;
	volatile int32_t t134 = 0;

    t134 = (((x4289!=x4290)>x4291)>>x4292);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x4305 = -1;
	int16_t x4307 = -1;
	volatile int32_t t135 = -981880171;

    t135 = (((x4305!=x4306)>x4307)>>x4308);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x4349 = INT16_MIN;
	int16_t x4351 = INT16_MIN;
	uint16_t x4352 = 19U;
	volatile int32_t t136 = 7720;

    t136 = (((x4349!=x4350)>x4351)>>x4352);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x4381 = UINT16_MAX;
	int16_t x4382 = INT16_MIN;
	uint16_t x4383 = 1U;
	static volatile int32_t t137 = 121717;

    t137 = (((x4381!=x4382)>x4383)>>x4384);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x4437 = UINT64_MAX;
	static int64_t x4438 = INT64_MAX;

    t138 = (((x4437!=x4438)>x4439)>>x4440);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x4485 = INT16_MIN;
	static uint64_t x4486 = 3361306413LLU;
	volatile int8_t x4488 = 19;
	int32_t t139 = -53383;

    t139 = (((x4485!=x4486)>x4487)>>x4488);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x4505 = -5;
	int16_t x4506 = INT16_MIN;
	static volatile int8_t x4508 = 7;
	int32_t t140 = -1;

    t140 = (((x4505!=x4506)>x4507)>>x4508);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x4513 = INT32_MIN;
	int8_t x4515 = INT8_MIN;
	static int32_t t141 = 277;

    t141 = (((x4513!=x4514)>x4515)>>x4516);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x4517 = UINT64_MAX;
	int64_t x4518 = INT64_MIN;

    t142 = (((x4517!=x4518)>x4519)>>x4520);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x4541 = -12;
	uint32_t x4542 = 4148U;
	uint16_t x4543 = 8U;
	uint16_t x4544 = 1U;
	volatile int32_t t143 = -30320;

    t143 = (((x4541!=x4542)>x4543)>>x4544);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x4549 = -1LL;
	static int64_t x4550 = INT64_MAX;
	int32_t x4551 = 5521;
	volatile int64_t x4552 = 1LL;
	int32_t t144 = -4370;

    t144 = (((x4549!=x4550)>x4551)>>x4552);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x4577 = -1;
	volatile uint32_t x4578 = UINT32_MAX;
	int64_t x4579 = INT64_MIN;
	volatile int32_t t145 = 629201434;

    t145 = (((x4577!=x4578)>x4579)>>x4580);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x4602 = INT32_MAX;
	volatile int32_t t146 = -99252;

    t146 = (((x4601!=x4602)>x4603)>>x4604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x4614 = -10529;
	int8_t x4616 = 0;
	int32_t t147 = -6728776;

    t147 = (((x4613!=x4614)>x4615)>>x4616);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x4641 = 20U;
	int32_t x4642 = 911642;
	volatile int8_t x4643 = INT8_MIN;
	static int8_t x4644 = 0;
	int32_t t148 = 6695;

    t148 = (((x4641!=x4642)>x4643)>>x4644);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x4657 = INT16_MIN;
	static uint16_t x4658 = 26U;
	int32_t x4659 = INT32_MIN;
	int16_t x4660 = 3;
	volatile int32_t t149 = -23070723;

    t149 = (((x4657!=x4658)>x4659)>>x4660);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x4661 = UINT64_MAX;
	int32_t x4663 = INT32_MAX;
	uint16_t x4664 = 1U;
	int32_t t150 = 1;

    t150 = (((x4661!=x4662)>x4663)>>x4664);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x4697 = -1;
	int8_t x4698 = INT8_MAX;
	volatile uint16_t x4700 = 20U;

    t151 = (((x4697!=x4698)>x4699)>>x4700);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x4713 = -30215;
	uint16_t x4714 = 5885U;
	volatile int8_t x4715 = 6;
	uint64_t x4716 = 3LLU;
	static int32_t t152 = 77;

    t152 = (((x4713!=x4714)>x4715)>>x4716);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x4781 = INT8_MIN;
	uint8_t x4782 = 1U;
	volatile int16_t x4783 = INT16_MAX;
	volatile uint16_t x4784 = 28U;
	static int32_t t153 = -8;

    t153 = (((x4781!=x4782)>x4783)>>x4784);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x4785 = 9U;
	uint16_t x4788 = 21U;
	static int32_t t154 = -937850;

    t154 = (((x4785!=x4786)>x4787)>>x4788);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x4789 = INT64_MIN;
	volatile int32_t x4790 = -1;
	int64_t x4791 = INT64_MIN;
	volatile int32_t t155 = -882607;

    t155 = (((x4789!=x4790)>x4791)>>x4792);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x4805 = 116U;
	volatile uint64_t x4806 = 52473532041LLU;
	static uint64_t x4807 = 122230LLU;
	volatile int8_t x4808 = 17;
	int32_t t156 = -194;

    t156 = (((x4805!=x4806)>x4807)>>x4808);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x4817 = 57;
	static uint8_t x4818 = UINT8_MAX;
	int8_t x4819 = INT8_MAX;
	volatile int32_t t157 = 28;

    t157 = (((x4817!=x4818)>x4819)>>x4820);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x4822 = INT64_MIN;
	int64_t x4823 = -3362789LL;

    t158 = (((x4821!=x4822)>x4823)>>x4824);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x4829 = INT32_MIN;
	int16_t x4830 = -312;
	static int8_t x4831 = INT8_MIN;
	int8_t x4832 = 3;
	static int32_t t159 = 1466;

    t159 = (((x4829!=x4830)>x4831)>>x4832);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x4853 = 3U;
	volatile int32_t t160 = -1;

    t160 = (((x4853!=x4854)>x4855)>>x4856);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x4874 = 3U;
	int8_t x4875 = 5;
	uint8_t x4876 = 20U;
	volatile int32_t t161 = -2;

    t161 = (((x4873!=x4874)>x4875)>>x4876);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x4882 = 820104418U;
	volatile int8_t x4883 = INT8_MIN;
	uint8_t x4884 = 1U;

    t162 = (((x4881!=x4882)>x4883)>>x4884);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x4889 = INT64_MIN;
	static int32_t x4890 = INT32_MAX;
	static volatile int64_t x4891 = -1LL;

    t163 = (((x4889!=x4890)>x4891)>>x4892);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x4933 = INT16_MIN;
	int32_t x4935 = -3;
	int16_t x4936 = 1;
	int32_t t164 = 108915485;

    t164 = (((x4933!=x4934)>x4935)>>x4936);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x4994 = INT64_MIN;
	uint64_t x4995 = 306214LLU;
	int16_t x4996 = 1;
	volatile int32_t t165 = 213547887;

    t165 = (((x4993!=x4994)>x4995)>>x4996);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x5037 = 1U;
	uint64_t x5038 = 64639347949977LLU;
	int64_t x5039 = INT64_MIN;
	static uint8_t x5040 = 4U;
	int32_t t166 = 0;

    t166 = (((x5037!=x5038)>x5039)>>x5040);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x5093 = INT8_MIN;
	static uint8_t x5096 = 2U;
	volatile int32_t t167 = 19312710;

    t167 = (((x5093!=x5094)>x5095)>>x5096);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x5105 = INT8_MIN;
	int16_t x5106 = 1;
	int32_t x5107 = INT32_MIN;

    t168 = (((x5105!=x5106)>x5107)>>x5108);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x5149 = 77294821;
	int8_t x5150 = INT8_MAX;
	int32_t x5152 = 1;

    t169 = (((x5149!=x5150)>x5151)>>x5152);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x5177 = INT32_MAX;
	int32_t x5178 = 31;
	uint8_t x5180 = 2U;
	int32_t t170 = -29715;

    t170 = (((x5177!=x5178)>x5179)>>x5180);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x5193 = INT32_MIN;
	volatile int64_t x5195 = INT64_MIN;
	static uint64_t x5196 = 13LLU;
	int32_t t171 = -200069;

    t171 = (((x5193!=x5194)>x5195)>>x5196);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x5245 = 731654366523324LLU;
	volatile int16_t x5246 = -218;
	int16_t x5247 = -1;
	volatile int32_t t172 = 285367;

    t172 = (((x5245!=x5246)>x5247)>>x5248);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x5285 = INT16_MAX;
	int32_t x5286 = INT32_MAX;
	uint8_t x5287 = UINT8_MAX;
	volatile uint16_t x5288 = 1U;
	volatile int32_t t173 = 1;

    t173 = (((x5285!=x5286)>x5287)>>x5288);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x5317 = INT32_MIN;
	static int64_t x5319 = INT64_MIN;
	static int8_t x5320 = 0;
	static int32_t t174 = -19008716;

    t174 = (((x5317!=x5318)>x5319)>>x5320);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x5329 = INT8_MAX;
	uint8_t x5330 = UINT8_MAX;
	static uint8_t x5332 = 3U;
	int32_t t175 = 2;

    t175 = (((x5329!=x5330)>x5331)>>x5332);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x5361 = -170874727;
	uint8_t x5362 = 112U;
	int16_t x5364 = 28;
	volatile int32_t t176 = -27316143;

    t176 = (((x5361!=x5362)>x5363)>>x5364);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x5374 = INT8_MAX;
	int32_t x5375 = INT32_MIN;
	uint16_t x5376 = 0U;

    t177 = (((x5373!=x5374)>x5375)>>x5376);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x5397 = INT8_MIN;
	static int32_t x5398 = INT32_MIN;
	int32_t t178 = 470181979;

    t178 = (((x5397!=x5398)>x5399)>>x5400);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x5445 = INT64_MIN;
	int8_t x5447 = 1;
	uint32_t x5448 = 1U;
	volatile int32_t t179 = 15;

    t179 = (((x5445!=x5446)>x5447)>>x5448);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x5465 = 7844913;
	uint32_t x5466 = 156U;
	uint32_t x5467 = 132U;
	int16_t x5468 = 3;
	volatile int32_t t180 = 265087648;

    t180 = (((x5465!=x5466)>x5467)>>x5468);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x5493 = -1;
	uint16_t x5494 = UINT16_MAX;
	static uint16_t x5495 = 355U;
	static uint8_t x5496 = 20U;

    t181 = (((x5493!=x5494)>x5495)>>x5496);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x5578 = INT32_MIN;
	volatile uint64_t x5579 = UINT64_MAX;
	volatile uint64_t x5580 = 1LLU;
	volatile int32_t t182 = -395852156;

    t182 = (((x5577!=x5578)>x5579)>>x5580);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x5597 = -1;
	int8_t x5598 = 32;
	int8_t x5599 = INT8_MIN;
	volatile uint16_t x5600 = 0U;

    t183 = (((x5597!=x5598)>x5599)>>x5600);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x5642 = 0U;
	int32_t x5643 = -1;
	static uint16_t x5644 = 1U;
	volatile int32_t t184 = 1977;

    t184 = (((x5641!=x5642)>x5643)>>x5644);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x5721 = INT64_MIN;
	uint32_t x5722 = 1U;
	int32_t x5723 = -2862;
	uint16_t x5724 = 11U;
	volatile int32_t t185 = -110489;

    t185 = (((x5721!=x5722)>x5723)>>x5724);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x5777 = UINT32_MAX;
	static int16_t x5778 = INT16_MAX;
	volatile int64_t x5779 = INT64_MIN;
	static int8_t x5780 = 1;

    t186 = (((x5777!=x5778)>x5779)>>x5780);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x5825 = INT32_MAX;
	volatile int16_t x5826 = 10;
	uint64_t x5828 = 3LLU;
	static int32_t t187 = -21262;

    t187 = (((x5825!=x5826)>x5827)>>x5828);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x5865 = 7;
	int32_t x5866 = INT32_MAX;
	int8_t x5868 = 5;
	volatile int32_t t188 = 2;

    t188 = (((x5865!=x5866)>x5867)>>x5868);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x5925 = 79956LLU;
	int16_t x5926 = -3;
	int8_t x5928 = 30;

    t189 = (((x5925!=x5926)>x5927)>>x5928);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x5953 = 7;
	uint16_t x5954 = 1U;
	int16_t x5955 = 48;
	int16_t x5956 = 5;
	volatile int32_t t190 = 0;

    t190 = (((x5953!=x5954)>x5955)>>x5956);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x5977 = INT64_MAX;
	int8_t x5978 = INT8_MIN;
	volatile uint16_t x5979 = 48U;
	uint8_t x5980 = 6U;
	volatile int32_t t191 = 7978;

    t191 = (((x5977!=x5978)>x5979)>>x5980);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x5989 = -1;
	int16_t x5990 = -1;
	volatile uint8_t x5991 = UINT8_MAX;
	uint8_t x5992 = 20U;

    t192 = (((x5989!=x5990)>x5991)>>x5992);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x6069 = 0U;
	uint16_t x6070 = 28578U;
	int32_t x6071 = INT32_MAX;
	uint8_t x6072 = 0U;
	int32_t t193 = 303715;

    t193 = (((x6069!=x6070)>x6071)>>x6072);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x6073 = -1;
	uint32_t x6075 = 295U;
	static volatile int32_t t194 = -1;

    t194 = (((x6073!=x6074)>x6075)>>x6076);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x6213 = INT8_MIN;
	static int16_t x6214 = -1;
	uint32_t x6215 = 922U;

    t195 = (((x6213!=x6214)>x6215)>>x6216);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x6246 = INT32_MIN;
	int8_t x6247 = INT8_MAX;
	volatile int32_t x6248 = 1;
	int32_t t196 = 2;

    t196 = (((x6245!=x6246)>x6247)>>x6248);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x6257 = 24LLU;
	int64_t x6258 = INT64_MIN;
	volatile uint16_t x6259 = 3U;
	int8_t x6260 = 10;
	int32_t t197 = 1470122;

    t197 = (((x6257!=x6258)>x6259)>>x6260);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x6338 = -45;
	static volatile uint8_t x6340 = 27U;
	int32_t t198 = -1369741;

    t198 = (((x6337!=x6338)>x6339)>>x6340);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x6349 = 4;
	int8_t x6350 = 2;
	static volatile uint64_t x6351 = 7324728708LLU;
	volatile int32_t t199 = 700951;

    t199 = (((x6349!=x6350)>x6351)>>x6352);

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

