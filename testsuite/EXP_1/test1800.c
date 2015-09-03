#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = -1;
int32_t t0 = 140;
static int32_t x27 = 114;
volatile int16_t x70 = INT16_MIN;
volatile uint8_t x96 = 6U;
static int32_t t4 = 205;
uint16_t x108 = 15U;
static int32_t t7 = -1;
int32_t x278 = -4954250;
static int64_t x279 = INT64_MIN;
static uint8_t x302 = 1U;
int8_t x329 = -1;
uint16_t x332 = 7U;
volatile int32_t t13 = 1302439;
volatile int16_t x357 = INT16_MIN;
int16_t x358 = -1;
int32_t t14 = 19474372;
volatile int32_t t15 = -94;
uint32_t x453 = UINT32_MAX;
int32_t x455 = INT32_MIN;
int32_t x470 = INT32_MIN;
volatile int32_t t19 = 25129;
int8_t x516 = 6;
int8_t x535 = INT8_MIN;
static uint64_t x536 = 2LLU;
volatile uint8_t x552 = 0U;
int16_t x589 = INT16_MIN;
int8_t x590 = -1;
volatile uint64_t x605 = 456450985445LLU;
volatile int32_t t26 = -7;
int16_t x679 = INT16_MIN;
uint8_t x701 = 0U;
int32_t x734 = INT32_MIN;
int32_t x767 = -359671;
uint32_t x773 = 67U;
volatile int32_t t33 = -118;
static volatile int64_t x823 = -1LL;
int32_t t36 = -747293997;
int8_t x844 = 1;
int16_t x935 = INT16_MIN;
uint8_t x936 = 2U;
int32_t t41 = 22263;
volatile int32_t t42 = -19406;
int16_t x1110 = INT16_MIN;
static volatile int8_t x1112 = 3;
uint8_t x1124 = 2U;
volatile int8_t x1134 = INT8_MIN;
static int32_t x1155 = -1;
volatile int32_t x1233 = -1;
static int32_t x1238 = 109;
uint8_t x1240 = 3U;
int64_t x1261 = INT64_MIN;
static uint32_t x1262 = UINT32_MAX;
int16_t x1290 = -154;
uint32_t x1292 = 1U;
uint8_t x1388 = 11U;
uint16_t x1397 = UINT16_MAX;
static int32_t x1399 = INT32_MIN;
volatile int16_t x1411 = INT16_MIN;
static int8_t x1422 = 3;
volatile uint8_t x1424 = 24U;
int32_t t57 = 336274;
int32_t t58 = -747267375;
int64_t x1446 = INT64_MIN;
int16_t x1447 = 88;
int32_t x1520 = 12;
uint16_t x1535 = 1000U;
uint64_t x1549 = 2142906505518441LLU;
uint8_t x1604 = 4U;
int8_t x1614 = 3;
static volatile uint16_t x1681 = UINT16_MAX;
int8_t x1683 = -1;
int32_t x1727 = -253;
int8_t x1759 = INT8_MIN;
uint32_t x1833 = 396237987U;
static int8_t x1834 = 1;
int32_t t72 = 826;
static int32_t x1946 = -465101;
uint32_t x2066 = UINT32_MAX;
int32_t t77 = -25788093;
static volatile int32_t t78 = 2;
int64_t x2187 = INT64_MAX;
uint16_t x2296 = 23U;
int16_t x2359 = 15249;
int32_t t84 = -30346287;
int32_t t87 = -1;
static volatile uint16_t x2533 = UINT16_MAX;
volatile int32_t t88 = 2929;
int8_t x2584 = 0;
volatile int32_t t89 = -44902;
volatile int16_t x2606 = INT16_MIN;
uint64_t x2608 = 0LLU;
int64_t x2634 = INT64_MIN;
int32_t t93 = -204;
volatile int8_t x2884 = 0;
int64_t x2946 = -1LL;


