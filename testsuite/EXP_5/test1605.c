#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 80U;
int8_t x2 = -16;
volatile uint32_t x38 = UINT32_MAX;
static uint64_t t1 = UINT64_MAX;
volatile uint64_t t3 = 136LLU;
int16_t x111 = -1;
static int8_t x160 = 0;
int64_t t7 = INT64_MAX;
uint8_t x194 = 1U;
volatile int32_t t9 = 1192279;
volatile uint16_t x357 = UINT16_MAX;
uint32_t x361 = UINT32_MAX;
int8_t x363 = INT8_MIN;
static volatile uint32_t t13 = 8997U;
int32_t x398 = INT32_MAX;
static volatile uint16_t x400 = 1U;
int32_t t15 = 42;
uint64_t x472 = 0LLU;
int64_t x593 = INT64_MAX;
int16_t x594 = -1;
uint32_t x596 = 15U;
uint32_t x616 = 3U;
static int8_t x617 = 0;
static int32_t x633 = 672;
volatile uint64_t x634 = 5527458629540866LLU;
int16_t x635 = -7;
static uint16_t x636 = 8U;
volatile uint64_t x766 = 269LLU;
volatile int32_t t25 = INT32_MAX;
static volatile int32_t x850 = -1;
volatile int16_t x859 = INT16_MIN;
int16_t x975 = -3;
volatile uint8_t x976 = 4U;
uint32_t t31 = 3353U;
uint8_t x1060 = 4U;
int16_t x1133 = 7;
static volatile int32_t t33 = 1886;
uint64_t x1209 = UINT64_MAX;
volatile uint64_t t34 = UINT64_MAX;
uint8_t x1312 = 4U;
uint16_t x1373 = UINT16_MAX;
static int32_t x1375 = INT32_MIN;
volatile uint64_t x1503 = UINT64_MAX;
int16_t x1520 = 3;
int8_t x1634 = -5;
int16_t x1636 = 1;
int32_t x1694 = INT32_MIN;
uint32_t t41 = 2U;
uint64_t x1697 = 231859LLU;
int64_t x1699 = INT64_MIN;
volatile uint64_t t42 = 234669LLU;
static uint8_t x1733 = UINT8_MAX;
static int16_t x1734 = -6;
int16_t x1749 = 3;
int16_t x1815 = INT16_MIN;
static int32_t t47 = -61;
volatile uint64_t t48 = 88605LLU;
int32_t x2059 = INT32_MAX;
int16_t x2092 = 9;
int8_t x2109 = INT8_MAX;
uint64_t x2113 = UINT64_MAX;
uint8_t x2116 = 0U;
uint64_t x2162 = 743LLU;
uint16_t x2166 = UINT16_MAX;
volatile int16_t x2205 = 4710;
int16_t x2206 = INT16_MAX;
int64_t x2207 = INT64_MIN;
int8_t x2208 = 3;
uint8_t x2302 = UINT8_MAX;
uint8_t x2304 = 2U;
uint64_t x2318 = 1LLU;
volatile int32_t t58 = 27001;
int32_t t59 = 1586658;
uint16_t x2609 = 165U;
int16_t x2612 = 29;
uint8_t x3019 = 3U;
uint16_t x3193 = 7873U;
static volatile uint32_t x3194 = 126U;
int64_t x3250 = 50554478126LL;
int64_t x3279 = -1LL;
uint32_t x3283 = 15227153U;
static int16_t x3284 = 0;
int32_t t73 = -252650951;
volatile uint64_t t74 = 2870438346475927LLU;
static uint8_t x3362 = 5U;
static uint64_t x3645 = 38523LLU;
int32_t x3657 = INT32_MAX;
int8_t x3658 = 1;
int8_t x3682 = INT8_MAX;
volatile int64_t t82 = -37678879654371999LL;
int8_t x3800 = 1;
uint64_t t83 = 137681140796464LLU;
int16_t x3818 = INT16_MAX;
volatile int16_t x3865 = INT16_MAX;
volatile int16_t x3866 = 1;
volatile uint64_t x3869 = UINT64_MAX;
static volatile int16_t x3870 = 10;
int64_t x3963 = INT64_MIN;
uint32_t x3964 = 2U;
uint16_t x4085 = UINT16_MAX;
static int16_t x4207 = -1;
volatile int32_t t92 = 196697209;
uint32_t x4293 = 105313021U;
uint8_t x4295 = UINT8_MAX;
static int32_t x4303 = INT32_MIN;
uint32_t x4340 = 0U;
int8_t x4495 = 2;
uint32_t x4496 = 2U;
volatile int64_t t98 = INT64_MAX;


