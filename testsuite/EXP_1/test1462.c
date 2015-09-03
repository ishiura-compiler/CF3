#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 140;
int32_t t2 = 5897;
int64_t x114 = INT64_MIN;
int8_t x130 = INT8_MIN;
static int32_t x131 = 1517950;
int16_t x132 = 0;
int64_t x149 = -1LL;
uint64_t x150 = UINT64_MAX;
volatile int32_t t6 = -115541537;
volatile int8_t x200 = 0;
volatile int64_t x209 = -352813256803LL;
static int64_t x258 = 28LL;
static int32_t x260 = 1;
uint8_t x311 = 20U;
int16_t x359 = INT16_MIN;
int32_t x403 = -40959470;
int32_t x469 = INT32_MIN;
int32_t t15 = -5918;
uint8_t x555 = UINT8_MAX;
int16_t x573 = 4;
int8_t x575 = INT8_MIN;
int16_t x589 = -1;
uint16_t x603 = 63U;
int8_t x634 = INT8_MIN;
static int8_t x658 = -1;
int32_t x769 = -508031;
int64_t x770 = -1LL;
volatile int32_t t26 = 633731;
volatile int32_t t30 = -3661277;
int8_t x1049 = -14;
int16_t x1131 = 2;
int32_t t36 = 46;
static int8_t x1237 = 34;
uint32_t x1269 = UINT32_MAX;
uint32_t x1303 = 6U;
static uint32_t x1360 = 30U;
uint8_t x1421 = 100U;
volatile uint8_t x1441 = UINT8_MAX;
static volatile uint32_t x1442 = 172U;
int8_t x1446 = 16;
int32_t t50 = 657;
int64_t x1609 = INT64_MAX;
int32_t x1638 = INT32_MIN;
uint32_t x1640 = 13U;
volatile int32_t t52 = 155;
uint8_t x1641 = 11U;
int8_t x1643 = INT8_MIN;
volatile int32_t t53 = 244945;
volatile uint16_t x1779 = 22U;
int32_t x1927 = -1;
volatile int32_t t59 = 6574455;
volatile uint8_t x1972 = 24U;
uint8_t x2094 = UINT8_MAX;
int32_t t63 = 2386405;
int32_t x2113 = INT32_MAX;
int8_t x2149 = INT8_MAX;
int32_t x2152 = 26;
static uint32_t x2202 = UINT32_MAX;
volatile uint64_t x2203 = UINT64_MAX;
volatile uint32_t x2204 = 10U;
volatile uint16_t x2223 = 3U;
int16_t x2224 = 2;
volatile int16_t x2263 = -1;
volatile int64_t x2267 = -1LL;
int64_t x2298 = INT64_MAX;
static volatile uint32_t x2299 = 3510U;
int32_t t74 = -743013;
volatile int16_t x2322 = -1;
static volatile int8_t x2323 = 8;
volatile int32_t t76 = -70;
static int8_t x2456 = 25;
int8_t x2458 = 41;
volatile int8_t x2511 = INT8_MIN;
int32_t t80 = 1451537;
volatile int16_t x2890 = 1;
volatile uint8_t x2906 = 23U;
int16_t x3051 = -40;
volatile int8_t x3089 = -1;
uint64_t x3090 = 57101942533276LLU;
uint16_t x3137 = UINT16_MAX;
uint8_t x3260 = 1U;
int8_t x3362 = -1;
static int8_t x3363 = INT8_MIN;
volatile int32_t t96 = -933080620;
int32_t x3430 = INT32_MIN;
uint64_t x3431 = UINT64_MAX;
uint16_t x3478 = 0U;


