#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x21 = 36575304LLU;
volatile int64_t x22 = -239LL;
volatile uint8_t x24 = 53U;
volatile int64_t t2 = 2973412952LL;
static int16_t x69 = INT16_MAX;
volatile uint16_t x72 = 0U;
uint64_t x139 = UINT64_MAX;
static int16_t x178 = INT16_MAX;
int8_t x180 = 1;
int32_t t6 = -391982226;
uint64_t x231 = 3519934329LLU;
int16_t x261 = INT16_MIN;
uint32_t x271 = 24U;
uint32_t x326 = 505980748U;
volatile int16_t x328 = 0;
static uint16_t x335 = 422U;
uint32_t x368 = 0U;
int8_t x388 = 0;
static int8_t x439 = -1;
int8_t x440 = 13;
static int32_t t14 = 183426;
int32_t x620 = 12;
static int32_t x680 = 8;
static int64_t x730 = INT64_MAX;
volatile uint32_t x809 = 5U;
uint8_t x812 = 28U;
uint32_t x817 = 475U;
uint8_t x820 = 7U;
static int16_t x835 = INT16_MIN;
int16_t x957 = -1;
int16_t x966 = INT16_MIN;
static int16_t x1079 = INT16_MIN;
static int64_t t33 = -16123LL;
uint8_t x1156 = 11U;
volatile uint16_t x1297 = 2U;
static int16_t x1363 = INT16_MAX;
int32_t x1437 = -111818727;
static volatile uint8_t x1440 = 1U;
uint8_t x1481 = 3U;
uint32_t x1502 = 1789U;
volatile int8_t x1562 = INT8_MIN;
uint16_t x1612 = 3U;
volatile int32_t t52 = -2;
int64_t x1677 = 6041LL;
int64_t t53 = -5045LL;
int32_t x1698 = INT32_MAX;
static uint8_t x1699 = UINT8_MAX;
static uint8_t x1713 = 5U;
int16_t x1714 = -1;
int32_t t56 = -3;
int32_t x1787 = 807807544;
int8_t x1809 = -1;
int64_t x1878 = 384725361158878926LL;
uint64_t x1879 = 25507174726LLU;
int8_t x1892 = 0;
static uint16_t x1911 = 1U;
static int64_t x1926 = -1500048LL;
int64_t x1927 = INT64_MIN;
static uint8_t x1934 = UINT8_MAX;
int32_t t66 = -5345158;
int16_t x1955 = 15;
volatile int16_t x1956 = 4;
uint16_t x1986 = 4306U;
int16_t x2003 = INT16_MAX;
uint64_t x2025 = UINT64_MAX;
int64_t x2026 = INT64_MIN;
int32_t x2027 = 2733319;
static uint64_t t71 = 2695LLU;
volatile int16_t x2036 = 0;
int64_t x2085 = INT64_MAX;
uint64_t x2087 = UINT64_MAX;
static volatile uint16_t x2111 = 58U;
int32_t x2112 = 1;
static int16_t x2125 = INT16_MAX;
static int16_t x2126 = 444;
volatile uint8_t x2128 = 0U;
static int16_t x2159 = INT16_MIN;
volatile int32_t x2160 = 0;
volatile uint64_t x2161 = 246772048LLU;
static int32_t x2164 = 1;
static int8_t x2165 = INT8_MIN;
static int8_t x2168 = 31;
volatile int32_t t80 = 3;
uint8_t x2179 = 0U;
volatile int8_t x2216 = 2;
volatile int32_t t82 = 1;
volatile uint64_t t83 = 4321803900011603942LLU;
volatile int32_t t84 = -54;
volatile int16_t x2381 = INT16_MIN;
int32_t t88 = 1760;
int8_t x2460 = 16;
uint8_t x2489 = 79U;
uint8_t x2492 = 6U;
int32_t t92 = 9411711;
volatile int64_t x2515 = -1100LL;
int8_t x2516 = 0;
int16_t x2537 = -1;
int32_t t94 = -30;
int16_t x2544 = 18;
static int64_t t99 = 137330361LL;


