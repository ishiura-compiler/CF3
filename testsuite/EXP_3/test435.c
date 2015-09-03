#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x13 = -1;
volatile uint64_t x15 = UINT64_MAX;
int64_t x89 = INT64_MAX;
uint16_t x90 = 3U;
static uint16_t x91 = 0U;
uint64_t x92 = UINT64_MAX;
int16_t x105 = -1;
int32_t x106 = -5226;
volatile int64_t x126 = -1LL;
static int16_t x135 = 0;
int32_t t7 = 935;
uint64_t x142 = UINT64_MAX;
uint32_t x143 = 483476U;
static int64_t x361 = 270750649019313LL;
int16_t x401 = 41;
int8_t x402 = -19;
volatile int16_t x472 = INT16_MAX;
static volatile int32_t t12 = -79834178;
static uint8_t x556 = 78U;
volatile int32_t t15 = 334216;
int32_t t17 = 0;
static int16_t x697 = -1;
uint64_t x699 = UINT64_MAX;
int64_t x700 = -1LL;
volatile uint32_t x719 = 0U;
static uint8_t x728 = 5U;
volatile int8_t x897 = -35;
int16_t x1000 = -13;
static volatile int32_t t25 = 59;
static int8_t x1079 = 1;
int64_t x1086 = INT64_MAX;
int8_t x1087 = -1;
int16_t x1150 = INT16_MAX;
int16_t x1193 = -229;
volatile int32_t t32 = 1;
int16_t x1205 = INT16_MIN;
uint32_t x1208 = 4004U;
volatile int64_t x1249 = -1LL;
int32_t x1373 = 14;
volatile int8_t x1375 = -1;
volatile uint64_t x1381 = UINT64_MAX;
int32_t x1384 = -1;
int16_t x1410 = INT16_MIN;
volatile int32_t t37 = -52;
static volatile uint16_t x1419 = 0U;
volatile int8_t x1420 = INT8_MAX;
uint8_t x1468 = 0U;
int8_t x1609 = INT8_MIN;
int16_t x1610 = -22;
int64_t x1638 = INT64_MIN;
volatile uint64_t x1723 = 0LLU;
volatile int16_t x1837 = -1;
volatile int32_t t46 = -57;
int16_t x1865 = -201;
int32_t t49 = 6550419;
int8_t x1948 = 5;
int16_t x2000 = -1;
int8_t x2011 = -1;
uint32_t x2012 = UINT32_MAX;
int64_t x2129 = -2453575780096LL;
int64_t x2130 = 113687LL;
uint16_t x2141 = 1982U;
uint32_t x2191 = 306U;
static uint64_t x2289 = UINT64_MAX;
static int16_t x2428 = 0;
static volatile uint16_t x2551 = 125U;
static uint16_t x2583 = 0U;
static volatile int64_t x2593 = INT64_MIN;
static int32_t x2595 = -1;
static volatile int32_t x2597 = 437806060;
int8_t x2599 = -1;
int32_t t70 = -5;
uint8_t x2670 = 46U;
static int16_t x2678 = INT16_MIN;
volatile int32_t t72 = -777291941;
static volatile int32_t t74 = 464354219;
uint64_t x2845 = 830583LLU;
static int32_t t76 = 314246662;
static int32_t x2854 = -195056;
volatile uint8_t x2856 = 2U;
static int32_t t77 = -246709;
uint16_t x2889 = UINT16_MAX;
int32_t t78 = -61934;
int64_t x2930 = INT64_MIN;
static uint8_t x2962 = 49U;
static int32_t x2964 = -1;
int64_t x3007 = INT64_MAX;
int32_t t83 = -36421265;
int8_t x3019 = -1;
uint32_t x3049 = UINT32_MAX;
int8_t x3157 = -1;
static int32_t x3258 = 29;
uint16_t x3350 = 12U;
int64_t x3407 = -1LL;
volatile int8_t x3408 = -1;
uint64_t x3422 = UINT64_MAX;
int32_t x3424 = -1;
static uint8_t x3435 = 0U;
volatile int64_t x3473 = -2LL;
uint32_t x3476 = 1U;
static int32_t t99 = 249600;


