#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -540051;
static int8_t x122 = -1;
static volatile uint32_t x186 = 174000U;
int32_t t3 = INT32_MIN;
uint64_t x259 = 31LLU;
int32_t t6 = INT32_MIN;
int64_t x261 = 2076LL;
int16_t x275 = 4;
uint64_t x295 = 2LLU;
volatile uint16_t x297 = 355U;
int8_t x359 = 1;
uint8_t x539 = 1U;
static int16_t x547 = 0;
static volatile uint16_t x619 = 15U;
volatile int32_t t18 = -358003;
static uint8_t x639 = 3U;
static int64_t x696 = 1140204226878LL;
uint64_t x765 = 1026867LLU;
static volatile int8_t x767 = 1;
int16_t x768 = -1;
int8_t x833 = -1;
int16_t x854 = 85;
int8_t x909 = INT8_MAX;
int32_t t30 = -192;
static int64_t x1085 = INT64_MIN;
static uint32_t x1088 = 3885344U;
int64_t x1117 = INT64_MIN;
int16_t x1120 = 11341;
int32_t x1144 = 684842;
volatile int8_t x1162 = INT8_MIN;
volatile int8_t x1163 = 1;
int64_t x1206 = INT64_MIN;
int64_t x1210 = -1805087785377LL;
int64_t x1266 = 225LL;
int32_t x1290 = INT32_MIN;
static int32_t x1292 = INT32_MIN;
static int32_t x1334 = -239598427;
static volatile int64_t t40 = INT64_MAX;
uint8_t x1367 = 27U;
uint16_t x1485 = 1066U;
static int32_t x1538 = -474;
volatile uint8_t x1567 = 0U;
static volatile int32_t t49 = -29617868;
volatile uint32_t x1622 = UINT32_MAX;
volatile uint8_t x1866 = UINT8_MAX;
uint8_t x1868 = UINT8_MAX;
int32_t t54 = -5;
static int8_t x1909 = INT8_MIN;
volatile uint8_t x1911 = 0U;
static int64_t x1912 = INT64_MIN;
volatile uint32_t t56 = 53U;
uint16_t x1947 = 1U;
static uint32_t t58 = 3939340U;
int32_t t60 = 41;
int8_t x2010 = INT8_MIN;
uint8_t x2011 = 1U;
int8_t x2012 = INT8_MAX;
int32_t x2078 = -522;
volatile uint8_t x2079 = 0U;
static int32_t t63 = INT32_MIN;
static uint8_t x2199 = 1U;
static int16_t x2252 = INT16_MAX;
volatile int32_t x2353 = 6136;
int8_t x2357 = 3;
uint64_t x2358 = UINT64_MAX;
volatile uint8_t x2359 = 1U;
static uint64_t x2360 = UINT64_MAX;
int8_t x2410 = -1;
int32_t t71 = 0;
int8_t x2542 = INT8_MIN;
static int8_t x2566 = INT8_MIN;
uint8_t x2567 = 1U;
volatile int8_t x2582 = INT8_MIN;
static int32_t x2657 = 92995173;
int32_t x2660 = -495;
int32_t x2666 = -6903;
static uint8_t x2667 = 12U;
int16_t x2694 = INT16_MIN;
uint16_t x2695 = 15U;
uint8_t x2728 = 2U;
uint8_t x2735 = 7U;
volatile int16_t x2782 = INT16_MIN;
static int16_t x2784 = -11137;
volatile uint8_t x2812 = 0U;
static volatile int32_t t82 = 25468;
static int8_t x2850 = 4;
static int8_t x2851 = 2;
volatile uint64_t t83 = UINT64_MAX;
int8_t x2862 = INT8_MIN;
uint8_t x2887 = 3U;
uint32_t x2973 = 378184U;
static int16_t x3034 = INT16_MAX;
static uint32_t x3035 = 1U;
int32_t t91 = -1;
static uint32_t x3065 = 2542U;
static uint32_t x3068 = 46U;
uint8_t x3161 = UINT8_MAX;
uint8_t x3187 = 9U;
volatile int32_t t97 = INT32_MIN;
int8_t x3255 = 4;
int8_t x3261 = INT8_MIN;
int8_t x3263 = 2;
int64_t x3264 = INT64_MIN;


