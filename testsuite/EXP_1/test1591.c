#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x29 = UINT8_MAX;
uint32_t x31 = 27U;
int8_t x56 = -1;
uint32_t x99 = 3U;
int16_t x149 = 184;
volatile uint8_t x151 = 12U;
int8_t x165 = INT8_MIN;
int32_t t5 = 24;
uint64_t x195 = 18LLU;
uint16_t x265 = UINT16_MAX;
volatile uint16_t x267 = 6U;
int32_t x268 = -1;
volatile int32_t t8 = 8149;
static volatile int32_t t9 = 162;
uint8_t x286 = 10U;
int32_t t11 = -118388959;
volatile int32_t t14 = 3;
static uint8_t x539 = 1U;
static int8_t x596 = -1;
uint16_t x665 = UINT16_MAX;
int16_t x666 = 1;
int32_t x668 = INT32_MAX;
volatile uint32_t x692 = 13U;
uint32_t t22 = 426U;
int8_t x720 = INT8_MIN;
uint8_t x907 = 0U;
int32_t x922 = INT32_MIN;
int8_t x924 = INT8_MIN;
static volatile int32_t t25 = -24;
int64_t x1104 = 1365348423180713LL;
static volatile int64_t t30 = 4488692LL;
volatile int64_t x1228 = INT64_MIN;
int32_t t33 = -12;
int16_t x1324 = -1;
volatile int64_t t35 = 110LL;
int64_t x1363 = 0LL;
int8_t x1364 = INT8_MIN;
int32_t t36 = 12108391;
static uint16_t x1472 = UINT16_MAX;
int32_t x1483 = 25;
int8_t x1495 = 6;
volatile int32_t t42 = -1;
uint32_t x1506 = UINT32_MAX;
uint16_t x1507 = 2U;
int16_t x1508 = -54;
volatile int8_t x1603 = 1;
uint64_t x1609 = 4386448328369303LLU;
uint8_t x1611 = 4U;
volatile int64_t t46 = -92660LL;
static int8_t x1632 = -1;
int32_t t47 = 0;
int8_t x1758 = -7;
static int16_t x1760 = -1;
int32_t t50 = 748320;
uint8_t x1773 = UINT8_MAX;
uint8_t x1775 = 18U;
uint32_t t51 = 93U;
uint32_t x1855 = 0U;
static uint64_t x1905 = 16929649042400LLU;
uint32_t x1927 = 0U;
static int32_t x1944 = -1;
volatile uint32_t x2001 = 777692594U;
int64_t t59 = -284LL;
volatile uint8_t x2094 = 2U;
int64_t x2164 = INT64_MIN;
static uint8_t x2263 = 6U;
int8_t x2272 = -1;
volatile uint8_t x2295 = 6U;
uint16_t x2308 = 329U;
int32_t t67 = 0;
static int8_t x2361 = INT8_MAX;
static volatile int32_t t69 = 906811;
uint64_t x2558 = 35657356137LLU;
static int16_t x2559 = 2;
int64_t x2590 = INT64_MIN;
int16_t x2773 = INT16_MAX;
static uint8_t x2775 = 3U;
volatile int64_t t74 = 14LL;
uint8_t x2815 = 0U;
volatile int32_t t78 = -12432;
static volatile int16_t x3053 = -15317;
uint32_t x3056 = UINT32_MAX;
uint8_t x3063 = 15U;
int32_t x3173 = INT32_MAX;
int16_t x3176 = INT16_MIN;
int8_t x3383 = 3;
int64_t x3384 = INT64_MAX;
int64_t t87 = 587621493325LL;
int16_t x3521 = INT16_MAX;
volatile uint16_t x3525 = UINT16_MAX;
static uint16_t x3666 = 5U;
volatile int8_t x3667 = 1;
int32_t t93 = 1;
int8_t x3798 = 31;
int8_t x3815 = 1;
volatile uint64_t t96 = 1785776390383380LLU;
uint64_t x3925 = 3772480232365LLU;
volatile int32_t x3992 = -1;
volatile int32_t t99 = 2;


