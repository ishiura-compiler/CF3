#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x6 = 23U;
uint32_t x7 = 5U;
int64_t x8 = INT64_MAX;
static int64_t x96 = -61LL;
static int64_t x151 = 0LL;
uint32_t x157 = 312855207U;
int32_t x257 = INT32_MIN;
uint16_t x262 = 3U;
int64_t x264 = -1LL;
int64_t x273 = -301LL;
volatile int32_t t9 = -860;
static int16_t x396 = -18;
volatile int32_t t10 = 0;
int32_t x470 = INT32_MIN;
static int32_t t12 = -193;
int32_t x474 = -1;
int8_t x481 = -13;
int64_t x484 = INT64_MIN;
volatile int16_t x516 = INT16_MAX;
static int64_t x570 = 36771656LL;
int16_t x702 = -1;
int8_t x711 = 0;
int64_t x762 = INT64_MIN;
uint32_t x764 = 893569U;
uint16_t x852 = UINT16_MAX;
static int32_t t26 = -11962;
static int8_t x963 = 0;
int64_t x1003 = 3LL;
static int8_t x1033 = INT8_MIN;
uint8_t x1035 = 12U;
volatile int32_t x1052 = -1;
int32_t x1061 = INT32_MIN;
static volatile uint16_t x1064 = 6U;
int32_t t33 = -101994;
int32_t x1170 = INT32_MIN;
int16_t x1172 = INT16_MIN;
int16_t x1342 = INT16_MAX;
volatile int32_t t38 = 2073030;
int8_t x1457 = INT8_MIN;
volatile int8_t x1488 = INT8_MIN;
int64_t x1529 = 15337LL;
static int32_t x1577 = -1;
static int8_t x1600 = -1;
int32_t t48 = 232112;
uint32_t x1791 = 30U;
volatile int32_t t50 = -5486;
uint8_t x1833 = UINT8_MAX;
int32_t t51 = -3768;
volatile int64_t x1973 = -160222LL;
uint32_t x1976 = 3700830U;
static uint8_t x1981 = UINT8_MAX;
int8_t x1982 = INT8_MAX;
static volatile int32_t t54 = -454;
volatile int32_t x2004 = INT32_MIN;
static uint8_t x2020 = UINT8_MAX;
static int64_t x2026 = -3608660486LL;
uint16_t x2027 = 9U;
uint32_t x2043 = 27U;
int32_t t59 = -4091;
int8_t x2145 = -1;
int8_t x2146 = 4;
uint8_t x2147 = 1U;
int16_t x2148 = -7197;
static volatile int32_t t61 = 6520;
uint16_t x2314 = 9809U;
uint64_t x2316 = UINT64_MAX;
volatile int16_t x2329 = INT16_MIN;
int8_t x2369 = INT8_MIN;
uint8_t x2372 = UINT8_MAX;
volatile int64_t x2396 = 10LL;
int8_t x2400 = INT8_MIN;
volatile int32_t t67 = -55393;
volatile int32_t t69 = 1502703;
static uint8_t x2519 = 0U;
int64_t x2544 = -1LL;
volatile uint16_t x2551 = 7U;
uint8_t x2559 = 0U;
static int32_t t78 = 84;
volatile int32_t t79 = 5;
uint8_t x2759 = 1U;
volatile int32_t x2797 = 392;
volatile int8_t x2838 = -57;
int32_t t83 = 119470430;
volatile int64_t x2845 = -1LL;
uint64_t x2885 = UINT64_MAX;
uint64_t x3025 = 2568947388453LLU;
static volatile uint32_t x3040 = 2U;
int32_t t90 = -5914963;
volatile int16_t x3081 = -16195;
int32_t t92 = -66;
int8_t x3115 = 3;
uint8_t x3139 = 4U;
static int32_t t94 = 234998382;
int8_t x3141 = -1;
int8_t x3143 = 5;
int32_t t95 = -559;
int32_t t96 = -435756162;
static uint16_t x3288 = UINT16_MAX;


