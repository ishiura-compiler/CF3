#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = 388U;
uint8_t x67 = 2U;
int32_t x116 = -201;
volatile int32_t x132 = -1;
int32_t t3 = -14956987;
uint16_t x158 = UINT16_MAX;
int16_t x243 = 0;
uint8_t x271 = 9U;
static uint64_t x392 = UINT64_MAX;
volatile uint16_t x414 = UINT16_MAX;
static int8_t x415 = 5;
uint32_t x422 = 26522U;
int16_t x438 = INT16_MIN;
volatile int32_t t15 = -3673;
int32_t t16 = 41687204;
uint32_t x606 = UINT32_MAX;
volatile int32_t t20 = -4;
int64_t x694 = -166088074653231LL;
static int64_t x700 = INT64_MIN;
static int64_t t23 = -1323177930877999LL;
volatile uint64_t x737 = 52256LLU;
uint16_t x870 = UINT16_MAX;
uint32_t x966 = 28803030U;
uint8_t x967 = 3U;
int32_t t27 = -1312;
int32_t t28 = 1;
int32_t x977 = 7;
int64_t t30 = 0LL;
int8_t x1065 = INT8_MIN;
volatile uint8_t x1067 = 0U;
uint16_t x1083 = 15U;
uint64_t x1093 = UINT64_MAX;
static int64_t t33 = 451436419LL;
int32_t t35 = 220;
int64_t x1153 = INT64_MIN;
uint32_t x1154 = UINT32_MAX;
static uint16_t x1155 = 0U;
int64_t x1164 = INT64_MIN;
static uint8_t x1243 = 0U;
int8_t x1265 = -3;
static uint16_t x1266 = 2731U;
volatile uint16_t x1303 = 7U;
volatile int8_t x1352 = INT8_MIN;
volatile int16_t x1366 = INT16_MAX;
int32_t t43 = -125;
uint32_t x1391 = 14U;
volatile int64_t t44 = 8033699LL;
static int16_t x1430 = -1;
uint8_t x1457 = 20U;
static int8_t x1461 = INT8_MAX;
uint64_t x1465 = 8616180901186427LLU;
static volatile uint32_t x1466 = 46473845U;
int8_t x1521 = -1;
volatile int32_t t50 = 3234;
volatile int8_t x1533 = INT8_MIN;
int32_t x1536 = INT32_MIN;
volatile int32_t t51 = -41047;
int64_t t52 = -2148526136675LL;
volatile int8_t x1673 = INT8_MIN;
volatile int8_t x1782 = 0;
int32_t t56 = 3950100;
uint8_t x1856 = 3U;
uint16_t x1866 = UINT16_MAX;
volatile uint32_t t58 = 14684U;
static volatile uint64_t x1869 = 758847638138LLU;
uint32_t x1870 = 117U;
uint8_t x1871 = 15U;
int32_t x1949 = INT32_MAX;
int32_t x1960 = INT32_MIN;
volatile int32_t t61 = -613641499;
volatile int8_t x2019 = 1;
volatile int16_t x2020 = 416;
uint64_t x2032 = 95484445415721LLU;
int8_t x2081 = -40;
int32_t t64 = -7522462;
int64_t x2090 = INT64_MIN;
volatile int8_t x2102 = INT8_MIN;
uint16_t x2111 = 5U;
int32_t x2112 = INT32_MIN;
static uint8_t x2186 = 0U;
uint8_t x2187 = 1U;
int32_t t70 = -175944382;
int32_t t71 = 66852974;
volatile int64_t x2336 = -522910106024LL;
int8_t x2351 = 0;
uint32_t t74 = 1U;
uint32_t x2403 = 18U;
int32_t t75 = 1;
uint64_t x2553 = 998246LLU;
int16_t x2554 = INT16_MAX;
static uint16_t x2555 = 3U;
uint16_t x2649 = UINT16_MAX;
int16_t x2650 = -1;
static volatile int8_t x2652 = INT8_MIN;
static uint8_t x2727 = 0U;
volatile int32_t x2800 = INT32_MAX;
int16_t x2844 = -1;
uint64_t x2917 = 147467LLU;
uint64_t t86 = 1LLU;
static volatile int32_t x2985 = INT32_MIN;
int64_t x2987 = 0LL;
static uint32_t t88 = 50U;
static int64_t x2989 = -660609LL;
uint64_t x2994 = UINT64_MAX;
volatile uint16_t x3171 = 5U;
int64_t x3172 = INT64_MIN;
int16_t x3186 = -1;
static int8_t x3187 = 0;
int16_t x3216 = INT16_MIN;
static volatile int8_t x3268 = 1;


