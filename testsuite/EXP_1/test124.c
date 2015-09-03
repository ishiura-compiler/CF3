#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x61 = INT64_MIN;
volatile int16_t x77 = 16318;
uint64_t x81 = 912LLU;
volatile int32_t t3 = 3224396;
int32_t x143 = INT32_MIN;
static volatile int32_t t6 = 311016;
int32_t x177 = INT32_MIN;
int8_t x178 = INT8_MAX;
volatile int32_t t7 = 403883143;
int64_t x215 = -1LL;
uint8_t x216 = 24U;
int32_t t10 = -59;
int32_t x371 = INT32_MIN;
static volatile int32_t t11 = 2881470;
int32_t t12 = -323082;
volatile uint8_t x468 = 3U;
volatile int8_t x487 = -1;
int32_t t15 = -7;
uint64_t x587 = 13LLU;
int8_t x690 = -56;
int32_t x692 = 13;
static volatile int32_t t18 = 401900697;
uint32_t x718 = 15515U;
volatile int32_t t19 = 18793888;
static int16_t x731 = INT16_MIN;
static volatile int32_t t20 = -29374668;
uint8_t x778 = 53U;
volatile uint64_t x779 = UINT64_MAX;
int8_t x798 = -58;
volatile int16_t x803 = INT16_MIN;
static int16_t x804 = 1;
int16_t x814 = INT16_MIN;
uint64_t x910 = 6604518544LLU;
volatile int16_t x1055 = 2295;
int32_t t29 = -1;
int32_t x1105 = -78063;
static volatile int64_t x1118 = 9865636969642LL;
uint8_t x1144 = 1U;
volatile int16_t x1210 = -1;
volatile int32_t t35 = -3;
uint64_t x1249 = 1461323184LLU;
int32_t x1277 = 31182037;
int32_t x1279 = INT32_MAX;
uint32_t x1355 = 28U;
int64_t x1358 = -3126242383025969963LL;
static int8_t x1359 = INT8_MIN;
volatile uint16_t x1445 = UINT16_MAX;
int32_t x1447 = INT32_MAX;
volatile int8_t x1528 = 21;
uint32_t x1546 = 6U;
static uint8_t x1548 = 0U;
static volatile int8_t x1570 = -7;
int16_t x1571 = INT16_MAX;
uint32_t x1589 = UINT32_MAX;
volatile uint8_t x1592 = 3U;
volatile int32_t t45 = -11720;
static uint64_t x1710 = 21323856152667LLU;
int32_t x1711 = -1;
uint64_t x1761 = 3700657440LLU;
int8_t x1762 = 0;
int8_t x1769 = INT8_MIN;
volatile int16_t x1772 = 5;
static volatile int16_t x1779 = INT16_MAX;
static volatile int32_t t53 = -7819259;
int16_t x1870 = INT16_MIN;
int16_t x1871 = INT16_MAX;
uint16_t x1949 = 8U;
int16_t x1951 = -1;
int8_t x1993 = 0;
int64_t x2039 = -1LL;
int32_t x2040 = 1;
uint32_t x2082 = 61529658U;
int8_t x2083 = -44;
volatile int16_t x2084 = 1;
uint8_t x2172 = 0U;
uint64_t x2174 = 502LLU;
int8_t x2175 = -2;
static int8_t x2176 = 1;
int64_t x2238 = -47105864352834699LL;
uint32_t x2244 = 9U;
int32_t x2354 = INT32_MIN;
uint8_t x2408 = 24U;
uint8_t x2438 = 1U;
static volatile uint32_t x2440 = 7U;
static int64_t x2581 = INT64_MIN;
uint16_t x2583 = 1U;
static volatile int32_t t74 = -1;
int16_t x2635 = -1;
int32_t t75 = -692;
volatile int32_t t78 = 511559;
static volatile int32_t t79 = -737522;
int32_t t80 = 43;
volatile int32_t t81 = -1;
volatile int32_t t82 = 235752842;
uint64_t x2784 = 0LLU;
int8_t x2894 = INT8_MIN;
int16_t x2895 = INT16_MIN;
static int32_t x2925 = INT32_MIN;
int8_t x2988 = 27;
volatile int32_t t88 = -13083;
int32_t t89 = 254784741;
static int32_t t91 = 5999;
uint16_t x3130 = 3U;
uint16_t x3131 = 69U;
static uint16_t x3132 = 0U;
volatile int64_t x3186 = -17987036580999652LL;
int32_t x3187 = INT32_MAX;
int8_t x3273 = -1;
uint32_t x3275 = 1924232U;
uint8_t x3301 = 2U;
uint64_t x3302 = 49LLU;
volatile int64_t x3303 = INT64_MAX;
volatile uint16_t x3331 = 522U;
int32_t t99 = 25946650;


