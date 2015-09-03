#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x79 = 0;
static volatile uint32_t x80 = 28U;
static volatile uint64_t t1 = UINT64_MAX;
int8_t x117 = -1;
static int8_t x126 = 4;
volatile int64_t t4 = 725695547503495189LL;
volatile uint32_t x264 = 11U;
int64_t x270 = 0LL;
volatile uint64_t x461 = 13447LLU;
int16_t x464 = 4;
volatile uint8_t x518 = 18U;
int32_t t12 = 0;
volatile int16_t x545 = INT16_MAX;
uint32_t x578 = UINT32_MAX;
int16_t x614 = INT16_MAX;
static int32_t t18 = 51306190;
int64_t t19 = 339264137682295990LL;
int8_t x663 = INT8_MIN;
int64_t x715 = -1LL;
static volatile uint16_t x726 = UINT16_MAX;
int8_t x727 = -1;
volatile uint8_t x937 = UINT8_MAX;
volatile int64_t x981 = INT64_MIN;
uint8_t x982 = 0U;
int64_t x1114 = INT64_MAX;
volatile uint8_t x1116 = 14U;
volatile int64_t x1281 = 983LL;
int64_t x1283 = -1LL;
volatile int32_t x1330 = INT32_MIN;
volatile uint8_t x1333 = 1U;
int32_t x1449 = INT32_MIN;
static volatile uint32_t x1454 = 2131574175U;
volatile int8_t x1482 = INT8_MIN;
uint64_t x1631 = 111363LLU;
static uint16_t x1632 = 3U;
int32_t x1681 = -196834;
static volatile uint8_t x1683 = UINT8_MAX;
volatile uint16_t x1725 = UINT16_MAX;
static int64_t x1727 = INT64_MAX;
uint64_t x1740 = 14LLU;
int16_t x1838 = 5;
int32_t t51 = 62;
int16_t x1874 = INT16_MIN;
volatile int32_t x1882 = INT32_MIN;
int16_t x1906 = -1;
uint16_t x1936 = 2U;
uint64_t t57 = 390LLU;
static uint16_t x2137 = 2U;
int64_t x2140 = 6LL;
uint8_t x2152 = 0U;
volatile int16_t x2173 = -1;
volatile int64_t x2221 = -1LL;
uint16_t x2273 = 0U;
volatile int32_t t62 = -3179170;
volatile uint32_t x2319 = 277913136U;
uint16_t x2395 = UINT16_MAX;
static int16_t x2481 = -1;
uint32_t x2482 = 4708U;
uint32_t t67 = 78748574U;
static volatile uint32_t t68 = UINT32_MAX;
volatile uint8_t x2543 = 1U;
static uint32_t x2544 = 3U;
uint32_t t70 = UINT32_MAX;
volatile uint32_t t71 = 118520U;
int16_t x2625 = INT16_MIN;
uint64_t t75 = 802245037818425LLU;
static int64_t x2714 = -1LL;
uint8_t x2724 = 11U;
int32_t x2738 = INT32_MAX;
int64_t x2751 = INT64_MAX;
int8_t x2870 = INT8_MAX;
int16_t x3057 = INT16_MIN;
int16_t x3058 = 262;
static uint8_t x3200 = 11U;
int8_t x3236 = 23;
static int32_t x3237 = INT32_MIN;
uint16_t x3239 = 149U;
int32_t x3240 = 0;
static volatile int64_t x3269 = 0LL;
volatile int8_t x3280 = 29;
uint32_t x3646 = UINT32_MAX;
uint32_t t98 = 5667U;


