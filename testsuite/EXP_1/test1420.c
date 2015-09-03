#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x21 = INT16_MAX;
volatile uint32_t x23 = 15U;
static volatile int16_t x24 = INT16_MIN;
static uint32_t x57 = 3739U;
volatile int8_t x58 = 0;
volatile int32_t t4 = -1;
int64_t x128 = 6273287831475LL;
int64_t x198 = INT64_MIN;
uint32_t x199 = 2U;
volatile uint16_t x265 = 8845U;
static volatile uint16_t x267 = 5U;
static volatile uint64_t t8 = 354519062353953LLU;
int32_t t9 = -3;
int32_t t10 = 0;
uint64_t x436 = UINT64_MAX;
volatile int64_t x537 = 1078378229513426898LL;
int16_t x695 = 0;
uint64_t t23 = 6467568936LLU;
static uint16_t x757 = UINT16_MAX;
static volatile uint64_t x759 = 0LLU;
volatile int32_t t24 = 12790;
uint8_t x785 = UINT8_MAX;
int64_t x786 = INT64_MIN;
uint8_t x877 = 1U;
int32_t t27 = 3473653;
volatile uint32_t x899 = 6U;
static int8_t x918 = INT8_MIN;
uint64_t x920 = UINT64_MAX;
int32_t x994 = 310;
uint8_t x996 = 1U;
uint32_t t32 = 1301U;
int32_t x1114 = INT32_MIN;
volatile int8_t x1136 = INT8_MAX;
volatile int16_t x1197 = 11;
volatile uint16_t x1199 = 5U;
int32_t t38 = 533626;
static uint64_t x1234 = 439394623LLU;
uint64_t x1448 = 1588000236LLU;
uint64_t t43 = 26225104484702LLU;
uint64_t x1453 = 3053883756393LLU;
volatile uint8_t x1455 = 20U;
int16_t x1469 = 3;
static uint16_t x1470 = 1018U;
int32_t t45 = -41614;
int8_t x1523 = 2;
volatile int32_t t46 = 16;
static uint16_t x1540 = UINT16_MAX;
int16_t x1620 = 3559;
volatile int32_t x1630 = 16;
static uint8_t x1631 = 3U;
uint8_t x1657 = 76U;
int32_t t50 = 1806;
static uint32_t x1697 = UINT32_MAX;
int32_t t51 = 7;
static int32_t x1721 = 36;
int64_t x1722 = -154644997LL;
int64_t x1734 = INT64_MAX;
int64_t x1738 = INT64_MIN;
static int32_t t57 = 3768;
int32_t t58 = -21;
static int32_t t59 = -37;
int8_t x1925 = INT8_MAX;
uint8_t x1935 = 5U;
int32_t x1938 = INT32_MIN;
uint32_t x2004 = UINT32_MAX;
uint64_t x2097 = UINT64_MAX;
static int32_t t67 = -43207;
int8_t x2154 = INT8_MIN;
int8_t x2156 = INT8_MAX;
static int32_t t71 = -469;
volatile uint8_t x2275 = 1U;
static int64_t x2276 = INT64_MIN;
uint8_t x2342 = 0U;
volatile int64_t x2343 = 1LL;
volatile int32_t t77 = -793590;
int64_t x2558 = INT64_MIN;
volatile uint64_t x2615 = 6LLU;
int32_t x2616 = -1090984;
static int16_t x2649 = INT16_MIN;
int64_t x2717 = -9734753908LL;
uint16_t x2719 = 24U;
uint64_t t84 = 163880LLU;
uint8_t x2759 = 0U;
volatile int32_t t85 = 205227797;
uint16_t x2835 = 1U;
volatile int32_t t86 = 3073;
int32_t x2924 = INT32_MIN;
volatile int32_t t88 = 1;
int16_t x2940 = -1;
volatile int16_t x3065 = -1;
static int8_t x3101 = -6;
int16_t x3125 = -1221;
static volatile int64_t t95 = -100LL;
uint64_t x3365 = 5449835750853LLU;
int32_t x3406 = -53932750;
volatile int16_t x3407 = 2;