void f0(void) {
	int16_t x57 = -1211;
	int16_t x58 = -9359;
	uint16_t x59 = UINT16_MAX;
	uint8_t x60 = 4U;
	volatile int32_t t0 = -281681271;

	t0 = (((x57+x58)<=x59)>>x60);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x62 = UINT32_MAX;
	volatile int32_t x63 = INT32_MAX;
	uint8_t x64 = 1U;
	volatile int32_t t1 = -2150733;

	t1 = (((x61+x62)<=x63)>>x64);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x78 = -2656;
	static uint8_t x79 = 29U;
	static uint8_t x80 = 17U;
	volatile int32_t t2 = 2;

	t2 = (((x77+x78)<=x79)>>x80);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x82 = 8616U;
	int64_t x83 = -253LL;
	uint16_t x84 = 0U;

	t3 = (((x81+x82)<=x83)>>x84);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x89 = INT16_MIN;
	static int16_t x90 = 811;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = 6U;
	int32_t t4 = -383440;

	t4 = (((x89+x90)<=x91)>>x92);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x117 = -1;
	static int16_t x118 = -1;
	int8_t x119 = -57;
	uint8_t x120 = 1U;
	volatile int32_t t5 = 22598;

	t5 = (((x117+x118)<=x119)>>x120);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x141 = -3;
	int8_t x142 = 8;
	uint8_t x144 = 2U;

	t6 = (((x141+x142)<=x143)>>x144);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x179 = -1LL;
	volatile uint8_t x180 = 5U;

	t7 = (((x177+x178)<=x179)>>x180);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x201 = 63U;
	static int16_t x202 = INT16_MIN;
	int8_t x203 = 5;
	int16_t x204 = 11;
	static int32_t t8 = 55656182;

	t8 = (((x201+x202)<=x203)>>x204);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x213 = -1;
	int32_t x214 = 1023909;
	volatile int32_t t9 = -1;

	t9 = (((x213+x214)<=x215)>>x216);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = 29637755;
	volatile uint64_t x315 = 234LLU;
	int8_t x316 = 3;

	t10 = (((x313+x314)<=x315)>>x316);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x369 = 104U;
	int64_t x370 = INT64_MIN;
	static int16_t x372 = 21;

	t11 = (((x369+x370)<=x371)>>x372);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x405 = UINT64_MAX;
	volatile int16_t x406 = 335;
	int32_t x407 = -1;
	volatile uint8_t x408 = 6U;

	t12 = (((x405+x406)<=x407)>>x408);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x465 = UINT8_MAX;
	int8_t x466 = -7;
	int64_t x467 = INT64_MAX;
	static int32_t t13 = -14;

	t13 = (((x465+x466)<=x467)>>x468);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x485 = 62780141489168658LL;
	int16_t x486 = INT16_MAX;
	uint32_t x488 = 19U;
	volatile int32_t t14 = -56371;

	t14 = (((x485+x486)<=x487)>>x488);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x549 = INT16_MIN;
	volatile int16_t x550 = INT16_MIN;
	volatile int8_t x551 = INT8_MIN;
	volatile uint8_t x552 = 3U;

	t15 = (((x549+x550)<=x551)>>x552);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x585 = -60;
	int16_t x586 = INT16_MIN;
	static uint16_t x588 = 1U;
	int32_t t16 = -1003220742;

	t16 = (((x585+x586)<=x587)>>x588);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x617 = INT32_MAX;
	volatile int32_t x618 = INT32_MIN;
	uint8_t x619 = 2U;
	uint8_t x620 = 1U;
	volatile int32_t t17 = 1056371376;

	t17 = (((x617+x618)<=x619)>>x620);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x689 = 372U;
	int16_t x691 = -1;

	t18 = (((x689+x690)<=x691)>>x692);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x717 = UINT64_MAX;
	volatile int32_t x719 = 1397;
	uint8_t x720 = 13U;

	t19 = (((x717+x718)<=x719)>>x720);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x729 = 3;
	int16_t x730 = 0;
	uint8_t x732 = 6U;

	t20 = (((x729+x730)<=x731)>>x732);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x777 = INT64_MIN;
	uint64_t x780 = 7LLU;
	volatile int32_t t21 = 40651;

	t21 = (((x777+x778)<=x779)>>x780);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x797 = UINT16_MAX;
	static int16_t x799 = INT16_MAX;
	uint32_t x800 = 2U;
	int32_t t22 = 0;

	t22 = (((x797+x798)<=x799)>>x800);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x801 = -1;
	static int8_t x802 = INT8_MAX;
	volatile int32_t t23 = 93479464;

	t23 = (((x801+x802)<=x803)>>x804);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x813 = 719883U;
	int16_t x815 = 6;
	int8_t x816 = 0;
	int32_t t24 = -98590;

	t24 = (((x813+x814)<=x815)>>x816);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x849 = UINT32_MAX;
	int32_t x850 = -50055;
	static int64_t x851 = -1LL;
	uint8_t x852 = 1U;
	int32_t t25 = 30917;

	t25 = (((x849+x850)<=x851)>>x852);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x909 = UINT16_MAX;
	volatile int16_t x911 = 1;
	volatile int8_t x912 = 1;
	static int32_t t26 = 30080164;

	t26 = (((x909+x910)<=x911)>>x912);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x981 = 2;
	volatile int16_t x982 = -2;
	int16_t x983 = -1;
	int32_t x984 = 1;
	volatile int32_t t27 = -7500165;

	t27 = (((x981+x982)<=x983)>>x984);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x989 = INT64_MIN;
	static uint32_t x990 = 4U;
	static uint16_t x991 = 71U;
	static int16_t x992 = 0;
	int32_t t28 = -1361902;

	t28 = (((x989+x990)<=x991)>>x992);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1053 = INT32_MIN;
	uint64_t x1054 = 52261279LLU;
	int16_t x1056 = 17;

	t29 = (((x1053+x1054)<=x1055)>>x1056);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1106 = 1864U;
	int32_t x1107 = 25742;
	int16_t x1108 = 18;
	int32_t t30 = 15;

	t30 = (((x1105+x1106)<=x1107)>>x1108);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1109 = -1LL;
	uint64_t x1110 = 29692654004290131LLU;
	int8_t x1111 = INT8_MAX;
	int32_t x1112 = 18;
	volatile int32_t t31 = 513256752;

	t31 = (((x1109+x1110)<=x1111)>>x1112);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x1117 = INT32_MIN;
	uint16_t x1119 = 3500U;
	uint8_t x1120 = 0U;
	volatile int32_t t32 = 583;

	t32 = (((x1117+x1118)<=x1119)>>x1120);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x1141 = -1LL;
	int16_t x1142 = INT16_MIN;
	uint8_t x1143 = UINT8_MAX;
	volatile int32_t t33 = -5954;

	t33 = (((x1141+x1142)<=x1143)>>x1144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1209 = 17U;
	uint64_t x1211 = UINT64_MAX;
	uint16_t x1212 = 18U;
	volatile int32_t t34 = -294;

	t34 = (((x1209+x1210)<=x1211)>>x1212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1213 = INT64_MIN;
	volatile uint32_t x1214 = UINT32_MAX;
	int16_t x1215 = -654;
	volatile uint8_t x1216 = 13U;

	t35 = (((x1213+x1214)<=x1215)>>x1216);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1250 = -1;
	static int16_t x1251 = -6230;
	static volatile uint32_t x1252 = 3U;
	int32_t t36 = -189265;

	t36 = (((x1249+x1250)<=x1251)>>x1252);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1278 = 0;
	uint8_t x1280 = 22U;
	int32_t t37 = 5;

	t37 = (((x1277+x1278)<=x1279)>>x1280);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1353 = INT32_MIN;
	uint64_t x1354 = 3642401LLU;
	uint64_t x1356 = 2LLU;
	volatile int32_t t38 = 830;

	t38 = (((x1353+x1354)<=x1355)>>x1356);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1357 = UINT64_MAX;
	volatile uint8_t x1360 = 6U;
	static int32_t t39 = 1607469;

	t39 = (((x1357+x1358)<=x1359)>>x1360);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1446 = 18U;
	int8_t x1448 = 0;
	int32_t t40 = 4053602;

	t40 = (((x1445+x1446)<=x1447)>>x1448);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1525 = 31;
	int8_t x1526 = 0;
	static uint32_t x1527 = 1894028178U;
	static volatile int32_t t41 = 1417;

	t41 = (((x1525+x1526)<=x1527)>>x1528);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1545 = INT8_MIN;
	uint32_t x1547 = 10U;
	int32_t t42 = -41274;

	t42 = (((x1545+x1546)<=x1547)>>x1548);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1569 = 24664U;
	static int8_t x1572 = 0;
	static volatile int32_t t43 = -75009;

	t43 = (((x1569+x1570)<=x1571)>>x1572);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1585 = -30720338489LL;
	int8_t x1586 = INT8_MIN;
	volatile int16_t x1587 = INT16_MIN;
	uint16_t x1588 = 6U;
	static volatile int32_t t44 = 212664489;

	t44 = (((x1585+x1586)<=x1587)>>x1588);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1590 = 22;
	volatile int32_t x1591 = INT32_MIN;

	t45 = (((x1589+x1590)<=x1591)>>x1592);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1645 = 14207U;
	int64_t x1646 = -8128558LL;
	int64_t x1647 = -19776399LL;
	static uint64_t x1648 = 5LLU;
	int32_t t46 = 743390662;

	t46 = (((x1645+x1646)<=x1647)>>x1648);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x1705 = 114463153149LLU;
	uint32_t x1706 = 8U;
	static uint16_t x1707 = UINT16_MAX;
	uint8_t x1708 = 0U;
	int32_t t47 = -52897196;

	t47 = (((x1705+x1706)<=x1707)>>x1708);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x1709 = UINT32_MAX;
	int16_t x1712 = 0;
	static volatile int32_t t48 = 933215;

	t48 = (((x1709+x1710)<=x1711)>>x1712);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x1733 = 41935LL;
	int64_t x1734 = 2LL;
	static int16_t x1735 = INT16_MIN;
	static int16_t x1736 = 11;
	volatile int32_t t49 = -130833;

	t49 = (((x1733+x1734)<=x1735)>>x1736);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1737 = -1LL;
	volatile uint16_t x1738 = 6U;
	uint32_t x1739 = 7U;
	static int16_t x1740 = 0;
	static int32_t t50 = -682;

	t50 = (((x1737+x1738)<=x1739)>>x1740);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1763 = INT64_MAX;
	uint8_t x1764 = 11U;
	volatile int32_t t51 = 46;

	t51 = (((x1761+x1762)<=x1763)>>x1764);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1770 = UINT8_MAX;
	static int64_t x1771 = 815651129818LL;
	volatile int32_t t52 = 5808;

	t52 = (((x1769+x1770)<=x1771)>>x1772);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1777 = 29556LL;
	volatile uint64_t x1778 = 1790232181499049961LLU;
	int8_t x1780 = 6;

	t53 = (((x1777+x1778)<=x1779)>>x1780);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1793 = -1LL;
	uint64_t x1794 = UINT64_MAX;
	static uint32_t x1795 = 26488548U;
	uint8_t x1796 = 28U;
	static int32_t t54 = -23603688;

	t54 = (((x1793+x1794)<=x1795)>>x1796);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1821 = 1;
	static int64_t x1822 = INT64_MIN;
	int8_t x1823 = 0;
	uint8_t x1824 = 2U;
	int32_t t55 = 855;

	t55 = (((x1821+x1822)<=x1823)>>x1824);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1869 = 4511U;
	int64_t x1872 = 2LL;
	int32_t t56 = -127536;

	t56 = (((x1869+x1870)<=x1871)>>x1872);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1950 = -7;
	uint32_t x1952 = 6U;
	int32_t t57 = -250907793;

	t57 = (((x1949+x1950)<=x1951)>>x1952);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1994 = -1LL;
	static int32_t x1995 = -4511;
	volatile int8_t x1996 = 1;
	int32_t t58 = -672;

	t58 = (((x1993+x1994)<=x1995)>>x1996);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x2037 = -97;
	int64_t x2038 = 31486LL;
	int32_t t59 = -2;

	t59 = (((x2037+x2038)<=x2039)>>x2040);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2081 = 3628U;
	int32_t t60 = 5631579;

	t60 = (((x2081+x2082)<=x2083)>>x2084);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x2097 = INT16_MIN;
	volatile int32_t x2098 = 4477296;
	volatile int64_t x2099 = INT64_MIN;
	volatile int8_t x2100 = 3;
	int32_t t61 = 1527229;

	t61 = (((x2097+x2098)<=x2099)>>x2100);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x2145 = 0U;
	static int8_t x2146 = 16;
	volatile uint8_t x2147 = 24U;
	uint8_t x2148 = 19U;
	volatile int32_t t62 = 100400165;

	t62 = (((x2145+x2146)<=x2147)>>x2148);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2169 = -1;
	int8_t x2170 = 29;
	uint32_t x2171 = 1526665U;
	int32_t t63 = -322;

	t63 = (((x2169+x2170)<=x2171)>>x2172);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2173 = -1;
	volatile int32_t t64 = 7;

	t64 = (((x2173+x2174)<=x2175)>>x2176);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x2237 = UINT32_MAX;
	static int32_t x2239 = INT32_MIN;
	static volatile int16_t x2240 = 0;
	volatile int32_t t65 = -438017;

	t65 = (((x2237+x2238)<=x2239)>>x2240);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x2241 = 51;
	uint32_t x2242 = 7U;
	int8_t x2243 = INT8_MAX;
	static int32_t t66 = 40355371;

	t66 = (((x2241+x2242)<=x2243)>>x2244);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2353 = 129377U;
	uint8_t x2355 = 10U;
	uint16_t x2356 = 1U;
	int32_t t67 = 180761;

	t67 = (((x2353+x2354)<=x2355)>>x2356);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x2405 = -1;
	volatile int32_t x2406 = INT32_MAX;
	static int32_t x2407 = -1;
	volatile int32_t t68 = -2781;

	t68 = (((x2405+x2406)<=x2407)>>x2408);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x2421 = UINT16_MAX;
	uint32_t x2422 = UINT32_MAX;
	static uint64_t x2423 = 193344988513LLU;
	static int8_t x2424 = 1;
	int32_t t69 = -136;

	t69 = (((x2421+x2422)<=x2423)>>x2424);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2437 = INT32_MIN;
	int8_t x2439 = INT8_MAX;
	volatile int32_t t70 = 469;

	t70 = (((x2437+x2438)<=x2439)>>x2440);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2441 = -58;
	uint64_t x2442 = UINT64_MAX;
	volatile uint8_t x2443 = 13U;
	uint64_t x2444 = 0LLU;
	int32_t t71 = -6513;

	t71 = (((x2441+x2442)<=x2443)>>x2444);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x2473 = -6139;
	int16_t x2474 = 10214;
	int64_t x2475 = INT64_MIN;
	uint32_t x2476 = 13U;
	volatile int32_t t72 = -59;

	t72 = (((x2473+x2474)<=x2475)>>x2476);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2481 = 22171873U;
	volatile uint16_t x2482 = 37U;
	volatile int16_t x2483 = -9529;
	uint32_t x2484 = 1U;
	int32_t t73 = 175;

	t73 = (((x2481+x2482)<=x2483)>>x2484);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2582 = 3898;
	int8_t x2584 = 21;

	t74 = (((x2581+x2582)<=x2583)>>x2584);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2633 = -1;
	static int16_t x2634 = 7653;
	static int64_t x2636 = 19LL;

	t75 = (((x2633+x2634)<=x2635)>>x2636);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2649 = INT64_MIN;
	static uint16_t x2650 = UINT16_MAX;
	uint8_t x2651 = UINT8_MAX;
	int32_t x2652 = 1;
	int32_t t76 = 77053;

	t76 = (((x2649+x2650)<=x2651)>>x2652);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2677 = -1;
	volatile int16_t x2678 = INT16_MIN;
	int32_t x2679 = INT32_MAX;
	uint32_t x2680 = 16U;
	int32_t t77 = 1248398;

	t77 = (((x2677+x2678)<=x2679)>>x2680);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2741 = 23312731LLU;
	uint16_t x2742 = UINT16_MAX;
	static int16_t x2743 = INT16_MIN;
	uint16_t x2744 = 0U;

	t78 = (((x2741+x2742)<=x2743)>>x2744);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2745 = -30;
	uint32_t x2746 = 6624219U;
	int64_t x2747 = INT64_MIN;
	volatile uint16_t x2748 = 2U;

	t79 = (((x2745+x2746)<=x2747)>>x2748);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x2749 = INT8_MIN;
	static int8_t x2750 = -1;
	int64_t x2751 = -308154LL;
	int8_t x2752 = 29;

	t80 = (((x2749+x2750)<=x2751)>>x2752);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x2757 = 220;
	volatile int16_t x2758 = -2;
	int32_t x2759 = -1;
	int32_t x2760 = 2;

	t81 = (((x2757+x2758)<=x2759)>>x2760);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x2777 = UINT16_MAX;
	int64_t x2778 = INT64_MIN;
	int64_t x2779 = -1LL;
	static uint16_t x2780 = 1U;

	t82 = (((x2777+x2778)<=x2779)>>x2780);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2781 = 67566088882248749LLU;
	volatile uint64_t x2782 = 1760821693LLU;
	uint32_t x2783 = 87U;
	int32_t t83 = -337150;

	t83 = (((x2781+x2782)<=x2783)>>x2784);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2877 = -1LL;
	int64_t x2878 = 9636207789645414LL;
	int64_t x2879 = -246432014LL;
	int16_t x2880 = 1;
	volatile int32_t t84 = 127;

	t84 = (((x2877+x2878)<=x2879)>>x2880);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x2893 = UINT32_MAX;
	uint8_t x2896 = 15U;
	static int32_t t85 = -112;

	t85 = (((x2893+x2894)<=x2895)>>x2896);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2926 = 1356089830909LL;
	int16_t x2927 = -1;
	int64_t x2928 = 0LL;
	int32_t t86 = -529577183;

	t86 = (((x2925+x2926)<=x2927)>>x2928);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x2973 = 1438U;
	int32_t x2974 = -1;
	uint8_t x2975 = 115U;
	uint8_t x2976 = 2U;
	volatile int32_t t87 = -1572910;

	t87 = (((x2973+x2974)<=x2975)>>x2976);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x2985 = 1534029928471404LLU;
	uint8_t x2986 = UINT8_MAX;
	static int16_t x2987 = INT16_MIN;

	t88 = (((x2985+x2986)<=x2987)>>x2988);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3021 = 493527LLU;
	uint32_t x3022 = UINT32_MAX;
	int64_t x3023 = -30068165893LL;
	volatile int8_t x3024 = 29;

	t89 = (((x3021+x3022)<=x3023)>>x3024);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x3041 = 1LL;
	int16_t x3042 = -1;
	int64_t x3043 = INT64_MIN;
	volatile uint8_t x3044 = 0U;
	volatile int32_t t90 = 2;

	t90 = (((x3041+x3042)<=x3043)>>x3044);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3077 = INT16_MIN;
	uint8_t x3078 = UINT8_MAX;
	int32_t x3079 = -216;
	int8_t x3080 = 2;

	t91 = (((x3077+x3078)<=x3079)>>x3080);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x3105 = 651515U;
	int32_t x3106 = 3174181;
	int32_t x3107 = INT32_MAX;
	uint8_t x3108 = 0U;
	int32_t t92 = 785578;

	t92 = (((x3105+x3106)<=x3107)>>x3108);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3129 = -1;
	volatile int32_t t93 = -1202;

	t93 = (((x3129+x3130)<=x3131)>>x3132);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3185 = 782U;
	int16_t x3188 = 3;
	static volatile int32_t t94 = 133938869;

	t94 = (((x3185+x3186)<=x3187)>>x3188);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3274 = INT16_MIN;
	int8_t x3276 = 0;
	int32_t t95 = -131796;

	t95 = (((x3273+x3274)<=x3275)>>x3276);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x3277 = 237706222678863LLU;
	static volatile int16_t x3278 = INT16_MIN;
	uint64_t x3279 = 12LLU;
	static uint8_t x3280 = 0U;
	volatile int32_t t96 = 0;

	t96 = (((x3277+x3278)<=x3279)>>x3280);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3289 = UINT64_MAX;
	static volatile int16_t x3290 = INT16_MIN;
	uint32_t x3291 = UINT32_MAX;
	int32_t x3292 = 0;
	volatile int32_t t97 = -1;

	t97 = (((x3289+x3290)<=x3291)>>x3292);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x3304 = 2;
	int32_t t98 = -14918099;

	t98 = (((x3301+x3302)<=x3303)>>x3304);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3329 = -5660896922270LL;
	int32_t x3330 = -393347391;
	volatile int16_t x3332 = 13;

	t99 = (((x3329+x3330)<=x3331)>>x3332);

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