void f0(void) {
	static uint32_t x14 = 33060657U;
	volatile int32_t x16 = -1;
	int32_t t0 = -4419629;

	t0 = ((x13==x14)<<(x15*x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x25 = -1LL;
	uint32_t x26 = 2U;
	uint32_t x27 = 0U;
	static int32_t x28 = 46053;
	int32_t t1 = 374241883;

	t1 = ((x25==x26)<<(x27*x28));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x33 = INT16_MIN;
	int8_t x34 = 0;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = -1;
	int32_t t2 = 313;

	t2 = ((x33==x34)<<(x35*x36));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t t3 = -11;

	t3 = ((x89==x90)<<(x91*x92));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x107 = -1LL;
	static int64_t x108 = -1LL;
	static int32_t t4 = -1665813;

	t4 = ((x105==x106)<<(x107*x108));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x125 = INT32_MIN;
	volatile uint64_t x127 = 401510LLU;
	int64_t x128 = INT64_MIN;
	static int32_t t5 = 3861;

	t5 = ((x125==x126)<<(x127*x128));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x133 = -1;
	int8_t x134 = INT8_MAX;
	static volatile int16_t x136 = INT16_MAX;
	int32_t t6 = 2;

	t6 = ((x133==x134)<<(x135*x136));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = UINT16_MAX;
	volatile int64_t x139 = INT64_MIN;
	uint64_t x140 = 644944150LLU;

	t7 = ((x137==x138)<<(x139*x140));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x141 = -1866LL;
	int16_t x144 = 0;
	int32_t t8 = 163382277;

	t8 = ((x141==x142)<<(x143*x144));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x189 = INT16_MIN;
	volatile uint64_t x190 = UINT64_MAX;
	int8_t x191 = -1;
	volatile int8_t x192 = -2;
	int32_t t9 = 2672459;

	t9 = ((x189==x190)<<(x191*x192));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x362 = INT32_MIN;
	volatile int16_t x363 = 0;
	int8_t x364 = 1;
	volatile int32_t t10 = 9955;

	t10 = ((x361==x362)<<(x363*x364));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x403 = 0LL;
	static volatile uint8_t x404 = 2U;
	volatile int32_t t11 = 6127;

	t11 = ((x401==x402)<<(x403*x404));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x469 = 832365771LLU;
	int32_t x470 = INT32_MIN;
	int16_t x471 = 0;

	t12 = ((x469==x470)<<(x471*x472));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x493 = -6;
	int64_t x494 = INT64_MIN;
	static volatile uint8_t x495 = 0U;
	volatile int16_t x496 = 157;
	volatile int32_t t13 = 92;

	t13 = ((x493==x494)<<(x495*x496));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x553 = -87;
	uint32_t x554 = 186752483U;
	static volatile uint8_t x555 = 0U;
	static volatile int32_t t14 = -66422978;

	t14 = ((x553==x554)<<(x555*x556));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x565 = INT16_MAX;
	static int16_t x566 = 28;
	int8_t x567 = -1;
	int32_t x568 = -1;

	t15 = ((x565==x566)<<(x567*x568));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x601 = 979;
	uint16_t x602 = 0U;
	int64_t x603 = INT64_MAX;
	int16_t x604 = 0;
	int32_t t16 = -10797;

	t16 = ((x601==x602)<<(x603*x604));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x605 = -10;
	int16_t x606 = INT16_MIN;
	int64_t x607 = -1LL;
	int16_t x608 = -1;

	t17 = ((x605==x606)<<(x607*x608));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x698 = -1LL;
	volatile int32_t t18 = -1055180;

	t18 = ((x697==x698)<<(x699*x700));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x717 = UINT8_MAX;
	int32_t x718 = INT32_MAX;
	uint32_t x720 = 1U;
	static int32_t t19 = -169;

	t19 = ((x717==x718)<<(x719*x720));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x725 = UINT16_MAX;
	static uint8_t x726 = UINT8_MAX;
	int8_t x727 = 4;
	volatile int32_t t20 = 33;

	t20 = ((x725==x726)<<(x727*x728));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x789 = UINT16_MAX;
	int64_t x790 = INT64_MIN;
	static volatile uint32_t x791 = 0U;
	int8_t x792 = -1;
	static volatile int32_t t21 = -617692680;

	t21 = ((x789==x790)<<(x791*x792));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x825 = INT16_MIN;
	uint8_t x826 = 1U;
	volatile uint8_t x827 = 0U;
	static int64_t x828 = -2066222LL;
	volatile int32_t t22 = 26;

	t22 = ((x825==x826)<<(x827*x828));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x898 = 42;
	uint32_t x899 = UINT32_MAX;
	int8_t x900 = -12;
	volatile int32_t t23 = -1495;

	t23 = ((x897==x898)<<(x899*x900));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x997 = 5;
	int16_t x998 = -1;
	int16_t x999 = -1;
	int32_t t24 = -199;

	t24 = ((x997==x998)<<(x999*x1000));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1045 = 60U;
	static volatile uint16_t x1046 = UINT16_MAX;
	static uint64_t x1047 = UINT64_MAX;
	int32_t x1048 = -1;

	t25 = ((x1045==x1046)<<(x1047*x1048));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1077 = INT16_MIN;
	volatile uint16_t x1078 = 3172U;
	volatile int16_t x1080 = 12;
	volatile int32_t t26 = 522818526;

	t26 = ((x1077==x1078)<<(x1079*x1080));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1085 = INT32_MAX;
	int8_t x1088 = -1;
	volatile int32_t t27 = 4351;

	t27 = ((x1085==x1086)<<(x1087*x1088));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1145 = INT16_MAX;
	int16_t x1146 = -1;
	uint8_t x1147 = 0U;
	static uint8_t x1148 = UINT8_MAX;
	static int32_t t28 = 881007;

	t28 = ((x1145==x1146)<<(x1147*x1148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1149 = INT32_MAX;
	static uint16_t x1151 = 1U;
	int64_t x1152 = 5LL;
	static int32_t t29 = 47951;

	t29 = ((x1149==x1150)<<(x1151*x1152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1185 = 2U;
	int16_t x1186 = -1;
	static uint32_t x1187 = 0U;
	int16_t x1188 = INT16_MIN;
	static volatile int32_t t30 = 86898782;

	t30 = ((x1185==x1186)<<(x1187*x1188));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1189 = -1;
	uint16_t x1190 = UINT16_MAX;
	int32_t x1191 = -1;
	int8_t x1192 = -1;
	volatile int32_t t31 = -8879;

	t31 = ((x1189==x1190)<<(x1191*x1192));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1194 = UINT8_MAX;
	int64_t x1195 = -1LL;
	int8_t x1196 = -22;

	t32 = ((x1193==x1194)<<(x1195*x1196));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1206 = UINT8_MAX;
	uint16_t x1207 = 0U;
	static int32_t t33 = -28256849;

	t33 = ((x1205==x1206)<<(x1207*x1208));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1250 = INT64_MIN;
	int64_t x1251 = -1LL;
	int16_t x1252 = -1;
	int32_t t34 = -2007014;

	t34 = ((x1249==x1250)<<(x1251*x1252));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1374 = -1;
	volatile uint64_t x1376 = UINT64_MAX;
	int32_t t35 = -840;

	t35 = ((x1373==x1374)<<(x1375*x1376));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1382 = -1;
	volatile int8_t x1383 = -2;
	static int32_t t36 = 89;

	t36 = ((x1381==x1382)<<(x1383*x1384));

	if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1409 = 11320423139LLU;
	volatile uint8_t x1411 = 0U;
	int32_t x1412 = -1;

	t37 = ((x1409==x1410)<<(x1411*x1412));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1417 = 93U;
	int16_t x1418 = -1;
	int32_t t38 = 77843656;

	t38 = ((x1417==x1418)<<(x1419*x1420));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1465 = 50;
	int16_t x1466 = INT16_MIN;
	uint64_t x1467 = 93LLU;
	int32_t t39 = 1355;

	t39 = ((x1465==x1466)<<(x1467*x1468));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1573 = 16U;
	int64_t x1574 = -1LL;
	uint16_t x1575 = 0U;
	static int8_t x1576 = 14;
	volatile int32_t t40 = 46298;

	t40 = ((x1573==x1574)<<(x1575*x1576));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1593 = -50;
	uint32_t x1594 = 464161U;
	static volatile int16_t x1595 = 13;
	uint16_t x1596 = 1U;
	volatile int32_t t41 = -97525878;

	t41 = ((x1593==x1594)<<(x1595*x1596));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1611 = 4;
	int16_t x1612 = 1;
	int32_t t42 = -170;

	t42 = ((x1609==x1610)<<(x1611*x1612));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1621 = -593;
	int64_t x1622 = -8951103LL;
	int64_t x1623 = 24601071LL;
	uint32_t x1624 = 0U;
	volatile int32_t t43 = -6869;

	t43 = ((x1621==x1622)<<(x1623*x1624));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1637 = 1;
	static int32_t x1639 = -5;
	uint32_t x1640 = UINT32_MAX;
	volatile int32_t t44 = -55;

	t44 = ((x1637==x1638)<<(x1639*x1640));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1721 = INT16_MIN;
	int32_t x1722 = INT32_MAX;
	int16_t x1724 = INT16_MAX;
	static int32_t t45 = -220;

	t45 = ((x1721==x1722)<<(x1723*x1724));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1838 = INT16_MIN;
	int8_t x1839 = INT8_MIN;
	uint16_t x1840 = 0U;

	t46 = ((x1837==x1838)<<(x1839*x1840));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1866 = INT8_MAX;
	uint32_t x1867 = UINT32_MAX;
	int8_t x1868 = 0;
	int32_t t47 = 931;

	t47 = ((x1865==x1866)<<(x1867*x1868));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1889 = -1;
	int16_t x1890 = INT16_MIN;
	int64_t x1891 = -1LL;
	static int32_t x1892 = -1;
	volatile int32_t t48 = -129697;

	t48 = ((x1889==x1890)<<(x1891*x1892));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1917 = INT32_MIN;
	volatile int16_t x1918 = 4;
	uint64_t x1919 = UINT64_MAX;
	volatile int16_t x1920 = -1;

	t49 = ((x1917==x1918)<<(x1919*x1920));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1945 = INT64_MAX;
	int64_t x1946 = INT64_MAX;
	static volatile uint64_t x1947 = 3LLU;
	volatile int32_t t50 = 27713886;

	t50 = ((x1945==x1946)<<(x1947*x1948));

	if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1953 = 1;
	int8_t x1954 = 4;
	int8_t x1955 = 3;
	static int8_t x1956 = 4;
	int32_t t51 = 132;

	t51 = ((x1953==x1954)<<(x1955*x1956));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x1997 = 1U;
	int64_t x1998 = -11176534LL;
	volatile uint8_t x1999 = 0U;
	static volatile int32_t t52 = 111;

	t52 = ((x1997==x1998)<<(x1999*x2000));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x2005 = 67U;
	int16_t x2006 = 89;
	int8_t x2007 = -1;
	static uint64_t x2008 = UINT64_MAX;
	volatile int32_t t53 = 356;

	t53 = ((x2005==x2006)<<(x2007*x2008));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x2009 = UINT32_MAX;
	volatile uint16_t x2010 = 935U;
	int32_t t54 = -870485918;

	t54 = ((x2009==x2010)<<(x2011*x2012));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2113 = INT8_MIN;
	static volatile int16_t x2114 = INT16_MAX;
	int32_t x2115 = -1;
	int32_t x2116 = -2;
	static int32_t t55 = -221;

	t55 = ((x2113==x2114)<<(x2115*x2116));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x2117 = INT8_MIN;
	uint32_t x2118 = UINT32_MAX;
	int32_t x2119 = -1;
	int8_t x2120 = -7;
	int32_t t56 = -13947;

	t56 = ((x2117==x2118)<<(x2119*x2120));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2131 = 94873498U;
	static int32_t x2132 = INT32_MIN;
	int32_t t57 = -37;

	t57 = ((x2129==x2130)<<(x2131*x2132));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2142 = 21646094;
	uint8_t x2143 = 0U;
	volatile int32_t x2144 = INT32_MAX;
	int32_t t58 = -9944;

	t58 = ((x2141==x2142)<<(x2143*x2144));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2189 = 188166280315302010LL;
	uint64_t x2190 = 6LLU;
	volatile int32_t x2192 = INT32_MIN;
	static volatile int32_t t59 = -776995;

	t59 = ((x2189==x2190)<<(x2191*x2192));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x2205 = 33U;
	int32_t x2206 = INT32_MIN;
	volatile int16_t x2207 = -5;
	volatile int16_t x2208 = -1;
	volatile int32_t t60 = 483980958;

	t60 = ((x2205==x2206)<<(x2207*x2208));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2290 = INT32_MIN;
	static int32_t x2291 = -1;
	int16_t x2292 = -1;
	int32_t t61 = 882074;

	t61 = ((x2289==x2290)<<(x2291*x2292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x2321 = 57587202584465263LLU;
	volatile int16_t x2322 = INT16_MIN;
	uint32_t x2323 = UINT32_MAX;
	int8_t x2324 = -1;
	int32_t t62 = 3;

	t62 = ((x2321==x2322)<<(x2323*x2324));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x2425 = 1U;
	static int32_t x2426 = 60705081;
	static int16_t x2427 = INT16_MIN;
	int32_t t63 = 14100;

	t63 = ((x2425==x2426)<<(x2427*x2428));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2453 = -1;
	static int8_t x2454 = 14;
	static int16_t x2455 = INT16_MIN;
	volatile uint8_t x2456 = 0U;
	volatile int32_t t64 = -121452;

	t64 = ((x2453==x2454)<<(x2455*x2456));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2473 = 5686U;
	uint64_t x2474 = 3115146687456039477LLU;
	uint8_t x2475 = 0U;
	int8_t x2476 = INT8_MAX;
	volatile int32_t t65 = 6;

	t65 = ((x2473==x2474)<<(x2475*x2476));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2549 = INT16_MIN;
	volatile int8_t x2550 = -1;
	uint8_t x2552 = 0U;
	volatile int32_t t66 = -461;

	t66 = ((x2549==x2550)<<(x2551*x2552));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x2581 = 0;
	int64_t x2582 = INT64_MAX;
	uint16_t x2584 = 5867U;
	int32_t t67 = 1473901;

	t67 = ((x2581==x2582)<<(x2583*x2584));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x2594 = 8U;
	static int16_t x2596 = -1;
	int32_t t68 = 48938792;

	t68 = ((x2593==x2594)<<(x2595*x2596));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x2598 = UINT8_MAX;
	int32_t x2600 = 0;
	static int32_t t69 = -9015506;

	t69 = ((x2597==x2598)<<(x2599*x2600));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2637 = INT32_MIN;
	int32_t x2638 = INT32_MAX;
	uint32_t x2639 = 33906851U;
	static int8_t x2640 = 0;

	t70 = ((x2637==x2638)<<(x2639*x2640));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2669 = INT16_MAX;
	volatile uint8_t x2671 = 0U;
	uint16_t x2672 = 7U;
	volatile int32_t t71 = 40161759;

	t71 = ((x2669==x2670)<<(x2671*x2672));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2677 = INT8_MAX;
	uint64_t x2679 = UINT64_MAX;
	int16_t x2680 = -1;

	t72 = ((x2677==x2678)<<(x2679*x2680));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2761 = 6100;
	int32_t x2762 = -897;
	uint8_t x2763 = 0U;
	int64_t x2764 = -226878365827612924LL;
	volatile int32_t t73 = 197;

	t73 = ((x2761==x2762)<<(x2763*x2764));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x2793 = INT16_MIN;
	int64_t x2794 = -1LL;
	int8_t x2795 = -1;
	static uint8_t x2796 = 0U;

	t74 = ((x2793==x2794)<<(x2795*x2796));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2817 = 16829U;
	volatile int64_t x2818 = 1LL;
	int32_t x2819 = -1;
	uint16_t x2820 = 0U;
	volatile int32_t t75 = 936;

	t75 = ((x2817==x2818)<<(x2819*x2820));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2846 = -1;
	int8_t x2847 = 0;
	int16_t x2848 = 1715;

	t76 = ((x2845==x2846)<<(x2847*x2848));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2853 = 85U;
	uint8_t x2855 = 4U;

	t77 = ((x2853==x2854)<<(x2855*x2856));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x2890 = INT32_MIN;
	uint32_t x2891 = 4036503U;
	int16_t x2892 = 0;

	t78 = ((x2889==x2890)<<(x2891*x2892));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x2929 = 2U;
	int32_t x2931 = INT32_MIN;
	uint32_t x2932 = 3868U;
	int32_t t79 = 1;

	t79 = ((x2929==x2930)<<(x2931*x2932));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2933 = -1;
	int32_t x2934 = INT32_MIN;
	static int8_t x2935 = 1;
	uint8_t x2936 = 6U;
	static int32_t t80 = -1463;

	t80 = ((x2933==x2934)<<(x2935*x2936));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x2961 = 3;
	uint64_t x2963 = UINT64_MAX;
	int32_t t81 = 28751339;

	t81 = ((x2961==x2962)<<(x2963*x2964));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x2981 = 292164;
	uint8_t x2982 = UINT8_MAX;
	int8_t x2983 = 0;
	uint32_t x2984 = 1587U;
	volatile int32_t t82 = -73155;

	t82 = ((x2981==x2982)<<(x2983*x2984));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3005 = INT8_MIN;
	int32_t x3006 = INT32_MIN;
	int8_t x3008 = 0;

	t83 = ((x3005==x3006)<<(x3007*x3008));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3017 = INT64_MIN;
	static int16_t x3018 = INT16_MIN;
	volatile int16_t x3020 = -1;
	int32_t t84 = 61415595;

	t84 = ((x3017==x3018)<<(x3019*x3020));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x3050 = 0U;
	int16_t x3051 = 0;
	volatile uint8_t x3052 = 49U;
	volatile int32_t t85 = 1;

	t85 = ((x3049==x3050)<<(x3051*x3052));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x3158 = 19170LLU;
	uint8_t x3159 = 0U;
	int8_t x3160 = 0;
	int32_t t86 = 1;

	t86 = ((x3157==x3158)<<(x3159*x3160));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x3177 = 29858LLU;
	volatile uint32_t x3178 = UINT32_MAX;
	int16_t x3179 = 0;
	static uint32_t x3180 = 56903640U;
	volatile int32_t t87 = 316563;

	t87 = ((x3177==x3178)<<(x3179*x3180));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x3221 = INT8_MIN;
	uint64_t x3222 = 23LLU;
	static uint8_t x3223 = 0U;
	uint32_t x3224 = 1U;
	static volatile int32_t t88 = 0;

	t88 = ((x3221==x3222)<<(x3223*x3224));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x3253 = -1;
	uint64_t x3254 = UINT64_MAX;
	int32_t x3255 = -1;
	static int16_t x3256 = -1;
	volatile int32_t t89 = 224359;

	t89 = ((x3253==x3254)<<(x3255*x3256));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3257 = INT32_MIN;
	uint32_t x3259 = UINT32_MAX;
	volatile int8_t x3260 = -1;
	volatile int32_t t90 = 817;

	t90 = ((x3257==x3258)<<(x3259*x3260));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3297 = INT8_MIN;
	static volatile int16_t x3298 = -1;
	static int32_t x3299 = -1;
	static int32_t x3300 = -1;
	volatile int32_t t91 = 1;

	t91 = ((x3297==x3298)<<(x3299*x3300));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3349 = 6U;
	static int64_t x3351 = INT64_MIN;
	uint64_t x3352 = 4LLU;
	static volatile int32_t t92 = 70981;

	t92 = ((x3349==x3350)<<(x3351*x3352));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x3361 = 3178LL;
	int32_t x3362 = -1;
	int32_t x3363 = INT32_MIN;
	static uint32_t x3364 = 102778344U;
	int32_t t93 = 27516168;

	t93 = ((x3361==x3362)<<(x3363*x3364));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3405 = UINT16_MAX;
	int8_t x3406 = -1;
	int32_t t94 = 418563300;

	t94 = ((x3405==x3406)<<(x3407*x3408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x3421 = 3460U;
	volatile int64_t x3423 = -1LL;
	int32_t t95 = -100198393;

	t95 = ((x3421==x3422)<<(x3423*x3424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3433 = 6U;
	int16_t x3434 = 4;
	static volatile int32_t x3436 = -1;
	int32_t t96 = 25967;

	t96 = ((x3433==x3434)<<(x3435*x3436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x3445 = UINT8_MAX;
	static int16_t x3446 = -1;
	static uint16_t x3447 = UINT16_MAX;
	uint8_t x3448 = 0U;
	static int32_t t97 = -52598148;

	t97 = ((x3445==x3446)<<(x3447*x3448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x3474 = UINT32_MAX;
	uint32_t x3475 = 8U;
	volatile int32_t t98 = -814439330;

	t98 = ((x3473==x3474)<<(x3475*x3476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x3485 = UINT16_MAX;
	int64_t x3486 = -101344219478542929LL;
	int64_t x3487 = INT64_MIN;
	uint32_t x3488 = 0U;

	t99 = ((x3485==x3486)<<(x3487*x3488));

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

