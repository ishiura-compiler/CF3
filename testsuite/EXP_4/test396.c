#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x27 = -2LL;
static uint32_t t0 = 2U;
volatile int32_t x43 = -1;
static int32_t t1 = -3540164;
int32_t x97 = 1;
static volatile int32_t x100 = -1;
static int32_t t2 = 398;
volatile int32_t t3 = 620201417;
volatile uint8_t x201 = 1U;
static volatile uint64_t t5 = 2316060683651344354LLU;
uint8_t x286 = 1U;
uint64_t x333 = UINT64_MAX;
static uint32_t x472 = UINT32_MAX;
static uint32_t x489 = 83831751U;
uint32_t x701 = 246395U;
static int8_t x704 = -18;
int16_t x785 = INT16_MAX;
volatile int16_t x795 = 2;
int64_t x819 = 473783LL;
int32_t t17 = 1;
int32_t x830 = 1;
int64_t x870 = INT64_MAX;
static int16_t x871 = -1;
int32_t t21 = -2225;
volatile uint16_t x950 = 10U;
volatile int32_t t22 = 2;
int64_t x1001 = 0LL;
uint8_t x1077 = 49U;
static volatile uint8_t x1101 = 3U;
static int8_t x1103 = INT8_MIN;
static volatile int32_t t27 = -1075;
uint16_t x1205 = 6U;
uint8_t x1207 = 2U;
volatile int8_t x1208 = 2;
static int32_t t28 = 18250454;
uint16_t x1336 = UINT16_MAX;
int8_t x1399 = INT8_MIN;
volatile uint32_t t31 = 552311682U;
static uint8_t x1411 = 2U;
int16_t x1602 = INT16_MIN;
int8_t x1685 = INT8_MAX;
int16_t x1688 = -1;
volatile uint8_t x1765 = 115U;
uint8_t x1772 = UINT8_MAX;
int32_t t38 = 874141956;
int32_t x1818 = 7;
int8_t x1820 = INT8_MIN;
int64_t x1882 = 4LL;
int16_t x1884 = INT16_MIN;
uint32_t t42 = 662787241U;
int16_t x2159 = 4;
volatile int8_t x2179 = 5;
uint64_t t45 = 59437057069449112LLU;
uint16_t x2207 = 5U;
static int16_t x2209 = INT16_MAX;
int32_t x2224 = -1;
static volatile int32_t t48 = 1;
static uint64_t x2233 = 3727546763465LLU;
int16_t x2235 = 1;
uint8_t x2293 = UINT8_MAX;
int16_t x2330 = INT16_MIN;
uint8_t x2357 = UINT8_MAX;
int32_t x2526 = 28;
volatile int64_t x2527 = -1LL;
int32_t x2566 = INT32_MIN;
volatile int64_t x2568 = -1LL;
int16_t x2606 = 10;
volatile int16_t x2608 = -3179;
int32_t t56 = 1400958;
static int8_t x2651 = -1;
uint64_t x2714 = UINT64_MAX;
volatile int16_t x2715 = -1;
static uint64_t x2716 = UINT64_MAX;
static int8_t x2751 = INT8_MIN;
uint8_t x2784 = 23U;
volatile uint64_t t62 = 1114297710LLU;
volatile int8_t x2964 = INT8_MIN;
static uint32_t x3037 = UINT32_MAX;
static int64_t x3039 = 37583739424790LL;
uint32_t t66 = 2005946490U;
int8_t x3088 = -1;
volatile int16_t x3157 = INT16_MAX;
uint8_t x3159 = 1U;
volatile int32_t t68 = -45172617;
static volatile uint16_t x3321 = 427U;
uint64_t x3325 = 3573229355LLU;
int64_t x3326 = 102424960071307LL;
int8_t x3407 = -1;
uint8_t x3561 = UINT8_MAX;
uint16_t x3563 = 31U;
int16_t x3574 = 2;
static int32_t t79 = 43611;
static int32_t x3652 = -1;
volatile int16_t x3707 = INT16_MAX;
volatile int32_t x3779 = -1;
static int8_t x3827 = -1;
volatile int32_t t84 = -1952249;
int32_t x3933 = 0;
int8_t x3947 = INT8_MIN;
static int16_t x3991 = INT16_MIN;
int8_t x4033 = 1;
int32_t x4126 = 3727642;
static volatile int32_t t91 = -189;
static uint8_t x4217 = 0U;
volatile int32_t t94 = -137293422;
int32_t x4419 = -1;