void f0(void) {
	volatile int16_t x5 = INT16_MIN;
	int32_t t0 = -330799;

	t0 = (((x5<=x6)>>x7)<x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x37 = 20904LLU;
	int64_t x38 = INT64_MIN;
	static uint32_t x39 = 1U;
	uint8_t x40 = 0U;
	volatile int32_t t1 = -5037;

	t1 = (((x37<=x38)>>x39)<x40);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x93 = 47658U;
	static int64_t x94 = INT64_MIN;
	uint8_t x95 = 6U;
	static volatile int32_t t2 = 175;

	t2 = (((x93<=x94)>>x95)<x96);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x149 = -3;
	uint8_t x150 = 33U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t3 = 36;

	t3 = (((x149<=x150)>>x151)<x152);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = 1;
	int16_t x160 = 1;
	int32_t t4 = 0;

	t4 = (((x157<=x158)>>x159)<x160);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x209 = -1;
	uint32_t x210 = UINT32_MAX;
	uint8_t x211 = 2U;
	static int64_t x212 = -52503836883705982LL;
	int32_t t5 = 3109;

	t5 = (((x209<=x210)>>x211)<x212);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x258 = INT32_MAX;
	volatile int8_t x259 = 7;
	int32_t x260 = INT32_MAX;
	volatile int32_t t6 = 3272937;

	t6 = (((x257<=x258)>>x259)<x260);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x261 = 25U;
	uint8_t x263 = 14U;
	int32_t t7 = 1032712;

	t7 = (((x261<=x262)>>x263)<x264);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x274 = INT32_MIN;
	uint16_t x275 = 19U;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t8 = -73756882;

	t8 = (((x273<=x274)>>x275)<x276);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x345 = 8273U;
	uint16_t x346 = 0U;
	uint8_t x347 = 29U;
	int8_t x348 = 0;

	t9 = (((x345<=x346)>>x347)<x348);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x393 = 269414031U;
	int8_t x394 = 1;
	uint64_t x395 = 2LLU;

	t10 = (((x393<=x394)>>x395)<x396);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x417 = INT32_MIN;
	volatile int32_t x418 = -33;
	static int8_t x419 = 0;
	int32_t x420 = -1;
	volatile int32_t t11 = 1717;

	t11 = (((x417<=x418)>>x419)<x420);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x469 = INT64_MAX;
	uint8_t x471 = 29U;
	int16_t x472 = INT16_MIN;

	t12 = (((x469<=x470)>>x471)<x472);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x473 = 7U;
	volatile uint8_t x475 = 0U;
	int16_t x476 = INT16_MIN;
	static volatile int32_t t13 = 39;

	t13 = (((x473<=x474)>>x475)<x476);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x482 = 7U;
	static uint8_t x483 = 3U;
	int32_t t14 = 63690;

	t14 = (((x481<=x482)>>x483)<x484);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x513 = INT8_MIN;
	int16_t x514 = INT16_MIN;
	volatile uint8_t x515 = 2U;
	static volatile int32_t t15 = 2063093;

	t15 = (((x513<=x514)>>x515)<x516);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x517 = 8482726U;
	volatile int16_t x518 = -962;
	volatile uint16_t x519 = 6U;
	static int32_t x520 = INT32_MIN;
	static volatile int32_t t16 = 4429;

	t16 = (((x517<=x518)>>x519)<x520);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x521 = 3687398667506LL;
	volatile int8_t x522 = INT8_MAX;
	int8_t x523 = 0;
	static int16_t x524 = 5;
	volatile int32_t t17 = 462650881;

	t17 = (((x521<=x522)>>x523)<x524);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x569 = 541U;
	uint8_t x571 = 31U;
	static int32_t x572 = -18530;
	volatile int32_t t18 = 11144;

	t18 = (((x569<=x570)>>x571)<x572);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x609 = INT64_MIN;
	volatile int8_t x610 = INT8_MAX;
	static volatile int8_t x611 = 1;
	int16_t x612 = -2;
	volatile int32_t t19 = 111114409;

	t19 = (((x609<=x610)>>x611)<x612);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x701 = UINT64_MAX;
	volatile uint8_t x703 = 8U;
	static int8_t x704 = INT8_MIN;
	int32_t t20 = -943185;

	t20 = (((x701<=x702)>>x703)<x704);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x709 = -43;
	int64_t x710 = INT64_MIN;
	static uint64_t x712 = UINT64_MAX;
	int32_t t21 = 78835251;

	t21 = (((x709<=x710)>>x711)<x712);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x761 = 9U;
	uint64_t x763 = 0LLU;
	int32_t t22 = -52503534;

	t22 = (((x761<=x762)>>x763)<x764);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x793 = 1;
	static volatile int64_t x794 = INT64_MAX;
	uint8_t x795 = 12U;
	volatile uint32_t x796 = 24U;
	int32_t t23 = 21640551;

	t23 = (((x793<=x794)>>x795)<x796);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x849 = INT16_MIN;
	volatile int64_t x850 = INT64_MIN;
	uint32_t x851 = 5U;
	int32_t t24 = -27;

	t24 = (((x849<=x850)>>x851)<x852);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x857 = INT8_MIN;
	int32_t x858 = 11119;
	uint16_t x859 = 10U;
	int32_t x860 = 89538206;
	volatile int32_t t25 = 11346;

	t25 = (((x857<=x858)>>x859)<x860);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x953 = INT64_MIN;
	static volatile int64_t x954 = -1LL;
	volatile int32_t x955 = 1;
	volatile int16_t x956 = INT16_MIN;

	t26 = (((x953<=x954)>>x955)<x956);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x961 = -360LL;
	int16_t x962 = 52;
	uint32_t x964 = UINT32_MAX;
	int32_t t27 = 1065;

	t27 = (((x961<=x962)>>x963)<x964);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1001 = 882;
	int32_t x1002 = INT32_MIN;
	static int8_t x1004 = INT8_MIN;
	volatile int32_t t28 = 7;

	t28 = (((x1001<=x1002)>>x1003)<x1004);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1034 = 1;
	uint32_t x1036 = 591U;
	static volatile int32_t t29 = 12;

	t29 = (((x1033<=x1034)>>x1035)<x1036);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1049 = 8U;
	uint32_t x1050 = 41301648U;
	uint8_t x1051 = 1U;
	static volatile int32_t t30 = -2303;

	t30 = (((x1049<=x1050)>>x1051)<x1052);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1062 = 941U;
	static int16_t x1063 = 1;
	volatile int32_t t31 = -28547000;

	t31 = (((x1061<=x1062)>>x1063)<x1064);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1073 = INT32_MIN;
	int16_t x1074 = 130;
	volatile uint32_t x1075 = 0U;
	static int32_t x1076 = 5175466;
	int32_t t32 = 138440345;

	t32 = (((x1073<=x1074)>>x1075)<x1076);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1093 = -1;
	int16_t x1094 = -5;
	static uint32_t x1095 = 7U;
	static uint16_t x1096 = 659U;

	t33 = (((x1093<=x1094)>>x1095)<x1096);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1169 = UINT8_MAX;
	int8_t x1171 = 6;
	static volatile int32_t t34 = 0;

	t34 = (((x1169<=x1170)>>x1171)<x1172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1197 = -1;
	int32_t x1198 = 294339;
	int16_t x1199 = 0;
	volatile int16_t x1200 = INT16_MIN;
	volatile int32_t t35 = 30566;

	t35 = (((x1197<=x1198)>>x1199)<x1200);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x1309 = 74319U;
	uint32_t x1310 = 5031796U;
	uint8_t x1311 = 31U;
	uint64_t x1312 = 1127961958282570774LLU;
	int32_t t36 = 12380389;

	t36 = (((x1309<=x1310)>>x1311)<x1312);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x1321 = -1;
	int32_t x1322 = INT32_MIN;
	static uint8_t x1323 = 1U;
	uint16_t x1324 = 0U;
	volatile int32_t t37 = -10995139;

	t37 = (((x1321<=x1322)>>x1323)<x1324);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1341 = INT16_MIN;
	int32_t x1343 = 0;
	uint32_t x1344 = 72764491U;

	t38 = (((x1341<=x1342)>>x1343)<x1344);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1389 = -43;
	uint32_t x1390 = 88313535U;
	int8_t x1391 = 18;
	uint16_t x1392 = UINT16_MAX;
	volatile int32_t t39 = 294;

	t39 = (((x1389<=x1390)>>x1391)<x1392);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1458 = -854;
	int8_t x1459 = 15;
	uint32_t x1460 = UINT32_MAX;
	int32_t t40 = -52643;

	t40 = (((x1457<=x1458)>>x1459)<x1460);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1485 = -1LL;
	int8_t x1486 = -1;
	volatile int8_t x1487 = 1;
	int32_t t41 = 30;

	t41 = (((x1485<=x1486)>>x1487)<x1488);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1530 = 3598U;
	volatile int8_t x1531 = 1;
	int32_t x1532 = INT32_MIN;
	static volatile int32_t t42 = -3237798;

	t42 = (((x1529<=x1530)>>x1531)<x1532);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1578 = 896LLU;
	int32_t x1579 = 1;
	int16_t x1580 = INT16_MAX;
	volatile int32_t t43 = 14958;

	t43 = (((x1577<=x1578)>>x1579)<x1580);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1597 = -1LL;
	int32_t x1598 = 1388;
	static int8_t x1599 = 7;
	int32_t t44 = 2;

	t44 = (((x1597<=x1598)>>x1599)<x1600);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1621 = INT8_MAX;
	volatile uint16_t x1622 = 6U;
	volatile uint32_t x1623 = 4U;
	volatile int32_t x1624 = -1;
	volatile int32_t t45 = -15426;

	t45 = (((x1621<=x1622)>>x1623)<x1624);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1645 = -31;
	int32_t x1646 = INT32_MIN;
	uint8_t x1647 = 8U;
	int8_t x1648 = INT8_MIN;
	volatile int32_t t46 = -16836;

	t46 = (((x1645<=x1646)>>x1647)<x1648);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1681 = 208U;
	uint8_t x1682 = UINT8_MAX;
	static volatile int16_t x1683 = 5;
	volatile int16_t x1684 = INT16_MIN;
	static volatile int32_t t47 = 24;

	t47 = (((x1681<=x1682)>>x1683)<x1684);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1717 = INT8_MIN;
	int64_t x1718 = INT64_MAX;
	uint8_t x1719 = 1U;
	uint64_t x1720 = UINT64_MAX;

	t48 = (((x1717<=x1718)>>x1719)<x1720);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1789 = 32U;
	volatile int32_t x1790 = INT32_MIN;
	int32_t x1792 = 5756208;
	volatile int32_t t49 = 121;

	t49 = (((x1789<=x1790)>>x1791)<x1792);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1825 = INT16_MIN;
	uint32_t x1826 = 16142275U;
	int64_t x1827 = 1LL;
	int16_t x1828 = INT16_MIN;

	t50 = (((x1825<=x1826)>>x1827)<x1828);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x1834 = 1733871LLU;
	static int32_t x1835 = 8;
	int64_t x1836 = -1LL;

	t51 = (((x1833<=x1834)>>x1835)<x1836);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1897 = 10961LLU;
	static int16_t x1898 = INT16_MIN;
	static uint32_t x1899 = 1U;
	int8_t x1900 = INT8_MIN;
	static volatile int32_t t52 = -13942108;

	t52 = (((x1897<=x1898)>>x1899)<x1900);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1974 = 18873946198LL;
	uint16_t x1975 = 3U;
	static volatile int32_t t53 = -353;

	t53 = (((x1973<=x1974)>>x1975)<x1976);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1983 = 2U;
	int16_t x1984 = INT16_MAX;

	t54 = (((x1981<=x1982)>>x1983)<x1984);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2001 = -1;
	int64_t x2002 = INT64_MIN;
	volatile uint64_t x2003 = 15LLU;
	int32_t t55 = 1183;

	t55 = (((x2001<=x2002)>>x2003)<x2004);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2013 = INT64_MIN;
	static uint64_t x2014 = 93818209423998LLU;
	static int16_t x2015 = 1;
	volatile uint64_t x2016 = UINT64_MAX;
	volatile int32_t t56 = -2082850;

	t56 = (((x2013<=x2014)>>x2015)<x2016);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2017 = INT16_MIN;
	int16_t x2018 = 5;
	int32_t x2019 = 1;
	volatile int32_t t57 = -107796310;

	t57 = (((x2017<=x2018)>>x2019)<x2020);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2025 = -1;
	uint32_t x2028 = 175U;
	int32_t t58 = -260;

	t58 = (((x2025<=x2026)>>x2027)<x2028);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2041 = INT32_MIN;
	static uint32_t x2042 = UINT32_MAX;
	uint8_t x2044 = 3U;

	t59 = (((x2041<=x2042)>>x2043)<x2044);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2137 = 27;
	uint8_t x2138 = 5U;
	int8_t x2139 = 1;
	int64_t x2140 = 197LL;
	int32_t t60 = -25;

	t60 = (((x2137<=x2138)>>x2139)<x2140);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {


	t61 = (((x2145<=x2146)>>x2147)<x2148);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2225 = INT64_MIN;
	int64_t x2226 = INT64_MIN;
	int16_t x2227 = 0;
	int8_t x2228 = INT8_MIN;
	volatile int32_t t62 = -255919;

	t62 = (((x2225<=x2226)>>x2227)<x2228);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2313 = INT64_MIN;
	uint8_t x2315 = 0U;
	int32_t t63 = 229;

	t63 = (((x2313<=x2314)>>x2315)<x2316);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x2330 = UINT8_MAX;
	int8_t x2331 = 1;
	int16_t x2332 = INT16_MIN;
	volatile int32_t t64 = -51796;

	t64 = (((x2329<=x2330)>>x2331)<x2332);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2370 = 27U;
	uint8_t x2371 = 20U;
	volatile int32_t t65 = 152634491;

	t65 = (((x2369<=x2370)>>x2371)<x2372);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2393 = INT16_MAX;
	int64_t x2394 = 485227345804LL;
	uint16_t x2395 = 2U;
	int32_t t66 = -18952;

	t66 = (((x2393<=x2394)>>x2395)<x2396);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2397 = INT8_MIN;
	static uint32_t x2398 = 157309344U;
	static volatile int8_t x2399 = 1;

	t67 = (((x2397<=x2398)>>x2399)<x2400);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2413 = INT8_MAX;
	static int8_t x2414 = INT8_MIN;
	int16_t x2415 = 22;
	static uint32_t x2416 = UINT32_MAX;
	static volatile int32_t t68 = -14;

	t68 = (((x2413<=x2414)>>x2415)<x2416);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2497 = 0;
	volatile int32_t x2498 = 1570;
	volatile uint16_t x2499 = 1U;
	volatile int8_t x2500 = INT8_MAX;

	t69 = (((x2497<=x2498)>>x2499)<x2500);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2505 = 249053447361341481LLU;
	int64_t x2506 = -31LL;
	uint8_t x2507 = 4U;
	volatile int8_t x2508 = -1;
	volatile int32_t t70 = -2;

	t70 = (((x2505<=x2506)>>x2507)<x2508);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2509 = -1LL;
	int8_t x2510 = INT8_MIN;
	uint8_t x2511 = 2U;
	uint8_t x2512 = UINT8_MAX;
	volatile int32_t t71 = -77419405;

	t71 = (((x2509<=x2510)>>x2511)<x2512);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2517 = -1;
	static volatile int16_t x2518 = INT16_MIN;
	int16_t x2520 = -3414;
	volatile int32_t t72 = 30329;

	t72 = (((x2517<=x2518)>>x2519)<x2520);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2525 = UINT8_MAX;
	uint32_t x2526 = 63961U;
	volatile uint8_t x2527 = 0U;
	volatile int64_t x2528 = 28096468860262LL;
	volatile int32_t t73 = 9135;

	t73 = (((x2525<=x2526)>>x2527)<x2528);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2541 = -1;
	int64_t x2542 = -1LL;
	int16_t x2543 = 2;
	volatile int32_t t74 = -7;

	t74 = (((x2541<=x2542)>>x2543)<x2544);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x2545 = INT8_MAX;
	uint16_t x2546 = UINT16_MAX;
	int16_t x2547 = 1;
	int32_t x2548 = -1;
	int32_t t75 = 15535;

	t75 = (((x2545<=x2546)>>x2547)<x2548);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x2549 = 9U;
	int32_t x2550 = 45727056;
	volatile int64_t x2552 = -1889818396484097LL;
	int32_t t76 = -475;

	t76 = (((x2549<=x2550)>>x2551)<x2552);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x2557 = -1;
	uint16_t x2558 = 485U;
	volatile uint8_t x2560 = 1U;
	volatile int32_t t77 = -17243;

	t77 = (((x2557<=x2558)>>x2559)<x2560);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x2673 = INT32_MAX;
	int64_t x2674 = -1LL;
	static int8_t x2675 = 1;
	volatile int64_t x2676 = INT64_MIN;

	t78 = (((x2673<=x2674)>>x2675)<x2676);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2713 = UINT8_MAX;
	uint64_t x2714 = 251881114679337LLU;
	uint16_t x2715 = 30U;
	int64_t x2716 = -1LL;

	t79 = (((x2713<=x2714)>>x2715)<x2716);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2757 = INT32_MIN;
	static int64_t x2758 = INT64_MIN;
	int32_t x2760 = INT32_MIN;
	volatile int32_t t80 = -160471;

	t80 = (((x2757<=x2758)>>x2759)<x2760);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2798 = 10373408977028810LLU;
	uint8_t x2799 = 3U;
	uint32_t x2800 = 1179386428U;
	int32_t t81 = -5611679;

	t81 = (((x2797<=x2798)>>x2799)<x2800);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2829 = 12U;
	int8_t x2830 = INT8_MIN;
	volatile uint8_t x2831 = 13U;
	int64_t x2832 = INT64_MAX;
	volatile int32_t t82 = 1;

	t82 = (((x2829<=x2830)>>x2831)<x2832);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x2837 = INT64_MIN;
	static uint16_t x2839 = 11U;
	uint8_t x2840 = 11U;

	t83 = (((x2837<=x2838)>>x2839)<x2840);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2846 = INT32_MAX;
	int16_t x2847 = 9;
	volatile int64_t x2848 = -2LL;
	int32_t t84 = 13;

	t84 = (((x2845<=x2846)>>x2847)<x2848);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2857 = 3628U;
	static int8_t x2858 = INT8_MIN;
	static uint8_t x2859 = 1U;
	static volatile int16_t x2860 = INT16_MIN;
	int32_t t85 = -215351315;

	t85 = (((x2857<=x2858)>>x2859)<x2860);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x2886 = INT16_MIN;
	static uint8_t x2887 = 20U;
	int16_t x2888 = INT16_MIN;
	volatile int32_t t86 = 7395198;

	t86 = (((x2885<=x2886)>>x2887)<x2888);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2925 = UINT32_MAX;
	int16_t x2926 = INT16_MIN;
	static uint32_t x2927 = 2U;
	static int32_t x2928 = 195;
	static volatile int32_t t87 = 168711;

	t87 = (((x2925<=x2926)>>x2927)<x2928);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x3013 = INT8_MIN;
	int16_t x3014 = INT16_MIN;
	volatile int8_t x3015 = 1;
	int8_t x3016 = 4;
	static volatile int32_t t88 = 5801;

	t88 = (((x3013<=x3014)>>x3015)<x3016);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3026 = -1336;
	uint32_t x3027 = 5U;
	int8_t x3028 = -1;
	volatile int32_t t89 = 40974;

	t89 = (((x3025<=x3026)>>x3027)<x3028);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3037 = -1;
	int32_t x3038 = -60366;
	int16_t x3039 = 1;

	t90 = (((x3037<=x3038)>>x3039)<x3040);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3061 = -3468034930919637LL;
	int16_t x3062 = -1;
	uint64_t x3063 = 31LLU;
	volatile uint16_t x3064 = UINT16_MAX;
	volatile int32_t t91 = 1720045;

	t91 = (((x3061<=x3062)>>x3063)<x3064);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3082 = UINT8_MAX;
	uint16_t x3083 = 10U;
	uint32_t x3084 = 6U;

	t92 = (((x3081<=x3082)>>x3083)<x3084);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3113 = UINT32_MAX;
	static uint32_t x3114 = UINT32_MAX;
	static int16_t x3116 = 1;
	static volatile int32_t t93 = 22916;

	t93 = (((x3113<=x3114)>>x3115)<x3116);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3137 = INT8_MIN;
	static int16_t x3138 = INT16_MAX;
	int16_t x3140 = 5354;

	t94 = (((x3137<=x3138)>>x3139)<x3140);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3142 = INT32_MIN;
	int8_t x3144 = 31;

	t95 = (((x3141<=x3142)>>x3143)<x3144);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3177 = INT32_MIN;
	static uint8_t x3178 = 1U;
	volatile uint16_t x3179 = 6U;
	uint64_t x3180 = 107LLU;

	t96 = (((x3177<=x3178)>>x3179)<x3180);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x3241 = 15U;
	volatile int32_t x3242 = -1;
	uint8_t x3243 = 2U;
	uint8_t x3244 = 56U;
	int32_t t97 = 173917;

	t97 = (((x3241<=x3242)>>x3243)<x3244);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3245 = INT32_MAX;
	static uint32_t x3246 = 29135U;
	int16_t x3247 = 6;
	int16_t x3248 = INT16_MIN;
	int32_t t98 = 86;

	t98 = (((x3245<=x3246)>>x3247)<x3248);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3285 = INT16_MIN;
	static int8_t x3286 = -2;
	int32_t x3287 = 9;
	int32_t t99 = 5252467;

	t99 = (((x3285<=x3286)>>x3287)<x3288);

	if (t99 != 1) { NG(); } else { ; }
	
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

