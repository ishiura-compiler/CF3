#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t0 = 17155U;
uint32_t t1 = 91886468U;
int64_t x145 = INT64_MAX;
int32_t x147 = 1;
int32_t x194 = INT32_MAX;
int32_t t6 = -114;
static int32_t t7 = INT32_MAX;
volatile uint32_t x387 = 23U;
int32_t x433 = 3638;
int16_t x436 = INT16_MIN;
int32_t x469 = INT32_MAX;
uint16_t x477 = UINT16_MAX;
int32_t x521 = -7;
int32_t x522 = INT32_MIN;
volatile int32_t t13 = -105177;
int16_t x626 = 30;
int32_t x628 = -1;
int32_t x657 = INT32_MIN;
int32_t t17 = -8837;
static int64_t x685 = INT64_MIN;
volatile uint8_t x706 = UINT8_MAX;
volatile uint32_t t19 = UINT32_MAX;
int64_t x732 = 71739LL;
volatile uint8_t x849 = UINT8_MAX;
int32_t t23 = 4685;
static uint8_t x931 = 1U;
int64_t x932 = INT64_MIN;
uint16_t x951 = 11U;
uint8_t x1007 = 3U;
volatile int32_t t27 = 0;
volatile int16_t x1026 = -3;
int32_t t29 = -215469395;
int32_t x1042 = 398839;
static volatile int8_t x1043 = 0;
int32_t t32 = 108;
volatile int16_t x1124 = INT16_MIN;
volatile int16_t x1229 = INT16_MIN;
int8_t x1248 = -1;
int8_t x1300 = INT8_MIN;
static uint32_t x1301 = 955139U;
uint32_t x1304 = 266U;
int32_t x1336 = INT32_MIN;
static uint32_t x1384 = 19624U;
uint32_t x1423 = 1U;
int32_t x1424 = INT32_MIN;
volatile int32_t t42 = 118563;
static uint8_t x1500 = 3U;
uint32_t x1503 = 14U;
volatile int8_t x1525 = 0;
uint32_t x1543 = 0U;
int32_t x1601 = -59;
int8_t x1620 = INT8_MIN;
volatile int32_t t49 = 192;
uint8_t x1707 = 9U;
static int32_t t53 = -196223;
static int64_t x1737 = INT64_MIN;
int64_t x1740 = -1LL;
static volatile int8_t x1827 = 1;
static volatile int32_t x1828 = 1;
uint32_t x1884 = 1020U;
volatile int8_t x1901 = -1;
int16_t x1927 = 1;
int64_t x1928 = -6274016855LL;
int16_t x1954 = INT16_MIN;
uint16_t x1955 = 3U;
volatile int32_t t60 = 26;
uint8_t x2021 = 3U;
int8_t x2022 = 1;
static uint8_t x2149 = 53U;
uint8_t x2179 = 9U;
int32_t t65 = 3081222;
uint8_t x2228 = 1U;
int8_t x2259 = 1;
volatile uint8_t x2363 = 5U;
static volatile int16_t x2364 = -1;
int16_t x2389 = INT16_MAX;
volatile uint32_t t72 = UINT32_MAX;
uint32_t x2427 = 0U;
static int8_t x2478 = -12;
int16_t x2483 = 8;
int32_t x2590 = -1;
int16_t x2592 = INT16_MAX;
int32_t x2593 = INT32_MAX;
int64_t t80 = INT64_MIN;
volatile uint64_t t82 = 4426805LLU;
int16_t x2681 = INT16_MIN;
uint32_t x2682 = 6U;
uint32_t x2800 = UINT32_MAX;
volatile int8_t x2851 = 0;
static volatile int32_t x2853 = INT32_MIN;
int8_t x2855 = 1;
uint64_t x2986 = UINT64_MAX;
int32_t t91 = 128188;
int64_t x3025 = 7291LL;
volatile int32_t t96 = -45;
volatile int32_t t98 = -318704304;
int64_t x3109 = INT64_MIN;


