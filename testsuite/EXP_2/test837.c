
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

static int8_t x102 = INT8_MAX;
int8_t x104 = 3;
int16_t x107 = INT16_MAX;
int64_t t3 = 696452LL;
volatile int8_t x212 = 23;
int16_t x283 = 3;
volatile uint16_t x421 = 114U;
static uint32_t x424 = 1U;
static int64_t t8 = 23815307LL;
int16_t x742 = INT16_MAX;
int32_t x829 = INT32_MIN;
static volatile uint16_t x871 = UINT16_MAX;
static volatile int8_t x872 = 4;
int8_t x945 = INT8_MIN;
volatile int32_t x946 = INT32_MIN;
uint8_t x947 = 89U;
int8_t x1066 = INT8_MIN;
volatile int32_t t17 = 335204647;
int8_t x1165 = 1;
volatile uint64_t x1167 = 3019702LLU;
uint64_t t20 = 46322934644LLU;
static uint16_t x1268 = 3U;
static volatile uint64_t t21 = 3716221208572712LLU;
uint32_t x1333 = 11103393U;
volatile int16_t x1334 = 510;
volatile int32_t t23 = 23;
int8_t x1461 = INT8_MIN;
int64_t x1462 = INT64_MIN;
int8_t x1500 = 0;
uint32_t x1557 = 220173U;
volatile int16_t x1650 = -1;
volatile uint64_t x1651 = 64040444086LLU;
static volatile uint16_t x1652 = 2U;
uint32_t x1770 = 754U;
static int64_t x1771 = INT64_MIN;
uint32_t x1798 = UINT32_MAX;
uint32_t t32 = 74373997U;
volatile int64_t x2051 = INT64_MIN;
volatile int16_t x2154 = INT16_MIN;
uint16_t x2156 = 4U;
volatile uint64_t t37 = 505259356259572LLU;
uint16_t x2407 = UINT16_MAX;
uint64_t x2582 = 232669652383825LLU;
static int32_t x2592 = 7;
int16_t x2621 = -1;
int32_t x2635 = INT32_MIN;
static uint16_t x2640 = 7U;
static int32_t t46 = 122;
static volatile int32_t x2862 = -1;
int32_t x2909 = -250297;
uint64_t x2910 = 108LLU;
volatile uint64_t x2911 = 121122769173739LLU;
static uint8_t x2912 = 1U;
uint32_t x3009 = 6644U;
uint8_t x3045 = UINT8_MAX;
uint64_t x3047 = 2910LLU;
volatile int8_t x3048 = 0;
int64_t x3063 = 54LL;
static int64_t t53 = -50031992LL;
uint64_t x3087 = 262386882045755198LLU;
volatile uint64_t t54 = 237882797300503706LLU;
uint8_t x3131 = UINT8_MAX;
static uint32_t x3142 = UINT32_MAX;
int64_t x3143 = -407278817138795319LL;
uint16_t x3144 = 1U;
volatile uint16_t x3218 = UINT16_MAX;
uint32_t x3609 = 46U;
uint16_t x3612 = 0U;
static int64_t t63 = -122840580012052LL;
static volatile uint32_t t66 = 2056049962U;
volatile uint64_t x3718 = 269119084963815056LLU;
uint64_t t67 = 28925924936171LLU;
uint32_t x3785 = 2310U;
int16_t x3787 = INT16_MIN;
int16_t x3869 = INT16_MIN;
uint16_t x3871 = 38U;
int8_t x3872 = 0;
static uint16_t x3902 = 88U;
uint16_t x3973 = 424U;
uint16_t x3974 = 2U;
int8_t x3986 = -30;
static volatile int64_t x3987 = INT64_MIN;
int32_t x3990 = INT32_MIN;
uint16_t x3992 = 7U;
static uint64_t t76 = 404340LLU;
int32_t x4129 = -1;
static uint32_t x4132 = 22U;
volatile int32_t x4177 = -1;
int16_t x4179 = INT16_MIN;
static volatile uint32_t x4228 = 1U;
int32_t x4246 = INT32_MIN;
int32_t x4253 = -2508;
uint64_t t84 = 28535244836065LLU;
volatile uint64_t t86 = 26LLU;
uint32_t x4411 = UINT32_MAX;
int8_t x4427 = INT8_MAX;
static int8_t x4438 = -51;
uint8_t x4440 = 5U;
uint8_t x4500 = 24U;
int32_t x4513 = INT32_MIN;
volatile int64_t x4525 = -1LL;
uint16_t x4528 = 2U;
volatile uint16_t x4569 = 1117U;
int64_t x4571 = -8475739LL;
static uint16_t x4629 = 6936U;
static int8_t x4632 = 0;
volatile int32_t t95 = 680;
int16_t x4651 = INT16_MIN;
volatile int64_t x4678 = -8LL;
int64_t t97 = -109302574583139603LL;
uint8_t x4729 = UINT8_MAX;
int32_t x4730 = 441;
int16_t x4789 = -2987;
uint16_t x4790 = 2024U;
uint32_t x4791 = UINT32_MAX;
uint32_t t100 = 389U;
static volatile int64_t x4907 = INT64_MIN;
uint16_t x4933 = UINT16_MAX;
volatile uint64_t x4993 = UINT64_MAX;
volatile int16_t x4994 = 74;
uint32_t x5176 = 7U;
uint64_t x5287 = 3833090LLU;
int64_t x5320 = 4LL;
volatile int32_t t109 = 1195;
static uint32_t x5434 = 6226414U;
static volatile uint64_t x5435 = UINT64_MAX;
static uint16_t x5450 = 5483U;
volatile int64_t x5514 = -1LL;
volatile int64_t x5586 = -2200703030595716LL;
uint64_t x5613 = 1272453492200LLU;
static int32_t x5615 = -31;
volatile int32_t t118 = -786060891;
volatile int64_t x5874 = 5LL;
uint16_t x5875 = UINT16_MAX;
volatile uint32_t x5883 = UINT32_MAX;
static int8_t x5884 = 1;
volatile int64_t t122 = 31LL;
int8_t x5981 = INT8_MAX;
static volatile int64_t x6166 = 17714089337LL;
static volatile int64_t x6307 = INT64_MAX;
uint64_t x6308 = 2LLU;
static int16_t x6317 = INT16_MAX;
uint8_t x6318 = 6U;
static volatile int64_t x6322 = INT64_MIN;
static int8_t x6329 = -1;
static volatile int32_t t131 = -43881978;
int8_t x6521 = -1;
volatile int32_t x6701 = INT32_MAX;
int32_t x6702 = 789139;
volatile uint8_t x6998 = UINT8_MAX;
volatile int8_t x7000 = 40;
uint8_t x7045 = UINT8_MAX;
static volatile int8_t x7078 = -15;
uint16_t x7079 = 4327U;
int8_t x7147 = INT8_MIN;
int16_t x7148 = 0;
volatile uint64_t t144 = 271650172072152619LLU;
int8_t x7191 = INT8_MAX;
volatile int32_t t146 = -2;
uint8_t x7257 = 14U;
int64_t x7259 = 33310LL;
uint64_t t149 = 490LLU;
volatile int16_t x7269 = INT16_MIN;
volatile int8_t x7270 = INT8_MIN;
uint16_t x7272 = 1U;
static volatile int32_t x7313 = -1;
int8_t x7315 = 4;
volatile uint32_t x7316 = 29U;
static volatile uint16_t x7468 = 24U;
uint32_t t156 = 3U;
volatile uint16_t x7586 = 3U;
static uint32_t x7649 = 25538U;
int8_t x7650 = -1;
int8_t x7651 = INT8_MIN;
int8_t x7710 = -1;
static int64_t x7715 = 130455264752395LL;
int32_t x7716 = 0;
static uint16_t x7785 = UINT16_MAX;
static int32_t x7787 = -96351598;
volatile int16_t x7801 = -1;
volatile uint8_t x7804 = 10U;
int32_t x7898 = 690106;
volatile int64_t t166 = -410640061LL;
int32_t x7984 = 26;
volatile uint32_t t167 = 15788U;
int8_t x8005 = -1;
static volatile int64_t t168 = 445348936436920520LL;


