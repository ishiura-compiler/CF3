#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -16633107;
int64_t x78 = 7199087911101LL;
int8_t x98 = INT8_MAX;
int8_t x100 = 14;
uint64_t x109 = 0LLU;
static int32_t x110 = -4913;
volatile uint16_t x111 = UINT16_MAX;
int32_t t4 = 0;
int16_t x131 = 14436;
uint8_t x182 = UINT8_MAX;
volatile uint8_t x222 = 3U;
int32_t x224 = 7;
int16_t x272 = 2;
static uint16_t x293 = 1U;
uint16_t x296 = 1U;
static uint16_t x401 = 78U;
int32_t t11 = 850833693;
volatile int32_t t12 = -7364;
int32_t t14 = 0;
int16_t x564 = 0;
int32_t x611 = INT32_MIN;
uint8_t x612 = 29U;
int32_t t18 = -348;
int8_t x619 = -54;
uint8_t x620 = 9U;
volatile uint32_t x640 = 2U;
static int32_t x671 = -373324205;
int64_t x717 = 9LL;
static volatile int32_t t24 = 681;
int32_t t27 = 895192;
static int64_t x1049 = INT64_MAX;
static uint64_t x1050 = UINT64_MAX;
int16_t x1073 = 722;
uint16_t x1074 = 6U;
uint8_t x1075 = 35U;
uint32_t x1110 = 106278902U;
int16_t x1141 = -581;
uint8_t x1157 = 3U;
volatile int32_t t38 = -2;
uint8_t x1164 = 1U;
volatile uint16_t x1231 = 5U;
int16_t x1249 = -63;
uint32_t x1250 = 998713594U;
int32_t x1262 = INT32_MIN;
static uint16_t x1288 = 0U;
static uint8_t x1341 = 2U;
volatile int8_t x1342 = INT8_MIN;
int32_t t44 = 48686;
int64_t x1382 = INT64_MIN;
int32_t t45 = -518557;
static volatile int32_t t46 = -117;
int64_t x1467 = INT64_MAX;
static volatile int8_t x1482 = INT8_MAX;
uint8_t x1483 = 14U;
volatile int32_t t48 = 3741;
volatile int32_t x1553 = INT32_MIN;
uint32_t x1554 = 431306151U;
int64_t x1557 = INT64_MAX;
static int8_t x1559 = INT8_MIN;
uint32_t x1560 = 2U;
int16_t x1597 = -1;
static int8_t x1598 = -1;
uint8_t x1617 = 4U;
int16_t x1621 = INT16_MAX;
int32_t x1749 = -42;
int8_t x1751 = 45;
volatile int8_t x1752 = 0;
uint32_t x1771 = 66122406U;
volatile uint32_t x1810 = 15624U;
static uint8_t x1812 = 0U;
int64_t x1958 = INT64_MIN;
static int32_t x2047 = INT32_MAX;
uint64_t x2109 = UINT64_MAX;
int32_t x2120 = 1;
int8_t x2133 = INT8_MIN;
int8_t x2159 = INT8_MIN;
int16_t x2209 = -1;
uint64_t x2214 = UINT64_MAX;
uint8_t x2215 = UINT8_MAX;
uint32_t x2309 = 66410017U;
static volatile int8_t x2310 = -44;
static volatile int16_t x2354 = INT16_MIN;
int32_t x2355 = INT32_MAX;
uint16_t x2410 = 31144U;
int8_t x2412 = 6;
uint16_t x2444 = 1U;
uint8_t x2466 = 65U;
int64_t x2554 = INT64_MIN;
int32_t t77 = -74538;
uint8_t x2564 = 4U;
volatile uint16_t x2615 = 8472U;
uint16_t x2764 = 0U;
int32_t t83 = 70087;
int64_t x2842 = -49106732186LL;
volatile int8_t x2960 = 0;
int32_t t86 = -3;
volatile int64_t x3065 = INT64_MIN;
volatile int32_t t88 = -133323541;
static int16_t x3081 = INT16_MIN;
volatile uint64_t x3082 = 32688158LLU;
uint32_t x3177 = UINT32_MAX;
volatile int8_t x3233 = 3;
volatile int32_t t91 = 332009;
int16_t x3294 = -192;
uint16_t x3324 = 4U;
int32_t t97 = 4502;
int8_t x3383 = INT8_MAX;
volatile int32_t t98 = -7475590;
static int32_t t99 = -62565356;