void f0(void) {
	volatile uint32_t x25 = 1161786974U;
	int16_t x26 = 56;
	int8_t x28 = -1;

	t0 = (x25<<(x26%(x27*x28)));

	if (t0 != 1161786974U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x41 = 48;
	uint8_t x42 = 0U;
	int64_t x44 = -1LL;

	t1 = (x41<<(x42%(x43*x44)));

	if (t1 != 48) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x98 = INT8_MIN;
	static int8_t x99 = -1;

	t2 = (x97<<(x98%(x99*x100)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x133 = 201U;
	int8_t x134 = 7;
	volatile int16_t x135 = -1;
	int32_t x136 = -1;

	t3 = (x133<<(x134%(x135*x136)));

	if (t3 != 201) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x202 = 15U;
	uint16_t x203 = UINT16_MAX;
	volatile uint32_t x204 = 186283648U;
	volatile int32_t t4 = -5;

	t4 = (x201<<(x202%(x203*x204)));

	if (t4 != 32768) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x213 = 0LLU;
	volatile int8_t x214 = 1;
	static int16_t x215 = 9236;
	static volatile int32_t x216 = -1;

	t5 = (x213<<(x214%(x215*x216)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x257 = 1U;
	volatile uint16_t x258 = 23U;
	volatile uint8_t x259 = UINT8_MAX;
	static volatile int8_t x260 = -1;
	int32_t t6 = -1;

	t6 = (x257<<(x258%(x259*x260)));

	if (t6 != 8388608) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x265 = 226U;
	int64_t x266 = 5LL;
	volatile int8_t x267 = INT8_MIN;
	volatile int16_t x268 = INT16_MIN;
	int32_t t7 = -67273;

	t7 = (x265<<(x266%(x267*x268)));

	if (t7 != 7232) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x285 = INT16_MAX;
	static uint32_t x287 = 4502U;
	int32_t x288 = -819262;
	volatile int32_t t8 = 6;

	t8 = (x285<<(x286%(x287*x288)));

	if (t8 != 65534) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x334 = -1937;
	volatile int16_t x335 = -1;
	static int64_t x336 = -1LL;
	uint64_t t9 = UINT64_MAX;

	t9 = (x333<<(x334%(x335*x336)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x409 = 242477U;
	int8_t x410 = 0;
	int16_t x411 = -1;
	static uint64_t x412 = 25856359544151LLU;
	volatile uint32_t t10 = 9284802U;

	t10 = (x409<<(x410%(x411*x412)));

	if (t10 != 242477U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x469 = INT32_MAX;
	static int8_t x470 = 0;
	int16_t x471 = INT16_MIN;
	int32_t t11 = INT32_MAX;

	t11 = (x469<<(x470%(x471*x472)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x490 = 0U;
	int64_t x491 = 340754506LL;
	volatile int8_t x492 = INT8_MIN;
	uint32_t t12 = 2878U;

	t12 = (x489<<(x490%(x491*x492)));

	if (t12 != 83831751U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x669 = UINT32_MAX;
	int8_t x670 = -42;
	static int8_t x671 = 2;
	int16_t x672 = -1;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x669<<(x670%(x671*x672)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x702 = 8U;
	static int8_t x703 = INT8_MIN;
	uint32_t t14 = 13826487U;

	t14 = (x701<<(x702%(x703*x704)));

	if (t14 != 63077120U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x786 = 10U;
	int32_t x787 = -24042;
	uint64_t x788 = 34363331174915LLU;
	volatile int32_t t15 = -39580;

	t15 = (x785<<(x786%(x787*x788)));

	if (t15 != 33553408) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x793 = UINT64_MAX;
	uint64_t x794 = UINT64_MAX;
	int16_t x796 = -1;
	volatile uint64_t t16 = 19LLU;

	t16 = (x793<<(x794%(x795*x796)));

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x817 = 4;
	uint16_t x818 = 0U;
	volatile int8_t x820 = -1;

	t17 = (x817<<(x818%(x819*x820)));

	if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x829 = 1868905272798201837LLU;
	int16_t x831 = INT16_MAX;
	volatile int8_t x832 = INT8_MIN;
	volatile uint64_t t18 = 2362342617832799541LLU;

	t18 = (x829<<(x830%(x831*x832)));

	if (t18 != 3737810545596403674LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x869 = 2U;
	static int16_t x872 = -1;
	volatile int32_t t19 = -202;

	t19 = (x869<<(x870%(x871*x872)));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x889 = UINT32_MAX;
	uint16_t x890 = 11U;
	int64_t x891 = INT64_MIN;
	int8_t x892 = 1;
	uint32_t t20 = 2U;

	t20 = (x889<<(x890%(x891*x892)));

	if (t20 != 4294965248U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x917 = INT16_MAX;
	int64_t x918 = INT64_MIN;
	uint32_t x919 = UINT32_MAX;
	uint32_t x920 = UINT32_MAX;

	t21 = (x917<<(x918%(x919*x920)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x949 = UINT8_MAX;
	int16_t x951 = INT16_MAX;
	static uint16_t x952 = 137U;

	t22 = (x949<<(x950%(x951*x952)));

	if (t22 != 261120) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1002 = 1;
	int8_t x1003 = -1;
	int8_t x1004 = INT8_MIN;
	volatile int64_t t23 = -2198194420497LL;

	t23 = (x1001<<(x1002%(x1003*x1004)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1033 = 0;
	int16_t x1034 = INT16_MAX;
	int64_t x1035 = -655LL;
	static int32_t x1036 = -1;
	volatile int32_t t24 = 0;

	t24 = (x1033<<(x1034%(x1035*x1036)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1065 = 68U;
	volatile uint8_t x1066 = UINT8_MAX;
	int16_t x1067 = -1;
	volatile uint64_t x1068 = UINT64_MAX;
	volatile uint32_t t25 = 1272281U;

	t25 = (x1065<<(x1066%(x1067*x1068)));

	if (t25 != 68U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1078 = 16U;
	uint16_t x1079 = 124U;
	volatile int16_t x1080 = 2;
	int32_t t26 = -1;

	t26 = (x1077<<(x1078%(x1079*x1080)));

	if (t26 != 3211264) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1102 = 2U;
	volatile uint8_t x1104 = 6U;

	t27 = (x1101<<(x1102%(x1103*x1104)));

	if (t27 != 12) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1206 = INT64_MIN;

	t28 = (x1205<<(x1206%(x1207*x1208)));

	if (t28 != 6) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1229 = 716449743LLU;
	static int64_t x1230 = INT64_MAX;
	static int32_t x1231 = -1;
	static int16_t x1232 = INT16_MAX;
	static volatile uint64_t t29 = 1LLU;

	t29 = (x1229<<(x1230%(x1231*x1232)));

	if (t29 != 91705567104LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1333 = INT8_MAX;
	uint16_t x1334 = 2U;
	uint16_t x1335 = 83U;
	static volatile int32_t t30 = -2754;

	t30 = (x1333<<(x1334%(x1335*x1336)));

	if (t30 != 508) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x1397 = 24U;
	static int64_t x1398 = INT64_MIN;
	int8_t x1400 = INT8_MIN;

	t31 = (x1397<<(x1398%(x1399*x1400)));

	if (t31 != 24U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1409 = 52U;
	uint16_t x1410 = 2U;
	int32_t x1412 = -1;
	volatile int32_t t32 = 1483050;

	t32 = (x1409<<(x1410%(x1411*x1412)));

	if (t32 != 52) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1513 = 5517574LL;
	static uint8_t x1514 = 7U;
	static int8_t x1515 = -1;
	int64_t x1516 = -1LL;
	int64_t t33 = -425367LL;

	t33 = (x1513<<(x1514%(x1515*x1516)));

	if (t33 != 5517574LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1593 = 1;
	uint32_t x1594 = 3U;
	static int16_t x1595 = -1;
	volatile uint8_t x1596 = 3U;
	int32_t t34 = -8477698;

	t34 = (x1593<<(x1594%(x1595*x1596)));

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1601 = 407;
	static int8_t x1603 = INT8_MIN;
	int8_t x1604 = 4;
	int32_t t35 = 1;

	t35 = (x1601<<(x1602%(x1603*x1604)));

	if (t35 != 407) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1686 = INT8_MAX;
	volatile int64_t x1687 = -1LL;
	volatile int32_t t36 = 433;

	t36 = (x1685<<(x1686%(x1687*x1688)));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x1766 = 5U;
	int8_t x1767 = INT8_MIN;
	uint32_t x1768 = 285352U;
	int32_t t37 = -581206517;

	t37 = (x1765<<(x1766%(x1767*x1768)));

	if (t37 != 3680) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1769 = 107;
	static int16_t x1770 = 0;
	int32_t x1771 = 24;

	t38 = (x1769<<(x1770%(x1771*x1772)));

	if (t38 != 107) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1817 = UINT32_MAX;
	uint32_t x1819 = UINT32_MAX;
	static uint32_t t39 = 11253600U;

	t39 = (x1817<<(x1818%(x1819*x1820)));

	if (t39 != 4294967168U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1881 = 243460451LLU;
	uint16_t x1883 = 3916U;
	volatile uint64_t t40 = 31463386608LLU;

	t40 = (x1881<<(x1882%(x1883*x1884)));

	if (t40 != 3895367216LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x2013 = 17U;
	volatile uint16_t x2014 = 2U;
	int16_t x2015 = -7;
	static int8_t x2016 = INT8_MIN;
	uint32_t t41 = 20000U;

	t41 = (x2013<<(x2014%(x2015*x2016)));

	if (t41 != 68U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x2117 = 704411064U;
	uint8_t x2118 = UINT8_MAX;
	int16_t x2119 = -1;
	int32_t x2120 = -82;

	t42 = (x2117<<(x2118%(x2119*x2120)));

	if (t42 != 4176179200U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2133 = UINT32_MAX;
	static uint16_t x2134 = 13U;
	int64_t x2135 = INT64_MIN;
	uint8_t x2136 = 1U;
	uint32_t t43 = 5327U;

	t43 = (x2133<<(x2134%(x2135*x2136)));

	if (t43 != 4294959104U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2157 = INT16_MAX;
	volatile uint64_t x2158 = 70383800654224LLU;
	uint8_t x2160 = 2U;
	static volatile int32_t t44 = 2324;

	t44 = (x2157<<(x2158%(x2159*x2160)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2177 = 15662LLU;
	uint32_t x2178 = UINT32_MAX;
	int16_t x2180 = 1;

	t45 = (x2177<<(x2178%(x2179*x2180)));

	if (t45 != 15662LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2205 = 0;
	volatile uint8_t x2206 = 3U;
	int8_t x2208 = INT8_MIN;
	int32_t t46 = -3658;

	t46 = (x2205<<(x2206%(x2207*x2208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2210 = INT8_MAX;
	uint32_t x2211 = UINT32_MAX;
	volatile int16_t x2212 = -121;
	volatile int32_t t47 = 303903743;

	t47 = (x2209<<(x2210%(x2211*x2212)));

	if (t47 != 2097088) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2221 = UINT8_MAX;
	int8_t x2222 = INT8_MAX;
	int8_t x2223 = -14;

	t48 = (x2221<<(x2222%(x2223*x2224)));

	if (t48 != 510) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2234 = 5U;
	uint64_t x2236 = UINT64_MAX;
	uint64_t t49 = 164558434LLU;

	t49 = (x2233<<(x2234%(x2235*x2236)));

	if (t49 != 119281496430880LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x2277 = 0;
	uint64_t x2278 = 17863929364LLU;
	volatile uint32_t x2279 = UINT32_MAX;
	volatile int8_t x2280 = INT8_MIN;
	int32_t t50 = 883554568;

	t50 = (x2277<<(x2278%(x2279*x2280)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2294 = 2LLU;
	uint8_t x2295 = 35U;
	uint32_t x2296 = UINT32_MAX;
	volatile int32_t t51 = -56;

	t51 = (x2293<<(x2294%(x2295*x2296)));

	if (t51 != 1020) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2329 = INT64_MAX;
	static int64_t x2331 = -1LL;
	uint64_t x2332 = UINT64_MAX;
	int64_t t52 = INT64_MAX;

	t52 = (x2329<<(x2330%(x2331*x2332)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2358 = INT32_MAX;
	int8_t x2359 = INT8_MAX;
	int8_t x2360 = -1;
	volatile int32_t t53 = 114;

	t53 = (x2357<<(x2358%(x2359*x2360)));

	if (t53 != 32640) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2525 = UINT32_MAX;
	volatile int16_t x2528 = INT16_MIN;
	volatile uint32_t t54 = 240173U;

	t54 = (x2525<<(x2526%(x2527*x2528)));

	if (t54 != 4026531840U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2565 = 3;
	volatile int16_t x2567 = 1;
	static int32_t t55 = 40;

	t55 = (x2565<<(x2566%(x2567*x2568)));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2605 = 2167;
	volatile int32_t x2607 = 14116;

	t56 = (x2605<<(x2606%(x2607*x2608)));

	if (t56 != 2219008) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x2649 = 0U;
	int32_t x2650 = -1;
	int32_t x2652 = -1;
	uint32_t t57 = 0U;

	t57 = (x2649<<(x2650%(x2651*x2652)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2697 = 48;
	int8_t x2698 = 4;
	int8_t x2699 = 1;
	volatile int32_t x2700 = INT32_MAX;
	int32_t t58 = 7476126;

	t58 = (x2697<<(x2698%(x2699*x2700)));

	if (t58 != 768) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2713 = 144U;
	uint32_t t59 = 13169351U;

	t59 = (x2713<<(x2714%(x2715*x2716)));

	if (t59 != 144U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x2737 = 1;
	uint32_t x2738 = 6U;
	int64_t x2739 = -1LL;
	static int8_t x2740 = -1;
	volatile int32_t t60 = -32138483;

	t60 = (x2737<<(x2738%(x2739*x2740)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x2749 = 14U;
	uint8_t x2750 = 0U;
	int64_t x2752 = -121672820LL;
	int32_t t61 = 15282;

	t61 = (x2749<<(x2750%(x2751*x2752)));

	if (t61 != 14) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x2781 = 5613270613LLU;
	static int16_t x2782 = 211;
	volatile uint8_t x2783 = 1U;

	t62 = (x2781<<(x2782%(x2783*x2784)));

	if (t62 != 89812329808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2873 = UINT8_MAX;
	uint32_t x2874 = 2423U;
	volatile int64_t x2875 = -13LL;
	volatile int16_t x2876 = -1;
	int32_t t63 = 3853;

	t63 = (x2873<<(x2874%(x2875*x2876)));

	if (t63 != 8160) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x2961 = 708332974LL;
	int32_t x2962 = INT32_MIN;
	volatile int32_t x2963 = -1;
	int64_t t64 = 2LL;

	t64 = (x2961<<(x2962%(x2963*x2964)));

	if (t64 != 708332974LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3033 = 4;
	int16_t x3034 = INT16_MAX;
	uint16_t x3035 = 29U;
	volatile int64_t x3036 = -1LL;
	int32_t t65 = 31;

	t65 = (x3033<<(x3034%(x3035*x3036)));

	if (t65 != 268435456) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3038 = 16;
	static uint64_t x3040 = 11LLU;

	t66 = (x3037<<(x3038%(x3039*x3040)));

	if (t66 != 4294901760U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x3085 = INT64_MAX;
	int32_t x3086 = -1630296;
	int32_t x3087 = -1;
	int64_t t67 = INT64_MAX;

	t67 = (x3085<<(x3086%(x3087*x3088)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3158 = -1;
	int16_t x3160 = -1;

	t68 = (x3157<<(x3158%(x3159*x3160)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3181 = INT16_MAX;
	int8_t x3182 = 1;
	int64_t x3183 = -1LL;
	static int64_t x3184 = -510767LL;
	static volatile int32_t t69 = 31208903;

	t69 = (x3181<<(x3182%(x3183*x3184)));

	if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3277 = 7U;
	uint16_t x3278 = 1U;
	int32_t x3279 = INT32_MAX;
	int32_t x3280 = -1;
	static int32_t t70 = 862;

	t70 = (x3277<<(x3278%(x3279*x3280)));

	if (t70 != 14) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3322 = 3U;
	volatile int16_t x3323 = -1;
	static int16_t x3324 = -367;
	int32_t t71 = 6;

	t71 = (x3321<<(x3322%(x3323*x3324)));

	if (t71 != 3416) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x3327 = INT8_MIN;
	int8_t x3328 = -1;
	volatile uint64_t t72 = 6LLU;

	t72 = (x3325<<(x3326%(x3327*x3328)));

	if (t72 != 7317973719040LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x3405 = 34;
	int8_t x3406 = INT8_MAX;
	static uint8_t x3408 = 1U;
	static int32_t t73 = 1066891690;

	t73 = (x3405<<(x3406%(x3407*x3408)));

	if (t73 != 34) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3425 = UINT16_MAX;
	uint32_t x3426 = UINT32_MAX;
	int16_t x3427 = -1;
	int32_t x3428 = -1;
	static volatile int32_t t74 = -732056;

	t74 = (x3425<<(x3426%(x3427*x3428)));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x3497 = 465275400U;
	static uint16_t x3498 = 3U;
	static int64_t x3499 = -63799229154597LL;
	volatile int32_t x3500 = -4887;
	static volatile uint32_t t75 = 1578U;

	t75 = (x3497<<(x3498%(x3499*x3500)));

	if (t75 != 3722203200U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3562 = 0;
	uint32_t x3564 = 1U;
	volatile int32_t t76 = 2079151;

	t76 = (x3561<<(x3562%(x3563*x3564)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x3573 = 58U;
	uint8_t x3575 = 47U;
	int64_t x3576 = -1LL;
	int32_t t77 = -3557;

	t77 = (x3573<<(x3574%(x3575*x3576)));

	if (t77 != 232) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3577 = 1;
	volatile int32_t x3578 = -1;
	volatile int64_t x3579 = -1LL;
	volatile int8_t x3580 = 1;
	int32_t t78 = 17599125;

	t78 = (x3577<<(x3578%(x3579*x3580)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x3605 = 15;
	volatile uint32_t x3606 = UINT32_MAX;
	static int8_t x3607 = 1;
	static uint16_t x3608 = UINT16_MAX;

	t79 = (x3605<<(x3606%(x3607*x3608)));

	if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x3649 = UINT32_MAX;
	volatile int8_t x3650 = INT8_MIN;
	uint8_t x3651 = 1U;
	uint32_t t80 = UINT32_MAX;

	t80 = (x3649<<(x3650%(x3651*x3652)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3653 = 0;
	uint8_t x3654 = 1U;
	static int16_t x3655 = 148;
	uint32_t x3656 = 8601636U;
	int32_t t81 = 1;

	t81 = (x3653<<(x3654%(x3655*x3656)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x3705 = INT64_MAX;
	uint8_t x3706 = 0U;
	int32_t x3708 = -170;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x3705<<(x3706%(x3707*x3708)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x3777 = INT8_MAX;
	uint32_t x3778 = UINT32_MAX;
	static uint32_t x3780 = UINT32_MAX;
	int32_t t83 = 7;

	t83 = (x3777<<(x3778%(x3779*x3780)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3825 = UINT8_MAX;
	static int16_t x3826 = INT16_MIN;
	volatile int16_t x3828 = INT16_MIN;

	t84 = (x3825<<(x3826%(x3827*x3828)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3934 = 26U;
	int8_t x3935 = INT8_MIN;
	static int16_t x3936 = INT16_MAX;
	int32_t t85 = -571655374;

	t85 = (x3933<<(x3934%(x3935*x3936)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3945 = UINT16_MAX;
	int32_t x3946 = INT32_MIN;
	int16_t x3948 = INT16_MIN;
	int32_t t86 = 26178295;

	t86 = (x3945<<(x3946%(x3947*x3948)));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3989 = 27;
	uint16_t x3990 = 0U;
	int8_t x3992 = -21;
	volatile int32_t t87 = 1;

	t87 = (x3989<<(x3990%(x3991*x3992)));

	if (t87 != 27) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4021 = UINT64_MAX;
	int8_t x4022 = 17;
	volatile uint16_t x4023 = UINT16_MAX;
	int16_t x4024 = -1;
	static volatile uint64_t t88 = 18433092LLU;

	t88 = (x4021<<(x4022%(x4023*x4024)));

	if (t88 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4034 = 19U;
	int16_t x4035 = INT16_MAX;
	int8_t x4036 = INT8_MIN;
	int32_t t89 = -17444958;

	t89 = (x4033<<(x4034%(x4035*x4036)));

	if (t89 != 524288) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4053 = INT64_MAX;
	volatile int8_t x4054 = INT8_MIN;
	int8_t x4055 = -1;
	volatile int16_t x4056 = 1;
	int64_t t90 = INT64_MAX;

	t90 = (x4053<<(x4054%(x4055*x4056)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4125 = INT8_MAX;
	uint16_t x4127 = 2U;
	static int16_t x4128 = -1;

	t91 = (x4125<<(x4126%(x4127*x4128)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4169 = 1013U;
	uint32_t x4170 = 2U;
	uint64_t x4171 = 6248111876LLU;
	uint8_t x4172 = UINT8_MAX;
	static int32_t t92 = -1;

	t92 = (x4169<<(x4170%(x4171*x4172)));

	if (t92 != 4052) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4218 = 20;
	volatile int32_t x4219 = -38697;
	uint16_t x4220 = 5U;
	static int32_t t93 = 8097131;

	t93 = (x4217<<(x4218%(x4219*x4220)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4245 = 127U;
	int16_t x4246 = INT16_MIN;
	static int16_t x4247 = -1;
	int8_t x4248 = INT8_MIN;

	t94 = (x4245<<(x4246%(x4247*x4248)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4297 = INT32_MAX;
	int16_t x4298 = 129;
	static int64_t x4299 = -1LL;
	int16_t x4300 = -1;
	int32_t t95 = INT32_MAX;

	t95 = (x4297<<(x4298%(x4299*x4300)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4321 = UINT32_MAX;
	static uint16_t x4322 = 4U;
	uint8_t x4323 = 4U;
	uint16_t x4324 = UINT16_MAX;
	uint32_t t96 = 13U;

	t96 = (x4321<<(x4322%(x4323*x4324)));

	if (t96 != 4294967280U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4329 = UINT64_MAX;
	volatile uint16_t x4330 = 1U;
	int8_t x4331 = INT8_MAX;
	int16_t x4332 = INT16_MIN;
	volatile uint64_t t97 = 54LLU;

	t97 = (x4329<<(x4330%(x4331*x4332)));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4373 = 113U;
	uint64_t x4374 = UINT64_MAX;
	static volatile int16_t x4375 = 1;
	int16_t x4376 = -1;
	volatile int32_t t98 = 5007;

	t98 = (x4373<<(x4374%(x4375*x4376)));

	if (t98 != 113) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4417 = 40235LL;
	static int64_t x4418 = INT64_MAX;
	int8_t x4420 = -1;
	volatile int64_t t99 = -1779390LL;

	t99 = (x4417<<(x4418%(x4419*x4420)));

	if (t99 != 40235LL) { NG(); } else { ; }
	
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