void f0(void) {
    	static int64_t x13 = -232LL;
	static uint64_t x14 = 11104268044018175LLU;
	int32_t x15 = 949762898;
	uint8_t x16 = 13U;
	uint64_t t0 = 5359495939256125LLU;

    t0 = ((x13/(x14%x15))>>x16);

    if (t0 != 11217465LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x77 = UINT32_MAX;
	static int16_t x78 = INT16_MIN;
	uint32_t x79 = UINT32_MAX;
	static volatile int64_t x80 = 0LL;
	volatile uint32_t t1 = 2400U;

    t1 = ((x77/(x78%x79))>>x80);

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x101 = 43669220LL;
	uint8_t x103 = 43U;
	int64_t t2 = 89790LL;

    t2 = ((x101/(x102%x103))>>x104);

    if (t2 != 133137LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x105 = -1;
	int64_t x106 = -3050864970433572529LL;
	uint8_t x108 = 17U;

    t3 = ((x105/(x106%x107))>>x108);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x209 = INT32_MAX;
	static uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MIN;
	volatile int64_t t4 = 494439LL;

    t4 = ((x209/(x210%x211))>>x212);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x265 = 0U;
	static int8_t x266 = 7;
	int64_t x267 = INT64_MAX;
	uint8_t x268 = 9U;
	int64_t t5 = 506403601629065LL;

    t5 = ((x265/(x266%x267))>>x268);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint64_t x281 = 9403276LLU;
	int64_t x282 = INT64_MIN;
	uint8_t x284 = 9U;
	volatile uint64_t t6 = 234329030866LLU;

    t6 = ((x281/(x282%x283))>>x284);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x422 = INT16_MIN;
	static uint16_t x423 = 490U;
	static volatile int32_t t7 = 1;

    t7 = ((x421/(x422%x423))>>x424);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x517 = 19863U;
	static volatile uint8_t x518 = UINT8_MAX;
	int64_t x519 = 4956393021252941LL;
	uint16_t x520 = 52U;

    t8 = ((x517/(x518%x519))>>x520);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x573 = INT64_MIN;
	int64_t x574 = INT64_MIN;
	static uint64_t x575 = 39761539186367LLU;
	uint32_t x576 = 0U;
	volatile uint64_t t9 = 39296858332512633LLU;

    t9 = ((x573/(x574%x575))>>x576);

    if (t9 != 1303396LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x741 = 261248372145LLU;
	uint32_t x743 = UINT32_MAX;
	static uint16_t x744 = 3U;
	volatile uint64_t t10 = 784096LLU;

    t10 = ((x741/(x742%x743))>>x744);

    if (t10 != 996613LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x809 = UINT64_MAX;
	int32_t x810 = -772;
	uint32_t x811 = UINT32_MAX;
	volatile int32_t x812 = 43;
	volatile uint64_t t11 = 45LLU;

    t11 = ((x809/(x810%x811))>>x812);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x830 = 2928984089LLU;
	int16_t x831 = INT16_MAX;
	volatile uint8_t x832 = 10U;
	static volatile uint64_t t12 = 6915274504929LLU;

    t12 = ((x829/(x830%x831))>>x832);

    if (t12 != 2404163687092LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x869 = INT8_MIN;
	int16_t x870 = -13053;
	volatile int32_t t13 = 233;

    t13 = ((x869/(x870%x871))>>x872);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x873 = UINT8_MAX;
	uint32_t x874 = 300959989U;
	int64_t x875 = -26250670017751LL;
	volatile int8_t x876 = 50;
	volatile int64_t t14 = 48248159223809457LL;

    t14 = ((x873/(x874%x875))>>x876);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x913 = 1012U;
	static int8_t x914 = 1;
	static int32_t x915 = INT32_MIN;
	uint8_t x916 = 3U;
	static int32_t t15 = 28555895;

    t15 = ((x913/(x914%x915))>>x916);

    if (t15 != 126) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x948 = 2U;
	volatile int32_t t16 = 64343780;

    t16 = ((x945/(x946%x947))>>x948);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x1065 = 83U;
	int16_t x1067 = INT16_MAX;
	uint8_t x1068 = 7U;

    t17 = ((x1065/(x1066%x1067))>>x1068);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1073 = INT8_MIN;
	static int8_t x1074 = INT8_MIN;
	uint16_t x1075 = 144U;
	uint8_t x1076 = 17U;
	int32_t t18 = 482578;

    t18 = ((x1073/(x1074%x1075))>>x1076);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x1109 = -1LL;
	static int32_t x1110 = INT32_MAX;
	int64_t x1111 = 680463807LL;
	uint32_t x1112 = 35U;
	static int64_t t19 = -25127174LL;

    t19 = ((x1109/(x1110%x1111))>>x1112);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1166 = INT16_MAX;
	int16_t x1168 = 3;

    t20 = ((x1165/(x1166%x1167))>>x1168);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x1265 = -1LL;
	int64_t x1266 = INT64_MAX;
	uint64_t x1267 = 7955015231234LLU;

    t21 = ((x1265/(x1266%x1267))>>x1268);

    if (t21 != 1886729LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1335 = INT16_MIN;
	uint8_t x1336 = 0U;
	volatile uint32_t t22 = 457U;

    t22 = ((x1333/(x1334%x1335))>>x1336);

    if (t22 != 21771U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x1361 = INT8_MAX;
	uint16_t x1362 = 7368U;
	uint8_t x1363 = UINT8_MAX;
	uint8_t x1364 = 0U;

    t23 = ((x1361/(x1362%x1363))>>x1364);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x1449 = UINT32_MAX;
	static volatile uint32_t x1450 = 10058U;
	uint64_t x1451 = 1219LLU;
	volatile int16_t x1452 = 46;
	static uint64_t t24 = 106402844404670925LLU;

    t24 = ((x1449/(x1450%x1451))>>x1452);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x1463 = INT16_MAX;
	uint32_t x1464 = 22U;
	volatile int64_t t25 = 5594LL;

    t25 = ((x1461/(x1462%x1463))>>x1464);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x1493 = 5160804U;
	uint16_t x1494 = 11U;
	int32_t x1495 = INT32_MIN;
	uint16_t x1496 = 0U;
	volatile uint32_t t26 = 2U;

    t26 = ((x1493/(x1494%x1495))>>x1496);

    if (t26 != 469164U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x1497 = UINT32_MAX;
	static int16_t x1498 = -1328;
	int16_t x1499 = INT16_MIN;
	static volatile uint32_t t27 = 486U;

    t27 = ((x1497/(x1498%x1499))>>x1500);

    if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1558 = UINT64_MAX;
	int32_t x1559 = INT32_MIN;
	int16_t x1560 = 0;
	volatile uint64_t t28 = 6539808557012572512LLU;

    t28 = ((x1557/(x1558%x1559))>>x1560);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1593 = 0U;
	uint64_t x1594 = 20671728554984LLU;
	uint32_t x1595 = UINT32_MAX;
	static int8_t x1596 = 5;
	static uint64_t t29 = 3672595298611354880LLU;

    t29 = ((x1593/(x1594%x1595))>>x1596);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1649 = UINT8_MAX;
	uint64_t t30 = 556737LLU;

    t30 = ((x1649/(x1650%x1651))>>x1652);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x1769 = INT64_MAX;
	uint8_t x1772 = 3U;
	int64_t t31 = 1LL;

    t31 = ((x1769/(x1770%x1771))>>x1772);

    if (t31 != 1529073613536932LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1797 = UINT16_MAX;
	int8_t x1799 = INT8_MIN;
	int16_t x1800 = 1;

    t32 = ((x1797/(x1798%x1799))>>x1800);

    if (t32 != 258U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x1841 = INT32_MIN;
	static int16_t x1842 = INT16_MIN;
	static int8_t x1843 = INT8_MAX;
	uint8_t x1844 = 3U;
	volatile int32_t t33 = -33587;

    t33 = ((x1841/(x1842%x1843))>>x1844);

    if (t33 != 134217728) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1981 = 1LL;
	static uint32_t x1982 = 324251502U;
	static uint16_t x1983 = 19210U;
	uint8_t x1984 = 8U;
	volatile int64_t t34 = -1516488LL;

    t34 = ((x1981/(x1982%x1983))>>x1984);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2049 = -7;
	static uint32_t x2050 = 996U;
	volatile uint16_t x2052 = 1U;
	volatile int64_t t35 = 1574318411098789LL;

    t35 = ((x2049/(x2050%x2051))>>x2052);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2153 = 142110596LL;
	uint64_t x2155 = UINT64_MAX;
	uint64_t t36 = 8513204368448497835LLU;

    t36 = ((x2153/(x2154%x2155))>>x2156);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x2225 = -1;
	int32_t x2226 = INT32_MIN;
	uint64_t x2227 = UINT64_MAX;
	volatile int16_t x2228 = 0;

    t37 = ((x2225/(x2226%x2227))>>x2228);

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x2229 = 48U;
	uint64_t x2230 = UINT64_MAX;
	volatile uint16_t x2231 = 11579U;
	uint8_t x2232 = 6U;
	volatile uint64_t t38 = 1929925859722LLU;

    t38 = ((x2229/(x2230%x2231))>>x2232);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2245 = -94;
	volatile int64_t x2246 = INT64_MIN;
	int16_t x2247 = INT16_MAX;
	uint8_t x2248 = 8U;
	static volatile int64_t t39 = 1LL;

    t39 = ((x2245/(x2246%x2247))>>x2248);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2405 = 4U;
	int32_t x2406 = -3635749;
	uint8_t x2408 = 22U;
	static int32_t t40 = 110406;

    t40 = ((x2405/(x2406%x2407))>>x2408);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2545 = INT16_MAX;
	uint64_t x2546 = UINT64_MAX;
	uint64_t x2547 = 6531107196331LLU;
	volatile uint32_t x2548 = 3U;
	volatile uint64_t t41 = 8LLU;

    t41 = ((x2545/(x2546%x2547))>>x2548);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x2581 = -1;
	int8_t x2583 = -7;
	uint8_t x2584 = 1U;
	volatile uint64_t t42 = 3093675808965LLU;

    t42 = ((x2581/(x2582%x2583))>>x2584);

    if (t42 != 39641LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x2589 = -2695768350050347083LL;
	int32_t x2590 = INT32_MIN;
	int8_t x2591 = INT8_MAX;
	volatile int64_t t43 = -108LL;

    t43 = ((x2589/(x2590%x2591))>>x2592);

    if (t43 != 2632586279346042LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2622 = INT8_MIN;
	int64_t x2623 = INT64_MIN;
	static int16_t x2624 = 3;
	volatile int64_t t44 = 5LL;

    t44 = ((x2621/(x2622%x2623))>>x2624);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2633 = -1;
	uint64_t x2634 = 16861353017LLU;
	volatile uint8_t x2636 = 48U;
	volatile uint64_t t45 = 49256447615611LLU;

    t45 = ((x2633/(x2634%x2635))>>x2636);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x2637 = INT32_MIN;
	static int8_t x2638 = -5;
	volatile uint16_t x2639 = 1486U;

    t46 = ((x2637/(x2638%x2639))>>x2640);

    if (t46 != 3355443) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x2669 = 209911385826LLU;
	int16_t x2670 = 12;
	int32_t x2671 = -325299;
	uint8_t x2672 = 0U;
	uint64_t t47 = 8LLU;

    t47 = ((x2669/(x2670%x2671))>>x2672);

    if (t47 != 17492615485LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x2861 = INT16_MIN;
	static int64_t x2863 = 2872004748151LL;
	uint16_t x2864 = 33U;
	int64_t t48 = 64240943864LL;

    t48 = ((x2861/(x2862%x2863))>>x2864);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t t49 = 44919110829621539LLU;

    t49 = ((x2909/(x2910%x2911))>>x2912);

    if (t49 != 85401592933839357LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x3010 = -9;
	int32_t x3011 = INT32_MAX;
	int8_t x3012 = 3;
	volatile uint32_t t50 = 441958U;

    t50 = ((x3009/(x3010%x3011))>>x3012);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x3033 = -1;
	static int64_t x3034 = INT64_MIN;
	static int32_t x3035 = INT32_MAX;
	volatile uint8_t x3036 = 29U;
	volatile int64_t t51 = 362246159LL;

    t51 = ((x3033/(x3034%x3035))>>x3036);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x3046 = INT16_MIN;
	uint64_t t52 = 6856LLU;

    t52 = ((x3045/(x3046%x3047))>>x3048);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x3061 = -1;
	uint16_t x3062 = 2U;
	uint16_t x3064 = 1U;

    t53 = ((x3061/(x3062%x3063))>>x3064);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x3085 = 187638;
	int32_t x3086 = INT32_MIN;
	uint16_t x3088 = 2U;

    t54 = ((x3085/(x3086%x3087))>>x3088);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x3129 = -1;
	int64_t x3130 = INT64_MIN;
	static volatile uint8_t x3132 = 50U;
	volatile int64_t t55 = 243656505629677709LL;

    t55 = ((x3129/(x3130%x3131))>>x3132);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x3141 = 7720946U;
	int64_t t56 = 42864791672LL;

    t56 = ((x3141/(x3142%x3143))>>x3144);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x3149 = 1233551LLU;
	volatile int16_t x3150 = 494;
	volatile int8_t x3151 = INT8_MAX;
	static uint16_t x3152 = 1U;
	volatile uint64_t t57 = 34LLU;

    t57 = ((x3149/(x3150%x3151))>>x3152);

    if (t57 != 5458LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x3173 = -1LL;
	int16_t x3174 = INT16_MIN;
	int64_t x3175 = INT64_MAX;
	int8_t x3176 = 1;
	int64_t t58 = 23235LL;

    t58 = ((x3173/(x3174%x3175))>>x3176);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x3217 = 1123;
	int32_t x3219 = INT32_MAX;
	volatile uint8_t x3220 = 1U;
	volatile int32_t t59 = 817;

    t59 = ((x3217/(x3218%x3219))>>x3220);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x3245 = -1;
	int64_t x3246 = -2279813972836840546LL;
	uint8_t x3247 = 55U;
	uint8_t x3248 = 0U;
	int64_t t60 = -1855868950LL;

    t60 = ((x3245/(x3246%x3247))>>x3248);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x3313 = -1;
	volatile uint8_t x3314 = UINT8_MAX;
	volatile int8_t x3315 = INT8_MIN;
	volatile int16_t x3316 = 3;
	int32_t t61 = -96722661;

    t61 = ((x3313/(x3314%x3315))>>x3316);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x3377 = INT8_MAX;
	static volatile int16_t x3378 = -472;
	int32_t x3379 = INT32_MIN;
	uint64_t x3380 = 3LLU;
	volatile int32_t t62 = -495710438;

    t62 = ((x3377/(x3378%x3379))>>x3380);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x3610 = INT8_MIN;
	volatile int64_t x3611 = INT64_MIN;

    t63 = ((x3609/(x3610%x3611))>>x3612);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x3685 = UINT16_MAX;
	volatile int32_t x3686 = INT32_MIN;
	int64_t x3687 = -30206462LL;
	int8_t x3688 = 0;
	int64_t t64 = -114488151371LL;

    t64 = ((x3685/(x3686%x3687))>>x3688);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x3689 = 70U;
	int32_t x3690 = INT32_MAX;
	volatile int16_t x3691 = -203;
	static uint16_t x3692 = 0U;
	int32_t t65 = -806909825;

    t65 = ((x3689/(x3690%x3691))>>x3692);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x3705 = 92855U;
	uint32_t x3706 = 1042U;
	int32_t x3707 = INT32_MIN;
	int32_t x3708 = 6;

    t66 = ((x3705/(x3706%x3707))>>x3708);

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x3717 = UINT8_MAX;
	volatile uint64_t x3719 = 282363129LLU;
	int16_t x3720 = 3;

    t67 = ((x3717/(x3718%x3719))>>x3720);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x3786 = -1;
	int8_t x3788 = 26;
	volatile uint32_t t68 = 2U;

    t68 = ((x3785/(x3786%x3787))>>x3788);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x3801 = UINT64_MAX;
	volatile int64_t x3802 = INT64_MIN;
	uint32_t x3803 = UINT32_MAX;
	int16_t x3804 = 1;
	static volatile uint64_t t69 = 70589860629922LLU;

    t69 = ((x3801/(x3802%x3803))>>x3804);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x3809 = INT8_MIN;
	static volatile int32_t x3810 = INT32_MIN;
	int8_t x3811 = INT8_MAX;
	static int32_t x3812 = 2;
	static volatile int32_t t70 = -1;

    t70 = ((x3809/(x3810%x3811))>>x3812);

    if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x3833 = UINT32_MAX;
	static int16_t x3834 = -1;
	uint16_t x3835 = 899U;
	uint16_t x3836 = 0U;
	uint32_t t71 = 45138132U;

    t71 = ((x3833/(x3834%x3835))>>x3836);

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x3870 = INT16_MIN;
	volatile int32_t t72 = 20251;

    t72 = ((x3869/(x3870%x3871))>>x3872);

    if (t72 != 2730) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x3901 = 3;
	int64_t x3903 = 2132375442116203330LL;
	volatile int16_t x3904 = 1;
	static volatile int64_t t73 = -151169LL;

    t73 = ((x3901/(x3902%x3903))>>x3904);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x3975 = 1612179988U;
	volatile int16_t x3976 = 29;
	uint32_t t74 = 182736923U;

    t74 = ((x3973/(x3974%x3975))>>x3976);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x3985 = 1;
	static uint8_t x3988 = 15U;
	volatile int64_t t75 = 186961698662LL;

    t75 = ((x3985/(x3986%x3987))>>x3988);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x3989 = INT16_MIN;
	static uint64_t x3991 = 2464680525LLU;

    t76 = ((x3989/(x3990%x3991))>>x3992);

    if (t76 != 492199718LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x4130 = 24U;
	static int64_t x4131 = INT64_MIN;
	static volatile int64_t t77 = 693979790LL;

    t77 = ((x4129/(x4130%x4131))>>x4132);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x4178 = UINT64_MAX;
	static volatile int8_t x4180 = 1;
	uint64_t t78 = 34638581729599LLU;

    t78 = ((x4177/(x4178%x4179))>>x4180);

    if (t78 != 281483566907400LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x4225 = 0U;
	int8_t x4226 = INT8_MIN;
	static uint64_t x4227 = UINT64_MAX;
	uint64_t t79 = 1836119861432LLU;

    t79 = ((x4225/(x4226%x4227))>>x4228);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x4229 = INT8_MAX;
	uint32_t x4230 = 15567632U;
	uint32_t x4231 = UINT32_MAX;
	uint32_t x4232 = 5U;
	volatile uint32_t t80 = 3039U;

    t80 = ((x4229/(x4230%x4231))>>x4232);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x4233 = UINT32_MAX;
	volatile int32_t x4234 = -6678617;
	uint64_t x4235 = 27672LLU;
	int8_t x4236 = 13;
	uint64_t t81 = 70LLU;

    t81 = ((x4233/(x4234%x4235))>>x4236);

    if (t81 != 210LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x4237 = INT16_MIN;
	uint64_t x4238 = 2076792792814377LLU;
	int16_t x4239 = INT16_MAX;
	uint16_t x4240 = 13U;
	volatile uint64_t t82 = 0LLU;

    t82 = ((x4237/(x4238%x4239))>>x4240);

    if (t82 != 365077790805LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x4245 = -22;
	static volatile int16_t x4247 = -201;
	uint16_t x4248 = 5U;
	volatile int32_t t83 = -599169245;

    t83 = ((x4245/(x4246%x4247))>>x4248);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x4254 = UINT64_MAX;
	uint32_t x4255 = 501497U;
	static uint8_t x4256 = 14U;

    t84 = ((x4253/(x4254%x4255))>>x4256);

    if (t84 != 2346182024LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x4257 = -26;
	int16_t x4258 = INT16_MAX;
	uint32_t x4259 = 94U;
	volatile int32_t x4260 = 3;
	uint32_t t85 = 99040U;

    t85 = ((x4257/(x4258%x4259))>>x4260);

    if (t85 != 9761289U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x4297 = INT64_MIN;
	uint16_t x4298 = 3938U;
	volatile uint64_t x4299 = UINT64_MAX;
	int8_t x4300 = 6;

    t86 = ((x4297/(x4298%x4299))>>x4300);

    if (t86 != 36596035570303LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x4305 = 117011U;
	uint16_t x4306 = 1U;
	uint32_t x4307 = 25093040U;
	int8_t x4308 = 3;
	uint32_t t87 = 60U;

    t87 = ((x4305/(x4306%x4307))>>x4308);

    if (t87 != 14626U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x4409 = 17488U;
	volatile uint16_t x4410 = 14491U;
	int16_t x4412 = 14;
	volatile uint32_t t88 = 1224178U;

    t88 = ((x4409/(x4410%x4411))>>x4412);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x4425 = UINT64_MAX;
	uint16_t x4426 = UINT16_MAX;
	static uint32_t x4428 = 3U;
	uint64_t t89 = 2739134671886LLU;

    t89 = ((x4425/(x4426%x4427))>>x4428);

    if (t89 != 768614336404564650LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x4437 = UINT64_MAX;
	volatile uint16_t x4439 = 29U;
	uint64_t t90 = 942883750336LLU;

    t90 = ((x4437/(x4438%x4439))>>x4440);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x4497 = INT16_MIN;
	int8_t x4498 = -49;
	volatile int16_t x4499 = -8;
	volatile int32_t t91 = -59;

    t91 = ((x4497/(x4498%x4499))>>x4500);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x4514 = 500651951374LL;
	uint64_t x4515 = UINT64_MAX;
	uint32_t x4516 = 49U;
	volatile uint64_t t92 = 582LLU;

    t92 = ((x4513/(x4514%x4515))>>x4516);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x4526 = 5;
	uint8_t x4527 = 10U;
	volatile int64_t t93 = 704612LL;

    t93 = ((x4525/(x4526%x4527))>>x4528);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x4570 = 6U;
	int8_t x4572 = 62;
	int64_t t94 = -364299992LL;

    t94 = ((x4569/(x4570%x4571))>>x4572);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x4630 = 49U;
	volatile uint8_t x4631 = 55U;

    t95 = ((x4629/(x4630%x4631))>>x4632);

    if (t95 != 141) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x4649 = 4U;
	static int32_t x4650 = 1;
	int8_t x4652 = 2;
	int32_t t96 = -111728184;

    t96 = ((x4649/(x4650%x4651))>>x4652);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x4677 = INT32_MIN;
	volatile int64_t x4679 = INT64_MIN;
	uint64_t x4680 = 1LLU;

    t97 = ((x4677/(x4678%x4679))>>x4680);

    if (t97 != 134217728LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x4731 = INT32_MIN;
	uint8_t x4732 = 0U;
	int32_t t98 = 0;

    t98 = ((x4729/(x4730%x4731))>>x4732);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x4741 = 5U;
	uint64_t x4742 = 3624075959129199488LLU;
	static uint16_t x4743 = 21U;
	uint16_t x4744 = 6U;
	static volatile uint64_t t99 = 93689508LLU;

    t99 = ((x4741/(x4742%x4743))>>x4744);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x4792 = 0;

    t100 = ((x4789/(x4790%x4791))>>x4792);

    if (t100 != 2122017U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x4877 = INT16_MAX;
	uint64_t x4878 = 1060012914LLU;
	static uint32_t x4879 = 279190458U;
	volatile uint16_t x4880 = 6U;
	volatile uint64_t t101 = 207194397120786284LLU;

    t101 = ((x4877/(x4878%x4879))>>x4880);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x4905 = UINT16_MAX;
	static volatile uint16_t x4906 = UINT16_MAX;
	int16_t x4908 = 1;
	int64_t t102 = 3403190810773LL;

    t102 = ((x4905/(x4906%x4907))>>x4908);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x4934 = 101821U;
	static uint32_t x4935 = UINT32_MAX;
	uint8_t x4936 = 1U;
	volatile uint32_t t103 = 18119U;

    t103 = ((x4933/(x4934%x4935))>>x4936);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x4995 = UINT8_MAX;
	int16_t x4996 = 6;
	uint64_t t104 = 3272609411443595LLU;

    t104 = ((x4993/(x4994%x4995))>>x4996);

    if (t104 != 3895005083131239LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x5173 = INT64_MIN;
	volatile uint32_t x5174 = 7U;
	uint64_t x5175 = 149786650335LLU;
	uint64_t t105 = 49710345547298LLU;

    t105 = ((x5173/(x5174%x5175))>>x5176);

    if (t105 != 10293942005418276LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x5181 = -1;
	uint64_t x5182 = 3945897858599680LLU;
	uint16_t x5183 = UINT16_MAX;
	uint16_t x5184 = 3U;
	static volatile uint64_t t106 = 13133501177819249LLU;

    t106 = ((x5181/(x5182%x5183))>>x5184);

    if (t106 != 70364449472496LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x5197 = -47;
	int16_t x5198 = INT16_MIN;
	int64_t x5199 = INT64_MAX;
	uint16_t x5200 = 7U;
	volatile int64_t t107 = -966037LL;

    t107 = ((x5197/(x5198%x5199))>>x5200);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x5285 = 14U;
	static int32_t x5286 = INT32_MIN;
	static int16_t x5288 = 54;
	volatile uint64_t t108 = 55LLU;

    t108 = ((x5285/(x5286%x5287))>>x5288);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x5317 = INT8_MIN;
	int16_t x5318 = -1;
	int8_t x5319 = 10;

    t109 = ((x5317/(x5318%x5319))>>x5320);

    if (t109 != 8) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x5393 = 626203U;
	uint8_t x5394 = 10U;
	static uint16_t x5395 = UINT16_MAX;
	uint64_t x5396 = 12LLU;
	volatile uint32_t t110 = 302015U;

    t110 = ((x5393/(x5394%x5395))>>x5396);

    if (t110 != 15U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x5433 = 12867;
	uint8_t x5436 = 13U;
	volatile uint64_t t111 = 13579998456833417LLU;

    t111 = ((x5433/(x5434%x5435))>>x5436);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x5449 = 11053U;
	static uint16_t x5451 = UINT16_MAX;
	static uint16_t x5452 = 6U;
	uint32_t t112 = 1583603904U;

    t112 = ((x5449/(x5450%x5451))>>x5452);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x5461 = -1;
	static int16_t x5462 = -1;
	int32_t x5463 = INT32_MIN;
	uint8_t x5464 = 3U;
	int32_t t113 = -1;

    t113 = ((x5461/(x5462%x5463))>>x5464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x5513 = 892610973053713946LLU;
	int32_t x5515 = INT32_MIN;
	uint16_t x5516 = 35U;
	uint64_t t114 = 15645LLU;

    t114 = ((x5513/(x5514%x5515))>>x5516);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x5585 = 62LLU;
	uint32_t x5587 = UINT32_MAX;
	int32_t x5588 = 50;
	static volatile uint64_t t115 = 3856951LLU;

    t115 = ((x5585/(x5586%x5587))>>x5588);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x5614 = INT16_MIN;
	volatile int16_t x5616 = 5;
	uint64_t t116 = 471711981806LLU;

    t116 = ((x5613/(x5614%x5615))>>x5616);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x5705 = UINT16_MAX;
	int8_t x5706 = INT8_MAX;
	int32_t x5707 = -45;
	int8_t x5708 = 8;
	static int32_t t117 = 23;

    t117 = ((x5705/(x5706%x5707))>>x5708);

    if (t117 != 6) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x5733 = 24;
	int16_t x5734 = -37;
	static volatile uint16_t x5735 = 182U;
	uint8_t x5736 = 2U;

    t118 = ((x5733/(x5734%x5735))>>x5736);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x5861 = -2LL;
	int64_t x5862 = -389743702LL;
	int8_t x5863 = -32;
	volatile int8_t x5864 = 0;
	volatile int64_t t119 = 506433566155LL;

    t119 = ((x5861/(x5862%x5863))>>x5864);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x5873 = -1;
	static uint8_t x5876 = 27U;
	int64_t t120 = 3317988326515713LL;

    t120 = ((x5873/(x5874%x5875))>>x5876);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x5881 = INT32_MIN;
	int32_t x5882 = INT32_MIN;
	volatile uint32_t t121 = 49462U;

    t121 = ((x5881/(x5882%x5883))>>x5884);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x5977 = 1077LL;
	volatile int32_t x5978 = INT32_MIN;
	volatile uint32_t x5979 = UINT32_MAX;
	int8_t x5980 = 0;

    t122 = ((x5977/(x5978%x5979))>>x5980);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x5982 = 245017072U;
	volatile int8_t x5983 = -50;
	int16_t x5984 = 18;
	uint32_t t123 = 2149757U;

    t123 = ((x5981/(x5982%x5983))>>x5984);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x6045 = 1;
	static volatile uint8_t x6046 = 11U;
	int32_t x6047 = -281321072;
	uint8_t x6048 = 0U;
	int32_t t124 = 4;

    t124 = ((x6045/(x6046%x6047))>>x6048);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x6165 = INT64_MIN;
	volatile uint64_t x6167 = 34960326610LLU;
	int8_t x6168 = 8;
	volatile uint64_t t125 = 25569927LLU;

    t125 = ((x6165/(x6166%x6167))>>x6168);

    if (t125 != 2033906LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x6173 = -1;
	volatile int64_t x6174 = 27LL;
	volatile uint8_t x6175 = 24U;
	volatile uint8_t x6176 = 51U;
	int64_t t126 = -159LL;

    t126 = ((x6173/(x6174%x6175))>>x6176);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x6281 = INT32_MAX;
	uint32_t x6282 = 4U;
	uint64_t x6283 = 111646LLU;
	volatile uint8_t x6284 = 18U;
	static volatile uint64_t t127 = 6908216LLU;

    t127 = ((x6281/(x6282%x6283))>>x6284);

    if (t127 != 2047LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x6305 = 0;
	int16_t x6306 = 1;
	int64_t t128 = -28819135392807323LL;

    t128 = ((x6305/(x6306%x6307))>>x6308);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x6319 = -8155;
	static int64_t x6320 = 11LL;
	static int32_t t129 = 918;

    t129 = ((x6317/(x6318%x6319))>>x6320);

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x6321 = 15U;
	uint8_t x6323 = UINT8_MAX;
	int8_t x6324 = 0;
	static volatile int64_t t130 = -149022481503193LL;

    t130 = ((x6321/(x6322%x6323))>>x6324);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x6330 = INT16_MIN;
	int32_t x6331 = INT32_MIN;
	volatile int8_t x6332 = 0;

    t131 = ((x6329/(x6330%x6331))>>x6332);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x6473 = UINT32_MAX;
	uint64_t x6474 = UINT64_MAX;
	uint64_t x6475 = 2431677307946255963LLU;
	uint8_t x6476 = 33U;
	uint64_t t132 = 24714006902427057LLU;

    t132 = ((x6473/(x6474%x6475))>>x6476);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x6522 = -1LL;
	int32_t x6523 = -29;
	static uint16_t x6524 = 17U;
	int64_t t133 = -2201733LL;

    t133 = ((x6521/(x6522%x6523))>>x6524);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x6703 = INT32_MIN;
	uint8_t x6704 = 0U;
	int32_t t134 = -182545;

    t134 = ((x6701/(x6702%x6703))>>x6704);

    if (t134 != 2721) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x6757 = 2U;
	int64_t x6758 = 238905LL;
	uint32_t x6759 = 233193U;
	volatile uint16_t x6760 = 6U;
	static int64_t t135 = 4185545376LL;

    t135 = ((x6757/(x6758%x6759))>>x6760);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x6845 = -1;
	volatile uint64_t x6846 = 377LLU;
	int64_t x6847 = 3079LL;
	volatile uint8_t x6848 = 11U;
	uint64_t t136 = 227813275513544954LLU;

    t136 = ((x6845/(x6846%x6847))>>x6848);

    if (t136 != 23891775211514LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x6997 = -3LL;
	int16_t x6999 = INT16_MIN;
	int64_t t137 = -883LL;

    t137 = ((x6997/(x6998%x6999))>>x7000);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x7001 = 86U;
	uint64_t x7002 = UINT64_MAX;
	int16_t x7003 = INT16_MAX;
	int8_t x7004 = 33;
	uint64_t t138 = 6651081842187943LLU;

    t138 = ((x7001/(x7002%x7003))>>x7004);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x7046 = -8872092905537LL;
	int64_t x7047 = -489705830LL;
	uint16_t x7048 = 0U;
	volatile int64_t t139 = 54LL;

    t139 = ((x7045/(x7046%x7047))>>x7048);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x7057 = 0U;
	volatile int8_t x7058 = 5;
	int8_t x7059 = INT8_MIN;
	int8_t x7060 = 26;
	int32_t t140 = 798;

    t140 = ((x7057/(x7058%x7059))>>x7060);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x7077 = INT16_MIN;
	volatile int8_t x7080 = 1;
	volatile int32_t t141 = 20323936;

    t141 = ((x7077/(x7078%x7079))>>x7080);

    if (t141 != 1092) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x7081 = INT8_MIN;
	int8_t x7082 = -7;
	int32_t x7083 = 13058;
	uint8_t x7084 = 26U;
	volatile int32_t t142 = -64848;

    t142 = ((x7081/(x7082%x7083))>>x7084);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x7145 = 17118962501047LLU;
	volatile int32_t x7146 = INT32_MAX;
	uint64_t t143 = 285109064865394177LLU;

    t143 = ((x7145/(x7146%x7147))>>x7148);

    if (t143 != 134794980323LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x7173 = 11205527258153537LLU;
	volatile uint64_t x7174 = 8709128945913952815LLU;
	int8_t x7175 = INT8_MAX;
	int8_t x7176 = 0;

    t144 = ((x7173/(x7174%x7175))>>x7176);

    if (t144 != 88932756017091LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x7177 = 14U;
	int16_t x7178 = INT16_MIN;
	uint32_t x7179 = 1471204617U;
	uint8_t x7180 = 21U;
	volatile uint32_t t145 = 236U;

    t145 = ((x7177/(x7178%x7179))>>x7180);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x7189 = -1;
	int8_t x7190 = INT8_MIN;
	int8_t x7192 = 4;

    t146 = ((x7189/(x7190%x7191))>>x7192);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x7209 = 2U;
	int32_t x7210 = INT32_MIN;
	int64_t x7211 = 2774341968975663LL;
	volatile uint64_t x7212 = 51LLU;
	int64_t t147 = 2872538LL;

    t147 = ((x7209/(x7210%x7211))>>x7212);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x7225 = INT16_MIN;
	uint64_t x7226 = 4181428748715234365LLU;
	int16_t x7227 = INT16_MIN;
	uint8_t x7228 = 1U;
	volatile uint64_t t148 = 7916255989692654LLU;

    t148 = ((x7225/(x7226%x7227))>>x7228);

    if (t148 != 2LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x7258 = 14985LLU;
	int8_t x7260 = 0;

    t149 = ((x7257/(x7258%x7259))>>x7260);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x7271 = INT16_MIN;
	int32_t t150 = -1961318;

    t150 = ((x7269/(x7270%x7271))>>x7272);

    if (t150 != 128) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x7314 = INT64_MAX;
	int64_t t151 = -39556458856795LL;

    t151 = ((x7313/(x7314%x7315))>>x7316);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x7381 = -14;
	volatile int8_t x7382 = -43;
	int8_t x7383 = -7;
	uint16_t x7384 = 6U;
	volatile int32_t t152 = 0;

    t152 = ((x7381/(x7382%x7383))>>x7384);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x7437 = 33U;
	int8_t x7438 = INT8_MIN;
	uint32_t x7439 = UINT32_MAX;
	int16_t x7440 = 0;
	volatile uint32_t t153 = 7086U;

    t153 = ((x7437/(x7438%x7439))>>x7440);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x7453 = INT8_MAX;
	static int64_t x7454 = INT64_MAX;
	int16_t x7455 = INT16_MAX;
	uint8_t x7456 = 24U;
	static volatile int64_t t154 = 2318LL;

    t154 = ((x7453/(x7454%x7455))>>x7456);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x7465 = -1LL;
	int16_t x7466 = 467;
	volatile int16_t x7467 = INT16_MIN;
	int64_t t155 = 510059LL;

    t155 = ((x7465/(x7466%x7467))>>x7468);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x7473 = INT32_MIN;
	int16_t x7474 = 3954;
	static uint32_t x7475 = 648640622U;
	uint8_t x7476 = 4U;

    t156 = ((x7473/(x7474%x7475))>>x7476);

    if (t156 != 33944U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x7485 = INT64_MIN;
	int64_t x7486 = -629443416576LL;
	int64_t x7487 = INT64_MIN;
	uint8_t x7488 = 0U;
	int64_t t157 = 3365287002LL;

    t157 = ((x7485/(x7486%x7487))>>x7488);

    if (t157 != 14653218LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x7549 = INT32_MIN;
	static int16_t x7550 = -718;
	uint32_t x7551 = 112515U;
	uint16_t x7552 = 1U;
	static volatile uint32_t t158 = 101896302U;

    t158 = ((x7549/(x7550%x7551))>>x7552);

    if (t158 != 24404U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x7585 = INT8_MAX;
	uint64_t x7587 = UINT64_MAX;
	uint8_t x7588 = 1U;
	volatile uint64_t t159 = 7225038477138328662LLU;

    t159 = ((x7585/(x7586%x7587))>>x7588);

    if (t159 != 21LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x7652 = 5U;
	volatile uint32_t t160 = 63584U;

    t160 = ((x7649/(x7650%x7651))>>x7652);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x7705 = INT32_MIN;
	static int64_t x7706 = 1025915812853LL;
	volatile int64_t x7707 = INT64_MIN;
	uint16_t x7708 = 15U;
	volatile int64_t t161 = 16567576702387LL;

    t161 = ((x7705/(x7706%x7707))>>x7708);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x7709 = -1;
	volatile int32_t x7711 = -662798281;
	uint8_t x7712 = 1U;
	volatile int32_t t162 = -14028;

    t162 = ((x7709/(x7710%x7711))>>x7712);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x7713 = UINT16_MAX;
	uint64_t x7714 = 62028LLU;
	uint64_t t163 = 189270373LLU;

    t163 = ((x7713/(x7714%x7715))>>x7716);

    if (t163 != 1LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x7786 = INT64_MAX;
	uint16_t x7788 = 1U;
	int64_t t164 = 160587246691LL;

    t164 = ((x7785/(x7786%x7787))>>x7788);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x7802 = INT64_MIN;
	uint16_t x7803 = 29543U;
	int64_t t165 = -189586926065925LL;

    t165 = ((x7801/(x7802%x7803))>>x7804);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x7897 = INT64_MAX;
	static int64_t x7899 = 2004458LL;
	static uint8_t x7900 = 22U;

    t166 = ((x7897/(x7898%x7899))>>x7900);

    if (t166 != 3186500LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x7981 = 3323565U;
	uint16_t x7982 = 839U;
	int8_t x7983 = INT8_MIN;

    t167 = ((x7981/(x7982%x7983))>>x7984);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x8006 = -3374585673183LL;
	int64_t x8007 = 5925LL;
	volatile uint8_t x8008 = 8U;

    t168 = ((x8005/(x8006%x8007))>>x8008);

    if (t168 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}