void f0(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x6 = 45819922U;
	volatile int8_t x7 = INT8_MIN;
	volatile int8_t x8 = 14;
	int32_t t0 = 3915;

	t0 = (((x5<x6)<x7)<<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 1;
	uint16_t x10 = 3699U;
	uint32_t x11 = UINT32_MAX;
	volatile int8_t x12 = 4;

	t1 = (((x9<x10)<x11)<<x12);

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x53 = 43U;
	int8_t x54 = INT8_MIN;
	static uint16_t x55 = UINT16_MAX;
	int32_t x56 = 0;

	t2 = (((x53<x54)<x55)<<x56);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x113 = INT16_MIN;
	static int16_t x115 = INT16_MIN;
	uint16_t x116 = 3U;
	int32_t t3 = 98;

	t3 = (((x113<x114)<x115)<<x116);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x125 = 0;
	int16_t x126 = 260;
	volatile uint16_t x127 = 2U;
	uint8_t x128 = 11U;
	int32_t t4 = -4691305;

	t4 = (((x125<x126)<x127)<<x128);

	if (t4 != 2048) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x129 = -7;
	static volatile int32_t t5 = 1279;

	t5 = (((x129<x130)<x131)<<x132);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x151 = INT16_MIN;
	static volatile uint16_t x152 = 1U;

	t6 = (((x149<x150)<x151)<<x152);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x197 = INT32_MIN;
	int8_t x198 = 3;
	int8_t x199 = INT8_MIN;
	volatile int32_t t7 = -132543;

	t7 = (((x197<x198)<x199)<<x200);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x210 = INT8_MIN;
	static int16_t x211 = INT16_MIN;
	int16_t x212 = 3;
	static int32_t t8 = -22855;

	t8 = (((x209<x210)<x211)<<x212);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x237 = -1710311;
	static volatile int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MAX;
	uint8_t x240 = 3U;
	volatile int32_t t9 = 7;

	t9 = (((x237<x238)<x239)<<x240);

	if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x257 = 1359U;
	uint16_t x259 = 0U;
	volatile int32_t t10 = 9;

	t10 = (((x257<x258)<x259)<<x260);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x309 = 1U;
	volatile int8_t x310 = INT8_MAX;
	uint8_t x312 = 1U;
	volatile int32_t t11 = 6024394;

	t11 = (((x309<x310)<x311)<<x312);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x349 = 22U;
	int8_t x350 = INT8_MAX;
	static uint32_t x351 = 2U;
	uint16_t x352 = 1U;
	volatile int32_t t12 = 52;

	t12 = (((x349<x350)<x351)<<x352);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x357 = 0;
	int32_t x358 = -15085068;
	static uint8_t x360 = 16U;
	int32_t t13 = -1;

	t13 = (((x357<x358)<x359)<<x360);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x401 = INT16_MAX;
	volatile uint32_t x402 = 3U;
	static uint8_t x404 = 3U;
	int32_t t14 = -15687611;

	t14 = (((x401<x402)<x403)<<x404);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x470 = UINT32_MAX;
	uint32_t x471 = UINT32_MAX;
	static volatile uint16_t x472 = 4U;

	t15 = (((x469<x470)<x471)<<x472);

	if (t15 != 16) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x553 = INT32_MIN;
	static int8_t x554 = 4;
	int8_t x556 = 1;
	volatile int32_t t16 = 1;

	t16 = (((x553<x554)<x555)<<x556);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x574 = 8659559407672847472LLU;
	uint8_t x576 = 10U;
	volatile int32_t t17 = -97059739;

	t17 = (((x573<x574)<x575)<<x576);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x590 = -16;
	uint16_t x591 = 58U;
	int16_t x592 = 1;
	volatile int32_t t18 = -166024;

	t18 = (((x589<x590)<x591)<<x592);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x601 = INT64_MIN;
	int32_t x602 = INT32_MAX;
	static volatile uint8_t x604 = 4U;
	static volatile int32_t t19 = 211659;

	t19 = (((x601<x602)<x603)<<x604);

	if (t19 != 16) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x605 = -12;
	int32_t x606 = INT32_MAX;
	volatile int64_t x607 = INT64_MAX;
	uint32_t x608 = 24U;
	int32_t t20 = -25442;

	t20 = (((x605<x606)<x607)<<x608);

	if (t20 != 16777216) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x621 = -1;
	static int8_t x622 = INT8_MIN;
	static volatile int64_t x623 = -1LL;
	int16_t x624 = 5;
	volatile int32_t t21 = 12399647;

	t21 = (((x621<x622)<x623)<<x624);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x633 = 644U;
	int8_t x635 = -1;
	int16_t x636 = 0;
	int32_t t22 = -11993930;

	t22 = (((x633<x634)<x635)<<x636);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x657 = -1;
	static int32_t x659 = 981206;
	static int16_t x660 = 3;
	int32_t t23 = 1;

	t23 = (((x657<x658)<x659)<<x660);

	if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x709 = INT64_MIN;
	uint64_t x710 = UINT64_MAX;
	int64_t x711 = INT64_MAX;
	static uint8_t x712 = 0U;
	static volatile int32_t t24 = -433138752;

	t24 = (((x709<x710)<x711)<<x712);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x771 = INT8_MIN;
	int16_t x772 = 0;
	int32_t t25 = 8342572;

	t25 = (((x769<x770)<x771)<<x772);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x817 = INT16_MIN;
	uint64_t x818 = 100096424829223LLU;
	int16_t x819 = INT16_MIN;
	uint64_t x820 = 10LLU;

	t26 = (((x817<x818)<x819)<<x820);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x881 = UINT8_MAX;
	uint8_t x882 = 63U;
	static int8_t x883 = INT8_MAX;
	uint8_t x884 = 7U;
	int32_t t27 = -427633;

	t27 = (((x881<x882)<x883)<<x884);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x957 = 2;
	int64_t x958 = INT64_MAX;
	int64_t x959 = INT64_MAX;
	volatile int16_t x960 = 0;
	int32_t t28 = -17;

	t28 = (((x957<x958)<x959)<<x960);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x961 = INT64_MIN;
	volatile int16_t x962 = -5;
	uint64_t x963 = 1LLU;
	static uint16_t x964 = 1U;
	static volatile int32_t t29 = -5331;

	t29 = (((x961<x962)<x963)<<x964);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x989 = -1LL;
	int16_t x990 = -238;
	static int8_t x991 = 15;
	int8_t x992 = 1;

	t30 = (((x989<x990)<x991)<<x992);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1009 = INT8_MIN;
	uint8_t x1010 = UINT8_MAX;
	volatile int32_t x1011 = INT32_MIN;
	volatile uint32_t x1012 = 29U;
	volatile int32_t t31 = 403;

	t31 = (((x1009<x1010)<x1011)<<x1012);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1033 = INT64_MIN;
	int8_t x1034 = INT8_MIN;
	uint32_t x1035 = 1852571868U;
	int8_t x1036 = 8;
	int32_t t32 = -17602710;

	t32 = (((x1033<x1034)<x1035)<<x1036);

	if (t32 != 256) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1050 = 3;
	uint32_t x1051 = 38035242U;
	int8_t x1052 = 5;
	int32_t t33 = 0;

	t33 = (((x1049<x1050)<x1051)<<x1052);

	if (t33 != 32) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1069 = INT8_MAX;
	uint64_t x1070 = 1LLU;
	int32_t x1071 = 712;
	int16_t x1072 = 0;
	volatile int32_t t34 = 390119798;

	t34 = (((x1069<x1070)<x1071)<<x1072);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1093 = INT8_MIN;
	int8_t x1094 = INT8_MIN;
	uint32_t x1095 = UINT32_MAX;
	uint16_t x1096 = 27U;
	volatile int32_t t35 = -7;

	t35 = (((x1093<x1094)<x1095)<<x1096);

	if (t35 != 134217728) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1129 = INT8_MAX;
	uint8_t x1130 = 4U;
	volatile uint64_t x1132 = 2LLU;

	t36 = (((x1129<x1130)<x1131)<<x1132);

	if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1177 = UINT32_MAX;
	uint32_t x1178 = UINT32_MAX;
	static uint8_t x1179 = 35U;
	volatile int8_t x1180 = 0;
	int32_t t37 = -47;

	t37 = (((x1177<x1178)<x1179)<<x1180);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1238 = -1;
	int64_t x1239 = INT64_MIN;
	uint8_t x1240 = 27U;
	volatile int32_t t38 = -22736;

	t38 = (((x1237<x1238)<x1239)<<x1240);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1270 = 3883064;
	int32_t x1271 = 112129353;
	int8_t x1272 = 12;
	volatile int32_t t39 = 1312;

	t39 = (((x1269<x1270)<x1271)<<x1272);

	if (t39 != 4096) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1301 = INT64_MIN;
	uint64_t x1302 = 49743296109262LLU;
	int8_t x1304 = 2;
	int32_t t40 = -8099;

	t40 = (((x1301<x1302)<x1303)<<x1304);

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1305 = INT64_MAX;
	volatile uint16_t x1306 = 1112U;
	int32_t x1307 = INT32_MIN;
	uint16_t x1308 = 3U;
	volatile int32_t t41 = -1315006;

	t41 = (((x1305<x1306)<x1307)<<x1308);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1349 = UINT32_MAX;
	int32_t x1350 = -125452752;
	int32_t x1351 = INT32_MIN;
	int8_t x1352 = 1;
	static int32_t t42 = 13039;

	t42 = (((x1349<x1350)<x1351)<<x1352);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1357 = 3837386LL;
	int16_t x1358 = -1;
	int32_t x1359 = 0;
	static volatile int32_t t43 = 61283;

	t43 = (((x1357<x1358)<x1359)<<x1360);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1365 = INT64_MIN;
	uint64_t x1366 = 6255LLU;
	int8_t x1367 = INT8_MIN;
	static int8_t x1368 = 3;
	int32_t t44 = -7;

	t44 = (((x1365<x1366)<x1367)<<x1368);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1373 = 634294562311207LL;
	uint64_t x1374 = 2355LLU;
	uint64_t x1375 = 6625430249168142LLU;
	static uint16_t x1376 = 1U;
	int32_t t45 = -3022548;

	t45 = (((x1373<x1374)<x1375)<<x1376);

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1422 = 0U;
	int8_t x1423 = -3;
	uint8_t x1424 = 0U;
	static int32_t t46 = 741959;

	t46 = (((x1421<x1422)<x1423)<<x1424);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x1443 = -1;
	uint8_t x1444 = 12U;
	static volatile int32_t t47 = -7904;

	t47 = (((x1441<x1442)<x1443)<<x1444);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x1445 = 2U;
	uint64_t x1447 = 51017364LLU;
	uint8_t x1448 = 0U;
	static volatile int32_t t48 = 57;

	t48 = (((x1445<x1446)<x1447)<<x1448);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x1565 = INT16_MAX;
	uint32_t x1566 = UINT32_MAX;
	int16_t x1567 = -1;
	uint8_t x1568 = 21U;
	volatile int32_t t49 = 59588746;

	t49 = (((x1565<x1566)<x1567)<<x1568);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x1601 = -1;
	static volatile int16_t x1602 = INT16_MIN;
	static volatile uint32_t x1603 = 3U;
	int32_t x1604 = 21;

	t50 = (((x1601<x1602)<x1603)<<x1604);

	if (t50 != 2097152) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1610 = -1;
	int64_t x1611 = INT64_MAX;
	uint8_t x1612 = 0U;
	int32_t t51 = 65216251;

	t51 = (((x1609<x1610)<x1611)<<x1612);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1637 = UINT32_MAX;
	int32_t x1639 = INT32_MIN;

	t52 = (((x1637<x1638)<x1639)<<x1640);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1642 = 63U;
	uint16_t x1644 = 28U;

	t53 = (((x1641<x1642)<x1643)<<x1644);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x1669 = -1;
	int32_t x1670 = -11;
	int8_t x1671 = -37;
	int8_t x1672 = 1;
	static int32_t t54 = -1249;

	t54 = (((x1669<x1670)<x1671)<<x1672);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1729 = INT64_MAX;
	static volatile int64_t x1730 = INT64_MIN;
	uint64_t x1731 = 217242897LLU;
	uint8_t x1732 = 2U;
	int32_t t55 = -484;

	t55 = (((x1729<x1730)<x1731)<<x1732);

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1777 = 99U;
	uint8_t x1778 = UINT8_MAX;
	uint8_t x1780 = 0U;
	volatile int32_t t56 = -4685015;

	t56 = (((x1777<x1778)<x1779)<<x1780);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1869 = INT16_MAX;
	uint8_t x1870 = 29U;
	int32_t x1871 = INT32_MIN;
	int8_t x1872 = 0;
	volatile int32_t t57 = 7;

	t57 = (((x1869<x1870)<x1871)<<x1872);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1925 = INT8_MAX;
	uint32_t x1926 = 923208132U;
	volatile uint32_t x1928 = 17U;
	static volatile int32_t t58 = -5;

	t58 = (((x1925<x1926)<x1927)<<x1928);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1929 = -340;
	static uint8_t x1930 = UINT8_MAX;
	int16_t x1931 = -1;
	uint8_t x1932 = 0U;

	t59 = (((x1929<x1930)<x1931)<<x1932);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1969 = INT64_MAX;
	static int16_t x1970 = 22;
	int16_t x1971 = 120;
	static volatile int32_t t60 = -484;

	t60 = (((x1969<x1970)<x1971)<<x1972);

	if (t60 != 16777216) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x1985 = UINT64_MAX;
	int16_t x1986 = 73;
	int16_t x1987 = -1;
	uint16_t x1988 = 7U;
	int32_t t61 = -5911733;

	t61 = (((x1985<x1986)<x1987)<<x1988);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x1997 = UINT64_MAX;
	int16_t x1998 = INT16_MIN;
	uint32_t x1999 = 57234623U;
	uint8_t x2000 = 1U;
	volatile int32_t t62 = 367553513;

	t62 = (((x1997<x1998)<x1999)<<x2000);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x2093 = INT16_MIN;
	int8_t x2095 = INT8_MIN;
	uint8_t x2096 = 1U;

	t63 = (((x2093<x2094)<x2095)<<x2096);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2097 = INT64_MAX;
	int16_t x2098 = INT16_MIN;
	volatile uint64_t x2099 = 101410654LLU;
	int64_t x2100 = 1LL;
	int32_t t64 = 728;

	t64 = (((x2097<x2098)<x2099)<<x2100);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2114 = 10736;
	volatile int32_t x2115 = INT32_MIN;
	static uint16_t x2116 = 0U;
	static volatile int32_t t65 = -5796;

	t65 = (((x2113<x2114)<x2115)<<x2116);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x2150 = 121U;
	int32_t x2151 = -80;
	volatile int32_t t66 = -8202;

	t66 = (((x2149<x2150)<x2151)<<x2152);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2153 = -164150508774501395LL;
	volatile uint64_t x2154 = 120730741LLU;
	int8_t x2155 = INT8_MAX;
	static uint16_t x2156 = 5U;
	volatile int32_t t67 = -43300;

	t67 = (((x2153<x2154)<x2155)<<x2156);

	if (t67 != 32) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x2165 = INT64_MIN;
	static int16_t x2166 = INT16_MAX;
	int16_t x2167 = 7099;
	uint8_t x2168 = 7U;
	volatile int32_t t68 = 2185;

	t68 = (((x2165<x2166)<x2167)<<x2168);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2201 = 33U;
	int32_t t69 = -67;

	t69 = (((x2201<x2202)<x2203)<<x2204);

	if (t69 != 1024) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2221 = INT64_MIN;
	int8_t x2222 = INT8_MIN;
	int32_t t70 = -53043;

	t70 = (((x2221<x2222)<x2223)<<x2224);

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x2237 = 2;
	static uint8_t x2238 = UINT8_MAX;
	static int8_t x2239 = -6;
	int8_t x2240 = 0;
	int32_t t71 = -9626;

	t71 = (((x2237<x2238)<x2239)<<x2240);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2261 = INT16_MIN;
	volatile int64_t x2262 = INT64_MIN;
	uint8_t x2264 = 2U;
	volatile int32_t t72 = -1206739;

	t72 = (((x2261<x2262)<x2263)<<x2264);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x2265 = -1;
	uint16_t x2266 = 45U;
	int16_t x2268 = 2;
	static volatile int32_t t73 = 81662350;

	t73 = (((x2265<x2266)<x2267)<<x2268);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2297 = UINT16_MAX;
	uint8_t x2300 = 15U;

	t74 = (((x2297<x2298)<x2299)<<x2300);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2321 = 28U;
	int16_t x2324 = 3;
	volatile int32_t t75 = -6890311;

	t75 = (((x2321<x2322)<x2323)<<x2324);

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2421 = INT8_MAX;
	volatile int32_t x2422 = INT32_MIN;
	int8_t x2423 = INT8_MIN;
	uint8_t x2424 = 1U;

	t76 = (((x2421<x2422)<x2423)<<x2424);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x2453 = 29;
	uint64_t x2454 = UINT64_MAX;
	uint16_t x2455 = 58U;
	volatile int32_t t77 = -83;

	t77 = (((x2453<x2454)<x2455)<<x2456);

	if (t77 != 33554432) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x2457 = UINT16_MAX;
	uint64_t x2459 = UINT64_MAX;
	static uint8_t x2460 = 0U;
	int32_t t78 = 5531;

	t78 = (((x2457<x2458)<x2459)<<x2460);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2509 = 3U;
	static int8_t x2510 = INT8_MAX;
	static int16_t x2512 = 30;
	int32_t t79 = -3377;

	t79 = (((x2509<x2510)<x2511)<<x2512);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2525 = INT32_MAX;
	static uint16_t x2526 = UINT16_MAX;
	int16_t x2527 = INT16_MIN;
	volatile int8_t x2528 = 1;

	t80 = (((x2525<x2526)<x2527)<<x2528);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2589 = 46505;
	static int16_t x2590 = 283;
	int8_t x2591 = 1;
	uint16_t x2592 = 26U;
	int32_t t81 = -471855;

	t81 = (((x2589<x2590)<x2591)<<x2592);

	if (t81 != 67108864) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2673 = 3U;
	int8_t x2674 = INT8_MIN;
	static int64_t x2675 = INT64_MIN;
	int8_t x2676 = 0;
	static volatile int32_t t82 = -194;

	t82 = (((x2673<x2674)<x2675)<<x2676);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x2721 = -1LL;
	uint64_t x2722 = 6556238LLU;
	int64_t x2723 = INT64_MIN;
	int64_t x2724 = 1LL;
	volatile int32_t t83 = -627124635;

	t83 = (((x2721<x2722)<x2723)<<x2724);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x2889 = INT32_MIN;
	static volatile int16_t x2891 = INT16_MIN;
	uint32_t x2892 = 3U;
	volatile int32_t t84 = -123;

	t84 = (((x2889<x2890)<x2891)<<x2892);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2901 = INT8_MIN;
	int64_t x2902 = INT64_MAX;
	static uint32_t x2903 = 1408U;
	int8_t x2904 = 1;
	volatile int32_t t85 = 1;

	t85 = (((x2901<x2902)<x2903)<<x2904);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x2905 = 29LL;
	uint8_t x2907 = UINT8_MAX;
	uint8_t x2908 = 22U;
	int32_t t86 = 3;

	t86 = (((x2905<x2906)<x2907)<<x2908);

	if (t86 != 4194304) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2969 = 1722569705083136LL;
	int8_t x2970 = INT8_MIN;
	static uint16_t x2971 = UINT16_MAX;
	uint32_t x2972 = 3U;
	volatile int32_t t87 = -112668;

	t87 = (((x2969<x2970)<x2971)<<x2972);

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x2981 = 14531U;
	int8_t x2982 = 5;
	static int32_t x2983 = 381849212;
	int8_t x2984 = 0;
	volatile int32_t t88 = 403543;

	t88 = (((x2981<x2982)<x2983)<<x2984);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3049 = UINT64_MAX;
	int64_t x3050 = 2190325553604LL;
	int16_t x3052 = 0;
	int32_t t89 = 1187;

	t89 = (((x3049<x3050)<x3051)<<x3052);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3091 = INT64_MAX;
	volatile int8_t x3092 = 12;
	int32_t t90 = 26385;

	t90 = (((x3089<x3090)<x3091)<<x3092);

	if (t90 != 4096) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3138 = -1;
	int8_t x3139 = INT8_MIN;
	uint8_t x3140 = 1U;
	volatile int32_t t91 = 5188792;

	t91 = (((x3137<x3138)<x3139)<<x3140);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3177 = UINT16_MAX;
	static int32_t x3178 = INT32_MAX;
	uint32_t x3179 = 24685U;
	static int8_t x3180 = 0;
	volatile int32_t t92 = 338373864;

	t92 = (((x3177<x3178)<x3179)<<x3180);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3205 = -20;
	int8_t x3206 = INT8_MAX;
	uint16_t x3207 = 12U;
	int16_t x3208 = 2;
	volatile int32_t t93 = 14;

	t93 = (((x3205<x3206)<x3207)<<x3208);

	if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3237 = 8286080556204LLU;
	int64_t x3238 = INT64_MIN;
	int32_t x3239 = -1;
	static volatile uint16_t x3240 = 5U;
	volatile int32_t t94 = 7020217;

	t94 = (((x3237<x3238)<x3239)<<x3240);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3257 = INT8_MIN;
	int8_t x3258 = -1;
	int32_t x3259 = -1;
	volatile int32_t t95 = 2299;

	t95 = (((x3257<x3258)<x3259)<<x3260);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x3361 = INT16_MAX;
	static uint8_t x3364 = 7U;

	t96 = (((x3361<x3362)<x3363)<<x3364);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3429 = INT16_MAX;
	int32_t x3432 = 1;
	volatile int32_t t97 = 22;

	t97 = (((x3429<x3430)<x3431)<<x3432);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3437 = -1LL;
	volatile int8_t x3438 = 0;
	int64_t x3439 = INT64_MIN;
	uint8_t x3440 = 4U;
	volatile int32_t t98 = -12;

	t98 = (((x3437<x3438)<x3439)<<x3440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x3477 = UINT8_MAX;
	int8_t x3479 = 1;
	uint16_t x3480 = 3U;
	int32_t t99 = -5;

	t99 = (((x3477<x3478)<x3479)<<x3480);

	if (t99 != 8) { NG(); } else { ; }
	
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

