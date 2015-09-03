#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x26 = 13097U;
uint16_t x28 = 1U;
uint8_t x44 = 0U;
volatile int32_t x162 = INT32_MIN;
uint8_t x163 = UINT8_MAX;
int64_t x274 = -1LL;
uint8_t x276 = 21U;
static volatile int64_t t5 = -580895862LL;
uint8_t x504 = 0U;
volatile int32_t x514 = INT32_MIN;
uint64_t x535 = 3897572LLU;
volatile uint64_t t9 = 1LLU;
static int32_t x548 = 0;
static uint8_t x574 = 60U;
int16_t x576 = 0;
int16_t x694 = INT16_MAX;
uint64_t t14 = 54678LLU;
int8_t x698 = -1;
static int8_t x815 = 16;
volatile uint64_t t21 = 130068668025327LLU;
int32_t x1170 = -1;
int32_t x1201 = INT32_MAX;
int64_t x1204 = 19LL;
int64_t x1362 = INT64_MAX;
uint16_t x1665 = 1U;
volatile uint64_t t29 = 45908485851094374LLU;
int16_t x1692 = 8;
volatile uint64_t t32 = 23288117395LLU;
static uint16_t x1876 = 53U;
int32_t x1982 = 831914873;
static int64_t t34 = -14457508LL;
static uint32_t x2074 = 406752U;
volatile int32_t x2075 = INT32_MAX;
static uint8_t x2113 = 1U;
uint64_t x2114 = UINT64_MAX;
volatile int32_t t38 = 15771;
static uint64_t x2318 = UINT64_MAX;
static int64_t x2319 = 239426406101329LL;
uint8_t x2320 = 5U;
volatile int16_t x2404 = 0;
static volatile uint64_t t46 = 796LLU;
static uint64_t x2631 = 25022LLU;
uint32_t x2684 = 3U;
volatile int64_t t48 = 74099800220441531LL;
volatile int8_t x2814 = INT8_MAX;
int16_t x2970 = INT16_MIN;
int32_t t54 = -42073;
volatile uint32_t x3464 = 0U;
volatile uint64_t t58 = 773849LLU;
int64_t x3542 = INT64_MIN;
uint32_t x3543 = UINT32_MAX;
int8_t x3544 = 10;
int16_t x3585 = INT16_MIN;
int8_t x3595 = INT8_MAX;
static volatile uint16_t x3596 = 4U;
int64_t x3603 = INT64_MAX;
volatile int8_t x3604 = 0;
uint8_t x3645 = UINT8_MAX;
volatile int16_t x3793 = INT16_MIN;
uint8_t x3825 = UINT8_MAX;
volatile int32_t t70 = -700;
static int16_t x3988 = 0;
uint64_t t72 = 1165LLU;
int16_t x4124 = 27;
int32_t x4218 = -1;
volatile uint64_t x4267 = 2433752803LLU;
static volatile uint64_t t76 = 1219196LLU;
volatile int16_t x4413 = -1;
volatile int8_t x4540 = 0;
uint8_t x4615 = UINT8_MAX;
static volatile int32_t t85 = 42457;
uint16_t x4809 = 376U;
int64_t t87 = 1LL;
static int8_t x4913 = INT8_MIN;
static int8_t x4915 = INT8_MAX;
static uint16_t x4925 = 670U;
int64_t x4926 = INT64_MIN;
uint32_t x5002 = 3U;
volatile int16_t x5004 = 1;
uint32_t t91 = 0U;
uint8_t x5135 = 3U;
uint32_t t94 = 14U;
int16_t x5158 = 29;
uint8_t x5365 = 4U;
int8_t x5368 = 1;