void f0(void) {
	uint32_t x77 = 4155207U;
	static int64_t x78 = INT64_MIN;
	volatile int64_t t0 = 674341648982279LL;

	t0 = (x77^((x78&x79)>>x80));

	if (t0 != 4155207LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x101 = -1;
	int16_t x102 = 0;
	uint64_t x103 = UINT64_MAX;
	uint16_t x104 = 3U;

	t1 = (x101^((x102&x103)>>x104));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x118 = INT32_MIN;
	int32_t x119 = 59931732;
	static volatile uint8_t x120 = 19U;
	volatile int32_t t2 = -1;

	t2 = (x117^((x118&x119)>>x120));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x125 = INT16_MIN;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = 1;
	uint32_t t3 = 23242U;

	t3 = (x125^((x126&x127)>>x128));

	if (t3 != 4294934530U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x157 = INT8_MIN;
	volatile int32_t x158 = -1;
	volatile int64_t x159 = INT64_MAX;
	int8_t x160 = 33;

	t4 = (x157^((x158&x159)>>x160));

	if (t4 != -1073741697LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x177 = INT32_MIN;
	volatile int64_t x178 = -7721LL;
	volatile int8_t x179 = INT8_MAX;
	uint8_t x180 = 3U;
	int64_t t5 = -16229LL;

	t5 = (x177^((x178&x179)>>x180));

	if (t5 != -2147483638LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x261 = 3114U;
	static int16_t x262 = -1;
	int16_t x263 = INT16_MAX;
	int32_t t6 = 100711;

	t6 = (x261^((x262&x263)>>x264));

	if (t6 != 3109) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x269 = INT8_MAX;
	static volatile uint16_t x271 = UINT16_MAX;
	uint64_t x272 = 3LLU;
	int64_t t7 = 209110888824LL;

	t7 = (x269^((x270&x271)>>x272));

	if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x369 = 17;
	uint8_t x370 = UINT8_MAX;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 2U;
	static int32_t t8 = 62;

	t8 = (x369^((x370&x371)>>x372));

	if (t8 != 49) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x377 = -3;
	uint32_t x378 = 130U;
	uint8_t x379 = UINT8_MAX;
	volatile uint16_t x380 = 1U;
	volatile uint32_t t9 = 11027U;

	t9 = (x377^((x378&x379)>>x380));

	if (t9 != 4294967228U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x462 = UINT16_MAX;
	volatile int32_t x463 = INT32_MAX;
	uint64_t t10 = 43570334944LLU;

	t10 = (x461^((x462&x463)>>x464));

	if (t10 != 15224LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x473 = -1275917961582LL;
	int32_t x474 = -1115027;
	volatile int8_t x475 = INT8_MAX;
	static int8_t x476 = 0;
	int64_t t11 = -1972808256571097883LL;

	t11 = (x473^((x474&x475)>>x476));

	if (t11 != -1275917961473LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x517 = -1;
	static int16_t x519 = INT16_MIN;
	static uint32_t x520 = 13U;

	t12 = (x517^((x518&x519)>>x520));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x533 = INT8_MIN;
	int32_t x534 = INT32_MIN;
	static volatile int8_t x535 = INT8_MAX;
	static uint16_t x536 = 1U;
	int32_t t13 = 265246233;

	t13 = (x533^((x534&x535)>>x536));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x546 = -1;
	int8_t x547 = 9;
	volatile int16_t x548 = 0;
	static int32_t t14 = 58796971;

	t14 = (x545^((x546&x547)>>x548));

	if (t14 != 32758) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x577 = 1U;
	int64_t x579 = -1LL;
	uint8_t x580 = 3U;
	int64_t t15 = -5413336493513LL;

	t15 = (x577^((x578&x579)>>x580));

	if (t15 != 536870910LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x585 = INT64_MIN;
	volatile uint64_t x586 = UINT64_MAX;
	static int8_t x587 = 32;
	uint8_t x588 = 12U;
	uint64_t t16 = 3501381282642857LLU;

	t16 = (x585^((x586&x587)>>x588));

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x605 = -7529202LL;
	volatile int32_t x606 = INT32_MAX;
	uint64_t x607 = 18896168153094LLU;
	volatile uint8_t x608 = 1U;
	volatile uint64_t t17 = 16961559973101783LLU;

	t17 = (x605^((x606&x607)>>x608));

	if (t17 != 18446744073478661389LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x613 = UINT16_MAX;
	int8_t x615 = -1;
	static volatile int16_t x616 = 1;

	t18 = (x613^((x614&x615)>>x616));

	if (t18 != 49152) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x617 = 3;
	int16_t x618 = 408;
	int64_t x619 = 52001371000233552LL;
	uint8_t x620 = 1U;

	t19 = (x617^((x618&x619)>>x620));

	if (t19 != 11LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x661 = -486906055;
	uint64_t x662 = UINT64_MAX;
	static uint16_t x664 = 30U;
	uint64_t t20 = 7LLU;

	t20 = (x661^((x662&x663)>>x664));

	if (t20 != 18446744057016588486LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x713 = 1;
	uint64_t x714 = UINT64_MAX;
	static uint16_t x716 = 4U;
	volatile uint64_t t21 = 11357152384125235LLU;

	t21 = (x713^((x714&x715)>>x716));

	if (t21 != 1152921504606846974LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x725 = INT16_MIN;
	uint32_t x728 = 11U;
	int32_t t22 = 1;

	t22 = (x725^((x726&x727)>>x728));

	if (t22 != -32737) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x841 = 796U;
	int8_t x842 = INT8_MIN;
	int8_t x843 = 6;
	uint16_t x844 = 9U;
	static int32_t t23 = 1;

	t23 = (x841^((x842&x843)>>x844));

	if (t23 != 796) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x905 = INT32_MIN;
	int8_t x906 = INT8_MIN;
	uint16_t x907 = UINT16_MAX;
	int32_t x908 = 10;
	volatile int32_t t24 = 128;

	t24 = (x905^((x906&x907)>>x908));

	if (t24 != -2147483585) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x909 = 52;
	volatile int16_t x910 = -3;
	uint32_t x911 = 233657U;
	uint16_t x912 = 1U;
	uint32_t t25 = 1137U;

	t25 = (x909^((x910&x911)>>x912));

	if (t25 != 116840U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x938 = 316730458U;
	uint32_t x939 = 0U;
	int32_t x940 = 3;
	uint32_t t26 = 10767U;

	t26 = (x937^((x938&x939)>>x940));

	if (t26 != 255U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x945 = INT32_MAX;
	int64_t x946 = INT64_MIN;
	int8_t x947 = 60;
	volatile int8_t x948 = 21;
	static int64_t t27 = -150658628602683LL;

	t27 = (x945^((x946&x947)>>x948));

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x983 = 51U;
	volatile uint8_t x984 = 4U;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x981^((x982&x983)>>x984));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1021 = UINT64_MAX;
	static uint8_t x1022 = 37U;
	uint8_t x1023 = UINT8_MAX;
	uint8_t x1024 = 18U;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x1021^((x1022&x1023)>>x1024));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x1113 = -8;
	volatile uint64_t x1115 = 1327LLU;
	volatile uint64_t t30 = 1595064764LLU;

	t30 = (x1113^((x1114&x1115)>>x1116));

	if (t30 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1133 = 13U;
	int8_t x1134 = -2;
	int64_t x1135 = INT64_MAX;
	uint16_t x1136 = 19U;
	static int64_t t31 = 958986204082973LL;

	t31 = (x1133^((x1134&x1135)>>x1136));

	if (t31 != 17592186044402LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1157 = INT64_MIN;
	uint32_t x1158 = UINT32_MAX;
	static int16_t x1159 = INT16_MAX;
	uint16_t x1160 = 7U;
	volatile int64_t t32 = 24LL;

	t32 = (x1157^((x1158&x1159)>>x1160));

	if (t32 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1209 = INT8_MIN;
	static uint32_t x1210 = 56U;
	uint8_t x1211 = UINT8_MAX;
	uint16_t x1212 = 27U;
	static uint32_t t33 = 5532729U;

	t33 = (x1209^((x1210&x1211)>>x1212));

	if (t33 != 4294967168U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1225 = -1;
	uint8_t x1226 = 3U;
	volatile int64_t x1227 = INT64_MIN;
	uint8_t x1228 = 2U;
	int64_t t34 = -3LL;

	t34 = (x1225^((x1226&x1227)>>x1228));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1237 = -1;
	uint32_t x1238 = 6U;
	static volatile int32_t x1239 = -5606478;
	uint16_t x1240 = 0U;
	volatile uint32_t t35 = 1U;

	t35 = (x1237^((x1238&x1239)>>x1240));

	if (t35 != 4294967293U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1282 = UINT16_MAX;
	uint32_t x1284 = 0U;
	volatile int64_t t36 = 1LL;

	t36 = (x1281^((x1282&x1283)>>x1284));

	if (t36 != 64552LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1329 = UINT16_MAX;
	int8_t x1331 = INT8_MAX;
	uint16_t x1332 = 0U;
	int32_t t37 = 2026388;

	t37 = (x1329^((x1330&x1331)>>x1332));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1334 = INT8_MIN;
	uint16_t x1335 = UINT16_MAX;
	uint16_t x1336 = 0U;
	volatile int32_t t38 = 178376803;

	t38 = (x1333^((x1334&x1335)>>x1336));

	if (t38 != 65409) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1349 = -1;
	int16_t x1350 = 54;
	volatile int8_t x1351 = INT8_MIN;
	int64_t x1352 = 1LL;
	int32_t t39 = 3;

	t39 = (x1349^((x1350&x1351)>>x1352));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1357 = UINT64_MAX;
	int64_t x1358 = INT64_MAX;
	volatile int64_t x1359 = -1LL;
	int8_t x1360 = 2;
	uint64_t t40 = 954977710515293LLU;

	t40 = (x1357^((x1358&x1359)>>x1360));

	if (t40 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1389 = UINT16_MAX;
	uint8_t x1390 = 11U;
	volatile int64_t x1391 = INT64_MIN;
	uint8_t x1392 = 7U;
	volatile int64_t t41 = 480728875LL;

	t41 = (x1389^((x1390&x1391)>>x1392));

	if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1450 = 301LLU;
	static int64_t x1451 = -1LL;
	volatile int8_t x1452 = 0;
	volatile uint64_t t42 = 1645LLU;

	t42 = (x1449^((x1450&x1451)>>x1452));

	if (t42 != 18446744071562068269LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1453 = UINT64_MAX;
	volatile uint64_t x1455 = 83049LLU;
	uint8_t x1456 = 39U;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x1453^((x1454&x1455)>>x1456));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1481 = UINT8_MAX;
	volatile uint32_t x1483 = UINT32_MAX;
	uint16_t x1484 = 6U;
	uint32_t t44 = 86823U;

	t44 = (x1481^((x1482&x1483)>>x1484));

	if (t44 != 67108609U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1585 = UINT64_MAX;
	int32_t x1586 = -1;
	uint16_t x1587 = 24U;
	static uint16_t x1588 = 6U;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = (x1585^((x1586&x1587)>>x1588));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x1629 = -51;
	int16_t x1630 = -482;
	static uint64_t t46 = 38130299429LLU;

	t46 = (x1629^((x1630&x1631)>>x1632));

	if (t46 != 18446744073709537677LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1682 = -1;
	int8_t x1684 = 5;
	volatile int32_t t47 = 31;

	t47 = (x1681^((x1682&x1683)>>x1684));

	if (t47 != -196839) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1697 = INT8_MIN;
	uint64_t x1698 = UINT64_MAX;
	int32_t x1699 = INT32_MIN;
	uint8_t x1700 = 3U;
	volatile uint64_t t48 = 2204531835756597624LLU;

	t48 = (x1697^((x1698&x1699)>>x1700));

	if (t48 != 16140901064764292992LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x1726 = UINT16_MAX;
	static uint16_t x1728 = 22U;
	int64_t t49 = -205323662671490781LL;

	t49 = (x1725^((x1726&x1727)>>x1728));

	if (t49 != 65535LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1737 = 7U;
	int32_t x1738 = INT32_MAX;
	uint8_t x1739 = UINT8_MAX;
	static int32_t t50 = 74;

	t50 = (x1737^((x1738&x1739)>>x1740));

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1837 = -1;
	int16_t x1839 = -875;
	volatile uint32_t x1840 = 13U;

	t51 = (x1837^((x1838&x1839)>>x1840));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1873 = -90110436517973LL;
	uint16_t x1875 = 1U;
	volatile uint8_t x1876 = 6U;
	static int64_t t52 = 3300154791LL;

	t52 = (x1873^((x1874&x1875)>>x1876));

	if (t52 != -90110436517973LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x1881 = INT8_MIN;
	static uint16_t x1883 = UINT16_MAX;
	uint64_t x1884 = 0LLU;
	volatile int32_t t53 = 511;

	t53 = (x1881^((x1882&x1883)>>x1884));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1905 = INT64_MAX;
	int16_t x1907 = 35;
	uint8_t x1908 = 4U;
	static volatile int64_t t54 = -492LL;

	t54 = (x1905^((x1906&x1907)>>x1908));

	if (t54 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1933 = INT8_MAX;
	volatile int8_t x1934 = INT8_MIN;
	uint32_t x1935 = UINT32_MAX;
	volatile uint32_t t55 = 716348374U;

	t55 = (x1933^((x1934&x1935)>>x1936));

	if (t55 != 1073741727U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2093 = 757331;
	int32_t x2094 = 2958;
	static volatile uint8_t x2095 = 7U;
	volatile uint16_t x2096 = 6U;
	int32_t t56 = -3404145;

	t56 = (x2093^((x2094&x2095)>>x2096));

	if (t56 != 757331) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2121 = INT16_MIN;
	static int64_t x2122 = INT64_MIN;
	static volatile uint64_t x2123 = 4380445833118919LLU;
	uint8_t x2124 = 21U;

	t57 = (x2121^((x2122&x2123)>>x2124));

	if (t57 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2138 = 22U;
	volatile uint64_t x2139 = 30890145202LLU;
	static uint64_t t58 = 1369LLU;

	t58 = (x2137^((x2138&x2139)>>x2140));

	if (t58 != 2LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2149 = INT16_MIN;
	static int8_t x2150 = INT8_MAX;
	int32_t x2151 = 1597;
	int32_t t59 = 3609;

	t59 = (x2149^((x2150&x2151)>>x2152));

	if (t59 != -32707) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x2174 = 0;
	uint8_t x2175 = 3U;
	uint16_t x2176 = 1U;
	int32_t t60 = 1594025;

	t60 = (x2173^((x2174&x2175)>>x2176));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x2222 = 50291842LLU;
	static volatile int32_t x2223 = 203328;
	uint8_t x2224 = 10U;
	volatile uint64_t t61 = 4183926648939LLU;

	t61 = (x2221^((x2222&x2223)>>x2224));

	if (t61 != 18446744073709551423LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2274 = 165;
	static int32_t x2275 = -87900;
	uint16_t x2276 = 29U;

	t62 = (x2273^((x2274&x2275)>>x2276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x2317 = -1;
	volatile int32_t x2318 = INT32_MIN;
	uint8_t x2320 = 9U;
	static uint32_t t63 = UINT32_MAX;

	t63 = (x2317^((x2318&x2319)>>x2320));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x2393 = INT16_MAX;
	int64_t x2394 = -49069036359LL;
	static int8_t x2396 = 1;
	volatile int64_t t64 = 9706LL;

	t64 = (x2393^((x2394&x2395)>>x2396));

	if (t64 != 2467LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2401 = 42915LLU;
	int16_t x2402 = -26;
	int16_t x2403 = 4;
	static uint16_t x2404 = 10U;
	static volatile uint64_t t65 = 14898691158196LLU;

	t65 = (x2401^((x2402&x2403)>>x2404));

	if (t65 != 42915LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2405 = 633U;
	static int8_t x2406 = INT8_MAX;
	uint64_t x2407 = 27587257LLU;
	uint16_t x2408 = 27U;
	uint64_t t66 = 10919863LLU;

	t66 = (x2405^((x2406&x2407)>>x2408));

	if (t66 != 633LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x2483 = 14639U;
	uint16_t x2484 = 1U;

	t67 = (x2481^((x2482&x2483)>>x2484));

	if (t67 != 4294965229U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2517 = -1;
	uint8_t x2518 = 0U;
	uint32_t x2519 = 113U;
	int16_t x2520 = 1;

	t68 = (x2517^((x2518&x2519)>>x2520));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2541 = UINT16_MAX;
	uint8_t x2542 = 1U;
	int32_t t69 = 514100448;

	t69 = (x2541^((x2542&x2543)>>x2544));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2581 = UINT32_MAX;
	static int32_t x2582 = INT32_MAX;
	uint32_t x2583 = 136U;
	static volatile int8_t x2584 = 28;

	t70 = (x2581^((x2582&x2583)>>x2584));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x2589 = 69U;
	volatile uint32_t x2590 = UINT32_MAX;
	int16_t x2591 = INT16_MIN;
	static int8_t x2592 = 0;

	t71 = (x2589^((x2590&x2591)>>x2592));

	if (t71 != 4294934597U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2626 = INT64_MIN;
	uint8_t x2627 = 58U;
	volatile uint8_t x2628 = 1U;
	volatile int64_t t72 = -3049831237773LL;

	t72 = (x2625^((x2626&x2627)>>x2628));

	if (t72 != -32768LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2633 = INT32_MIN;
	int8_t x2634 = INT8_MAX;
	volatile int8_t x2635 = 1;
	uint8_t x2636 = 0U;
	volatile int32_t t73 = -20;

	t73 = (x2633^((x2634&x2635)>>x2636));

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2637 = INT64_MIN;
	volatile int8_t x2638 = INT8_MIN;
	int16_t x2639 = INT16_MAX;
	static int16_t x2640 = 1;
	volatile int64_t t74 = 942859538596805068LL;

	t74 = (x2637^((x2638&x2639)>>x2640));

	if (t74 != -9223372036854759488LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x2661 = 1260144LLU;
	int32_t x2662 = INT32_MAX;
	int16_t x2663 = -1;
	static uint8_t x2664 = 7U;

	t75 = (x2661^((x2662&x2663)>>x2664));

	if (t75 != 15517071LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2713 = 21;
	uint64_t x2715 = 21211861844792LLU;
	int16_t x2716 = 28;
	static uint64_t t76 = 65117334330025462LLU;

	t76 = (x2713^((x2714&x2715)>>x2716));

	if (t76 != 79033LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2721 = UINT32_MAX;
	int16_t x2722 = 0;
	static volatile int8_t x2723 = INT8_MIN;
	uint32_t t77 = UINT32_MAX;

	t77 = (x2721^((x2722&x2723)>>x2724));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2737 = -1;
	int16_t x2739 = -1;
	int8_t x2740 = 1;
	volatile int32_t t78 = 1167;

	t78 = (x2737^((x2738&x2739)>>x2740));

	if (t78 != -1073741824) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2749 = UINT64_MAX;
	uint64_t x2750 = UINT64_MAX;
	static int16_t x2752 = 9;
	volatile uint64_t t79 = 15601LLU;

	t79 = (x2749^((x2750&x2751)>>x2752));

	if (t79 != 18428729675200069632LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2753 = 405;
	int8_t x2754 = 0;
	int32_t x2755 = -1;
	uint16_t x2756 = 26U;
	int32_t t80 = -1491256;

	t80 = (x2753^((x2754&x2755)>>x2756));

	if (t80 != 405) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x2869 = UINT16_MAX;
	static int32_t x2871 = INT32_MIN;
	int8_t x2872 = 1;
	static volatile int32_t t81 = 4;

	t81 = (x2869^((x2870&x2871)>>x2872));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x2933 = 6U;
	int8_t x2934 = 50;
	static int16_t x2935 = INT16_MIN;
	volatile uint16_t x2936 = 11U;
	static volatile int32_t t82 = 102136;

	t82 = (x2933^((x2934&x2935)>>x2936));

	if (t82 != 6) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2981 = 21905446215485LLU;
	int64_t x2982 = INT64_MAX;
	static volatile int32_t x2983 = -27079641;
	int8_t x2984 = 0;
	volatile uint64_t t83 = 277LLU;

	t83 = (x2981^((x2982&x2983)>>x2984));

	if (t83 != 9223350131384242970LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3053 = 122U;
	static volatile int32_t x3054 = -10;
	static volatile uint16_t x3055 = 1456U;
	volatile uint8_t x3056 = 4U;
	int32_t t84 = 45;

	t84 = (x3053^((x3054&x3055)>>x3056));

	if (t84 != 33) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x3059 = 0U;
	int8_t x3060 = 1;
	static int32_t t85 = 3440751;

	t85 = (x3057^((x3058&x3059)>>x3060));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3189 = INT16_MIN;
	volatile int64_t x3190 = INT64_MAX;
	volatile int16_t x3191 = INT16_MIN;
	int16_t x3192 = 0;
	volatile int64_t t86 = INT64_MIN;

	t86 = (x3189^((x3190&x3191)>>x3192));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3197 = INT32_MIN;
	static volatile uint8_t x3198 = 1U;
	uint32_t x3199 = UINT32_MAX;
	volatile uint32_t t87 = 50438510U;

	t87 = (x3197^((x3198&x3199)>>x3200));

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3233 = INT8_MIN;
	int8_t x3234 = INT8_MIN;
	uint32_t x3235 = 173U;
	uint32_t t88 = 254833U;

	t88 = (x3233^((x3234&x3235)>>x3236));

	if (t88 != 4294967168U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x3238 = 1U;
	int32_t t89 = 12224451;

	t89 = (x3237^((x3238&x3239)>>x3240));

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3265 = INT8_MIN;
	volatile int32_t x3266 = INT32_MAX;
	uint16_t x3267 = 56U;
	int8_t x3268 = 0;
	volatile int32_t t90 = 538100241;

	t90 = (x3265^((x3266&x3267)>>x3268));

	if (t90 != -72) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x3270 = 310U;
	static uint8_t x3271 = 4U;
	static uint8_t x3272 = 0U;
	volatile int64_t t91 = -3149447180496844LL;

	t91 = (x3269^((x3270&x3271)>>x3272));

	if (t91 != 4LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3277 = -1;
	volatile int8_t x3278 = INT8_MAX;
	static int16_t x3279 = INT16_MIN;
	static volatile int32_t t92 = -470;

	t92 = (x3277^((x3278&x3279)>>x3280));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x3313 = INT64_MAX;
	static int32_t x3314 = INT32_MIN;
	uint8_t x3315 = 38U;
	uint8_t x3316 = 0U;
	int64_t t93 = INT64_MAX;

	t93 = (x3313^((x3314&x3315)>>x3316));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3329 = UINT16_MAX;
	int16_t x3330 = 93;
	volatile uint64_t x3331 = 59371091LLU;
	uint64_t x3332 = 30LLU;
	volatile uint64_t t94 = 9750230724327739LLU;

	t94 = (x3329^((x3330&x3331)>>x3332));

	if (t94 != 65535LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x3361 = UINT16_MAX;
	static uint64_t x3362 = UINT64_MAX;
	int8_t x3363 = 46;
	int8_t x3364 = 1;
	uint64_t t95 = 7350589693327257LLU;

	t95 = (x3361^((x3362&x3363)>>x3364));

	if (t95 != 65512LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3449 = INT16_MIN;
	static int32_t x3450 = INT32_MAX;
	int16_t x3451 = INT16_MIN;
	uint64_t x3452 = 0LLU;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x3449^((x3450&x3451)>>x3452));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3505 = INT8_MAX;
	int8_t x3506 = -1;
	int8_t x3507 = INT8_MAX;
	uint16_t x3508 = 2U;
	volatile int32_t t97 = -2617831;

	t97 = (x3505^((x3506&x3507)>>x3508));

	if (t97 != 96) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3645 = -1;
	int8_t x3647 = INT8_MAX;
	uint8_t x3648 = 2U;

	t98 = (x3645^((x3646&x3647)>>x3648));

	if (t98 != 4294967264U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x3661 = 5U;
	uint32_t x3662 = 379281933U;
	uint8_t x3663 = 5U;
	uint32_t x3664 = 3U;
	volatile uint32_t t99 = 312166515U;

	t99 = (x3661^((x3662&x3663)>>x3664));

	if (t99 != 5U) { NG(); } else { ; }
	
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

