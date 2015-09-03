#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x333 = INT32_MIN;
static int32_t x503 = INT32_MAX;
volatile int8_t x583 = INT8_MIN;
static uint16_t x708 = 1U;
volatile int64_t t7 = 1135894LL;
static volatile uint64_t t8 = 411241212LLU;
uint32_t x847 = 1U;
static uint32_t t9 = 16919138U;
int16_t x930 = 3824;
static uint32_t x950 = 3345U;
uint64_t t12 = 3953074358565LLU;
volatile int8_t x971 = INT8_MIN;
uint8_t x1003 = UINT8_MAX;
volatile uint32_t t16 = 1082540U;
uint64_t x1010 = UINT64_MAX;
uint8_t x1012 = 1U;
uint64_t t17 = 2LLU;
volatile int16_t x1146 = -1;
int32_t x1147 = -264;
uint32_t x1192 = 8U;
int64_t t24 = -248011LL;
static uint32_t x1396 = 1U;
int16_t x1453 = -1;
static volatile uint64_t t28 = 3614LLU;
static int8_t x1581 = INT8_MIN;
uint16_t x1598 = UINT16_MAX;
static volatile uint8_t x1650 = UINT8_MAX;
uint64_t x1665 = UINT64_MAX;
int8_t x1738 = -1;
volatile uint64_t t36 = 99083358078810LLU;
static volatile uint16_t x1815 = UINT16_MAX;
int8_t x1995 = INT8_MIN;
int32_t x1996 = 12;
int8_t x2056 = 1;
uint8_t x2140 = 23U;
volatile uint32_t t44 = 10U;
static uint32_t x2154 = 1045052935U;
int16_t x2155 = -1;
int8_t x2205 = INT8_MAX;
static int16_t x2206 = -1;
int32_t t46 = -2447884;
uint16_t x2218 = 2108U;
uint32_t t48 = 9128731U;
volatile uint32_t x2409 = 2087001786U;
uint8_t x2524 = 0U;
int8_t x2588 = 0;
volatile int8_t x2624 = 0;
volatile int32_t t57 = 0;
int8_t x2650 = INT8_MIN;
volatile uint32_t t58 = 1U;
volatile uint16_t x2672 = 60U;
uint64_t t60 = 436LLU;
static uint64_t t61 = 4513847011894749085LLU;
int64_t x2697 = 7909LL;
volatile uint8_t x2767 = UINT8_MAX;
uint16_t x2768 = 43U;
static uint16_t x2815 = UINT16_MAX;
uint32_t x2854 = UINT32_MAX;
static uint8_t x2880 = 0U;
volatile uint16_t x2897 = 431U;
int8_t x2900 = 11;
int8_t x3007 = INT8_MIN;
volatile uint16_t x3008 = 0U;
volatile int64_t x3132 = 0LL;
int64_t x3150 = 778696LL;
static int8_t x3293 = -1;
static uint8_t x3296 = 11U;
int64_t t79 = 554754818220578LL;
uint16_t x3381 = UINT16_MAX;
int8_t x3421 = -1;
static uint8_t x3455 = 1U;
volatile int8_t x3667 = INT8_MAX;
uint64_t x3725 = 885004790LLU;
int16_t x3728 = 4;
static volatile uint64_t t85 = 3LLU;
uint64_t t87 = 513073908510415LLU;
uint64_t x3974 = UINT64_MAX;
volatile uint64_t t89 = 75718LLU;
uint32_t t90 = 48U;
static uint32_t x4054 = 102365330U;
int64_t x4142 = INT64_MIN;
int32_t x4185 = INT32_MAX;
uint16_t x4186 = 0U;
int64_t x4217 = INT64_MAX;
volatile int64_t t95 = -7280087464LL;
volatile int16_t x4260 = 61;
uint8_t x4309 = 4U;
int8_t x4310 = INT8_MIN;
int8_t x4312 = 43;
static uint8_t x4363 = UINT8_MAX;
volatile uint16_t x4364 = 1U;


