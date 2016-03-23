
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

static volatile int16_t x89 = -754;
volatile int32_t t4 = 57997773;
volatile int32_t t5 = -5399;
int32_t t6 = -2;
int64_t x174 = 1LL;
static uint32_t x176 = 14U;
static int16_t x197 = -1;
int8_t x200 = 0;
int16_t x215 = INT16_MIN;
static uint64_t x282 = 522309126604LLU;
uint8_t x284 = 2U;
uint8_t x356 = 26U;
int8_t x485 = -3;
int64_t x487 = -123532506899848LL;
int32_t t18 = 0;
static volatile uint8_t x628 = 1U;
int16_t x677 = -1;
static int32_t x679 = 136272;
volatile int32_t t23 = 838789;
volatile uint16_t x777 = UINT16_MAX;
int8_t x841 = INT8_MAX;
static uint64_t x843 = UINT64_MAX;
int32_t x942 = INT32_MIN;
int32_t t29 = -33476175;
static int16_t x967 = INT16_MAX;
volatile int32_t t30 = 762;
int8_t x978 = INT8_MAX;
uint8_t x1017 = UINT8_MAX;
int32_t t33 = 190;
uint16_t x1030 = UINT16_MAX;
int16_t x1031 = INT16_MIN;
int16_t x1093 = -1;
int16_t x1107 = INT16_MIN;
uint8_t x1215 = 1U;
volatile int32_t t38 = -73;
int64_t x1283 = INT64_MIN;
int32_t x1362 = -1;
int8_t x1449 = -31;
int32_t t42 = 3;
volatile uint16_t x1478 = 59U;
volatile uint64_t x1479 = 16923983904LLU;
uint32_t x1497 = 42767212U;
uint16_t x1500 = 23U;
volatile int32_t t46 = -1831;
volatile int32_t t47 = -412019811;
int16_t x1567 = -5;
uint8_t x1642 = 5U;
volatile uint64_t x1678 = 273LLU;
static int16_t x1758 = INT16_MIN;
volatile int32_t t52 = 110;
int16_t x1852 = 1;
volatile int32_t t55 = 58674587;
int8_t x1947 = INT8_MIN;
int8_t x1953 = INT8_MIN;
uint64_t x2018 = 286524418LLU;
volatile int32_t t58 = 31;
static int64_t x2175 = INT64_MIN;
int32_t t61 = -61;
uint16_t x2183 = 24904U;
static int8_t x2269 = INT8_MAX;
int16_t x2270 = -1;
static int32_t x2326 = -1;
uint32_t x2355 = UINT32_MAX;
int32_t t68 = 38;
int32_t x2389 = INT32_MAX;
int64_t x2409 = INT64_MIN;
static int64_t x2410 = INT64_MAX;
uint8_t x2432 = 1U;
volatile int32_t t72 = 407;
static int8_t x2455 = INT8_MIN;
int16_t x2485 = -1;
uint8_t x2488 = 7U;
static int8_t x2493 = 2;
volatile uint32_t x2507 = 12U;
int32_t x2557 = INT32_MIN;
int32_t x2561 = -1;
static uint32_t x2563 = 1716953410U;
static int16_t x2564 = 3;
int8_t x2597 = INT8_MIN;
static int8_t x2599 = 6;
int32_t t79 = -60937;
volatile int32_t t82 = 441389839;
uint32_t x2685 = 1790U;
static int32_t t84 = 18723103;
int8_t x2693 = 1;
int16_t x2694 = 934;
volatile uint32_t x2696 = 1U;
int32_t x2715 = INT32_MIN;
uint16_t x2716 = 9U;
uint8_t x2774 = 7U;
static int64_t x2785 = INT64_MIN;
static int32_t t89 = -766;
int32_t x2925 = INT32_MIN;
int64_t x2926 = -1LL;
int64_t x2927 = -1LL;
volatile int32_t x2982 = -1;
uint32_t x2984 = 26U;
uint16_t x3084 = 7U;
int64_t x3123 = 776421700720878LL;
volatile int32_t t96 = 9;
static uint8_t x3143 = 6U;
uint8_t x3190 = UINT8_MAX;
int16_t x3192 = 1;
int16_t x3193 = INT16_MAX;
volatile int16_t x3195 = -1593;
static uint64_t x3196 = 1LLU;
volatile int32_t t99 = 1884333;
int32_t x3223 = INT32_MIN;
int32_t x3289 = INT32_MIN;
int32_t x3290 = -1;
volatile uint32_t x3292 = 25U;
volatile uint32_t x3320 = 2U;
int32_t x3401 = -1;
static int8_t x3413 = INT8_MIN;
volatile int32_t t106 = 658514459;
volatile uint8_t x3456 = 2U;
static int32_t t108 = 26358259;
uint32_t x3465 = UINT32_MAX;
int8_t x3466 = 12;
int32_t t110 = -6881;
int8_t x3493 = INT8_MAX;
int32_t x3521 = INT32_MIN;
uint8_t x3524 = 30U;
static int32_t t113 = 3;
int8_t x3615 = 12;
uint16_t x3689 = 40U;
static int32_t x3714 = -3;
int64_t x3716 = 31LL;
static uint8_t x3724 = 1U;
uint8_t x3747 = 67U;
volatile int64_t x3814 = -1LL;
uint8_t x3866 = UINT8_MAX;
uint8_t x3868 = 3U;
static int32_t t126 = -183;
volatile int32_t t127 = -494;
uint16_t x3976 = 10U;
int8_t x3978 = -1;
int32_t x4009 = INT32_MIN;
int8_t x4046 = -45;
int32_t t133 = -609943066;
int32_t x4139 = INT32_MIN;
volatile uint8_t x4140 = 5U;
static int64_t x4173 = -1LL;
volatile uint16_t x4174 = 363U;
static uint64_t x4226 = 123509LLU;
int8_t x4228 = 4;
int64_t x4237 = INT64_MIN;
int32_t x4239 = -581023039;
volatile uint8_t x4240 = 13U;
static uint32_t x4375 = 473305U;
volatile int32_t t142 = -27795;
uint32_t x4385 = UINT32_MAX;
int8_t x4481 = INT8_MAX;
int8_t x4482 = INT8_MAX;
uint64_t x4502 = UINT64_MAX;
uint16_t x4503 = UINT16_MAX;
int16_t x4514 = -15;
int8_t x4515 = 3;
uint32_t x4529 = UINT32_MAX;
int32_t x4530 = INT32_MIN;
volatile int8_t x4553 = -1;
int32_t x4556 = 1;
static int32_t t152 = 27435801;
uint8_t x4587 = UINT8_MAX;
uint8_t x4664 = 1U;
static uint64_t x4669 = UINT64_MAX;
static volatile int16_t x4670 = INT16_MIN;
int32_t x4679 = INT32_MIN;
volatile int32_t t157 = 474;
int64_t x4682 = INT64_MIN;
int8_t x4702 = -7;
static int16_t x4704 = 0;
int16_t x4723 = INT16_MIN;
static int8_t x4814 = -27;
volatile int32_t t163 = 1283908;
volatile int8_t x4835 = INT8_MAX;
int8_t x4950 = INT8_MAX;
uint8_t x5123 = 11U;
int32_t x5142 = -778;
volatile int32_t x5144 = 0;
volatile int16_t x5150 = INT16_MIN;
int64_t x5151 = 0LL;
volatile int64_t x5181 = 222112LL;
int16_t x5182 = INT16_MIN;
static uint16_t x5357 = 7U;
uint8_t x5362 = UINT8_MAX;
uint32_t x5481 = UINT32_MAX;
static uint64_t x5542 = UINT64_MAX;
int8_t x5553 = INT8_MAX;
uint32_t x5556 = 3U;
volatile uint8_t x5592 = 4U;
int32_t t187 = -868971425;
static uint32_t x5596 = 14U;
int16_t x5601 = 2;
int8_t x5602 = -31;
int32_t t189 = -1;
volatile int32_t t190 = 2;
static int32_t x5673 = INT32_MIN;
uint32_t x5675 = 10U;
uint16_t x5676 = 9U;
int32_t t191 = 152138447;
uint16_t x5693 = 119U;
uint8_t x5764 = 27U;
uint16_t x5832 = 14U;
volatile int32_t t194 = -1;
int8_t x5860 = 28;
int32_t t196 = 195034;
volatile int8_t x5909 = 1;
int32_t t197 = -766;
static uint8_t x5974 = 9U;
static uint16_t x5975 = UINT16_MAX;


