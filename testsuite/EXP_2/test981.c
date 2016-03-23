
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

uint16_t x21 = 11641U;
volatile uint16_t x287 = 14U;
static volatile int32_t t4 = -335847646;
uint8_t x381 = UINT8_MAX;
volatile uint64_t x479 = 0LLU;
static uint64_t t6 = 1882LLU;
uint16_t x693 = 1862U;
uint32_t t9 = 939131636U;
uint64_t x746 = 29611768345397LLU;
int64_t x802 = 1012786970883LL;
int32_t t14 = 2;
uint64_t x1261 = 669511366LLU;
int16_t x1262 = 10;
uint64_t t18 = 2936976LLU;
volatile int16_t x1279 = 11;
static int64_t x1285 = 3284549LL;
uint16_t x1287 = 6U;
int32_t t23 = 1;
volatile int32_t x1545 = INT32_MAX;
uint32_t x1548 = 1776U;
static int16_t x1629 = INT16_MIN;
volatile int16_t x1632 = INT16_MIN;
int16_t x1658 = 449;
volatile int8_t x1660 = 0;
volatile int32_t t26 = -1923;
uint16_t x1677 = 2796U;
uint64_t t27 = 201LLU;
volatile int16_t x1747 = 27;
uint16_t x1826 = 1U;
static uint16_t x1827 = 1U;
int16_t x1910 = 296;
static volatile uint16_t x1912 = 644U;
uint64_t x1936 = 753LLU;
int8_t x1978 = INT8_MAX;
volatile int32_t t33 = 53;
static uint8_t x2003 = 2U;
int32_t x2135 = 0;
uint16_t x2136 = 15U;
volatile uint8_t x2591 = 3U;
uint16_t x2592 = UINT16_MAX;
uint8_t x2607 = 1U;
uint16_t x2667 = 1U;
uint8_t x2743 = 7U;
int64_t t41 = 475LL;
volatile int32_t x2826 = 7;
uint32_t x2827 = 7U;
int16_t x2888 = INT16_MAX;
int8_t x3069 = INT8_MIN;
static volatile uint32_t x3072 = 7257108U;
int64_t x3201 = -1LL;
static int16_t x3204 = 280;
int8_t x3224 = -1;
int32_t t50 = -4779814;
uint32_t x3358 = 7831U;
uint8_t x3359 = 10U;
static int64_t x3377 = -1LL;
static volatile int64_t t52 = 598391040258858LL;
static uint8_t x3543 = 2U;
uint32_t x3638 = 71688U;
static int8_t x3640 = -1;
volatile int64_t t54 = 1942578LL;
int8_t x3766 = 14;
uint64_t x3886 = 16LLU;
int8_t x3987 = 1;
static volatile uint64_t x4046 = 839145592LLU;
static uint16_t x4047 = 6U;
volatile uint64_t x4074 = 656370772587454LLU;
volatile uint8_t x4075 = 5U;
uint64_t t65 = 274265LLU;
uint64_t x4122 = 1037475491353461619LLU;
uint32_t x4375 = 3U;
static uint64_t x4378 = 340LLU;
static uint16_t x4432 = 10U;
volatile uint32_t t71 = 119U;
uint8_t x4451 = 63U;
int16_t x4611 = 23;
static volatile uint32_t t74 = 2538U;
uint32_t x4646 = 7961580U;
int16_t x4858 = INT16_MAX;
volatile int32_t x4860 = 42633;
static int64_t x4918 = 41933LL;
uint32_t x4919 = 25U;
uint16_t x4920 = 50U;
int64_t t80 = -6875LL;
static volatile uint16_t x5383 = 1U;
static uint8_t x5409 = 79U;
uint32_t x5411 = 0U;
static uint8_t x5533 = 15U;
uint8_t x5590 = UINT8_MAX;
volatile uint32_t x5591 = 3U;
volatile int16_t x5609 = INT16_MAX;
uint64_t x5778 = UINT64_MAX;
int64_t x5949 = -35130254703LL;
int8_t x5950 = INT8_MAX;
volatile uint64_t t92 = 271237752393359LLU;
int32_t x6238 = INT32_MAX;
volatile int64_t x6489 = 1185876202LL;
static uint32_t x6490 = UINT32_MAX;
int64_t t102 = 2918210853LL;
static int32_t x6541 = INT32_MIN;
uint16_t x6544 = 5425U;
volatile int16_t x6597 = -1;
volatile uint32_t x6598 = 2067926U;
uint32_t t104 = 4205636U;
static int8_t x6637 = -1;
int32_t x6712 = 17;
volatile uint8_t x6998 = UINT8_MAX;
static uint8_t x7195 = 1U;
volatile int8_t x7302 = 29;
int32_t x7414 = INT32_MAX;
int16_t x7415 = 0;
uint64_t t113 = 63LLU;
uint8_t x7534 = 59U;
int32_t t115 = 0;
volatile int16_t x7897 = -1;
volatile uint32_t t117 = 267509465U;
uint16_t x7971 = 13U;