void f0(void) {
	int32_t x9 = INT32_MIN;
	static uint8_t x11 = 29U;
	int64_t x12 = INT64_MIN;
	int64_t t0 = -3271478046762512881LL;

	t0 = (((x9<x10)<<x11)%x12);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x65 = 44U;
	static int64_t x66 = INT64_MIN;
	static volatile uint16_t x68 = UINT16_MAX;
	int32_t t1 = -37151568;

	t1 = (((x65<x66)<<x67)%x68);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x113 = -1LL;
	int64_t x114 = INT64_MIN;
	uint8_t x115 = 3U;
	volatile int32_t t2 = 5724;

	t2 = (((x113<x114)<<x115)%x116);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x129 = INT8_MAX;
	int32_t x130 = 71069;
	volatile uint8_t x131 = 6U;

	t3 = (((x129<x130)<<x131)%x132);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x157 = INT64_MAX;
	uint16_t x159 = 1U;
	int32_t x160 = INT32_MIN;
	int32_t t4 = 16;

	t4 = (((x157<x158)<<x159)%x160);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x209 = -1LL;
	int16_t x210 = INT16_MAX;
	uint8_t x211 = 0U;
	uint16_t x212 = 986U;
	int32_t t5 = 66535;

	t5 = (((x209<x210)<<x211)%x212);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x241 = -1;
	volatile int64_t x242 = INT64_MIN;
	int32_t x244 = INT32_MIN;
	int32_t t6 = 1;

	t6 = (((x241<x242)<<x243)%x244);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = -393;
	int8_t x255 = 0;
	static volatile int16_t x256 = -1667;
	static int32_t t7 = 2;

	t7 = (((x253<x254)<<x255)%x256);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x269 = 1759768748LLU;
	uint32_t x270 = 56025U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t8 = -4;

	t8 = (((x269<x270)<<x271)%x272);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x313 = -1;
	uint8_t x314 = 57U;
	static uint8_t x315 = 9U;
	int32_t x316 = 334;
	volatile int32_t t9 = 23454;

	t9 = (((x313<x314)<<x315)%x316);

	if (t9 != 178) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x321 = INT16_MAX;
	int64_t x322 = 0LL;
	int16_t x323 = 0;
	volatile uint64_t x324 = 1364870020LLU;
	uint64_t t10 = 106050456LLU;

	t10 = (((x321<x322)<<x323)%x324);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x389 = 7764U;
	int16_t x390 = INT16_MIN;
	uint16_t x391 = 6U;
	volatile uint64_t t11 = 156770146LLU;

	t11 = (((x389<x390)<<x391)%x392);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x413 = 496008U;
	volatile int16_t x416 = INT16_MIN;
	static int32_t t12 = 200;

	t12 = (((x413<x414)<<x415)%x416);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x421 = 17U;
	uint8_t x423 = 11U;
	uint16_t x424 = 90U;
	volatile int32_t t13 = 26698;

	t13 = (((x421<x422)<<x423)%x424);

	if (t13 != 68) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x437 = UINT8_MAX;
	uint8_t x439 = 1U;
	uint8_t x440 = UINT8_MAX;
	int32_t t14 = -15840;

	t14 = (((x437<x438)<<x439)%x440);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x477 = INT8_MAX;
	int32_t x478 = INT32_MIN;
	static volatile int64_t x479 = 1LL;
	static uint16_t x480 = UINT16_MAX;

	t15 = (((x477<x478)<<x479)%x480);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x513 = 1705LLU;
	int64_t x514 = -1LL;
	uint8_t x515 = 24U;
	uint16_t x516 = 5U;

	t16 = (((x513<x514)<<x515)%x516);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x561 = 75677099U;
	int32_t x562 = INT32_MIN;
	int8_t x563 = 3;
	uint32_t x564 = 1037518U;
	volatile uint32_t t17 = 29695343U;

	t17 = (((x561<x562)<<x563)%x564);

	if (t17 != 8U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x605 = INT32_MAX;
	int8_t x607 = 0;
	volatile int64_t x608 = INT64_MAX;
	volatile int64_t t18 = -304LL;

	t18 = (((x605<x606)<<x607)%x608);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x641 = 0;
	int8_t x642 = -1;
	uint8_t x643 = 3U;
	uint8_t x644 = 13U;
	int32_t t19 = -448085609;

	t19 = (((x641<x642)<<x643)%x644);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x673 = 35604538157076840LLU;
	int64_t x674 = INT64_MIN;
	volatile int32_t x675 = 1;
	int16_t x676 = -1;

	t20 = (((x673<x674)<<x675)%x676);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x677 = UINT8_MAX;
	int64_t x678 = -1LL;
	int8_t x679 = 14;
	uint8_t x680 = 8U;
	int32_t t21 = -76213;

	t21 = (((x677<x678)<<x679)%x680);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x693 = UINT32_MAX;
	volatile int16_t x695 = 1;
	static volatile uint32_t x696 = UINT32_MAX;
	static uint32_t t22 = 63601896U;

	t22 = (((x693<x694)<<x695)%x696);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x697 = -217654764632933LL;
	int16_t x698 = INT16_MIN;
	volatile int32_t x699 = 0;

	t23 = (((x697<x698)<<x699)%x700);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x738 = INT8_MIN;
	static uint16_t x739 = 0U;
	volatile int32_t x740 = INT32_MIN;
	int32_t t24 = -3;

	t24 = (((x737<x738)<<x739)%x740);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x833 = 2U;
	uint32_t x834 = 5276675U;
	int8_t x835 = 1;
	static uint32_t x836 = UINT32_MAX;
	volatile uint32_t t25 = 110056U;

	t25 = (((x833<x834)<<x835)%x836);

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x869 = -1;
	uint16_t x871 = 12U;
	int32_t x872 = INT32_MAX;
	int32_t t26 = -1;

	t26 = (((x869<x870)<<x871)%x872);

	if (t26 != 4096) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x965 = -72566;
	int32_t x968 = INT32_MIN;

	t27 = (((x965<x966)<<x967)%x968);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x973 = UINT64_MAX;
	int32_t x974 = -1;
	uint8_t x975 = 2U;
	static int32_t x976 = 254;

	t28 = (((x973<x974)<<x975)%x976);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x978 = INT32_MIN;
	uint16_t x979 = 0U;
	int16_t x980 = -824;
	int32_t t29 = 823;

	t29 = (((x977<x978)<<x979)%x980);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1061 = INT8_MIN;
	volatile uint32_t x1062 = UINT32_MAX;
	volatile uint64_t x1063 = 0LLU;
	int64_t x1064 = -960LL;

	t30 = (((x1061<x1062)<<x1063)%x1064);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1066 = 118U;
	int64_t x1068 = INT64_MIN;
	volatile int64_t t31 = 3689711832572LL;

	t31 = (((x1065<x1066)<<x1067)%x1068);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x1081 = -4;
	uint64_t x1082 = UINT64_MAX;
	int16_t x1084 = 8097;
	int32_t t32 = -145364;

	t32 = (((x1081<x1082)<<x1083)%x1084);

	if (t32 != 380) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1094 = 49U;
	volatile uint8_t x1095 = 10U;
	int64_t x1096 = -1LL;

	t33 = (((x1093<x1094)<<x1095)%x1096);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1113 = UINT8_MAX;
	uint64_t x1114 = UINT64_MAX;
	static uint8_t x1115 = 7U;
	uint8_t x1116 = 15U;
	volatile int32_t t34 = 1;

	t34 = (((x1113<x1114)<<x1115)%x1116);

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1125 = INT16_MAX;
	int64_t x1126 = -1531238207121LL;
	uint16_t x1127 = 21U;
	int32_t x1128 = 160102;

	t35 = (((x1125<x1126)<<x1127)%x1128);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1156 = INT64_MIN;
	volatile int64_t t36 = 32146241835LL;

	t36 = (((x1153<x1154)<<x1155)%x1156);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1161 = INT8_MIN;
	uint64_t x1162 = 18LLU;
	int8_t x1163 = 26;
	volatile int64_t t37 = 12302705806829039LL;

	t37 = (((x1161<x1162)<<x1163)%x1164);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1241 = 0;
	int16_t x1242 = INT16_MIN;
	static int8_t x1244 = 2;
	int32_t t38 = 653;

	t38 = (((x1241<x1242)<<x1243)%x1244);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x1267 = 2U;
	static int8_t x1268 = INT8_MAX;
	int32_t t39 = -6;

	t39 = (((x1265<x1266)<<x1267)%x1268);

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1301 = INT64_MIN;
	volatile int8_t x1302 = -1;
	volatile int8_t x1304 = 2;
	volatile int32_t t40 = 6421796;

	t40 = (((x1301<x1302)<<x1303)%x1304);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1333 = 161;
	int8_t x1334 = 55;
	uint8_t x1335 = 0U;
	int8_t x1336 = 7;
	volatile int32_t t41 = 757;

	t41 = (((x1333<x1334)<<x1335)%x1336);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1349 = -1;
	volatile uint64_t x1350 = 306LLU;
	uint8_t x1351 = 1U;
	int32_t t42 = 3567449;

	t42 = (((x1349<x1350)<<x1351)%x1352);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1365 = INT64_MAX;
	uint16_t x1367 = 0U;
	int8_t x1368 = INT8_MIN;

	t43 = (((x1365<x1366)<<x1367)%x1368);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1389 = 57U;
	int16_t x1390 = -4;
	int64_t x1392 = INT64_MAX;

	t44 = (((x1389<x1390)<<x1391)%x1392);

	if (t44 != 16384LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1401 = INT64_MIN;
	int64_t x1402 = INT64_MIN;
	int16_t x1403 = 13;
	uint64_t x1404 = UINT64_MAX;
	volatile uint64_t t45 = 534480358315769432LLU;

	t45 = (((x1401<x1402)<<x1403)%x1404);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1429 = 51472827LL;
	uint64_t x1431 = 1LLU;
	int16_t x1432 = -993;
	volatile int32_t t46 = 434959956;

	t46 = (((x1429<x1430)<<x1431)%x1432);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1458 = UINT16_MAX;
	static int8_t x1459 = 1;
	volatile int8_t x1460 = INT8_MIN;
	int32_t t47 = 66015;

	t47 = (((x1457<x1458)<<x1459)%x1460);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1462 = UINT8_MAX;
	volatile uint8_t x1463 = 28U;
	int16_t x1464 = INT16_MIN;
	int32_t t48 = 52;

	t48 = (((x1461<x1462)<<x1463)%x1464);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1467 = 1U;
	int8_t x1468 = -19;
	int32_t t49 = 174437836;

	t49 = (((x1465<x1466)<<x1467)%x1468);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x1522 = 0;
	int8_t x1523 = 0;
	int32_t x1524 = INT32_MIN;

	t50 = (((x1521<x1522)<<x1523)%x1524);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1534 = INT32_MIN;
	uint16_t x1535 = 24U;

	t51 = (((x1533<x1534)<<x1535)%x1536);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1573 = 22;
	int32_t x1574 = INT32_MAX;
	uint8_t x1575 = 1U;
	int64_t x1576 = INT64_MIN;

	t52 = (((x1573<x1574)<<x1575)%x1576);

	if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1637 = -1;
	int64_t x1638 = -1LL;
	int8_t x1639 = 2;
	static uint32_t x1640 = 33111239U;
	volatile uint32_t t53 = 2U;

	t53 = (((x1637<x1638)<<x1639)%x1640);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x1674 = 24352U;
	int8_t x1675 = 22;
	int32_t x1676 = -1;
	volatile int32_t t54 = 104491057;

	t54 = (((x1673<x1674)<<x1675)%x1676);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1717 = UINT8_MAX;
	int32_t x1718 = INT32_MAX;
	uint16_t x1719 = 0U;
	volatile int64_t x1720 = 23871747097151LL;
	int64_t t55 = -12LL;

	t55 = (((x1717<x1718)<<x1719)%x1720);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x1781 = 3585U;
	uint8_t x1783 = 2U;
	int8_t x1784 = INT8_MIN;

	t56 = (((x1781<x1782)<<x1783)%x1784);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1853 = 14U;
	volatile int64_t x1854 = INT64_MAX;
	volatile uint8_t x1855 = 12U;
	volatile int32_t t57 = 311101607;

	t57 = (((x1853<x1854)<<x1855)%x1856);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x1865 = 100U;
	uint8_t x1867 = 1U;
	volatile uint32_t x1868 = UINT32_MAX;

	t58 = (((x1865<x1866)<<x1867)%x1868);

	if (t58 != 2U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1872 = INT64_MIN;
	int64_t t59 = -30521664675738766LL;

	t59 = (((x1869<x1870)<<x1871)%x1872);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1950 = -7;
	uint8_t x1951 = 27U;
	volatile uint8_t x1952 = UINT8_MAX;
	volatile int32_t t60 = 25566319;

	t60 = (((x1949<x1950)<<x1951)%x1952);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x1957 = 454;
	uint8_t x1958 = 13U;
	uint8_t x1959 = 23U;

	t61 = (((x1957<x1958)<<x1959)%x1960);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2017 = INT64_MIN;
	static int8_t x2018 = INT8_MIN;
	volatile int32_t t62 = -1;

	t62 = (((x2017<x2018)<<x2019)%x2020);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2029 = INT8_MIN;
	volatile int64_t x2030 = INT64_MIN;
	int32_t x2031 = 29;
	uint64_t t63 = 184103682289033LLU;

	t63 = (((x2029<x2030)<<x2031)%x2032);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2082 = INT8_MAX;
	uint16_t x2083 = 0U;
	volatile int16_t x2084 = INT16_MIN;

	t64 = (((x2081<x2082)<<x2083)%x2084);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2089 = INT32_MIN;
	static uint8_t x2091 = 1U;
	static int32_t x2092 = 452;
	int32_t t65 = 5;

	t65 = (((x2089<x2090)<<x2091)%x2092);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2101 = INT16_MIN;
	int8_t x2103 = 0;
	int8_t x2104 = 4;
	volatile int32_t t66 = 168042;

	t66 = (((x2101<x2102)<<x2103)%x2104);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2109 = INT64_MIN;
	volatile uint8_t x2110 = UINT8_MAX;
	static int32_t t67 = 1527;

	t67 = (((x2109<x2110)<<x2111)%x2112);

	if (t67 != 32) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2185 = INT8_MIN;
	int32_t x2188 = INT32_MAX;
	int32_t t68 = 152921;

	t68 = (((x2185<x2186)<<x2187)%x2188);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2233 = 1U;
	volatile int8_t x2234 = INT8_MIN;
	uint16_t x2235 = 5U;
	int16_t x2236 = INT16_MAX;
	int32_t t69 = 160;

	t69 = (((x2233<x2234)<<x2235)%x2236);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2245 = 955U;
	static int16_t x2246 = 213;
	static uint8_t x2247 = 0U;
	int8_t x2248 = INT8_MAX;

	t70 = (((x2245<x2246)<<x2247)%x2248);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2257 = 1954752461U;
	volatile int64_t x2258 = 117617051547LL;
	uint8_t x2259 = 0U;
	uint8_t x2260 = UINT8_MAX;

	t71 = (((x2257<x2258)<<x2259)%x2260);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2333 = 121241999573LL;
	static volatile uint16_t x2334 = UINT16_MAX;
	volatile int8_t x2335 = 17;
	volatile int64_t t72 = -4339LL;

	t72 = (((x2333<x2334)<<x2335)%x2336);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2349 = INT16_MIN;
	volatile uint16_t x2350 = UINT16_MAX;
	int16_t x2352 = -1;
	volatile int32_t t73 = 823;

	t73 = (((x2349<x2350)<<x2351)%x2352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2377 = INT8_MIN;
	int16_t x2378 = -3702;
	uint8_t x2379 = 4U;
	uint32_t x2380 = UINT32_MAX;

	t74 = (((x2377<x2378)<<x2379)%x2380);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2401 = 211486023365LLU;
	int16_t x2402 = 1;
	int32_t x2404 = -1;

	t75 = (((x2401<x2402)<<x2403)%x2404);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2549 = INT8_MIN;
	int16_t x2550 = INT16_MIN;
	uint32_t x2551 = 0U;
	uint16_t x2552 = 9820U;
	volatile int32_t t76 = -12892768;

	t76 = (((x2549<x2550)<<x2551)%x2552);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2556 = UINT64_MAX;
	uint64_t t77 = 4289LLU;

	t77 = (((x2553<x2554)<<x2555)%x2556);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2569 = 7796022U;
	int32_t x2570 = INT32_MAX;
	static uint32_t x2571 = 4U;
	uint8_t x2572 = 8U;
	int32_t t78 = -30458614;

	t78 = (((x2569<x2570)<<x2571)%x2572);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2651 = 2U;
	static int32_t t79 = 34758085;

	t79 = (((x2649<x2650)<<x2651)%x2652);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2725 = 1330;
	int32_t x2726 = 57035108;
	int32_t x2728 = INT32_MIN;
	volatile int32_t t80 = -35;

	t80 = (((x2725<x2726)<<x2727)%x2728);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2729 = 905550LLU;
	int8_t x2730 = INT8_MAX;
	static int32_t x2731 = 0;
	static uint64_t x2732 = 100439380973544LLU;
	uint64_t t81 = 738028152162013327LLU;

	t81 = (((x2729<x2730)<<x2731)%x2732);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x2753 = 24U;
	int16_t x2754 = INT16_MIN;
	volatile uint16_t x2755 = 1U;
	volatile int64_t x2756 = -1LL;
	int64_t t82 = 37933210181508LL;

	t82 = (((x2753<x2754)<<x2755)%x2756);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x2757 = INT64_MIN;
	volatile int64_t x2758 = INT64_MIN;
	uint32_t x2759 = 7U;
	int32_t x2760 = INT32_MAX;
	int32_t t83 = -2918564;

	t83 = (((x2757<x2758)<<x2759)%x2760);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x2797 = UINT64_MAX;
	uint16_t x2798 = 5142U;
	static uint8_t x2799 = 12U;
	volatile int32_t t84 = 977;

	t84 = (((x2797<x2798)<<x2799)%x2800);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x2841 = -1;
	volatile uint8_t x2842 = 7U;
	int8_t x2843 = 15;
	int32_t t85 = 1030102158;

	t85 = (((x2841<x2842)<<x2843)%x2844);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x2918 = INT8_MIN;
	int8_t x2919 = 4;
	uint64_t x2920 = 846231447LLU;

	t86 = (((x2917<x2918)<<x2919)%x2920);

	if (t86 != 16LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2961 = 5888LL;
	uint16_t x2962 = UINT16_MAX;
	uint8_t x2963 = 5U;
	uint32_t x2964 = UINT32_MAX;
	volatile uint32_t t87 = 123553113U;

	t87 = (((x2961<x2962)<<x2963)%x2964);

	if (t87 != 32U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2986 = 29216771359044938LL;
	uint32_t x2988 = 184643289U;

	t88 = (((x2985<x2986)<<x2987)%x2988);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2990 = INT32_MIN;
	volatile int8_t x2991 = 1;
	volatile int32_t x2992 = INT32_MAX;
	int32_t t89 = 11663724;

	t89 = (((x2989<x2990)<<x2991)%x2992);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x2993 = 921112924U;
	uint16_t x2995 = 1U;
	uint32_t x2996 = 200U;
	uint32_t t90 = 26938773U;

	t90 = (((x2993<x2994)<<x2995)%x2996);

	if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2997 = 23U;
	int64_t x2998 = -1LL;
	int8_t x2999 = 3;
	uint16_t x3000 = 8211U;
	volatile int32_t t91 = -18949;

	t91 = (((x2997<x2998)<<x2999)%x3000);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3009 = INT32_MIN;
	int32_t x3010 = INT32_MAX;
	int8_t x3011 = 0;
	int64_t x3012 = 2202396934LL;
	volatile int64_t t92 = -120642977750633150LL;

	t92 = (((x3009<x3010)<<x3011)%x3012);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3049 = 7114U;
	uint8_t x3050 = UINT8_MAX;
	uint8_t x3051 = 7U;
	int16_t x3052 = -4746;
	int32_t t93 = 1777;

	t93 = (((x3049<x3050)<<x3051)%x3052);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3165 = UINT8_MAX;
	uint16_t x3166 = 367U;
	int64_t x3167 = 24LL;
	int16_t x3168 = 249;
	volatile int32_t t94 = 3710;

	t94 = (((x3165<x3166)<<x3167)%x3168);

	if (t94 != 94) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3169 = INT64_MIN;
	uint32_t x3170 = 12044794U;
	static int64_t t95 = -1075222623LL;

	t95 = (((x3169<x3170)<<x3171)%x3172);

	if (t95 != 32LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3185 = 3U;
	uint8_t x3188 = 19U;
	static int32_t t96 = 58327;

	t96 = (((x3185<x3186)<<x3187)%x3188);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x3213 = UINT16_MAX;
	static uint16_t x3214 = 1U;
	volatile int8_t x3215 = 27;
	int32_t t97 = 2216;

	t97 = (((x3213<x3214)<<x3215)%x3216);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3265 = -4123892415540599LL;
	volatile int64_t x3266 = -237341413464908LL;
	static uint8_t x3267 = 5U;
	volatile int32_t t98 = 1021;

	t98 = (((x3265<x3266)<<x3267)%x3268);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3369 = 7U;
	uint16_t x3370 = UINT16_MAX;
	static volatile int8_t x3371 = 1;
	int32_t x3372 = -1;
	volatile int32_t t99 = 1;

	t99 = (((x3369<x3370)<<x3371)%x3372);

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

