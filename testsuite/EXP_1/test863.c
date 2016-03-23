
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

uint8_t x1 = UINT8_MAX;
uint8_t x3 = 2U;
volatile int32_t t1 = -1;
static volatile int32_t t2 = -179572;
int64_t x180 = -15657832583LL;
int32_t x246 = -1;
int64_t x297 = 0LL;
static uint32_t x312 = 116U;
volatile uint32_t x474 = 17329291U;
volatile int8_t x475 = 6;
uint32_t x603 = 38U;
volatile uint32_t x667 = 1U;
int8_t x668 = INT8_MIN;
static int64_t x688 = INT64_MIN;
int8_t x693 = INT8_MAX;
volatile int8_t x702 = INT8_MIN;
static int64_t x757 = INT64_MIN;
int32_t t19 = -29499;
static int32_t t20 = -32846;
static uint32_t x926 = UINT32_MAX;
volatile uint8_t x951 = 0U;
int8_t x962 = INT8_MIN;
static int16_t x981 = INT16_MAX;
volatile int16_t x1006 = INT16_MIN;
uint8_t x1007 = 24U;
volatile uint32_t x1090 = UINT32_MAX;
volatile int32_t t31 = 13;
volatile int32_t t32 = 2487931;
uint8_t x1327 = 19U;
int32_t t33 = -1;
volatile uint32_t x1377 = 28U;
static int32_t t35 = 116428;
int64_t x1496 = INT64_MAX;
volatile int32_t t36 = 1648310;
int16_t x1668 = INT16_MIN;
int32_t x1762 = INT32_MIN;
static volatile uint64_t x1802 = 10373295842265LLU;
int32_t t41 = -1;
static int64_t x2022 = 176471520129534012LL;
uint32_t x2024 = 26U;
uint16_t x2108 = 1U;
uint8_t x2261 = 2U;
uint16_t x2353 = 1U;
static int64_t x2400 = INT64_MAX;
int32_t t49 = -1;
static uint32_t x2468 = UINT32_MAX;
int64_t x2574 = INT64_MIN;
int64_t x2644 = INT64_MIN;
static uint8_t x2671 = 14U;
int32_t t55 = 3411329;
uint32_t x2740 = 12U;
int32_t t57 = -6109300;
int16_t x2906 = INT16_MIN;
int16_t x2908 = 1;
volatile uint16_t x3051 = 5U;
volatile uint64_t x3086 = 2252260481092LLU;
int64_t x3170 = -455883619328938866LL;
static int32_t t65 = 342;
int8_t x3199 = 1;
int32_t t66 = -2;
int64_t x3226 = 9366LL;
int8_t x3233 = INT8_MIN;
volatile uint16_t x3235 = 11U;
int8_t x3350 = -19;
int8_t x3351 = 0;
int32_t x3370 = -1769684;
int16_t x3384 = -1;
static volatile int32_t t71 = 114626178;
uint8_t x3469 = UINT8_MAX;
uint8_t x3539 = 6U;
uint8_t x3540 = UINT8_MAX;
int16_t x3543 = 9;
int32_t t75 = -4489;
static int16_t x3558 = 3;
uint16_t x3565 = 47U;
uint32_t x3573 = 2816654U;
int32_t x3658 = 1914;
static int32_t x3659 = 11;
int32_t x3703 = 1;
static int64_t x3770 = -1LL;
int16_t x3772 = INT16_MIN;
uint16_t x4061 = 27U;
uint64_t x4062 = UINT64_MAX;
int16_t x4064 = 5;
volatile int32_t t86 = 668016;
int8_t x4177 = INT8_MAX;
int32_t t89 = -60753943;
static uint64_t x4234 = 48LLU;
uint8_t x4393 = UINT8_MAX;
static uint64_t x4429 = 2331413LLU;
static uint8_t x4439 = 27U;
int64_t x4509 = INT64_MIN;
int16_t x4565 = INT16_MIN;
uint32_t x4566 = UINT32_MAX;
uint32_t x4574 = 27769U;
int8_t x4779 = 1;
uint64_t x4780 = UINT64_MAX;
uint8_t x4931 = 1U;
int16_t x4932 = INT16_MIN;
volatile int32_t t107 = -15;
int32_t t108 = 832629;
int32_t x5123 = 0;
uint8_t x5259 = 32U;
volatile int8_t x5270 = -1;
int32_t x5293 = -3878651;
int32_t t112 = -86755131;
static int8_t x5377 = -55;
static volatile int32_t t114 = -219;
static volatile uint8_t x5492 = UINT8_MAX;
int16_t x5551 = 1;
volatile int32_t t118 = 433960320;
int8_t x5594 = INT8_MIN;
int32_t t120 = -5542196;
int32_t t121 = 28188093;
volatile uint64_t x5881 = 1485529571LLU;
volatile int8_t x5884 = -1;
int16_t x5888 = INT16_MIN;
uint64_t x5898 = 543869LLU;
volatile uint16_t x5925 = 381U;
int16_t x6029 = 0;
uint16_t x6031 = 1U;
volatile int32_t x6032 = 873;
int32_t t129 = -1;
volatile uint8_t x6111 = 0U;
uint8_t x6164 = 1U;
int64_t x6248 = INT64_MIN;
int32_t x6297 = INT32_MIN;
int8_t x6300 = -9;
int32_t x6390 = -1;
uint16_t x6456 = UINT16_MAX;
int32_t t139 = 33327795;
int64_t x6457 = INT64_MAX;
uint32_t x6462 = UINT32_MAX;
volatile int32_t t142 = 503158137;
static int64_t x6541 = INT64_MAX;
int8_t x6543 = 0;
static uint8_t x6567 = 46U;
int16_t x6568 = -1;
volatile int32_t t144 = -5945;
volatile int8_t x6640 = INT8_MAX;
int16_t x6685 = INT16_MAX;
volatile int32_t t146 = -1703;
static int32_t x6720 = -873773;
int32_t t147 = -410318504;
int64_t x6766 = INT64_MAX;
int8_t x6816 = -1;
static int32_t t150 = -1;
int8_t x6942 = -1;
int8_t x6973 = INT8_MIN;
volatile uint32_t x6974 = 1050642480U;
volatile int16_t x6976 = -761;
static volatile int32_t t157 = -2619486;
uint8_t x7198 = UINT8_MAX;
volatile int32_t t160 = -1;
static uint64_t x7225 = UINT64_MAX;
static int8_t x7270 = -1;
int64_t x7271 = 1LL;
int32_t t162 = -3;
static int64_t x7354 = INT64_MIN;
static volatile int32_t t163 = -50691863;
int64_t x7492 = INT64_MIN;
volatile int32_t t165 = -46;
uint16_t x7593 = 30U;
static int64_t x7596 = INT64_MIN;
volatile uint8_t x7783 = 0U;
int8_t x7784 = INT8_MIN;
int16_t x7859 = 2;
static volatile int32_t t170 = 1371;
uint32_t x7894 = 170047U;
static volatile uint8_t x7895 = 1U;
int32_t t172 = 124;
uint16_t x7949 = UINT16_MAX;
int16_t x7992 = -7025;
volatile int32_t t175 = -16251041;
uint8_t x8008 = 111U;
int64_t x8014 = -13160805796774LL;
uint16_t x8129 = 492U;
uint64_t x8130 = 8187701LLU;
static uint16_t x8181 = UINT16_MAX;
static int8_t x8183 = 29;
volatile uint64_t x8274 = UINT64_MAX;
int32_t t182 = -516;
volatile int32_t t184 = 875;
volatile int32_t t186 = 30908;
volatile int32_t x8485 = -31166832;
int16_t x8562 = INT16_MIN;
uint16_t x8563 = 12U;
int8_t x8582 = INT8_MIN;
static int64_t x8645 = 227LL;
static volatile int8_t x8663 = 6;
static uint32_t x8743 = 6U;
uint64_t x8789 = 8455090301203LLU;
volatile int32_t t197 = -1;
int32_t x8826 = -1;
static int32_t t199 = -7451867;


