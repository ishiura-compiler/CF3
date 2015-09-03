#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x29 = -2038218LL;
int64_t t2 = -768082709494419007LL;
int64_t x63 = INT64_MIN;
uint16_t x64 = 1U;
volatile uint8_t x140 = 16U;
uint8_t x308 = 6U;
uint64_t t8 = 0LLU;
volatile int64_t t9 = 1964108603011LL;
int32_t t10 = 98352;
uint16_t x520 = 0U;
static volatile int16_t x616 = 7;
volatile int64_t t14 = -1845267034759LL;
static volatile int16_t x645 = INT16_MIN;
static uint32_t x758 = 2129102U;
uint32_t x770 = 19250U;
int8_t x771 = 0;
static int32_t x839 = INT32_MIN;
volatile int64_t t18 = 0LL;
static volatile uint64_t t19 = 2LLU;
int32_t t20 = -52183832;
volatile int16_t x978 = INT16_MAX;
uint8_t x980 = 4U;
uint8_t x1052 = 27U;
static uint8_t x1090 = 13U;
volatile uint32_t x1107 = 386837U;
uint32_t x1211 = 1521U;
uint32_t x1221 = 18615388U;
volatile uint32_t t26 = 2201U;
volatile int64_t t27 = -5214410LL;
uint8_t x1376 = 10U;
static volatile int8_t x1380 = 1;
uint8_t x1461 = UINT8_MAX;
uint8_t x1552 = 11U;
int64_t t33 = -1465LL;
static uint8_t x1603 = 3U;
static volatile uint32_t t35 = 35601U;
static volatile int64_t t36 = 1161663831680819LL;
int8_t x1694 = -1;
uint8_t x1696 = 30U;
int32_t t37 = -99900;
uint64_t x1697 = 0LLU;
int16_t x1698 = -3;
uint64_t x1738 = 461363979813595430LLU;
int64_t x1761 = -1LL;
volatile int16_t x1763 = INT16_MIN;
volatile int64_t t41 = -2397826LL;
volatile int32_t x1773 = -1;
int32_t t43 = -21;
static int16_t x1787 = -103;
static uint64_t x1788 = 19LLU;
uint16_t x1832 = 5U;
static int8_t x1849 = INT8_MIN;
int8_t x1850 = -1;
int64_t x1851 = -1LL;
int64_t x1961 = -2986130256972755098LL;
int32_t t51 = 1;
int8_t x2053 = INT8_MIN;
uint32_t t54 = 230U;
static uint8_t x2066 = 7U;
int64_t t55 = 589278190LL;
uint64_t t56 = 2237LLU;
static int32_t x2135 = 1;
uint8_t x2216 = 22U;
static int64_t t60 = 35392164LL;
int8_t x2233 = INT8_MAX;
int32_t x2234 = INT32_MIN;
uint8_t x2240 = 0U;
static volatile int64_t t62 = 2LL;
int8_t x2247 = -30;
int32_t x2294 = INT32_MAX;
static uint8_t x2304 = 12U;
uint8_t x2315 = UINT8_MAX;
uint16_t x2416 = 6U;
static uint8_t x2562 = UINT8_MAX;
uint64_t x2563 = 6LLU;
volatile uint32_t x2577 = 14204U;
static int16_t x2578 = INT16_MIN;
int64_t t71 = -4611388653124497889LL;
uint64_t t72 = 75912135810893LLU;
static uint32_t x2631 = 84U;
int16_t x2632 = 12;
int16_t x2691 = 2;
volatile uint32_t t74 = 1412434403U;
int32_t x2805 = -24;
int32_t x2806 = 17925;
static uint16_t x2807 = 15233U;
uint8_t x2808 = 0U;
volatile int32_t x2887 = -279;
int64_t t78 = -8120504153428LL;
volatile uint8_t x3048 = 2U;
int64_t x3097 = INT64_MAX;
int32_t x3099 = -834237;
uint8_t x3162 = 47U;
static int16_t x3243 = 1;
uint32_t x3258 = UINT32_MAX;
static volatile int16_t x3260 = 0;
uint64_t t83 = 36LLU;
uint32_t x3278 = 10837722U;
int64_t x3280 = 0LL;
uint64_t x3306 = UINT64_MAX;
volatile uint64_t t88 = 25878102555LLU;
uint8_t x3465 = 0U;
int64_t x3491 = -1LL;
int64_t t92 = -2617082558680248984LL;
static int16_t x3693 = INT16_MIN;
uint16_t x3696 = 0U;
uint32_t x3699 = 20685203U;
volatile uint64_t t96 = 9326902732497638LLU;
int8_t x3722 = -1;
uint16_t x3813 = UINT16_MAX;