void f0(void) {
	volatile int64_t x21 = 0LL;
	int8_t x22 = INT8_MAX;
	uint8_t x23 = UINT8_MAX;
	static uint8_t x24 = 4U;
	static volatile int64_t t0 = 2283369040585839193LL;

	t0 = (x21/(x22|(x23>>x24)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x25 = UINT16_MAX;
	uint32_t x27 = 3066143U;
	uint32_t t1 = 1517083494U;

	t1 = (x25/(x26|(x27>>x28)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x41 = INT16_MAX;
	static int32_t x42 = -1;
	static volatile uint64_t x43 = 86033047502LLU;
	uint64_t t2 = 5037022389004279LLU;

	t2 = (x41/(x42|(x43>>x44)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x113 = INT64_MAX;
	int64_t x114 = INT64_MIN;
	volatile uint64_t x115 = 92LLU;
	uint16_t x116 = 12U;
	volatile uint64_t t3 = 3477835383313LLU;

	t3 = (x113/(x114|(x115>>x116)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x161 = INT16_MIN;
	int16_t x164 = 0;
	volatile int32_t t4 = 448;

	t4 = (x161/(x162|(x163>>x164)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x273 = INT8_MIN;
	static int16_t x275 = 3449;

	t5 = (x273/(x274|(x275>>x276)));

	if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x345 = INT8_MAX;
	static int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MAX;
	volatile uint16_t x348 = 1U;
	int32_t t6 = 2;

	t6 = (x345/(x346|(x347>>x348)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x501 = -1;
	uint32_t x502 = UINT32_MAX;
	static uint64_t x503 = UINT64_MAX;
	static volatile uint64_t t7 = 2071178797308440844LLU;

	t7 = (x501/(x502|(x503>>x504)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x513 = INT32_MIN;
	volatile int64_t x515 = 14LL;
	uint8_t x516 = 3U;
	volatile int64_t t8 = 75510LL;

	t8 = (x513/(x514|(x515>>x516)));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x533 = 82838LL;
	static int32_t x534 = INT32_MIN;
	volatile uint8_t x536 = 2U;

	t9 = (x533/(x534|(x535>>x536)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x545 = INT16_MAX;
	volatile int16_t x546 = INT16_MIN;
	static uint32_t x547 = UINT32_MAX;
	static volatile uint32_t t10 = 7616U;

	t10 = (x545/(x546|(x547>>x548)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x561 = UINT64_MAX;
	int64_t x562 = -1LL;
	int16_t x563 = 0;
	volatile int16_t x564 = 0;
	volatile uint64_t t11 = 71911366108032910LLU;

	t11 = (x561/(x562|(x563>>x564)));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x573 = UINT16_MAX;
	static uint32_t x575 = 404U;
	uint32_t t12 = 2U;

	t12 = (x573/(x574|(x575>>x576)));

	if (t12 != 147U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x589 = INT8_MAX;
	static uint8_t x590 = UINT8_MAX;
	int32_t x591 = 231910;
	uint8_t x592 = 1U;
	int32_t t13 = 55144;

	t13 = (x589/(x590|(x591>>x592)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x693 = UINT64_MAX;
	static volatile int32_t x695 = INT32_MAX;
	static int32_t x696 = 1;

	t14 = (x693/(x694|(x695>>x696)));

	if (t14 != 17179869200LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x697 = 0;
	uint64_t x699 = UINT64_MAX;
	volatile int8_t x700 = 0;
	uint64_t t15 = 80651728794412288LLU;

	t15 = (x697/(x698|(x699>>x700)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x705 = -1;
	volatile int16_t x706 = -61;
	int64_t x707 = INT64_MAX;
	uint8_t x708 = 3U;
	int64_t t16 = -186LL;

	t16 = (x705/(x706|(x707>>x708)));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x737 = -1;
	int64_t x738 = 26606969148798681LL;
	int32_t x739 = 1701;
	static int8_t x740 = 3;
	volatile int64_t t17 = 1LL;

	t17 = (x737/(x738|(x739>>x740)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x813 = INT64_MAX;
	uint16_t x814 = UINT16_MAX;
	volatile int16_t x816 = 2;
	int64_t t18 = -825315037LL;

	t18 = (x813/(x814|(x815>>x816)));

	if (t18 != 140739635871744LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x865 = 77297952189928048LLU;
	int16_t x866 = -1;
	static uint16_t x867 = 25U;
	uint8_t x868 = 1U;
	static volatile uint64_t t19 = 1863333249679LLU;

	t19 = (x865/(x866|(x867>>x868)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1101 = INT16_MIN;
	int32_t x1102 = -36886044;
	uint16_t x1103 = UINT16_MAX;
	int8_t x1104 = 0;
	int32_t t20 = 18641873;

	t20 = (x1101/(x1102|(x1103>>x1104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1137 = UINT64_MAX;
	static volatile uint32_t x1138 = 21075U;
	int8_t x1139 = INT8_MAX;
	uint32_t x1140 = 1U;

	t21 = (x1137/(x1138|(x1139>>x1140)));

	if (t21 != 873466739604600LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1169 = -431;
	int16_t x1171 = INT16_MAX;
	int64_t x1172 = 0LL;
	int32_t t22 = -2457509;

	t22 = (x1169/(x1170|(x1171>>x1172)));

	if (t22 != 431) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x1202 = -1;
	volatile uint32_t x1203 = 14409206U;
	uint32_t t23 = 5965604U;

	t23 = (x1201/(x1202|(x1203>>x1204)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1265 = 468087U;
	int8_t x1266 = INT8_MIN;
	uint16_t x1267 = 0U;
	uint8_t x1268 = 2U;
	volatile uint32_t t24 = 1U;

	t24 = (x1265/(x1266|(x1267>>x1268)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1313 = 535717572059LLU;
	int16_t x1314 = 281;
	uint8_t x1315 = 5U;
	static uint8_t x1316 = 7U;
	volatile uint64_t t25 = 6717410389617374887LLU;

	t25 = (x1313/(x1314|(x1315>>x1316)));

	if (t25 != 1906468227LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1361 = INT64_MIN;
	int8_t x1363 = INT8_MAX;
	int8_t x1364 = 1;
	static volatile int64_t t26 = -88095057558283LL;

	t26 = (x1361/(x1362|(x1363>>x1364)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1369 = 1;
	uint64_t x1370 = UINT64_MAX;
	volatile uint32_t x1371 = 23072505U;
	volatile uint8_t x1372 = 17U;
	uint64_t t27 = 18446LLU;

	t27 = (x1369/(x1370|(x1371>>x1372)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1649 = -35577172;
	int8_t x1650 = INT8_MAX;
	volatile uint32_t x1651 = 8403425U;
	int32_t x1652 = 0;
	static uint32_t t28 = 59U;

	t28 = (x1649/(x1650|(x1651>>x1652)));

	if (t28 != 506U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x1666 = 285449866547416LLU;
	int32_t x1667 = 55352602;
	static uint8_t x1668 = 6U;

	t29 = (x1665/(x1666|(x1667>>x1668)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1689 = 118309248U;
	uint8_t x1690 = 5U;
	uint32_t x1691 = UINT32_MAX;
	static volatile uint32_t t30 = 100U;

	t30 = (x1689/(x1690|(x1691>>x1692)));

	if (t30 != 7U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1857 = 12135U;
	static uint64_t x1858 = 456381927818558457LLU;
	uint8_t x1859 = UINT8_MAX;
	uint8_t x1860 = 0U;
	uint64_t t31 = 79111276849893LLU;

	t31 = (x1857/(x1858|(x1859>>x1860)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1869 = UINT64_MAX;
	static int64_t x1870 = INT64_MIN;
	uint16_t x1871 = UINT16_MAX;
	int8_t x1872 = 3;

	t32 = (x1869/(x1870|(x1871>>x1872)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1873 = INT8_MIN;
	volatile int16_t x1874 = 312;
	uint64_t x1875 = 101425489837LLU;
	volatile uint64_t t33 = 424616936274LLU;

	t33 = (x1873/(x1874|(x1875>>x1876)));

	if (t33 != 59124179723428049LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1981 = 0U;
	static int64_t x1983 = INT64_MAX;
	uint8_t x1984 = 46U;

	t34 = (x1981/(x1982|(x1983>>x1984)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2073 = -201012LL;
	volatile int16_t x2076 = 2;
	int64_t t35 = -1067484889446840LL;

	t35 = (x2073/(x2074|(x2075>>x2076)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2097 = UINT8_MAX;
	uint16_t x2098 = 50U;
	int16_t x2099 = 261;
	uint16_t x2100 = 1U;
	static volatile int32_t t36 = -7705;

	t36 = (x2097/(x2098|(x2099>>x2100)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2115 = INT32_MAX;
	uint8_t x2116 = 3U;
	static uint64_t t37 = 101913114744289513LLU;

	t37 = (x2113/(x2114|(x2115>>x2116)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2125 = INT32_MIN;
	uint8_t x2126 = UINT8_MAX;
	uint16_t x2127 = UINT16_MAX;
	uint8_t x2128 = 11U;

	t38 = (x2125/(x2126|(x2127>>x2128)));

	if (t38 != -8421504) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2249 = 9;
	int16_t x2250 = -4;
	uint32_t x2251 = 41420049U;
	int8_t x2252 = 1;
	static uint32_t t39 = 630U;

	t39 = (x2249/(x2250|(x2251>>x2252)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2273 = INT64_MIN;
	int8_t x2274 = -2;
	uint64_t x2275 = UINT64_MAX;
	static volatile int8_t x2276 = 6;
	uint64_t t40 = 6889LLU;

	t40 = (x2273/(x2274|(x2275>>x2276)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2297 = 2LLU;
	int8_t x2298 = INT8_MAX;
	int16_t x2299 = INT16_MAX;
	static int8_t x2300 = 14;
	volatile uint64_t t41 = 9079151485484378708LLU;

	t41 = (x2297/(x2298|(x2299>>x2300)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2317 = INT64_MIN;
	uint64_t t42 = 28656888446448LLU;

	t42 = (x2317/(x2318|(x2319>>x2320)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2357 = 16029070816297LLU;
	uint16_t x2358 = 15U;
	volatile uint8_t x2359 = UINT8_MAX;
	uint8_t x2360 = 7U;
	uint64_t t43 = 1509646LLU;

	t43 = (x2357/(x2358|(x2359>>x2360)));

	if (t43 != 1068604721086LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2401 = 3903469;
	int8_t x2402 = INT8_MIN;
	int8_t x2403 = INT8_MAX;
	volatile int32_t t44 = 10401577;

	t44 = (x2401/(x2402|(x2403>>x2404)));

	if (t44 != -3903469) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2473 = INT8_MAX;
	int32_t x2474 = -1;
	static volatile uint8_t x2475 = UINT8_MAX;
	uint8_t x2476 = 3U;
	volatile int32_t t45 = -1;

	t45 = (x2473/(x2474|(x2475>>x2476)));

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2561 = -1;
	static int16_t x2562 = -13;
	static volatile uint64_t x2563 = 6818108LLU;
	volatile uint8_t x2564 = 22U;

	t46 = (x2561/(x2562|(x2563>>x2564)));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x2629 = -736025LL;
	int64_t x2630 = -4LL;
	uint8_t x2632 = 0U;
	uint64_t t47 = 1LLU;

	t47 = (x2629/(x2630|(x2631>>x2632)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2681 = INT8_MIN;
	int64_t x2682 = INT64_MIN;
	int32_t x2683 = 0;

	t48 = (x2681/(x2682|(x2683>>x2684)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x2757 = -1;
	static uint64_t x2758 = UINT64_MAX;
	int32_t x2759 = INT32_MAX;
	uint8_t x2760 = 0U;
	volatile uint64_t t49 = 770578734505837LLU;

	t49 = (x2757/(x2758|(x2759>>x2760)));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2773 = INT64_MAX;
	int32_t x2774 = INT32_MIN;
	volatile uint16_t x2775 = 13U;
	volatile uint16_t x2776 = 2U;
	static int64_t t50 = 32049919661LL;

	t50 = (x2773/(x2774|(x2775>>x2776)));

	if (t50 != -4294967302LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2813 = 6;
	int16_t x2815 = INT16_MAX;
	volatile int32_t x2816 = 1;
	int32_t t51 = 43210767;

	t51 = (x2813/(x2814|(x2815>>x2816)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2933 = -1;
	int64_t x2934 = -1LL;
	static volatile uint64_t x2935 = 6106112705707095482LLU;
	uint16_t x2936 = 21U;
	volatile uint64_t t52 = 141738260723LLU;

	t52 = (x2933/(x2934|(x2935>>x2936)));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x2969 = INT16_MAX;
	int32_t x2971 = 169059;
	int16_t x2972 = 3;
	int32_t t53 = -23;

	t53 = (x2969/(x2970|(x2971>>x2972)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3181 = 3U;
	int32_t x3182 = INT32_MIN;
	uint16_t x3183 = UINT16_MAX;
	uint8_t x3184 = 3U;

	t54 = (x3181/(x3182|(x3183>>x3184)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x3201 = -1;
	int64_t x3202 = INT64_MIN;
	volatile int32_t x3203 = INT32_MAX;
	uint8_t x3204 = 1U;
	int64_t t55 = 39168415230LL;

	t55 = (x3201/(x3202|(x3203>>x3204)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3345 = 150073U;
	int64_t x3346 = 1248604LL;
	volatile uint64_t x3347 = 6LLU;
	uint8_t x3348 = 22U;
	volatile uint64_t t56 = 11LLU;

	t56 = (x3345/(x3346|(x3347>>x3348)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x3461 = INT16_MIN;
	int32_t x3462 = INT32_MIN;
	int8_t x3463 = INT8_MAX;
	int32_t t57 = 325;

	t57 = (x3461/(x3462|(x3463>>x3464)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3481 = 7038298U;
	int8_t x3482 = INT8_MIN;
	uint64_t x3483 = 8876018684LLU;
	volatile uint16_t x3484 = 28U;

	t58 = (x3481/(x3482|(x3483>>x3484)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3489 = -1;
	uint32_t x3490 = 61685U;
	uint64_t x3491 = UINT64_MAX;
	volatile uint8_t x3492 = 6U;
	volatile uint64_t t59 = 4394844968694LLU;

	t59 = (x3489/(x3490|(x3491>>x3492)));

	if (t59 != 64LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x3533 = INT32_MAX;
	volatile int8_t x3534 = INT8_MAX;
	uint64_t x3535 = 24864379LLU;
	int16_t x3536 = 43;
	volatile uint64_t t60 = 3LLU;

	t60 = (x3533/(x3534|(x3535>>x3536)));

	if (t60 != 16909320LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3541 = -34304412;
	int64_t t61 = 0LL;

	t61 = (x3541/(x3542|(x3543>>x3544)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3557 = UINT32_MAX;
	int16_t x3558 = 62;
	uint32_t x3559 = 9345U;
	uint16_t x3560 = 4U;
	static volatile uint32_t t62 = 6353U;

	t62 = (x3557/(x3558|(x3559>>x3560)));

	if (t62 != 6731923U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x3586 = -865343722LL;
	int64_t x3587 = INT64_MAX;
	uint8_t x3588 = 41U;
	int64_t t63 = -49081LL;

	t63 = (x3585/(x3586|(x3587>>x3588)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3593 = 6;
	uint8_t x3594 = 12U;
	int32_t t64 = -23;

	t64 = (x3593/(x3594|(x3595>>x3596)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x3601 = -82;
	static int8_t x3602 = 3;
	static int64_t t65 = 57450067474LL;

	t65 = (x3601/(x3602|(x3603>>x3604)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3646 = -90298296LL;
	static uint64_t x3647 = 446LLU;
	uint8_t x3648 = 13U;
	uint64_t t66 = 1904151155281599200LLU;

	t66 = (x3645/(x3646|(x3647>>x3648)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3701 = INT64_MIN;
	int32_t x3702 = INT32_MIN;
	static uint32_t x3703 = 654991U;
	uint8_t x3704 = 7U;
	volatile int64_t t67 = 4994849842906171LL;

	t67 = (x3701/(x3702|(x3703>>x3704)));

	if (t67 != -4294957062LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3781 = 215;
	static int8_t x3782 = INT8_MIN;
	static int8_t x3783 = 1;
	uint8_t x3784 = 1U;
	static volatile int32_t t68 = -6699;

	t68 = (x3781/(x3782|(x3783>>x3784)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x3794 = 282337;
	int64_t x3795 = 55002235303046739LL;
	uint16_t x3796 = 7U;
	volatile int64_t t69 = 14044LL;

	t69 = (x3793/(x3794|(x3795>>x3796)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3826 = -1;
	int16_t x3827 = 7;
	volatile int16_t x3828 = 0;

	t70 = (x3825/(x3826|(x3827>>x3828)));

	if (t70 != -255) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3985 = INT16_MIN;
	int8_t x3986 = -1;
	uint8_t x3987 = UINT8_MAX;
	int32_t t71 = -299758983;

	t71 = (x3985/(x3986|(x3987>>x3988)));

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4029 = 2721U;
	volatile uint64_t x4030 = 25500451154LLU;
	int32_t x4031 = INT32_MAX;
	volatile int8_t x4032 = 13;

	t72 = (x4029/(x4030|(x4031>>x4032)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4121 = 12749012600LLU;
	int64_t x4122 = INT64_MAX;
	static uint8_t x4123 = UINT8_MAX;
	uint64_t t73 = 267701669788036026LLU;

	t73 = (x4121/(x4122|(x4123>>x4124)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4209 = 10U;
	uint8_t x4210 = UINT8_MAX;
	volatile int8_t x4211 = 1;
	int8_t x4212 = 2;
	static volatile int32_t t74 = 91919;

	t74 = (x4209/(x4210|(x4211>>x4212)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4217 = UINT16_MAX;
	uint32_t x4219 = 63039069U;
	uint16_t x4220 = 0U;
	uint32_t t75 = 141U;

	t75 = (x4217/(x4218|(x4219>>x4220)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4265 = -885;
	uint64_t x4266 = UINT64_MAX;
	static volatile int8_t x4268 = 0;

	t76 = (x4265/(x4266|(x4267>>x4268)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4361 = 12U;
	volatile int32_t x4362 = INT32_MIN;
	int64_t x4363 = INT64_MAX;
	int16_t x4364 = 0;
	int64_t t77 = 3LL;

	t77 = (x4361/(x4362|(x4363>>x4364)));

	if (t77 != -12LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x4373 = -426483673;
	int32_t x4374 = INT32_MIN;
	static uint8_t x4375 = 31U;
	int16_t x4376 = 1;
	volatile int32_t t78 = 27229983;

	t78 = (x4373/(x4374|(x4375>>x4376)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4381 = -8;
	uint8_t x4382 = UINT8_MAX;
	int16_t x4383 = INT16_MAX;
	volatile int8_t x4384 = 12;
	volatile int32_t t79 = 170233448;

	t79 = (x4381/(x4382|(x4383>>x4384)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4414 = 2648;
	uint32_t x4415 = UINT32_MAX;
	volatile int64_t x4416 = 0LL;
	uint32_t t80 = 4558U;

	t80 = (x4413/(x4414|(x4415>>x4416)));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4433 = UINT32_MAX;
	static uint64_t x4434 = 119895861LLU;
	uint64_t x4435 = 2LLU;
	uint8_t x4436 = 11U;
	static volatile uint64_t t81 = 17LLU;

	t81 = (x4433/(x4434|(x4435>>x4436)));

	if (t81 != 35LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4521 = INT8_MIN;
	uint16_t x4522 = UINT16_MAX;
	uint8_t x4523 = 3U;
	uint8_t x4524 = 2U;
	static volatile int32_t t82 = -980;

	t82 = (x4521/(x4522|(x4523>>x4524)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x4537 = 0U;
	int8_t x4538 = INT8_MAX;
	static int8_t x4539 = INT8_MAX;
	static uint32_t t83 = 38702U;

	t83 = (x4537/(x4538|(x4539>>x4540)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4541 = 1622094;
	int16_t x4542 = INT16_MIN;
	int64_t x4543 = 3252144238LL;
	static uint16_t x4544 = 0U;
	volatile int64_t t84 = 6280170845LL;

	t84 = (x4541/(x4542|(x4543>>x4544)));

	if (t84 != -114LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4613 = INT16_MAX;
	volatile uint16_t x4614 = UINT16_MAX;
	int8_t x4616 = 1;

	t85 = (x4613/(x4614|(x4615>>x4616)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4697 = 14;
	int16_t x4698 = INT16_MIN;
	volatile int64_t x4699 = 2074357011LL;
	int8_t x4700 = 2;
	int64_t t86 = -211753573521LL;

	t86 = (x4697/(x4698|(x4699>>x4700)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4810 = 933312947000514LL;
	volatile uint32_t x4811 = UINT32_MAX;
	uint32_t x4812 = 5U;

	t87 = (x4809/(x4810|(x4811>>x4812)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4849 = INT32_MAX;
	uint16_t x4850 = UINT16_MAX;
	uint16_t x4851 = 0U;
	static uint32_t x4852 = 0U;
	static int32_t t88 = -863401668;

	t88 = (x4849/(x4850|(x4851>>x4852)));

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4914 = 118841618U;
	volatile int16_t x4916 = 0;
	volatile uint32_t t89 = 8695U;

	t89 = (x4913/(x4914|(x4915>>x4916)));

	if (t89 != 36U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4927 = 2179348912634LL;
	int8_t x4928 = 46;
	int64_t t90 = 118801019019677LL;

	t90 = (x4925/(x4926|(x4927>>x4928)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x5001 = INT16_MAX;
	uint32_t x5003 = 139446740U;

	t91 = (x5001/(x5002|(x5003>>x5004)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5089 = INT32_MIN;
	static int16_t x5090 = -1;
	uint64_t x5091 = UINT64_MAX;
	static int64_t x5092 = 2LL;
	volatile uint64_t t92 = 3678285324066535969LLU;

	t92 = (x5089/(x5090|(x5091>>x5092)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x5109 = UINT16_MAX;
	uint64_t x5110 = UINT64_MAX;
	volatile uint32_t x5111 = 1354968042U;
	uint32_t x5112 = 0U;
	volatile uint64_t t93 = 450120289LLU;

	t93 = (x5109/(x5110|(x5111>>x5112)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5133 = 5U;
	volatile int32_t x5134 = INT32_MAX;
	int16_t x5136 = 1;

	t94 = (x5133/(x5134|(x5135>>x5136)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5157 = -1LL;
	int32_t x5159 = 246105599;
	uint32_t x5160 = 1U;
	static int64_t t95 = -15341993993124LL;

	t95 = (x5157/(x5158|(x5159>>x5160)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x5201 = INT8_MIN;
	uint32_t x5202 = UINT32_MAX;
	uint8_t x5203 = 2U;
	uint8_t x5204 = 2U;
	uint32_t t96 = 141U;

	t96 = (x5201/(x5202|(x5203>>x5204)));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5289 = UINT16_MAX;
	int64_t x5290 = INT64_MIN;
	uint32_t x5291 = UINT32_MAX;
	static uint16_t x5292 = 5U;
	volatile int64_t t97 = 540589354679225687LL;

	t97 = (x5289/(x5290|(x5291>>x5292)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x5366 = 510579U;
	int32_t x5367 = INT32_MAX;
	uint32_t t98 = 449767228U;

	t98 = (x5365/(x5366|(x5367>>x5368)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5413 = 6U;
	volatile uint32_t x5414 = 1552U;
	uint16_t x5415 = UINT16_MAX;
	int16_t x5416 = 30;
	uint32_t t99 = 1243U;

	t99 = (x5413/(x5414|(x5415>>x5416)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

