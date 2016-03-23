
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

static int8_t x38 = 1;
uint32_t x126 = 6U;
uint64_t x246 = 23LLU;
uint8_t x247 = 1U;
int8_t x334 = 1;
volatile uint64_t x399 = UINT64_MAX;
uint64_t t8 = 34212369842LLU;
uint16_t x433 = UINT16_MAX;
static int8_t x434 = 6;
volatile int32_t t10 = -4038749;
uint64_t x465 = UINT64_MAX;
uint16_t x466 = 0U;
volatile uint8_t x515 = 21U;
volatile int32_t x516 = INT32_MIN;
volatile uint32_t t13 = UINT32_MAX;
static volatile uint8_t x593 = 0U;
static int32_t t14 = 898;
uint32_t t15 = 422516988U;
static volatile int16_t x701 = INT16_MAX;
uint8_t x762 = 10U;
int32_t x979 = INT32_MIN;
int8_t x980 = 25;
volatile uint8_t x981 = UINT8_MAX;
uint8_t x1335 = UINT8_MAX;
volatile int8_t x1401 = INT8_MAX;
static int8_t x1410 = 15;
int8_t x1424 = 0;
int32_t t31 = -252818047;
volatile int64_t x1449 = INT64_MAX;
int8_t x1562 = 0;
int8_t x1564 = INT8_MIN;
int32_t t34 = 5470524;
volatile int64_t x1677 = INT64_MAX;
int32_t x1689 = INT32_MAX;
static int16_t x1690 = 7;
uint64_t x1815 = UINT64_MAX;
int64_t t40 = -180225748LL;
volatile uint32_t x1857 = 755451U;
volatile int64_t x1903 = INT64_MAX;
int32_t x2099 = -1;
uint32_t x2100 = 13U;
volatile int8_t x2146 = 21;
int64_t x2155 = INT64_MIN;
uint16_t x2178 = 1U;
static volatile uint32_t x2180 = UINT32_MAX;
int16_t x2249 = 631;
volatile int32_t t52 = 23;
volatile uint8_t x2313 = UINT8_MAX;
volatile int32_t t53 = 10639047;
int8_t x2840 = -57;
int32_t t58 = -1063;
static int64_t x2873 = INT64_MAX;
static int16_t x2875 = INT16_MIN;
static int16_t x2876 = 13907;
volatile int64_t t59 = 109044792LL;
uint8_t x2987 = 5U;
uint32_t x2988 = 44199824U;
uint64_t x3015 = UINT64_MAX;
int16_t x3038 = 4;
volatile int16_t x3069 = 1;
uint64_t x3079 = UINT64_MAX;
int64_t x3080 = -1LL;
uint64_t x3357 = UINT64_MAX;
volatile uint64_t t66 = 35LLU;
static uint8_t x3692 = 9U;
volatile int32_t t68 = -1;
int8_t x3872 = 38;
int16_t x3896 = INT16_MIN;
volatile int32_t x3916 = -1;
static volatile uint64_t t72 = 55421460739479936LLU;
static uint16_t x3930 = 5U;
static int64_t x3972 = -1LL;
volatile int8_t x4027 = INT8_MIN;
static uint64_t t76 = 467LLU;
uint8_t x4072 = 5U;
int64_t x4145 = INT64_MAX;
uint32_t x4220 = UINT32_MAX;
uint8_t x4355 = 2U;
uint8_t x4402 = 4U;
volatile int16_t x4403 = INT16_MAX;
uint8_t x4567 = 0U;
static uint16_t x4618 = 1U;
volatile uint32_t x4669 = 164812U;
static int8_t x4670 = 1;
uint32_t t90 = 2U;
static int32_t t91 = 4197;
volatile int64_t t94 = -5570LL;
static volatile uint32_t x4993 = UINT32_MAX;
volatile uint8_t x5030 = 3U;
int64_t x5208 = -1LL;
static volatile uint8_t x5238 = 3U;
uint32_t x5239 = 21638U;
uint32_t x5260 = UINT32_MAX;
volatile int64_t t101 = -96655102009268001LL;
volatile int32_t x5337 = INT32_MAX;
int32_t t102 = 1;
int16_t x5407 = INT16_MIN;
volatile int16_t x5408 = -1;
uint16_t x5446 = 1U;
uint8_t x5494 = 0U;
static int64_t x5495 = -2LL;
uint16_t x5560 = 24432U;
static uint64_t x5622 = 21LLU;
volatile int32_t x5701 = 821858;
volatile int8_t x5704 = -58;
int32_t t112 = 30;
uint8_t x5765 = UINT8_MAX;
uint8_t x5766 = 9U;
static int16_t x5779 = INT16_MIN;
static uint64_t x5903 = 4183734744683116LLU;
volatile int32_t x5936 = -1;
int16_t x6021 = INT16_MAX;
volatile int64_t t122 = INT64_MAX;
int32_t x6064 = INT32_MIN;
int8_t x6196 = INT8_MIN;
volatile int16_t x6263 = INT16_MIN;
volatile int64_t t127 = 1LL;
static uint8_t x6298 = 1U;
static volatile uint16_t x6369 = 2U;
uint8_t x6371 = 23U;
static volatile int16_t x6413 = INT16_MAX;
static uint8_t x6414 = 2U;
int32_t t132 = 1;
volatile uint32_t x6424 = UINT32_MAX;
static int64_t t133 = 2414820047LL;
uint8_t x6654 = 6U;
uint8_t x6656 = 0U;
static uint16_t x6686 = 3U;
int16_t x6687 = INT16_MIN;
static int16_t x6688 = -1;
volatile uint8_t x6818 = 1U;
uint16_t x6819 = 0U;
int32_t x6851 = INT32_MIN;
static uint32_t x6919 = 3U;
uint16_t x6953 = UINT16_MAX;
volatile uint64_t x7083 = 212859LLU;
int64_t x7162 = 0LL;
volatile int16_t x7171 = INT16_MIN;
int64_t x7172 = INT64_MIN;
static int32_t t143 = -9;
uint32_t x7197 = UINT32_MAX;
uint8_t x7242 = 3U;
int64_t x7295 = INT64_MIN;
int32_t x7296 = 44;
volatile uint64_t x7301 = 94927251LLU;
uint8_t x7305 = 7U;
uint32_t x7413 = 152U;
uint8_t x7422 = 2U;
volatile uint32_t x7526 = 2U;
int32_t t152 = 0;
int32_t x7605 = 207811;
uint8_t x7606 = 4U;
static uint64_t x7607 = 1LLU;
static uint8_t x7608 = UINT8_MAX;
volatile uint16_t x7613 = 103U;
volatile int32_t t154 = 3722;
uint8_t x7673 = 2U;
uint8_t x7674 = 18U;
static int8_t x7675 = INT8_MIN;
int8_t x7813 = 1;
int64_t x7836 = INT64_MIN;
uint32_t t158 = 26600456U;
static int32_t x7873 = 1;
uint8_t x7874 = 4U;
static uint16_t x7915 = UINT16_MAX;
int16_t x7916 = -121;
volatile uint32_t t165 = 78938U;
int16_t x8287 = -1;
uint8_t x8330 = 7U;
static int8_t x8431 = INT8_MAX;
int32_t x8473 = INT32_MAX;
int16_t x8496 = -299;
static volatile int32_t t172 = -1;
static uint32_t x8591 = UINT32_MAX;
uint16_t x8601 = 716U;
uint32_t x8602 = 5U;
int64_t x8679 = INT64_MAX;
volatile uint8_t x8694 = 1U;
int32_t x8745 = INT32_MAX;
volatile int32_t t178 = INT32_MAX;
static volatile int16_t x8839 = 13786;
int8_t x8999 = -1;
volatile uint64_t t182 = 343142054LLU;
volatile uint64_t t184 = 106212626890LLU;
volatile int16_t x9103 = -1;
static uint8_t x9104 = 0U;
int32_t t186 = -1;
volatile int8_t x9275 = INT8_MIN;
volatile int32_t t189 = 8047;
int32_t t191 = -917303216;
int64_t x9421 = INT64_MAX;
volatile int16_t x9766 = 27;
volatile int8_t x9784 = INT8_MIN;
int8_t x9866 = 7;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	volatile int8_t x2 = 23;
	static uint16_t x3 = UINT16_MAX;
	static uint32_t x4 = 182920U;
	int32_t t0 = -46;

    t0 = (x1>>(x2+(x3==x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x37 = 106509LLU;
	static int32_t x39 = INT32_MIN;
	static int32_t x40 = -1;
	volatile uint64_t t1 = 125229741927LLU;

    t1 = (x37>>(x38+(x39==x40)));

    if (t1 != 53254LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x53 = UINT8_MAX;
	uint16_t x54 = 22U;
	int8_t x55 = INT8_MIN;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t2 = 540289138;

    t2 = (x53>>(x54+(x55==x56)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x57 = UINT8_MAX;
	volatile int8_t x58 = 0;
	int8_t x59 = INT8_MAX;
	static volatile int32_t x60 = -1;
	volatile int32_t t3 = 20268576;

    t3 = (x57>>(x58+(x59==x60)));

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x125 = 345;
	volatile int64_t x127 = INT64_MIN;
	static uint16_t x128 = 813U;
	int32_t t4 = 3;

    t4 = (x125>>(x126+(x127==x128)));

    if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x193 = UINT64_MAX;
	int8_t x194 = 1;
	int16_t x195 = -7108;
	static int16_t x196 = -712;
	static volatile uint64_t t5 = 372938093LLU;

    t5 = (x193>>(x194+(x195==x196)));

    if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x245 = UINT32_MAX;
	static int8_t x248 = INT8_MIN;
	static uint32_t t6 = 10133465U;

    t6 = (x245>>(x246+(x247==x248)));

    if (t6 != 511U) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x333 = 2LLU;
	static int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MAX;
	volatile uint64_t t7 = 48LLU;

    t7 = (x333>>(x334+(x335==x336)));

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x397 = 1467599695413309897LLU;
	uint8_t x398 = 14U;
	static int16_t x400 = INT16_MAX;

    t8 = (x397>>(x398+(x399==x400)));

    if (t8 != 89575176722003LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x421 = 3376U;
	uint8_t x422 = 1U;
	int16_t x423 = -1;
	int8_t x424 = 1;
	uint32_t t9 = 405282716U;

    t9 = (x421>>(x422+(x423==x424)));

    if (t9 != 1688U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x435 = UINT16_MAX;
	int16_t x436 = 12631;

    t10 = (x433>>(x434+(x435==x436)));

    if (t10 != 1023) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x467 = 83067756U;
	int32_t x468 = -1;
	uint64_t t11 = UINT64_MAX;

    t11 = (x465>>(x466+(x467==x468)));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x513 = 1;
	volatile uint32_t x514 = 0U;
	volatile int32_t t12 = -27757684;

    t12 = (x513>>(x514+(x515==x516)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x561 = UINT32_MAX;
	int8_t x562 = 0;
	int16_t x563 = INT16_MIN;
	uint16_t x564 = 60U;

    t13 = (x561>>(x562+(x563==x564)));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x594 = 7LLU;
	uint8_t x595 = 64U;
	static int16_t x596 = 1;

    t14 = (x593>>(x594+(x595==x596)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x621 = 2065203U;
	static volatile int8_t x622 = 0;
	int64_t x623 = 267884795865845LL;
	uint64_t x624 = 182732974522775LLU;

    t15 = (x621>>(x622+(x623==x624)));

    if (t15 != 2065203U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x625 = UINT8_MAX;
	static int8_t x626 = 1;
	volatile int64_t x627 = INT64_MIN;
	static int8_t x628 = INT8_MIN;
	int32_t t16 = -170784392;

    t16 = (x625>>(x626+(x627==x628)));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x702 = 1U;
	uint64_t x703 = UINT64_MAX;
	int32_t x704 = -1;
	volatile int32_t t17 = 215;

    t17 = (x701>>(x702+(x703==x704)));

    if (t17 != 8191) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x709 = INT8_MAX;
	static volatile uint16_t x710 = 1U;
	static volatile int32_t x711 = INT32_MAX;
	int32_t x712 = -106;
	static volatile int32_t t18 = -2043;

    t18 = (x709>>(x710+(x711==x712)));

    if (t18 != 63) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x749 = 0U;
	uint8_t x750 = 31U;
	int64_t x751 = INT64_MIN;
	static volatile int8_t x752 = 0;
	static volatile int32_t t19 = -24542;

    t19 = (x749>>(x750+(x751==x752)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x761 = UINT32_MAX;
	int64_t x763 = -1LL;
	uint64_t x764 = 10664767882915215LLU;
	volatile uint32_t t20 = 474048998U;

    t20 = (x761>>(x762+(x763==x764)));

    if (t20 != 4194303U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x765 = INT16_MAX;
	static uint32_t x766 = 18U;
	static int8_t x767 = INT8_MAX;
	volatile uint16_t x768 = 1021U;
	static int32_t t21 = 1836;

    t21 = (x765>>(x766+(x767==x768)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x877 = 13512U;
	int16_t x878 = 0;
	volatile int32_t x879 = INT32_MAX;
	uint32_t x880 = 978U;
	volatile int32_t t22 = -338;

    t22 = (x877>>(x878+(x879==x880)));

    if (t22 != 13512) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x949 = 1954331409788155LLU;
	uint8_t x950 = 28U;
	int64_t x951 = INT64_MIN;
	int16_t x952 = INT16_MIN;
	uint64_t t23 = 21622LLU;

    t23 = (x949>>(x950+(x951==x952)));

    if (t23 != 7280451LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x977 = INT16_MAX;
	volatile int8_t x978 = 1;
	volatile int32_t t24 = -15943056;

    t24 = (x977>>(x978+(x979==x980)));

    if (t24 != 16383) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x982 = 12U;
	int16_t x983 = -50;
	volatile int16_t x984 = 235;
	static volatile int32_t t25 = -1;

    t25 = (x981>>(x982+(x983==x984)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1137 = 1;
	volatile uint8_t x1138 = 0U;
	uint8_t x1139 = UINT8_MAX;
	static int64_t x1140 = INT64_MIN;
	volatile int32_t t26 = 2264;

    t26 = (x1137>>(x1138+(x1139==x1140)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1309 = 8U;
	static volatile int16_t x1310 = -1;
	static int64_t x1311 = -1LL;
	volatile int8_t x1312 = -1;
	volatile int32_t t27 = -9558;

    t27 = (x1309>>(x1310+(x1311==x1312)));

    if (t27 != 8) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1333 = INT16_MAX;
	int8_t x1334 = 27;
	uint64_t x1336 = 435816046LLU;
	volatile int32_t t28 = -7;

    t28 = (x1333>>(x1334+(x1335==x1336)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x1402 = 28U;
	volatile uint32_t x1403 = UINT32_MAX;
	int32_t x1404 = INT32_MAX;
	volatile int32_t t29 = 50744;

    t29 = (x1401>>(x1402+(x1403==x1404)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1409 = 9499;
	uint32_t x1411 = 5U;
	int64_t x1412 = INT64_MIN;
	int32_t t30 = 20674;

    t30 = (x1409>>(x1410+(x1411==x1412)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1421 = INT16_MAX;
	uint8_t x1422 = 4U;
	int64_t x1423 = INT64_MIN;

    t31 = (x1421>>(x1422+(x1423==x1424)));

    if (t31 != 2047) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x1425 = 0U;
	uint32_t x1426 = 1U;
	static volatile uint64_t x1427 = UINT64_MAX;
	int16_t x1428 = INT16_MIN;
	volatile int32_t t32 = 1870;

    t32 = (x1425>>(x1426+(x1427==x1428)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x1450 = 13U;
	int16_t x1451 = INT16_MIN;
	volatile uint64_t x1452 = UINT64_MAX;
	static int64_t t33 = 7457086485LL;

    t33 = (x1449>>(x1450+(x1451==x1452)));

    if (t33 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x1561 = 80U;
	int16_t x1563 = INT16_MIN;

    t34 = (x1561>>(x1562+(x1563==x1564)));

    if (t34 != 80) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1609 = 59616618732LL;
	uint32_t x1610 = 2U;
	uint64_t x1611 = 1961LLU;
	int8_t x1612 = INT8_MIN;
	volatile int64_t t35 = -1419024218042368LL;

    t35 = (x1609>>(x1610+(x1611==x1612)));

    if (t35 != 14904154683LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x1629 = 104;
	int16_t x1630 = 1;
	uint8_t x1631 = 1U;
	volatile int16_t x1632 = -1;
	volatile int32_t t36 = -9;

    t36 = (x1629>>(x1630+(x1631==x1632)));

    if (t36 != 52) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x1657 = 41164875LLU;
	int16_t x1658 = 0;
	int32_t x1659 = 7;
	uint16_t x1660 = 9821U;
	volatile uint64_t t37 = 19912199728LLU;

    t37 = (x1657>>(x1658+(x1659==x1660)));

    if (t37 != 41164875LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x1678 = 17U;
	uint16_t x1679 = UINT16_MAX;
	static int8_t x1680 = INT8_MIN;
	static volatile int64_t t38 = -72236LL;

    t38 = (x1677>>(x1678+(x1679==x1680)));

    if (t38 != 70368744177663LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x1691 = 4U;
	uint64_t x1692 = 1430LLU;
	int32_t t39 = -1;

    t39 = (x1689>>(x1690+(x1691==x1692)));

    if (t39 != 16777215) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x1813 = INT64_MAX;
	int8_t x1814 = 2;
	volatile int8_t x1816 = -1;

    t40 = (x1813>>(x1814+(x1815==x1816)));

    if (t40 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x1858 = 12U;
	uint64_t x1859 = UINT64_MAX;
	static int16_t x1860 = INT16_MIN;
	volatile uint32_t t41 = 68U;

    t41 = (x1857>>(x1858+(x1859==x1860)));

    if (t41 != 184U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x1901 = UINT16_MAX;
	uint8_t x1902 = 2U;
	int32_t x1904 = INT32_MIN;
	int32_t t42 = 302;

    t42 = (x1901>>(x1902+(x1903==x1904)));

    if (t42 != 16383) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x1925 = 268283446577LLU;
	static uint8_t x1926 = 13U;
	uint64_t x1927 = 2LLU;
	int64_t x1928 = INT64_MIN;
	uint64_t t43 = 5LLU;

    t43 = (x1925>>(x1926+(x1927==x1928)));

    if (t43 != 32749444LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x1981 = UINT32_MAX;
	uint8_t x1982 = 0U;
	int8_t x1983 = -1;
	int64_t x1984 = INT64_MAX;
	static volatile uint32_t t44 = UINT32_MAX;

    t44 = (x1981>>(x1982+(x1983==x1984)));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2033 = 247203972979668LLU;
	int32_t x2034 = 0;
	int64_t x2035 = -1LL;
	static volatile int8_t x2036 = 63;
	volatile uint64_t t45 = 28LLU;

    t45 = (x2033>>(x2034+(x2035==x2036)));

    if (t45 != 247203972979668LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x2097 = 0;
	uint8_t x2098 = 5U;
	static int32_t t46 = 1;

    t46 = (x2097>>(x2098+(x2099==x2100)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x2145 = 8U;
	int16_t x2147 = -1;
	int8_t x2148 = INT8_MAX;
	uint32_t t47 = 1024U;

    t47 = (x2145>>(x2146+(x2147==x2148)));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x2153 = 14082866;
	uint8_t x2154 = 1U;
	volatile int64_t x2156 = INT64_MAX;
	int32_t t48 = 0;

    t48 = (x2153>>(x2154+(x2155==x2156)));

    if (t48 != 7041433) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2161 = 8U;
	volatile uint32_t x2162 = 1U;
	volatile int32_t x2163 = INT32_MAX;
	static int64_t x2164 = INT64_MIN;
	int32_t t49 = 77005;

    t49 = (x2161>>(x2162+(x2163==x2164)));

    if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x2165 = INT64_MAX;
	volatile uint8_t x2166 = 13U;
	static int16_t x2167 = INT16_MAX;
	volatile int8_t x2168 = INT8_MIN;
	int64_t t50 = -3629021633277701LL;

    t50 = (x2165>>(x2166+(x2167==x2168)));

    if (t50 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2177 = INT16_MAX;
	int32_t x2179 = INT32_MAX;
	static int32_t t51 = -1361;

    t51 = (x2177>>(x2178+(x2179==x2180)));

    if (t51 != 16383) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x2250 = 1U;
	int16_t x2251 = 1;
	uint16_t x2252 = 6U;

    t52 = (x2249>>(x2250+(x2251==x2252)));

    if (t52 != 315) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x2314 = 1;
	volatile int8_t x2315 = INT8_MAX;
	int64_t x2316 = INT64_MIN;

    t53 = (x2313>>(x2314+(x2315==x2316)));

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x2337 = 1175277229473056LL;
	int16_t x2338 = 32;
	int16_t x2339 = INT16_MIN;
	uint32_t x2340 = UINT32_MAX;
	int64_t t54 = 1372206LL;

    t54 = (x2337>>(x2338+(x2339==x2340)));

    if (t54 != 273640LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint16_t x2369 = UINT16_MAX;
	uint8_t x2370 = 13U;
	uint16_t x2371 = 291U;
	static int16_t x2372 = INT16_MIN;
	int32_t t55 = -587478;

    t55 = (x2369>>(x2370+(x2371==x2372)));

    if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x2757 = 3U;
	static uint8_t x2758 = 2U;
	int8_t x2759 = -1;
	uint32_t x2760 = 95216371U;
	int32_t t56 = -8406;

    t56 = (x2757>>(x2758+(x2759==x2760)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x2793 = UINT32_MAX;
	int16_t x2794 = -1;
	static int32_t x2795 = -1;
	uint32_t x2796 = UINT32_MAX;
	volatile uint32_t t57 = UINT32_MAX;

    t57 = (x2793>>(x2794+(x2795==x2796)));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x2837 = UINT16_MAX;
	uint8_t x2838 = 15U;
	int16_t x2839 = -1;

    t58 = (x2837>>(x2838+(x2839==x2840)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x2874 = 1U;

    t59 = (x2873>>(x2874+(x2875==x2876)));

    if (t59 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x2985 = 91U;
	uint64_t x2986 = 1LLU;
	volatile int32_t t60 = -410;

    t60 = (x2985>>(x2986+(x2987==x2988)));

    if (t60 != 45) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x3013 = INT32_MAX;
	int8_t x3014 = 5;
	int16_t x3016 = -151;
	int32_t t61 = -117428;

    t61 = (x3013>>(x3014+(x3015==x3016)));

    if (t61 != 67108863) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x3037 = UINT16_MAX;
	volatile uint16_t x3039 = 0U;
	static volatile int8_t x3040 = -1;
	volatile int32_t t62 = 0;

    t62 = (x3037>>(x3038+(x3039==x3040)));

    if (t62 != 4095) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x3070 = -1;
	static volatile int8_t x3071 = -1;
	int8_t x3072 = -1;
	int32_t t63 = 94880;

    t63 = (x3069>>(x3070+(x3071==x3072)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x3077 = UINT16_MAX;
	int64_t x3078 = -1LL;
	int32_t t64 = -49;

    t64 = (x3077>>(x3078+(x3079==x3080)));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x3117 = 3971U;
	uint8_t x3118 = 0U;
	uint16_t x3119 = UINT16_MAX;
	static int32_t x3120 = INT32_MAX;
	uint32_t t65 = 8997010U;

    t65 = (x3117>>(x3118+(x3119==x3120)));

    if (t65 != 3971U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x3358 = 1U;
	static int64_t x3359 = INT64_MIN;
	uint64_t x3360 = 437482623893801LLU;

    t66 = (x3357>>(x3358+(x3359==x3360)));

    if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x3389 = UINT8_MAX;
	int8_t x3390 = 5;
	volatile uint32_t x3391 = 4242U;
	int32_t x3392 = INT32_MAX;
	volatile int32_t t67 = 3302;

    t67 = (x3389>>(x3390+(x3391==x3392)));

    if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x3689 = UINT8_MAX;
	static uint8_t x3690 = 0U;
	int16_t x3691 = -91;

    t68 = (x3689>>(x3690+(x3691==x3692)));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3797 = INT16_MAX;
	volatile int8_t x3798 = 5;
	int8_t x3799 = -1;
	uint32_t x3800 = UINT32_MAX;
	volatile int32_t t69 = -23909299;

    t69 = (x3797>>(x3798+(x3799==x3800)));

    if (t69 != 511) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x3869 = UINT16_MAX;
	volatile uint16_t x3870 = 30U;
	static volatile uint16_t x3871 = UINT16_MAX;
	volatile int32_t t70 = 197184120;

    t70 = (x3869>>(x3870+(x3871==x3872)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x3893 = UINT64_MAX;
	uint16_t x3894 = 30U;
	uint8_t x3895 = 105U;
	uint64_t t71 = 425607LLU;

    t71 = (x3893>>(x3894+(x3895==x3896)));

    if (t71 != 17179869183LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x3913 = 59365064520770123LLU;
	static uint16_t x3914 = 43U;
	uint32_t x3915 = 170441U;

    t72 = (x3913>>(x3914+(x3915==x3916)));

    if (t72 != 6749LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x3929 = UINT8_MAX;
	volatile uint16_t x3931 = UINT16_MAX;
	static int16_t x3932 = 1;
	volatile int32_t t73 = -97851;

    t73 = (x3929>>(x3930+(x3931==x3932)));

    if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x3945 = 20138LL;
	uint64_t x3946 = 5LLU;
	uint32_t x3947 = 367704U;
	int32_t x3948 = INT32_MIN;
	volatile int64_t t74 = 2456965833316517349LL;

    t74 = (x3945>>(x3946+(x3947==x3948)));

    if (t74 != 629LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x3969 = UINT64_MAX;
	volatile uint8_t x3970 = 0U;
	volatile int16_t x3971 = INT16_MIN;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (x3969>>(x3970+(x3971==x3972)));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x4025 = 1617661202948LLU;
	uint16_t x4026 = 26U;
	volatile int16_t x4028 = INT16_MIN;

    t76 = (x4025>>(x4026+(x4027==x4028)));

    if (t76 != 24105LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x4069 = 398LL;
	static uint8_t x4070 = 51U;
	uint16_t x4071 = UINT16_MAX;
	int64_t t77 = 198693896107318942LL;

    t77 = (x4069>>(x4070+(x4071==x4072)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x4146 = 3U;
	int64_t x4147 = INT64_MIN;
	volatile uint8_t x4148 = UINT8_MAX;
	volatile int64_t t78 = 5188804313221755LL;

    t78 = (x4145>>(x4146+(x4147==x4148)));

    if (t78 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x4193 = UINT8_MAX;
	volatile int8_t x4194 = 1;
	int32_t x4195 = -1;
	int32_t x4196 = INT32_MIN;
	volatile int32_t t79 = 0;

    t79 = (x4193>>(x4194+(x4195==x4196)));

    if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x4209 = INT32_MAX;
	volatile uint16_t x4210 = 31U;
	int8_t x4211 = INT8_MIN;
	int8_t x4212 = -1;
	int32_t t80 = -28;

    t80 = (x4209>>(x4210+(x4211==x4212)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x4217 = UINT8_MAX;
	volatile uint8_t x4218 = 5U;
	int64_t x4219 = INT64_MIN;
	int32_t t81 = 244189450;

    t81 = (x4217>>(x4218+(x4219==x4220)));

    if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x4265 = 122367LL;
	int8_t x4266 = 7;
	int32_t x4267 = 1471;
	uint64_t x4268 = 229582393834681LLU;
	int64_t t82 = -7269787335049LL;

    t82 = (x4265>>(x4266+(x4267==x4268)));

    if (t82 != 955LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x4353 = UINT16_MAX;
	volatile uint16_t x4354 = 7U;
	uint8_t x4356 = 1U;
	int32_t t83 = 136175869;

    t83 = (x4353>>(x4354+(x4355==x4356)));

    if (t83 != 511) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x4401 = 3;
	static int8_t x4404 = -1;
	int32_t t84 = 267855805;

    t84 = (x4401>>(x4402+(x4403==x4404)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x4565 = 3LLU;
	int8_t x4566 = 0;
	int32_t x4568 = INT32_MIN;
	volatile uint64_t t85 = 26101400426292618LLU;

    t85 = (x4565>>(x4566+(x4567==x4568)));

    if (t85 != 3LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x4569 = 1U;
	static int16_t x4570 = 9;
	int64_t x4571 = 24531491491805756LL;
	static int16_t x4572 = INT16_MIN;
	int32_t t86 = 122072142;

    t86 = (x4569>>(x4570+(x4571==x4572)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x4581 = 44U;
	int8_t x4582 = 0;
	int8_t x4583 = INT8_MIN;
	int32_t x4584 = 117;
	volatile int32_t t87 = -238;

    t87 = (x4581>>(x4582+(x4583==x4584)));

    if (t87 != 44) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x4585 = 0U;
	uint16_t x4586 = 1U;
	uint64_t x4587 = UINT64_MAX;
	static int32_t x4588 = -1;
	int32_t t88 = -3602635;

    t88 = (x4585>>(x4586+(x4587==x4588)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x4617 = 3U;
	volatile uint8_t x4619 = 21U;
	uint16_t x4620 = 2U;
	uint32_t t89 = 467U;

    t89 = (x4617>>(x4618+(x4619==x4620)));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x4671 = INT16_MIN;
	int64_t x4672 = -1LL;

    t90 = (x4669>>(x4670+(x4671==x4672)));

    if (t90 != 82406U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x4733 = 178485;
	uint8_t x4734 = 3U;
	int16_t x4735 = INT16_MAX;
	static int16_t x4736 = INT16_MAX;

    t91 = (x4733>>(x4734+(x4735==x4736)));

    if (t91 != 11155) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x4881 = 53U;
	int8_t x4882 = -1;
	volatile int8_t x4883 = -1;
	int16_t x4884 = -1;
	int32_t t92 = -53;

    t92 = (x4881>>(x4882+(x4883==x4884)));

    if (t92 != 53) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x4885 = UINT32_MAX;
	uint64_t x4886 = 0LLU;
	int8_t x4887 = INT8_MAX;
	static int32_t x4888 = -1;
	uint32_t t93 = UINT32_MAX;

    t93 = (x4885>>(x4886+(x4887==x4888)));

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x4969 = INT64_MAX;
	volatile uint8_t x4970 = 1U;
	int64_t x4971 = 50598461505725LL;
	int32_t x4972 = 8039;

    t94 = (x4969>>(x4970+(x4971==x4972)));

    if (t94 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x4989 = 0U;
	int16_t x4990 = 1;
	int8_t x4991 = INT8_MIN;
	int8_t x4992 = -1;
	int32_t t95 = 8506274;

    t95 = (x4989>>(x4990+(x4991==x4992)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x4994 = 13U;
	static int64_t x4995 = -1LL;
	int8_t x4996 = INT8_MIN;
	volatile uint32_t t96 = 891742U;

    t96 = (x4993>>(x4994+(x4995==x4996)));

    if (t96 != 524287U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x5029 = 3LLU;
	uint32_t x5031 = 172301U;
	uint64_t x5032 = 14719335858LLU;
	static volatile uint64_t t97 = 5LLU;

    t97 = (x5029>>(x5030+(x5031==x5032)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x5205 = 33228517390LLU;
	static int16_t x5206 = 2;
	int16_t x5207 = -1;
	volatile uint64_t t98 = 4LLU;

    t98 = (x5205>>(x5206+(x5207==x5208)));

    if (t98 != 4153564673LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x5237 = 1589;
	int64_t x5240 = INT64_MIN;
	int32_t t99 = 1;

    t99 = (x5237>>(x5238+(x5239==x5240)));

    if (t99 != 198) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x5241 = INT64_MAX;
	int8_t x5242 = 1;
	uint32_t x5243 = UINT32_MAX;
	int8_t x5244 = 6;
	volatile int64_t t100 = 55120201182950846LL;

    t100 = (x5241>>(x5242+(x5243==x5244)));

    if (t100 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x5257 = INT64_MAX;
	static uint16_t x5258 = 15U;
	uint8_t x5259 = 7U;

    t101 = (x5257>>(x5258+(x5259==x5260)));

    if (t101 != 281474976710655LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x5338 = 2;
	int8_t x5339 = INT8_MIN;
	uint16_t x5340 = 6065U;

    t102 = (x5337>>(x5338+(x5339==x5340)));

    if (t102 != 536870911) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x5405 = 209LLU;
	static int8_t x5406 = 9;
	static volatile uint64_t t103 = 51226024692213LLU;

    t103 = (x5405>>(x5406+(x5407==x5408)));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x5445 = UINT8_MAX;
	volatile uint64_t x5447 = UINT64_MAX;
	int64_t x5448 = 2486316906550348LL;
	int32_t t104 = -207198540;

    t104 = (x5445>>(x5446+(x5447==x5448)));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x5493 = 3;
	int64_t x5496 = INT64_MIN;
	static volatile int32_t t105 = 34;

    t105 = (x5493>>(x5494+(x5495==x5496)));

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int64_t x5501 = INT64_MAX;
	uint8_t x5502 = 7U;
	static int64_t x5503 = -4731273995531902LL;
	int8_t x5504 = INT8_MIN;
	volatile int64_t t106 = 33610293895655LL;

    t106 = (x5501>>(x5502+(x5503==x5504)));

    if (t106 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x5509 = 118U;
	int16_t x5510 = 1;
	int8_t x5511 = INT8_MIN;
	int32_t x5512 = 14248517;
	int32_t t107 = 230;

    t107 = (x5509>>(x5510+(x5511==x5512)));

    if (t107 != 59) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x5557 = INT16_MAX;
	uint16_t x5558 = 2U;
	int32_t x5559 = -1;
	int32_t t108 = 1;

    t108 = (x5557>>(x5558+(x5559==x5560)));

    if (t108 != 8191) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x5589 = 332571U;
	uint16_t x5590 = 5U;
	volatile int64_t x5591 = INT64_MIN;
	int32_t x5592 = 1;
	volatile uint32_t t109 = 11U;

    t109 = (x5589>>(x5590+(x5591==x5592)));

    if (t109 != 10392U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x5621 = 7117U;
	int8_t x5623 = INT8_MIN;
	int16_t x5624 = -1910;
	int32_t t110 = -19630;

    t110 = (x5621>>(x5622+(x5623==x5624)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x5625 = INT16_MAX;
	uint8_t x5626 = 2U;
	int8_t x5627 = -1;
	int16_t x5628 = INT16_MIN;
	static int32_t t111 = -2;

    t111 = (x5625>>(x5626+(x5627==x5628)));

    if (t111 != 8191) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x5702 = 26LL;
	int64_t x5703 = INT64_MIN;

    t112 = (x5701>>(x5702+(x5703==x5704)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x5767 = -131;
	uint8_t x5768 = 1U;
	int32_t t113 = -70770;

    t113 = (x5765>>(x5766+(x5767==x5768)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x5769 = 18232U;
	int32_t x5770 = 0;
	volatile int32_t x5771 = INT32_MAX;
	int8_t x5772 = 26;
	uint32_t t114 = 1573U;

    t114 = (x5769>>(x5770+(x5771==x5772)));

    if (t114 != 18232U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x5777 = UINT16_MAX;
	uint8_t x5778 = 14U;
	int32_t x5780 = INT32_MIN;
	volatile int32_t t115 = -273;

    t115 = (x5777>>(x5778+(x5779==x5780)));

    if (t115 != 3) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x5829 = 2063LL;
	uint8_t x5830 = 0U;
	volatile uint32_t x5831 = UINT32_MAX;
	volatile int64_t x5832 = -2496LL;
	int64_t t116 = 1LL;

    t116 = (x5829>>(x5830+(x5831==x5832)));

    if (t116 != 2063LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x5837 = UINT64_MAX;
	uint8_t x5838 = 1U;
	static int32_t x5839 = -26303932;
	int16_t x5840 = 16302;
	uint64_t t117 = 44LLU;

    t117 = (x5837>>(x5838+(x5839==x5840)));

    if (t117 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x5901 = INT8_MAX;
	static uint16_t x5902 = 3U;
	int16_t x5904 = INT16_MIN;
	static int32_t t118 = 5;

    t118 = (x5901>>(x5902+(x5903==x5904)));

    if (t118 != 15) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x5933 = INT16_MAX;
	int8_t x5934 = 0;
	uint8_t x5935 = UINT8_MAX;
	int32_t t119 = 20607922;

    t119 = (x5933>>(x5934+(x5935==x5936)));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x6022 = 3;
	int64_t x6023 = -1LL;
	static volatile uint64_t x6024 = UINT64_MAX;
	int32_t t120 = 11913;

    t120 = (x6021>>(x6022+(x6023==x6024)));

    if (t120 != 2047) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x6045 = 6;
	uint8_t x6046 = 2U;
	int32_t x6047 = -54;
	int32_t x6048 = 14641799;
	static int32_t t121 = -257965307;

    t121 = (x6045>>(x6046+(x6047==x6048)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x6049 = INT64_MAX;
	static int16_t x6050 = -1;
	volatile int8_t x6051 = -1;
	int8_t x6052 = -1;

    t122 = (x6049>>(x6050+(x6051==x6052)));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x6061 = 2LLU;
	int32_t x6062 = 7;
	uint16_t x6063 = UINT16_MAX;
	uint64_t t123 = 6592LLU;

    t123 = (x6061>>(x6062+(x6063==x6064)));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x6149 = 43334;
	int32_t x6150 = 1;
	static int32_t x6151 = 48579;
	int32_t x6152 = -1;
	static volatile int32_t t124 = 0;

    t124 = (x6149>>(x6150+(x6151==x6152)));

    if (t124 != 21667) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x6169 = INT16_MAX;
	static uint64_t x6170 = 10LLU;
	uint16_t x6171 = 1264U;
	int32_t x6172 = -1;
	static int32_t t125 = -751178;

    t125 = (x6169>>(x6170+(x6171==x6172)));

    if (t125 != 31) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x6193 = 4U;
	int64_t x6194 = 5LL;
	uint32_t x6195 = 9032U;
	int32_t t126 = -707232;

    t126 = (x6193>>(x6194+(x6195==x6196)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x6261 = INT64_MAX;
	static volatile int8_t x6262 = 2;
	static int16_t x6264 = INT16_MAX;

    t127 = (x6261>>(x6262+(x6263==x6264)));

    if (t127 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x6297 = 16023U;
	static uint8_t x6299 = UINT8_MAX;
	int8_t x6300 = INT8_MIN;
	static volatile int32_t t128 = 150;

    t128 = (x6297>>(x6298+(x6299==x6300)));

    if (t128 != 8011) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x6370 = 1U;
	static int64_t x6372 = -1LL;
	int32_t t129 = 106467;

    t129 = (x6369>>(x6370+(x6371==x6372)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x6373 = 5803956LL;
	volatile uint8_t x6374 = 1U;
	int8_t x6375 = INT8_MIN;
	volatile int8_t x6376 = -1;
	static volatile int64_t t130 = 59862465476479502LL;

    t130 = (x6373>>(x6374+(x6375==x6376)));

    if (t130 != 2901978LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x6401 = UINT8_MAX;
	uint8_t x6402 = 0U;
	int8_t x6403 = 31;
	int8_t x6404 = -2;
	static int32_t t131 = -232513;

    t131 = (x6401>>(x6402+(x6403==x6404)));

    if (t131 != 255) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x6415 = INT8_MAX;
	int32_t x6416 = 29280006;

    t132 = (x6413>>(x6414+(x6415==x6416)));

    if (t132 != 8191) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x6421 = 7231390276103LL;
	uint32_t x6422 = 16U;
	int32_t x6423 = 125;

    t133 = (x6421>>(x6422+(x6423==x6424)));

    if (t133 != 110342258LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x6437 = 3;
	int16_t x6438 = -1;
	int8_t x6439 = -1;
	volatile int16_t x6440 = -1;
	int32_t t134 = -330929975;

    t134 = (x6437>>(x6438+(x6439==x6440)));

    if (t134 != 3) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x6653 = 4209313329086929428LLU;
	int64_t x6655 = INT64_MIN;
	static uint64_t t135 = 3LLU;

    t135 = (x6653>>(x6654+(x6655==x6656)));

    if (t135 != 65770520766983272LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x6685 = 18112U;
	static int32_t t136 = 54;

    t136 = (x6685>>(x6686+(x6687==x6688)));

    if (t136 != 2264) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x6817 = UINT16_MAX;
	int8_t x6820 = -1;
	static volatile int32_t t137 = -2003131;

    t137 = (x6817>>(x6818+(x6819==x6820)));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x6849 = INT64_MAX;
	uint8_t x6850 = 17U;
	volatile int8_t x6852 = 36;
	int64_t t138 = 204390261036LL;

    t138 = (x6849>>(x6850+(x6851==x6852)));

    if (t138 != 70368744177663LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x6917 = 2U;
	uint32_t x6918 = 1U;
	int8_t x6920 = INT8_MAX;
	static volatile int32_t t139 = -1138;

    t139 = (x6917>>(x6918+(x6919==x6920)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x6954 = 22;
	volatile int16_t x6955 = INT16_MIN;
	int8_t x6956 = INT8_MIN;
	static int32_t t140 = -644;

    t140 = (x6953>>(x6954+(x6955==x6956)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x7081 = 1U;
	uint8_t x7082 = 3U;
	static volatile uint64_t x7084 = 30083LLU;
	volatile int32_t t141 = -1;

    t141 = (x7081>>(x7082+(x7083==x7084)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x7161 = INT32_MAX;
	volatile int8_t x7163 = -62;
	volatile uint32_t x7164 = 2U;
	volatile int32_t t142 = INT32_MAX;

    t142 = (x7161>>(x7162+(x7163==x7164)));

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x7169 = 11;
	static uint8_t x7170 = 6U;

    t143 = (x7169>>(x7170+(x7171==x7172)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x7198 = 12U;
	uint32_t x7199 = 5578248U;
	int16_t x7200 = INT16_MAX;
	volatile uint32_t t144 = 1915024U;

    t144 = (x7197>>(x7198+(x7199==x7200)));

    if (t144 != 1048575U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x7241 = 27U;
	uint32_t x7243 = 643841672U;
	int32_t x7244 = INT32_MAX;
	volatile int32_t t145 = 1963;

    t145 = (x7241>>(x7242+(x7243==x7244)));

    if (t145 != 3) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x7293 = 1U;
	uint16_t x7294 = 7U;
	volatile int32_t t146 = -1685635;

    t146 = (x7293>>(x7294+(x7295==x7296)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x7302 = 4U;
	volatile uint64_t x7303 = UINT64_MAX;
	int8_t x7304 = -1;
	volatile uint64_t t147 = 28538247576LLU;

    t147 = (x7301>>(x7302+(x7303==x7304)));

    if (t147 != 2966476LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x7306 = 1;
	int64_t x7307 = INT64_MIN;
	uint16_t x7308 = 6U;
	volatile int32_t t148 = 74141664;

    t148 = (x7305>>(x7306+(x7307==x7308)));

    if (t148 != 3) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x7381 = 32434U;
	uint8_t x7382 = 3U;
	static int32_t x7383 = -53;
	volatile uint64_t x7384 = 7049788740336296045LLU;
	int32_t t149 = -1821;

    t149 = (x7381>>(x7382+(x7383==x7384)));

    if (t149 != 4054) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x7414 = 7U;
	int16_t x7415 = INT16_MAX;
	static int16_t x7416 = INT16_MIN;
	static volatile uint32_t t150 = 0U;

    t150 = (x7413>>(x7414+(x7415==x7416)));

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x7421 = UINT8_MAX;
	uint64_t x7423 = 6238638606LLU;
	static uint32_t x7424 = 123U;
	static int32_t t151 = -78261009;

    t151 = (x7421>>(x7422+(x7423==x7424)));

    if (t151 != 63) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x7525 = 3844U;
	volatile int64_t x7527 = INT64_MIN;
	int32_t x7528 = INT32_MAX;

    t152 = (x7525>>(x7526+(x7527==x7528)));

    if (t152 != 961) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t t153 = 38752;

    t153 = (x7605>>(x7606+(x7607==x7608)));

    if (t153 != 12988) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x7614 = 1;
	volatile int64_t x7615 = INT64_MIN;
	static uint16_t x7616 = UINT16_MAX;

    t154 = (x7613>>(x7614+(x7615==x7616)));

    if (t154 != 51) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x7676 = -7440917699266794LL;
	volatile int32_t t155 = -16246;

    t155 = (x7673>>(x7674+(x7675==x7676)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x7765 = UINT64_MAX;
	uint64_t x7766 = UINT64_MAX;
	int64_t x7767 = INT64_MIN;
	int64_t x7768 = INT64_MIN;
	volatile uint64_t t156 = UINT64_MAX;

    t156 = (x7765>>(x7766+(x7767==x7768)));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x7814 = 4U;
	int64_t x7815 = -1LL;
	volatile int64_t x7816 = INT64_MAX;
	int32_t t157 = 0;

    t157 = (x7813>>(x7814+(x7815==x7816)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x7833 = 3074679U;
	int16_t x7834 = 1;
	int8_t x7835 = -6;

    t158 = (x7833>>(x7834+(x7835==x7836)));

    if (t158 != 1537339U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x7853 = 0U;
	static uint8_t x7854 = 3U;
	static int16_t x7855 = -16160;
	int8_t x7856 = 1;
	int32_t t159 = -36928032;

    t159 = (x7853>>(x7854+(x7855==x7856)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x7875 = 31210682414223282LL;
	int8_t x7876 = -1;
	static int32_t t160 = 17349;

    t160 = (x7873>>(x7874+(x7875==x7876)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x7897 = 41U;
	volatile uint8_t x7898 = 10U;
	int16_t x7899 = INT16_MAX;
	int16_t x7900 = INT16_MAX;
	int32_t t161 = 4704;

    t161 = (x7897>>(x7898+(x7899==x7900)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x7913 = 7127U;
	uint16_t x7914 = 27U;
	int32_t t162 = 406;

    t162 = (x7913>>(x7914+(x7915==x7916)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x7985 = 1;
	uint8_t x7986 = 1U;
	volatile int64_t x7987 = -1LL;
	int16_t x7988 = INT16_MIN;
	static volatile int32_t t163 = -24477;

    t163 = (x7985>>(x7986+(x7987==x7988)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x8153 = 0;
	uint64_t x8154 = 22LLU;
	int32_t x8155 = 105;
	uint32_t x8156 = 23092U;
	int32_t t164 = 41611;

    t164 = (x8153>>(x8154+(x8155==x8156)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x8209 = 193U;
	int8_t x8210 = 0;
	int64_t x8211 = INT64_MIN;
	uint64_t x8212 = 1401LLU;

    t165 = (x8209>>(x8210+(x8211==x8212)));

    if (t165 != 193U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x8229 = 6522051U;
	int8_t x8230 = 2;
	uint8_t x8231 = UINT8_MAX;
	int32_t x8232 = -1;
	static uint32_t t166 = 114U;

    t166 = (x8229>>(x8230+(x8231==x8232)));

    if (t166 != 1630512U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x8285 = 31U;
	uint16_t x8286 = 0U;
	int64_t x8288 = -128792307584LL;
	volatile int32_t t167 = -787783091;

    t167 = (x8285>>(x8286+(x8287==x8288)));

    if (t167 != 31) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x8329 = 971605U;
	static int8_t x8331 = INT8_MIN;
	uint32_t x8332 = 2U;
	static uint32_t t168 = 12915U;

    t168 = (x8329>>(x8330+(x8331==x8332)));

    if (t168 != 7590U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x8369 = 32141U;
	static uint8_t x8370 = 0U;
	int32_t x8371 = -1;
	int32_t x8372 = -12;
	int32_t t169 = -2;

    t169 = (x8369>>(x8370+(x8371==x8372)));

    if (t169 != 32141) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x8429 = 36LLU;
	static volatile uint16_t x8430 = 44U;
	static int32_t x8432 = INT32_MIN;
	volatile uint64_t t170 = 424898LLU;

    t170 = (x8429>>(x8430+(x8431==x8432)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x8474 = 3U;
	uint32_t x8475 = UINT32_MAX;
	int32_t x8476 = INT32_MAX;
	int32_t t171 = -104;

    t171 = (x8473>>(x8474+(x8475==x8476)));

    if (t171 != 268435455) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x8493 = 201U;
	volatile uint16_t x8494 = 0U;
	volatile int8_t x8495 = INT8_MIN;

    t172 = (x8493>>(x8494+(x8495==x8496)));

    if (t172 != 201) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x8533 = UINT16_MAX;
	uint8_t x8534 = 1U;
	int32_t x8535 = INT32_MIN;
	static uint64_t x8536 = 90871458LLU;
	int32_t t173 = 120160;

    t173 = (x8533>>(x8534+(x8535==x8536)));

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x8589 = UINT64_MAX;
	uint8_t x8590 = 1U;
	static uint64_t x8592 = UINT64_MAX;
	uint64_t t174 = 50897716943393936LLU;

    t174 = (x8589>>(x8590+(x8591==x8592)));

    if (t174 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x8603 = 642223LLU;
	int32_t x8604 = -2499211;
	int32_t t175 = -1147;

    t175 = (x8601>>(x8602+(x8603==x8604)));

    if (t175 != 22) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x8677 = 1;
	uint8_t x8678 = 0U;
	static int32_t x8680 = INT32_MAX;
	static volatile int32_t t176 = -13231;

    t176 = (x8677>>(x8678+(x8679==x8680)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x8693 = 0U;
	volatile uint64_t x8695 = 46LLU;
	uint8_t x8696 = 2U;
	volatile int32_t t177 = 142;

    t177 = (x8693>>(x8694+(x8695==x8696)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x8746 = 0U;
	int16_t x8747 = -157;
	int8_t x8748 = 30;

    t178 = (x8745>>(x8746+(x8747==x8748)));

    if (t178 != INT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x8757 = 1U;
	uint8_t x8758 = 0U;
	volatile int64_t x8759 = INT64_MAX;
	int32_t x8760 = -1;
	volatile int32_t t179 = -252983013;

    t179 = (x8757>>(x8758+(x8759==x8760)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x8837 = INT8_MAX;
	volatile uint16_t x8838 = 30U;
	static uint8_t x8840 = UINT8_MAX;
	int32_t t180 = 343;

    t180 = (x8837>>(x8838+(x8839==x8840)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x8985 = INT64_MAX;
	int8_t x8986 = 5;
	int8_t x8987 = 51;
	int8_t x8988 = -3;
	int64_t t181 = 132599917359152LL;

    t181 = (x8985>>(x8986+(x8987==x8988)));

    if (t181 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x8997 = 0LLU;
	uint8_t x8998 = 60U;
	static int32_t x9000 = INT32_MIN;

    t182 = (x8997>>(x8998+(x8999==x9000)));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x9009 = 3112103U;
	uint8_t x9010 = 3U;
	volatile uint32_t x9011 = 388U;
	volatile uint32_t x9012 = UINT32_MAX;
	uint32_t t183 = 16778244U;

    t183 = (x9009>>(x9010+(x9011==x9012)));

    if (t183 != 389012U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x9085 = UINT64_MAX;
	volatile uint16_t x9086 = 1U;
	int8_t x9087 = INT8_MAX;
	int16_t x9088 = INT16_MIN;

    t184 = (x9085>>(x9086+(x9087==x9088)));

    if (t184 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x9101 = UINT16_MAX;
	int16_t x9102 = 31;
	volatile int32_t t185 = -319275;

    t185 = (x9101>>(x9102+(x9103==x9104)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x9109 = UINT16_MAX;
	uint8_t x9110 = 1U;
	volatile int64_t x9111 = INT64_MAX;
	int64_t x9112 = 1005964180729681360LL;

    t186 = (x9109>>(x9110+(x9111==x9112)));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x9209 = 3U;
	uint16_t x9210 = 1U;
	static volatile int16_t x9211 = INT16_MIN;
	uint16_t x9212 = 262U;
	volatile int32_t t187 = 20644;

    t187 = (x9209>>(x9210+(x9211==x9212)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x9269 = 145764LL;
	int8_t x9270 = 1;
	static uint16_t x9271 = 45U;
	static int8_t x9272 = INT8_MIN;
	volatile int64_t t188 = -23430279LL;

    t188 = (x9269>>(x9270+(x9271==x9272)));

    if (t188 != 72882LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x9273 = UINT16_MAX;
	uint8_t x9274 = 23U;
	uint64_t x9276 = 13843166921373LLU;

    t189 = (x9273>>(x9274+(x9275==x9276)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x9281 = 1;
	volatile int16_t x9282 = 0;
	int16_t x9283 = INT16_MIN;
	int8_t x9284 = -1;
	volatile int32_t t190 = 759447229;

    t190 = (x9281>>(x9282+(x9283==x9284)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x9305 = 6U;
	int8_t x9306 = 16;
	uint8_t x9307 = 11U;
	static int32_t x9308 = 4;

    t191 = (x9305>>(x9306+(x9307==x9308)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x9422 = 56U;
	uint16_t x9423 = 2444U;
	int64_t x9424 = INT64_MAX;
	volatile int64_t t192 = -97516494LL;

    t192 = (x9421>>(x9422+(x9423==x9424)));

    if (t192 != 127LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x9565 = INT16_MAX;
	uint8_t x9566 = 5U;
	int16_t x9567 = INT16_MAX;
	int32_t x9568 = INT32_MIN;
	static int32_t t193 = 3491097;

    t193 = (x9565>>(x9566+(x9567==x9568)));

    if (t193 != 1023) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x9701 = 834U;
	static uint8_t x9702 = 19U;
	int8_t x9703 = -1;
	volatile uint32_t x9704 = 2102330288U;
	volatile int32_t t194 = -12601;

    t194 = (x9701>>(x9702+(x9703==x9704)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x9765 = UINT16_MAX;
	int32_t x9767 = INT32_MIN;
	static volatile int8_t x9768 = -3;
	volatile int32_t t195 = -6510137;

    t195 = (x9765>>(x9766+(x9767==x9768)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x9781 = 7U;
	uint32_t x9782 = UINT32_MAX;
	int8_t x9783 = INT8_MIN;
	volatile uint32_t t196 = 0U;

    t196 = (x9781>>(x9782+(x9783==x9784)));

    if (t196 != 7U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x9849 = 2807U;
	int8_t x9850 = 6;
	static uint8_t x9851 = 4U;
	static uint8_t x9852 = 121U;
	int32_t t197 = -77645;

    t197 = (x9849>>(x9850+(x9851==x9852)));

    if (t197 != 43) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x9865 = 99095955947850746LLU;
	static int32_t x9867 = -1;
	uint16_t x9868 = UINT16_MAX;
	static uint64_t t198 = 988451LLU;

    t198 = (x9865>>(x9866+(x9867==x9868)));

    if (t198 != 774187155842583LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x9901 = INT16_MAX;
	volatile uint8_t x9902 = 5U;
	volatile int8_t x9903 = INT8_MIN;
	int32_t x9904 = -222;
	int32_t t199 = 0;

    t199 = (x9901>>(x9902+(x9903==x9904)));

    if (t199 != 1023) { NG(); } else { ; }
	
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

