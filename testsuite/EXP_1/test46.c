#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 13LLU;
uint32_t x209 = UINT32_MAX;
int32_t x210 = INT32_MAX;
static int32_t t4 = -767258;
int16_t x476 = 25;
volatile uint64_t t5 = 5447084360487LLU;
uint8_t x616 = 28U;
uint32_t t6 = 31508893U;
static int64_t x710 = 11631061LL;
int16_t x712 = 1;
int8_t x715 = INT8_MIN;
volatile int32_t t8 = 8570;
int16_t x729 = INT16_MIN;
uint32_t x1034 = 67846426U;
uint64_t t13 = 686628037311LLU;
volatile int32_t x1098 = INT32_MIN;
int64_t x1099 = -660208LL;
static uint8_t x1100 = 3U;
volatile uint64_t t14 = 2340LLU;
int16_t x1181 = -1;
int32_t x1202 = INT32_MIN;
volatile int16_t x1203 = INT16_MIN;
int32_t x1334 = -63858684;
uint8_t x1336 = 26U;
volatile int32_t t19 = 438;
int8_t x1668 = 2;
int32_t x1686 = 1198;
static volatile int32_t t24 = 1113409;
int64_t x1708 = 1LL;
volatile int8_t x1712 = 3;
int64_t x1794 = -468474494LL;
uint16_t x1926 = 103U;
int8_t x1928 = 5;
volatile uint8_t x2061 = UINT8_MAX;
uint16_t x2064 = 2U;
uint32_t x2170 = 561U;
volatile uint32_t x2213 = 844U;
int16_t x2243 = INT16_MAX;
static int32_t x2271 = INT32_MAX;
int64_t x2319 = INT64_MAX;
static volatile uint32_t t41 = 2U;
int16_t x2353 = INT16_MAX;
int8_t x2356 = 27;
static volatile int8_t x2376 = 0;
volatile int8_t x2551 = INT8_MIN;
uint64_t x2562 = 5149309LLU;
uint16_t x2601 = UINT16_MAX;
static int8_t x2602 = INT8_MIN;
int32_t t47 = -21889;
uint8_t x2658 = 58U;
int32_t t48 = 13;
volatile uint64_t x2686 = UINT64_MAX;
int64_t x2687 = INT64_MIN;
static volatile uint64_t t51 = 1028637944706701590LLU;
int32_t x2717 = -1;
int16_t x2718 = INT16_MIN;
volatile int64_t t52 = -118884LL;
int8_t x2781 = INT8_MIN;
uint8_t x2782 = UINT8_MAX;
uint8_t x2784 = 0U;
static int64_t x2789 = -1LL;
int16_t x2790 = -1;
uint8_t x2792 = 9U;
volatile uint64_t t54 = 2064890LLU;
int64_t x3015 = 9184LL;
volatile int64_t t55 = 440551693LL;
volatile int16_t x3055 = 4;
int64_t x3057 = 32951540LL;
uint64_t x3058 = 4765787LLU;
int8_t x3082 = INT8_MIN;
int8_t x3093 = -1;
int32_t x3113 = -2389584;
int64_t x3187 = 381598086366783800LL;
static volatile int16_t x3194 = INT16_MIN;
int64_t x3209 = -1LL;
int8_t x3212 = 8;
volatile int32_t t66 = 1613925;
uint64_t x3369 = 2610047413688273035LLU;
uint32_t x3372 = 1U;
uint64_t t70 = 6377098331LLU;
int8_t x3605 = INT8_MIN;
int16_t x3606 = INT16_MIN;
int8_t x3621 = -1;
static uint16_t x3623 = UINT16_MAX;
uint16_t x3643 = 1728U;
uint8_t x3681 = UINT8_MAX;
volatile int32_t x3683 = INT32_MAX;
int64_t t76 = 4667669LL;
uint8_t x3728 = 1U;
static int64_t x3740 = 19LL;
uint8_t x3830 = UINT8_MAX;
uint16_t x3889 = 7U;
volatile int16_t x3892 = 15;
static volatile int16_t x3902 = -1;
uint64_t t82 = 15742LLU;
uint16_t x3957 = 609U;
static int64_t x3958 = -101LL;
int64_t x3960 = 13LL;
static volatile uint64_t x4053 = UINT64_MAX;
uint64_t t85 = 60996717727669LLU;
int32_t x4060 = 0;
uint8_t x4096 = 7U;
int64_t t87 = -1416983509244LL;
volatile int16_t x4464 = 1;
volatile int32_t x4539 = INT32_MIN;
int32_t x4641 = INT32_MIN;
uint16_t x4650 = 1U;
int16_t x4651 = -1;
uint32_t t94 = 1U;
static int8_t x4701 = 5;
uint64_t t95 = 1701678286526664LLU;
volatile int32_t x4717 = -1;
uint64_t t96 = 259862161189425260LLU;
uint32_t t97 = 11U;
int32_t t98 = 159869326;
static uint16_t x4795 = 51U;