void f0(void) {
	uint8_t x5 = 125U;
	int32_t x6 = INT32_MIN;
	uint32_t x7 = 11U;
	int16_t x8 = -51;

	t0 = (((x5<x6)>>x7)^x8);

	if (t0 != -51) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x97 = -2;
	int8_t x98 = INT8_MIN;
	int16_t x99 = 1;
	int32_t x100 = 1;
	int32_t t1 = 920657540;

	t1 = (((x97<x98)>>x99)^x100);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x121 = 75;
	int32_t x123 = 2;
	static int32_t x124 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = (((x121<x122)>>x123)^x124);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x185 = 0;
	uint32_t x187 = 1U;
	static int32_t x188 = INT32_MIN;

	t3 = (((x185<x186)>>x187)^x188);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x205 = UINT32_MAX;
	int16_t x206 = -27;
	static volatile uint8_t x207 = 12U;
	volatile int64_t x208 = -1LL;
	volatile int64_t t4 = -44927689LL;

	t4 = (((x205<x206)>>x207)^x208);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x229 = INT64_MAX;
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = 0;
	volatile int16_t x232 = INT16_MAX;
	int32_t t5 = -52204973;

	t5 = (((x229<x230)>>x231)^x232);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x257 = UINT64_MAX;
	uint16_t x258 = 18U;
	volatile int32_t x260 = INT32_MIN;

	t6 = (((x257<x258)>>x259)^x260);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x262 = 207U;
	int32_t x263 = 8;
	uint8_t x264 = 15U;
	int32_t t7 = 305619;

	t7 = (((x261<x262)>>x263)^x264);

	if (t7 != 15) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x273 = INT16_MAX;
	int64_t x274 = -657505640595LL;
	uint16_t x276 = UINT16_MAX;
	static volatile int32_t t8 = 130049493;

	t8 = (((x273<x274)>>x275)^x276);

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x293 = 134159319;
	int8_t x294 = INT8_MIN;
	uint8_t x296 = 0U;
	static int32_t t9 = 603;

	t9 = (((x293<x294)>>x295)^x296);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x298 = INT64_MIN;
	static int8_t x299 = 1;
	uint64_t x300 = 230970426724677LLU;
	uint64_t t10 = 47511147371516781LLU;

	t10 = (((x297<x298)>>x299)^x300);

	if (t10 != 230970426724677LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x357 = INT32_MAX;
	int64_t x358 = INT64_MIN;
	static uint64_t x360 = UINT64_MAX;
	static uint64_t t11 = UINT64_MAX;

	t11 = (((x357<x358)>>x359)^x360);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x385 = INT8_MIN;
	volatile int32_t x386 = -1;
	static volatile int8_t x387 = 3;
	uint64_t x388 = 2540LLU;
	volatile uint64_t t12 = 112660726LLU;

	t12 = (((x385<x386)>>x387)^x388);

	if (t12 != 2540LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x437 = UINT8_MAX;
	uint64_t x438 = 572248157097498750LLU;
	uint8_t x439 = 17U;
	static int64_t x440 = INT64_MIN;
	volatile int64_t t13 = INT64_MIN;

	t13 = (((x437<x438)>>x439)^x440);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x449 = -61747328;
	volatile int8_t x450 = INT8_MIN;
	static uint16_t x451 = 6U;
	static int16_t x452 = 67;
	volatile int32_t t14 = -4;

	t14 = (((x449<x450)>>x451)^x452);

	if (t14 != 67) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x537 = 1LL;
	volatile int32_t x538 = -1;
	volatile uint16_t x540 = UINT16_MAX;
	volatile int32_t t15 = -3779841;

	t15 = (((x537<x538)>>x539)^x540);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x545 = -13596;
	static int8_t x546 = -1;
	int16_t x548 = INT16_MAX;
	volatile int32_t t16 = 81893248;

	t16 = (((x545<x546)>>x547)^x548);

	if (t16 != 32766) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x553 = -13;
	int16_t x554 = 6423;
	uint8_t x555 = 2U;
	int8_t x556 = 13;
	volatile int32_t t17 = 3228162;

	t17 = (((x553<x554)>>x555)^x556);

	if (t17 != 13) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x617 = 28991U;
	int64_t x618 = -1LL;
	static int8_t x620 = -45;

	t18 = (((x617<x618)>>x619)^x620);

	if (t18 != -45) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x625 = INT32_MAX;
	int8_t x626 = -1;
	volatile int16_t x627 = 1;
	int16_t x628 = INT16_MAX;
	volatile int32_t t19 = 3198;

	t19 = (((x625<x626)>>x627)^x628);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x629 = -1;
	uint16_t x630 = UINT16_MAX;
	volatile uint8_t x631 = 10U;
	uint16_t x632 = 640U;
	int32_t t20 = 856;

	t20 = (((x629<x630)>>x631)^x632);

	if (t20 != 640) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x637 = -6;
	static int8_t x638 = 26;
	static uint64_t x640 = UINT64_MAX;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (((x637<x638)>>x639)^x640);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x693 = INT64_MAX;
	static volatile int32_t x694 = INT32_MIN;
	uint8_t x695 = 6U;
	static int64_t t22 = 297743220688LL;

	t22 = (((x693<x694)>>x695)^x696);

	if (t22 != 1140204226878LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x701 = INT16_MAX;
	volatile int32_t x702 = INT32_MAX;
	int8_t x703 = 11;
	uint16_t x704 = UINT16_MAX;
	static volatile int32_t t23 = 1169;

	t23 = (((x701<x702)>>x703)^x704);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x766 = 1905641U;
	volatile int32_t t24 = 937211339;

	t24 = (((x765<x766)>>x767)^x768);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x789 = 2U;
	uint32_t x790 = UINT32_MAX;
	volatile uint32_t x791 = 5U;
	int8_t x792 = INT8_MIN;
	int32_t t25 = 89;

	t25 = (((x789<x790)>>x791)^x792);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x834 = -1;
	int8_t x835 = 1;
	int8_t x836 = INT8_MIN;
	volatile int32_t t26 = 423;

	t26 = (((x833<x834)>>x835)^x836);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x853 = UINT64_MAX;
	uint16_t x855 = 0U;
	int16_t x856 = INT16_MAX;
	volatile int32_t t27 = 3855910;

	t27 = (((x853<x854)>>x855)^x856);

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x910 = 4080U;
	int8_t x911 = 0;
	int8_t x912 = INT8_MAX;
	volatile int32_t t28 = -189970;

	t28 = (((x909<x910)>>x911)^x912);

	if (t28 != 126) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1025 = INT32_MIN;
	volatile uint8_t x1026 = UINT8_MAX;
	uint8_t x1027 = 4U;
	int16_t x1028 = -1;
	static int32_t t29 = -80827632;

	t29 = (((x1025<x1026)>>x1027)^x1028);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1073 = UINT16_MAX;
	int32_t x1074 = -1;
	int8_t x1075 = 1;
	static int16_t x1076 = 1813;

	t30 = (((x1073<x1074)>>x1075)^x1076);

	if (t30 != 1813) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1086 = INT8_MAX;
	volatile uint16_t x1087 = 11U;
	volatile uint32_t t31 = 3U;

	t31 = (((x1085<x1086)>>x1087)^x1088);

	if (t31 != 3885344U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1118 = 0U;
	uint8_t x1119 = 20U;
	int32_t t32 = -1;

	t32 = (((x1117<x1118)>>x1119)^x1120);

	if (t32 != 11341) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1141 = -1;
	volatile int8_t x1142 = INT8_MIN;
	uint16_t x1143 = 27U;
	static volatile int32_t t33 = -38440;

	t33 = (((x1141<x1142)>>x1143)^x1144);

	if (t33 != 684842) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x1161 = -1LL;
	int64_t x1164 = INT64_MIN;
	volatile int64_t t34 = INT64_MIN;

	t34 = (((x1161<x1162)>>x1163)^x1164);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1205 = -1;
	uint32_t x1207 = 10U;
	volatile int64_t x1208 = INT64_MAX;
	int64_t t35 = INT64_MAX;

	t35 = (((x1205<x1206)>>x1207)^x1208);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1209 = UINT8_MAX;
	static uint8_t x1211 = 6U;
	int8_t x1212 = -1;
	static int32_t t36 = -480;

	t36 = (((x1209<x1210)>>x1211)^x1212);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1265 = INT16_MIN;
	int16_t x1267 = 30;
	int64_t x1268 = INT64_MIN;
	volatile int64_t t37 = INT64_MIN;

	t37 = (((x1265<x1266)>>x1267)^x1268);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1289 = UINT8_MAX;
	static int8_t x1291 = 0;
	static int32_t t38 = INT32_MIN;

	t38 = (((x1289<x1290)>>x1291)^x1292);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1317 = INT32_MIN;
	static int16_t x1318 = -1;
	uint8_t x1319 = 1U;
	int8_t x1320 = 2;
	static volatile int32_t t39 = 879;

	t39 = (((x1317<x1318)>>x1319)^x1320);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1333 = UINT64_MAX;
	volatile uint8_t x1335 = 8U;
	int64_t x1336 = INT64_MAX;

	t40 = (((x1333<x1334)>>x1335)^x1336);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1365 = UINT32_MAX;
	int64_t x1366 = INT64_MAX;
	int64_t x1368 = INT64_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = (((x1365<x1366)>>x1367)^x1368);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1469 = INT32_MIN;
	uint64_t x1470 = UINT64_MAX;
	int32_t x1471 = 17;
	uint32_t x1472 = 37U;
	static volatile uint32_t t42 = 5254U;

	t42 = (((x1469<x1470)>>x1471)^x1472);

	if (t42 != 37U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1486 = -14;
	static int8_t x1487 = 5;
	uint32_t x1488 = 250892U;
	volatile uint32_t t43 = 18748U;

	t43 = (((x1485<x1486)>>x1487)^x1488);

	if (t43 != 250892U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1501 = -1;
	int64_t x1502 = INT64_MAX;
	int8_t x1503 = 0;
	volatile int16_t x1504 = -43;
	volatile int32_t t44 = -6;

	t44 = (((x1501<x1502)>>x1503)^x1504);

	if (t44 != -44) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1521 = INT64_MIN;
	int16_t x1522 = -1;
	static uint16_t x1523 = 19U;
	uint8_t x1524 = 3U;
	volatile int32_t t45 = -111233635;

	t45 = (((x1521<x1522)>>x1523)^x1524);

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1537 = INT64_MIN;
	int8_t x1539 = 0;
	uint32_t x1540 = 272321026U;
	uint32_t t46 = 26705U;

	t46 = (((x1537<x1538)>>x1539)^x1540);

	if (t46 != 272321027U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1553 = INT32_MIN;
	int32_t x1554 = -1;
	uint16_t x1555 = 7U;
	int16_t x1556 = -1;
	volatile int32_t t47 = 7962589;

	t47 = (((x1553<x1554)>>x1555)^x1556);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1565 = INT32_MIN;
	int8_t x1566 = INT8_MAX;
	static volatile int8_t x1568 = INT8_MAX;
	volatile int32_t t48 = 28;

	t48 = (((x1565<x1566)>>x1567)^x1568);

	if (t48 != 126) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1577 = INT8_MAX;
	static int32_t x1578 = INT32_MAX;
	volatile uint16_t x1579 = 3U;
	int8_t x1580 = INT8_MAX;

	t49 = (((x1577<x1578)>>x1579)^x1580);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1621 = INT64_MAX;
	volatile uint32_t x1623 = 1U;
	static int8_t x1624 = 0;
	int32_t t50 = 0;

	t50 = (((x1621<x1622)>>x1623)^x1624);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1673 = 0U;
	int16_t x1674 = -1;
	static int8_t x1675 = 1;
	volatile uint16_t x1676 = UINT16_MAX;
	static int32_t t51 = 3199640;

	t51 = (((x1673<x1674)>>x1675)^x1676);

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1741 = INT8_MAX;
	int16_t x1742 = 117;
	uint8_t x1743 = 3U;
	int16_t x1744 = INT16_MAX;
	volatile int32_t t52 = 1090;

	t52 = (((x1741<x1742)>>x1743)^x1744);

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1829 = INT8_MIN;
	static int16_t x1830 = 62;
	int8_t x1831 = 1;
	int8_t x1832 = INT8_MAX;
	volatile int32_t t53 = -31155;

	t53 = (((x1829<x1830)>>x1831)^x1832);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1865 = 203722146;
	static int16_t x1867 = 13;

	t54 = (((x1865<x1866)>>x1867)^x1868);

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1910 = 1138342;
	volatile int64_t t55 = 906423705194452LL;

	t55 = (((x1909<x1910)>>x1911)^x1912);

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1917 = 13781024U;
	static volatile int64_t x1918 = 235467233LL;
	static int8_t x1919 = 5;
	uint32_t x1920 = 3U;

	t56 = (((x1917<x1918)>>x1919)^x1920);

	if (t56 != 3U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1945 = INT32_MAX;
	uint32_t x1946 = UINT32_MAX;
	volatile uint16_t x1948 = 237U;
	static int32_t t57 = -64282110;

	t57 = (((x1945<x1946)>>x1947)^x1948);

	if (t57 != 237) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1973 = 1726;
	int16_t x1974 = INT16_MAX;
	volatile uint8_t x1975 = 28U;
	static uint32_t x1976 = 9382U;

	t58 = (((x1973<x1974)>>x1975)^x1976);

	if (t58 != 9382U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x1997 = UINT16_MAX;
	int64_t x1998 = -139265262LL;
	uint8_t x1999 = 1U;
	int64_t x2000 = -1LL;
	int64_t t59 = 29929071LL;

	t59 = (((x1997<x1998)>>x1999)^x2000);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2001 = INT8_MAX;
	uint8_t x2002 = 1U;
	uint64_t x2003 = 1LLU;
	volatile int8_t x2004 = INT8_MAX;

	t60 = (((x2001<x2002)>>x2003)^x2004);

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2009 = UINT8_MAX;
	static int32_t t61 = 12362847;

	t61 = (((x2009<x2010)>>x2011)^x2012);

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x2077 = INT16_MIN;
	int8_t x2080 = INT8_MAX;
	volatile int32_t t62 = -797591;

	t62 = (((x2077<x2078)>>x2079)^x2080);

	if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2097 = INT16_MAX;
	static volatile uint16_t x2098 = 3549U;
	int8_t x2099 = 3;
	int32_t x2100 = INT32_MIN;

	t63 = (((x2097<x2098)>>x2099)^x2100);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2105 = 23U;
	uint8_t x2106 = 1U;
	uint64_t x2107 = 20LLU;
	static volatile uint16_t x2108 = 1375U;
	volatile int32_t t64 = 971;

	t64 = (((x2105<x2106)>>x2107)^x2108);

	if (t64 != 1375) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2149 = -1;
	static uint16_t x2150 = UINT16_MAX;
	static int32_t x2151 = 0;
	volatile int16_t x2152 = 3818;
	volatile int32_t t65 = 108;

	t65 = (((x2149<x2150)>>x2151)^x2152);

	if (t65 != 3819) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x2197 = 23421U;
	int64_t x2198 = -1341764571414569LL;
	int16_t x2200 = -659;
	static int32_t t66 = -22;

	t66 = (((x2197<x2198)>>x2199)^x2200);

	if (t66 != -659) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x2241 = -40360449898982LL;
	int64_t x2242 = INT64_MAX;
	static uint16_t x2243 = 12U;
	int16_t x2244 = INT16_MIN;
	int32_t t67 = 1077;

	t67 = (((x2241<x2242)>>x2243)^x2244);

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x2249 = INT64_MAX;
	static uint32_t x2250 = 6030081U;
	static int32_t x2251 = 4;
	volatile int32_t t68 = 736;

	t68 = (((x2249<x2250)>>x2251)^x2252);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2354 = -2;
	uint8_t x2355 = 1U;
	uint64_t x2356 = UINT64_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (((x2353<x2354)>>x2355)^x2356);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t t70 = UINT64_MAX;

	t70 = (((x2357<x2358)>>x2359)^x2360);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2409 = -4044;
	static uint8_t x2411 = 8U;
	volatile uint16_t x2412 = 21673U;

	t71 = (((x2409<x2410)>>x2411)^x2412);

	if (t71 != 21673) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2489 = -1LL;
	static uint32_t x2490 = 0U;
	volatile uint8_t x2491 = 0U;
	int64_t x2492 = INT64_MAX;
	int64_t t72 = -814973225535LL;

	t72 = (((x2489<x2490)>>x2491)^x2492);

	if (t72 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x2541 = INT8_MAX;
	uint8_t x2543 = 18U;
	int64_t x2544 = 25465481LL;
	volatile int64_t t73 = -78221717737040LL;

	t73 = (((x2541<x2542)>>x2543)^x2544);

	if (t73 != 25465481LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x2565 = 48U;
	volatile int8_t x2568 = 28;
	volatile int32_t t74 = -464;

	t74 = (((x2565<x2566)>>x2567)^x2568);

	if (t74 != 28) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x2581 = INT16_MIN;
	volatile uint32_t x2583 = 24U;
	int64_t x2584 = -1LL;
	int64_t t75 = 629086284250LL;

	t75 = (((x2581<x2582)>>x2583)^x2584);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2658 = INT16_MAX;
	volatile uint8_t x2659 = 7U;
	int32_t t76 = 1;

	t76 = (((x2657<x2658)>>x2659)^x2660);

	if (t76 != -495) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x2665 = INT32_MIN;
	int64_t x2668 = INT64_MIN;
	int64_t t77 = INT64_MIN;

	t77 = (((x2665<x2666)>>x2667)^x2668);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2693 = 5U;
	static int32_t x2696 = -1;
	static volatile int32_t t78 = 41783512;

	t78 = (((x2693<x2694)>>x2695)^x2696);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x2725 = INT8_MIN;
	int8_t x2726 = INT8_MIN;
	uint16_t x2727 = 24U;
	volatile int32_t t79 = -107;

	t79 = (((x2725<x2726)>>x2727)^x2728);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2733 = UINT16_MAX;
	uint64_t x2734 = 372548155206196LLU;
	volatile int64_t x2736 = 49123343039LL;
	static int64_t t80 = 981105LL;

	t80 = (((x2733<x2734)>>x2735)^x2736);

	if (t80 != 49123343039LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2781 = 7241U;
	uint8_t x2783 = 2U;
	volatile int32_t t81 = 41267653;

	t81 = (((x2781<x2782)>>x2783)^x2784);

	if (t81 != -11137) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x2809 = 3U;
	volatile int64_t x2810 = 252331833LL;
	int8_t x2811 = 2;

	t82 = (((x2809<x2810)>>x2811)^x2812);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2849 = UINT16_MAX;
	uint64_t x2852 = UINT64_MAX;

	t83 = (((x2849<x2850)>>x2851)^x2852);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2861 = 1045;
	uint16_t x2863 = 0U;
	int8_t x2864 = -1;
	volatile int32_t t84 = 922;

	t84 = (((x2861<x2862)>>x2863)^x2864);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x2885 = 19398U;
	uint64_t x2886 = UINT64_MAX;
	uint64_t x2888 = UINT64_MAX;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (((x2885<x2886)>>x2887)^x2888);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2913 = INT64_MIN;
	int8_t x2914 = 2;
	static uint16_t x2915 = 7U;
	static volatile uint64_t x2916 = UINT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (((x2913<x2914)>>x2915)^x2916);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2929 = INT64_MIN;
	volatile uint64_t x2930 = UINT64_MAX;
	uint32_t x2931 = 1U;
	static int16_t x2932 = -1;
	int32_t t87 = -1280377;

	t87 = (((x2929<x2930)>>x2931)^x2932);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2941 = 999179024431135LLU;
	int32_t x2942 = INT32_MAX;
	volatile uint8_t x2943 = 14U;
	static int64_t x2944 = INT64_MIN;
	int64_t t88 = INT64_MIN;

	t88 = (((x2941<x2942)>>x2943)^x2944);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2974 = -1;
	int8_t x2975 = 0;
	static uint16_t x2976 = 14U;
	static int32_t t89 = 1;

	t89 = (((x2973<x2974)>>x2975)^x2976);

	if (t89 != 15) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3025 = -4337948296124539LL;
	int16_t x3026 = INT16_MIN;
	uint16_t x3027 = 2U;
	static volatile int32_t x3028 = INT32_MIN;
	int32_t t90 = INT32_MIN;

	t90 = (((x3025<x3026)>>x3027)^x3028);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3033 = 6819U;
	int16_t x3036 = INT16_MIN;

	t91 = (((x3033<x3034)>>x3035)^x3036);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x3066 = UINT8_MAX;
	static volatile uint32_t x3067 = 6U;
	uint32_t t92 = 1365326321U;

	t92 = (((x3065<x3066)>>x3067)^x3068);

	if (t92 != 46U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3093 = 1LL;
	int64_t x3094 = INT64_MIN;
	int8_t x3095 = 3;
	static int16_t x3096 = INT16_MIN;
	volatile int32_t t93 = -1;

	t93 = (((x3093<x3094)>>x3095)^x3096);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3162 = INT16_MIN;
	int8_t x3163 = 15;
	uint64_t x3164 = 69429620324203LLU;
	uint64_t t94 = 1130059321543860LLU;

	t94 = (((x3161<x3162)>>x3163)^x3164);

	if (t94 != 69429620324203LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3185 = 1U;
	volatile int8_t x3186 = INT8_MAX;
	volatile uint16_t x3188 = UINT16_MAX;
	volatile int32_t t95 = 3;

	t95 = (((x3185<x3186)>>x3187)^x3188);

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3209 = -4;
	uint8_t x3210 = 1U;
	static int8_t x3211 = 2;
	volatile uint16_t x3212 = 21359U;
	static volatile int32_t t96 = 640154801;

	t96 = (((x3209<x3210)>>x3211)^x3212);

	if (t96 != 21359) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3221 = UINT8_MAX;
	volatile int64_t x3222 = INT64_MIN;
	static uint16_t x3223 = 15U;
	static int32_t x3224 = INT32_MIN;

	t97 = (((x3221<x3222)>>x3223)^x3224);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x3253 = -532LL;
	static uint8_t x3254 = UINT8_MAX;
	static uint64_t x3256 = 23232299422674LLU;
	uint64_t t98 = 25207514040612LLU;

	t98 = (((x3253<x3254)>>x3255)^x3256);

	if (t98 != 23232299422674LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x3262 = 1U;
	volatile int64_t t99 = INT64_MIN;

	t99 = (((x3261<x3262)>>x3263)^x3264);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