void f0(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = 56;
	uint8_t x7 = 8U;
	uint32_t x8 = UINT32_MAX;

	t0 = (((x5<=x6)<<x7)+x8);

	if (t0 != 255U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x53 = INT64_MIN;
	uint64_t x54 = UINT64_MAX;
	static volatile uint8_t x55 = 0U;
	uint32_t x56 = 88U;

	t1 = (((x53<=x54)<<x55)+x56);

	if (t1 != 89U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x89 = INT8_MIN;
	int16_t x90 = -1;
	uint8_t x91 = 18U;
	int8_t x92 = -1;
	volatile int32_t t2 = -250;

	t2 = (((x89<=x90)<<x91)+x92);

	if (t2 != 262143) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x146 = -1;
	static uint32_t x148 = UINT32_MAX;
	static uint32_t t3 = UINT32_MAX;

	t3 = (((x145<=x146)<<x147)+x148);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x173 = -106292740;
	int32_t x174 = INT32_MIN;
	uint8_t x175 = 0U;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (((x173<=x174)<<x175)+x176);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x193 = -61598;
	static volatile uint8_t x195 = 0U;
	uint16_t x196 = 1U;
	int32_t t5 = -29;

	t5 = (((x193<=x194)<<x195)+x196);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x293 = -1LL;
	int64_t x294 = -43993508863LL;
	int8_t x295 = 0;
	volatile int16_t x296 = INT16_MAX;

	t6 = (((x293<=x294)<<x295)+x296);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x349 = UINT8_MAX;
	int16_t x350 = -239;
	int8_t x351 = 0;
	static int32_t x352 = INT32_MAX;

	t7 = (((x349<=x350)<<x351)+x352);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x385 = 68;
	volatile int64_t x386 = -1LL;
	volatile uint8_t x388 = 4U;
	volatile int32_t t8 = -111499;

	t8 = (((x385<=x386)<<x387)+x388);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x389 = INT32_MAX;
	static int8_t x390 = 1;
	uint8_t x391 = 1U;
	static int64_t x392 = INT64_MIN;
	volatile int64_t t9 = INT64_MIN;

	t9 = (((x389<=x390)<<x391)+x392);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x434 = 0;
	volatile int8_t x435 = 24;
	volatile int32_t t10 = 10;

	t10 = (((x433<=x434)<<x435)+x436);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x470 = 319;
	uint8_t x471 = 24U;
	int16_t x472 = INT16_MIN;
	int32_t t11 = 91;

	t11 = (((x469<=x470)<<x471)+x472);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x478 = INT64_MIN;
	int8_t x479 = 11;
	int32_t x480 = -1;
	int32_t t12 = 302;

	t12 = (((x477<=x478)<<x479)+x480);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x523 = 0U;
	int8_t x524 = INT8_MAX;

	t13 = (((x521<=x522)<<x523)+x524);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x573 = INT64_MAX;
	int64_t x574 = INT64_MIN;
	static int16_t x575 = 1;
	int64_t x576 = INT64_MAX;
	int64_t t14 = INT64_MAX;

	t14 = (((x573<=x574)<<x575)+x576);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x589 = INT8_MAX;
	int32_t x590 = -98594;
	volatile uint64_t x591 = 30LLU;
	int16_t x592 = 14;
	static volatile int32_t t15 = -215;

	t15 = (((x589<=x590)<<x591)+x592);

	if (t15 != 14) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x625 = -1;
	int16_t x627 = 0;
	volatile int32_t t16 = -19149;

	t16 = (((x625<=x626)<<x627)+x628);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x658 = INT32_MAX;
	uint8_t x659 = 9U;
	uint8_t x660 = UINT8_MAX;

	t17 = (((x657<=x658)<<x659)+x660);

	if (t17 != 767) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x686 = INT32_MIN;
	int16_t x687 = 5;
	int16_t x688 = 94;
	int32_t t18 = 57;

	t18 = (((x685<=x686)<<x687)+x688);

	if (t18 != 126) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x705 = 1233;
	int8_t x707 = 1;
	volatile uint32_t x708 = UINT32_MAX;

	t19 = (((x705<=x706)<<x707)+x708);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x729 = -1;
	static int16_t x730 = -1247;
	volatile uint8_t x731 = 1U;
	static volatile int64_t t20 = -76LL;

	t20 = (((x729<=x730)<<x731)+x732);

	if (t20 != 71739LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x829 = -11747LL;
	int64_t x830 = 181085861281923004LL;
	volatile uint8_t x831 = 18U;
	uint64_t x832 = 1630311357LLU;
	uint64_t t21 = 33016864LLU;

	t21 = (((x829<=x830)<<x831)+x832);

	if (t21 != 1630573501LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x850 = INT16_MIN;
	uint16_t x851 = 22U;
	volatile int16_t x852 = INT16_MIN;
	volatile int32_t t22 = 1574;

	t22 = (((x849<=x850)<<x851)+x852);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x909 = INT8_MAX;
	uint32_t x910 = 10617U;
	static uint16_t x911 = 2U;
	static volatile int32_t x912 = -1;

	t23 = (((x909<=x910)<<x911)+x912);

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x913 = -43;
	int8_t x914 = INT8_MIN;
	uint16_t x915 = 0U;
	int8_t x916 = INT8_MIN;
	static volatile int32_t t24 = 57;

	t24 = (((x913<=x914)<<x915)+x916);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x929 = -1LL;
	uint32_t x930 = UINT32_MAX;
	int64_t t25 = -44793650704LL;

	t25 = (((x929<=x930)<<x931)+x932);

	if (t25 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x949 = INT8_MIN;
	volatile uint32_t x950 = 124496462U;
	static volatile uint64_t x952 = 16092865037LLU;
	static uint64_t t26 = 500155668173106159LLU;

	t26 = (((x949<=x950)<<x951)+x952);

	if (t26 != 16092865037LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1005 = -1;
	volatile int16_t x1006 = 5;
	uint8_t x1008 = UINT8_MAX;

	t27 = (((x1005<=x1006)<<x1007)+x1008);

	if (t27 != 263) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1025 = INT8_MAX;
	volatile uint8_t x1027 = 1U;
	uint32_t x1028 = 26U;
	volatile uint32_t t28 = 1825U;

	t28 = (((x1025<=x1026)<<x1027)+x1028);

	if (t28 != 26U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1033 = INT64_MAX;
	uint16_t x1034 = 8892U;
	static int16_t x1035 = 20;
	int16_t x1036 = INT16_MAX;

	t29 = (((x1033<=x1034)<<x1035)+x1036);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1041 = -1;
	int16_t x1044 = INT16_MAX;
	volatile int32_t t30 = -1942;

	t30 = (((x1041<=x1042)<<x1043)+x1044);

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1093 = 719289170LL;
	uint8_t x1094 = 36U;
	uint8_t x1095 = 2U;
	uint16_t x1096 = UINT16_MAX;
	static volatile int32_t t31 = -115609846;

	t31 = (((x1093<=x1094)<<x1095)+x1096);

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1109 = 119177623LLU;
	int16_t x1110 = 501;
	static uint8_t x1111 = 10U;
	uint16_t x1112 = 8708U;

	t32 = (((x1109<=x1110)<<x1111)+x1112);

	if (t32 != 8708) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1121 = INT32_MIN;
	uint32_t x1122 = 692922210U;
	int16_t x1123 = 9;
	int32_t t33 = 30011056;

	t33 = (((x1121<=x1122)<<x1123)+x1124);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1129 = UINT8_MAX;
	int32_t x1130 = 538658886;
	static volatile int64_t x1131 = 3LL;
	int8_t x1132 = INT8_MAX;
	volatile int32_t t34 = 2990;

	t34 = (((x1129<=x1130)<<x1131)+x1132);

	if (t34 != 135) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1230 = -1LL;
	volatile uint8_t x1231 = 13U;
	static volatile int16_t x1232 = -1;
	volatile int32_t t35 = 30866;

	t35 = (((x1229<=x1230)<<x1231)+x1232);

	if (t35 != 8191) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1245 = INT64_MIN;
	uint8_t x1246 = UINT8_MAX;
	int8_t x1247 = 1;
	volatile int32_t t36 = -926069;

	t36 = (((x1245<=x1246)<<x1247)+x1248);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1297 = 30703028U;
	uint64_t x1298 = 120530LLU;
	uint16_t x1299 = 0U;
	volatile int32_t t37 = 2053588;

	t37 = (((x1297<=x1298)<<x1299)+x1300);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1302 = INT64_MIN;
	volatile uint8_t x1303 = 0U;
	volatile uint32_t t38 = 7U;

	t38 = (((x1301<=x1302)<<x1303)+x1304);

	if (t38 != 266U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1333 = 338;
	volatile uint32_t x1334 = 121827U;
	volatile uint8_t x1335 = 0U;
	volatile int32_t t39 = -2605032;

	t39 = (((x1333<=x1334)<<x1335)+x1336);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1381 = 26089603U;
	int32_t x1382 = INT32_MIN;
	uint8_t x1383 = 13U;
	uint32_t t40 = 68040U;

	t40 = (((x1381<=x1382)<<x1383)+x1384);

	if (t40 != 27816U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x1421 = INT64_MAX;
	uint16_t x1422 = UINT16_MAX;
	volatile int32_t t41 = INT32_MIN;

	t41 = (((x1421<=x1422)<<x1423)+x1424);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x1493 = 1021366854338405LL;
	uint64_t x1494 = UINT64_MAX;
	uint16_t x1495 = 27U;
	volatile int8_t x1496 = INT8_MAX;

	t42 = (((x1493<=x1494)<<x1495)+x1496);

	if (t42 != 134217855) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1497 = INT8_MIN;
	int16_t x1498 = INT16_MAX;
	uint8_t x1499 = 9U;
	static volatile int32_t t43 = -6108;

	t43 = (((x1497<=x1498)<<x1499)+x1500);

	if (t43 != 515) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1501 = 23097577299075226LLU;
	int16_t x1502 = INT16_MIN;
	int8_t x1504 = -2;
	volatile int32_t t44 = -424;

	t44 = (((x1501<=x1502)<<x1503)+x1504);

	if (t44 != 16382) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1526 = INT8_MIN;
	uint8_t x1527 = 9U;
	int32_t x1528 = INT32_MAX;
	volatile int32_t t45 = INT32_MAX;

	t45 = (((x1525<=x1526)<<x1527)+x1528);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1541 = 14604823951855LL;
	int64_t x1542 = INT64_MAX;
	uint64_t x1544 = 3668573860823016509LLU;
	uint64_t t46 = 3LLU;

	t46 = (((x1541<=x1542)<<x1543)+x1544);

	if (t46 != 3668573860823016510LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1573 = -1;
	static int64_t x1574 = -1LL;
	uint16_t x1575 = 25U;
	int8_t x1576 = INT8_MIN;
	volatile int32_t t47 = -8315195;

	t47 = (((x1573<=x1574)<<x1575)+x1576);

	if (t47 != 33554304) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1602 = -1;
	volatile int32_t x1603 = 1;
	uint64_t x1604 = UINT64_MAX;
	static volatile uint64_t t48 = 2704452LLU;

	t48 = (((x1601<=x1602)<<x1603)+x1604);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1617 = -263;
	uint64_t x1618 = 180LLU;
	uint8_t x1619 = 3U;

	t49 = (((x1617<=x1618)<<x1619)+x1620);

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1657 = 759LLU;
	int16_t x1658 = 2295;
	static uint8_t x1659 = 0U;
	uint32_t x1660 = 227026588U;
	volatile uint32_t t50 = 2U;

	t50 = (((x1657<=x1658)<<x1659)+x1660);

	if (t50 != 227026589U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1677 = -1LL;
	int32_t x1678 = 134;
	static int16_t x1679 = 22;
	int8_t x1680 = INT8_MAX;
	int32_t t51 = 975625970;

	t51 = (((x1677<=x1678)<<x1679)+x1680);

	if (t51 != 4194431) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x1705 = -58;
	uint16_t x1706 = 351U;
	int32_t x1708 = INT32_MIN;
	int32_t t52 = 1;

	t52 = (((x1705<=x1706)<<x1707)+x1708);

	if (t52 != -2147483136) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1729 = INT8_MAX;
	int16_t x1730 = -4212;
	uint16_t x1731 = 14U;
	int8_t x1732 = -55;

	t53 = (((x1729<=x1730)<<x1731)+x1732);

	if (t53 != -55) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1738 = 0;
	int16_t x1739 = 0;
	volatile int64_t t54 = -1LL;

	t54 = (((x1737<=x1738)<<x1739)+x1740);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1825 = UINT64_MAX;
	int32_t x1826 = -1;
	int32_t t55 = -1;

	t55 = (((x1825<=x1826)<<x1827)+x1828);

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1853 = UINT8_MAX;
	int16_t x1854 = 9170;
	uint16_t x1855 = 0U;
	static int16_t x1856 = -1;
	static volatile int32_t t56 = 77;

	t56 = (((x1853<=x1854)<<x1855)+x1856);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1881 = -9412128;
	int8_t x1882 = INT8_MIN;
	int64_t x1883 = 2LL;
	static uint32_t t57 = 256931422U;

	t57 = (((x1881<=x1882)<<x1883)+x1884);

	if (t57 != 1024U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1902 = -1LL;
	int8_t x1903 = 14;
	volatile int32_t x1904 = INT32_MIN;
	volatile int32_t t58 = 5;

	t58 = (((x1901<=x1902)<<x1903)+x1904);

	if (t58 != -2147467264) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1925 = INT16_MAX;
	int32_t x1926 = INT32_MIN;
	int64_t t59 = -5307441572896LL;

	t59 = (((x1925<=x1926)<<x1927)+x1928);

	if (t59 != -6274016855LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x1953 = INT8_MIN;
	int16_t x1956 = 1108;

	t60 = (((x1953<=x1954)<<x1955)+x1956);

	if (t60 != 1108) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x1977 = UINT64_MAX;
	int8_t x1978 = INT8_MIN;
	uint16_t x1979 = 21U;
	uint8_t x1980 = 2U;
	int32_t t61 = 507307337;

	t61 = (((x1977<=x1978)<<x1979)+x1980);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2023 = 0LLU;
	int64_t x2024 = INT64_MIN;
	volatile int64_t t62 = INT64_MIN;

	t62 = (((x2021<=x2022)<<x2023)+x2024);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2093 = -1;
	volatile int16_t x2094 = INT16_MIN;
	uint8_t x2095 = 13U;
	uint64_t x2096 = 130284341188679615LLU;
	volatile uint64_t t63 = 114726862111779817LLU;

	t63 = (((x2093<=x2094)<<x2095)+x2096);

	if (t63 != 130284341188679615LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2150 = INT8_MIN;
	int32_t x2151 = 24;
	uint8_t x2152 = UINT8_MAX;
	int32_t t64 = -669;

	t64 = (((x2149<=x2150)<<x2151)+x2152);

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x2177 = 32177143006876LLU;
	uint8_t x2178 = UINT8_MAX;
	static int32_t x2180 = 4912274;

	t65 = (((x2177<=x2178)<<x2179)+x2180);

	if (t65 != 4912274) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2225 = INT8_MIN;
	static int64_t x2226 = -20LL;
	int8_t x2227 = 0;
	int32_t t66 = -3660847;

	t66 = (((x2225<=x2226)<<x2227)+x2228);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x2257 = INT8_MAX;
	uint64_t x2258 = 3LLU;
	volatile uint32_t x2260 = 106577458U;
	volatile uint32_t t67 = 12U;

	t67 = (((x2257<=x2258)<<x2259)+x2260);

	if (t67 != 106577458U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2261 = -1;
	int64_t x2262 = INT64_MAX;
	int8_t x2263 = 0;
	volatile uint64_t x2264 = UINT64_MAX;
	volatile uint64_t t68 = 10935813491079586LLU;

	t68 = (((x2261<=x2262)<<x2263)+x2264);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2293 = INT8_MAX;
	volatile uint32_t x2294 = 528784264U;
	int8_t x2295 = 7;
	int32_t x2296 = INT32_MIN;
	volatile int32_t t69 = 0;

	t69 = (((x2293<=x2294)<<x2295)+x2296);

	if (t69 != -2147483520) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x2321 = INT8_MAX;
	int16_t x2322 = 316;
	uint16_t x2323 = 11U;
	static uint64_t x2324 = 91405366174999599LLU;
	uint64_t t70 = 28085846598148623LLU;

	t70 = (((x2321<=x2322)<<x2323)+x2324);

	if (t70 != 91405366175001647LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2361 = 1U;
	int64_t x2362 = INT64_MIN;
	int32_t t71 = -621881626;

	t71 = (((x2361<=x2362)<<x2363)+x2364);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2390 = -60527372948884LL;
	uint8_t x2391 = 3U;
	static volatile uint32_t x2392 = UINT32_MAX;

	t72 = (((x2389<=x2390)<<x2391)+x2392);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2397 = -158LL;
	static uint8_t x2398 = UINT8_MAX;
	volatile int8_t x2399 = 9;
	static volatile int8_t x2400 = -1;
	int32_t t73 = 1250953;

	t73 = (((x2397<=x2398)<<x2399)+x2400);

	if (t73 != 511) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2425 = UINT32_MAX;
	volatile int16_t x2426 = -1;
	static int8_t x2428 = INT8_MIN;
	int32_t t74 = 13613;

	t74 = (((x2425<=x2426)<<x2427)+x2428);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2477 = 1;
	static volatile uint16_t x2479 = 3U;
	int16_t x2480 = -1;
	volatile int32_t t75 = -4842;

	t75 = (((x2477<=x2478)<<x2479)+x2480);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2481 = 0;
	volatile int16_t x2482 = INT16_MIN;
	static uint8_t x2484 = UINT8_MAX;
	int32_t t76 = 14029;

	t76 = (((x2481<=x2482)<<x2483)+x2484);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2505 = -1;
	static int16_t x2506 = INT16_MIN;
	uint8_t x2507 = 1U;
	static int32_t x2508 = 2140;
	int32_t t77 = 133783020;

	t77 = (((x2505<=x2506)<<x2507)+x2508);

	if (t77 != 2140) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2553 = INT16_MIN;
	int16_t x2554 = INT16_MIN;
	uint8_t x2555 = 0U;
	int16_t x2556 = INT16_MIN;
	int32_t t78 = -149890;

	t78 = (((x2553<=x2554)<<x2555)+x2556);

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2589 = INT8_MAX;
	uint64_t x2591 = 19LLU;
	int32_t t79 = -1420;

	t79 = (((x2589<=x2590)<<x2591)+x2592);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2594 = -3142311891450LL;
	uint64_t x2595 = 4LLU;
	static int64_t x2596 = INT64_MIN;

	t80 = (((x2593<=x2594)<<x2595)+x2596);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x2621 = -1;
	int8_t x2622 = 5;
	int8_t x2623 = 0;
	int8_t x2624 = INT8_MIN;
	volatile int32_t t81 = -495;

	t81 = (((x2621<=x2622)<<x2623)+x2624);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2629 = 4455;
	uint8_t x2630 = 0U;
	uint16_t x2631 = 1U;
	uint64_t x2632 = 8356057132174799834LLU;

	t82 = (((x2629<=x2630)<<x2631)+x2632);

	if (t82 != 8356057132174799834LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x2683 = 0;
	static int64_t x2684 = INT64_MAX;
	volatile int64_t t83 = INT64_MAX;

	t83 = (((x2681<=x2682)<<x2683)+x2684);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x2701 = -1;
	int64_t x2702 = -1LL;
	uint16_t x2703 = 2U;
	int32_t x2704 = 1602953;
	static volatile int32_t t84 = 92772;

	t84 = (((x2701<=x2702)<<x2703)+x2704);

	if (t84 != 1602957) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2757 = 23U;
	volatile int16_t x2758 = 1;
	int16_t x2759 = 6;
	volatile uint64_t x2760 = 2681LLU;
	volatile uint64_t t85 = 1344LLU;

	t85 = (((x2757<=x2758)<<x2759)+x2760);

	if (t85 != 2681LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x2797 = INT64_MIN;
	int32_t x2798 = INT32_MIN;
	uint8_t x2799 = 0U;
	volatile uint32_t t86 = 3674784U;

	t86 = (((x2797<=x2798)<<x2799)+x2800);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2801 = -4082506022090LL;
	uint64_t x2802 = 523376925300089LLU;
	uint8_t x2803 = 6U;
	static volatile uint16_t x2804 = 632U;
	int32_t t87 = -5;

	t87 = (((x2801<=x2802)<<x2803)+x2804);

	if (t87 != 632) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x2837 = 31U;
	uint16_t x2838 = 0U;
	int32_t x2839 = 0;
	static uint8_t x2840 = UINT8_MAX;
	volatile int32_t t88 = -228;

	t88 = (((x2837<=x2838)<<x2839)+x2840);

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2849 = 1441;
	int32_t x2850 = INT32_MIN;
	static int32_t x2852 = 375832;
	int32_t t89 = 80;

	t89 = (((x2849<=x2850)<<x2851)+x2852);

	if (t89 != 375832) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2854 = INT64_MAX;
	static int8_t x2856 = INT8_MIN;
	volatile int32_t t90 = 1;

	t90 = (((x2853<=x2854)<<x2855)+x2856);

	if (t90 != -126) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x2985 = 7512176909998LL;
	uint16_t x2987 = 1U;
	static int16_t x2988 = 14;

	t91 = (((x2985<=x2986)<<x2987)+x2988);

	if (t91 != 16) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2989 = -1;
	uint16_t x2990 = UINT16_MAX;
	static int8_t x2991 = 1;
	int64_t x2992 = -1LL;
	static int64_t t92 = 84483165984LL;

	t92 = (((x2989<=x2990)<<x2991)+x2992);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x3005 = UINT64_MAX;
	int32_t x3006 = INT32_MIN;
	uint8_t x3007 = 5U;
	int64_t x3008 = INT64_MAX;
	static int64_t t93 = INT64_MAX;

	t93 = (((x3005<=x3006)<<x3007)+x3008);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x3026 = INT16_MIN;
	int64_t x3027 = 19LL;
	uint16_t x3028 = UINT16_MAX;
	int32_t t94 = -533879;

	t94 = (((x3025<=x3026)<<x3027)+x3028);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x3073 = 56;
	uint16_t x3074 = 0U;
	int16_t x3075 = 1;
	volatile int8_t x3076 = 0;
	int32_t t95 = -3;

	t95 = (((x3073<=x3074)<<x3075)+x3076);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3093 = INT16_MIN;
	int16_t x3094 = INT16_MAX;
	volatile int16_t x3095 = 1;
	static int8_t x3096 = INT8_MIN;

	t96 = (((x3093<=x3094)<<x3095)+x3096);

	if (t96 != -126) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x3097 = INT8_MIN;
	int8_t x3098 = INT8_MIN;
	int16_t x3099 = 3;
	uint64_t x3100 = 68172397933264LLU;
	uint64_t t97 = 180321893LLU;

	t97 = (((x3097<=x3098)<<x3099)+x3100);

	if (t97 != 68172397933272LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x3101 = UINT16_MAX;
	static volatile int64_t x3102 = INT64_MIN;
	int8_t x3103 = 1;
	int8_t x3104 = -1;

	t98 = (((x3101<=x3102)<<x3103)+x3104);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x3110 = INT16_MIN;
	static int32_t x3111 = 1;
	static int64_t x3112 = 92759LL;
	volatile int64_t t99 = 54302429222LL;

	t99 = (((x3109<=x3110)<<x3111)+x3112);

	if (t99 != 92761LL) { NG(); } else { ; }
	
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

