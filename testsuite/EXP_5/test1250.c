#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x31 = 24U;
static int64_t x66 = INT64_MIN;
uint64_t x67 = UINT64_MAX;
volatile int8_t x73 = -1;
volatile int8_t x143 = INT8_MIN;
int32_t t6 = -49195212;
int16_t x185 = -1;
int32_t x187 = -1059;
int32_t x195 = INT32_MIN;
uint8_t x203 = 17U;
int16_t x396 = 3;
volatile uint32_t x411 = 483291U;
int32_t x422 = 496;
static uint16_t x424 = 1U;
volatile int16_t x465 = -1;
volatile int64_t x482 = -1LL;
int8_t x487 = INT8_MAX;
static int16_t x488 = 0;
static int32_t t16 = -7;
static volatile uint16_t x492 = 3U;
uint8_t x524 = 0U;
uint64_t x534 = UINT64_MAX;
volatile int32_t x581 = -252;
volatile uint32_t x589 = 76178645U;
static volatile uint8_t x591 = 1U;
int32_t x705 = 14438967;
static uint16_t x708 = 4U;
static int64_t x709 = 60878670369LL;
int32_t x722 = 21276123;
int32_t x773 = INT32_MIN;
int32_t x801 = INT32_MAX;
volatile int64_t x802 = -1LL;
uint64_t x937 = 1368640782LLU;
uint8_t x1007 = 0U;
int8_t x1081 = INT8_MIN;
int64_t x1170 = INT64_MIN;
int8_t x1224 = 13;
uint8_t x1231 = 8U;
uint32_t x1250 = 3696042U;
uint8_t x1300 = 0U;
static int32_t t41 = 5;
int32_t x1317 = INT32_MIN;
static volatile uint16_t x1324 = 3U;
int32_t t43 = -30;
volatile uint32_t x1370 = 5254431U;
static int8_t x1377 = -1;
int32_t x1380 = 6;
static uint8_t x1415 = UINT8_MAX;
static volatile int64_t t48 = INT64_MAX;
int64_t x1522 = -1LL;
static uint8_t x1589 = 25U;
static int16_t x1590 = INT16_MIN;
uint8_t x1592 = 5U;
int64_t x1609 = -1LL;
int64_t x1638 = INT64_MIN;
uint8_t x1640 = 5U;
int16_t x1654 = INT16_MAX;
uint32_t x1656 = 0U;
int32_t t56 = INT32_MAX;
int8_t x1697 = INT8_MAX;
static volatile int8_t x1699 = 1;
uint64_t x1773 = 2LLU;
static int16_t x1905 = -106;
static int8_t x1914 = -1;
uint8_t x1952 = 1U;
volatile int32_t t68 = 79291247;
uint16_t x2058 = 971U;
static volatile uint64_t x2150 = 204604993LLU;
static volatile int8_t x2177 = -1;
int32_t t73 = INT32_MIN;
uint64_t x2209 = 749199LLU;
int64_t x2306 = INT64_MIN;
static int16_t x2308 = 2;
int8_t x2415 = -2;
uint8_t x2482 = 5U;
volatile int8_t x2529 = -15;
int32_t t81 = -224943;
static uint32_t x2539 = UINT32_MAX;
int32_t x2641 = INT32_MIN;
int8_t x2644 = 3;
int64_t x2655 = -1LL;
int8_t x2761 = INT8_MIN;
volatile int16_t x2793 = -2;
static int32_t t89 = -31;
uint64_t x2821 = 8LLU;
int32_t x2824 = 1;
static uint8_t x2853 = 0U;
int32_t t93 = 3901130;
volatile int64_t x2887 = INT64_MIN;
int64_t x2930 = -1520319824965909LL;
int64_t x2941 = INT64_MIN;
uint64_t x2967 = 24LLU;
uint32_t t98 = UINT32_MAX;


