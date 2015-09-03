#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 20U;
int16_t x41 = 513;
uint32_t x42 = UINT32_MAX;
uint8_t x77 = 37U;
int8_t x80 = -1;
static int32_t x118 = INT32_MIN;
int32_t x152 = -1;
int8_t x163 = 0;
volatile int64_t x167 = 7LL;
uint16_t x168 = 1026U;
uint8_t x183 = 30U;
volatile int8_t x198 = INT8_MIN;
volatile int16_t x199 = 6;
uint8_t x211 = 0U;
int8_t x317 = 0;
static volatile uint8_t x338 = 37U;
static uint8_t x339 = 5U;
uint16_t x340 = 7334U;
int8_t x372 = INT8_MIN;
uint16_t x394 = 7182U;
int16_t x441 = INT16_MIN;
static int32_t x477 = 1990;
volatile int32_t x480 = -1;
static uint32_t x558 = 1664041749U;
static int16_t x611 = 20;
uint16_t x612 = UINT16_MAX;
int32_t x772 = -6;
int32_t t22 = -432;
volatile int64_t x935 = 30LL;
int32_t t23 = 1;
volatile uint32_t x939 = 2U;
int16_t x953 = INT16_MIN;
int64_t x970 = 153383031610LL;
int64_t x972 = INT64_MAX;
uint8_t x1007 = 0U;
uint32_t x1052 = UINT32_MAX;
volatile int32_t x1072 = 8283445;
volatile int64_t t29 = 89079682LL;
int32_t t31 = 4365358;
int8_t x1174 = INT8_MAX;
int64_t x1320 = 24866550839625LL;
static int64_t t33 = -320540003LL;
int64_t x1353 = 28444LL;
int16_t x1354 = 217;
uint8_t x1370 = UINT8_MAX;
int32_t x1372 = INT32_MIN;
static volatile int64_t x1409 = -1LL;
volatile int8_t x1411 = 9;
volatile uint32_t t37 = 46U;
static volatile int8_t x1540 = INT8_MAX;
volatile int64_t t39 = -1LL;
int16_t x1588 = INT16_MAX;
int16_t x1624 = 15;
volatile uint64_t x1653 = UINT64_MAX;
uint8_t x1667 = 46U;
int16_t x1679 = 0;
int64_t x1681 = INT64_MIN;
int16_t x1738 = INT16_MAX;
int64_t x1801 = INT64_MIN;
int8_t x1804 = -28;
volatile uint64_t t50 = 1563357850284LLU;
uint32_t t51 = 13715130U;
uint64_t x1946 = 1052048642216133187LLU;
uint32_t x1948 = 15756936U;
static uint64_t x2090 = 941999433LLU;
uint8_t x2091 = 14U;
static uint32_t t59 = 6U;
volatile int32_t t60 = -713;
uint8_t x2262 = 23U;
static int8_t x2349 = INT8_MAX;
int64_t x2350 = INT64_MIN;
static uint16_t x2351 = 14U;
uint16_t x2647 = 3U;
static int32_t x2698 = 6;
int16_t x2890 = -1;
int16_t x2979 = 0;
volatile int8_t x3050 = INT8_MIN;
int16_t x3161 = INT16_MAX;
static volatile uint64_t x3274 = UINT64_MAX;
uint8_t x3275 = 3U;
int16_t x3303 = 1;
static int32_t x3346 = INT32_MAX;
static volatile int16_t x3348 = INT16_MIN;
uint16_t x3372 = 2U;
int16_t x3464 = INT16_MAX;
uint64_t x3559 = 0LLU;
volatile int64_t x3560 = -699811492LL;
uint16_t x3749 = UINT16_MAX;
int8_t x3752 = INT8_MIN;
uint8_t x3811 = 50U;
volatile int32_t t95 = -1840757;
int8_t x3828 = INT8_MIN;
volatile int16_t x3956 = -1;


