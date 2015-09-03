#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x170 = 2U;
uint64_t x282 = 70007LLU;
uint16_t x306 = UINT16_MAX;
int32_t t5 = 63966049;
int16_t x413 = INT16_MIN;
uint16_t x416 = 1U;
int16_t x417 = 11;
volatile int16_t x453 = INT16_MIN;
static uint16_t x456 = 27383U;
static int16_t x645 = INT16_MIN;
int32_t x647 = 4;
static volatile int32_t t14 = 494369480;
int16_t x762 = 59;
static uint64_t x897 = UINT64_MAX;
static int64_t x898 = 107LL;
volatile int16_t x914 = 151;
uint64_t x962 = 23560LLU;
int64_t x965 = INT64_MIN;
static int64_t x1092 = -1LL;
int32_t t21 = -580939623;
int8_t x1132 = -1;
static uint8_t x1491 = 42U;
int32_t x1513 = INT32_MAX;
int32_t x1516 = INT32_MAX;
static int8_t x1520 = INT8_MIN;
int64_t x1546 = 51372LL;
int32_t x1605 = -1;
int32_t x1645 = 59;
int32_t x1647 = 13;
int32_t x1648 = -14;
static int16_t x1666 = INT16_MAX;
static uint8_t x1699 = 7U;
uint16_t x1723 = 28U;
int64_t x1794 = 41LL;
static int8_t x1801 = INT8_MAX;
uint8_t x1803 = 23U;
volatile int32_t t38 = -781507;
uint8_t x1843 = 1U;
volatile uint64_t t39 = UINT64_MAX;
volatile int64_t t40 = INT64_MAX;
uint8_t x2153 = 0U;
volatile uint8_t x2155 = 0U;
static int8_t x2183 = 4;
int16_t x2184 = -1;
static int32_t t44 = 2746690;
int32_t x2194 = INT32_MAX;
int32_t x2217 = -467;
uint16_t x2220 = UINT16_MAX;
static uint8_t x2247 = 1U;
uint64_t x2268 = 17562LLU;
int64_t t50 = -400LL;
static int32_t x2357 = 533208495;
volatile int64_t x2358 = INT64_MAX;
volatile int32_t t52 = -129595100;
volatile int32_t x2431 = 0;
static int8_t x2450 = INT8_MAX;
int16_t x2451 = 18;
int8_t x2505 = 0;
volatile int32_t x2518 = INT32_MAX;
volatile int8_t x2520 = -1;
volatile int32_t x2630 = 1815370;
uint8_t x2811 = 3U;
static volatile int64_t x2812 = 30633157238556054LL;
uint64_t t59 = 23357709866472103LLU;
volatile uint8_t x2815 = 0U;
int32_t x2816 = INT32_MIN;
volatile int32_t t60 = 534103;
static uint8_t x2830 = UINT8_MAX;
uint8_t x2847 = 1U;
static volatile uint16_t x3079 = 20U;
volatile int32_t t65 = -25255;
uint16_t x3198 = 104U;
int32_t t67 = INT32_MAX;
static uint64_t x3301 = UINT64_MAX;
uint16_t x3302 = UINT16_MAX;
int16_t x3309 = INT16_MIN;
volatile int8_t x3311 = 9;
int32_t t70 = -51128;
int64_t x3554 = 46029806LL;
uint8_t x3751 = 13U;
volatile uint32_t x3889 = UINT32_MAX;
volatile int32_t t75 = -1052401850;
volatile int64_t x4146 = 6LL;
volatile int64_t t79 = -1LL;
int8_t x4533 = 42;
int32_t t84 = 1;
uint64_t x4592 = UINT64_MAX;
static volatile int64_t t89 = 4175083LL;
uint8_t x5002 = UINT8_MAX;
int32_t t91 = 691151571;
int8_t x5041 = 7;
int8_t x5042 = INT8_MAX;
static volatile int32_t t92 = 925540594;
static uint32_t x5162 = 118961866U;
int32_t t93 = -36401360;
static int32_t x5180 = INT32_MIN;
static uint64_t x5274 = 1518393027LLU;
static int8_t x5276 = -1;
volatile uint64_t t95 = 836017868134945LLU;
int32_t x5353 = -1;
int64_t x5373 = INT64_MAX;
static uint64_t x5449 = UINT64_MAX;
uint32_t x5451 = 30U;
static int16_t x5452 = -3062;


