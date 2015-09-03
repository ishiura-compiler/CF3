#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x131 = -141;
static uint64_t x143 = UINT64_MAX;
int8_t x144 = 0;
volatile uint64_t t2 = UINT64_MAX;
volatile int16_t x175 = -272;
static int16_t x176 = 1;
uint32_t t3 = 143758136U;
int64_t x189 = -1LL;
static int32_t x190 = -1;
volatile uint16_t x295 = 48U;
volatile int32_t x311 = INT32_MAX;
int8_t x312 = 10;
int32_t x335 = INT32_MIN;
volatile int8_t x336 = 2;
volatile uint64_t t9 = 336528LLU;
int32_t x511 = 2;
volatile uint16_t x518 = UINT16_MAX;
uint64_t x519 = UINT64_MAX;
uint64_t t11 = 147991LLU;
volatile uint32_t x709 = 41051701U;
int64_t x710 = INT64_MIN;
int8_t x757 = INT8_MIN;
uint8_t x760 = 38U;
volatile int64_t t15 = -2920562023158331116LL;
int8_t x865 = 14;
uint64_t t20 = 433788LLU;
volatile int32_t t22 = -14068;
volatile uint64_t x1074 = 54003105836916163LLU;
int16_t x1149 = INT16_MAX;
static uint8_t x1150 = 4U;
int32_t x1151 = -44;
static int64_t x1317 = -1LL;
uint8_t x1320 = 0U;
uint8_t x1363 = 1U;
int32_t x1387 = INT32_MIN;
uint8_t x1388 = 0U;
static volatile int8_t x1432 = 3;
volatile int32_t t33 = -770863;
uint64_t x1473 = UINT64_MAX;
int64_t x1475 = -12344539LL;
int64_t x1686 = -1LL;
static int16_t x1692 = 0;
volatile int32_t x1701 = 433;
static volatile uint16_t x1722 = UINT16_MAX;
static int32_t x1724 = 1;
uint64_t x1733 = 507943792LLU;
uint64_t x1756 = 0LLU;
uint64_t t41 = 2100775172903099440LLU;
volatile uint16_t x1757 = 0U;
static int8_t x1760 = 1;
int16_t x1774 = -1;
static uint32_t x1775 = 6822912U;
volatile uint32_t t43 = 130U;
static uint16_t x1806 = 281U;
volatile int8_t x1807 = INT8_MAX;
volatile int32_t x1894 = -1;
static volatile int16_t x1895 = 422;
volatile uint8_t x1896 = 6U;
static int64_t t47 = 818LL;
int16_t x2045 = -3978;
int64_t x2046 = -1LL;
static int64_t t48 = -67054LL;
uint64_t x2053 = UINT64_MAX;
uint8_t x2056 = 3U;
volatile int16_t x2157 = -40;
volatile uint16_t x2158 = UINT16_MAX;
int8_t x2227 = INT8_MIN;
static int32_t x2228 = 0;
volatile uint32_t t54 = 1191U;
volatile int8_t x2250 = 1;
int32_t x2355 = 1;
uint64_t x2372 = 30LLU;
static uint64_t x2434 = UINT64_MAX;
uint64_t x2602 = UINT64_MAX;
int16_t x2629 = INT16_MIN;
uint8_t x2630 = 9U;
static int8_t x2631 = INT8_MAX;
volatile int32_t t61 = -162735;
uint16_t x2727 = 0U;
int16_t x2747 = INT16_MIN;
volatile uint8_t x2748 = 1U;
int64_t x2789 = -1LL;
volatile uint32_t t66 = 177U;
int32_t t67 = -5;
uint8_t x2910 = 1U;
uint16_t x2911 = 1833U;
volatile int64_t x2935 = 60815LL;
uint8_t x2936 = 0U;
int8_t x2979 = INT8_MIN;
uint64_t x3065 = 75048421844479LLU;
uint8_t x3066 = UINT8_MAX;
int8_t x3342 = 2;
int8_t x3435 = INT8_MIN;
int16_t x3456 = 11;
uint64_t x3526 = 7051LLU;
uint32_t x3557 = 25157436U;
int32_t x3559 = 207905;
static int32_t x3560 = 1;
static int8_t x3590 = INT8_MIN;
static uint64_t t81 = 87634050LLU;
int32_t x3649 = INT32_MIN;
static volatile uint8_t x3652 = 9U;
int16_t x3850 = INT16_MIN;
int8_t x3852 = 0;
volatile uint64_t t87 = 265959208862512130LLU;
volatile int16_t x3876 = 5;
static volatile int64_t t89 = -19753718LL;
int16_t x3933 = 189;
int32_t t90 = -71;
uint64_t t91 = 4LLU;
int16_t x3964 = 0;
uint8_t x3971 = 14U;
int16_t x4058 = INT16_MAX;
int8_t x4060 = 1;
int16_t x4062 = 2633;
static int32_t x4071 = -1;
volatile int64_t t98 = -70366243449892LL;