void f0(void) {
	int8_t x1 = 0;
	int16_t x2 = -77;
	uint8_t x4 = 20U;

	t0 = (((x1&x2)<x3)<<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x25 = UINT32_MAX;
	volatile int8_t x26 = 55;
	uint8_t x28 = 3U;
	int32_t t1 = -5018;

	t1 = (((x25&x26)<x27)<<x28);

	if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x37 = INT32_MIN;
	uint8_t x38 = 12U;
	uint16_t x39 = UINT16_MAX;
	static int8_t x40 = 5;
	int32_t t2 = 0;

	t2 = (((x37&x38)<x39)<<x40);

	if (t2 != 32) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x69 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 7U;
	volatile int32_t t3 = 0;

	t3 = (((x69&x70)<x71)<<x72);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x93 = INT8_MIN;
	static uint16_t x94 = 2376U;
	int32_t x95 = INT32_MIN;

	t4 = (((x93&x94)<x95)<<x96);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x101 = 579255781LL;
	int64_t x102 = 6392587LL;
	static int8_t x103 = INT8_MIN;
	uint8_t x104 = 3U;
	int32_t t5 = 168226863;

	t5 = (((x101&x102)<x103)<<x104);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = 3;
	uint16_t x107 = 238U;
	int32_t t6 = 11186;

	t6 = (((x105&x106)<x107)<<x108);

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x165 = 6326;
	int8_t x166 = INT8_MAX;
	uint64_t x167 = UINT64_MAX;
	uint16_t x168 = 3U;

	t7 = (((x165&x166)<x167)<<x168);

	if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x185 = 20;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MAX;
	static uint8_t x188 = 2U;
	static volatile int32_t t8 = 117635;

	t8 = (((x185&x186)<x187)<<x188);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x253 = 28136U;
	int32_t x254 = 89267;
	int16_t x255 = -215;
	static uint32_t x256 = 1U;
	volatile int32_t t9 = 191502;

	t9 = (((x253&x254)<x255)<<x256);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x277 = 9;
	uint16_t x280 = 21U;
	int32_t t10 = 17;

	t10 = (((x277&x278)<x279)<<x280);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x297 = INT32_MIN;
	static int32_t x298 = INT32_MAX;
	int8_t x299 = INT8_MAX;
	static int8_t x300 = 2;
	int32_t t11 = -1;

	t11 = (((x297&x298)<x299)<<x300);

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x301 = INT64_MIN;
	int16_t x303 = INT16_MAX;
	static int16_t x304 = 0;
	static int32_t t12 = -1;

	t12 = (((x301&x302)<x303)<<x304);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x330 = UINT8_MAX;
	int16_t x331 = INT16_MIN;

	t13 = (((x329&x330)<x331)<<x332);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x359 = INT8_MIN;
	static volatile uint8_t x360 = 15U;

	t14 = (((x357&x358)<x359)<<x360);

	if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x381 = -1;
	int8_t x382 = 49;
	uint16_t x383 = UINT16_MAX;
	static uint16_t x384 = 1U;

	t15 = (((x381&x382)<x383)<<x384);

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x417 = 39683344U;
	volatile uint8_t x418 = 1U;
	int8_t x419 = 7;
	uint64_t x420 = 1LLU;
	int32_t t16 = -1019492;

	t16 = (((x417&x418)<x419)<<x420);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x454 = INT16_MAX;
	uint8_t x456 = 2U;
	volatile int32_t t17 = -8;

	t17 = (((x453&x454)<x455)<<x456);

	if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x469 = INT32_MIN;
	volatile int64_t x471 = INT64_MIN;
	int8_t x472 = 1;
	volatile int32_t t18 = -4;

	t18 = (((x469&x470)<x471)<<x472);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x485 = 587;
	uint8_t x486 = UINT8_MAX;
	uint16_t x487 = 1877U;
	static uint8_t x488 = 14U;

	t19 = (((x485&x486)<x487)<<x488);

	if (t19 != 16384) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x513 = 224LLU;
	uint32_t x514 = 1U;
	int64_t x515 = -1LL;
	int32_t t20 = 479;

	t20 = (((x513&x514)<x515)<<x516);

	if (t20 != 64) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x533 = UINT16_MAX;
	uint8_t x534 = UINT8_MAX;
	int32_t t21 = 3;

	t21 = (((x533&x534)<x535)<<x536);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x549 = 11U;
	static uint32_t x550 = 1949667904U;
	static int32_t x551 = 11475342;
	int32_t t22 = 16310271;

	t22 = (((x549&x550)<x551)<<x552);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x553 = UINT64_MAX;
	volatile int32_t x554 = INT32_MAX;
	int64_t x555 = INT64_MAX;
	volatile uint16_t x556 = 2U;
	volatile int32_t t23 = -2994;

	t23 = (((x553&x554)<x555)<<x556);

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x573 = INT16_MAX;
	volatile int32_t x574 = INT32_MAX;
	volatile int16_t x575 = INT16_MAX;
	int8_t x576 = 1;
	int32_t t24 = -5;

	t24 = (((x573&x574)<x575)<<x576);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x591 = UINT64_MAX;
	uint8_t x592 = 1U;
	volatile int32_t t25 = -8031708;

	t25 = (((x589&x590)<x591)<<x592);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x606 = UINT64_MAX;
	int64_t x607 = 84602LL;
	volatile uint16_t x608 = 3U;

	t26 = (((x605&x606)<x607)<<x608);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x617 = -21LL;
	int32_t x618 = -1361209;
	int64_t x619 = INT64_MIN;
	volatile uint64_t x620 = 15LLU;
	static int32_t t27 = -3141573;

	t27 = (((x617&x618)<x619)<<x620);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x665 = INT16_MAX;
	int8_t x666 = INT8_MIN;
	int32_t x667 = 9110;
	int8_t x668 = 1;
	int32_t t28 = -1546512;

	t28 = (((x665&x666)<x667)<<x668);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x677 = -15004;
	static uint32_t x678 = UINT32_MAX;
	static uint32_t x680 = 30U;
	volatile int32_t t29 = -9995590;

	t29 = (((x677&x678)<x679)<<x680);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x702 = -1;
	int8_t x703 = INT8_MAX;
	volatile int8_t x704 = 1;
	static int32_t t30 = 301927;

	t30 = (((x701&x702)<x703)<<x704);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x733 = 241724063LLU;
	int64_t x735 = -1LL;
	int8_t x736 = 0;
	int32_t t31 = 94;

	t31 = (((x733&x734)<x735)<<x736);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x765 = -14;
	static uint32_t x766 = 78900U;
	uint64_t x768 = 0LLU;
	int32_t t32 = -608355029;

	t32 = (((x765&x766)<x767)<<x768);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x774 = -1;
	static uint16_t x775 = 140U;
	static uint8_t x776 = 8U;

	t33 = (((x773&x774)<x775)<<x776);

	if (t33 != 256) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x785 = UINT8_MAX;
	volatile int16_t x786 = INT16_MAX;
	int32_t x787 = INT32_MIN;
	int16_t x788 = 0;
	volatile int32_t t34 = 24;

	t34 = (((x785&x786)<x787)<<x788);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x793 = INT16_MIN;
	int8_t x794 = INT8_MAX;
	static uint32_t x795 = 342U;
	static uint8_t x796 = 3U;
	static volatile int32_t t35 = -134110965;

	t35 = (((x793&x794)<x795)<<x796);

	if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x821 = INT64_MIN;
	int16_t x822 = INT16_MIN;
	uint8_t x824 = 3U;

	t36 = (((x821&x822)<x823)<<x824);

	if (t36 != 8) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x841 = 19946495U;
	volatile int16_t x842 = INT16_MIN;
	int64_t x843 = INT64_MIN;
	volatile int32_t t37 = -1947868;

	t37 = (((x841&x842)<x843)<<x844);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x917 = INT64_MIN;
	static uint32_t x918 = 17221576U;
	int16_t x919 = -1;
	uint8_t x920 = 3U;
	volatile int32_t t38 = -4077;

	t38 = (((x917&x918)<x919)<<x920);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x933 = -2;
	int32_t x934 = 96;
	int32_t t39 = 232320;

	t39 = (((x933&x934)<x935)<<x936);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x941 = 1570;
	int32_t x942 = -648;
	volatile int8_t x943 = INT8_MIN;
	uint16_t x944 = 14U;
	volatile int32_t t40 = -760;

	t40 = (((x941&x942)<x943)<<x944);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x989 = INT16_MIN;
	int16_t x990 = INT16_MIN;
	static uint8_t x991 = 22U;
	uint16_t x992 = 27U;

	t41 = (((x989&x990)<x991)<<x992);

	if (t41 != 134217728) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1025 = INT8_MIN;
	static int8_t x1026 = INT8_MIN;
	volatile uint16_t x1027 = UINT16_MAX;
	volatile uint8_t x1028 = 1U;

	t42 = (((x1025&x1026)<x1027)<<x1028);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1089 = 35U;
	int16_t x1090 = INT16_MAX;
	volatile int16_t x1091 = 102;
	uint8_t x1092 = 5U;
	static int32_t t43 = -190554518;

	t43 = (((x1089&x1090)<x1091)<<x1092);

	if (t43 != 32) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x1101 = -1;
	uint32_t x1102 = 3U;
	int8_t x1103 = -2;
	uint16_t x1104 = 2U;
	static volatile int32_t t44 = -84152304;

	t44 = (((x1101&x1102)<x1103)<<x1104);

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x1109 = 69U;
	int32_t x1111 = INT32_MIN;
	volatile int32_t t45 = 3028691;

	t45 = (((x1109&x1110)<x1111)<<x1112);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1121 = 1633U;
	uint64_t x1122 = 207LLU;
	int8_t x1123 = INT8_MIN;
	int32_t t46 = -267532985;

	t46 = (((x1121&x1122)<x1123)<<x1124);

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1133 = 103242369LL;
	int16_t x1135 = -8;
	volatile uint8_t x1136 = 1U;
	volatile int32_t t47 = -47378794;

	t47 = (((x1133&x1134)<x1135)<<x1136);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1153 = 24;
	uint8_t x1154 = 56U;
	volatile uint8_t x1156 = 0U;
	int32_t t48 = -404708897;

	t48 = (((x1153&x1154)<x1155)<<x1156);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1234 = INT32_MIN;
	volatile int16_t x1235 = INT16_MIN;
	uint16_t x1236 = 4U;
	int32_t t49 = 1;

	t49 = (((x1233&x1234)<x1235)<<x1236);

	if (t49 != 16) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1237 = INT16_MIN;
	static int64_t x1239 = 0LL;
	static volatile int32_t t50 = 277479;

	t50 = (((x1237&x1238)<x1239)<<x1240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1241 = -1;
	int64_t x1242 = -12521LL;
	static int16_t x1243 = INT16_MIN;
	uint8_t x1244 = 6U;
	int32_t t51 = 216762660;

	t51 = (((x1241&x1242)<x1243)<<x1244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1263 = 0;
	int8_t x1264 = 7;
	static volatile int32_t t52 = 707;

	t52 = (((x1261&x1262)<x1263)<<x1264);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1289 = INT8_MIN;
	static volatile int32_t x1291 = -38;
	static int32_t t53 = 1071;

	t53 = (((x1289&x1290)<x1291)<<x1292);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1385 = INT8_MIN;
	uint32_t x1386 = 0U;
	volatile int8_t x1387 = INT8_MAX;
	static volatile int32_t t54 = -54336418;

	t54 = (((x1385&x1386)<x1387)<<x1388);

	if (t54 != 2048) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1398 = -1;
	int8_t x1400 = 1;
	static volatile int32_t t55 = 4845;

	t55 = (((x1397&x1398)<x1399)<<x1400);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x1409 = 778U;
	int32_t x1410 = INT32_MIN;
	int16_t x1412 = 7;
	int32_t t56 = -946;

	t56 = (((x1409&x1410)<x1411)<<x1412);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1421 = UINT64_MAX;
	uint64_t x1423 = 370382712031051727LLU;

	t57 = (((x1421&x1422)<x1423)<<x1424);

	if (t57 != 16777216) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x1425 = UINT64_MAX;
	int64_t x1426 = -492733816LL;
	int8_t x1427 = INT8_MIN;
	volatile int8_t x1428 = 5;

	t58 = (((x1425&x1426)<x1427)<<x1428);

	if (t58 != 32) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x1445 = 9U;
	static uint8_t x1448 = 2U;
	int32_t t59 = 9348143;

	t59 = (((x1445&x1446)<x1447)<<x1448);

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x1517 = -1;
	volatile uint8_t x1518 = UINT8_MAX;
	volatile uint32_t x1519 = 183046449U;
	volatile int32_t t60 = -102642;

	t60 = (((x1517&x1518)<x1519)<<x1520);

	if (t60 != 4096) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1533 = 0U;
	static int32_t x1534 = -1;
	volatile uint8_t x1536 = 0U;
	static volatile int32_t t61 = 549547;

	t61 = (((x1533&x1534)<x1535)<<x1536);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1550 = -1LL;
	uint64_t x1551 = UINT64_MAX;
	static int16_t x1552 = 4;
	volatile int32_t t62 = 0;

	t62 = (((x1549&x1550)<x1551)<<x1552);

	if (t62 != 16) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1601 = 60;
	int32_t x1602 = INT32_MIN;
	int32_t x1603 = INT32_MIN;
	volatile int32_t t63 = -356197;

	t63 = (((x1601&x1602)<x1603)<<x1604);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x1613 = INT32_MIN;
	uint8_t x1615 = 1U;
	static int8_t x1616 = 22;
	static int32_t t64 = -122848416;

	t64 = (((x1613&x1614)<x1615)<<x1616);

	if (t64 != 4194304) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1653 = INT16_MAX;
	int8_t x1654 = -1;
	uint16_t x1655 = 168U;
	uint16_t x1656 = 1U;
	static volatile int32_t t65 = 53;

	t65 = (((x1653&x1654)<x1655)<<x1656);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x1682 = 1856711;
	uint8_t x1684 = 7U;
	volatile int32_t t66 = 106;

	t66 = (((x1681&x1682)<x1683)<<x1684);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1725 = 1;
	static int16_t x1726 = -1;
	uint8_t x1728 = 15U;
	int32_t t67 = -28291;

	t67 = (((x1725&x1726)<x1727)<<x1728);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x1741 = 12LL;
	int64_t x1742 = INT64_MAX;
	int8_t x1743 = INT8_MIN;
	uint8_t x1744 = 27U;
	int32_t t68 = 2759593;

	t68 = (((x1741&x1742)<x1743)<<x1744);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1757 = UINT16_MAX;
	uint16_t x1758 = 23U;
	int8_t x1760 = 9;
	int32_t t69 = -120872;

	t69 = (((x1757&x1758)<x1759)<<x1760);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1793 = INT32_MAX;
	int64_t x1794 = INT64_MIN;
	int8_t x1795 = INT8_MIN;
	uint16_t x1796 = 7U;
	int32_t t70 = 0;

	t70 = (((x1793&x1794)<x1795)<<x1796);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x1813 = 237126258U;
	static int32_t x1814 = 98791;
	static uint8_t x1815 = 3U;
	int8_t x1816 = 1;
	int32_t t71 = -199565357;

	t71 = (((x1813&x1814)<x1815)<<x1816);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1835 = -102186;
	uint32_t x1836 = 0U;

	t72 = (((x1833&x1834)<x1835)<<x1836);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x1913 = INT16_MAX;
	static uint16_t x1914 = 1U;
	int8_t x1915 = INT8_MIN;
	uint16_t x1916 = 1U;
	volatile int32_t t73 = -27;

	t73 = (((x1913&x1914)<x1915)<<x1916);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1945 = INT8_MAX;
	static int8_t x1947 = 0;
	uint32_t x1948 = 9U;
	int32_t t74 = -771474;

	t74 = (((x1945&x1946)<x1947)<<x1948);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2005 = 55LLU;
	uint64_t x2006 = UINT64_MAX;
	int64_t x2007 = INT64_MIN;
	volatile uint16_t x2008 = 1U;
	volatile int32_t t75 = 237403655;

	t75 = (((x2005&x2006)<x2007)<<x2008);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2061 = 25927526;
	volatile int16_t x2062 = -104;
	int32_t x2063 = 21042848;
	uint16_t x2064 = 5U;
	volatile int32_t t76 = -5782;

	t76 = (((x2061&x2062)<x2063)<<x2064);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2065 = INT64_MAX;
	uint8_t x2067 = 1U;
	int8_t x2068 = 1;

	t77 = (((x2065&x2066)<x2067)<<x2068);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x2137 = INT32_MIN;
	volatile int64_t x2138 = -1LL;
	int8_t x2139 = INT8_MIN;
	static uint8_t x2140 = 4U;

	t78 = (((x2137&x2138)<x2139)<<x2140);

	if (t78 != 16) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x2185 = 510679LL;
	int64_t x2186 = INT64_MIN;
	volatile int16_t x2188 = 6;
	static int32_t t79 = -7335;

	t79 = (((x2185&x2186)<x2187)<<x2188);

	if (t79 != 64) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x2253 = 205117048;
	static volatile uint64_t x2254 = UINT64_MAX;
	int16_t x2255 = -39;
	volatile int8_t x2256 = 4;
	int32_t t80 = 1;

	t80 = (((x2253&x2254)<x2255)<<x2256);

	if (t80 != 16) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2265 = 386145796U;
	uint8_t x2266 = 0U;
	uint16_t x2267 = 6U;
	int16_t x2268 = 0;
	volatile int32_t t81 = 4249;

	t81 = (((x2265&x2266)<x2267)<<x2268);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2293 = INT16_MAX;
	volatile int64_t x2294 = INT64_MAX;
	int32_t x2295 = 435376554;
	volatile int32_t t82 = 3;

	t82 = (((x2293&x2294)<x2295)<<x2296);

	if (t82 != 8388608) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2317 = INT64_MIN;
	volatile uint32_t x2318 = 1U;
	static int16_t x2319 = INT16_MIN;
	volatile int8_t x2320 = 1;
	volatile int32_t t83 = 48815160;

	t83 = (((x2317&x2318)<x2319)<<x2320);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2357 = INT8_MIN;
	uint8_t x2358 = 0U;
	uint8_t x2360 = 14U;

	t84 = (((x2357&x2358)<x2359)<<x2360);

	if (t84 != 16384) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2381 = INT8_MIN;
	volatile int16_t x2382 = INT16_MIN;
	static uint64_t x2383 = 44655774622LLU;
	static volatile uint8_t x2384 = 2U;
	static int32_t t85 = 273200;

	t85 = (((x2381&x2382)<x2383)<<x2384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x2385 = INT16_MAX;
	uint8_t x2386 = 5U;
	int16_t x2387 = 985;
	static uint8_t x2388 = 1U;
	int32_t t86 = -4;

	t86 = (((x2385&x2386)<x2387)<<x2388);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x2421 = INT64_MIN;
	volatile int32_t x2422 = INT32_MAX;
	uint8_t x2423 = UINT8_MAX;
	uint8_t x2424 = 1U;

	t87 = (((x2421&x2422)<x2423)<<x2424);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2534 = INT64_MIN;
	int8_t x2535 = INT8_MIN;
	uint16_t x2536 = 28U;

	t88 = (((x2533&x2534)<x2535)<<x2536);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2581 = 842909305;
	int64_t x2582 = INT64_MAX;
	volatile int32_t x2583 = INT32_MIN;

	t89 = (((x2581&x2582)<x2583)<<x2584);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2605 = -306;
	int8_t x2607 = INT8_MIN;
	int32_t t90 = -1;

	t90 = (((x2605&x2606)<x2607)<<x2608);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2633 = -1;
	int16_t x2635 = INT16_MAX;
	volatile int16_t x2636 = 1;
	int32_t t91 = -21594781;

	t91 = (((x2633&x2634)<x2635)<<x2636);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2693 = 11U;
	static int64_t x2694 = INT64_MAX;
	uint32_t x2695 = UINT32_MAX;
	int8_t x2696 = 0;
	volatile int32_t t92 = 732942;

	t92 = (((x2693&x2694)<x2695)<<x2696);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x2745 = UINT16_MAX;
	static int32_t x2746 = INT32_MIN;
	volatile uint16_t x2747 = 1U;
	uint8_t x2748 = 1U;

	t93 = (((x2745&x2746)<x2747)<<x2748);

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2785 = INT8_MIN;
	static volatile int64_t x2786 = INT64_MIN;
	int64_t x2787 = -91630020570982448LL;
	volatile uint8_t x2788 = 7U;
	volatile int32_t t94 = -53;

	t94 = (((x2785&x2786)<x2787)<<x2788);

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2793 = -1;
	volatile int8_t x2794 = 7;
	int64_t x2795 = INT64_MAX;
	int8_t x2796 = 0;
	volatile int32_t t95 = 23632465;

	t95 = (((x2793&x2794)<x2795)<<x2796);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x2801 = 1U;
	static uint8_t x2802 = 12U;
	uint16_t x2803 = UINT16_MAX;
	uint8_t x2804 = 19U;
	static int32_t t96 = -15;

	t96 = (((x2801&x2802)<x2803)<<x2804);

	if (t96 != 524288) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2881 = 1U;
	volatile int64_t x2882 = INT64_MIN;
	int8_t x2883 = 1;
	static int32_t t97 = -733957056;

	t97 = (((x2881&x2882)<x2883)<<x2884);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2945 = 0;
	volatile int64_t x2947 = INT64_MAX;
	int8_t x2948 = 1;
	volatile int32_t t98 = -443002;

	t98 = (((x2945&x2946)<x2947)<<x2948);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2973 = INT64_MAX;
	int64_t x2974 = INT64_MIN;
	volatile uint16_t x2975 = UINT16_MAX;
	int8_t x2976 = 13;
	volatile int32_t t99 = -955992308;

	t99 = (((x2973&x2974)<x2975)<<x2976);

	if (t99 != 8192) { NG(); } else { ; }
	
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

