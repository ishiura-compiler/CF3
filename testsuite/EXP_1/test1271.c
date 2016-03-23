
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

uint32_t x21 = UINT32_MAX;
int32_t x22 = -1;
int32_t x54 = -1;
int8_t x61 = -1;
static int32_t t4 = 20;
int8_t x91 = -1;
static int64_t x172 = 1LL;
static uint64_t x207 = UINT64_MAX;
int32_t x216 = 0;
uint8_t x229 = UINT8_MAX;
uint64_t x232 = 26LLU;
volatile int8_t x268 = 24;
static int64_t x275 = INT64_MIN;
volatile int32_t t13 = -4316303;
static volatile int16_t x318 = INT16_MAX;
volatile int64_t x381 = INT64_MAX;
int32_t x382 = INT32_MIN;
static int16_t x404 = 2;
uint8_t x439 = 37U;
volatile uint32_t x440 = 0U;
static int32_t t17 = 0;
static uint8_t x464 = 26U;
static int32_t t18 = 590;
volatile int32_t t19 = -14357;
static int8_t x569 = INT8_MIN;
volatile int16_t x606 = -1;
static volatile uint8_t x608 = 2U;
int32_t t24 = -1;
volatile int32_t x677 = 6;
int16_t x771 = -1;
uint32_t x772 = 23U;
static int16_t x785 = INT16_MIN;
static volatile int32_t t27 = -18;
static volatile int64_t x793 = -403LL;
volatile int16_t x912 = 1;
volatile int16_t x921 = 1503;
uint32_t x997 = UINT32_MAX;
int64_t x999 = -3959652802428513LL;
uint16_t x1003 = 14629U;
int64_t x1062 = -27589909442732185LL;
int8_t x1343 = INT8_MAX;
static volatile int32_t t36 = -5609;
static int64_t x1391 = -19620954742495LL;
volatile int16_t x1392 = 1;
int32_t t37 = 963819;
static int32_t t39 = -121;
uint32_t x1452 = 8U;
int8_t x1459 = -1;
int32_t x1478 = -1;
int8_t x1480 = 1;
uint8_t x1564 = 15U;
static volatile int32_t t45 = -56;
int8_t x1645 = -1;
uint8_t x1648 = 0U;
volatile int32_t t49 = -12369;
int8_t x1712 = 1;
int32_t t50 = -7146;
static volatile int8_t x1723 = INT8_MAX;
uint16_t x1775 = 4U;
volatile int32_t t53 = -1317;
int8_t x1856 = 20;
uint16_t x1919 = 14277U;
volatile int64_t x1950 = INT64_MIN;
int8_t x1973 = INT8_MIN;
static int64_t x2079 = INT64_MAX;
int32_t x2104 = 5;
uint64_t x2121 = 11985754999LLU;
static int8_t x2169 = -1;
int16_t x2251 = -1;
static volatile int32_t t67 = 2540;
volatile uint8_t x2315 = UINT8_MAX;
static volatile int32_t t68 = 62701;
int64_t x2325 = INT64_MIN;
uint32_t x2326 = UINT32_MAX;
static int32_t x2373 = INT32_MIN;
volatile uint32_t x2375 = 1U;
volatile int32_t x2389 = INT32_MIN;
int8_t x2424 = 0;
volatile int8_t x2433 = 44;
volatile int32_t x2439 = INT32_MAX;
volatile int32_t x2468 = 0;
int32_t x2567 = 0;
volatile int32_t t78 = -3693648;
int16_t x2610 = 166;
int32_t t80 = -7235323;
static volatile int32_t t81 = -7;
volatile uint32_t x2702 = 829U;
int64_t x2703 = -645704LL;
int8_t x2721 = INT8_MAX;
int8_t x2725 = INT8_MIN;
int64_t x2728 = 0LL;
static int32_t t84 = 0;
volatile int32_t x2738 = INT32_MAX;
volatile int32_t x2739 = INT32_MIN;
volatile int32_t x2746 = INT32_MAX;
int16_t x2748 = 0;
int32_t t86 = 1;
int64_t x2761 = INT64_MIN;
int32_t x2763 = INT32_MIN;
volatile uint8_t x2764 = 2U;
volatile int32_t t88 = -950566948;
int8_t x2794 = -1;
static volatile int32_t t89 = -2;
uint8_t x2900 = 7U;
int32_t t91 = -126;
int32_t x2917 = INT32_MAX;
uint16_t x2951 = 2096U;
int32_t t94 = 1023853;
int32_t x3017 = INT32_MAX;
uint64_t x3018 = 11159745446LLU;
static int16_t x3019 = INT16_MIN;
uint8_t x3020 = 7U;
uint64_t x3026 = 6108700089287233067LLU;
volatile int32_t x3028 = 0;
volatile int32_t t98 = -31434946;
int32_t x3061 = INT32_MIN;
volatile int32_t t99 = 7955;
int64_t x3093 = 19379425227LL;
static int32_t x3097 = INT32_MAX;
volatile int32_t t101 = 0;
uint8_t x3147 = 52U;
static int32_t x3247 = -1;
volatile int32_t t106 = -364935395;
uint8_t x3290 = UINT8_MAX;
int64_t x3294 = INT64_MAX;
int32_t t109 = -1;
static int32_t t110 = 11;
int64_t x3313 = -1LL;
volatile int64_t x3314 = 3000793109LL;
int64_t x3315 = -1LL;
uint8_t x3316 = 4U;
uint8_t x3516 = 3U;
uint8_t x3749 = 0U;
uint64_t x3752 = 0LLU;
int8_t x3829 = 60;
uint32_t x3845 = 6605U;
uint32_t x3925 = UINT32_MAX;
uint32_t x3927 = 1U;
uint32_t x4027 = 8013819U;
int32_t x4092 = 1;
volatile int32_t t128 = -2;
volatile uint8_t x4119 = UINT8_MAX;
uint16_t x4159 = 674U;
uint32_t x4181 = 306923374U;
volatile uint8_t x4184 = 0U;
volatile int64_t x4250 = INT64_MAX;
int64_t x4309 = INT64_MAX;
int16_t x4310 = 0;
int32_t t136 = 21237;
uint64_t x4323 = 0LLU;
uint8_t x4381 = UINT8_MAX;
volatile int8_t x4382 = INT8_MIN;
volatile int32_t t138 = -1604287;
int16_t x4413 = INT16_MAX;
volatile int32_t x4415 = INT32_MAX;
volatile uint8_t x4416 = 25U;
uint16_t x4476 = 2U;
static int32_t t140 = 495;
uint64_t x4490 = 1771LLU;
uint32_t x4492 = 13U;
int32_t t141 = -172;
volatile int32_t x4494 = -1;
uint32_t x4539 = 225639U;
int8_t x4561 = INT8_MAX;
int16_t x4562 = -1;
volatile int64_t x4627 = INT64_MIN;
uint16_t x4628 = 9U;
int8_t x4652 = 1;
volatile int64_t x4653 = INT64_MIN;
static volatile int8_t x4654 = INT8_MAX;
uint64_t x4655 = 466626023LLU;
int8_t x4664 = 0;
static volatile uint8_t x4676 = 17U;
int32_t x4737 = 5516;
static int64_t x4811 = 8897LL;
int8_t x4858 = -1;
uint8_t x4879 = 28U;
int8_t x4900 = 11;
static volatile int32_t t160 = -12;
uint16_t x4922 = 2U;
int32_t t161 = -40404380;
static volatile int8_t x4925 = -1;
int16_t x4926 = -1;
int8_t x4928 = 0;
static volatile int16_t x5009 = -1;
int32_t t163 = 1334695;
static int16_t x5016 = 2;
static int32_t t164 = 1628939;
int8_t x5018 = -1;
static uint32_t x5020 = 1U;
static volatile int32_t t165 = 4;
int16_t x5029 = -1;
int32_t x5032 = 10;
int32_t t167 = 25717133;
int8_t x5090 = INT8_MAX;
static uint16_t x5095 = 7220U;
int32_t x5115 = -1;
uint8_t x5116 = 0U;
volatile int32_t t171 = 20;
uint16_t x5258 = UINT16_MAX;
uint64_t x5260 = 6LLU;
uint32_t x5297 = 1055U;
volatile int32_t t179 = 3015666;
int8_t x5391 = INT8_MAX;
volatile int32_t t180 = 29;
int64_t x5525 = INT64_MIN;
int32_t t182 = 718612;
int16_t x5537 = INT16_MIN;
static uint8_t x5540 = 1U;
volatile uint64_t x5586 = UINT64_MAX;
int64_t x5631 = INT64_MIN;
static volatile int32_t t187 = -22927558;
static volatile int32_t t188 = -2101;
int8_t x5646 = INT8_MAX;
int64_t x5777 = INT64_MIN;
volatile uint8_t x5780 = 1U;
volatile int32_t t192 = 30882;
int16_t x5821 = 62;
static int32_t x5822 = -1825;
static volatile int32_t t193 = 0;
int64_t x5929 = INT64_MIN;
int32_t t197 = -3717;
volatile int8_t x6109 = 6;
uint16_t x6112 = 0U;
volatile int32_t t199 = 28;


