
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

static int8_t x18 = 0;
static volatile int32_t t2 = 0;
int16_t x91 = INT16_MIN;
uint8_t x113 = UINT8_MAX;
static volatile int32_t t4 = 1894691;
uint64_t x129 = 47523661LLU;
uint16_t x130 = 1U;
uint64_t x132 = 60666106555717LLU;
int32_t x183 = 46012;
static int64_t x267 = INT64_MIN;
static int16_t x274 = 1855;
volatile uint8_t x302 = 1U;
uint16_t x358 = 6U;
int8_t x362 = 1;
static int32_t t17 = 230;
static int32_t t18 = -5993806;
static int32_t x384 = 311;
int8_t x406 = INT8_MAX;
int32_t x407 = INT32_MIN;
int32_t t20 = 7978081;
volatile uint32_t x421 = 290U;
static volatile int32_t x493 = 35080;
int32_t x494 = 1;
uint16_t x496 = UINT16_MAX;
int32_t x508 = -21;
static volatile int32_t t25 = -16;
int32_t t26 = -37;
uint8_t x581 = 45U;
int64_t x583 = INT64_MIN;
volatile uint8_t x609 = 29U;
int32_t x621 = 0;
static int8_t x622 = 3;
int32_t x633 = INT32_MAX;
int16_t x634 = 1;
int32_t x636 = INT32_MIN;
int32_t t31 = 3;
int8_t x653 = INT8_MAX;
int32_t x654 = INT32_MIN;
int16_t x661 = INT16_MAX;
uint16_t x725 = 1U;
int64_t x726 = -470069283815797369LL;
uint64_t x727 = 0LLU;
uint32_t x741 = UINT32_MAX;
volatile int32_t t36 = -413625860;
uint8_t x813 = 1U;
volatile uint32_t x815 = 483U;
int16_t x816 = INT16_MAX;
volatile int16_t x862 = 33;
volatile uint16_t x870 = 0U;
volatile int32_t t42 = -259274;
volatile int64_t x878 = -22620762489702675LL;
int64_t x880 = INT64_MAX;
int64_t x946 = INT64_MAX;
int32_t t49 = -1157836;
uint16_t x1005 = 9856U;
int8_t x1006 = 4;
int32_t t51 = -659644;
int8_t x1047 = 35;
int16_t x1057 = 5823;
int8_t x1060 = INT8_MIN;
static volatile uint64_t x1082 = UINT64_MAX;
uint16_t x1095 = 25U;
static volatile int64_t x1104 = -185214927693LL;
static uint8_t x1129 = UINT8_MAX;
volatile int64_t x1165 = INT64_MAX;
uint64_t x1168 = 46468604LLU;
int64_t x1199 = INT64_MIN;
volatile int32_t t63 = 1050891328;
uint32_t x1209 = UINT32_MAX;
int16_t x1210 = INT16_MIN;
int32_t x1211 = 226;
int16_t x1212 = INT16_MIN;
volatile int32_t t64 = -4223;
uint8_t x1341 = UINT8_MAX;
int8_t x1354 = 1;
uint8_t x1514 = 61U;
int16_t x1522 = -1;
int8_t x1523 = 1;
volatile int16_t x1539 = INT16_MIN;
static int16_t x1540 = INT16_MAX;
int32_t t79 = -124;
int32_t x1595 = INT32_MIN;
int8_t x1596 = INT8_MIN;
int16_t x1620 = -8666;
volatile int32_t t82 = -42280;
static volatile int8_t x1722 = 5;
static uint64_t x1808 = 8461555820349192011LLU;
int16_t x1809 = 540;
uint8_t x1813 = UINT8_MAX;
int32_t t88 = 1330;
int64_t x1924 = -36126866729314034LL;
int8_t x1925 = INT8_MAX;
uint8_t x1926 = 0U;
uint64_t x1937 = 170085349071574351LLU;
int32_t t92 = 6268;
int8_t x1974 = 12;
static volatile int16_t x1988 = 2;
uint8_t x2009 = 4U;
int8_t x2015 = INT8_MAX;
int8_t x2016 = INT8_MIN;
static int32_t t97 = 56;
int64_t x2030 = INT64_MIN;
volatile int32_t x2078 = INT32_MIN;
uint64_t x2090 = 12481503LLU;
uint16_t x2092 = 1062U;
int8_t x2113 = 7;
static uint32_t x2186 = 51431U;
static int32_t t103 = 11;
int32_t t107 = -469286573;
int8_t x2290 = INT8_MAX;
volatile uint32_t x2301 = 18U;
static int16_t x2302 = INT16_MIN;
static uint32_t x2304 = UINT32_MAX;
int16_t x2320 = INT16_MAX;
uint16_t x2330 = 1U;
int32_t x2331 = INT32_MIN;
static uint16_t x2355 = 8U;
int32_t t113 = -194858;
int8_t x2403 = INT8_MAX;
int32_t t115 = -439;
int16_t x2430 = INT16_MIN;
int32_t x2460 = INT32_MAX;
int32_t t118 = 4;
int16_t x2517 = INT16_MAX;
static uint64_t x2537 = 317398539194LLU;
int32_t t120 = 44100;
static int8_t x2562 = 1;
uint16_t x2563 = UINT16_MAX;
static uint64_t x2576 = UINT64_MAX;
uint16_t x2633 = 13U;
static volatile uint8_t x2635 = UINT8_MAX;
int32_t t126 = -2645617;
int32_t t128 = 0;
int32_t x2694 = INT32_MAX;
static int8_t x2697 = INT8_MAX;
int8_t x2698 = 2;
volatile int32_t t132 = -6;
volatile int8_t x2803 = 1;
int32_t t134 = 492863;
uint32_t x2857 = UINT32_MAX;
int64_t x2860 = INT64_MIN;
uint16_t x2871 = 5390U;
volatile int32_t t139 = -753;
uint64_t x2969 = 27373981628517LLU;
uint8_t x3006 = 0U;
volatile int32_t t143 = -14683;
int8_t x3015 = 6;
volatile int16_t x3016 = INT16_MIN;
static int64_t x3037 = INT64_MAX;
uint32_t x3068 = 116242U;
int32_t x3142 = INT32_MIN;
volatile int32_t t149 = 0;
static volatile int32_t t150 = -506;
static int16_t x3152 = -2628;
uint32_t x3216 = 123687030U;
uint16_t x3217 = 3U;
int64_t x3218 = INT64_MIN;
uint8_t x3237 = 79U;
uint32_t x3272 = 7849120U;
static uint16_t x3297 = 211U;
int16_t x3298 = 961;
int32_t x3306 = INT32_MIN;
volatile uint16_t x3335 = 147U;
int16_t x3344 = INT16_MIN;
uint32_t x3381 = UINT32_MAX;
int64_t x3403 = INT64_MIN;
int32_t x3411 = -5766191;
static int32_t t168 = 211597;
int32_t x3502 = 436610;
int32_t x3506 = INT32_MIN;
static int64_t x3508 = -1LL;
uint32_t x3517 = UINT32_MAX;
int16_t x3532 = -1;
int32_t t173 = 170754;
int64_t x3547 = 2LL;
volatile int32_t t176 = -1989005;
static uint8_t x3581 = 70U;
int32_t t178 = -600294089;
volatile uint16_t x3649 = UINT16_MAX;
int32_t x3661 = INT32_MAX;
int32_t t183 = 12081752;
uint64_t x3761 = 614938912LLU;
uint32_t x3809 = 29912U;
uint8_t x3811 = 2U;
int64_t x3812 = INT64_MIN;
int32_t t186 = 34913806;
volatile uint8_t x3835 = UINT8_MAX;
volatile int32_t t188 = 73316676;
uint16_t x3837 = 3U;
int8_t x3838 = 3;
int32_t x3877 = INT32_MAX;
volatile int32_t t190 = 268562155;
static int64_t x3925 = 51276LL;
static uint8_t x3935 = 0U;
static uint16_t x3946 = 1450U;
static int32_t t195 = 1;


