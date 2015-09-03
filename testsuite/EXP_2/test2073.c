#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x64 = 12;
static int64_t x67 = INT64_MIN;
uint32_t x68 = 22U;
static int32_t x135 = INT32_MIN;
static int64_t x182 = -1LL;
int32_t x226 = 596;
static int16_t x229 = INT16_MIN;
int8_t x268 = 5;
uint64_t t12 = 70088030004LLU;
int64_t t13 = 17306393LL;
int16_t x465 = -4;
int16_t x466 = -9256;
uint8_t x468 = 0U;
int32_t x472 = 16;
int64_t t15 = 15084LL;
static int8_t x521 = -17;
int32_t x522 = -53744;
uint8_t x645 = 35U;
int8_t x646 = 5;
int16_t x648 = 14;
static int64_t t20 = -141LL;
uint8_t x680 = 7U;
uint8_t x767 = 1U;
static volatile uint64_t t25 = 39612861717575LLU;
uint8_t x811 = UINT8_MAX;
int8_t x812 = 0;
int64_t t27 = -46131LL;
uint32_t x894 = UINT32_MAX;
int16_t x896 = 1;
volatile uint32_t t29 = 26096526U;
static volatile uint32_t t30 = 277U;
static uint8_t x1044 = 0U;
int8_t x1113 = -1;
uint64_t x1116 = 3LLU;
volatile uint8_t x1150 = 0U;
int8_t x1178 = -1;
uint64_t t35 = 96997427528695534LLU;
int64_t x1250 = INT64_MAX;
uint8_t x1469 = 9U;
static volatile uint8_t x1517 = 5U;
static int16_t x1649 = INT16_MIN;
int64_t x1651 = -1LL;
volatile uint8_t x1652 = 12U;
volatile int16_t x1665 = INT16_MIN;
volatile int8_t x1667 = INT8_MAX;
int8_t x1737 = -1;
uint16_t x1793 = 213U;
int16_t x1794 = INT16_MIN;
int64_t x1798 = INT64_MAX;
uint32_t x1822 = 7615U;
uint8_t x1824 = 1U;
static int64_t t50 = -8108LL;
volatile uint16_t x1837 = 396U;
int16_t x1839 = INT16_MIN;
static int16_t x1889 = INT16_MIN;
volatile uint64_t t52 = 28742LLU;
volatile uint8_t x1896 = 2U;
volatile int8_t x1946 = INT8_MAX;
uint16_t x2014 = 17U;
volatile int32_t x2029 = -3;
int8_t x2166 = INT8_MAX;
volatile int32_t x2206 = INT32_MIN;
int32_t t59 = -2;
static int32_t t60 = 24393785;
int32_t t61 = -623;
int32_t t62 = -139923644;
int16_t x2382 = 15066;
volatile int32_t t63 = 921;
static volatile int8_t x2394 = -2;
volatile int64_t x2395 = -176722061395395LL;
int8_t x2451 = INT8_MIN;
static int64_t x2513 = -1LL;
static volatile uint32_t x2515 = 5U;
uint8_t x2526 = UINT8_MAX;
static int32_t x2527 = INT32_MIN;
volatile uint32_t x2535 = UINT32_MAX;
static int16_t x2551 = INT16_MIN;
static volatile int64_t x2569 = -1LL;
int16_t x2572 = 2;
int64_t t70 = 16643986781LL;
int64_t x2598 = INT64_MIN;
int64_t x2627 = INT64_MAX;
uint16_t x2741 = 5943U;
int32_t x2743 = INT32_MIN;
static uint8_t x2744 = 3U;
uint8_t x2887 = UINT8_MAX;
static uint8_t x2888 = 1U;
int32_t x2905 = INT32_MIN;
uint32_t x2906 = 1U;
static uint64_t x2938 = UINT64_MAX;
static int32_t x2994 = INT32_MAX;
uint64_t x2995 = 262080823263202047LLU;
uint8_t x2996 = 3U;
volatile int64_t t88 = -31430773861185797LL;
static uint8_t x3095 = 50U;
uint8_t x3146 = 15U;
int64_t t91 = -328464945690942LL;
static int32_t x3201 = INT32_MAX;
uint64_t x3367 = 3LLU;
volatile uint64_t t94 = 1970725666361LLU;
int32_t x3546 = -1;
static int8_t x3547 = 1;
int32_t t96 = 16944980;
uint8_t x3647 = UINT8_MAX;
static volatile int32_t t99 = 5816579;


