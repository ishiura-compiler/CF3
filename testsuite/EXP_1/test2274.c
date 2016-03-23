
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

static int16_t x37 = INT16_MIN;
int64_t x61 = -1LL;
static uint8_t x63 = 15U;
int64_t x65 = INT64_MIN;
int16_t x66 = -1;
int16_t x74 = -49;
uint16_t x75 = 106U;
volatile int8_t x76 = 9;
int32_t x85 = INT32_MIN;
int8_t x87 = 0;
int64_t x179 = -434812543LL;
volatile uint64_t x202 = 231171599154343529LLU;
volatile int8_t x204 = 28;
static int64_t x333 = INT64_MIN;
uint8_t x432 = 5U;
int16_t x435 = INT16_MAX;
volatile uint8_t x476 = 0U;
volatile int32_t x505 = INT32_MIN;
int8_t x508 = 0;
int32_t t15 = 492;
int32_t x530 = -142359;
int32_t x615 = INT32_MIN;
static int64_t x618 = INT64_MAX;
static int16_t x619 = INT16_MIN;
volatile int16_t x620 = 0;
static uint64_t x665 = 10380210086209LLU;
static volatile int32_t t22 = 1164;
volatile int64_t x670 = 2LL;
uint16_t x671 = 53U;
volatile int32_t x677 = INT32_MIN;
int64_t x714 = -189327LL;
uint16_t x716 = 17U;
int16_t x723 = -1;
uint16_t x838 = UINT16_MAX;
uint64_t x1021 = UINT64_MAX;
int32_t x1023 = INT32_MIN;
volatile int32_t t30 = -358604;
uint16_t x1027 = 5660U;
volatile uint8_t x1028 = 3U;
volatile int32_t t32 = -891559017;
static int8_t x1127 = -1;
int32_t t34 = 3;
int32_t t35 = -82411112;
uint8_t x1177 = 1U;
int32_t t38 = -2002634;
int16_t x1197 = -15;
volatile int16_t x1237 = INT16_MIN;
static uint64_t x1238 = 994437LLU;
volatile int8_t x1240 = 0;
int32_t x1281 = -937274;
static volatile int8_t x1284 = 22;
int32_t x1418 = -1433;
static volatile int32_t t42 = 10657229;
int8_t x1445 = 21;
volatile uint16_t x1458 = 8825U;
int64_t x1459 = INT64_MAX;
uint8_t x1460 = 0U;
volatile uint16_t x1509 = 0U;
uint8_t x1522 = 2U;
int64_t x1523 = INT64_MIN;
uint8_t x1558 = 126U;
int8_t x1559 = INT8_MIN;
volatile int32_t x1639 = INT32_MAX;
uint32_t x1640 = 21U;
int32_t t54 = 6348106;
int32_t t58 = 19944;
int16_t x1802 = 1;
uint8_t x1817 = UINT8_MAX;
static int8_t x1818 = -1;
int8_t x1896 = 0;
int8_t x1898 = INT8_MIN;
int32_t t65 = -805012;
int8_t x1941 = INT8_MIN;
int16_t x1943 = INT16_MIN;
int16_t x1950 = -1652;
volatile int32_t t67 = -4683196;
uint8_t x1990 = 1U;
int8_t x2010 = -1;
int8_t x2071 = INT8_MIN;
int8_t x2127 = INT8_MIN;
uint16_t x2182 = UINT16_MAX;
int32_t t73 = -6812193;
int16_t x2266 = INT16_MAX;
uint16_t x2268 = 7U;
uint32_t x2322 = 7U;
uint32_t x2323 = 94750690U;
volatile int32_t x2334 = 95;
uint16_t x2397 = 117U;
volatile uint16_t x2400 = 0U;
static int16_t x2421 = INT16_MIN;
int8_t x2423 = 2;
uint64_t x2474 = 458482390811LLU;
int32_t x2475 = -1;
int32_t x2486 = -16677906;
int64_t x2517 = INT64_MAX;
static int8_t x2551 = INT8_MAX;
int64_t x2581 = -1LL;
uint16_t x2584 = 2U;
volatile int8_t x2598 = -1;
uint8_t x2600 = 10U;
uint8_t x2617 = 1U;
int32_t x2620 = 0;
int8_t x2632 = 14;
uint8_t x2672 = 13U;
uint8_t x2716 = 10U;
uint32_t x2717 = 880U;
volatile int8_t x2718 = -1;
int8_t x2838 = INT8_MAX;
static uint16_t x2843 = UINT16_MAX;
uint8_t x2844 = 1U;
int32_t t99 = -10866413;
uint16_t x2857 = 970U;
volatile int64_t x2865 = -1LL;
uint8_t x2866 = 1U;
int64_t x2867 = -1LL;
volatile int32_t t101 = -3;
static volatile int32_t x2895 = INT32_MIN;
int8_t x2953 = INT8_MAX;
uint32_t x2978 = 1347134U;
uint32_t x3023 = 787025968U;
uint64_t x3046 = 51076267LLU;
int8_t x3146 = INT8_MIN;
uint8_t x3147 = 13U;
int8_t x3182 = INT8_MAX;
int32_t t112 = 20576;
uint64_t x3198 = 29094199LLU;
int16_t x3227 = 0;
int8_t x3231 = -48;
static int32_t x3242 = INT32_MIN;
int32_t x3243 = 3;
uint64_t x3302 = 121942223690585LLU;
int32_t x3305 = INT32_MAX;
uint32_t x3371 = 99513552U;
int8_t x3482 = INT8_MAX;
volatile int32_t t121 = 94;
volatile int32_t t122 = 44;
volatile int32_t t123 = 14035474;
int64_t x3581 = INT64_MAX;
volatile int32_t t124 = -3306;
volatile int64_t x3625 = -1LL;
int32_t x3626 = -1;
int16_t x3668 = 16;
static uint32_t x3698 = 56400U;
int8_t x3774 = -1;
int64_t x3775 = -1LL;
uint8_t x3776 = 0U;
static volatile int64_t x3778 = -16093904525419835LL;
int64_t x3813 = INT64_MIN;
uint8_t x3816 = 24U;
static uint64_t x3839 = UINT64_MAX;
int8_t x3960 = 7;
uint8_t x4041 = UINT8_MAX;
int16_t x4138 = INT16_MIN;
int32_t x4145 = -1;
static int16_t x4146 = -1;
volatile uint8_t x4147 = 14U;
uint64_t x4185 = 14867531155439LLU;
uint32_t x4194 = 1440642097U;
static uint8_t x4222 = UINT8_MAX;
static uint16_t x4250 = 1448U;
uint32_t x4253 = UINT32_MAX;
volatile int8_t x4254 = -1;
static volatile int32_t t147 = -933;
volatile int64_t x4334 = INT64_MAX;
int32_t x4335 = 3435011;
int32_t x4336 = 1;
int32_t t149 = -1;
uint32_t x4365 = UINT32_MAX;
int64_t x4369 = 431720129477LL;
int32_t x4371 = INT32_MIN;
int64_t x4372 = 0LL;
int32_t t152 = -91923;
int64_t x4467 = -10112LL;
int64_t x4478 = INT64_MIN;
volatile int32_t t156 = 5026242;
int64_t x4550 = -2538753028511LL;
int64_t x4551 = INT64_MIN;
uint16_t x4597 = UINT16_MAX;
static volatile int32_t x4607 = INT32_MAX;
int16_t x4673 = 1;
uint32_t x4674 = 8U;
volatile int8_t x4676 = 1;
uint64_t x4693 = 7936931496LLU;
int64_t x4694 = INT64_MIN;
int16_t x4721 = 2;
volatile int32_t x4857 = INT32_MAX;
int8_t x4860 = 0;
int8_t x4913 = INT8_MAX;
static int32_t x4915 = 1521829;
uint16_t x4981 = UINT16_MAX;
static uint16_t x5141 = 839U;
int64_t x5142 = -1LL;
uint32_t x5143 = 65U;
int64_t x5169 = INT64_MIN;
static uint64_t x5173 = UINT64_MAX;
int32_t x5205 = INT32_MIN;
static volatile uint32_t x5207 = 54231478U;
static int8_t x5211 = INT8_MIN;
int8_t x5212 = 6;
int8_t x5215 = -2;
static uint16_t x5285 = 3U;
volatile int32_t t179 = -81;
int64_t x5405 = -34293873190853375LL;
volatile int8_t x5501 = 3;
static int64_t x5503 = 50364971026LL;
volatile int32_t t184 = 669031;
uint64_t x5649 = 64981958591LLU;
volatile int16_t x5652 = 1;
int64_t x5685 = INT64_MIN;
volatile int64_t x5715 = -1LL;
int16_t x5760 = 13;
volatile int64_t x5765 = -68065541LL;
static volatile int32_t t197 = -1312;
volatile int16_t x6116 = 0;
int32_t t198 = 1;


