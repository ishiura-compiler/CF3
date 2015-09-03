#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 54U;
int64_t x61 = -550281410994946LL;
static int64_t x142 = -1LL;
int16_t x144 = 12;
int16_t x164 = 9;
uint16_t x232 = 6U;
static int64_t t8 = -5403062LL;
static volatile int8_t x339 = INT8_MAX;
static volatile int32_t t9 = 2000;
static volatile uint8_t x399 = UINT8_MAX;
static volatile uint8_t x420 = 3U;
uint64_t x425 = 4510LLU;
uint16_t x430 = 2302U;
uint8_t x432 = 1U;
uint16_t x561 = UINT16_MAX;
volatile int8_t x563 = -1;
uint32_t x619 = 4395U;
volatile int8_t x620 = 10;
static volatile int16_t x631 = -1;
int8_t x654 = -1;
int8_t x777 = INT8_MAX;
uint64_t x873 = 947604105916925LLU;
int32_t x877 = -1;
uint8_t x880 = 17U;
static uint32_t x1073 = 29U;
volatile uint8_t x1104 = 4U;
static int32_t x1167 = INT32_MIN;
volatile int32_t x1173 = 174014;
int32_t x1198 = 19;
static uint64_t t29 = 932252959987LLU;
static volatile uint8_t x1251 = 15U;
int8_t x1467 = INT8_MIN;
int64_t t34 = -1015246864338061LL;
int32_t t35 = 87800;
volatile int16_t x1565 = 143;
static int16_t x1574 = -1;
static volatile int32_t t39 = 758802023;
uint8_t x1578 = 16U;
uint32_t x1580 = 0U;
int64_t x1597 = INT64_MIN;
int64_t x1598 = INT64_MAX;
uint32_t x1633 = 72327643U;
int16_t x1634 = INT16_MAX;
int64_t x1635 = INT64_MIN;
int8_t x1713 = -1;
static volatile int32_t t44 = -12485;
static int8_t x1726 = -1;
static uint64_t x1731 = 933044824260LLU;
int16_t x1791 = INT16_MIN;
static int8_t x1792 = 0;
volatile int32_t t48 = -24;
volatile int8_t x1797 = INT8_MAX;
static int8_t x1799 = -1;
volatile uint16_t x1800 = 30U;
uint32_t x1824 = 27U;
volatile int16_t x1829 = INT16_MIN;
uint8_t x1832 = 14U;
static volatile int64_t x2005 = -455752799402501LL;
int8_t x2068 = 0;
volatile uint8_t x2091 = UINT8_MAX;
uint32_t t57 = 396393786U;
int32_t x2161 = INT32_MIN;
uint16_t x2162 = 7U;
uint32_t x2179 = 468U;
volatile int64_t x2246 = -1LL;
int8_t x2277 = -13;
volatile uint32_t t69 = 3U;
static int8_t x2327 = 7;
int16_t x2328 = 6;
int32_t x2374 = INT32_MIN;
int32_t t73 = 0;
uint32_t x2451 = 950097961U;
int16_t x2487 = -1;
int16_t x2488 = 3;
uint32_t x2615 = UINT32_MAX;
int32_t x2619 = INT32_MAX;
uint8_t x2631 = 3U;
static int32_t x2709 = -1623;
int32_t x2710 = -1;
int16_t x2717 = 0;
int64_t x2809 = 2954579LL;
uint32_t x2810 = 227920U;
int32_t t86 = 79293;
volatile int16_t x2862 = INT16_MAX;
volatile int32_t t87 = -1253;
int32_t x2986 = -342166841;
int32_t x3086 = INT32_MAX;
uint64_t x3137 = UINT64_MAX;
int64_t x3139 = INT64_MIN;
uint16_t x3225 = 7510U;
int8_t x3226 = INT8_MIN;
volatile int64_t x3246 = -519043LL;
int32_t x3287 = -1464;
uint32_t t97 = 2032455U;
volatile int8_t x3297 = INT8_MAX;
volatile int16_t x3299 = INT16_MAX;
int8_t x3341 = -1;
static volatile uint8_t x3342 = 34U;
int32_t t99 = -392098;


