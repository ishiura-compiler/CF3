#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x11 = INT32_MIN;
static int16_t x38 = -1;
static int8_t x86 = INT8_MAX;
int32_t x159 = INT32_MIN;
volatile int32_t t5 = 308613683;
uint8_t x332 = 55U;
uint8_t x378 = UINT8_MAX;
uint32_t x418 = UINT32_MAX;
int32_t x489 = -1;
int16_t x493 = 2;
int64_t x495 = INT64_MIN;
int64_t t13 = -62083704989906LL;
int32_t x514 = -451185628;
uint8_t x530 = 28U;
static int32_t x567 = -1;
volatile int32_t t16 = -3;
int32_t x591 = -9;
uint8_t x662 = UINT8_MAX;
int16_t x712 = 8;
volatile uint8_t x734 = 6U;
uint8_t x863 = UINT8_MAX;
int32_t t21 = 3710184;
static volatile uint8_t x981 = 41U;
int32_t x990 = -1040423;
static uint8_t x991 = 1U;
int64_t x1102 = INT64_MIN;
int16_t x1117 = 7262;
volatile int8_t x1119 = INT8_MIN;
static uint16_t x1131 = 746U;
static int64_t x1169 = INT64_MIN;
uint16_t x1194 = 56U;
static volatile uint64_t t30 = 169361LLU;
static uint8_t x1201 = 0U;
static int8_t x1202 = -1;
int8_t x1282 = INT8_MIN;
static int8_t x1322 = 36;
uint32_t x1352 = 1U;
int64_t t35 = 2097185438814LL;
int8_t x1473 = 0;
int64_t x1489 = INT64_MIN;
uint64_t x1490 = UINT64_MAX;
static volatile uint64_t x1493 = UINT64_MAX;
int8_t x1496 = 38;
volatile uint64_t t39 = 240298700620388LLU;
uint8_t x1516 = 22U;
int16_t x1612 = 0;
int8_t x1627 = INT8_MAX;
uint8_t x1628 = 19U;
static uint32_t x1649 = UINT32_MAX;
uint32_t x1822 = 5100861U;
int64_t t52 = 4000LL;
volatile int64_t t54 = -166846091LL;
int64_t x2050 = -2348721355511LL;
int64_t x2065 = -6769246LL;
uint64_t x2089 = 44644499390273LLU;
volatile uint64_t t62 = 2219529867894LLU;
uint8_t x2174 = 5U;
uint64_t t64 = 336177125392835037LLU;
volatile int64_t x2271 = INT64_MAX;
int16_t x2310 = 1552;
volatile uint8_t x2312 = 1U;
volatile int32_t t68 = 6892922;
static uint8_t x2368 = 28U;
static volatile int64_t t72 = -2139292441870547969LL;
int16_t x2391 = INT16_MIN;
int32_t x2392 = 8;
uint64_t t74 = 339710554LLU;
int16_t x2483 = INT16_MIN;
int64_t x2494 = INT64_MAX;
int16_t x2531 = INT16_MAX;
static int32_t x2567 = -1034792;
uint16_t x2568 = 0U;
static volatile uint32_t x2577 = UINT32_MAX;
static int8_t x2580 = 1;
volatile uint16_t x2592 = 16U;
int8_t x2658 = INT8_MIN;
static int8_t x2703 = INT8_MIN;
int32_t x2788 = 13;
int32_t x2845 = INT32_MAX;
uint16_t x2901 = 2143U;
int64_t t90 = 32958240205099800LL;
uint16_t x3117 = 3886U;
int8_t x3159 = INT8_MIN;
uint64_t x3317 = 172349207974LLU;
int32_t x3318 = -4;
int8_t x3334 = 12;
static uint16_t x3339 = UINT16_MAX;
volatile uint32_t t99 = 165840355U;