void f0(void) {
    	static uint64_t x23 = 197022458LLU;
	volatile uint16_t x24 = 1U;
	volatile int32_t t0 = -2096191;

    t0 = (((x21!=x22)!=x23)>>x24);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x29 = UINT64_MAX;
	static int16_t x30 = INT16_MIN;
	volatile int8_t x31 = INT8_MIN;
	int16_t x32 = 3;
	volatile int32_t t1 = 211;

    t1 = (((x29!=x30)!=x31)>>x32);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x53 = INT64_MIN;
	static uint64_t x55 = 134001883726LLU;
	uint8_t x56 = 0U;
	volatile int32_t t2 = -7;

    t2 = (((x53!=x54)!=x55)>>x56);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x62 = 201532LL;
	volatile int8_t x63 = INT8_MAX;
	volatile int16_t x64 = 0;
	int32_t t3 = -70686795;

    t3 = (((x61!=x62)!=x63)>>x64);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x77 = -50;
	uint64_t x78 = 5LLU;
	static int16_t x79 = INT16_MIN;
	uint32_t x80 = 13U;

    t4 = (((x77!=x78)!=x79)>>x80);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x89 = UINT8_MAX;
	static int32_t x90 = INT32_MIN;
	volatile int16_t x92 = 0;
	int32_t t5 = 0;

    t5 = (((x89!=x90)!=x91)>>x92);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x129 = 20U;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	uint16_t x132 = 27U;
	int32_t t6 = 7302313;

    t6 = (((x129!=x130)!=x131)>>x132);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x169 = UINT32_MAX;
	int8_t x170 = INT8_MAX;
	int8_t x171 = 6;
	int32_t t7 = -339;

    t7 = (((x169!=x170)!=x171)>>x172);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x197 = INT64_MIN;
	static int32_t x198 = 5994628;
	volatile int8_t x199 = INT8_MAX;
	uint16_t x200 = 3U;
	volatile int32_t t8 = 16351;

    t8 = (((x197!=x198)!=x199)>>x200);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x205 = -112;
	volatile uint8_t x206 = 2U;
	int8_t x208 = 11;
	volatile int32_t t9 = -24299;

    t9 = (((x205!=x206)!=x207)>>x208);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x213 = INT8_MAX;
	uint32_t x214 = 608687068U;
	int8_t x215 = 1;
	static volatile int32_t t10 = 455;

    t10 = (((x213!=x214)!=x215)>>x216);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x230 = 10;
	int8_t x231 = 56;
	static int32_t t11 = -8;

    t11 = (((x229!=x230)!=x231)>>x232);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x265 = INT32_MIN;
	uint8_t x266 = 106U;
	static int8_t x267 = -1;
	static volatile int32_t t12 = -3482;

    t12 = (((x265!=x266)!=x267)>>x268);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x273 = -1;
	int8_t x274 = INT8_MIN;
	static int8_t x276 = 1;

    t13 = (((x273!=x274)!=x275)>>x276);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x317 = INT32_MIN;
	uint16_t x319 = 9504U;
	uint16_t x320 = 3U;
	volatile int32_t t14 = 3;

    t14 = (((x317!=x318)!=x319)>>x320);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x383 = 58U;
	int32_t x384 = 0;
	volatile int32_t t15 = -230009;

    t15 = (((x381!=x382)!=x383)>>x384);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x401 = -1;
	int8_t x402 = 1;
	int64_t x403 = -1550474366029896994LL;
	static int32_t t16 = 38;

    t16 = (((x401!=x402)!=x403)>>x404);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x437 = INT64_MIN;
	static int8_t x438 = INT8_MIN;

    t17 = (((x437!=x438)!=x439)>>x440);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x461 = -1;
	volatile uint32_t x462 = 14111U;
	int8_t x463 = INT8_MIN;

    t18 = (((x461!=x462)!=x463)>>x464);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x497 = INT64_MIN;
	uint32_t x498 = 1992U;
	int16_t x499 = 14498;
	uint16_t x500 = 29U;

    t19 = (((x497!=x498)!=x499)>>x500);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x517 = 19U;
	int32_t x518 = -20691558;
	volatile int8_t x519 = 14;
	volatile int8_t x520 = 0;
	static volatile int32_t t20 = -2031455;

    t20 = (((x517!=x518)!=x519)>>x520);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x529 = -24924651138505LL;
	volatile int32_t x530 = INT32_MIN;
	int32_t x531 = -1;
	static int16_t x532 = 1;
	volatile int32_t t21 = 16098;

    t21 = (((x529!=x530)!=x531)>>x532);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x570 = 0;
	static int8_t x571 = -8;
	uint16_t x572 = 29U;
	volatile int32_t t22 = 469837;

    t22 = (((x569!=x570)!=x571)>>x572);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x605 = 5215;
	int8_t x607 = -1;
	static int32_t t23 = 1;

    t23 = (((x605!=x606)!=x607)>>x608);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x633 = UINT64_MAX;
	int16_t x634 = INT16_MIN;
	volatile int64_t x635 = INT64_MAX;
	int8_t x636 = 1;

    t24 = (((x633!=x634)!=x635)>>x636);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x678 = 11920;
	static int32_t x679 = -1;
	uint8_t x680 = 2U;
	int32_t t25 = 31736;

    t25 = (((x677!=x678)!=x679)>>x680);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x769 = UINT32_MAX;
	int8_t x770 = INT8_MIN;
	int32_t t26 = 186768;

    t26 = (((x769!=x770)!=x771)>>x772);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x786 = -13;
	int32_t x787 = INT32_MIN;
	uint16_t x788 = 2U;

    t27 = (((x785!=x786)!=x787)>>x788);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x794 = 4245468U;
	uint16_t x795 = UINT16_MAX;
	static volatile int8_t x796 = 0;
	volatile int32_t t28 = -3253606;

    t28 = (((x793!=x794)!=x795)>>x796);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x889 = INT32_MAX;
	volatile int16_t x890 = -1;
	uint64_t x891 = 3957577641802542LLU;
	volatile uint16_t x892 = 7U;
	int32_t t29 = 6223;

    t29 = (((x889!=x890)!=x891)>>x892);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x909 = -1;
	int32_t x910 = -1;
	static int8_t x911 = INT8_MAX;
	volatile int32_t t30 = 29084953;

    t30 = (((x909!=x910)!=x911)>>x912);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x922 = -16;
	int8_t x923 = -1;
	uint16_t x924 = 0U;
	int32_t t31 = 7293;

    t31 = (((x921!=x922)!=x923)>>x924);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x998 = 2573U;
	uint64_t x1000 = 6LLU;
	volatile int32_t t32 = 149;

    t32 = (((x997!=x998)!=x999)>>x1000);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1001 = INT8_MIN;
	int32_t x1002 = -1;
	uint8_t x1004 = 11U;
	int32_t t33 = 532007826;

    t33 = (((x1001!=x1002)!=x1003)>>x1004);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x1061 = 3U;
	volatile uint64_t x1063 = 5719218LLU;
	int8_t x1064 = 23;
	int32_t t34 = -9081630;

    t34 = (((x1061!=x1062)!=x1063)>>x1064);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x1145 = 376454U;
	int8_t x1146 = -1;
	static int16_t x1147 = -1;
	int16_t x1148 = 24;
	volatile int32_t t35 = 2;

    t35 = (((x1145!=x1146)!=x1147)>>x1148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1341 = 145;
	int64_t x1342 = INT64_MIN;
	int8_t x1344 = 0;

    t36 = (((x1341!=x1342)!=x1343)>>x1344);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1389 = -1;
	int32_t x1390 = INT32_MAX;

    t37 = (((x1389!=x1390)!=x1391)>>x1392);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1409 = UINT8_MAX;
	int64_t x1410 = INT64_MIN;
	static uint32_t x1411 = UINT32_MAX;
	int32_t x1412 = 3;
	int32_t t38 = -885108221;

    t38 = (((x1409!=x1410)!=x1411)>>x1412);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x1417 = -1;
	int16_t x1418 = INT16_MIN;
	int64_t x1419 = INT64_MAX;
	uint8_t x1420 = 9U;

    t39 = (((x1417!=x1418)!=x1419)>>x1420);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1449 = -1;
	int16_t x1450 = INT16_MAX;
	int64_t x1451 = -4998LL;
	volatile int32_t t40 = 399769;

    t40 = (((x1449!=x1450)!=x1451)>>x1452);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x1453 = -195LL;
	static int32_t x1454 = INT32_MIN;
	static uint64_t x1455 = 18903305625LLU;
	static int16_t x1456 = 1;
	int32_t t41 = -86;

    t41 = (((x1453!=x1454)!=x1455)>>x1456);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint32_t x1457 = 45184U;
	int64_t x1458 = -554567807702573LL;
	uint16_t x1460 = 2U;
	volatile int32_t t42 = 257543210;

    t42 = (((x1457!=x1458)!=x1459)>>x1460);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x1477 = 49U;
	volatile int16_t x1479 = -1;
	int32_t t43 = 49;

    t43 = (((x1477!=x1478)!=x1479)>>x1480);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x1557 = INT32_MIN;
	int64_t x1558 = -1LL;
	int16_t x1559 = INT16_MAX;
	static uint8_t x1560 = 0U;
	int32_t t44 = -273311401;

    t44 = (((x1557!=x1558)!=x1559)>>x1560);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x1561 = INT16_MIN;
	int32_t x1562 = -4373520;
	int8_t x1563 = -1;

    t45 = (((x1561!=x1562)!=x1563)>>x1564);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x1585 = -1;
	volatile uint8_t x1586 = 100U;
	static volatile int32_t x1587 = -1;
	uint8_t x1588 = 30U;
	int32_t t46 = 8511;

    t46 = (((x1585!=x1586)!=x1587)>>x1588);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x1589 = INT8_MAX;
	int16_t x1590 = 0;
	int64_t x1591 = INT64_MIN;
	volatile int32_t x1592 = 0;
	int32_t t47 = -4614;

    t47 = (((x1589!=x1590)!=x1591)>>x1592);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x1646 = INT16_MIN;
	uint64_t x1647 = UINT64_MAX;
	int32_t t48 = -18691;

    t48 = (((x1645!=x1646)!=x1647)>>x1648);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x1693 = -3644;
	uint8_t x1694 = UINT8_MAX;
	int8_t x1695 = INT8_MIN;
	int8_t x1696 = 20;

    t49 = (((x1693!=x1694)!=x1695)>>x1696);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x1709 = INT64_MAX;
	volatile uint16_t x1710 = 894U;
	int16_t x1711 = -1;

    t50 = (((x1709!=x1710)!=x1711)>>x1712);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x1721 = INT32_MIN;
	uint32_t x1722 = UINT32_MAX;
	uint8_t x1724 = 3U;
	volatile int32_t t51 = 51407;

    t51 = (((x1721!=x1722)!=x1723)>>x1724);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x1773 = 1;
	uint16_t x1774 = 1U;
	int8_t x1776 = 0;
	volatile int32_t t52 = 0;

    t52 = (((x1773!=x1774)!=x1775)>>x1776);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x1821 = INT64_MIN;
	uint8_t x1822 = 19U;
	int8_t x1823 = 1;
	int8_t x1824 = 1;

    t53 = (((x1821!=x1822)!=x1823)>>x1824);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x1833 = 1U;
	int8_t x1834 = INT8_MIN;
	uint64_t x1835 = 2072566941482677754LLU;
	int8_t x1836 = 6;
	int32_t t54 = 29774610;

    t54 = (((x1833!=x1834)!=x1835)>>x1836);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x1853 = 30961787U;
	int16_t x1854 = -1;
	int64_t x1855 = -1LL;
	volatile int32_t t55 = 6;

    t55 = (((x1853!=x1854)!=x1855)>>x1856);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x1917 = 26609;
	int64_t x1918 = INT64_MIN;
	int8_t x1920 = 5;
	volatile int32_t t56 = -912;

    t56 = (((x1917!=x1918)!=x1919)>>x1920);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x1949 = INT32_MIN;
	uint8_t x1951 = 96U;
	static volatile uint16_t x1952 = 0U;
	int32_t t57 = 64810;

    t57 = (((x1949!=x1950)!=x1951)>>x1952);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x1974 = 402U;
	static int8_t x1975 = -4;
	uint8_t x1976 = 3U;
	int32_t t58 = -30841;

    t58 = (((x1973!=x1974)!=x1975)>>x1976);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x2045 = 2;
	int16_t x2046 = -10;
	int32_t x2047 = -1;
	uint8_t x2048 = 3U;
	static volatile int32_t t59 = 12;

    t59 = (((x2045!=x2046)!=x2047)>>x2048);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x2077 = INT8_MIN;
	int8_t x2078 = -6;
	uint16_t x2080 = 0U;
	volatile int32_t t60 = -68;

    t60 = (((x2077!=x2078)!=x2079)>>x2080);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x2081 = UINT64_MAX;
	uint32_t x2082 = UINT32_MAX;
	static volatile int8_t x2083 = INT8_MIN;
	uint32_t x2084 = 0U;
	int32_t t61 = 15746420;

    t61 = (((x2081!=x2082)!=x2083)>>x2084);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x2097 = INT8_MAX;
	int64_t x2098 = -1LL;
	static uint8_t x2099 = 24U;
	volatile int16_t x2100 = 3;
	int32_t t62 = -55;

    t62 = (((x2097!=x2098)!=x2099)>>x2100);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x2101 = 13110LLU;
	uint16_t x2102 = 1264U;
	static volatile int32_t x2103 = -1;
	volatile int32_t t63 = -209064286;

    t63 = (((x2101!=x2102)!=x2103)>>x2104);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2122 = INT16_MIN;
	uint16_t x2123 = UINT16_MAX;
	uint8_t x2124 = 16U;
	int32_t t64 = -405632;

    t64 = (((x2121!=x2122)!=x2123)>>x2124);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x2129 = 18LL;
	static uint16_t x2130 = UINT16_MAX;
	int8_t x2131 = -1;
	int8_t x2132 = 6;
	int32_t t65 = -989851161;

    t65 = (((x2129!=x2130)!=x2131)>>x2132);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x2170 = -1;
	int8_t x2171 = INT8_MIN;
	uint8_t x2172 = 15U;
	int32_t t66 = -801;

    t66 = (((x2169!=x2170)!=x2171)>>x2172);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x2249 = 84U;
	volatile uint64_t x2250 = 5731LLU;
	volatile int8_t x2252 = 1;

    t67 = (((x2249!=x2250)!=x2251)>>x2252);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x2313 = 2U;
	int16_t x2314 = INT16_MIN;
	static int8_t x2316 = 1;

    t68 = (((x2313!=x2314)!=x2315)>>x2316);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x2327 = 6U;
	static uint8_t x2328 = 30U;
	static volatile int32_t t69 = -1633666;

    t69 = (((x2325!=x2326)!=x2327)>>x2328);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x2374 = INT32_MAX;
	int8_t x2376 = 1;
	volatile int32_t t70 = -222253273;

    t70 = (((x2373!=x2374)!=x2375)>>x2376);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x2381 = 24;
	static volatile int8_t x2382 = 11;
	static volatile int64_t x2383 = -1LL;
	volatile int8_t x2384 = 0;
	int32_t t71 = -830;

    t71 = (((x2381!=x2382)!=x2383)>>x2384);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x2390 = INT16_MIN;
	static int64_t x2391 = -1LL;
	uint8_t x2392 = 1U;
	volatile int32_t t72 = 69;

    t72 = (((x2389!=x2390)!=x2391)>>x2392);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x2421 = UINT32_MAX;
	int16_t x2422 = -511;
	volatile int32_t x2423 = -599;
	volatile int32_t t73 = -7;

    t73 = (((x2421!=x2422)!=x2423)>>x2424);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x2434 = 158U;
	volatile int64_t x2435 = INT64_MIN;
	int32_t x2436 = 25;
	volatile int32_t t74 = 6255562;

    t74 = (((x2433!=x2434)!=x2435)>>x2436);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x2437 = -1;
	uint8_t x2438 = 12U;
	uint8_t x2440 = 4U;
	volatile int32_t t75 = -18;

    t75 = (((x2437!=x2438)!=x2439)>>x2440);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x2465 = -1;
	int8_t x2466 = INT8_MIN;
	int16_t x2467 = -1;
	volatile int32_t t76 = -1896078;

    t76 = (((x2465!=x2466)!=x2467)>>x2468);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x2545 = UINT32_MAX;
	int8_t x2546 = 58;
	volatile int8_t x2547 = -33;
	uint64_t x2548 = 0LLU;
	int32_t t77 = 206;

    t77 = (((x2545!=x2546)!=x2547)>>x2548);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x2565 = 3471;
	uint16_t x2566 = UINT16_MAX;
	volatile uint32_t x2568 = 8U;

    t78 = (((x2565!=x2566)!=x2567)>>x2568);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x2609 = UINT8_MAX;
	static volatile int16_t x2611 = INT16_MIN;
	static volatile int8_t x2612 = 4;
	volatile int32_t t79 = 22;

    t79 = (((x2609!=x2610)!=x2611)>>x2612);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x2633 = 1;
	volatile int32_t x2634 = INT32_MIN;
	volatile int64_t x2635 = 1986762711303LL;
	volatile uint8_t x2636 = 4U;

    t80 = (((x2633!=x2634)!=x2635)>>x2636);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x2665 = -1;
	uint32_t x2666 = 1138U;
	int64_t x2667 = INT64_MAX;
	static int8_t x2668 = 0;

    t81 = (((x2665!=x2666)!=x2667)>>x2668);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x2701 = 1037411;
	uint16_t x2704 = 7U;
	int32_t t82 = 2288321;

    t82 = (((x2701!=x2702)!=x2703)>>x2704);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x2722 = -138LL;
	int16_t x2723 = -1;
	uint8_t x2724 = 12U;
	volatile int32_t t83 = -4329;

    t83 = (((x2721!=x2722)!=x2723)>>x2724);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x2726 = 10489LLU;
	volatile int8_t x2727 = INT8_MIN;

    t84 = (((x2725!=x2726)!=x2727)>>x2728);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x2737 = 123U;
	uint8_t x2740 = 11U;
	int32_t t85 = -2;

    t85 = (((x2737!=x2738)!=x2739)>>x2740);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x2745 = 453;
	int32_t x2747 = INT32_MIN;

    t86 = (((x2745!=x2746)!=x2747)>>x2748);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x2762 = -1;
	int32_t t87 = -4957493;

    t87 = (((x2761!=x2762)!=x2763)>>x2764);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x2785 = INT8_MIN;
	static int16_t x2786 = INT16_MIN;
	int32_t x2787 = INT32_MIN;
	int16_t x2788 = 0;

    t88 = (((x2785!=x2786)!=x2787)>>x2788);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x2793 = 5U;
	int8_t x2795 = INT8_MIN;
	volatile int32_t x2796 = 17;

    t89 = (((x2793!=x2794)!=x2795)>>x2796);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x2797 = 21U;
	int16_t x2798 = -1;
	volatile int16_t x2799 = INT16_MIN;
	static int8_t x2800 = 2;
	volatile int32_t t90 = -42;

    t90 = (((x2797!=x2798)!=x2799)>>x2800);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x2897 = -7;
	static uint64_t x2898 = 521818342543202LLU;
	int64_t x2899 = 63670045970656685LL;

    t91 = (((x2897!=x2898)!=x2899)>>x2900);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x2918 = -1;
	int8_t x2919 = INT8_MIN;
	static int8_t x2920 = 0;
	static volatile int32_t t92 = -8;

    t92 = (((x2917!=x2918)!=x2919)>>x2920);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x2933 = 47U;
	static int32_t x2934 = 249220;
	uint8_t x2935 = UINT8_MAX;
	uint16_t x2936 = 1U;
	volatile int32_t t93 = -796;

    t93 = (((x2933!=x2934)!=x2935)>>x2936);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x2949 = 18898U;
	volatile int8_t x2950 = 0;
	int8_t x2952 = 13;

    t94 = (((x2949!=x2950)!=x2951)>>x2952);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t t95 = -9339997;

    t95 = (((x3017!=x3018)!=x3019)>>x3020);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x3025 = INT16_MIN;
	int16_t x3027 = INT16_MIN;
	int32_t t96 = 1768;

    t96 = (((x3025!=x3026)!=x3027)>>x3028);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x3029 = INT16_MIN;
	volatile int16_t x3030 = INT16_MIN;
	int16_t x3031 = INT16_MIN;
	uint16_t x3032 = 22U;
	volatile int32_t t97 = 2970443;

    t97 = (((x3029!=x3030)!=x3031)>>x3032);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x3049 = INT32_MIN;
	volatile uint32_t x3050 = UINT32_MAX;
	uint64_t x3051 = UINT64_MAX;
	int8_t x3052 = 30;

    t98 = (((x3049!=x3050)!=x3051)>>x3052);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x3062 = -1;
	int32_t x3063 = -1;
	int8_t x3064 = 1;

    t99 = (((x3061!=x3062)!=x3063)>>x3064);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x3094 = 16952523LLU;
	int32_t x3095 = INT32_MIN;
	int16_t x3096 = 30;
	volatile int32_t t100 = 23289341;

    t100 = (((x3093!=x3094)!=x3095)>>x3096);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x3098 = 19924LLU;
	int16_t x3099 = INT16_MIN;
	static uint8_t x3100 = 0U;

    t101 = (((x3097!=x3098)!=x3099)>>x3100);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x3113 = 7296951U;
	static int64_t x3114 = INT64_MAX;
	int32_t x3115 = 62852;
	static volatile int32_t x3116 = 23;
	volatile int32_t t102 = 1235519;

    t102 = (((x3113!=x3114)!=x3115)>>x3116);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x3145 = -1;
	static volatile int64_t x3146 = INT64_MIN;
	static uint16_t x3148 = 5U;
	static volatile int32_t t103 = -1068071;

    t103 = (((x3145!=x3146)!=x3147)>>x3148);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3185 = 0;
	volatile int8_t x3186 = -1;
	volatile uint16_t x3187 = UINT16_MAX;
	int8_t x3188 = 26;
	volatile int32_t t104 = -1;

    t104 = (((x3185!=x3186)!=x3187)>>x3188);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x3233 = INT32_MAX;
	int16_t x3234 = INT16_MAX;
	uint32_t x3235 = 439253974U;
	int8_t x3236 = 1;
	volatile int32_t t105 = -2455;

    t105 = (((x3233!=x3234)!=x3235)>>x3236);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x3245 = 636054LL;
	int64_t x3246 = INT64_MIN;
	uint8_t x3248 = 0U;

    t106 = (((x3245!=x3246)!=x3247)>>x3248);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x3273 = 25;
	volatile uint32_t x3274 = UINT32_MAX;
	uint8_t x3275 = 14U;
	uint8_t x3276 = 3U;
	volatile int32_t t107 = -3;

    t107 = (((x3273!=x3274)!=x3275)>>x3276);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x3289 = UINT32_MAX;
	volatile int32_t x3291 = INT32_MIN;
	static int8_t x3292 = 5;
	int32_t t108 = -931;

    t108 = (((x3289!=x3290)!=x3291)>>x3292);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x3293 = INT16_MIN;
	volatile int8_t x3295 = -44;
	static int16_t x3296 = 14;

    t109 = (((x3293!=x3294)!=x3295)>>x3296);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x3301 = 0U;
	int16_t x3302 = 356;
	int16_t x3303 = INT16_MAX;
	uint8_t x3304 = 1U;

    t110 = (((x3301!=x3302)!=x3303)>>x3304);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t t111 = 580;

    t111 = (((x3313!=x3314)!=x3315)>>x3316);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x3333 = INT32_MIN;
	int16_t x3334 = 3;
	int16_t x3335 = INT16_MIN;
	uint8_t x3336 = 2U;
	int32_t t112 = -5713348;

    t112 = (((x3333!=x3334)!=x3335)>>x3336);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x3365 = 0U;
	int8_t x3366 = -54;
	uint64_t x3367 = 2107045LLU;
	uint32_t x3368 = 5U;
	volatile int32_t t113 = 4;

    t113 = (((x3365!=x3366)!=x3367)>>x3368);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x3421 = UINT16_MAX;
	volatile int32_t x3422 = 965815;
	volatile int8_t x3423 = INT8_MIN;
	static int16_t x3424 = 3;
	volatile int32_t t114 = -1;

    t114 = (((x3421!=x3422)!=x3423)>>x3424);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x3485 = UINT8_MAX;
	int16_t x3486 = INT16_MAX;
	volatile int32_t x3487 = INT32_MAX;
	static uint8_t x3488 = 1U;
	volatile int32_t t115 = -565803377;

    t115 = (((x3485!=x3486)!=x3487)>>x3488);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x3513 = UINT8_MAX;
	uint8_t x3514 = 35U;
	int16_t x3515 = -1;
	int32_t t116 = 3969;

    t116 = (((x3513!=x3514)!=x3515)>>x3516);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x3533 = INT32_MAX;
	uint16_t x3534 = 1419U;
	volatile uint8_t x3535 = UINT8_MAX;
	uint8_t x3536 = 24U;
	int32_t t117 = 406;

    t117 = (((x3533!=x3534)!=x3535)>>x3536);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x3701 = INT8_MAX;
	int64_t x3702 = INT64_MIN;
	volatile int8_t x3703 = -27;
	static uint16_t x3704 = 2U;
	int32_t t118 = 591320;

    t118 = (((x3701!=x3702)!=x3703)>>x3704);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x3737 = UINT16_MAX;
	int8_t x3738 = -1;
	volatile uint16_t x3739 = 939U;
	int8_t x3740 = 1;
	int32_t t119 = -41857;

    t119 = (((x3737!=x3738)!=x3739)>>x3740);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x3750 = INT32_MIN;
	static volatile uint16_t x3751 = 3273U;
	volatile int32_t t120 = 16355123;

    t120 = (((x3749!=x3750)!=x3751)>>x3752);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x3809 = 1458012940894LL;
	int64_t x3810 = INT64_MAX;
	uint8_t x3811 = UINT8_MAX;
	static uint8_t x3812 = 2U;
	static int32_t t121 = 673438647;

    t121 = (((x3809!=x3810)!=x3811)>>x3812);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x3830 = UINT16_MAX;
	uint8_t x3831 = UINT8_MAX;
	int8_t x3832 = 1;
	static int32_t t122 = 112765012;

    t122 = (((x3829!=x3830)!=x3831)>>x3832);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x3846 = INT32_MIN;
	int64_t x3847 = INT64_MIN;
	uint64_t x3848 = 0LLU;
	int32_t t123 = 7463;

    t123 = (((x3845!=x3846)!=x3847)>>x3848);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x3926 = 334809246U;
	uint8_t x3928 = 9U;
	volatile int32_t t124 = 0;

    t124 = (((x3925!=x3926)!=x3927)>>x3928);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x4025 = INT64_MAX;
	uint8_t x4026 = 31U;
	uint16_t x4028 = 3U;
	volatile int32_t t125 = -219158688;

    t125 = (((x4025!=x4026)!=x4027)>>x4028);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x4033 = 146;
	int64_t x4034 = 33022192964LL;
	int64_t x4035 = INT64_MIN;
	uint8_t x4036 = 3U;
	int32_t t126 = 865144;

    t126 = (((x4033!=x4034)!=x4035)>>x4036);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x4073 = INT8_MAX;
	uint8_t x4074 = 97U;
	uint8_t x4075 = 28U;
	int8_t x4076 = 1;
	volatile int32_t t127 = 1690752;

    t127 = (((x4073!=x4074)!=x4075)>>x4076);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x4089 = -508714534;
	int32_t x4090 = -339475973;
	int32_t x4091 = -1;

    t128 = (((x4089!=x4090)!=x4091)>>x4092);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x4117 = 63U;
	uint32_t x4118 = UINT32_MAX;
	uint8_t x4120 = 1U;
	int32_t t129 = -720542559;

    t129 = (((x4117!=x4118)!=x4119)>>x4120);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x4157 = UINT16_MAX;
	int64_t x4158 = INT64_MIN;
	volatile uint8_t x4160 = 8U;
	volatile int32_t t130 = 496;

    t130 = (((x4157!=x4158)!=x4159)>>x4160);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x4182 = INT8_MIN;
	volatile uint32_t x4183 = UINT32_MAX;
	volatile int32_t t131 = -466659577;

    t131 = (((x4181!=x4182)!=x4183)>>x4184);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x4249 = 2U;
	volatile int8_t x4251 = 12;
	static int16_t x4252 = 20;
	int32_t t132 = 13;

    t132 = (((x4249!=x4250)!=x4251)>>x4252);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x4289 = 6938U;
	volatile uint8_t x4290 = 3U;
	int16_t x4291 = -1;
	int8_t x4292 = 21;
	static volatile int32_t t133 = 839938;

    t133 = (((x4289!=x4290)!=x4291)>>x4292);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x4293 = INT16_MIN;
	uint8_t x4294 = 46U;
	int32_t x4295 = -43;
	volatile uint16_t x4296 = 7U;
	int32_t t134 = -889;

    t134 = (((x4293!=x4294)!=x4295)>>x4296);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x4301 = UINT16_MAX;
	int32_t x4302 = 38;
	uint64_t x4303 = 8574935620LLU;
	volatile int8_t x4304 = 2;
	volatile int32_t t135 = -416126;

    t135 = (((x4301!=x4302)!=x4303)>>x4304);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x4311 = -1LL;
	uint32_t x4312 = 19U;

    t136 = (((x4309!=x4310)!=x4311)>>x4312);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x4321 = 220704065612LLU;
	int64_t x4322 = INT64_MIN;
	static uint16_t x4324 = 12U;
	volatile int32_t t137 = -129;

    t137 = (((x4321!=x4322)!=x4323)>>x4324);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x4383 = INT16_MAX;
	int8_t x4384 = 0;

    t138 = (((x4381!=x4382)!=x4383)>>x4384);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x4414 = INT32_MAX;
	static volatile int32_t t139 = -14056;

    t139 = (((x4413!=x4414)!=x4415)>>x4416);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x4473 = INT32_MIN;
	int16_t x4474 = INT16_MAX;
	int32_t x4475 = INT32_MIN;

    t140 = (((x4473!=x4474)!=x4475)>>x4476);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x4489 = 47U;
	static int8_t x4491 = -1;

    t141 = (((x4489!=x4490)!=x4491)>>x4492);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x4493 = 19U;
	static uint32_t x4495 = UINT32_MAX;
	int32_t x4496 = 31;
	int32_t t142 = -3442;

    t142 = (((x4493!=x4494)!=x4495)>>x4496);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x4513 = -1;
	int16_t x4514 = -30;
	volatile int8_t x4515 = -1;
	volatile uint8_t x4516 = 30U;
	int32_t t143 = -63310681;

    t143 = (((x4513!=x4514)!=x4515)>>x4516);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x4537 = 7U;
	uint64_t x4538 = 30769LLU;
	static uint8_t x4540 = 24U;
	int32_t t144 = 1;

    t144 = (((x4537!=x4538)!=x4539)>>x4540);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x4545 = 30U;
	int16_t x4546 = INT16_MIN;
	uint8_t x4547 = UINT8_MAX;
	static uint8_t x4548 = 3U;
	volatile int32_t t145 = 294;

    t145 = (((x4545!=x4546)!=x4547)>>x4548);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x4563 = INT8_MAX;
	uint16_t x4564 = 1U;
	static int32_t t146 = 24;

    t146 = (((x4561!=x4562)!=x4563)>>x4564);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x4625 = INT32_MIN;
	volatile int32_t x4626 = INT32_MAX;
	static volatile int32_t t147 = 43437062;

    t147 = (((x4625!=x4626)!=x4627)>>x4628);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x4649 = 405085U;
	static int8_t x4650 = -1;
	int64_t x4651 = INT64_MAX;
	volatile int32_t t148 = 9947;

    t148 = (((x4649!=x4650)!=x4651)>>x4652);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x4656 = 31U;
	int32_t t149 = -25;

    t149 = (((x4653!=x4654)!=x4655)>>x4656);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x4661 = UINT8_MAX;
	int8_t x4662 = -1;
	volatile int8_t x4663 = INT8_MIN;
	volatile int32_t t150 = -378;

    t150 = (((x4661!=x4662)!=x4663)>>x4664);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x4669 = UINT32_MAX;
	static uint8_t x4670 = UINT8_MAX;
	uint16_t x4671 = UINT16_MAX;
	static uint8_t x4672 = 0U;
	int32_t t151 = 835407792;

    t151 = (((x4669!=x4670)!=x4671)>>x4672);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x4673 = 5871896102032758LLU;
	int32_t x4674 = INT32_MIN;
	int8_t x4675 = INT8_MAX;
	volatile int32_t t152 = 0;

    t152 = (((x4673!=x4674)!=x4675)>>x4676);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x4709 = -1270LL;
	volatile int16_t x4710 = -1;
	int32_t x4711 = INT32_MAX;
	int16_t x4712 = 1;
	static volatile int32_t t153 = 27033;

    t153 = (((x4709!=x4710)!=x4711)>>x4712);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x4738 = 12U;
	int16_t x4739 = -2;
	volatile uint8_t x4740 = 1U;
	volatile int32_t t154 = -103747;

    t154 = (((x4737!=x4738)!=x4739)>>x4740);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x4809 = -1;
	uint32_t x4810 = UINT32_MAX;
	uint64_t x4812 = 8LLU;
	volatile int32_t t155 = -238614;

    t155 = (((x4809!=x4810)!=x4811)>>x4812);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x4857 = INT64_MIN;
	int8_t x4859 = 0;
	uint64_t x4860 = 7LLU;
	volatile int32_t t156 = -63402035;

    t156 = (((x4857!=x4858)!=x4859)>>x4860);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x4861 = INT8_MAX;
	int16_t x4862 = -701;
	int32_t x4863 = INT32_MIN;
	uint8_t x4864 = 3U;
	volatile int32_t t157 = 65;

    t157 = (((x4861!=x4862)!=x4863)>>x4864);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x4877 = INT8_MIN;
	int32_t x4878 = -3495012;
	uint32_t x4880 = 11U;
	int32_t t158 = 40;

    t158 = (((x4877!=x4878)!=x4879)>>x4880);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x4897 = 2U;
	int8_t x4898 = INT8_MIN;
	volatile int16_t x4899 = INT16_MIN;
	int32_t t159 = -3788;

    t159 = (((x4897!=x4898)!=x4899)>>x4900);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x4901 = INT16_MIN;
	int8_t x4902 = INT8_MAX;
	uint8_t x4903 = UINT8_MAX;
	int8_t x4904 = 1;

    t160 = (((x4901!=x4902)!=x4903)>>x4904);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x4921 = -1;
	volatile uint32_t x4923 = UINT32_MAX;
	uint16_t x4924 = 3U;

    t161 = (((x4921!=x4922)!=x4923)>>x4924);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x4927 = -2806;
	volatile int32_t t162 = 0;

    t162 = (((x4925!=x4926)!=x4927)>>x4928);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x5010 = 90372U;
	int8_t x5011 = INT8_MAX;
	uint8_t x5012 = 2U;

    t163 = (((x5009!=x5010)!=x5011)>>x5012);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x5013 = INT8_MAX;
	volatile int64_t x5014 = INT64_MIN;
	int16_t x5015 = INT16_MIN;

    t164 = (((x5013!=x5014)!=x5015)>>x5016);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x5017 = INT32_MAX;
	static volatile int8_t x5019 = INT8_MIN;

    t165 = (((x5017!=x5018)!=x5019)>>x5020);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x5030 = INT32_MAX;
	int8_t x5031 = -5;
	static int32_t t166 = -127645;

    t166 = (((x5029!=x5030)!=x5031)>>x5032);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x5037 = -1240615847LL;
	int8_t x5038 = -15;
	int8_t x5039 = 8;
	int16_t x5040 = 0;

    t167 = (((x5037!=x5038)!=x5039)>>x5040);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x5089 = INT16_MIN;
	static uint32_t x5091 = UINT32_MAX;
	int8_t x5092 = 1;
	volatile int32_t t168 = -1468950;

    t168 = (((x5089!=x5090)!=x5091)>>x5092);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x5093 = -1;
	volatile int64_t x5094 = -21856LL;
	volatile int8_t x5096 = 0;
	volatile int32_t t169 = -49724858;

    t169 = (((x5093!=x5094)!=x5095)>>x5096);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x5113 = INT32_MIN;
	static volatile int32_t x5114 = -983;
	int32_t t170 = -1069;

    t170 = (((x5113!=x5114)!=x5115)>>x5116);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x5125 = -1;
	int64_t x5126 = 14716161625140304LL;
	uint32_t x5127 = 9496485U;
	volatile uint8_t x5128 = 10U;

    t171 = (((x5125!=x5126)!=x5127)>>x5128);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x5173 = INT16_MAX;
	int16_t x5174 = -1;
	uint16_t x5175 = 1235U;
	static int8_t x5176 = 4;
	volatile int32_t t172 = -42;

    t172 = (((x5173!=x5174)!=x5175)>>x5176);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x5181 = INT64_MIN;
	int16_t x5182 = INT16_MIN;
	volatile uint16_t x5183 = 177U;
	volatile uint8_t x5184 = 1U;
	volatile int32_t t173 = -3169008;

    t173 = (((x5181!=x5182)!=x5183)>>x5184);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x5257 = INT32_MIN;
	static int16_t x5259 = INT16_MIN;
	volatile int32_t t174 = 6363572;

    t174 = (((x5257!=x5258)!=x5259)>>x5260);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x5281 = 6LLU;
	static volatile uint64_t x5282 = UINT64_MAX;
	volatile uint8_t x5283 = 9U;
	int8_t x5284 = 0;
	static volatile int32_t t175 = 30105;

    t175 = (((x5281!=x5282)!=x5283)>>x5284);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x5298 = -1;
	uint32_t x5299 = 3U;
	int16_t x5300 = 20;
	int32_t t176 = -78074;

    t176 = (((x5297!=x5298)!=x5299)>>x5300);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x5333 = 0;
	int32_t x5334 = -12726;
	uint16_t x5335 = 1U;
	uint8_t x5336 = 31U;
	int32_t t177 = 974534594;

    t177 = (((x5333!=x5334)!=x5335)>>x5336);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x5361 = 27;
	int16_t x5362 = INT16_MIN;
	int16_t x5363 = -1;
	static uint8_t x5364 = 2U;
	volatile int32_t t178 = -12;

    t178 = (((x5361!=x5362)!=x5363)>>x5364);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x5381 = INT32_MIN;
	int16_t x5382 = INT16_MIN;
	volatile int8_t x5383 = 35;
	int32_t x5384 = 4;

    t179 = (((x5381!=x5382)!=x5383)>>x5384);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x5389 = 55282LLU;
	uint32_t x5390 = 908432102U;
	int32_t x5392 = 2;

    t180 = (((x5389!=x5390)!=x5391)>>x5392);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x5526 = 1269U;
	int8_t x5527 = INT8_MAX;
	static int16_t x5528 = 3;
	static volatile int32_t t181 = -4480929;

    t181 = (((x5525!=x5526)!=x5527)>>x5528);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x5533 = 16U;
	int32_t x5534 = -1;
	static uint8_t x5535 = 2U;
	uint8_t x5536 = 0U;

    t182 = (((x5533!=x5534)!=x5535)>>x5536);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x5538 = 55LL;
	static volatile int32_t x5539 = INT32_MIN;
	volatile int32_t t183 = 460;

    t183 = (((x5537!=x5538)!=x5539)>>x5540);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x5585 = 651977616;
	int16_t x5587 = INT16_MIN;
	static int8_t x5588 = 1;
	int32_t t184 = -247370898;

    t184 = (((x5585!=x5586)!=x5587)>>x5588);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x5589 = INT32_MIN;
	int64_t x5590 = -1LL;
	uint32_t x5591 = UINT32_MAX;
	int8_t x5592 = 0;
	static volatile int32_t t185 = -9741094;

    t185 = (((x5589!=x5590)!=x5591)>>x5592);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x5601 = 361U;
	uint64_t x5602 = 971719LLU;
	int64_t x5603 = 857780476519LL;
	static int16_t x5604 = 3;
	int32_t t186 = -298595;

    t186 = (((x5601!=x5602)!=x5603)>>x5604);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x5629 = INT8_MIN;
	int16_t x5630 = INT16_MIN;
	int16_t x5632 = 1;

    t187 = (((x5629!=x5630)!=x5631)>>x5632);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x5633 = INT8_MIN;
	static volatile int64_t x5634 = INT64_MIN;
	static uint8_t x5635 = UINT8_MAX;
	static uint16_t x5636 = 9U;

    t188 = (((x5633!=x5634)!=x5635)>>x5636);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x5645 = -1;
	volatile int16_t x5647 = -1;
	uint16_t x5648 = 0U;
	int32_t t189 = 433;

    t189 = (((x5645!=x5646)!=x5647)>>x5648);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x5661 = 77;
	int64_t x5662 = INT64_MIN;
	uint32_t x5663 = 878700U;
	int16_t x5664 = 29;
	volatile int32_t t190 = -40899;

    t190 = (((x5661!=x5662)!=x5663)>>x5664);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x5745 = INT32_MIN;
	int64_t x5746 = INT64_MAX;
	int64_t x5747 = 1575585LL;
	uint16_t x5748 = 7U;
	volatile int32_t t191 = -17;

    t191 = (((x5745!=x5746)!=x5747)>>x5748);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x5778 = INT8_MAX;
	int8_t x5779 = INT8_MIN;

    t192 = (((x5777!=x5778)!=x5779)>>x5780);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x5823 = -19;
	uint8_t x5824 = 0U;

    t193 = (((x5821!=x5822)!=x5823)>>x5824);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x5837 = INT8_MIN;
	volatile int32_t x5838 = -1;
	static uint8_t x5839 = UINT8_MAX;
	uint8_t x5840 = 25U;
	int32_t t194 = 34651803;

    t194 = (((x5837!=x5838)!=x5839)>>x5840);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x5930 = 0U;
	volatile int32_t x5931 = INT32_MAX;
	uint32_t x5932 = 1U;
	int32_t t195 = 1;

    t195 = (((x5929!=x5930)!=x5931)>>x5932);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x5981 = INT16_MAX;
	static int64_t x5982 = 112630335LL;
	static int8_t x5983 = INT8_MAX;
	uint32_t x5984 = 1U;
	int32_t t196 = 6617623;

    t196 = (((x5981!=x5982)!=x5983)>>x5984);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x5997 = -1LL;
	static int8_t x5998 = 3;
	volatile int64_t x5999 = INT64_MAX;
	static int8_t x6000 = 15;

    t197 = (((x5997!=x5998)!=x5999)>>x6000);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x6097 = INT32_MIN;
	int16_t x6098 = INT16_MIN;
	volatile int16_t x6099 = -67;
	volatile uint8_t x6100 = 6U;
	int32_t t198 = 182013969;

    t198 = (((x6097!=x6098)!=x6099)>>x6100);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x6110 = INT16_MIN;
	int8_t x6111 = -5;

    t199 = (((x6109!=x6110)!=x6111)>>x6112);

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