void f0(void) {
    	int64_t x17 = INT64_MIN;
	uint16_t x18 = 555U;
	static uint8_t x19 = UINT8_MAX;
	int16_t x20 = 28;
	volatile int32_t t0 = -54637462;

    t0 = (((x17!=x18)==x19)<<x20);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x73 = 4U;
	int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MAX;
	uint16_t x76 = 1U;
	volatile int32_t t1 = 119438022;

    t1 = (((x73!=x74)==x75)<<x76);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	int8_t x79 = 14;
	int8_t x80 = 26;
	volatile int32_t t2 = 2380;

    t2 = (((x77!=x78)==x79)<<x80);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x90 = INT32_MIN;
	static int16_t x91 = -1;
	uint8_t x92 = 4U;
	int32_t t3 = 369779;

    t3 = (((x89!=x90)==x91)<<x92);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x129 = INT64_MAX;
	static int8_t x130 = -1;
	static int64_t x131 = -4234353698LL;
	volatile int64_t x132 = 7LL;

    t4 = (((x129!=x130)==x131)<<x132);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x133 = INT16_MAX;
	volatile uint64_t x134 = 1409102903584LLU;
	uint8_t x135 = 32U;
	int8_t x136 = 1;

    t5 = (((x133!=x134)==x135)<<x136);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x137 = 6U;
	uint16_t x138 = 8254U;
	static uint64_t x139 = 10100101547559LLU;
	static int16_t x140 = 30;

    t6 = (((x137!=x138)==x139)<<x140);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x169 = INT32_MAX;
	static volatile int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	static uint16_t x172 = 1U;
	volatile int32_t t7 = 223711;

    t7 = (((x169!=x170)==x171)<<x172);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x173 = -1LL;
	int8_t x175 = INT8_MAX;
	int32_t t8 = -12199;

    t8 = (((x173!=x174)==x175)<<x176);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x198 = 96U;
	uint8_t x199 = 0U;
	volatile int32_t t9 = -1;

    t9 = (((x197!=x198)==x199)<<x200);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x213 = 35U;
	static volatile uint64_t x214 = 277556211903911LLU;
	uint32_t x216 = 23U;
	volatile int32_t t10 = 663;

    t10 = (((x213!=x214)==x215)<<x216);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x229 = INT16_MIN;
	int16_t x230 = INT16_MIN;
	volatile uint8_t x231 = 18U;
	uint32_t x232 = 6U;
	volatile int32_t t11 = -399023;

    t11 = (((x229!=x230)==x231)<<x232);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x281 = INT16_MAX;
	int8_t x283 = INT8_MIN;
	int32_t t12 = 31355104;

    t12 = (((x281!=x282)==x283)<<x284);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x341 = 1U;
	int32_t x342 = -1;
	int64_t x343 = -1LL;
	uint8_t x344 = 9U;
	volatile int32_t t13 = -17826713;

    t13 = (((x341!=x342)==x343)<<x344);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x353 = -1LL;
	int8_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int32_t t14 = -2488;

    t14 = (((x353!=x354)==x355)<<x356);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x381 = 1790027U;
	int64_t x382 = INT64_MIN;
	volatile int64_t x383 = INT64_MAX;
	int16_t x384 = 1;
	volatile int32_t t15 = 6581;

    t15 = (((x381!=x382)==x383)<<x384);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x385 = -1;
	static volatile int8_t x386 = 5;
	static uint32_t x387 = 0U;
	static uint8_t x388 = 3U;
	volatile int32_t t16 = -65375230;

    t16 = (((x385!=x386)==x387)<<x388);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x486 = -117634005760056LL;
	int8_t x488 = 1;
	int32_t t17 = -225524;

    t17 = (((x485!=x486)==x487)<<x488);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x505 = INT32_MAX;
	uint8_t x506 = 1U;
	static int64_t x507 = 215806259452300LL;
	static uint8_t x508 = 16U;

    t18 = (((x505!=x506)==x507)<<x508);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x593 = UINT32_MAX;
	int16_t x594 = -5;
	static int32_t x595 = 122;
	volatile int8_t x596 = 27;
	int32_t t19 = 64276;

    t19 = (((x593!=x594)==x595)<<x596);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x601 = 0U;
	int16_t x602 = -1;
	static int8_t x603 = INT8_MAX;
	int8_t x604 = 0;
	int32_t t20 = 77720;

    t20 = (((x601!=x602)==x603)<<x604);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x625 = 0;
	volatile uint32_t x626 = 45U;
	volatile int32_t x627 = -1;
	int32_t t21 = -749197155;

    t21 = (((x625!=x626)==x627)<<x628);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x678 = 805493790685LL;
	uint16_t x680 = 27U;
	volatile int32_t t22 = -3;

    t22 = (((x677!=x678)==x679)<<x680);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x681 = INT8_MAX;
	uint32_t x682 = 38106U;
	uint64_t x683 = 35334901334663LLU;
	uint16_t x684 = 2U;

    t23 = (((x681!=x682)==x683)<<x684);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x765 = 1U;
	uint32_t x766 = 95U;
	int16_t x767 = -255;
	volatile uint8_t x768 = 17U;
	int32_t t24 = -185366307;

    t24 = (((x765!=x766)==x767)<<x768);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x778 = INT8_MAX;
	static volatile int16_t x779 = INT16_MIN;
	static int8_t x780 = 1;
	int32_t t25 = -1;

    t25 = (((x777!=x778)==x779)<<x780);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x797 = -1;
	static uint64_t x798 = 363658556937126650LLU;
	static volatile uint64_t x799 = 245317467LLU;
	uint8_t x800 = 0U;
	volatile int32_t t26 = 6;

    t26 = (((x797!=x798)==x799)<<x800);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x829 = -529551757LL;
	int8_t x830 = INT8_MAX;
	int64_t x831 = INT64_MAX;
	int8_t x832 = 1;
	int32_t t27 = -4060;

    t27 = (((x829!=x830)==x831)<<x832);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x842 = INT8_MAX;
	volatile int16_t x844 = 7;
	volatile int32_t t28 = 1306161;

    t28 = (((x841!=x842)==x843)<<x844);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x941 = INT32_MAX;
	int32_t x943 = INT32_MIN;
	uint8_t x944 = 18U;

    t29 = (((x941!=x942)==x943)<<x944);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x965 = -1LL;
	static uint64_t x966 = UINT64_MAX;
	volatile uint16_t x968 = 20U;

    t30 = (((x965!=x966)==x967)<<x968);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x977 = 2100847U;
	int16_t x979 = 20;
	int8_t x980 = 3;
	int32_t t31 = -18;

    t31 = (((x977!=x978)==x979)<<x980);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x985 = 35383136;
	int64_t x986 = INT64_MAX;
	int16_t x987 = INT16_MAX;
	static volatile uint16_t x988 = 0U;
	int32_t t32 = 4;

    t32 = (((x985!=x986)==x987)<<x988);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1018 = 48342033725LLU;
	uint16_t x1019 = UINT16_MAX;
	uint8_t x1020 = 0U;

    t33 = (((x1017!=x1018)==x1019)<<x1020);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x1029 = 1106LLU;
	volatile uint64_t x1032 = 5LLU;
	volatile int32_t t34 = 43;

    t34 = (((x1029!=x1030)==x1031)<<x1032);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x1094 = INT64_MIN;
	static volatile uint32_t x1095 = UINT32_MAX;
	static int8_t x1096 = 2;
	int32_t t35 = 2830;

    t35 = (((x1093!=x1094)==x1095)<<x1096);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x1105 = 112341264LL;
	uint64_t x1106 = 8LLU;
	static volatile int16_t x1108 = 15;
	volatile int32_t t36 = 513652;

    t36 = (((x1105!=x1106)==x1107)<<x1108);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x1209 = 6360LL;
	static int32_t x1210 = INT32_MIN;
	int32_t x1211 = 10555165;
	uint8_t x1212 = 17U;
	static int32_t t37 = 9558781;

    t37 = (((x1209!=x1210)==x1211)<<x1212);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x1213 = 1U;
	int8_t x1214 = -1;
	volatile uint16_t x1216 = 0U;

    t38 = (((x1213!=x1214)==x1215)<<x1216);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1281 = INT16_MIN;
	int32_t x1282 = INT32_MAX;
	static int8_t x1284 = 17;
	volatile int32_t t39 = 2;

    t39 = (((x1281!=x1282)==x1283)<<x1284);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x1361 = -1LL;
	static volatile int16_t x1363 = -1644;
	int8_t x1364 = 2;
	static int32_t t40 = -1;

    t40 = (((x1361!=x1362)==x1363)<<x1364);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1450 = -1;
	static int16_t x1451 = 890;
	int64_t x1452 = 30LL;
	volatile int32_t t41 = -309;

    t41 = (((x1449!=x1450)==x1451)<<x1452);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1453 = INT8_MAX;
	volatile int64_t x1454 = 361LL;
	static int8_t x1455 = -1;
	volatile int32_t x1456 = 15;

    t42 = (((x1453!=x1454)==x1455)<<x1456);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x1477 = -1;
	static int16_t x1480 = 29;
	volatile int32_t t43 = 36342;

    t43 = (((x1477!=x1478)==x1479)<<x1480);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x1489 = UINT32_MAX;
	uint32_t x1490 = 1799637040U;
	uint8_t x1491 = 11U;
	int8_t x1492 = 12;
	static int32_t t44 = -430;

    t44 = (((x1489!=x1490)==x1491)<<x1492);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x1498 = 1;
	uint32_t x1499 = 27245942U;
	volatile int32_t t45 = 189;

    t45 = (((x1497!=x1498)==x1499)<<x1500);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x1537 = UINT64_MAX;
	static int32_t x1538 = INT32_MIN;
	int32_t x1539 = -1;
	volatile uint64_t x1540 = 0LLU;

    t46 = (((x1537!=x1538)==x1539)<<x1540);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x1557 = UINT8_MAX;
	int16_t x1558 = -1;
	uint32_t x1559 = 3986003U;
	volatile int64_t x1560 = 2LL;

    t47 = (((x1557!=x1558)==x1559)<<x1560);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1565 = -1;
	int32_t x1566 = -1;
	static uint8_t x1568 = 24U;
	volatile int32_t t48 = -3;

    t48 = (((x1565!=x1566)==x1567)<<x1568);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1641 = -61;
	int8_t x1643 = INT8_MIN;
	int16_t x1644 = 2;
	volatile int32_t t49 = -67958725;

    t49 = (((x1641!=x1642)==x1643)<<x1644);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x1677 = UINT64_MAX;
	int16_t x1679 = INT16_MAX;
	int16_t x1680 = 19;
	int32_t t50 = -1037404;

    t50 = (((x1677!=x1678)==x1679)<<x1680);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x1713 = INT8_MIN;
	int8_t x1714 = -1;
	int8_t x1715 = INT8_MAX;
	uint8_t x1716 = 14U;
	static int32_t t51 = -230;

    t51 = (((x1713!=x1714)==x1715)<<x1716);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1757 = INT64_MIN;
	uint8_t x1759 = 0U;
	static uint8_t x1760 = 1U;

    t52 = (((x1757!=x1758)==x1759)<<x1760);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x1785 = UINT16_MAX;
	static uint32_t x1786 = 15U;
	int16_t x1787 = -1;
	volatile uint16_t x1788 = 0U;
	int32_t t53 = 0;

    t53 = (((x1785!=x1786)==x1787)<<x1788);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x1829 = INT16_MAX;
	uint64_t x1830 = 12223002221LLU;
	static uint16_t x1831 = 10244U;
	static int8_t x1832 = 0;
	static volatile int32_t t54 = 389033;

    t54 = (((x1829!=x1830)==x1831)<<x1832);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x1849 = INT16_MAX;
	volatile int64_t x1850 = 6LL;
	volatile uint16_t x1851 = 1U;

    t55 = (((x1849!=x1850)==x1851)<<x1852);

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x1945 = INT16_MAX;
	int8_t x1946 = INT8_MIN;
	int8_t x1948 = 1;
	int32_t t56 = -2725685;

    t56 = (((x1945!=x1946)==x1947)<<x1948);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x1954 = 728897700LLU;
	int64_t x1955 = -49LL;
	volatile uint8_t x1956 = 4U;
	static volatile int32_t t57 = 710162;

    t57 = (((x1953!=x1954)==x1955)<<x1956);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x2017 = 3U;
	int32_t x2019 = INT32_MAX;
	static int32_t x2020 = 2;

    t58 = (((x2017!=x2018)==x2019)<<x2020);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x2133 = -255823LL;
	uint16_t x2134 = UINT16_MAX;
	int32_t x2135 = 1;
	static volatile uint8_t x2136 = 29U;
	static int32_t t59 = 362818;

    t59 = (((x2133!=x2134)==x2135)<<x2136);

    if (t59 != 536870912) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x2145 = UINT64_MAX;
	uint64_t x2146 = UINT64_MAX;
	uint32_t x2147 = 15U;
	static int8_t x2148 = 0;
	static volatile int32_t t60 = 43356;

    t60 = (((x2145!=x2146)==x2147)<<x2148);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x2173 = -1;
	uint8_t x2174 = UINT8_MAX;
	static uint8_t x2176 = 22U;

    t61 = (((x2173!=x2174)==x2175)<<x2176);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x2181 = INT16_MIN;
	uint64_t x2182 = UINT64_MAX;
	uint8_t x2184 = 1U;
	int32_t t62 = 39765;

    t62 = (((x2181!=x2182)==x2183)<<x2184);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x2217 = INT32_MIN;
	static uint8_t x2218 = 3U;
	int16_t x2219 = INT16_MIN;
	uint16_t x2220 = 0U;
	static int32_t t63 = 94686696;

    t63 = (((x2217!=x2218)==x2219)<<x2220);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x2271 = UINT32_MAX;
	uint16_t x2272 = 0U;
	int32_t t64 = 86858;

    t64 = (((x2269!=x2270)==x2271)<<x2272);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x2317 = UINT64_MAX;
	int64_t x2318 = -5521668LL;
	int64_t x2319 = INT64_MIN;
	uint16_t x2320 = 0U;
	int32_t t65 = 1499372;

    t65 = (((x2317!=x2318)==x2319)<<x2320);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x2325 = -1;
	int64_t x2327 = 831240LL;
	static uint16_t x2328 = 1U;
	static int32_t t66 = -2;

    t66 = (((x2325!=x2326)==x2327)<<x2328);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x2353 = 1;
	int16_t x2354 = 20;
	static volatile int8_t x2356 = 3;
	static int32_t t67 = 35782;

    t67 = (((x2353!=x2354)==x2355)<<x2356);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x2381 = -1;
	uint8_t x2382 = 14U;
	volatile int16_t x2383 = INT16_MIN;
	uint8_t x2384 = 6U;

    t68 = (((x2381!=x2382)==x2383)<<x2384);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x2390 = UINT8_MAX;
	int32_t x2391 = INT32_MIN;
	uint32_t x2392 = 0U;
	volatile int32_t t69 = 25755;

    t69 = (((x2389!=x2390)==x2391)<<x2392);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x2411 = INT32_MIN;
	uint32_t x2412 = 3U;
	int32_t t70 = 15;

    t70 = (((x2409!=x2410)==x2411)<<x2412);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x2429 = INT16_MIN;
	uint64_t x2430 = 1970573133657928LLU;
	int16_t x2431 = INT16_MIN;
	int32_t t71 = 0;

    t71 = (((x2429!=x2430)==x2431)<<x2432);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2433 = INT8_MIN;
	int16_t x2434 = INT16_MAX;
	static volatile int32_t x2435 = -837725;
	volatile uint16_t x2436 = 25U;

    t72 = (((x2433!=x2434)==x2435)<<x2436);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x2453 = -1346141488806LL;
	int32_t x2454 = INT32_MAX;
	static volatile int8_t x2456 = 0;
	int32_t t73 = -175;

    t73 = (((x2453!=x2454)==x2455)<<x2456);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x2486 = INT16_MIN;
	static uint8_t x2487 = 2U;
	volatile int32_t t74 = 31;

    t74 = (((x2485!=x2486)==x2487)<<x2488);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x2494 = UINT8_MAX;
	static volatile uint16_t x2495 = 3U;
	static int8_t x2496 = 0;
	static volatile int32_t t75 = -657480876;

    t75 = (((x2493!=x2494)==x2495)<<x2496);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x2505 = INT8_MIN;
	static volatile uint64_t x2506 = 12200802325518316LLU;
	volatile int8_t x2508 = 20;
	int32_t t76 = 2;

    t76 = (((x2505!=x2506)==x2507)<<x2508);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x2558 = INT16_MAX;
	int8_t x2559 = -1;
	uint8_t x2560 = 25U;
	int32_t t77 = 10922;

    t77 = (((x2557!=x2558)==x2559)<<x2560);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x2562 = INT32_MIN;
	int32_t t78 = 988044;

    t78 = (((x2561!=x2562)==x2563)<<x2564);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x2598 = 713479U;
	int8_t x2600 = 4;

    t79 = (((x2597!=x2598)==x2599)<<x2600);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x2645 = 1U;
	uint16_t x2646 = 2U;
	static uint8_t x2647 = 1U;
	static int16_t x2648 = 7;
	int32_t t80 = 46236756;

    t80 = (((x2645!=x2646)==x2647)<<x2648);

    if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x2649 = 54U;
	int32_t x2650 = INT32_MAX;
	int32_t x2651 = -1;
	int8_t x2652 = 4;
	volatile int32_t t81 = 933041552;

    t81 = (((x2649!=x2650)==x2651)<<x2652);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x2661 = INT8_MAX;
	int32_t x2662 = INT32_MIN;
	volatile uint8_t x2663 = 3U;
	uint8_t x2664 = 14U;

    t82 = (((x2661!=x2662)==x2663)<<x2664);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x2673 = INT32_MIN;
	int16_t x2674 = INT16_MIN;
	static int8_t x2675 = INT8_MIN;
	volatile uint16_t x2676 = 1U;
	static int32_t t83 = 0;

    t83 = (((x2673!=x2674)==x2675)<<x2676);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x2686 = UINT64_MAX;
	static uint64_t x2687 = 835471508LLU;
	int8_t x2688 = 1;

    t84 = (((x2685!=x2686)==x2687)<<x2688);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x2695 = 70U;
	volatile int32_t t85 = 773209;

    t85 = (((x2693!=x2694)==x2695)<<x2696);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x2713 = -1;
	volatile int8_t x2714 = -10;
	static int32_t t86 = -8;

    t86 = (((x2713!=x2714)==x2715)<<x2716);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x2773 = -1;
	volatile int32_t x2775 = 3;
	int8_t x2776 = 6;
	int32_t t87 = -54017;

    t87 = (((x2773!=x2774)==x2775)<<x2776);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x2786 = INT64_MAX;
	volatile uint32_t x2787 = UINT32_MAX;
	int8_t x2788 = 0;
	static volatile int32_t t88 = -103;

    t88 = (((x2785!=x2786)==x2787)<<x2788);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x2841 = INT8_MAX;
	static volatile int16_t x2842 = -4;
	uint64_t x2843 = UINT64_MAX;
	uint8_t x2844 = 0U;

    t89 = (((x2841!=x2842)==x2843)<<x2844);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x2928 = 14;
	static int32_t t90 = 141372;

    t90 = (((x2925!=x2926)==x2927)<<x2928);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x2981 = UINT64_MAX;
	int32_t x2983 = INT32_MAX;
	int32_t t91 = 413397995;

    t91 = (((x2981!=x2982)==x2983)<<x2984);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x3081 = UINT16_MAX;
	static int8_t x3082 = INT8_MIN;
	static uint32_t x3083 = 1U;
	volatile int32_t t92 = -23082;

    t92 = (((x3081!=x3082)==x3083)<<x3084);

    if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x3089 = INT8_MIN;
	int64_t x3090 = -1LL;
	uint16_t x3091 = 6U;
	int16_t x3092 = 1;
	static volatile int32_t t93 = -102;

    t93 = (((x3089!=x3090)==x3091)<<x3092);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x3097 = 3U;
	int8_t x3098 = 4;
	int16_t x3099 = INT16_MAX;
	int8_t x3100 = 1;
	static volatile int32_t t94 = -417591273;

    t94 = (((x3097!=x3098)==x3099)<<x3100);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x3105 = -1;
	int8_t x3106 = INT8_MIN;
	static int32_t x3107 = -14;
	uint8_t x3108 = 0U;
	int32_t t95 = 8149736;

    t95 = (((x3105!=x3106)==x3107)<<x3108);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x3121 = INT32_MIN;
	uint64_t x3122 = UINT64_MAX;
	volatile int32_t x3124 = 0;

    t96 = (((x3121!=x3122)==x3123)<<x3124);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x3141 = UINT64_MAX;
	uint16_t x3142 = 24842U;
	uint16_t x3144 = 21U;
	int32_t t97 = -4;

    t97 = (((x3141!=x3142)==x3143)<<x3144);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x3189 = -1LL;
	int32_t x3191 = INT32_MAX;
	int32_t t98 = 0;

    t98 = (((x3189!=x3190)==x3191)<<x3192);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x3194 = INT8_MIN;

    t99 = (((x3193!=x3194)==x3195)<<x3196);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x3221 = 2554680LLU;
	int32_t x3222 = INT32_MIN;
	uint8_t x3224 = 8U;
	static int32_t t100 = 977035155;

    t100 = (((x3221!=x3222)==x3223)<<x3224);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x3291 = INT16_MAX;
	int32_t t101 = 889876;

    t101 = (((x3289!=x3290)==x3291)<<x3292);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x3301 = 23U;
	volatile uint8_t x3302 = UINT8_MAX;
	int8_t x3303 = INT8_MIN;
	int8_t x3304 = 12;
	int32_t t102 = -3;

    t102 = (((x3301!=x3302)==x3303)<<x3304);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x3317 = -1;
	uint16_t x3318 = 58U;
	volatile int32_t x3319 = -227580;
	volatile int32_t t103 = -338;

    t103 = (((x3317!=x3318)==x3319)<<x3320);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3349 = -10042;
	uint64_t x3350 = 2071857636779LLU;
	static int32_t x3351 = -1;
	int8_t x3352 = 1;
	static volatile int32_t t104 = -46293;

    t104 = (((x3349!=x3350)==x3351)<<x3352);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x3402 = -4354586839LL;
	int8_t x3403 = INT8_MIN;
	uint8_t x3404 = 18U;
	static volatile int32_t t105 = 7190;

    t105 = (((x3401!=x3402)==x3403)<<x3404);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x3414 = 683242201U;
	static volatile uint16_t x3415 = 51U;
	uint16_t x3416 = 6U;

    t106 = (((x3413!=x3414)==x3415)<<x3416);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x3441 = -1;
	static volatile int16_t x3442 = -1;
	int32_t x3443 = -1;
	static volatile uint64_t x3444 = 10LLU;
	int32_t t107 = 18;

    t107 = (((x3441!=x3442)==x3443)<<x3444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3453 = -1;
	int16_t x3454 = -1;
	int16_t x3455 = -1;

    t108 = (((x3453!=x3454)==x3455)<<x3456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x3457 = -1;
	int32_t x3458 = 5977;
	uint16_t x3459 = UINT16_MAX;
	static int32_t x3460 = 4;
	volatile int32_t t109 = -3362;

    t109 = (((x3457!=x3458)==x3459)<<x3460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x3467 = 23;
	uint8_t x3468 = 2U;

    t110 = (((x3465!=x3466)==x3467)<<x3468);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x3494 = UINT32_MAX;
	uint32_t x3495 = 24614U;
	volatile uint8_t x3496 = 1U;
	int32_t t111 = 551;

    t111 = (((x3493!=x3494)==x3495)<<x3496);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x3522 = INT16_MIN;
	uint32_t x3523 = 35U;
	volatile int32_t t112 = 14;

    t112 = (((x3521!=x3522)==x3523)<<x3524);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x3569 = INT8_MAX;
	static int16_t x3570 = 6384;
	volatile uint8_t x3571 = 3U;
	volatile int16_t x3572 = 1;

    t113 = (((x3569!=x3570)==x3571)<<x3572);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x3613 = INT64_MAX;
	static int64_t x3614 = INT64_MIN;
	volatile uint8_t x3616 = 1U;
	volatile int32_t t114 = -230975879;

    t114 = (((x3613!=x3614)==x3615)<<x3616);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x3690 = 160;
	uint16_t x3691 = UINT16_MAX;
	uint8_t x3692 = 1U;
	static int32_t t115 = 12767;

    t115 = (((x3689!=x3690)==x3691)<<x3692);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x3697 = 11;
	static int16_t x3698 = 1111;
	int64_t x3699 = 248054820LL;
	volatile uint8_t x3700 = 14U;
	volatile int32_t t116 = -7;

    t116 = (((x3697!=x3698)==x3699)<<x3700);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x3713 = UINT32_MAX;
	uint64_t x3715 = UINT64_MAX;
	volatile int32_t t117 = 46130687;

    t117 = (((x3713!=x3714)==x3715)<<x3716);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x3721 = 52;
	static int8_t x3722 = 26;
	int64_t x3723 = -25LL;
	int32_t t118 = -1475;

    t118 = (((x3721!=x3722)==x3723)<<x3724);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x3745 = INT16_MIN;
	int8_t x3746 = INT8_MIN;
	int8_t x3748 = 3;
	int32_t t119 = -874696;

    t119 = (((x3745!=x3746)==x3747)<<x3748);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x3789 = -1;
	static int64_t x3790 = -1LL;
	uint64_t x3791 = UINT64_MAX;
	volatile uint8_t x3792 = 6U;
	volatile int32_t t120 = 978;

    t120 = (((x3789!=x3790)==x3791)<<x3792);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x3805 = INT8_MIN;
	static int8_t x3806 = 27;
	uint16_t x3807 = UINT16_MAX;
	static uint16_t x3808 = 2U;
	volatile int32_t t121 = 10471672;

    t121 = (((x3805!=x3806)==x3807)<<x3808);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x3813 = -1;
	static uint32_t x3815 = UINT32_MAX;
	volatile int32_t x3816 = 30;
	volatile int32_t t122 = -796;

    t122 = (((x3813!=x3814)==x3815)<<x3816);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x3825 = INT32_MAX;
	static int16_t x3826 = INT16_MAX;
	int32_t x3827 = INT32_MAX;
	int8_t x3828 = 5;
	int32_t t123 = 11;

    t123 = (((x3825!=x3826)==x3827)<<x3828);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x3861 = -12;
	volatile uint64_t x3862 = UINT64_MAX;
	volatile int8_t x3863 = INT8_MAX;
	int32_t x3864 = 1;
	volatile int32_t t124 = 1;

    t124 = (((x3861!=x3862)==x3863)<<x3864);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x3865 = -14547636LL;
	int8_t x3867 = INT8_MAX;
	int32_t t125 = 2601750;

    t125 = (((x3865!=x3866)==x3867)<<x3868);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x3873 = INT8_MIN;
	int8_t x3874 = INT8_MIN;
	static int16_t x3875 = INT16_MIN;
	volatile int8_t x3876 = 30;

    t126 = (((x3873!=x3874)==x3875)<<x3876);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x3877 = 1;
	int64_t x3878 = -1LL;
	int32_t x3879 = INT32_MIN;
	static int8_t x3880 = 1;

    t127 = (((x3877!=x3878)==x3879)<<x3880);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x3937 = 203LL;
	int16_t x3938 = -1;
	uint32_t x3939 = UINT32_MAX;
	int8_t x3940 = 4;
	volatile int32_t t128 = 51;

    t128 = (((x3937!=x3938)==x3939)<<x3940);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x3973 = UINT16_MAX;
	static uint16_t x3974 = 2U;
	int16_t x3975 = -114;
	int32_t t129 = -268;

    t129 = (((x3973!=x3974)==x3975)<<x3976);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x3977 = INT16_MAX;
	int8_t x3979 = INT8_MIN;
	uint16_t x3980 = 2U;
	int32_t t130 = 313606;

    t130 = (((x3977!=x3978)==x3979)<<x3980);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x4010 = -1;
	uint16_t x4011 = UINT16_MAX;
	uint32_t x4012 = 0U;
	volatile int32_t t131 = -405594381;

    t131 = (((x4009!=x4010)==x4011)<<x4012);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x4045 = 0;
	volatile uint64_t x4047 = UINT64_MAX;
	uint16_t x4048 = 12U;
	int32_t t132 = -1055;

    t132 = (((x4045!=x4046)==x4047)<<x4048);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x4053 = 1876926730U;
	int64_t x4054 = INT64_MAX;
	int64_t x4055 = -34170303509853780LL;
	static uint16_t x4056 = 15U;

    t133 = (((x4053!=x4054)==x4055)<<x4056);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x4137 = -1LL;
	int16_t x4138 = 6;
	static int32_t t134 = 7;

    t134 = (((x4137!=x4138)==x4139)<<x4140);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x4175 = INT32_MAX;
	static uint32_t x4176 = 29U;
	int32_t t135 = -22;

    t135 = (((x4173!=x4174)==x4175)<<x4176);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x4209 = 942LLU;
	int16_t x4210 = INT16_MIN;
	uint8_t x4211 = 0U;
	int64_t x4212 = 7LL;
	int32_t t136 = 4;

    t136 = (((x4209!=x4210)==x4211)<<x4212);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x4225 = -351529524LL;
	static uint32_t x4227 = 676146024U;
	volatile int32_t t137 = -15;

    t137 = (((x4225!=x4226)==x4227)<<x4228);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x4238 = -1LL;
	volatile int32_t t138 = -15922;

    t138 = (((x4237!=x4238)==x4239)<<x4240);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x4273 = UINT64_MAX;
	int16_t x4274 = INT16_MIN;
	static volatile int16_t x4275 = INT16_MIN;
	volatile uint16_t x4276 = 6U;
	int32_t t139 = 0;

    t139 = (((x4273!=x4274)==x4275)<<x4276);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x4365 = 178464598U;
	uint64_t x4366 = 39LLU;
	uint8_t x4367 = 0U;
	int16_t x4368 = 1;
	volatile int32_t t140 = -2;

    t140 = (((x4365!=x4366)==x4367)<<x4368);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x4373 = 0U;
	static int16_t x4374 = INT16_MIN;
	static int32_t x4376 = 6;
	static int32_t t141 = 55710444;

    t141 = (((x4373!=x4374)==x4375)<<x4376);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x4381 = -1LL;
	static uint32_t x4382 = UINT32_MAX;
	volatile int8_t x4383 = INT8_MIN;
	static volatile int8_t x4384 = 2;

    t142 = (((x4381!=x4382)==x4383)<<x4384);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x4386 = -1;
	int64_t x4387 = -220300LL;
	uint8_t x4388 = 1U;
	volatile int32_t t143 = -1560921;

    t143 = (((x4385!=x4386)==x4387)<<x4388);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x4457 = 24347LL;
	static int8_t x4458 = INT8_MIN;
	uint32_t x4459 = 249868225U;
	int8_t x4460 = 4;
	volatile int32_t t144 = -38383;

    t144 = (((x4457!=x4458)==x4459)<<x4460);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x4483 = UINT32_MAX;
	volatile int16_t x4484 = 0;
	volatile int32_t t145 = 25434;

    t145 = (((x4481!=x4482)==x4483)<<x4484);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x4501 = 2;
	int8_t x4504 = 5;
	volatile int32_t t146 = -1050026;

    t146 = (((x4501!=x4502)==x4503)<<x4504);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x4513 = -1;
	static int32_t x4516 = 2;
	static volatile int32_t t147 = 15;

    t147 = (((x4513!=x4514)==x4515)<<x4516);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x4521 = INT32_MAX;
	int16_t x4522 = INT16_MIN;
	volatile int8_t x4523 = -1;
	static uint8_t x4524 = 11U;
	int32_t t148 = 0;

    t148 = (((x4521!=x4522)==x4523)<<x4524);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x4531 = -1LL;
	uint8_t x4532 = 1U;
	static volatile int32_t t149 = 0;

    t149 = (((x4529!=x4530)==x4531)<<x4532);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x4554 = INT16_MAX;
	uint32_t x4555 = 4611U;
	volatile int32_t t150 = -122;

    t150 = (((x4553!=x4554)==x4555)<<x4556);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x4573 = INT8_MIN;
	int64_t x4574 = -2517971566LL;
	static uint64_t x4575 = UINT64_MAX;
	static uint64_t x4576 = 19LLU;
	volatile int32_t t151 = 8117281;

    t151 = (((x4573!=x4574)==x4575)<<x4576);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x4577 = -20;
	uint8_t x4578 = 15U;
	int16_t x4579 = INT16_MIN;
	static int32_t x4580 = 1;

    t152 = (((x4577!=x4578)==x4579)<<x4580);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x4585 = 53;
	uint32_t x4586 = 68186U;
	static uint8_t x4588 = 2U;
	volatile int32_t t153 = -3645139;

    t153 = (((x4585!=x4586)==x4587)<<x4588);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x4617 = UINT64_MAX;
	volatile int32_t x4618 = 196157610;
	int16_t x4619 = 7;
	uint16_t x4620 = 1U;
	int32_t t154 = 1;

    t154 = (((x4617!=x4618)==x4619)<<x4620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x4661 = INT16_MIN;
	static uint8_t x4662 = UINT8_MAX;
	volatile int16_t x4663 = -1;
	static volatile int32_t t155 = -129641;

    t155 = (((x4661!=x4662)==x4663)<<x4664);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x4671 = INT16_MIN;
	static uint8_t x4672 = 24U;
	int32_t t156 = 8;

    t156 = (((x4669!=x4670)==x4671)<<x4672);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x4677 = 2018LL;
	int64_t x4678 = INT64_MIN;
	static int32_t x4680 = 0;

    t157 = (((x4677!=x4678)==x4679)<<x4680);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x4681 = 7U;
	int64_t x4683 = INT64_MAX;
	static int8_t x4684 = 7;
	int32_t t158 = 3;

    t158 = (((x4681!=x4682)==x4683)<<x4684);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x4693 = 117175U;
	int64_t x4694 = -1LL;
	volatile uint8_t x4695 = UINT8_MAX;
	static volatile uint8_t x4696 = 14U;
	int32_t t159 = 11;

    t159 = (((x4693!=x4694)==x4695)<<x4696);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x4701 = INT64_MIN;
	uint64_t x4703 = 1LLU;
	volatile int32_t t160 = -1358;

    t160 = (((x4701!=x4702)==x4703)<<x4704);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x4721 = UINT64_MAX;
	static volatile int8_t x4722 = INT8_MIN;
	uint8_t x4724 = 2U;
	volatile int32_t t161 = -1;

    t161 = (((x4721!=x4722)==x4723)<<x4724);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x4785 = UINT32_MAX;
	int32_t x4786 = INT32_MIN;
	static int32_t x4787 = INT32_MAX;
	uint16_t x4788 = 22U;
	volatile int32_t t162 = -779031893;

    t162 = (((x4785!=x4786)==x4787)<<x4788);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x4813 = -1;
	int32_t x4815 = INT32_MIN;
	int16_t x4816 = 8;

    t163 = (((x4813!=x4814)==x4815)<<x4816);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x4833 = -1;
	static int64_t x4834 = INT64_MAX;
	volatile uint16_t x4836 = 28U;
	volatile int32_t t164 = -1;

    t164 = (((x4833!=x4834)==x4835)<<x4836);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint8_t x4949 = 1U;
	int16_t x4951 = INT16_MAX;
	int8_t x4952 = 0;
	volatile int32_t t165 = 81;

    t165 = (((x4949!=x4950)==x4951)<<x4952);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x4969 = INT64_MAX;
	int64_t x4970 = -1LL;
	volatile uint16_t x4971 = 665U;
	uint8_t x4972 = 1U;
	volatile int32_t t166 = -933;

    t166 = (((x4969!=x4970)==x4971)<<x4972);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x4981 = -1;
	int64_t x4982 = 19LL;
	int32_t x4983 = INT32_MAX;
	int8_t x4984 = 8;
	volatile int32_t t167 = -4500;

    t167 = (((x4981!=x4982)==x4983)<<x4984);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x5029 = -1;
	uint32_t x5030 = 0U;
	uint16_t x5031 = UINT16_MAX;
	volatile int8_t x5032 = 1;
	volatile int32_t t168 = 26021;

    t168 = (((x5029!=x5030)==x5031)<<x5032);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x5065 = -1;
	static volatile int64_t x5066 = INT64_MAX;
	int8_t x5067 = INT8_MIN;
	uint16_t x5068 = 20U;
	int32_t t169 = -4445;

    t169 = (((x5065!=x5066)==x5067)<<x5068);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x5097 = INT64_MIN;
	int8_t x5098 = -1;
	volatile int16_t x5099 = INT16_MAX;
	uint64_t x5100 = 15LLU;
	int32_t t170 = -39302769;

    t170 = (((x5097!=x5098)==x5099)<<x5100);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x5121 = 504879;
	volatile uint16_t x5122 = 972U;
	int16_t x5124 = 0;
	static int32_t t171 = 490843946;

    t171 = (((x5121!=x5122)==x5123)<<x5124);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x5125 = 233U;
	static uint8_t x5126 = UINT8_MAX;
	int64_t x5127 = -6771832LL;
	static uint16_t x5128 = 13U;
	static int32_t t172 = 6;

    t172 = (((x5125!=x5126)==x5127)<<x5128);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x5141 = 148815179;
	int64_t x5143 = -262346894839LL;
	static volatile int32_t t173 = 0;

    t173 = (((x5141!=x5142)==x5143)<<x5144);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x5149 = 10U;
	uint16_t x5152 = 30U;
	volatile int32_t t174 = -9563359;

    t174 = (((x5149!=x5150)==x5151)<<x5152);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x5183 = 24U;
	uint8_t x5184 = 3U;
	int32_t t175 = 240;

    t175 = (((x5181!=x5182)==x5183)<<x5184);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x5249 = INT32_MIN;
	int64_t x5250 = -4056394570796LL;
	int32_t x5251 = 38394092;
	uint64_t x5252 = 10LLU;
	int32_t t176 = -28864277;

    t176 = (((x5249!=x5250)==x5251)<<x5252);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x5329 = 1U;
	static int8_t x5330 = INT8_MAX;
	int8_t x5331 = INT8_MAX;
	uint64_t x5332 = 0LLU;
	int32_t t177 = 29252010;

    t177 = (((x5329!=x5330)==x5331)<<x5332);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x5341 = 186;
	int16_t x5342 = INT16_MIN;
	static int64_t x5343 = INT64_MIN;
	volatile int32_t x5344 = 0;
	int32_t t178 = -19;

    t178 = (((x5341!=x5342)==x5343)<<x5344);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x5358 = 1;
	static int32_t x5359 = -30;
	volatile uint8_t x5360 = 1U;
	static volatile int32_t t179 = 116180;

    t179 = (((x5357!=x5358)==x5359)<<x5360);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x5361 = INT16_MIN;
	uint8_t x5363 = UINT8_MAX;
	uint16_t x5364 = 0U;
	int32_t t180 = 2;

    t180 = (((x5361!=x5362)==x5363)<<x5364);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x5405 = UINT8_MAX;
	int64_t x5406 = INT64_MIN;
	uint32_t x5407 = UINT32_MAX;
	int16_t x5408 = 1;
	volatile int32_t t181 = -626745987;

    t181 = (((x5405!=x5406)==x5407)<<x5408);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x5433 = 652U;
	uint32_t x5434 = UINT32_MAX;
	int32_t x5435 = INT32_MIN;
	int8_t x5436 = 0;
	static volatile int32_t t182 = -3;

    t182 = (((x5433!=x5434)==x5435)<<x5436);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x5482 = -666654;
	int16_t x5483 = -6152;
	static uint8_t x5484 = 3U;
	int32_t t183 = -64577;

    t183 = (((x5481!=x5482)==x5483)<<x5484);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x5489 = 1473371260LLU;
	static uint32_t x5490 = 55U;
	int16_t x5491 = INT16_MAX;
	uint8_t x5492 = 5U;
	volatile int32_t t184 = -103;

    t184 = (((x5489!=x5490)==x5491)<<x5492);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x5541 = -12;
	static uint32_t x5543 = 15501U;
	int32_t x5544 = 0;
	volatile int32_t t185 = 27;

    t185 = (((x5541!=x5542)==x5543)<<x5544);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x5554 = -33;
	uint64_t x5555 = UINT64_MAX;
	static int32_t t186 = -13;

    t186 = (((x5553!=x5554)==x5555)<<x5556);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x5589 = 3773426U;
	int64_t x5590 = -13LL;
	int16_t x5591 = -1;

    t187 = (((x5589!=x5590)==x5591)<<x5592);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x5593 = -1110;
	uint16_t x5594 = UINT16_MAX;
	volatile int64_t x5595 = INT64_MAX;
	static int32_t t188 = 460467141;

    t188 = (((x5593!=x5594)==x5595)<<x5596);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x5603 = INT16_MAX;
	int8_t x5604 = 1;

    t189 = (((x5601!=x5602)==x5603)<<x5604);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x5621 = 20U;
	volatile int64_t x5622 = 8262LL;
	uint32_t x5623 = 18727425U;
	int16_t x5624 = 0;

    t190 = (((x5621!=x5622)==x5623)<<x5624);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x5674 = -427LL;

    t191 = (((x5673!=x5674)==x5675)<<x5676);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x5694 = UINT32_MAX;
	int64_t x5695 = 3417120045LL;
	int16_t x5696 = 2;
	volatile int32_t t192 = -8854977;

    t192 = (((x5693!=x5694)==x5695)<<x5696);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x5761 = -34;
	uint32_t x5762 = 1158U;
	uint16_t x5763 = 7U;
	static int32_t t193 = -303324;

    t193 = (((x5761!=x5762)==x5763)<<x5764);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x5829 = -3;
	volatile int64_t x5830 = 2104410811931020898LL;
	uint64_t x5831 = 1916LLU;

    t194 = (((x5829!=x5830)==x5831)<<x5832);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x5857 = INT16_MIN;
	int16_t x5858 = -4414;
	int16_t x5859 = -1;
	int32_t t195 = 115357;

    t195 = (((x5857!=x5858)==x5859)<<x5860);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x5897 = INT16_MAX;
	int32_t x5898 = -1;
	static int16_t x5899 = INT16_MAX;
	uint16_t x5900 = 0U;

    t196 = (((x5897!=x5898)==x5899)<<x5900);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x5910 = INT16_MIN;
	uint16_t x5911 = 22U;
	static int16_t x5912 = 0;

    t197 = (((x5909!=x5910)==x5911)<<x5912);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x5913 = 0U;
	int64_t x5914 = 49090072149LL;
	int8_t x5915 = 2;
	uint8_t x5916 = 1U;
	volatile int32_t t198 = 2906450;

    t198 = (((x5913!=x5914)==x5915)<<x5916);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x5973 = 4200347U;
	int8_t x5976 = 3;
	static int32_t t199 = -1953;

    t199 = (((x5973!=x5974)==x5975)<<x5976);

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

