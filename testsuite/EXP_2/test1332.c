#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x19 = -1LL;
int16_t x62 = INT16_MAX;
volatile int16_t x217 = INT16_MAX;
static int32_t t3 = 674;
static int64_t x356 = 0LL;
volatile int32_t x382 = -1;
static volatile uint8_t x433 = 3U;
int16_t x479 = INT16_MAX;
volatile uint32_t x549 = 486295338U;
static int64_t x552 = 3LL;
int16_t x565 = 900;
volatile int16_t x566 = INT16_MIN;
int16_t x783 = INT16_MAX;
int64_t x869 = 9160LL;
volatile int64_t t14 = 3838884829LL;
uint64_t x981 = 10760LLU;
int64_t x983 = -1LL;
static int32_t x1056 = 3;
static uint32_t x1107 = UINT32_MAX;
volatile uint64_t x1157 = UINT64_MAX;
uint16_t x1173 = 4822U;
volatile uint32_t x1174 = 882U;
volatile int32_t t22 = -44158;
int8_t x1298 = 0;
static uint8_t x1321 = 0U;
int8_t x1324 = 3;
int8_t x1408 = 13;
int16_t x1514 = -899;
uint32_t t31 = 29U;
int8_t x1582 = INT8_MIN;
uint32_t x1584 = 0U;
volatile uint8_t x1620 = 5U;
uint16_t x1628 = 6U;
uint64_t x1633 = 2213LLU;
static int8_t x1711 = INT8_MAX;
int8_t x1712 = 1;
static uint32_t x1896 = 14U;
volatile int32_t t40 = -5;
volatile uint32_t t41 = 38728U;
volatile uint8_t x1960 = 0U;
volatile int64_t t43 = INT64_MAX;
uint32_t x2086 = 995U;
static int64_t x2126 = INT64_MAX;
int32_t t46 = 149;
volatile int32_t t49 = 188247;
int64_t t50 = -3995533858296158284LL;
uint8_t x2606 = UINT8_MAX;
int16_t x2743 = 45;
uint8_t x2752 = 1U;
int32_t x2795 = INT32_MIN;
static int16_t x2980 = 2;
uint8_t x3111 = 45U;
int16_t x3241 = INT16_MAX;
static int8_t x3280 = 37;
static volatile uint32_t t61 = 356702598U;
uint32_t x3305 = UINT32_MAX;
volatile int16_t x3308 = 2;
static volatile uint32_t t62 = 58685114U;
uint8_t x3328 = 11U;
uint8_t x3416 = 4U;
uint32_t x3445 = 13U;
uint32_t x3446 = 1U;
volatile int16_t x3448 = 4;
static uint8_t x3508 = 1U;
static uint8_t x3567 = 1U;
int8_t x3580 = 5;
int16_t x3654 = -1448;
static volatile int32_t t69 = 59150;
int8_t x3862 = -1;
int64_t x3902 = INT64_MAX;
uint32_t x3934 = UINT32_MAX;
int16_t x3996 = 0;
int64_t x4131 = INT64_MIN;
uint8_t x4132 = 6U;
static int64_t x4162 = -1LL;
int64_t x4218 = INT64_MAX;
uint32_t x4220 = 3U;
int32_t x4258 = INT32_MIN;
volatile int32_t t81 = INT32_MAX;
uint16_t x4286 = 1433U;
uint16_t x4288 = 0U;
volatile int32_t t82 = 94;
uint8_t x4479 = 25U;
uint64_t x4761 = 119942028884523687LLU;
static uint32_t x4770 = 302982083U;
int32_t x4798 = -1;
static int32_t x4799 = -1;
uint64_t x4849 = UINT64_MAX;
int8_t x4851 = -1;
volatile int32_t t92 = 330;
volatile uint32_t x4934 = 108172725U;
static uint8_t x4936 = 7U;
static int32_t t93 = 574494;
int8_t x5187 = -1;
uint32_t t95 = 1U;
uint16_t x5301 = 0U;
int32_t x5303 = -201689;
int32_t x5395 = -1;