void f0(void) {
    	int64_t x13 = -51324284437979376LL;
	uint64_t x14 = 23LLU;
	uint8_t x15 = 24U;
	int64_t x16 = -1LL;
	volatile uint64_t t0 = 30LLU;

    t0 = ((x13+(x14<<x15))+x16);

    if (t0 != 18395419789657448207LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x22 = INT8_MAX;
	uint8_t x23 = 16U;
	static int8_t x24 = 1;
	int32_t t1 = 2;

    t1 = ((x21+(x22<<x23))+x24);

    if (t1 != 8334714) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x285 = -1LL;
	int32_t x286 = 4;
	volatile uint32_t x288 = UINT32_MAX;
	int64_t t2 = 44858171465LL;

    t2 = ((x285+(x286<<x287))+x288);

    if (t2 != 4295032830LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x357 = 0U;
	static volatile uint16_t x358 = 12613U;
	int16_t x359 = 12;
	static int32_t x360 = -2034354;
	volatile int32_t t3 = -8805560;

    t3 = ((x357+(x358<<x359))+x360);

    if (t3 != 49628494) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x369 = -1;
	int8_t x370 = INT8_MAX;
	volatile uint16_t x371 = 1U;
	volatile uint16_t x372 = 5U;

    t4 = ((x369+(x370<<x371))+x372);

    if (t4 != 258) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x382 = 44U;
	uint32_t x383 = 13U;
	int16_t x384 = INT16_MIN;
	static volatile int32_t t5 = 113;

    t5 = ((x381+(x382<<x383))+x384);

    if (t5 != 327935) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x477 = 242414244747LLU;
	uint32_t x478 = UINT32_MAX;
	uint16_t x480 = UINT16_MAX;

    t6 = ((x477+(x478<<x479))+x480);

    if (t6 != 246709277577LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x645 = INT8_MIN;
	int16_t x646 = INT16_MAX;
	static int8_t x647 = 0;
	uint64_t x648 = 4572428754920317LLU;
	uint64_t t7 = 386876LLU;

    t7 = ((x645+(x646<<x647))+x648);

    if (t7 != 4572428754952956LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x694 = 791869060U;
	int8_t x695 = 3;
	int8_t x696 = 7;
	uint32_t t8 = 337U;

    t8 = ((x693+(x694<<x695))+x696);

    if (t8 != 2039987053U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x697 = 13404;
	uint32_t x698 = 3U;
	uint8_t x699 = 3U;
	int32_t x700 = -28;

    t9 = ((x697+(x698<<x699))+x700);

    if (t9 != 13400U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x717 = INT8_MAX;
	uint8_t x718 = UINT8_MAX;
	static int8_t x719 = 1;
	int16_t x720 = INT16_MAX;
	static int32_t t10 = 6;

    t10 = ((x717+(x718<<x719))+x720);

    if (t10 != 33404) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x745 = INT32_MIN;
	static int8_t x747 = 0;
	int8_t x748 = -5;
	static volatile uint64_t t11 = 3107135337696768LLU;

    t11 = ((x745+(x746<<x747))+x748);

    if (t11 != 29609620861744LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x797 = 962958U;
	uint64_t x798 = 16629616837350LLU;
	int8_t x799 = 7;
	int8_t x800 = -1;
	volatile uint64_t t12 = 183656364355173367LLU;

    t12 = ((x797+(x798<<x799))+x800);

    if (t12 != 2128590956143757LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x801 = INT16_MAX;
	static int8_t x803 = 0;
	static int16_t x804 = -1;
	int64_t t13 = -43004LL;

    t13 = ((x801+(x802<<x803))+x804);

    if (t13 != 1012787003649LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x829 = 182U;
	int16_t x830 = 7;
	uint8_t x831 = 0U;
	int16_t x832 = -18;

    t14 = ((x829+(x830<<x831))+x832);

    if (t14 != 171) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1057 = INT16_MIN;
	uint64_t x1058 = 140807544210973400LLU;
	int32_t x1059 = 0;
	int8_t x1060 = INT8_MAX;
	uint64_t t15 = 20841755LLU;

    t15 = ((x1057+(x1058<<x1059))+x1060);

    if (t15 != 140807544210940759LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1109 = UINT16_MAX;
	static uint32_t x1110 = UINT32_MAX;
	uint8_t x1111 = 5U;
	volatile int64_t x1112 = INT64_MIN;
	static volatile int64_t t16 = 5698484LL;

    t16 = ((x1109+(x1110<<x1111))+x1112);

    if (t16 != -9223372036854710305LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1177 = -1;
	volatile uint64_t x1178 = UINT64_MAX;
	volatile uint32_t x1179 = 0U;
	volatile int64_t x1180 = INT64_MIN;
	volatile uint64_t t17 = 2608759811168595991LLU;

    t17 = ((x1177+(x1178<<x1179))+x1180);

    if (t17 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x1263 = 11U;
	static volatile int8_t x1264 = 3;

    t18 = ((x1261+(x1262<<x1263))+x1264);

    if (t18 != 669531849LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1277 = INT16_MIN;
	uint8_t x1278 = 1U;
	static uint32_t x1280 = 96U;
	volatile uint32_t t19 = 1272628491U;

    t19 = ((x1277+(x1278<<x1279))+x1280);

    if (t19 != 4294936672U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1286 = UINT16_MAX;
	int8_t x1288 = -1;
	static int64_t t20 = -518845340620LL;

    t20 = ((x1285+(x1286<<x1287))+x1288);

    if (t20 != 7478788LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x1381 = UINT16_MAX;
	uint32_t x1382 = 271U;
	static volatile uint8_t x1383 = 1U;
	uint64_t x1384 = 4144317300053238LLU;
	uint64_t t21 = 855164724LLU;

    t21 = ((x1381+(x1382<<x1383))+x1384);

    if (t21 != 4144317300119315LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x1469 = UINT32_MAX;
	int16_t x1470 = 0;
	static uint8_t x1471 = 0U;
	static int8_t x1472 = 1;
	uint32_t t22 = 218035120U;

    t22 = ((x1469+(x1470<<x1471))+x1472);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x1485 = 13893038;
	uint8_t x1486 = 63U;
	int8_t x1487 = 0;
	static int8_t x1488 = -8;

    t23 = ((x1485+(x1486<<x1487))+x1488);

    if (t23 != 13893093) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1546 = 105240037152381LLU;
	static int32_t x1547 = 45;
	volatile uint64_t t24 = 39768910118127LLU;

    t24 = ((x1545+(x1546<<x1547))+x1548);

    if (t24 != 18072839753669019375LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1630 = UINT8_MAX;
	uint8_t x1631 = 0U;
	volatile int32_t t25 = 151497288;

    t25 = ((x1629+(x1630<<x1631))+x1632);

    if (t25 != -65281) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x1657 = -1;
	uint8_t x1659 = 1U;

    t26 = ((x1657+(x1658<<x1659))+x1660);

    if (t26 != 897) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x1678 = 83366662653603049LLU;
	volatile int16_t x1679 = 43;
	int64_t x1680 = -15LL;

    t27 = ((x1677+(x1678<<x1679))+x1680);

    if (t27 != 11486228539468942045LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x1745 = INT64_MIN;
	uint64_t x1746 = UINT64_MAX;
	volatile int64_t x1748 = -382146277226425530LL;
	static volatile uint64_t t28 = 372801967151416602LLU;

    t28 = ((x1745+(x1746<<x1747))+x1748);

    if (t28 != 8841225759494132550LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x1825 = 7979939LL;
	static int32_t x1828 = 8560;
	volatile int64_t t29 = -32084138219395679LL;

    t29 = ((x1825+(x1826<<x1827))+x1828);

    if (t29 != 7988501LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1833 = INT64_MIN;
	int64_t x1834 = 32050LL;
	static uint32_t x1835 = 1U;
	uint16_t x1836 = 0U;
	static volatile int64_t t30 = -135LL;

    t30 = ((x1833+(x1834<<x1835))+x1836);

    if (t30 != -9223372036854711708LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1909 = 2819;
	volatile int8_t x1911 = 1;
	int32_t t31 = -394467210;

    t31 = ((x1909+(x1910<<x1911))+x1912);

    if (t31 != 4055) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x1933 = INT16_MAX;
	uint8_t x1934 = UINT8_MAX;
	static uint16_t x1935 = 5U;
	static volatile uint64_t t32 = 2LLU;

    t32 = ((x1933+(x1934<<x1935))+x1936);

    if (t32 != 41680LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1977 = INT8_MAX;
	volatile uint64_t x1979 = 17LLU;
	int8_t x1980 = INT8_MAX;

    t33 = ((x1977+(x1978<<x1979))+x1980);

    if (t33 != 16646398) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2001 = INT16_MIN;
	uint64_t x2002 = 6212052089591392LLU;
	int32_t x2004 = -1;
	volatile uint64_t t34 = 1714LLU;

    t34 = ((x2001+(x2002<<x2003))+x2004);

    if (t34 != 24848208358332799LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x2133 = UINT32_MAX;
	int8_t x2134 = 1;
	volatile uint32_t t35 = 5548107U;

    t35 = ((x2133+(x2134<<x2135))+x2136);

    if (t35 != 15U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x2233 = -1;
	uint16_t x2234 = UINT16_MAX;
	int16_t x2235 = 0;
	static int16_t x2236 = INT16_MAX;
	volatile int32_t t36 = 51013329;

    t36 = ((x2233+(x2234<<x2235))+x2236);

    if (t36 != 98301) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x2573 = 1326815933U;
	volatile int8_t x2574 = 0;
	int8_t x2575 = 1;
	uint8_t x2576 = 40U;
	uint32_t t37 = 55579U;

    t37 = ((x2573+(x2574<<x2575))+x2576);

    if (t37 != 1326815973U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2589 = -2286;
	uint64_t x2590 = 515603729536302911LLU;
	static uint64_t t38 = 15LLU;

    t38 = ((x2589+(x2590<<x2591))+x2592);

    if (t38 != 4124829836290486537LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x2605 = 76;
	uint64_t x2606 = 1869341126941903097LLU;
	volatile int16_t x2608 = 1182;
	volatile uint64_t t39 = 89423226LLU;

    t39 = ((x2605+(x2606<<x2607))+x2608);

    if (t39 != 3738682253883807452LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2665 = INT32_MIN;
	uint32_t x2666 = UINT32_MAX;
	int8_t x2668 = INT8_MAX;
	volatile uint32_t t40 = 4110231U;

    t40 = ((x2665+(x2666<<x2667))+x2668);

    if (t40 != 2147483773U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x2741 = 8778133;
	uint32_t x2742 = UINT32_MAX;
	int64_t x2744 = INT64_MIN;

    t41 = ((x2741+(x2742<<x2743))+x2744);

    if (t41 != -9223372036845997803LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x2761 = -1;
	int8_t x2762 = INT8_MAX;
	static uint8_t x2763 = 2U;
	static int64_t x2764 = INT64_MIN;
	int64_t t42 = -5384292660008779LL;

    t42 = ((x2761+(x2762<<x2763))+x2764);

    if (t42 != -9223372036854775301LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x2789 = 0;
	uint16_t x2790 = 2U;
	int32_t x2791 = 10;
	int64_t x2792 = -29789953LL;
	volatile int64_t t43 = 619214LL;

    t43 = ((x2789+(x2790<<x2791))+x2792);

    if (t43 != -29787905LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2801 = -33200;
	volatile uint32_t x2802 = UINT32_MAX;
	int8_t x2803 = 1;
	uint32_t x2804 = UINT32_MAX;
	volatile uint32_t t44 = 256546U;

    t44 = ((x2801+(x2802<<x2803))+x2804);

    if (t44 != 4294934093U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2825 = INT64_MIN;
	static volatile uint32_t x2828 = 250425U;
	int64_t t45 = 65305121476132956LL;

    t45 = ((x2825+(x2826<<x2827))+x2828);

    if (t45 != -9223372036854524487LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x2885 = 3U;
	int16_t x2886 = INT16_MAX;
	uint8_t x2887 = 0U;
	int32_t t46 = -3495;

    t46 = ((x2885+(x2886<<x2887))+x2888);

    if (t46 != 65537) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x2981 = UINT32_MAX;
	uint8_t x2982 = 54U;
	uint8_t x2983 = 0U;
	uint32_t x2984 = 7520829U;
	volatile uint32_t t47 = 75818161U;

    t47 = ((x2981+(x2982<<x2983))+x2984);

    if (t47 != 7520882U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x3070 = INT8_MAX;
	uint8_t x3071 = 0U;
	uint32_t t48 = 19452320U;

    t48 = ((x3069+(x3070<<x3071))+x3072);

    if (t48 != 7257107U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x3202 = 15U;
	uint16_t x3203 = 2U;
	int64_t t49 = 2209LL;

    t49 = ((x3201+(x3202<<x3203))+x3204);

    if (t49 != 339LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x3221 = INT32_MIN;
	static volatile uint16_t x3222 = 38U;
	volatile uint16_t x3223 = 5U;

    t50 = ((x3221+(x3222<<x3223))+x3224);

    if (t50 != -2147482433) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x3357 = UINT8_MAX;
	volatile int64_t x3360 = -1LL;
	int64_t t51 = 107LL;

    t51 = ((x3357+(x3358<<x3359))+x3360);

    if (t51 != 8019198LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x3378 = 2465121U;
	uint16_t x3379 = 14U;
	int8_t x3380 = INT8_MAX;

    t52 = ((x3377+(x3378<<x3379))+x3380);

    if (t52 != 1733836926LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint16_t x3541 = UINT16_MAX;
	uint8_t x3542 = 62U;
	int16_t x3544 = INT16_MIN;
	int32_t t53 = 951;

    t53 = ((x3541+(x3542<<x3543))+x3544);

    if (t53 != 33015) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x3637 = INT64_MIN;
	int16_t x3639 = 2;

    t54 = ((x3637+(x3638<<x3639))+x3640);

    if (t54 != -9223372036854489057LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x3741 = UINT16_MAX;
	uint32_t x3742 = 0U;
	int16_t x3743 = 3;
	int8_t x3744 = INT8_MIN;
	uint32_t t55 = 1072561U;

    t55 = ((x3741+(x3742<<x3743))+x3744);

    if (t55 != 65407U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x3765 = -1;
	int8_t x3767 = 1;
	volatile int64_t x3768 = -1LL;
	int64_t t56 = 2143480085872LL;

    t56 = ((x3765+(x3766<<x3767))+x3768);

    if (t56 != 26LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x3825 = 1;
	volatile uint64_t x3826 = 71581736LLU;
	volatile uint16_t x3827 = 4U;
	volatile int64_t x3828 = -14179680028673LL;
	volatile uint64_t t57 = 3286802526472296LLU;

    t57 = ((x3825+(x3826<<x3827))+x3828);

    if (t57 != 18446729895174830720LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x3829 = 9633U;
	static volatile uint8_t x3830 = 0U;
	int8_t x3831 = 1;
	volatile uint32_t x3832 = 34U;
	uint32_t t58 = 110737126U;

    t58 = ((x3829+(x3830<<x3831))+x3832);

    if (t58 != 9667U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x3885 = INT32_MAX;
	uint32_t x3887 = 27U;
	int32_t x3888 = -8385672;
	volatile uint64_t t59 = 9299862133LLU;

    t59 = ((x3885+(x3886<<x3887))+x3888);

    if (t59 != 4286581623LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x3965 = UINT16_MAX;
	int32_t x3966 = 95836933;
	uint8_t x3967 = 3U;
	int32_t x3968 = -6940717;
	int32_t t60 = 222;

    t60 = ((x3965+(x3966<<x3967))+x3968);

    if (t60 != 759820282) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x3985 = -556LL;
	uint8_t x3986 = 32U;
	int64_t x3988 = 11LL;
	volatile int64_t t61 = -5938LL;

    t61 = ((x3985+(x3986<<x3987))+x3988);

    if (t61 != -481LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x4045 = INT16_MIN;
	uint64_t x4048 = 909562653739LLU;
	uint64_t t62 = 147928LLU;

    t62 = ((x4045+(x4046<<x4047))+x4048);

    if (t62 != 963267938859LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x4073 = -932734965;
	int32_t x4076 = INT32_MIN;
	static volatile uint64_t t63 = 1356961LLU;

    t63 = ((x4073+(x4074<<x4075))+x4076);

    if (t63 != 21003861642579915LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x4097 = 205U;
	uint64_t x4098 = 1569650195112197440LLU;
	uint8_t x4099 = 7U;
	int64_t x4100 = 0LL;
	static uint64_t t64 = 7095048668LLU;

    t64 = ((x4097+(x4098<<x4099))+x4100);

    if (t64 != 16447784237265756365LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x4105 = 5066114;
	static uint64_t x4106 = 3794LLU;
	uint8_t x4107 = 2U;
	int16_t x4108 = INT16_MIN;

    t65 = ((x4105+(x4106<<x4107))+x4108);

    if (t65 != 5048522LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x4121 = 15602U;
	int16_t x4123 = 0;
	int64_t x4124 = INT64_MAX;
	uint64_t t66 = 100LLU;

    t66 = ((x4121+(x4122<<x4123))+x4124);

    if (t66 != 10260847528208253028LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x4301 = -22;
	volatile int16_t x4302 = INT16_MAX;
	volatile uint32_t x4303 = 1U;
	static int8_t x4304 = INT8_MIN;
	int32_t t67 = 146;

    t67 = ((x4301+(x4302<<x4303))+x4304);

    if (t67 != 65384) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x4369 = 338;
	volatile uint64_t x4370 = UINT64_MAX;
	uint32_t x4371 = 5U;
	int16_t x4372 = -1;
	volatile uint64_t t68 = 68770154LLU;

    t68 = ((x4369+(x4370<<x4371))+x4372);

    if (t68 != 305LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x4373 = UINT64_MAX;
	uint16_t x4374 = UINT16_MAX;
	uint32_t x4376 = 17U;
	volatile uint64_t t69 = 24458615LLU;

    t69 = ((x4373+(x4374<<x4375))+x4376);

    if (t69 != 524296LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x4377 = UINT32_MAX;
	static uint32_t x4379 = 12U;
	int32_t x4380 = -413;
	uint64_t t70 = 3721LLU;

    t70 = ((x4377+(x4378<<x4379))+x4380);

    if (t70 != 4296359522LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x4429 = -1;
	uint32_t x4430 = UINT32_MAX;
	int16_t x4431 = 28;

    t71 = ((x4429+(x4430<<x4431))+x4432);

    if (t71 != 4026531849U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x4449 = INT32_MIN;
	uint64_t x4450 = 2096166935152766407LLU;
	int8_t x4452 = INT8_MIN;
	uint64_t t72 = 1012055LLU;

    t72 = ((x4449+(x4450<<x4451))+x4452);

    if (t72 != 9223372034707292032LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x4593 = 11019457659LL;
	int64_t x4594 = 139109647893481LL;
	int8_t x4595 = 15;
	uint16_t x4596 = 29581U;
	static volatile int64_t t73 = -1LL;

    t73 = ((x4593+(x4594<<x4595))+x4596);

    if (t73 != 4558344953193072648LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x4609 = INT8_MAX;
	uint32_t x4610 = 4U;
	uint16_t x4612 = UINT16_MAX;

    t74 = ((x4609+(x4610<<x4611))+x4612);

    if (t74 != 33620094U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x4645 = UINT64_MAX;
	int16_t x4647 = 1;
	uint16_t x4648 = 58U;
	uint64_t t75 = 11369308LLU;

    t75 = ((x4645+(x4646<<x4647))+x4648);

    if (t75 != 15923217LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x4685 = UINT64_MAX;
	uint8_t x4686 = 0U;
	int16_t x4687 = 4;
	int32_t x4688 = -1;
	uint64_t t76 = 1436LLU;

    t76 = ((x4685+(x4686<<x4687))+x4688);

    if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x4713 = INT32_MAX;
	volatile uint64_t x4714 = UINT64_MAX;
	static uint16_t x4715 = 1U;
	int64_t x4716 = INT64_MIN;
	volatile uint64_t t77 = 322659LLU;

    t77 = ((x4713+(x4714<<x4715))+x4716);

    if (t77 != 9223372039002259453LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x4857 = UINT8_MAX;
	int16_t x4859 = 0;
	int32_t t78 = -18085;

    t78 = ((x4857+(x4858<<x4859))+x4860);

    if (t78 != 75655) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x4917 = 5U;
	volatile int64_t t79 = -79409288816291188LL;

    t79 = ((x4917+(x4918<<x4919))+x4920);

    if (t79 != 1407037997111LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x5089 = -1LL;
	static int8_t x5090 = 0;
	uint8_t x5091 = 1U;
	int64_t x5092 = -155360004214LL;

    t80 = ((x5089+(x5090<<x5091))+x5092);

    if (t80 != -155360004215LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x5381 = UINT16_MAX;
	static uint64_t x5382 = 7268187LLU;
	int16_t x5384 = INT16_MIN;
	volatile uint64_t t81 = 3382094LLU;

    t81 = ((x5381+(x5382<<x5383))+x5384);

    if (t81 != 14569141LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x5410 = 427U;
	int32_t x5412 = INT32_MIN;
	volatile int32_t t82 = 1;

    t82 = ((x5409+(x5410<<x5411))+x5412);

    if (t82 != -2147483142) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x5485 = 63566735U;
	uint8_t x5486 = UINT8_MAX;
	int8_t x5487 = 10;
	int8_t x5488 = INT8_MIN;
	volatile uint32_t t83 = 3U;

    t83 = ((x5485+(x5486<<x5487))+x5488);

    if (t83 != 63827727U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x5534 = 7193U;
	int16_t x5535 = 1;
	int64_t x5536 = INT64_MIN;
	volatile int64_t t84 = -526930757469714905LL;

    t84 = ((x5533+(x5534<<x5535))+x5536);

    if (t84 != -9223372036854761407LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x5589 = 1;
	int8_t x5592 = 1;
	int32_t t85 = -2151909;

    t85 = ((x5589+(x5590<<x5591))+x5592);

    if (t85 != 2042) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x5610 = 6448;
	uint8_t x5611 = 0U;
	uint32_t x5612 = 777286U;
	uint32_t t86 = 101481U;

    t86 = ((x5609+(x5610<<x5611))+x5612);

    if (t86 != 816501U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x5621 = -1;
	uint32_t x5622 = 69475U;
	uint16_t x5623 = 15U;
	uint32_t x5624 = UINT32_MAX;
	volatile uint32_t t87 = 207954U;

    t87 = ((x5621+(x5622<<x5623))+x5624);

    if (t87 != 2276556798U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x5777 = 82U;
	uint16_t x5779 = 31U;
	uint32_t x5780 = 13676U;
	volatile uint64_t t88 = 1446128952LLU;

    t88 = ((x5777+(x5778<<x5779))+x5780);

    if (t88 != 18446744071562081726LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x5817 = 1U;
	int8_t x5818 = 24;
	uint8_t x5819 = 1U;
	int8_t x5820 = INT8_MAX;
	volatile int32_t t89 = 454944;

    t89 = ((x5817+(x5818<<x5819))+x5820);

    if (t89 != 176) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x5951 = 17;
	volatile int8_t x5952 = INT8_MIN;
	volatile int64_t t90 = 310LL;

    t90 = ((x5949+(x5950<<x5951))+x5952);

    if (t90 != -35113608687LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x5969 = 2371;
	uint64_t x5970 = 3803728798908730LLU;
	uint16_t x5971 = 12U;
	int8_t x5972 = INT8_MIN;
	volatile uint64_t t91 = 204906671162LLU;

    t91 = ((x5969+(x5970<<x5971))+x5972);

    if (t91 != 15580073160330160323LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x6001 = 0;
	volatile uint64_t x6002 = UINT64_MAX;
	volatile int32_t x6003 = 0;
	int64_t x6004 = -1LL;

    t92 = ((x6001+(x6002<<x6003))+x6004);

    if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x6005 = -218616;
	static uint32_t x6006 = UINT32_MAX;
	uint8_t x6007 = 27U;
	int16_t x6008 = INT16_MIN;
	uint32_t t93 = 63924U;

    t93 = ((x6005+(x6006<<x6007))+x6008);

    if (t93 != 4160498184U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x6085 = 41U;
	uint8_t x6086 = 1U;
	volatile uint8_t x6087 = 0U;
	volatile uint16_t x6088 = UINT16_MAX;
	volatile int32_t t94 = -72;

    t94 = ((x6085+(x6086<<x6087))+x6088);

    if (t94 != 65577) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint64_t x6145 = 5116030075431984LLU;
	volatile int8_t x6146 = 0;
	uint8_t x6147 = 0U;
	static int32_t x6148 = INT32_MIN;
	volatile uint64_t t95 = 6958958653971833LLU;

    t95 = ((x6145+(x6146<<x6147))+x6148);

    if (t95 != 5116027927948336LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x6149 = INT8_MIN;
	int8_t x6150 = 26;
	uint64_t x6151 = 3LLU;
	volatile int64_t x6152 = -222302811676727258LL;
	int64_t t96 = 5846388LL;

    t96 = ((x6149+(x6150<<x6151))+x6152);

    if (t96 != -222302811676727178LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x6197 = INT32_MIN;
	static uint8_t x6198 = 45U;
	volatile uint8_t x6199 = 13U;
	int16_t x6200 = INT16_MIN;
	volatile int32_t t97 = 1926461;

    t97 = ((x6197+(x6198<<x6199))+x6200);

    if (t97 != -2147147776) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x6221 = -9;
	int64_t x6222 = INT64_MAX;
	static int8_t x6223 = 0;
	int8_t x6224 = INT8_MIN;
	volatile int64_t t98 = 3778205232477255LL;

    t98 = ((x6221+(x6222<<x6223))+x6224);

    if (t98 != 9223372036854775670LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x6237 = -62803;
	uint16_t x6239 = 0U;
	volatile uint64_t x6240 = 2565222LLU;
	static uint64_t t99 = 254354541580LLU;

    t99 = ((x6237+(x6238<<x6239))+x6240);

    if (t99 != 2149986066LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x6361 = INT8_MIN;
	int64_t x6362 = 12947301674LL;
	uint32_t x6363 = 5U;
	uint16_t x6364 = 3876U;
	int64_t t100 = 11361069LL;

    t100 = ((x6361+(x6362<<x6363))+x6364);

    if (t100 != 414313657316LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x6445 = 20978U;
	static uint32_t x6446 = UINT32_MAX;
	static uint8_t x6447 = 12U;
	static int32_t x6448 = INT32_MIN;
	volatile uint32_t t101 = 2926U;

    t101 = ((x6445+(x6446<<x6447))+x6448);

    if (t101 != 2147500530U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x6491 = 7U;
	uint8_t x6492 = 0U;

    t102 = ((x6489+(x6490<<x6491))+x6492);

    if (t102 != 5480843370LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x6542 = 0U;
	int32_t x6543 = 3;
	int32_t t103 = -4;

    t103 = ((x6541+(x6542<<x6543))+x6544);

    if (t103 != -2147478223) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x6599 = 0;
	int8_t x6600 = INT8_MIN;

    t104 = ((x6597+(x6598<<x6599))+x6600);

    if (t104 != 2067797U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x6638 = UINT8_MAX;
	volatile int16_t x6639 = 0;
	int64_t x6640 = INT64_MIN;
	static int64_t t105 = -19181017863878LL;

    t105 = ((x6637+(x6638<<x6639))+x6640);

    if (t105 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x6709 = -1LL;
	static uint8_t x6710 = UINT8_MAX;
	uint8_t x6711 = 19U;
	int64_t t106 = 482376647030LL;

    t106 = ((x6709+(x6710<<x6711))+x6712);

    if (t106 != 133693456LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x6997 = 6854073371873LLU;
	volatile uint8_t x6999 = 0U;
	int8_t x7000 = -1;
	volatile uint64_t t107 = 4205275266793690LLU;

    t107 = ((x6997+(x6998<<x6999))+x7000);

    if (t107 != 6854073372127LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x7005 = 5471U;
	static int8_t x7006 = 0;
	uint8_t x7007 = 2U;
	int64_t x7008 = -17345641106LL;
	volatile int64_t t108 = -6956548192LL;

    t108 = ((x7005+(x7006<<x7007))+x7008);

    if (t108 != -17345635635LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x7125 = 2871072U;
	uint64_t x7126 = 9928LLU;
	int8_t x7127 = 0;
	uint64_t x7128 = 207070LLU;
	volatile uint64_t t109 = 71361634187LLU;

    t109 = ((x7125+(x7126<<x7127))+x7128);

    if (t109 != 3088070LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x7193 = INT8_MAX;
	static int16_t x7194 = 11;
	int64_t x7196 = 40340784580LL;
	volatile int64_t t110 = -20008204116LL;

    t110 = ((x7193+(x7194<<x7195))+x7196);

    if (t110 != 40340784729LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x7281 = 5U;
	volatile uint64_t x7282 = 7533426309193LLU;
	volatile int16_t x7283 = 10;
	volatile int16_t x7284 = -1;
	static volatile uint64_t t111 = 40723127731LLU;

    t111 = ((x7281+(x7282<<x7283))+x7284);

    if (t111 != 7714228540613636LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x7301 = 13;
	volatile uint16_t x7303 = 6U;
	uint8_t x7304 = UINT8_MAX;
	volatile int32_t t112 = 110805912;

    t112 = ((x7301+(x7302<<x7303))+x7304);

    if (t112 != 2124) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x7413 = -7012393659572718LL;
	static uint64_t x7416 = UINT64_MAX;

    t113 = ((x7413+(x7414<<x7415))+x7416);

    if (t113 != 18439731682197462544LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x7453 = UINT64_MAX;
	int64_t x7454 = 148732LL;
	int8_t x7455 = 3;
	volatile int64_t x7456 = -206834807LL;
	volatile uint64_t t114 = 710311475697455LLU;

    t114 = ((x7453+(x7454<<x7455))+x7456);

    if (t114 != 18446744073503906664LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x7533 = -457;
	uint16_t x7535 = 19U;
	volatile int16_t x7536 = 7;

    t115 = ((x7533+(x7534<<x7535))+x7536);

    if (t115 != 30932542) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x7781 = INT8_MIN;
	uint8_t x7782 = 25U;
	static int8_t x7783 = 1;
	volatile int32_t x7784 = -13504;
	int32_t t116 = 43139775;

    t116 = ((x7781+(x7782<<x7783))+x7784);

    if (t116 != -13582) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x7898 = INT8_MAX;
	int8_t x7899 = 6;
	uint32_t x7900 = 69050036U;

    t117 = ((x7897+(x7898<<x7899))+x7900);

    if (t117 != 69058163U) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint16_t x7969 = 6747U;
	uint64_t x7970 = 29558098LLU;
	static int32_t x7972 = -1;
	volatile uint64_t t118 = 338678667089LLU;

    t118 = ((x7969+(x7970<<x7971))+x7972);

    if (t118 != 242139945562LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x7985 = INT8_MAX;
	int8_t x7986 = 1;
	uint64_t x7987 = 1LLU;
	int8_t x7988 = INT8_MAX;
	static volatile int32_t t119 = 101;

    t119 = ((x7985+(x7986<<x7987))+x7988);

    if (t119 != 256) { NG(); } else { ; }
	
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


    return 0;
}