void f0(void) {
	volatile int8_t x5 = -1;
	static int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MIN;
	static uint16_t x8 = 0U;
	static volatile int32_t t0 = 169107;

	t0 = ((x5<(x6/x7))<<x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x33 = INT32_MAX;
	uint64_t x34 = 452790800468698LLU;
	int8_t x35 = 5;
	int64_t x36 = 8LL;

	t1 = ((x33<(x34/x35))<<x36);

	if (t1 != 256) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x77 = 596221966517067LL;
	volatile uint64_t x79 = UINT64_MAX;
	volatile int8_t x80 = 1;
	volatile int32_t t2 = 207878352;

	t2 = ((x77<(x78/x79))<<x80);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x97 = INT16_MIN;
	int32_t x99 = INT32_MIN;
	int32_t t3 = 3395350;

	t3 = ((x97<(x98/x99))<<x100);

	if (t3 != 16384) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x112 = 1;

	t4 = ((x109<(x110/x111))<<x112);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x129 = INT32_MAX;
	volatile int32_t x130 = -1;
	int32_t x132 = 0;
	int32_t t5 = 54;

	t5 = ((x129<(x130/x131))<<x132);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x181 = 100U;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = 2;
	int32_t t6 = 1;

	t6 = ((x181<(x182/x183))<<x184);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x221 = INT8_MIN;
	int32_t x223 = -1;
	int32_t t7 = -524407;

	t7 = ((x221<(x222/x223))<<x224);

	if (t7 != 128) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x269 = 18861539;
	uint16_t x270 = 6956U;
	volatile uint16_t x271 = 2U;
	int32_t t8 = -77;

	t8 = ((x269<(x270/x271))<<x272);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x294 = 3723;
	int8_t x295 = 7;
	volatile int32_t t9 = 1017;

	t9 = ((x293<(x294/x295))<<x296);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	uint8_t x312 = 0U;
	volatile int32_t t10 = -89670773;

	t10 = ((x309<(x310/x311))<<x312);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x402 = UINT64_MAX;
	static uint8_t x403 = 7U;
	int8_t x404 = 16;

	t11 = ((x401<(x402/x403))<<x404);

	if (t11 != 65536) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x433 = -1;
	volatile int16_t x434 = 372;
	int64_t x435 = INT64_MAX;
	int32_t x436 = 0;

	t12 = ((x433<(x434/x435))<<x436);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x465 = 1008LLU;
	int64_t x466 = -1LL;
	static int8_t x467 = INT8_MIN;
	uint8_t x468 = 6U;
	static int32_t t13 = -7;

	t13 = ((x465<(x466/x467))<<x468);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x489 = -1;
	int8_t x490 = INT8_MAX;
	int8_t x491 = INT8_MIN;
	uint8_t x492 = 2U;

	t14 = ((x489<(x490/x491))<<x492);

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x561 = -1;
	uint32_t x562 = UINT32_MAX;
	static uint8_t x563 = UINT8_MAX;
	int32_t t15 = -11262679;

	t15 = ((x561<(x562/x563))<<x564);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x565 = INT16_MIN;
	int64_t x566 = -5182425LL;
	int64_t x567 = INT64_MAX;
	static volatile int16_t x568 = 1;
	volatile int32_t t16 = 1;

	t16 = ((x565<(x566/x567))<<x568);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x593 = 3U;
	uint8_t x594 = UINT8_MAX;
	static uint64_t x595 = UINT64_MAX;
	volatile uint8_t x596 = 22U;
	int32_t t17 = 31572982;

	t17 = ((x593<(x594/x595))<<x596);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x609 = 1401850053214762690LL;
	uint64_t x610 = UINT64_MAX;

	t18 = ((x609<(x610/x611))<<x612);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x617 = 437435781LL;
	int8_t x618 = -7;
	int32_t t19 = 3167264;

	t19 = ((x617<(x618/x619))<<x620);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x633 = INT16_MIN;
	volatile int8_t x634 = INT8_MAX;
	int64_t x635 = INT64_MIN;
	uint8_t x636 = 1U;
	volatile int32_t t20 = -1691602;

	t20 = ((x633<(x634/x635))<<x636);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x637 = INT32_MAX;
	int8_t x638 = -1;
	static int32_t x639 = 23;
	volatile int32_t t21 = 27;

	t21 = ((x637<(x638/x639))<<x640);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x661 = INT8_MAX;
	int64_t x662 = INT64_MAX;
	int64_t x663 = -1532372293532458222LL;
	uint16_t x664 = 13U;
	volatile int32_t t22 = 26636926;

	t22 = ((x661<(x662/x663))<<x664);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x669 = INT16_MIN;
	int32_t x670 = 14724;
	uint8_t x672 = 3U;
	int32_t t23 = 0;

	t23 = ((x669<(x670/x671))<<x672);

	if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x718 = 0LL;
	volatile int16_t x719 = INT16_MIN;
	int8_t x720 = 1;

	t24 = ((x717<(x718/x719))<<x720);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x761 = 0U;
	int32_t x762 = -54159;
	volatile int8_t x763 = INT8_MIN;
	volatile uint16_t x764 = 2U;
	volatile int32_t t25 = 183;

	t25 = ((x761<(x762/x763))<<x764);

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x789 = -1;
	int8_t x790 = -41;
	uint64_t x791 = 170544010671781LLU;
	static uint8_t x792 = 3U;
	volatile int32_t t26 = -2;

	t26 = ((x789<(x790/x791))<<x792);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x793 = INT64_MAX;
	int32_t x794 = INT32_MAX;
	static volatile uint32_t x795 = 63884U;
	uint8_t x796 = 13U;

	t27 = ((x793<(x794/x795))<<x796);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x821 = INT16_MIN;
	uint32_t x822 = 6089U;
	volatile uint16_t x823 = 49U;
	uint8_t x824 = 2U;
	int32_t t28 = -31328942;

	t28 = ((x821<(x822/x823))<<x824);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x849 = INT64_MAX;
	uint64_t x850 = 29413083694LLU;
	int8_t x851 = INT8_MIN;
	int8_t x852 = 30;
	int32_t t29 = 6217;

	t29 = ((x849<(x850/x851))<<x852);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x913 = -1;
	uint32_t x914 = 131526776U;
	volatile int16_t x915 = -2355;
	static uint32_t x916 = 5U;
	static int32_t t30 = -270157676;

	t30 = ((x913<(x914/x915))<<x916);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x921 = INT16_MAX;
	int16_t x922 = INT16_MIN;
	volatile int8_t x923 = -1;
	volatile uint16_t x924 = 0U;
	static int32_t t31 = 2213;

	t31 = ((x921<(x922/x923))<<x924);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x977 = UINT8_MAX;
	int32_t x978 = INT32_MIN;
	volatile uint16_t x979 = 28060U;
	volatile int8_t x980 = 1;
	int32_t t32 = 1;

	t32 = ((x977<(x978/x979))<<x980);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1051 = 846U;
	uint8_t x1052 = 0U;
	int32_t t33 = 24;

	t33 = ((x1049<(x1050/x1051))<<x1052);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1076 = 7U;
	int32_t t34 = -428419778;

	t34 = ((x1073<(x1074/x1075))<<x1076);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1101 = 16U;
	int64_t x1102 = 4377062051483LL;
	static int16_t x1103 = 2962;
	static int8_t x1104 = 28;
	int32_t t35 = 33986496;

	t35 = ((x1101<(x1102/x1103))<<x1104);

	if (t35 != 268435456) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1109 = INT32_MIN;
	uint32_t x1111 = 1493U;
	volatile uint16_t x1112 = 0U;
	static int32_t t36 = -2880215;

	t36 = ((x1109<(x1110/x1111))<<x1112);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1142 = INT64_MAX;
	static int32_t x1143 = -110535334;
	uint16_t x1144 = 2U;
	int32_t t37 = 224579472;

	t37 = ((x1141<(x1142/x1143))<<x1144);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1158 = INT32_MIN;
	uint16_t x1159 = UINT16_MAX;
	int8_t x1160 = 1;

	t38 = ((x1157<(x1158/x1159))<<x1160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1161 = 129319339U;
	static int8_t x1162 = -1;
	int64_t x1163 = INT64_MIN;
	int32_t t39 = -77;

	t39 = ((x1161<(x1162/x1163))<<x1164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1229 = -1;
	static uint8_t x1230 = 70U;
	int8_t x1232 = 29;
	static volatile int32_t t40 = 316;

	t40 = ((x1229<(x1230/x1231))<<x1232);

	if (t40 != 536870912) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1251 = UINT32_MAX;
	static volatile int8_t x1252 = 0;
	volatile int32_t t41 = -58736;

	t41 = ((x1249<(x1250/x1251))<<x1252);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1261 = INT8_MAX;
	volatile int8_t x1263 = INT8_MAX;
	uint8_t x1264 = 3U;
	volatile int32_t t42 = 1108457;

	t42 = ((x1261<(x1262/x1263))<<x1264);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1285 = 24U;
	int64_t x1286 = INT64_MIN;
	int8_t x1287 = INT8_MIN;
	volatile int32_t t43 = 1294;

	t43 = ((x1285<(x1286/x1287))<<x1288);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1343 = 30153LLU;
	static int8_t x1344 = 15;

	t44 = ((x1341<(x1342/x1343))<<x1344);

	if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1381 = INT32_MAX;
	volatile int8_t x1383 = 1;
	int8_t x1384 = 1;

	t45 = ((x1381<(x1382/x1383))<<x1384);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1401 = INT16_MIN;
	int32_t x1402 = INT32_MIN;
	int8_t x1403 = INT8_MIN;
	static int8_t x1404 = 2;

	t46 = ((x1401<(x1402/x1403))<<x1404);

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1465 = -1;
	static int8_t x1466 = 7;
	int8_t x1468 = 1;
	int32_t t47 = 31841173;

	t47 = ((x1465<(x1466/x1467))<<x1468);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1481 = INT32_MIN;
	uint8_t x1484 = 16U;

	t48 = ((x1481<(x1482/x1483))<<x1484);

	if (t48 != 65536) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1513 = INT8_MIN;
	int64_t x1514 = INT64_MAX;
	volatile int16_t x1515 = INT16_MIN;
	uint16_t x1516 = 0U;
	volatile int32_t t49 = -677410604;

	t49 = ((x1513<(x1514/x1515))<<x1516);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1555 = INT16_MAX;
	uint16_t x1556 = 2U;
	volatile int32_t t50 = -872944584;

	t50 = ((x1553<(x1554/x1555))<<x1556);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1558 = -1;
	int32_t t51 = 27137754;

	t51 = ((x1557<(x1558/x1559))<<x1560);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1599 = -24;
	volatile uint8_t x1600 = 2U;
	int32_t t52 = 222566719;

	t52 = ((x1597<(x1598/x1599))<<x1600);

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x1618 = 3773U;
	int8_t x1619 = -1;
	int8_t x1620 = 1;
	static int32_t t53 = 507829;

	t53 = ((x1617<(x1618/x1619))<<x1620);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1622 = INT64_MAX;
	static int32_t x1623 = INT32_MAX;
	int16_t x1624 = 0;
	int32_t t54 = -1;

	t54 = ((x1621<(x1622/x1623))<<x1624);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1629 = -1;
	int8_t x1630 = INT8_MIN;
	static int64_t x1631 = -1LL;
	static uint32_t x1632 = 27U;
	static volatile int32_t t55 = -389162665;

	t55 = ((x1629<(x1630/x1631))<<x1632);

	if (t55 != 134217728) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1701 = 3352145102493874014LLU;
	volatile int16_t x1702 = -57;
	int64_t x1703 = INT64_MAX;
	volatile int16_t x1704 = 19;
	static volatile int32_t t56 = -1550476;

	t56 = ((x1701<(x1702/x1703))<<x1704);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1750 = -695;
	int32_t t57 = -5606;

	t57 = ((x1749<(x1750/x1751))<<x1752);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x1769 = -1;
	uint32_t x1770 = 713778059U;
	volatile uint16_t x1772 = 22U;
	volatile int32_t t58 = -814;

	t58 = ((x1769<(x1770/x1771))<<x1772);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1809 = -1;
	static uint64_t x1811 = 5LLU;
	int32_t t59 = -9;

	t59 = ((x1809<(x1810/x1811))<<x1812);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x1957 = INT16_MIN;
	static int16_t x1959 = -23;
	uint8_t x1960 = 12U;
	volatile int32_t t60 = 0;

	t60 = ((x1957<(x1958/x1959))<<x1960);

	if (t60 != 4096) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x2009 = -7;
	int64_t x2010 = 2LL;
	volatile int8_t x2011 = -16;
	uint32_t x2012 = 18U;
	int32_t t61 = 37;

	t61 = ((x2009<(x2010/x2011))<<x2012);

	if (t61 != 262144) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2045 = INT8_MIN;
	uint16_t x2046 = UINT16_MAX;
	volatile int32_t x2048 = 2;
	volatile int32_t t62 = -962389449;

	t62 = ((x2045<(x2046/x2047))<<x2048);

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2057 = 220U;
	int8_t x2058 = 2;
	int32_t x2059 = INT32_MAX;
	static uint8_t x2060 = 4U;
	static int32_t t63 = 233;

	t63 = ((x2057<(x2058/x2059))<<x2060);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2110 = INT16_MIN;
	int32_t x2111 = INT32_MAX;
	static int16_t x2112 = 0;
	static volatile int32_t t64 = 16337979;

	t64 = ((x2109<(x2110/x2111))<<x2112);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x2117 = INT8_MIN;
	uint16_t x2118 = UINT16_MAX;
	static int16_t x2119 = -1;
	int32_t t65 = 1;

	t65 = ((x2117<(x2118/x2119))<<x2120);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2134 = INT32_MAX;
	volatile int64_t x2135 = INT64_MIN;
	uint8_t x2136 = 16U;
	volatile int32_t t66 = -3;

	t66 = ((x2133<(x2134/x2135))<<x2136);

	if (t66 != 65536) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x2157 = INT32_MIN;
	volatile int64_t x2158 = -1LL;
	static volatile uint64_t x2160 = 18LLU;
	int32_t t67 = 23;

	t67 = ((x2157<(x2158/x2159))<<x2160);

	if (t67 != 262144) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2173 = -3;
	static volatile uint64_t x2174 = 6148379LLU;
	volatile int64_t x2175 = 74678869LL;
	int16_t x2176 = 0;
	volatile int32_t t68 = 192737;

	t68 = ((x2173<(x2174/x2175))<<x2176);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2210 = 757772;
	int64_t x2211 = 23LL;
	uint8_t x2212 = 24U;
	int32_t t69 = 1;

	t69 = ((x2209<(x2210/x2211))<<x2212);

	if (t69 != 16777216) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x2213 = INT32_MIN;
	uint8_t x2216 = 1U;
	int32_t t70 = 6019399;

	t70 = ((x2213<(x2214/x2215))<<x2216);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2311 = 375130137LLU;
	uint32_t x2312 = 0U;
	volatile int32_t t71 = -4787;

	t71 = ((x2309<(x2310/x2311))<<x2312);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2353 = INT8_MIN;
	uint8_t x2356 = 0U;
	int32_t t72 = -31992;

	t72 = ((x2353<(x2354/x2355))<<x2356);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x2385 = 80U;
	static int16_t x2386 = -1;
	int32_t x2387 = 9522;
	uint8_t x2388 = 0U;
	int32_t t73 = -7367006;

	t73 = ((x2385<(x2386/x2387))<<x2388);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2409 = 3U;
	int8_t x2411 = INT8_MAX;
	volatile int32_t t74 = -6;

	t74 = ((x2409<(x2410/x2411))<<x2412);

	if (t74 != 64) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2441 = INT32_MAX;
	volatile int32_t x2442 = INT32_MAX;
	static uint8_t x2443 = 5U;
	int32_t t75 = 262571412;

	t75 = ((x2441<(x2442/x2443))<<x2444);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2465 = 5U;
	volatile uint8_t x2467 = 2U;
	static int16_t x2468 = 0;
	int32_t t76 = -14575;

	t76 = ((x2465<(x2466/x2467))<<x2468);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2553 = INT8_MAX;
	uint8_t x2555 = 22U;
	uint16_t x2556 = 10U;

	t77 = ((x2553<(x2554/x2555))<<x2556);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2561 = INT8_MAX;
	uint32_t x2562 = 247641U;
	int8_t x2563 = INT8_MAX;
	static int32_t t78 = -13367544;

	t78 = ((x2561<(x2562/x2563))<<x2564);

	if (t78 != 16) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2585 = 1U;
	int64_t x2586 = -1LL;
	int8_t x2587 = INT8_MAX;
	volatile int64_t x2588 = 0LL;
	volatile int32_t t79 = 820;

	t79 = ((x2585<(x2586/x2587))<<x2588);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2601 = INT16_MIN;
	int64_t x2602 = -1LL;
	static int16_t x2603 = INT16_MIN;
	uint8_t x2604 = 16U;
	volatile int32_t t80 = 283;

	t80 = ((x2601<(x2602/x2603))<<x2604);

	if (t80 != 65536) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x2613 = -22483;
	static int32_t x2614 = INT32_MAX;
	volatile int8_t x2616 = 8;
	volatile int32_t t81 = 1;

	t81 = ((x2613<(x2614/x2615))<<x2616);

	if (t81 != 256) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x2753 = INT16_MIN;
	volatile int64_t x2754 = 1532470LL;
	int16_t x2755 = INT16_MIN;
	uint16_t x2756 = 28U;
	int32_t t82 = -156104697;

	t82 = ((x2753<(x2754/x2755))<<x2756);

	if (t82 != 268435456) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x2761 = UINT8_MAX;
	int8_t x2762 = INT8_MAX;
	int32_t x2763 = -1;

	t83 = ((x2761<(x2762/x2763))<<x2764);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x2841 = INT64_MIN;
	int32_t x2843 = -1;
	volatile int32_t x2844 = 4;
	volatile int32_t t84 = -49717910;

	t84 = ((x2841<(x2842/x2843))<<x2844);

	if (t84 != 16) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2889 = 6U;
	volatile int64_t x2890 = 144LL;
	int64_t x2891 = INT64_MAX;
	int64_t x2892 = 29LL;
	volatile int32_t t85 = -38333501;

	t85 = ((x2889<(x2890/x2891))<<x2892);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x2957 = 5U;
	static uint8_t x2958 = UINT8_MAX;
	static int32_t x2959 = INT32_MAX;

	t86 = ((x2957<(x2958/x2959))<<x2960);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3066 = UINT64_MAX;
	volatile int16_t x3067 = INT16_MAX;
	uint8_t x3068 = 0U;
	int32_t t87 = -399779;

	t87 = ((x3065<(x3066/x3067))<<x3068);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3073 = -115;
	int32_t x3074 = 526632;
	int16_t x3075 = INT16_MAX;
	volatile uint8_t x3076 = 1U;

	t88 = ((x3073<(x3074/x3075))<<x3076);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3083 = UINT16_MAX;
	int16_t x3084 = 3;
	int32_t t89 = -728066673;

	t89 = ((x3081<(x3082/x3083))<<x3084);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x3178 = INT8_MIN;
	uint16_t x3179 = UINT16_MAX;
	static int8_t x3180 = 1;
	int32_t t90 = 3098472;

	t90 = ((x3177<(x3178/x3179))<<x3180);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3234 = INT8_MIN;
	static int32_t x3235 = INT32_MIN;
	volatile int8_t x3236 = 1;

	t91 = ((x3233<(x3234/x3235))<<x3236);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x3245 = INT64_MIN;
	int8_t x3246 = INT8_MIN;
	static int32_t x3247 = INT32_MIN;
	int16_t x3248 = 0;
	volatile int32_t t92 = -17932527;

	t92 = ((x3245<(x3246/x3247))<<x3248);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x3293 = -1;
	volatile int8_t x3295 = -1;
	static uint16_t x3296 = 26U;
	int32_t t93 = 1691936;

	t93 = ((x3293<(x3294/x3295))<<x3296);

	if (t93 != 67108864) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3321 = INT64_MIN;
	volatile int32_t x3322 = 30;
	uint8_t x3323 = 1U;
	int32_t t94 = 204748289;

	t94 = ((x3321<(x3322/x3323))<<x3324);

	if (t94 != 16) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x3329 = INT16_MAX;
	uint64_t x3330 = UINT64_MAX;
	static int8_t x3331 = -1;
	volatile uint8_t x3332 = 2U;
	int32_t t95 = -42043970;

	t95 = ((x3329<(x3330/x3331))<<x3332);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3345 = 1;
	uint16_t x3346 = 8357U;
	uint16_t x3347 = UINT16_MAX;
	int16_t x3348 = 1;
	volatile int32_t t96 = -846;

	t96 = ((x3345<(x3346/x3347))<<x3348);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3377 = 7U;
	volatile int16_t x3378 = INT16_MIN;
	int8_t x3379 = -17;
	uint32_t x3380 = 2U;

	t97 = ((x3377<(x3378/x3379))<<x3380);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3381 = 13;
	int8_t x3382 = -1;
	static volatile uint32_t x3384 = 22U;

	t98 = ((x3381<(x3382/x3383))<<x3384);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x3425 = -1;
	static uint64_t x3426 = 27999991250LLU;
	static volatile int64_t x3427 = INT64_MAX;
	static int8_t x3428 = 1;

	t99 = ((x3425<(x3426/x3427))<<x3428);

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