void f0(void) {
	int8_t x2 = INT8_MAX;
	volatile uint64_t x3 = 43820664840655LLU;
	int8_t x4 = 0;
	static volatile int32_t t0 = -855;

	t0 = (x1&((x2<=x3)>>x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint8_t x6 = 18U;
	static uint8_t x7 = 8U;
	uint8_t x8 = 1U;
	volatile int32_t t1 = 98;

	t1 = (x5&((x6<=x7)>>x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x41 = 11447745U;
	volatile uint8_t x42 = UINT8_MAX;
	int64_t x43 = INT64_MAX;
	int8_t x44 = 1;
	volatile uint32_t t2 = 14U;

	t2 = (x41&((x42<=x43)>>x44));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MAX;
	static uint8_t x64 = 9U;
	volatile int64_t t3 = -31340372909910LL;

	t3 = (x61&((x62<=x63)>>x64));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x141 = INT32_MIN;
	uint64_t x143 = 5649886LLU;
	volatile int32_t t4 = 1;

	t4 = (x141&((x142<=x143)>>x144));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x145 = INT8_MIN;
	int64_t x146 = 205226LL;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = 0;
	static volatile int32_t t5 = 1;

	t5 = (x145&((x146<=x147)>>x148));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x149 = -7;
	static int64_t x150 = -238316LL;
	int64_t x151 = INT64_MIN;
	uint8_t x152 = 2U;
	volatile int32_t t6 = 1;

	t6 = (x149&((x150<=x151)>>x152));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x161 = -1;
	int64_t x162 = INT64_MAX;
	int8_t x163 = INT8_MIN;
	static volatile int32_t t7 = 6771;

	t7 = (x161&((x162<=x163)>>x164));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x229 = -1934880896544456028LL;
	static volatile uint64_t x230 = UINT64_MAX;
	volatile int64_t x231 = -1773494374026430LL;

	t8 = (x229&((x230<=x231)>>x232));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x337 = INT32_MAX;
	uint64_t x338 = 347524422570713LLU;
	int16_t x340 = 12;

	t9 = (x337&((x338<=x339)>>x340));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x397 = 9964U;
	volatile int16_t x398 = INT16_MIN;
	static int16_t x400 = 0;
	volatile uint32_t t10 = 6786U;

	t10 = (x397&((x398<=x399)>>x400));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x417 = 10LLU;
	static int16_t x418 = -1;
	uint32_t x419 = 509U;
	uint64_t t11 = 160017LLU;

	t11 = (x417&((x418<=x419)>>x420));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x426 = 1U;
	static volatile int64_t x427 = 3298806999LL;
	static uint16_t x428 = 1U;
	volatile uint64_t t12 = 8099LLU;

	t12 = (x425&((x426<=x427)>>x428));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x429 = 434;
	int64_t x431 = -563465069114LL;
	volatile int32_t t13 = -1;

	t13 = (x429&((x430<=x431)>>x432));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x469 = -1LL;
	volatile uint16_t x470 = UINT16_MAX;
	uint64_t x471 = 153596187068LLU;
	uint8_t x472 = 19U;
	volatile int64_t t14 = 0LL;

	t14 = (x469&((x470<=x471)>>x472));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x562 = -1;
	uint8_t x564 = 12U;
	volatile int32_t t15 = 0;

	t15 = (x561&((x562<=x563)>>x564));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x585 = -1;
	uint8_t x586 = 2U;
	int64_t x587 = -1LL;
	static volatile uint8_t x588 = 20U;
	volatile int32_t t16 = -12748514;

	t16 = (x585&((x586<=x587)>>x588));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x617 = -1;
	uint64_t x618 = UINT64_MAX;
	int32_t t17 = 16757722;

	t17 = (x617&((x618<=x619)>>x620));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x629 = 4147184LL;
	int64_t x630 = INT64_MIN;
	uint32_t x632 = 1U;
	int64_t t18 = 240LL;

	t18 = (x629&((x630<=x631)>>x632));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x653 = INT16_MAX;
	int16_t x655 = -1;
	uint32_t x656 = 17U;
	volatile int32_t t19 = -127;

	t19 = (x653&((x654<=x655)>>x656));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x733 = 0;
	static volatile int8_t x734 = INT8_MAX;
	int16_t x735 = 175;
	static int8_t x736 = 1;
	volatile int32_t t20 = -2231630;

	t20 = (x733&((x734<=x735)>>x736));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x778 = 1057U;
	uint16_t x779 = 11U;
	static uint64_t x780 = 15LLU;
	static int32_t t21 = -13845;

	t21 = (x777&((x778<=x779)>>x780));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x874 = 112U;
	static int8_t x875 = INT8_MIN;
	int8_t x876 = 7;
	uint64_t t22 = 2550007010201598085LLU;

	t22 = (x873&((x874<=x875)>>x876));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x878 = 1U;
	static uint32_t x879 = UINT32_MAX;
	static volatile int32_t t23 = 15;

	t23 = (x877&((x878<=x879)>>x880));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1074 = 16696130698975LLU;
	int16_t x1075 = -1;
	uint8_t x1076 = 4U;
	volatile uint32_t t24 = 351035U;

	t24 = (x1073&((x1074<=x1075)>>x1076));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1089 = INT16_MIN;
	int16_t x1090 = 1;
	uint64_t x1091 = 118012LLU;
	uint8_t x1092 = 3U;
	int32_t t25 = -21213;

	t25 = (x1089&((x1090<=x1091)>>x1092));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1101 = -1;
	static volatile int32_t x1102 = INT32_MIN;
	int32_t x1103 = INT32_MIN;
	volatile int32_t t26 = -10;

	t26 = (x1101&((x1102<=x1103)>>x1104));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1165 = 27343U;
	int64_t x1166 = -12996779555LL;
	volatile uint16_t x1168 = 1U;
	volatile uint32_t t27 = 1333U;

	t27 = (x1165&((x1166<=x1167)>>x1168));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1174 = INT32_MIN;
	int64_t x1175 = 1LL;
	uint8_t x1176 = 2U;
	int32_t t28 = -28781;

	t28 = (x1173&((x1174<=x1175)>>x1176));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1197 = 21363825002748774LLU;
	uint16_t x1199 = UINT16_MAX;
	uint8_t x1200 = 5U;

	t29 = (x1197&((x1198<=x1199)>>x1200));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1249 = 739245377681487919LL;
	int16_t x1250 = INT16_MIN;
	uint8_t x1252 = 16U;
	volatile int64_t t30 = -2213734801054LL;

	t30 = (x1249&((x1250<=x1251)>>x1252));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1309 = INT64_MAX;
	uint16_t x1310 = 2753U;
	volatile int16_t x1311 = INT16_MIN;
	volatile int16_t x1312 = 1;
	int64_t t31 = -1LL;

	t31 = (x1309&((x1310<=x1311)>>x1312));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1413 = UINT32_MAX;
	uint16_t x1414 = UINT16_MAX;
	int32_t x1415 = INT32_MIN;
	uint8_t x1416 = 1U;
	uint32_t t32 = 247219U;

	t32 = (x1413&((x1414<=x1415)>>x1416));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1421 = -409;
	static uint64_t x1422 = 19321671136LLU;
	static int64_t x1423 = 535551LL;
	uint8_t x1424 = 1U;
	volatile int32_t t33 = -144;

	t33 = (x1421&((x1422<=x1423)>>x1424));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1465 = INT64_MIN;
	static uint64_t x1466 = 1LLU;
	volatile uint8_t x1468 = 2U;

	t34 = (x1465&((x1466<=x1467)>>x1468));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1497 = 34U;
	static int64_t x1498 = -1LL;
	static int32_t x1499 = -1;
	int8_t x1500 = 5;

	t35 = (x1497&((x1498<=x1499)>>x1500));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1517 = INT16_MAX;
	static int64_t x1518 = -15220637LL;
	static int8_t x1519 = INT8_MIN;
	uint8_t x1520 = 0U;
	int32_t t36 = -16123881;

	t36 = (x1517&((x1518<=x1519)>>x1520));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1566 = -257173;
	int8_t x1567 = INT8_MIN;
	static int16_t x1568 = 0;
	volatile int32_t t37 = -34811;

	t37 = (x1565&((x1566<=x1567)>>x1568));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1569 = INT16_MIN;
	int8_t x1570 = -1;
	int64_t x1571 = INT64_MIN;
	int16_t x1572 = 0;
	int32_t t38 = -48284716;

	t38 = (x1569&((x1570<=x1571)>>x1572));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1573 = -1;
	static int32_t x1575 = INT32_MIN;
	int8_t x1576 = 0;

	t39 = (x1573&((x1574<=x1575)>>x1576));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1577 = 104068113;
	volatile int16_t x1579 = -1;
	int32_t t40 = -20551163;

	t40 = (x1577&((x1578<=x1579)>>x1580));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1599 = 5U;
	uint16_t x1600 = 7U;
	volatile int64_t t41 = 140LL;

	t41 = (x1597&((x1598<=x1599)>>x1600));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1636 = 1U;
	static uint32_t t42 = 1961424311U;

	t42 = (x1633&((x1634<=x1635)>>x1636));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1637 = 2LLU;
	uint16_t x1638 = 13275U;
	static uint16_t x1639 = 73U;
	static uint8_t x1640 = 24U;
	static volatile uint64_t t43 = 1092577381LLU;

	t43 = (x1637&((x1638<=x1639)>>x1640));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1714 = -1;
	int16_t x1715 = -1;
	int8_t x1716 = 1;

	t44 = (x1713&((x1714<=x1715)>>x1716));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1725 = 83U;
	int16_t x1727 = 2358;
	int8_t x1728 = 1;
	int32_t t45 = 10;

	t45 = (x1725&((x1726<=x1727)>>x1728));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1729 = -8;
	volatile int16_t x1730 = -6;
	volatile uint8_t x1732 = 22U;
	int32_t t46 = 39214164;

	t46 = (x1729&((x1730<=x1731)>>x1732));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1773 = INT16_MIN;
	volatile int8_t x1774 = 8;
	uint32_t x1775 = UINT32_MAX;
	int16_t x1776 = 0;
	int32_t t47 = -12479;

	t47 = (x1773&((x1774<=x1775)>>x1776));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1789 = INT16_MIN;
	uint32_t x1790 = 653476643U;

	t48 = (x1789&((x1790<=x1791)>>x1792));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x1798 = 1;
	int32_t t49 = 1963;

	t49 = (x1797&((x1798<=x1799)>>x1800));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1821 = UINT64_MAX;
	uint32_t x1822 = UINT32_MAX;
	static int64_t x1823 = INT64_MAX;
	volatile uint64_t t50 = 3973523057199LLU;

	t50 = (x1821&((x1822<=x1823)>>x1824));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1830 = 3660U;
	static uint8_t x1831 = 28U;
	int32_t t51 = -38004;

	t51 = (x1829&((x1830<=x1831)>>x1832));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1977 = 67177752912058905LL;
	static int64_t x1978 = INT64_MIN;
	int16_t x1979 = -1;
	uint32_t x1980 = 10U;
	static volatile int64_t t52 = -28883913LL;

	t52 = (x1977&((x1978<=x1979)>>x1980));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x1981 = INT16_MAX;
	uint64_t x1982 = UINT64_MAX;
	int16_t x1983 = -8;
	int8_t x1984 = 2;
	int32_t t53 = -870;

	t53 = (x1981&((x1982<=x1983)>>x1984));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2006 = INT64_MAX;
	int32_t x2007 = INT32_MAX;
	uint8_t x2008 = 1U;
	int64_t t54 = -30LL;

	t54 = (x2005&((x2006<=x2007)>>x2008));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2065 = INT8_MIN;
	int32_t x2066 = -80;
	int8_t x2067 = INT8_MIN;
	int32_t t55 = -1681;

	t55 = (x2065&((x2066<=x2067)>>x2068));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x2089 = 1U;
	int16_t x2090 = INT16_MAX;
	int16_t x2092 = 0;
	volatile int32_t t56 = 44380;

	t56 = (x2089&((x2090<=x2091)>>x2092));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2101 = UINT32_MAX;
	uint16_t x2102 = 342U;
	static volatile int64_t x2103 = INT64_MIN;
	uint16_t x2104 = 1U;

	t57 = (x2101&((x2102<=x2103)>>x2104));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2117 = -9;
	uint64_t x2118 = UINT64_MAX;
	static volatile uint32_t x2119 = 11736U;
	uint8_t x2120 = 3U;
	volatile int32_t t58 = -1300;

	t58 = (x2117&((x2118<=x2119)>>x2120));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2125 = 70U;
	int32_t x2126 = -1;
	int16_t x2127 = 0;
	int8_t x2128 = 5;
	int32_t t59 = -1;

	t59 = (x2125&((x2126<=x2127)>>x2128));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2149 = 11U;
	uint8_t x2150 = 42U;
	static uint16_t x2151 = UINT16_MAX;
	uint16_t x2152 = 1U;
	volatile int32_t t60 = -5850;

	t60 = (x2149&((x2150<=x2151)>>x2152));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x2163 = -1;
	uint8_t x2164 = 0U;
	static int32_t t61 = 0;

	t61 = (x2161&((x2162<=x2163)>>x2164));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2177 = INT8_MIN;
	int8_t x2178 = -1;
	volatile uint16_t x2180 = 24U;
	int32_t t62 = 0;

	t62 = (x2177&((x2178<=x2179)>>x2180));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2213 = 75320U;
	uint16_t x2214 = UINT16_MAX;
	static int32_t x2215 = 78577160;
	static volatile int8_t x2216 = 1;
	static volatile uint32_t t63 = 326U;

	t63 = (x2213&((x2214<=x2215)>>x2216));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2229 = UINT8_MAX;
	uint64_t x2230 = 53LLU;
	int32_t x2231 = INT32_MAX;
	static int8_t x2232 = 7;
	static int32_t t64 = -150581532;

	t64 = (x2229&((x2230<=x2231)>>x2232));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2237 = INT64_MIN;
	volatile uint8_t x2238 = 97U;
	int8_t x2239 = -1;
	int8_t x2240 = 1;
	volatile int64_t t65 = -381030428868977730LL;

	t65 = (x2237&((x2238<=x2239)>>x2240));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2245 = -80427LL;
	static volatile uint8_t x2247 = UINT8_MAX;
	static uint16_t x2248 = 0U;
	int64_t t66 = -4671LL;

	t66 = (x2245&((x2246<=x2247)>>x2248));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2278 = 3;
	uint16_t x2279 = 5952U;
	uint8_t x2280 = 21U;
	int32_t t67 = 28;

	t67 = (x2277&((x2278<=x2279)>>x2280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x2281 = UINT64_MAX;
	static uint32_t x2282 = 5471595U;
	static int8_t x2283 = INT8_MIN;
	int64_t x2284 = 6LL;
	volatile uint64_t t68 = 18653474245859712LLU;

	t68 = (x2281&((x2282<=x2283)>>x2284));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x2297 = 7372U;
	int16_t x2298 = -1;
	uint16_t x2299 = 25U;
	uint8_t x2300 = 0U;

	t69 = (x2297&((x2298<=x2299)>>x2300));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2309 = 2U;
	int8_t x2310 = INT8_MIN;
	int8_t x2311 = 1;
	volatile uint8_t x2312 = 29U;
	int32_t t70 = 8714;

	t70 = (x2309&((x2310<=x2311)>>x2312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2325 = -1;
	uint16_t x2326 = UINT16_MAX;
	volatile int32_t t71 = 175300947;

	t71 = (x2325&((x2326<=x2327)>>x2328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x2373 = INT32_MIN;
	volatile int32_t x2375 = INT32_MAX;
	volatile uint8_t x2376 = 5U;
	volatile int32_t t72 = -475768;

	t72 = (x2373&((x2374<=x2375)>>x2376));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x2377 = 329285;
	uint16_t x2378 = UINT16_MAX;
	int8_t x2379 = INT8_MIN;
	uint8_t x2380 = 0U;

	t73 = (x2377&((x2378<=x2379)>>x2380));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x2441 = INT64_MIN;
	static volatile int8_t x2442 = -1;
	uint32_t x2443 = UINT32_MAX;
	uint8_t x2444 = 14U;
	int64_t t74 = 69366438LL;

	t74 = (x2441&((x2442<=x2443)>>x2444));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2449 = INT32_MIN;
	int16_t x2450 = INT16_MIN;
	int8_t x2452 = 29;
	volatile int32_t t75 = -7;

	t75 = (x2449&((x2450<=x2451)>>x2452));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2485 = 1;
	int16_t x2486 = -50;
	int32_t t76 = 15204947;

	t76 = (x2485&((x2486<=x2487)>>x2488));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x2497 = 9192590779132626912LLU;
	uint64_t x2498 = UINT64_MAX;
	uint8_t x2499 = UINT8_MAX;
	int8_t x2500 = 1;
	volatile uint64_t t77 = 77266125954163LLU;

	t77 = (x2497&((x2498<=x2499)>>x2500));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2613 = -3513;
	int32_t x2614 = INT32_MIN;
	int64_t x2616 = 19LL;
	volatile int32_t t78 = 3544;

	t78 = (x2613&((x2614<=x2615)>>x2616));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2617 = INT8_MAX;
	int64_t x2618 = -1LL;
	static int16_t x2620 = 0;
	int32_t t79 = 128319817;

	t79 = (x2617&((x2618<=x2619)>>x2620));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x2629 = -1;
	int8_t x2630 = -7;
	int32_t x2632 = 15;
	volatile int32_t t80 = -1173035;

	t80 = (x2629&((x2630<=x2631)>>x2632));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x2661 = -3;
	int32_t x2662 = INT32_MAX;
	static uint64_t x2663 = UINT64_MAX;
	static int16_t x2664 = 17;
	int32_t t81 = -13;

	t81 = (x2661&((x2662<=x2663)>>x2664));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x2711 = -1;
	uint8_t x2712 = 13U;
	int32_t t82 = 1;

	t82 = (x2709&((x2710<=x2711)>>x2712));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2718 = UINT16_MAX;
	uint64_t x2719 = UINT64_MAX;
	uint8_t x2720 = 10U;
	static int32_t t83 = -2;

	t83 = (x2717&((x2718<=x2719)>>x2720));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x2737 = INT8_MIN;
	int64_t x2738 = 45754683449LL;
	int16_t x2739 = -453;
	static volatile int8_t x2740 = 1;
	volatile int32_t t84 = 635;

	t84 = (x2737&((x2738<=x2739)>>x2740));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2811 = 104;
	volatile int8_t x2812 = 9;
	int64_t t85 = 1915037LL;

	t85 = (x2809&((x2810<=x2811)>>x2812));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2817 = -16;
	int8_t x2818 = 43;
	int64_t x2819 = INT64_MIN;
	uint32_t x2820 = 25U;

	t86 = (x2817&((x2818<=x2819)>>x2820));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x2861 = 3662U;
	int64_t x2863 = -714LL;
	static uint8_t x2864 = 23U;

	t87 = (x2861&((x2862<=x2863)>>x2864));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2913 = INT8_MIN;
	uint8_t x2914 = UINT8_MAX;
	int16_t x2915 = INT16_MIN;
	int8_t x2916 = 30;
	volatile int32_t t88 = -12281;

	t88 = (x2913&((x2914<=x2915)>>x2916));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x2985 = 125;
	int8_t x2987 = INT8_MIN;
	uint8_t x2988 = 2U;
	volatile int32_t t89 = -13;

	t89 = (x2985&((x2986<=x2987)>>x2988));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x3085 = INT16_MIN;
	static volatile int64_t x3087 = INT64_MAX;
	int16_t x3088 = 0;
	static int32_t t90 = -4926638;

	t90 = (x3085&((x3086<=x3087)>>x3088));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x3138 = INT64_MIN;
	uint16_t x3140 = 5U;
	static uint64_t t91 = 137523224512115508LLU;

	t91 = (x3137&((x3138<=x3139)>>x3140));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x3149 = 1467LLU;
	volatile int32_t x3150 = INT32_MAX;
	int32_t x3151 = INT32_MIN;
	static uint8_t x3152 = 1U;
	volatile uint64_t t92 = 5283360663632LLU;

	t92 = (x3149&((x3150<=x3151)>>x3152));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3185 = 1;
	uint32_t x3186 = 1126712U;
	static int16_t x3187 = INT16_MIN;
	static int16_t x3188 = 26;
	volatile int32_t t93 = 15448;

	t93 = (x3185&((x3186<=x3187)>>x3188));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3227 = -201LL;
	uint16_t x3228 = 0U;
	static volatile int32_t t94 = -27847274;

	t94 = (x3225&((x3226<=x3227)>>x3228));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x3245 = INT32_MIN;
	int32_t x3247 = INT32_MIN;
	static uint16_t x3248 = 0U;
	static volatile int32_t t95 = -286813625;

	t95 = (x3245&((x3246<=x3247)>>x3248));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3261 = 999U;
	int64_t x3262 = 22497238578LL;
	int8_t x3263 = INT8_MIN;
	int8_t x3264 = 0;
	int32_t t96 = 265;

	t96 = (x3261&((x3262<=x3263)>>x3264));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3285 = 3U;
	volatile uint16_t x3286 = 45U;
	volatile int64_t x3288 = 5LL;

	t97 = (x3285&((x3286<=x3287)>>x3288));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3298 = INT16_MIN;
	uint32_t x3300 = 10U;
	volatile int32_t t98 = 77;

	t98 = (x3297&((x3298<=x3299)>>x3300));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3343 = -1;
	volatile int8_t x3344 = 2;

	t99 = (x3341&((x3342<=x3343)>>x3344));

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

