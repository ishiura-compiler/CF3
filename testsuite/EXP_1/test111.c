#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x11 = INT16_MAX;
static int32_t x14 = INT32_MIN;
uint16_t x19 = 152U;
uint16_t x20 = 0U;
volatile uint64_t x87 = 8445900509922435743LLU;
volatile int16_t x151 = -1;
volatile int32_t t4 = -625606329;
uint16_t x231 = UINT16_MAX;
int32_t t5 = 201022;
static int32_t t8 = 992944040;
int64_t x510 = 3641LL;
volatile uint8_t x520 = 15U;
int64_t x521 = INT64_MIN;
int16_t x599 = 12457;
static int32_t t14 = -22;
uint8_t x612 = 6U;
static volatile int32_t t17 = -648;
int8_t x877 = -1;
int32_t t18 = 632338393;
uint32_t x950 = 130977873U;
static uint16_t x985 = 292U;
int8_t x998 = INT8_MIN;
uint8_t x1000 = 9U;
static int64_t x1014 = 2250547LL;
int32_t t23 = -22050529;
int16_t x1023 = INT16_MIN;
int8_t x1085 = INT8_MAX;
int16_t x1122 = INT16_MIN;
uint8_t x1124 = 3U;
volatile uint8_t x1129 = UINT8_MAX;
uint64_t x1131 = 426682LLU;
int8_t x1132 = 2;
uint16_t x1246 = 50U;
uint8_t x1248 = 6U;
uint8_t x1353 = 82U;
int32_t t31 = -8112;
uint8_t x1528 = 21U;
static volatile int32_t t34 = 48;
volatile int32_t t36 = 490701;
int32_t x1582 = INT32_MAX;
int32_t x1640 = 7;
int32_t t38 = 4;
static uint16_t x1645 = 11662U;
volatile uint16_t x1701 = UINT16_MAX;
int32_t x1703 = INT32_MIN;
uint64_t x1732 = 3LLU;
volatile int32_t t43 = -3;
volatile int8_t x1737 = 6;
int16_t x1740 = 12;
static uint32_t x1972 = 3U;
uint16_t x2074 = 6711U;
volatile int16_t x2126 = INT16_MIN;
volatile int32_t t51 = -128852;
uint8_t x2184 = 3U;
int16_t x2262 = -1;
int32_t x2263 = INT32_MIN;
int64_t x2317 = -1LL;
static int8_t x2320 = 13;
static int8_t x2362 = INT8_MIN;
uint32_t x2363 = 10199355U;
uint8_t x2379 = 121U;
int32_t x2380 = 14;
int8_t x2509 = INT8_MIN;
uint8_t x2549 = 0U;
static int8_t x2552 = 20;
uint32_t x2582 = 3U;
static uint32_t x2595 = 772711U;
static int8_t x2648 = 0;
int32_t t64 = 230820;
uint32_t x2658 = 13049U;
uint16_t x2704 = 0U;
volatile uint16_t x2796 = 7U;
int8_t x2852 = 1;
int32_t t73 = 362;
static volatile uint8_t x2960 = 0U;
int32_t t74 = 3375576;
int8_t x2969 = INT8_MIN;
volatile int64_t x2971 = -1263823LL;
volatile uint16_t x2974 = UINT16_MAX;
static int32_t t76 = 8716;
static uint8_t x3105 = 103U;
uint64_t x3107 = 122105979LLU;
int16_t x3108 = 1;
volatile int32_t t78 = -116456695;
volatile int32_t t79 = -1;
int16_t x3189 = 0;
static volatile int64_t x3190 = INT64_MAX;
volatile int32_t t81 = -14279820;
volatile int32_t t82 = 1415;
int32_t t83 = 891;
uint8_t x3289 = 11U;
int8_t x3319 = INT8_MIN;
static uint8_t x3378 = 26U;
int8_t x3379 = INT8_MIN;
volatile uint64_t x3468 = 1LLU;
int8_t x3469 = INT8_MAX;
int32_t x3485 = INT32_MIN;
static int8_t x3486 = INT8_MAX;
volatile int32_t t90 = 912839316;
int16_t x3593 = INT16_MAX;
int32_t t91 = -990974208;
int16_t x3713 = INT16_MIN;
uint16_t x3714 = UINT16_MAX;
int32_t x3720 = 4;
volatile int32_t t94 = 491;
volatile int32_t x3783 = -3598051;
static int64_t x3809 = -1LL;
static uint8_t x3812 = 26U;
int8_t x3834 = -1;
int8_t x3836 = 3;
int8_t x3838 = 56;
int32_t t99 = -1;