void f0(void) {
	static volatile int64_t x97 = 9539357670003LL;
	int16_t x98 = 8852;
	uint8_t x99 = 2U;
	uint8_t x100 = 0U;
	volatile int64_t t0 = -14520975911LL;

	t0 = (((x97|x98)&x99)<<x100);

	if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x129 = 69198065200440390LLU;
	int8_t x130 = -1;
	uint8_t x132 = 29U;
	volatile uint64_t t1 = 165738381LLU;

	t1 = (((x129|x130)&x131)<<x132);

	if (t1 != 18446743998010753024LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x141 = -1LL;
	int16_t x142 = 4014;

	t2 = (((x141|x142)&x143)<<x144);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x173 = UINT32_MAX;
	int8_t x174 = 3;

	t3 = (((x173|x174)&x175)<<x176);

	if (t3 != 4294966752U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x191 = 2U;
	uint8_t x192 = 43U;
	volatile int64_t t4 = 47794562274859144LL;

	t4 = (((x189|x190)&x191)<<x192);

	if (t4 != 17592186044416LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x249 = 0U;
	int8_t x250 = 4;
	volatile int64_t x251 = INT64_MAX;
	int16_t x252 = 3;
	int64_t t5 = 103719552046093150LL;

	t5 = (((x249|x250)&x251)<<x252);

	if (t5 != 32LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x293 = 405667817LLU;
	uint16_t x294 = UINT16_MAX;
	uint16_t x296 = 1U;
	uint64_t t6 = 1400553169432821LLU;

	t6 = (((x293|x294)&x295)<<x296);

	if (t6 != 96LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x309 = 4U;
	volatile int16_t x310 = INT16_MAX;
	volatile int32_t t7 = 202424780;

	t7 = (((x309|x310)&x311)<<x312);

	if (t7 != 33553408) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x333 = INT16_MAX;
	static volatile int8_t x334 = INT8_MAX;
	int32_t t8 = 19616;

	t8 = (((x333|x334)&x335)<<x336);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x453 = -6;
	static uint64_t x454 = 7LLU;
	volatile int16_t x455 = -2;
	int8_t x456 = 10;

	t9 = (((x453|x454)&x455)<<x456);

	if (t9 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x509 = -181614994LL;
	int8_t x510 = -2;
	volatile int32_t x512 = 0;
	static volatile int64_t t10 = 1998576886661994493LL;

	t10 = (((x509|x510)&x511)<<x512);

	if (t10 != 2LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x517 = INT64_MAX;
	volatile uint16_t x520 = 3U;

	t11 = (((x517|x518)&x519)<<x520);

	if (t11 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x629 = 1706744963909594761LLU;
	static uint16_t x630 = UINT16_MAX;
	volatile int32_t x631 = -1;
	volatile int16_t x632 = 5;
	static volatile uint64_t t12 = 24453708LLU;

	t12 = (((x629|x630)&x631)<<x632);

	if (t12 != 17722350697688596448LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x711 = UINT32_MAX;
	static int8_t x712 = 15;
	int64_t t13 = 2203600024823571107LL;

	t13 = (((x709|x710)&x711)<<x712);

	if (t13 != 1345182138368LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x737 = 1;
	uint16_t x738 = UINT16_MAX;
	int8_t x739 = -1;
	int16_t x740 = 0;
	volatile int32_t t14 = 3437456;

	t14 = (((x737|x738)&x739)<<x740);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x758 = INT64_MAX;
	volatile uint32_t x759 = 10U;

	t15 = (((x757|x758)&x759)<<x760);

	if (t15 != 2748779069440LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x777 = -1;
	int8_t x778 = INT8_MAX;
	uint64_t x779 = 4078635LLU;
	static int16_t x780 = 2;
	uint64_t t16 = 88407385188110LLU;

	t16 = (((x777|x778)&x779)<<x780);

	if (t16 != 16314540LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x866 = -1;
	int32_t x867 = 19169900;
	volatile int8_t x868 = 4;
	int32_t t17 = 3031923;

	t17 = (((x865|x866)&x867)<<x868);

	if (t17 != 306718400) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x969 = INT8_MIN;
	int16_t x970 = INT16_MAX;
	volatile int64_t x971 = 1344528809421990LL;
	uint8_t x972 = 0U;
	int64_t t18 = -2LL;

	t18 = (((x969|x970)&x971)<<x972);

	if (t18 != 1344528809421990LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1005 = 75U;
	volatile uint8_t x1006 = UINT8_MAX;
	int32_t x1007 = INT32_MAX;
	uint8_t x1008 = 1U;
	int32_t t19 = 27819;

	t19 = (((x1005|x1006)&x1007)<<x1008);

	if (t19 != 510) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1021 = -1;
	uint16_t x1022 = UINT16_MAX;
	uint64_t x1023 = UINT64_MAX;
	static volatile int16_t x1024 = 6;

	t20 = (((x1021|x1022)&x1023)<<x1024);

	if (t20 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1045 = 1051633U;
	volatile int8_t x1046 = -5;
	volatile int32_t x1047 = -1;
	static uint8_t x1048 = 16U;
	uint32_t t21 = 26U;

	t21 = (((x1045|x1046)&x1047)<<x1048);

	if (t21 != 4294639616U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1053 = -8593;
	static int32_t x1054 = 62664545;
	static int16_t x1055 = INT16_MAX;
	uint8_t x1056 = 1U;

	t22 = (((x1053|x1054)&x1055)<<x1056);

	if (t22 != 65246) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1073 = INT64_MIN;
	static int16_t x1075 = INT16_MAX;
	uint32_t x1076 = 1U;
	uint64_t t23 = 357980903620LLU;

	t23 = (((x1073|x1074)&x1075)<<x1076);

	if (t23 != 48006LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1152 = 1;
	volatile int32_t t24 = -2577522;

	t24 = (((x1149|x1150)&x1151)<<x1152);

	if (t24 != 65448) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1169 = INT16_MIN;
	volatile uint32_t x1170 = UINT32_MAX;
	static volatile int8_t x1171 = INT8_MIN;
	int32_t x1172 = 6;
	uint32_t t25 = 35U;

	t25 = (((x1169|x1170)&x1171)<<x1172);

	if (t25 != 4294959104U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1237 = UINT32_MAX;
	volatile int16_t x1238 = INT16_MIN;
	uint64_t x1239 = UINT64_MAX;
	uint16_t x1240 = 5U;
	volatile uint64_t t26 = 45059LLU;

	t26 = (((x1237|x1238)&x1239)<<x1240);

	if (t26 != 137438953440LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1277 = -13334;
	volatile int8_t x1278 = -1;
	static volatile uint32_t x1279 = UINT32_MAX;
	volatile int8_t x1280 = 5;
	static uint32_t t27 = 66586U;

	t27 = (((x1277|x1278)&x1279)<<x1280);

	if (t27 != 4294967264U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1318 = 860051U;
	uint16_t x1319 = 635U;
	volatile int64_t t28 = -1373499638818274LL;

	t28 = (((x1317|x1318)&x1319)<<x1320);

	if (t28 != 635LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1361 = INT8_MIN;
	static volatile uint64_t x1362 = UINT64_MAX;
	uint8_t x1364 = 0U;
	volatile uint64_t t29 = 4073LLU;

	t29 = (((x1361|x1362)&x1363)<<x1364);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1385 = 3U;
	int64_t x1386 = 1046LL;
	volatile int64_t t30 = -583LL;

	t30 = (((x1385|x1386)&x1387)<<x1388);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1397 = 1;
	int8_t x1398 = INT8_MAX;
	int64_t x1399 = INT64_MAX;
	volatile int8_t x1400 = 52;
	static volatile int64_t t31 = 909376LL;

	t31 = (((x1397|x1398)&x1399)<<x1400);

	if (t31 != 571957152676052992LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1429 = -61425;
	int64_t x1430 = INT64_MAX;
	volatile uint8_t x1431 = 3U;
	volatile int64_t t32 = 13239269768290LL;

	t32 = (((x1429|x1430)&x1431)<<x1432);

	if (t32 != 24LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1445 = INT32_MIN;
	int16_t x1446 = INT16_MIN;
	static uint8_t x1447 = UINT8_MAX;
	static uint8_t x1448 = 2U;

	t33 = (((x1445|x1446)&x1447)<<x1448);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1474 = 527807601U;
	static uint32_t x1476 = 4U;
	volatile uint64_t t34 = 2030926613211437289LLU;

	t34 = (((x1473|x1474)&x1475)<<x1476);

	if (t34 != 18446744073512038992LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1645 = -1LL;
	int8_t x1646 = -1;
	volatile uint32_t x1647 = 127U;
	static uint8_t x1648 = 2U;
	int64_t t35 = 1604626596932723608LL;

	t35 = (((x1645|x1646)&x1647)<<x1648);

	if (t35 != 508LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x1685 = UINT8_MAX;
	uint16_t x1687 = UINT16_MAX;
	uint8_t x1688 = 45U;
	int64_t t36 = 317LL;

	t36 = (((x1685|x1686)&x1687)<<x1688);

	if (t36 != 2305807824841605120LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1689 = 0U;
	int8_t x1690 = -1;
	volatile int64_t x1691 = 156193331005LL;
	volatile int64_t t37 = -4860037040223029LL;

	t37 = (((x1689|x1690)&x1691)<<x1692);

	if (t37 != 156193331005LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1702 = 18030183LL;
	int8_t x1703 = -1;
	int32_t x1704 = 30;
	static int64_t t38 = -588061LL;

	t38 = (((x1701|x1702)&x1703)<<x1704);

	if (t38 != 19360191078203392LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1721 = INT64_MIN;
	uint16_t x1723 = 46U;
	static int64_t t39 = 354896070535LL;

	t39 = (((x1721|x1722)&x1723)<<x1724);

	if (t39 != 92LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1734 = 88;
	int64_t x1735 = INT64_MIN;
	uint8_t x1736 = 8U;
	uint64_t t40 = 17946251792808900LLU;

	t40 = (((x1733|x1734)&x1735)<<x1736);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1753 = UINT64_MAX;
	static int16_t x1754 = 58;
	int32_t x1755 = INT32_MIN;

	t41 = (((x1753|x1754)&x1755)<<x1756);

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1758 = UINT64_MAX;
	static uint8_t x1759 = 105U;
	uint64_t t42 = 103099872479LLU;

	t42 = (((x1757|x1758)&x1759)<<x1760);

	if (t42 != 210LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1773 = INT8_MAX;
	uint16_t x1776 = 7U;

	t43 = (((x1773|x1774)&x1775)<<x1776);

	if (t43 != 873332736U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1781 = INT8_MIN;
	int8_t x1782 = -1;
	uint32_t x1783 = 650820047U;
	static int32_t x1784 = 1;
	static uint32_t t44 = 0U;

	t44 = (((x1781|x1782)&x1783)<<x1784);

	if (t44 != 1301640094U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1805 = INT64_MIN;
	volatile int8_t x1808 = 1;
	volatile int64_t t45 = 3105128LL;

	t45 = (((x1805|x1806)&x1807)<<x1808);

	if (t45 != 50LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1893 = -1;
	volatile int32_t t46 = -538838;

	t46 = (((x1893|x1894)&x1895)<<x1896);

	if (t46 != 27008) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2009 = INT32_MIN;
	static int64_t x2010 = INT64_MAX;
	uint32_t x2011 = 83066U;
	volatile uint8_t x2012 = 1U;

	t47 = (((x2009|x2010)&x2011)<<x2012);

	if (t47 != 166132LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2047 = 3U;
	uint8_t x2048 = 3U;

	t48 = (((x2045|x2046)&x2047)<<x2048);

	if (t48 != 24LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2054 = 1U;
	int8_t x2055 = -1;
	static uint64_t t49 = 127599890779766LLU;

	t49 = (((x2053|x2054)&x2055)<<x2056);

	if (t49 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x2105 = -6;
	int8_t x2106 = INT8_MIN;
	uint8_t x2107 = 55U;
	volatile uint8_t x2108 = 2U;
	int32_t t50 = 4403;

	t50 = (((x2105|x2106)&x2107)<<x2108);

	if (t50 != 200) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2109 = 22293620U;
	volatile int8_t x2110 = -51;
	static int32_t x2111 = INT32_MIN;
	uint64_t x2112 = 13LLU;
	volatile uint32_t t51 = 446737U;

	t51 = (((x2109|x2110)&x2111)<<x2112);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2159 = 541587180383947LLU;
	static uint32_t x2160 = 9U;
	volatile uint64_t t52 = 1149965928420LLU;

	t52 = (((x2157|x2158)&x2159)<<x2160);

	if (t52 != 277292636356580864LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2225 = -40;
	uint64_t x2226 = UINT64_MAX;
	volatile uint64_t t53 = 59LLU;

	t53 = (((x2225|x2226)&x2227)<<x2228);

	if (t53 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2241 = 23095493U;
	int8_t x2242 = 24;
	int32_t x2243 = INT32_MAX;
	int16_t x2244 = 1;

	t54 = (((x2241|x2242)&x2243)<<x2244);

	if (t54 != 46191034U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2249 = -3LL;
	int64_t x2251 = 1881LL;
	static int32_t x2252 = 3;
	volatile int64_t t55 = -31LL;

	t55 = (((x2249|x2250)&x2251)<<x2252);

	if (t55 != 15048LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2297 = UINT16_MAX;
	int64_t x2298 = INT64_MIN;
	static uint16_t x2299 = 92U;
	uint8_t x2300 = 14U;
	int64_t t56 = -293LL;

	t56 = (((x2297|x2298)&x2299)<<x2300);

	if (t56 != 1507328LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x2353 = -88;
	int16_t x2354 = 1;
	static uint8_t x2356 = 8U;
	volatile int32_t t57 = 202455402;

	t57 = (((x2353|x2354)&x2355)<<x2356);

	if (t57 != 256) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x2369 = UINT16_MAX;
	static uint64_t x2370 = UINT64_MAX;
	int16_t x2371 = -842;
	uint64_t t58 = 141829294461LLU;

	t58 = (((x2369|x2370)&x2371)<<x2372);

	if (t58 != 18446743169618935808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2433 = 100909893847LLU;
	static int16_t x2435 = INT16_MIN;
	int16_t x2436 = 3;
	volatile uint64_t t59 = 6404LLU;

	t59 = (((x2433|x2434)&x2435)<<x2436);

	if (t59 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2601 = INT64_MAX;
	volatile int16_t x2603 = -1;
	int16_t x2604 = 0;
	uint64_t t60 = UINT64_MAX;

	t60 = (((x2601|x2602)&x2603)<<x2604);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2632 = 19U;

	t61 = (((x2629|x2630)&x2631)<<x2632);

	if (t61 != 4718592) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2725 = -1;
	int64_t x2726 = -1LL;
	int8_t x2728 = 3;
	volatile int64_t t62 = -3257177830575LL;

	t62 = (((x2725|x2726)&x2727)<<x2728);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2745 = 1U;
	int32_t x2746 = 3;
	volatile int32_t t63 = 492939;

	t63 = (((x2745|x2746)&x2747)<<x2748);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2790 = -1;
	static volatile uint16_t x2791 = 2930U;
	uint8_t x2792 = 26U;
	int64_t t64 = -1021LL;

	t64 = (((x2789|x2790)&x2791)<<x2792);

	if (t64 != 196628971520LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2793 = INT32_MAX;
	volatile uint32_t x2794 = 56558U;
	int8_t x2795 = 0;
	static uint8_t x2796 = 2U;
	volatile uint32_t t65 = 2886079U;

	t65 = (((x2793|x2794)&x2795)<<x2796);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x2817 = INT32_MIN;
	static int16_t x2818 = INT16_MIN;
	static uint32_t x2819 = 7U;
	int8_t x2820 = 0;

	t66 = (((x2817|x2818)&x2819)<<x2820);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2845 = UINT8_MAX;
	int16_t x2846 = 7;
	volatile int16_t x2847 = INT16_MAX;
	int32_t x2848 = 1;

	t67 = (((x2845|x2846)&x2847)<<x2848);

	if (t67 != 510) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x2909 = INT32_MIN;
	volatile uint32_t x2912 = 1U;
	volatile int32_t t68 = 377952375;

	t68 = (((x2909|x2910)&x2911)<<x2912);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x2933 = 2;
	static int32_t x2934 = INT32_MAX;
	static int64_t t69 = -2500846833964197LL;

	t69 = (((x2933|x2934)&x2935)<<x2936);

	if (t69 != 60815LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2977 = 18117U;
	uint8_t x2978 = 0U;
	int8_t x2980 = 1;
	static volatile int32_t t70 = 343310;

	t70 = (((x2977|x2978)&x2979)<<x2980);

	if (t70 != 36096) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x3017 = INT64_MIN;
	uint32_t x3018 = UINT32_MAX;
	uint16_t x3019 = 15285U;
	static int8_t x3020 = 1;
	int64_t t71 = -789760864LL;

	t71 = (((x3017|x3018)&x3019)<<x3020);

	if (t71 != 30570LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x3067 = 7231U;
	uint16_t x3068 = 4U;
	uint64_t t72 = 28993661LLU;

	t72 = (((x3065|x3066)&x3067)<<x3068);

	if (t72 != 17392LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3101 = 40222U;
	uint64_t x3102 = 18LLU;
	int64_t x3103 = INT64_MIN;
	int8_t x3104 = 2;
	uint64_t t73 = 2264004513002LLU;

	t73 = (((x3101|x3102)&x3103)<<x3104);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3269 = -22958;
	volatile int64_t x3270 = INT64_MAX;
	int16_t x3271 = 3;
	int8_t x3272 = 1;
	int64_t t74 = -558179910702LL;

	t74 = (((x3269|x3270)&x3271)<<x3272);

	if (t74 != 6LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3281 = 67991878327100LLU;
	int8_t x3282 = INT8_MAX;
	uint32_t x3283 = 1U;
	static int8_t x3284 = 0;
	static volatile uint64_t t75 = 3324658237731LLU;

	t75 = (((x3281|x3282)&x3283)<<x3284);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x3341 = 20189LLU;
	uint64_t x3343 = 4037883611178629645LLU;
	volatile int32_t x3344 = 7;
	volatile uint64_t t76 = 9526248LLU;

	t76 = (((x3341|x3342)&x3343)<<x3344);

	if (t76 != 2426496LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3433 = 1501787257594LLU;
	int8_t x3434 = INT8_MIN;
	int8_t x3436 = 0;
	volatile uint64_t t77 = 455257818LLU;

	t77 = (((x3433|x3434)&x3435)<<x3436);

	if (t77 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3453 = INT32_MAX;
	int64_t x3454 = -576LL;
	uint64_t x3455 = 3123902417357252LLU;
	volatile uint64_t t78 = 51316824LLU;

	t78 = (((x3453|x3454)&x3455)<<x3456);

	if (t78 != 6397752150747652096LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x3525 = INT32_MIN;
	static int64_t x3527 = INT64_MAX;
	static volatile uint8_t x3528 = 57U;
	static volatile uint64_t t79 = 10775581840298LLU;

	t79 = (((x3525|x3526)&x3527)<<x3528);

	if (t79 != 1585267068834414592LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x3558 = UINT32_MAX;
	volatile uint32_t t80 = 7686353U;

	t80 = (((x3557|x3558)&x3559)<<x3560);

	if (t80 != 415810U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3589 = 1LLU;
	static int16_t x3591 = INT16_MAX;
	uint8_t x3592 = 12U;

	t81 = (((x3589|x3590)&x3591)<<x3592);

	if (t81 != 133697536LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3650 = INT64_MAX;
	int32_t x3651 = INT32_MAX;
	static volatile int64_t t82 = -47555972275644098LL;

	t82 = (((x3649|x3650)&x3651)<<x3652);

	if (t82 != 1099511627264LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3665 = INT16_MAX;
	uint16_t x3666 = 10U;
	uint8_t x3667 = UINT8_MAX;
	static uint16_t x3668 = 2U;
	int32_t t83 = 13326110;

	t83 = (((x3665|x3666)&x3667)<<x3668);

	if (t83 != 1020) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x3669 = UINT32_MAX;
	volatile uint8_t x3670 = 115U;
	uint32_t x3671 = UINT32_MAX;
	uint16_t x3672 = 27U;
	static volatile uint32_t t84 = 63U;

	t84 = (((x3669|x3670)&x3671)<<x3672);

	if (t84 != 4160749568U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3845 = INT64_MIN;
	int32_t x3846 = -1;
	static uint64_t x3847 = 7274235541217430LLU;
	volatile uint8_t x3848 = 0U;
	volatile uint64_t t85 = 164176LLU;

	t85 = (((x3845|x3846)&x3847)<<x3848);

	if (t85 != 7274235541217430LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x3849 = -1;
	volatile uint8_t x3851 = UINT8_MAX;
	int32_t t86 = 186963079;

	t86 = (((x3849|x3850)&x3851)<<x3852);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x3861 = -1;
	int32_t x3862 = -1;
	uint64_t x3863 = 6888076540483254735LLU;
	uint32_t x3864 = 2U;

	t87 = (((x3861|x3862)&x3863)<<x3864);

	if (t87 != 9105562088223467324LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x3873 = 939U;
	static volatile uint8_t x3874 = 19U;
	int8_t x3875 = -10;
	uint32_t t88 = 4159U;

	t88 = (((x3873|x3874)&x3875)<<x3876);

	if (t88 != 30272U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3885 = -5;
	uint16_t x3886 = UINT16_MAX;
	int64_t x3887 = 35100478297380553LL;
	int8_t x3888 = 1;

	t89 = (((x3885|x3886)&x3887)<<x3888);

	if (t89 != 70200956594761106LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x3934 = INT32_MAX;
	uint8_t x3935 = 1U;
	static int8_t x3936 = 6;

	t90 = (((x3933|x3934)&x3935)<<x3936);

	if (t90 != 64) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3941 = 156154035U;
	uint64_t x3942 = 922074814922681LLU;
	uint16_t x3943 = 89U;
	int16_t x3944 = 12;

	t91 = (((x3941|x3942)&x3943)<<x3944);

	if (t91 != 102400LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x3961 = 62827654LLU;
	volatile int32_t x3962 = 2;
	int64_t x3963 = INT64_MIN;
	uint64_t t92 = 9909075361460307LLU;

	t92 = (((x3961|x3962)&x3963)<<x3964);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x3969 = 9;
	int32_t x3970 = -1;
	uint8_t x3972 = 5U;
	int32_t t93 = 232820;

	t93 = (((x3969|x3970)&x3971)<<x3972);

	if (t93 != 448) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3985 = UINT16_MAX;
	uint8_t x3986 = 33U;
	int8_t x3987 = INT8_MAX;
	int16_t x3988 = 3;
	static int32_t t94 = 1;

	t94 = (((x3985|x3986)&x3987)<<x3988);

	if (t94 != 1016) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4057 = INT32_MIN;
	uint8_t x4059 = 47U;
	volatile int32_t t95 = -1;

	t95 = (((x4057|x4058)&x4059)<<x4060);

	if (t95 != 94) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4061 = -1LL;
	uint8_t x4063 = UINT8_MAX;
	uint8_t x4064 = 4U;
	volatile int64_t t96 = 578232325209350LL;

	t96 = (((x4061|x4062)&x4063)<<x4064);

	if (t96 != 4080LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x4069 = 181;
	int16_t x4070 = 25;
	static int8_t x4072 = 0;
	static int32_t t97 = -9391;

	t97 = (((x4069|x4070)&x4071)<<x4072);

	if (t97 != 189) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4257 = 1366;
	int64_t x4258 = -2944LL;
	volatile uint16_t x4259 = 439U;
	volatile int16_t x4260 = 8;

	t98 = (((x4257|x4258)&x4259)<<x4260);

	if (t98 != 103936LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4277 = 13U;
	volatile uint32_t x4278 = 1U;
	static uint8_t x4279 = UINT8_MAX;
	uint16_t x4280 = 10U;
	volatile uint32_t t99 = 3U;

	t99 = (((x4277|x4278)&x4279)<<x4280);

	if (t99 != 13312U) { NG(); } else { ; }
	
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