void f0(void) {
	volatile uint64_t x17 = 117624848461LLU;
	int32_t x18 = INT32_MAX;
	volatile uint16_t x20 = 8U;
	static uint64_t t0 = 157834786854LLU;

	t0 = ((x17|(x18==x19))<<x20);

	if (t0 != 30111961206016LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x61 = 99040164054LL;
	int16_t x63 = 1;
	static uint64_t x64 = 1LLU;
	volatile int64_t t1 = 1464041126493359592LL;

	t1 = ((x61|(x62==x63))<<x64);

	if (t1 != 198080328108LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x186 = -1;
	static uint32_t x187 = 16206U;
	uint8_t x188 = 0U;
	static uint32_t t2 = UINT32_MAX;

	t2 = ((x185|(x186==x187))<<x188);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x218 = INT16_MIN;
	int32_t x219 = -1;
	uint8_t x220 = 0U;

	t3 = ((x217|(x218==x219))<<x220);

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x353 = 54U;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = 801796596LLU;
	int32_t t4 = 10;

	t4 = ((x353|(x354==x355))<<x356);

	if (t4 != 54) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x377 = 0;
	static uint64_t x378 = 4749LLU;
	int64_t x379 = INT64_MIN;
	static volatile uint32_t x380 = 3U;
	int32_t t5 = 272999;

	t5 = ((x377|(x378==x379))<<x380);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int16_t x383 = INT16_MIN;
	int8_t x384 = 3;
	static volatile int32_t t6 = 89268;

	t6 = ((x381|(x382==x383))<<x384);

	if (t6 != 2040) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x434 = -1;
	int8_t x435 = -1;
	uint8_t x436 = 24U;
	int32_t t7 = -1113;

	t7 = ((x433|(x434==x435))<<x436);

	if (t7 != 50331648) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x477 = 0;
	int16_t x478 = 1860;
	volatile int16_t x480 = 0;
	static int32_t t8 = 48302;

	t8 = ((x477|(x478==x479))<<x480);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x517 = 9511549135104LL;
	static volatile uint16_t x518 = 3935U;
	int8_t x519 = 53;
	static volatile uint8_t x520 = 0U;
	int64_t t9 = -1880LL;

	t9 = ((x517|(x518==x519))<<x520);

	if (t9 != 9511549135104LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x550 = 23975036;
	uint32_t x551 = 512028629U;
	volatile uint32_t t10 = 5U;

	t10 = ((x549|(x550==x551))<<x552);

	if (t10 != 3890362704U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x567 = -1;
	uint8_t x568 = 3U;
	int32_t t11 = 414319;

	t11 = ((x565|(x566==x567))<<x568);

	if (t11 != 7200) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x781 = 16513067104468649LLU;
	int8_t x782 = -8;
	uint16_t x784 = 3U;
	static volatile uint64_t t12 = 24LLU;

	t12 = ((x781|(x782==x783))<<x784);

	if (t12 != 132104536835749192LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x805 = INT8_MAX;
	uint8_t x806 = 4U;
	int8_t x807 = -1;
	uint32_t x808 = 23U;
	static int32_t t13 = 900;

	t13 = ((x805|(x806==x807))<<x808);

	if (t13 != 1065353216) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x870 = UINT16_MAX;
	int64_t x871 = 81743958956555452LL;
	int16_t x872 = 0;

	t14 = ((x869|(x870==x871))<<x872);

	if (t14 != 9160LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x982 = UINT8_MAX;
	int32_t x984 = 33;
	uint64_t t15 = 57LLU;

	t15 = ((x981|(x982==x983))<<x984);

	if (t15 != 92427696209920LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1005 = 188951U;
	int32_t x1006 = 756;
	int8_t x1007 = INT8_MIN;
	uint8_t x1008 = 0U;
	volatile uint32_t t16 = 14861921U;

	t16 = ((x1005|(x1006==x1007))<<x1008);

	if (t16 != 188951U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1053 = UINT8_MAX;
	int16_t x1054 = -1;
	int8_t x1055 = -22;
	int32_t t17 = 5970;

	t17 = ((x1053|(x1054==x1055))<<x1056);

	if (t17 != 2040) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x1085 = 121U;
	uint16_t x1086 = UINT16_MAX;
	int16_t x1087 = INT16_MIN;
	static uint16_t x1088 = 15U;
	int32_t t18 = 617353;

	t18 = ((x1085|(x1086==x1087))<<x1088);

	if (t18 != 3964928) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x1105 = 7895U;
	int32_t x1106 = -17;
	int8_t x1108 = 13;
	static uint32_t t19 = 447295700U;

	t19 = ((x1105|(x1106==x1107))<<x1108);

	if (t19 != 64675840U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1109 = UINT32_MAX;
	int8_t x1110 = -1;
	uint32_t x1111 = 30435783U;
	int16_t x1112 = 1;
	volatile uint32_t t20 = 50300635U;

	t20 = ((x1109|(x1110==x1111))<<x1112);

	if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1158 = -194401332;
	uint32_t x1159 = 43922840U;
	int8_t x1160 = 1;
	uint64_t t21 = 86401912LLU;

	t21 = ((x1157|(x1158==x1159))<<x1160);

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1175 = 8086LLU;
	int8_t x1176 = 0;

	t22 = ((x1173|(x1174==x1175))<<x1176);

	if (t22 != 4822) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1193 = 7;
	int16_t x1194 = -1;
	volatile uint64_t x1195 = UINT64_MAX;
	uint8_t x1196 = 3U;
	volatile int32_t t23 = 54;

	t23 = ((x1193|(x1194==x1195))<<x1196);

	if (t23 != 56) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1297 = 73120608LLU;
	int32_t x1299 = INT32_MIN;
	int16_t x1300 = 0;
	uint64_t t24 = 4110606195464012LLU;

	t24 = ((x1297|(x1298==x1299))<<x1300);

	if (t24 != 73120608LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1322 = 14616;
	uint8_t x1323 = UINT8_MAX;
	int32_t t25 = -166640;

	t25 = ((x1321|(x1322==x1323))<<x1324);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1341 = 2597566634256596LLU;
	int32_t x1342 = INT32_MAX;
	static volatile uint32_t x1343 = 1U;
	uint8_t x1344 = 24U;
	volatile uint64_t t26 = 83401LLU;

	t26 = ((x1341|(x1342==x1343))<<x1344);

	if (t26 != 8726995213949599744LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1389 = 359841975371LLU;
	int16_t x1390 = INT16_MAX;
	static int64_t x1391 = -162003296LL;
	uint8_t x1392 = 13U;
	uint64_t t27 = 184059LLU;

	t27 = ((x1389|(x1390==x1391))<<x1392);

	if (t27 != 2947825462239232LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1393 = 5U;
	static int16_t x1394 = -5105;
	int8_t x1395 = -27;
	uint16_t x1396 = 3U;
	volatile int32_t t28 = -848;

	t28 = ((x1393|(x1394==x1395))<<x1396);

	if (t28 != 40) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1405 = 3519583U;
	volatile int64_t x1406 = -839923125LL;
	static int64_t x1407 = -1LL;
	uint32_t t29 = 2295U;

	t29 = ((x1405|(x1406==x1407))<<x1408);

	if (t29 != 3062620160U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1421 = UINT64_MAX;
	volatile int16_t x1422 = 1072;
	int32_t x1423 = 20625472;
	uint64_t x1424 = 45LLU;
	static uint64_t t30 = 3270937754030677950LLU;

	t30 = ((x1421|(x1422==x1423))<<x1424);

	if (t30 != 18446708889337462784LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1513 = 409117U;
	int16_t x1515 = INT16_MAX;
	int8_t x1516 = 4;

	t31 = ((x1513|(x1514==x1515))<<x1516);

	if (t31 != 6545872U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1581 = 1LL;
	int16_t x1583 = -1;
	int64_t t32 = -124LL;

	t32 = ((x1581|(x1582==x1583))<<x1584);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1589 = INT8_MAX;
	static uint16_t x1590 = 3490U;
	int32_t x1591 = 231581204;
	volatile int8_t x1592 = 0;
	volatile int32_t t33 = -56010;

	t33 = ((x1589|(x1590==x1591))<<x1592);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1617 = 31864LL;
	uint64_t x1618 = UINT64_MAX;
	int64_t x1619 = INT64_MIN;
	int64_t t34 = -1LL;

	t34 = ((x1617|(x1618==x1619))<<x1620);

	if (t34 != 1019648LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1625 = 1U;
	static uint64_t x1626 = 2134637367757426LLU;
	volatile uint32_t x1627 = 37929U;
	static uint32_t t35 = 27U;

	t35 = ((x1625|(x1626==x1627))<<x1628);

	if (t35 != 64U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1634 = -1LL;
	static volatile int8_t x1635 = INT8_MAX;
	uint8_t x1636 = 1U;
	volatile uint64_t t36 = 68655208279LLU;

	t36 = ((x1633|(x1634==x1635))<<x1636);

	if (t36 != 4426LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1673 = UINT64_MAX;
	int8_t x1674 = -1;
	int16_t x1675 = INT16_MIN;
	uint16_t x1676 = 38U;
	uint64_t t37 = 5666934089974728LLU;

	t37 = ((x1673|(x1674==x1675))<<x1676);

	if (t37 != 18446743798831644672LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1709 = 1U;
	int16_t x1710 = INT16_MIN;
	volatile int32_t t38 = -49749;

	t38 = ((x1709|(x1710==x1711))<<x1712);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1841 = 7035;
	static int16_t x1842 = INT16_MIN;
	int16_t x1843 = INT16_MAX;
	uint8_t x1844 = 5U;
	int32_t t39 = 309;

	t39 = ((x1841|(x1842==x1843))<<x1844);

	if (t39 != 225120) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x1893 = 30U;
	uint32_t x1894 = UINT32_MAX;
	uint64_t x1895 = 55054724755474LLU;

	t40 = ((x1893|(x1894==x1895))<<x1896);

	if (t40 != 491520) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1917 = UINT32_MAX;
	int64_t x1918 = -1533LL;
	volatile int64_t x1919 = 23959307572137381LL;
	uint8_t x1920 = 14U;

	t41 = ((x1917|(x1918==x1919))<<x1920);

	if (t41 != 4294950912U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1957 = 539048;
	uint16_t x1958 = 4U;
	static volatile int32_t x1959 = INT32_MIN;
	int32_t t42 = -6303795;

	t42 = ((x1957|(x1958==x1959))<<x1960);

	if (t42 != 539048) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2005 = INT64_MAX;
	int64_t x2006 = INT64_MIN;
	static volatile int8_t x2007 = INT8_MIN;
	volatile int16_t x2008 = 0;

	t43 = ((x2005|(x2006==x2007))<<x2008);

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2085 = UINT32_MAX;
	static int32_t x2087 = -1;
	int8_t x2088 = 0;
	uint32_t t44 = UINT32_MAX;

	t44 = ((x2085|(x2086==x2087))<<x2088);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2113 = INT8_MAX;
	uint64_t x2114 = 2141088189639895747LLU;
	static int64_t x2115 = -3655956363153431625LL;
	static uint8_t x2116 = 2U;
	volatile int32_t t45 = -45;

	t45 = ((x2113|(x2114==x2115))<<x2116);

	if (t45 != 508) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2125 = 7;
	int64_t x2127 = INT64_MIN;
	static uint16_t x2128 = 0U;

	t46 = ((x2125|(x2126==x2127))<<x2128);

	if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2149 = 411663286U;
	volatile uint8_t x2150 = 6U;
	volatile uint16_t x2151 = UINT16_MAX;
	volatile uint8_t x2152 = 19U;
	volatile uint32_t t47 = 1647536U;

	t47 = ((x2149|(x2150==x2151))<<x2152);

	if (t47 != 3719299072U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2169 = 144322097LLU;
	volatile int64_t x2170 = INT64_MAX;
	volatile int8_t x2171 = 1;
	int32_t x2172 = 48;
	uint64_t t48 = 871031507200475LLU;

	t48 = ((x2169|(x2170==x2171))<<x2172);

	if (t48 != 3328441599603507200LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2301 = INT16_MAX;
	int64_t x2302 = -1LL;
	uint8_t x2303 = 54U;
	int8_t x2304 = 3;

	t49 = ((x2301|(x2302==x2303))<<x2304);

	if (t49 != 262136) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2309 = 356989181819LL;
	int64_t x2310 = INT64_MIN;
	volatile uint8_t x2311 = 61U;
	volatile int8_t x2312 = 1;

	t50 = ((x2309|(x2310==x2311))<<x2312);

	if (t50 != 713978363638LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2605 = UINT32_MAX;
	static volatile int32_t x2607 = INT32_MIN;
	volatile uint8_t x2608 = 31U;
	volatile uint32_t t51 = 631U;

	t51 = ((x2605|(x2606==x2607))<<x2608);

	if (t51 != 2147483648U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x2741 = 35U;
	volatile int64_t x2742 = INT64_MAX;
	volatile uint32_t x2744 = 0U;
	volatile int32_t t52 = -172;

	t52 = ((x2741|(x2742==x2743))<<x2744);

	if (t52 != 35) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x2749 = 969LL;
	static int8_t x2750 = INT8_MIN;
	int8_t x2751 = INT8_MAX;
	static int64_t t53 = -525058LL;

	t53 = ((x2749|(x2750==x2751))<<x2752);

	if (t53 != 1938LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x2793 = 2557U;
	uint16_t x2794 = UINT16_MAX;
	uint8_t x2796 = 30U;
	uint32_t t54 = 4007U;

	t54 = ((x2793|(x2794==x2795))<<x2796);

	if (t54 != 1073741824U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2977 = 2896686044272LLU;
	int32_t x2978 = -86775;
	uint32_t x2979 = 166414767U;
	uint64_t t55 = 21011283303996LLU;

	t55 = ((x2977|(x2978==x2979))<<x2980);

	if (t55 != 11586744177088LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x3037 = 260029475522LL;
	int16_t x3038 = INT16_MIN;
	static int8_t x3039 = 0;
	uint8_t x3040 = 1U;
	volatile int64_t t56 = -63529264160LL;

	t56 = ((x3037|(x3038==x3039))<<x3040);

	if (t56 != 520058951044LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x3109 = UINT16_MAX;
	static volatile uint8_t x3110 = UINT8_MAX;
	volatile uint64_t x3112 = 12LLU;
	static volatile int32_t t57 = -324588799;

	t57 = ((x3109|(x3110==x3111))<<x3112);

	if (t57 != 268431360) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3177 = 6LL;
	volatile uint16_t x3178 = UINT16_MAX;
	volatile int32_t x3179 = INT32_MIN;
	uint8_t x3180 = 0U;
	int64_t t58 = -93189590695LL;

	t58 = ((x3177|(x3178==x3179))<<x3180);

	if (t58 != 6LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3242 = -4093;
	uint8_t x3243 = 81U;
	static uint8_t x3244 = 2U;
	volatile int32_t t59 = 829;

	t59 = ((x3241|(x3242==x3243))<<x3244);

	if (t59 != 131068) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3277 = 188056516801810266LLU;
	static volatile int32_t x3278 = -451492;
	volatile int8_t x3279 = 6;
	uint64_t t60 = 595LLU;

	t60 = ((x3277|(x3278==x3279))<<x3280);

	if (t60 != 3848866016675233792LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3289 = UINT32_MAX;
	static int32_t x3290 = 10;
	static int64_t x3291 = -1575868865LL;
	uint32_t x3292 = 3U;

	t61 = ((x3289|(x3290==x3291))<<x3292);

	if (t61 != 4294967288U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x3306 = INT64_MIN;
	static int16_t x3307 = 1;

	t62 = ((x3305|(x3306==x3307))<<x3308);

	if (t62 != 4294967292U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3325 = 37U;
	volatile uint16_t x3326 = UINT16_MAX;
	uint8_t x3327 = 39U;
	volatile int32_t t63 = 6;

	t63 = ((x3325|(x3326==x3327))<<x3328);

	if (t63 != 75776) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3413 = 2;
	uint32_t x3414 = UINT32_MAX;
	int32_t x3415 = INT32_MIN;
	int32_t t64 = -433;

	t64 = ((x3413|(x3414==x3415))<<x3416);

	if (t64 != 32) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3447 = INT64_MIN;
	volatile uint32_t t65 = 888U;

	t65 = ((x3445|(x3446==x3447))<<x3448);

	if (t65 != 208U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3505 = 62;
	int16_t x3506 = INT16_MIN;
	volatile int16_t x3507 = -26;
	static int32_t t66 = 1117;

	t66 = ((x3505|(x3506==x3507))<<x3508);

	if (t66 != 124) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3565 = INT16_MAX;
	int64_t x3566 = INT64_MAX;
	static uint16_t x3568 = 3U;
	int32_t t67 = 17044946;

	t67 = ((x3565|(x3566==x3567))<<x3568);

	if (t67 != 262136) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3577 = UINT64_MAX;
	static int8_t x3578 = 11;
	int16_t x3579 = 1351;
	uint64_t t68 = 6157294129650877335LLU;

	t68 = ((x3577|(x3578==x3579))<<x3580);

	if (t68 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3653 = INT8_MAX;
	uint64_t x3655 = 3535333482LLU;
	static uint16_t x3656 = 0U;

	t69 = ((x3653|(x3654==x3655))<<x3656);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3861 = 11U;
	static uint32_t x3863 = UINT32_MAX;
	volatile int8_t x3864 = 1;
	int32_t t70 = 19168;

	t70 = ((x3861|(x3862==x3863))<<x3864);

	if (t70 != 22) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x3901 = 474738U;
	int16_t x3903 = INT16_MIN;
	volatile int8_t x3904 = 0;
	volatile uint32_t t71 = 596046U;

	t71 = ((x3901|(x3902==x3903))<<x3904);

	if (t71 != 474738U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3913 = 28648401;
	int16_t x3914 = -1;
	uint32_t x3915 = 78U;
	int8_t x3916 = 1;
	int32_t t72 = -212;

	t72 = ((x3913|(x3914==x3915))<<x3916);

	if (t72 != 57296802) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x3933 = 19;
	static int32_t x3935 = 31;
	int16_t x3936 = 10;
	int32_t t73 = -11180950;

	t73 = ((x3933|(x3934==x3935))<<x3936);

	if (t73 != 19456) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3993 = UINT64_MAX;
	int8_t x3994 = 58;
	uint16_t x3995 = 80U;
	uint64_t t74 = UINT64_MAX;

	t74 = ((x3993|(x3994==x3995))<<x3996);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4129 = 131;
	int16_t x4130 = INT16_MIN;
	volatile int32_t t75 = -1;

	t75 = ((x4129|(x4130==x4131))<<x4132);

	if (t75 != 8384) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4161 = 18U;
	int8_t x4163 = INT8_MIN;
	int16_t x4164 = 9;
	int32_t t76 = -1935729;

	t76 = ((x4161|(x4162==x4163))<<x4164);

	if (t76 != 9216) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x4189 = UINT8_MAX;
	int32_t x4190 = -6;
	volatile int64_t x4191 = -7989LL;
	uint16_t x4192 = 15U;
	static volatile int32_t t77 = -1;

	t77 = ((x4189|(x4190==x4191))<<x4192);

	if (t77 != 8355840) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x4201 = 0;
	uint8_t x4202 = 15U;
	volatile int16_t x4203 = 3;
	uint16_t x4204 = 3U;
	volatile int32_t t78 = -92604010;

	t78 = ((x4201|(x4202==x4203))<<x4204);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x4217 = 0;
	uint32_t x4219 = 6U;
	volatile int32_t t79 = 30297;

	t79 = ((x4217|(x4218==x4219))<<x4220);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x4233 = INT16_MAX;
	static int32_t x4234 = -168595452;
	uint64_t x4235 = 955358LLU;
	uint16_t x4236 = 10U;
	volatile int32_t t80 = 11513950;

	t80 = ((x4233|(x4234==x4235))<<x4236);

	if (t80 != 33553408) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x4257 = INT32_MAX;
	static uint8_t x4259 = 76U;
	int8_t x4260 = 0;

	t81 = ((x4257|(x4258==x4259))<<x4260);

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4285 = 3U;
	int32_t x4287 = -1;

	t82 = ((x4285|(x4286==x4287))<<x4288);

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4437 = 4370U;
	uint8_t x4438 = UINT8_MAX;
	volatile int16_t x4439 = -18;
	uint8_t x4440 = 2U;
	volatile int32_t t83 = -83;

	t83 = ((x4437|(x4438==x4439))<<x4440);

	if (t83 != 17480) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x4477 = UINT64_MAX;
	int64_t x4478 = INT64_MAX;
	int16_t x4480 = 5;
	volatile uint64_t t84 = 391248149LLU;

	t84 = ((x4477|(x4478==x4479))<<x4480);

	if (t84 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4597 = 15797083U;
	volatile uint16_t x4598 = 814U;
	volatile int16_t x4599 = INT16_MAX;
	int16_t x4600 = 10;
	volatile uint32_t t85 = 3390320U;

	t85 = ((x4597|(x4598==x4599))<<x4600);

	if (t85 != 3291311104U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x4645 = 14U;
	int64_t x4646 = -1LL;
	int8_t x4647 = -1;
	int16_t x4648 = 0;
	volatile uint32_t t86 = 300U;

	t86 = ((x4645|(x4646==x4647))<<x4648);

	if (t86 != 15U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4693 = 5U;
	static int32_t x4694 = -1;
	uint16_t x4695 = 6U;
	int16_t x4696 = 11;
	volatile int32_t t87 = -2;

	t87 = ((x4693|(x4694==x4695))<<x4696);

	if (t87 != 10240) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4762 = -1LL;
	int16_t x4763 = INT16_MAX;
	volatile uint8_t x4764 = 13U;
	uint64_t t88 = 11733LLU;

	t88 = ((x4761|(x4762==x4763))<<x4764);

	if (t88 != 4887664715411808256LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4769 = UINT8_MAX;
	volatile int16_t x4771 = 15;
	int16_t x4772 = 1;
	static int32_t t89 = 3;

	t89 = ((x4769|(x4770==x4771))<<x4772);

	if (t89 != 510) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4797 = 288767988560229115LLU;
	uint8_t x4800 = 4U;
	static uint64_t t90 = 33LLU;

	t90 = ((x4797|(x4798==x4799))<<x4800);

	if (t90 != 4620287816963665840LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4850 = INT8_MIN;
	int8_t x4852 = 1;
	uint64_t t91 = 2310022032957LLU;

	t91 = ((x4849|(x4850==x4851))<<x4852);

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4853 = 58U;
	int16_t x4854 = INT16_MIN;
	uint8_t x4855 = 1U;
	int8_t x4856 = 1;

	t92 = ((x4853|(x4854==x4855))<<x4856);

	if (t92 != 116) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x4933 = 7U;
	uint64_t x4935 = 0LLU;

	t93 = ((x4933|(x4934==x4935))<<x4936);

	if (t93 != 896) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5041 = 805;
	static int32_t x5042 = 62;
	int16_t x5043 = INT16_MIN;
	uint64_t x5044 = 0LLU;
	volatile int32_t t94 = -1558;

	t94 = ((x5041|(x5042==x5043))<<x5044);

	if (t94 != 805) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5185 = 519289U;
	uint64_t x5186 = 10987511LLU;
	int16_t x5188 = 1;

	t95 = ((x5185|(x5186==x5187))<<x5188);

	if (t95 != 1038578U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x5302 = 475U;
	uint16_t x5304 = 0U;
	int32_t t96 = 354472887;

	t96 = ((x5301|(x5302==x5303))<<x5304);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x5325 = 358U;
	volatile uint64_t x5326 = 1141640724348LLU;
	int64_t x5327 = INT64_MAX;
	int8_t x5328 = 0;
	volatile int32_t t97 = -428;

	t97 = ((x5325|(x5326==x5327))<<x5328);

	if (t97 != 358) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x5381 = UINT64_MAX;
	uint64_t x5382 = 215119730137LLU;
	int8_t x5383 = 1;
	uint8_t x5384 = 23U;
	volatile uint64_t t98 = 90768545715LLU;

	t98 = ((x5381|(x5382==x5383))<<x5384);

	if (t98 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5393 = 9;
	uint64_t x5394 = UINT64_MAX;
	static uint8_t x5396 = 12U;
	int32_t t99 = 63192275;

	t99 = ((x5393|(x5394==x5395))<<x5396);

	if (t99 != 36864) { NG(); } else { ; }
	
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