void f0(void) {
	volatile int64_t x9 = INT64_MAX;
	volatile int16_t x10 = INT16_MIN;
	int32_t x12 = 9;
	int32_t t0 = -784;

	t0 = (((x9+x10)<x11)>>x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x13 = INT8_MAX;
	int8_t x15 = -14;
	int8_t x16 = 0;
	int32_t t1 = 20427;

	t1 = (((x13+x14)<x15)>>x16);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = 39;
	uint16_t x18 = 17U;
	int32_t t2 = -1362282;

	t2 = (((x17+x18)<x19)>>x20);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x85 = 0U;
	int16_t x86 = -6;
	volatile int8_t x88 = 1;
	int32_t t3 = -378165849;

	t3 = (((x85+x86)<x87)>>x88);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x149 = 19;
	int16_t x150 = INT16_MAX;
	volatile int32_t x152 = 2;

	t4 = (((x149+x150)<x151)>>x152);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x229 = UINT16_MAX;
	uint32_t x230 = 7295828U;
	uint16_t x232 = 3U;

	t5 = (((x229+x230)<x231)>>x232);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x241 = 2276897LLU;
	int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	int8_t x244 = 16;
	int32_t t6 = -23;

	t6 = (((x241+x242)<x243)>>x244);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x433 = 7U;
	uint32_t x434 = 0U;
	static int32_t x435 = INT32_MAX;
	volatile int64_t x436 = 7LL;
	int32_t t7 = -661032497;

	t7 = (((x433+x434)<x435)>>x436);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x437 = -1;
	uint32_t x438 = 1959593U;
	int32_t x439 = -2928819;
	static uint8_t x440 = 31U;

	t8 = (((x437+x438)<x439)>>x440);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x477 = -3257404209LL;
	int16_t x478 = INT16_MIN;
	int16_t x479 = INT16_MIN;
	volatile uint32_t x480 = 3U;
	int32_t t9 = -207;

	t9 = (((x477+x478)<x479)>>x480);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x509 = 2U;
	volatile int64_t x511 = INT64_MAX;
	int8_t x512 = 0;
	volatile int32_t t10 = -121105224;

	t10 = (((x509+x510)<x511)>>x512);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x517 = INT16_MIN;
	int16_t x518 = -1;
	uint16_t x519 = 55U;
	static volatile int32_t t11 = -27705;

	t11 = (((x517+x518)<x519)>>x520);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x522 = 215U;
	static int16_t x523 = INT16_MIN;
	volatile uint8_t x524 = 19U;
	static volatile int32_t t12 = 1;

	t12 = (((x521+x522)<x523)>>x524);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x553 = INT16_MIN;
	int16_t x554 = -1;
	uint16_t x555 = 21469U;
	uint64_t x556 = 26LLU;
	volatile int32_t t13 = -134876263;

	t13 = (((x553+x554)<x555)>>x556);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x597 = -1;
	int32_t x598 = INT32_MAX;
	static int8_t x600 = 1;

	t14 = (((x597+x598)<x599)>>x600);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x609 = -1LL;
	uint16_t x610 = UINT16_MAX;
	uint32_t x611 = 1374272U;
	volatile int32_t t15 = -6001;

	t15 = (((x609+x610)<x611)>>x612);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x653 = INT8_MIN;
	volatile int16_t x654 = -12;
	int32_t x655 = INT32_MIN;
	uint16_t x656 = 10U;
	volatile int32_t t16 = -188734692;

	t16 = (((x653+x654)<x655)>>x656);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x693 = 79U;
	uint32_t x694 = 10375U;
	int16_t x695 = 1;
	int8_t x696 = 1;

	t17 = (((x693+x694)<x695)>>x696);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x878 = -1;
	static uint64_t x879 = 1194989LLU;
	static uint8_t x880 = 9U;

	t18 = (((x877+x878)<x879)>>x880);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x949 = INT16_MAX;
	int16_t x951 = INT16_MAX;
	uint32_t x952 = 2U;
	int32_t t19 = -226;

	t19 = (((x949+x950)<x951)>>x952);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x981 = INT32_MIN;
	int16_t x982 = 6072;
	volatile int32_t x983 = 34414405;
	int8_t x984 = 1;
	volatile int32_t t20 = -45;

	t20 = (((x981+x982)<x983)>>x984);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x986 = INT16_MIN;
	static volatile int8_t x987 = INT8_MIN;
	static int64_t x988 = 1LL;
	static volatile int32_t t21 = -549784851;

	t21 = (((x985+x986)<x987)>>x988);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x997 = 6300LLU;
	int64_t x999 = 803156349LL;
	volatile int32_t t22 = -43990557;

	t22 = (((x997+x998)<x999)>>x1000);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1013 = -13835614;
	int16_t x1015 = INT16_MIN;
	static volatile uint16_t x1016 = 1U;

	t23 = (((x1013+x1014)<x1015)>>x1016);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1021 = UINT8_MAX;
	static int32_t x1022 = INT32_MIN;
	static volatile int8_t x1024 = 23;
	volatile int32_t t24 = 732;

	t24 = (((x1021+x1022)<x1023)>>x1024);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1086 = INT16_MIN;
	volatile int8_t x1087 = -1;
	uint16_t x1088 = 8U;
	volatile int32_t t25 = -93263;

	t25 = (((x1085+x1086)<x1087)>>x1088);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1121 = 13854462;
	volatile int64_t x1123 = INT64_MIN;
	static int32_t t26 = -811493661;

	t26 = (((x1121+x1122)<x1123)>>x1124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1130 = 2U;
	int32_t t27 = -44203;

	t27 = (((x1129+x1130)<x1131)>>x1132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1201 = 5529004208LLU;
	volatile int32_t x1202 = -38405;
	int8_t x1203 = -1;
	int8_t x1204 = 4;
	volatile int32_t t28 = 43;

	t28 = (((x1201+x1202)<x1203)>>x1204);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1245 = -1LL;
	volatile uint16_t x1247 = UINT16_MAX;
	int32_t t29 = -117008853;

	t29 = (((x1245+x1246)<x1247)>>x1248);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1277 = -1;
	uint32_t x1278 = 11487U;
	static int16_t x1279 = -77;
	int8_t x1280 = 12;
	int32_t t30 = -12848;

	t30 = (((x1277+x1278)<x1279)>>x1280);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1354 = -1;
	int8_t x1355 = 1;
	int8_t x1356 = 0;

	t31 = (((x1353+x1354)<x1355)>>x1356);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1393 = -314044214LL;
	int8_t x1394 = 1;
	int64_t x1395 = INT64_MIN;
	uint8_t x1396 = 2U;
	static volatile int32_t t32 = 27390612;

	t32 = (((x1393+x1394)<x1395)>>x1396);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1397 = -1;
	static int16_t x1398 = -1;
	static uint32_t x1399 = UINT32_MAX;
	uint16_t x1400 = 0U;
	int32_t t33 = 78;

	t33 = (((x1397+x1398)<x1399)>>x1400);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1525 = 51U;
	uint64_t x1526 = 35756LLU;
	uint8_t x1527 = 1U;

	t34 = (((x1525+x1526)<x1527)>>x1528);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1573 = UINT8_MAX;
	int32_t x1574 = 558;
	int16_t x1575 = INT16_MAX;
	uint8_t x1576 = 2U;
	int32_t t35 = -16895777;

	t35 = (((x1573+x1574)<x1575)>>x1576);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1577 = 61U;
	uint8_t x1578 = 2U;
	volatile int16_t x1579 = INT16_MAX;
	static volatile uint16_t x1580 = 1U;

	t36 = (((x1577+x1578)<x1579)>>x1580);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1581 = INT64_MIN;
	int8_t x1583 = -3;
	int8_t x1584 = 16;
	volatile int32_t t37 = 9156012;

	t37 = (((x1581+x1582)<x1583)>>x1584);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1637 = INT64_MIN;
	int64_t x1638 = 111LL;
	int32_t x1639 = -1;

	t38 = (((x1637+x1638)<x1639)>>x1640);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1646 = INT32_MIN;
	uint64_t x1647 = UINT64_MAX;
	uint16_t x1648 = 0U;
	static volatile int32_t t39 = -88;

	t39 = (((x1645+x1646)<x1647)>>x1648);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1649 = INT8_MAX;
	int16_t x1650 = INT16_MIN;
	int32_t x1651 = -1;
	int8_t x1652 = 31;
	int32_t t40 = -41338920;

	t40 = (((x1649+x1650)<x1651)>>x1652);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1665 = -1;
	int8_t x1666 = -1;
	int16_t x1667 = -1;
	uint8_t x1668 = 8U;
	int32_t t41 = -227825;

	t41 = (((x1665+x1666)<x1667)>>x1668);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1702 = INT64_MIN;
	static uint64_t x1704 = 6LLU;
	volatile int32_t t42 = 180252;

	t42 = (((x1701+x1702)<x1703)>>x1704);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x1729 = UINT32_MAX;
	volatile int8_t x1730 = INT8_MIN;
	int32_t x1731 = -3486;

	t43 = (((x1729+x1730)<x1731)>>x1732);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1738 = -731202779;
	static int32_t x1739 = INT32_MAX;
	int32_t t44 = 0;

	t44 = (((x1737+x1738)<x1739)>>x1740);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1957 = INT64_MIN;
	uint32_t x1958 = 2165369U;
	volatile uint64_t x1959 = 77452104LLU;
	static int8_t x1960 = 7;
	volatile int32_t t45 = -1;

	t45 = (((x1957+x1958)<x1959)>>x1960);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1969 = UINT8_MAX;
	volatile uint16_t x1970 = 1447U;
	int32_t x1971 = INT32_MIN;
	volatile int32_t t46 = -128167612;

	t46 = (((x1969+x1970)<x1971)>>x1972);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2073 = 7;
	int32_t x2075 = INT32_MAX;
	int8_t x2076 = 15;
	static int32_t t47 = 854709;

	t47 = (((x2073+x2074)<x2075)>>x2076);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2077 = UINT32_MAX;
	volatile int32_t x2078 = -1;
	volatile int8_t x2079 = 1;
	uint32_t x2080 = 10U;
	int32_t t48 = 378;

	t48 = (((x2077+x2078)<x2079)>>x2080);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2097 = 11U;
	int32_t x2098 = INT32_MIN;
	static volatile int32_t x2099 = 2365;
	uint8_t x2100 = 10U;
	volatile int32_t t49 = 58581692;

	t49 = (((x2097+x2098)<x2099)>>x2100);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2125 = -25LL;
	int64_t x2127 = -1LL;
	uint64_t x2128 = 23LLU;
	int32_t t50 = -8193069;

	t50 = (((x2125+x2126)<x2127)>>x2128);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2173 = UINT32_MAX;
	int16_t x2174 = -1;
	volatile int64_t x2175 = INT64_MAX;
	uint32_t x2176 = 24U;

	t51 = (((x2173+x2174)<x2175)>>x2176);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x2181 = 4LL;
	int64_t x2182 = -1LL;
	volatile int32_t x2183 = -1;
	int32_t t52 = -3;

	t52 = (((x2181+x2182)<x2183)>>x2184);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2201 = 115862U;
	uint16_t x2202 = 39U;
	volatile uint32_t x2203 = 3U;
	int8_t x2204 = 1;
	volatile int32_t t53 = 11386;

	t53 = (((x2201+x2202)<x2203)>>x2204);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2261 = 3U;
	static int16_t x2264 = 1;
	int32_t t54 = 332;

	t54 = (((x2261+x2262)<x2263)>>x2264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x2318 = 14U;
	uint8_t x2319 = UINT8_MAX;
	volatile int32_t t55 = 21846534;

	t55 = (((x2317+x2318)<x2319)>>x2320);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2349 = UINT64_MAX;
	int64_t x2350 = 18LL;
	int8_t x2351 = INT8_MIN;
	uint8_t x2352 = 1U;
	int32_t t56 = 3766703;

	t56 = (((x2349+x2350)<x2351)>>x2352);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x2361 = UINT16_MAX;
	int16_t x2364 = 15;
	volatile int32_t t57 = -1;

	t57 = (((x2361+x2362)<x2363)>>x2364);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2377 = -1;
	int8_t x2378 = INT8_MAX;
	int32_t t58 = 6;

	t58 = (((x2377+x2378)<x2379)>>x2380);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2510 = 25559502LL;
	uint16_t x2511 = 13U;
	uint16_t x2512 = 12U;
	static int32_t t59 = -412300;

	t59 = (((x2509+x2510)<x2511)>>x2512);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x2550 = -32;
	static int8_t x2551 = -1;
	static volatile int32_t t60 = -5;

	t60 = (((x2549+x2550)<x2551)>>x2552);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2581 = INT16_MIN;
	uint32_t x2583 = 478409682U;
	int8_t x2584 = 0;
	volatile int32_t t61 = 52236;

	t61 = (((x2581+x2582)<x2583)>>x2584);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2593 = INT8_MIN;
	uint32_t x2594 = 743U;
	int8_t x2596 = 29;
	volatile int32_t t62 = -2;

	t62 = (((x2593+x2594)<x2595)>>x2596);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2637 = 2995089231LL;
	int64_t x2638 = INT64_MIN;
	static int8_t x2639 = -1;
	uint32_t x2640 = 4U;
	int32_t t63 = 13109;

	t63 = (((x2637+x2638)<x2639)>>x2640);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2645 = INT8_MAX;
	int8_t x2646 = INT8_MAX;
	volatile int8_t x2647 = INT8_MAX;

	t64 = (((x2645+x2646)<x2647)>>x2648);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2657 = 11748LL;
	static volatile int32_t x2659 = INT32_MIN;
	static int8_t x2660 = 4;
	volatile int32_t t65 = -8;

	t65 = (((x2657+x2658)<x2659)>>x2660);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2665 = INT64_MAX;
	int16_t x2666 = INT16_MIN;
	static int32_t x2667 = INT32_MIN;
	uint8_t x2668 = 0U;
	volatile int32_t t66 = 6;

	t66 = (((x2665+x2666)<x2667)>>x2668);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2689 = 837U;
	int16_t x2690 = INT16_MAX;
	uint64_t x2691 = UINT64_MAX;
	int64_t x2692 = 4LL;
	volatile int32_t t67 = 676423618;

	t67 = (((x2689+x2690)<x2691)>>x2692);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x2701 = UINT8_MAX;
	uint16_t x2702 = 0U;
	static uint16_t x2703 = 10536U;
	int32_t t68 = -84752;

	t68 = (((x2701+x2702)<x2703)>>x2704);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x2789 = 39U;
	int64_t x2790 = INT64_MIN;
	int8_t x2791 = -1;
	uint16_t x2792 = 3U;
	volatile int32_t t69 = -78;

	t69 = (((x2789+x2790)<x2791)>>x2792);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2793 = -1;
	volatile uint8_t x2794 = UINT8_MAX;
	uint32_t x2795 = UINT32_MAX;
	volatile int32_t t70 = -188;

	t70 = (((x2793+x2794)<x2795)>>x2796);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2849 = INT8_MAX;
	int64_t x2850 = -1LL;
	static volatile uint8_t x2851 = 3U;
	static volatile int32_t t71 = 24492;

	t71 = (((x2849+x2850)<x2851)>>x2852);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2885 = 28;
	static int32_t x2886 = 5930;
	int16_t x2887 = -1;
	int16_t x2888 = 1;
	int32_t t72 = -49854;

	t72 = (((x2885+x2886)<x2887)>>x2888);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2893 = INT64_MIN;
	uint16_t x2894 = 15U;
	uint8_t x2895 = 1U;
	volatile int32_t x2896 = 0;

	t73 = (((x2893+x2894)<x2895)>>x2896);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2957 = -41;
	int16_t x2958 = -8;
	static int8_t x2959 = INT8_MIN;

	t74 = (((x2957+x2958)<x2959)>>x2960);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x2970 = 10LLU;
	int32_t x2972 = 0;
	int32_t t75 = 389;

	t75 = (((x2969+x2970)<x2971)>>x2972);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2973 = INT8_MIN;
	static uint8_t x2975 = UINT8_MAX;
	uint16_t x2976 = 24U;

	t76 = (((x2973+x2974)<x2975)>>x2976);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x3106 = UINT8_MAX;
	int32_t t77 = -1060640283;

	t77 = (((x3105+x3106)<x3107)>>x3108);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3113 = 1;
	uint16_t x3114 = 0U;
	int16_t x3115 = 0;
	uint32_t x3116 = 3U;

	t78 = (((x3113+x3114)<x3115)>>x3116);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x3133 = INT8_MIN;
	uint16_t x3134 = 5U;
	uint32_t x3135 = 50829215U;
	static int64_t x3136 = 14LL;

	t79 = (((x3133+x3134)<x3135)>>x3136);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3191 = INT8_MAX;
	int16_t x3192 = 0;
	static int32_t t80 = -260933713;

	t80 = (((x3189+x3190)<x3191)>>x3192);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3193 = INT8_MIN;
	int16_t x3194 = INT16_MAX;
	volatile int32_t x3195 = INT32_MIN;
	uint32_t x3196 = 1U;

	t81 = (((x3193+x3194)<x3195)>>x3196);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3225 = UINT16_MAX;
	int32_t x3226 = -467024755;
	static int32_t x3227 = -25833;
	uint8_t x3228 = 11U;

	t82 = (((x3225+x3226)<x3227)>>x3228);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3249 = 12;
	int32_t x3250 = 1;
	int16_t x3251 = INT16_MAX;
	uint8_t x3252 = 0U;

	t83 = (((x3249+x3250)<x3251)>>x3252);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3290 = 11033;
	int8_t x3291 = INT8_MAX;
	int16_t x3292 = 0;
	volatile int32_t t84 = -350085770;

	t84 = (((x3289+x3290)<x3291)>>x3292);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3317 = INT64_MIN;
	uint16_t x3318 = 3128U;
	uint8_t x3320 = 1U;
	static volatile int32_t t85 = -22783;

	t85 = (((x3317+x3318)<x3319)>>x3320);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x3377 = -1LL;
	uint8_t x3380 = 10U;
	static volatile int32_t t86 = -9;

	t86 = (((x3377+x3378)<x3379)>>x3380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x3465 = 5U;
	uint64_t x3466 = 88330LLU;
	int16_t x3467 = -47;
	int32_t t87 = -56629;

	t87 = (((x3465+x3466)<x3467)>>x3468);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x3470 = 154902383523LLU;
	int64_t x3471 = -1LL;
	uint8_t x3472 = 8U;
	volatile int32_t t88 = -102;

	t88 = (((x3469+x3470)<x3471)>>x3472);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3487 = -2;
	volatile uint8_t x3488 = 6U;
	int32_t t89 = 0;

	t89 = (((x3485+x3486)<x3487)>>x3488);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3589 = INT8_MIN;
	int32_t x3590 = -1;
	int8_t x3591 = INT8_MAX;
	uint8_t x3592 = 5U;

	t90 = (((x3589+x3590)<x3591)>>x3592);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x3594 = 3U;
	volatile uint16_t x3595 = UINT16_MAX;
	uint8_t x3596 = 0U;

	t91 = (((x3593+x3594)<x3595)>>x3596);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3665 = 49638552795849215LL;
	volatile int32_t x3666 = INT32_MIN;
	static uint64_t x3667 = 12022160593LLU;
	int8_t x3668 = 6;
	volatile int32_t t92 = 1;

	t92 = (((x3665+x3666)<x3667)>>x3668);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3715 = -2055511;
	static uint8_t x3716 = 0U;
	int32_t t93 = -7;

	t93 = (((x3713+x3714)<x3715)>>x3716);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x3717 = INT8_MIN;
	int64_t x3718 = 520322519809718LL;
	volatile int16_t x3719 = 0;

	t94 = (((x3717+x3718)<x3719)>>x3720);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3781 = 18U;
	int64_t x3782 = INT64_MIN;
	uint16_t x3784 = 0U;
	int32_t t95 = 1;

	t95 = (((x3781+x3782)<x3783)>>x3784);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x3810 = INT8_MIN;
	int16_t x3811 = -1;
	volatile int32_t t96 = -23;

	t96 = (((x3809+x3810)<x3811)>>x3812);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3833 = 2889;
	volatile int8_t x3835 = -1;
	volatile int32_t t97 = -1;

	t97 = (((x3833+x3834)<x3835)>>x3836);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x3837 = -7;
	int32_t x3839 = INT32_MAX;
	volatile uint8_t x3840 = 15U;
	int32_t t98 = 110;

	t98 = (((x3837+x3838)<x3839)>>x3840);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3865 = 1;
	int8_t x3866 = 16;
	int16_t x3867 = 6682;
	uint8_t x3868 = 3U;

	t99 = (((x3865+x3866)<x3867)>>x3868);

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

