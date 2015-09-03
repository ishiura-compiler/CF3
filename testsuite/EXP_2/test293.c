#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x3 = -1;
int8_t x33 = INT8_MIN;
uint16_t x34 = 2U;
volatile int8_t x39 = INT8_MAX;
uint64_t x61 = 170690588255375LLU;
static uint32_t x64 = 1U;
static int8_t x93 = 9;
volatile int8_t x96 = 0;
static volatile int32_t t4 = -59696;
int32_t t5 = 241924;
int32_t t6 = -218;
static volatile int64_t x194 = INT64_MIN;
uint8_t x196 = 18U;
static volatile int32_t t8 = 10;
static uint8_t x292 = 14U;
volatile int32_t t9 = -230570753;
static volatile int32_t t12 = -861483;
int32_t x681 = INT32_MIN;
static volatile int32_t t15 = -113511;
int32_t x689 = INT32_MAX;
static int32_t t16 = -363;
int64_t x769 = INT64_MAX;
static int32_t t20 = -78;
int32_t x834 = -1;
int16_t x835 = INT16_MIN;
uint16_t x846 = 240U;
uint64_t x911 = 654168266798LLU;
uint16_t x912 = 28U;
int32_t x919 = -1;
int32_t t24 = -47410;
uint16_t x939 = UINT16_MAX;
int8_t x976 = 2;
int32_t t26 = -63346;
uint8_t x1000 = 1U;
int32_t t27 = 1;
int32_t x1041 = 7;
int64_t x1078 = 1440584032054112173LL;
volatile int8_t x1146 = INT8_MAX;
static int16_t x1147 = INT16_MIN;
volatile int32_t t32 = -32695;
static int32_t x1158 = -1;
uint8_t x1160 = 1U;
volatile int32_t t33 = 18;
int8_t x1209 = -8;
int64_t x1210 = INT64_MAX;
int64_t x1223 = -1LL;
static int8_t x1224 = 1;
uint32_t x1249 = 15657U;
volatile int16_t x1251 = 1;
int16_t x1312 = 16;
volatile uint8_t x1466 = UINT8_MAX;
volatile int32_t t43 = -12;
int16_t x1503 = 6;
static int8_t x1589 = INT8_MAX;
static int16_t x1590 = 124;
uint32_t x1624 = 5U;
static uint32_t x1630 = 1906599736U;
int8_t x1660 = 1;
int32_t t51 = -787298839;
static int32_t x1663 = -4363;
volatile int32_t x1664 = 2;
static volatile uint32_t x1667 = 227010U;
int8_t x1803 = INT8_MAX;
int64_t x1893 = -1LL;
uint8_t x1894 = 16U;
volatile uint16_t x1896 = 6U;
volatile int32_t t59 = -5947;
int16_t x2075 = INT16_MAX;
volatile int16_t x2076 = 1;
volatile int16_t x2131 = -1;
static volatile uint32_t x2132 = 1U;
volatile uint8_t x2206 = 5U;
uint8_t x2260 = 1U;
int8_t x2366 = -8;
static volatile int16_t x2429 = INT16_MIN;
uint8_t x2468 = 7U;
int64_t x2592 = 2LL;
uint8_t x2628 = 17U;
int32_t t77 = -13078502;
static int8_t x2684 = 1;
uint16_t x2704 = 8U;
volatile uint64_t x2715 = UINT64_MAX;
volatile uint64_t x2716 = 1LLU;
uint16_t x2753 = UINT16_MAX;
static uint32_t x2847 = UINT32_MAX;
static uint8_t x2920 = 1U;
uint8_t x2936 = 15U;
static int32_t t86 = -35709;
volatile int64_t x2957 = 7618369604921518LL;
uint32_t x2958 = 903296579U;
volatile uint8_t x2960 = 2U;
int32_t t87 = 7599770;
volatile int32_t t88 = 55786;
volatile int32_t t90 = -8138;
int16_t x3131 = 14;
uint8_t x3184 = 0U;
static int8_t x3309 = INT8_MAX;
volatile int32_t x3311 = -1;
uint16_t x3334 = UINT16_MAX;
volatile int32_t x3377 = INT32_MIN;
int16_t x3379 = INT16_MIN;
int32_t t96 = 200;
volatile int32_t t99 = 6052;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int32_t x2 = 15332914;
	int16_t x4 = 1;
	volatile int32_t t0 = 1576;

	t0 = ((x1<=(x2-x3))>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x35 = 2554U;
	static uint16_t x36 = 0U;
	static volatile int32_t t1 = 0;

	t1 = ((x33<=(x34-x35))>>x36);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	static uint32_t x40 = 0U;
	volatile int32_t t2 = 6082931;

	t2 = ((x37<=(x38-x39))>>x40);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x62 = -213119038117LL;
	int8_t x63 = INT8_MIN;
	volatile int32_t t3 = -21;

	t3 = ((x61<=(x62-x63))>>x64);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x94 = 21355LLU;
	int16_t x95 = -3966;

	t4 = ((x93<=(x94-x95))>>x96);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x133 = 353212U;
	uint32_t x134 = 6179424U;
	int16_t x135 = -1;
	uint8_t x136 = 1U;

	t5 = ((x133<=(x134-x135))>>x136);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x161 = 4;
	int64_t x162 = INT64_MIN;
	int64_t x163 = -3174063192993043LL;
	static volatile uint8_t x164 = 0U;

	t6 = ((x161<=(x162-x163))>>x164);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x173 = -1;
	static int16_t x174 = -1;
	uint8_t x175 = 5U;
	int16_t x176 = 1;
	int32_t t7 = 63581493;

	t7 = ((x173<=(x174-x175))>>x176);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x193 = 3781682903120883062LLU;
	static int16_t x195 = -1;

	t8 = ((x193<=(x194-x195))>>x196);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x289 = INT64_MAX;
	uint32_t x290 = 590U;
	volatile int32_t x291 = INT32_MIN;

	t9 = ((x289<=(x290-x291))>>x292);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x357 = INT64_MIN;
	uint8_t x358 = 99U;
	static volatile uint64_t x359 = 43527114804LLU;
	int32_t x360 = 1;
	static volatile int32_t t10 = -116331;

	t10 = ((x357<=(x358-x359))>>x360);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x429 = INT32_MIN;
	uint32_t x430 = 36219U;
	volatile int16_t x431 = INT16_MIN;
	volatile uint8_t x432 = 13U;
	int32_t t11 = 3;

	t11 = ((x429<=(x430-x431))>>x432);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x517 = INT8_MAX;
	volatile int16_t x518 = 39;
	int16_t x519 = INT16_MAX;
	int8_t x520 = 27;

	t12 = ((x517<=(x518-x519))>>x520);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x589 = 374U;
	volatile int32_t x590 = -8;
	volatile uint8_t x591 = UINT8_MAX;
	volatile uint32_t x592 = 22U;
	int32_t t13 = -105464;

	t13 = ((x589<=(x590-x591))>>x592);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x661 = INT32_MIN;
	volatile uint8_t x662 = 25U;
	uint32_t x663 = 72181279U;
	static int8_t x664 = 1;
	static volatile int32_t t14 = 2;

	t14 = ((x661<=(x662-x663))>>x664);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x682 = -1;
	int16_t x683 = INT16_MIN;
	uint8_t x684 = 6U;

	t15 = ((x681<=(x682-x683))>>x684);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x690 = UINT64_MAX;
	static int16_t x691 = INT16_MIN;
	volatile int8_t x692 = 27;

	t16 = ((x689<=(x690-x691))>>x692);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x697 = 5801387930806883897LLU;
	int16_t x698 = -1;
	volatile int8_t x699 = INT8_MIN;
	static uint8_t x700 = 8U;
	int32_t t17 = -82987;

	t17 = ((x697<=(x698-x699))>>x700);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x770 = -1;
	static volatile int64_t x771 = 315047826406545LL;
	uint8_t x772 = 0U;
	int32_t t18 = 453378;

	t18 = ((x769<=(x770-x771))>>x772);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x781 = INT32_MIN;
	static uint8_t x782 = 1U;
	int8_t x783 = -1;
	uint32_t x784 = 20U;
	static int32_t t19 = -2;

	t19 = ((x781<=(x782-x783))>>x784);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x829 = INT8_MAX;
	static volatile int8_t x830 = 2;
	int8_t x831 = -5;
	uint16_t x832 = 1U;

	t20 = ((x829<=(x830-x831))>>x832);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x833 = -4;
	uint8_t x836 = 3U;
	static volatile int32_t t21 = 100342009;

	t21 = ((x833<=(x834-x835))>>x836);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x845 = 38U;
	volatile uint64_t x847 = 3452460567052115LLU;
	static uint8_t x848 = 0U;
	volatile int32_t t22 = -94;

	t22 = ((x845<=(x846-x847))>>x848);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x909 = 1273382658611325LLU;
	int16_t x910 = INT16_MIN;
	int32_t t23 = 0;

	t23 = ((x909<=(x910-x911))>>x912);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x917 = INT8_MAX;
	int16_t x918 = INT16_MIN;
	uint8_t x920 = 4U;

	t24 = ((x917<=(x918-x919))>>x920);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x937 = -12881;
	int8_t x938 = INT8_MIN;
	uint64_t x940 = 9LLU;
	int32_t t25 = 6;

	t25 = ((x937<=(x938-x939))>>x940);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x973 = 1901U;
	uint32_t x974 = 176U;
	int16_t x975 = -78;

	t26 = ((x973<=(x974-x975))>>x976);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x997 = -5046571LL;
	static volatile uint8_t x998 = 0U;
	uint8_t x999 = 5U;

	t27 = ((x997<=(x998-x999))>>x1000);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1009 = 3U;
	uint16_t x1010 = 0U;
	static int32_t x1011 = -60;
	static uint32_t x1012 = 10U;
	volatile int32_t t28 = -134041786;

	t28 = ((x1009<=(x1010-x1011))>>x1012);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1042 = 5U;
	uint64_t x1043 = UINT64_MAX;
	uint64_t x1044 = 27LLU;
	volatile int32_t t29 = 281211239;

	t29 = ((x1041<=(x1042-x1043))>>x1044);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1077 = -51198;
	static int32_t x1079 = INT32_MIN;
	uint8_t x1080 = 1U;
	static volatile int32_t t30 = -21645116;

	t30 = ((x1077<=(x1078-x1079))>>x1080);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1081 = 61;
	uint32_t x1082 = 18787691U;
	volatile int8_t x1083 = INT8_MAX;
	static int16_t x1084 = 1;
	int32_t t31 = 7;

	t31 = ((x1081<=(x1082-x1083))>>x1084);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1145 = 13U;
	static int32_t x1148 = 0;

	t32 = ((x1145<=(x1146-x1147))>>x1148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1157 = 7062865683950LLU;
	static uint8_t x1159 = UINT8_MAX;

	t33 = ((x1157<=(x1158-x1159))>>x1160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x1197 = -1;
	uint8_t x1198 = 60U;
	int8_t x1199 = -21;
	int32_t x1200 = 1;
	volatile int32_t t34 = 0;

	t34 = ((x1197<=(x1198-x1199))>>x1200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1211 = 69U;
	volatile int8_t x1212 = 1;
	volatile int32_t t35 = -14937263;

	t35 = ((x1209<=(x1210-x1211))>>x1212);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x1221 = 1U;
	static uint64_t x1222 = UINT64_MAX;
	int32_t t36 = -18;

	t36 = ((x1221<=(x1222-x1223))>>x1224);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1250 = -13978;
	uint8_t x1252 = 0U;
	volatile int32_t t37 = -61649677;

	t37 = ((x1249<=(x1250-x1251))>>x1252);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1309 = UINT16_MAX;
	volatile int32_t x1310 = -5;
	volatile int32_t x1311 = 1848;
	int32_t t38 = 71;

	t38 = ((x1309<=(x1310-x1311))>>x1312);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1357 = UINT16_MAX;
	static int8_t x1358 = 1;
	static uint8_t x1359 = UINT8_MAX;
	int32_t x1360 = 1;
	volatile int32_t t39 = -7579299;

	t39 = ((x1357<=(x1358-x1359))>>x1360);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1369 = 12237U;
	volatile uint64_t x1370 = 297696379LLU;
	volatile int16_t x1371 = -365;
	int16_t x1372 = 0;
	int32_t t40 = 278;

	t40 = ((x1369<=(x1370-x1371))>>x1372);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1445 = UINT32_MAX;
	uint16_t x1446 = 4636U;
	volatile int16_t x1447 = -6;
	int8_t x1448 = 0;
	int32_t t41 = -90162183;

	t41 = ((x1445<=(x1446-x1447))>>x1448);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1465 = -1;
	volatile int64_t x1467 = -1LL;
	uint8_t x1468 = 0U;
	int32_t t42 = -85823;

	t42 = ((x1465<=(x1466-x1467))>>x1468);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1481 = 40LLU;
	static uint8_t x1482 = 13U;
	static uint16_t x1483 = UINT16_MAX;
	static uint16_t x1484 = 0U;

	t43 = ((x1481<=(x1482-x1483))>>x1484);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x1501 = INT64_MIN;
	uint32_t x1502 = 70196626U;
	uint8_t x1504 = 1U;
	int32_t t44 = 254;

	t44 = ((x1501<=(x1502-x1503))>>x1504);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x1513 = -7;
	uint32_t x1514 = 1U;
	int8_t x1515 = INT8_MIN;
	int16_t x1516 = 1;
	static volatile int32_t t45 = 510891;

	t45 = ((x1513<=(x1514-x1515))>>x1516);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1529 = -1;
	int64_t x1530 = -1LL;
	int64_t x1531 = INT64_MAX;
	uint16_t x1532 = 7U;
	volatile int32_t t46 = -12943191;

	t46 = ((x1529<=(x1530-x1531))>>x1532);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1591 = 1094007699580LL;
	uint8_t x1592 = 12U;
	int32_t t47 = -9655;

	t47 = ((x1589<=(x1590-x1591))>>x1592);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1601 = INT16_MIN;
	static int32_t x1602 = 1;
	int8_t x1603 = INT8_MIN;
	static uint16_t x1604 = 6U;
	int32_t t48 = 628961;

	t48 = ((x1601<=(x1602-x1603))>>x1604);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1621 = -1;
	int8_t x1622 = INT8_MIN;
	int8_t x1623 = -1;
	volatile int32_t t49 = -6475106;

	t49 = ((x1621<=(x1622-x1623))>>x1624);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1629 = 1U;
	uint16_t x1631 = UINT16_MAX;
	static int8_t x1632 = 0;
	int32_t t50 = 1;

	t50 = ((x1629<=(x1630-x1631))>>x1632);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1657 = 28U;
	int32_t x1658 = 126913;
	int8_t x1659 = INT8_MAX;

	t51 = ((x1657<=(x1658-x1659))>>x1660);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1661 = INT16_MIN;
	volatile uint16_t x1662 = 6511U;
	static volatile int32_t t52 = -24819;

	t52 = ((x1661<=(x1662-x1663))>>x1664);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1665 = UINT8_MAX;
	static uint32_t x1666 = UINT32_MAX;
	volatile int64_t x1668 = 4LL;
	int32_t t53 = -1;

	t53 = ((x1665<=(x1666-x1667))>>x1668);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x1669 = -1;
	int8_t x1670 = -54;
	volatile uint64_t x1671 = 668521066653538LLU;
	int64_t x1672 = 9LL;
	volatile int32_t t54 = 2161;

	t54 = ((x1669<=(x1670-x1671))>>x1672);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1705 = -6;
	uint32_t x1706 = 867U;
	static volatile uint32_t x1707 = 53774U;
	int16_t x1708 = 11;
	int32_t t55 = -315714;

	t55 = ((x1705<=(x1706-x1707))>>x1708);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x1729 = 953U;
	int8_t x1730 = INT8_MIN;
	int16_t x1731 = -1;
	static int8_t x1732 = 1;
	int32_t t56 = 38;

	t56 = ((x1729<=(x1730-x1731))>>x1732);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1801 = -1LL;
	int16_t x1802 = INT16_MIN;
	volatile uint8_t x1804 = 3U;
	volatile int32_t t57 = 4;

	t57 = ((x1801<=(x1802-x1803))>>x1804);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x1833 = -41;
	volatile int16_t x1834 = -1;
	int32_t x1835 = -68150101;
	int8_t x1836 = 3;
	volatile int32_t t58 = -631465;

	t58 = ((x1833<=(x1834-x1835))>>x1836);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1895 = -1;

	t59 = ((x1893<=(x1894-x1895))>>x1896);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x1973 = 6U;
	volatile int8_t x1974 = INT8_MIN;
	volatile int16_t x1975 = INT16_MIN;
	static uint8_t x1976 = 9U;
	int32_t t60 = 1;

	t60 = ((x1973<=(x1974-x1975))>>x1976);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2073 = -4;
	static int8_t x2074 = INT8_MIN;
	static int32_t t61 = 1269113;

	t61 = ((x2073<=(x2074-x2075))>>x2076);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2081 = INT16_MIN;
	int16_t x2082 = INT16_MAX;
	uint8_t x2083 = 53U;
	volatile int8_t x2084 = 15;
	int32_t t62 = 1252337;

	t62 = ((x2081<=(x2082-x2083))>>x2084);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2129 = -1;
	static int64_t x2130 = -133311269LL;
	int32_t t63 = 0;

	t63 = ((x2129<=(x2130-x2131))>>x2132);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x2149 = 1U;
	int64_t x2150 = -15372LL;
	int64_t x2151 = INT64_MIN;
	uint16_t x2152 = 0U;
	int32_t t64 = 3010744;

	t64 = ((x2149<=(x2150-x2151))>>x2152);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2205 = INT16_MIN;
	int8_t x2207 = INT8_MIN;
	uint16_t x2208 = 3U;
	static int32_t t65 = -16569;

	t65 = ((x2205<=(x2206-x2207))>>x2208);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2221 = INT8_MIN;
	static int16_t x2222 = -1;
	int32_t x2223 = INT32_MIN;
	int8_t x2224 = 1;
	int32_t t66 = 768338939;

	t66 = ((x2221<=(x2222-x2223))>>x2224);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x2241 = 3;
	uint16_t x2242 = 6989U;
	volatile uint16_t x2243 = 250U;
	int8_t x2244 = 1;
	int32_t t67 = -315615;

	t67 = ((x2241<=(x2242-x2243))>>x2244);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2257 = 5051LLU;
	volatile int8_t x2258 = INT8_MIN;
	volatile int16_t x2259 = INT16_MIN;
	static volatile int32_t t68 = 456480684;

	t68 = ((x2257<=(x2258-x2259))>>x2260);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2285 = 11;
	volatile uint32_t x2286 = 239432U;
	static volatile uint32_t x2287 = 120706U;
	int16_t x2288 = 1;
	int32_t t69 = 144;

	t69 = ((x2285<=(x2286-x2287))>>x2288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2317 = INT8_MIN;
	static volatile uint32_t x2318 = 3589060U;
	int8_t x2319 = -1;
	volatile uint8_t x2320 = 15U;
	static int32_t t70 = -28;

	t70 = ((x2317<=(x2318-x2319))>>x2320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2325 = -1;
	volatile int8_t x2326 = -1;
	int16_t x2327 = INT16_MAX;
	volatile int8_t x2328 = 21;
	static volatile int32_t t71 = -1;

	t71 = ((x2325<=(x2326-x2327))>>x2328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x2365 = -1;
	uint8_t x2367 = 0U;
	int16_t x2368 = 25;
	volatile int32_t t72 = 18301;

	t72 = ((x2365<=(x2366-x2367))>>x2368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2430 = -2043;
	int64_t x2431 = -85510LL;
	int16_t x2432 = 1;
	int32_t t73 = -4149929;

	t73 = ((x2429<=(x2430-x2431))>>x2432);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2465 = INT64_MIN;
	int8_t x2466 = -1;
	volatile uint8_t x2467 = UINT8_MAX;
	volatile int32_t t74 = -687273;

	t74 = ((x2465<=(x2466-x2467))>>x2468);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2549 = INT16_MAX;
	int64_t x2550 = INT64_MIN;
	volatile int16_t x2551 = -2;
	volatile uint16_t x2552 = 19U;
	int32_t t75 = -87596816;

	t75 = ((x2549<=(x2550-x2551))>>x2552);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2589 = 1U;
	int8_t x2590 = INT8_MIN;
	uint32_t x2591 = 28U;
	volatile int32_t t76 = -2;

	t76 = ((x2589<=(x2590-x2591))>>x2592);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2625 = -58;
	volatile uint64_t x2626 = 1LLU;
	volatile int16_t x2627 = -1;

	t77 = ((x2625<=(x2626-x2627))>>x2628);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2681 = -1;
	static int8_t x2682 = -1;
	int32_t x2683 = INT32_MIN;
	static int32_t t78 = 263;

	t78 = ((x2681<=(x2682-x2683))>>x2684);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x2701 = INT8_MAX;
	uint16_t x2702 = UINT16_MAX;
	volatile int32_t x2703 = -1;
	volatile int32_t t79 = 158402689;

	t79 = ((x2701<=(x2702-x2703))>>x2704);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2713 = 465LL;
	uint32_t x2714 = 207U;
	volatile int32_t t80 = -1916881;

	t80 = ((x2713<=(x2714-x2715))>>x2716);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2754 = 275779LLU;
	volatile int16_t x2755 = -190;
	uint8_t x2756 = 3U;
	static volatile int32_t t81 = -3713;

	t81 = ((x2753<=(x2754-x2755))>>x2756);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2805 = INT64_MIN;
	int16_t x2806 = -6;
	int32_t x2807 = -31547;
	uint8_t x2808 = 0U;
	volatile int32_t t82 = -986567781;

	t82 = ((x2805<=(x2806-x2807))>>x2808);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x2845 = INT64_MIN;
	volatile int32_t x2846 = -35390591;
	volatile uint8_t x2848 = 16U;
	int32_t t83 = 6461268;

	t83 = ((x2845<=(x2846-x2847))>>x2848);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x2917 = -1;
	int64_t x2918 = -4474301002619758473LL;
	static int8_t x2919 = -1;
	int32_t t84 = -2;

	t84 = ((x2917<=(x2918-x2919))>>x2920);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2925 = INT16_MIN;
	volatile int8_t x2926 = INT8_MIN;
	uint8_t x2927 = 0U;
	uint8_t x2928 = 25U;
	int32_t t85 = -18;

	t85 = ((x2925<=(x2926-x2927))>>x2928);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x2933 = -895644691LL;
	int16_t x2934 = 30;
	uint8_t x2935 = 1U;

	t86 = ((x2933<=(x2934-x2935))>>x2936);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2959 = 14172953;

	t87 = ((x2957<=(x2958-x2959))>>x2960);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2961 = UINT64_MAX;
	uint64_t x2962 = 113LLU;
	static int16_t x2963 = INT16_MIN;
	volatile int8_t x2964 = 1;

	t88 = ((x2961<=(x2962-x2963))>>x2964);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2973 = INT16_MIN;
	volatile uint8_t x2974 = UINT8_MAX;
	int64_t x2975 = 21218341197LL;
	volatile uint16_t x2976 = 14U;
	int32_t t89 = -12058216;

	t89 = ((x2973<=(x2974-x2975))>>x2976);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x3073 = INT32_MIN;
	static int32_t x3074 = INT32_MIN;
	int64_t x3075 = -113763442966529LL;
	int8_t x3076 = 1;

	t90 = ((x3073<=(x3074-x3075))>>x3076);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x3129 = INT32_MIN;
	int32_t x3130 = 31850;
	uint8_t x3132 = 0U;
	int32_t t91 = 27431600;

	t91 = ((x3129<=(x3130-x3131))>>x3132);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3181 = 5;
	int16_t x3182 = INT16_MAX;
	volatile uint64_t x3183 = 169484LLU;
	int32_t t92 = 492417962;

	t92 = ((x3181<=(x3182-x3183))>>x3184);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3310 = -1;
	uint8_t x3312 = 23U;
	int32_t t93 = 503556257;

	t93 = ((x3309<=(x3310-x3311))>>x3312);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3321 = INT64_MIN;
	int32_t x3322 = INT32_MIN;
	uint32_t x3323 = UINT32_MAX;
	uint8_t x3324 = 3U;
	int32_t t94 = -1953482;

	t94 = ((x3321<=(x3322-x3323))>>x3324);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x3333 = 60U;
	int32_t x3335 = 474464;
	volatile int16_t x3336 = 4;
	volatile int32_t t95 = -4;

	t95 = ((x3333<=(x3334-x3335))>>x3336);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3378 = UINT32_MAX;
	static int8_t x3380 = 12;

	t96 = ((x3377<=(x3378-x3379))>>x3380);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x3433 = 696U;
	uint64_t x3434 = 968656553248024LLU;
	int8_t x3435 = -1;
	uint16_t x3436 = 3U;
	int32_t t97 = 299;

	t97 = ((x3433<=(x3434-x3435))>>x3436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x3449 = 1989752U;
	int32_t x3450 = 256652680;
	volatile uint32_t x3451 = UINT32_MAX;
	uint16_t x3452 = 1U;
	int32_t t98 = 1;

	t98 = ((x3449<=(x3450-x3451))>>x3452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x3461 = 0;
	uint8_t x3462 = UINT8_MAX;
	uint32_t x3463 = 12871584U;
	static uint8_t x3464 = 2U;

	t99 = ((x3461<=(x3462-x3463))>>x3464);

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