void f0(void) {
    	static int32_t x2 = -1;
	static int64_t x4 = -1LL;
	int32_t t0 = 306;

    t0 = (((x1%x2)<<x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x77 = 11;
	uint8_t x78 = UINT8_MAX;
	volatile uint8_t x79 = 0U;
	uint32_t x80 = UINT32_MAX;

    t1 = (((x77%x78)<<x79)>x80);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x117 = 19U;
	int8_t x118 = INT8_MIN;
	volatile uint16_t x119 = 5U;
	volatile uint32_t x120 = 23195101U;

    t2 = (((x117%x118)<<x119)>x120);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x177 = INT16_MIN;
	uint64_t x178 = UINT64_MAX;
	uint8_t x179 = 0U;
	volatile int32_t t3 = 1;

    t3 = (((x177%x178)<<x179)>x180);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MIN;
	static uint8_t x235 = 1U;
	volatile uint64_t x236 = UINT64_MAX;
	static volatile int32_t t4 = 468537;

    t4 = (((x233%x234)<<x235)>x236);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x245 = 30103LLU;
	uint64_t x247 = 6LLU;
	volatile int64_t x248 = 5LL;
	static volatile int32_t t5 = 2627;

    t5 = (((x245%x246)<<x247)>x248);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x253 = 217633352U;
	int32_t x254 = INT32_MAX;
	int16_t x255 = 1;
	static uint32_t x256 = 394U;
	static int32_t t6 = -2372506;

    t6 = (((x253%x254)<<x255)>x256);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x298 = UINT64_MAX;
	int16_t x299 = 1;
	uint16_t x300 = UINT16_MAX;
	int32_t t7 = 2239222;

    t7 = (((x297%x298)<<x299)>x300);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x309 = 14766;
	static int16_t x310 = INT16_MAX;
	static int8_t x311 = 6;
	volatile int32_t t8 = 65543786;

    t8 = (((x309%x310)<<x311)>x312);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x353 = UINT16_MAX;
	volatile int64_t x354 = INT64_MIN;
	static int16_t x355 = 5;
	volatile int8_t x356 = 0;
	int32_t t9 = 199762212;

    t9 = (((x353%x354)<<x355)>x356);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x437 = UINT16_MAX;
	volatile uint64_t x438 = 14346055145532LLU;
	static uint16_t x439 = 3U;
	int8_t x440 = -7;
	static volatile int32_t t10 = 33637144;

    t10 = (((x437%x438)<<x439)>x440);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x465 = 1271986903596LL;
	uint64_t x466 = 211059512756641LLU;
	static int16_t x467 = 0;
	static uint16_t x468 = 466U;
	int32_t t11 = -77065089;

    t11 = (((x465%x466)<<x467)>x468);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x473 = INT8_MIN;
	static int16_t x476 = -1;
	volatile int32_t t12 = -931468;

    t12 = (((x473%x474)<<x475)>x476);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x493 = INT32_MAX;
	volatile int64_t x494 = INT64_MIN;
	uint16_t x495 = 3U;
	int64_t x496 = INT64_MIN;
	volatile int32_t t13 = 55367;

    t13 = (((x493%x494)<<x495)>x496);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x601 = INT8_MAX;
	int64_t x602 = INT64_MIN;
	int16_t x604 = INT16_MIN;
	int32_t t14 = 387302318;

    t14 = (((x601%x602)<<x603)>x604);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x665 = UINT8_MAX;
	int16_t x666 = 19;
	int32_t t15 = -57700931;

    t15 = (((x665%x666)<<x667)>x668);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x685 = 38854U;
	volatile int16_t x686 = INT16_MIN;
	int8_t x687 = 15;
	volatile int32_t t16 = 65436437;

    t16 = (((x685%x686)<<x687)>x688);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x694 = INT64_MIN;
	static volatile int8_t x695 = 1;
	static uint16_t x696 = 0U;
	int32_t t17 = 453292;

    t17 = (((x693%x694)<<x695)>x696);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x701 = UINT16_MAX;
	int16_t x703 = 0;
	static uint16_t x704 = 20U;
	int32_t t18 = -1;

    t18 = (((x701%x702)<<x703)>x704);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x758 = INT64_MIN;
	uint16_t x759 = 0U;
	uint32_t x760 = UINT32_MAX;

    t19 = (((x757%x758)<<x759)>x760);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x865 = 172395129U;
	static int64_t x866 = INT64_MAX;
	uint8_t x867 = 20U;
	int16_t x868 = INT16_MIN;

    t20 = (((x865%x866)<<x867)>x868);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x921 = 0;
	int8_t x922 = INT8_MAX;
	int32_t x923 = 15;
	static uint8_t x924 = 1U;
	volatile int32_t t21 = 11;

    t21 = (((x921%x922)<<x923)>x924);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x925 = 1;
	static volatile uint8_t x927 = 1U;
	volatile int8_t x928 = -1;
	static int32_t t22 = 895133913;

    t22 = (((x925%x926)<<x927)>x928);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x929 = INT32_MAX;
	volatile int64_t x930 = -1LL;
	uint8_t x931 = 0U;
	int64_t x932 = INT64_MIN;
	volatile int32_t t23 = 687578755;

    t23 = (((x929%x930)<<x931)>x932);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x937 = UINT64_MAX;
	int8_t x938 = INT8_MIN;
	uint8_t x939 = 2U;
	uint64_t x940 = 447678LLU;
	int32_t t24 = -679824262;

    t24 = (((x937%x938)<<x939)>x940);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x949 = INT8_MAX;
	uint32_t x950 = 2203503U;
	volatile int64_t x952 = -955468120942239LL;
	int32_t t25 = -8342221;

    t25 = (((x949%x950)<<x951)>x952);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x961 = 1;
	static int8_t x963 = 0;
	int64_t x964 = INT64_MIN;
	volatile int32_t t26 = 56;

    t26 = (((x961%x962)<<x963)>x964);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x982 = UINT32_MAX;
	volatile uint8_t x983 = 7U;
	int32_t x984 = 164;
	int32_t t27 = -264235653;

    t27 = (((x981%x982)<<x983)>x984);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x1005 = 94U;
	int16_t x1008 = INT16_MAX;
	volatile int32_t t28 = 62;

    t28 = (((x1005%x1006)<<x1007)>x1008);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x1061 = 976133753LLU;
	int32_t x1062 = -1;
	int16_t x1063 = 22;
	uint64_t x1064 = UINT64_MAX;
	volatile int32_t t29 = 8069395;

    t29 = (((x1061%x1062)<<x1063)>x1064);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1089 = 1793LL;
	int32_t x1091 = 1;
	int32_t x1092 = INT32_MIN;
	volatile int32_t t30 = 20654412;

    t30 = (((x1089%x1090)<<x1091)>x1092);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1121 = 0LL;
	static uint32_t x1122 = UINT32_MAX;
	volatile uint8_t x1123 = 30U;
	uint32_t x1124 = UINT32_MAX;

    t31 = (((x1121%x1122)<<x1123)>x1124);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x1249 = 57589981871624889LLU;
	static int32_t x1250 = -185801316;
	int16_t x1251 = 1;
	uint16_t x1252 = 14880U;

    t32 = (((x1249%x1250)<<x1251)>x1252);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1325 = -1;
	int16_t x1326 = -1;
	volatile uint8_t x1328 = 6U;

    t33 = (((x1325%x1326)<<x1327)>x1328);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x1373 = INT8_MAX;
	static volatile int32_t x1374 = INT32_MIN;
	static uint8_t x1375 = 23U;
	int8_t x1376 = INT8_MIN;
	volatile int32_t t34 = -262;

    t34 = (((x1373%x1374)<<x1375)>x1376);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1378 = 1;
	uint32_t x1379 = 27U;
	int16_t x1380 = -115;

    t35 = (((x1377%x1378)<<x1379)>x1380);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1493 = INT16_MIN;
	int16_t x1494 = INT16_MIN;
	volatile int8_t x1495 = 0;

    t36 = (((x1493%x1494)<<x1495)>x1496);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1665 = -1LL;
	int8_t x1666 = -1;
	int8_t x1667 = 49;
	volatile int32_t t37 = -28;

    t37 = (((x1665%x1666)<<x1667)>x1668);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x1677 = 262U;
	volatile uint8_t x1678 = UINT8_MAX;
	uint32_t x1679 = 12U;
	static volatile int32_t x1680 = -1551;
	static int32_t t38 = -113;

    t38 = (((x1677%x1678)<<x1679)>x1680);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x1709 = UINT16_MAX;
	volatile int32_t x1710 = INT32_MAX;
	uint64_t x1711 = 3LLU;
	int8_t x1712 = INT8_MIN;
	volatile int32_t t39 = -245417036;

    t39 = (((x1709%x1710)<<x1711)>x1712);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x1761 = 27071U;
	static uint8_t x1763 = 14U;
	int8_t x1764 = INT8_MIN;
	int32_t t40 = -3437444;

    t40 = (((x1761%x1762)<<x1763)>x1764);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1801 = 6;
	static uint8_t x1803 = 7U;
	int8_t x1804 = INT8_MIN;

    t41 = (((x1801%x1802)<<x1803)>x1804);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1889 = INT64_MIN;
	uint64_t x1890 = UINT64_MAX;
	uint16_t x1891 = 44U;
	uint64_t x1892 = 27099255LLU;
	int32_t t42 = 968513;

    t42 = (((x1889%x1890)<<x1891)>x1892);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x2021 = 0U;
	static uint8_t x2023 = 2U;
	static int32_t t43 = 146095754;

    t43 = (((x2021%x2022)<<x2023)>x2024);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2069 = INT16_MIN;
	uint8_t x2070 = 2U;
	uint8_t x2071 = 8U;
	int8_t x2072 = INT8_MIN;
	int32_t t44 = -27873011;

    t44 = (((x2069%x2070)<<x2071)>x2072);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2105 = 1129051218483626638LLU;
	volatile uint32_t x2106 = UINT32_MAX;
	uint16_t x2107 = 1U;
	int32_t t45 = 25342;

    t45 = (((x2105%x2106)<<x2107)>x2108);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x2262 = 3339129553600396LLU;
	uint8_t x2263 = 6U;
	uint16_t x2264 = UINT16_MAX;
	int32_t t46 = 27358;

    t46 = (((x2261%x2262)<<x2263)>x2264);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x2321 = INT8_MIN;
	static int8_t x2322 = -1;
	int8_t x2323 = 3;
	int16_t x2324 = INT16_MAX;
	static int32_t t47 = -914875312;

    t47 = (((x2321%x2322)<<x2323)>x2324);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x2354 = INT32_MIN;
	uint64_t x2355 = 6LLU;
	int64_t x2356 = INT64_MIN;
	volatile int32_t t48 = 1600739;

    t48 = (((x2353%x2354)<<x2355)>x2356);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2397 = 0U;
	static volatile uint32_t x2398 = 1U;
	int8_t x2399 = 25;

    t49 = (((x2397%x2398)<<x2399)>x2400);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x2465 = 56861;
	int8_t x2466 = INT8_MIN;
	int16_t x2467 = 8;
	static int32_t t50 = -1;

    t50 = (((x2465%x2466)<<x2467)>x2468);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x2509 = UINT64_MAX;
	static int16_t x2510 = 928;
	static int16_t x2511 = 46;
	int16_t x2512 = -1;
	int32_t t51 = 1186;

    t51 = (((x2509%x2510)<<x2511)>x2512);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x2573 = 1092901112194380350LLU;
	volatile uint16_t x2575 = 0U;
	uint8_t x2576 = UINT8_MAX;
	static volatile int32_t t52 = -112387;

    t52 = (((x2573%x2574)<<x2575)>x2576);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x2597 = INT16_MIN;
	int8_t x2598 = INT8_MIN;
	int16_t x2599 = 5;
	static uint8_t x2600 = 30U;
	int32_t t53 = 10658334;

    t53 = (((x2597%x2598)<<x2599)>x2600);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x2641 = UINT32_MAX;
	int16_t x2642 = 1;
	uint16_t x2643 = 25U;
	static volatile int32_t t54 = 1;

    t54 = (((x2641%x2642)<<x2643)>x2644);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x2669 = -752596682571437132LL;
	uint64_t x2670 = 64628LLU;
	int64_t x2672 = 434088873LL;

    t55 = (((x2669%x2670)<<x2671)>x2672);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x2721 = 465310529603977LL;
	int32_t x2722 = -273324725;
	int8_t x2723 = 31;
	uint16_t x2724 = 5U;
	volatile int32_t t56 = 3;

    t56 = (((x2721%x2722)<<x2723)>x2724);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x2737 = UINT8_MAX;
	int16_t x2738 = -1;
	uint64_t x2739 = 0LLU;

    t57 = (((x2737%x2738)<<x2739)>x2740);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x2861 = 0;
	int64_t x2862 = INT64_MIN;
	int8_t x2863 = 7;
	volatile int8_t x2864 = -1;
	int32_t t58 = 10942549;

    t58 = (((x2861%x2862)<<x2863)>x2864);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x2897 = INT8_MAX;
	uint64_t x2898 = 247849138LLU;
	int8_t x2899 = 8;
	static int32_t x2900 = 1;
	static int32_t t59 = -45;

    t59 = (((x2897%x2898)<<x2899)>x2900);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x2905 = INT64_MIN;
	int8_t x2907 = 56;
	int32_t t60 = 3;

    t60 = (((x2905%x2906)<<x2907)>x2908);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x2909 = INT32_MAX;
	int8_t x2910 = INT8_MAX;
	static int8_t x2911 = 0;
	uint16_t x2912 = 14021U;
	int32_t t61 = -311768;

    t61 = (((x2909%x2910)<<x2911)>x2912);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x2921 = INT8_MIN;
	int64_t x2922 = -1LL;
	int8_t x2923 = 29;
	uint32_t x2924 = 21236166U;
	int32_t t62 = -621;

    t62 = (((x2921%x2922)<<x2923)>x2924);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x3049 = UINT16_MAX;
	static uint64_t x3050 = 8LLU;
	volatile int16_t x3052 = INT16_MIN;
	static volatile int32_t t63 = 14525;

    t63 = (((x3049%x3050)<<x3051)>x3052);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x3085 = 40LLU;
	int8_t x3087 = 3;
	static int32_t x3088 = 12002457;
	volatile int32_t t64 = 361;

    t64 = (((x3085%x3086)<<x3087)>x3088);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x3169 = 15;
	int16_t x3171 = 58;
	static uint32_t x3172 = 1983920554U;

    t65 = (((x3169%x3170)<<x3171)>x3172);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x3197 = -7788310251182128LL;
	int16_t x3198 = -1;
	int8_t x3200 = -2;

    t66 = (((x3197%x3198)<<x3199)>x3200);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x3225 = 56393725008461762LLU;
	static int8_t x3227 = 10;
	volatile int16_t x3228 = INT16_MIN;
	volatile int32_t t67 = -11;

    t67 = (((x3225%x3226)<<x3227)>x3228);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x3234 = 42U;
	int32_t x3236 = -1;
	int32_t t68 = 985526310;

    t68 = (((x3233%x3234)<<x3235)>x3236);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x3349 = UINT8_MAX;
	int16_t x3352 = INT16_MAX;
	int32_t t69 = -3;

    t69 = (((x3349%x3350)<<x3351)>x3352);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x3369 = 25U;
	uint8_t x3371 = 6U;
	int16_t x3372 = INT16_MAX;
	volatile int32_t t70 = -92136;

    t70 = (((x3369%x3370)<<x3371)>x3372);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x3381 = INT64_MIN;
	int8_t x3382 = INT8_MIN;
	uint8_t x3383 = 7U;

    t71 = (((x3381%x3382)<<x3383)>x3384);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x3389 = 18;
	int64_t x3390 = INT64_MAX;
	volatile uint8_t x3391 = 8U;
	static uint8_t x3392 = 9U;
	volatile int32_t t72 = -1844;

    t72 = (((x3389%x3390)<<x3391)>x3392);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x3470 = INT32_MIN;
	static volatile uint8_t x3471 = 2U;
	int64_t x3472 = INT64_MAX;
	volatile int32_t t73 = -32;

    t73 = (((x3469%x3470)<<x3471)>x3472);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x3537 = 3U;
	uint64_t x3538 = 424992LLU;
	volatile int32_t t74 = 20011;

    t74 = (((x3537%x3538)<<x3539)>x3540);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x3541 = 2;
	static uint64_t x3542 = 2199843450LLU;
	int32_t x3544 = INT32_MIN;

    t75 = (((x3541%x3542)<<x3543)>x3544);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x3557 = UINT16_MAX;
	volatile int64_t x3559 = 1LL;
	int32_t x3560 = INT32_MIN;
	volatile int32_t t76 = -25595215;

    t76 = (((x3557%x3558)<<x3559)>x3560);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x3566 = 50U;
	int8_t x3567 = 1;
	uint8_t x3568 = UINT8_MAX;
	volatile int32_t t77 = -1048885;

    t77 = (((x3565%x3566)<<x3567)>x3568);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x3574 = INT32_MAX;
	volatile uint8_t x3575 = 18U;
	int8_t x3576 = INT8_MIN;
	int32_t t78 = -1;

    t78 = (((x3573%x3574)<<x3575)>x3576);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x3657 = 35245983064392645LLU;
	uint8_t x3660 = UINT8_MAX;
	static volatile int32_t t79 = 0;

    t79 = (((x3657%x3658)<<x3659)>x3660);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x3701 = UINT32_MAX;
	static uint16_t x3702 = 25U;
	static int8_t x3704 = 1;
	static volatile int32_t t80 = -14928596;

    t80 = (((x3701%x3702)<<x3703)>x3704);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x3769 = INT32_MIN;
	uint8_t x3771 = 6U;
	static int32_t t81 = 7539739;

    t81 = (((x3769%x3770)<<x3771)>x3772);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x3857 = 614676864313265589LLU;
	volatile int64_t x3858 = -247465797296LL;
	uint64_t x3859 = 0LLU;
	uint32_t x3860 = 28659117U;
	volatile int32_t t82 = 201;

    t82 = (((x3857%x3858)<<x3859)>x3860);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x3977 = 139100738715369288LLU;
	uint64_t x3978 = 29LLU;
	static int32_t x3979 = 7;
	static uint64_t x3980 = 7034678198265108LLU;
	static volatile int32_t t83 = 259740650;

    t83 = (((x3977%x3978)<<x3979)>x3980);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x4029 = INT32_MIN;
	uint32_t x4030 = 157378096U;
	uint8_t x4031 = 0U;
	static int8_t x4032 = INT8_MIN;
	int32_t t84 = 508;

    t84 = (((x4029%x4030)<<x4031)>x4032);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x4063 = 2;
	volatile int32_t t85 = 55187;

    t85 = (((x4061%x4062)<<x4063)>x4064);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x4069 = UINT8_MAX;
	int64_t x4070 = INT64_MIN;
	uint8_t x4071 = 1U;
	int16_t x4072 = 251;

    t86 = (((x4069%x4070)<<x4071)>x4072);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x4077 = -19;
	int32_t x4078 = 1;
	uint16_t x4079 = 1U;
	volatile int8_t x4080 = -1;
	int32_t t87 = -3;

    t87 = (((x4077%x4078)<<x4079)>x4080);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x4097 = UINT8_MAX;
	volatile int64_t x4098 = INT64_MIN;
	int16_t x4099 = 24;
	int8_t x4100 = -1;
	int32_t t88 = 177599;

    t88 = (((x4097%x4098)<<x4099)>x4100);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x4178 = INT8_MIN;
	uint8_t x4179 = 0U;
	int32_t x4180 = -5839;

    t89 = (((x4177%x4178)<<x4179)>x4180);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x4213 = 4808275286153013243LLU;
	static int8_t x4214 = INT8_MAX;
	int64_t x4215 = 1LL;
	int32_t x4216 = INT32_MAX;
	static int32_t t90 = -932231;

    t90 = (((x4213%x4214)<<x4215)>x4216);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x4221 = -1;
	int32_t x4222 = -1;
	uint16_t x4223 = 28U;
	uint16_t x4224 = 5U;
	int32_t t91 = -4741;

    t91 = (((x4221%x4222)<<x4223)>x4224);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x4225 = UINT16_MAX;
	int8_t x4226 = -1;
	int16_t x4227 = 1;
	uint8_t x4228 = 11U;
	static int32_t t92 = -2029;

    t92 = (((x4225%x4226)<<x4227)>x4228);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x4233 = 19U;
	uint8_t x4235 = 18U;
	uint8_t x4236 = 17U;
	int32_t t93 = -124577922;

    t93 = (((x4233%x4234)<<x4235)>x4236);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x4273 = 545458107460LLU;
	uint64_t x4274 = 23938310LLU;
	uint8_t x4275 = 23U;
	volatile uint64_t x4276 = 1LLU;
	int32_t t94 = 29;

    t94 = (((x4273%x4274)<<x4275)>x4276);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint64_t x4325 = 37937LLU;
	uint16_t x4326 = UINT16_MAX;
	static volatile uint8_t x4327 = 17U;
	int16_t x4328 = INT16_MIN;
	int32_t t95 = 0;

    t95 = (((x4325%x4326)<<x4327)>x4328);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x4345 = INT16_MIN;
	static int8_t x4346 = -1;
	volatile uint8_t x4347 = 4U;
	int64_t x4348 = INT64_MIN;
	static int32_t t96 = 284253527;

    t96 = (((x4345%x4346)<<x4347)>x4348);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x4394 = 8830075557033792682LLU;
	uint8_t x4395 = 5U;
	uint16_t x4396 = UINT16_MAX;
	volatile int32_t t97 = 1;

    t97 = (((x4393%x4394)<<x4395)>x4396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x4430 = INT16_MAX;
	uint8_t x4431 = 3U;
	volatile int16_t x4432 = -11;
	int32_t t98 = 889927;

    t98 = (((x4429%x4430)<<x4431)>x4432);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x4437 = 19648U;
	uint64_t x4438 = 3576593242LLU;
	int16_t x4440 = INT16_MIN;
	volatile int32_t t99 = -6;

    t99 = (((x4437%x4438)<<x4439)>x4440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x4510 = -1;
	static uint8_t x4511 = 2U;
	uint8_t x4512 = 4U;
	int32_t t100 = 16;

    t100 = (((x4509%x4510)<<x4511)>x4512);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x4549 = UINT64_MAX;
	int16_t x4550 = INT16_MAX;
	volatile uint16_t x4551 = 1U;
	int64_t x4552 = INT64_MIN;
	int32_t t101 = -2868;

    t101 = (((x4549%x4550)<<x4551)>x4552);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x4567 = 13U;
	int32_t x4568 = INT32_MIN;
	int32_t t102 = 98269;

    t102 = (((x4565%x4566)<<x4567)>x4568);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x4573 = -1;
	int64_t x4575 = 1LL;
	int8_t x4576 = INT8_MAX;
	int32_t t103 = 1194452;

    t103 = (((x4573%x4574)<<x4575)>x4576);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x4585 = 7;
	static volatile int64_t x4586 = -1LL;
	uint16_t x4587 = 2U;
	static volatile int16_t x4588 = -1;
	int32_t t104 = -392158;

    t104 = (((x4585%x4586)<<x4587)>x4588);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x4777 = UINT32_MAX;
	volatile int64_t x4778 = -150260195714422001LL;
	int32_t t105 = 42747041;

    t105 = (((x4777%x4778)<<x4779)>x4780);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x4921 = UINT32_MAX;
	static uint8_t x4922 = UINT8_MAX;
	int16_t x4923 = 0;
	int8_t x4924 = INT8_MAX;
	static int32_t t106 = 1023063;

    t106 = (((x4921%x4922)<<x4923)>x4924);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x4929 = INT8_MAX;
	static uint32_t x4930 = 5956U;

    t107 = (((x4929%x4930)<<x4931)>x4932);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x5013 = INT64_MAX;
	int8_t x5014 = 3;
	int8_t x5015 = 0;
	static int16_t x5016 = INT16_MAX;

    t108 = (((x5013%x5014)<<x5015)>x5016);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x5121 = INT32_MAX;
	int64_t x5122 = INT64_MIN;
	static volatile int64_t x5124 = INT64_MIN;
	volatile int32_t t109 = -4169311;

    t109 = (((x5121%x5122)<<x5123)>x5124);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x5257 = INT64_MAX;
	static int8_t x5258 = -22;
	static volatile int16_t x5260 = -1;
	volatile int32_t t110 = -1048788124;

    t110 = (((x5257%x5258)<<x5259)>x5260);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x5269 = -13460940081537883LL;
	static uint16_t x5271 = 15U;
	uint64_t x5272 = 423921606370LLU;
	static int32_t t111 = 35;

    t111 = (((x5269%x5270)<<x5271)>x5272);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5294 = -1;
	uint8_t x5295 = 0U;
	uint64_t x5296 = UINT64_MAX;

    t112 = (((x5293%x5294)<<x5295)>x5296);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x5378 = UINT64_MAX;
	uint8_t x5379 = 30U;
	int32_t x5380 = INT32_MIN;
	static volatile int32_t t113 = 1051610;

    t113 = (((x5377%x5378)<<x5379)>x5380);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x5417 = 3327;
	static int32_t x5418 = -5;
	static int8_t x5419 = 3;
	int32_t x5420 = INT32_MAX;

    t114 = (((x5417%x5418)<<x5419)>x5420);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x5465 = 1202861;
	static int32_t x5466 = -12;
	volatile int64_t x5467 = 0LL;
	int32_t x5468 = -1;
	volatile int32_t t115 = 16801;

    t115 = (((x5465%x5466)<<x5467)>x5468);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x5489 = 21U;
	uint16_t x5490 = UINT16_MAX;
	static volatile uint8_t x5491 = 1U;
	volatile int32_t t116 = -1243314;

    t116 = (((x5489%x5490)<<x5491)>x5492);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x5537 = 23820440308LL;
	static uint64_t x5538 = 29274358639054LLU;
	int8_t x5539 = 7;
	int16_t x5540 = -1;
	volatile int32_t t117 = -25;

    t117 = (((x5537%x5538)<<x5539)>x5540);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x5549 = INT8_MIN;
	volatile int8_t x5550 = -1;
	int32_t x5552 = 1847103;

    t118 = (((x5549%x5550)<<x5551)>x5552);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x5593 = INT8_MAX;
	volatile uint8_t x5595 = 3U;
	volatile int8_t x5596 = -1;
	volatile int32_t t119 = 38;

    t119 = (((x5593%x5594)<<x5595)>x5596);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x5673 = 15LLU;
	uint32_t x5674 = UINT32_MAX;
	uint8_t x5675 = 54U;
	static int16_t x5676 = 8381;

    t120 = (((x5673%x5674)<<x5675)>x5676);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x5733 = 0U;
	static uint16_t x5734 = 47U;
	uint8_t x5735 = 6U;
	uint8_t x5736 = 0U;

    t121 = (((x5733%x5734)<<x5735)>x5736);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x5882 = INT64_MIN;
	static volatile uint64_t x5883 = 58LLU;
	static volatile int32_t t122 = 111400510;

    t122 = (((x5881%x5882)<<x5883)>x5884);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x5885 = UINT8_MAX;
	volatile int16_t x5886 = INT16_MAX;
	static volatile uint16_t x5887 = 0U;
	static int32_t t123 = -3;

    t123 = (((x5885%x5886)<<x5887)>x5888);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x5893 = 87457273;
	int8_t x5894 = INT8_MIN;
	int16_t x5895 = 4;
	int32_t x5896 = INT32_MIN;
	static int32_t t124 = 13672641;

    t124 = (((x5893%x5894)<<x5895)>x5896);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x5897 = -1;
	static uint8_t x5899 = 29U;
	int8_t x5900 = INT8_MIN;
	static int32_t t125 = -3131093;

    t125 = (((x5897%x5898)<<x5899)>x5900);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x5901 = INT8_MAX;
	int8_t x5902 = INT8_MIN;
	static volatile uint64_t x5903 = 0LLU;
	int32_t x5904 = INT32_MIN;
	int32_t t126 = -2;

    t126 = (((x5901%x5902)<<x5903)>x5904);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x5926 = 1U;
	uint8_t x5927 = 5U;
	static uint8_t x5928 = 1U;
	int32_t t127 = 3;

    t127 = (((x5925%x5926)<<x5927)>x5928);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x6030 = 151913836934210LL;
	int32_t t128 = 244584;

    t128 = (((x6029%x6030)<<x6031)>x6032);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x6065 = INT8_MIN;
	static uint32_t x6066 = 30700418U;
	int8_t x6067 = 1;
	static uint8_t x6068 = UINT8_MAX;

    t129 = (((x6065%x6066)<<x6067)>x6068);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x6109 = 0LLU;
	int16_t x6110 = -1;
	int64_t x6112 = INT64_MIN;
	volatile int32_t t130 = -89560509;

    t130 = (((x6109%x6110)<<x6111)>x6112);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x6113 = UINT8_MAX;
	int32_t x6114 = INT32_MIN;
	uint16_t x6115 = 1U;
	static int16_t x6116 = -1;
	static volatile int32_t t131 = 1059230;

    t131 = (((x6113%x6114)<<x6115)>x6116);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x6161 = UINT8_MAX;
	uint64_t x6162 = 358254635735LLU;
	static uint8_t x6163 = 17U;
	int32_t t132 = -80290425;

    t132 = (((x6161%x6162)<<x6163)>x6164);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x6197 = INT16_MIN;
	volatile int64_t x6198 = -1LL;
	uint8_t x6199 = 37U;
	uint8_t x6200 = UINT8_MAX;
	int32_t t133 = 488759;

    t133 = (((x6197%x6198)<<x6199)>x6200);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x6245 = UINT32_MAX;
	static uint8_t x6246 = 24U;
	uint8_t x6247 = 8U;
	int32_t t134 = 33;

    t134 = (((x6245%x6246)<<x6247)>x6248);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x6265 = 85596181826133141LLU;
	int16_t x6266 = INT16_MAX;
	volatile int8_t x6267 = 1;
	int64_t x6268 = INT64_MAX;
	volatile int32_t t135 = -78605091;

    t135 = (((x6265%x6266)<<x6267)>x6268);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x6298 = INT8_MIN;
	static int16_t x6299 = 3;
	volatile int32_t t136 = 1043;

    t136 = (((x6297%x6298)<<x6299)>x6300);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x6389 = INT8_MAX;
	int8_t x6391 = 9;
	uint32_t x6392 = 2U;
	volatile int32_t t137 = -285115259;

    t137 = (((x6389%x6390)<<x6391)>x6392);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x6433 = UINT32_MAX;
	static uint16_t x6434 = UINT16_MAX;
	static volatile uint8_t x6435 = 2U;
	int16_t x6436 = -10;
	volatile int32_t t138 = -3025856;

    t138 = (((x6433%x6434)<<x6435)>x6436);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x6453 = INT32_MIN;
	uint64_t x6454 = 4472LLU;
	static uint16_t x6455 = 29U;

    t139 = (((x6453%x6454)<<x6455)>x6456);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x6458 = 4;
	uint8_t x6459 = 41U;
	uint8_t x6460 = UINT8_MAX;
	static int32_t t140 = 3222064;

    t140 = (((x6457%x6458)<<x6459)>x6460);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x6461 = -1;
	uint8_t x6463 = 1U;
	uint32_t x6464 = UINT32_MAX;
	volatile int32_t t141 = 66;

    t141 = (((x6461%x6462)<<x6463)>x6464);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x6533 = UINT8_MAX;
	int32_t x6534 = INT32_MAX;
	volatile uint8_t x6535 = 2U;
	static volatile int32_t x6536 = INT32_MIN;

    t142 = (((x6533%x6534)<<x6535)>x6536);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x6542 = 1U;
	uint8_t x6544 = 81U;
	int32_t t143 = 839441;

    t143 = (((x6541%x6542)<<x6543)>x6544);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x6565 = 11;
	int64_t x6566 = -7975081689LL;

    t144 = (((x6565%x6566)<<x6567)>x6568);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x6637 = -3247;
	uint32_t x6638 = 587605369U;
	static int8_t x6639 = 1;
	int32_t t145 = -1194429;

    t145 = (((x6637%x6638)<<x6639)>x6640);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x6686 = 438735462LLU;
	int8_t x6687 = 16;
	int16_t x6688 = 10;

    t146 = (((x6685%x6686)<<x6687)>x6688);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x6717 = INT64_MIN;
	int64_t x6718 = INT64_MIN;
	int16_t x6719 = 46;

    t147 = (((x6717%x6718)<<x6719)>x6720);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x6765 = 1;
	uint8_t x6767 = 2U;
	volatile int8_t x6768 = -5;
	volatile int32_t t148 = -3;

    t148 = (((x6765%x6766)<<x6767)>x6768);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x6813 = 28;
	int16_t x6814 = INT16_MIN;
	uint8_t x6815 = 10U;
	volatile int32_t t149 = -146;

    t149 = (((x6813%x6814)<<x6815)>x6816);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x6825 = 8;
	int32_t x6826 = -4776228;
	static int16_t x6827 = 1;
	volatile int64_t x6828 = INT64_MIN;

    t150 = (((x6825%x6826)<<x6827)>x6828);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x6913 = 123U;
	uint32_t x6914 = 10020308U;
	uint32_t x6915 = 8U;
	uint8_t x6916 = 6U;
	volatile int32_t t151 = -314;

    t151 = (((x6913%x6914)<<x6915)>x6916);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x6941 = -1;
	uint16_t x6943 = 0U;
	static uint8_t x6944 = 5U;
	volatile int32_t t152 = -3;

    t152 = (((x6941%x6942)<<x6943)>x6944);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x6975 = 5U;
	volatile int32_t t153 = 0;

    t153 = (((x6973%x6974)<<x6975)>x6976);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x7013 = INT16_MAX;
	int16_t x7014 = -1;
	static int8_t x7015 = 0;
	int8_t x7016 = -3;
	volatile int32_t t154 = 6;

    t154 = (((x7013%x7014)<<x7015)>x7016);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x7021 = INT64_MAX;
	int16_t x7022 = INT16_MAX;
	uint16_t x7023 = 6U;
	int32_t x7024 = -1;
	static int32_t t155 = 84075429;

    t155 = (((x7021%x7022)<<x7023)>x7024);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x7053 = 4U;
	uint32_t x7054 = 1118517408U;
	volatile int32_t x7055 = 3;
	uint16_t x7056 = UINT16_MAX;
	volatile int32_t t156 = -1;

    t156 = (((x7053%x7054)<<x7055)>x7056);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x7069 = INT32_MAX;
	volatile uint16_t x7070 = 398U;
	volatile uint8_t x7071 = 6U;
	int16_t x7072 = INT16_MAX;

    t157 = (((x7069%x7070)<<x7071)>x7072);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x7089 = INT16_MIN;
	volatile int8_t x7090 = INT8_MIN;
	uint16_t x7091 = 9U;
	int64_t x7092 = INT64_MIN;
	volatile int32_t t158 = -30117421;

    t158 = (((x7089%x7090)<<x7091)>x7092);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x7137 = 1;
	int64_t x7138 = INT64_MIN;
	uint16_t x7139 = 4U;
	uint32_t x7140 = 7616062U;
	int32_t t159 = 6067245;

    t159 = (((x7137%x7138)<<x7139)>x7140);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x7197 = 2;
	uint8_t x7199 = 23U;
	int8_t x7200 = -2;

    t160 = (((x7197%x7198)<<x7199)>x7200);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x7226 = -1LL;
	uint8_t x7227 = 3U;
	volatile uint16_t x7228 = 8192U;
	static volatile int32_t t161 = 1;

    t161 = (((x7225%x7226)<<x7227)>x7228);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x7269 = 122U;
	volatile int32_t x7272 = 50042;

    t162 = (((x7269%x7270)<<x7271)>x7272);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x7353 = 3726490U;
	uint8_t x7355 = 32U;
	volatile int32_t x7356 = INT32_MIN;

    t163 = (((x7353%x7354)<<x7355)>x7356);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x7437 = INT32_MAX;
	static int16_t x7438 = INT16_MIN;
	int64_t x7439 = 0LL;
	uint8_t x7440 = 79U;
	int32_t t164 = -4009601;

    t164 = (((x7437%x7438)<<x7439)>x7440);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x7489 = 839U;
	int8_t x7490 = INT8_MAX;
	volatile uint8_t x7491 = 0U;

    t165 = (((x7489%x7490)<<x7491)>x7492);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x7521 = INT16_MAX;
	int64_t x7522 = -12077348LL;
	uint16_t x7523 = 1U;
	uint16_t x7524 = 280U;
	volatile int32_t t166 = 1;

    t166 = (((x7521%x7522)<<x7523)>x7524);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x7594 = -1LL;
	volatile uint64_t x7595 = 28LLU;
	volatile int32_t t167 = -3467143;

    t167 = (((x7593%x7594)<<x7595)>x7596);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x7781 = UINT32_MAX;
	int32_t x7782 = -1;
	volatile int32_t t168 = 0;

    t168 = (((x7781%x7782)<<x7783)>x7784);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x7841 = 42U;
	int16_t x7842 = INT16_MIN;
	volatile uint8_t x7843 = 7U;
	int8_t x7844 = -1;
	static volatile int32_t t169 = -354;

    t169 = (((x7841%x7842)<<x7843)>x7844);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x7857 = INT16_MIN;
	volatile int16_t x7858 = -1;
	int16_t x7860 = INT16_MIN;

    t170 = (((x7857%x7858)<<x7859)>x7860);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x7877 = INT16_MAX;
	int32_t x7878 = -1;
	int8_t x7879 = 0;
	volatile uint32_t x7880 = UINT32_MAX;
	int32_t t171 = -828;

    t171 = (((x7877%x7878)<<x7879)>x7880);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x7893 = UINT32_MAX;
	uint32_t x7896 = UINT32_MAX;

    t172 = (((x7893%x7894)<<x7895)>x7896);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x7950 = INT16_MIN;
	uint8_t x7951 = 9U;
	uint8_t x7952 = 42U;
	volatile int32_t t173 = -91755;

    t173 = (((x7949%x7950)<<x7951)>x7952);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x7985 = INT32_MAX;
	static int64_t x7986 = -1LL;
	static int8_t x7987 = 5;
	int64_t x7988 = 1515844126LL;
	int32_t t174 = -5;

    t174 = (((x7985%x7986)<<x7987)>x7988);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x7989 = UINT8_MAX;
	uint16_t x7990 = 6U;
	int8_t x7991 = 19;

    t175 = (((x7989%x7990)<<x7991)>x7992);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x8005 = 873818493221531LL;
	int32_t x8006 = INT32_MIN;
	uint32_t x8007 = 12U;
	volatile int32_t t176 = -15754;

    t176 = (((x8005%x8006)<<x8007)>x8008);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x8013 = 8444LL;
	uint8_t x8015 = 0U;
	int64_t x8016 = -3043222230197LL;
	static int32_t t177 = -9894141;

    t177 = (((x8013%x8014)<<x8015)>x8016);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x8025 = 1591524U;
	int8_t x8026 = INT8_MIN;
	static volatile uint8_t x8027 = 1U;
	volatile uint16_t x8028 = 3625U;
	volatile int32_t t178 = 2;

    t178 = (((x8025%x8026)<<x8027)>x8028);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x8131 = 1U;
	uint16_t x8132 = UINT16_MAX;
	int32_t t179 = -1093;

    t179 = (((x8129%x8130)<<x8131)>x8132);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x8145 = -8420445;
	int8_t x8146 = -1;
	int16_t x8147 = 1;
	uint64_t x8148 = UINT64_MAX;
	int32_t t180 = -1;

    t180 = (((x8145%x8146)<<x8147)>x8148);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x8182 = 14021070186715673LLU;
	static volatile uint32_t x8184 = UINT32_MAX;
	volatile int32_t t181 = -90068181;

    t181 = (((x8181%x8182)<<x8183)>x8184);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x8273 = INT8_MAX;
	int8_t x8275 = 13;
	uint16_t x8276 = 321U;

    t182 = (((x8273%x8274)<<x8275)>x8276);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x8313 = INT8_MAX;
	static int32_t x8314 = 157800;
	volatile int16_t x8315 = 5;
	int8_t x8316 = 29;
	int32_t t183 = -161103;

    t183 = (((x8313%x8314)<<x8315)>x8316);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x8357 = INT16_MAX;
	int32_t x8358 = 497;
	uint16_t x8359 = 4U;
	int8_t x8360 = INT8_MIN;

    t184 = (((x8357%x8358)<<x8359)>x8360);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x8461 = 53848964U;
	static uint32_t x8462 = 416U;
	int8_t x8463 = 0;
	int16_t x8464 = -1;
	static int32_t t185 = -3;

    t185 = (((x8461%x8462)<<x8463)>x8464);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x8477 = INT16_MAX;
	volatile uint32_t x8478 = 1009287U;
	int32_t x8479 = 0;
	volatile uint32_t x8480 = UINT32_MAX;

    t186 = (((x8477%x8478)<<x8479)>x8480);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x8486 = -1;
	static uint16_t x8487 = 5U;
	int16_t x8488 = 2980;
	volatile int32_t t187 = -27877;

    t187 = (((x8485%x8486)<<x8487)>x8488);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x8521 = 82U;
	static int32_t x8522 = INT32_MIN;
	static uint8_t x8523 = 16U;
	int32_t x8524 = INT32_MIN;
	volatile int32_t t188 = -1;

    t188 = (((x8521%x8522)<<x8523)>x8524);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x8561 = 40;
	int8_t x8564 = INT8_MIN;
	int32_t t189 = -116135557;

    t189 = (((x8561%x8562)<<x8563)>x8564);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x8581 = UINT16_MAX;
	uint8_t x8583 = 17U;
	int32_t x8584 = -104954377;
	volatile int32_t t190 = 47;

    t190 = (((x8581%x8582)<<x8583)>x8584);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x8613 = 44U;
	int16_t x8614 = INT16_MIN;
	static int16_t x8615 = 0;
	int64_t x8616 = INT64_MAX;
	volatile int32_t t191 = 17397296;

    t191 = (((x8613%x8614)<<x8615)>x8616);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x8646 = INT16_MIN;
	int8_t x8647 = 1;
	int32_t x8648 = INT32_MIN;
	static int32_t t192 = -782471528;

    t192 = (((x8645%x8646)<<x8647)>x8648);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x8661 = INT8_MIN;
	static int64_t x8662 = -1LL;
	int64_t x8664 = -1LL;
	volatile int32_t t193 = 193777753;

    t193 = (((x8661%x8662)<<x8663)>x8664);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint32_t x8681 = 26464U;
	static int64_t x8682 = INT64_MAX;
	volatile int32_t x8683 = 48;
	uint16_t x8684 = UINT16_MAX;
	volatile int32_t t194 = -1;

    t194 = (((x8681%x8682)<<x8683)>x8684);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x8741 = 23;
	uint32_t x8742 = 6471850U;
	int16_t x8744 = 1077;
	volatile int32_t t195 = 9667;

    t195 = (((x8741%x8742)<<x8743)>x8744);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x8765 = 224865LLU;
	static int32_t x8766 = INT32_MIN;
	volatile uint8_t x8767 = 1U;
	static int8_t x8768 = 53;
	int32_t t196 = 0;

    t196 = (((x8765%x8766)<<x8767)>x8768);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x8790 = 123002791;
	uint16_t x8791 = 0U;
	static uint64_t x8792 = 136400061623369439LLU;

    t197 = (((x8789%x8790)<<x8791)>x8792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x8825 = INT8_MIN;
	volatile uint32_t x8827 = 22U;
	int16_t x8828 = -1;
	volatile int32_t t198 = -23708;

    t198 = (((x8825%x8826)<<x8827)>x8828);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x8881 = UINT32_MAX;
	int32_t x8882 = INT32_MIN;
	uint16_t x8883 = 2U;
	uint32_t x8884 = 891487132U;

    t199 = (((x8881%x8882)<<x8883)>x8884);

    if (t199 != 1) { NG(); } else { ; }
	
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