void f0(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x6 = 8665555136848380895LLU;
	volatile uint64_t x7 = 1LLU;
	uint8_t x8 = 6U;
	volatile int32_t t0 = -3150002;

	t0 = (((x5<x6)<<x7)*x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x22 = 7835U;
	int32_t t1 = -1;

	t1 = (((x21<x22)<<x23)*x24);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = INT64_MIN;
	static int16_t x26 = 16201;
	static uint16_t x27 = 23U;
	int8_t x28 = INT8_MIN;
	volatile int32_t t2 = 431704;

	t2 = (((x25<x26)<<x27)*x28);

	if (t2 != -1073741824) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x59 = 16U;
	static int8_t x60 = -1;
	volatile int32_t t3 = -6990;

	t3 = (((x57<x58)<<x59)*x60);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x85 = 21902438648LLU;
	int64_t x86 = -13LL;
	uint32_t x87 = 5U;
	int8_t x88 = 1;

	t4 = (((x85<x86)<<x87)*x88);

	if (t4 != 32) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x97 = INT32_MAX;
	static int64_t x98 = INT64_MIN;
	int64_t x99 = 0LL;
	volatile int32_t x100 = -468;
	volatile int32_t t5 = -116;

	t5 = (((x97<x98)<<x99)*x100);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x125 = INT32_MAX;
	uint8_t x126 = 36U;
	uint16_t x127 = 2U;
	int64_t t6 = -46267LL;

	t6 = (((x125<x126)<<x127)*x128);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x197 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t7 = 3749;

	t7 = (((x197<x198)<<x199)*x200);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x266 = -21;
	uint64_t x268 = 0LLU;

	t8 = (((x265<x266)<<x267)*x268);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x301 = UINT16_MAX;
	int32_t x302 = -3862440;
	static int16_t x303 = 4;
	int32_t x304 = -42;

	t9 = (((x301<x302)<<x303)*x304);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = -873847LL;
	int8_t x315 = 0;
	int32_t x316 = INT32_MIN;

	t10 = (((x313<x314)<<x315)*x316);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MAX;
	int8_t x335 = 2;
	volatile int64_t x336 = -385547202762LL;
	volatile int64_t t11 = -10555171353929LL;

	t11 = (((x333<x334)<<x335)*x336);

	if (t11 != -1542188811048LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x337 = 1;
	int64_t x338 = INT64_MIN;
	uint8_t x339 = 9U;
	int16_t x340 = 719;
	int32_t t12 = 14447;

	t12 = (((x337<x338)<<x339)*x340);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x369 = UINT8_MAX;
	int8_t x370 = -1;
	int16_t x371 = 0;
	int8_t x372 = 28;
	static volatile int32_t t13 = 203779;

	t13 = (((x369<x370)<<x371)*x372);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x385 = INT32_MIN;
	static int8_t x386 = INT8_MAX;
	static uint64_t x387 = 1LLU;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t14 = 66204272;

	t14 = (((x385<x386)<<x387)*x388);

	if (t14 != -256) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x397 = INT16_MIN;
	uint32_t x398 = 8204U;
	uint8_t x399 = 27U;
	uint64_t x400 = UINT64_MAX;
	uint64_t t15 = 3LLU;

	t15 = (((x397<x398)<<x399)*x400);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x417 = -2629LL;
	static volatile int8_t x418 = -1;
	uint8_t x419 = 0U;
	static int16_t x420 = -405;
	int32_t t16 = 2601;

	t16 = (((x417<x418)<<x419)*x420);

	if (t16 != -405) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x429 = INT32_MIN;
	int16_t x430 = -4;
	int8_t x431 = 5;
	uint64_t x432 = 11371577499822LLU;
	static volatile uint64_t t17 = 458583835375LLU;

	t17 = (((x429<x430)<<x431)*x432);

	if (t17 != 363890479994304LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x433 = 5431LLU;
	int8_t x434 = -1;
	static uint8_t x435 = 4U;
	uint64_t t18 = 4286291318380431404LLU;

	t18 = (((x433<x434)<<x435)*x436);

	if (t18 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x477 = 1074229167672382500LLU;
	int16_t x478 = -1;
	int8_t x479 = 4;
	int8_t x480 = INT8_MAX;
	volatile int32_t t19 = -310584;

	t19 = (((x477<x478)<<x479)*x480);

	if (t19 != 2032) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x497 = 219865U;
	volatile int8_t x498 = INT8_MIN;
	uint16_t x499 = 10U;
	static int16_t x500 = 129;
	volatile int32_t t20 = -30773;

	t20 = (((x497<x498)<<x499)*x500);

	if (t20 != 132096) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x538 = UINT64_MAX;
	static int16_t x539 = 0;
	int8_t x540 = INT8_MIN;
	volatile int32_t t21 = 1708;

	t21 = (((x537<x538)<<x539)*x540);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x641 = UINT32_MAX;
	int16_t x642 = -92;
	static volatile int8_t x643 = 1;
	static uint8_t x644 = 4U;
	int32_t t22 = -61;

	t22 = (((x641<x642)<<x643)*x644);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x693 = 16497077959181LLU;
	static uint16_t x694 = UINT16_MAX;
	uint64_t x696 = UINT64_MAX;

	t23 = (((x693<x694)<<x695)*x696);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x758 = -1;
	int16_t x760 = INT16_MIN;

	t24 = (((x757<x758)<<x759)*x760);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x765 = UINT64_MAX;
	int8_t x766 = INT8_MAX;
	uint16_t x767 = 4U;
	int16_t x768 = -1;
	volatile int32_t t25 = -33525;

	t25 = (((x765<x766)<<x767)*x768);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x787 = 1U;
	int16_t x788 = INT16_MIN;
	volatile int32_t t26 = 243619216;

	t26 = (((x785<x786)<<x787)*x788);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x878 = INT64_MIN;
	uint8_t x879 = 1U;
	uint16_t x880 = 2U;

	t27 = (((x877<x878)<<x879)*x880);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x897 = 2;
	static int32_t x898 = -3654814;
	volatile int32_t x900 = INT32_MIN;
	int32_t t28 = 24;

	t28 = (((x897<x898)<<x899)*x900);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x917 = 3047254100447LLU;
	volatile uint16_t x919 = 1U;
	volatile uint64_t t29 = 62390449394640LLU;

	t29 = (((x917<x918)<<x919)*x920);

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x993 = 4;
	uint32_t x995 = 0U;
	volatile int32_t t30 = 6619;

	t30 = (((x993<x994)<<x995)*x996);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1013 = 302U;
	uint64_t x1014 = UINT64_MAX;
	int16_t x1015 = 30;
	int16_t x1016 = -1;
	static volatile int32_t t31 = 1;

	t31 = (((x1013<x1014)<<x1015)*x1016);

	if (t31 != -1073741824) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1021 = 9;
	int32_t x1022 = INT32_MIN;
	static uint16_t x1023 = 0U;
	uint32_t x1024 = 73346076U;

	t32 = (((x1021<x1022)<<x1023)*x1024);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1029 = -1;
	uint32_t x1030 = 4948922U;
	uint8_t x1031 = 1U;
	volatile int32_t x1032 = -1;
	volatile int32_t t33 = -28;

	t33 = (((x1029<x1030)<<x1031)*x1032);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1045 = INT32_MIN;
	volatile int32_t x1046 = -1;
	volatile uint16_t x1047 = 1U;
	int64_t x1048 = 2228722497847080292LL;
	static int64_t t34 = 341LL;

	t34 = (((x1045<x1046)<<x1047)*x1048);

	if (t34 != 4457444995694160584LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1069 = 269472U;
	static int8_t x1070 = INT8_MAX;
	volatile uint8_t x1071 = 27U;
	volatile uint64_t x1072 = UINT64_MAX;
	static volatile uint64_t t35 = 45628925860149LLU;

	t35 = (((x1069<x1070)<<x1071)*x1072);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x1113 = UINT64_MAX;
	int8_t x1115 = 13;
	int32_t x1116 = -960637;
	int32_t t36 = -679685138;

	t36 = (((x1113<x1114)<<x1115)*x1116);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1133 = 884498646392955498LLU;
	volatile int8_t x1134 = -1;
	volatile uint64_t x1135 = 7LLU;
	int32_t t37 = -1;

	t37 = (((x1133<x1134)<<x1135)*x1136);

	if (t37 != 16256) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1198 = INT32_MIN;
	volatile int16_t x1200 = INT16_MIN;

	t38 = (((x1197<x1198)<<x1199)*x1200);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1233 = INT8_MIN;
	int16_t x1235 = 1;
	int32_t x1236 = INT32_MIN;
	int32_t t39 = -96660;

	t39 = (((x1233<x1234)<<x1235)*x1236);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1249 = -50;
	int32_t x1250 = -40050628;
	static volatile uint8_t x1251 = 9U;
	uint32_t x1252 = 5567262U;
	volatile uint32_t t40 = 73868U;

	t40 = (((x1249<x1250)<<x1251)*x1252);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1349 = UINT32_MAX;
	uint8_t x1350 = UINT8_MAX;
	volatile int16_t x1351 = 1;
	volatile int32_t x1352 = INT32_MAX;
	int32_t t41 = 1388875;

	t41 = (((x1349<x1350)<<x1351)*x1352);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1441 = 0;
	uint32_t x1442 = UINT32_MAX;
	int8_t x1443 = 0;
	int16_t x1444 = INT16_MIN;
	static int32_t t42 = -1078191;

	t42 = (((x1441<x1442)<<x1443)*x1444);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x1445 = 227117627U;
	int32_t x1446 = -3;
	uint16_t x1447 = 0U;

	t43 = (((x1445<x1446)<<x1447)*x1448);

	if (t43 != 1588000236LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1454 = 1U;
	int8_t x1456 = INT8_MIN;
	int32_t t44 = -2392;

	t44 = (((x1453<x1454)<<x1455)*x1456);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1471 = 13;
	int16_t x1472 = -1;

	t45 = (((x1469<x1470)<<x1471)*x1472);

	if (t45 != -8192) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1521 = INT16_MAX;
	static int32_t x1522 = 99240;
	int8_t x1524 = INT8_MIN;

	t46 = (((x1521<x1522)<<x1523)*x1524);

	if (t46 != -512) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1537 = 62U;
	int8_t x1538 = 0;
	int32_t x1539 = 3;
	volatile int32_t t47 = -712632;

	t47 = (((x1537<x1538)<<x1539)*x1540);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1617 = INT8_MAX;
	volatile int16_t x1618 = 4321;
	static uint16_t x1619 = 0U;
	static int32_t t48 = 2152244;

	t48 = (((x1617<x1618)<<x1619)*x1620);

	if (t48 != 3559) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1629 = INT8_MIN;
	static uint64_t x1632 = 1LLU;
	uint64_t t49 = 29154198421LLU;

	t49 = (((x1629<x1630)<<x1631)*x1632);

	if (t49 != 8LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x1658 = -2955;
	int16_t x1659 = 1;
	int8_t x1660 = 8;

	t50 = (((x1657<x1658)<<x1659)*x1660);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x1698 = -15262;
	uint8_t x1699 = 2U;
	int8_t x1700 = -1;

	t51 = (((x1697<x1698)<<x1699)*x1700);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1723 = 1;
	uint8_t x1724 = 5U;
	static int32_t t52 = 1368;

	t52 = (((x1721<x1722)<<x1723)*x1724);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1729 = -1;
	int8_t x1730 = INT8_MAX;
	uint16_t x1731 = 16U;
	int32_t x1732 = 2855;
	int32_t t53 = 112691703;

	t53 = (((x1729<x1730)<<x1731)*x1732);

	if (t53 != 187105280) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1733 = 3U;
	uint8_t x1735 = 1U;
	uint16_t x1736 = 10877U;
	static volatile int32_t t54 = 7298676;

	t54 = (((x1733<x1734)<<x1735)*x1736);

	if (t54 != 21754) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x1737 = INT8_MIN;
	int8_t x1739 = 3;
	static volatile uint8_t x1740 = 1U;
	int32_t t55 = -681;

	t55 = (((x1737<x1738)<<x1739)*x1740);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1773 = 1;
	int8_t x1774 = INT8_MAX;
	uint8_t x1775 = 0U;
	int32_t x1776 = -20163030;
	int32_t t56 = 18;

	t56 = (((x1773<x1774)<<x1775)*x1776);

	if (t56 != -20163030) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1777 = -12;
	int8_t x1778 = INT8_MIN;
	volatile uint8_t x1779 = 0U;
	static int32_t x1780 = INT32_MAX;

	t57 = (((x1777<x1778)<<x1779)*x1780);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1801 = -1;
	int8_t x1802 = -1;
	uint8_t x1803 = 9U;
	int32_t x1804 = INT32_MIN;

	t58 = (((x1801<x1802)<<x1803)*x1804);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1813 = 2944025311928011LL;
	int8_t x1814 = -7;
	int8_t x1815 = 0;
	int8_t x1816 = -1;

	t59 = (((x1813<x1814)<<x1815)*x1816);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1829 = INT32_MIN;
	int8_t x1830 = -1;
	uint16_t x1831 = 13U;
	uint32_t x1832 = 6U;
	uint32_t t60 = 1696U;

	t60 = (((x1829<x1830)<<x1831)*x1832);

	if (t60 != 49152U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x1926 = -13350387584516736LL;
	int8_t x1927 = 7;
	int32_t x1928 = INT32_MIN;
	int32_t t61 = 16139;

	t61 = (((x1925<x1926)<<x1927)*x1928);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1933 = -1072;
	volatile uint16_t x1934 = 0U;
	int32_t x1936 = -11248964;
	static int32_t t62 = 2174;

	t62 = (((x1933<x1934)<<x1935)*x1936);

	if (t62 != -359966848) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1937 = INT16_MAX;
	uint16_t x1939 = 0U;
	uint32_t x1940 = UINT32_MAX;
	uint32_t t63 = 25U;

	t63 = (((x1937<x1938)<<x1939)*x1940);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x2001 = 2038414U;
	int64_t x2002 = -1LL;
	volatile uint16_t x2003 = 11U;
	uint32_t t64 = 280382800U;

	t64 = (((x2001<x2002)<<x2003)*x2004);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x2009 = INT64_MAX;
	int32_t x2010 = -1;
	uint16_t x2011 = 1U;
	int16_t x2012 = -1;
	static volatile int32_t t65 = -42438;

	t65 = (((x2009<x2010)<<x2011)*x2012);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2098 = -1LL;
	uint32_t x2099 = 3U;
	int32_t x2100 = INT32_MIN;
	int32_t t66 = -45;

	t66 = (((x2097<x2098)<<x2099)*x2100);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2129 = UINT8_MAX;
	int16_t x2130 = -6;
	static int8_t x2131 = 12;
	int32_t x2132 = -26;

	t67 = (((x2129<x2130)<<x2131)*x2132);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x2153 = INT8_MIN;
	int64_t x2155 = 31LL;
	volatile int32_t t68 = 161018;

	t68 = (((x2153<x2154)<<x2155)*x2156);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2157 = INT64_MAX;
	int16_t x2158 = INT16_MAX;
	volatile int8_t x2159 = 4;
	uint16_t x2160 = 12U;
	int32_t t69 = -1233;

	t69 = (((x2157<x2158)<<x2159)*x2160);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2241 = UINT16_MAX;
	uint32_t x2242 = 38U;
	static uint8_t x2243 = 7U;
	volatile uint16_t x2244 = 4049U;
	int32_t t70 = -1;

	t70 = (((x2241<x2242)<<x2243)*x2244);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x2249 = -1;
	int32_t x2250 = -4027121;
	int16_t x2251 = 0;
	int32_t x2252 = INT32_MAX;

	t71 = (((x2249<x2250)<<x2251)*x2252);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x2261 = INT16_MIN;
	static int32_t x2262 = -55010;
	static volatile int64_t x2263 = 0LL;
	uint64_t x2264 = 156003LLU;
	uint64_t t72 = 5005909721605913LLU;

	t72 = (((x2261<x2262)<<x2263)*x2264);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2273 = UINT64_MAX;
	static int32_t x2274 = -92;
	int64_t t73 = 1611399411161063LL;

	t73 = (((x2273<x2274)<<x2275)*x2276);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2341 = 30;
	int64_t x2344 = INT64_MIN;
	int64_t t74 = 1254427773LL;

	t74 = (((x2341<x2342)<<x2343)*x2344);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x2349 = 20687U;
	static int16_t x2350 = -101;
	static volatile int8_t x2351 = 28;
	uint8_t x2352 = 78U;
	int32_t t75 = -19126;

	t75 = (((x2349<x2350)<<x2351)*x2352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2377 = INT16_MIN;
	uint16_t x2378 = 0U;
	int8_t x2379 = 19;
	volatile uint64_t x2380 = 14LLU;
	volatile uint64_t t76 = 3496056304LLU;

	t76 = (((x2377<x2378)<<x2379)*x2380);

	if (t76 != 7340032LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2481 = UINT64_MAX;
	int64_t x2482 = 258331243LL;
	uint16_t x2483 = 0U;
	int32_t x2484 = INT32_MIN;

	t77 = (((x2481<x2482)<<x2483)*x2484);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2493 = -1;
	int64_t x2494 = -3663LL;
	int8_t x2495 = 1;
	static int64_t x2496 = INT64_MIN;
	volatile int64_t t78 = 32224661LL;

	t78 = (((x2493<x2494)<<x2495)*x2496);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2553 = 11;
	uint32_t x2554 = 49944U;
	uint16_t x2555 = 2U;
	uint64_t x2556 = 920304752646LLU;
	static uint64_t t79 = 325760977528762873LLU;

	t79 = (((x2553<x2554)<<x2555)*x2556);

	if (t79 != 3681219010584LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x2557 = INT64_MIN;
	volatile uint32_t x2559 = 0U;
	volatile int16_t x2560 = INT16_MIN;
	volatile int32_t t80 = -2247382;

	t80 = (((x2557<x2558)<<x2559)*x2560);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2613 = INT16_MIN;
	uint64_t x2614 = 8774134262713188LLU;
	volatile int32_t t81 = 1956344;

	t81 = (((x2613<x2614)<<x2615)*x2616);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2629 = INT32_MIN;
	int16_t x2630 = -6691;
	int8_t x2631 = 0;
	int32_t x2632 = INT32_MAX;
	int32_t t82 = INT32_MAX;

	t82 = (((x2629<x2630)<<x2631)*x2632);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x2650 = INT64_MAX;
	int16_t x2651 = 13;
	volatile int64_t x2652 = 328394944089742LL;
	volatile int64_t t83 = 4LL;

	t83 = (((x2649<x2650)<<x2651)*x2652);

	if (t83 != 2690211381983166464LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2718 = UINT8_MAX;
	uint64_t x2720 = 401647754883156065LLU;

	t84 = (((x2717<x2718)<<x2719)*x2720);

	if (t84 != 9316439959697096704LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2757 = -12031;
	int64_t x2758 = INT64_MAX;
	int8_t x2760 = INT8_MAX;

	t85 = (((x2757<x2758)<<x2759)*x2760);

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2833 = INT32_MAX;
	int32_t x2834 = -2;
	int8_t x2836 = INT8_MIN;

	t86 = (((x2833<x2834)<<x2835)*x2836);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x2913 = -3;
	int64_t x2914 = 4219343675835447LL;
	uint8_t x2915 = 0U;
	volatile int8_t x2916 = -13;
	volatile int32_t t87 = -18698;

	t87 = (((x2913<x2914)<<x2915)*x2916);

	if (t87 != -13) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2921 = 799LL;
	int32_t x2922 = INT32_MIN;
	int8_t x2923 = 1;

	t88 = (((x2921<x2922)<<x2923)*x2924);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2937 = 890LLU;
	static int64_t x2938 = INT64_MIN;
	uint32_t x2939 = 7U;
	int32_t t89 = -15;

	t89 = (((x2937<x2938)<<x2939)*x2940);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2953 = INT32_MIN;
	uint16_t x2954 = 4373U;
	static volatile uint8_t x2955 = 1U;
	static int8_t x2956 = INT8_MIN;
	volatile int32_t t90 = 6;

	t90 = (((x2953<x2954)<<x2955)*x2956);

	if (t90 != -256) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2973 = INT16_MIN;
	static int16_t x2974 = INT16_MAX;
	uint8_t x2975 = 14U;
	int16_t x2976 = INT16_MIN;
	volatile int32_t t91 = 341035;

	t91 = (((x2973<x2974)<<x2975)*x2976);

	if (t91 != -536870912) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3066 = INT8_MAX;
	uint32_t x3067 = 2U;
	uint16_t x3068 = 1U;
	volatile int32_t t92 = 1;

	t92 = (((x3065<x3066)<<x3067)*x3068);

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3102 = 33U;
	uint16_t x3103 = 3U;
	volatile int32_t x3104 = -192190456;
	static volatile int32_t t93 = -211186;

	t93 = (((x3101<x3102)<<x3103)*x3104);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3126 = 1U;
	volatile uint8_t x3127 = 1U;
	int8_t x3128 = -24;
	int32_t t94 = -33;

	t94 = (((x3125<x3126)<<x3127)*x3128);

	if (t94 != -48) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3177 = INT8_MIN;
	static int16_t x3178 = -1;
	uint8_t x3179 = 5U;
	static int64_t x3180 = 151981344096843773LL;

	t95 = (((x3177<x3178)<<x3179)*x3180);

	if (t95 != 4863403011099000736LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x3181 = -1;
	uint32_t x3182 = 710U;
	uint16_t x3183 = 11U;
	volatile uint8_t x3184 = 1U;
	int32_t t96 = -30;

	t96 = (((x3181<x3182)<<x3183)*x3184);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x3217 = -55;
	uint8_t x3218 = UINT8_MAX;
	int32_t x3219 = 0;
	uint64_t x3220 = UINT64_MAX;
	static volatile uint64_t t97 = UINT64_MAX;

	t97 = (((x3217<x3218)<<x3219)*x3220);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3366 = 397262635U;
	uint8_t x3367 = 1U;
	int16_t x3368 = 0;
	int32_t t98 = 795190;

	t98 = (((x3365<x3366)<<x3367)*x3368);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3405 = INT32_MAX;
	static volatile uint64_t x3408 = 1983459827437LLU;
	uint64_t t99 = 109946LLU;

	t99 = (((x3405<x3406)<<x3407)*x3408);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

