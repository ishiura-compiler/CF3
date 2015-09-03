#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x29 = INT32_MIN;
int32_t x42 = -11663747;
int16_t x231 = -1;
static uint32_t x299 = 31589U;
volatile uint64_t t4 = 2185920948158688956LLU;
uint64_t x394 = 10LLU;
static volatile uint8_t x396 = 30U;
static uint64_t t5 = 271840441319LLU;
static uint64_t t7 = 4LLU;
int8_t x502 = INT8_MAX;
int64_t x553 = INT64_MAX;
int8_t x554 = INT8_MIN;
static volatile int32_t t11 = -2;
static uint32_t t13 = 13718237U;
uint64_t x837 = 389741804319886LLU;
int16_t x893 = INT16_MAX;
uint32_t x950 = 33031U;
uint8_t x980 = 0U;
int8_t x1009 = INT8_MAX;
volatile uint64_t t21 = 10940154601661LLU;
uint16_t x1157 = 9U;
uint32_t x1159 = UINT32_MAX;
int8_t x1179 = -1;
volatile uint16_t x1230 = UINT16_MAX;
int8_t x1231 = -1;
uint32_t x1232 = 3U;
int8_t x1384 = 0;
int32_t t26 = -61;
int64_t t27 = 110694633497808942LL;
int64_t x1422 = -1LL;
int64_t x1423 = INT64_MIN;
volatile int16_t x1446 = INT16_MAX;
int64_t t29 = 1743LL;
volatile uint64_t x1529 = 76533750254833954LLU;
int64_t x1530 = INT64_MIN;
int32_t t31 = 0;
int32_t x1557 = INT32_MAX;
int16_t x1569 = INT16_MAX;
int8_t x1572 = 5;
int16_t x1598 = INT16_MAX;
int32_t x1599 = -54334301;
int32_t t35 = -46361;
static uint16_t x1625 = 6U;
uint8_t x1628 = 9U;
uint8_t x1660 = 1U;
int8_t x1667 = INT8_MIN;
volatile int64_t x1713 = INT64_MIN;
int64_t x1757 = 19LL;
static int16_t x1760 = 1;
int32_t x1772 = 1;
int8_t x1805 = 0;
int32_t x1829 = 30093613;
volatile int8_t x1944 = 9;
uint8_t x1988 = 1U;
uint32_t t49 = 54388U;
int32_t x1990 = INT32_MIN;
int64_t x2021 = INT64_MAX;
volatile uint64_t x2022 = 23554623LLU;
uint64_t t51 = 3130904884209309665LLU;
uint8_t x2197 = 5U;
static int64_t t55 = -3148916951007590824LL;
uint32_t x2306 = 1968U;
static volatile int8_t x2321 = INT8_MIN;
volatile uint32_t t57 = 13110726U;
static volatile uint64_t t61 = 636LLU;
static int8_t x2645 = 0;
volatile uint32_t x2647 = UINT32_MAX;
volatile uint32_t t62 = 17U;
int16_t x2665 = INT16_MAX;
uint32_t x2689 = 23269264U;
static uint32_t t65 = 118U;
static uint32_t t67 = 50U;
static uint64_t x2849 = 321502LLU;
uint8_t x2851 = UINT8_MAX;
uint8_t x2877 = UINT8_MAX;
uint64_t x2921 = 2LLU;
int16_t x2923 = 818;
volatile int64_t x2924 = 1LL;
volatile uint64_t t71 = 3862LLU;
uint32_t x3033 = 249916U;
int32_t x3034 = INT32_MIN;
volatile int32_t x3117 = INT32_MIN;
int8_t x3118 = INT8_MIN;
volatile int32_t x3570 = INT32_MIN;
int32_t t80 = 9867;
volatile int8_t x3654 = INT8_MAX;
volatile int64_t t81 = -413376611185838386LL;
volatile int64_t t84 = 27038LL;
uint64_t t85 = 115446LLU;
volatile int64_t x3762 = -33504939257LL;
static int64_t x3890 = INT64_MIN;
uint32_t x3985 = UINT32_MAX;
int16_t x3988 = 7;
int8_t x4040 = 0;
volatile int16_t x4042 = 7617;
uint32_t x4044 = 2U;
volatile uint32_t t95 = 20U;
int64_t x4163 = INT64_MIN;
int64_t t96 = 3LL;
static int32_t x4339 = 290;
volatile uint64_t t99 = 13333834248716LLU;