void f0(void) {
	uint16_t x1 = 12U;
	volatile int8_t x2 = INT8_MIN;
	int64_t x4 = INT64_MAX;
	int64_t t0 = 10489567941LL;

	t0 = (((x1&x2)>>x3)%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x43 = 4U;
	uint8_t x44 = 61U;
	volatile uint32_t t1 = 0U;

	t1 = (((x41&x42)>>x43)%x44);

	if (t1 != 32U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x78 = INT64_MIN;
	int32_t x79 = 0;
	volatile int64_t t2 = 25357136925305423LL;

	t2 = (((x77&x78)>>x79)%x80);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x117 = UINT16_MAX;
	static uint16_t x119 = 29U;
	int32_t x120 = -69;
	int32_t t3 = -5;

	t3 = (((x117&x118)>>x119)%x120);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x149 = 137U;
	uint8_t x150 = 1U;
	static uint16_t x151 = 20U;
	int32_t t4 = -181;

	t4 = (((x149&x150)>>x151)%x152);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MIN;
	int8_t x164 = 1;
	int32_t t5 = 0;

	t5 = (((x161&x162)>>x163)%x164);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x165 = UINT32_MAX;
	volatile uint8_t x166 = 6U;
	volatile uint32_t t6 = 485011U;

	t6 = (((x165&x166)>>x167)%x168);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x169 = INT8_MIN;
	volatile int64_t x170 = 935999123LL;
	uint8_t x171 = 26U;
	int32_t x172 = INT32_MAX;
	int64_t t7 = -2641LL;

	t7 = (((x169&x170)>>x171)%x172);

	if (t7 != 13LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x181 = INT32_MIN;
	static uint64_t x182 = 12894351613688859LLU;
	int8_t x184 = -1;
	uint64_t t8 = 246181116041270LLU;

	t8 = (((x181&x182)>>x183)%x184);

	if (t8 != 12008800LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x197 = 20U;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t9 = 69419721;

	t9 = (((x197&x198)>>x199)%x200);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x209 = 45595914LLU;
	static volatile int64_t x210 = 18037629969405LL;
	int32_t x212 = -42;
	static uint64_t t10 = 444507408632LLU;

	t10 = (((x209&x210)>>x211)%x212);

	if (t10 != 42377480LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x318 = INT32_MIN;
	static uint8_t x319 = 21U;
	uint16_t x320 = UINT16_MAX;
	int32_t t11 = -520;

	t11 = (((x317&x318)>>x319)%x320);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x337 = 39U;
	int32_t t12 = -2;

	t12 = (((x337&x338)>>x339)%x340);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x369 = 32U;
	static volatile int8_t x370 = INT8_MIN;
	volatile uint16_t x371 = 25U;
	static int32_t t13 = -15844;

	t13 = (((x369&x370)>>x371)%x372);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x393 = UINT32_MAX;
	uint8_t x395 = 22U;
	int64_t x396 = -203068075661741LL;
	static int64_t t14 = 2285599LL;

	t14 = (((x393&x394)>>x395)%x396);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x442 = INT8_MAX;
	uint8_t x443 = 0U;
	int32_t x444 = INT32_MAX;
	volatile int32_t t15 = -1;

	t15 = (((x441&x442)>>x443)%x444);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x478 = INT8_MAX;
	volatile int8_t x479 = 3;
	int32_t t16 = -6927043;

	t16 = (((x477&x478)>>x479)%x480);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x557 = -1LL;
	uint32_t x559 = 11U;
	uint8_t x560 = 19U;
	int64_t t17 = -447204271732LL;

	t17 = (((x557&x558)>>x559)%x560);

	if (t17 != 4LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x593 = -27LL;
	volatile int64_t x594 = 57689286786052LL;
	int64_t x595 = 21LL;
	int64_t x596 = 759870632564473LL;
	int64_t t18 = -25380694608999LL;

	t18 = (((x593&x594)>>x595)%x596);

	if (t18 != 27508395LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x609 = UINT16_MAX;
	int64_t x610 = INT64_MIN;
	static int64_t t19 = 403LL;

	t19 = (((x609&x610)>>x611)%x612);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x685 = 7255U;
	int8_t x686 = -2;
	volatile int32_t x687 = 1;
	static volatile int8_t x688 = INT8_MIN;
	uint32_t t20 = 980829U;

	t20 = (((x685&x686)>>x687)%x688);

	if (t20 != 3627U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x769 = 10046163LLU;
	int32_t x770 = -1;
	volatile int8_t x771 = 1;
	volatile uint64_t t21 = 248448716710LLU;

	t21 = (((x769&x770)>>x771)%x772);

	if (t21 != 5023081LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x885 = 1;
	int16_t x886 = INT16_MIN;
	int16_t x887 = 0;
	int8_t x888 = -1;

	t22 = (((x885&x886)>>x887)%x888);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x933 = -22597366;
	uint16_t x934 = 10U;
	int32_t x936 = INT32_MIN;

	t23 = (((x933&x934)>>x935)%x936);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x937 = INT8_MAX;
	int64_t x938 = INT64_MIN;
	int32_t x940 = INT32_MIN;
	static volatile int64_t t24 = -32366807548290LL;

	t24 = (((x937&x938)>>x939)%x940);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x954 = 7U;
	uint8_t x955 = 12U;
	int8_t x956 = -1;
	volatile int32_t t25 = 1310527;

	t25 = (((x953&x954)>>x955)%x956);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x969 = INT64_MAX;
	int8_t x971 = 11;
	int64_t t26 = 6110158632LL;

	t26 = (((x969&x970)>>x971)%x972);

	if (t26 != 74894058LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1005 = INT8_MAX;
	int8_t x1006 = 62;
	static uint64_t x1008 = UINT64_MAX;
	static uint64_t t27 = 1627693LLU;

	t27 = (((x1005&x1006)>>x1007)%x1008);

	if (t27 != 62LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1049 = INT8_MAX;
	int64_t x1050 = -1LL;
	int16_t x1051 = 3;
	static int64_t t28 = 183112001LL;

	t28 = (((x1049&x1050)>>x1051)%x1052);

	if (t28 != 15LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1069 = UINT16_MAX;
	int64_t x1070 = INT64_MIN;
	int8_t x1071 = 7;

	t29 = (((x1069&x1070)>>x1071)%x1072);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1101 = UINT16_MAX;
	int8_t x1102 = INT8_MIN;
	volatile uint8_t x1103 = 7U;
	int8_t x1104 = INT8_MAX;
	int32_t t30 = -1953;

	t30 = (((x1101&x1102)>>x1103)%x1104);

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1105 = INT32_MAX;
	int16_t x1106 = -1534;
	int8_t x1107 = 5;
	int16_t x1108 = INT16_MIN;

	t31 = (((x1105&x1106)>>x1107)%x1108);

	if (t31 != 32720) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1173 = INT64_MIN;
	static int16_t x1175 = 7;
	int32_t x1176 = -1;
	static volatile int64_t t32 = -4265302651099LL;

	t32 = (((x1173&x1174)>>x1175)%x1176);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1317 = 32782896639LL;
	static uint32_t x1318 = 52415U;
	uint8_t x1319 = 14U;

	t33 = (((x1317&x1318)>>x1319)%x1320);

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1355 = 7U;
	uint32_t x1356 = 95551069U;
	int64_t t34 = -512203065050237754LL;

	t34 = (((x1353&x1354)>>x1355)%x1356);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1369 = INT16_MIN;
	int16_t x1371 = 9;
	int32_t t35 = -16138;

	t35 = (((x1369&x1370)>>x1371)%x1372);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1410 = 668831210076317543LLU;
	uint32_t x1412 = 982U;
	uint64_t t36 = 989380193005LLU;

	t36 = (((x1409&x1410)>>x1411)%x1412);

	if (t36 != 87LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1417 = 73U;
	volatile int16_t x1418 = 1;
	uint8_t x1419 = 0U;
	uint32_t x1420 = UINT32_MAX;

	t37 = (((x1417&x1418)>>x1419)%x1420);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1537 = 2LL;
	uint8_t x1538 = UINT8_MAX;
	int16_t x1539 = 0;
	int64_t t38 = -32876LL;

	t38 = (((x1537&x1538)>>x1539)%x1540);

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1577 = INT64_MAX;
	volatile int32_t x1578 = INT32_MIN;
	uint8_t x1579 = 51U;
	int8_t x1580 = INT8_MAX;

	t39 = (((x1577&x1578)>>x1579)%x1580);

	if (t39 != 31LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1585 = -5031;
	int8_t x1586 = INT8_MAX;
	static int16_t x1587 = 0;
	int32_t t40 = 1959906;

	t40 = (((x1585&x1586)>>x1587)%x1588);

	if (t40 != 89) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1621 = -1;
	volatile int32_t x1622 = 4085;
	uint8_t x1623 = 22U;
	volatile int32_t t41 = 6030682;

	t41 = (((x1621&x1622)>>x1623)%x1624);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1654 = -539;
	static uint8_t x1655 = 0U;
	int64_t x1656 = INT64_MIN;
	volatile uint64_t t42 = 255138849899784488LLU;

	t42 = (((x1653&x1654)>>x1655)%x1656);

	if (t42 != 9223372036854775269LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x1665 = 34067LL;
	uint32_t x1666 = 60U;
	uint16_t x1668 = UINT16_MAX;
	int64_t t43 = -1LL;

	t43 = (((x1665&x1666)>>x1667)%x1668);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1677 = INT32_MAX;
	uint32_t x1678 = 21U;
	int8_t x1680 = INT8_MIN;
	uint32_t t44 = 4183U;

	t44 = (((x1677&x1678)>>x1679)%x1680);

	if (t44 != 21U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1682 = 105573338538670650LL;
	static uint8_t x1683 = 0U;
	volatile int64_t x1684 = 53667108295398LL;
	int64_t t45 = -2LL;

	t45 = (((x1681&x1682)>>x1683)%x1684);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1701 = 2U;
	volatile uint8_t x1702 = 43U;
	int16_t x1703 = 1;
	uint64_t x1704 = 28115779514621788LLU;
	uint64_t t46 = 1LLU;

	t46 = (((x1701&x1702)>>x1703)%x1704);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1737 = UINT16_MAX;
	int16_t x1739 = 1;
	int32_t x1740 = INT32_MIN;
	volatile int32_t t47 = -131342081;

	t47 = (((x1737&x1738)>>x1739)%x1740);

	if (t47 != 16383) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1749 = INT64_MAX;
	int8_t x1750 = INT8_MIN;
	uint8_t x1751 = 9U;
	static volatile uint32_t x1752 = 2305U;
	int64_t t48 = -1700939619955001LL;

	t48 = (((x1749&x1750)>>x1751)%x1752);

	if (t48 != 2163LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1802 = UINT32_MAX;
	uint8_t x1803 = 2U;
	static int64_t t49 = -3736850239149LL;

	t49 = (((x1801&x1802)>>x1803)%x1804);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x1837 = UINT64_MAX;
	uint8_t x1838 = 0U;
	int8_t x1839 = 6;
	static uint64_t x1840 = 517469374LLU;

	t50 = (((x1837&x1838)>>x1839)%x1840);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1877 = UINT16_MAX;
	uint16_t x1878 = UINT16_MAX;
	int16_t x1879 = 11;
	volatile uint32_t x1880 = 1U;

	t51 = (((x1877&x1878)>>x1879)%x1880);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1913 = INT8_MIN;
	int64_t x1914 = 4419688126LL;
	uint16_t x1915 = 1U;
	int16_t x1916 = 66;
	volatile int64_t t52 = 537548381526LL;

	t52 = (((x1913&x1914)>>x1915)%x1916);

	if (t52 != 22LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1945 = INT16_MIN;
	int16_t x1947 = 19;
	volatile uint64_t t53 = 243736846402LLU;

	t53 = (((x1945&x1946)>>x1947)%x1948);

	if (t53 != 9253655LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2005 = 644U;
	int8_t x2006 = -1;
	static int8_t x2007 = 30;
	static volatile uint32_t x2008 = 5701U;
	uint32_t t54 = 246U;

	t54 = (((x2005&x2006)>>x2007)%x2008);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x2089 = 92689U;
	int16_t x2092 = INT16_MIN;
	volatile uint64_t t55 = 2289893212861307142LLU;

	t55 = (((x2089&x2090)>>x2091)%x2092);

	if (t55 != 5LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2101 = -1;
	uint32_t x2102 = UINT32_MAX;
	volatile int8_t x2103 = 0;
	int16_t x2104 = INT16_MAX;
	uint32_t t56 = 103523U;

	t56 = (((x2101&x2102)>>x2103)%x2104);

	if (t56 != 3U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2169 = 1063U;
	uint8_t x2170 = 20U;
	volatile uint32_t x2171 = 0U;
	volatile int8_t x2172 = -1;
	volatile uint32_t t57 = 2497901U;

	t57 = (((x2169&x2170)>>x2171)%x2172);

	if (t57 != 4U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2173 = INT8_MIN;
	uint64_t x2174 = 251010699970377775LLU;
	uint8_t x2175 = 12U;
	int64_t x2176 = -259277938366567125LL;
	uint64_t t58 = 18371219439678876LLU;

	t58 = (((x2173&x2174)>>x2175)%x2176);

	if (t58 != 61281909172455LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x2181 = UINT32_MAX;
	uint8_t x2182 = 1U;
	int16_t x2183 = 0;
	static uint16_t x2184 = UINT16_MAX;

	t59 = (((x2181&x2182)>>x2183)%x2184);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2237 = INT8_MIN;
	static uint16_t x2238 = UINT16_MAX;
	volatile int8_t x2239 = 4;
	volatile int8_t x2240 = -1;

	t60 = (((x2237&x2238)>>x2239)%x2240);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2261 = -1;
	volatile uint8_t x2263 = 21U;
	volatile int64_t x2264 = INT64_MIN;
	volatile int64_t t61 = -8921607472LL;

	t61 = (((x2261&x2262)>>x2263)%x2264);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2352 = INT64_MAX;
	static int64_t t62 = 1596773LL;

	t62 = (((x2349&x2350)>>x2351)%x2352);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x2449 = 0U;
	uint64_t x2450 = 50819873103857206LLU;
	static uint16_t x2451 = 6U;
	int64_t x2452 = INT64_MAX;
	uint64_t t63 = 930LLU;

	t63 = (((x2449&x2450)>>x2451)%x2452);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2481 = 19891U;
	int64_t x2482 = 172657935620500LL;
	uint16_t x2483 = 63U;
	int32_t x2484 = INT32_MIN;
	volatile int64_t t64 = -305330615083092LL;

	t64 = (((x2481&x2482)>>x2483)%x2484);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2601 = 1U;
	static int64_t x2602 = 27LL;
	int32_t x2603 = 1;
	int32_t x2604 = 1698252;
	volatile int64_t t65 = 38933052641803LL;

	t65 = (((x2601&x2602)>>x2603)%x2604);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x2617 = 695192U;
	int32_t x2618 = -1;
	uint8_t x2619 = 0U;
	int32_t x2620 = INT32_MAX;
	uint32_t t66 = 71U;

	t66 = (((x2617&x2618)>>x2619)%x2620);

	if (t66 != 695192U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2645 = INT8_MAX;
	int8_t x2646 = 6;
	int16_t x2648 = 2;
	static int32_t t67 = -941;

	t67 = (((x2645&x2646)>>x2647)%x2648);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x2693 = -3355;
	uint8_t x2694 = UINT8_MAX;
	int32_t x2695 = 0;
	uint8_t x2696 = 81U;
	volatile int32_t t68 = -3814;

	t68 = (((x2693&x2694)>>x2695)%x2696);

	if (t68 != 67) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2697 = 80U;
	uint8_t x2699 = 1U;
	uint16_t x2700 = UINT16_MAX;
	int32_t t69 = 25;

	t69 = (((x2697&x2698)>>x2699)%x2700);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2853 = UINT16_MAX;
	volatile uint64_t x2854 = 1502407LLU;
	int8_t x2855 = 5;
	uint8_t x2856 = UINT8_MAX;
	uint64_t t70 = 57397LLU;

	t70 = (((x2853&x2854)>>x2855)%x2856);

	if (t70 != 109LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2889 = INT16_MAX;
	int8_t x2891 = 3;
	int8_t x2892 = -1;
	int32_t t71 = 1801569;

	t71 = (((x2889&x2890)>>x2891)%x2892);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2917 = 2418266LLU;
	static int32_t x2918 = -1;
	uint32_t x2919 = 1U;
	volatile int16_t x2920 = INT16_MAX;
	volatile uint64_t t72 = 114LLU;

	t72 = (((x2917&x2918)>>x2919)%x2920);

	if (t72 != 29521LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x2973 = INT8_MIN;
	volatile uint32_t x2974 = 205905253U;
	volatile int8_t x2975 = 1;
	volatile int16_t x2976 = 43;
	volatile uint32_t t73 = 91984600U;

	t73 = (((x2973&x2974)>>x2975)%x2976);

	if (t73 != 41U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2977 = -1017;
	volatile int16_t x2978 = INT16_MAX;
	uint16_t x2980 = 390U;
	static volatile int32_t t74 = 1503122;

	t74 = (((x2977&x2978)>>x2979)%x2980);

	if (t74 != 161) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x3049 = 6174LL;
	volatile int8_t x3051 = 0;
	int64_t x3052 = 8312081659780LL;
	volatile int64_t t75 = -3326731LL;

	t75 = (((x3049&x3050)>>x3051)%x3052);

	if (t75 != 6144LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3073 = UINT8_MAX;
	int16_t x3074 = INT16_MIN;
	int8_t x3075 = 13;
	int8_t x3076 = INT8_MAX;
	int32_t t76 = 0;

	t76 = (((x3073&x3074)>>x3075)%x3076);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3145 = INT64_MAX;
	int8_t x3146 = INT8_MIN;
	volatile uint16_t x3147 = 1U;
	static volatile uint16_t x3148 = 1U;
	int64_t t77 = -15LL;

	t77 = (((x3145&x3146)>>x3147)%x3148);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3149 = 30183;
	volatile uint16_t x3150 = 7245U;
	uint8_t x3151 = 5U;
	static uint16_t x3152 = 2U;
	static int32_t t78 = 963;

	t78 = (((x3149&x3150)>>x3151)%x3152);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3162 = INT32_MIN;
	uint32_t x3163 = 1U;
	int64_t x3164 = INT64_MAX;
	static volatile int64_t t79 = 48441400LL;

	t79 = (((x3161&x3162)>>x3163)%x3164);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3273 = INT8_MAX;
	int32_t x3276 = INT32_MIN;
	uint64_t t80 = 73714LLU;

	t80 = (((x3273&x3274)>>x3275)%x3276);

	if (t80 != 15LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3301 = INT8_MAX;
	uint64_t x3302 = 724177759647171LLU;
	uint64_t x3304 = 132326013946LLU;
	static uint64_t t81 = 63313231751481LLU;

	t81 = (((x3301&x3302)>>x3303)%x3304);

	if (t81 != 33LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3325 = UINT8_MAX;
	int16_t x3326 = -1;
	static int32_t x3327 = 1;
	int16_t x3328 = -3363;
	int32_t t82 = 758756;

	t82 = (((x3325&x3326)>>x3327)%x3328);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3345 = 13U;
	static uint8_t x3347 = 23U;
	static int32_t t83 = 840;

	t83 = (((x3345&x3346)>>x3347)%x3348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x3369 = 1755533626U;
	static volatile uint8_t x3370 = 98U;
	static uint8_t x3371 = 0U;
	uint32_t t84 = 618669U;

	t84 = (((x3369&x3370)>>x3371)%x3372);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3429 = 47254LLU;
	int64_t x3430 = INT64_MIN;
	uint16_t x3431 = 48U;
	uint32_t x3432 = 3U;
	static uint64_t t85 = 8LLU;

	t85 = (((x3429&x3430)>>x3431)%x3432);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x3461 = INT32_MAX;
	int64_t x3462 = INT64_MIN;
	static int32_t x3463 = 1;
	volatile int64_t t86 = 95568532LL;

	t86 = (((x3461&x3462)>>x3463)%x3464);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3465 = -1;
	volatile uint64_t x3466 = 1030319536632LLU;
	uint16_t x3467 = 32U;
	int16_t x3468 = INT16_MAX;
	volatile uint64_t t87 = 7925312LLU;

	t87 = (((x3465&x3466)>>x3467)%x3468);

	if (t87 != 239LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3469 = INT8_MAX;
	int64_t x3470 = INT64_MAX;
	uint64_t x3471 = 1LLU;
	volatile int64_t x3472 = INT64_MIN;
	volatile int64_t t88 = 56320471716533LL;

	t88 = (((x3469&x3470)>>x3471)%x3472);

	if (t88 != 63LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3557 = 54U;
	int16_t x3558 = INT16_MIN;
	static int64_t t89 = -44664908084LL;

	t89 = (((x3557&x3558)>>x3559)%x3560);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x3565 = UINT32_MAX;
	static volatile int16_t x3566 = INT16_MIN;
	volatile int8_t x3567 = 2;
	volatile int16_t x3568 = 222;
	uint32_t t90 = 162U;

	t90 = (((x3565&x3566)>>x3567)%x3568);

	if (t90 != 218U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x3717 = 7U;
	int16_t x3718 = 320;
	uint8_t x3719 = 7U;
	volatile int16_t x3720 = -1;
	int32_t t91 = -16;

	t91 = (((x3717&x3718)>>x3719)%x3720);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3729 = INT16_MAX;
	int32_t x3730 = INT32_MAX;
	uint16_t x3731 = 0U;
	uint8_t x3732 = UINT8_MAX;
	volatile int32_t t92 = -65193;

	t92 = (((x3729&x3730)>>x3731)%x3732);

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3750 = -685456LL;
	int8_t x3751 = 4;
	static int64_t t93 = 334824708152994LL;

	t93 = (((x3749&x3750)>>x3751)%x3752);

	if (t93 != 39LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x3809 = 9U;
	static int64_t x3810 = -2260532535LL;
	int32_t x3812 = INT32_MIN;
	static volatile int64_t t94 = -386668547LL;

	t94 = (((x3809&x3810)>>x3811)%x3812);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3813 = 4U;
	int16_t x3814 = 1;
	static int8_t x3815 = 13;
	volatile uint16_t x3816 = UINT16_MAX;

	t95 = (((x3813&x3814)>>x3815)%x3816);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3825 = UINT32_MAX;
	int64_t x3826 = -1LL;
	static volatile uint16_t x3827 = 6U;
	static int64_t t96 = 2398361LL;

	t96 = (((x3825&x3826)>>x3827)%x3828);

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3833 = 5821;
	volatile int32_t x3834 = INT32_MAX;
	uint16_t x3835 = 13U;
	int64_t x3836 = 1LL;
	static int64_t t97 = 101826170736880994LL;

	t97 = (((x3833&x3834)>>x3835)%x3836);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3841 = 1LLU;
	int64_t x3842 = INT64_MIN;
	static uint16_t x3843 = 38U;
	int32_t x3844 = -1;
	volatile uint64_t t98 = 6591LLU;

	t98 = (((x3841&x3842)>>x3843)%x3844);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3953 = UINT8_MAX;
	volatile int64_t x3954 = 0LL;
	static volatile uint64_t x3955 = 46LLU;
	static volatile int64_t t99 = 13264LL;

	t99 = (((x3953&x3954)>>x3955)%x3956);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