void f0(void) {
	int8_t x29 = INT8_MAX;
	static uint16_t x30 = UINT16_MAX;
	int32_t x32 = 1;
	volatile int32_t t0 = -11;

	t0 = (x29-((x30==x31)<<x32));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x65 = INT16_MIN;
	int8_t x68 = 14;
	volatile int32_t t1 = 98044;

	t1 = (x65-((x66==x67)<<x68));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x74 = 1U;
	static int8_t x75 = 11;
	volatile uint8_t x76 = 21U;
	volatile int32_t t2 = 388874;

	t2 = (x73-((x74==x75)<<x76));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = -1;
	static int16_t x99 = 421;
	int8_t x100 = 20;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x97-((x98==x99)<<x100));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x105 = 6;
	uint16_t x106 = 1U;
	int8_t x107 = -1;
	static volatile uint32_t x108 = 0U;
	volatile int32_t t4 = -52781;

	t4 = (x105-((x106==x107)<<x108));

	if (t4 != 6) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x118 = 816U;
	int64_t x119 = INT64_MIN;
	int8_t x120 = 7;
	int64_t t5 = INT64_MIN;

	t5 = (x117-((x118==x119)<<x120));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x141 = INT16_MIN;
	int16_t x142 = -1;
	int32_t x144 = 0;

	t6 = (x141-((x142==x143)<<x144));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x186 = INT64_MIN;
	uint8_t x188 = 1U;
	int32_t t7 = 0;

	t7 = (x185-((x186==x187)<<x188));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x193 = 105U;
	volatile uint64_t x194 = 427790057456156217LLU;
	static int8_t x196 = 7;
	static volatile int32_t t8 = 4918444;

	t8 = (x193-((x194==x195)<<x196));

	if (t8 != 105) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x201 = INT8_MIN;
	volatile int32_t x202 = -25;
	volatile uint32_t x204 = 10U;
	volatile int32_t t9 = 197033;

	t9 = (x201-((x202==x203)<<x204));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int8_t x370 = -22;
	volatile int64_t x371 = INT64_MAX;
	int8_t x372 = 2;
	int32_t t10 = 21;

	t10 = (x369-((x370==x371)<<x372));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x393 = 2U;
	static volatile int64_t x394 = 446153148041534019LL;
	int16_t x395 = 0;
	volatile int32_t t11 = 4675;

	t11 = (x393-((x394==x395)<<x396));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x409 = -1;
	uint8_t x410 = 36U;
	int8_t x412 = 1;
	int32_t t12 = -75066;

	t12 = (x409-((x410==x411)<<x412));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x421 = 11458350U;
	int16_t x423 = INT16_MIN;
	volatile uint32_t t13 = 1676U;

	t13 = (x421-((x422==x423)<<x424));

	if (t13 != 11458350U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x466 = -32;
	int16_t x467 = INT16_MIN;
	volatile uint8_t x468 = 11U;
	static volatile int32_t t14 = -85691581;

	t14 = (x465-((x466==x467)<<x468));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x481 = -1;
	int64_t x483 = INT64_MAX;
	uint8_t x484 = 31U;
	volatile int32_t t15 = -30438;

	t15 = (x481-((x482==x483)<<x484));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x485 = -426;
	static int32_t x486 = -1;

	t16 = (x485-((x486==x487)<<x488));

	if (t16 != -426) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x489 = INT8_MIN;
	volatile int8_t x490 = -53;
	int32_t x491 = 179444221;
	int32_t t17 = 2313612;

	t17 = (x489-((x490==x491)<<x492));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x521 = INT64_MIN;
	int32_t x522 = 87088759;
	volatile int32_t x523 = INT32_MIN;
	int64_t t18 = INT64_MIN;

	t18 = (x521-((x522==x523)<<x524));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x533 = 24394;
	int64_t x535 = INT64_MIN;
	uint8_t x536 = 23U;
	volatile int32_t t19 = -6492775;

	t19 = (x533-((x534==x535)<<x536));

	if (t19 != 24394) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x582 = INT32_MAX;
	uint8_t x583 = 10U;
	uint16_t x584 = 1U;
	int32_t t20 = -12998875;

	t20 = (x581-((x582==x583)<<x584));

	if (t20 != -252) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x590 = INT8_MIN;
	volatile uint16_t x592 = 9U;
	uint32_t t21 = 102426457U;

	t21 = (x589-((x590==x591)<<x592));

	if (t21 != 76178645U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x689 = 784764LLU;
	int32_t x690 = INT32_MAX;
	volatile int64_t x691 = -1LL;
	volatile uint8_t x692 = 14U;
	volatile uint64_t t22 = 27LLU;

	t22 = (x689-((x690==x691)<<x692));

	if (t22 != 784764LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x706 = INT8_MIN;
	static uint32_t x707 = UINT32_MAX;
	volatile int32_t t23 = 15450379;

	t23 = (x705-((x706==x707)<<x708));

	if (t23 != 14438967) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x710 = -1;
	uint16_t x711 = UINT16_MAX;
	static volatile uint16_t x712 = 6U;
	static volatile int64_t t24 = 74846863LL;

	t24 = (x709-((x710==x711)<<x712));

	if (t24 != 60878670369LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x721 = 1U;
	static int64_t x723 = INT64_MAX;
	volatile uint16_t x724 = 13U;
	static volatile int32_t t25 = -31;

	t25 = (x721-((x722==x723)<<x724));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x774 = INT8_MIN;
	volatile int8_t x775 = INT8_MAX;
	volatile uint32_t x776 = 5U;
	int32_t t26 = INT32_MIN;

	t26 = (x773-((x774==x775)<<x776));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x793 = INT8_MIN;
	int64_t x794 = INT64_MIN;
	int16_t x795 = 356;
	static int8_t x796 = 3;
	int32_t t27 = 25972;

	t27 = (x793-((x794==x795)<<x796));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x803 = INT8_MIN;
	uint8_t x804 = 0U;
	int32_t t28 = INT32_MAX;

	t28 = (x801-((x802==x803)<<x804));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x845 = 275709U;
	static int8_t x846 = 3;
	int64_t x847 = INT64_MIN;
	int8_t x848 = 29;
	volatile uint32_t t29 = 14U;

	t29 = (x845-((x846==x847)<<x848));

	if (t29 != 275709U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x938 = 18023U;
	uint64_t x939 = UINT64_MAX;
	static volatile int8_t x940 = 0;
	uint64_t t30 = 4505LLU;

	t30 = (x937-((x938==x939)<<x940));

	if (t30 != 1368640782LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1005 = 31;
	uint32_t x1006 = 1963044U;
	int8_t x1008 = 26;
	volatile int32_t t31 = -13;

	t31 = (x1005-((x1006==x1007)<<x1008));

	if (t31 != 31) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1053 = INT8_MIN;
	static volatile uint8_t x1054 = 1U;
	int16_t x1055 = -142;
	static uint8_t x1056 = 0U;
	int32_t t32 = -1;

	t32 = (x1053-((x1054==x1055)<<x1056));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x1082 = 7U;
	static int16_t x1083 = INT16_MIN;
	int8_t x1084 = 0;
	volatile int32_t t33 = 295;

	t33 = (x1081-((x1082==x1083)<<x1084));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1097 = 0;
	int8_t x1098 = INT8_MAX;
	uint64_t x1099 = 6693129LLU;
	static int8_t x1100 = 0;
	static volatile int32_t t34 = 10266801;

	t34 = (x1097-((x1098==x1099)<<x1100));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1169 = INT16_MIN;
	volatile uint16_t x1171 = 195U;
	volatile int32_t x1172 = 1;
	volatile int32_t t35 = -708053;

	t35 = (x1169-((x1170==x1171)<<x1172));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1209 = 1835U;
	uint64_t x1210 = 28815052LLU;
	uint64_t x1211 = 1098398683004969LLU;
	volatile int8_t x1212 = 11;
	volatile int32_t t36 = 666;

	t36 = (x1209-((x1210==x1211)<<x1212));

	if (t36 != 1835) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x1221 = 665U;
	static int16_t x1222 = -1;
	int32_t x1223 = INT32_MIN;
	static int32_t t37 = 1;

	t37 = (x1221-((x1222==x1223)<<x1224));

	if (t37 != 665) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1229 = -4160472903854512LL;
	uint16_t x1230 = 1U;
	int16_t x1232 = 2;
	int64_t t38 = 6805LL;

	t38 = (x1229-((x1230==x1231)<<x1232));

	if (t38 != -4160472903854512LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1249 = INT64_MIN;
	volatile uint64_t x1251 = 6LLU;
	uint8_t x1252 = 5U;
	volatile int64_t t39 = INT64_MIN;

	t39 = (x1249-((x1250==x1251)<<x1252));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x1277 = -1;
	static int16_t x1278 = INT16_MAX;
	volatile int32_t x1279 = 21051405;
	uint8_t x1280 = 23U;
	volatile int32_t t40 = 247;

	t40 = (x1277-((x1278==x1279)<<x1280));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1297 = 1612;
	volatile int8_t x1298 = INT8_MIN;
	volatile int64_t x1299 = INT64_MAX;

	t41 = (x1297-((x1298==x1299)<<x1300));

	if (t41 != 1612) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x1318 = -704914LL;
	uint32_t x1319 = 46773U;
	uint16_t x1320 = 28U;
	int32_t t42 = INT32_MIN;

	t42 = (x1317-((x1318==x1319)<<x1320));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1321 = -1;
	volatile int32_t x1322 = -85211;
	int32_t x1323 = INT32_MIN;

	t43 = (x1321-((x1322==x1323)<<x1324));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x1369 = -494627127844LL;
	volatile uint16_t x1371 = UINT16_MAX;
	int8_t x1372 = 1;
	int64_t t44 = 14LL;

	t44 = (x1369-((x1370==x1371)<<x1372));

	if (t44 != -494627127844LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1378 = 759LL;
	static int8_t x1379 = 3;
	int32_t t45 = 31231796;

	t45 = (x1377-((x1378==x1379)<<x1380));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1413 = -1;
	int64_t x1414 = -1LL;
	static int64_t x1416 = 3LL;
	volatile int32_t t46 = 733015505;

	t46 = (x1413-((x1414==x1415)<<x1416));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1445 = 5U;
	volatile uint32_t x1446 = 2871U;
	int16_t x1447 = -13810;
	uint8_t x1448 = 2U;
	static int32_t t47 = 9632570;

	t47 = (x1445-((x1446==x1447)<<x1448));

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1505 = INT64_MAX;
	int8_t x1506 = INT8_MIN;
	int32_t x1507 = INT32_MAX;
	uint8_t x1508 = 15U;

	t48 = (x1505-((x1506==x1507)<<x1508));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1521 = 2;
	uint8_t x1523 = UINT8_MAX;
	static uint8_t x1524 = 0U;
	static volatile int32_t t49 = -126514;

	t49 = (x1521-((x1522==x1523)<<x1524));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1529 = INT16_MIN;
	uint64_t x1530 = 556679343114791182LLU;
	int64_t x1531 = INT64_MIN;
	int16_t x1532 = 13;
	volatile int32_t t50 = 3;

	t50 = (x1529-((x1530==x1531)<<x1532));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1561 = INT64_MIN;
	int64_t x1562 = INT64_MAX;
	int16_t x1563 = INT16_MIN;
	static int64_t x1564 = 2LL;
	static int64_t t51 = INT64_MIN;

	t51 = (x1561-((x1562==x1563)<<x1564));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1591 = 4047U;
	volatile int32_t t52 = -9;

	t52 = (x1589-((x1590==x1591)<<x1592));

	if (t52 != 25) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x1610 = 1160;
	int8_t x1611 = INT8_MIN;
	static volatile uint8_t x1612 = 3U;
	int64_t t53 = -1LL;

	t53 = (x1609-((x1610==x1611)<<x1612));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1637 = 2799843910389LLU;
	volatile int64_t x1639 = -1LL;
	static uint64_t t54 = 4282LLU;

	t54 = (x1637-((x1638==x1639)<<x1640));

	if (t54 != 2799843910389LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1653 = -1;
	int8_t x1655 = INT8_MAX;
	int32_t t55 = 1;

	t55 = (x1653-((x1654==x1655)<<x1656));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1677 = INT32_MAX;
	uint32_t x1678 = UINT32_MAX;
	int64_t x1679 = INT64_MIN;
	uint8_t x1680 = 10U;

	t56 = (x1677-((x1678==x1679)<<x1680));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1698 = 13;
	int16_t x1700 = 0;
	volatile int32_t t57 = -8;

	t57 = (x1697-((x1698==x1699)<<x1700));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1741 = INT32_MAX;
	int32_t x1742 = -1;
	static uint64_t x1743 = 7235336865076377260LLU;
	uint8_t x1744 = 1U;
	int32_t t58 = INT32_MAX;

	t58 = (x1741-((x1742==x1743)<<x1744));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x1774 = 3;
	volatile int64_t x1775 = -1LL;
	volatile uint8_t x1776 = 0U;
	uint64_t t59 = 523LLU;

	t59 = (x1773-((x1774==x1775)<<x1776));

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x1793 = UINT16_MAX;
	int64_t x1794 = 16207592647LL;
	uint32_t x1795 = 246484U;
	volatile uint64_t x1796 = 5LLU;
	static volatile int32_t t60 = -16300;

	t60 = (x1793-((x1794==x1795)<<x1796));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1813 = 11U;
	int32_t x1814 = 922;
	int32_t x1815 = INT32_MIN;
	int8_t x1816 = 1;
	volatile int32_t t61 = 6859346;

	t61 = (x1813-((x1814==x1815)<<x1816));

	if (t61 != 11) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x1889 = INT8_MIN;
	int16_t x1890 = INT16_MIN;
	int8_t x1891 = INT8_MIN;
	volatile uint8_t x1892 = 13U;
	volatile int32_t t62 = 1;

	t62 = (x1889-((x1890==x1891)<<x1892));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1906 = -7;
	int16_t x1907 = -2;
	static int16_t x1908 = 0;
	int32_t t63 = 402414;

	t63 = (x1905-((x1906==x1907)<<x1908));

	if (t63 != -106) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x1913 = UINT16_MAX;
	static int32_t x1915 = -1;
	uint32_t x1916 = 3U;
	volatile int32_t t64 = -232500;

	t64 = (x1913-((x1914==x1915)<<x1916));

	if (t64 != 65527) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x1949 = 188827442U;
	static uint16_t x1950 = UINT16_MAX;
	volatile int8_t x1951 = INT8_MIN;
	uint32_t t65 = 183076U;

	t65 = (x1949-((x1950==x1951)<<x1952));

	if (t65 != 188827442U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1969 = INT32_MAX;
	volatile int32_t x1970 = -92110;
	int8_t x1971 = 13;
	int8_t x1972 = 23;
	volatile int32_t t66 = INT32_MAX;

	t66 = (x1969-((x1970==x1971)<<x1972));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1977 = -1;
	static int64_t x1978 = -368582LL;
	volatile int8_t x1979 = -38;
	static volatile uint8_t x1980 = 4U;
	volatile int32_t t67 = 10924883;

	t67 = (x1977-((x1978==x1979)<<x1980));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1985 = UINT8_MAX;
	int16_t x1986 = 463;
	uint16_t x1987 = 125U;
	uint32_t x1988 = 3U;

	t68 = (x1985-((x1986==x1987)<<x1988));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2057 = 7LL;
	int8_t x2059 = INT8_MIN;
	static volatile uint8_t x2060 = 2U;
	volatile int64_t t69 = 7278LL;

	t69 = (x2057-((x2058==x2059)<<x2060));

	if (t69 != 7LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2125 = 5U;
	int16_t x2126 = 563;
	static volatile uint64_t x2127 = UINT64_MAX;
	static volatile uint64_t x2128 = 18LLU;
	volatile int32_t t70 = -5089;

	t70 = (x2125-((x2126==x2127)<<x2128));

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x2149 = 508U;
	static int32_t x2151 = INT32_MIN;
	uint16_t x2152 = 13U;
	volatile int32_t t71 = -533;

	t71 = (x2149-((x2150==x2151)<<x2152));

	if (t71 != 508) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x2178 = INT16_MIN;
	volatile uint64_t x2179 = 2946237519325716597LLU;
	volatile uint8_t x2180 = 2U;
	static volatile int32_t t72 = 1;

	t72 = (x2177-((x2178==x2179)<<x2180));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2197 = INT32_MIN;
	static int32_t x2198 = 182118573;
	volatile uint64_t x2199 = 664LLU;
	uint8_t x2200 = 0U;

	t73 = (x2197-((x2198==x2199)<<x2200));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2205 = UINT64_MAX;
	static uint8_t x2206 = 6U;
	int32_t x2207 = INT32_MIN;
	static uint8_t x2208 = 0U;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x2205-((x2206==x2207)<<x2208));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2210 = INT16_MIN;
	volatile int16_t x2211 = 2;
	int64_t x2212 = 6LL;
	volatile uint64_t t75 = 1016561813LLU;

	t75 = (x2209-((x2210==x2211)<<x2212));

	if (t75 != 749199LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2305 = INT16_MIN;
	int32_t x2307 = -1;
	static int32_t t76 = -2852505;

	t76 = (x2305-((x2306==x2307)<<x2308));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x2409 = INT16_MAX;
	int8_t x2410 = INT8_MIN;
	volatile int16_t x2411 = -1;
	int32_t x2412 = 21;
	int32_t t77 = 24;

	t77 = (x2409-((x2410==x2411)<<x2412));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2413 = INT64_MIN;
	uint64_t x2414 = 680LLU;
	volatile int8_t x2416 = 1;
	volatile int64_t t78 = INT64_MIN;

	t78 = (x2413-((x2414==x2415)<<x2416));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x2441 = UINT32_MAX;
	static int16_t x2442 = -1;
	uint16_t x2443 = UINT16_MAX;
	uint16_t x2444 = 0U;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = (x2441-((x2442==x2443)<<x2444));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2481 = INT32_MAX;
	int64_t x2483 = INT64_MIN;
	int8_t x2484 = 14;
	int32_t t80 = INT32_MAX;

	t80 = (x2481-((x2482==x2483)<<x2484));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2530 = 7LLU;
	static uint8_t x2531 = UINT8_MAX;
	int8_t x2532 = 28;

	t81 = (x2529-((x2530==x2531)<<x2532));

	if (t81 != -15) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x2537 = INT8_MIN;
	uint64_t x2538 = UINT64_MAX;
	static volatile uint8_t x2540 = 7U;
	volatile int32_t t82 = 79561;

	t82 = (x2537-((x2538==x2539)<<x2540));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x2573 = INT64_MIN;
	volatile int32_t x2574 = INT32_MIN;
	int16_t x2575 = 664;
	int32_t x2576 = 3;
	static volatile int64_t t83 = INT64_MIN;

	t83 = (x2573-((x2574==x2575)<<x2576));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x2642 = 0U;
	int8_t x2643 = -12;
	int32_t t84 = INT32_MIN;

	t84 = (x2641-((x2642==x2643)<<x2644));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2653 = INT64_MIN;
	int64_t x2654 = -16258499LL;
	static int8_t x2656 = 1;
	int64_t t85 = INT64_MIN;

	t85 = (x2653-((x2654==x2655)<<x2656));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x2665 = INT8_MIN;
	volatile uint8_t x2666 = 3U;
	int8_t x2667 = INT8_MIN;
	uint16_t x2668 = 0U;
	int32_t t86 = 24859;

	t86 = (x2665-((x2666==x2667)<<x2668));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x2737 = INT8_MIN;
	int16_t x2738 = -1;
	int16_t x2739 = -1113;
	uint64_t x2740 = 8LLU;
	volatile int32_t t87 = -202;

	t87 = (x2737-((x2738==x2739)<<x2740));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2762 = 3867U;
	uint16_t x2763 = UINT16_MAX;
	int8_t x2764 = 2;
	static volatile int32_t t88 = -38229881;

	t88 = (x2761-((x2762==x2763)<<x2764));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2794 = 215;
	static int16_t x2795 = 1;
	volatile int8_t x2796 = 1;

	t89 = (x2793-((x2794==x2795)<<x2796));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2822 = UINT16_MAX;
	uint16_t x2823 = 6799U;
	volatile uint64_t t90 = 918064LLU;

	t90 = (x2821-((x2822==x2823)<<x2824));

	if (t90 != 8LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2837 = UINT32_MAX;
	uint32_t x2838 = 139899737U;
	int32_t x2839 = 392;
	uint16_t x2840 = 0U;
	uint32_t t91 = UINT32_MAX;

	t91 = (x2837-((x2838==x2839)<<x2840));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2845 = 14471793376285103LL;
	int32_t x2846 = -1;
	int16_t x2847 = -1;
	static int8_t x2848 = 1;
	int64_t t92 = 90930825497651LL;

	t92 = (x2845-((x2846==x2847)<<x2848));

	if (t92 != 14471793376285101LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2854 = INT8_MIN;
	volatile int16_t x2855 = INT16_MAX;
	uint32_t x2856 = 15U;

	t93 = (x2853-((x2854==x2855)<<x2856));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x2885 = INT16_MAX;
	uint64_t x2886 = 19740LLU;
	uint8_t x2888 = 1U;
	volatile int32_t t94 = -209438;

	t94 = (x2885-((x2886==x2887)<<x2888));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2929 = -1;
	int16_t x2931 = INT16_MIN;
	static uint8_t x2932 = 14U;
	volatile int32_t t95 = -3360;

	t95 = (x2929-((x2930==x2931)<<x2932));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2942 = 6U;
	volatile int32_t x2943 = INT32_MAX;
	int32_t x2944 = 0;
	volatile int64_t t96 = INT64_MIN;

	t96 = (x2941-((x2942==x2943)<<x2944));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2945 = -4;
	int64_t x2946 = INT64_MAX;
	static uint8_t x2947 = UINT8_MAX;
	uint8_t x2948 = 16U;
	volatile int32_t t97 = 18;

	t97 = (x2945-((x2946==x2947)<<x2948));

	if (t97 != -4) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2965 = UINT32_MAX;
	int64_t x2966 = -1063600154112015LL;
	static volatile uint8_t x2968 = 0U;

	t98 = (x2965-((x2966==x2967)<<x2968));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x2981 = INT16_MIN;
	uint32_t x2982 = UINT32_MAX;
	int8_t x2983 = INT8_MIN;
	uint8_t x2984 = 6U;
	static volatile int32_t t99 = -45382826;

	t99 = (x2981-((x2982==x2983)<<x2984));

	if (t99 != -32768) { NG(); } else { ; }
	
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