void f0(void) {
	uint32_t x9 = UINT32_MAX;
	static int16_t x10 = -1;
	uint8_t x12 = 2U;
	uint32_t t0 = 4074U;

	t0 = ((x9&(x10%x11))>>x12);

	if (t0 != 1073741823U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = -129953162598LL;
	uint32_t x39 = 11198U;
	static uint64_t x40 = 0LLU;
	int64_t t1 = 486LL;

	t1 = ((x37&(x38%x39))>>x40);

	if (t1 != 6672LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x85 = -1LL;
	int64_t x87 = INT64_MIN;
	uint32_t x88 = 3U;
	volatile int64_t t2 = -10000LL;

	t2 = ((x85&(x86%x87))>>x88);

	if (t2 != 15LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x117 = 53374U;
	static int64_t x118 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	int16_t x120 = 30;
	volatile int64_t t3 = -444996LL;

	t3 = ((x117&(x118%x119))>>x120);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x157 = 2379747U;
	int8_t x158 = INT8_MIN;
	uint32_t x160 = 1U;
	volatile uint32_t t4 = 24U;

	t4 = ((x157&(x158%x159))>>x160);

	if (t4 != 1189824U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x177 = INT8_MAX;
	static int8_t x178 = INT8_MAX;
	uint8_t x179 = UINT8_MAX;
	volatile uint32_t x180 = 1U;

	t5 = ((x177&(x178%x179))>>x180);

	if (t5 != 63) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x229 = -1;
	uint8_t x230 = 10U;
	int8_t x231 = 1;
	uint16_t x232 = 19U;
	int32_t t6 = -15432347;

	t6 = ((x229&(x230%x231))>>x232);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x249 = INT64_MAX;
	static int8_t x250 = INT8_MAX;
	volatile uint64_t x251 = 707LLU;
	volatile uint8_t x252 = 8U;
	volatile uint64_t t7 = 61225095812LLU;

	t7 = ((x249&(x250%x251))>>x252);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x329 = 62674U;
	int32_t x330 = -104933;
	static volatile uint64_t x331 = 32201958717LLU;
	volatile uint64_t t8 = 1411LLU;

	t8 = ((x329&(x330%x331))>>x332);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x361 = 18959U;
	int8_t x362 = 0;
	int16_t x363 = 11461;
	volatile int8_t x364 = 6;
	volatile int32_t t9 = -1396416;

	t9 = ((x361&(x362%x363))>>x364);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x377 = 12998;
	int64_t x379 = 15516LL;
	int16_t x380 = 10;
	int64_t t10 = -22851318351767LL;

	t10 = ((x377&(x378%x379))>>x380);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x417 = 13U;
	static int16_t x419 = 290;
	volatile int8_t x420 = 0;
	uint32_t t11 = 14U;

	t11 = ((x417&(x418%x419))>>x420);

	if (t11 != 13U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x490 = 14U;
	int32_t x491 = INT32_MIN;
	int8_t x492 = 1;
	volatile int32_t t12 = -13206;

	t12 = ((x489&(x490%x491))>>x492);

	if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x494 = 3;
	volatile int32_t x496 = 0;

	t13 = ((x493&(x494%x495))>>x496);

	if (t13 != 2LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x513 = 0U;
	int16_t x515 = -421;
	int32_t x516 = 2;
	int32_t t14 = -18757072;

	t14 = ((x513&(x514%x515))>>x516);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x529 = INT64_MIN;
	volatile uint32_t x531 = 565004718U;
	uint16_t x532 = 47U;
	volatile int64_t t15 = -383LL;

	t15 = ((x529&(x530%x531))>>x532);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x565 = INT8_MIN;
	volatile int32_t x566 = -24356;
	uint8_t x568 = 11U;

	t16 = ((x565&(x566%x567))>>x568);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x589 = INT8_MIN;
	int8_t x590 = INT8_MAX;
	int16_t x592 = 1;
	int32_t t17 = -2730;

	t17 = ((x589&(x590%x591))>>x592);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x661 = -2002LL;
	int16_t x663 = INT16_MIN;
	uint64_t x664 = 0LLU;
	volatile int64_t t18 = 4541416020264958453LL;

	t18 = ((x661&(x662%x663))>>x664);

	if (t18 != 46LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x709 = UINT32_MAX;
	static uint8_t x710 = 31U;
	int16_t x711 = -1;
	uint32_t t19 = 79U;

	t19 = ((x709&(x710%x711))>>x712);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x733 = -176;
	static int32_t x735 = INT32_MIN;
	volatile uint8_t x736 = 11U;
	volatile int32_t t20 = 1;

	t20 = ((x733&(x734%x735))>>x736);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x861 = INT32_MIN;
	volatile int32_t x862 = INT32_MAX;
	int64_t x864 = 0LL;

	t21 = ((x861&(x862%x863))>>x864);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x982 = INT32_MIN;
	int8_t x983 = INT8_MIN;
	volatile int8_t x984 = 31;
	int32_t t22 = -1361207;

	t22 = ((x981&(x982%x983))>>x984);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x989 = -985457;
	int16_t x992 = 7;
	volatile int32_t t23 = -396;

	t23 = ((x989&(x990%x991))>>x992);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1041 = 527U;
	static int16_t x1042 = INT16_MAX;
	int8_t x1043 = INT8_MIN;
	uint16_t x1044 = 3U;
	volatile int32_t t24 = 85;

	t24 = ((x1041&(x1042%x1043))>>x1044);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1073 = -1;
	static int8_t x1074 = 13;
	volatile int32_t x1075 = -213704367;
	volatile uint8_t x1076 = 4U;
	volatile int32_t t25 = 1;

	t25 = ((x1073&(x1074%x1075))>>x1076);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1101 = UINT32_MAX;
	uint16_t x1103 = UINT16_MAX;
	volatile uint64_t x1104 = 44LLU;
	volatile int64_t t26 = 1LL;

	t26 = ((x1101&(x1102%x1103))>>x1104);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1118 = INT8_MAX;
	int8_t x1120 = 1;
	volatile int32_t t27 = -1781;

	t27 = ((x1117&(x1118%x1119))>>x1120);

	if (t27 != 47) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1129 = 5482U;
	uint32_t x1130 = 5829U;
	uint8_t x1132 = 5U;
	uint32_t t28 = 365U;

	t28 = ((x1129&(x1130%x1131))>>x1132);

	if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1170 = INT8_MAX;
	volatile int16_t x1171 = INT16_MIN;
	uint16_t x1172 = 1U;
	static volatile int64_t t29 = -1667LL;

	t29 = ((x1169&(x1170%x1171))>>x1172);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1193 = -1;
	uint64_t x1195 = UINT64_MAX;
	uint8_t x1196 = 6U;

	t30 = ((x1193&(x1194%x1195))>>x1196);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1203 = INT32_MIN;
	volatile uint32_t x1204 = 1U;
	static volatile int32_t t31 = -7;

	t31 = ((x1201&(x1202%x1203))>>x1204);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1265 = UINT32_MAX;
	int32_t x1266 = INT32_MIN;
	volatile int16_t x1267 = INT16_MIN;
	static uint8_t x1268 = 4U;
	volatile uint32_t t32 = 94U;

	t32 = ((x1265&(x1266%x1267))>>x1268);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1281 = INT16_MIN;
	static int32_t x1283 = 1;
	volatile uint32_t x1284 = 5U;
	int32_t t33 = -535786111;

	t33 = ((x1281&(x1282%x1283))>>x1284);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1321 = 237184811787922204LLU;
	int16_t x1323 = -43;
	uint16_t x1324 = 3U;
	static uint64_t t34 = 2025334053LLU;

	t34 = ((x1321&(x1322%x1323))>>x1324);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1349 = 9492;
	int64_t x1350 = 0LL;
	int16_t x1351 = -3;

	t35 = ((x1349&(x1350%x1351))>>x1352);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1474 = INT64_MAX;
	static volatile uint8_t x1475 = UINT8_MAX;
	uint16_t x1476 = 12U;
	volatile int64_t t36 = -610213LL;

	t36 = ((x1473&(x1474%x1475))>>x1476);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1485 = INT16_MIN;
	int64_t x1486 = INT64_MIN;
	uint16_t x1487 = 2U;
	int8_t x1488 = 3;
	int64_t t37 = -17369779395301886LL;

	t37 = ((x1485&(x1486%x1487))>>x1488);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1491 = 13U;
	static uint8_t x1492 = 4U;
	volatile uint64_t t38 = 74064397LLU;

	t38 = ((x1489&(x1490%x1491))>>x1492);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1494 = 2LL;
	int64_t x1495 = INT64_MIN;

	t39 = ((x1493&(x1494%x1495))>>x1496);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1497 = 0U;
	int16_t x1498 = INT16_MIN;
	static int64_t x1499 = 9960854874527LL;
	uint8_t x1500 = 15U;
	volatile int64_t t40 = 1011LL;

	t40 = ((x1497&(x1498%x1499))>>x1500);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1513 = INT32_MIN;
	uint8_t x1514 = 21U;
	int8_t x1515 = INT8_MIN;
	static volatile int32_t t41 = -2325;

	t41 = ((x1513&(x1514%x1515))>>x1516);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1581 = UINT8_MAX;
	volatile int16_t x1582 = INT16_MAX;
	int64_t x1583 = INT64_MIN;
	static int8_t x1584 = 0;
	int64_t t42 = 5252482LL;

	t42 = ((x1581&(x1582%x1583))>>x1584);

	if (t42 != 255LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1609 = INT8_MIN;
	uint64_t x1610 = 16129969378378LLU;
	static int16_t x1611 = -1;
	static uint64_t t43 = 73LLU;

	t43 = ((x1609&(x1610%x1611))>>x1612);

	if (t43 != 16129969378304LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1625 = INT32_MAX;
	uint16_t x1626 = 4345U;
	int32_t t44 = 6;

	t44 = ((x1625&(x1626%x1627))>>x1628);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x1650 = UINT16_MAX;
	uint32_t x1651 = UINT32_MAX;
	static volatile uint8_t x1652 = 1U;
	volatile uint32_t t45 = 4310818U;

	t45 = ((x1649&(x1650%x1651))>>x1652);

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1673 = 4603048946487591262LL;
	uint16_t x1674 = 77U;
	int8_t x1675 = INT8_MIN;
	static volatile int8_t x1676 = 0;
	static volatile int64_t t46 = 6765869713LL;

	t46 = ((x1673&(x1674%x1675))>>x1676);

	if (t46 != 76LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1701 = UINT8_MAX;
	uint16_t x1702 = UINT16_MAX;
	int64_t x1703 = INT64_MAX;
	static uint16_t x1704 = 23U;
	int64_t t47 = 2039518LL;

	t47 = ((x1701&(x1702%x1703))>>x1704);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1737 = 1267539669U;
	uint32_t x1738 = 22230U;
	static int8_t x1739 = INT8_MIN;
	uint16_t x1740 = 0U;
	static volatile uint32_t t48 = 3U;

	t48 = ((x1737&(x1738%x1739))>>x1740);

	if (t48 != 5844U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1745 = 564270085994LLU;
	int16_t x1746 = INT16_MIN;
	volatile int32_t x1747 = INT32_MIN;
	uint64_t x1748 = 3LLU;
	volatile uint64_t t49 = 34LLU;

	t49 = ((x1745&(x1746%x1747))>>x1748);

	if (t49 != 70533758976LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1821 = 926232039U;
	uint16_t x1823 = 35U;
	static uint8_t x1824 = 7U;
	uint32_t t50 = 81366019U;

	t50 = ((x1821&(x1822%x1823))>>x1824);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1833 = -13755;
	volatile uint32_t x1834 = 465591829U;
	int8_t x1835 = -15;
	uint8_t x1836 = 17U;
	volatile uint32_t t51 = 17297U;

	t51 = ((x1833&(x1834%x1835))>>x1836);

	if (t51 != 3552U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1925 = UINT8_MAX;
	int32_t x1926 = -1;
	int64_t x1927 = INT64_MIN;
	uint16_t x1928 = 1U;

	t52 = ((x1925&(x1926%x1927))>>x1928);

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1945 = -1LL;
	static volatile uint64_t x1946 = UINT64_MAX;
	int64_t x1947 = -16920504452700253LL;
	static int8_t x1948 = 0;
	volatile uint64_t t53 = 20278419332820LLU;

	t53 = ((x1945&(x1946%x1947))>>x1948);

	if (t53 != 16920504452700252LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x1973 = UINT16_MAX;
	int8_t x1974 = INT8_MAX;
	int64_t x1975 = INT64_MAX;
	static uint16_t x1976 = 0U;

	t54 = ((x1973&(x1974%x1975))>>x1976);

	if (t54 != 127LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2041 = -1LL;
	volatile int32_t x2042 = INT32_MAX;
	int32_t x2043 = 564220889;
	int16_t x2044 = 0;
	volatile int64_t t55 = -33576230315LL;

	t55 = ((x2041&(x2042%x2043))>>x2044);

	if (t55 != 454820980LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2049 = INT16_MIN;
	int32_t x2051 = -1;
	uint8_t x2052 = 0U;
	volatile int64_t t56 = -1796156515940646285LL;

	t56 = ((x2049&(x2050%x2051))>>x2052);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2066 = 126U;
	int32_t x2067 = -1;
	static uint8_t x2068 = 24U;
	int64_t t57 = -1908177LL;

	t57 = ((x2065&(x2066%x2067))>>x2068);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2090 = INT32_MIN;
	int8_t x2091 = 1;
	uint8_t x2092 = 8U;
	volatile uint64_t t58 = 18738663637645119LLU;

	t58 = ((x2089&(x2090%x2091))>>x2092);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2113 = 85U;
	static volatile int32_t x2114 = INT32_MIN;
	volatile uint16_t x2115 = UINT16_MAX;
	static volatile uint8_t x2116 = 4U;
	int32_t t59 = 11521553;

	t59 = ((x2113&(x2114%x2115))>>x2116);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2121 = -1LL;
	static uint32_t x2122 = 3785U;
	int8_t x2123 = INT8_MIN;
	int8_t x2124 = 1;
	int64_t t60 = -9890LL;

	t60 = ((x2121&(x2122%x2123))>>x2124);

	if (t60 != 1892LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2137 = 1;
	uint32_t x2138 = UINT32_MAX;
	uint32_t x2139 = 8155U;
	volatile int16_t x2140 = 28;
	static uint32_t t61 = 0U;

	t61 = ((x2137&(x2138%x2139))>>x2140);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x2165 = INT8_MIN;
	uint64_t x2166 = 3316LLU;
	static uint16_t x2167 = 4235U;
	int8_t x2168 = 0;

	t62 = ((x2165&(x2166%x2167))>>x2168);

	if (t62 != 3200LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2173 = -1;
	int64_t x2175 = 1116546LL;
	int64_t x2176 = 6LL;
	int64_t t63 = -398832177LL;

	t63 = ((x2173&(x2174%x2175))>>x2176);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2189 = UINT64_MAX;
	int8_t x2190 = -1;
	int32_t x2191 = -1;
	static int8_t x2192 = 1;

	t64 = ((x2189&(x2190%x2191))>>x2192);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x2201 = INT16_MAX;
	volatile int32_t x2202 = -11945;
	volatile int16_t x2203 = -19;
	volatile uint16_t x2204 = 0U;
	int32_t t65 = 44213429;

	t65 = ((x2201&(x2202%x2203))>>x2204);

	if (t65 != 32755) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x2269 = UINT32_MAX;
	volatile int8_t x2270 = -1;
	static uint8_t x2272 = 4U;
	int64_t t66 = -5181875201311232LL;

	t66 = ((x2269&(x2270%x2271))>>x2272);

	if (t66 != 268435455LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2273 = INT16_MAX;
	static int16_t x2274 = -1;
	int64_t x2275 = -1LL;
	uint16_t x2276 = 1U;
	volatile int64_t t67 = -6273693905467LL;

	t67 = ((x2273&(x2274%x2275))>>x2276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2309 = -1;
	uint16_t x2311 = UINT16_MAX;

	t68 = ((x2309&(x2310%x2311))>>x2312);

	if (t68 != 776) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x2325 = 5U;
	int16_t x2326 = -1;
	volatile int16_t x2327 = 1326;
	static volatile int8_t x2328 = 1;
	volatile uint32_t t69 = 133659388U;

	t69 = ((x2325&(x2326%x2327))>>x2328);

	if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x2333 = 0U;
	uint64_t x2334 = UINT64_MAX;
	int16_t x2335 = -11;
	uint16_t x2336 = 36U;
	uint64_t t70 = 152628131251487LLU;

	t70 = ((x2333&(x2334%x2335))>>x2336);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2341 = UINT16_MAX;
	int8_t x2342 = INT8_MIN;
	volatile uint8_t x2343 = 3U;
	static volatile int16_t x2344 = 0;
	static int32_t t71 = -30759;

	t71 = ((x2341&(x2342%x2343))>>x2344);

	if (t71 != 65534) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2365 = -47517495;
	volatile uint8_t x2366 = UINT8_MAX;
	int64_t x2367 = INT64_MAX;

	t72 = ((x2365&(x2366%x2367))>>x2368);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x2389 = 616692747695007429LLU;
	int32_t x2390 = -3184026;
	uint64_t t73 = 67074805028LLU;

	t73 = ((x2389&(x2390%x2391))>>x2392);

	if (t73 != 2408956045683618LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2413 = 14914902765LLU;
	uint32_t x2414 = 20994304U;
	static uint16_t x2415 = 1183U;
	int64_t x2416 = 0LL;

	t74 = ((x2413&(x2414%x2415))>>x2416);

	if (t74 != 512LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2481 = 4356;
	static int16_t x2482 = 11;
	uint64_t x2484 = 11LLU;
	volatile int32_t t75 = -3075;

	t75 = ((x2481&(x2482%x2483))>>x2484);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2493 = 2087572168U;
	int16_t x2495 = -1;
	uint8_t x2496 = 7U;
	volatile int64_t t76 = 105575311LL;

	t76 = ((x2493&(x2494%x2495))>>x2496);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2529 = UINT8_MAX;
	uint32_t x2530 = 385392U;
	uint32_t x2532 = 0U;
	volatile uint32_t t77 = 1370915U;

	t77 = ((x2529&(x2530%x2531))>>x2532);

	if (t77 != 123U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2565 = -13;
	int64_t x2566 = 98169LL;
	static int64_t t78 = 54LL;

	t78 = ((x2565&(x2566%x2567))>>x2568);

	if (t78 != 98161LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x2578 = INT32_MIN;
	static int16_t x2579 = -1;
	static uint32_t t79 = 11855443U;

	t79 = ((x2577&(x2578%x2579))>>x2580);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2589 = 11037973994LLU;
	uint8_t x2590 = 1U;
	int32_t x2591 = INT32_MAX;
	uint64_t t80 = 72172634162994LLU;

	t80 = ((x2589&(x2590%x2591))>>x2592);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2597 = 88LLU;
	static int8_t x2598 = INT8_MIN;
	int16_t x2599 = -17;
	uint8_t x2600 = 3U;
	uint64_t t81 = 3166121651LLU;

	t81 = ((x2597&(x2598%x2599))>>x2600);

	if (t81 != 10LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2657 = 117007U;
	int32_t x2659 = INT32_MAX;
	int8_t x2660 = 0;
	uint32_t t82 = 83U;

	t82 = ((x2657&(x2658%x2659))>>x2660);

	if (t82 != 116992U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x2701 = 655U;
	int16_t x2702 = -1;
	uint16_t x2704 = 16U;
	static int32_t t83 = -10;

	t83 = ((x2701&(x2702%x2703))>>x2704);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2785 = 13U;
	uint8_t x2786 = 1U;
	int32_t x2787 = INT32_MIN;
	int32_t t84 = -917088;

	t84 = ((x2785&(x2786%x2787))>>x2788);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2833 = -1;
	volatile uint8_t x2834 = 8U;
	uint32_t x2835 = 8248U;
	volatile uint8_t x2836 = 1U;
	static volatile uint32_t t85 = 955U;

	t85 = ((x2833&(x2834%x2835))>>x2836);

	if (t85 != 4U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x2846 = INT64_MAX;
	volatile uint64_t x2847 = 46658126923LLU;
	uint8_t x2848 = 1U;
	uint64_t t86 = 2811LLU;

	t86 = ((x2845&(x2846%x2847))>>x2848);

	if (t86 != 99599681LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x2849 = 1;
	int16_t x2850 = INT16_MIN;
	volatile int64_t x2851 = -138072744LL;
	uint8_t x2852 = 1U;
	volatile int64_t t87 = 479445LL;

	t87 = ((x2849&(x2850%x2851))>>x2852);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2902 = INT8_MIN;
	static int64_t x2903 = INT64_MIN;
	volatile uint8_t x2904 = 7U;
	int64_t t88 = 661116LL;

	t88 = ((x2901&(x2902%x2903))>>x2904);

	if (t88 != 16LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2909 = UINT16_MAX;
	volatile int8_t x2910 = -1;
	static int64_t x2911 = 23LL;
	static int8_t x2912 = 1;
	static int64_t t89 = -518605LL;

	t89 = ((x2909&(x2910%x2911))>>x2912);

	if (t89 != 32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3025 = 76U;
	int64_t x3026 = INT64_MAX;
	static int64_t x3027 = 431651907LL;
	int16_t x3028 = 1;

	t90 = ((x3025&(x3026%x3027))>>x3028);

	if (t90 != 36LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3118 = 6352943U;
	int16_t x3119 = INT16_MIN;
	static uint8_t x3120 = 3U;
	static uint32_t t91 = 163498463U;

	t91 = ((x3117&(x3118%x3119))>>x3120);

	if (t91 != 5U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x3157 = UINT64_MAX;
	int32_t x3158 = -1;
	uint16_t x3160 = 0U;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x3157&(x3158%x3159))>>x3160);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3277 = INT8_MIN;
	static int64_t x3278 = INT64_MAX;
	uint32_t x3279 = 453488U;
	static uint8_t x3280 = 16U;
	volatile int64_t t93 = -338793651593874969LL;

	t93 = ((x3277&(x3278%x3279))>>x3280);

	if (t93 != 4LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3319 = INT64_MIN;
	int8_t x3320 = 3;
	static uint64_t t94 = 0LLU;

	t94 = ((x3317&(x3318%x3319))>>x3320);

	if (t94 != 21543650996LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x3321 = INT16_MIN;
	uint32_t x3322 = 2747U;
	uint16_t x3323 = 73U;
	static volatile uint8_t x3324 = 1U;
	uint32_t t95 = 28U;

	t95 = ((x3321&(x3322%x3323))>>x3324);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3325 = 29051598089LL;
	static uint64_t x3326 = UINT64_MAX;
	uint16_t x3327 = 9U;
	uint16_t x3328 = 3U;
	volatile uint64_t t96 = 243058765LLU;

	t96 = ((x3325&(x3326%x3327))>>x3328);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3333 = UINT64_MAX;
	int32_t x3335 = -1;
	static int16_t x3336 = 6;
	static volatile uint64_t t97 = 28474196383677985LLU;

	t97 = ((x3333&(x3334%x3335))>>x3336);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3337 = 187178LL;
	uint64_t x3338 = 24276838436240809LLU;
	int8_t x3340 = 23;
	volatile uint64_t t98 = 3362765366404LLU;

	t98 = ((x3337&(x3338%x3339))>>x3340);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3413 = UINT16_MAX;
	int8_t x3414 = INT8_MAX;
	uint32_t x3415 = 210401U;
	uint32_t x3416 = 1U;

	t99 = ((x3413&(x3414%x3415))>>x3416);

	if (t99 != 63U) { NG(); } else { ; }
	
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

