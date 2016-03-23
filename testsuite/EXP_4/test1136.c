
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

static uint16_t x3 = 1U;
static volatile int32_t t0 = -30;
int16_t x9 = INT16_MAX;
uint16_t x11 = 8062U;
static volatile int64_t t2 = 21749LL;
uint32_t x64 = 11U;
int16_t x119 = 349;
static int8_t x227 = 23;
uint32_t x296 = 28U;
volatile uint8_t x540 = 0U;
static uint64_t x610 = 99989609496752LLU;
uint16_t x611 = 82U;
volatile uint64_t t9 = 22338925189774LLU;
static int16_t x873 = 369;
uint64_t x985 = 49580LLU;
volatile uint64_t t15 = 39LLU;
int8_t x1086 = 0;
int8_t x1149 = -1;
int32_t x1150 = -14;
int16_t x1279 = INT16_MAX;
int64_t x1302 = -1LL;
int8_t x1303 = INT8_MAX;
static int8_t x1316 = 0;
uint64_t t26 = 50529966707885830LLU;
int16_t x1582 = INT16_MIN;
int16_t x1583 = INT16_MAX;
static uint32_t x1669 = UINT32_MAX;
uint64_t x1671 = UINT64_MAX;
uint8_t x2003 = 3U;
int32_t t32 = 389730;
static int8_t x2010 = INT8_MIN;
static int16_t x2093 = 6;
int64_t x2094 = INT64_MIN;
volatile int32_t x2096 = 9;
volatile int32_t x2130 = INT32_MIN;
uint8_t x2131 = UINT8_MAX;
uint32_t x2147 = 1957108582U;
volatile uint64_t x2175 = 3560279712791658LLU;
uint64_t t37 = 21442LLU;
volatile uint32_t t38 = 1U;
int16_t x2275 = 12492;
volatile uint16_t x2488 = 3U;
volatile uint16_t x2519 = 306U;
volatile int32_t t42 = -21805;
static int64_t t45 = INT64_MIN;
int16_t x2982 = INT16_MIN;
volatile int32_t x3054 = -1;
int32_t x3086 = -49467952;
static uint64_t t50 = 1LLU;
volatile int64_t x3321 = -1188311286LL;
int8_t x3476 = 14;
volatile int64_t x3569 = -2074859410096LL;
int8_t x3571 = 52;
volatile int8_t x3572 = 3;
static volatile int64_t t55 = 2370883124LL;
volatile uint32_t x3610 = 55U;
static uint16_t x3612 = 22U;
int64_t x3630 = INT64_MIN;
uint16_t x3781 = 79U;
uint32_t x3782 = UINT32_MAX;
int8_t x3796 = 1;
static int8_t x3914 = 1;
int32_t x4018 = INT32_MIN;
static int16_t x4019 = 117;
uint16_t x4020 = 14U;
uint8_t x4080 = 3U;
volatile uint32_t t70 = 75431442U;
int64_t t73 = INT64_MAX;
int8_t x4587 = 0;
uint8_t x4598 = 8U;
uint32_t x4599 = UINT32_MAX;
int32_t t77 = 169575;
static uint32_t x4911 = UINT32_MAX;
int16_t x4912 = 31;
volatile uint32_t t79 = 1U;
int8_t x5027 = 1;
int8_t x5255 = 0;
uint32_t x5378 = UINT32_MAX;
int32_t x5535 = 5;
int32_t t89 = 7;
uint64_t x5750 = UINT64_MAX;
static uint8_t x5751 = 4U;
static uint8_t x5992 = 1U;
int8_t x6020 = 1;
volatile uint64_t x6162 = 239636LLU;
uint16_t x6221 = 0U;
int8_t x6223 = INT8_MAX;
int8_t x6238 = -1;
int8_t x6240 = 1;
volatile int8_t x6296 = 1;
int16_t x6323 = INT16_MAX;
uint8_t x6355 = 7U;
uint32_t x6356 = 0U;
int16_t x6365 = 56;
int64_t x6366 = INT64_MAX;
volatile int64_t t102 = 25438LL;
uint16_t x6466 = UINT16_MAX;
int32_t t104 = 403391702;
volatile int64_t x6577 = 7011006291341LL;
volatile uint64_t t105 = 244415166932787LLU;
static volatile int8_t x6642 = 60;
uint64_t x6643 = UINT64_MAX;
uint8_t x6644 = 15U;
int16_t x6718 = INT16_MIN;
int8_t x6766 = 4;
volatile uint32_t x6767 = UINT32_MAX;
volatile uint8_t x6768 = 0U;
uint16_t x7303 = UINT16_MAX;
uint32_t t113 = 27206530U;
uint8_t x7404 = 0U;
static volatile int64_t x7594 = INT64_MIN;
int8_t x7595 = INT8_MAX;
uint32_t x7616 = 0U;
int32_t x7778 = 7217;
uint64_t x7795 = UINT64_MAX;
volatile uint64_t t121 = 8112000796853770LLU;
int8_t x7799 = INT8_MAX;
int32_t x8025 = 13;
uint8_t x8028 = 18U;
uint16_t x8046 = 21U;
int16_t x8122 = 25;
int32_t t128 = -193;
int16_t x8134 = INT16_MIN;
static uint8_t x8135 = 1U;
uint8_t x8136 = 2U;
volatile int32_t t129 = INT32_MIN;
int32_t t131 = 4719505;
int64_t t133 = -1721974368LL;
int32_t t134 = 173;
uint16_t x8575 = 14U;
static int32_t x8650 = INT32_MIN;
static uint8_t x8652 = 3U;
static int16_t x8706 = -1;
static int32_t t137 = -260;
int8_t x8777 = INT8_MIN;
uint32_t x8831 = 0U;
static int8_t x8832 = 1;
volatile uint16_t x8857 = 113U;
int32_t t141 = -1570;
uint64_t x9279 = UINT64_MAX;
volatile int32_t x9382 = INT32_MIN;
int32_t x9384 = 1;
int16_t x9689 = INT16_MIN;
int32_t x9692 = 0;
int16_t x9727 = INT16_MAX;
int32_t x9750 = INT32_MIN;
uint64_t t156 = 637LLU;
volatile uint32_t x9887 = UINT32_MAX;
static uint8_t x10012 = 1U;
int64_t t161 = -32259565831075LL;
volatile uint64_t t163 = 2172641LLU;
int16_t x10309 = 2326;
uint16_t x10310 = UINT16_MAX;
int64_t x10334 = -1482842433LL;
uint8_t x10437 = 58U;
static volatile int16_t x10438 = INT16_MIN;
static uint64_t x10483 = 11446LLU;
uint8_t x10484 = 10U;
static uint16_t x10491 = 1U;
volatile uint8_t x10492 = 2U;
uint8_t x10524 = 13U;
int16_t x10529 = -102;
int16_t x10531 = 12;
uint8_t x10589 = 1U;
static uint8_t x10592 = 1U;
uint16_t x10635 = UINT16_MAX;
uint8_t x10708 = 12U;
volatile int64_t t175 = 56LL;
int16_t x10721 = INT16_MIN;
int16_t x10723 = INT16_MAX;
uint64_t x10827 = 349949589892110LLU;
static uint8_t x10828 = 3U;
int16_t x10983 = 10;
static uint8_t x11007 = UINT8_MAX;
int64_t x11215 = INT64_MAX;
volatile uint16_t x11235 = 478U;
static volatile uint16_t x11264 = 22U;
int8_t x11518 = 24;
uint16_t x11594 = UINT16_MAX;
int8_t x11595 = 0;
int8_t x11780 = 0;
uint8_t x11883 = 2U;
uint16_t x11899 = UINT16_MAX;
volatile int16_t x11905 = INT16_MIN;
volatile int32_t x11922 = INT32_MIN;
uint8_t x12025 = UINT8_MAX;
int8_t x12071 = 14;
int32_t t199 = 7;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MAX;
	static int16_t x4 = 1;

    t0 = (x1-(x2&(x3<<x4)));

    if (t0 != -32770) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x10 = 2U;
	int8_t x12 = 4;
	volatile int32_t t1 = 8361881;

    t1 = (x9-(x10&(x11<<x12)));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = INT16_MIN;
	static volatile int64_t x14 = INT64_MIN;
	static uint32_t x15 = 467622U;
	uint8_t x16 = 26U;

    t2 = (x13-(x14&(x15<<x16)));

    if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x61 = UINT16_MAX;
	int32_t x62 = 87;
	uint16_t x63 = 2733U;
	int32_t t3 = 3605;

    t3 = (x61-(x62&(x63<<x64)));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x117 = INT16_MAX;
	volatile int32_t x118 = INT32_MIN;
	uint8_t x120 = 1U;
	static int32_t t4 = -17;

    t4 = (x117-(x118&(x119<<x120)));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x225 = -1LL;
	uint8_t x226 = UINT8_MAX;
	volatile uint8_t x228 = 14U;
	int64_t t5 = -2582625032135772384LL;

    t5 = (x225-(x226&(x227<<x228)));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x257 = -256405691640LL;
	uint64_t x258 = 846205843936883LLU;
	uint16_t x259 = 5984U;
	int8_t x260 = 1;
	static volatile uint64_t t6 = 544132185024LLU;

    t6 = (x257-(x258&(x259<<x260)));

    if (t6 != 18446743817303858376LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x293 = -1;
	static volatile int16_t x294 = -26;
	volatile int64_t x295 = 476794LL;
	static int64_t t7 = -226164LL;

    t7 = (x293-(x294&(x295<<x296)));

    if (t7 != -127988414808065LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x537 = 3U;
	int32_t x538 = INT32_MIN;
	uint32_t x539 = 1U;
	volatile uint32_t t8 = 812449876U;

    t8 = (x537-(x538&(x539<<x540)));

    if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x609 = -1;
	static int16_t x612 = 1;

    t9 = (x609-(x610&(x611<<x612)));

    if (t9 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x613 = -59;
	int64_t x614 = INT64_MIN;
	static uint64_t x615 = UINT64_MAX;
	uint64_t x616 = 14LLU;
	static volatile uint64_t t10 = 57LLU;

    t10 = (x613-(x614&(x615<<x616)));

    if (t10 != 9223372036854775749LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x693 = 48;
	volatile int8_t x694 = 27;
	volatile int64_t x695 = 170688307218659946LL;
	uint64_t x696 = 2LLU;
	int64_t t11 = -3148266445797963611LL;

    t11 = (x693-(x694&(x695<<x696)));

    if (t11 != 40LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x793 = 1;
	int32_t x794 = -1;
	uint64_t x795 = 101740651LLU;
	uint8_t x796 = 46U;
	uint64_t t12 = 455880LLU;

    t12 = (x793-(x794&(x795<<x796)));

    if (t12 != 16421601985020559361LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x829 = -1;
	int32_t x830 = INT32_MIN;
	uint16_t x831 = 1984U;
	volatile uint8_t x832 = 1U;
	int32_t t13 = -3533;

    t13 = (x829-(x830&(x831<<x832)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x874 = INT64_MIN;
	uint32_t x875 = 7309U;
	int8_t x876 = 16;
	volatile int64_t t14 = 372063LL;

    t14 = (x873-(x874&(x875<<x876)));

    if (t14 != 369LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x986 = INT64_MIN;
	int8_t x987 = 0;
	int32_t x988 = 0;

    t15 = (x985-(x986&(x987<<x988)));

    if (t15 != 49580LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x989 = -13;
	uint8_t x990 = 0U;
	int64_t x991 = 829LL;
	volatile uint16_t x992 = 2U;
	int64_t t16 = 2245213120795795LL;

    t16 = (x989-(x990&(x991<<x992)));

    if (t16 != -13LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x1037 = UINT16_MAX;
	int8_t x1038 = 3;
	int16_t x1039 = 48;
	int8_t x1040 = 24;
	volatile int32_t t17 = -4150960;

    t17 = (x1037-(x1038&(x1039<<x1040)));

    if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x1085 = -1;
	int64_t x1087 = 255098846092391LL;
	int32_t x1088 = 2;
	int64_t t18 = 124162628387LL;

    t18 = (x1085-(x1086&(x1087<<x1088)));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x1093 = 34U;
	int32_t x1094 = 920;
	int64_t x1095 = 109769264661282LL;
	volatile uint8_t x1096 = 0U;
	int64_t t19 = -699649610183953LL;

    t19 = (x1093-(x1094&(x1095<<x1096)));

    if (t19 != -734LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x1151 = 3535738518130935LLU;
	uint16_t x1152 = 51U;
	volatile uint64_t t20 = 250200546739352021LLU;

    t20 = (x1149-(x1150&(x1151<<x1152)));

    if (t20 != 8667177482874519551LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x1277 = 0U;
	int16_t x1278 = INT16_MIN;
	uint8_t x1280 = 1U;
	volatile int32_t t21 = 1374314;

    t21 = (x1277-(x1278&(x1279<<x1280)));

    if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1301 = UINT8_MAX;
	volatile uint16_t x1304 = 0U;
	volatile int64_t t22 = 31822600LL;

    t22 = (x1301-(x1302&(x1303<<x1304)));

    if (t22 != 128LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1313 = INT32_MIN;
	volatile int32_t x1314 = INT32_MIN;
	volatile uint64_t x1315 = UINT64_MAX;
	volatile uint64_t t23 = 15393785LLU;

    t23 = (x1313-(x1314&(x1315<<x1316)));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1349 = INT8_MIN;
	int32_t x1350 = INT32_MIN;
	int64_t x1351 = 112892578LL;
	uint8_t x1352 = 7U;
	volatile int64_t t24 = 1LL;

    t24 = (x1349-(x1350&(x1351<<x1352)));

    if (t24 != -12884902016LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x1433 = 11573U;
	volatile int8_t x1434 = -1;
	volatile uint16_t x1435 = 389U;
	int64_t x1436 = 12LL;
	static volatile int32_t t25 = 8;

    t25 = (x1433-(x1434&(x1435<<x1436)));

    if (t25 != -1581771) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x1469 = UINT32_MAX;
	static uint32_t x1470 = UINT32_MAX;
	uint64_t x1471 = 1098631549727LLU;
	uint16_t x1472 = 46U;

    t26 = (x1469-(x1470&(x1471<<x1472)));

    if (t26 != 4294967295LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x1529 = 1U;
	int64_t x1530 = -6728LL;
	int64_t x1531 = 1365398851072LL;
	int8_t x1532 = 5;
	volatile int64_t t27 = 3504LL;

    t27 = (x1529-(x1530&(x1531<<x1532)));

    if (t27 != -43692763234303LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1553 = 36606142LLU;
	uint8_t x1554 = 17U;
	volatile uint16_t x1555 = UINT16_MAX;
	int8_t x1556 = 1;
	static volatile uint64_t t28 = 979LLU;

    t28 = (x1553-(x1554&(x1555<<x1556)));

    if (t28 != 36606126LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x1581 = 1042908465U;
	int8_t x1584 = 15;
	uint32_t t29 = 955U;

    t29 = (x1581-(x1582&(x1583<<x1584)));

    if (t29 != 4264166705U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x1670 = 1052U;
	uint32_t x1672 = 45U;
	uint64_t t30 = 846842LLU;

    t30 = (x1669-(x1670&(x1671<<x1672)));

    if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x1913 = INT8_MIN;
	uint64_t x1914 = UINT64_MAX;
	static int16_t x1915 = INT16_MAX;
	static int16_t x1916 = 0;
	static volatile uint64_t t31 = 2341363LLU;

    t31 = (x1913-(x1914&(x1915<<x1916)));

    if (t31 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x2001 = INT8_MAX;
	int16_t x2002 = -1;
	uint16_t x2004 = 8U;

    t32 = (x2001-(x2002&(x2003<<x2004)));

    if (t32 != -641) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x2009 = UINT64_MAX;
	int8_t x2011 = 21;
	int32_t x2012 = 10;
	uint64_t t33 = 10LLU;

    t33 = (x2009-(x2010&(x2011<<x2012)));

    if (t33 != 18446744073709530111LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x2095 = 441722U;
	int64_t t34 = -16575LL;

    t34 = (x2093-(x2094&(x2095<<x2096)));

    if (t34 != 6LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x2129 = INT32_MAX;
	volatile int8_t x2132 = 1;
	volatile int32_t t35 = INT32_MAX;

    t35 = (x2129-(x2130&(x2131<<x2132)));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x2145 = INT8_MIN;
	uint8_t x2146 = UINT8_MAX;
	uint8_t x2148 = 14U;
	static uint32_t t36 = 433218U;

    t36 = (x2145-(x2146&(x2147<<x2148)));

    if (t36 != 4294967168U) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x2173 = INT8_MIN;
	int8_t x2174 = INT8_MIN;
	uint8_t x2176 = 2U;

    t37 = (x2173-(x2174&(x2175<<x2176)));

    if (t37 != 18432502954858384896LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x2193 = -1;
	static uint32_t x2194 = 101294529U;
	int8_t x2195 = 9;
	uint16_t x2196 = 23U;

    t38 = (x2193-(x2194&(x2195<<x2196)));

    if (t38 != 4227858431U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x2273 = UINT64_MAX;
	int64_t x2274 = -602090LL;
	int8_t x2276 = 15;
	uint64_t t39 = 105LLU;

    t39 = (x2273-(x2274&(x2275<<x2276)));

    if (t39 != 18446744073300213759LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2465 = 57;
	volatile uint32_t x2466 = 160U;
	uint64_t x2467 = UINT64_MAX;
	int8_t x2468 = 3;
	volatile uint64_t t40 = 654016495082083LLU;

    t40 = (x2465-(x2466&(x2467<<x2468)));

    if (t40 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x2485 = -35844348077064LL;
	int8_t x2486 = -1;
	uint16_t x2487 = 41U;
	int64_t t41 = 171270080112143LL;

    t41 = (x2485-(x2486&(x2487<<x2488)));

    if (t41 != -35844348077392LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x2517 = -1;
	uint8_t x2518 = 52U;
	volatile int8_t x2520 = 6;

    t42 = (x2517-(x2518&(x2519<<x2520)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2609 = 12U;
	uint8_t x2610 = 28U;
	uint64_t x2611 = 82401444348144810LLU;
	volatile uint16_t x2612 = 20U;
	uint64_t t43 = 72043569257096537LLU;

    t43 = (x2609-(x2610&(x2611<<x2612)));

    if (t43 != 12LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2857 = 6966115164805LLU;
	static uint16_t x2858 = UINT16_MAX;
	static uint16_t x2859 = 0U;
	uint8_t x2860 = 1U;
	volatile uint64_t t44 = 1942223LLU;

    t44 = (x2857-(x2858&(x2859<<x2860)));

    if (t44 != 6966115164805LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x2877 = INT64_MIN;
	int64_t x2878 = INT64_MIN;
	uint16_t x2879 = 1U;
	uint64_t x2880 = 9LLU;

    t45 = (x2877-(x2878&(x2879<<x2880)));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x2973 = 1;
	volatile int64_t x2974 = -21LL;
	uint16_t x2975 = 3U;
	int8_t x2976 = 0;
	int64_t t46 = -151029263681315LL;

    t46 = (x2973-(x2974&(x2975<<x2976)));

    if (t46 != -2LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x2981 = 5672849286005295LL;
	uint8_t x2983 = UINT8_MAX;
	uint32_t x2984 = 0U;
	volatile int64_t t47 = -742336LL;

    t47 = (x2981-(x2982&(x2983<<x2984)));

    if (t47 != 5672849286005295LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x3053 = INT64_MAX;
	volatile int64_t x3055 = 1037520450926LL;
	int16_t x3056 = 18;
	int64_t t48 = -3195163697051286168LL;

    t48 = (x3053-(x3054&(x3055<<x3056)));

    if (t48 != 8951392275767230463LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x3085 = -307364909;
	static int16_t x3087 = 0;
	uint16_t x3088 = 15U;
	volatile int32_t t49 = 0;

    t49 = (x3085-(x3086&(x3087<<x3088)));

    if (t49 != -307364909) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x3149 = 13008180515476LLU;
	int32_t x3150 = 82060142;
	int8_t x3151 = INT8_MAX;
	static uint8_t x3152 = 7U;

    t50 = (x3149-(x3150&(x3151<<x3152)));

    if (t50 != 13008180506516LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x3157 = -1;
	int64_t x3158 = INT64_MIN;
	int32_t x3159 = 1;
	uint8_t x3160 = 28U;
	int64_t t51 = -2880869108998481941LL;

    t51 = (x3157-(x3158&(x3159<<x3160)));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x3322 = UINT8_MAX;
	uint64_t x3323 = 2663LLU;
	uint8_t x3324 = 26U;
	static volatile uint64_t t52 = 154393LLU;

    t52 = (x3321-(x3322&(x3323<<x3324)));

    if (t52 != 18446744072521240330LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x3425 = INT16_MAX;
	int64_t x3426 = INT64_MIN;
	uint8_t x3427 = 13U;
	uint8_t x3428 = 24U;
	int64_t t53 = -973455695736153LL;

    t53 = (x3425-(x3426&(x3427<<x3428)));

    if (t53 != 32767LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x3473 = UINT16_MAX;
	int8_t x3474 = INT8_MIN;
	volatile int64_t x3475 = 116573004LL;
	static int64_t t54 = -10LL;

    t54 = (x3473-(x3474&(x3475<<x3476)));

    if (t54 != -1909932032001LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x3570 = UINT8_MAX;

    t55 = (x3569-(x3570&(x3571<<x3572)));

    if (t55 != -2074859410256LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x3609 = INT32_MAX;
	uint32_t x3611 = UINT32_MAX;
	uint32_t t56 = 704219563U;

    t56 = (x3609-(x3610&(x3611<<x3612)));

    if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x3625 = -39;
	uint8_t x3626 = 0U;
	static uint64_t x3627 = UINT64_MAX;
	uint8_t x3628 = 3U;
	volatile uint64_t t57 = 191905394007902LLU;

    t57 = (x3625-(x3626&(x3627<<x3628)));

    if (t57 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x3629 = INT64_MIN;
	uint64_t x3631 = UINT64_MAX;
	int32_t x3632 = 0;
	volatile uint64_t t58 = 234738489LLU;

    t58 = (x3629-(x3630&(x3631<<x3632)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x3649 = INT8_MIN;
	uint32_t x3650 = 13130062U;
	int16_t x3651 = 4993;
	int16_t x3652 = 0;
	volatile uint32_t t59 = 2161U;

    t59 = (x3649-(x3650&(x3651<<x3652)));

    if (t59 != 4294962816U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x3705 = UINT64_MAX;
	int32_t x3706 = -528802722;
	uint8_t x3707 = 0U;
	volatile uint8_t x3708 = 0U;
	volatile uint64_t t60 = UINT64_MAX;

    t60 = (x3705-(x3706&(x3707<<x3708)));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x3709 = INT64_MIN;
	int64_t x3710 = INT64_MIN;
	static uint8_t x3711 = UINT8_MAX;
	static int8_t x3712 = 7;
	int64_t t61 = INT64_MIN;

    t61 = (x3709-(x3710&(x3711<<x3712)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x3737 = INT64_MIN;
	volatile int64_t x3738 = -940LL;
	int8_t x3739 = 1;
	uint8_t x3740 = 1U;
	volatile int64_t t62 = INT64_MIN;

    t62 = (x3737-(x3738&(x3739<<x3740)));

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x3783 = 2683732;
	uint8_t x3784 = 0U;
	uint32_t t63 = 121441U;

    t63 = (x3781-(x3782&(x3783<<x3784)));

    if (t63 != 4292283643U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x3793 = INT64_MIN;
	static volatile uint64_t x3794 = 1501414060911746LLU;
	static volatile int32_t x3795 = 3221887;
	uint64_t t64 = 1LLU;

    t64 = (x3793-(x3794&(x3795<<x3796)));

    if (t64 != 9223372036850433918LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x3841 = INT8_MIN;
	volatile int8_t x3842 = INT8_MIN;
	uint8_t x3843 = UINT8_MAX;
	volatile uint16_t x3844 = 7U;
	volatile int32_t t65 = 3;

    t65 = (x3841-(x3842&(x3843<<x3844)));

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x3913 = -1;
	int16_t x3915 = 0;
	static uint32_t x3916 = 7U;
	int32_t t66 = 7056737;

    t66 = (x3913-(x3914&(x3915<<x3916)));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x3953 = INT32_MIN;
	int16_t x3954 = INT16_MIN;
	uint32_t x3955 = UINT32_MAX;
	static uint8_t x3956 = 7U;
	volatile uint32_t t67 = 1719187252U;

    t67 = (x3953-(x3954&(x3955<<x3956)));

    if (t67 != 2147516416U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x3965 = 3136LLU;
	int16_t x3966 = INT16_MIN;
	uint8_t x3967 = 1U;
	volatile uint8_t x3968 = 22U;
	volatile uint64_t t68 = 144LLU;

    t68 = (x3965-(x3966&(x3967<<x3968)));

    if (t68 != 18446744073705360448LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x4017 = INT8_MIN;
	static int32_t t69 = 65712;

    t69 = (x4017-(x4018&(x4019<<x4020)));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x4077 = 1068;
	static volatile uint8_t x4078 = UINT8_MAX;
	volatile uint32_t x4079 = UINT32_MAX;

    t70 = (x4077-(x4078&(x4079<<x4080)));

    if (t70 != 820U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x4293 = 15U;
	int64_t x4294 = -128LL;
	volatile uint64_t x4295 = 78432636087087873LLU;
	static uint16_t x4296 = 11U;
	uint64_t t71 = 155006777532LLU;

    t71 = (x4293-(x4294&(x4295<<x4296)));

    if (t71 != 5390657957030000655LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x4337 = UINT32_MAX;
	uint64_t x4338 = 9963614659417609LLU;
	int64_t x4339 = 84094803183LL;
	static volatile int16_t x4340 = 0;
	volatile uint64_t t72 = 3293LLU;

    t72 = (x4337-(x4338&(x4339<<x4340)));

    if (t72 != 18446743998271843318LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x4385 = INT64_MAX;
	int32_t x4386 = 1;
	volatile int16_t x4387 = INT16_MAX;
	uint16_t x4388 = 4U;

    t73 = (x4385-(x4386&(x4387<<x4388)));

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x4537 = 163U;
	uint16_t x4538 = 471U;
	uint64_t x4539 = 108484242646790685LLU;
	int8_t x4540 = 3;
	uint64_t t74 = 13169582417LLU;

    t74 = (x4537-(x4538&(x4539<<x4540)));

    if (t74 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x4585 = INT8_MIN;
	int32_t x4586 = INT32_MIN;
	uint8_t x4588 = 0U;
	int32_t t75 = -360;

    t75 = (x4585-(x4586&(x4587<<x4588)));

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x4597 = 1756U;
	int64_t x4600 = 1LL;
	uint32_t t76 = 881U;

    t76 = (x4597-(x4598&(x4599<<x4600)));

    if (t76 != 1748U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x4881 = 3U;
	uint8_t x4882 = 14U;
	uint8_t x4883 = UINT8_MAX;
	static uint8_t x4884 = 5U;

    t77 = (x4881-(x4882&(x4883<<x4884)));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x4889 = INT16_MIN;
	uint8_t x4890 = 0U;
	volatile uint32_t x4891 = 665598U;
	volatile int8_t x4892 = 0;
	static volatile uint32_t t78 = 8U;

    t78 = (x4889-(x4890&(x4891<<x4892)));

    if (t78 != 4294934528U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x4909 = INT16_MAX;
	volatile uint16_t x4910 = 2064U;

    t79 = (x4909-(x4910&(x4911<<x4912)));

    if (t79 != 32767U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x5025 = INT16_MAX;
	uint8_t x5026 = UINT8_MAX;
	int16_t x5028 = 2;
	int32_t t80 = -2;

    t80 = (x5025-(x5026&(x5027<<x5028)));

    if (t80 != 32763) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x5045 = 4U;
	volatile int64_t x5046 = INT64_MIN;
	uint8_t x5047 = 0U;
	static int64_t x5048 = 0LL;
	int64_t t81 = 25LL;

    t81 = (x5045-(x5046&(x5047<<x5048)));

    if (t81 != 4LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x5057 = INT16_MIN;
	uint16_t x5058 = 11289U;
	volatile uint32_t x5059 = 451399928U;
	uint8_t x5060 = 14U;
	volatile uint32_t t82 = 572U;

    t82 = (x5057-(x5058&(x5059<<x5060)));

    if (t82 != 4294934528U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x5181 = INT16_MIN;
	volatile int8_t x5182 = INT8_MAX;
	static int8_t x5183 = 53;
	int16_t x5184 = 0;
	int32_t t83 = -122;

    t83 = (x5181-(x5182&(x5183<<x5184)));

    if (t83 != -32821) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x5253 = INT32_MIN;
	int16_t x5254 = INT16_MIN;
	static uint16_t x5256 = 1U;
	volatile int32_t t84 = INT32_MIN;

    t84 = (x5253-(x5254&(x5255<<x5256)));

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x5305 = 1571U;
	uint16_t x5306 = 5U;
	uint8_t x5307 = 1U;
	volatile int16_t x5308 = 1;
	static volatile int32_t t85 = 13756;

    t85 = (x5305-(x5306&(x5307<<x5308)));

    if (t85 != 1571) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x5377 = -1;
	static uint32_t x5379 = 5U;
	uint16_t x5380 = 9U;
	volatile uint32_t t86 = 13675294U;

    t86 = (x5377-(x5378&(x5379<<x5380)));

    if (t86 != 4294964735U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x5429 = INT16_MAX;
	int64_t x5430 = 6942590837886570LL;
	uint8_t x5431 = 7U;
	static int8_t x5432 = 1;
	int64_t t87 = 1LL;

    t87 = (x5429-(x5430&(x5431<<x5432)));

    if (t87 != 32757LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x5457 = UINT16_MAX;
	uint8_t x5458 = UINT8_MAX;
	static int32_t x5459 = 578908;
	static uint32_t x5460 = 0U;
	volatile int32_t t88 = 159283;

    t88 = (x5457-(x5458&(x5459<<x5460)));

    if (t88 != 65443) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x5533 = 8;
	volatile int32_t x5534 = INT32_MIN;
	uint32_t x5536 = 19U;

    t89 = (x5533-(x5534&(x5535<<x5536)));

    if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x5749 = -1;
	static int32_t x5752 = 4;
	uint64_t t90 = 8056LLU;

    t90 = (x5749-(x5750&(x5751<<x5752)));

    if (t90 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x5781 = UINT32_MAX;
	uint64_t x5782 = 4747618238872LLU;
	uint8_t x5783 = 15U;
	int8_t x5784 = 1;
	static volatile uint64_t t91 = 455596LLU;

    t91 = (x5781-(x5782&(x5783<<x5784)));

    if (t91 != 4294967271LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x5989 = 2U;
	volatile int64_t x5990 = -5239248004797452LL;
	uint64_t x5991 = 554486568672218054LLU;
	volatile uint64_t t92 = 49188490398LLU;

    t92 = (x5989-(x5990&(x5991<<x5992)));

    if (t92 != 17338506584203426942LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x6017 = INT16_MIN;
	int8_t x6018 = -1;
	uint64_t x6019 = 26LLU;
	volatile uint64_t t93 = 184737793078790LLU;

    t93 = (x6017-(x6018&(x6019<<x6020)));

    if (t93 != 18446744073709518796LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x6161 = 1;
	volatile uint8_t x6163 = 48U;
	volatile uint8_t x6164 = 2U;
	volatile uint64_t t94 = 100LLU;

    t94 = (x6161-(x6162&(x6163<<x6164)));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x6173 = UINT32_MAX;
	int16_t x6174 = INT16_MIN;
	uint8_t x6175 = UINT8_MAX;
	uint8_t x6176 = 0U;
	volatile uint32_t t95 = UINT32_MAX;

    t95 = (x6173-(x6174&(x6175<<x6176)));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x6222 = -1;
	volatile int16_t x6224 = 1;
	int32_t t96 = 16062;

    t96 = (x6221-(x6222&(x6223<<x6224)));

    if (t96 != -254) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x6237 = 134426501794LLU;
	volatile int32_t x6239 = 64140;
	static volatile uint64_t t97 = 632079089LLU;

    t97 = (x6237-(x6238&(x6239<<x6240)));

    if (t97 != 134426373514LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x6273 = -1;
	int32_t x6274 = 27831;
	uint16_t x6275 = UINT16_MAX;
	int8_t x6276 = 6;
	volatile int32_t t98 = -856522;

    t98 = (x6273-(x6274&(x6275<<x6276)));

    if (t98 != -27777) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x6293 = INT8_MAX;
	int16_t x6294 = INT16_MIN;
	static uint64_t x6295 = 11LLU;
	volatile uint64_t t99 = 4LLU;

    t99 = (x6293-(x6294&(x6295<<x6296)));

    if (t99 != 127LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x6321 = -1;
	volatile int64_t x6322 = -1LL;
	int8_t x6324 = 0;
	volatile int64_t t100 = -233845LL;

    t100 = (x6321-(x6322&(x6323<<x6324)));

    if (t100 != -32768LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x6353 = -1;
	int32_t x6354 = INT32_MIN;
	int32_t t101 = -6667;

    t101 = (x6353-(x6354&(x6355<<x6356)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x6367 = 2819;
	volatile int32_t x6368 = 0;

    t102 = (x6365-(x6366&(x6367<<x6368)));

    if (t102 != -2763LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x6369 = INT16_MAX;
	int32_t x6370 = INT32_MIN;
	int8_t x6371 = INT8_MAX;
	uint16_t x6372 = 1U;
	int32_t t103 = -36;

    t103 = (x6369-(x6370&(x6371<<x6372)));

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x6465 = UINT16_MAX;
	int8_t x6467 = INT8_MAX;
	static uint16_t x6468 = 1U;

    t104 = (x6465-(x6466&(x6467<<x6468)));

    if (t104 != 65281) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x6578 = -1;
	uint64_t x6579 = UINT64_MAX;
	static int8_t x6580 = 2;

    t105 = (x6577-(x6578&(x6579<<x6580)));

    if (t105 != 7011006291345LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x6617 = -244279405;
	int8_t x6618 = INT8_MIN;
	int8_t x6619 = INT8_MAX;
	int8_t x6620 = 1;
	static int32_t t106 = 451;

    t106 = (x6617-(x6618&(x6619<<x6620)));

    if (t106 != -244279533) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x6633 = -1;
	int8_t x6634 = -1;
	uint64_t x6635 = 7LLU;
	uint16_t x6636 = 1U;
	volatile uint64_t t107 = 448116LLU;

    t107 = (x6633-(x6634&(x6635<<x6636)));

    if (t107 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x6641 = 11845U;
	uint64_t t108 = 2008548764817404193LLU;

    t108 = (x6641-(x6642&(x6643<<x6644)));

    if (t108 != 11845LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x6717 = -1;
	volatile int64_t x6719 = 35906277LL;
	uint8_t x6720 = 4U;
	volatile int64_t t109 = -806864702564076434LL;

    t109 = (x6717-(x6718&(x6719<<x6720)));

    if (t109 != -574488577LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x6765 = 288011;
	volatile uint32_t t110 = 56963250U;

    t110 = (x6765-(x6766&(x6767<<x6768)));

    if (t110 != 288007U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x6817 = INT32_MAX;
	uint16_t x6818 = 8U;
	static volatile uint64_t x6819 = 200800LLU;
	uint16_t x6820 = 0U;
	static uint64_t t111 = 231239619864895LLU;

    t111 = (x6817-(x6818&(x6819<<x6820)));

    if (t111 != 2147483647LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x7221 = -3;
	volatile uint8_t x7222 = 5U;
	static volatile uint8_t x7223 = UINT8_MAX;
	static int16_t x7224 = 17;
	int32_t t112 = -257707053;

    t112 = (x7221-(x7222&(x7223<<x7224)));

    if (t112 != -3) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x7301 = INT32_MIN;
	static uint32_t x7302 = 8091603U;
	uint8_t x7304 = 9U;

    t113 = (x7301-(x7302&(x7303<<x7304)));

    if (t113 != 2139392512U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x7353 = 3U;
	uint32_t x7354 = UINT32_MAX;
	uint32_t x7355 = 15468155U;
	uint8_t x7356 = 15U;
	volatile uint32_t t114 = 0U;

    t114 = (x7353-(x7354&(x7355<<x7356)));

    if (t114 != 4240605187U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x7401 = -1;
	static int16_t x7402 = INT16_MAX;
	volatile int32_t x7403 = INT32_MAX;
	static int32_t t115 = -409;

    t115 = (x7401-(x7402&(x7403<<x7404)));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x7437 = INT32_MAX;
	int32_t x7438 = INT32_MAX;
	volatile uint64_t x7439 = 5998131LLU;
	int16_t x7440 = 1;
	uint64_t t116 = 506830LLU;

    t116 = (x7437-(x7438&(x7439<<x7440)));

    if (t116 != 2135487385LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x7593 = 12405;
	uint32_t x7596 = 15U;
	volatile int64_t t117 = -5LL;

    t117 = (x7593-(x7594&(x7595<<x7596)));

    if (t117 != 12405LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x7613 = 1;
	int64_t x7614 = INT64_MIN;
	int64_t x7615 = INT64_MAX;
	int64_t t118 = 232038106677857LL;

    t118 = (x7613-(x7614&(x7615<<x7616)));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x7641 = INT32_MIN;
	int64_t x7642 = 551581567LL;
	uint32_t x7643 = 22572532U;
	volatile uint8_t x7644 = 0U;
	volatile int64_t t119 = -684LL;

    t119 = (x7641-(x7642&(x7643<<x7644)));

    if (t119 != -2151703924LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x7777 = -28;
	uint16_t x7779 = 174U;
	uint32_t x7780 = 6U;
	int32_t t120 = 71927947;

    t120 = (x7777-(x7778&(x7779<<x7780)));

    if (t120 != -2076) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x7793 = 21U;
	int8_t x7794 = -4;
	uint8_t x7796 = 3U;

    t121 = (x7793-(x7794&(x7795<<x7796)));

    if (t121 != 29LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x7797 = 12936237LLU;
	int8_t x7798 = INT8_MIN;
	uint8_t x7800 = 7U;
	static volatile uint64_t t122 = 7406135425253LLU;

    t122 = (x7797-(x7798&(x7799<<x7800)));

    if (t122 != 12919981LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x7937 = 67949LLU;
	uint64_t x7938 = 125246LLU;
	uint16_t x7939 = 23U;
	volatile uint8_t x7940 = 3U;
	uint64_t t123 = 262935863609LLU;

    t123 = (x7937-(x7938&(x7939<<x7940)));

    if (t123 != 67893LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x8026 = 469162LL;
	int8_t x8027 = INT8_MAX;
	volatile int64_t t124 = -252832745495083955LL;

    t124 = (x8025-(x8026&(x8027<<x8028)));

    if (t124 != -262131LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x8045 = UINT64_MAX;
	static uint32_t x8047 = UINT32_MAX;
	volatile uint32_t x8048 = 4U;
	volatile uint64_t t125 = 175668781LLU;

    t125 = (x8045-(x8046&(x8047<<x8048)));

    if (t125 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x8081 = -1;
	int16_t x8082 = INT16_MIN;
	uint64_t x8083 = 14LLU;
	static uint8_t x8084 = 11U;
	uint64_t t126 = UINT64_MAX;

    t126 = (x8081-(x8082&(x8083<<x8084)));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x8117 = 0;
	static int8_t x8118 = -1;
	int8_t x8119 = 3;
	static uint8_t x8120 = 1U;
	int32_t t127 = 1;

    t127 = (x8117-(x8118&(x8119<<x8120)));

    if (t127 != -6) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x8121 = -1;
	uint16_t x8123 = 127U;
	uint8_t x8124 = 0U;

    t128 = (x8121-(x8122&(x8123<<x8124)));

    if (t128 != -26) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x8133 = INT32_MIN;

    t129 = (x8133-(x8134&(x8135<<x8136)));

    if (t129 != INT32_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x8193 = 61988U;
	int64_t x8194 = 1323LL;
	uint64_t x8195 = UINT64_MAX;
	uint8_t x8196 = 0U;
	volatile uint64_t t130 = 468050836918557679LLU;

    t130 = (x8193-(x8194&(x8195<<x8196)));

    if (t130 != 60665LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x8269 = UINT8_MAX;
	static int8_t x8270 = -33;
	int8_t x8271 = INT8_MAX;
	uint8_t x8272 = 14U;

    t131 = (x8269-(x8270&(x8271<<x8272)));

    if (t131 != -2080513) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x8321 = 362U;
	int16_t x8322 = INT16_MIN;
	uint8_t x8323 = UINT8_MAX;
	volatile uint16_t x8324 = 2U;
	volatile int32_t t132 = -245291;

    t132 = (x8321-(x8322&(x8323<<x8324)));

    if (t132 != 362) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x8361 = 6118811149395524LL;
	volatile int32_t x8362 = INT32_MAX;
	int64_t x8363 = 24181097704849025LL;
	int8_t x8364 = 0;

    t133 = (x8361-(x8362&(x8363<<x8364)));

    if (t133 != 6118810965239747LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x8549 = -72;
	int8_t x8550 = 48;
	volatile int16_t x8551 = 126;
	uint8_t x8552 = 15U;

    t134 = (x8549-(x8550&(x8551<<x8552)));

    if (t134 != -72) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x8573 = 1;
	uint16_t x8574 = UINT16_MAX;
	volatile uint8_t x8576 = 4U;
	int32_t t135 = -8438;

    t135 = (x8573-(x8574&(x8575<<x8576)));

    if (t135 != -223) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x8649 = INT32_MIN;
	int16_t x8651 = 742;
	int32_t t136 = INT32_MIN;

    t136 = (x8649-(x8650&(x8651<<x8652)));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x8705 = 0;
	uint8_t x8707 = 64U;
	uint32_t x8708 = 4U;

    t137 = (x8705-(x8706&(x8707<<x8708)));

    if (t137 != -1024) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x8778 = 0;
	uint8_t x8779 = 0U;
	volatile uint32_t x8780 = 3U;
	int32_t t138 = 2104847;

    t138 = (x8777-(x8778&(x8779<<x8780)));

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x8813 = -2;
	int8_t x8814 = 0;
	uint16_t x8815 = UINT16_MAX;
	int8_t x8816 = 3;
	int32_t t139 = 0;

    t139 = (x8813-(x8814&(x8815<<x8816)));

    if (t139 != -2) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x8829 = -1;
	int16_t x8830 = -1;
	volatile uint32_t t140 = UINT32_MAX;

    t140 = (x8829-(x8830&(x8831<<x8832)));

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x8858 = INT32_MAX;
	uint8_t x8859 = 117U;
	int8_t x8860 = 0;

    t141 = (x8857-(x8858&(x8859<<x8860)));

    if (t141 != -4) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x8941 = -1;
	uint32_t x8942 = 364490U;
	int16_t x8943 = 9007;
	volatile uint32_t x8944 = 7U;
	static volatile uint32_t t142 = 80869003U;

    t142 = (x8941-(x8942&(x8943<<x8944)));

    if (t142 != 4294867071U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x9129 = INT16_MIN;
	int32_t x9130 = INT32_MIN;
	int8_t x9131 = INT8_MAX;
	volatile uint8_t x9132 = 0U;
	int32_t t143 = 125402;

    t143 = (x9129-(x9130&(x9131<<x9132)));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x9181 = INT16_MIN;
	int16_t x9182 = INT16_MIN;
	volatile int32_t x9183 = INT32_MAX;
	uint8_t x9184 = 0U;
	volatile int32_t t144 = INT32_MIN;

    t144 = (x9181-(x9182&(x9183<<x9184)));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x9185 = 191887U;
	static uint64_t x9186 = 7476376LLU;
	uint16_t x9187 = 1U;
	uint8_t x9188 = 8U;
	static volatile uint64_t t145 = 6652LLU;

    t145 = (x9185-(x9186&(x9187<<x9188)));

    if (t145 != 191887LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x9209 = 25U;
	int64_t x9210 = INT64_MIN;
	uint8_t x9211 = 3U;
	static volatile uint32_t x9212 = 0U;
	volatile int64_t t146 = -1201LL;

    t146 = (x9209-(x9210&(x9211<<x9212)));

    if (t146 != 25LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x9245 = 43U;
	uint16_t x9246 = 10U;
	uint64_t x9247 = 88661345LLU;
	uint32_t x9248 = 0U;
	uint64_t t147 = 3655565630809141813LLU;

    t147 = (x9245-(x9246&(x9247<<x9248)));

    if (t147 != 43LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x9249 = UINT32_MAX;
	static int32_t x9250 = -1;
	int16_t x9251 = INT16_MAX;
	uint32_t x9252 = 1U;
	volatile uint32_t t148 = 0U;

    t148 = (x9249-(x9250&(x9251<<x9252)));

    if (t148 != 4294901761U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x9277 = INT16_MAX;
	int8_t x9278 = INT8_MAX;
	static volatile uint8_t x9280 = 13U;
	volatile uint64_t t149 = 14138890203LLU;

    t149 = (x9277-(x9278&(x9279<<x9280)));

    if (t149 != 32767LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x9381 = INT32_MAX;
	uint32_t x9383 = 1971735U;
	uint32_t t150 = 108917U;

    t150 = (x9381-(x9382&(x9383<<x9384)));

    if (t150 != 2147483647U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x9453 = UINT64_MAX;
	uint32_t x9454 = 3U;
	volatile uint8_t x9455 = UINT8_MAX;
	uint8_t x9456 = 2U;
	volatile uint64_t t151 = UINT64_MAX;

    t151 = (x9453-(x9454&(x9455<<x9456)));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x9473 = 40196201175LLU;
	int8_t x9474 = INT8_MIN;
	int16_t x9475 = 111;
	uint32_t x9476 = 3U;
	uint64_t t152 = 18LLU;

    t152 = (x9473-(x9474&(x9475<<x9476)));

    if (t152 != 40196200407LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x9690 = 459541U;
	uint16_t x9691 = 0U;
	static uint32_t t153 = 7U;

    t153 = (x9689-(x9690&(x9691<<x9692)));

    if (t153 != 4294934528U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x9725 = -1;
	int8_t x9726 = INT8_MAX;
	int16_t x9728 = 1;
	static volatile int32_t t154 = -210;

    t154 = (x9725-(x9726&(x9727<<x9728)));

    if (t154 != -127) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x9749 = -984397887;
	volatile uint16_t x9751 = 12407U;
	int16_t x9752 = 1;
	static volatile int32_t t155 = 248059344;

    t155 = (x9749-(x9750&(x9751<<x9752)));

    if (t155 != -984397887) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x9877 = INT64_MIN;
	volatile uint64_t x9878 = UINT64_MAX;
	uint64_t x9879 = 12258LLU;
	uint8_t x9880 = 53U;

    t156 = (x9877-(x9878&(x9879<<x9880)));

    if (t156 != 9493588014497005568LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x9885 = 2681U;
	int32_t x9886 = INT32_MIN;
	uint8_t x9888 = 10U;
	uint32_t t157 = 18498U;

    t157 = (x9885-(x9886&(x9887<<x9888)));

    if (t157 != 2147486329U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x9933 = -26;
	static int32_t x9934 = -1;
	volatile int16_t x9935 = INT16_MAX;
	uint16_t x9936 = 4U;
	static int32_t t158 = -15272;

    t158 = (x9933-(x9934&(x9935<<x9936)));

    if (t158 != -524298) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x10009 = 58U;
	int8_t x10010 = -2;
	int16_t x10011 = 11;
	int32_t t159 = -60;

    t159 = (x10009-(x10010&(x10011<<x10012)));

    if (t159 != 36) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x10021 = 269360;
	int16_t x10022 = -699;
	static volatile uint64_t x10023 = 3LLU;
	int32_t x10024 = 19;
	volatile uint64_t t160 = 4394LLU;

    t160 = (x10021-(x10022&(x10023<<x10024)));

    if (t160 != 18446744073708248112LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x10113 = INT16_MIN;
	int64_t x10114 = 38756550LL;
	static uint32_t x10115 = 52579U;
	uint32_t x10116 = 3U;

    t161 = (x10113-(x10114&(x10115<<x10116)));

    if (t161 != -450560LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x10257 = -100LL;
	volatile uint64_t x10258 = 8LLU;
	uint8_t x10259 = 90U;
	int8_t x10260 = 11;
	uint64_t t162 = 8688LLU;

    t162 = (x10257-(x10258&(x10259<<x10260)));

    if (t162 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x10285 = UINT32_MAX;
	static int32_t x10286 = -1;
	uint64_t x10287 = 109LLU;
	static int64_t x10288 = 1LL;

    t163 = (x10285-(x10286&(x10287<<x10288)));

    if (t163 != 4294967077LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x10311 = 11738;
	static uint32_t x10312 = 5U;
	static volatile int32_t t164 = 0;

    t164 = (x10309-(x10310&(x10311<<x10312)));

    if (t164 != -45610) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x10333 = 12854U;
	int16_t x10335 = 48;
	volatile int8_t x10336 = 2;
	static volatile int64_t t165 = 601602510937816320LL;

    t165 = (x10333-(x10334&(x10335<<x10336)));

    if (t165 != 12726LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x10365 = UINT32_MAX;
	int64_t x10366 = INT64_MAX;
	uint32_t x10367 = 1164638U;
	volatile uint8_t x10368 = 1U;
	int64_t t166 = -4846868583LL;

    t166 = (x10365-(x10366&(x10367<<x10368)));

    if (t166 != 4292638019LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x10439 = INT64_MAX;
	int32_t x10440 = 0;
	volatile int64_t t167 = 47165946LL;

    t167 = (x10437-(x10438&(x10439<<x10440)));

    if (t167 != -9223372036854742982LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x10481 = INT16_MIN;
	uint8_t x10482 = 110U;
	uint64_t t168 = 2293658LLU;

    t168 = (x10481-(x10482&(x10483<<x10484)));

    if (t168 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x10489 = -118327521;
	int8_t x10490 = -1;
	int32_t t169 = -12;

    t169 = (x10489-(x10490&(x10491<<x10492)));

    if (t169 != -118327525) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x10521 = INT8_MAX;
	uint16_t x10522 = UINT16_MAX;
	static uint32_t x10523 = UINT32_MAX;
	volatile uint32_t t170 = 837446U;

    t170 = (x10521-(x10522&(x10523<<x10524)));

    if (t170 != 4294910079U) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x10530 = INT64_MAX;
	uint8_t x10532 = 0U;
	int64_t t171 = -2670LL;

    t171 = (x10529-(x10530&(x10531<<x10532)));

    if (t171 != -114LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x10533 = INT64_MAX;
	int64_t x10534 = -4496336479784059LL;
	uint8_t x10535 = 4U;
	uint16_t x10536 = 0U;
	static volatile int64_t t172 = -270961277579LL;

    t172 = (x10533-(x10534&(x10535<<x10536)));

    if (t172 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x10590 = 13508208367219LLU;
	volatile uint16_t x10591 = 16U;
	uint64_t t173 = 12616LLU;

    t173 = (x10589-(x10590&(x10591<<x10592)));

    if (t173 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x10633 = 29LL;
	int64_t x10634 = INT64_MAX;
	volatile int16_t x10636 = 1;
	int64_t t174 = -3918271068498LL;

    t174 = (x10633-(x10634&(x10635<<x10636)));

    if (t174 != -131041LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x10705 = -997;
	int64_t x10706 = -1LL;
	int8_t x10707 = 0;

    t175 = (x10705-(x10706&(x10707<<x10708)));

    if (t175 != -997LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x10722 = -227962LL;
	static uint64_t x10724 = 6LLU;
	volatile int64_t t176 = 1219750144461LL;

    t176 = (x10721-(x10722&(x10723<<x10724)));

    if (t176 != -1901952LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x10825 = INT8_MAX;
	uint16_t x10826 = UINT16_MAX;
	static volatile uint64_t t177 = 35363103256LLU;

    t177 = (x10825-(x10826&(x10827<<x10828)));

    if (t177 != 18446744073709527055LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x10981 = -1;
	int8_t x10982 = -59;
	uint16_t x10984 = 2U;
	int32_t t178 = -5053;

    t178 = (x10981-(x10982&(x10983<<x10984)));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x10993 = -686;
	int32_t x10994 = INT32_MIN;
	int64_t x10995 = 207264534064733LL;
	static uint8_t x10996 = 1U;
	volatile int64_t t179 = -1596209371933887LL;

    t179 = (x10993-(x10994&(x10995<<x10996)));

    if (t179 != -414528768574126LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x11005 = -1;
	volatile uint32_t x11006 = 78983U;
	static uint8_t x11008 = 11U;
	uint32_t t180 = 23717568U;

    t180 = (x11005-(x11006&(x11007<<x11008)));

    if (t180 != 4294889471U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x11157 = INT32_MAX;
	uint16_t x11158 = 2U;
	uint32_t x11159 = UINT32_MAX;
	int16_t x11160 = 1;
	volatile uint32_t t181 = 6U;

    t181 = (x11157-(x11158&(x11159<<x11160)));

    if (t181 != 2147483645U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x11213 = 13;
	uint32_t x11214 = UINT32_MAX;
	static int8_t x11216 = 0;
	volatile int64_t t182 = 2106702LL;

    t182 = (x11213-(x11214&(x11215<<x11216)));

    if (t182 != -4294967282LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x11233 = 3414724248120043LLU;
	int8_t x11234 = INT8_MIN;
	static int8_t x11236 = 1;
	static volatile uint64_t t183 = 2969069703657879195LLU;

    t183 = (x11233-(x11234&(x11235<<x11236)));

    if (t183 != 3414724248119147LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x11253 = 0;
	int64_t x11254 = -32594LL;
	volatile uint32_t x11255 = 29830293U;
	uint8_t x11256 = 0U;
	static volatile int64_t t184 = 144LL;

    t184 = (x11253-(x11254&(x11255<<x11256)));

    if (t184 != -29819012LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x11261 = -1;
	volatile uint16_t x11262 = UINT16_MAX;
	static uint32_t x11263 = 386920679U;
	volatile uint32_t t185 = UINT32_MAX;

    t185 = (x11261-(x11262&(x11263<<x11264)));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x11517 = INT16_MIN;
	static uint8_t x11519 = 0U;
	uint8_t x11520 = 3U;
	volatile int32_t t186 = -666676;

    t186 = (x11517-(x11518&(x11519<<x11520)));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x11565 = UINT8_MAX;
	uint8_t x11566 = 18U;
	uint64_t x11567 = 54229487LLU;
	volatile int32_t x11568 = 1;
	uint64_t t187 = 141LLU;

    t187 = (x11565-(x11566&(x11567<<x11568)));

    if (t187 != 237LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x11593 = 0;
	volatile uint16_t x11596 = 29U;
	static int32_t t188 = -1427554;

    t188 = (x11593-(x11594&(x11595<<x11596)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x11637 = UINT8_MAX;
	volatile int64_t x11638 = INT64_MAX;
	static uint64_t x11639 = UINT64_MAX;
	uint8_t x11640 = 10U;
	volatile uint64_t t189 = 1178065914978470LLU;

    t189 = (x11637-(x11638&(x11639<<x11640)));

    if (t189 != 9223372036854777087LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x11777 = 3U;
	int64_t x11778 = -3217980LL;
	volatile uint64_t x11779 = 9914LLU;
	volatile uint64_t t190 = 12154387LLU;

    t190 = (x11777-(x11778&(x11779<<x11780)));

    if (t190 != 18446744073709542275LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x11785 = 4;
	uint64_t x11786 = 44956LLU;
	uint64_t x11787 = UINT64_MAX;
	static int16_t x11788 = 0;
	volatile uint64_t t191 = 26651970571245LLU;

    t191 = (x11785-(x11786&(x11787<<x11788)));

    if (t191 != 18446744073709506664LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x11881 = INT64_MIN;
	int64_t x11882 = -837573623524LL;
	uint16_t x11884 = 23U;
	volatile int64_t t192 = INT64_MIN;

    t192 = (x11881-(x11882&(x11883<<x11884)));

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x11893 = INT16_MIN;
	static uint8_t x11894 = 13U;
	uint64_t x11895 = UINT64_MAX;
	static uint8_t x11896 = 1U;
	volatile uint64_t t193 = 7611487986666703LLU;

    t193 = (x11893-(x11894&(x11895<<x11896)));

    if (t193 != 18446744073709518836LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x11897 = INT8_MIN;
	uint64_t x11898 = 3658442546LLU;
	uint8_t x11900 = 1U;
	volatile uint64_t t194 = 952116388LLU;

    t194 = (x11897-(x11898&(x11899<<x11900)));

    if (t194 != 18446744073709459534LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x11906 = 13U;
	static uint8_t x11907 = 2U;
	volatile uint16_t x11908 = 2U;
	int32_t t195 = 91062677;

    t195 = (x11905-(x11906&(x11907<<x11908)));

    if (t195 != -32776) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x11921 = 254989;
	int8_t x11923 = INT8_MAX;
	uint8_t x11924 = 1U;
	volatile int32_t t196 = 163804940;

    t196 = (x11921-(x11922&(x11923<<x11924)));

    if (t196 != 254989) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x12026 = INT64_MIN;
	volatile uint8_t x12027 = UINT8_MAX;
	uint8_t x12028 = 3U;
	int64_t t197 = 1LL;

    t197 = (x12025-(x12026&(x12027<<x12028)));

    if (t197 != 255LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x12069 = -11406;
	int8_t x12070 = INT8_MAX;
	static uint16_t x12072 = 0U;
	int32_t t198 = 21772945;

    t198 = (x12069-(x12070&(x12071<<x12072)));

    if (t198 != -11420) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x12093 = -2879;
	int32_t x12094 = 1053641565;
	int16_t x12095 = 6180;
	uint8_t x12096 = 1U;

    t199 = (x12093-(x12094&(x12095<<x12096)));

    if (t199 != -2951) { NG(); } else { ; }
	
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