void f0(void) {
	volatile int16_t x33 = -1;
	static volatile int16_t x34 = INT16_MIN;
	static uint32_t x35 = UINT32_MAX;
	int64_t x36 = 1LL;
	uint32_t t0 = 1072192036U;

	t0 = ((x33-(x34&x35))>>x36);

	if (t0 != 16383U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x334 = 389724239675561867LLU;
	static uint64_t x335 = 4912LLU;
	int8_t x336 = 0;
	uint64_t t1 = 63476LLU;

	t1 = ((x333-(x334&x335))>>x336);

	if (t1 != 18446744071562063104LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MIN;
	int64_t x403 = INT64_MIN;
	int64_t x404 = 1LL;
	volatile int64_t t2 = -7046941358102LL;

	t2 = ((x401-(x402&x403))>>x404);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x469 = INT64_MAX;
	int8_t x470 = 1;
	int16_t x471 = INT16_MIN;
	static int64_t x472 = 0LL;
	int64_t t3 = INT64_MAX;

	t3 = ((x469-(x470&x471))>>x472);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x501 = INT64_MAX;
	uint32_t x502 = 272533U;
	static uint16_t x504 = 0U;
	int64_t t4 = 349733LL;

	t4 = ((x501-(x502&x503))>>x504);

	if (t4 != 9223372036854503274LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x581 = -1;
	uint64_t x582 = UINT64_MAX;
	static int16_t x584 = 9;
	uint64_t t5 = 325783LLU;

	t5 = ((x581-(x582&x583))>>x584);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x693 = 1758894;
	volatile uint64_t x694 = 6463021LLU;
	uint32_t x695 = 14U;
	volatile int32_t x696 = 7;
	uint64_t t6 = 49642296406864359LLU;

	t6 = ((x693-(x694&x695))>>x696);

	if (t6 != 13741LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x705 = 142857107524977606LL;
	static volatile int64_t x706 = INT64_MIN;
	volatile uint32_t x707 = UINT32_MAX;

	t7 = ((x705-(x706&x707))>>x708);

	if (t7 != 71428553762488803LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x809 = 5731385U;
	static uint64_t x810 = UINT64_MAX;
	int64_t x811 = INT64_MIN;
	uint16_t x812 = 2U;

	t8 = ((x809-(x810&x811))>>x812);

	if (t8 != 2305843009215126798LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x845 = 52U;
	int32_t x846 = 8273916;
	uint8_t x848 = 0U;

	t9 = ((x845-(x846&x847))>>x848);

	if (t9 != 52U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x929 = 5978U;
	static int64_t x931 = INT64_MAX;
	uint8_t x932 = 33U;
	volatile int64_t t10 = -7623792918LL;

	t10 = ((x929-(x930&x931))>>x932);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x933 = 88U;
	uint64_t x934 = 1631400LLU;
	uint64_t x935 = UINT64_MAX;
	uint8_t x936 = 5U;
	volatile uint64_t t11 = 476876LLU;

	t11 = ((x933-(x934&x935))>>x936);

	if (t11 != 576460752303372509LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x949 = 2498806LLU;
	uint8_t x951 = 2U;
	uint8_t x952 = 3U;

	t12 = ((x949-(x950&x951))>>x952);

	if (t12 != 312350LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x969 = -1LL;
	int64_t x970 = INT64_MIN;
	uint64_t x972 = 7LLU;
	volatile int64_t t13 = 8368788557204LL;

	t13 = ((x969-(x970&x971))>>x972);

	if (t13 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x985 = 4004;
	uint64_t x986 = UINT64_MAX;
	static int16_t x987 = 137;
	static volatile uint16_t x988 = 18U;
	uint64_t t14 = 564107538325753LLU;

	t14 = ((x985-(x986&x987))>>x988);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1001 = 4LLU;
	static volatile int64_t x1002 = 4177649459429LL;
	uint8_t x1004 = 36U;
	static uint64_t t15 = 405247LLU;

	t15 = ((x1001-(x1002&x1003))>>x1004);

	if (t15 != 268435455LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1005 = 21507786U;
	uint32_t x1006 = 3609U;
	int8_t x1007 = -1;
	volatile uint8_t x1008 = 10U;

	t16 = ((x1005-(x1006&x1007))>>x1008);

	if (t16 != 21000U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1009 = 939U;
	uint32_t x1011 = UINT32_MAX;

	t17 = ((x1009-(x1010&x1011))>>x1012);

	if (t17 != 9223372034707292630LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1085 = 474LLU;
	static int64_t x1086 = -1LL;
	int16_t x1087 = -10;
	static volatile int8_t x1088 = 1;
	volatile uint64_t t18 = 25898LLU;

	t18 = ((x1085-(x1086&x1087))>>x1088);

	if (t18 != 242LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x1101 = 83U;
	volatile int64_t x1102 = INT64_MIN;
	volatile int8_t x1103 = 0;
	int8_t x1104 = 0;
	static volatile int64_t t19 = 223116LL;

	t19 = ((x1101-(x1102&x1103))>>x1104);

	if (t19 != 83LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1117 = -1;
	static volatile int8_t x1118 = INT8_MIN;
	int32_t x1119 = -1;
	static uint16_t x1120 = 7U;
	volatile int32_t t20 = -1;

	t20 = ((x1117-(x1118&x1119))>>x1120);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1129 = -1LL;
	volatile int8_t x1130 = 11;
	uint64_t x1131 = UINT64_MAX;
	int8_t x1132 = 2;
	volatile uint64_t t21 = 118955365482039LLU;

	t21 = ((x1129-(x1130&x1131))>>x1132);

	if (t21 != 4611686018427387901LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1145 = INT16_MAX;
	uint8_t x1148 = 4U;
	int32_t t22 = 261739089;

	t22 = ((x1145-(x1146&x1147))>>x1148);

	if (t22 != 2064) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1189 = UINT64_MAX;
	static volatile uint32_t x1190 = UINT32_MAX;
	int32_t x1191 = INT32_MIN;
	uint64_t t23 = 3553100426117794587LLU;

	t23 = ((x1189-(x1190&x1191))>>x1192);

	if (t23 != 72057594029539327LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1209 = 1839620317454831336LL;
	int64_t x1210 = -831LL;
	int8_t x1211 = INT8_MIN;
	uint64_t x1212 = 2LLU;

	t24 = ((x1209-(x1210&x1211))>>x1212);

	if (t24 != 459905079363708058LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1325 = 3U;
	int8_t x1326 = INT8_MAX;
	int16_t x1327 = INT16_MIN;
	int16_t x1328 = 4;
	int32_t t25 = -155;

	t25 = ((x1325-(x1326&x1327))>>x1328);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x1393 = 142195700U;
	static int64_t x1394 = 584109LL;
	static uint8_t x1395 = UINT8_MAX;
	static volatile int64_t t26 = -331409467690612478LL;

	t26 = ((x1393-(x1394&x1395))>>x1396);

	if (t26 != 71097763LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1454 = INT32_MIN;
	int64_t x1455 = INT64_MIN;
	uint32_t x1456 = 41U;
	static volatile int64_t t27 = 29237838LL;

	t27 = ((x1453-(x1454&x1455))>>x1456);

	if (t27 != 4194303LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1457 = 309;
	int64_t x1458 = INT64_MIN;
	uint64_t x1459 = UINT64_MAX;
	uint16_t x1460 = 6U;

	t28 = ((x1457-(x1458&x1459))>>x1460);

	if (t28 != 144115188075855876LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1505 = -1;
	int64_t x1506 = INT64_MIN;
	int64_t x1507 = INT64_MIN;
	int16_t x1508 = 7;
	static volatile int64_t t29 = -1LL;

	t29 = ((x1505-(x1506&x1507))>>x1508);

	if (t29 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1561 = 59U;
	uint16_t x1562 = 4288U;
	uint32_t x1563 = UINT32_MAX;
	uint8_t x1564 = 0U;
	static volatile uint32_t t30 = 283662U;

	t30 = ((x1561-(x1562&x1563))>>x1564);

	if (t30 != 4294963067U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1582 = -1;
	int8_t x1583 = INT8_MIN;
	int16_t x1584 = 5;
	volatile int32_t t31 = 1599;

	t31 = ((x1581-(x1582&x1583))>>x1584);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1597 = 21269U;
	uint16_t x1599 = 100U;
	uint8_t x1600 = 1U;
	int32_t t32 = -16;

	t32 = ((x1597-(x1598&x1599))>>x1600);

	if (t32 != 10584) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1649 = 153960894U;
	int64_t x1651 = -1LL;
	uint8_t x1652 = 10U;
	static int64_t t33 = 1205483421LL;

	t33 = ((x1649-(x1650&x1651))>>x1652);

	if (t33 != 150352LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1666 = 2107793820059LL;
	uint16_t x1667 = 69U;
	static uint64_t x1668 = 4LLU;
	static uint64_t t34 = 421313973LLU;

	t34 = ((x1665-(x1666&x1667))>>x1668);

	if (t34 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x1685 = 1U;
	uint32_t x1686 = 7U;
	uint8_t x1687 = 1U;
	uint8_t x1688 = 6U;
	uint32_t t35 = 19904665U;

	t35 = ((x1685-(x1686&x1687))>>x1688);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1737 = 1490552538940LLU;
	int8_t x1739 = 16;
	int16_t x1740 = 2;

	t36 = ((x1737-(x1738&x1739))>>x1740);

	if (t36 != 372638134731LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1813 = UINT64_MAX;
	int16_t x1814 = -536;
	uint8_t x1816 = 2U;
	volatile uint64_t t37 = 11LLU;

	t37 = ((x1813-(x1814&x1815))>>x1816);

	if (t37 != 4611686018427371653LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1829 = 87396LLU;
	volatile int8_t x1830 = -1;
	int32_t x1831 = INT32_MAX;
	uint8_t x1832 = 45U;
	volatile uint64_t t38 = 10258450283365661LLU;

	t38 = ((x1829-(x1830&x1831))>>x1832);

	if (t38 != 524287LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1993 = 1114937512U;
	uint64_t x1994 = 280296732565LLU;
	volatile uint64_t t39 = 27219700LLU;

	t39 = ((x1993-(x1994&x1995))>>x1996);

	if (t39 != 4503599559210878LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x2053 = UINT32_MAX;
	int16_t x2054 = INT16_MAX;
	static int64_t x2055 = INT64_MIN;
	int64_t t40 = 37485LL;

	t40 = ((x2053-(x2054&x2055))>>x2056);

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x2077 = -1;
	int64_t x2078 = INT64_MIN;
	uint64_t x2079 = 78347860212786LLU;
	int8_t x2080 = 17;
	static volatile uint64_t t41 = 376LLU;

	t41 = ((x2077-(x2078&x2079))>>x2080);

	if (t41 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2125 = INT16_MIN;
	int64_t x2126 = INT64_MIN;
	int16_t x2127 = INT16_MIN;
	volatile int8_t x2128 = 0;
	static volatile int64_t t42 = -7LL;

	t42 = ((x2125-(x2126&x2127))>>x2128);

	if (t42 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2133 = -1;
	int8_t x2134 = -17;
	uint32_t x2135 = 2U;
	static int64_t x2136 = 26LL;
	volatile uint32_t t43 = 454U;

	t43 = ((x2133-(x2134&x2135))>>x2136);

	if (t43 != 63U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x2137 = 3923U;
	uint32_t x2138 = UINT32_MAX;
	int8_t x2139 = INT8_MIN;

	t44 = ((x2137-(x2138&x2139))>>x2140);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x2153 = -8;
	static uint16_t x2156 = 30U;
	static uint32_t t45 = 0U;

	t45 = ((x2153-(x2154&x2155))>>x2156);

	if (t45 != 3U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2207 = -1;
	static uint32_t x2208 = 10U;

	t46 = ((x2205-(x2206&x2207))>>x2208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2217 = 0U;
	int32_t x2219 = INT32_MIN;
	volatile uint16_t x2220 = 1U;
	static volatile int32_t t47 = 112700;

	t47 = ((x2217-(x2218&x2219))>>x2220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x2289 = 0;
	uint16_t x2290 = 1U;
	uint32_t x2291 = 627748393U;
	int16_t x2292 = 30;

	t48 = ((x2289-(x2290&x2291))>>x2292);

	if (t48 != 3U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2313 = -1;
	uint32_t x2314 = 1226451358U;
	static uint64_t x2315 = 121LLU;
	static uint8_t x2316 = 5U;
	volatile uint64_t t49 = 894323065LLU;

	t49 = ((x2313-(x2314&x2315))>>x2316);

	if (t49 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2405 = 5155745;
	int8_t x2406 = INT8_MAX;
	static uint16_t x2407 = 0U;
	int16_t x2408 = 1;
	volatile int32_t t50 = 543;

	t50 = ((x2405-(x2406&x2407))>>x2408);

	if (t50 != 2577872) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2410 = INT32_MIN;
	int32_t x2411 = INT32_MIN;
	int8_t x2412 = 0;
	uint32_t t51 = 105U;

	t51 = ((x2409-(x2410&x2411))>>x2412);

	if (t51 != 4234485434U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2457 = INT8_MAX;
	static volatile int16_t x2458 = 1;
	int64_t x2459 = -196745301087633LL;
	uint8_t x2460 = 0U;
	int64_t t52 = -123361396277525LL;

	t52 = ((x2457-(x2458&x2459))>>x2460);

	if (t52 != 126LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2521 = INT32_MAX;
	int64_t x2522 = 10062LL;
	uint32_t x2523 = UINT32_MAX;
	int64_t t53 = -1881166550498LL;

	t53 = ((x2521-(x2522&x2523))>>x2524);

	if (t53 != 2147473585LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x2549 = INT32_MAX;
	int32_t x2550 = INT32_MAX;
	static uint64_t x2551 = 57664LLU;
	static volatile int8_t x2552 = 3;
	volatile uint64_t t54 = 214983736715LLU;

	t54 = ((x2549-(x2550&x2551))>>x2552);

	if (t54 != 268428247LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2585 = -454124;
	int32_t x2586 = INT32_MIN;
	uint32_t x2587 = 901282596U;
	uint32_t t55 = 12459U;

	t55 = ((x2585-(x2586&x2587))>>x2588);

	if (t55 != 4294513172U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2621 = 16U;
	uint64_t x2622 = UINT64_MAX;
	int8_t x2623 = INT8_MIN;
	volatile uint64_t t56 = 2351990LLU;

	t56 = ((x2621-(x2622&x2623))>>x2624);

	if (t56 != 144LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2637 = 30U;
	volatile int32_t x2638 = INT32_MIN;
	int16_t x2639 = INT16_MAX;
	uint8_t x2640 = 0U;

	t57 = ((x2637-(x2638&x2639))>>x2640);

	if (t57 != 30) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x2649 = 154U;
	uint8_t x2651 = 43U;
	int16_t x2652 = 5;

	t58 = ((x2649-(x2650&x2651))>>x2652);

	if (t58 != 4U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2653 = 54U;
	int16_t x2654 = INT16_MIN;
	int64_t x2655 = -10409213106658LL;
	int8_t x2656 = 0;
	volatile int64_t t59 = -28939LL;

	t59 = ((x2653-(x2654&x2655))>>x2656);

	if (t59 != 10409213132854LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2669 = 15754567121551LL;
	volatile int32_t x2670 = INT32_MAX;
	volatile uint64_t x2671 = 65879636692706LLU;

	t60 = ((x2669-(x2670&x2671))>>x2672);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2685 = UINT64_MAX;
	volatile int64_t x2686 = -2241499083285567LL;
	static uint8_t x2687 = 49U;
	uint8_t x2688 = 41U;

	t61 = ((x2685-(x2686&x2687))>>x2688);

	if (t61 != 8388607LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2698 = -1;
	volatile int32_t x2699 = -1;
	uint16_t x2700 = 5U;
	volatile int64_t t62 = -33061717830041423LL;

	t62 = ((x2697-(x2698&x2699))>>x2700);

	if (t62 != 247LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x2709 = UINT16_MAX;
	static int16_t x2710 = 110;
	uint8_t x2711 = 16U;
	uint8_t x2712 = 19U;
	volatile int32_t t63 = 126;

	t63 = ((x2709-(x2710&x2711))>>x2712);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2749 = INT8_MAX;
	uint8_t x2750 = 1U;
	volatile uint16_t x2751 = 32U;
	int32_t x2752 = 3;
	static volatile int32_t t64 = 5219879;

	t64 = ((x2749-(x2750&x2751))>>x2752);

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2765 = 125U;
	int64_t x2766 = -783331149452LL;
	int64_t t65 = -59688541LL;

	t65 = ((x2765-(x2766&x2767))>>x2768);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2813 = 2471;
	uint32_t x2814 = 51363U;
	uint32_t x2816 = 0U;
	static volatile uint32_t t66 = 2262349U;

	t66 = ((x2813-(x2814&x2815))>>x2816);

	if (t66 != 4294918404U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2853 = INT16_MIN;
	int8_t x2855 = -1;
	uint16_t x2856 = 28U;
	volatile uint32_t t67 = 459U;

	t67 = ((x2853-(x2854&x2855))>>x2856);

	if (t67 != 15U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2873 = 3;
	int64_t x2874 = -8559937930LL;
	int8_t x2875 = -12;
	int8_t x2876 = 50;
	static volatile int64_t t68 = 1527546529028LL;

	t68 = ((x2873-(x2874&x2875))>>x2876);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2877 = UINT16_MAX;
	uint32_t x2878 = 120463U;
	int32_t x2879 = -1;
	volatile uint32_t t69 = 1701062U;

	t69 = ((x2877-(x2878&x2879))>>x2880);

	if (t69 != 4294912368U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2898 = INT32_MIN;
	int8_t x2899 = INT8_MAX;
	int32_t t70 = -119906111;

	t70 = ((x2897-(x2898&x2899))>>x2900);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2933 = INT32_MIN;
	volatile uint16_t x2934 = 2186U;
	uint64_t x2935 = UINT64_MAX;
	int8_t x2936 = 12;
	volatile uint64_t t71 = 24LLU;

	t71 = ((x2933-(x2934&x2935))>>x2936);

	if (t71 != 4503599626846207LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2969 = UINT64_MAX;
	volatile uint64_t x2970 = UINT64_MAX;
	static uint64_t x2971 = 85275397567LLU;
	static uint64_t x2972 = 1LLU;
	uint64_t t72 = 93676034941715LLU;

	t72 = ((x2969-(x2970&x2971))>>x2972);

	if (t72 != 9223371994217077024LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3001 = 4910601693521869LLU;
	uint16_t x3002 = 448U;
	int16_t x3003 = -3;
	int8_t x3004 = 5;
	uint64_t t73 = 21977779746LLU;

	t73 = ((x3001-(x3002&x3003))>>x3004);

	if (t73 != 153456302922544LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3005 = INT64_MAX;
	static uint8_t x3006 = 46U;
	volatile int64_t t74 = INT64_MAX;

	t74 = ((x3005-(x3006&x3007))>>x3008);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3129 = 3386U;
	static int16_t x3130 = INT16_MAX;
	uint8_t x3131 = UINT8_MAX;
	volatile int32_t t75 = 687087;

	t75 = ((x3129-(x3130&x3131))>>x3132);

	if (t75 != 3131) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3137 = INT16_MIN;
	uint32_t x3138 = UINT32_MAX;
	int32_t x3139 = INT32_MIN;
	static int8_t x3140 = 20;
	uint32_t t76 = 19010871U;

	t76 = ((x3137-(x3138&x3139))>>x3140);

	if (t76 != 2047U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3149 = UINT64_MAX;
	volatile int32_t x3151 = INT32_MIN;
	uint8_t x3152 = 62U;
	volatile uint64_t t77 = 59397165LLU;

	t77 = ((x3149-(x3150&x3151))>>x3152);

	if (t77 != 3LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x3294 = -1LL;
	uint64_t x3295 = 21187LLU;
	uint64_t t78 = 8441142741469970673LLU;

	t78 = ((x3293-(x3294&x3295))>>x3296);

	if (t78 != 9007199254740981LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3313 = INT16_MAX;
	static int64_t x3314 = INT64_MIN;
	uint16_t x3315 = 22564U;
	int8_t x3316 = 3;

	t79 = ((x3313-(x3314&x3315))>>x3316);

	if (t79 != 4095LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3382 = INT16_MIN;
	static int8_t x3383 = INT8_MIN;
	int8_t x3384 = 1;
	int32_t t80 = -301;

	t80 = ((x3381-(x3382&x3383))>>x3384);

	if (t80 != 49151) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3401 = INT16_MAX;
	static int32_t x3402 = -1;
	static uint64_t x3403 = 1837LLU;
	int32_t x3404 = 2;
	volatile uint64_t t81 = 867878399240LLU;

	t81 = ((x3401-(x3402&x3403))>>x3404);

	if (t81 != 7732LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3422 = 27948925U;
	int32_t x3423 = -1;
	int32_t x3424 = 1;
	static volatile uint32_t t82 = 8U;

	t82 = ((x3421-(x3422&x3423))>>x3424);

	if (t82 != 2133509185U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x3453 = INT32_MIN;
	uint32_t x3454 = UINT32_MAX;
	uint32_t x3456 = 5U;
	uint32_t t83 = 1797760U;

	t83 = ((x3453-(x3454&x3455))>>x3456);

	if (t83 != 67108863U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3665 = 27441143LLU;
	volatile uint16_t x3666 = 1183U;
	uint32_t x3668 = 1U;
	volatile uint64_t t84 = 26531545195873206LLU;

	t84 = ((x3665-(x3666&x3667))>>x3668);

	if (t84 != 13720556LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3726 = -1;
	uint32_t x3727 = UINT32_MAX;

	t85 = ((x3725-(x3726&x3727))>>x3728);

	if (t85 != 1152921504393724319LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3741 = -1;
	int64_t x3742 = INT64_MAX;
	volatile uint64_t x3743 = 264265LLU;
	static int32_t x3744 = 2;
	uint64_t t86 = 643144344091LLU;

	t86 = ((x3741-(x3742&x3743))>>x3744);

	if (t86 != 4611686018427321837LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x3753 = INT8_MIN;
	static uint32_t x3754 = 791U;
	uint64_t x3755 = 562LLU;
	volatile int16_t x3756 = 3;

	t87 = ((x3753-(x3754&x3755))>>x3756);

	if (t87 != 2305843009213693869LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3829 = 9U;
	int64_t x3830 = -1LL;
	int32_t x3831 = INT32_MIN;
	static uint8_t x3832 = 5U;
	int64_t t88 = 4189LL;

	t88 = ((x3829-(x3830&x3831))>>x3832);

	if (t88 != 67108864LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x3973 = -828965012029674LL;
	int16_t x3975 = INT16_MIN;
	volatile uint32_t x3976 = 24U;

	t89 = ((x3973-(x3974&x3975))>>x3976);

	if (t89 != 1099462217610LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x3985 = 58868979U;
	uint16_t x3986 = 3U;
	static volatile uint8_t x3987 = 3U;
	volatile int8_t x3988 = 0;

	t90 = ((x3985-(x3986&x3987))>>x3988);

	if (t90 != 58868976U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x4053 = 1U;
	volatile int8_t x4055 = INT8_MAX;
	int8_t x4056 = 3;
	uint32_t t91 = 6U;

	t91 = ((x4053-(x4054&x4055))>>x4056);

	if (t91 != 536870909U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x4137 = 74U;
	int64_t x4138 = INT64_MIN;
	static uint8_t x4139 = 0U;
	static uint64_t x4140 = 6LLU;
	int64_t t92 = 1997240859902855715LL;

	t92 = ((x4137-(x4138&x4139))>>x4140);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4141 = UINT32_MAX;
	uint64_t x4143 = 804293722244LLU;
	uint8_t x4144 = 38U;
	volatile uint64_t t93 = 140262961145659375LLU;

	t93 = ((x4141-(x4142&x4143))>>x4144);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4187 = INT64_MAX;
	uint8_t x4188 = 0U;
	volatile int64_t t94 = 198157236839018232LL;

	t94 = ((x4185-(x4186&x4187))>>x4188);

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4218 = UINT16_MAX;
	int32_t x4219 = INT32_MAX;
	uint8_t x4220 = 2U;

	t95 = ((x4217-(x4218&x4219))>>x4220);

	if (t95 != 2305843009213677568LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x4257 = INT16_MIN;
	int64_t x4258 = -294331LL;
	int16_t x4259 = -1;
	volatile int64_t t96 = 14657672LL;

	t96 = ((x4257-(x4258&x4259))>>x4260);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4311 = 108263384525LLU;
	uint64_t t97 = 5138028305LLU;

	t97 = ((x4309-(x4310&x4311))>>x4312);

	if (t97 != 2097151LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x4361 = 5;
	static int16_t x4362 = INT16_MIN;
	static volatile int32_t t98 = 89268356;

	t98 = ((x4361-(x4362&x4363))>>x4364);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4429 = 6;
	volatile int32_t x4430 = INT32_MAX;
	static int64_t x4431 = INT64_MIN;
	int8_t x4432 = 1;
	volatile int64_t t99 = 486712555143LL;

	t99 = ((x4429-(x4430&x4431))>>x4432);

	if (t99 != 3LL) { NG(); } else { ; }
	
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