void f0(void) {
	uint64_t x65 = 103030453909083LLU;
	int64_t x66 = INT64_MAX;
	int32_t x67 = 2;
	volatile uint32_t x68 = 1U;
	volatile uint64_t t0 = 686509892076530LLU;

	t0 = (x65^((x66>>x67)<=x68));

	if (t0 != 103030453909083LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x109 = -1;
	static volatile int32_t x110 = 1;
	uint64_t x111 = 0LLU;
	uint8_t x112 = 80U;
	volatile int32_t t1 = 139174;

	t1 = (x109^((x110>>x111)<=x112));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x169 = 1;
	uint64_t x171 = 20LLU;
	volatile uint32_t x172 = 1882145U;
	int32_t t2 = 4637729;

	t2 = (x169^((x170>>x171)<=x172));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x281 = INT32_MIN;
	uint8_t x283 = 32U;
	static uint16_t x284 = 13631U;
	volatile int32_t t3 = -30284;

	t3 = (x281^((x282>>x283)<=x284));

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x301 = 96895185113095LL;
	int8_t x302 = INT8_MAX;
	volatile uint16_t x303 = 17U;
	uint32_t x304 = 1U;
	static volatile int64_t t4 = 6LL;

	t4 = (x301^((x302>>x303)<=x304));

	if (t4 != 96895185113094LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x305 = INT8_MAX;
	int8_t x307 = 11;
	uint16_t x308 = UINT16_MAX;

	t5 = (x305^((x306>>x307)<=x308));

	if (t5 != 126) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x361 = -1363;
	int32_t x362 = 49317057;
	uint8_t x363 = 26U;
	uint16_t x364 = UINT16_MAX;
	int32_t t6 = 669;

	t6 = (x361^((x362>>x363)<=x364));

	if (t6 != -1364) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x414 = 5993LL;
	int32_t x415 = 0;
	static volatile int32_t t7 = -29738682;

	t7 = (x413^((x414>>x415)<=x416));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x418 = INT16_MAX;
	int8_t x419 = 0;
	volatile uint16_t x420 = 23257U;
	int32_t t8 = -72241451;

	t8 = (x417^((x418>>x419)<=x420));

	if (t8 != 11) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x454 = 216142LLU;
	volatile int8_t x455 = 17;
	volatile int32_t t9 = 742193;

	t9 = (x453^((x454>>x455)<=x456));

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x481 = 376693U;
	uint16_t x482 = UINT16_MAX;
	uint8_t x483 = 0U;
	int8_t x484 = INT8_MIN;
	static uint32_t t10 = 1806111292U;

	t10 = (x481^((x482>>x483)<=x484));

	if (t10 != 376693U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x489 = UINT32_MAX;
	static uint16_t x490 = 470U;
	uint16_t x491 = 13U;
	int16_t x492 = INT16_MAX;
	static volatile uint32_t t11 = 48U;

	t11 = (x489^((x490>>x491)<=x492));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x505 = INT16_MIN;
	volatile uint32_t x506 = 3583U;
	static int8_t x507 = 22;
	volatile uint8_t x508 = UINT8_MAX;
	static int32_t t12 = 1542;

	t12 = (x505^((x506>>x507)<=x508));

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x613 = INT8_MIN;
	int16_t x614 = 927;
	static volatile uint16_t x615 = 7U;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t13 = -4990;

	t13 = (x613^((x614>>x615)<=x616));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x646 = 946;
	uint32_t x648 = 418391766U;

	t14 = (x645^((x646>>x647)<=x648));

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x761 = 26283U;
	int32_t x763 = 20;
	int32_t x764 = 3;
	uint32_t t15 = 2143U;

	t15 = (x761^((x762>>x763)<=x764));

	if (t15 != 26282U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x899 = 0;
	static int32_t x900 = INT32_MAX;
	volatile uint64_t t16 = 870LLU;

	t16 = (x897^((x898>>x899)<=x900));

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x913 = UINT64_MAX;
	int32_t x915 = 6;
	uint16_t x916 = 6624U;
	static uint64_t t17 = 42215796LLU;

	t17 = (x913^((x914>>x915)<=x916));

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x961 = 2897;
	uint8_t x963 = 60U;
	int16_t x964 = INT16_MIN;
	volatile int32_t t18 = 50091;

	t18 = (x961^((x962>>x963)<=x964));

	if (t18 != 2896) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x966 = INT64_MAX;
	uint8_t x967 = 17U;
	int64_t x968 = -1LL;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x965^((x966>>x967)<=x968));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1089 = INT16_MIN;
	static uint64_t x1090 = UINT64_MAX;
	int16_t x1091 = 44;
	int32_t t20 = 28;

	t20 = (x1089^((x1090>>x1091)<=x1092));

	if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1125 = -1;
	volatile uint16_t x1126 = UINT16_MAX;
	volatile uint32_t x1127 = 24U;
	int64_t x1128 = INT64_MIN;

	t21 = (x1125^((x1126>>x1127)<=x1128));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x1129 = 50U;
	int16_t x1130 = INT16_MAX;
	uint8_t x1131 = 5U;
	static int32_t t22 = -565;

	t22 = (x1129^((x1130>>x1131)<=x1132));

	if (t22 != 50) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1333 = 5;
	int16_t x1334 = 11302;
	uint8_t x1335 = 23U;
	int8_t x1336 = INT8_MAX;
	int32_t t23 = 974963;

	t23 = (x1333^((x1334>>x1335)<=x1336));

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1393 = INT16_MAX;
	int16_t x1394 = INT16_MAX;
	uint16_t x1395 = 6U;
	static int32_t x1396 = INT32_MIN;
	int32_t t24 = -446045;

	t24 = (x1393^((x1394>>x1395)<=x1396));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1437 = -382;
	int8_t x1438 = INT8_MAX;
	uint8_t x1439 = 0U;
	int8_t x1440 = INT8_MIN;
	volatile int32_t t25 = 1;

	t25 = (x1437^((x1438>>x1439)<=x1440));

	if (t25 != -382) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1489 = INT8_MIN;
	int64_t x1490 = 685899LL;
	int32_t x1492 = 24290;
	static int32_t t26 = 14;

	t26 = (x1489^((x1490>>x1491)<=x1492));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1514 = 1;
	volatile uint8_t x1515 = 30U;
	static volatile int32_t t27 = 346672;

	t27 = (x1513^((x1514>>x1515)<=x1516));

	if (t27 != 2147483646) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1517 = INT8_MIN;
	uint32_t x1518 = 390695535U;
	uint16_t x1519 = 1U;
	static int32_t t28 = 0;

	t28 = (x1517^((x1518>>x1519)<=x1520));

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1545 = INT16_MIN;
	int64_t x1547 = 0LL;
	int8_t x1548 = -1;
	static volatile int32_t t29 = 2231;

	t29 = (x1545^((x1546>>x1547)<=x1548));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1606 = 73703481LL;
	uint32_t x1607 = 12U;
	static int8_t x1608 = INT8_MIN;
	int32_t t30 = 0;

	t30 = (x1605^((x1606>>x1607)<=x1608));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1646 = 1U;
	int32_t t31 = 159;

	t31 = (x1645^((x1646>>x1647)<=x1648));

	if (t31 != 59) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x1665 = 1429;
	uint64_t x1667 = 8LLU;
	uint32_t x1668 = UINT32_MAX;
	int32_t t32 = 2055;

	t32 = (x1665^((x1666>>x1667)<=x1668));

	if (t32 != 1428) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1697 = UINT8_MAX;
	uint64_t x1698 = 505456278306124LLU;
	uint64_t x1700 = 12600043LLU;
	int32_t t33 = 1;

	t33 = (x1697^((x1698>>x1699)<=x1700));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1721 = -5;
	int16_t x1722 = 1253;
	volatile uint64_t x1724 = 160801LLU;
	int32_t t34 = -6;

	t34 = (x1721^((x1722>>x1723)<=x1724));

	if (t34 != -6) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1725 = -1;
	uint16_t x1726 = 438U;
	uint8_t x1727 = 8U;
	int64_t x1728 = INT64_MAX;
	volatile int32_t t35 = -505463;

	t35 = (x1725^((x1726>>x1727)<=x1728));

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1793 = 2U;
	int8_t x1795 = 1;
	static uint16_t x1796 = UINT16_MAX;
	int32_t t36 = 26529;

	t36 = (x1793^((x1794>>x1795)<=x1796));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1802 = 21U;
	static uint16_t x1804 = 6U;
	int32_t t37 = 956614447;

	t37 = (x1801^((x1802>>x1803)<=x1804));

	if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1837 = 7759;
	volatile int16_t x1838 = 3;
	uint32_t x1839 = 9U;
	int64_t x1840 = -1LL;

	t38 = (x1837^((x1838>>x1839)<=x1840));

	if (t38 != 7759) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1841 = UINT64_MAX;
	volatile int32_t x1842 = INT32_MAX;
	static volatile uint16_t x1844 = 81U;

	t39 = (x1841^((x1842>>x1843)<=x1844));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1981 = INT64_MAX;
	static uint16_t x1982 = UINT16_MAX;
	static int8_t x1983 = 2;
	static int32_t x1984 = INT32_MIN;

	t40 = (x1981^((x1982>>x1983)<=x1984));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2045 = INT16_MIN;
	int32_t x2046 = 256718;
	uint32_t x2047 = 0U;
	static int32_t x2048 = 22;
	int32_t t41 = -2;

	t41 = (x2045^((x2046>>x2047)<=x2048));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2154 = 0U;
	int64_t x2156 = INT64_MIN;
	volatile int32_t t42 = 191065;

	t42 = (x2153^((x2154>>x2155)<=x2156));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2165 = 1662;
	volatile int32_t x2166 = INT32_MAX;
	volatile uint16_t x2167 = 7U;
	int32_t x2168 = 1;
	int32_t t43 = -855564520;

	t43 = (x2165^((x2166>>x2167)<=x2168));

	if (t43 != 1662) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2181 = 2;
	static uint64_t x2182 = 206147761137347LLU;

	t44 = (x2181^((x2182>>x2183)<=x2184));

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2193 = 97;
	uint8_t x2195 = 3U;
	volatile int32_t x2196 = 724095369;
	int32_t t45 = 20;

	t45 = (x2193^((x2194>>x2195)<=x2196));

	if (t45 != 96) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2218 = INT8_MAX;
	uint8_t x2219 = 1U;
	static volatile int32_t t46 = -1273937;

	t46 = (x2217^((x2218>>x2219)<=x2220));

	if (t46 != -468) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2237 = 100U;
	int64_t x2238 = 31356044299921374LL;
	static int8_t x2239 = 5;
	int8_t x2240 = 1;
	uint32_t t47 = 35U;

	t47 = (x2237^((x2238>>x2239)<=x2240));

	if (t47 != 100U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x2245 = 99793;
	int8_t x2246 = 1;
	static volatile int64_t x2248 = INT64_MIN;
	volatile int32_t t48 = 675779474;

	t48 = (x2245^((x2246>>x2247)<=x2248));

	if (t48 != 99793) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2261 = INT32_MIN;
	int64_t x2262 = 159285483LL;
	static volatile int32_t x2263 = 1;
	volatile int16_t x2264 = INT16_MIN;
	int32_t t49 = INT32_MIN;

	t49 = (x2261^((x2262>>x2263)<=x2264));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2265 = INT64_MIN;
	uint8_t x2266 = 6U;
	uint8_t x2267 = 0U;

	t50 = (x2265^((x2266>>x2267)<=x2268));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2359 = 51;
	uint64_t x2360 = 8042832800735672LLU;
	int32_t t51 = 57306038;

	t51 = (x2357^((x2358>>x2359)<=x2360));

	if (t51 != 533208494) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2361 = INT16_MAX;
	volatile int16_t x2362 = INT16_MAX;
	volatile int8_t x2363 = 2;
	int8_t x2364 = INT8_MIN;

	t52 = (x2361^((x2362>>x2363)<=x2364));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x2381 = -1536;
	static volatile int64_t x2382 = 13358906700LL;
	uint8_t x2383 = 24U;
	static volatile int8_t x2384 = -1;
	static volatile int32_t t53 = 2388;

	t53 = (x2381^((x2382>>x2383)<=x2384));

	if (t53 != -1536) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2429 = UINT16_MAX;
	static int8_t x2430 = INT8_MAX;
	int32_t x2432 = 369207;
	static int32_t t54 = 41350967;

	t54 = (x2429^((x2430>>x2431)<=x2432));

	if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x2449 = UINT16_MAX;
	volatile uint64_t x2452 = 65367LLU;
	int32_t t55 = 168962;

	t55 = (x2449^((x2450>>x2451)<=x2452));

	if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x2506 = UINT64_MAX;
	uint16_t x2507 = 0U;
	int8_t x2508 = -10;
	int32_t t56 = 0;

	t56 = (x2505^((x2506>>x2507)<=x2508));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2517 = -7;
	int8_t x2519 = 13;
	volatile int32_t t57 = -2;

	t57 = (x2517^((x2518>>x2519)<=x2520));

	if (t57 != -7) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2629 = INT16_MIN;
	volatile uint16_t x2631 = 0U;
	int16_t x2632 = INT16_MIN;
	volatile int32_t t58 = 27319;

	t58 = (x2629^((x2630>>x2631)<=x2632));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2809 = 21262849316LLU;
	uint8_t x2810 = 14U;

	t59 = (x2809^((x2810>>x2811)<=x2812));

	if (t59 != 21262849317LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2813 = UINT16_MAX;
	int32_t x2814 = INT32_MAX;

	t60 = (x2813^((x2814>>x2815)<=x2816));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x2829 = UINT16_MAX;
	int16_t x2831 = 0;
	int8_t x2832 = INT8_MIN;
	int32_t t61 = 0;

	t61 = (x2829^((x2830>>x2831)<=x2832));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2845 = 122129U;
	static int16_t x2846 = INT16_MAX;
	uint16_t x2848 = 239U;
	static uint32_t t62 = 3U;

	t62 = (x2845^((x2846>>x2847)<=x2848));

	if (t62 != 122129U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2877 = 8U;
	volatile uint64_t x2878 = 102455149949375394LLU;
	volatile uint8_t x2879 = 1U;
	uint8_t x2880 = 7U;
	uint32_t t63 = 146469621U;

	t63 = (x2877^((x2878>>x2879)<=x2880));

	if (t63 != 8U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x3077 = 959669484LLU;
	uint32_t x3078 = 551100U;
	uint8_t x3080 = 2U;
	uint64_t t64 = 205LLU;

	t64 = (x3077^((x3078>>x3079)<=x3080));

	if (t64 != 959669485LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x3185 = 91766;
	int64_t x3186 = INT64_MAX;
	uint8_t x3187 = 45U;
	int8_t x3188 = INT8_MIN;

	t65 = (x3185^((x3186>>x3187)<=x3188));

	if (t65 != 91766) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x3197 = -1;
	int8_t x3199 = 0;
	uint16_t x3200 = 1U;
	static volatile int32_t t66 = -41736;

	t66 = (x3197^((x3198>>x3199)<=x3200));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3297 = INT32_MAX;
	uint64_t x3298 = UINT64_MAX;
	volatile uint8_t x3299 = 9U;
	int8_t x3300 = INT8_MAX;

	t67 = (x3297^((x3298>>x3299)<=x3300));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3303 = 1;
	volatile uint32_t x3304 = 386U;
	static uint64_t t68 = UINT64_MAX;

	t68 = (x3301^((x3302>>x3303)<=x3304));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3310 = UINT16_MAX;
	int8_t x3312 = INT8_MAX;
	volatile int32_t t69 = -111922;

	t69 = (x3309^((x3310>>x3311)<=x3312));

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3545 = -1;
	uint16_t x3546 = UINT16_MAX;
	volatile int8_t x3547 = 1;
	static int16_t x3548 = INT16_MIN;

	t70 = (x3545^((x3546>>x3547)<=x3548));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3553 = INT16_MIN;
	volatile int8_t x3555 = 1;
	int32_t x3556 = -23464292;
	int32_t t71 = -221;

	t71 = (x3553^((x3554>>x3555)<=x3556));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x3749 = -7885;
	int32_t x3750 = INT32_MAX;
	static uint64_t x3752 = 2LLU;
	volatile int32_t t72 = 6044898;

	t72 = (x3749^((x3750>>x3751)<=x3752));

	if (t72 != -7885) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3813 = 870543195387LLU;
	uint64_t x3814 = 506076074288LLU;
	uint8_t x3815 = 0U;
	volatile int16_t x3816 = INT16_MIN;
	static uint64_t t73 = 5264561667177156LLU;

	t73 = (x3813^((x3814>>x3815)<=x3816));

	if (t73 != 870543195386LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x3890 = UINT8_MAX;
	static volatile int8_t x3891 = 3;
	int16_t x3892 = INT16_MIN;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (x3889^((x3890>>x3891)<=x3892));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3901 = INT32_MIN;
	static volatile uint32_t x3902 = 30863384U;
	int8_t x3903 = 0;
	int32_t x3904 = -613610;

	t75 = (x3901^((x3902>>x3903)<=x3904));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3921 = UINT32_MAX;
	volatile uint8_t x3922 = UINT8_MAX;
	int8_t x3923 = 1;
	static volatile int64_t x3924 = 29818007LL;
	uint32_t t76 = 3626962U;

	t76 = (x3921^((x3922>>x3923)<=x3924));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3933 = 3U;
	uint64_t x3934 = 49370076629038436LLU;
	uint8_t x3935 = 0U;
	uint32_t x3936 = 1015U;
	int32_t t77 = 316031;

	t77 = (x3933^((x3934>>x3935)<=x3936));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4145 = -123805LL;
	uint8_t x4147 = 9U;
	int8_t x4148 = INT8_MIN;
	volatile int64_t t78 = 167LL;

	t78 = (x4145^((x4146>>x4147)<=x4148));

	if (t78 != -123805LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4165 = -1LL;
	volatile int32_t x4166 = INT32_MAX;
	int16_t x4167 = 10;
	int16_t x4168 = INT16_MIN;

	t79 = (x4165^((x4166>>x4167)<=x4168));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x4233 = -19233;
	int64_t x4234 = INT64_MAX;
	uint8_t x4235 = 2U;
	uint8_t x4236 = 1U;
	int32_t t80 = 11;

	t80 = (x4233^((x4234>>x4235)<=x4236));

	if (t80 != -19233) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4253 = 1417533105U;
	uint16_t x4254 = UINT16_MAX;
	uint8_t x4255 = 11U;
	int16_t x4256 = INT16_MAX;
	volatile uint32_t t81 = 335511257U;

	t81 = (x4253^((x4254>>x4255)<=x4256));

	if (t81 != 1417533104U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4357 = 6429446LL;
	int8_t x4358 = 0;
	static uint16_t x4359 = 0U;
	uint64_t x4360 = 3968199677LLU;
	int64_t t82 = 947707LL;

	t82 = (x4357^((x4358>>x4359)<=x4360));

	if (t82 != 6429447LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4453 = 0U;
	static volatile int8_t x4454 = 1;
	int32_t x4455 = 0;
	uint64_t x4456 = UINT64_MAX;
	static volatile int32_t t83 = 2;

	t83 = (x4453^((x4454>>x4455)<=x4456));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4534 = 10654508LLU;
	int64_t x4535 = 2LL;
	volatile int32_t x4536 = INT32_MIN;

	t84 = (x4533^((x4534>>x4535)<=x4536));

	if (t84 != 43) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4589 = -6;
	static volatile int16_t x4590 = INT16_MAX;
	volatile int8_t x4591 = 0;
	int32_t t85 = -3;

	t85 = (x4589^((x4590>>x4591)<=x4592));

	if (t85 != -5) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4597 = 562U;
	uint16_t x4598 = UINT16_MAX;
	uint8_t x4599 = 0U;
	int32_t x4600 = INT32_MIN;
	static volatile int32_t t86 = 331;

	t86 = (x4597^((x4598>>x4599)<=x4600));

	if (t86 != 562) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4665 = INT8_MIN;
	int32_t x4666 = 109142314;
	int8_t x4667 = 10;
	int64_t x4668 = 1LL;
	int32_t t87 = -12;

	t87 = (x4665^((x4666>>x4667)<=x4668));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4693 = UINT16_MAX;
	uint8_t x4694 = UINT8_MAX;
	static int8_t x4695 = 17;
	int32_t x4696 = INT32_MIN;
	int32_t t88 = -1649742;

	t88 = (x4693^((x4694>>x4695)<=x4696));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4997 = -1LL;
	static uint8_t x4998 = 3U;
	static uint16_t x4999 = 29U;
	uint32_t x5000 = 759257U;

	t89 = (x4997^((x4998>>x4999)<=x5000));

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x5001 = -29991;
	static int16_t x5003 = 1;
	volatile int8_t x5004 = INT8_MIN;
	volatile int32_t t90 = 228;

	t90 = (x5001^((x5002>>x5003)<=x5004));

	if (t90 != -29991) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5021 = INT8_MIN;
	volatile uint8_t x5022 = UINT8_MAX;
	static int8_t x5023 = 2;
	int32_t x5024 = INT32_MAX;

	t91 = (x5021^((x5022>>x5023)<=x5024));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5043 = 4U;
	volatile int32_t x5044 = INT32_MIN;

	t92 = (x5041^((x5042>>x5043)<=x5044));

	if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5161 = 13925U;
	static int8_t x5163 = 2;
	static int64_t x5164 = INT64_MIN;

	t93 = (x5161^((x5162>>x5163)<=x5164));

	if (t93 != 13925) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5177 = INT64_MIN;
	int64_t x5178 = INT64_MAX;
	int8_t x5179 = 0;
	static int64_t t94 = INT64_MIN;

	t94 = (x5177^((x5178>>x5179)<=x5180));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5273 = UINT64_MAX;
	uint16_t x5275 = 8U;

	t95 = (x5273^((x5274>>x5275)<=x5276));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5354 = 343U;
	int32_t x5355 = 0;
	static int64_t x5356 = 42821019LL;
	int32_t t96 = -808964522;

	t96 = (x5353^((x5354>>x5355)<=x5356));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x5374 = INT8_MAX;
	volatile uint8_t x5375 = 0U;
	volatile uint8_t x5376 = 1U;
	volatile int64_t t97 = INT64_MAX;

	t97 = (x5373^((x5374>>x5375)<=x5376));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x5437 = INT32_MAX;
	int8_t x5438 = 2;
	int8_t x5439 = 15;
	int32_t x5440 = INT32_MIN;
	int32_t t98 = INT32_MAX;

	t98 = (x5437^((x5438>>x5439)<=x5440));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5450 = 169301351619563925LLU;
	volatile uint64_t t99 = 186LLU;

	t99 = (x5449^((x5450>>x5451)<=x5452));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