void f0(void) {
	int16_t x69 = INT16_MAX;
	uint8_t x70 = 14U;
	static int32_t x71 = INT32_MAX;
	uint16_t x72 = 15U;
	int32_t t0 = 1041690;

	t0 = (((x69+x70)/x71)>>x72);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x153 = -1;
	static volatile uint8_t x154 = 5U;
	volatile uint64_t x155 = 109733242842550712LLU;
	static volatile uint8_t x156 = 7U;

	t1 = (((x153+x154)/x155)>>x156);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x211 = -1;
	volatile int64_t x212 = 2LL;
	volatile uint32_t t2 = 806360U;

	t2 = (((x209+x210)/x211)>>x212);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x265 = -1LL;
	int16_t x266 = -5466;
	static volatile uint32_t x267 = 408034919U;
	uint8_t x268 = 15U;
	int64_t t3 = -1094705987488627LL;

	t3 = (((x265+x266)/x267)>>x268);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x437 = -1;
	int32_t x438 = 3440;
	int32_t x439 = -35241496;
	static int8_t x440 = 1;

	t4 = (((x437+x438)/x439)>>x440);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x473 = INT16_MAX;
	volatile uint64_t x474 = 12509216LLU;
	int8_t x475 = INT8_MAX;

	t5 = (((x473+x474)/x475)>>x476);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x613 = UINT32_MAX;
	int16_t x614 = INT16_MAX;
	int16_t x615 = INT16_MAX;

	t6 = (((x613+x614)/x615)>>x616);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x709 = INT8_MIN;
	uint8_t x711 = 1U;
	int64_t t7 = 1292867420671LL;

	t7 = (((x709+x710)/x711)>>x712);

	if (t7 != 5815466LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x713 = -14;
	uint16_t x714 = 12U;
	static uint64_t x716 = 11LLU;

	t8 = (((x713+x714)/x715)>>x716);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x730 = INT16_MIN;
	int16_t x731 = -1;
	int8_t x732 = 1;
	volatile int32_t t9 = 557;

	t9 = (((x729+x730)/x731)>>x732);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x761 = INT64_MIN;
	uint64_t x762 = UINT64_MAX;
	int16_t x763 = 249;
	uint64_t x764 = 10LLU;
	uint64_t t10 = 2LLU;

	t10 = (((x761+x762)/x763)>>x764);

	if (t10 != 36173490982895LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x989 = 9U;
	uint64_t x990 = 4796317669433583858LLU;
	int16_t x991 = INT16_MIN;
	uint32_t x992 = 43U;
	static uint64_t t11 = 84466LLU;

	t11 = (((x989+x990)/x991)>>x992);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x1033 = 5U;
	uint32_t x1035 = 4U;
	uint16_t x1036 = 7U;
	uint32_t t12 = 18U;

	t12 = (((x1033+x1034)/x1035)>>x1036);

	if (t12 != 132512U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1049 = 29U;
	uint64_t x1050 = 2797844808289LLU;
	uint64_t x1051 = 2LLU;
	uint8_t x1052 = 7U;

	t13 = (((x1049+x1050)/x1051)>>x1052);

	if (t13 != 10929081282LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1097 = UINT64_MAX;

	t14 = (((x1097+x1098)/x1099)>>x1100);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1121 = -3;
	uint32_t x1122 = UINT32_MAX;
	volatile int64_t x1123 = INT64_MIN;
	uint8_t x1124 = 20U;
	volatile int64_t t15 = 58510LL;

	t15 = (((x1121+x1122)/x1123)>>x1124);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1182 = 1;
	int16_t x1183 = INT16_MAX;
	uint32_t x1184 = 3U;
	int32_t t16 = 84;

	t16 = (((x1181+x1182)/x1183)>>x1184);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1201 = 1319U;
	int8_t x1204 = 1;
	uint32_t t17 = 13U;

	t17 = (((x1201+x1202)/x1203)>>x1204);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1317 = INT16_MAX;
	static int64_t x1318 = 1213926302704293812LL;
	static int64_t x1319 = 36LL;
	int16_t x1320 = 2;
	int64_t t18 = -950106LL;

	t18 = (((x1317+x1318)/x1319)>>x1320);

	if (t18 != 8430043768780045LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1333 = INT8_MIN;
	volatile int32_t x1335 = -1;

	t19 = (((x1333+x1334)/x1335)>>x1336);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1345 = 86U;
	int16_t x1346 = 1;
	int16_t x1347 = INT16_MIN;
	int8_t x1348 = 7;
	volatile int32_t t20 = -440095774;

	t20 = (((x1345+x1346)/x1347)>>x1348);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1373 = -1LL;
	volatile int16_t x1374 = -1;
	volatile uint8_t x1375 = UINT8_MAX;
	static volatile int8_t x1376 = 2;
	volatile int64_t t21 = 926085494LL;

	t21 = (((x1373+x1374)/x1375)>>x1376);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1493 = -1;
	int8_t x1494 = 7;
	static int8_t x1495 = -7;
	uint16_t x1496 = 1U;
	int32_t t22 = -25;

	t22 = (((x1493+x1494)/x1495)>>x1496);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1665 = INT16_MIN;
	int16_t x1666 = -1;
	int32_t x1667 = INT32_MIN;
	volatile int32_t t23 = 405641;

	t23 = (((x1665+x1666)/x1667)>>x1668);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1685 = -312470;
	int16_t x1687 = -16;
	volatile int8_t x1688 = 13;

	t24 = (((x1685+x1686)/x1687)>>x1688);

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1705 = 4395U;
	uint8_t x1706 = 6U;
	uint16_t x1707 = 25U;
	int32_t t25 = 803;

	t25 = (((x1705+x1706)/x1707)>>x1708);

	if (t25 != 88) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1709 = 30;
	int8_t x1710 = -1;
	uint32_t x1711 = 6495U;
	volatile uint32_t t26 = 80U;

	t26 = (((x1709+x1710)/x1711)>>x1712);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x1765 = INT64_MIN;
	uint32_t x1766 = 4041U;
	int32_t x1767 = INT32_MIN;
	volatile int32_t x1768 = 11;
	static int64_t t27 = 970615344549745201LL;

	t27 = (((x1765+x1766)/x1767)>>x1768);

	if (t27 != 2097151LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1793 = 0;
	int32_t x1795 = -1;
	uint16_t x1796 = 21U;
	static volatile int64_t t28 = -2044899LL;

	t28 = (((x1793+x1794)/x1795)>>x1796);

	if (t28 != 223LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1909 = INT8_MAX;
	volatile int16_t x1910 = -1;
	uint32_t x1911 = UINT32_MAX;
	static volatile uint64_t x1912 = 6LLU;
	uint32_t t29 = 14076U;

	t29 = (((x1909+x1910)/x1911)>>x1912);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1925 = INT16_MAX;
	uint32_t x1927 = 162659U;
	uint32_t t30 = 40865453U;

	t30 = (((x1925+x1926)/x1927)>>x1928);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1953 = 60U;
	uint16_t x1954 = 338U;
	static volatile uint16_t x1955 = 7U;
	int8_t x1956 = 3;
	int32_t t31 = -97679806;

	t31 = (((x1953+x1954)/x1955)>>x1956);

	if (t31 != 7) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x1989 = INT8_MIN;
	uint64_t x1990 = 42LLU;
	int8_t x1991 = INT8_MAX;
	int8_t x1992 = 0;
	uint64_t t32 = 12340410506LLU;

	t32 = (((x1989+x1990)/x1991)>>x1992);

	if (t32 != 145249953336295681LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x2013 = UINT32_MAX;
	int32_t x2014 = INT32_MIN;
	static uint16_t x2015 = 107U;
	uint32_t x2016 = 11U;
	static volatile uint32_t t33 = 25740U;

	t33 = (((x2013+x2014)/x2015)>>x2016);

	if (t33 != 9799U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2017 = 12917U;
	int64_t x2018 = INT64_MIN;
	int16_t x2019 = -14;
	int8_t x2020 = 0;
	int64_t t34 = -6963434LL;

	t34 = (((x2017+x2018)/x2019)>>x2020);

	if (t34 != 658812288346768777LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2062 = 322902LLU;
	uint8_t x2063 = 5U;
	static uint64_t t35 = 60510679666LLU;

	t35 = (((x2061+x2062)/x2063)>>x2064);

	if (t35 != 16157LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x2169 = 68168U;
	int64_t x2171 = INT64_MIN;
	uint16_t x2172 = 0U;
	static volatile int64_t t36 = -628417LL;

	t36 = (((x2169+x2170)/x2171)>>x2172);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2214 = INT16_MAX;
	static int64_t x2215 = 3832156LL;
	static uint16_t x2216 = 31U;
	int64_t t37 = 136772157576441879LL;

	t37 = (((x2213+x2214)/x2215)>>x2216);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x2241 = UINT8_MAX;
	static int64_t x2242 = -1LL;
	int16_t x2244 = 3;
	volatile int64_t t38 = -113314LL;

	t38 = (((x2241+x2242)/x2243)>>x2244);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2269 = -7;
	int32_t x2270 = INT32_MAX;
	int8_t x2272 = 15;
	static volatile int32_t t39 = -235;

	t39 = (((x2269+x2270)/x2271)>>x2272);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2317 = 130776961U;
	int16_t x2318 = INT16_MAX;
	static int16_t x2320 = 5;
	int64_t t40 = -2985756512721673806LL;

	t40 = (((x2317+x2318)/x2319)>>x2320);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2333 = 2562166U;
	int16_t x2334 = INT16_MAX;
	uint32_t x2335 = UINT32_MAX;
	volatile uint8_t x2336 = 26U;

	t41 = (((x2333+x2334)/x2335)>>x2336);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2354 = -3281;
	uint8_t x2355 = 22U;
	int32_t t42 = 333;

	t42 = (((x2353+x2354)/x2355)>>x2356);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2373 = INT16_MIN;
	int64_t x2374 = 1545952154LL;
	volatile uint32_t x2375 = 18U;
	volatile int64_t t43 = -26351247486627051LL;

	t43 = (((x2373+x2374)/x2375)>>x2376);

	if (t43 != 85884410LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2533 = 46442331015404250LLU;
	volatile int8_t x2534 = -1;
	static int16_t x2535 = -1;
	uint8_t x2536 = 15U;
	uint64_t t44 = 17180010327LLU;

	t44 = (((x2533+x2534)/x2535)>>x2536);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2549 = INT8_MIN;
	int16_t x2550 = -5650;
	static uint16_t x2552 = 9U;
	static int32_t t45 = -46821963;

	t45 = (((x2549+x2550)/x2551)>>x2552);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2561 = INT64_MIN;
	int8_t x2563 = -1;
	uint32_t x2564 = 5U;
	uint64_t t46 = 691LLU;

	t46 = (((x2561+x2562)/x2563)>>x2564);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2603 = INT32_MAX;
	static int16_t x2604 = 6;

	t47 = (((x2601+x2602)/x2603)>>x2604);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2657 = INT8_MIN;
	int16_t x2659 = -1;
	static uint16_t x2660 = 1U;

	t48 = (((x2657+x2658)/x2659)>>x2660);

	if (t48 != 35) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2677 = 973688114LL;
	uint64_t x2678 = UINT64_MAX;
	uint16_t x2679 = UINT16_MAX;
	uint8_t x2680 = 14U;
	volatile uint64_t t49 = 1308733442672LLU;

	t49 = (((x2677+x2678)/x2679)>>x2680);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2685 = -1;
	static int16_t x2688 = 14;
	volatile uint64_t t50 = 121095792LLU;

	t50 = (((x2685+x2686)/x2687)>>x2688);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2713 = INT16_MAX;
	volatile uint64_t x2714 = 32LLU;
	volatile int64_t x2715 = 134195388658156LL;
	uint8_t x2716 = 22U;

	t51 = (((x2713+x2714)/x2715)>>x2716);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2719 = INT64_MIN;
	uint8_t x2720 = 0U;

	t52 = (((x2717+x2718)/x2719)>>x2720);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2783 = 3U;
	int32_t t53 = -741;

	t53 = (((x2781+x2782)/x2783)>>x2784);

	if (t53 != 42) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x2791 = 44696323433311480LLU;

	t54 = (((x2789+x2790)/x2791)>>x2792);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3013 = 1U;
	uint8_t x3014 = UINT8_MAX;
	uint16_t x3016 = 22U;

	t55 = (((x3013+x3014)/x3015)>>x3016);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x3053 = -1;
	static int32_t x3054 = -1;
	uint32_t x3056 = 15U;
	int32_t t56 = 868118727;

	t56 = (((x3053+x3054)/x3055)>>x3056);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3059 = -1LL;
	uint8_t x3060 = 0U;
	volatile uint64_t t57 = 58LLU;

	t57 = (((x3057+x3058)/x3059)>>x3060);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3081 = -3243;
	uint16_t x3083 = UINT16_MAX;
	uint8_t x3084 = 26U;
	static int32_t t58 = -2844817;

	t58 = (((x3081+x3082)/x3083)>>x3084);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x3094 = -1;
	int32_t x3095 = 975;
	uint8_t x3096 = 1U;
	volatile int32_t t59 = 50;

	t59 = (((x3093+x3094)/x3095)>>x3096);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3114 = -1;
	int16_t x3115 = -12267;
	static uint32_t x3116 = 6U;
	static int32_t t60 = -40;

	t60 = (((x3113+x3114)/x3115)>>x3116);

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3133 = 12332814227245LLU;
	static uint16_t x3134 = 31U;
	int16_t x3135 = INT16_MIN;
	static volatile uint32_t x3136 = 26U;
	uint64_t t61 = 3LLU;

	t61 = (((x3133+x3134)/x3135)>>x3136);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x3185 = 27;
	volatile int8_t x3186 = INT8_MIN;
	int8_t x3188 = 0;
	volatile int64_t t62 = -889495412LL;

	t62 = (((x3185+x3186)/x3187)>>x3188);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3193 = 0LLU;
	int32_t x3195 = -1;
	uint16_t x3196 = 1U;
	uint64_t t63 = 314LLU;

	t63 = (((x3193+x3194)/x3195)>>x3196);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3205 = 1086905819589305390LLU;
	int16_t x3206 = -10;
	volatile int64_t x3207 = -6159777474000LL;
	volatile int16_t x3208 = 5;
	volatile uint64_t t64 = 1754662728233693666LLU;

	t64 = (((x3205+x3206)/x3207)>>x3208);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x3210 = 3U;
	int16_t x3211 = INT16_MIN;
	int64_t t65 = 713952135LL;

	t65 = (((x3209+x3210)/x3211)>>x3212);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x3221 = 9;
	uint8_t x3222 = 12U;
	int32_t x3223 = INT32_MAX;
	volatile uint16_t x3224 = 4U;

	t66 = (((x3221+x3222)/x3223)>>x3224);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3233 = -1LL;
	static uint8_t x3234 = 11U;
	static volatile uint64_t x3235 = UINT64_MAX;
	volatile uint16_t x3236 = 1U;
	uint64_t t67 = 1736LLU;

	t67 = (((x3233+x3234)/x3235)>>x3236);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3305 = -1LL;
	static int16_t x3306 = 3;
	volatile int64_t x3307 = -1052715644331773030LL;
	static uint8_t x3308 = 0U;
	int64_t t68 = -38280886LL;

	t68 = (((x3305+x3306)/x3307)>>x3308);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3370 = -1;
	static int32_t x3371 = INT32_MIN;
	volatile uint64_t t69 = 1027431LLU;

	t69 = (((x3369+x3370)/x3371)>>x3372);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3445 = -1LL;
	uint64_t x3446 = UINT64_MAX;
	uint16_t x3447 = 304U;
	uint8_t x3448 = 4U;

	t70 = (((x3445+x3446)/x3447)>>x3448);

	if (t70 != 3792504949364628LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3573 = -10585930979843LL;
	int16_t x3574 = 34;
	int64_t x3575 = INT64_MIN;
	uint8_t x3576 = 60U;
	volatile int64_t t71 = 1436525725LL;

	t71 = (((x3573+x3574)/x3575)>>x3576);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3607 = -1;
	int8_t x3608 = 0;
	int32_t t72 = -172459;

	t72 = (((x3605+x3606)/x3607)>>x3608);

	if (t72 != 32896) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3622 = INT64_MAX;
	uint64_t x3624 = 7LLU;
	volatile int64_t t73 = 3227625076638774LL;

	t73 = (((x3621+x3622)/x3623)>>x3624);

	if (t73 != 1099528405248LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3641 = 27U;
	int8_t x3642 = INT8_MIN;
	static int8_t x3644 = 1;
	int32_t t74 = 481689309;

	t74 = (((x3641+x3642)/x3643)>>x3644);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x3682 = 204893301U;
	int32_t x3684 = 1;
	volatile uint32_t t75 = 537171372U;

	t75 = (((x3681+x3682)/x3683)>>x3684);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x3685 = INT8_MAX;
	int8_t x3686 = -14;
	volatile int64_t x3687 = 3LL;
	int8_t x3688 = 0;

	t76 = (((x3685+x3686)/x3687)>>x3688);

	if (t76 != 37LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3725 = INT16_MIN;
	uint64_t x3726 = 246942788649970LLU;
	int8_t x3727 = -1;
	uint64_t t77 = 125875LLU;

	t77 = (((x3725+x3726)/x3727)>>x3728);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x3737 = -1LL;
	uint16_t x3738 = 1U;
	static int8_t x3739 = INT8_MAX;
	volatile int64_t t78 = 811747760609LL;

	t78 = (((x3737+x3738)/x3739)>>x3740);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x3829 = UINT8_MAX;
	uint16_t x3831 = 110U;
	int16_t x3832 = 2;
	volatile int32_t t79 = 0;

	t79 = (((x3829+x3830)/x3831)>>x3832);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3890 = INT16_MAX;
	volatile int8_t x3891 = 8;
	volatile int32_t t80 = 421;

	t80 = (((x3889+x3890)/x3891)>>x3892);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3901 = UINT32_MAX;
	uint32_t x3903 = 1130076U;
	uint16_t x3904 = 0U;
	uint32_t t81 = 114818221U;

	t81 = (((x3901+x3902)/x3903)>>x3904);

	if (t81 != 3800U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3933 = UINT64_MAX;
	uint32_t x3934 = UINT32_MAX;
	volatile int32_t x3935 = INT32_MAX;
	uint8_t x3936 = 33U;

	t82 = (((x3933+x3934)/x3935)>>x3936);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x3959 = INT16_MAX;
	static volatile int64_t t83 = -5580LL;

	t83 = (((x3957+x3958)/x3959)>>x3960);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3977 = -1;
	static int8_t x3978 = 1;
	uint32_t x3979 = 99576U;
	static uint8_t x3980 = 7U;
	uint32_t t84 = 126U;

	t84 = (((x3977+x3978)/x3979)>>x3980);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4054 = UINT64_MAX;
	int8_t x4055 = -21;
	uint16_t x4056 = 32U;

	t85 = (((x4053+x4054)/x4055)>>x4056);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4057 = INT16_MAX;
	int32_t x4058 = INT32_MIN;
	static int32_t x4059 = INT32_MAX;
	static int32_t t86 = 3677068;

	t86 = (((x4057+x4058)/x4059)>>x4060);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x4093 = INT8_MIN;
	volatile int64_t x4094 = 460LL;
	uint8_t x4095 = 6U;

	t87 = (((x4093+x4094)/x4095)>>x4096);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4253 = UINT32_MAX;
	int16_t x4254 = 5952;
	uint32_t x4255 = 7759967U;
	int32_t x4256 = 14;
	uint32_t t88 = 8837511U;

	t88 = (((x4253+x4254)/x4255)>>x4256);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x4413 = INT8_MIN;
	int32_t x4414 = 0;
	int64_t x4415 = -541148152019LL;
	static volatile int8_t x4416 = 1;
	int64_t t89 = -358628044126174919LL;

	t89 = (((x4413+x4414)/x4415)>>x4416);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x4417 = -2759807;
	uint32_t x4418 = UINT32_MAX;
	int32_t x4419 = -1;
	static volatile uint8_t x4420 = 3U;
	uint32_t t90 = 735662390U;

	t90 = (((x4417+x4418)/x4419)>>x4420);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4461 = UINT64_MAX;
	int32_t x4462 = 251472;
	int64_t x4463 = INT64_MIN;
	uint64_t t91 = 150898LLU;

	t91 = (((x4461+x4462)/x4463)>>x4464);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4537 = -944;
	static volatile int32_t x4538 = 1;
	static uint16_t x4540 = 10U;
	int32_t t92 = -14691;

	t92 = (((x4537+x4538)/x4539)>>x4540);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x4642 = 1710855054333LLU;
	uint32_t x4643 = UINT32_MAX;
	uint16_t x4644 = 55U;
	uint64_t t93 = 3091751LLU;

	t93 = (((x4641+x4642)/x4643)>>x4644);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4649 = UINT32_MAX;
	uint8_t x4652 = 9U;

	t94 = (((x4649+x4650)/x4651)>>x4652);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4702 = 689029513520458159LLU;
	static uint64_t x4703 = 8454143112651942987LLU;
	int32_t x4704 = 0;

	t95 = (((x4701+x4702)/x4703)>>x4704);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4718 = 5LLU;
	uint32_t x4719 = 5342235U;
	static uint8_t x4720 = 2U;

	t96 = (((x4717+x4718)/x4719)>>x4720);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x4733 = 567643705U;
	volatile int32_t x4734 = INT32_MAX;
	uint32_t x4735 = 7703339U;
	uint8_t x4736 = 0U;

	t97 = (((x4733+x4734)/x4735)>>x4736);

	if (t97 != 352U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4737 = INT16_MIN;
	int32_t x4738 = 19;
	int16_t x4739 = -1;
	uint8_t x4740 = 23U;

	t98 = (((x4737+x4738)/x4739)>>x4740);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x4793 = INT32_MAX;
	int32_t x4794 = -1;
	uint8_t x4796 = 17U;
	volatile int32_t t99 = 4669;

	t99 = (((x4793+x4794)/x4795)>>x4796);

	if (t99 != 321) { NG(); } else { ; }
	
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