void f0(void) {
	static int16_t x3 = INT16_MIN;
	static volatile uint8_t x4 = 6U;
	int32_t t0 = 5;

	t0 = (x1<<((x2<=x3)>>x4));

	if (t0 != 80) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x37 = UINT64_MAX;
	int8_t x39 = -1;
	uint8_t x40 = 7U;

	t1 = (x37<<((x38<=x39)>>x40));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x61 = 25;
	int16_t x62 = -1;
	volatile int16_t x63 = -1;
	int16_t x64 = 0;
	volatile int32_t t2 = 92707;

	t2 = (x61<<((x62<=x63)>>x64));

	if (t2 != 50) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x97 = 6102052757103338272LLU;
	int64_t x98 = -47390698858834566LL;
	volatile int8_t x99 = -1;
	uint32_t x100 = 13U;

	t3 = (x97<<((x98<=x99)>>x100));

	if (t3 != 6102052757103338272LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x109 = 1LL;
	uint16_t x110 = 22U;
	uint8_t x112 = 9U;
	int64_t t4 = 31940293699LL;

	t4 = (x109<<((x110<=x111)>>x112));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x145 = UINT64_MAX;
	uint8_t x146 = 14U;
	int64_t x147 = INT64_MIN;
	static volatile uint8_t x148 = 19U;
	static uint64_t t5 = UINT64_MAX;

	t5 = (x145<<((x146<=x147)>>x148));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x157 = 22U;
	volatile int64_t x158 = INT64_MAX;
	int8_t x159 = INT8_MAX;
	volatile int32_t t6 = 3;

	t6 = (x157<<((x158<=x159)>>x160));

	if (t6 != 22) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x189 = INT64_MAX;
	int64_t x190 = -10403236818LL;
	uint8_t x191 = 1U;
	int8_t x192 = 5;

	t7 = (x189<<((x190<=x191)>>x192));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x193 = 101U;
	volatile int16_t x195 = -1;
	int16_t x196 = 7;
	int32_t t8 = -1162;

	t8 = (x193<<((x194<=x195)>>x196));

	if (t8 != 101) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x285 = 99;
	uint8_t x286 = 0U;
	static int64_t x287 = -3LL;
	static uint64_t x288 = 2LLU;

	t9 = (x285<<((x286<=x287)>>x288));

	if (t9 != 99) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x309 = 2148203690920162LLU;
	volatile uint8_t x310 = 2U;
	volatile uint16_t x311 = UINT16_MAX;
	uint8_t x312 = 29U;
	volatile uint64_t t10 = 1154164948125276431LLU;

	t10 = (x309<<((x310<=x311)>>x312));

	if (t10 != 2148203690920162LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x358 = 259U;
	volatile uint8_t x359 = 11U;
	static int32_t x360 = 1;
	static int32_t t11 = 146086;

	t11 = (x357<<((x358<=x359)>>x360));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x362 = INT8_MAX;
	static uint8_t x364 = 2U;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x361<<((x362<=x363)>>x364));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x385 = 1111690U;
	static int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	static uint32_t x388 = 0U;

	t13 = (x385<<((x386<=x387)>>x388));

	if (t13 != 2223380U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x397 = 6453;
	uint64_t x399 = UINT64_MAX;
	int32_t t14 = -6830041;

	t14 = (x397<<((x398<=x399)>>x400));

	if (t14 != 6453) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x413 = UINT16_MAX;
	int64_t x414 = INT64_MAX;
	static uint32_t x415 = 815565U;
	uint8_t x416 = 2U;

	t15 = (x413<<((x414<=x415)>>x416));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x469 = 534086240123664LLU;
	uint64_t x470 = 15LLU;
	volatile int16_t x471 = -2;
	static uint64_t t16 = 21707192510718LLU;

	t16 = (x469<<((x470<=x471)>>x472));

	if (t16 != 1068172480247328LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x577 = 0U;
	int16_t x578 = 15;
	int16_t x579 = INT16_MAX;
	uint8_t x580 = 8U;
	static int32_t t17 = -176158196;

	t17 = (x577<<((x578<=x579)>>x580));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x595 = -1;
	int64_t t18 = INT64_MAX;

	t18 = (x593<<((x594<=x595)>>x596));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x597 = 7726530636628557095LLU;
	int16_t x598 = INT16_MAX;
	uint32_t x599 = 13796798U;
	int8_t x600 = 1;
	volatile uint64_t t19 = 224447382964538LLU;

	t19 = (x597<<((x598<=x599)>>x600));

	if (t19 != 7726530636628557095LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x613 = 13610046LL;
	int8_t x614 = -1;
	static volatile int64_t x615 = INT64_MIN;
	static volatile int64_t t20 = -11796580110533LL;

	t20 = (x613<<((x614<=x615)>>x616));

	if (t20 != 13610046LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x618 = 2415201U;
	int8_t x619 = INT8_MAX;
	int32_t x620 = 7;
	volatile int32_t t21 = 3208;

	t21 = (x617<<((x618<=x619)>>x620));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t t22 = -8;

	t22 = (x633<<((x634<=x635)>>x636));

	if (t22 != 672) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x657 = 47;
	int64_t x658 = INT64_MAX;
	uint64_t x659 = 1040912825272231450LLU;
	uint8_t x660 = 15U;
	volatile int32_t t23 = 0;

	t23 = (x657<<((x658<=x659)>>x660));

	if (t23 != 47) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x765 = 1U;
	volatile uint64_t x767 = 1902071659337851LLU;
	int8_t x768 = 23;
	int32_t t24 = -64538;

	t24 = (x765<<((x766<=x767)>>x768));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x769 = INT32_MAX;
	uint16_t x770 = 6803U;
	int32_t x771 = INT32_MIN;
	uint8_t x772 = 2U;

	t25 = (x769<<((x770<=x771)>>x772));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x829 = 1001U;
	volatile int32_t x830 = INT32_MIN;
	int64_t x831 = INT64_MAX;
	int16_t x832 = 4;
	int32_t t26 = 85;

	t26 = (x829<<((x830<=x831)>>x832));

	if (t26 != 1001) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x849 = UINT32_MAX;
	static volatile int16_t x851 = -1;
	uint8_t x852 = 1U;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x849<<((x850<=x851)>>x852));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x857 = 247;
	uint16_t x858 = 28U;
	uint64_t x860 = 0LLU;
	static volatile int32_t t28 = 0;

	t28 = (x857<<((x858<=x859)>>x860));

	if (t28 != 247) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x897 = INT64_MAX;
	static int16_t x898 = INT16_MAX;
	static int16_t x899 = -1;
	int64_t x900 = 24LL;
	volatile int64_t t29 = INT64_MAX;

	t29 = (x897<<((x898<=x899)>>x900));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x949 = 1U;
	uint8_t x950 = 3U;
	volatile int32_t x951 = -557;
	static uint16_t x952 = 27U;
	volatile int32_t t30 = 6998;

	t30 = (x949<<((x950<=x951)>>x952));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x973 = 223231U;
	uint8_t x974 = 1U;

	t31 = (x973<<((x974<=x975)>>x976));

	if (t31 != 223231U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1057 = 7LL;
	uint16_t x1058 = 386U;
	int16_t x1059 = -3508;
	volatile int64_t t32 = -42231636319703LL;

	t32 = (x1057<<((x1058<=x1059)>>x1060));

	if (t32 != 7LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1134 = INT32_MIN;
	int8_t x1135 = 15;
	uint16_t x1136 = 4U;

	t33 = (x1133<<((x1134<=x1135)>>x1136));

	if (t33 != 7) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1210 = 28;
	static uint32_t x1211 = 37564998U;
	uint8_t x1212 = 14U;

	t34 = (x1209<<((x1210<=x1211)>>x1212));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1309 = 4184090;
	volatile int16_t x1310 = INT16_MIN;
	static int8_t x1311 = -20;
	int32_t t35 = 12215126;

	t35 = (x1309<<((x1310<=x1311)>>x1312));

	if (t35 != 4184090) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1374 = 6;
	static int8_t x1376 = 5;
	int32_t t36 = 2192;

	t36 = (x1373<<((x1374<=x1375)>>x1376));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x1393 = 426LLU;
	volatile int32_t x1394 = -1;
	static volatile int64_t x1395 = INT64_MIN;
	uint16_t x1396 = 1U;
	uint64_t t37 = 144264786LLU;

	t37 = (x1393<<((x1394<=x1395)>>x1396));

	if (t37 != 426LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1501 = 1U;
	int8_t x1502 = INT8_MIN;
	uint8_t x1504 = 5U;
	volatile int32_t t38 = 3;

	t38 = (x1501<<((x1502<=x1503)>>x1504));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1517 = 1U;
	int16_t x1518 = -5290;
	volatile uint64_t x1519 = 11LLU;
	int32_t t39 = 87375954;

	t39 = (x1517<<((x1518<=x1519)>>x1520));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x1633 = 7358282;
	int64_t x1635 = INT64_MIN;
	volatile int32_t t40 = 11595;

	t40 = (x1633<<((x1634<=x1635)>>x1636));

	if (t40 != 7358282) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1693 = 0U;
	uint32_t x1695 = UINT32_MAX;
	uint8_t x1696 = 2U;

	t41 = (x1693<<((x1694<=x1695)>>x1696));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1698 = INT32_MIN;
	int64_t x1700 = 1LL;

	t42 = (x1697<<((x1698<=x1699)>>x1700));

	if (t42 != 231859LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1735 = INT8_MAX;
	volatile uint16_t x1736 = 13U;
	int32_t t43 = 28722227;

	t43 = (x1733<<((x1734<=x1735)>>x1736));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x1741 = 12U;
	volatile int8_t x1742 = 9;
	int64_t x1743 = INT64_MAX;
	volatile int8_t x1744 = 0;
	volatile int32_t t44 = 956206;

	t44 = (x1741<<((x1742<=x1743)>>x1744));

	if (t44 != 24) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1750 = 2;
	int8_t x1751 = INT8_MIN;
	int16_t x1752 = 2;
	int32_t t45 = -91315578;

	t45 = (x1749<<((x1750<=x1751)>>x1752));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1805 = 3190;
	int16_t x1806 = 615;
	int8_t x1807 = -1;
	int8_t x1808 = 29;
	int32_t t46 = 8;

	t46 = (x1805<<((x1806<=x1807)>>x1808));

	if (t46 != 3190) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1813 = 1532U;
	uint64_t x1814 = 383574LLU;
	static int16_t x1816 = 1;

	t47 = (x1813<<((x1814<=x1815)>>x1816));

	if (t47 != 1532) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1997 = 19430308LLU;
	int64_t x1998 = INT64_MIN;
	static int32_t x1999 = -1;
	int8_t x2000 = 7;

	t48 = (x1997<<((x1998<=x1999)>>x2000));

	if (t48 != 19430308LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2045 = UINT8_MAX;
	int32_t x2046 = INT32_MIN;
	int64_t x2047 = INT64_MIN;
	static uint32_t x2048 = 0U;
	int32_t t49 = 1;

	t49 = (x2045<<((x2046<=x2047)>>x2048));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2057 = UINT16_MAX;
	int32_t x2058 = 6053;
	uint16_t x2060 = 1U;
	int32_t t50 = 5;

	t50 = (x2057<<((x2058<=x2059)>>x2060));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2089 = UINT64_MAX;
	int16_t x2090 = INT16_MIN;
	int32_t x2091 = 5868670;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x2089<<((x2090<=x2091)>>x2092));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2110 = 106LL;
	int64_t x2111 = INT64_MIN;
	uint8_t x2112 = 0U;
	static volatile int32_t t52 = -5675290;

	t52 = (x2109<<((x2110<=x2111)>>x2112));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2114 = -9;
	uint32_t x2115 = 1949964177U;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x2113<<((x2114<=x2115)>>x2116));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2161 = 5871U;
	static int16_t x2163 = -28;
	uint16_t x2164 = 2U;
	uint32_t t54 = 193388U;

	t54 = (x2161<<((x2162<=x2163)>>x2164));

	if (t54 != 5871U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2165 = INT64_MAX;
	uint8_t x2167 = UINT8_MAX;
	uint32_t x2168 = 22U;
	int64_t t55 = INT64_MAX;

	t55 = (x2165<<((x2166<=x2167)>>x2168));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t t56 = 893110;

	t56 = (x2205<<((x2206<=x2207)>>x2208));

	if (t56 != 4710) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2301 = UINT64_MAX;
	int32_t x2303 = -1;
	static volatile uint64_t t57 = UINT64_MAX;

	t57 = (x2301<<((x2302<=x2303)>>x2304));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2317 = UINT8_MAX;
	int8_t x2319 = -9;
	uint16_t x2320 = 9U;

	t58 = (x2317<<((x2318<=x2319)>>x2320));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2565 = 2U;
	static int32_t x2566 = INT32_MAX;
	volatile int64_t x2567 = INT64_MIN;
	static volatile uint8_t x2568 = 28U;

	t59 = (x2565<<((x2566<=x2567)>>x2568));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x2610 = UINT32_MAX;
	int32_t x2611 = INT32_MIN;
	static int32_t t60 = 1;

	t60 = (x2609<<((x2610<=x2611)>>x2612));

	if (t60 != 165) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2649 = UINT64_MAX;
	static uint8_t x2650 = UINT8_MAX;
	int16_t x2651 = INT16_MAX;
	int64_t x2652 = 30LL;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x2649<<((x2650<=x2651)>>x2652));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2717 = 950285U;
	int32_t x2718 = INT32_MAX;
	int32_t x2719 = INT32_MAX;
	uint16_t x2720 = 21U;
	volatile uint32_t t62 = 4U;

	t62 = (x2717<<((x2718<=x2719)>>x2720));

	if (t62 != 950285U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x2873 = 24438U;
	uint64_t x2874 = UINT64_MAX;
	int8_t x2875 = INT8_MIN;
	int8_t x2876 = 1;
	int32_t t63 = 22340811;

	t63 = (x2873<<((x2874<=x2875)>>x2876));

	if (t63 != 24438) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2917 = UINT64_MAX;
	int16_t x2918 = -1;
	uint32_t x2919 = 3037843U;
	static volatile int16_t x2920 = 0;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x2917<<((x2918<=x2919)>>x2920));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x3013 = UINT16_MAX;
	int8_t x3014 = INT8_MIN;
	volatile int8_t x3015 = INT8_MIN;
	volatile uint8_t x3016 = 14U;
	int32_t t65 = 7;

	t65 = (x3013<<((x3014<=x3015)>>x3016));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3017 = UINT8_MAX;
	volatile int8_t x3018 = 1;
	int8_t x3020 = 0;
	int32_t t66 = 99;

	t66 = (x3017<<((x3018<=x3019)>>x3020));

	if (t66 != 510) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3053 = 1040;
	int16_t x3054 = INT16_MAX;
	int8_t x3055 = INT8_MIN;
	uint8_t x3056 = 1U;
	static volatile int32_t t67 = -12;

	t67 = (x3053<<((x3054<=x3055)>>x3056));

	if (t67 != 1040) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3077 = 38U;
	int16_t x3078 = INT16_MIN;
	volatile uint64_t x3079 = UINT64_MAX;
	uint8_t x3080 = 1U;
	int32_t t68 = -64218787;

	t68 = (x3077<<((x3078<=x3079)>>x3080));

	if (t68 != 38) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x3117 = 17422U;
	int32_t x3118 = -29739;
	uint64_t x3119 = 33LLU;
	volatile int8_t x3120 = 12;
	int32_t t69 = -128149;

	t69 = (x3117<<((x3118<=x3119)>>x3120));

	if (t69 != 17422) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3195 = -131922471746LL;
	int64_t x3196 = 0LL;
	volatile int32_t t70 = -7611949;

	t70 = (x3193<<((x3194<=x3195)>>x3196));

	if (t70 != 7873) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3249 = 176U;
	int16_t x3251 = -109;
	uint8_t x3252 = 6U;
	uint32_t t71 = 193103U;

	t71 = (x3249<<((x3250<=x3251)>>x3252));

	if (t71 != 176U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x3277 = UINT64_MAX;
	uint16_t x3278 = UINT16_MAX;
	int16_t x3280 = 0;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x3277<<((x3278<=x3279)>>x3280));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x3281 = INT8_MAX;
	volatile uint16_t x3282 = 10U;

	t73 = (x3281<<((x3282<=x3283)>>x3284));

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3289 = 172596475575986LLU;
	int64_t x3290 = 97855301833LL;
	uint16_t x3291 = UINT16_MAX;
	static uint32_t x3292 = 1U;

	t74 = (x3289<<((x3290<=x3291)>>x3292));

	if (t74 != 172596475575986LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3361 = 2U;
	int8_t x3363 = INT8_MIN;
	uint32_t x3364 = 5U;
	int32_t t75 = 7881313;

	t75 = (x3361<<((x3362<=x3363)>>x3364));

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3437 = INT64_MAX;
	int8_t x3438 = INT8_MAX;
	static int8_t x3439 = INT8_MIN;
	uint16_t x3440 = 31U;
	int64_t t76 = INT64_MAX;

	t76 = (x3437<<((x3438<=x3439)>>x3440));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x3581 = 1U;
	static volatile int16_t x3582 = INT16_MAX;
	volatile int32_t x3583 = -501936033;
	uint16_t x3584 = 3U;
	uint32_t t77 = 8424892U;

	t77 = (x3581<<((x3582<=x3583)>>x3584));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3641 = 2001290901LLU;
	volatile int64_t x3642 = -1LL;
	uint8_t x3643 = 19U;
	int8_t x3644 = 0;
	uint64_t t78 = 24109606LLU;

	t78 = (x3641<<((x3642<=x3643)>>x3644));

	if (t78 != 4002581802LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x3646 = -1;
	static int16_t x3647 = INT16_MAX;
	volatile int16_t x3648 = 2;
	volatile uint64_t t79 = 68LLU;

	t79 = (x3645<<((x3646<=x3647)>>x3648));

	if (t79 != 38523LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x3659 = -1LL;
	uint16_t x3660 = 3U;
	int32_t t80 = INT32_MAX;

	t80 = (x3657<<((x3658<=x3659)>>x3660));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3681 = INT16_MAX;
	volatile int16_t x3683 = 5179;
	int8_t x3684 = 0;
	int32_t t81 = 661;

	t81 = (x3681<<((x3682<=x3683)>>x3684));

	if (t81 != 65534) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3773 = 11304594169676LL;
	int8_t x3774 = INT8_MAX;
	int8_t x3775 = INT8_MIN;
	uint8_t x3776 = 5U;

	t82 = (x3773<<((x3774<=x3775)>>x3776));

	if (t82 != 11304594169676LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3797 = 58884LLU;
	static int32_t x3798 = INT32_MIN;
	uint64_t x3799 = 205320403116938516LLU;

	t83 = (x3797<<((x3798<=x3799)>>x3800));

	if (t83 != 58884LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x3817 = UINT16_MAX;
	int32_t x3819 = 7604201;
	volatile uint32_t x3820 = 27U;
	int32_t t84 = -72;

	t84 = (x3817<<((x3818<=x3819)>>x3820));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3867 = -800;
	static int8_t x3868 = 0;
	int32_t t85 = -42840;

	t85 = (x3865<<((x3866<=x3867)>>x3868));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3871 = INT8_MIN;
	int16_t x3872 = 0;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x3869<<((x3870<=x3871)>>x3872));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3961 = UINT8_MAX;
	int32_t x3962 = 0;
	int32_t t87 = -6850;

	t87 = (x3961<<((x3962<=x3963)>>x3964));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4069 = 397767088233684777LLU;
	int64_t x4070 = -1LL;
	uint16_t x4071 = UINT16_MAX;
	static volatile uint8_t x4072 = 3U;
	uint64_t t88 = 17752114439091465LLU;

	t88 = (x4069<<((x4070<=x4071)>>x4072));

	if (t88 != 397767088233684777LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4086 = 2U;
	uint16_t x4087 = 400U;
	uint32_t x4088 = 6U;
	volatile int32_t t89 = 8927;

	t89 = (x4085<<((x4086<=x4087)>>x4088));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x4113 = UINT32_MAX;
	int16_t x4114 = 146;
	int16_t x4115 = 168;
	int32_t x4116 = 0;
	volatile uint32_t t90 = 16784U;

	t90 = (x4113<<((x4114<=x4115)>>x4116));

	if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4205 = 181353U;
	int8_t x4206 = -1;
	uint16_t x4208 = 0U;
	uint32_t t91 = 16319746U;

	t91 = (x4205<<((x4206<=x4207)>>x4208));

	if (t91 != 362706U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4213 = UINT16_MAX;
	static uint64_t x4214 = UINT64_MAX;
	uint32_t x4215 = 7U;
	uint64_t x4216 = 0LLU;

	t92 = (x4213<<((x4214<=x4215)>>x4216));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4294 = -1LL;
	uint32_t x4296 = 4U;
	volatile uint32_t t93 = 42163U;

	t93 = (x4293<<((x4294<=x4295)>>x4296));

	if (t93 != 105313021U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4301 = 30U;
	volatile int32_t x4302 = INT32_MAX;
	static uint8_t x4304 = 5U;
	static int32_t t94 = -7486137;

	t94 = (x4301<<((x4302<=x4303)>>x4304));

	if (t94 != 30) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x4313 = UINT32_MAX;
	volatile int16_t x4314 = INT16_MIN;
	int64_t x4315 = -1LL;
	uint32_t x4316 = 9U;
	uint32_t t95 = UINT32_MAX;

	t95 = (x4313<<((x4314<=x4315)>>x4316));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x4333 = 1895U;
	uint16_t x4334 = UINT16_MAX;
	int16_t x4335 = INT16_MAX;
	uint16_t x4336 = 2U;
	int32_t t96 = 6;

	t96 = (x4333<<((x4334<=x4335)>>x4336));

	if (t96 != 1895) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4337 = INT16_MAX;
	int16_t x4338 = INT16_MAX;
	int16_t x4339 = 103;
	static volatile int32_t t97 = -514813972;

	t97 = (x4337<<((x4338<=x4339)>>x4340));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x4493 = INT64_MAX;
	uint64_t x4494 = 255045615LLU;

	t98 = (x4493<<((x4494<=x4495)>>x4496));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4537 = UINT32_MAX;
	uint8_t x4538 = UINT8_MAX;
	int32_t x4539 = INT32_MIN;
	int8_t x4540 = 0;
	uint32_t t99 = UINT32_MAX;

	t99 = (x4537<<((x4538<=x4539)>>x4540));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