void f0(void) {
	uint64_t x9 = 66084525945LLU;
	uint64_t x10 = 552693456651857626LLU;
	int64_t x11 = INT64_MIN;
	volatile int8_t x12 = 1;
	uint64_t t0 = 5355753849651LLU;

	t0 = ((x9&(x10-x11))>>x12);

	if (t0 != 11277452076LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x30 = 1;
	uint64_t x31 = 2344LLU;
	uint16_t x32 = 45U;
	uint64_t t1 = 1820304LLU;

	t1 = ((x29&(x30-x31))>>x32);

	if (t1 != 524287LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x49 = 521981881U;
	static int64_t x50 = INT64_MIN;
	static int64_t x51 = INT64_MIN;
	uint8_t x52 = 13U;

	t2 = ((x49&(x50-x51))>>x52);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x61 = -20;
	int64_t x62 = INT64_MIN;
	volatile int64_t t3 = 4103885348127958941LL;

	t3 = ((x61&(x62-x63))>>x64);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x109 = INT8_MAX;
	int16_t x110 = -1;
	int8_t x111 = 1;
	uint8_t x112 = 21U;
	int32_t t4 = -165;

	t4 = ((x109&(x110-x111))>>x112);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x121 = 1U;
	volatile int64_t x122 = -68016064531610LL;
	static uint16_t x123 = 1U;
	static uint16_t x124 = 2U;
	volatile int64_t t5 = 6257693441689896LL;

	t5 = ((x121&(x122-x123))>>x124);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x137 = 68U;
	int64_t x138 = -478469655LL;
	int64_t x139 = INT64_MIN;
	volatile int64_t t6 = 3090855355588786867LL;

	t6 = ((x137&(x138-x139))>>x140);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x181 = 892;
	int64_t x182 = INT64_MAX;
	int32_t x183 = 5883064;
	uint32_t x184 = 2U;
	int64_t t7 = 21399204089LL;

	t7 = ((x181&(x182-x183))>>x184);

	if (t7 != 209LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x305 = 11;
	uint64_t x306 = 1145093785491338138LLU;
	volatile uint16_t x307 = 29307U;

	t8 = ((x305&(x306-x307))>>x308);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x321 = UINT32_MAX;
	uint32_t x322 = 770U;
	volatile int64_t x323 = -1LL;
	int32_t x324 = 0;

	t9 = ((x321&(x322-x323))>>x324);

	if (t9 != 771LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x417 = -1;
	int8_t x418 = -57;
	static int8_t x419 = INT8_MIN;
	static volatile uint8_t x420 = 2U;

	t10 = ((x417&(x418-x419))>>x420);

	if (t10 != 17) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x477 = 5108452LL;
	static uint16_t x478 = 2U;
	static int32_t x479 = 906;
	int64_t x480 = 0LL;
	volatile int64_t t11 = 198LL;

	t11 = ((x477&(x478-x479))>>x480);

	if (t11 != 5107808LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x517 = 29U;
	volatile int8_t x518 = -24;
	uint64_t x519 = UINT64_MAX;
	volatile uint64_t t12 = 7777187055717075305LLU;

	t12 = ((x517&(x518-x519))>>x520);

	if (t12 != 9LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x581 = 2753867;
	static int16_t x582 = 14689;
	uint32_t x583 = 0U;
	static volatile int8_t x584 = 0;
	uint32_t t13 = 174266U;

	t13 = ((x581&(x582-x583))>>x584);

	if (t13 != 321U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x613 = 10713;
	int64_t x614 = 462624913498175LL;
	int64_t x615 = -1LL;

	t14 = ((x613&(x614-x615))>>x616);

	if (t14 != 64LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x646 = INT8_MIN;
	volatile int32_t x647 = INT32_MIN;
	int16_t x648 = 4;
	int32_t t15 = 246;

	t15 = ((x645&(x646-x647))>>x648);

	if (t15 != 134215680) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x757 = INT32_MIN;
	int64_t x759 = -1LL;
	volatile uint32_t x760 = 6U;
	int64_t t16 = -14LL;

	t16 = ((x757&(x758-x759))>>x760);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x769 = INT8_MIN;
	static uint8_t x772 = 3U;
	volatile uint32_t t17 = 24357410U;

	t17 = ((x769&(x770-x771))>>x772);

	if (t17 != 2400U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x837 = INT64_MIN;
	int16_t x838 = -14;
	volatile int8_t x840 = 33;

	t18 = ((x837&(x838-x839))>>x840);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x845 = 57607U;
	static uint64_t x846 = UINT64_MAX;
	volatile int16_t x847 = -1;
	volatile int16_t x848 = 14;

	t19 = ((x845&(x846-x847))>>x848);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x893 = INT32_MAX;
	uint16_t x894 = 7087U;
	int8_t x895 = INT8_MIN;
	uint8_t x896 = 6U;

	t20 = ((x893&(x894-x895))>>x896);

	if (t20 != 112) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x977 = 10U;
	static uint8_t x979 = 36U;
	int32_t t21 = -1725;

	t21 = ((x977&(x978-x979))>>x980);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1049 = UINT32_MAX;
	int64_t x1050 = 34586671839711875LL;
	uint32_t x1051 = 409U;
	static volatile int64_t t22 = -1942941039128962389LL;

	t22 = ((x1049&(x1050-x1051))>>x1052);

	if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1089 = UINT32_MAX;
	int16_t x1091 = 0;
	static uint16_t x1092 = 0U;
	static volatile uint32_t t23 = 913U;

	t23 = ((x1089&(x1090-x1091))>>x1092);

	if (t23 != 13U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1105 = 6314;
	uint32_t x1106 = 386553U;
	int8_t x1108 = 0;
	volatile uint32_t t24 = 158027395U;

	t24 = ((x1105&(x1106-x1107))>>x1108);

	if (t24 != 6304U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1209 = 46087255U;
	int8_t x1210 = -2;
	static int16_t x1212 = 0;
	static uint32_t t25 = 104303605U;

	t25 = ((x1209&(x1210-x1211))>>x1212);

	if (t25 != 46086149U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1222 = 11920513U;
	static uint32_t x1223 = 876824374U;
	int16_t x1224 = 0;

	t26 = ((x1221&(x1222-x1223))>>x1224);

	if (t26 != 1051720U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1277 = 115;
	int8_t x1278 = -1;
	int64_t x1279 = INT64_MIN;
	static uint16_t x1280 = 31U;

	t27 = ((x1277&(x1278-x1279))>>x1280);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1301 = INT64_MIN;
	int64_t x1302 = 2148008201708LL;
	int32_t x1303 = 383;
	uint32_t x1304 = 0U;
	int64_t t28 = -1767487145738133LL;

	t28 = ((x1301&(x1302-x1303))>>x1304);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1373 = INT8_MIN;
	volatile int8_t x1374 = INT8_MIN;
	volatile uint64_t x1375 = 6175951LLU;
	volatile uint64_t t29 = 24844452780977LLU;

	t29 = ((x1373&(x1374-x1375))>>x1376);

	if (t29 != 18014398509475952LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1377 = INT8_MIN;
	int32_t x1378 = -1268;
	volatile int64_t x1379 = -883791617343LL;
	int64_t t30 = 1889LL;

	t30 = ((x1377&(x1378-x1379))>>x1380);

	if (t30 != 441895808000LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1462 = 1067248440733271LLU;
	volatile int16_t x1463 = -1;
	uint8_t x1464 = 1U;
	uint64_t t31 = 279008LLU;

	t31 = ((x1461&(x1462-x1463))>>x1464);

	if (t31 != 44LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1533 = INT32_MIN;
	uint16_t x1534 = 167U;
	int32_t x1535 = -21297908;
	uint16_t x1536 = 0U;
	volatile int32_t t32 = -1;

	t32 = ((x1533&(x1534-x1535))>>x1536);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1549 = INT64_MAX;
	int8_t x1550 = -1;
	uint16_t x1551 = 24U;

	t33 = ((x1549&(x1550-x1551))>>x1552);

	if (t33 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1601 = 54U;
	uint64_t x1602 = 1031505665235LLU;
	uint8_t x1604 = 42U;
	static volatile uint64_t t34 = 10LLU;

	t34 = ((x1601&(x1602-x1603))>>x1604);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1621 = -1;
	volatile int32_t x1622 = -395923372;
	uint32_t x1623 = 246018066U;
	uint8_t x1624 = 23U;

	t35 = ((x1621&(x1622-x1623))>>x1624);

	if (t35 != 435U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1641 = 1318LL;
	int16_t x1642 = -1;
	volatile int8_t x1643 = INT8_MAX;
	uint16_t x1644 = 0U;

	t36 = ((x1641&(x1642-x1643))>>x1644);

	if (t36 != 1280LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1693 = INT8_MAX;
	int16_t x1695 = INT16_MIN;

	t37 = ((x1693&(x1694-x1695))>>x1696);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1699 = 10;
	int16_t x1700 = 1;
	volatile uint64_t t38 = 96736933335LLU;

	t38 = ((x1697&(x1698-x1699))>>x1700);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1733 = -374;
	int32_t x1734 = INT32_MAX;
	volatile int64_t x1735 = 17LL;
	static uint8_t x1736 = 1U;
	volatile int64_t t39 = -20979659728LL;

	t39 = ((x1733&(x1734-x1735))>>x1736);

	if (t39 != 1073741637LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1737 = INT64_MIN;
	volatile uint64_t x1739 = 153047599LLU;
	uint16_t x1740 = 2U;
	volatile uint64_t t40 = 536693395279LLU;

	t40 = ((x1737&(x1738-x1739))>>x1740);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1762 = INT16_MIN;
	uint8_t x1764 = 2U;

	t41 = ((x1761&(x1762-x1763))>>x1764);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1774 = INT32_MIN;
	volatile uint32_t x1775 = UINT32_MAX;
	uint16_t x1776 = 14U;
	uint32_t t42 = 744483922U;

	t42 = ((x1773&(x1774-x1775))>>x1776);

	if (t42 != 131072U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1777 = INT32_MIN;
	int32_t x1778 = 628;
	volatile int32_t x1779 = -3607075;
	volatile int8_t x1780 = 0;

	t43 = ((x1777&(x1778-x1779))>>x1780);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1785 = UINT16_MAX;
	static volatile int8_t x1786 = 0;
	int32_t t44 = -1;

	t44 = ((x1785&(x1786-x1787))>>x1788);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1809 = 1LL;
	int64_t x1810 = -1LL;
	int8_t x1811 = 63;
	static int8_t x1812 = 1;
	int64_t t45 = 6861653606235LL;

	t45 = ((x1809&(x1810-x1811))>>x1812);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1829 = -15608266612LL;
	volatile int16_t x1830 = INT16_MIN;
	int64_t x1831 = -7862020595967376LL;
	int64_t t46 = -4598452736343LL;

	t46 = ((x1829&(x1830-x1831))>>x1832);

	if (t46 != 245687740801540LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1852 = 41;
	static int64_t t47 = -660LL;

	t47 = ((x1849&(x1850-x1851))>>x1852);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1857 = UINT64_MAX;
	int32_t x1858 = INT32_MIN;
	int16_t x1859 = INT16_MIN;
	volatile int16_t x1860 = 9;
	uint64_t t48 = 27191516LLU;

	t48 = ((x1857&(x1858-x1859))>>x1860);

	if (t48 != 36028797014769728LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1921 = UINT8_MAX;
	static uint64_t x1922 = 489LLU;
	int32_t x1923 = INT32_MAX;
	uint16_t x1924 = 2U;
	uint64_t t49 = 13879693874848329LLU;

	t49 = ((x1921&(x1922-x1923))>>x1924);

	if (t49 != 58LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x1962 = UINT64_MAX;
	static int16_t x1963 = INT16_MIN;
	static int16_t x1964 = 1;
	uint64_t t50 = 4465077754391373LLU;

	t50 = ((x1961&(x1962-x1963))>>x1964);

	if (t50 != 10163LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2005 = INT8_MIN;
	static volatile int32_t x2006 = -1;
	volatile int32_t x2007 = -1;
	uint8_t x2008 = 1U;

	t51 = ((x2005&(x2006-x2007))>>x2008);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2033 = INT8_MIN;
	static int64_t x2034 = -1LL;
	volatile int16_t x2035 = -96;
	static uint16_t x2036 = 0U;
	static volatile int64_t t52 = 411835684396243998LL;

	t52 = ((x2033&(x2034-x2035))>>x2036);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2037 = 3;
	static uint32_t x2038 = 0U;
	uint8_t x2039 = 2U;
	static uint8_t x2040 = 23U;
	static volatile uint32_t t53 = 22410677U;

	t53 = ((x2037&(x2038-x2039))>>x2040);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2054 = 295U;
	volatile uint8_t x2055 = UINT8_MAX;
	int8_t x2056 = 2;

	t54 = ((x2053&(x2054-x2055))>>x2056);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2065 = INT64_MAX;
	int32_t x2067 = 556189175;
	int8_t x2068 = 1;

	t55 = ((x2065&(x2066-x2067))>>x2068);

	if (t55 != 4611686018149293320LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2105 = 10U;
	static int16_t x2106 = INT16_MIN;
	uint64_t x2107 = 3134385LLU;
	int64_t x2108 = 0LL;

	t56 = ((x2105&(x2106-x2107))>>x2108);

	if (t56 != 10LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2133 = INT64_MAX;
	int32_t x2134 = -6394764;
	static volatile int8_t x2136 = 17;
	volatile int64_t t57 = -1LL;

	t57 = ((x2133&(x2134-x2135))>>x2136);

	if (t57 != 70368744177615LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x2149 = UINT32_MAX;
	int16_t x2150 = INT16_MIN;
	static int64_t x2151 = -6140840781LL;
	uint16_t x2152 = 20U;
	volatile int64_t t58 = -27934LL;

	t58 = ((x2149&(x2150-x2151))>>x2152);

	if (t58 != 1760LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2189 = 1411993793397LLU;
	volatile uint16_t x2190 = UINT16_MAX;
	uint64_t x2191 = 5402521738824LLU;
	int16_t x2192 = 0;
	volatile uint64_t t59 = 3920896663871213180LLU;

	t59 = ((x2189&(x2190-x2191))>>x2192);

	if (t59 != 1099511718197LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x2213 = UINT32_MAX;
	static int64_t x2214 = 42685680682LL;
	uint8_t x2215 = 1U;

	t60 = ((x2213&(x2214-x2215))>>x2216);

	if (t60 != 961LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2235 = INT16_MIN;
	int8_t x2236 = 2;
	int32_t t61 = 422;

	t61 = ((x2233&(x2234-x2235))>>x2236);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2237 = 2740LL;
	int8_t x2238 = -1;
	uint8_t x2239 = UINT8_MAX;

	t62 = ((x2237&(x2238-x2239))>>x2240);

	if (t62 != 2560LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2245 = 39875U;
	uint8_t x2246 = UINT8_MAX;
	uint32_t x2248 = 3U;
	static volatile uint32_t t63 = 30314060U;

	t63 = ((x2245&(x2246-x2247))>>x2248);

	if (t63 != 32U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2261 = 5931818U;
	static int8_t x2262 = 2;
	volatile int16_t x2263 = -2228;
	int32_t x2264 = 3;
	uint32_t t64 = 36153379U;

	t64 = ((x2261&(x2262-x2263))>>x2264);

	if (t64 != 4U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2293 = -1;
	static uint64_t x2295 = 3LLU;
	int64_t x2296 = 1LL;
	uint64_t t65 = 8010858LLU;

	t65 = ((x2293&(x2294-x2295))>>x2296);

	if (t65 != 1073741822LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2301 = -1;
	volatile int16_t x2302 = INT16_MIN;
	int32_t x2303 = -10917083;
	static int32_t t66 = 2034166;

	t66 = ((x2301&(x2302-x2303))>>x2304);

	if (t66 != 2657) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2313 = 7;
	volatile int8_t x2314 = 8;
	uint16_t x2316 = 0U;
	static volatile int32_t t67 = -5;

	t67 = ((x2313&(x2314-x2315))>>x2316);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2385 = 5U;
	int32_t x2386 = INT32_MAX;
	uint64_t x2387 = 281267651867613532LLU;
	uint8_t x2388 = 25U;
	volatile uint64_t t68 = 2980LLU;

	t68 = ((x2385&(x2386-x2387))>>x2388);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x2413 = INT64_MIN;
	uint8_t x2414 = UINT8_MAX;
	volatile int16_t x2415 = INT16_MIN;
	volatile int64_t t69 = -19644989099579779LL;

	t69 = ((x2413&(x2414-x2415))>>x2416);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2561 = INT8_MIN;
	uint32_t x2564 = 9U;
	uint64_t t70 = 63504114550159148LLU;

	t70 = ((x2561&(x2562-x2563))>>x2564);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2579 = INT64_MIN;
	static int8_t x2580 = 10;

	t71 = ((x2577&(x2578-x2579))>>x2580);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2617 = 547580824352767230LLU;
	int16_t x2618 = -1;
	uint16_t x2619 = UINT16_MAX;
	volatile uint8_t x2620 = 3U;

	t72 = ((x2617&(x2618-x2619))>>x2620);

	if (t72 != 68447603044089856LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2629 = INT64_MIN;
	static uint8_t x2630 = 1U;
	int64_t t73 = 827216768LL;

	t73 = ((x2629&(x2630-x2631))>>x2632);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2689 = 971684U;
	int32_t x2690 = 31942038;
	uint8_t x2692 = 10U;

	t74 = ((x2689&(x2690-x2691))>>x2692);

	if (t74 != 400U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2721 = 945;
	int16_t x2722 = -1;
	int64_t x2723 = 59758146321LL;
	int8_t x2724 = 36;
	int64_t t75 = 1239646192768559LL;

	t75 = ((x2721&(x2722-x2723))>>x2724);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t t76 = 3;

	t76 = ((x2805&(x2806-x2807))>>x2808);

	if (t76 != 2688) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x2829 = INT64_MAX;
	int16_t x2830 = -1;
	volatile int16_t x2831 = INT16_MAX;
	static uint8_t x2832 = 4U;
	static volatile int64_t t77 = -1703169468683LL;

	t77 = ((x2829&(x2830-x2831))>>x2832);

	if (t77 != 576460752303421440LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2885 = -4LL;
	static uint32_t x2886 = 3U;
	uint8_t x2888 = 16U;

	t78 = ((x2885&(x2886-x2887))>>x2888);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3045 = UINT8_MAX;
	int8_t x3046 = INT8_MIN;
	volatile uint32_t x3047 = 230U;
	static volatile uint32_t t79 = 1U;

	t79 = ((x3045&(x3046-x3047))>>x3048);

	if (t79 != 38U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x3098 = 2756;
	static volatile uint8_t x3100 = 0U;
	volatile int64_t t80 = 154299062LL;

	t80 = ((x3097&(x3098-x3099))>>x3100);

	if (t80 != 836993LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3161 = 7;
	int16_t x3163 = INT16_MIN;
	volatile int8_t x3164 = 11;
	int32_t t81 = 2;

	t81 = ((x3161&(x3162-x3163))>>x3164);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3241 = 98LLU;
	int8_t x3242 = INT8_MAX;
	uint8_t x3244 = 43U;
	uint64_t t82 = 287761657034LLU;

	t82 = ((x3241&(x3242-x3243))>>x3244);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x3257 = 17046LLU;
	static volatile int8_t x3259 = INT8_MIN;

	t83 = ((x3257&(x3258-x3259))>>x3260);

	if (t83 != 22LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3277 = 2U;
	int32_t x3279 = INT32_MIN;
	uint32_t t84 = 4U;

	t84 = ((x3277&(x3278-x3279))>>x3280);

	if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x3297 = 14;
	int64_t x3298 = -1LL;
	int8_t x3299 = -9;
	uint32_t x3300 = 4U;
	volatile int64_t t85 = 2042334102908LL;

	t85 = ((x3297&(x3298-x3299))>>x3300);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3305 = INT64_MIN;
	int32_t x3307 = INT32_MIN;
	static volatile int16_t x3308 = 29;
	volatile uint64_t t86 = 2654641426581117LLU;

	t86 = ((x3305&(x3306-x3307))>>x3308);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x3361 = INT64_MAX;
	static int16_t x3362 = -1;
	uint32_t x3363 = 47538U;
	uint8_t x3364 = 17U;
	volatile int64_t t87 = 10158933775LL;

	t87 = ((x3361&(x3362-x3363))>>x3364);

	if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3425 = 1864U;
	static int32_t x3426 = -35;
	uint64_t x3427 = UINT64_MAX;
	int8_t x3428 = 3;

	t88 = ((x3425&(x3426-x3427))>>x3428);

	if (t88 != 233LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3466 = INT32_MAX;
	int32_t x3467 = INT32_MAX;
	int8_t x3468 = 9;
	volatile int32_t t89 = -123412;

	t89 = ((x3465&(x3466-x3467))>>x3468);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x3489 = INT8_MAX;
	int64_t x3490 = 92339419LL;
	static volatile int8_t x3492 = 2;
	volatile int64_t t90 = 0LL;

	t90 = ((x3489&(x3490-x3491))>>x3492);

	if (t90 != 23LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3577 = INT16_MIN;
	uint8_t x3578 = UINT8_MAX;
	volatile uint64_t x3579 = 136LLU;
	uint16_t x3580 = 3U;
	uint64_t t91 = 179558201322LLU;

	t91 = ((x3577&(x3578-x3579))>>x3580);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3621 = INT64_MIN;
	uint8_t x3622 = 6U;
	static uint8_t x3623 = 4U;
	static uint8_t x3624 = 3U;

	t92 = ((x3621&(x3622-x3623))>>x3624);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3673 = -1;
	uint32_t x3674 = 340572U;
	int32_t x3675 = 141;
	uint8_t x3676 = 1U;
	volatile uint32_t t93 = 7641U;

	t93 = ((x3673&(x3674-x3675))>>x3676);

	if (t93 != 170215U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x3694 = INT16_MAX;
	int16_t x3695 = INT16_MAX;
	int32_t t94 = -825875609;

	t94 = ((x3693&(x3694-x3695))>>x3696);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x3697 = 4482395U;
	uint16_t x3698 = UINT16_MAX;
	static volatile uint16_t x3700 = 0U;
	uint32_t t95 = 8842726U;

	t95 = ((x3697&(x3698-x3699))>>x3700);

	if (t95 != 4473928U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x3709 = UINT64_MAX;
	uint16_t x3710 = 3025U;
	uint8_t x3711 = 1U;
	int16_t x3712 = 26;

	t96 = ((x3709&(x3710-x3711))>>x3712);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3721 = INT32_MAX;
	static int32_t x3723 = INT32_MAX;
	uint8_t x3724 = 1U;
	int32_t t97 = 1111600;

	t97 = ((x3721&(x3722-x3723))>>x3724);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3773 = UINT16_MAX;
	uint32_t x3774 = 3475U;
	static int32_t x3775 = INT32_MAX;
	static volatile int8_t x3776 = 1;
	uint32_t t98 = 21U;

	t98 = ((x3773&(x3774-x3775))>>x3776);

	if (t98 != 1738U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3814 = UINT16_MAX;
	uint64_t x3815 = 660774452836LLU;
	static volatile int8_t x3816 = 0;
	uint64_t t99 = 2633549443879111162LLU;

	t99 = ((x3813&(x3814-x3815))>>x3816);

	if (t99 != 411LLU) { NG(); } else { ; }
	
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