void f0(void) {
	uint16_t x61 = UINT16_MAX;
	volatile int32_t x62 = -1;
	uint64_t x63 = 273370413572536503LLU;
	uint64_t t0 = 682LLU;

	t0 = ((x61/(x62^x63))<<x64);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x65 = INT8_MIN;
	volatile int16_t x66 = -1;
	static int64_t t1 = -860295426LL;

	t1 = ((x65/(x66^x67))<<x68);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x133 = INT16_MAX;
	static int8_t x134 = INT8_MIN;
	uint32_t x136 = 10U;
	static volatile int32_t t2 = 20837901;

	t2 = ((x133/(x134^x135))<<x136);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x181 = -36;
	static volatile uint64_t x183 = 2733803852942721LLU;
	int8_t x184 = 0;
	uint64_t t3 = 300906451LLU;

	t3 = ((x181/(x182^x183))<<x184);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	volatile uint64_t x207 = 8LLU;
	int8_t x208 = 55;
	uint64_t t4 = 924654877LLU;

	t4 = ((x205/(x206^x207))<<x208);

	if (t4 != 36028797018963968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x225 = UINT32_MAX;
	static int8_t x227 = -1;
	uint8_t x228 = 28U;
	volatile uint32_t t5 = 26U;

	t5 = ((x225/(x226^x227))<<x228);

	if (t5 != 268435456U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x230 = -1LL;
	uint64_t x231 = 11759790719767LLU;
	uint8_t x232 = 6U;
	volatile uint64_t t6 = 595LLU;

	t6 = ((x229/(x230^x231))<<x232);

	if (t6 != 64LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x265 = INT32_MIN;
	volatile uint32_t x266 = UINT32_MAX;
	volatile int32_t x267 = 252116;
	volatile uint32_t t7 = 757U;

	t7 = ((x265/(x266^x267))<<x268);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = -1;
	static uint32_t x315 = 63U;
	uint8_t x316 = 22U;
	volatile uint32_t t8 = 326846U;

	t8 = ((x313/(x314^x315))<<x316);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x317 = 27349;
	static volatile uint64_t x318 = 7220LLU;
	uint64_t x319 = 2812405LLU;
	int8_t x320 = 0;
	static uint64_t t9 = 31506147632039675LLU;

	t9 = ((x317/(x318^x319))<<x320);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x381 = 257917990764LLU;
	int32_t x382 = 927;
	int16_t x383 = INT16_MIN;
	int16_t x384 = 3;
	uint64_t t10 = 2411552971919873868LLU;

	t10 = ((x381/(x382^x383))<<x384);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x385 = -1;
	int8_t x386 = INT8_MIN;
	uint64_t x387 = UINT64_MAX;
	uint8_t x388 = 1U;
	uint64_t t11 = 139057656747697LLU;

	t11 = ((x385/(x386^x387))<<x388);

	if (t11 != 290499906672591364LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x421 = 4U;
	volatile uint64_t x422 = 5670838988LLU;
	uint64_t x423 = UINT64_MAX;
	volatile uint32_t x424 = 11U;

	t12 = ((x421/(x422^x423))<<x424);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x433 = INT8_MAX;
	static int64_t x434 = 215167LL;
	int16_t x435 = 10502;
	static uint8_t x436 = 1U;

	t13 = ((x433/(x434^x435))<<x436);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x467 = 257844U;
	volatile uint32_t t14 = 189107U;

	t14 = ((x465/(x466^x467))<<x468);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x469 = 1LL;
	int64_t x470 = INT64_MIN;
	int32_t x471 = 285286651;

	t15 = ((x469/(x470^x471))<<x472);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x481 = UINT64_MAX;
	static int64_t x482 = -57380865528656LL;
	int32_t x483 = 37385200;
	uint8_t x484 = 5U;
	static uint64_t t16 = 971LLU;

	t16 = ((x481/(x482^x483))<<x484);

	if (t16 != 32LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x523 = INT16_MIN;
	uint8_t x524 = 17U;
	volatile int32_t t17 = -7;

	t17 = ((x521/(x522^x523))<<x524);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x525 = INT64_MAX;
	int16_t x526 = -1;
	int64_t x527 = INT64_MIN;
	int16_t x528 = 45;
	static int64_t t18 = -6089598LL;

	t18 = ((x525/(x526^x527))<<x528);

	if (t18 != 35184372088832LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x541 = 32U;
	volatile uint8_t x542 = 28U;
	int16_t x543 = -131;
	uint32_t x544 = 4U;
	volatile int32_t t19 = -290;

	t19 = ((x541/(x542^x543))<<x544);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x647 = INT64_MIN;

	t20 = ((x645/(x646^x647))<<x648);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x649 = INT8_MAX;
	volatile uint16_t x650 = 23U;
	uint8_t x651 = 0U;
	volatile uint8_t x652 = 3U;
	volatile int32_t t21 = -4641;

	t21 = ((x649/(x650^x651))<<x652);

	if (t21 != 40) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x657 = -1;
	int16_t x658 = INT16_MIN;
	int32_t x659 = INT32_MAX;
	static uint64_t x660 = 1LLU;
	volatile int32_t t22 = 173809;

	t22 = ((x657/(x658^x659))<<x660);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x677 = 116U;
	volatile uint64_t x678 = 783LLU;
	uint8_t x679 = 61U;
	volatile uint64_t t23 = 1210LLU;

	t23 = ((x677/(x678^x679))<<x680);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x765 = -1;
	uint16_t x766 = 2U;
	static uint32_t x768 = 8U;
	static int32_t t24 = 13;

	t24 = ((x765/(x766^x767))<<x768);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x789 = 17U;
	static uint64_t x790 = UINT64_MAX;
	int16_t x791 = 72;
	static uint8_t x792 = 11U;

	t25 = ((x789/(x790^x791))<<x792);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x809 = -6LL;
	static uint16_t x810 = 18U;
	int64_t t26 = 7271272940867846LL;

	t26 = ((x809/(x810^x811))<<x812);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x857 = 6U;
	int64_t x858 = 34297769833948LL;
	uint16_t x859 = 0U;
	uint16_t x860 = 7U;

	t27 = ((x857/(x858^x859))<<x860);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x873 = INT32_MIN;
	volatile uint32_t x874 = 498U;
	static int8_t x875 = INT8_MAX;
	int8_t x876 = 5;
	uint32_t t28 = 14137U;

	t28 = ((x873/(x874^x875))<<x876);

	if (t28 != 173096896U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x893 = UINT8_MAX;
	int16_t x895 = INT16_MIN;

	t29 = ((x893/(x894^x895))<<x896);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1033 = 713U;
	int16_t x1034 = 0;
	int16_t x1035 = INT16_MAX;
	uint16_t x1036 = 1U;

	t30 = ((x1033/(x1034^x1035))<<x1036);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1041 = UINT64_MAX;
	uint32_t x1042 = 14116U;
	static int64_t x1043 = -1LL;
	uint64_t t31 = 55905LLU;

	t31 = ((x1041/(x1042^x1043))<<x1044);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1081 = -1;
	volatile int64_t x1082 = INT64_MIN;
	uint32_t x1083 = 1U;
	uint16_t x1084 = 11U;
	int64_t t32 = -3238964091027458LL;

	t32 = ((x1081/(x1082^x1083))<<x1084);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1114 = -1;
	static volatile uint16_t x1115 = 27U;
	int32_t t33 = 86246;

	t33 = ((x1113/(x1114^x1115))<<x1116);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1149 = -1LL;
	static volatile uint32_t x1151 = 125U;
	uint8_t x1152 = 15U;
	int64_t t34 = -49798LL;

	t34 = ((x1149/(x1150^x1151))<<x1152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1177 = 715497077LLU;
	static int8_t x1179 = INT8_MIN;
	static int8_t x1180 = 1;

	t35 = ((x1177/(x1178^x1179))<<x1180);

	if (t35 != 11267670LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1249 = INT32_MIN;
	static int64_t x1251 = -1LL;
	int32_t x1252 = 1;
	volatile int64_t t36 = 14LL;

	t36 = ((x1249/(x1250^x1251))<<x1252);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1449 = -1;
	volatile uint32_t x1450 = 62U;
	uint64_t x1451 = 7018676039678325503LLU;
	static int16_t x1452 = 1;
	uint64_t t37 = 1293LLU;

	t37 = ((x1449/(x1450^x1451))<<x1452);

	if (t37 != 4LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1470 = INT8_MIN;
	uint64_t x1471 = 19LLU;
	volatile int16_t x1472 = 1;
	volatile uint64_t t38 = 748122097533786LLU;

	t38 = ((x1469/(x1470^x1471))<<x1472);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1518 = -52;
	int8_t x1519 = INT8_MAX;
	volatile uint8_t x1520 = 1U;
	volatile int32_t t39 = 236;

	t39 = ((x1517/(x1518^x1519))<<x1520);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1650 = 27570;
	int64_t t40 = -1333107927251157LL;

	t40 = ((x1649/(x1650^x1651))<<x1652);

	if (t40 != 4096LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1666 = INT64_MIN;
	uint64_t x1668 = 16LLU;
	int64_t t41 = 5712445953327236LL;

	t41 = ((x1665/(x1666^x1667))<<x1668);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1677 = 84U;
	int8_t x1678 = 20;
	volatile uint64_t x1679 = UINT64_MAX;
	uint16_t x1680 = 39U;
	uint64_t t42 = 639585285877351824LLU;

	t42 = ((x1677/(x1678^x1679))<<x1680);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1721 = 372178017739747384LL;
	uint64_t x1722 = 6312067523049369717LLU;
	uint32_t x1723 = 15U;
	static uint8_t x1724 = 6U;
	volatile uint64_t t43 = 1430074377239LLU;

	t43 = ((x1721/(x1722^x1723))<<x1724);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1738 = -16629928;
	static uint16_t x1739 = 22915U;
	uint32_t x1740 = 15U;
	int32_t t44 = 22012;

	t44 = ((x1737/(x1738^x1739))<<x1740);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1757 = 41741U;
	int16_t x1758 = 952;
	int32_t x1759 = -131852322;
	uint16_t x1760 = 2U;
	uint32_t t45 = 76U;

	t45 = ((x1757/(x1758^x1759))<<x1760);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1769 = -2;
	int32_t x1770 = INT32_MAX;
	uint64_t x1771 = 2135354661735299493LLU;
	int32_t x1772 = 7;
	uint64_t t46 = 1840LLU;

	t46 = ((x1769/(x1770^x1771))<<x1772);

	if (t46 != 1024LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x1795 = 25U;
	static uint8_t x1796 = 2U;
	volatile int32_t t47 = -718;

	t47 = ((x1793/(x1794^x1795))<<x1796);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x1797 = 169886LLU;
	uint32_t x1799 = 14U;
	static uint8_t x1800 = 62U;
	uint64_t t48 = 12LLU;

	t48 = ((x1797/(x1798^x1799))<<x1800);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x1813 = 19134668LLU;
	static uint16_t x1814 = 28U;
	static int32_t x1815 = INT32_MAX;
	static uint64_t x1816 = 22LLU;
	static volatile uint64_t t49 = 1LLU;

	t49 = ((x1813/(x1814^x1815))<<x1816);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1821 = -1LL;
	uint8_t x1823 = 36U;

	t50 = ((x1821/(x1822^x1823))<<x1824);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1838 = INT32_MIN;
	static uint8_t x1840 = 0U;
	int32_t t51 = -53233149;

	t51 = ((x1837/(x1838^x1839))<<x1840);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1890 = UINT64_MAX;
	volatile uint32_t x1891 = 7U;
	static uint64_t x1892 = 12LLU;

	t52 = ((x1889/(x1890^x1891))<<x1892);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1893 = -1;
	int16_t x1894 = INT16_MAX;
	static int8_t x1895 = 1;
	static int32_t t53 = -140505733;

	t53 = ((x1893/(x1894^x1895))<<x1896);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1945 = INT64_MIN;
	int8_t x1947 = -1;
	int8_t x1948 = 1;
	int64_t t54 = -32LL;

	t54 = ((x1945/(x1946^x1947))<<x1948);

	if (t54 != 144115188075855872LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2013 = 1;
	static int64_t x2015 = INT64_MIN;
	uint8_t x2016 = 19U;
	int64_t t55 = -552904440254737895LL;

	t55 = ((x2013/(x2014^x2015))<<x2016);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2030 = 0LL;
	uint64_t x2031 = UINT64_MAX;
	int8_t x2032 = 14;
	uint64_t t56 = 2204LLU;

	t56 = ((x2029/(x2030^x2031))<<x2032);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2165 = UINT16_MAX;
	static int8_t x2167 = 52;
	static uint8_t x2168 = 13U;
	int32_t t57 = -30;

	t57 = ((x2165/(x2166^x2167))<<x2168);

	if (t57 != 7151616) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x2193 = INT8_MAX;
	static volatile int8_t x2194 = -11;
	volatile uint16_t x2195 = 31218U;
	int8_t x2196 = 1;
	static volatile int32_t t58 = 312;

	t58 = ((x2193/(x2194^x2195))<<x2196);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2205 = -11;
	int8_t x2207 = -1;
	uint8_t x2208 = 3U;

	t59 = ((x2205/(x2206^x2207))<<x2208);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x2281 = UINT8_MAX;
	int32_t x2282 = INT32_MIN;
	int8_t x2283 = INT8_MIN;
	int8_t x2284 = 0;

	t60 = ((x2281/(x2282^x2283))<<x2284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2313 = 1119;
	volatile uint8_t x2314 = 1U;
	int8_t x2315 = INT8_MAX;
	uint8_t x2316 = 11U;

	t61 = ((x2313/(x2314^x2315))<<x2316);

	if (t61 != 16384) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2353 = INT16_MIN;
	static int8_t x2354 = INT8_MIN;
	uint8_t x2355 = 63U;
	int8_t x2356 = 1;

	t62 = ((x2353/(x2354^x2355))<<x2356);

	if (t62 != 1008) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2381 = -1;
	uint8_t x2383 = 20U;
	volatile int32_t x2384 = 0;

	t63 = ((x2381/(x2382^x2383))<<x2384);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2393 = -1;
	volatile uint64_t x2396 = 60LLU;
	static int64_t t64 = -3797597781LL;

	t64 = ((x2393/(x2394^x2395))<<x2396);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x2449 = INT16_MAX;
	int32_t x2450 = -12;
	uint64_t x2452 = 21LLU;
	int32_t t65 = -121252397;

	t65 = ((x2449/(x2450^x2451))<<x2452);

	if (t65 != 591396864) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2514 = 625565U;
	volatile int32_t x2516 = 13;
	int64_t t66 = -305839LL;

	t66 = ((x2513/(x2514^x2515))<<x2516);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x2525 = UINT16_MAX;
	static int16_t x2528 = 2;
	int32_t t67 = 3450851;

	t67 = ((x2525/(x2526^x2527))<<x2528);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2533 = 212500981U;
	volatile int64_t x2534 = 5204202424LL;
	static uint32_t x2536 = 10U;
	int64_t t68 = 9282LL;

	t68 = ((x2533/(x2534^x2535))<<x2536);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2549 = -5097;
	int8_t x2550 = -3;
	uint8_t x2552 = 0U;
	int32_t t69 = 7;

	t69 = ((x2549/(x2550^x2551))<<x2552);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x2570 = INT64_MIN;
	static volatile int16_t x2571 = INT16_MAX;

	t70 = ((x2569/(x2570^x2571))<<x2572);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2597 = 11U;
	int8_t x2599 = INT8_MIN;
	uint8_t x2600 = 22U;
	int64_t t71 = 83995LL;

	t71 = ((x2597/(x2598^x2599))<<x2600);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2625 = 6508U;
	int16_t x2626 = -1;
	int16_t x2628 = 18;
	int64_t t72 = 183LL;

	t72 = ((x2625/(x2626^x2627))<<x2628);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2657 = UINT8_MAX;
	static uint8_t x2658 = 5U;
	uint8_t x2659 = UINT8_MAX;
	uint16_t x2660 = 0U;
	volatile int32_t t73 = -714;

	t73 = ((x2657/(x2658^x2659))<<x2660);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2685 = -7647789;
	volatile int16_t x2686 = INT16_MIN;
	uint16_t x2687 = 6152U;
	int8_t x2688 = 0;
	static int32_t t74 = -24974460;

	t74 = ((x2685/(x2686^x2687))<<x2688);

	if (t74 != 287) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x2742 = INT8_MIN;
	int32_t t75 = 3042;

	t75 = ((x2741/(x2742^x2743))<<x2744);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x2761 = -1LL;
	static int32_t x2762 = INT32_MIN;
	int8_t x2763 = INT8_MIN;
	uint8_t x2764 = 30U;
	int64_t t76 = -1136100LL;

	t76 = ((x2761/(x2762^x2763))<<x2764);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2809 = INT8_MIN;
	static int64_t x2810 = -6153626934LL;
	static volatile uint32_t x2811 = 6966051U;
	volatile int8_t x2812 = 0;
	volatile int64_t t77 = -13317237LL;

	t77 = ((x2809/(x2810^x2811))<<x2812);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2817 = -1;
	int32_t x2818 = 279235748;
	uint16_t x2819 = 7694U;
	uint8_t x2820 = 3U;
	static int32_t t78 = 46053476;

	t78 = ((x2817/(x2818^x2819))<<x2820);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2841 = 83U;
	int8_t x2842 = -48;
	int64_t x2843 = 4003533823LL;
	volatile uint8_t x2844 = 1U;
	volatile int64_t t79 = 4520591191LL;

	t79 = ((x2841/(x2842^x2843))<<x2844);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2845 = 0U;
	uint16_t x2846 = UINT16_MAX;
	int32_t x2847 = -1;
	uint8_t x2848 = 28U;
	volatile int32_t t80 = -3247409;

	t80 = ((x2845/(x2846^x2847))<<x2848);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2861 = 27924U;
	int8_t x2862 = INT8_MIN;
	int32_t x2863 = INT32_MIN;
	uint32_t x2864 = 0U;
	static volatile uint32_t t81 = 924692U;

	t81 = ((x2861/(x2862^x2863))<<x2864);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2885 = INT16_MIN;
	uint32_t x2886 = 107564U;
	static volatile uint32_t t82 = 333002748U;

	t82 = ((x2885/(x2886^x2887))<<x2888);

	if (t82 != 79734U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2897 = UINT32_MAX;
	uint8_t x2898 = UINT8_MAX;
	uint32_t x2899 = 193961U;
	static int8_t x2900 = 1;
	static uint32_t t83 = 6516616U;

	t83 = ((x2897/(x2898^x2899))<<x2900);

	if (t83 != 44304U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x2907 = INT16_MIN;
	volatile int32_t x2908 = 7;
	uint32_t t84 = 63998288U;

	t84 = ((x2905/(x2906^x2907))<<x2908);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x2937 = 9U;
	static uint8_t x2939 = 3U;
	uint16_t x2940 = 21U;
	uint64_t t85 = 1744424950714481375LLU;

	t85 = ((x2937/(x2938^x2939))<<x2940);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2993 = INT8_MAX;
	uint64_t t86 = 605710420338651LLU;

	t86 = ((x2993/(x2994^x2995))<<x2996);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3025 = -115622;
	volatile uint32_t x3026 = 41U;
	static uint32_t x3027 = UINT32_MAX;
	static uint8_t x3028 = 1U;
	uint32_t t87 = 728851U;

	t87 = ((x3025/(x3026^x3027))<<x3028);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3085 = -3;
	static int64_t x3086 = INT64_MIN;
	int64_t x3087 = -1LL;
	uint64_t x3088 = 0LLU;

	t88 = ((x3085/(x3086^x3087))<<x3088);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3093 = 51U;
	uint64_t x3094 = UINT64_MAX;
	volatile uint16_t x3096 = 2U;
	uint64_t t89 = 55836455LLU;

	t89 = ((x3093/(x3094^x3095))<<x3096);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3129 = 26365U;
	int16_t x3130 = -1;
	int64_t x3131 = 260220LL;
	uint32_t x3132 = 40U;
	static int64_t t90 = -11752569413786831LL;

	t90 = ((x3129/(x3130^x3131))<<x3132);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x3145 = 366LL;
	int16_t x3147 = 192;
	uint16_t x3148 = 2U;

	t91 = ((x3145/(x3146^x3147))<<x3148);

	if (t91 != 4LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x3181 = INT16_MIN;
	int16_t x3182 = INT16_MIN;
	static volatile int32_t x3183 = -10432186;
	uint32_t x3184 = 1U;
	volatile int32_t t92 = -8881774;

	t92 = ((x3181/(x3182^x3183))<<x3184);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x3202 = 5U;
	uint32_t x3203 = 125489U;
	uint16_t x3204 = 2U;
	static volatile uint32_t t93 = 52985U;

	t93 = ((x3201/(x3202^x3203))<<x3204);

	if (t93 != 68448U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3365 = INT64_MIN;
	uint16_t x3366 = 1183U;
	uint16_t x3368 = 0U;

	t94 = ((x3365/(x3366^x3367))<<x3368);

	if (t94 != 7816416980385403LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x3429 = INT16_MAX;
	uint64_t x3430 = 22032LLU;
	int32_t x3431 = INT32_MIN;
	uint8_t x3432 = 0U;
	uint64_t t95 = 53110357LLU;

	t95 = ((x3429/(x3430^x3431))<<x3432);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3545 = INT16_MIN;
	int8_t x3548 = 0;

	t96 = ((x3545/(x3546^x3547))<<x3548);

	if (t96 != 16384) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x3617 = 0LLU;
	int16_t x3618 = INT16_MIN;
	volatile int32_t x3619 = INT32_MIN;
	uint16_t x3620 = 0U;
	uint64_t t97 = 138LLU;

	t97 = ((x3617/(x3618^x3619))<<x3620);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3637 = INT16_MAX;
	volatile int32_t x3638 = INT32_MIN;
	volatile uint16_t x3639 = 2U;
	static volatile int8_t x3640 = 6;
	volatile int32_t t98 = 1;

	t98 = ((x3637/(x3638^x3639))<<x3640);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3645 = INT8_MIN;
	int32_t x3646 = INT32_MAX;
	uint16_t x3648 = 0U;

	t99 = ((x3645/(x3646^x3647))<<x3648);

	if (t99 != 0) { NG(); } else { ; }
	
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