void f0(void) {
	static uint16_t x30 = UINT16_MAX;
	static int64_t x32 = -1LL;
	volatile int64_t t0 = -1LL;

	t0 = (((x29<=x30)<<x31)%x32);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x53 = -696776;
	int64_t x54 = INT64_MAX;
	uint32_t x55 = 0U;
	int32_t t1 = 592;

	t1 = (((x53<=x54)<<x55)%x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x57 = -3;
	uint32_t x58 = 2081005239U;
	uint32_t x59 = 3U;
	int8_t x60 = INT8_MIN;
	volatile int32_t t2 = 225354594;

	t2 = (((x57<=x58)<<x59)%x60);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x97 = 0U;
	int64_t x98 = INT64_MIN;
	static int64_t x100 = -59783942548LL;
	volatile int64_t t3 = -12083295LL;

	t3 = (((x97<=x98)<<x99)%x100);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x150 = INT32_MIN;
	volatile int64_t x152 = INT64_MIN;
	int64_t t4 = -277593652152414621LL;

	t4 = (((x149<=x150)<<x151)%x152);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x166 = INT8_MIN;
	int8_t x167 = 1;
	int8_t x168 = 37;

	t5 = (((x165<=x166)<<x167)%x168);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x193 = INT16_MAX;
	int32_t x194 = -1;
	uint16_t x196 = 2U;
	static volatile int32_t t6 = 0;

	t6 = (((x193<=x194)<<x195)%x196);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x266 = 1U;
	volatile int32_t t7 = -18556815;

	t7 = (((x265<=x266)<<x267)%x268);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int16_t x270 = -1;
	uint8_t x271 = 4U;
	static int32_t x272 = 29842;

	t8 = (((x269<=x270)<<x271)%x272);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x277 = -1;
	static uint32_t x278 = 1741014U;
	int8_t x279 = 6;
	static uint16_t x280 = 28835U;

	t9 = (((x277<=x278)<<x279)%x280);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x285 = INT64_MIN;
	uint8_t x287 = 0U;
	static uint32_t x288 = 497U;
	uint32_t t10 = 51U;

	t10 = (((x285<=x286)<<x287)%x288);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x329 = -1;
	volatile int64_t x330 = INT64_MIN;
	uint8_t x331 = 10U;
	volatile int16_t x332 = -1;

	t11 = (((x329<=x330)<<x331)%x332);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x393 = INT64_MIN;
	int64_t x394 = -1LL;
	uint32_t x395 = 1U;
	uint16_t x396 = 12413U;
	int32_t t12 = -165990;

	t12 = (((x393<=x394)<<x395)%x396);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x401 = INT32_MIN;
	int16_t x402 = INT16_MIN;
	int8_t x403 = 23;
	int32_t x404 = INT32_MIN;
	static volatile int32_t t13 = 1673;

	t13 = (((x401<=x402)<<x403)%x404);

	if (t13 != 8388608) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x437 = 2U;
	uint64_t x438 = UINT64_MAX;
	uint16_t x439 = 0U;
	volatile int32_t x440 = INT32_MIN;

	t14 = (((x437<=x438)<<x439)%x440);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x461 = UINT32_MAX;
	static int16_t x462 = INT16_MIN;
	uint8_t x463 = 11U;
	int32_t x464 = -1;
	volatile int32_t t15 = 30567;

	t15 = (((x461<=x462)<<x463)%x464);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x537 = UINT8_MAX;
	uint8_t x538 = 15U;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t16 = -8;

	t16 = (((x537<=x538)<<x539)%x540);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x557 = UINT64_MAX;
	int16_t x558 = INT16_MAX;
	static int16_t x559 = 26;
	volatile uint32_t x560 = 130156U;
	static volatile uint32_t t17 = 10U;

	t17 = (((x557<=x558)<<x559)%x560);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x593 = INT8_MIN;
	int64_t x594 = INT64_MAX;
	volatile uint16_t x595 = 2U;
	volatile int32_t t18 = -1;

	t18 = (((x593<=x594)<<x595)%x596);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x667 = 0U;
	static volatile int32_t t19 = 0;

	t19 = (((x665<=x666)<<x667)%x668);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x673 = INT16_MIN;
	int8_t x674 = 2;
	int16_t x675 = 3;
	int32_t x676 = -3278358;
	int32_t t20 = -1;

	t20 = (((x673<=x674)<<x675)%x676);

	if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x681 = 3518U;
	uint64_t x682 = 11037241278LLU;
	static volatile int8_t x683 = 0;
	int32_t x684 = INT32_MIN;
	static int32_t t21 = 0;

	t21 = (((x681<=x682)<<x683)%x684);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x689 = INT16_MIN;
	int16_t x690 = 1;
	int64_t x691 = 1LL;

	t22 = (((x689<=x690)<<x691)%x692);

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x717 = INT8_MIN;
	volatile int64_t x718 = INT64_MIN;
	uint8_t x719 = 1U;
	static int32_t t23 = 1417253;

	t23 = (((x717<=x718)<<x719)%x720);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x905 = 0;
	int64_t x906 = INT64_MAX;
	int16_t x908 = -1;
	volatile int32_t t24 = 186388;

	t24 = (((x905<=x906)<<x907)%x908);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x921 = -9542;
	int8_t x923 = 13;

	t25 = (((x921<=x922)<<x923)%x924);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1085 = -1LL;
	int32_t x1086 = INT32_MIN;
	uint64_t x1087 = 16LLU;
	uint16_t x1088 = 17789U;
	volatile int32_t t26 = 523;

	t26 = (((x1085<=x1086)<<x1087)%x1088);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1101 = -15;
	volatile uint8_t x1102 = 31U;
	volatile int8_t x1103 = 0;
	volatile int64_t t27 = 3286222LL;

	t27 = (((x1101<=x1102)<<x1103)%x1104);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1113 = 2176183U;
	uint32_t x1114 = UINT32_MAX;
	int16_t x1115 = 1;
	static int32_t x1116 = INT32_MAX;
	int32_t t28 = 0;

	t28 = (((x1113<=x1114)<<x1115)%x1116);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1137 = 31U;
	static int64_t x1138 = 5209522LL;
	int32_t x1139 = 0;
	int16_t x1140 = -115;
	volatile int32_t t29 = 233764;

	t29 = (((x1137<=x1138)<<x1139)%x1140);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1141 = 4U;
	static uint8_t x1142 = 80U;
	int8_t x1143 = 30;
	volatile int64_t x1144 = -1LL;

	t30 = (((x1141<=x1142)<<x1143)%x1144);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1161 = INT16_MIN;
	int16_t x1162 = INT16_MIN;
	uint8_t x1163 = 4U;
	uint8_t x1164 = 15U;
	int32_t t31 = 896747;

	t31 = (((x1161<=x1162)<<x1163)%x1164);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x1225 = -1;
	int8_t x1226 = 0;
	int16_t x1227 = 0;
	int64_t t32 = 0LL;

	t32 = (((x1225<=x1226)<<x1227)%x1228);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1297 = INT64_MIN;
	uint16_t x1298 = 11071U;
	static volatile uint16_t x1299 = 7U;
	volatile int8_t x1300 = 1;

	t33 = (((x1297<=x1298)<<x1299)%x1300);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1321 = -1;
	uint16_t x1322 = 2U;
	int16_t x1323 = 4;
	int32_t t34 = 117733;

	t34 = (((x1321<=x1322)<<x1323)%x1324);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1345 = INT8_MIN;
	int64_t x1346 = INT64_MIN;
	int8_t x1347 = 0;
	int64_t x1348 = -1LL;

	t35 = (((x1345<=x1346)<<x1347)%x1348);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1361 = INT32_MIN;
	uint32_t x1362 = 185U;

	t36 = (((x1361<=x1362)<<x1363)%x1364);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1385 = 0;
	int64_t x1386 = INT64_MIN;
	int8_t x1387 = 0;
	int16_t x1388 = INT16_MIN;
	static int32_t t37 = -61610;

	t37 = (((x1385<=x1386)<<x1387)%x1388);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1393 = 78U;
	volatile int64_t x1394 = INT64_MIN;
	int8_t x1395 = 6;
	uint8_t x1396 = UINT8_MAX;
	static volatile int32_t t38 = 101003615;

	t38 = (((x1393<=x1394)<<x1395)%x1396);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1469 = 529;
	int8_t x1470 = INT8_MAX;
	static int8_t x1471 = 21;
	int32_t t39 = -870;

	t39 = (((x1469<=x1470)<<x1471)%x1472);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1481 = INT16_MIN;
	int32_t x1482 = INT32_MIN;
	int16_t x1484 = INT16_MAX;
	int32_t t40 = 0;

	t40 = (((x1481<=x1482)<<x1483)%x1484);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1493 = INT32_MIN;
	int16_t x1494 = INT16_MIN;
	int32_t x1496 = -124441;
	volatile int32_t t41 = -177624;

	t41 = (((x1493<=x1494)<<x1495)%x1496);

	if (t41 != 64) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1501 = INT64_MAX;
	int32_t x1502 = INT32_MIN;
	static int8_t x1503 = 8;
	int16_t x1504 = INT16_MIN;

	t42 = (((x1501<=x1502)<<x1503)%x1504);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1505 = -1;
	int32_t t43 = -12938;

	t43 = (((x1505<=x1506)<<x1507)%x1508);

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1601 = 66U;
	static volatile uint16_t x1602 = 840U;
	static int64_t x1604 = 232LL;
	volatile int64_t t44 = -536182480841831LL;

	t44 = (((x1601<=x1602)<<x1603)%x1604);

	if (t44 != 2LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1610 = INT16_MAX;
	uint32_t x1612 = 403U;
	volatile uint32_t t45 = 42815U;

	t45 = (((x1609<=x1610)<<x1611)%x1612);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1613 = INT64_MIN;
	int64_t x1614 = -1LL;
	uint64_t x1615 = 1LLU;
	int64_t x1616 = INT64_MIN;

	t46 = (((x1613<=x1614)<<x1615)%x1616);

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1629 = 30524863LLU;
	int64_t x1630 = INT64_MIN;
	uint32_t x1631 = 1U;

	t47 = (((x1629<=x1630)<<x1631)%x1632);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1689 = INT32_MIN;
	int64_t x1690 = INT64_MAX;
	static int16_t x1691 = 1;
	int16_t x1692 = -1;
	volatile int32_t t48 = 1671892;

	t48 = (((x1689<=x1690)<<x1691)%x1692);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1757 = INT16_MIN;
	uint8_t x1759 = 0U;
	static int32_t t49 = -1;

	t49 = (((x1757<=x1758)<<x1759)%x1760);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1769 = INT64_MAX;
	static uint16_t x1770 = UINT16_MAX;
	volatile int64_t x1771 = 15LL;
	int16_t x1772 = INT16_MIN;

	t50 = (((x1769<=x1770)<<x1771)%x1772);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1774 = -1LL;
	volatile uint32_t x1776 = UINT32_MAX;

	t51 = (((x1773<=x1774)<<x1775)%x1776);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1829 = -1LL;
	int16_t x1830 = INT16_MIN;
	static volatile uint8_t x1831 = 7U;
	static int64_t x1832 = -788357346LL;
	volatile int64_t t52 = -2182828693LL;

	t52 = (((x1829<=x1830)<<x1831)%x1832);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1853 = -1;
	int8_t x1854 = INT8_MIN;
	uint16_t x1856 = UINT16_MAX;
	volatile int32_t t53 = 50;

	t53 = (((x1853<=x1854)<<x1855)%x1856);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1869 = -12;
	int32_t x1870 = INT32_MIN;
	int16_t x1871 = 0;
	int32_t x1872 = -1;
	static volatile int32_t t54 = -1653;

	t54 = (((x1869<=x1870)<<x1871)%x1872);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1906 = UINT32_MAX;
	volatile uint8_t x1907 = 25U;
	static int16_t x1908 = INT16_MIN;
	static volatile int32_t t55 = -3054881;

	t55 = (((x1905<=x1906)<<x1907)%x1908);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1925 = INT8_MAX;
	uint8_t x1926 = UINT8_MAX;
	static int64_t x1928 = -1LL;
	volatile int64_t t56 = 2318722252LL;

	t56 = (((x1925<=x1926)<<x1927)%x1928);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x1937 = -6;
	static int8_t x1938 = INT8_MIN;
	volatile uint8_t x1939 = 30U;
	uint8_t x1940 = UINT8_MAX;
	int32_t t57 = -63;

	t57 = (((x1937<=x1938)<<x1939)%x1940);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1941 = 3U;
	uint8_t x1942 = 1U;
	int8_t x1943 = 13;
	int32_t t58 = 67335865;

	t58 = (((x1941<=x1942)<<x1943)%x1944);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2002 = 9U;
	uint16_t x2003 = 2U;
	int64_t x2004 = INT64_MAX;

	t59 = (((x2001<=x2002)<<x2003)%x2004);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2025 = 9970;
	uint8_t x2026 = 22U;
	static uint16_t x2027 = 15U;
	int32_t x2028 = INT32_MAX;
	int32_t t60 = -6750697;

	t60 = (((x2025<=x2026)<<x2027)%x2028);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2033 = -7;
	int8_t x2034 = INT8_MAX;
	int8_t x2035 = 0;
	int32_t x2036 = INT32_MIN;
	int32_t t61 = 193180865;

	t61 = (((x2033<=x2034)<<x2035)%x2036);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2093 = 4U;
	static uint32_t x2095 = 1U;
	static uint16_t x2096 = UINT16_MAX;
	volatile int32_t t62 = 851785;

	t62 = (((x2093<=x2094)<<x2095)%x2096);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2161 = INT32_MIN;
	int64_t x2162 = -3509097809722LL;
	uint8_t x2163 = 0U;
	int64_t t63 = -27LL;

	t63 = (((x2161<=x2162)<<x2163)%x2164);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2261 = 21U;
	static uint16_t x2262 = 11U;
	uint32_t x2264 = UINT32_MAX;
	uint32_t t64 = 628U;

	t64 = (((x2261<=x2262)<<x2263)%x2264);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x2269 = -846;
	volatile uint16_t x2270 = 3U;
	volatile int8_t x2271 = 28;
	volatile int32_t t65 = -4135859;

	t65 = (((x2269<=x2270)<<x2271)%x2272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2293 = -1LL;
	int16_t x2294 = INT16_MAX;
	static uint64_t x2296 = UINT64_MAX;
	uint64_t t66 = 309501416226405LLU;

	t66 = (((x2293<=x2294)<<x2295)%x2296);

	if (t66 != 64LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x2305 = INT16_MIN;
	static int8_t x2306 = 2;
	int64_t x2307 = 1LL;

	t67 = (((x2305<=x2306)<<x2307)%x2308);

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2362 = 7;
	uint64_t x2363 = 2LLU;
	uint8_t x2364 = 1U;
	volatile int32_t t68 = -293576015;

	t68 = (((x2361<=x2362)<<x2363)%x2364);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2505 = -1;
	int32_t x2506 = 83214;
	uint8_t x2507 = 12U;
	static volatile int32_t x2508 = 265;

	t69 = (((x2505<=x2506)<<x2507)%x2508);

	if (t69 != 121) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x2557 = INT64_MIN;
	static int16_t x2560 = -241;
	int32_t t70 = 2803603;

	t70 = (((x2557<=x2558)<<x2559)%x2560);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2565 = 24U;
	uint64_t x2566 = UINT64_MAX;
	volatile uint16_t x2567 = 0U;
	int16_t x2568 = 70;
	int32_t t71 = 498400;

	t71 = (((x2565<=x2566)<<x2567)%x2568);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x2589 = UINT32_MAX;
	int8_t x2591 = 1;
	uint8_t x2592 = UINT8_MAX;
	static volatile int32_t t72 = 4643;

	t72 = (((x2589<=x2590)<<x2591)%x2592);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x2713 = 3156U;
	int8_t x2714 = INT8_MAX;
	uint16_t x2715 = 1U;
	static uint64_t x2716 = 6259484009LLU;
	volatile uint64_t t73 = 2989822648347219277LLU;

	t73 = (((x2713<=x2714)<<x2715)%x2716);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2774 = INT64_MAX;
	int64_t x2776 = -1LL;

	t74 = (((x2773<=x2774)<<x2775)%x2776);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2813 = -1;
	uint64_t x2814 = 1034369422564LLU;
	static uint32_t x2816 = UINT32_MAX;
	uint32_t t75 = 351291380U;

	t75 = (((x2813<=x2814)<<x2815)%x2816);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2869 = UINT32_MAX;
	int16_t x2870 = -1;
	volatile uint64_t x2871 = 0LLU;
	int64_t x2872 = INT64_MIN;
	static volatile int64_t t76 = -1271211310414LL;

	t76 = (((x2869<=x2870)<<x2871)%x2872);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2953 = -1;
	uint16_t x2954 = 10U;
	uint8_t x2955 = 8U;
	uint8_t x2956 = 71U;
	static int32_t t77 = 19;

	t77 = (((x2953<=x2954)<<x2955)%x2956);

	if (t77 != 43) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x2981 = UINT8_MAX;
	volatile int32_t x2982 = -2941;
	int8_t x2983 = 6;
	volatile int8_t x2984 = -1;

	t78 = (((x2981<=x2982)<<x2983)%x2984);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3029 = 92U;
	uint32_t x3030 = 0U;
	volatile uint16_t x3031 = 1U;
	int8_t x3032 = -7;
	static int32_t t79 = -27958;

	t79 = (((x3029<=x3030)<<x3031)%x3032);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3054 = INT8_MIN;
	int8_t x3055 = 30;
	volatile uint32_t t80 = 119766U;

	t80 = (((x3053<=x3054)<<x3055)%x3056);

	if (t80 != 1073741824U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3061 = 3LLU;
	volatile uint32_t x3062 = UINT32_MAX;
	int16_t x3064 = INT16_MIN;
	volatile int32_t t81 = 432;

	t81 = (((x3061<=x3062)<<x3063)%x3064);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x3069 = -1LL;
	static int32_t x3070 = INT32_MIN;
	static volatile int8_t x3071 = 3;
	int32_t x3072 = INT32_MAX;
	volatile int32_t t82 = 1;

	t82 = (((x3069<=x3070)<<x3071)%x3072);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x3121 = -4LL;
	volatile int8_t x3122 = INT8_MIN;
	int8_t x3123 = 1;
	volatile int64_t x3124 = -7441LL;
	volatile int64_t t83 = 513407331LL;

	t83 = (((x3121<=x3122)<<x3123)%x3124);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3161 = -1;
	uint64_t x3162 = 3622222126LLU;
	volatile uint16_t x3163 = 12U;
	volatile uint8_t x3164 = 4U;
	int32_t t84 = 278570;

	t84 = (((x3161<=x3162)<<x3163)%x3164);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x3174 = -1LL;
	int8_t x3175 = 0;
	int32_t t85 = -178;

	t85 = (((x3173<=x3174)<<x3175)%x3176);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x3337 = -26;
	int8_t x3338 = -1;
	uint8_t x3339 = 17U;
	int16_t x3340 = INT16_MAX;
	int32_t t86 = 276;

	t86 = (((x3337<=x3338)<<x3339)%x3340);

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x3381 = INT64_MIN;
	int16_t x3382 = 12171;

	t87 = (((x3381<=x3382)<<x3383)%x3384);

	if (t87 != 8LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x3449 = 51915187;
	int32_t x3450 = INT32_MAX;
	uint8_t x3451 = 1U;
	int16_t x3452 = INT16_MIN;
	static int32_t t88 = 0;

	t88 = (((x3449<=x3450)<<x3451)%x3452);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3522 = INT32_MIN;
	int8_t x3523 = 1;
	int32_t x3524 = -1;
	volatile int32_t t89 = -1972;

	t89 = (((x3521<=x3522)<<x3523)%x3524);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x3526 = INT32_MIN;
	int8_t x3527 = 0;
	int8_t x3528 = INT8_MAX;
	volatile int32_t t90 = -95;

	t90 = (((x3525<=x3526)<<x3527)%x3528);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3649 = 22260204LL;
	int32_t x3650 = -23;
	uint64_t x3651 = 7LLU;
	static int8_t x3652 = INT8_MIN;
	static volatile int32_t t91 = -126;

	t91 = (((x3649<=x3650)<<x3651)%x3652);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3665 = UINT32_MAX;
	static uint64_t x3668 = 249505718013LLU;
	volatile uint64_t t92 = 959055243356LLU;

	t92 = (((x3665<=x3666)<<x3667)%x3668);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3717 = INT8_MAX;
	static int32_t x3718 = -31780437;
	static uint8_t x3719 = 5U;
	int8_t x3720 = -1;

	t93 = (((x3717<=x3718)<<x3719)%x3720);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3769 = INT8_MIN;
	uint8_t x3770 = 108U;
	uint16_t x3771 = 30U;
	int64_t x3772 = INT64_MAX;
	volatile int64_t t94 = 284578129569LL;

	t94 = (((x3769<=x3770)<<x3771)%x3772);

	if (t94 != 1073741824LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3797 = 55;
	uint16_t x3799 = 1U;
	uint16_t x3800 = 26620U;
	static volatile int32_t t95 = 34;

	t95 = (((x3797<=x3798)<<x3799)%x3800);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3813 = INT64_MAX;
	static int64_t x3814 = INT64_MIN;
	static uint64_t x3816 = 1860678425LLU;

	t96 = (((x3813<=x3814)<<x3815)%x3816);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3853 = INT8_MIN;
	int8_t x3854 = INT8_MIN;
	int8_t x3855 = 0;
	int32_t x3856 = INT32_MIN;
	volatile int32_t t97 = 8106;

	t97 = (((x3853<=x3854)<<x3855)%x3856);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3926 = UINT16_MAX;
	uint8_t x3927 = 1U;
	volatile int64_t x3928 = INT64_MIN;
	int64_t t98 = 2302222562812763LL;

	t98 = (((x3925<=x3926)<<x3927)%x3928);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3989 = 930066556689053LLU;
	int8_t x3990 = INT8_MIN;
	int16_t x3991 = 11;

	t99 = (((x3989<=x3990)<<x3991)%x3992);

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