void f0(void) {
    	int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	static uint32_t x40 = 3U;
	static volatile int32_t t0 = 1;

    t0 = (((x37&x38)>x39)<<x40);

    if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x62 = INT32_MIN;
	int8_t x64 = 1;
	int32_t t1 = -7;

    t1 = (((x61&x62)>x63)<<x64);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x67 = -236LL;
	volatile uint8_t x68 = 0U;
	volatile int32_t t2 = 99;

    t2 = (((x65&x66)>x67)<<x68);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x73 = 3088255U;
	int32_t t3 = -1545;

    t3 = (((x73&x74)>x75)<<x76);

    if (t3 != 512) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x86 = INT64_MIN;
	uint8_t x88 = 1U;
	volatile int32_t t4 = 28;

    t4 = (((x85&x86)>x87)<<x88);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x177 = INT16_MIN;
	volatile int16_t x178 = -1;
	static uint8_t x180 = 0U;
	static volatile int32_t t5 = 1468;

    t5 = (((x177&x178)>x179)<<x180);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x181 = 28;
	uint8_t x182 = 0U;
	static int32_t x183 = INT32_MIN;
	uint16_t x184 = 3U;
	static int32_t t6 = 1863;

    t6 = (((x181&x182)>x183)<<x184);

    if (t6 != 8) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x201 = INT32_MIN;
	int8_t x203 = -19;
	volatile int32_t t7 = -656922159;

    t7 = (((x201&x202)>x203)<<x204);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x334 = 30U;
	int8_t x335 = 5;
	static int64_t x336 = 30LL;
	int32_t t8 = 3560;

    t8 = (((x333&x334)>x335)<<x336);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x341 = UINT64_MAX;
	volatile int32_t x342 = 509930483;
	int64_t x343 = INT64_MIN;
	volatile uint8_t x344 = 0U;
	volatile int32_t t9 = -22380358;

    t9 = (((x341&x342)>x343)<<x344);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x417 = UINT16_MAX;
	int64_t x418 = INT64_MAX;
	volatile int64_t x419 = -1LL;
	uint16_t x420 = 6U;
	int32_t t10 = 648;

    t10 = (((x417&x418)>x419)<<x420);

    if (t10 != 64) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x429 = UINT32_MAX;
	uint8_t x430 = 7U;
	uint16_t x431 = 4U;
	volatile int32_t t11 = -16261424;

    t11 = (((x429&x430)>x431)<<x432);

    if (t11 != 32) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x433 = UINT32_MAX;
	int8_t x434 = INT8_MAX;
	volatile uint8_t x436 = 6U;
	volatile int32_t t12 = 605;

    t12 = (((x433&x434)>x435)<<x436);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x473 = INT64_MIN;
	volatile uint64_t x474 = 709479557221369LLU;
	volatile int32_t x475 = INT32_MIN;
	static volatile int32_t t13 = 120432754;

    t13 = (((x473&x474)>x475)<<x476);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x481 = 61;
	volatile int8_t x482 = -1;
	volatile uint32_t x483 = 127996218U;
	volatile uint16_t x484 = 7U;
	int32_t t14 = -13;

    t14 = (((x481&x482)>x483)<<x484);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x506 = 23U;
	int32_t x507 = INT32_MIN;

    t15 = (((x505&x506)>x507)<<x508);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x529 = UINT16_MAX;
	uint32_t x531 = UINT32_MAX;
	static uint8_t x532 = 10U;
	volatile int32_t t16 = -14;

    t16 = (((x529&x530)>x531)<<x532);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x549 = UINT16_MAX;
	int8_t x550 = -3;
	int32_t x551 = -69;
	uint32_t x552 = 1U;
	volatile int32_t t17 = -2201474;

    t17 = (((x549&x550)>x551)<<x552);

    if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x569 = 3LL;
	int64_t x570 = -35710569666936887LL;
	volatile int8_t x571 = INT8_MAX;
	static volatile uint64_t x572 = 6LLU;
	int32_t t18 = -211;

    t18 = (((x569&x570)>x571)<<x572);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x613 = INT16_MIN;
	int64_t x614 = INT64_MAX;
	uint64_t x616 = 27LLU;
	int32_t t19 = 851616;

    t19 = (((x613&x614)>x615)<<x616);

    if (t19 != 134217728) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x617 = INT64_MAX;
	int32_t t20 = -461677300;

    t20 = (((x617&x618)>x619)<<x620);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x621 = INT32_MIN;
	int32_t x622 = -1;
	int8_t x623 = 59;
	static uint8_t x624 = 7U;
	volatile int32_t t21 = 1279072;

    t21 = (((x621&x622)>x623)<<x624);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x666 = INT32_MAX;
	volatile int8_t x667 = INT8_MIN;
	int8_t x668 = 3;

    t22 = (((x665&x666)>x667)<<x668);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x669 = UINT16_MAX;
	volatile int8_t x672 = 10;
	volatile int32_t t23 = 561099329;

    t23 = (((x669&x670)>x671)<<x672);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x678 = INT32_MIN;
	volatile int8_t x679 = INT8_MIN;
	volatile int8_t x680 = 22;
	volatile int32_t t24 = 3146;

    t24 = (((x677&x678)>x679)<<x680);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x685 = -86028221LL;
	uint32_t x686 = 2086455U;
	uint32_t x687 = 2069562U;
	volatile int16_t x688 = 4;
	volatile int32_t t25 = 20149;

    t25 = (((x685&x686)>x687)<<x688);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x713 = INT64_MIN;
	volatile uint64_t x715 = 238379420050LLU;
	volatile int32_t t26 = 421176509;

    t26 = (((x713&x714)>x715)<<x716);

    if (t26 != 131072) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x721 = 1064301731LLU;
	uint32_t x722 = 54129708U;
	uint16_t x724 = 9U;
	static volatile int32_t t27 = -11108385;

    t27 = (((x721&x722)>x723)<<x724);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x741 = UINT64_MAX;
	uint16_t x742 = 1U;
	static int64_t x743 = -1LL;
	int64_t x744 = 1LL;
	int32_t t28 = 5845172;

    t28 = (((x741&x742)>x743)<<x744);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x837 = INT8_MIN;
	volatile int16_t x839 = INT16_MIN;
	uint8_t x840 = 3U;
	int32_t t29 = -418;

    t29 = (((x837&x838)>x839)<<x840);

    if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1022 = INT8_MIN;
	static uint16_t x1024 = 1U;

    t30 = (((x1021&x1022)>x1023)<<x1024);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x1025 = UINT64_MAX;
	int32_t x1026 = INT32_MIN;
	volatile int32_t t31 = -14;

    t31 = (((x1025&x1026)>x1027)<<x1028);

    if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x1045 = UINT64_MAX;
	uint16_t x1046 = UINT16_MAX;
	static volatile int8_t x1047 = INT8_MIN;
	static uint8_t x1048 = 2U;

    t32 = (((x1045&x1046)>x1047)<<x1048);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x1125 = UINT8_MAX;
	volatile uint64_t x1126 = 3LLU;
	volatile uint8_t x1128 = 29U;
	volatile int32_t t33 = 148802;

    t33 = (((x1125&x1126)>x1127)<<x1128);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x1145 = 236879896;
	static int16_t x1146 = -1;
	uint32_t x1147 = UINT32_MAX;
	uint16_t x1148 = 1U;

    t34 = (((x1145&x1146)>x1147)<<x1148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x1149 = 9U;
	int32_t x1150 = INT32_MAX;
	volatile int16_t x1151 = INT16_MAX;
	uint8_t x1152 = 1U;

    t35 = (((x1149&x1150)>x1151)<<x1152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1178 = -4829989038LL;
	int64_t x1179 = -1LL;
	volatile int16_t x1180 = 6;
	static volatile int32_t t36 = -1;

    t36 = (((x1177&x1178)>x1179)<<x1180);

    if (t36 != 64) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x1181 = -522061382;
	uint16_t x1182 = 823U;
	uint16_t x1183 = UINT16_MAX;
	static volatile int8_t x1184 = 14;
	int32_t t37 = 1;

    t37 = (((x1181&x1182)>x1183)<<x1184);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x1185 = UINT8_MAX;
	int8_t x1186 = 1;
	uint64_t x1187 = 2806128402386024131LLU;
	static uint8_t x1188 = 1U;

    t38 = (((x1185&x1186)>x1187)<<x1188);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1198 = INT64_MAX;
	static int16_t x1199 = INT16_MIN;
	uint8_t x1200 = 26U;
	volatile int32_t t39 = 1841;

    t39 = (((x1197&x1198)>x1199)<<x1200);

    if (t39 != 67108864) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x1239 = INT32_MAX;
	int32_t t40 = -728;

    t40 = (((x1237&x1238)>x1239)<<x1240);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x1282 = UINT8_MAX;
	static int64_t x1283 = -1LL;
	int32_t t41 = -381310780;

    t41 = (((x1281&x1282)>x1283)<<x1284);

    if (t41 != 4194304) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x1417 = INT32_MIN;
	uint32_t x1419 = 65529827U;
	uint8_t x1420 = 9U;

    t42 = (((x1417&x1418)>x1419)<<x1420);

    if (t42 != 512) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x1446 = INT64_MAX;
	int8_t x1447 = -1;
	uint16_t x1448 = 6U;
	int32_t t43 = -546814389;

    t43 = (((x1445&x1446)>x1447)<<x1448);

    if (t43 != 64) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x1457 = 391692715895690459LLU;
	int32_t t44 = -558392803;

    t44 = (((x1457&x1458)>x1459)<<x1460);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x1485 = -10;
	int16_t x1486 = -1;
	int8_t x1487 = -1;
	volatile uint16_t x1488 = 0U;
	volatile int32_t t45 = -1103;

    t45 = (((x1485&x1486)>x1487)<<x1488);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x1501 = 27U;
	uint8_t x1502 = 1U;
	uint8_t x1503 = UINT8_MAX;
	uint16_t x1504 = 2U;
	volatile int32_t t46 = -144111;

    t46 = (((x1501&x1502)>x1503)<<x1504);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x1510 = 6264329485944LLU;
	static int8_t x1511 = INT8_MAX;
	int8_t x1512 = 6;
	static int32_t t47 = 2822;

    t47 = (((x1509&x1510)>x1511)<<x1512);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x1521 = 2076195958991399LL;
	volatile int16_t x1524 = 1;
	volatile int32_t t48 = -134537262;

    t48 = (((x1521&x1522)>x1523)<<x1524);

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x1545 = -1LL;
	static uint16_t x1546 = UINT16_MAX;
	volatile uint64_t x1547 = UINT64_MAX;
	int8_t x1548 = 2;
	int32_t t49 = -485;

    t49 = (((x1545&x1546)>x1547)<<x1548);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x1557 = INT8_MIN;
	int32_t x1560 = 3;
	volatile int32_t t50 = -137;

    t50 = (((x1557&x1558)>x1559)<<x1560);

    if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x1573 = 69;
	static int64_t x1574 = -1LL;
	volatile int64_t x1575 = INT64_MIN;
	static uint8_t x1576 = 2U;
	volatile int32_t t51 = -4;

    t51 = (((x1573&x1574)>x1575)<<x1576);

    if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x1637 = 22U;
	uint32_t x1638 = 519964U;
	int32_t t52 = 1;

    t52 = (((x1637&x1638)>x1639)<<x1640);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1641 = INT8_MAX;
	int16_t x1642 = INT16_MIN;
	static int16_t x1643 = -1;
	int16_t x1644 = 0;
	int32_t t53 = 1221185;

    t53 = (((x1641&x1642)>x1643)<<x1644);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x1685 = 1U;
	int16_t x1686 = INT16_MIN;
	static volatile uint32_t x1687 = 9265615U;
	uint8_t x1688 = 3U;

    t54 = (((x1685&x1686)>x1687)<<x1688);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x1701 = INT16_MIN;
	volatile int64_t x1702 = INT64_MIN;
	volatile uint16_t x1703 = UINT16_MAX;
	int16_t x1704 = 7;
	int32_t t55 = 3041592;

    t55 = (((x1701&x1702)>x1703)<<x1704);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x1705 = 2885548726508LLU;
	static int16_t x1706 = -1;
	volatile int16_t x1707 = 642;
	int8_t x1708 = 5;
	static int32_t t56 = -5568;

    t56 = (((x1705&x1706)>x1707)<<x1708);

    if (t56 != 32) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x1753 = -1;
	static int64_t x1754 = INT64_MIN;
	static int32_t x1755 = INT32_MIN;
	static volatile int8_t x1756 = 1;
	volatile int32_t t57 = -7632173;

    t57 = (((x1753&x1754)>x1755)<<x1756);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x1789 = 7463U;
	static int32_t x1790 = -27;
	int32_t x1791 = -1;
	uint8_t x1792 = 14U;

    t58 = (((x1789&x1790)>x1791)<<x1792);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x1797 = 165840;
	volatile uint64_t x1798 = UINT64_MAX;
	volatile uint64_t x1799 = 93458112300656LLU;
	int8_t x1800 = 2;
	int32_t t59 = -114;

    t59 = (((x1797&x1798)>x1799)<<x1800);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x1801 = 56367262;
	uint16_t x1803 = 7152U;
	int8_t x1804 = 4;
	int32_t t60 = 336;

    t60 = (((x1801&x1802)>x1803)<<x1804);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x1819 = UINT16_MAX;
	int16_t x1820 = 1;
	volatile int32_t t61 = -6494;

    t61 = (((x1817&x1818)>x1819)<<x1820);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x1853 = UINT16_MAX;
	uint64_t x1854 = UINT64_MAX;
	int64_t x1855 = INT64_MIN;
	int16_t x1856 = 1;
	volatile int32_t t62 = 65394097;

    t62 = (((x1853&x1854)>x1855)<<x1856);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x1893 = -2097465858077337LL;
	static volatile int16_t x1894 = INT16_MAX;
	volatile int16_t x1895 = -3789;
	volatile int32_t t63 = -15;

    t63 = (((x1893&x1894)>x1895)<<x1896);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x1897 = 10U;
	int8_t x1899 = INT8_MAX;
	static int64_t x1900 = 6LL;
	int32_t t64 = -47751083;

    t64 = (((x1897&x1898)>x1899)<<x1900);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x1901 = INT64_MIN;
	int32_t x1902 = INT32_MIN;
	int16_t x1903 = INT16_MIN;
	int8_t x1904 = 12;

    t65 = (((x1901&x1902)>x1903)<<x1904);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x1942 = -26865;
	uint32_t x1944 = 1U;
	int32_t t66 = -1;

    t66 = (((x1941&x1942)>x1943)<<x1944);

    if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x1949 = -1LL;
	static uint32_t x1951 = UINT32_MAX;
	volatile int8_t x1952 = 6;

    t67 = (((x1949&x1950)>x1951)<<x1952);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x1989 = INT16_MIN;
	uint16_t x1991 = 1446U;
	int8_t x1992 = 19;
	int32_t t68 = -1571;

    t68 = (((x1989&x1990)>x1991)<<x1992);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x2009 = 19LL;
	volatile uint64_t x2011 = 805463059LLU;
	uint16_t x2012 = 30U;
	volatile int32_t t69 = -1355;

    t69 = (((x2009&x2010)>x2011)<<x2012);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x2041 = INT64_MIN;
	static int64_t x2042 = -7588031LL;
	int16_t x2043 = INT16_MAX;
	int64_t x2044 = 5LL;
	int32_t t70 = -77;

    t70 = (((x2041&x2042)>x2043)<<x2044);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x2069 = 1U;
	int8_t x2070 = INT8_MIN;
	uint16_t x2072 = 11U;
	volatile int32_t t71 = -19633;

    t71 = (((x2069&x2070)>x2071)<<x2072);

    if (t71 != 2048) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x2125 = INT8_MIN;
	static uint8_t x2126 = 1U;
	static uint32_t x2128 = 13U;
	static volatile int32_t t72 = -3106;

    t72 = (((x2125&x2126)>x2127)<<x2128);

    if (t72 != 8192) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2181 = -1;
	int8_t x2183 = -1;
	static uint64_t x2184 = 4LLU;

    t73 = (((x2181&x2182)>x2183)<<x2184);

    if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x2193 = 1U;
	int8_t x2194 = INT8_MIN;
	int8_t x2195 = -1;
	int16_t x2196 = 1;
	volatile int32_t t74 = 1585818;

    t74 = (((x2193&x2194)>x2195)<<x2196);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x2265 = -254;
	uint32_t x2267 = 111471007U;
	int32_t t75 = 40365039;

    t75 = (((x2265&x2266)>x2267)<<x2268);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x2305 = 207929U;
	volatile int16_t x2306 = INT16_MIN;
	int32_t x2307 = 435;
	uint8_t x2308 = 0U;
	volatile int32_t t76 = -2703;

    t76 = (((x2305&x2306)>x2307)<<x2308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x2321 = -1;
	uint8_t x2324 = 5U;
	volatile int32_t t77 = 3430;

    t77 = (((x2321&x2322)>x2323)<<x2324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x2333 = 41U;
	int32_t x2335 = 382667702;
	int8_t x2336 = 1;
	int32_t t78 = -3;

    t78 = (((x2333&x2334)>x2335)<<x2336);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x2398 = -1LL;
	int64_t x2399 = -15838521LL;
	int32_t t79 = 67723670;

    t79 = (((x2397&x2398)>x2399)<<x2400);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x2422 = INT8_MIN;
	int16_t x2424 = 12;
	int32_t t80 = 5133660;

    t80 = (((x2421&x2422)>x2423)<<x2424);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x2473 = 16736131049461196LLU;
	uint8_t x2476 = 2U;
	int32_t t81 = -1529;

    t81 = (((x2473&x2474)>x2475)<<x2476);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x2485 = UINT8_MAX;
	uint64_t x2487 = UINT64_MAX;
	uint32_t x2488 = 19U;
	int32_t t82 = -1641;

    t82 = (((x2485&x2486)>x2487)<<x2488);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x2489 = 444893225;
	int32_t x2490 = 7;
	volatile int32_t x2491 = -1510443;
	static volatile uint16_t x2492 = 24U;
	int32_t t83 = -2;

    t83 = (((x2489&x2490)>x2491)<<x2492);

    if (t83 != 16777216) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x2505 = INT8_MIN;
	volatile int16_t x2506 = 54;
	int32_t x2507 = -1;
	uint8_t x2508 = 25U;
	volatile int32_t t84 = 111;

    t84 = (((x2505&x2506)>x2507)<<x2508);

    if (t84 != 33554432) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x2513 = INT64_MAX;
	volatile int8_t x2514 = INT8_MIN;
	int16_t x2515 = INT16_MIN;
	int16_t x2516 = 14;
	volatile int32_t t85 = -9;

    t85 = (((x2513&x2514)>x2515)<<x2516);

    if (t85 != 16384) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x2518 = 5167788917LL;
	static int32_t x2519 = -1;
	uint8_t x2520 = 20U;
	static int32_t t86 = 48819953;

    t86 = (((x2517&x2518)>x2519)<<x2520);

    if (t86 != 1048576) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x2549 = INT8_MIN;
	static int32_t x2550 = INT32_MIN;
	volatile int32_t x2552 = 1;
	int32_t t87 = 1;

    t87 = (((x2549&x2550)>x2551)<<x2552);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x2582 = INT8_MIN;
	uint64_t x2583 = 26906804LLU;
	int32_t t88 = -8335637;

    t88 = (((x2581&x2582)>x2583)<<x2584);

    if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2597 = -659823;
	int16_t x2599 = -3;
	volatile int32_t t89 = 7244;

    t89 = (((x2597&x2598)>x2599)<<x2600);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x2609 = INT16_MAX;
	int32_t x2610 = -1;
	int32_t x2611 = 889809575;
	uint32_t x2612 = 1U;
	static int32_t t90 = 2014;

    t90 = (((x2609&x2610)>x2611)<<x2612);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x2618 = INT64_MAX;
	uint32_t x2619 = 3082U;
	int32_t t91 = -866191;

    t91 = (((x2617&x2618)>x2619)<<x2620);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x2629 = 17U;
	int64_t x2630 = INT64_MAX;
	volatile uint64_t x2631 = UINT64_MAX;
	int32_t t92 = -2995238;

    t92 = (((x2629&x2630)>x2631)<<x2632);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x2669 = 44U;
	int64_t x2670 = -1LL;
	static uint64_t x2671 = 13015859942798680LLU;
	volatile int32_t t93 = -775270891;

    t93 = (((x2669&x2670)>x2671)<<x2672);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x2693 = -1;
	uint32_t x2694 = UINT32_MAX;
	static int64_t x2695 = 2321LL;
	uint8_t x2696 = 0U;
	int32_t t94 = -4919692;

    t94 = (((x2693&x2694)>x2695)<<x2696);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x2713 = 888666LLU;
	int16_t x2714 = INT16_MAX;
	uint32_t x2715 = 27U;
	volatile int32_t t95 = 379055;

    t95 = (((x2713&x2714)>x2715)<<x2716);

    if (t95 != 1024) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x2719 = INT16_MAX;
	static uint8_t x2720 = 17U;
	volatile int32_t t96 = 89938752;

    t96 = (((x2717&x2718)>x2719)<<x2720);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x2817 = INT32_MIN;
	static uint8_t x2818 = 48U;
	static int32_t x2819 = -1;
	uint16_t x2820 = 20U;
	int32_t t97 = -22457;

    t97 = (((x2817&x2818)>x2819)<<x2820);

    if (t97 != 1048576) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x2837 = UINT16_MAX;
	int8_t x2839 = INT8_MIN;
	uint16_t x2840 = 12U;
	int32_t t98 = -7;

    t98 = (((x2837&x2838)>x2839)<<x2840);

    if (t98 != 4096) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x2841 = INT32_MIN;
	uint8_t x2842 = UINT8_MAX;

    t99 = (((x2841&x2842)>x2843)<<x2844);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x2858 = 1;
	static uint32_t x2859 = 35891970U;
	uint64_t x2860 = 5LLU;
	static int32_t t100 = -10275;

    t100 = (((x2857&x2858)>x2859)<<x2860);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x2868 = 7;

    t101 = (((x2865&x2866)>x2867)<<x2868);

    if (t101 != 128) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x2889 = -251075;
	uint8_t x2890 = UINT8_MAX;
	int32_t x2891 = -1;
	volatile uint8_t x2892 = 0U;
	int32_t t102 = -37123;

    t102 = (((x2889&x2890)>x2891)<<x2892);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x2893 = INT16_MIN;
	int64_t x2894 = INT64_MIN;
	uint8_t x2896 = 1U;
	volatile int32_t t103 = 1646;

    t103 = (((x2893&x2894)>x2895)<<x2896);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x2954 = INT32_MIN;
	int8_t x2955 = INT8_MIN;
	static volatile uint8_t x2956 = 11U;
	int32_t t104 = 3;

    t104 = (((x2953&x2954)>x2955)<<x2956);

    if (t104 != 2048) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x2977 = INT64_MIN;
	uint8_t x2979 = 0U;
	int8_t x2980 = 15;
	volatile int32_t t105 = 388;

    t105 = (((x2977&x2978)>x2979)<<x2980);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x2981 = 407;
	int16_t x2982 = -1;
	int32_t x2983 = INT32_MIN;
	uint32_t x2984 = 7U;
	volatile int32_t t106 = -687018;

    t106 = (((x2981&x2982)>x2983)<<x2984);

    if (t106 != 128) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x3021 = -1;
	int64_t x3022 = INT64_MIN;
	uint32_t x3024 = 3U;
	static int32_t t107 = -62066;

    t107 = (((x3021&x3022)>x3023)<<x3024);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x3045 = INT64_MIN;
	uint32_t x3047 = UINT32_MAX;
	int8_t x3048 = 12;
	int32_t t108 = -12858634;

    t108 = (((x3045&x3046)>x3047)<<x3048);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x3097 = -1;
	uint32_t x3098 = 775640U;
	int16_t x3099 = INT16_MIN;
	static volatile uint8_t x3100 = 2U;
	int32_t t109 = -502158140;

    t109 = (((x3097&x3098)>x3099)<<x3100);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3125 = 142LL;
	int64_t x3126 = 52812119LL;
	static int64_t x3127 = INT64_MAX;
	uint32_t x3128 = 9U;
	int32_t t110 = 2;

    t110 = (((x3125&x3126)>x3127)<<x3128);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x3145 = UINT16_MAX;
	static uint32_t x3148 = 1U;
	volatile int32_t t111 = 396807;

    t111 = (((x3145&x3146)>x3147)<<x3148);

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x3181 = 12;
	static int16_t x3183 = INT16_MIN;
	int8_t x3184 = 3;

    t112 = (((x3181&x3182)>x3183)<<x3184);

    if (t112 != 8) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x3197 = UINT64_MAX;
	static int8_t x3199 = 0;
	int16_t x3200 = 0;
	int32_t t113 = -385;

    t113 = (((x3197&x3198)>x3199)<<x3200);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x3225 = INT16_MIN;
	int8_t x3226 = -1;
	volatile uint8_t x3228 = 7U;
	volatile int32_t t114 = -1048853924;

    t114 = (((x3225&x3226)>x3227)<<x3228);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x3229 = 159U;
	static int64_t x3230 = 1914599LL;
	int16_t x3232 = 16;
	volatile int32_t t115 = 1214237;

    t115 = (((x3229&x3230)>x3231)<<x3232);

    if (t115 != 65536) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x3241 = INT32_MIN;
	uint16_t x3244 = 9U;
	volatile int32_t t116 = -20621817;

    t116 = (((x3241&x3242)>x3243)<<x3244);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x3301 = INT8_MIN;
	volatile int8_t x3303 = -1;
	int8_t x3304 = 1;
	static int32_t t117 = 7059;

    t117 = (((x3301&x3302)>x3303)<<x3304);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x3306 = -1;
	int16_t x3307 = INT16_MIN;
	volatile int16_t x3308 = 15;
	int32_t t118 = -282;

    t118 = (((x3305&x3306)>x3307)<<x3308);

    if (t118 != 32768) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x3337 = INT8_MIN;
	int32_t x3338 = INT32_MIN;
	volatile uint32_t x3339 = UINT32_MAX;
	uint32_t x3340 = 3U;
	volatile int32_t t119 = 3422;

    t119 = (((x3337&x3338)>x3339)<<x3340);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x3369 = -1LL;
	int16_t x3370 = INT16_MAX;
	uint8_t x3372 = 1U;
	volatile int32_t t120 = -9632949;

    t120 = (((x3369&x3370)>x3371)<<x3372);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x3481 = INT16_MAX;
	int16_t x3483 = 3;
	volatile int8_t x3484 = 23;

    t121 = (((x3481&x3482)>x3483)<<x3484);

    if (t121 != 8388608) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x3493 = INT8_MIN;
	uint32_t x3494 = 5493178U;
	int64_t x3495 = INT64_MAX;
	uint16_t x3496 = 28U;

    t122 = (((x3493&x3494)>x3495)<<x3496);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x3521 = INT8_MIN;
	uint64_t x3522 = 7LLU;
	static uint8_t x3523 = UINT8_MAX;
	uint8_t x3524 = 2U;

    t123 = (((x3521&x3522)>x3523)<<x3524);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x3582 = 1;
	static uint16_t x3583 = 4U;
	static int8_t x3584 = 2;

    t124 = (((x3581&x3582)>x3583)<<x3584);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x3627 = 23U;
	int8_t x3628 = 3;
	volatile int32_t t125 = -100102596;

    t125 = (((x3625&x3626)>x3627)<<x3628);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x3665 = INT8_MAX;
	int16_t x3666 = INT16_MIN;
	int16_t x3667 = INT16_MIN;
	volatile int32_t t126 = 323055;

    t126 = (((x3665&x3666)>x3667)<<x3668);

    if (t126 != 65536) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x3697 = INT32_MAX;
	volatile int32_t x3699 = INT32_MIN;
	uint16_t x3700 = 13U;
	static volatile int32_t t127 = 79879908;

    t127 = (((x3697&x3698)>x3699)<<x3700);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x3741 = -1;
	int16_t x3742 = 5425;
	uint8_t x3743 = UINT8_MAX;
	int32_t x3744 = 0;
	static volatile int32_t t128 = 32418;

    t128 = (((x3741&x3742)>x3743)<<x3744);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x3773 = 0;
	volatile int32_t t129 = -2548356;

    t129 = (((x3773&x3774)>x3775)<<x3776);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x3777 = INT32_MAX;
	int8_t x3779 = INT8_MIN;
	int8_t x3780 = 1;
	int32_t t130 = 12999929;

    t130 = (((x3777&x3778)>x3779)<<x3780);

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x3814 = -1;
	static uint8_t x3815 = 2U;
	volatile int32_t t131 = -1;

    t131 = (((x3813&x3814)>x3815)<<x3816);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x3837 = INT16_MIN;
	static int16_t x3838 = -1;
	int8_t x3840 = 8;
	volatile int32_t t132 = 40;

    t132 = (((x3837&x3838)>x3839)<<x3840);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x3857 = -36;
	int64_t x3858 = INT64_MIN;
	volatile int16_t x3859 = INT16_MAX;
	volatile uint16_t x3860 = 6U;
	int32_t t133 = 15;

    t133 = (((x3857&x3858)>x3859)<<x3860);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x3897 = 274602055;
	int8_t x3898 = 0;
	uint64_t x3899 = 247449051388724958LLU;
	uint8_t x3900 = 6U;
	int32_t t134 = -8333702;

    t134 = (((x3897&x3898)>x3899)<<x3900);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x3949 = -1;
	int16_t x3950 = -1;
	int8_t x3951 = INT8_MIN;
	volatile uint64_t x3952 = 2LLU;
	static volatile int32_t t135 = -95;

    t135 = (((x3949&x3950)>x3951)<<x3952);

    if (t135 != 4) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x3957 = UINT16_MAX;
	static int64_t x3958 = INT64_MIN;
	static int64_t x3959 = 2968544768278276166LL;
	static int32_t t136 = 3;

    t136 = (((x3957&x3958)>x3959)<<x3960);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x4042 = 1;
	int64_t x4043 = INT64_MIN;
	int8_t x4044 = 0;
	volatile int32_t t137 = -1;

    t137 = (((x4041&x4042)>x4043)<<x4044);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x4121 = 1U;
	static uint64_t x4122 = 1549932901360608LLU;
	static int32_t x4123 = -1;
	int64_t x4124 = 0LL;
	volatile int32_t t138 = -5;

    t138 = (((x4121&x4122)>x4123)<<x4124);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x4137 = 463;
	int32_t x4139 = INT32_MIN;
	static uint16_t x4140 = 29U;
	volatile int32_t t139 = -95847579;

    t139 = (((x4137&x4138)>x4139)<<x4140);

    if (t139 != 536870912) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x4148 = 2;
	int32_t t140 = -39;

    t140 = (((x4145&x4146)>x4147)<<x4148);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x4157 = INT8_MAX;
	int64_t x4158 = -193613365371LL;
	static int8_t x4159 = INT8_MIN;
	int16_t x4160 = 13;
	static int32_t t141 = -2267361;

    t141 = (((x4157&x4158)>x4159)<<x4160);

    if (t141 != 8192) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x4186 = INT32_MIN;
	static int8_t x4187 = 2;
	int8_t x4188 = 13;
	int32_t t142 = -918372;

    t142 = (((x4185&x4186)>x4187)<<x4188);

    if (t142 != 8192) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x4193 = INT16_MIN;
	int64_t x4195 = 710LL;
	static uint8_t x4196 = 1U;
	int32_t t143 = 305;

    t143 = (((x4193&x4194)>x4195)<<x4196);

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x4201 = 793;
	static int8_t x4202 = INT8_MIN;
	uint16_t x4203 = UINT16_MAX;
	uint16_t x4204 = 12U;
	static volatile int32_t t144 = -738261;

    t144 = (((x4201&x4202)>x4203)<<x4204);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x4221 = 2702U;
	int32_t x4223 = 17486665;
	uint16_t x4224 = 20U;
	volatile int32_t t145 = 55855;

    t145 = (((x4221&x4222)>x4223)<<x4224);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x4249 = 83276668;
	uint32_t x4251 = UINT32_MAX;
	int16_t x4252 = 0;
	volatile int32_t t146 = -201656795;

    t146 = (((x4249&x4250)>x4251)<<x4252);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x4255 = 79U;
	uint8_t x4256 = 6U;

    t147 = (((x4253&x4254)>x4255)<<x4256);

    if (t147 != 64) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x4281 = 182181761999LL;
	volatile int8_t x4282 = INT8_MIN;
	static int8_t x4283 = INT8_MIN;
	static uint16_t x4284 = 6U;
	volatile int32_t t148 = -46212943;

    t148 = (((x4281&x4282)>x4283)<<x4284);

    if (t148 != 64) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x4333 = 11U;

    t149 = (((x4333&x4334)>x4335)<<x4336);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x4341 = UINT32_MAX;
	uint64_t x4342 = 1LLU;
	static int16_t x4343 = -1;
	uint8_t x4344 = 24U;
	volatile int32_t t150 = 997;

    t150 = (((x4341&x4342)>x4343)<<x4344);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x4366 = INT32_MIN;
	static volatile uint8_t x4367 = 0U;
	uint8_t x4368 = 23U;
	volatile int32_t t151 = -12508505;

    t151 = (((x4365&x4366)>x4367)<<x4368);

    if (t151 != 8388608) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x4370 = 10181454U;

    t152 = (((x4369&x4370)>x4371)<<x4372);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x4425 = UINT16_MAX;
	int32_t x4426 = INT32_MIN;
	uint8_t x4427 = 27U;
	uint8_t x4428 = 1U;
	static int32_t t153 = 0;

    t153 = (((x4425&x4426)>x4427)<<x4428);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x4465 = -49;
	static int8_t x4466 = 54;
	int8_t x4468 = 2;
	int32_t t154 = -31;

    t154 = (((x4465&x4466)>x4467)<<x4468);

    if (t154 != 4) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x4477 = 0U;
	static int8_t x4479 = INT8_MIN;
	uint8_t x4480 = 2U;
	int32_t t155 = 451922014;

    t155 = (((x4477&x4478)>x4479)<<x4480);

    if (t155 != 4) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x4505 = 1U;
	int16_t x4506 = INT16_MIN;
	volatile int16_t x4507 = -43;
	int8_t x4508 = 0;

    t156 = (((x4505&x4506)>x4507)<<x4508);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x4549 = INT32_MIN;
	static volatile uint8_t x4552 = 0U;
	int32_t t157 = -415504;

    t157 = (((x4549&x4550)>x4551)<<x4552);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x4598 = 239;
	int16_t x4599 = INT16_MIN;
	int16_t x4600 = 0;
	static int32_t t158 = -747169515;

    t158 = (((x4597&x4598)>x4599)<<x4600);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x4605 = 170U;
	uint64_t x4606 = UINT64_MAX;
	uint16_t x4608 = 12U;
	static int32_t t159 = 19613449;

    t159 = (((x4605&x4606)>x4607)<<x4608);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x4675 = UINT64_MAX;
	volatile int32_t t160 = -95984;

    t160 = (((x4673&x4674)>x4675)<<x4676);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x4695 = INT8_MAX;
	uint32_t x4696 = 0U;
	volatile int32_t t161 = 99006981;

    t161 = (((x4693&x4694)>x4695)<<x4696);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x4705 = 36U;
	volatile uint8_t x4706 = 1U;
	volatile int16_t x4707 = INT16_MIN;
	int8_t x4708 = 5;
	int32_t t162 = -66670765;

    t162 = (((x4705&x4706)>x4707)<<x4708);

    if (t162 != 32) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x4722 = INT8_MAX;
	int64_t x4723 = INT64_MIN;
	static int8_t x4724 = 1;
	static int32_t t163 = 98836;

    t163 = (((x4721&x4722)>x4723)<<x4724);

    if (t163 != 2) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x4858 = INT32_MAX;
	volatile uint16_t x4859 = 86U;
	int32_t t164 = 53710;

    t164 = (((x4857&x4858)>x4859)<<x4860);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x4914 = INT8_MAX;
	uint8_t x4916 = 17U;
	volatile int32_t t165 = -59522730;

    t165 = (((x4913&x4914)>x4915)<<x4916);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x4982 = UINT8_MAX;
	static uint8_t x4983 = UINT8_MAX;
	uint16_t x4984 = 0U;
	int32_t t166 = -868362796;

    t166 = (((x4981&x4982)>x4983)<<x4984);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x4985 = -9296;
	uint32_t x4986 = UINT32_MAX;
	int8_t x4987 = INT8_MIN;
	uint8_t x4988 = 1U;
	int32_t t167 = -3;

    t167 = (((x4985&x4986)>x4987)<<x4988);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x5009 = INT8_MIN;
	int64_t x5010 = INT64_MIN;
	int16_t x5011 = INT16_MIN;
	static uint8_t x5012 = 12U;
	volatile int32_t t168 = 651941;

    t168 = (((x5009&x5010)>x5011)<<x5012);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x5045 = INT64_MAX;
	int64_t x5046 = INT64_MIN;
	static uint8_t x5047 = 4U;
	uint8_t x5048 = 0U;
	int32_t t169 = -1;

    t169 = (((x5045&x5046)>x5047)<<x5048);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x5117 = 72U;
	uint16_t x5118 = UINT16_MAX;
	int8_t x5119 = 1;
	uint8_t x5120 = 0U;
	int32_t t170 = -6298489;

    t170 = (((x5117&x5118)>x5119)<<x5120);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x5144 = 30;
	volatile int32_t t171 = -1;

    t171 = (((x5141&x5142)>x5143)<<x5144);

    if (t171 != 1073741824) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x5170 = 1;
	static int32_t x5171 = INT32_MAX;
	uint16_t x5172 = 0U;
	volatile int32_t t172 = 1998;

    t172 = (((x5169&x5170)>x5171)<<x5172);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x5174 = INT8_MIN;
	int16_t x5175 = INT16_MIN;
	uint8_t x5176 = 7U;
	volatile int32_t t173 = -7;

    t173 = (((x5173&x5174)>x5175)<<x5176);

    if (t173 != 128) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x5206 = 10719LLU;
	int32_t x5208 = 0;
	static volatile int32_t t174 = 1;

    t174 = (((x5205&x5206)>x5207)<<x5208);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x5209 = INT16_MIN;
	int64_t x5210 = INT64_MIN;
	volatile int32_t t175 = -114;

    t175 = (((x5209&x5210)>x5211)<<x5212);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x5213 = UINT64_MAX;
	int32_t x5214 = -438011236;
	uint8_t x5216 = 5U;
	int32_t t176 = 13360;

    t176 = (((x5213&x5214)>x5215)<<x5216);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x5253 = INT32_MIN;
	uint32_t x5254 = 72U;
	uint16_t x5255 = 4U;
	static uint16_t x5256 = 0U;
	int32_t t177 = 181183;

    t177 = (((x5253&x5254)>x5255)<<x5256);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x5286 = INT8_MIN;
	uint8_t x5287 = 17U;
	int16_t x5288 = 5;
	static int32_t t178 = -91246936;

    t178 = (((x5285&x5286)>x5287)<<x5288);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x5313 = -1LL;
	int8_t x5314 = INT8_MAX;
	static int8_t x5315 = INT8_MIN;
	int16_t x5316 = 3;

    t179 = (((x5313&x5314)>x5315)<<x5316);

    if (t179 != 8) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x5365 = -6;
	int32_t x5366 = INT32_MIN;
	int32_t x5367 = -85;
	static volatile uint8_t x5368 = 3U;
	int32_t t180 = 518410558;

    t180 = (((x5365&x5366)>x5367)<<x5368);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x5406 = 85827LL;
	int8_t x5407 = -28;
	int64_t x5408 = 25LL;
	int32_t t181 = 42;

    t181 = (((x5405&x5406)>x5407)<<x5408);

    if (t181 != 33554432) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x5497 = INT32_MIN;
	uint32_t x5498 = UINT32_MAX;
	static int64_t x5499 = -1LL;
	int32_t x5500 = 29;
	volatile int32_t t182 = 125780021;

    t182 = (((x5497&x5498)>x5499)<<x5500);

    if (t182 != 536870912) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x5502 = INT16_MIN;
	static uint16_t x5504 = 4U;
	int32_t t183 = 244902014;

    t183 = (((x5501&x5502)>x5503)<<x5504);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x5581 = INT32_MIN;
	int8_t x5582 = INT8_MIN;
	static int16_t x5583 = 246;
	uint32_t x5584 = 2U;

    t184 = (((x5581&x5582)>x5583)<<x5584);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x5650 = INT32_MIN;
	volatile uint8_t x5651 = 21U;
	volatile int32_t t185 = 192071;

    t185 = (((x5649&x5650)>x5651)<<x5652);

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x5665 = -8260142;
	int64_t x5666 = 5876440722LL;
	uint8_t x5667 = 0U;
	static int32_t x5668 = 0;
	int32_t t186 = -36;

    t186 = (((x5665&x5666)>x5667)<<x5668);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x5686 = UINT16_MAX;
	volatile int32_t x5687 = 7525311;
	uint8_t x5688 = 8U;
	static volatile int32_t t187 = 985959;

    t187 = (((x5685&x5686)>x5687)<<x5688);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x5713 = INT8_MIN;
	int32_t x5714 = INT32_MIN;
	volatile uint32_t x5716 = 14U;
	volatile int32_t t188 = 72311;

    t188 = (((x5713&x5714)>x5715)<<x5716);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x5749 = INT64_MIN;
	volatile int16_t x5750 = INT16_MIN;
	uint16_t x5751 = 0U;
	int32_t x5752 = 14;
	volatile int32_t t189 = 36;

    t189 = (((x5749&x5750)>x5751)<<x5752);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x5757 = 23856U;
	uint32_t x5758 = 256383U;
	uint8_t x5759 = 3U;
	int32_t t190 = -1;

    t190 = (((x5757&x5758)>x5759)<<x5760);

    if (t190 != 8192) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x5766 = UINT32_MAX;
	int8_t x5767 = -1;
	uint16_t x5768 = 3U;
	volatile int32_t t191 = 1681765;

    t191 = (((x5765&x5766)>x5767)<<x5768);

    if (t191 != 8) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x5773 = 3282;
	static volatile int32_t x5774 = 421;
	int32_t x5775 = INT32_MAX;
	uint64_t x5776 = 20LLU;
	volatile int32_t t192 = 768320531;

    t192 = (((x5773&x5774)>x5775)<<x5776);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x5821 = 25564U;
	volatile uint32_t x5822 = UINT32_MAX;
	int8_t x5823 = -50;
	uint8_t x5824 = 4U;
	int32_t t193 = 21;

    t193 = (((x5821&x5822)>x5823)<<x5824);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x5849 = -10390042;
	static volatile uint32_t x5850 = 158308245U;
	uint32_t x5851 = UINT32_MAX;
	static uint32_t x5852 = 1U;
	volatile int32_t t194 = -177;

    t194 = (((x5849&x5850)>x5851)<<x5852);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x6001 = 31166U;
	static uint64_t x6002 = 90256289625440560LLU;
	uint8_t x6003 = 2U;
	static volatile uint16_t x6004 = 6U;
	volatile int32_t t195 = -162207;

    t195 = (((x6001&x6002)>x6003)<<x6004);

    if (t195 != 64) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x6029 = 75U;
	int32_t x6030 = 1824301;
	uint64_t x6031 = 406LLU;
	static uint64_t x6032 = 11LLU;
	static int32_t t196 = 4066873;

    t196 = (((x6029&x6030)>x6031)<<x6032);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x6109 = -1LL;
	int64_t x6110 = 273623437672189692LL;
	int32_t x6111 = -1;
	uint8_t x6112 = 1U;

    t197 = (((x6109&x6110)>x6111)<<x6112);

    if (t197 != 2) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x6113 = 94093U;
	volatile int8_t x6114 = -1;
	int8_t x6115 = -1;

    t198 = (((x6113&x6114)>x6115)<<x6116);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x6121 = INT64_MAX;
	int8_t x6122 = INT8_MIN;
	int8_t x6123 = INT8_MIN;
	volatile int8_t x6124 = 0;
	int32_t t199 = -3;

    t199 = (((x6121&x6122)>x6123)<<x6124);

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