void f0(void) {
	int64_t x23 = INT64_MIN;
	static volatile uint64_t t0 = 420943660LLU;

	t0 = ((x21&(x22<x23))>>x24);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x41 = 2848651;
	static volatile uint8_t x42 = UINT8_MAX;
	static uint64_t x43 = UINT64_MAX;
	volatile uint8_t x44 = 0U;
	volatile int32_t t1 = 24;

	t1 = ((x41&(x42<x43))>>x44);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x61 = INT64_MIN;
	uint16_t x62 = UINT16_MAX;
	static volatile int16_t x63 = INT16_MIN;
	int64_t x64 = 1LL;

	t2 = ((x61&(x62<x63))>>x64);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x70 = 41069455U;
	int8_t x71 = 5;
	volatile int32_t t3 = -43923;

	t3 = ((x69&(x70<x71))>>x72);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile uint8_t x86 = UINT8_MAX;
	int16_t x87 = 23;
	static int8_t x88 = 0;
	volatile uint64_t t4 = 4LLU;

	t4 = ((x85&(x86<x87))>>x88);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int64_t x140 = 0LL;
	static volatile int32_t t5 = -1275;

	t5 = ((x137&(x138<x139))>>x140);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x177 = 2U;
	int64_t x179 = INT64_MIN;

	t6 = ((x177&(x178<x179))>>x180);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x229 = 404LLU;
	int64_t x230 = -1LL;
	int16_t x232 = 0;
	volatile uint64_t t7 = 28611955550553LLU;

	t7 = ((x229&(x230<x231))>>x232);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x262 = 11;
	int64_t x263 = -91745846735LL;
	int8_t x264 = 4;
	int32_t t8 = 291470;

	t8 = ((x261&(x262<x263))>>x264);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x269 = INT32_MIN;
	uint32_t x270 = UINT32_MAX;
	uint8_t x272 = 1U;
	volatile int32_t t9 = -115625622;

	t9 = ((x269&(x270<x271))>>x272);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x325 = 329128509987LLU;
	int64_t x327 = INT64_MIN;
	uint64_t t10 = 87LLU;

	t10 = ((x325&(x326<x327))>>x328);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x333 = 0;
	int8_t x334 = 29;
	uint16_t x336 = 2U;
	int32_t t11 = 674472;

	t11 = ((x333&(x334<x335))>>x336);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x365 = INT64_MAX;
	static int8_t x366 = -1;
	volatile int32_t x367 = INT32_MIN;
	int64_t t12 = -15LL;

	t12 = ((x365&(x366<x367))>>x368);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x385 = -1;
	static int16_t x386 = INT16_MAX;
	int64_t x387 = INT64_MIN;
	static int32_t t13 = 30935075;

	t13 = ((x385&(x386<x387))>>x388);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x437 = 0;
	int8_t x438 = INT8_MIN;

	t14 = ((x437&(x438<x439))>>x440);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x477 = INT64_MIN;
	int8_t x478 = INT8_MAX;
	int32_t x479 = INT32_MIN;
	int8_t x480 = 23;
	int64_t t15 = -2009656516716331554LL;

	t15 = ((x477&(x478<x479))>>x480);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x537 = 2022462990323442352LL;
	volatile int8_t x538 = INT8_MAX;
	int8_t x539 = INT8_MAX;
	volatile int8_t x540 = 1;
	volatile int64_t t16 = -3LL;

	t16 = ((x537&(x538<x539))>>x540);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x545 = -1;
	int16_t x546 = INT16_MIN;
	static int16_t x547 = -1;
	uint32_t x548 = 5U;
	volatile int32_t t17 = 1;

	t17 = ((x545&(x546<x547))>>x548);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x617 = UINT8_MAX;
	volatile uint64_t x618 = 9194LLU;
	static int32_t x619 = INT32_MIN;
	volatile int32_t t18 = 244821;

	t18 = ((x617&(x618<x619))>>x620);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x661 = -1;
	int32_t x662 = INT32_MAX;
	uint8_t x663 = 2U;
	uint8_t x664 = 3U;
	volatile int32_t t19 = -16732;

	t19 = ((x661&(x662<x663))>>x664);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x677 = 0;
	volatile int32_t x678 = INT32_MIN;
	int32_t x679 = -1;
	int32_t t20 = 18835927;

	t20 = ((x677&(x678<x679))>>x680);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x729 = 545487LLU;
	int16_t x731 = -1;
	int16_t x732 = 0;
	uint64_t t21 = 893397227166704LLU;

	t21 = ((x729&(x730<x731))>>x732);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x773 = 385968847513560LLU;
	int8_t x774 = -5;
	static int16_t x775 = -1;
	uint16_t x776 = 3U;
	volatile uint64_t t22 = 6426535LLU;

	t22 = ((x773&(x774<x775))>>x776);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x810 = -1LL;
	int64_t x811 = INT64_MIN;
	uint32_t t23 = 0U;

	t23 = ((x809&(x810<x811))>>x812);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x818 = INT8_MIN;
	int64_t x819 = INT64_MIN;
	uint32_t t24 = 0U;

	t24 = ((x817&(x818<x819))>>x820);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x825 = UINT64_MAX;
	static int8_t x826 = INT8_MIN;
	int64_t x827 = -46LL;
	static int32_t x828 = 3;
	uint64_t t25 = 2430568LLU;

	t25 = ((x825&(x826<x827))>>x828);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x833 = INT16_MAX;
	int8_t x834 = 0;
	int8_t x836 = 2;
	volatile int32_t t26 = 1;

	t26 = ((x833&(x834<x835))>>x836);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x885 = -1LL;
	volatile int8_t x886 = 0;
	volatile int16_t x887 = 43;
	int32_t x888 = 2;
	int64_t t27 = -38085299435599LL;

	t27 = ((x885&(x886<x887))>>x888);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x913 = 3U;
	int64_t x914 = INT64_MIN;
	static int64_t x915 = -1LL;
	static volatile uint32_t x916 = 13U;
	int32_t t28 = -12407;

	t28 = ((x913&(x914<x915))>>x916);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x921 = 49LLU;
	int8_t x922 = INT8_MAX;
	uint64_t x923 = 18837404424142853LLU;
	uint8_t x924 = 0U;
	volatile uint64_t t29 = 77423291685514836LLU;

	t29 = ((x921&(x922<x923))>>x924);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x958 = 18U;
	uint32_t x959 = 4377U;
	int16_t x960 = 7;
	static volatile int32_t t30 = 244638;

	t30 = ((x957&(x958<x959))>>x960);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x965 = 3220963U;
	uint64_t x967 = 19303926800458390LLU;
	volatile int16_t x968 = 0;
	uint32_t t31 = 109U;

	t31 = ((x965&(x966<x967))>>x968);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1061 = 2345;
	static int16_t x1062 = INT16_MIN;
	int8_t x1063 = -7;
	static int16_t x1064 = 11;
	volatile int32_t t32 = -45717;

	t32 = ((x1061&(x1062<x1063))>>x1064);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1077 = INT64_MIN;
	volatile int8_t x1078 = 2;
	uint32_t x1080 = 5U;

	t33 = ((x1077&(x1078<x1079))>>x1080);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1125 = INT16_MIN;
	static uint64_t x1126 = 195839LLU;
	int8_t x1127 = 46;
	uint16_t x1128 = 6U;
	volatile int32_t t34 = 778145;

	t34 = ((x1125&(x1126<x1127))>>x1128);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1153 = UINT8_MAX;
	uint32_t x1154 = UINT32_MAX;
	volatile int16_t x1155 = INT16_MIN;
	int32_t t35 = -357;

	t35 = ((x1153&(x1154<x1155))>>x1156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1237 = UINT32_MAX;
	int16_t x1238 = -114;
	static int8_t x1239 = -7;
	int8_t x1240 = 1;
	volatile uint32_t t36 = 28905294U;

	t36 = ((x1237&(x1238<x1239))>>x1240);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1298 = INT64_MIN;
	volatile int8_t x1299 = 15;
	int8_t x1300 = 5;
	volatile int32_t t37 = 0;

	t37 = ((x1297&(x1298<x1299))>>x1300);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1329 = 510295;
	int32_t x1330 = -1;
	static uint16_t x1331 = 7702U;
	int16_t x1332 = 8;
	int32_t t38 = -1;

	t38 = ((x1329&(x1330<x1331))>>x1332);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1333 = INT16_MIN;
	volatile uint8_t x1334 = 47U;
	int32_t x1335 = -1;
	int8_t x1336 = 2;
	int32_t t39 = -233;

	t39 = ((x1333&(x1334<x1335))>>x1336);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1361 = UINT8_MAX;
	volatile uint32_t x1362 = 67U;
	uint8_t x1364 = 16U;
	int32_t t40 = 388661;

	t40 = ((x1361&(x1362<x1363))>>x1364);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1438 = -1;
	static uint8_t x1439 = 61U;
	int32_t t41 = 434;

	t41 = ((x1437&(x1438<x1439))>>x1440);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1482 = 47U;
	volatile int8_t x1483 = 0;
	int8_t x1484 = 1;
	volatile int32_t t42 = -78148306;

	t42 = ((x1481&(x1482<x1483))>>x1484);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1497 = UINT64_MAX;
	uint64_t x1498 = 1LLU;
	uint16_t x1499 = 31U;
	volatile uint16_t x1500 = 28U;
	static uint64_t t43 = 207703979LLU;

	t43 = ((x1497&(x1498<x1499))>>x1500);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x1501 = 14U;
	uint64_t x1503 = UINT64_MAX;
	volatile int16_t x1504 = 0;
	volatile int32_t t44 = -20534521;

	t44 = ((x1501&(x1502<x1503))>>x1504);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x1521 = UINT64_MAX;
	int16_t x1522 = -1;
	static volatile int64_t x1523 = INT64_MAX;
	uint8_t x1524 = 1U;
	volatile uint64_t t45 = 23865070LLU;

	t45 = ((x1521&(x1522<x1523))>>x1524);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1545 = -945660;
	uint8_t x1546 = 1U;
	volatile int16_t x1547 = 1;
	uint8_t x1548 = 12U;
	int32_t t46 = -592;

	t46 = ((x1545&(x1546<x1547))>>x1548);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1549 = 5U;
	static volatile int64_t x1550 = -384076LL;
	static uint64_t x1551 = 38575577LLU;
	volatile int16_t x1552 = 4;
	static int32_t t47 = -229;

	t47 = ((x1549&(x1550<x1551))>>x1552);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1553 = 27963765;
	volatile uint16_t x1554 = UINT16_MAX;
	int64_t x1555 = -1LL;
	static uint8_t x1556 = 17U;
	volatile int32_t t48 = -4018332;

	t48 = ((x1553&(x1554<x1555))>>x1556);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x1557 = -1LL;
	int64_t x1558 = -1LL;
	int16_t x1559 = -2569;
	volatile int32_t x1560 = 27;
	volatile int64_t t49 = 236381042451LL;

	t49 = ((x1557&(x1558<x1559))>>x1560);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1561 = 57U;
	volatile int32_t x1563 = -1;
	int32_t x1564 = 6;
	volatile int32_t t50 = -109661;

	t50 = ((x1561&(x1562<x1563))>>x1564);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1609 = INT32_MAX;
	volatile int64_t x1610 = INT64_MIN;
	int8_t x1611 = INT8_MIN;
	int32_t t51 = 816;

	t51 = ((x1609&(x1610<x1611))>>x1612);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1657 = 745;
	int64_t x1658 = -1LL;
	static int64_t x1659 = INT64_MIN;
	volatile int8_t x1660 = 1;

	t52 = ((x1657&(x1658<x1659))>>x1660);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x1678 = -147506953;
	uint8_t x1679 = 0U;
	volatile uint32_t x1680 = 9U;

	t53 = ((x1677&(x1678<x1679))>>x1680);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1681 = UINT8_MAX;
	uint32_t x1682 = 671U;
	int32_t x1683 = 53630;
	uint64_t x1684 = 11LLU;
	static volatile int32_t t54 = -8630;

	t54 = ((x1681&(x1682<x1683))>>x1684);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1697 = -1LL;
	int16_t x1700 = 2;
	volatile int64_t t55 = 36535516098954LL;

	t55 = ((x1697&(x1698<x1699))>>x1700);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x1715 = -428;
	volatile int8_t x1716 = 13;

	t56 = ((x1713&(x1714<x1715))>>x1716);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x1781 = 0U;
	int16_t x1782 = INT16_MIN;
	static int16_t x1783 = INT16_MIN;
	int16_t x1784 = 5;
	volatile int32_t t57 = -147711968;

	t57 = ((x1781&(x1782<x1783))>>x1784);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x1785 = 56U;
	uint16_t x1786 = 6710U;
	uint16_t x1788 = 7U;
	int32_t t58 = 987283;

	t58 = ((x1785&(x1786<x1787))>>x1788);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1789 = 1;
	static int16_t x1790 = INT16_MAX;
	uint8_t x1791 = 3U;
	volatile uint16_t x1792 = 0U;
	int32_t t59 = -972;

	t59 = ((x1789&(x1790<x1791))>>x1792);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1810 = -20;
	int32_t x1811 = INT32_MIN;
	uint8_t x1812 = 26U;
	int32_t t60 = -172106400;

	t60 = ((x1809&(x1810<x1811))>>x1812);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1829 = -404649931LL;
	int16_t x1830 = 14676;
	int64_t x1831 = -1LL;
	uint8_t x1832 = 0U;
	int64_t t61 = -21LL;

	t61 = ((x1829&(x1830<x1831))>>x1832);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1877 = -1;
	static uint16_t x1880 = 27U;
	int32_t t62 = 73155606;

	t62 = ((x1877&(x1878<x1879))>>x1880);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x1889 = 31U;
	volatile uint8_t x1890 = 8U;
	int16_t x1891 = INT16_MIN;
	static int32_t t63 = 28;

	t63 = ((x1889&(x1890<x1891))>>x1892);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x1909 = INT32_MIN;
	int16_t x1910 = INT16_MAX;
	int32_t x1912 = 3;
	volatile int32_t t64 = 17;

	t64 = ((x1909&(x1910<x1911))>>x1912);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x1925 = 158U;
	uint8_t x1928 = 0U;
	volatile uint32_t t65 = 1239U;

	t65 = ((x1925&(x1926<x1927))>>x1928);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1933 = INT32_MIN;
	volatile int64_t x1935 = 29023168895LL;
	volatile uint16_t x1936 = 5U;

	t66 = ((x1933&(x1934<x1935))>>x1936);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1945 = INT32_MAX;
	static volatile int32_t x1946 = INT32_MAX;
	volatile uint16_t x1947 = 3633U;
	uint8_t x1948 = 2U;
	int32_t t67 = -42;

	t67 = ((x1945&(x1946<x1947))>>x1948);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x1953 = INT64_MIN;
	volatile uint64_t x1954 = UINT64_MAX;
	static int64_t t68 = -28382LL;

	t68 = ((x1953&(x1954<x1955))>>x1956);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1985 = INT16_MAX;
	uint16_t x1987 = 27255U;
	int8_t x1988 = 21;
	int32_t t69 = -576271072;

	t69 = ((x1985&(x1986<x1987))>>x1988);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2001 = -1LL;
	volatile uint32_t x2002 = UINT32_MAX;
	static uint64_t x2004 = 2LLU;
	int64_t t70 = -13LL;

	t70 = ((x2001&(x2002<x2003))>>x2004);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2028 = 46LL;

	t71 = ((x2025&(x2026<x2027))>>x2028);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2033 = INT64_MIN;
	uint8_t x2034 = 1U;
	uint8_t x2035 = UINT8_MAX;
	volatile int64_t t72 = 13990174LL;

	t72 = ((x2033&(x2034<x2035))>>x2036);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2077 = INT32_MIN;
	int8_t x2078 = -48;
	uint64_t x2079 = UINT64_MAX;
	uint8_t x2080 = 0U;
	static int32_t t73 = -19726;

	t73 = ((x2077&(x2078<x2079))>>x2080);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x2086 = UINT16_MAX;
	uint8_t x2088 = 8U;
	int64_t t74 = 119601727LL;

	t74 = ((x2085&(x2086<x2087))>>x2088);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x2109 = INT8_MAX;
	int16_t x2110 = -1931;
	int32_t t75 = 1737;

	t75 = ((x2109&(x2110<x2111))>>x2112);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2127 = INT16_MIN;
	int32_t t76 = -1;

	t76 = ((x2125&(x2126<x2127))>>x2128);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2149 = -3386;
	int8_t x2150 = INT8_MIN;
	int32_t x2151 = INT32_MIN;
	int64_t x2152 = 0LL;
	int32_t t77 = -246505;

	t77 = ((x2149&(x2150<x2151))>>x2152);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2157 = -1LL;
	uint64_t x2158 = UINT64_MAX;
	int64_t t78 = -4395259716398544020LL;

	t78 = ((x2157&(x2158<x2159))>>x2160);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x2162 = 64U;
	static uint64_t x2163 = UINT64_MAX;
	uint64_t t79 = 3347338938040997LLU;

	t79 = ((x2161&(x2162<x2163))>>x2164);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2166 = INT64_MIN;
	uint8_t x2167 = 14U;

	t80 = ((x2165&(x2166<x2167))>>x2168);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2177 = INT8_MIN;
	volatile uint16_t x2178 = UINT16_MAX;
	int8_t x2180 = 6;
	int32_t t81 = 90842;

	t81 = ((x2177&(x2178<x2179))>>x2180);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2213 = 51U;
	static int16_t x2214 = INT16_MIN;
	uint32_t x2215 = 3355U;

	t82 = ((x2213&(x2214<x2215))>>x2216);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x2261 = UINT64_MAX;
	int16_t x2262 = INT16_MAX;
	int32_t x2263 = INT32_MIN;
	uint32_t x2264 = 14U;

	t83 = ((x2261&(x2262<x2263))>>x2264);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2341 = UINT16_MAX;
	int32_t x2342 = INT32_MIN;
	int32_t x2343 = 0;
	uint8_t x2344 = 5U;

	t84 = ((x2341&(x2342<x2343))>>x2344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2345 = -15744;
	int64_t x2346 = -1LL;
	uint8_t x2347 = 0U;
	static int8_t x2348 = 6;
	int32_t t85 = 45185678;

	t85 = ((x2345&(x2346<x2347))>>x2348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2353 = -1;
	volatile int64_t x2354 = -8615921322859LL;
	int16_t x2355 = -2;
	volatile uint8_t x2356 = 8U;
	int32_t t86 = -2;

	t86 = ((x2353&(x2354<x2355))>>x2356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x2373 = 2U;
	volatile int8_t x2374 = INT8_MIN;
	int32_t x2375 = INT32_MIN;
	uint16_t x2376 = 0U;
	int32_t t87 = -989559;

	t87 = ((x2373&(x2374<x2375))>>x2376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2382 = -1LL;
	uint32_t x2383 = UINT32_MAX;
	static uint8_t x2384 = 6U;

	t88 = ((x2381&(x2382<x2383))>>x2384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2385 = INT16_MIN;
	static uint16_t x2386 = 185U;
	volatile int8_t x2387 = INT8_MIN;
	int32_t x2388 = 4;
	int32_t t89 = 2419;

	t89 = ((x2385&(x2386<x2387))>>x2388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x2393 = INT16_MIN;
	int8_t x2394 = 0;
	uint32_t x2395 = 10343U;
	uint32_t x2396 = 1U;
	int32_t t90 = -6647;

	t90 = ((x2393&(x2394<x2395))>>x2396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2457 = -18;
	int32_t x2458 = -118;
	uint64_t x2459 = UINT64_MAX;
	volatile int32_t t91 = 190;

	t91 = ((x2457&(x2458<x2459))>>x2460);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2490 = INT8_MAX;
	uint64_t x2491 = UINT64_MAX;

	t92 = ((x2489&(x2490<x2491))>>x2492);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2513 = 3U;
	int16_t x2514 = -1;
	int32_t t93 = 28449674;

	t93 = ((x2513&(x2514<x2515))>>x2516);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2538 = -45701LL;
	volatile int32_t x2539 = -7;
	uint8_t x2540 = 4U;

	t94 = ((x2537&(x2538<x2539))>>x2540);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x2541 = 71010U;
	int64_t x2542 = -28862383LL;
	int16_t x2543 = 12;
	static uint32_t t95 = 127U;

	t95 = ((x2541&(x2542<x2543))>>x2544);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2545 = 1U;
	uint8_t x2546 = 2U;
	uint8_t x2547 = UINT8_MAX;
	uint16_t x2548 = 1U;
	int32_t t96 = 15;

	t96 = ((x2545&(x2546<x2547))>>x2548);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2705 = INT64_MAX;
	int16_t x2706 = -60;
	volatile int8_t x2707 = INT8_MAX;
	int16_t x2708 = 7;
	volatile int64_t t97 = 831LL;

	t97 = ((x2705&(x2706<x2707))>>x2708);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2729 = INT32_MIN;
	uint8_t x2730 = 76U;
	static int16_t x2731 = INT16_MAX;
	static volatile uint32_t x2732 = 15U;
	int32_t t98 = -591332757;

	t98 = ((x2729&(x2730<x2731))>>x2732);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x2765 = -105LL;
	static int32_t x2766 = INT32_MAX;
	uint32_t x2767 = UINT32_MAX;
	uint8_t x2768 = 42U;

	t99 = ((x2765&(x2766<x2767))>>x2768);

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

