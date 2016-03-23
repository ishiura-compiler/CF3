
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

static volatile uint16_t x4 = 3U;
static uint8_t x42 = 7U;
int32_t t2 = 28;
volatile uint64_t x260 = 120145832342LLU;
int16_t x302 = 19;
volatile int32_t t8 = 435854968;
uint8_t x490 = 2U;
int32_t x491 = INT32_MIN;
static volatile uint64_t x492 = UINT64_MAX;
int16_t x605 = 85;
int32_t t10 = 730;
volatile int16_t x633 = INT16_MAX;
int16_t x635 = -233;
volatile int16_t x636 = 2998;
static volatile int32_t t11 = 1460695;
uint8_t x936 = 62U;
volatile int32_t x1001 = 5;
volatile int16_t x1086 = 62;
volatile int32_t t17 = 88187809;
int32_t t18 = 1494;
int8_t x1166 = 3;
int16_t x1167 = 3895;
int32_t x1349 = 3310;
static volatile uint64_t x1533 = UINT64_MAX;
int32_t t23 = -2;
static int16_t x1568 = -1186;
static volatile int16_t x1664 = INT16_MAX;
uint32_t x1680 = 127079010U;
volatile int32_t t27 = 1;
static volatile int16_t x1687 = -1;
int32_t t29 = -432;
int8_t x2001 = 6;
uint8_t x2034 = 3U;
uint64_t x2036 = 1041673326111951503LLU;
uint32_t x2151 = UINT32_MAX;
uint32_t x2152 = 740695513U;
static volatile uint16_t x2173 = UINT16_MAX;
int8_t x2174 = 6;
int16_t x2176 = INT16_MIN;
uint16_t x2178 = 61U;
int64_t x2180 = -157LL;
static int16_t x2405 = 0;
volatile uint8_t x2562 = 1U;
int8_t x2714 = 2;
volatile uint32_t x2820 = 219U;
uint32_t x2918 = 47U;
int32_t t45 = 21170649;
static uint32_t x2994 = 0U;
int32_t t46 = 30392;
static volatile int32_t t47 = 14508246;
int64_t x3216 = INT64_MAX;
uint16_t x3261 = 35U;
uint16_t x3263 = 6U;
volatile int32_t t50 = -188543;
int64_t x3506 = 7LL;
int64_t x3861 = 0LL;
static volatile uint16_t x3862 = 60U;
volatile int32_t t54 = 1;
static uint8_t x3949 = 30U;
int32_t t55 = 1085522;
volatile uint8_t x4155 = 19U;
volatile int32_t t57 = 957828558;
uint16_t x4177 = 411U;
static uint16_t x4178 = 7U;
static volatile uint16_t x4246 = 0U;
uint8_t x4465 = UINT8_MAX;
int8_t x4466 = 1;
uint64_t x4489 = 61LLU;
int8_t x4563 = -12;
uint32_t x4705 = 22912U;
int32_t x4724 = INT32_MIN;
volatile uint16_t x4757 = 7301U;
uint16_t x4885 = UINT16_MAX;
static volatile int64_t x4886 = 2LL;
int8_t x4898 = 0;
volatile uint8_t x4929 = 2U;
static int64_t x5093 = 66LL;
int32_t t75 = 6;
uint8_t x5209 = 122U;
volatile int32_t x5223 = -128965152;
int64_t x5224 = -1LL;
int32_t x5375 = -1;
uint64_t x5397 = 540462480189690LLU;
uint16_t x5442 = 29U;
int8_t x5443 = INT8_MIN;
int32_t t81 = 59;
uint8_t x5674 = 3U;
int32_t x5676 = -18711;
uint64_t x5717 = UINT64_MAX;
static uint16_t x5982 = 15U;
int16_t x5995 = -1;
volatile uint32_t x6073 = UINT32_MAX;
volatile int32_t x6076 = INT32_MIN;
uint8_t x6269 = 0U;
int64_t x6272 = 4344947050678LL;
uint8_t x6318 = 3U;
int16_t x6320 = -1555;
uint64_t x6323 = 96LLU;
volatile int32_t t94 = -142282;
int8_t x6710 = 2;
int64_t x6741 = 1LL;
int32_t x6742 = 0;
int16_t x6743 = -1678;
static uint64_t x6744 = 132221974LLU;
static uint32_t x6755 = 36256668U;
uint32_t x6869 = UINT32_MAX;
int16_t x6870 = 6;
uint32_t x7040 = UINT32_MAX;
static uint64_t x7229 = 31LLU;
int8_t x7341 = 1;
int64_t x7344 = INT64_MAX;
int32_t x7357 = 453694;
uint32_t x7358 = 0U;
static volatile int32_t t110 = -2539890;
static int8_t x7607 = -1;
uint64_t x7618 = 5LLU;
uint64_t x7619 = 175517311640726726LLU;
int8_t x7742 = 3;
volatile int8_t x7744 = INT8_MIN;
volatile int32_t t113 = 1785061;
int8_t x7771 = -1;
static int32_t t114 = 27090;
static uint16_t x7811 = 21U;
uint64_t x7885 = UINT64_MAX;
int32_t x7905 = 20705;
static int16_t x7908 = INT16_MIN;
int32_t t118 = 498;
int8_t x8108 = INT8_MAX;
uint32_t x8113 = 1U;
uint16_t x8140 = UINT16_MAX;
uint8_t x8299 = 0U;
static int32_t t124 = -5037;
int8_t x8330 = 1;
uint8_t x8562 = 2U;
uint32_t x8563 = 91452373U;
int8_t x8564 = INT8_MAX;
volatile int8_t x8606 = 20;
int64_t x8607 = 6600183487007092LL;
int8_t x8650 = 50;
volatile uint16_t x8746 = 4U;
int32_t t133 = -19930;
static uint8_t x9145 = 39U;
uint16_t x9449 = 96U;
static int32_t t142 = -5;
static int32_t x9458 = 1;
uint8_t x9545 = 3U;
int8_t x9546 = 0;
uint64_t x9579 = 1711LLU;
uint16_t x9673 = 6U;
int8_t x9675 = -1;
uint64_t x9689 = 1041668460175LLU;
uint16_t x9690 = 0U;
int64_t x9707 = INT64_MIN;
static uint64_t x9708 = 3536195728495301394LLU;
int32_t t150 = 3968;
static int8_t x9793 = 1;
static int32_t x9795 = INT32_MAX;
int32_t t151 = 3398264;
uint32_t x9797 = 953U;
volatile uint16_t x9825 = UINT16_MAX;
uint8_t x9826 = 5U;
int32_t x9827 = -243334250;
static volatile uint64_t x9828 = 38308LLU;
int16_t x9986 = 1;
uint32_t x9987 = 2U;
static int32_t t158 = 0;
static int8_t x10275 = INT8_MIN;
int32_t x10276 = INT32_MAX;
volatile uint64_t x10653 = 81863491985878874LLU;
uint32_t x10654 = 4U;
uint8_t x10656 = 2U;
int32_t t164 = -84046;
uint16_t x10699 = 0U;
uint64_t x10765 = UINT64_MAX;
static volatile uint8_t x10782 = 6U;
uint16_t x10825 = 0U;
volatile uint64_t x10891 = 4LLU;
static uint8_t x10966 = 1U;
int32_t x10968 = INT32_MIN;
int8_t x11238 = 0;
uint64_t x11239 = 912787663LLU;
volatile uint8_t x11240 = 30U;
volatile uint32_t x11337 = 528U;
volatile int32_t t175 = -600;
static volatile int32_t t176 = 17;
int32_t x11421 = 348;
int64_t x11423 = INT64_MIN;
volatile uint8_t x11489 = 14U;
int32_t t180 = -379;
uint16_t x11506 = 16U;
volatile int32_t t181 = -1;
int32_t x11691 = INT32_MAX;
uint16_t x11958 = 7U;
uint16_t x11986 = 0U;
static uint16_t x12017 = UINT16_MAX;
uint32_t x12019 = 348622025U;
volatile int32_t t187 = -25;
uint32_t x12086 = 5U;
volatile int32_t t192 = 26587809;
int8_t x12315 = 1;
int64_t x12420 = -1LL;
volatile int32_t t197 = 11060779;
uint32_t x12533 = UINT32_MAX;
static int64_t x12541 = INT64_MAX;
uint64_t x12543 = 10372097530LLU;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int64_t x2 = 0LL;
	uint16_t x3 = 352U;
	int32_t t0 = -5153929;

    t0 = ((x1<<x2)<=(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x25 = 60595;
	uint32_t x26 = 15U;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t1 = 29077;

    t1 = ((x25<<x26)<=(x27/x28));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x41 = UINT32_MAX;
	int16_t x43 = 380;
	int32_t x44 = INT32_MIN;

    t2 = ((x41<<x42)<=(x43/x44));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x129 = 20;
	volatile uint32_t x130 = 0U;
	int16_t x131 = -1921;
	int32_t x132 = INT32_MIN;
	volatile int32_t t3 = 85039830;

    t3 = ((x129<<x130)<=(x131/x132));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x137 = UINT16_MAX;
	volatile uint16_t x138 = 1U;
	volatile int16_t x139 = 442;
	volatile int8_t x140 = -1;
	int32_t t4 = -30;

    t4 = ((x137<<x138)<=(x139/x140));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x257 = 31;
	uint8_t x258 = 1U;
	uint8_t x259 = 1U;
	int32_t t5 = -328086;

    t5 = ((x257<<x258)<=(x259/x260));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x301 = 0;
	uint64_t x303 = 83897852597LLU;
	int64_t x304 = 12933LL;
	static volatile int32_t t6 = 28603;

    t6 = ((x301<<x302)<=(x303/x304));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	uint32_t x390 = 1U;
	volatile int64_t x391 = -347843918676840554LL;
	int64_t x392 = -5048377831LL;
	int32_t t7 = -4499876;

    t7 = ((x389<<x390)<=(x391/x392));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x437 = 2U;
	static volatile int8_t x438 = 1;
	uint32_t x439 = 3U;
	int16_t x440 = INT16_MIN;

    t8 = ((x437<<x438)<=(x439/x440));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x489 = UINT8_MAX;
	int32_t t9 = -1;

    t9 = ((x489<<x490)<=(x491/x492));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x606 = 21;
	uint32_t x607 = 2053013183U;
	int32_t x608 = 1;

    t10 = ((x605<<x606)<=(x607/x608));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x634 = 0;

    t11 = ((x633<<x634)<=(x635/x636));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x685 = 250712130LLU;
	static volatile uint8_t x686 = 7U;
	int32_t x687 = INT32_MIN;
	int64_t x688 = 3LL;
	int32_t t12 = 853485;

    t12 = ((x685<<x686)<=(x687/x688));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x933 = UINT16_MAX;
	uint16_t x934 = 15U;
	int32_t x935 = INT32_MAX;
	int32_t t13 = -1288;

    t13 = ((x933<<x934)<=(x935/x936));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1002 = 1U;
	int64_t x1003 = 17LL;
	int64_t x1004 = 239458173339533497LL;
	static volatile int32_t t14 = -64404303;

    t14 = ((x1001<<x1002)<=(x1003/x1004));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x1085 = 4561812LLU;
	int8_t x1087 = -1;
	static volatile int8_t x1088 = INT8_MIN;
	int32_t t15 = -29850;

    t15 = ((x1085<<x1086)<=(x1087/x1088));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1089 = UINT16_MAX;
	uint16_t x1090 = 1U;
	int8_t x1091 = -10;
	int16_t x1092 = -1;
	static volatile int32_t t16 = 7865623;

    t16 = ((x1089<<x1090)<=(x1091/x1092));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1097 = 72LLU;
	uint32_t x1098 = 1U;
	int64_t x1099 = -1LL;
	int16_t x1100 = 464;

    t17 = ((x1097<<x1098)<=(x1099/x1100));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1153 = UINT8_MAX;
	uint32_t x1154 = 5U;
	uint64_t x1155 = UINT64_MAX;
	uint8_t x1156 = 40U;

    t18 = ((x1153<<x1154)<=(x1155/x1156));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1165 = 57963923160183LLU;
	uint16_t x1168 = UINT16_MAX;
	int32_t t19 = -113009;

    t19 = ((x1165<<x1166)<=(x1167/x1168));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x1217 = INT8_MAX;
	int16_t x1218 = 3;
	int8_t x1219 = -17;
	static int64_t x1220 = 3618842851LL;
	static volatile int32_t t20 = 453585368;

    t20 = ((x1217<<x1218)<=(x1219/x1220));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x1350 = 3;
	int64_t x1351 = -1LL;
	int16_t x1352 = INT16_MAX;
	static volatile int32_t t21 = 491161236;

    t21 = ((x1349<<x1350)<=(x1351/x1352));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1521 = 0U;
	int8_t x1522 = 1;
	static volatile int16_t x1523 = -308;
	volatile uint64_t x1524 = 5LLU;
	int32_t t22 = 4;

    t22 = ((x1521<<x1522)<=(x1523/x1524));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x1534 = 3;
	int8_t x1535 = INT8_MAX;
	uint16_t x1536 = 2931U;

    t23 = ((x1533<<x1534)<=(x1535/x1536));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1537 = INT16_MAX;
	static int8_t x1538 = 1;
	volatile uint16_t x1539 = 6806U;
	uint8_t x1540 = UINT8_MAX;
	volatile int32_t t24 = -1;

    t24 = ((x1537<<x1538)<=(x1539/x1540));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x1565 = 1;
	int8_t x1566 = 15;
	int32_t x1567 = -19;
	volatile int32_t t25 = 210715;

    t25 = ((x1565<<x1566)<=(x1567/x1568));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1661 = 1;
	uint32_t x1662 = 1U;
	int8_t x1663 = -1;
	int32_t t26 = -502093;

    t26 = ((x1661<<x1662)<=(x1663/x1664));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1677 = 1U;
	int8_t x1678 = 3;
	uint8_t x1679 = 0U;

    t27 = ((x1677<<x1678)<=(x1679/x1680));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x1685 = UINT16_MAX;
	uint16_t x1686 = 11U;
	static int8_t x1688 = INT8_MIN;
	static volatile int32_t t28 = 19558347;

    t28 = ((x1685<<x1686)<=(x1687/x1688));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x1797 = 961924948U;
	int16_t x1798 = 10;
	int16_t x1799 = 18;
	int32_t x1800 = 65;

    t29 = ((x1797<<x1798)<=(x1799/x1800));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x1889 = 50571170868LLU;
	uint16_t x1890 = 3U;
	uint32_t x1891 = 1581085U;
	volatile int8_t x1892 = -1;
	int32_t t30 = -82492721;

    t30 = ((x1889<<x1890)<=(x1891/x1892));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1929 = INT16_MAX;
	uint16_t x1930 = 16U;
	int8_t x1931 = INT8_MAX;
	static uint32_t x1932 = 345364582U;
	volatile int32_t t31 = -160483;

    t31 = ((x1929<<x1930)<=(x1931/x1932));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x2002 = 19LLU;
	int16_t x2003 = INT16_MIN;
	int8_t x2004 = 3;
	int32_t t32 = 1574;

    t32 = ((x2001<<x2002)<=(x2003/x2004));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x2033 = 26849U;
	uint32_t x2035 = 239291U;
	static int32_t t33 = 2806;

    t33 = ((x2033<<x2034)<=(x2035/x2036));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x2061 = 915720095406098LL;
	volatile uint8_t x2062 = 7U;
	volatile int32_t x2063 = -1;
	int64_t x2064 = 337004797LL;
	int32_t t34 = 25136568;

    t34 = ((x2061<<x2062)<=(x2063/x2064));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2149 = 90U;
	int8_t x2150 = 0;
	int32_t t35 = 29;

    t35 = ((x2149<<x2150)<=(x2151/x2152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2175 = -1LL;
	volatile int32_t t36 = 47307;

    t36 = ((x2173<<x2174)<=(x2175/x2176));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x2177 = 14LLU;
	uint8_t x2179 = UINT8_MAX;
	int32_t t37 = -118038124;

    t37 = ((x2177<<x2178)<=(x2179/x2180));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2273 = 11;
	int32_t x2274 = 0;
	static volatile int32_t x2275 = INT32_MAX;
	int8_t x2276 = INT8_MAX;
	int32_t t38 = -7341;

    t38 = ((x2273<<x2274)<=(x2275/x2276));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x2313 = 16;
	uint8_t x2314 = 0U;
	static int8_t x2315 = INT8_MIN;
	int8_t x2316 = INT8_MIN;
	int32_t t39 = -7;

    t39 = ((x2313<<x2314)<=(x2315/x2316));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x2406 = 3U;
	uint16_t x2407 = 488U;
	volatile int8_t x2408 = INT8_MIN;
	volatile int32_t t40 = 105;

    t40 = ((x2405<<x2406)<=(x2407/x2408));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x2561 = 5932388501LLU;
	int32_t x2563 = INT32_MAX;
	int32_t x2564 = INT32_MIN;
	int32_t t41 = -26570;

    t41 = ((x2561<<x2562)<=(x2563/x2564));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x2713 = UINT16_MAX;
	uint8_t x2715 = 33U;
	volatile int64_t x2716 = -1LL;
	static volatile int32_t t42 = -72;

    t42 = ((x2713<<x2714)<=(x2715/x2716));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2781 = 119U;
	uint32_t x2782 = 4U;
	uint64_t x2783 = 408052LLU;
	int16_t x2784 = INT16_MIN;
	int32_t t43 = -23;

    t43 = ((x2781<<x2782)<=(x2783/x2784));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x2817 = 2U;
	uint16_t x2818 = 13U;
	int16_t x2819 = INT16_MIN;
	volatile int32_t t44 = -13098478;

    t44 = ((x2817<<x2818)<=(x2819/x2820));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2917 = 27688673797LLU;
	uint64_t x2919 = 4465378580099489LLU;
	static volatile uint64_t x2920 = 733777954820351LLU;

    t45 = ((x2917<<x2918)<=(x2919/x2920));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x2993 = INT64_MAX;
	volatile int64_t x2995 = INT64_MAX;
	volatile int64_t x2996 = INT64_MAX;

    t46 = ((x2993<<x2994)<=(x2995/x2996));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint8_t x3001 = UINT8_MAX;
	static volatile int16_t x3002 = 10;
	static volatile int32_t x3003 = -1;
	static volatile int32_t x3004 = INT32_MIN;

    t47 = ((x3001<<x3002)<=(x3003/x3004));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x3213 = 24;
	int8_t x3214 = 13;
	uint16_t x3215 = UINT16_MAX;
	static int32_t t48 = 85466802;

    t48 = ((x3213<<x3214)<=(x3215/x3216));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x3262 = 1U;
	static volatile int32_t x3264 = -1;
	int32_t t49 = -82;

    t49 = ((x3261<<x3262)<=(x3263/x3264));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x3349 = UINT64_MAX;
	uint8_t x3350 = 3U;
	static int64_t x3351 = -64037LL;
	int16_t x3352 = -1;

    t50 = ((x3349<<x3350)<=(x3351/x3352));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x3505 = 3515671656151944LLU;
	int64_t x3507 = 1LL;
	uint32_t x3508 = 721480U;
	static int32_t t51 = -3906;

    t51 = ((x3505<<x3506)<=(x3507/x3508));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x3641 = 1481849913264LLU;
	uint16_t x3642 = 36U;
	int8_t x3643 = -1;
	int16_t x3644 = 1;
	volatile int32_t t52 = 0;

    t52 = ((x3641<<x3642)<=(x3643/x3644));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x3777 = 15745647486927LLU;
	int32_t x3778 = 7;
	volatile int8_t x3779 = 2;
	volatile int8_t x3780 = INT8_MIN;
	volatile int32_t t53 = -1796584;

    t53 = ((x3777<<x3778)<=(x3779/x3780));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3863 = INT8_MAX;
	static volatile int64_t x3864 = INT64_MAX;

    t54 = ((x3861<<x3862)<=(x3863/x3864));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x3950 = 0;
	static volatile int8_t x3951 = INT8_MIN;
	static int8_t x3952 = INT8_MAX;

    t55 = ((x3949<<x3950)<=(x3951/x3952));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x4053 = 2045657U;
	int8_t x4054 = 13;
	int32_t x4055 = 5;
	int16_t x4056 = 775;
	int32_t t56 = -27;

    t56 = ((x4053<<x4054)<=(x4055/x4056));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x4153 = 72U;
	uint16_t x4154 = 0U;
	int8_t x4156 = 26;

    t57 = ((x4153<<x4154)<=(x4155/x4156));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x4179 = INT32_MAX;
	int64_t x4180 = INT64_MIN;
	int32_t t58 = 44;

    t58 = ((x4177<<x4178)<=(x4179/x4180));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x4245 = 2733LLU;
	volatile int64_t x4247 = -1LL;
	static uint16_t x4248 = 4726U;
	volatile int32_t t59 = -724693207;

    t59 = ((x4245<<x4246)<=(x4247/x4248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x4257 = 29U;
	static uint16_t x4258 = 1U;
	uint64_t x4259 = 979817099117075300LLU;
	static uint16_t x4260 = 951U;
	int32_t t60 = 157;

    t60 = ((x4257<<x4258)<=(x4259/x4260));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x4313 = UINT16_MAX;
	int8_t x4314 = 1;
	uint64_t x4315 = 7920457505512LLU;
	static int32_t x4316 = INT32_MIN;
	static int32_t t61 = 15;

    t61 = ((x4313<<x4314)<=(x4315/x4316));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x4317 = UINT8_MAX;
	uint8_t x4318 = 3U;
	int64_t x4319 = -6439636391265334LL;
	static int32_t x4320 = -1;
	int32_t t62 = 3;

    t62 = ((x4317<<x4318)<=(x4319/x4320));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x4467 = UINT16_MAX;
	uint16_t x4468 = 37U;
	volatile int32_t t63 = 1307568;

    t63 = ((x4465<<x4466)<=(x4467/x4468));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x4490 = 13U;
	int16_t x4491 = 10;
	uint64_t x4492 = 198597406530LLU;
	volatile int32_t t64 = -88;

    t64 = ((x4489<<x4490)<=(x4491/x4492));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x4561 = 759950339130153557LLU;
	int16_t x4562 = 0;
	int16_t x4564 = INT16_MIN;
	static volatile int32_t t65 = 6;

    t65 = ((x4561<<x4562)<=(x4563/x4564));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x4706 = 1U;
	volatile uint32_t x4707 = UINT32_MAX;
	volatile int32_t x4708 = -547;
	static int32_t t66 = 0;

    t66 = ((x4705<<x4706)<=(x4707/x4708));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x4717 = 4631409430758052LL;
	volatile uint8_t x4718 = 1U;
	int16_t x4719 = 0;
	static int32_t x4720 = INT32_MIN;
	int32_t t67 = -43814;

    t67 = ((x4717<<x4718)<=(x4719/x4720));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x4721 = UINT64_MAX;
	static volatile int16_t x4722 = 61;
	int32_t x4723 = INT32_MAX;
	int32_t t68 = -197;

    t68 = ((x4721<<x4722)<=(x4723/x4724));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint32_t x4758 = 17U;
	int16_t x4759 = INT16_MIN;
	uint64_t x4760 = 7099LLU;
	int32_t t69 = -61222323;

    t69 = ((x4757<<x4758)<=(x4759/x4760));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x4887 = 22708U;
	static int8_t x4888 = 1;
	int32_t t70 = 846353697;

    t70 = ((x4885<<x4886)<=(x4887/x4888));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x4897 = INT8_MAX;
	uint64_t x4899 = 1141817129181752542LLU;
	int16_t x4900 = -1;
	static volatile int32_t t71 = 374;

    t71 = ((x4897<<x4898)<=(x4899/x4900));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x4917 = 403U;
	static uint16_t x4918 = 6U;
	int8_t x4919 = 0;
	int16_t x4920 = INT16_MAX;
	int32_t t72 = 35935;

    t72 = ((x4917<<x4918)<=(x4919/x4920));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x4930 = 27U;
	int64_t x4931 = 774994303698LL;
	uint64_t x4932 = 917LLU;
	int32_t t73 = 231;

    t73 = ((x4929<<x4930)<=(x4931/x4932));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x4993 = UINT64_MAX;
	int16_t x4994 = 11;
	int8_t x4995 = INT8_MAX;
	uint64_t x4996 = UINT64_MAX;
	int32_t t74 = -913;

    t74 = ((x4993<<x4994)<=(x4995/x4996));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x5094 = 1U;
	uint64_t x5095 = UINT64_MAX;
	int8_t x5096 = INT8_MIN;

    t75 = ((x5093<<x5094)<=(x5095/x5096));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x5210 = 1U;
	int32_t x5211 = 6720;
	static int32_t x5212 = INT32_MAX;
	int32_t t76 = -3;

    t76 = ((x5209<<x5210)<=(x5211/x5212));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x5221 = UINT64_MAX;
	uint32_t x5222 = 20U;
	volatile int32_t t77 = 2525460;

    t77 = ((x5221<<x5222)<=(x5223/x5224));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x5313 = UINT16_MAX;
	uint8_t x5314 = 2U;
	static int8_t x5315 = 14;
	int16_t x5316 = INT16_MIN;
	int32_t t78 = 34801361;

    t78 = ((x5313<<x5314)<=(x5315/x5316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x5373 = 27;
	uint16_t x5374 = 6U;
	int8_t x5376 = INT8_MAX;
	volatile int32_t t79 = -2058582;

    t79 = ((x5373<<x5374)<=(x5375/x5376));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x5398 = 1U;
	int32_t x5399 = -60092457;
	static uint16_t x5400 = 1577U;
	int32_t t80 = -24951263;

    t80 = ((x5397<<x5398)<=(x5399/x5400));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x5441 = 6575881836502LLU;
	int32_t x5444 = -1;

    t81 = ((x5441<<x5442)<=(x5443/x5444));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x5665 = 176U;
	uint8_t x5666 = 3U;
	volatile int32_t x5667 = INT32_MIN;
	int8_t x5668 = 3;
	volatile int32_t t82 = -1798;

    t82 = ((x5665<<x5666)<=(x5667/x5668));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x5673 = UINT64_MAX;
	volatile int32_t x5675 = 4369256;
	volatile int32_t t83 = 7;

    t83 = ((x5673<<x5674)<=(x5675/x5676));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x5718 = 0;
	static int16_t x5719 = INT16_MAX;
	volatile int16_t x5720 = 1;
	int32_t t84 = 73776;

    t84 = ((x5717<<x5718)<=(x5719/x5720));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x5741 = 53267187110695397LLU;
	static int8_t x5742 = 0;
	static int16_t x5743 = -1;
	int64_t x5744 = 90LL;
	volatile int32_t t85 = -8413629;

    t85 = ((x5741<<x5742)<=(x5743/x5744));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x5901 = 1920U;
	uint8_t x5902 = 3U;
	static int16_t x5903 = 11303;
	uint8_t x5904 = UINT8_MAX;
	volatile int32_t t86 = -122;

    t86 = ((x5901<<x5902)<=(x5903/x5904));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x5981 = 189U;
	int8_t x5983 = -5;
	static int32_t x5984 = INT32_MIN;
	volatile int32_t t87 = -373694;

    t87 = ((x5981<<x5982)<=(x5983/x5984));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x5993 = 2LLU;
	int8_t x5994 = 4;
	int32_t x5996 = INT32_MIN;
	int32_t t88 = -1023358;

    t88 = ((x5993<<x5994)<=(x5995/x5996));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x6074 = 8U;
	int64_t x6075 = INT64_MAX;
	static volatile int32_t t89 = 25;

    t89 = ((x6073<<x6074)<=(x6075/x6076));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x6270 = 18U;
	int32_t x6271 = INT32_MIN;
	int32_t t90 = -15631;

    t90 = ((x6269<<x6270)<=(x6271/x6272));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x6317 = 122884;
	int32_t x6319 = INT32_MIN;
	int32_t t91 = 7360207;

    t91 = ((x6317<<x6318)<=(x6319/x6320));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x6321 = UINT8_MAX;
	uint32_t x6322 = 0U;
	static int8_t x6324 = INT8_MIN;
	static volatile int32_t t92 = 308;

    t92 = ((x6321<<x6322)<=(x6323/x6324));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x6497 = 30U;
	volatile int8_t x6498 = 2;
	int16_t x6499 = -1;
	int8_t x6500 = INT8_MIN;
	int32_t t93 = 660864;

    t93 = ((x6497<<x6498)<=(x6499/x6500));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x6525 = UINT16_MAX;
	volatile uint8_t x6526 = 14U;
	uint16_t x6527 = 22U;
	int64_t x6528 = -3LL;

    t94 = ((x6525<<x6526)<=(x6527/x6528));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x6709 = 339208U;
	int64_t x6711 = INT64_MIN;
	int32_t x6712 = -148;
	int32_t t95 = 14023820;

    t95 = ((x6709<<x6710)<=(x6711/x6712));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t t96 = -107309989;

    t96 = ((x6741<<x6742)<=(x6743/x6744));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x6753 = 265U;
	int16_t x6754 = 1;
	uint64_t x6756 = 16292485243215294LLU;
	int32_t t97 = -1235;

    t97 = ((x6753<<x6754)<=(x6755/x6756));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x6761 = INT8_MAX;
	static uint8_t x6762 = 9U;
	volatile uint64_t x6763 = 5415LLU;
	uint32_t x6764 = 237528U;
	volatile int32_t t98 = 1;

    t98 = ((x6761<<x6762)<=(x6763/x6764));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x6871 = 0U;
	volatile int64_t x6872 = -1LL;
	volatile int32_t t99 = -1041552052;

    t99 = ((x6869<<x6870)<=(x6871/x6872));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x6953 = UINT8_MAX;
	static volatile int16_t x6954 = 0;
	int8_t x6955 = INT8_MAX;
	uint64_t x6956 = UINT64_MAX;
	volatile int32_t t100 = -14;

    t100 = ((x6953<<x6954)<=(x6955/x6956));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x7037 = 39631LLU;
	volatile uint16_t x7038 = 19U;
	uint32_t x7039 = 7994567U;
	int32_t t101 = -31470;

    t101 = ((x7037<<x7038)<=(x7039/x7040));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x7065 = 1U;
	uint16_t x7066 = 16U;
	static volatile int16_t x7067 = INT16_MAX;
	volatile uint64_t x7068 = 7856447548203LLU;
	static volatile int32_t t102 = -27746074;

    t102 = ((x7065<<x7066)<=(x7067/x7068));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x7165 = INT16_MAX;
	uint16_t x7166 = 2U;
	volatile uint16_t x7167 = UINT16_MAX;
	int64_t x7168 = INT64_MAX;
	int32_t t103 = 0;

    t103 = ((x7165<<x7166)<=(x7167/x7168));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x7230 = 2;
	int8_t x7231 = INT8_MIN;
	int32_t x7232 = INT32_MIN;
	int32_t t104 = -15814088;

    t104 = ((x7229<<x7230)<=(x7231/x7232));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x7233 = INT8_MAX;
	uint8_t x7234 = 20U;
	int8_t x7235 = -1;
	uint16_t x7236 = 8010U;
	static volatile int32_t t105 = -3174;

    t105 = ((x7233<<x7234)<=(x7235/x7236));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x7342 = 0U;
	volatile int32_t x7343 = -1;
	volatile int32_t t106 = 56331;

    t106 = ((x7341<<x7342)<=(x7343/x7344));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x7359 = 73018;
	volatile int8_t x7360 = INT8_MIN;
	int32_t t107 = -2;

    t107 = ((x7357<<x7358)<=(x7359/x7360));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x7477 = 28;
	int8_t x7478 = 2;
	volatile int64_t x7479 = 33731375500856LL;
	uint32_t x7480 = UINT32_MAX;
	static int32_t t108 = 1454419;

    t108 = ((x7477<<x7478)<=(x7479/x7480));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x7513 = 1;
	int16_t x7514 = 0;
	uint16_t x7515 = 278U;
	volatile uint64_t x7516 = UINT64_MAX;
	volatile int32_t t109 = -3487;

    t109 = ((x7513<<x7514)<=(x7515/x7516));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x7533 = 9506053U;
	static int16_t x7534 = 0;
	uint64_t x7535 = 20LLU;
	uint8_t x7536 = UINT8_MAX;

    t110 = ((x7533<<x7534)<=(x7535/x7536));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x7605 = 122327557;
	int8_t x7606 = 0;
	uint16_t x7608 = UINT16_MAX;
	int32_t t111 = -1727;

    t111 = ((x7605<<x7606)<=(x7607/x7608));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x7617 = 50;
	int8_t x7620 = INT8_MIN;
	volatile int32_t t112 = 139701859;

    t112 = ((x7617<<x7618)<=(x7619/x7620));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x7741 = 58;
	int32_t x7743 = INT32_MIN;

    t113 = ((x7741<<x7742)<=(x7743/x7744));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x7769 = 12U;
	uint32_t x7770 = 0U;
	volatile uint32_t x7772 = 138512268U;

    t114 = ((x7769<<x7770)<=(x7771/x7772));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x7809 = UINT32_MAX;
	static uint32_t x7810 = 10U;
	int8_t x7812 = INT8_MAX;
	static volatile int32_t t115 = -48285529;

    t115 = ((x7809<<x7810)<=(x7811/x7812));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x7886 = 2;
	int32_t x7887 = INT32_MAX;
	int16_t x7888 = INT16_MAX;
	int32_t t116 = 514301;

    t116 = ((x7885<<x7886)<=(x7887/x7888));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x7906 = 2LL;
	int16_t x7907 = -32;
	volatile int32_t t117 = 572762;

    t117 = ((x7905<<x7906)<=(x7907/x7908));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x7989 = 473U;
	uint8_t x7990 = 0U;
	uint8_t x7991 = UINT8_MAX;
	uint16_t x7992 = 16032U;

    t118 = ((x7989<<x7990)<=(x7991/x7992));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x8105 = 57199512LL;
	int8_t x8106 = 0;
	uint32_t x8107 = 149513U;
	volatile int32_t t119 = -366;

    t119 = ((x8105<<x8106)<=(x8107/x8108));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x8114 = 0U;
	static uint8_t x8115 = 4U;
	int16_t x8116 = INT16_MAX;
	static int32_t t120 = 61663;

    t120 = ((x8113<<x8114)<=(x8115/x8116));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x8137 = UINT32_MAX;
	uint8_t x8138 = 0U;
	int16_t x8139 = INT16_MAX;
	int32_t t121 = 36147;

    t121 = ((x8137<<x8138)<=(x8139/x8140));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x8185 = 541457244LLU;
	static volatile int8_t x8186 = 5;
	volatile int64_t x8187 = -1LL;
	int32_t x8188 = 2246750;
	int32_t t122 = 7708379;

    t122 = ((x8185<<x8186)<=(x8187/x8188));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x8293 = UINT16_MAX;
	volatile int16_t x8294 = 0;
	int64_t x8295 = 1079LL;
	volatile uint32_t x8296 = 5U;
	int32_t t123 = -6000;

    t123 = ((x8293<<x8294)<=(x8295/x8296));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x8297 = 1U;
	uint16_t x8298 = 5U;
	uint32_t x8300 = 456367U;

    t124 = ((x8297<<x8298)<=(x8299/x8300));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x8329 = UINT16_MAX;
	uint16_t x8331 = 0U;
	static int8_t x8332 = -22;
	volatile int32_t t125 = 1018705;

    t125 = ((x8329<<x8330)<=(x8331/x8332));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x8397 = 0;
	int16_t x8398 = 0;
	int16_t x8399 = -1;
	int8_t x8400 = -1;
	volatile int32_t t126 = 1846;

    t126 = ((x8397<<x8398)<=(x8399/x8400));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint32_t x8421 = UINT32_MAX;
	uint32_t x8422 = 2U;
	static int8_t x8423 = -2;
	static int16_t x8424 = INT16_MIN;
	int32_t t127 = -6;

    t127 = ((x8421<<x8422)<=(x8423/x8424));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x8489 = 875533547747733LLU;
	uint8_t x8490 = 1U;
	static int8_t x8491 = -1;
	static uint32_t x8492 = 130022U;
	static int32_t t128 = 122418994;

    t128 = ((x8489<<x8490)<=(x8491/x8492));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x8525 = 14278LLU;
	static uint64_t x8526 = 2LLU;
	int16_t x8527 = INT16_MIN;
	volatile int64_t x8528 = -989318LL;
	volatile int32_t t129 = -30;

    t129 = ((x8525<<x8526)<=(x8527/x8528));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x8561 = 40;
	int32_t t130 = -2;

    t130 = ((x8561<<x8562)<=(x8563/x8564));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x8605 = UINT32_MAX;
	uint64_t x8608 = 57028LLU;
	int32_t t131 = -113537;

    t131 = ((x8605<<x8606)<=(x8607/x8608));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x8649 = UINT64_MAX;
	int32_t x8651 = 796885961;
	volatile uint32_t x8652 = 9559U;
	volatile int32_t t132 = 1;

    t132 = ((x8649<<x8650)<=(x8651/x8652));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x8745 = 1U;
	uint64_t x8747 = UINT64_MAX;
	int16_t x8748 = 44;

    t133 = ((x8745<<x8746)<=(x8747/x8748));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x8821 = 3410LL;
	uint16_t x8822 = 11U;
	int32_t x8823 = INT32_MAX;
	uint16_t x8824 = 3840U;
	int32_t t134 = 7;

    t134 = ((x8821<<x8822)<=(x8823/x8824));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x8929 = INT64_MAX;
	uint8_t x8930 = 0U;
	int16_t x8931 = -9539;
	uint16_t x8932 = 147U;
	volatile int32_t t135 = -8271558;

    t135 = ((x8929<<x8930)<=(x8931/x8932));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x8997 = 0U;
	static uint32_t x8998 = 14U;
	uint64_t x8999 = 4443650592LLU;
	int8_t x9000 = INT8_MIN;
	int32_t t136 = -1;

    t136 = ((x8997<<x8998)<=(x8999/x9000));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x9013 = 0U;
	uint32_t x9014 = 26U;
	volatile int16_t x9015 = -1;
	int8_t x9016 = -8;
	int32_t t137 = -273;

    t137 = ((x9013<<x9014)<=(x9015/x9016));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x9146 = 0U;
	static uint64_t x9147 = 270294802641866LLU;
	int32_t x9148 = -1;
	int32_t t138 = -106;

    t138 = ((x9145<<x9146)<=(x9147/x9148));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x9213 = UINT32_MAX;
	static int16_t x9214 = 2;
	static volatile int16_t x9215 = INT16_MIN;
	volatile int32_t x9216 = 3;
	static int32_t t139 = 465;

    t139 = ((x9213<<x9214)<=(x9215/x9216));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x9337 = 414552984LLU;
	uint16_t x9338 = 3U;
	uint16_t x9339 = 19U;
	volatile uint32_t x9340 = 911597U;
	int32_t t140 = -2;

    t140 = ((x9337<<x9338)<=(x9339/x9340));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x9437 = INT8_MAX;
	uint16_t x9438 = 11U;
	int16_t x9439 = -1;
	int32_t x9440 = 458289;
	static volatile int32_t t141 = -22732627;

    t141 = ((x9437<<x9438)<=(x9439/x9440));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x9450 = 9;
	uint32_t x9451 = 649724U;
	int16_t x9452 = 96;

    t142 = ((x9449<<x9450)<=(x9451/x9452));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x9457 = 199255264U;
	volatile int32_t x9459 = INT32_MIN;
	int64_t x9460 = -1LL;
	static volatile int32_t t143 = -993128;

    t143 = ((x9457<<x9458)<=(x9459/x9460));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x9473 = 0;
	uint8_t x9474 = 0U;
	volatile int16_t x9475 = -1;
	volatile uint32_t x9476 = 2412680U;
	static int32_t t144 = -1457544;

    t144 = ((x9473<<x9474)<=(x9475/x9476));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x9547 = INT8_MAX;
	int64_t x9548 = INT64_MIN;
	volatile int32_t t145 = 5960;

    t145 = ((x9545<<x9546)<=(x9547/x9548));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x9577 = 1U;
	static uint8_t x9578 = 3U;
	int16_t x9580 = INT16_MIN;
	volatile int32_t t146 = -23058;

    t146 = ((x9577<<x9578)<=(x9579/x9580));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x9609 = UINT16_MAX;
	uint8_t x9610 = 9U;
	static int64_t x9611 = INT64_MAX;
	int16_t x9612 = INT16_MIN;
	static int32_t t147 = 422;

    t147 = ((x9609<<x9610)<=(x9611/x9612));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x9674 = 0;
	int32_t x9676 = INT32_MAX;
	volatile int32_t t148 = -86;

    t148 = ((x9673<<x9674)<=(x9675/x9676));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x9691 = UINT8_MAX;
	static uint16_t x9692 = UINT16_MAX;
	int32_t t149 = -77405565;

    t149 = ((x9689<<x9690)<=(x9691/x9692));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x9705 = 739198216572297LLU;
	volatile int8_t x9706 = 2;

    t150 = ((x9705<<x9706)<=(x9707/x9708));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x9794 = 6U;
	volatile int16_t x9796 = INT16_MIN;

    t151 = ((x9793<<x9794)<=(x9795/x9796));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x9798 = 22;
	static int8_t x9799 = -4;
	volatile uint64_t x9800 = 3934539747169971745LLU;
	volatile int32_t t152 = -1;

    t152 = ((x9797<<x9798)<=(x9799/x9800));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t t153 = -15;

    t153 = ((x9825<<x9826)<=(x9827/x9828));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x9985 = 665989U;
	static int32_t x9988 = -2937666;
	int32_t t154 = -49739515;

    t154 = ((x9985<<x9986)<=(x9987/x9988));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x10069 = 10U;
	uint8_t x10070 = 23U;
	static volatile int16_t x10071 = 3;
	static int32_t x10072 = 1;
	volatile int32_t t155 = 61925846;

    t155 = ((x10069<<x10070)<=(x10071/x10072));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x10173 = 409254U;
	int8_t x10174 = 6;
	int8_t x10175 = INT8_MIN;
	int32_t x10176 = 13;
	volatile int32_t t156 = -11886;

    t156 = ((x10173<<x10174)<=(x10175/x10176));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x10177 = 409619U;
	uint32_t x10178 = 14U;
	int32_t x10179 = INT32_MAX;
	static int64_t x10180 = -1LL;
	int32_t t157 = 55993;

    t157 = ((x10177<<x10178)<=(x10179/x10180));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x10265 = UINT8_MAX;
	uint8_t x10266 = 17U;
	int8_t x10267 = INT8_MIN;
	int16_t x10268 = INT16_MIN;

    t158 = ((x10265<<x10266)<=(x10267/x10268));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x10273 = 1U;
	int16_t x10274 = 10;
	volatile int32_t t159 = 29;

    t159 = ((x10273<<x10274)<=(x10275/x10276));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x10349 = INT16_MAX;
	static int8_t x10350 = 5;
	int32_t x10351 = -1;
	uint32_t x10352 = 61313U;
	int32_t t160 = -743;

    t160 = ((x10349<<x10350)<=(x10351/x10352));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x10393 = INT8_MAX;
	int32_t x10394 = 1;
	int16_t x10395 = INT16_MIN;
	static int32_t x10396 = -1;
	volatile int32_t t161 = 3;

    t161 = ((x10393<<x10394)<=(x10395/x10396));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x10557 = 156LL;
	uint8_t x10558 = 7U;
	int64_t x10559 = -4841LL;
	int8_t x10560 = -6;
	volatile int32_t t162 = 95664;

    t162 = ((x10557<<x10558)<=(x10559/x10560));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x10645 = 257002U;
	volatile uint16_t x10646 = 4U;
	int16_t x10647 = INT16_MAX;
	int64_t x10648 = INT64_MIN;
	static int32_t t163 = 43;

    t163 = ((x10645<<x10646)<=(x10647/x10648));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x10655 = UINT16_MAX;

    t164 = ((x10653<<x10654)<=(x10655/x10656));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x10697 = 223593LLU;
	static int8_t x10698 = 0;
	uint64_t x10700 = UINT64_MAX;
	static volatile int32_t t165 = 626238700;

    t165 = ((x10697<<x10698)<=(x10699/x10700));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x10766 = 1;
	volatile int8_t x10767 = INT8_MIN;
	volatile int8_t x10768 = -8;
	int32_t t166 = -16749;

    t166 = ((x10765<<x10766)<=(x10767/x10768));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x10781 = INT16_MAX;
	volatile int8_t x10783 = -1;
	uint32_t x10784 = 639U;
	int32_t t167 = -1;

    t167 = ((x10781<<x10782)<=(x10783/x10784));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x10826 = 27;
	int8_t x10827 = INT8_MIN;
	int8_t x10828 = INT8_MAX;
	int32_t t168 = -1;

    t168 = ((x10825<<x10826)<=(x10827/x10828));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x10889 = 32;
	uint8_t x10890 = 2U;
	int16_t x10892 = -1;
	int32_t t169 = -75558;

    t169 = ((x10889<<x10890)<=(x10891/x10892));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x10917 = 1617799610885427LL;
	static uint8_t x10918 = 0U;
	int32_t x10919 = -1;
	static uint8_t x10920 = 15U;
	static int32_t t170 = -323858835;

    t170 = ((x10917<<x10918)<=(x10919/x10920));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x10965 = 550685334830958254LL;
	static int32_t x10967 = 702437;
	int32_t t171 = -4344073;

    t171 = ((x10965<<x10966)<=(x10967/x10968));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x10993 = 91317899LLU;
	uint16_t x10994 = 11U;
	volatile int64_t x10995 = INT64_MIN;
	uint32_t x10996 = 47519U;
	volatile int32_t t172 = 29302;

    t172 = ((x10993<<x10994)<=(x10995/x10996));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x11053 = 5U;
	static int32_t x11054 = 1;
	uint8_t x11055 = UINT8_MAX;
	uint8_t x11056 = 3U;
	volatile int32_t t173 = 3636;

    t173 = ((x11053<<x11054)<=(x11055/x11056));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x11237 = 23LLU;
	static int32_t t174 = 295621;

    t174 = ((x11237<<x11238)<=(x11239/x11240));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x11338 = 0;
	static int8_t x11339 = INT8_MIN;
	uint32_t x11340 = 40360U;

    t175 = ((x11337<<x11338)<=(x11339/x11340));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x11381 = UINT32_MAX;
	static uint8_t x11382 = 5U;
	int8_t x11383 = -1;
	int16_t x11384 = 12234;

    t176 = ((x11381<<x11382)<=(x11383/x11384));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x11389 = 1858;
	static volatile int8_t x11390 = 0;
	volatile int64_t x11391 = -3204351249374376LL;
	int32_t x11392 = -21391;
	volatile int32_t t177 = -15;

    t177 = ((x11389<<x11390)<=(x11391/x11392));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x11422 = 5;
	uint64_t x11424 = 15458391985048834LLU;
	int32_t t178 = 3686;

    t178 = ((x11421<<x11422)<=(x11423/x11424));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x11461 = 251U;
	int16_t x11462 = 4;
	int64_t x11463 = 0LL;
	volatile uint32_t x11464 = UINT32_MAX;
	volatile int32_t t179 = 49978;

    t179 = ((x11461<<x11462)<=(x11463/x11464));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x11490 = 1;
	int32_t x11491 = INT32_MAX;
	static int32_t x11492 = INT32_MAX;

    t180 = ((x11489<<x11490)<=(x11491/x11492));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x11505 = 50093U;
	int16_t x11507 = -15;
	volatile int16_t x11508 = 7185;

    t181 = ((x11505<<x11506)<=(x11507/x11508));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x11689 = 28U;
	volatile int16_t x11690 = 2;
	static uint16_t x11692 = UINT16_MAX;
	volatile int32_t t182 = 3726948;

    t182 = ((x11689<<x11690)<=(x11691/x11692));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x11833 = INT8_MAX;
	volatile uint8_t x11834 = 0U;
	uint64_t x11835 = 42540LLU;
	uint32_t x11836 = 618903130U;
	volatile int32_t t183 = -12298;

    t183 = ((x11833<<x11834)<=(x11835/x11836));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x11921 = UINT64_MAX;
	int16_t x11922 = 29;
	int64_t x11923 = 250396985446LL;
	volatile int8_t x11924 = INT8_MAX;
	int32_t t184 = 1;

    t184 = ((x11921<<x11922)<=(x11923/x11924));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x11957 = 34LLU;
	int16_t x11959 = INT16_MIN;
	int8_t x11960 = INT8_MIN;
	static int32_t t185 = 143;

    t185 = ((x11957<<x11958)<=(x11959/x11960));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x11985 = 9U;
	static volatile int32_t x11987 = INT32_MIN;
	uint64_t x11988 = UINT64_MAX;
	volatile int32_t t186 = 127041;

    t186 = ((x11985<<x11986)<=(x11987/x11988));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x12018 = 4;
	volatile int64_t x12020 = INT64_MIN;

    t187 = ((x12017<<x12018)<=(x12019/x12020));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x12085 = INT16_MAX;
	int16_t x12087 = INT16_MIN;
	volatile int64_t x12088 = INT64_MAX;
	int32_t t188 = -1035509426;

    t188 = ((x12085<<x12086)<=(x12087/x12088));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x12145 = 420;
	int16_t x12146 = 0;
	volatile int32_t x12147 = INT32_MAX;
	uint16_t x12148 = UINT16_MAX;
	int32_t t189 = 708;

    t189 = ((x12145<<x12146)<=(x12147/x12148));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint32_t x12265 = 14U;
	uint8_t x12266 = 4U;
	int8_t x12267 = 5;
	uint32_t x12268 = 2950U;
	static volatile int32_t t190 = -13;

    t190 = ((x12265<<x12266)<=(x12267/x12268));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x12277 = 4U;
	int8_t x12278 = 0;
	static volatile int16_t x12279 = -1;
	int32_t x12280 = -7;
	int32_t t191 = 3303;

    t191 = ((x12277<<x12278)<=(x12279/x12280));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x12289 = 64839822411931696LLU;
	int8_t x12290 = 1;
	static uint8_t x12291 = 19U;
	int64_t x12292 = INT64_MIN;

    t192 = ((x12289<<x12290)<=(x12291/x12292));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x12313 = 101U;
	uint8_t x12314 = 3U;
	int64_t x12316 = INT64_MIN;
	static int32_t t193 = -442;

    t193 = ((x12313<<x12314)<=(x12315/x12316));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x12417 = 1U;
	uint16_t x12418 = 5U;
	volatile uint8_t x12419 = 0U;
	volatile int32_t t194 = -1;

    t194 = ((x12417<<x12418)<=(x12419/x12420));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x12421 = 5U;
	static int16_t x12422 = 1;
	int8_t x12423 = -1;
	int8_t x12424 = -1;
	volatile int32_t t195 = 3925719;

    t195 = ((x12421<<x12422)<=(x12423/x12424));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x12445 = 3U;
	int8_t x12446 = 0;
	int8_t x12447 = -1;
	int32_t x12448 = 43;
	static volatile int32_t t196 = -30888;

    t196 = ((x12445<<x12446)<=(x12447/x12448));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x12453 = 4U;
	volatile uint8_t x12454 = 20U;
	volatile int32_t x12455 = INT32_MIN;
	int8_t x12456 = -3;

    t197 = ((x12453<<x12454)<=(x12455/x12456));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x12534 = 4U;
	uint8_t x12535 = 20U;
	int16_t x12536 = 129;
	static volatile int32_t t198 = -430;

    t198 = ((x12533<<x12534)<=(x12535/x12536));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x12542 = 0;
	int64_t x12544 = -85LL;
	int32_t t199 = -225838;

    t199 = ((x12541<<x12542)<=(x12543/x12544));

    if (t199 != 0) { NG(); } else { ; }
	
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