void f0(void) {
	int8_t x30 = INT8_MIN;
	uint64_t x31 = UINT64_MAX;
	volatile int8_t x32 = 1;
	uint64_t t0 = 13530118703912869LLU;

	t0 = ((x29^(x30%x31))<<x32);

	if (t0 != 4294967040LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x41 = 181623297186355LLU;
	int16_t x43 = -6109;
	uint8_t x44 = 1U;
	static uint64_t t1 = 105011267043LLU;

	t1 = ((x41^(x42%x43))<<x44);

	if (t1 != 18446380827115177626LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x117 = INT16_MIN;
	uint32_t x118 = 22610339U;
	static uint32_t x119 = UINT32_MAX;
	static int32_t x120 = 6;
	volatile uint32_t t2 = 43646010U;

	t2 = ((x117^(x118%x119))<<x120);

	if (t2 != 2845862080U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x229 = 6U;
	volatile int32_t x230 = INT32_MAX;
	uint32_t x232 = 15U;
	int32_t t3 = 1;

	t3 = ((x229^(x230%x231))<<x232);

	if (t3 != 196608) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x297 = INT8_MIN;
	uint64_t x298 = 3841072665LLU;
	static uint32_t x300 = 15U;

	t4 = ((x297^(x298%x299))<<x300);

	if (t4 != 18446744073437511680LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x393 = INT8_MAX;
	int8_t x395 = -1;

	t5 = ((x393^(x394%x395))<<x396);

	if (t5 != 125627793408LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x405 = -1759;
	int32_t x406 = INT32_MIN;
	uint8_t x407 = UINT8_MAX;
	uint8_t x408 = 0U;
	volatile int32_t t6 = -674;

	t6 = ((x405^(x406%x407))<<x408);

	if (t6 != 1697) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x441 = 1956430208LL;
	int32_t x442 = -33841880;
	uint64_t x443 = UINT64_MAX;
	volatile uint16_t x444 = 1U;

	t7 = ((x441^(x442%x443))<<x444);

	if (t7 != 18446744069730122064LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x501 = 0U;
	uint8_t x503 = UINT8_MAX;
	uint8_t x504 = 22U;
	volatile uint32_t t8 = 469234U;

	t8 = ((x501^(x502%x503))<<x504);

	if (t8 != 532676608U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x555 = UINT32_MAX;
	int8_t x556 = 0;
	static int64_t t9 = -1LL;

	t9 = ((x553^(x554%x555))<<x556);

	if (t9 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x573 = 0LLU;
	static int16_t x574 = 7;
	uint8_t x575 = UINT8_MAX;
	int8_t x576 = 1;
	uint64_t t10 = 126LLU;

	t10 = ((x573^(x574%x575))<<x576);

	if (t10 != 14LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x605 = -58;
	static int8_t x606 = INT8_MIN;
	volatile uint8_t x607 = UINT8_MAX;
	static volatile int32_t x608 = 2;

	t11 = ((x605^(x606%x607))<<x608);

	if (t11 != 280) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x669 = 160453694132241574LLU;
	static int32_t x670 = -10301;
	int16_t x671 = INT16_MAX;
	int8_t x672 = 56;
	volatile uint64_t t12 = 458944548064552625LLU;

	t12 = ((x669^(x670%x671))<<x672);

	if (t12 != 7277816997830721536LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x797 = INT8_MAX;
	int32_t x798 = INT32_MIN;
	uint32_t x799 = UINT32_MAX;
	volatile int8_t x800 = 1;

	t13 = ((x797^(x798%x799))<<x800);

	if (t13 != 254U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x809 = 175;
	static uint32_t x810 = 26077U;
	int8_t x811 = -1;
	int8_t x812 = 3;
	static volatile uint32_t t14 = 1423999U;

	t14 = ((x809^(x810%x811))<<x812);

	if (t14 != 207760U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x833 = -13;
	static int64_t x834 = INT64_MIN;
	uint16_t x835 = UINT16_MAX;
	static int8_t x836 = 6;
	int64_t t15 = 65LL;

	t15 = ((x833^(x834%x835))<<x836);

	if (t15 != 2096320LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x838 = 1U;
	int8_t x839 = -49;
	static uint8_t x840 = 3U;
	volatile uint64_t t16 = 222LLU;

	t16 = ((x837^(x838%x839))<<x840);

	if (t16 != 3117934434559096LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x894 = INT16_MAX;
	uint32_t x895 = 29924406U;
	uint64_t x896 = 6LLU;
	volatile uint32_t t17 = 408U;

	t17 = ((x893^(x894%x895))<<x896);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x949 = UINT16_MAX;
	uint32_t x951 = UINT32_MAX;
	uint64_t x952 = 10LLU;
	static uint32_t t18 = 27U;

	t18 = ((x949^(x950%x951))<<x952);

	if (t18 != 33284096U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x977 = UINT32_MAX;
	volatile int16_t x978 = -1;
	int8_t x979 = INT8_MAX;
	uint32_t t19 = 1391495U;

	t19 = ((x977^(x978%x979))<<x980);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1010 = 2933476097LLU;
	int64_t x1011 = -1LL;
	int8_t x1012 = 2;
	static volatile uint64_t t20 = 1938167001174674LLU;

	t20 = ((x1009^(x1010%x1011))<<x1012);

	if (t20 != 11733904888LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1093 = UINT8_MAX;
	uint64_t x1094 = 13LLU;
	volatile int16_t x1095 = INT16_MAX;
	static int8_t x1096 = 0;

	t21 = ((x1093^(x1094%x1095))<<x1096);

	if (t21 != 242LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1158 = 2178548644154314LLU;
	uint8_t x1160 = 6U;
	volatile uint64_t t22 = 1405LLU;

	t22 = ((x1157^(x1158%x1159))<<x1160);

	if (t22 != 242763319488LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1177 = -21;
	static uint64_t x1178 = 21872879065LLU;
	static int16_t x1180 = 51;
	uint64_t t23 = 8094834LLU;

	t23 = ((x1177^(x1178%x1179))<<x1180);

	if (t23 != 15100569550573273088LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1229 = INT16_MAX;
	volatile int32_t t24 = 2;

	t24 = ((x1229^(x1230%x1231))<<x1232);

	if (t24 != 262136) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1293 = INT8_MIN;
	static int32_t x1294 = -1;
	static uint16_t x1295 = 11271U;
	int16_t x1296 = 6;
	static volatile int32_t t25 = -630;

	t25 = ((x1293^(x1294%x1295))<<x1296);

	if (t25 != 8128) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1381 = -192;
	static volatile int16_t x1382 = -237;
	int8_t x1383 = INT8_MIN;

	t26 = ((x1381^(x1382%x1383))<<x1384);

	if (t26 != 211) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1385 = 72371LL;
	static volatile uint32_t x1386 = 7U;
	uint16_t x1387 = 237U;
	uint32_t x1388 = 3U;

	t27 = ((x1385^(x1386%x1387))<<x1388);

	if (t27 != 578976LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1421 = -2778650LL;
	uint8_t x1424 = 25U;
	volatile int64_t t28 = -26099159712417LL;

	t28 = ((x1421^(x1422%x1423))<<x1424);

	if (t28 != 93235988922368LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1445 = 1U;
	volatile int64_t x1447 = INT64_MIN;
	uint8_t x1448 = 5U;

	t29 = ((x1445^(x1446%x1447))<<x1448);

	if (t29 != 1048512LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1531 = 255U;
	uint8_t x1532 = 21U;
	uint64_t t30 = 3100350194459LLU;

	t30 = ((x1529^(x1530%x1531))<<x1532);

	if (t30 != 2212770921146482688LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x1549 = 1U;
	uint16_t x1550 = 7031U;
	int16_t x1551 = 14772;
	static volatile uint8_t x1552 = 1U;

	t31 = ((x1549^(x1550%x1551))<<x1552);

	if (t31 != 14060) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1558 = -1;
	uint64_t x1559 = 173177LLU;
	uint8_t x1560 = 1U;
	uint64_t t32 = 60734345LLU;

	t32 = ((x1557^(x1558%x1559))<<x1560);

	if (t32 != 4294647992LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1570 = 1;
	volatile int64_t x1571 = INT64_MAX;
	static volatile int64_t t33 = 1LL;

	t33 = ((x1569^(x1570%x1571))<<x1572);

	if (t33 != 1048512LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1573 = UINT16_MAX;
	int8_t x1574 = INT8_MAX;
	volatile uint32_t x1575 = 41004U;
	uint8_t x1576 = 1U;
	volatile uint32_t t34 = 77482U;

	t34 = ((x1573^(x1574%x1575))<<x1576);

	if (t34 != 130816U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1597 = 24795;
	uint8_t x1600 = 6U;

	t35 = ((x1597^(x1598%x1599))<<x1600);

	if (t35 != 510208) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1626 = INT64_MIN;
	static int64_t x1627 = -1LL;
	int64_t t36 = 1371LL;

	t36 = ((x1625^(x1626%x1627))<<x1628);

	if (t36 != 3072LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1657 = INT64_MIN;
	uint64_t x1658 = 109261336705LLU;
	volatile int64_t x1659 = -74LL;
	uint64_t t37 = 1LLU;

	t37 = ((x1657^(x1658%x1659))<<x1660);

	if (t37 != 218522673410LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1665 = 20;
	uint16_t x1666 = 15326U;
	static int32_t x1668 = 0;
	int32_t t38 = 1;

	t38 = ((x1665^(x1666%x1667))<<x1668);

	if (t38 != 74) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1697 = 11243998069LL;
	uint16_t x1698 = 105U;
	static uint16_t x1699 = UINT16_MAX;
	volatile uint8_t x1700 = 9U;
	volatile int64_t t39 = -33053967662LL;

	t39 = ((x1697^(x1698%x1699))<<x1700);

	if (t39 != 5756926965760LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1714 = UINT64_MAX;
	static volatile int8_t x1715 = INT8_MIN;
	uint16_t x1716 = 10U;
	volatile uint64_t t40 = 1LLU;

	t40 = ((x1713^(x1714%x1715))<<x1716);

	if (t40 != 130048LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1725 = INT64_MAX;
	static uint64_t x1726 = 11799945628384571LLU;
	int16_t x1727 = INT16_MAX;
	volatile int32_t x1728 = 6;
	volatile uint64_t t41 = 6486LLU;

	t41 = ((x1725^(x1726%x1727))<<x1728);

	if (t41 != 18446744073709328896LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x1758 = INT8_MIN;
	uint64_t x1759 = 3092021314914293559LLU;
	static uint64_t t42 = 50LLU;

	t42 = ((x1757^(x1758%x1759))<<x1760);

	if (t42 != 5973274998276167420LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1769 = -7676499;
	static volatile int8_t x1770 = INT8_MAX;
	static uint64_t x1771 = 63467235236LLU;
	uint64_t t43 = 112LLU;

	t43 = ((x1769^(x1770%x1771))<<x1772);

	if (t43 != 18446744073694198692LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x1801 = 2347U;
	volatile uint16_t x1802 = UINT16_MAX;
	uint16_t x1803 = UINT16_MAX;
	volatile uint8_t x1804 = 1U;
	volatile uint32_t t44 = 18149U;

	t44 = ((x1801^(x1802%x1803))<<x1804);

	if (t44 != 4694U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x1806 = 28885U;
	int8_t x1807 = INT8_MIN;
	uint8_t x1808 = 26U;
	volatile uint32_t t45 = 339697U;

	t45 = ((x1805^(x1806%x1807))<<x1808);

	if (t45 != 1409286144U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1830 = -1;
	int32_t x1831 = -1;
	int8_t x1832 = 3;
	volatile int32_t t46 = -3111923;

	t46 = ((x1829^(x1830%x1831))<<x1832);

	if (t46 != 240748904) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x1877 = UINT64_MAX;
	static int8_t x1878 = INT8_MIN;
	uint32_t x1879 = 42013U;
	uint8_t x1880 = 1U;
	uint64_t t47 = 206436LLU;

	t47 = ((x1877^(x1878%x1879))<<x1880);

	if (t47 != 18446744073709511232LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1941 = 2U;
	uint8_t x1942 = 108U;
	int8_t x1943 = -1;
	int32_t t48 = 39;

	t48 = ((x1941^(x1942%x1943))<<x1944);

	if (t48 != 1024) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1985 = INT8_MIN;
	int8_t x1986 = INT8_MIN;
	uint32_t x1987 = 450U;

	t49 = ((x1985^(x1986%x1987))<<x1988);

	if (t49 != 4294966964U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x1989 = UINT32_MAX;
	static int32_t x1991 = INT32_MIN;
	uint8_t x1992 = 3U;
	uint32_t t50 = 28007U;

	t50 = ((x1989^(x1990%x1991))<<x1992);

	if (t50 != 4294967288U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2023 = 15;
	static uint64_t x2024 = 0LLU;

	t51 = ((x2021^(x2022%x2023))<<x2024);

	if (t51 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x2181 = INT32_MIN;
	volatile int64_t x2182 = 193LL;
	uint64_t x2183 = UINT64_MAX;
	uint8_t x2184 = 1U;
	volatile uint64_t t52 = 125481268972266LLU;

	t52 = ((x2181^(x2182%x2183))<<x2184);

	if (t52 != 18446744069414584706LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2185 = INT8_MIN;
	int8_t x2186 = INT8_MAX;
	volatile uint32_t x2187 = 49019U;
	volatile int8_t x2188 = 1;
	volatile uint32_t t53 = 2U;

	t53 = ((x2185^(x2186%x2187))<<x2188);

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2198 = UINT32_MAX;
	int32_t x2199 = INT32_MAX;
	uint64_t x2200 = 2LLU;
	uint32_t t54 = 40U;

	t54 = ((x2197^(x2198%x2199))<<x2200);

	if (t54 != 16U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2285 = -2605;
	int16_t x2286 = -1;
	int64_t x2287 = INT64_MIN;
	uint8_t x2288 = 2U;

	t55 = ((x2285^(x2286%x2287))<<x2288);

	if (t55 != 10416LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2305 = INT32_MAX;
	volatile int16_t x2307 = 152;
	uint32_t x2308 = 1U;
	volatile uint32_t t56 = 1218339794U;

	t56 = ((x2305^(x2306%x2307))<<x2308);

	if (t56 != 4294967006U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2322 = -247711;
	uint32_t x2323 = UINT32_MAX;
	uint8_t x2324 = 14U;

	t57 = ((x2321^(x2322%x2323))<<x2324);

	if (t57 != 4059578368U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2513 = -34227294975967LL;
	int64_t x2514 = INT64_MIN;
	volatile uint64_t x2515 = UINT64_MAX;
	static volatile uint32_t x2516 = 3U;
	volatile uint64_t t58 = 3563542LLU;

	t58 = ((x2513^(x2514%x2515))<<x2516);

	if (t58 != 18446470255349743880LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2569 = -15;
	uint64_t x2570 = 148572LLU;
	uint8_t x2571 = 16U;
	static volatile int32_t x2572 = 0;
	uint64_t t59 = 127355571728946LLU;

	t59 = ((x2569^(x2570%x2571))<<x2572);

	if (t59 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2581 = 59U;
	uint16_t x2582 = 0U;
	volatile int32_t x2583 = -3401;
	static int16_t x2584 = 10;
	volatile uint32_t t60 = 1362605U;

	t60 = ((x2581^(x2582%x2583))<<x2584);

	if (t60 != 60416U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2633 = 397874770390731LLU;
	uint8_t x2634 = UINT8_MAX;
	static int16_t x2635 = INT16_MIN;
	uint16_t x2636 = 8U;

	t61 = ((x2633^(x2634%x2635))<<x2636);

	if (t61 != 101855941219988480LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2646 = 127U;
	volatile uint8_t x2648 = 2U;

	t62 = ((x2645^(x2646%x2647))<<x2648);

	if (t62 != 508U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2666 = 2U;
	int32_t x2667 = -1;
	static uint16_t x2668 = 7U;
	static volatile int32_t t63 = -5187;

	t63 = ((x2665^(x2666%x2667))<<x2668);

	if (t63 != 4194176) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x2690 = 96U;
	int64_t x2691 = 1954175930119824250LL;
	volatile uint32_t x2692 = 5U;
	volatile int64_t t64 = 553407905557120005LL;

	t64 = ((x2689^(x2690%x2691))<<x2692);

	if (t64 != 744619520LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x2785 = UINT8_MAX;
	int8_t x2786 = INT8_MIN;
	volatile uint32_t x2787 = 3554U;
	uint32_t x2788 = 0U;

	t65 = ((x2785^(x2786%x2787))<<x2788);

	if (t65 != 975U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x2793 = INT8_MAX;
	int64_t x2794 = INT64_MIN;
	int32_t x2795 = -1;
	int32_t x2796 = 0;
	volatile int64_t t66 = -331738409083LL;

	t66 = ((x2793^(x2794%x2795))<<x2796);

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2797 = -1;
	int8_t x2798 = INT8_MIN;
	uint32_t x2799 = 112U;
	int16_t x2800 = 0;

	t67 = ((x2797^(x2798%x2799))<<x2800);

	if (t67 != 4294967279U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2850 = -1;
	uint8_t x2852 = 26U;
	uint64_t t68 = 200096726553639LLU;

	t68 = ((x2849^(x2850%x2851))<<x2852);

	if (t68 != 18446722498008449024LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x2878 = -1;
	uint64_t x2879 = 43528LLU;
	uint8_t x2880 = 54U;
	uint64_t t69 = 116719419LLU;

	t69 = ((x2877^(x2878%x2879))<<x2880);

	if (t69 != 12538021362599460864LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2922 = INT64_MAX;
	volatile uint64_t t70 = 35224LLU;

	t70 = ((x2921^(x2922%x2923))<<x2924);

	if (t70 != 74LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2941 = 2036U;
	int16_t x2942 = 15503;
	uint64_t x2943 = 127252345LLU;
	int16_t x2944 = 1;

	t71 = ((x2941^(x2942%x2943))<<x2944);

	if (t71 != 30454LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x3035 = 37U;
	uint16_t x3036 = 20U;
	static volatile uint32_t t72 = 143U;

	t72 = ((x3033^(x3034%x3035))<<x3036);

	if (t72 != 4250927104U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3119 = UINT64_MAX;
	int16_t x3120 = 48;
	uint64_t t73 = 1217453278448537LLU;

	t73 = ((x3117^(x3118%x3119))<<x3120);

	if (t73 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x3181 = 979619088814732510LLU;
	int32_t x3182 = INT32_MIN;
	uint32_t x3183 = 212232051U;
	static volatile uint32_t x3184 = 57U;
	static volatile uint64_t t74 = 31228LLU;

	t74 = ((x3181^(x3182%x3183))<<x3184);

	if (t74 != 13258597302978740224LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x3193 = 974133833132177595LLU;
	volatile int32_t x3194 = -1;
	int16_t x3195 = 38;
	static uint8_t x3196 = 3U;
	volatile uint64_t t75 = 5LLU;

	t75 = ((x3193^(x3194%x3195))<<x3196);

	if (t75 != 10653673408652130848LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x3217 = 25U;
	int16_t x3218 = 16;
	volatile int8_t x3219 = -1;
	uint8_t x3220 = 1U;
	volatile int32_t t76 = 5;

	t76 = ((x3217^(x3218%x3219))<<x3220);

	if (t76 != 50) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x3429 = 7U;
	static uint64_t x3430 = 747633991789216LLU;
	static volatile uint32_t x3431 = 813195617U;
	static uint32_t x3432 = 3U;
	uint64_t t77 = 154452268665438860LLU;

	t77 = ((x3429^(x3430%x3431))<<x3432);

	if (t77 != 5160148800LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3469 = 0;
	uint8_t x3470 = UINT8_MAX;
	uint64_t x3471 = 147171905LLU;
	int64_t x3472 = 21LL;
	uint64_t t78 = 33551LLU;

	t78 = ((x3469^(x3470%x3471))<<x3472);

	if (t78 != 534773760LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x3493 = 2778LLU;
	int8_t x3494 = INT8_MIN;
	volatile uint64_t x3495 = UINT64_MAX;
	int8_t x3496 = 23;
	static uint64_t t79 = 14LLU;

	t79 = ((x3493^(x3494%x3495))<<x3496);

	if (t79 != 18446744050842206208LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x3569 = 77U;
	int8_t x3571 = INT8_MIN;
	uint16_t x3572 = 19U;

	t80 = ((x3569^(x3570%x3571))<<x3572);

	if (t80 != 40370176) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3653 = UINT16_MAX;
	int64_t x3655 = 1LL;
	uint16_t x3656 = 7U;

	t81 = ((x3653^(x3654%x3655))<<x3656);

	if (t81 != 8388480LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x3677 = INT16_MAX;
	uint32_t x3678 = 41743U;
	int64_t x3679 = -69558516859632LL;
	static uint16_t x3680 = 1U;
	static int64_t t82 = -1501375LL;

	t82 = ((x3677^(x3678%x3679))<<x3680);

	if (t82 != 113120LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3685 = -1;
	volatile int8_t x3686 = INT8_MIN;
	uint8_t x3687 = 41U;
	uint32_t x3688 = 15U;
	volatile int32_t t83 = -80873932;

	t83 = ((x3685^(x3686%x3687))<<x3688);

	if (t83 != 131072) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3705 = UINT16_MAX;
	int64_t x3706 = INT64_MIN;
	static int16_t x3707 = INT16_MIN;
	uint32_t x3708 = 5U;

	t84 = ((x3705^(x3706%x3707))<<x3708);

	if (t84 != 2097120LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3713 = -1;
	volatile uint64_t x3714 = 13779LLU;
	int16_t x3715 = -1;
	int8_t x3716 = 0;

	t85 = ((x3713^(x3714%x3715))<<x3716);

	if (t85 != 18446744073709537836LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3761 = INT16_MIN;
	volatile uint8_t x3763 = 9U;
	uint8_t x3764 = 8U;
	int64_t t86 = 352733181965722494LL;

	t86 = ((x3761^(x3762%x3763))<<x3764);

	if (t86 != 8387328LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3793 = UINT64_MAX;
	volatile uint8_t x3794 = UINT8_MAX;
	uint64_t x3795 = UINT64_MAX;
	uint8_t x3796 = 1U;
	static uint64_t t87 = 163LLU;

	t87 = ((x3793^(x3794%x3795))<<x3796);

	if (t87 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3845 = 31921298U;
	volatile int64_t x3846 = 6587958504342LL;
	int16_t x3847 = INT16_MAX;
	volatile int64_t x3848 = 11LL;
	int64_t t88 = 95887LL;

	t88 = ((x3845^(x3846%x3847))<<x3848);

	if (t88 != 65373458432LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x3889 = INT8_MIN;
	uint16_t x3891 = 550U;
	volatile uint64_t x3892 = 21LLU;
	static volatile int64_t t89 = -237610LL;

	t89 = ((x3889^(x3890%x3891))<<x3892);

	if (t89 != 251658240LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3953 = -1;
	volatile int32_t x3954 = -1;
	uint32_t x3955 = UINT32_MAX;
	static uint16_t x3956 = 8U;
	uint32_t t90 = 19752U;

	t90 = ((x3953^(x3954%x3955))<<x3956);

	if (t90 != 4294967040U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3986 = UINT32_MAX;
	int32_t x3987 = -2055612;
	volatile uint32_t t91 = 116628924U;

	t91 = ((x3985^(x3986%x3987))<<x3988);

	if (t91 != 4031848960U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x4001 = UINT64_MAX;
	int64_t x4002 = INT64_MIN;
	static int32_t x4003 = 1481;
	uint8_t x4004 = 51U;
	volatile uint64_t t92 = 147LLU;

	t92 = ((x4001^(x4002%x4003))<<x4004);

	if (t92 != 1929792440328257536LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x4037 = 0;
	static uint16_t x4038 = UINT16_MAX;
	int32_t x4039 = -330;
	volatile int32_t t93 = -5;

	t93 = ((x4037^(x4038%x4039))<<x4040);

	if (t93 != 195) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4041 = 2;
	int32_t x4043 = INT32_MIN;
	int32_t t94 = 1;

	t94 = ((x4041^(x4042%x4043))<<x4044);

	if (t94 != 30476) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4157 = 92;
	static uint32_t x4158 = 0U;
	static volatile int8_t x4159 = INT8_MAX;
	static uint16_t x4160 = 13U;

	t95 = ((x4157^(x4158%x4159))<<x4160);

	if (t95 != 753664U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4161 = INT16_MIN;
	int32_t x4162 = INT32_MIN;
	static uint8_t x4164 = 14U;

	t96 = ((x4161^(x4162%x4163))<<x4164);

	if (t96 != 35183835217920LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x4193 = UINT32_MAX;
	int32_t x4194 = INT32_MAX;
	uint64_t x4195 = 44782633975947LLU;
	int8_t x4196 = 9;
	volatile uint64_t t97 = 15794457LLU;

	t97 = ((x4193^(x4194%x4195))<<x4196);

	if (t97 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4273 = 15U;
	uint64_t x4274 = 218139468913253LLU;
	int64_t x4275 = -1LL;
	uint16_t x4276 = 0U;
	volatile uint64_t t98 = 42705191124522LLU;

	t98 = ((x4273^(x4274%x4275))<<x4276);

	if (t98 != 218139468913258LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x4337 = UINT64_MAX;
	uint64_t x4338 = 214555186LLU;
	static int8_t x4340 = 3;

	t99 = ((x4337^(x4338%x4339))<<x4340);

	if (t99 != 18446744073709550520LLU) { NG(); } else { ; }
	
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

