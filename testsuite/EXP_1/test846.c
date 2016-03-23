
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

static volatile uint64_t x1 = UINT64_MAX;
static uint64_t x2 = UINT64_MAX;
uint64_t x13 = UINT64_MAX;
volatile uint32_t x15 = UINT32_MAX;
static uint8_t x152 = 22U;
int64_t t5 = 1LL;
int8_t x157 = 7;
volatile int32_t x159 = 919038099;
static volatile uint16_t x276 = 2U;
int64_t t8 = 29099645905822046LL;
static uint8_t x378 = 43U;
volatile uint32_t t13 = 260608U;
uint16_t x545 = 373U;
uint8_t x546 = 3U;
static uint8_t x548 = 10U;
int64_t x630 = INT64_MIN;
uint16_t x706 = 330U;
uint16_t x802 = UINT16_MAX;
static int16_t x941 = INT16_MIN;
uint64_t x945 = UINT64_MAX;
int16_t x957 = 1;
int32_t x959 = INT32_MAX;
int32_t t21 = 480;
volatile uint16_t x1041 = 67U;
int64_t t23 = 2200464118862888710LL;
uint32_t x1141 = 20379371U;
volatile uint32_t t24 = 13U;
static volatile uint32_t x1166 = UINT32_MAX;
static uint16_t x1294 = 1U;
uint32_t x1295 = 33548U;
int32_t x1318 = INT32_MIN;
static volatile int32_t t30 = 81879474;
int16_t x1603 = 1;
static volatile int32_t t34 = 305;
static volatile int32_t t35 = -85954;
uint64_t x1727 = 3174022732259LLU;
uint32_t x1732 = 58U;
uint8_t x1772 = 15U;
static volatile int64_t t40 = -239867LL;
volatile uint8_t x1948 = 3U;
int32_t x1966 = -1;
int16_t x1967 = INT16_MIN;
int8_t x1979 = INT8_MIN;
static volatile uint8_t x2016 = 4U;
uint64_t t46 = 46020LLU;
uint64_t t47 = 6564573508762LLU;
int32_t x2142 = INT32_MIN;
volatile int16_t x2164 = 1;
volatile int32_t x2177 = -1;
int32_t x2291 = INT32_MIN;
volatile int32_t t54 = 593;
volatile uint64_t t56 = 683288LLU;
uint64_t x2463 = UINT64_MAX;
volatile uint64_t t58 = 140785LLU;
uint8_t x2484 = 6U;
uint8_t x2620 = 15U;
volatile int64_t t63 = -867756348964327664LL;
uint64_t t64 = 31102LLU;
volatile uint16_t x2654 = 21U;
uint32_t x2701 = 1533089U;
uint64_t x2703 = UINT64_MAX;
int64_t t67 = -1LL;
volatile int16_t x2741 = -1;
static int64_t x2778 = 638LL;
uint16_t x2808 = 12U;
volatile uint64_t t72 = 9LLU;
int32_t x2834 = -33003718;
int64_t t73 = -51299946923038LL;
volatile uint64_t t76 = 60872672LLU;
int64_t x2897 = INT64_MAX;
int64_t x2901 = 5669162253875LL;
int8_t x2902 = INT8_MAX;
uint64_t t79 = 601106LLU;
uint32_t x3093 = 6627U;
static uint64_t t80 = 13779LLU;
int32_t t83 = 35;
volatile int16_t x3233 = -1;
uint8_t x3236 = 29U;
static volatile uint32_t t85 = 3059787U;
uint8_t x3268 = 1U;
uint8_t x3290 = UINT8_MAX;
int32_t t88 = 1798;
int8_t x3389 = INT8_MAX;
volatile uint32_t x3390 = 2483707U;
uint64_t x3502 = 40620442661376594LLU;
volatile uint64_t t92 = 61209676510994LLU;
int16_t x3610 = INT16_MIN;
static uint32_t t94 = 4827U;
uint64_t x3646 = UINT64_MAX;
int32_t x3659 = INT32_MIN;
int8_t x3660 = 7;
static uint32_t t97 = 2633333U;
int32_t x3725 = -3;
uint8_t x3728 = 28U;
uint32_t x3784 = 10U;
volatile int64_t t102 = -1554297178579716786LL;
static int32_t x3813 = INT32_MAX;
volatile int32_t x3841 = -14;
int8_t x3842 = -1;
static volatile uint8_t x3871 = 8U;
uint16_t x3872 = 11U;
static int8_t x3993 = -13;
uint16_t x3994 = 1U;
volatile int16_t x4053 = 0;
int8_t x4055 = -1;
volatile uint64_t t109 = 108526830LLU;
int8_t x4088 = 0;
static uint64_t t111 = 90504814LLU;
int64_t x4203 = INT64_MAX;
uint64_t x4310 = 476LLU;
int8_t x4333 = 1;
uint64_t x4365 = 43932LLU;
volatile uint8_t x4385 = 13U;
uint32_t x4388 = 10U;
static int32_t x4399 = INT32_MIN;
int16_t x4405 = 120;
uint32_t x4414 = 118U;
int64_t x4446 = -1LL;
int32_t x4447 = -1;
volatile uint8_t x4448 = 7U;
volatile int32_t t122 = 1049778569;
uint32_t t124 = 429694U;
int16_t x4707 = -1;
int8_t x4708 = 7;
uint32_t x4772 = 3U;
static int64_t x4825 = INT64_MAX;
int64_t x4826 = INT64_MIN;
static volatile int64_t t128 = 951913535306713398LL;
volatile int64_t t130 = 15289953702286LL;
uint8_t x5192 = 0U;
static volatile int32_t x5342 = INT32_MIN;
uint8_t x5344 = 28U;
volatile int32_t x5367 = -1;
int16_t x5369 = INT16_MIN;
static volatile int8_t x5370 = INT8_MAX;
volatile uint32_t t137 = 364851U;
uint8_t x5444 = 27U;
static int32_t x5486 = INT32_MIN;
uint64_t t141 = 2274LLU;
uint32_t x5521 = 309211249U;
static int8_t x5524 = 1;
int32_t x5526 = INT32_MIN;
int8_t x5528 = 0;
volatile int16_t x5533 = 14485;
int32_t x5545 = 250011;
uint8_t x5578 = 113U;
int8_t x5579 = -1;
static int64_t t146 = 620500252176484LL;
static int32_t t148 = -12;
uint8_t x5888 = 3U;
static uint16_t x5964 = 3U;
int8_t x5988 = 2;
volatile int32_t x6031 = 24379;
volatile int8_t x6093 = INT8_MIN;
volatile int32_t t158 = -15553;
int64_t x6279 = -1LL;
static int32_t x6290 = 27;
static volatile uint8_t x6291 = 1U;
int32_t x6310 = INT32_MAX;
volatile int8_t x6332 = 0;
static volatile int32_t t164 = 3;
volatile uint32_t x6446 = 1008U;
int64_t x6447 = INT64_MAX;
int8_t x6461 = INT8_MIN;
uint8_t x6462 = 1U;
volatile int32_t t168 = -253608;
int16_t x6646 = -215;
static uint32_t x6648 = 5U;
int8_t x6741 = INT8_MIN;
uint16_t x6744 = 0U;
volatile uint32_t t173 = 505U;
volatile int16_t x6870 = -1;
uint16_t x6872 = 4U;
int8_t x6907 = -1;
volatile uint16_t x7205 = 13403U;
volatile int64_t t182 = -218791904166LL;
int16_t x7297 = INT16_MIN;
static int8_t x7299 = INT8_MIN;
static volatile int16_t x7365 = -1820;
uint64_t x7481 = 7976337167633LLU;
uint8_t x7528 = 18U;
int64_t t193 = -1355LL;
uint16_t x7596 = 2U;
volatile int32_t x7625 = 4;
uint32_t x7627 = UINT32_MAX;
uint64_t x7634 = 125540058LLU;
uint32_t x7661 = 7U;