void f0(void) {
    	uint32_t x1 = 16140U;
	uint32_t x2 = 5612527U;
	int64_t x3 = INT64_MIN;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = -450549;

    t0 = ((x1>>(x2&x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 16422474U;
	uint16_t x10 = UINT16_MAX;
	static int64_t x11 = INT64_MIN;
	int64_t x12 = -16963LL;
	static int32_t t1 = -24;

    t1 = ((x9>>(x10&x11))>x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = UINT32_MAX;
	uint8_t x19 = 0U;
	static uint64_t x20 = 481685459766307LLU;

    t2 = ((x17>>(x18&x19))>x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x89 = 66;
	volatile int16_t x90 = 5;
	int64_t x92 = INT64_MIN;
	int32_t t3 = 0;

    t3 = ((x89>>(x90&x91))>x92);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x114 = 984153134419LLU;
	uint16_t x115 = 63U;
	volatile uint16_t x116 = 74U;

    t4 = ((x113>>(x114&x115))>x116);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x131 = 1;
	volatile int32_t t5 = -644;

    t5 = ((x129>>(x130&x131))>x132);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x137 = 23U;
	static uint64_t x138 = 17373LLU;
	int8_t x139 = 43;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t6 = 283175;

    t6 = ((x137>>(x138&x139))>x140);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x177 = 2203LLU;
	int32_t x178 = INT32_MIN;
	uint64_t x179 = 68088LLU;
	int16_t x180 = INT16_MIN;
	volatile int32_t t7 = -71814268;

    t7 = ((x177>>(x178&x179))>x180);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x181 = 1869672U;
	int64_t x182 = INT64_MIN;
	static int64_t x184 = INT64_MAX;
	int32_t t8 = -7174196;

    t8 = ((x181>>(x182&x183))>x184);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x265 = 36;
	static uint64_t x266 = 2672628669LLU;
	volatile int32_t x268 = 39;
	volatile int32_t t9 = 246;

    t9 = ((x265>>(x266&x267))>x268);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x269 = INT32_MAX;
	int32_t x270 = 1;
	volatile uint64_t x271 = 30200924334196LLU;
	int16_t x272 = 47;
	volatile int32_t t10 = -20544;

    t10 = ((x269>>(x270&x271))>x272);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x273 = 240709901LL;
	uint8_t x275 = 3U;
	static volatile uint32_t x276 = 728920794U;
	int32_t t11 = 293705243;

    t11 = ((x273>>(x274&x275))>x276);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x281 = 13U;
	int8_t x282 = 0;
	int64_t x283 = -1LL;
	uint8_t x284 = 0U;
	static volatile int32_t t12 = 1661;

    t12 = ((x281>>(x282&x283))>x284);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x285 = 120387754780687240LLU;
	uint32_t x286 = 2556606U;
	int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MAX;
	volatile int32_t t13 = 445991;

    t13 = ((x285>>(x286&x287))>x288);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x301 = 8U;
	uint32_t x303 = UINT32_MAX;
	static volatile uint64_t x304 = 15428031853576814LLU;
	int32_t t14 = 13696;

    t14 = ((x301>>(x302&x303))>x304);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x321 = INT32_MAX;
	int16_t x322 = 2;
	static uint32_t x323 = 37375607U;
	volatile int16_t x324 = -321;
	volatile int32_t t15 = -3407256;

    t15 = ((x321>>(x322&x323))>x324);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x357 = 348;
	volatile uint64_t x359 = 1594LLU;
	volatile int16_t x360 = INT16_MAX;
	int32_t t16 = 181;

    t16 = ((x357>>(x358&x359))>x360);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x361 = 1U;
	int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MIN;

    t17 = ((x361>>(x362&x363))>x364);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x377 = 21U;
	volatile int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MIN;

    t18 = ((x377>>(x378&x379))>x380);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MAX;
	static int8_t x383 = 1;
	int32_t t19 = -5;

    t19 = ((x381>>(x382&x383))>x384);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x405 = 2U;
	int16_t x408 = INT16_MIN;

    t20 = ((x405>>(x406&x407))>x408);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x422 = INT32_MIN;
	uint16_t x423 = UINT16_MAX;
	static volatile uint16_t x424 = 2275U;
	int32_t t21 = 13;

    t21 = ((x421>>(x422&x423))>x424);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x425 = 0;
	int8_t x426 = 0;
	int16_t x427 = -1;
	static uint32_t x428 = 19136U;
	static int32_t t22 = 8827981;

    t22 = ((x425>>(x426&x427))>x428);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x495 = INT16_MIN;
	static int32_t t23 = -1;

    t23 = ((x493>>(x494&x495))>x496);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x505 = 22U;
	uint16_t x506 = UINT16_MAX;
	static uint32_t x507 = 16U;
	volatile int32_t t24 = -445;

    t24 = ((x505>>(x506&x507))>x508);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x545 = 6U;
	uint8_t x546 = 3U;
	static uint16_t x547 = UINT16_MAX;
	static int16_t x548 = INT16_MIN;

    t25 = ((x545>>(x546&x547))>x548);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x565 = 2830U;
	volatile int64_t x566 = INT64_MIN;
	static volatile uint32_t x567 = 817076U;
	uint8_t x568 = UINT8_MAX;

    t26 = ((x565>>(x566&x567))>x568);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x582 = 117;
	int64_t x584 = INT64_MIN;
	volatile int32_t t27 = -144281;

    t27 = ((x581>>(x582&x583))>x584);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x601 = 2440711113750029247LL;
	uint16_t x602 = 685U;
	int32_t x603 = INT32_MIN;
	int32_t x604 = INT32_MAX;
	volatile int32_t t28 = -1;

    t28 = ((x601>>(x602&x603))>x604);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x610 = 0U;
	uint32_t x611 = 281U;
	uint64_t x612 = 286LLU;
	volatile int32_t t29 = 325430;

    t29 = ((x609>>(x610&x611))>x612);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x623 = INT64_MIN;
	int16_t x624 = -1;
	static volatile int32_t t30 = 17624365;

    t30 = ((x621>>(x622&x623))>x624);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x635 = INT8_MIN;

    t31 = ((x633>>(x634&x635))>x636);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x655 = UINT16_MAX;
	int32_t x656 = INT32_MIN;
	int32_t t32 = 1689716;

    t32 = ((x653>>(x654&x655))>x656);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x662 = 22LLU;
	static int8_t x663 = INT8_MIN;
	volatile int16_t x664 = INT16_MIN;
	int32_t t33 = -733920;

    t33 = ((x661>>(x662&x663))>x664);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x728 = 734295LL;
	int32_t t34 = 228;

    t34 = ((x725>>(x726&x727))>x728);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x737 = 4;
	int8_t x738 = INT8_MIN;
	uint8_t x739 = 3U;
	volatile uint16_t x740 = 304U;
	volatile int32_t t35 = 66476705;

    t35 = ((x737>>(x738&x739))>x740);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x742 = 0;
	uint8_t x743 = 0U;
	int64_t x744 = -23792728LL;

    t36 = ((x741>>(x742&x743))>x744);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x793 = 8;
	int64_t x794 = INT64_MIN;
	int16_t x795 = INT16_MAX;
	int32_t x796 = INT32_MIN;
	int32_t t37 = 796998612;

    t37 = ((x793>>(x794&x795))>x796);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x814 = 1;
	volatile int32_t t38 = 1060;

    t38 = ((x813>>(x814&x815))>x816);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x825 = 533820448668988633LL;
	int16_t x826 = 4414;
	uint8_t x827 = 1U;
	int32_t x828 = INT32_MAX;
	volatile int32_t t39 = 4104470;

    t39 = ((x825>>(x826&x827))>x828);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x849 = 14U;
	static int16_t x850 = INT16_MAX;
	static volatile int16_t x851 = INT16_MIN;
	static int32_t x852 = INT32_MIN;
	volatile int32_t t40 = -1;

    t40 = ((x849>>(x850&x851))>x852);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x861 = 209;
	volatile uint32_t x863 = 77U;
	int16_t x864 = 40;
	int32_t t41 = -18918110;

    t41 = ((x861>>(x862&x863))>x864);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x869 = 23U;
	static int8_t x871 = INT8_MAX;
	int32_t x872 = INT32_MAX;

    t42 = ((x869>>(x870&x871))>x872);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x877 = 19584U;
	static int8_t x879 = 1;
	volatile int32_t t43 = -10;

    t43 = ((x877>>(x878&x879))>x880);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x881 = 3U;
	uint16_t x882 = 124U;
	volatile int64_t x883 = 3LL;
	int16_t x884 = INT16_MAX;
	volatile int32_t t44 = -551213703;

    t44 = ((x881>>(x882&x883))>x884);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x921 = INT8_MAX;
	int32_t x922 = INT32_MIN;
	uint8_t x923 = 6U;
	int16_t x924 = INT16_MAX;
	static int32_t t45 = 1086787;

    t45 = ((x921>>(x922&x923))>x924);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x929 = 5803LLU;
	static uint32_t x930 = UINT32_MAX;
	volatile uint32_t x931 = 0U;
	uint16_t x932 = UINT16_MAX;
	static volatile int32_t t46 = -176;

    t46 = ((x929>>(x930&x931))>x932);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x933 = 2;
	int16_t x934 = 6;
	uint16_t x935 = 11U;
	volatile uint64_t x936 = 112LLU;
	volatile int32_t t47 = -1;

    t47 = ((x933>>(x934&x935))>x936);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x945 = INT64_MAX;
	int64_t x947 = INT64_MIN;
	int16_t x948 = INT16_MIN;
	int32_t t48 = -8;

    t48 = ((x945>>(x946&x947))>x948);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x957 = 994441991U;
	static int8_t x958 = INT8_MIN;
	uint16_t x959 = 1U;
	uint8_t x960 = 26U;

    t49 = ((x957>>(x958&x959))>x960);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x1007 = -9838801LL;
	int32_t x1008 = -1;
	volatile int32_t t50 = -446;

    t50 = ((x1005>>(x1006&x1007))>x1008);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x1025 = 32594U;
	volatile uint8_t x1026 = 1U;
	int16_t x1027 = -1;
	int64_t x1028 = -1LL;

    t51 = ((x1025>>(x1026&x1027))>x1028);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x1045 = INT64_MAX;
	static int64_t x1046 = -11696342132456LL;
	uint32_t x1048 = 17U;
	volatile int32_t t52 = -47200;

    t52 = ((x1045>>(x1046&x1047))>x1048);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x1058 = -72;
	uint64_t x1059 = 11LLU;
	int32_t t53 = 15683685;

    t53 = ((x1057>>(x1058&x1059))>x1060);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x1081 = 31;
	uint8_t x1083 = 2U;
	int64_t x1084 = INT64_MIN;
	int32_t t54 = 0;

    t54 = ((x1081>>(x1082&x1083))>x1084);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1085 = 63U;
	int32_t x1086 = 188;
	static int16_t x1087 = INT16_MIN;
	static int32_t x1088 = INT32_MIN;
	volatile int32_t t55 = 1;

    t55 = ((x1085>>(x1086&x1087))>x1088);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x1089 = 714LL;
	int8_t x1090 = 7;
	int8_t x1091 = -1;
	uint32_t x1092 = 21710786U;
	static volatile int32_t t56 = -2083257;

    t56 = ((x1089>>(x1090&x1091))>x1092);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x1093 = 3807U;
	static int16_t x1094 = INT16_MAX;
	static int64_t x1096 = 2085177130676073867LL;
	int32_t t57 = 501506;

    t57 = ((x1093>>(x1094&x1095))>x1096);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x1101 = 23;
	int16_t x1102 = 919;
	int8_t x1103 = INT8_MAX;
	int32_t t58 = 332021800;

    t58 = ((x1101>>(x1102&x1103))>x1104);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x1130 = 1U;
	static uint8_t x1131 = 9U;
	int8_t x1132 = INT8_MAX;
	int32_t t59 = -50;

    t59 = ((x1129>>(x1130&x1131))>x1132);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x1157 = 96007U;
	int8_t x1158 = 31;
	int8_t x1159 = INT8_MAX;
	int16_t x1160 = -1;
	static volatile int32_t t60 = -5;

    t60 = ((x1157>>(x1158&x1159))>x1160);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x1166 = 0U;
	int16_t x1167 = -1;
	int32_t t61 = -15316248;

    t61 = ((x1165>>(x1166&x1167))>x1168);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x1181 = UINT32_MAX;
	static uint8_t x1182 = UINT8_MAX;
	int64_t x1183 = INT64_MIN;
	volatile int32_t x1184 = -52;
	int32_t t62 = 1;

    t62 = ((x1181>>(x1182&x1183))>x1184);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x1197 = UINT8_MAX;
	static uint8_t x1198 = 1U;
	int64_t x1200 = INT64_MIN;

    t63 = ((x1197>>(x1198&x1199))>x1200);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    

    t64 = ((x1209>>(x1210&x1211))>x1212);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x1221 = 16490U;
	static volatile int32_t x1222 = 0;
	int8_t x1223 = INT8_MAX;
	static uint8_t x1224 = 28U;
	static volatile int32_t t65 = -12897896;

    t65 = ((x1221>>(x1222&x1223))>x1224);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x1233 = INT64_MAX;
	uint32_t x1234 = 33558544U;
	int64_t x1235 = INT64_MIN;
	uint8_t x1236 = 4U;
	volatile int32_t t66 = -13600;

    t66 = ((x1233>>(x1234&x1235))>x1236);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x1273 = 181;
	uint64_t x1274 = 1980LLU;
	int64_t x1275 = INT64_MIN;
	volatile int32_t x1276 = -933;
	int32_t t67 = -1561;

    t67 = ((x1273>>(x1274&x1275))>x1276);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x1285 = INT32_MAX;
	volatile int64_t x1286 = INT64_MIN;
	uint8_t x1287 = 29U;
	int32_t x1288 = INT32_MAX;
	volatile int32_t t68 = -31133024;

    t68 = ((x1285>>(x1286&x1287))>x1288);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x1305 = 13U;
	uint32_t x1306 = UINT32_MAX;
	uint32_t x1307 = 1U;
	int64_t x1308 = INT64_MIN;
	volatile int32_t t69 = -90;

    t69 = ((x1305>>(x1306&x1307))>x1308);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x1333 = 331U;
	static uint8_t x1334 = 3U;
	volatile int64_t x1335 = 2871529LL;
	int8_t x1336 = 1;
	int32_t t70 = 54467926;

    t70 = ((x1333>>(x1334&x1335))>x1336);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x1342 = 14U;
	static volatile uint16_t x1343 = UINT16_MAX;
	int64_t x1344 = INT64_MAX;
	int32_t t71 = 20678994;

    t71 = ((x1341>>(x1342&x1343))>x1344);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x1353 = 46U;
	int64_t x1355 = -13807473LL;
	uint8_t x1356 = 3U;
	int32_t t72 = -131470846;

    t72 = ((x1353>>(x1354&x1355))>x1356);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x1449 = 9382;
	volatile int8_t x1450 = 0;
	uint64_t x1451 = 1LLU;
	static int8_t x1452 = INT8_MIN;
	volatile int32_t t73 = -19279;

    t73 = ((x1449>>(x1450&x1451))>x1452);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x1473 = 54;
	int16_t x1474 = 2;
	static uint64_t x1475 = UINT64_MAX;
	int16_t x1476 = 520;
	volatile int32_t t74 = -1;

    t74 = ((x1473>>(x1474&x1475))>x1476);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x1493 = 14185U;
	volatile int64_t x1494 = INT64_MIN;
	uint32_t x1495 = 2U;
	int8_t x1496 = INT8_MIN;
	int32_t t75 = -379;

    t75 = ((x1493>>(x1494&x1495))>x1496);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x1501 = 24525LLU;
	uint8_t x1502 = 28U;
	static volatile int32_t x1503 = -973783;
	static int64_t x1504 = INT64_MIN;
	int32_t t76 = 252;

    t76 = ((x1501>>(x1502&x1503))>x1504);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x1513 = 1710003U;
	uint8_t x1515 = 5U;
	int64_t x1516 = INT64_MAX;
	static int32_t t77 = 3;

    t77 = ((x1513>>(x1514&x1515))>x1516);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x1521 = INT16_MAX;
	int16_t x1524 = INT16_MAX;
	int32_t t78 = -27622;

    t78 = ((x1521>>(x1522&x1523))>x1524);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x1537 = 207884U;
	volatile int8_t x1538 = 1;

    t79 = ((x1537>>(x1538&x1539))>x1540);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x1593 = UINT64_MAX;
	uint8_t x1594 = 2U;
	volatile int32_t t80 = 1793553;

    t80 = ((x1593>>(x1594&x1595))>x1596);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x1617 = 61U;
	static int8_t x1618 = 0;
	uint8_t x1619 = 16U;
	volatile int32_t t81 = -29380;

    t81 = ((x1617>>(x1618&x1619))>x1620);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x1649 = 6271782657875LL;
	static int16_t x1650 = 1;
	int16_t x1651 = INT16_MAX;
	volatile uint32_t x1652 = 9681052U;

    t82 = ((x1649>>(x1650&x1651))>x1652);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x1721 = 84U;
	static uint32_t x1723 = UINT32_MAX;
	static int32_t x1724 = INT32_MIN;
	volatile int32_t t83 = 17441;

    t83 = ((x1721>>(x1722&x1723))>x1724);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x1729 = UINT8_MAX;
	static uint16_t x1730 = 1U;
	int32_t x1731 = INT32_MAX;
	volatile uint16_t x1732 = 4U;
	int32_t t84 = 29;

    t84 = ((x1729>>(x1730&x1731))>x1732);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x1805 = INT32_MAX;
	volatile int16_t x1806 = INT16_MAX;
	int64_t x1807 = INT64_MIN;
	static volatile int32_t t85 = 4;

    t85 = ((x1805>>(x1806&x1807))>x1808);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x1810 = 453242U;
	uint8_t x1811 = 8U;
	uint8_t x1812 = 6U;
	int32_t t86 = -1014329957;

    t86 = ((x1809>>(x1810&x1811))>x1812);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x1814 = 887U;
	uint32_t x1815 = 175979658U;
	uint64_t x1816 = 1959233226447403561LLU;
	static volatile int32_t t87 = 4949319;

    t87 = ((x1813>>(x1814&x1815))>x1816);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x1849 = 7278U;
	uint8_t x1850 = 3U;
	int8_t x1851 = INT8_MIN;
	static int8_t x1852 = INT8_MAX;

    t88 = ((x1849>>(x1850&x1851))>x1852);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x1901 = 239U;
	uint16_t x1902 = 68U;
	uint32_t x1903 = 19U;
	int16_t x1904 = 0;
	volatile int32_t t89 = -49185745;

    t89 = ((x1901>>(x1902&x1903))>x1904);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x1921 = UINT32_MAX;
	int16_t x1922 = INT16_MAX;
	uint32_t x1923 = 0U;
	volatile int32_t t90 = -1;

    t90 = ((x1921>>(x1922&x1923))>x1924);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x1927 = INT8_MIN;
	uint8_t x1928 = 21U;
	static volatile int32_t t91 = -796849;

    t91 = ((x1925>>(x1926&x1927))>x1928);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x1938 = 0;
	uint32_t x1939 = 251U;
	volatile int8_t x1940 = INT8_MAX;

    t92 = ((x1937>>(x1938&x1939))>x1940);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x1961 = 627172988LLU;
	int32_t x1962 = INT32_MIN;
	volatile uint8_t x1963 = 100U;
	volatile int32_t x1964 = -1;
	int32_t t93 = 127013581;

    t93 = ((x1961>>(x1962&x1963))>x1964);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x1973 = 4U;
	int64_t x1975 = INT64_MIN;
	static uint32_t x1976 = UINT32_MAX;
	int32_t t94 = 15824;

    t94 = ((x1973>>(x1974&x1975))>x1976);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x1985 = 53176U;
	int16_t x1986 = 26;
	int8_t x1987 = 0;
	int32_t t95 = -1;

    t95 = ((x1985>>(x1986&x1987))>x1988);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x2010 = INT8_MIN;
	uint64_t x2011 = 100LLU;
	int32_t x2012 = -1;
	volatile int32_t t96 = -1;

    t96 = ((x2009>>(x2010&x2011))>x2012);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x2013 = 3410503382703LLU;
	int16_t x2014 = INT16_MIN;

    t97 = ((x2013>>(x2014&x2015))>x2016);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x2029 = INT16_MAX;
	uint8_t x2031 = 1U;
	volatile int8_t x2032 = 0;
	static int32_t t98 = -91685375;

    t98 = ((x2029>>(x2030&x2031))>x2032);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x2077 = INT16_MAX;
	static uint8_t x2079 = 1U;
	int32_t x2080 = -1;
	int32_t t99 = -13612;

    t99 = ((x2077>>(x2078&x2079))>x2080);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x2089 = UINT64_MAX;
	uint32_t x2091 = 33U;
	volatile int32_t t100 = -1;

    t100 = ((x2089>>(x2090&x2091))>x2092);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x2114 = INT32_MAX;
	static int64_t x2115 = 1LL;
	uint16_t x2116 = 83U;
	int32_t t101 = 64;

    t101 = ((x2113>>(x2114&x2115))>x2116);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x2149 = INT16_MAX;
	static volatile int8_t x2150 = -1;
	uint64_t x2151 = 2LLU;
	volatile uint8_t x2152 = UINT8_MAX;
	int32_t t102 = -135;

    t102 = ((x2149>>(x2150&x2151))>x2152);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x2185 = 64267442658LLU;
	uint8_t x2187 = 30U;
	volatile uint8_t x2188 = UINT8_MAX;

    t103 = ((x2185>>(x2186&x2187))>x2188);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x2201 = 15463;
	int8_t x2202 = 0;
	int32_t x2203 = -1;
	int16_t x2204 = -13870;
	volatile int32_t t104 = 11661209;

    t104 = ((x2201>>(x2202&x2203))>x2204);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x2213 = 5U;
	volatile int8_t x2214 = 62;
	static uint32_t x2215 = 907649U;
	int16_t x2216 = -1;
	int32_t t105 = 224424;

    t105 = ((x2213>>(x2214&x2215))>x2216);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x2269 = 1U;
	volatile int16_t x2270 = 0;
	int64_t x2271 = INT64_MAX;
	volatile int32_t x2272 = INT32_MIN;
	static int32_t t106 = 213067;

    t106 = ((x2269>>(x2270&x2271))>x2272);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x2277 = UINT8_MAX;
	int16_t x2278 = 1;
	uint8_t x2279 = 49U;
	uint8_t x2280 = UINT8_MAX;

    t107 = ((x2277>>(x2278&x2279))>x2280);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x2289 = INT8_MAX;
	static int32_t x2291 = -256;
	int16_t x2292 = -1;
	volatile int32_t t108 = 293846;

    t108 = ((x2289>>(x2290&x2291))>x2292);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x2303 = UINT8_MAX;
	int32_t t109 = -15;

    t109 = ((x2301>>(x2302&x2303))>x2304);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x2317 = 1U;
	static uint32_t x2318 = 15U;
	static volatile int16_t x2319 = 46;
	volatile int32_t t110 = 118421627;

    t110 = ((x2317>>(x2318&x2319))>x2320);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x2329 = 3U;
	uint32_t x2332 = 658U;
	int32_t t111 = -263002;

    t111 = ((x2329>>(x2330&x2331))>x2332);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x2341 = UINT16_MAX;
	int8_t x2342 = INT8_MAX;
	int8_t x2343 = INT8_MIN;
	int32_t x2344 = 112441153;
	int32_t t112 = 551164700;

    t112 = ((x2341>>(x2342&x2343))>x2344);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x2353 = 16145U;
	int16_t x2354 = 0;
	volatile int16_t x2356 = INT16_MIN;

    t113 = ((x2353>>(x2354&x2355))>x2356);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x2401 = 0U;
	int32_t x2402 = INT32_MIN;
	uint64_t x2404 = 23337220610951LLU;
	static volatile int32_t t114 = -25;

    t114 = ((x2401>>(x2402&x2403))>x2404);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x2421 = 44;
	uint8_t x2422 = 3U;
	int16_t x2423 = -1;
	static uint64_t x2424 = 1187514451876718LLU;

    t115 = ((x2421>>(x2422&x2423))>x2424);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x2429 = UINT16_MAX;
	int16_t x2431 = 0;
	static volatile int32_t x2432 = -1;
	int32_t t116 = 891006;

    t116 = ((x2429>>(x2430&x2431))>x2432);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x2457 = UINT32_MAX;
	int64_t x2458 = INT64_MIN;
	uint32_t x2459 = 655U;
	int32_t t117 = -127;

    t117 = ((x2457>>(x2458&x2459))>x2460);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x2493 = INT8_MAX;
	int32_t x2494 = INT32_MIN;
	volatile uint32_t x2495 = 497805U;
	volatile uint8_t x2496 = 1U;

    t118 = ((x2493>>(x2494&x2495))>x2496);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x2518 = INT16_MAX;
	int32_t x2519 = INT32_MIN;
	static int64_t x2520 = -530959319LL;
	int32_t t119 = 1723;

    t119 = ((x2517>>(x2518&x2519))>x2520);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x2538 = 40;
	uint32_t x2539 = 99607781U;
	uint16_t x2540 = 0U;

    t120 = ((x2537>>(x2538&x2539))>x2540);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x2545 = 438006610173266774LLU;
	int32_t x2546 = -140027753;
	int64_t x2547 = 0LL;
	volatile int64_t x2548 = -1LL;
	int32_t t121 = 336273;

    t121 = ((x2545>>(x2546&x2547))>x2548);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x2557 = UINT64_MAX;
	uint8_t x2558 = 1U;
	int64_t x2559 = -1LL;
	uint16_t x2560 = UINT16_MAX;
	static volatile int32_t t122 = 48061;

    t122 = ((x2557>>(x2558&x2559))>x2560);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x2561 = UINT8_MAX;
	static volatile int8_t x2564 = -1;
	int32_t t123 = 38874;

    t123 = ((x2561>>(x2562&x2563))>x2564);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x2573 = 29944187487402749LLU;
	uint16_t x2574 = 2U;
	static uint16_t x2575 = 53U;
	int32_t t124 = -263923960;

    t124 = ((x2573>>(x2574&x2575))>x2576);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x2589 = 232483835;
	int64_t x2590 = INT64_MIN;
	int64_t x2591 = INT64_MAX;
	int8_t x2592 = 3;
	volatile int32_t t125 = 710;

    t125 = ((x2589>>(x2590&x2591))>x2592);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x2634 = 1306U;
	uint32_t x2636 = 83958349U;

    t126 = ((x2633>>(x2634&x2635))>x2636);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x2649 = 0;
	int8_t x2650 = -1;
	static uint32_t x2651 = 25U;
	volatile int32_t x2652 = INT32_MIN;
	volatile int32_t t127 = -201;

    t127 = ((x2649>>(x2650&x2651))>x2652);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x2689 = 2151749002262242LL;
	static uint8_t x2690 = 0U;
	static uint8_t x2691 = 8U;
	volatile int32_t x2692 = -622698063;

    t128 = ((x2689>>(x2690&x2691))>x2692);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x2693 = 24U;
	static volatile int32_t x2695 = INT32_MIN;
	int64_t x2696 = INT64_MIN;
	volatile int32_t t129 = 0;

    t129 = ((x2693>>(x2694&x2695))>x2696);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int32_t x2699 = INT32_MIN;
	volatile int64_t x2700 = INT64_MAX;
	int32_t t130 = 17021;

    t130 = ((x2697>>(x2698&x2699))>x2700);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x2717 = INT64_MAX;
	int16_t x2718 = INT16_MIN;
	volatile uint8_t x2719 = 32U;
	static int64_t x2720 = INT64_MIN;
	volatile int32_t t131 = 7733101;

    t131 = ((x2717>>(x2718&x2719))>x2720);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x2769 = UINT32_MAX;
	uint32_t x2770 = 899282U;
	uint8_t x2771 = 1U;
	static volatile int16_t x2772 = INT16_MIN;

    t132 = ((x2769>>(x2770&x2771))>x2772);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x2801 = UINT64_MAX;
	int64_t x2802 = INT64_MIN;
	static volatile uint64_t x2804 = 279495LLU;
	volatile int32_t t133 = -87;

    t133 = ((x2801>>(x2802&x2803))>x2804);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x2809 = 139038784328227LLU;
	int8_t x2810 = 2;
	int16_t x2811 = INT16_MIN;
	int32_t x2812 = INT32_MAX;

    t134 = ((x2809>>(x2810&x2811))>x2812);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x2853 = INT32_MAX;
	int64_t x2854 = INT64_MIN;
	static int8_t x2855 = INT8_MAX;
	static int8_t x2856 = -7;
	volatile int32_t t135 = -496926;

    t135 = ((x2853>>(x2854&x2855))>x2856);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x2858 = UINT16_MAX;
	static volatile int64_t x2859 = INT64_MIN;
	volatile int32_t t136 = 1;

    t136 = ((x2857>>(x2858&x2859))>x2860);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x2869 = 562134791U;
	int32_t x2870 = INT32_MIN;
	int64_t x2872 = INT64_MIN;
	int32_t t137 = 0;

    t137 = ((x2869>>(x2870&x2871))>x2872);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x2877 = UINT16_MAX;
	int16_t x2878 = INT16_MIN;
	int8_t x2879 = 1;
	uint64_t x2880 = UINT64_MAX;
	static volatile int32_t t138 = -60743;

    t138 = ((x2877>>(x2878&x2879))>x2880);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x2885 = 27U;
	int16_t x2886 = INT16_MIN;
	uint16_t x2887 = 3U;
	uint16_t x2888 = UINT16_MAX;

    t139 = ((x2885>>(x2886&x2887))>x2888);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x2937 = INT32_MAX;
	uint64_t x2938 = 3LLU;
	int64_t x2939 = INT64_MAX;
	volatile uint8_t x2940 = 1U;
	int32_t t140 = -985208049;

    t140 = ((x2937>>(x2938&x2939))>x2940);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x2970 = 1;
	int32_t x2971 = -2250;
	static int64_t x2972 = 35851966343674233LL;
	volatile int32_t t141 = -1;

    t141 = ((x2969>>(x2970&x2971))>x2972);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x2981 = 107236297039259LLU;
	int8_t x2982 = INT8_MIN;
	static volatile int32_t x2983 = 0;
	int64_t x2984 = INT64_MIN;
	volatile int32_t t142 = -5;

    t142 = ((x2981>>(x2982&x2983))>x2984);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x3005 = 1U;
	uint8_t x3007 = 3U;
	uint16_t x3008 = 55U;

    t143 = ((x3005>>(x3006&x3007))>x3008);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x3013 = UINT8_MAX;
	static int8_t x3014 = 21;
	volatile int32_t t144 = 7724;

    t144 = ((x3013>>(x3014&x3015))>x3016);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x3021 = INT64_MAX;
	static int32_t x3022 = INT32_MIN;
	volatile uint16_t x3023 = 53U;
	int8_t x3024 = INT8_MIN;
	int32_t t145 = 49832;

    t145 = ((x3021>>(x3022&x3023))>x3024);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x3038 = INT64_MIN;
	int64_t x3039 = INT64_MAX;
	int8_t x3040 = -1;
	volatile int32_t t146 = -30;

    t146 = ((x3037>>(x3038&x3039))>x3040);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x3065 = INT8_MAX;
	uint16_t x3066 = 0U;
	uint8_t x3067 = 53U;
	int32_t t147 = -40;

    t147 = ((x3065>>(x3066&x3067))>x3068);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x3069 = 139LLU;
	int16_t x3070 = 0;
	static volatile uint64_t x3071 = UINT64_MAX;
	int16_t x3072 = -1;
	int32_t t148 = -13468949;

    t148 = ((x3069>>(x3070&x3071))>x3072);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x3141 = 493;
	int32_t x3143 = INT32_MAX;
	uint64_t x3144 = 41339LLU;

    t149 = ((x3141>>(x3142&x3143))>x3144);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x3145 = 249668LLU;
	int8_t x3146 = INT8_MIN;
	uint8_t x3147 = 2U;
	int8_t x3148 = -1;

    t150 = ((x3145>>(x3146&x3147))>x3148);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x3149 = 87297U;
	static int8_t x3150 = INT8_MAX;
	int16_t x3151 = INT16_MIN;
	int32_t t151 = -472946;

    t151 = ((x3149>>(x3150&x3151))>x3152);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x3193 = 31LLU;
	volatile uint16_t x3194 = 12U;
	volatile uint32_t x3195 = 2023U;
	volatile int16_t x3196 = 3523;
	volatile int32_t t152 = 4340400;

    t152 = ((x3193>>(x3194&x3195))>x3196);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x3213 = 4113U;
	int8_t x3214 = 0;
	int64_t x3215 = 400916240200988LL;
	int32_t t153 = -1444;

    t153 = ((x3213>>(x3214&x3215))>x3216);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x3219 = UINT8_MAX;
	static int8_t x3220 = INT8_MIN;
	static volatile int32_t t154 = -64854;

    t154 = ((x3217>>(x3218&x3219))>x3220);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x3238 = 9U;
	int32_t x3239 = -1;
	volatile int8_t x3240 = -7;
	int32_t t155 = -14551;

    t155 = ((x3237>>(x3238&x3239))>x3240);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x3269 = 60U;
	uint8_t x3270 = 0U;
	uint8_t x3271 = UINT8_MAX;
	volatile int32_t t156 = 2017;

    t156 = ((x3269>>(x3270&x3271))>x3272);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x3277 = 17;
	uint8_t x3278 = 52U;
	int8_t x3279 = INT8_MIN;
	int64_t x3280 = INT64_MIN;
	volatile int32_t t157 = 86;

    t157 = ((x3277>>(x3278&x3279))>x3280);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x3299 = 0;
	int16_t x3300 = 0;
	volatile int32_t t158 = 40057;

    t158 = ((x3297>>(x3298&x3299))>x3300);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x3305 = 28;
	uint16_t x3307 = UINT16_MAX;
	static int16_t x3308 = -1;
	volatile int32_t t159 = -687944;

    t159 = ((x3305>>(x3306&x3307))>x3308);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x3333 = 882708799995LLU;
	static int32_t x3334 = INT32_MIN;
	static int64_t x3336 = -1LL;
	volatile int32_t t160 = -17051879;

    t160 = ((x3333>>(x3334&x3335))>x3336);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x3341 = 91U;
	uint8_t x3342 = 20U;
	int16_t x3343 = 325;
	volatile int32_t t161 = -16050;

    t161 = ((x3341>>(x3342&x3343))>x3344);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x3345 = 3;
	int16_t x3346 = INT16_MIN;
	volatile uint8_t x3347 = UINT8_MAX;
	int16_t x3348 = INT16_MIN;
	int32_t t162 = 0;

    t162 = ((x3345>>(x3346&x3347))>x3348);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x3349 = UINT16_MAX;
	uint8_t x3350 = 2U;
	static uint16_t x3351 = UINT16_MAX;
	int64_t x3352 = -100LL;
	static int32_t t163 = -255;

    t163 = ((x3349>>(x3350&x3351))>x3352);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x3382 = INT8_MAX;
	uint32_t x3383 = 2U;
	int16_t x3384 = INT16_MIN;
	volatile int32_t t164 = -111;

    t164 = ((x3381>>(x3382&x3383))>x3384);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x3401 = 87302403195LLU;
	int16_t x3402 = 91;
	static int16_t x3404 = -1;
	static volatile int32_t t165 = -383;

    t165 = ((x3401>>(x3402&x3403))>x3404);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x3409 = 29173275LLU;
	int16_t x3410 = 7;
	volatile int8_t x3412 = INT8_MAX;
	volatile int32_t t166 = 697676190;

    t166 = ((x3409>>(x3410&x3411))>x3412);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x3469 = 8707474LL;
	static volatile int32_t x3470 = INT32_MIN;
	static uint16_t x3471 = UINT16_MAX;
	int8_t x3472 = -1;
	int32_t t167 = -18898;

    t167 = ((x3469>>(x3470&x3471))>x3472);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x3485 = 62U;
	uint8_t x3486 = 5U;
	uint32_t x3487 = 2482U;
	uint16_t x3488 = 2725U;

    t168 = ((x3485>>(x3486&x3487))>x3488);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x3497 = 89408U;
	volatile int8_t x3498 = -1;
	uint8_t x3499 = 0U;
	uint32_t x3500 = UINT32_MAX;
	int32_t t169 = 1262;

    t169 = ((x3497>>(x3498&x3499))>x3500);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x3501 = INT16_MAX;
	uint32_t x3503 = 6U;
	int8_t x3504 = INT8_MAX;
	int32_t t170 = -28;

    t170 = ((x3501>>(x3502&x3503))>x3504);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x3505 = 22548U;
	static int16_t x3507 = 672;
	int32_t t171 = -23;

    t171 = ((x3505>>(x3506&x3507))>x3508);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x3518 = 2U;
	uint8_t x3519 = UINT8_MAX;
	uint32_t x3520 = 1U;
	int32_t t172 = 0;

    t172 = ((x3517>>(x3518&x3519))>x3520);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x3529 = UINT16_MAX;
	volatile int16_t x3530 = INT16_MIN;
	int8_t x3531 = 0;

    t173 = ((x3529>>(x3530&x3531))>x3532);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x3545 = UINT64_MAX;
	static volatile int64_t x3546 = -1LL;
	int16_t x3548 = INT16_MAX;
	static volatile int32_t t174 = -4846;

    t174 = ((x3545>>(x3546&x3547))>x3548);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x3561 = INT64_MAX;
	uint8_t x3562 = 1U;
	uint32_t x3563 = UINT32_MAX;
	int32_t x3564 = INT32_MAX;
	volatile int32_t t175 = -2689;

    t175 = ((x3561>>(x3562&x3563))>x3564);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x3565 = UINT32_MAX;
	uint16_t x3566 = 24U;
	int8_t x3567 = INT8_MIN;
	uint16_t x3568 = 4179U;

    t176 = ((x3565>>(x3566&x3567))>x3568);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x3582 = -21;
	uint16_t x3583 = 14U;
	int64_t x3584 = INT64_MIN;
	int32_t t177 = -27417;

    t177 = ((x3581>>(x3582&x3583))>x3584);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x3589 = 2U;
	int8_t x3590 = 0;
	int32_t x3591 = -2043571;
	int64_t x3592 = 109330LL;

    t178 = ((x3589>>(x3590&x3591))>x3592);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x3637 = UINT32_MAX;
	int64_t x3638 = INT64_MAX;
	int64_t x3639 = INT64_MIN;
	int16_t x3640 = INT16_MIN;
	static volatile int32_t t179 = -122124893;

    t179 = ((x3637>>(x3638&x3639))>x3640);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x3645 = 145633520071389654LLU;
	int64_t x3646 = INT64_MIN;
	volatile uint64_t x3647 = 637942LLU;
	static int8_t x3648 = -1;
	static volatile int32_t t180 = 1919;

    t180 = ((x3645>>(x3646&x3647))>x3648);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x3650 = 24;
	volatile int16_t x3651 = 237;
	int16_t x3652 = INT16_MAX;
	int32_t t181 = 1;

    t181 = ((x3649>>(x3650&x3651))>x3652);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x3662 = INT32_MIN;
	uint16_t x3663 = UINT16_MAX;
	volatile int64_t x3664 = -6122233775547LL;
	volatile int32_t t182 = -440;

    t182 = ((x3661>>(x3662&x3663))>x3664);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x3669 = UINT8_MAX;
	int8_t x3670 = INT8_MAX;
	int64_t x3671 = INT64_MIN;
	int8_t x3672 = -1;

    t183 = ((x3669>>(x3670&x3671))>x3672);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x3762 = -1;
	uint8_t x3763 = 5U;
	int64_t x3764 = INT64_MIN;
	volatile int32_t t184 = 52102;

    t184 = ((x3761>>(x3762&x3763))>x3764);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x3805 = UINT32_MAX;
	uint8_t x3806 = UINT8_MAX;
	int64_t x3807 = INT64_MIN;
	int16_t x3808 = INT16_MAX;
	volatile int32_t t185 = -86382;

    t185 = ((x3805>>(x3806&x3807))>x3808);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x3810 = 1922U;

    t186 = ((x3809>>(x3810&x3811))>x3812);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x3813 = 1U;
	int8_t x3814 = INT8_MAX;
	uint8_t x3815 = 0U;
	uint32_t x3816 = UINT32_MAX;
	volatile int32_t t187 = -33049644;

    t187 = ((x3813>>(x3814&x3815))>x3816);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x3833 = 14U;
	int16_t x3834 = INT16_MIN;
	static volatile uint64_t x3836 = UINT64_MAX;

    t188 = ((x3833>>(x3834&x3835))>x3836);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x3839 = 16063U;
	int32_t x3840 = 205;
	volatile int32_t t189 = 25988094;

    t189 = ((x3837>>(x3838&x3839))>x3840);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x3878 = 645;
	int8_t x3879 = INT8_MAX;
	int8_t x3880 = 45;

    t190 = ((x3877>>(x3878&x3879))>x3880);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x3913 = 30987U;
	uint32_t x3914 = 4U;
	int16_t x3915 = 30;
	uint8_t x3916 = 8U;
	volatile int32_t t191 = -19;

    t191 = ((x3913>>(x3914&x3915))>x3916);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x3926 = -1;
	int8_t x3927 = 23;
	volatile int16_t x3928 = 3;
	volatile int32_t t192 = 16;

    t192 = ((x3925>>(x3926&x3927))>x3928);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x3933 = UINT16_MAX;
	uint16_t x3934 = UINT16_MAX;
	uint8_t x3936 = 13U;
	int32_t t193 = -495;

    t193 = ((x3933>>(x3934&x3935))>x3936);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x3945 = INT16_MAX;
	static int64_t x3947 = INT64_MIN;
	static int32_t x3948 = -1;
	int32_t t194 = -919359112;

    t194 = ((x3945>>(x3946&x3947))>x3948);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x4009 = 50088840480LL;
	static uint16_t x4010 = 6772U;
	int32_t x4011 = INT32_MIN;
	int64_t x4012 = INT64_MAX;

    t195 = ((x4009>>(x4010&x4011))>x4012);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x4017 = 4339823U;
	int32_t x4018 = INT32_MAX;
	int32_t x4019 = INT32_MIN;
	int16_t x4020 = -1;
	int32_t t196 = 1101136;

    t196 = ((x4017>>(x4018&x4019))>x4020);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x4049 = UINT16_MAX;
	int8_t x4050 = 13;
	volatile uint32_t x4051 = UINT32_MAX;
	volatile int64_t x4052 = INT64_MIN;
	volatile int32_t t197 = 9022;

    t197 = ((x4049>>(x4050&x4051))>x4052);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x4061 = 0U;
	static volatile int64_t x4062 = INT64_MIN;
	uint16_t x4063 = 12U;
	int32_t x4064 = INT32_MIN;
	static volatile int32_t t198 = -16;

    t198 = ((x4061>>(x4062&x4063))>x4064);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x4097 = 31U;
	volatile int32_t x4098 = INT32_MIN;
	int16_t x4099 = INT16_MAX;
	int16_t x4100 = 294;
	volatile int32_t t199 = -14179;

    t199 = ((x4097>>(x4098&x4099))>x4100);

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