void f0(void) {
    	int32_t x3 = -1;
	static volatile uint8_t x4 = 49U;
	volatile uint64_t t0 = 125092LLU;

    t0 = (((x1%x2)%x3)<<x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	int16_t x6 = -1;
	static volatile int8_t x7 = INT8_MAX;
	volatile int8_t x8 = 0;
	int32_t t1 = 19;

    t1 = (((x5%x6)%x7)<<x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x14 = INT64_MIN;
	volatile int64_t x16 = 1LL;
	uint64_t t2 = 170911286LLU;

    t2 = (((x13%x14)%x15)<<x16);

    if (t2 != 4294967294LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x85 = INT8_MAX;
	static int32_t x86 = INT32_MAX;
	int64_t x87 = -1LL;
	uint16_t x88 = 27U;
	volatile int64_t t3 = -22062LL;

    t3 = (((x85%x86)%x87)<<x88);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x101 = UINT32_MAX;
	static int64_t x102 = INT64_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	int16_t x104 = 7;
	volatile int64_t t4 = 585496878467136LL;

    t4 = (((x101%x102)%x103)<<x104);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x149 = 9U;
	int64_t x150 = INT64_MIN;
	int64_t x151 = INT64_MAX;

    t5 = (((x149%x150)%x151)<<x152);

    if (t5 != 37748736LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x158 = 860170;
	int8_t x160 = 0;
	volatile int32_t t6 = -16;

    t6 = (((x157%x158)%x159)<<x160);

    if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x237 = INT64_MAX;
	int64_t x238 = -1LL;
	int64_t x239 = 534501424LL;
	volatile int8_t x240 = 0;
	static int64_t t7 = 63LL;

    t7 = (((x237%x238)%x239)<<x240);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x273 = 2U;
	volatile int64_t x274 = INT64_MIN;
	volatile uint8_t x275 = 6U;

    t8 = (((x273%x274)%x275)<<x276);

    if (t8 != 8LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x341 = UINT8_MAX;
	volatile uint16_t x342 = 224U;
	int16_t x343 = INT16_MAX;
	volatile int8_t x344 = 4;
	static int32_t t9 = -1929;

    t9 = (((x341%x342)%x343)<<x344);

    if (t9 != 496) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x377 = INT64_MAX;
	volatile int32_t x379 = -1;
	uint16_t x380 = 0U;
	static volatile int64_t t10 = -533961324767394LL;

    t10 = (((x377%x378)%x379)<<x380);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x389 = INT32_MAX;
	int64_t x390 = -647540089395754LL;
	volatile uint64_t x391 = 255054LLU;
	volatile uint8_t x392 = 48U;
	static uint64_t t11 = 972729263997LLU;

    t11 = (((x389%x390)%x391)<<x392);

    if (t11 != 14903818541852524544LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x409 = 5488000564659517LLU;
	int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MAX;
	static uint8_t x412 = 2U;
	uint64_t t12 = 16550422832LLU;

    t12 = (((x409%x410)%x411)<<x412);

    if (t12 != 110020LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x529 = 29;
	int16_t x530 = 827;
	volatile uint32_t x531 = UINT32_MAX;
	int16_t x532 = 14;

    t13 = (((x529%x530)%x531)<<x532);

    if (t13 != 475136U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x547 = INT8_MIN;
	volatile int32_t t14 = 0;

    t14 = (((x545%x546)%x547)<<x548);

    if (t14 != 1024) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x629 = INT64_MIN;
	static volatile int64_t x631 = INT64_MAX;
	int16_t x632 = 37;
	volatile int64_t t15 = -56733LL;

    t15 = (((x629%x630)%x631)<<x632);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x705 = 15;
	uint64_t x707 = UINT64_MAX;
	volatile uint8_t x708 = 4U;
	uint64_t t16 = 1074194231360208LLU;

    t16 = (((x705%x706)%x707)<<x708);

    if (t16 != 240LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x785 = 160537054LL;
	int64_t x786 = INT64_MIN;
	static int32_t x787 = 598289685;
	int8_t x788 = 0;
	volatile int64_t t17 = -2426540369764LL;

    t17 = (((x785%x786)%x787)<<x788);

    if (t17 != 160537054LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x801 = 1U;
	static int32_t x803 = 908875;
	uint32_t x804 = 12U;
	int32_t t18 = 117557;

    t18 = (((x801%x802)%x803)<<x804);

    if (t18 != 4096) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x942 = INT16_MAX;
	uint64_t x943 = 522906788870LLU;
	uint16_t x944 = 5U;
	uint64_t t19 = 3LLU;

    t19 = (((x941%x942)%x943)<<x944);

    if (t19 != 7278450868960LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x946 = 46;
	int32_t x947 = INT32_MIN;
	volatile uint16_t x948 = 16U;
	uint64_t t20 = 1053679125LLU;

    t20 = (((x945%x946)%x947)<<x948);

    if (t20 != 327680LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x958 = INT16_MAX;
	static volatile uint8_t x960 = 0U;

    t21 = (((x957%x958)%x959)<<x960);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1042 = INT64_MIN;
	int16_t x1043 = 9225;
	uint16_t x1044 = 0U;
	static int64_t t22 = -33982380554350078LL;

    t22 = (((x1041%x1042)%x1043)<<x1044);

    if (t22 != 67LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1125 = INT64_MAX;
	static volatile int16_t x1126 = 1550;
	int8_t x1127 = INT8_MIN;
	volatile uint16_t x1128 = 0U;

    t23 = (((x1125%x1126)%x1127)<<x1128);

    if (t23 != 7LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1142 = INT16_MIN;
	volatile uint32_t x1143 = UINT32_MAX;
	uint64_t x1144 = 1LLU;

    t24 = (((x1141%x1142)%x1143)<<x1144);

    if (t24 != 40758742U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x1165 = UINT16_MAX;
	int16_t x1167 = INT16_MAX;
	int8_t x1168 = 10;
	static uint32_t t25 = 96U;

    t25 = (((x1165%x1166)%x1167)<<x1168);

    if (t25 != 1024U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x1201 = 0;
	uint64_t x1202 = UINT64_MAX;
	uint32_t x1203 = 52193U;
	int32_t x1204 = 3;
	uint64_t t26 = 239801968LLU;

    t26 = (((x1201%x1202)%x1203)<<x1204);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x1261 = 856822363LLU;
	int64_t x1262 = -1LL;
	int64_t x1263 = INT64_MIN;
	int8_t x1264 = 0;
	uint64_t t27 = 4LLU;

    t27 = (((x1261%x1262)%x1263)<<x1264);

    if (t27 != 856822363LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1293 = -19080519040012275LL;
	uint64_t x1296 = 9LLU;
	int64_t t28 = -3207437641730377524LL;

    t28 = (((x1293%x1294)%x1295)<<x1296);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1297 = -42603672592881744LL;
	static volatile int8_t x1298 = -1;
	volatile uint16_t x1299 = 6067U;
	uint32_t x1300 = 4U;
	static int64_t t29 = -8956860250LL;

    t29 = (((x1297%x1298)%x1299)<<x1300);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1317 = 37;
	uint16_t x1319 = 28309U;
	volatile uint8_t x1320 = 8U;

    t30 = (((x1317%x1318)%x1319)<<x1320);

    if (t30 != 9472) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1497 = UINT64_MAX;
	int32_t x1498 = 108793828;
	uint8_t x1499 = UINT8_MAX;
	int8_t x1500 = 18;
	volatile uint64_t t31 = 104492358440874519LLU;

    t31 = (((x1497%x1498)%x1499)<<x1500);

    if (t31 != 30408704LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x1557 = 22U;
	int32_t x1558 = INT32_MIN;
	int8_t x1559 = 3;
	volatile int16_t x1560 = 28;
	volatile int32_t t32 = 1430794;

    t32 = (((x1557%x1558)%x1559)<<x1560);

    if (t32 != 268435456) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x1601 = 11U;
	int16_t x1602 = INT16_MIN;
	volatile int32_t x1604 = 1;
	volatile int32_t t33 = -121;

    t33 = (((x1601%x1602)%x1603)<<x1604);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x1641 = 20;
	static volatile int32_t x1642 = INT32_MIN;
	int8_t x1643 = INT8_MAX;
	volatile uint16_t x1644 = 10U;

    t34 = (((x1641%x1642)%x1643)<<x1644);

    if (t34 != 20480) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1661 = INT32_MIN;
	uint8_t x1662 = 1U;
	uint16_t x1663 = UINT16_MAX;
	uint8_t x1664 = 7U;

    t35 = (((x1661%x1662)%x1663)<<x1664);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x1709 = 106U;
	int64_t x1710 = INT64_MAX;
	volatile int64_t x1711 = INT64_MIN;
	int8_t x1712 = 6;
	static int64_t t36 = 8513045784362846LL;

    t36 = (((x1709%x1710)%x1711)<<x1712);

    if (t36 != 6784LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1717 = INT64_MAX;
	static int8_t x1718 = INT8_MIN;
	volatile int64_t x1719 = -9013717390704LL;
	uint8_t x1720 = 1U;
	volatile int64_t t37 = 3521617LL;

    t37 = (((x1717%x1718)%x1719)<<x1720);

    if (t37 != 254LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1725 = INT8_MIN;
	volatile uint8_t x1726 = UINT8_MAX;
	int8_t x1728 = 0;
	static uint64_t t38 = 1026LLU;

    t38 = (((x1725%x1726)%x1727)<<x1728);

    if (t38 != 20662214655LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x1729 = 19;
	int8_t x1730 = INT8_MIN;
	volatile int64_t x1731 = INT64_MIN;
	int64_t t39 = -16688560LL;

    t39 = (((x1729%x1730)%x1731)<<x1732);

    if (t39 != 5476377146882523136LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x1769 = INT64_MIN;
	static int16_t x1770 = INT16_MIN;
	uint8_t x1771 = 3U;

    t40 = (((x1769%x1770)%x1771)<<x1772);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x1853 = 6997U;
	int64_t x1854 = -540372LL;
	static int64_t x1855 = -1LL;
	static uint8_t x1856 = 15U;
	volatile int64_t t41 = -6517564474148LL;

    t41 = (((x1853%x1854)%x1855)<<x1856);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x1893 = INT32_MAX;
	static int8_t x1894 = -1;
	int32_t x1895 = INT32_MIN;
	int8_t x1896 = 18;
	volatile int32_t t42 = -252008;

    t42 = (((x1893%x1894)%x1895)<<x1896);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x1945 = INT16_MIN;
	uint32_t x1946 = 1546563222U;
	int32_t x1947 = INT32_MAX;
	static uint32_t t43 = 428458U;

    t43 = (((x1945%x1946)%x1947)<<x1948);

    if (t43 != 1024530080U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x1965 = INT64_MAX;
	uint8_t x1968 = 7U;
	volatile int64_t t44 = 72877776991234548LL;

    t44 = (((x1965%x1966)%x1967)<<x1968);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x1977 = UINT64_MAX;
	uint8_t x1978 = 21U;
	int64_t x1980 = 13LL;
	volatile uint64_t t45 = 55788356LLU;

    t45 = (((x1977%x1978)%x1979)<<x1980);

    if (t45 != 122880LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x2013 = UINT64_MAX;
	static int32_t x2014 = -1;
	int32_t x2015 = INT32_MIN;

    t46 = (((x2013%x2014)%x2015)<<x2016);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x2081 = 16536;
	uint64_t x2082 = 801073064712LLU;
	volatile uint8_t x2083 = 1U;
	static uint8_t x2084 = 52U;

    t47 = (((x2081%x2082)%x2083)<<x2084);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x2113 = INT16_MAX;
	volatile int64_t x2114 = -228LL;
	uint16_t x2115 = 60U;
	static int8_t x2116 = 0;
	static volatile int64_t t48 = -1154777137228157LL;

    t48 = (((x2113%x2114)%x2115)<<x2116);

    if (t48 != 43LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2141 = 0U;
	volatile uint64_t x2143 = 8095354404104LLU;
	static uint16_t x2144 = 10U;
	volatile uint64_t t49 = 48746384967676999LLU;

    t49 = (((x2141%x2142)%x2143)<<x2144);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x2153 = -1;
	volatile int32_t x2154 = -1;
	int8_t x2155 = INT8_MIN;
	static uint64_t x2156 = 14LLU;
	volatile int32_t t50 = 56873;

    t50 = (((x2153%x2154)%x2155)<<x2156);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x2161 = UINT32_MAX;
	int32_t x2162 = INT32_MIN;
	int16_t x2163 = INT16_MIN;
	uint32_t t51 = 0U;

    t51 = (((x2161%x2162)%x2163)<<x2164);

    if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x2178 = INT32_MAX;
	volatile uint16_t x2179 = 1U;
	static int8_t x2180 = 26;
	volatile int32_t t52 = -138071;

    t52 = (((x2177%x2178)%x2179)<<x2180);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x2189 = 122U;
	static uint64_t x2190 = 1337095678701LLU;
	static uint16_t x2191 = 23U;
	int8_t x2192 = 4;
	uint64_t t53 = 66633609246892LLU;

    t53 = (((x2189%x2190)%x2191)<<x2192);

    if (t53 != 112LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x2289 = INT32_MIN;
	static int8_t x2290 = 8;
	uint8_t x2292 = 0U;

    t54 = (((x2289%x2290)%x2291)<<x2292);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x2349 = 234;
	int8_t x2350 = 29;
	static int16_t x2351 = 230;
	uint16_t x2352 = 2U;
	static int32_t t55 = 147705202;

    t55 = (((x2349%x2350)%x2351)<<x2352);

    if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x2437 = -1;
	int16_t x2438 = INT16_MIN;
	uint64_t x2439 = 92399222LLU;
	static uint16_t x2440 = 6U;

    t56 = (((x2437%x2438)%x2439)<<x2440);

    if (t56 != 1262287808LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x2453 = INT64_MAX;
	int32_t x2454 = INT32_MIN;
	volatile int16_t x2455 = -268;
	uint16_t x2456 = 1U;
	static volatile int64_t t57 = -16LL;

    t57 = (((x2453%x2454)%x2455)<<x2456);

    if (t57 != 366LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x2461 = 46U;
	static volatile uint64_t x2462 = 90657336430LLU;
	uint16_t x2464 = 41U;

    t58 = (((x2461%x2462)%x2463)<<x2464);

    if (t58 != 101155069755392LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x2481 = 515989857687491LLU;
	static volatile int64_t x2482 = 17426618LL;
	int64_t x2483 = -1LL;
	uint64_t t59 = 1431LLU;

    t59 = (((x2481%x2482)%x2483)<<x2484);

    if (t59 != 121587136LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x2529 = INT16_MIN;
	int32_t x2530 = -1;
	static int32_t x2531 = -124;
	uint8_t x2532 = 0U;
	int32_t t60 = 176068;

    t60 = (((x2529%x2530)%x2531)<<x2532);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x2553 = 971108206LL;
	int32_t x2554 = INT32_MIN;
	volatile int8_t x2555 = INT8_MIN;
	uint8_t x2556 = 0U;
	volatile int64_t t61 = -1LL;

    t61 = (((x2553%x2554)%x2555)<<x2556);

    if (t61 != 110LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x2581 = INT64_MIN;
	volatile uint16_t x2582 = 57U;
	int8_t x2583 = -1;
	uint16_t x2584 = 3U;
	int64_t t62 = 77LL;

    t62 = (((x2581%x2582)%x2583)<<x2584);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x2617 = 0LL;
	static int32_t x2618 = INT32_MAX;
	static uint16_t x2619 = UINT16_MAX;

    t63 = (((x2617%x2618)%x2619)<<x2620);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x2625 = UINT64_MAX;
	static uint32_t x2626 = 5083824U;
	uint8_t x2627 = 1U;
	int8_t x2628 = 13;

    t64 = (((x2625%x2626)%x2627)<<x2628);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x2653 = 203286112U;
	uint8_t x2655 = 3U;
	uint16_t x2656 = 2U;
	volatile uint32_t t65 = 72094181U;

    t65 = (((x2653%x2654)%x2655)<<x2656);

    if (t65 != 4U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x2702 = -8;
	int16_t x2704 = 34;
	volatile uint64_t t66 = 97624LLU;

    t66 = (((x2701%x2702)%x2703)<<x2704);

    if (t66 != 26338268467429376LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x2725 = 1;
	int8_t x2726 = INT8_MIN;
	static volatile int64_t x2727 = -167LL;
	static volatile uint8_t x2728 = 13U;

    t67 = (((x2725%x2726)%x2727)<<x2728);

    if (t67 != 8192LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x2742 = INT16_MIN;
	int64_t x2743 = -1LL;
	static uint8_t x2744 = 2U;
	volatile int64_t t68 = -9693848804134645LL;

    t68 = (((x2741%x2742)%x2743)<<x2744);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x2749 = 1003U;
	uint16_t x2750 = 2387U;
	static int64_t x2751 = INT64_MIN;
	uint8_t x2752 = 0U;
	int64_t t69 = 630238227LL;

    t69 = (((x2749%x2750)%x2751)<<x2752);

    if (t69 != 1003LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x2777 = 490;
	uint16_t x2779 = UINT16_MAX;
	static uint16_t x2780 = 44U;
	int64_t t70 = -10638961965LL;

    t70 = (((x2777%x2778)%x2779)<<x2780);

    if (t70 != 8620171161763840LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x2805 = UINT8_MAX;
	volatile int32_t x2806 = INT32_MAX;
	static uint64_t x2807 = UINT64_MAX;
	volatile uint64_t t71 = 140LLU;

    t71 = (((x2805%x2806)%x2807)<<x2808);

    if (t71 != 1044480LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x2829 = -10;
	int16_t x2830 = INT16_MAX;
	volatile uint64_t x2831 = 4126378996820LLU;
	uint8_t x2832 = 0U;

    t72 = (((x2829%x2830)%x2831)<<x2832);

    if (t72 != 1972028560346LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x2833 = 1889901283523LL;
	int8_t x2835 = INT8_MIN;
	volatile uint8_t x2836 = 0U;

    t73 = (((x2833%x2834)%x2835)<<x2836);

    if (t73 != 105LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x2849 = INT8_MAX;
	int16_t x2850 = INT16_MIN;
	static uint64_t x2851 = UINT64_MAX;
	volatile int16_t x2852 = 0;
	volatile uint64_t t74 = 2107091359LLU;

    t74 = (((x2849%x2850)%x2851)<<x2852);

    if (t74 != 127LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x2881 = 74LL;
	int64_t x2882 = INT64_MIN;
	int16_t x2883 = INT16_MIN;
	int8_t x2884 = 28;
	volatile int64_t t75 = 21247947480459133LL;

    t75 = (((x2881%x2882)%x2883)<<x2884);

    if (t75 != 19864223744LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x2885 = 4U;
	volatile uint64_t x2886 = UINT64_MAX;
	uint64_t x2887 = 196591LLU;
	static volatile uint16_t x2888 = 5U;

    t76 = (((x2885%x2886)%x2887)<<x2888);

    if (t76 != 128LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x2898 = UINT64_MAX;
	uint32_t x2899 = 1747U;
	uint8_t x2900 = 5U;
	uint64_t t77 = 4176224354251LLU;

    t77 = (((x2897%x2898)%x2899)<<x2900);

    if (t77 != 24736LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x2903 = 350U;
	volatile uint8_t x2904 = 1U;
	volatile int64_t t78 = -15LL;

    t78 = (((x2901%x2902)%x2903)<<x2904);

    if (t78 != 40LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x3009 = 1422LLU;
	int8_t x3010 = INT8_MIN;
	static int8_t x3011 = INT8_MIN;
	uint8_t x3012 = 1U;

    t79 = (((x3009%x3010)%x3011)<<x3012);

    if (t79 != 2844LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x3094 = 176144076267LLU;
	int64_t x3095 = 747383LL;
	uint64_t x3096 = 4LLU;

    t80 = (((x3093%x3094)%x3095)<<x3096);

    if (t80 != 106032LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x3117 = 688U;
	static int8_t x3118 = 57;
	int16_t x3119 = -6985;
	uint16_t x3120 = 1U;
	int32_t t81 = 64426;

    t81 = (((x3117%x3118)%x3119)<<x3120);

    if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x3121 = UINT64_MAX;
	volatile int64_t x3122 = INT64_MIN;
	static volatile int32_t x3123 = 18;
	volatile uint64_t x3124 = 1LLU;
	uint64_t t82 = 46755997466120LLU;

    t82 = (((x3121%x3122)%x3123)<<x3124);

    if (t82 != 14LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x3129 = UINT16_MAX;
	int16_t x3130 = 1;
	uint8_t x3131 = 79U;
	int8_t x3132 = 1;

    t83 = (((x3129%x3130)%x3131)<<x3132);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x3133 = 11;
	int16_t x3134 = 235;
	uint8_t x3135 = UINT8_MAX;
	uint16_t x3136 = 0U;
	int32_t t84 = 45160634;

    t84 = (((x3133%x3134)%x3135)<<x3136);

    if (t84 != 11) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x3234 = 938U;
	uint32_t x3235 = UINT32_MAX;

    t85 = (((x3233%x3234)%x3235)<<x3236);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x3265 = -180786634065713LL;
	int8_t x3266 = INT8_MIN;
	static uint64_t x3267 = 255023221488LLU;
	volatile uint64_t t86 = 347873039461897940LLU;

    t86 = (((x3265%x3266)%x3267)<<x3268);

    if (t86 != 410466954174LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x3289 = 337LL;
	static int8_t x3291 = INT8_MIN;
	uint16_t x3292 = 5U;
	static int64_t t87 = -3LL;

    t87 = (((x3289%x3290)%x3291)<<x3292);

    if (t87 != 2624LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x3361 = INT8_MIN;
	static int8_t x3362 = -1;
	int8_t x3363 = -8;
	int64_t x3364 = 1LL;

    t88 = (((x3361%x3362)%x3363)<<x3364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x3391 = -4;
	volatile uint16_t x3392 = 10U;
	volatile uint32_t t89 = 713851U;

    t89 = (((x3389%x3390)%x3391)<<x3392);

    if (t89 != 130048U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x3405 = 92889;
	volatile uint16_t x3406 = UINT16_MAX;
	int64_t x3407 = -89091560342LL;
	uint8_t x3408 = 22U;
	int64_t t90 = 4480034850376LL;

    t90 = (((x3405%x3406)%x3407)<<x3408);

    if (t90 != 114730991616LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x3481 = INT8_MIN;
	static int32_t x3482 = INT32_MAX;
	int32_t x3483 = -1;
	volatile int8_t x3484 = 0;
	volatile int32_t t91 = 64532;

    t91 = (((x3481%x3482)%x3483)<<x3484);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x3501 = INT32_MAX;
	int32_t x3503 = INT32_MAX;
	int16_t x3504 = 3;

    t92 = (((x3501%x3502)%x3503)<<x3504);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x3505 = INT16_MIN;
	int32_t x3506 = -1;
	volatile int64_t x3507 = -34232LL;
	uint8_t x3508 = 1U;
	int64_t t93 = -224LL;

    t93 = (((x3505%x3506)%x3507)<<x3508);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x3609 = UINT8_MAX;
	uint32_t x3611 = 1818187U;
	int16_t x3612 = 2;

    t94 = (((x3609%x3610)%x3611)<<x3612);

    if (t94 != 1020U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x3641 = INT64_MIN;
	volatile uint32_t x3642 = 1U;
	int64_t x3643 = INT64_MAX;
	int8_t x3644 = 1;
	volatile int64_t t95 = 220274LL;

    t95 = (((x3641%x3642)%x3643)<<x3644);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x3645 = UINT64_MAX;
	static volatile int64_t x3647 = -1LL;
	volatile uint8_t x3648 = 0U;
	uint64_t t96 = 944113275LLU;

    t96 = (((x3645%x3646)%x3647)<<x3648);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x3657 = UINT32_MAX;
	int8_t x3658 = INT8_MIN;

    t97 = (((x3657%x3658)%x3659)<<x3660);

    if (t97 != 16256U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x3685 = 166U;
	int32_t x3686 = INT32_MAX;
	volatile int32_t x3687 = INT32_MIN;
	static int16_t x3688 = 3;
	volatile int32_t t98 = -1922598;

    t98 = (((x3685%x3686)%x3687)<<x3688);

    if (t98 != 1328) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x3721 = 6403;
	int64_t x3722 = INT64_MAX;
	uint64_t x3723 = 12026637689907LLU;
	int8_t x3724 = 27;
	uint64_t t99 = 3160294LLU;

    t99 = (((x3721%x3722)%x3723)<<x3724);

    if (t99 != 859396112384LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x3726 = -1;
	int64_t x3727 = -1LL;
	int64_t t100 = -1134180676101383395LL;

    t100 = (((x3725%x3726)%x3727)<<x3728);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x3733 = -1;
	uint64_t x3734 = 858897930799LLU;
	int32_t x3735 = -2303403;
	uint8_t x3736 = 4U;
	static volatile uint64_t t101 = 7LLU;

    t101 = (((x3733%x3734)%x3735)<<x3736);

    if (t101 != 13132846874224LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x3781 = INT16_MAX;
	static int64_t x3782 = INT64_MAX;
	int32_t x3783 = INT32_MIN;

    t102 = (((x3781%x3782)%x3783)<<x3784);

    if (t102 != 33553408LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x3814 = -1;
	static int16_t x3815 = INT16_MAX;
	uint8_t x3816 = 28U;
	volatile int32_t t103 = 434651015;

    t103 = (((x3813%x3814)%x3815)<<x3816);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x3843 = -171;
	int16_t x3844 = 0;
	volatile int32_t t104 = -697;

    t104 = (((x3841%x3842)%x3843)<<x3844);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x3869 = INT64_MIN;
	volatile int8_t x3870 = INT8_MIN;
	int64_t t105 = -27071LL;

    t105 = (((x3869%x3870)%x3871)<<x3872);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x3933 = INT64_MAX;
	int64_t x3934 = INT64_MIN;
	int8_t x3935 = -2;
	volatile int8_t x3936 = 2;
	volatile int64_t t106 = -15366LL;

    t106 = (((x3933%x3934)%x3935)<<x3936);

    if (t106 != 4LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x3961 = INT64_MIN;
	volatile int64_t x3962 = -1LL;
	uint64_t x3963 = UINT64_MAX;
	uint8_t x3964 = 1U;
	uint64_t t107 = 386504674050110762LLU;

    t107 = (((x3961%x3962)%x3963)<<x3964);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x3995 = -1;
	int8_t x3996 = 1;
	int32_t t108 = -54240;

    t108 = (((x3993%x3994)%x3995)<<x3996);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x4054 = 2133338799LLU;
	int8_t x4056 = 0;

    t109 = (((x4053%x4054)%x4055)<<x4056);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x4085 = 0U;
	uint64_t x4086 = UINT64_MAX;
	static volatile int16_t x4087 = INT16_MIN;
	static uint64_t t110 = 15610916LLU;

    t110 = (((x4085%x4086)%x4087)<<x4088);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x4141 = -1;
	int64_t x4142 = -1LL;
	uint64_t x4143 = UINT64_MAX;
	uint8_t x4144 = 0U;

    t111 = (((x4141%x4142)%x4143)<<x4144);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x4201 = -1;
	int64_t x4202 = -1LL;
	int32_t x4204 = 18;
	static volatile int64_t t112 = -40261218LL;

    t112 = (((x4201%x4202)%x4203)<<x4204);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x4249 = INT16_MAX;
	int64_t x4250 = -51180423LL;
	int8_t x4251 = -1;
	int8_t x4252 = 19;
	static int64_t t113 = -14LL;

    t113 = (((x4249%x4250)%x4251)<<x4252);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x4309 = 79594U;
	uint64_t x4311 = 26966LLU;
	volatile int8_t x4312 = 9;
	volatile uint64_t t114 = 439LLU;

    t114 = (((x4309%x4310)%x4311)<<x4312);

    if (t114 != 52224LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x4334 = 29U;
	volatile int8_t x4335 = INT8_MIN;
	static uint8_t x4336 = 1U;
	int32_t t115 = -4184;

    t115 = (((x4333%x4334)%x4335)<<x4336);

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x4366 = 180794;
	volatile int32_t x4367 = INT32_MIN;
	volatile int8_t x4368 = 1;
	static uint64_t t116 = 26493826042275028LLU;

    t116 = (((x4365%x4366)%x4367)<<x4368);

    if (t116 != 87864LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x4386 = -1;
	uint16_t x4387 = UINT16_MAX;
	int32_t t117 = 289817660;

    t117 = (((x4385%x4386)%x4387)<<x4388);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x4397 = 0U;
	int64_t x4398 = -1LL;
	uint8_t x4400 = 6U;
	int64_t t118 = -7594907320070314LL;

    t118 = (((x4397%x4398)%x4399)<<x4400);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x4406 = INT8_MIN;
	int64_t x4407 = INT64_MAX;
	uint8_t x4408 = 15U;
	static volatile int64_t t119 = 551825259LL;

    t119 = (((x4405%x4406)%x4407)<<x4408);

    if (t119 != 3932160LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x4413 = 0LLU;
	int32_t x4415 = -1;
	uint8_t x4416 = 45U;
	volatile uint64_t t120 = 1393LLU;

    t120 = (((x4413%x4414)%x4415)<<x4416);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x4445 = UINT16_MAX;
	int64_t t121 = -226LL;

    t121 = (((x4445%x4446)%x4447)<<x4448);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x4465 = INT8_MIN;
	volatile int16_t x4466 = INT16_MIN;
	static int8_t x4467 = 4;
	uint16_t x4468 = 4U;

    t122 = (((x4465%x4466)%x4467)<<x4468);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x4513 = 909;
	static int32_t x4514 = INT32_MIN;
	int64_t x4515 = INT64_MAX;
	int32_t x4516 = 1;
	volatile int64_t t123 = 115979462788213670LL;

    t123 = (((x4513%x4514)%x4515)<<x4516);

    if (t123 != 1818LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x4649 = -1;
	static volatile uint32_t x4650 = 187763041U;
	static uint16_t x4651 = UINT16_MAX;
	static uint8_t x4652 = 0U;

    t124 = (((x4649%x4650)%x4651)<<x4652);

    if (t124 != 15218U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x4705 = -60;
	static int8_t x4706 = INT8_MIN;
	int32_t t125 = -100483927;

    t125 = (((x4705%x4706)%x4707)<<x4708);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x4709 = UINT8_MAX;
	int8_t x4710 = INT8_MIN;
	int8_t x4711 = 1;
	int8_t x4712 = 14;
	volatile int32_t t126 = -16088;

    t126 = (((x4709%x4710)%x4711)<<x4712);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x4769 = INT8_MIN;
	int32_t x4770 = 949;
	volatile int8_t x4771 = INT8_MIN;
	int32_t t127 = 16221;

    t127 = (((x4769%x4770)%x4771)<<x4772);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x4827 = INT16_MIN;
	volatile int16_t x4828 = 2;

    t128 = (((x4825%x4826)%x4827)<<x4828);

    if (t128 != 131068LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x4905 = UINT64_MAX;
	uint16_t x4906 = 1551U;
	uint32_t x4907 = 102U;
	uint8_t x4908 = 14U;
	uint64_t t129 = 235246LLU;

    t129 = (((x4905%x4906)%x4907)<<x4908);

    if (t129 != 98304LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x4957 = INT64_MIN;
	static uint32_t x4958 = UINT32_MAX;
	int32_t x4959 = INT32_MIN;
	uint8_t x4960 = 0U;

    t130 = (((x4957%x4958)%x4959)<<x4960);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x5025 = INT16_MIN;
	int64_t x5026 = -25LL;
	uint16_t x5027 = 1U;
	uint8_t x5028 = 5U;
	int64_t t131 = -15838186LL;

    t131 = (((x5025%x5026)%x5027)<<x5028);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x5081 = -1;
	int32_t x5082 = -392686;
	uint64_t x5083 = UINT64_MAX;
	int8_t x5084 = 4;
	uint64_t t132 = 56LLU;

    t132 = (((x5081%x5082)%x5083)<<x5084);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x5189 = 1;
	int8_t x5190 = INT8_MIN;
	uint16_t x5191 = 79U;
	int32_t t133 = -2;

    t133 = (((x5189%x5190)%x5191)<<x5192);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x5237 = 16071LL;
	static int16_t x5238 = -1;
	uint64_t x5239 = UINT64_MAX;
	uint8_t x5240 = 0U;
	uint64_t t134 = 7133814076978686720LLU;

    t134 = (((x5237%x5238)%x5239)<<x5240);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x5341 = INT8_MIN;
	int16_t x5343 = -1;
	int32_t t135 = -96341;

    t135 = (((x5341%x5342)%x5343)<<x5344);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x5365 = INT32_MIN;
	int64_t x5366 = 71LL;
	uint8_t x5368 = 1U;
	volatile int64_t t136 = 3695600LL;

    t136 = (((x5365%x5366)%x5367)<<x5368);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x5371 = UINT32_MAX;
	volatile int8_t x5372 = 7;

    t137 = (((x5369%x5370)%x5371)<<x5372);

    if (t137 != 4294967040U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x5441 = -2;
	static int32_t x5442 = INT32_MIN;
	volatile uint64_t x5443 = 1553975674199189382LLU;
	volatile uint64_t t138 = 433946649379322700LLU;

    t138 = (((x5441%x5442)%x5443)<<x5444);

    if (t138 != 8699492584344518656LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x5485 = -12;
	uint32_t x5487 = 11882394U;
	uint8_t x5488 = 0U;
	uint32_t t139 = 3874U;

    t139 = (((x5485%x5486)%x5487)<<x5488);

    if (t139 != 5423050U) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x5493 = 631386946926LLU;
	uint32_t x5494 = 3U;
	static int64_t x5495 = 114121LL;
	volatile int16_t x5496 = 13;
	uint64_t t140 = 181192105554LLU;

    t140 = (((x5493%x5494)%x5495)<<x5496);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x5505 = 17898308483742066LLU;
	volatile uint64_t x5506 = 1892140424055197819LLU;
	static volatile int64_t x5507 = INT64_MIN;
	volatile uint32_t x5508 = 3U;

    t141 = (((x5505%x5506)%x5507)<<x5508);

    if (t141 != 143186467869936528LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x5522 = -1;
	static int32_t x5523 = -22;
	uint32_t t142 = 19494U;

    t142 = (((x5521%x5522)%x5523)<<x5524);

    if (t142 != 618422498U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x5525 = 842550216050256LLU;
	int16_t x5527 = INT16_MIN;
	volatile uint64_t t143 = 516836648615599LLU;

    t143 = (((x5525%x5526)%x5527)<<x5528);

    if (t143 != 842550216050256LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x5534 = 29547099106272LL;
	uint8_t x5535 = 4U;
	uint64_t x5536 = 45LLU;
	static int64_t t144 = 434998LL;

    t144 = (((x5533%x5534)%x5535)<<x5536);

    if (t144 != 35184372088832LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x5546 = UINT64_MAX;
	int16_t x5547 = INT16_MIN;
	volatile uint8_t x5548 = 1U;
	uint64_t t145 = 711571858LLU;

    t145 = (((x5545%x5546)%x5547)<<x5548);

    if (t145 != 500022LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x5577 = INT64_MAX;
	uint16_t x5580 = 6U;

    t146 = (((x5577%x5578)%x5579)<<x5580);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x5757 = 1923438828252746407LLU;
	int32_t x5758 = -472;
	int16_t x5759 = INT16_MIN;
	static int16_t x5760 = 0;
	static uint64_t t147 = 103078LLU;

    t147 = (((x5757%x5758)%x5759)<<x5760);

    if (t147 != 1923438828252746407LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x5837 = INT8_MIN;
	static int8_t x5838 = -49;
	int16_t x5839 = -1;
	int16_t x5840 = 0;

    t148 = (((x5837%x5838)%x5839)<<x5840);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x5885 = 21;
	static int16_t x5886 = INT16_MIN;
	int32_t x5887 = INT32_MIN;
	volatile int32_t t149 = -1;

    t149 = (((x5885%x5886)%x5887)<<x5888);

    if (t149 != 168) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x5909 = 2U;
	static volatile int8_t x5910 = -1;
	int16_t x5911 = 193;
	int16_t x5912 = 1;
	static volatile int32_t t150 = 215967501;

    t150 = (((x5909%x5910)%x5911)<<x5912);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x5917 = INT16_MIN;
	static int32_t x5918 = -1;
	static volatile int64_t x5919 = -1LL;
	uint32_t x5920 = 1U;
	static volatile int64_t t151 = -1591797517LL;

    t151 = (((x5917%x5918)%x5919)<<x5920);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x5933 = 0U;
	int8_t x5934 = 31;
	uint16_t x5935 = UINT16_MAX;
	uint32_t x5936 = 12U;
	uint32_t t152 = 134232U;

    t152 = (((x5933%x5934)%x5935)<<x5936);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x5961 = 0;
	static int16_t x5962 = INT16_MAX;
	uint16_t x5963 = UINT16_MAX;
	int32_t t153 = 11992193;

    t153 = (((x5961%x5962)%x5963)<<x5964);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x5973 = INT64_MAX;
	volatile int64_t x5974 = 47450524LL;
	static uint32_t x5975 = UINT32_MAX;
	static volatile uint16_t x5976 = 2U;
	int64_t t154 = -8LL;

    t154 = (((x5973%x5974)%x5975)<<x5976);

    if (t154 != 81588348LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x5985 = 2;
	volatile int16_t x5986 = INT16_MAX;
	int16_t x5987 = INT16_MAX;
	volatile int32_t t155 = -63794;

    t155 = (((x5985%x5986)%x5987)<<x5988);

    if (t155 != 8) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x6029 = 33446903102642908LL;
	int16_t x6030 = INT16_MIN;
	static int8_t x6032 = 12;
	static int64_t t156 = -2182017319214791LL;

    t156 = (((x6029%x6030)%x6031)<<x6032);

    if (t156 != 28164096LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x6061 = 0;
	static int64_t x6062 = INT64_MIN;
	static uint32_t x6063 = 200U;
	static uint32_t x6064 = 2U;
	int64_t t157 = -64746821LL;

    t157 = (((x6061%x6062)%x6063)<<x6064);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x6094 = -1;
	uint16_t x6095 = UINT16_MAX;
	int8_t x6096 = 1;

    t158 = (((x6093%x6094)%x6095)<<x6096);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x6277 = 118162432LL;
	int64_t x6278 = -1LL;
	int8_t x6280 = 0;
	volatile int64_t t159 = -994524261762422LL;

    t159 = (((x6277%x6278)%x6279)<<x6280);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x6289 = INT32_MIN;
	int16_t x6292 = 11;
	volatile int32_t t160 = 0;

    t160 = (((x6289%x6290)%x6291)<<x6292);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x6309 = INT64_MAX;
	volatile int16_t x6311 = INT16_MAX;
	int8_t x6312 = 0;
	static volatile int64_t t161 = -3367680128LL;

    t161 = (((x6309%x6310)%x6311)<<x6312);

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x6313 = -826542LL;
	uint64_t x6314 = 5832LLU;
	uint8_t x6315 = 29U;
	int8_t x6316 = 1;
	volatile uint64_t t162 = 7940680909656LLU;

    t162 = (((x6313%x6314)%x6315)<<x6316);

    if (t162 != 10LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x6317 = -925LL;
	static int16_t x6318 = -1;
	uint32_t x6319 = 99329697U;
	static uint8_t x6320 = 10U;
	volatile int64_t t163 = -2618806348774432688LL;

    t163 = (((x6317%x6318)%x6319)<<x6320);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x6329 = INT8_MAX;
	volatile int16_t x6330 = INT16_MIN;
	volatile int32_t x6331 = INT32_MIN;

    t164 = (((x6329%x6330)%x6331)<<x6332);

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x6445 = INT32_MAX;
	int8_t x6448 = 0;
	static volatile int64_t t165 = 7836LL;

    t165 = (((x6445%x6446)%x6447)<<x6448);

    if (t165 != 127LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x6463 = 7U;
	uint64_t x6464 = 11LLU;
	int32_t t166 = -9;

    t166 = (((x6461%x6462)%x6463)<<x6464);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x6529 = INT8_MAX;
	volatile uint16_t x6530 = 1909U;
	int64_t x6531 = INT64_MIN;
	uint8_t x6532 = 40U;
	static volatile int64_t t167 = -456736523743233277LL;

    t167 = (((x6529%x6530)%x6531)<<x6532);

    if (t167 != 139637976727552LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x6597 = 23;
	volatile int32_t x6598 = -1;
	int32_t x6599 = INT32_MIN;
	uint16_t x6600 = 5U;

    t168 = (((x6597%x6598)%x6599)<<x6600);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x6601 = INT64_MAX;
	int8_t x6602 = -1;
	static int64_t x6603 = 925666LL;
	int8_t x6604 = 1;
	int64_t t169 = 22862867134LL;

    t169 = (((x6601%x6602)%x6603)<<x6604);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x6645 = UINT8_MAX;
	uint32_t x6647 = 1310952820U;
	volatile uint32_t t170 = 8717U;

    t170 = (((x6645%x6646)%x6647)<<x6648);

    if (t170 != 1280U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x6673 = INT8_MIN;
	uint32_t x6674 = 157U;
	uint32_t x6675 = UINT32_MAX;
	uint16_t x6676 = 11U;
	static uint32_t t171 = 56902U;

    t171 = (((x6673%x6674)%x6675)<<x6676);

    if (t171 != 249856U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x6713 = -4LL;
	int32_t x6714 = INT32_MIN;
	int32_t x6715 = -1;
	static volatile uint8_t x6716 = 4U;
	static volatile int64_t t172 = -4280273923626LL;

    t172 = (((x6713%x6714)%x6715)<<x6716);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x6742 = UINT32_MAX;
	static volatile int32_t x6743 = 9300664;

    t173 = (((x6741%x6742)%x6743)<<x6744);

    if (t173 != 7361064U) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x6745 = 24205;
	static uint8_t x6746 = 49U;
	static uint64_t x6747 = UINT64_MAX;
	uint64_t x6748 = 5LLU;
	uint64_t t174 = 2LLU;

    t174 = (((x6745%x6746)%x6747)<<x6748);

    if (t174 != 1536LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x6817 = UINT64_MAX;
	static int16_t x6818 = INT16_MIN;
	int16_t x6819 = INT16_MIN;
	volatile int8_t x6820 = 0;
	uint64_t t175 = 85584999196LLU;

    t175 = (((x6817%x6818)%x6819)<<x6820);

    if (t175 != 32767LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x6837 = INT32_MIN;
	uint32_t x6838 = 570U;
	int32_t x6839 = -6938;
	static uint16_t x6840 = 0U;
	uint32_t t176 = 193402U;

    t176 = (((x6837%x6838)%x6839)<<x6840);

    if (t176 != 98U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x6841 = -123;
	int64_t x6842 = INT64_MAX;
	uint8_t x6843 = 1U;
	static int64_t x6844 = 1LL;
	volatile int64_t t177 = 87LL;

    t177 = (((x6841%x6842)%x6843)<<x6844);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x6869 = 461U;
	static int16_t x6871 = INT16_MIN;
	volatile int32_t t178 = -27871;

    t178 = (((x6869%x6870)%x6871)<<x6872);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x6905 = 523612210LLU;
	static int16_t x6906 = INT16_MIN;
	int16_t x6908 = 0;
	volatile uint64_t t179 = 5LLU;

    t179 = (((x6905%x6906)%x6907)<<x6908);

    if (t179 != 523612210LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x7161 = 177996;
	volatile uint32_t x7162 = UINT32_MAX;
	uint16_t x7163 = 1968U;
	static volatile uint16_t x7164 = 0U;
	volatile uint32_t t180 = 35828U;

    t180 = (((x7161%x7162)%x7163)<<x7164);

    if (t180 != 876U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x7165 = INT16_MIN;
	volatile uint64_t x7166 = 82502257690003489LLU;
	int16_t x7167 = INT16_MIN;
	volatile int8_t x7168 = 46;
	uint64_t t181 = 364932302097012877LLU;

    t181 = (((x7165%x7166)%x7167)<<x7168);

    if (t181 != 779193104279273472LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x7206 = INT64_MIN;
	int64_t x7207 = 50542736LL;
	uint16_t x7208 = 0U;

    t182 = (((x7205%x7206)%x7207)<<x7208);

    if (t182 != 13403LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x7229 = INT64_MAX;
	uint64_t x7230 = 223LLU;
	static uint64_t x7231 = 205888096021LLU;
	uint32_t x7232 = 44U;
	uint64_t t183 = 62909188836415504LLU;

    t183 = (((x7229%x7230)%x7231)<<x7232);

    if (t183 != 2374945115996160LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x7253 = INT8_MAX;
	int16_t x7254 = INT16_MIN;
	uint64_t x7255 = 302LLU;
	int32_t x7256 = 3;
	uint64_t t184 = 6862762959883833723LLU;

    t184 = (((x7253%x7254)%x7255)<<x7256);

    if (t184 != 1016LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x7298 = UINT16_MAX;
	uint8_t x7300 = 14U;
	volatile int32_t t185 = 3;

    t185 = (((x7297%x7298)%x7299)<<x7300);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x7317 = 6;
	int64_t x7318 = -1LL;
	int32_t x7319 = INT32_MAX;
	int8_t x7320 = 13;
	int64_t t186 = -12LL;

    t186 = (((x7317%x7318)%x7319)<<x7320);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x7345 = 22U;
	int16_t x7346 = 1;
	volatile int16_t x7347 = -638;
	uint8_t x7348 = 6U;
	volatile int32_t t187 = 2003891;

    t187 = (((x7345%x7346)%x7347)<<x7348);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x7366 = INT8_MIN;
	volatile int8_t x7367 = -1;
	uint8_t x7368 = 11U;
	int32_t t188 = 1183935;

    t188 = (((x7365%x7366)%x7367)<<x7368);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x7381 = INT16_MAX;
	volatile uint16_t x7382 = UINT16_MAX;
	int8_t x7383 = -1;
	int16_t x7384 = 1;
	volatile int32_t t189 = 10550;

    t189 = (((x7381%x7382)%x7383)<<x7384);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x7429 = UINT16_MAX;
	static int64_t x7430 = INT64_MIN;
	int16_t x7431 = INT16_MIN;
	static int32_t x7432 = 3;
	static int64_t t190 = 6050598968626LL;

    t190 = (((x7429%x7430)%x7431)<<x7432);

    if (t190 != 262136LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x7482 = INT32_MIN;
	uint64_t x7483 = UINT64_MAX;
	volatile uint16_t x7484 = 2U;
	uint64_t t191 = 20LLU;

    t191 = (((x7481%x7482)%x7483)<<x7484);

    if (t191 != 31905348670532LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x7525 = 0U;
	volatile int8_t x7526 = INT8_MIN;
	int8_t x7527 = -1;
	volatile int32_t t192 = 45;

    t192 = (((x7525%x7526)%x7527)<<x7528);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x7529 = 1U;
	volatile int64_t x7530 = 330LL;
	int64_t x7531 = -1LL;
	uint16_t x7532 = 5U;

    t193 = (((x7529%x7530)%x7531)<<x7532);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x7569 = UINT8_MAX;
	int64_t x7570 = INT64_MIN;
	volatile int8_t x7571 = INT8_MAX;
	uint8_t x7572 = 1U;
	static volatile int64_t t194 = 3702440LL;

    t194 = (((x7569%x7570)%x7571)<<x7572);

    if (t194 != 2LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x7593 = 71U;
	uint32_t x7594 = 3U;
	uint64_t x7595 = 25146118LLU;
	uint64_t t195 = 8332723258105LLU;

    t195 = (((x7593%x7594)%x7595)<<x7596);

    if (t195 != 8LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x7626 = INT16_MAX;
	volatile int16_t x7628 = 7;
	static uint32_t t196 = 9U;

    t196 = (((x7625%x7626)%x7627)<<x7628);

    if (t196 != 512U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x7633 = INT16_MIN;
	static int16_t x7635 = INT16_MIN;
	uint8_t x7636 = 1U;
	volatile uint64_t t197 = 384036LLU;

    t197 = (((x7633%x7634)%x7635)<<x7636);

    if (t197 != 170371756LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x7645 = INT32_MIN;
	int8_t x7646 = INT8_MIN;
	int32_t x7647 = -1;
	uint8_t x7648 = 13U;
	static volatile int32_t t198 = -956730248;

    t198 = (((x7645%x7646)%x7647)<<x7648);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x7662 = -1LL;
	uint64_t x7663 = 100LLU;
	static uint8_t x7664 = 0U;
	uint64_t t199 = 23338LLU;

    t199 = (((x7661%x7662)%x7663)<<x7664);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

