#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 14862U;
volatile int32_t x106 = INT32_MAX;
static int32_t x153 = -1;
volatile int32_t t3 = 29;
int16_t x309 = INT16_MAX;
int32_t t4 = 46;
int16_t x485 = INT16_MAX;
volatile int64_t t7 = -146LL;
int64_t x507 = 0LL;
int32_t x769 = -1;
static volatile int64_t t9 = -16801LL;
int8_t x800 = -1;
uint64_t x840 = UINT64_MAX;
int16_t x1020 = 1;
volatile int64_t x1101 = INT64_MIN;
int32_t t15 = 354843829;
volatile int8_t x1181 = -8;
int16_t x1184 = -1;
static volatile int32_t t16 = -54;
uint32_t x1329 = 421633U;
volatile uint64_t x1330 = 20849600914LLU;
uint32_t x1403 = 55498U;
volatile uint32_t t22 = 74823353U;
int32_t x1460 = -1;
volatile int32_t t23 = 153050967;
int64_t x1556 = -1LL;
volatile int32_t t26 = INT32_MIN;
int16_t x1694 = 2;
volatile int16_t x1700 = -1;
volatile int16_t x1766 = 4;
uint16_t x1767 = 0U;
volatile int32_t t32 = 829351475;
uint16_t x1818 = 16U;
static uint32_t x1906 = 2249148U;
volatile uint32_t x1928 = 0U;
uint64_t x1974 = UINT64_MAX;
static uint32_t x2119 = UINT32_MAX;
static volatile int16_t x2338 = INT16_MAX;
static uint64_t x2339 = UINT64_MAX;
volatile int32_t t39 = -7;
static int8_t x2393 = INT8_MAX;
static uint32_t x2395 = 29699U;
static volatile int8_t x2396 = 0;
int8_t x2409 = -1;
int64_t x2412 = INT64_MIN;
volatile uint8_t x2414 = 1U;
int16_t x2415 = -1;
int8_t x2416 = -1;
static volatile uint32_t x2507 = 0U;
uint8_t x2574 = 112U;
volatile int64_t t46 = 10LL;
volatile int8_t x2607 = 0;
volatile uint64_t t48 = 0LLU;
int8_t x2720 = 0;
uint32_t x2805 = 41640U;
int16_t x2806 = INT16_MAX;
static volatile int64_t x2808 = -1LL;
int8_t x2969 = INT8_MIN;
uint32_t x2970 = UINT32_MAX;
int8_t x2990 = 1;
uint16_t x3014 = 18768U;
static uint8_t x3016 = 5U;
uint8_t x3053 = UINT8_MAX;
int32_t x3054 = INT32_MAX;
static uint8_t x3060 = 0U;
uint8_t x3068 = 0U;
int16_t x3097 = INT16_MIN;
uint8_t x3100 = 0U;
uint64_t x3272 = UINT64_MAX;
uint64_t t66 = 21459800385LLU;
static int8_t x3290 = 1;
static volatile int32_t t67 = -130830;
volatile int32_t x3305 = -1;
static volatile uint8_t x3308 = 0U;
int8_t x3471 = INT8_MAX;
volatile uint64_t t71 = 671835LLU;
static int16_t x3520 = 0;
int64_t x3542 = 101180020LL;
int32_t x3577 = -6540823;
volatile int32_t t74 = -2573241;
int64_t t80 = 95LL;
uint16_t x4006 = 45U;
volatile uint32_t x4235 = UINT32_MAX;
static int8_t x4633 = INT8_MIN;
volatile uint32_t x4634 = 3178U;
int8_t x4635 = 0;
volatile uint32_t t85 = 28745U;
volatile uint64_t x4700 = 3LLU;
uint32_t x4742 = 1171U;
int8_t x4907 = -1;
volatile int8_t x5034 = INT8_MAX;
int64_t t90 = 0LL;
volatile uint8_t x5270 = 3U;
uint32_t x5272 = 15402232U;
static volatile int16_t x5627 = -1;
uint16_t x5681 = 0U;
int8_t x5683 = 0;
uint8_t x5684 = UINT8_MAX;
int8_t x5712 = -1;
uint64_t x5743 = 0LLU;
static int64_t t97 = 3039965LL;
int8_t x5752 = INT8_MAX;
uint64_t x5829 = 750LLU;


void f0(void) {
	uint32_t x5 = 87U;
	uint16_t x6 = UINT16_MAX;
	volatile int64_t x7 = 0LL;
	volatile int8_t x8 = INT8_MIN;

	t0 = (x5/(x6<<(x7*x8)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MAX;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = 12U;
	volatile int64_t t1 = 1309990526244LL;

	t1 = (x45/(x46<<(x47*x48)));

	if (t1 != -4294967298LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x105 = 4;
	volatile int32_t x107 = 188979;
	int8_t x108 = 0;
	volatile int32_t t2 = 38073;

	t2 = (x105/(x106<<(x107*x108)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x154 = 29U;
	volatile int8_t x155 = INT8_MIN;
	int32_t x156 = 0;

	t3 = (x153/(x154<<(x155*x156)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x310 = INT16_MAX;
	int8_t x311 = -1;
	static int16_t x312 = -1;

	t4 = (x309/(x310<<(x311*x312)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x329 = 17U;
	uint16_t x330 = 51U;
	uint16_t x331 = 0U;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t5 = 128;

	t5 = (x329/(x330<<(x331*x332)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x333 = 41;
	volatile int32_t x334 = INT32_MAX;
	int32_t x335 = 0;
	volatile int64_t x336 = 44307821483LL;
	volatile int32_t t6 = -35512106;

	t6 = (x333/(x334<<(x335*x336)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x486 = INT64_MAX;
	int16_t x487 = INT16_MIN;
	uint8_t x488 = 0U;

	t7 = (x485/(x486<<(x487*x488)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x505 = 5334583LL;
	uint16_t x506 = 513U;
	static int8_t x508 = INT8_MIN;
	int64_t t8 = 87552LL;

	t8 = (x505/(x506<<(x507*x508)));

	if (t8 != 10398LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x770 = 2419743739LL;
	int64_t x771 = -1LL;
	uint64_t x772 = UINT64_MAX;

	t9 = (x769/(x770<<(x771*x772)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x797 = INT16_MIN;
	uint16_t x798 = 84U;
	static volatile uint64_t x799 = UINT64_MAX;
	int32_t t10 = -2750775;

	t10 = (x797/(x798<<(x799*x800)));

	if (t10 != -195) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x837 = -1;
	int32_t x838 = 1933;
	int8_t x839 = -1;
	static volatile int32_t t11 = 665580456;

	t11 = (x837/(x838<<(x839*x840)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1013 = 116295422074691567LL;
	static int16_t x1014 = 14;
	uint16_t x1015 = 0U;
	uint64_t x1016 = 1LLU;
	int64_t t12 = -49528496LL;

	t12 = (x1013/(x1014<<(x1015*x1016)));

	if (t12 != 8306815862477969LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1017 = 3;
	uint32_t x1018 = 11U;
	uint8_t x1019 = 6U;
	static volatile uint32_t t13 = 69049521U;

	t13 = (x1017/(x1018<<(x1019*x1020)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x1102 = 23;
	volatile int64_t x1103 = -1LL;
	int16_t x1104 = -1;
	volatile int64_t t14 = -64023314LL;

	t14 = (x1101/(x1102<<(x1103*x1104)));

	if (t14 != -200508087757712517LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1121 = -1;
	static int16_t x1122 = INT16_MAX;
	int16_t x1123 = 0;
	uint32_t x1124 = 3422U;

	t15 = (x1121/(x1122<<(x1123*x1124)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1182 = INT16_MAX;
	int16_t x1183 = 0;

	t16 = (x1181/(x1182<<(x1183*x1184)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x1205 = -591LL;
	uint32_t x1206 = 997U;
	uint8_t x1207 = 20U;
	int8_t x1208 = 0;
	volatile int64_t t17 = 107076713LL;

	t17 = (x1205/(x1206<<(x1207*x1208)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1245 = 1LL;
	int16_t x1246 = 12115;
	static int16_t x1247 = 6;
	uint8_t x1248 = 1U;
	volatile int64_t t18 = -2008LL;

	t18 = (x1245/(x1246<<(x1247*x1248)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1331 = 483LLU;
	static uint8_t x1332 = 0U;
	uint64_t t19 = 1889LLU;

	t19 = (x1329/(x1330<<(x1331*x1332)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1397 = 0U;
	uint8_t x1398 = UINT8_MAX;
	uint32_t x1399 = 11U;
	int8_t x1400 = 0;
	uint32_t t20 = 118776346U;

	t20 = (x1397/(x1398<<(x1399*x1400)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1401 = UINT16_MAX;
	volatile uint64_t x1402 = 14666660701595LLU;
	int32_t x1404 = INT32_MIN;
	uint64_t t21 = 12539407268777LLU;

	t21 = (x1401/(x1402<<(x1403*x1404)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1441 = 594;
	static uint32_t x1442 = 375U;
	uint8_t x1443 = 0U;
	int16_t x1444 = INT16_MAX;

	t22 = (x1441/(x1442<<(x1443*x1444)));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1457 = -1;
	uint8_t x1458 = 9U;
	uint32_t x1459 = UINT32_MAX;

	t23 = (x1457/(x1458<<(x1459*x1460)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1489 = -15210;
	volatile uint64_t x1490 = UINT64_MAX;
	int64_t x1491 = -1LL;
	int16_t x1492 = -1;
	uint64_t t24 = 6874LLU;

	t24 = (x1489/(x1490<<(x1491*x1492)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1553 = INT16_MIN;
	static volatile uint64_t x1554 = 180887LLU;
	int16_t x1555 = -1;
	volatile uint64_t t25 = 416212265499719428LLU;

	t25 = (x1553/(x1554<<(x1555*x1556)));

	if (t25 != 50989689899521LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1685 = INT32_MIN;
	int8_t x1686 = 1;
	static int16_t x1687 = INT16_MAX;
	static uint8_t x1688 = 0U;

	t26 = (x1685/(x1686<<(x1687*x1688)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1693 = INT8_MIN;
	int32_t x1695 = -1;
	int8_t x1696 = -7;
	int32_t t27 = -99001;

	t27 = (x1693/(x1694<<(x1695*x1696)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1697 = INT32_MIN;
	int32_t x1698 = 1428;
	volatile int8_t x1699 = -1;
	int32_t t28 = 6186330;

	t28 = (x1697/(x1698<<(x1699*x1700)));

	if (t28 != -751920) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1725 = -1;
	int16_t x1726 = INT16_MAX;
	uint8_t x1727 = UINT8_MAX;
	static int32_t x1728 = 0;
	volatile int32_t t29 = -2978349;

	t29 = (x1725/(x1726<<(x1727*x1728)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1753 = INT16_MAX;
	uint32_t x1754 = 114517334U;
	int64_t x1755 = INT64_MIN;
	int32_t x1756 = 0;
	static uint32_t t30 = 213U;

	t30 = (x1753/(x1754<<(x1755*x1756)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1765 = -1;
	int8_t x1768 = -34;
	int32_t t31 = -92;

	t31 = (x1765/(x1766<<(x1767*x1768)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x1781 = INT8_MAX;
	volatile uint16_t x1782 = UINT16_MAX;
	volatile int8_t x1783 = 0;
	volatile int32_t x1784 = INT32_MIN;

	t32 = (x1781/(x1782<<(x1783*x1784)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1817 = -207;
	volatile int16_t x1819 = 0;
	static int16_t x1820 = INT16_MIN;
	int32_t t33 = 14683;

	t33 = (x1817/(x1818<<(x1819*x1820)));

	if (t33 != -12) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x1905 = -4060;
	int8_t x1907 = 0;
	uint8_t x1908 = 0U;
	volatile uint32_t t34 = 284763401U;

	t34 = (x1905/(x1906<<(x1907*x1908)));

	if (t34 != 1909U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1925 = -14740665;
	uint64_t x1926 = 429187717725345LLU;
	uint16_t x1927 = UINT16_MAX;
	static uint64_t t35 = 24255LLU;

	t35 = (x1925/(x1926<<(x1927*x1928)));

	if (t35 != 42980LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1973 = -1;
	int16_t x1975 = -1;
	int8_t x1976 = -1;
	volatile uint64_t t36 = 416LLU;

	t36 = (x1973/(x1974<<(x1975*x1976)));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2117 = UINT32_MAX;
	int16_t x2118 = INT16_MAX;
	static int8_t x2120 = -1;
	uint32_t t37 = 82585U;

	t37 = (x2117/(x2118<<(x2119*x2120)));

	if (t37 != 65538U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2189 = -232;
	int8_t x2190 = INT8_MAX;
	uint16_t x2191 = 1U;
	uint8_t x2192 = 0U;
	volatile int32_t t38 = 36;

	t38 = (x2189/(x2190<<(x2191*x2192)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2337 = 9U;
	volatile int64_t x2340 = -1LL;

	t39 = (x2337/(x2338<<(x2339*x2340)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2394 = 1927;
	volatile int32_t t40 = -65162169;

	t40 = (x2393/(x2394<<(x2395*x2396)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2410 = UINT64_MAX;
	volatile int16_t x2411 = 0;
	uint64_t t41 = 431590615253335LLU;

	t41 = (x2409/(x2410<<(x2411*x2412)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2413 = INT64_MAX;
	int64_t t42 = 25824392589249LL;

	t42 = (x2413/(x2414<<(x2415*x2416)));

	if (t42 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2505 = INT64_MAX;
	uint64_t x2506 = 28497LLU;
	volatile uint64_t x2508 = 1LLU;
	uint64_t t43 = 199LLU;

	t43 = (x2505/(x2506<<(x2507*x2508)));

	if (t43 != 323661158608091LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2529 = -1;
	volatile uint16_t x2530 = UINT16_MAX;
	volatile int8_t x2531 = -1;
	int8_t x2532 = -12;
	volatile int32_t t44 = -3;

	t44 = (x2529/(x2530<<(x2531*x2532)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x2561 = -12511;
	uint16_t x2562 = UINT16_MAX;
	uint8_t x2563 = 0U;
	volatile uint32_t x2564 = 747U;
	volatile int32_t t45 = -55865;

	t45 = (x2561/(x2562<<(x2563*x2564)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2573 = INT64_MIN;
	int64_t x2575 = 193584LL;
	uint8_t x2576 = 0U;

	t46 = (x2573/(x2574<<(x2575*x2576)));

	if (t46 != -82351536043346212LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x2589 = INT16_MAX;
	volatile int8_t x2590 = 63;
	int8_t x2591 = 11;
	uint16_t x2592 = 1U;
	int32_t t47 = -35485046;

	t47 = (x2589/(x2590<<(x2591*x2592)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2605 = -1LL;
	uint64_t x2606 = 10638758059LLU;
	int64_t x2608 = INT64_MAX;

	t48 = (x2605/(x2606<<(x2607*x2608)));

	if (t48 != 1733918937LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2613 = -1;
	uint32_t x2614 = 484598216U;
	int32_t x2615 = -1;
	uint64_t x2616 = UINT64_MAX;
	volatile uint32_t t49 = 101U;

	t49 = (x2613/(x2614<<(x2615*x2616)));

	if (t49 != 4U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x2709 = 2717566;
	volatile int8_t x2710 = 1;
	int64_t x2711 = 0LL;
	uint64_t x2712 = UINT64_MAX;
	volatile int32_t t50 = 79824851;

	t50 = (x2709/(x2710<<(x2711*x2712)));

	if (t50 != 2717566) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2717 = INT16_MIN;
	uint16_t x2718 = 1U;
	uint64_t x2719 = UINT64_MAX;
	int32_t t51 = 484356;

	t51 = (x2717/(x2718<<(x2719*x2720)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2807 = -1;
	uint32_t t52 = 12017322U;

	t52 = (x2805/(x2806<<(x2807*x2808)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2825 = INT8_MIN;
	uint64_t x2826 = 358262LLU;
	static int8_t x2827 = -1;
	int16_t x2828 = -24;
	volatile uint64_t t53 = 255327627660LLU;

	t53 = (x2825/(x2826<<(x2827*x2828)));

	if (t53 != 3069015LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x2897 = 2443U;
	int32_t x2898 = INT32_MAX;
	uint32_t x2899 = UINT32_MAX;
	int64_t x2900 = 0LL;
	int32_t t54 = -1;

	t54 = (x2897/(x2898<<(x2899*x2900)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2953 = INT64_MIN;
	volatile int32_t x2954 = 8282351;
	int8_t x2955 = -1;
	static uint64_t x2956 = UINT64_MAX;
	int64_t t55 = -10LL;

	t55 = (x2953/(x2954<<(x2955*x2956)));

	if (t55 != -556808811704LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2957 = -5253612085558LL;
	uint64_t x2958 = 412546LLU;
	int8_t x2959 = -1;
	int8_t x2960 = -1;
	volatile uint64_t t56 = 978439146LLU;

	t56 = (x2957/(x2958<<(x2959*x2960)));

	if (t56 != 22357190252841LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x2971 = 0;
	volatile uint8_t x2972 = UINT8_MAX;
	uint32_t t57 = 686842275U;

	t57 = (x2969/(x2970<<(x2971*x2972)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2989 = -42;
	static int32_t x2991 = -1;
	int16_t x2992 = -1;
	int32_t t58 = -7;

	t58 = (x2989/(x2990<<(x2991*x2992)));

	if (t58 != -21) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3013 = 3U;
	uint8_t x3015 = 2U;
	volatile uint32_t t59 = 216U;

	t59 = (x3013/(x3014<<(x3015*x3016)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3055 = 0U;
	uint64_t x3056 = UINT64_MAX;
	int32_t t60 = 94093;

	t60 = (x3053/(x3054<<(x3055*x3056)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3057 = INT64_MIN;
	static uint64_t x3058 = UINT64_MAX;
	int16_t x3059 = INT16_MIN;
	uint64_t t61 = 1LLU;

	t61 = (x3057/(x3058<<(x3059*x3060)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3065 = INT32_MIN;
	volatile int8_t x3066 = INT8_MAX;
	volatile uint64_t x3067 = UINT64_MAX;
	int32_t t62 = -5273382;

	t62 = (x3065/(x3066<<(x3067*x3068)));

	if (t62 != -16909320) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3098 = 7091U;
	uint32_t x3099 = 24U;
	int32_t t63 = -3;

	t63 = (x3097/(x3098<<(x3099*x3100)));

	if (t63 != -4) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3261 = -815991479;
	uint32_t x3262 = 2U;
	int32_t x3263 = -3;
	volatile uint32_t x3264 = UINT32_MAX;
	volatile uint32_t t64 = 891U;

	t64 = (x3261/(x3262<<(x3263*x3264)));

	if (t64 != 217435988U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3269 = UINT8_MAX;
	uint64_t x3270 = 2908LLU;
	volatile int8_t x3271 = -1;
	static uint64_t t65 = 7LLU;

	t65 = (x3269/(x3270<<(x3271*x3272)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3273 = -1;
	uint64_t x3274 = 2166960331905655979LLU;
	uint32_t x3275 = 0U;
	uint64_t x3276 = 38927LLU;

	t66 = (x3273/(x3274<<(x3275*x3276)));

	if (t66 != 8LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3289 = -1;
	static volatile uint8_t x3291 = 30U;
	uint8_t x3292 = 0U;

	t67 = (x3289/(x3290<<(x3291*x3292)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3306 = INT32_MAX;
	int16_t x3307 = 787;
	int32_t t68 = -964374301;

	t68 = (x3305/(x3306<<(x3307*x3308)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3429 = INT8_MIN;
	int32_t x3430 = 25139;
	int16_t x3431 = -1;
	uint64_t x3432 = UINT64_MAX;
	static int32_t t69 = -3635;

	t69 = (x3429/(x3430<<(x3431*x3432)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3461 = INT64_MAX;
	uint32_t x3462 = UINT32_MAX;
	static volatile uint64_t x3463 = UINT64_MAX;
	int16_t x3464 = -1;
	volatile int64_t t70 = 3567208496LL;

	t70 = (x3461/(x3462<<(x3463*x3464)));

	if (t70 != 2147483649LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3469 = 17;
	uint64_t x3470 = 1103994316322LLU;
	uint32_t x3472 = 0U;

	t71 = (x3469/(x3470<<(x3471*x3472)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3517 = INT64_MIN;
	volatile uint16_t x3518 = 5U;
	static int16_t x3519 = INT16_MIN;
	volatile int64_t t72 = -954645878240LL;

	t72 = (x3517/(x3518<<(x3519*x3520)));

	if (t72 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3541 = -718;
	static int8_t x3543 = 0;
	static int64_t x3544 = INT64_MIN;
	volatile int64_t t73 = -70821120LL;

	t73 = (x3541/(x3542<<(x3543*x3544)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3578 = UINT8_MAX;
	int16_t x3579 = -1;
	static int64_t x3580 = -1LL;

	t74 = (x3577/(x3578<<(x3579*x3580)));

	if (t74 != -12825) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x3621 = INT8_MAX;
	int8_t x3622 = INT8_MAX;
	int64_t x3623 = INT64_MIN;
	uint64_t x3624 = 0LLU;
	volatile int32_t t75 = 4043465;

	t75 = (x3621/(x3622<<(x3623*x3624)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3641 = 3259U;
	uint8_t x3642 = UINT8_MAX;
	static int8_t x3643 = 0;
	int8_t x3644 = INT8_MAX;
	uint32_t t76 = 93478U;

	t76 = (x3641/(x3642<<(x3643*x3644)));

	if (t76 != 12U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3681 = 34018377U;
	static uint8_t x3682 = 115U;
	int16_t x3683 = 0;
	int32_t x3684 = -272;
	static uint32_t t77 = 6776232U;

	t77 = (x3681/(x3682<<(x3683*x3684)));

	if (t77 != 295811U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3709 = UINT64_MAX;
	uint64_t x3710 = 2008LLU;
	uint32_t x3711 = 3U;
	uint8_t x3712 = 0U;
	volatile uint64_t t78 = 40386596493545113LLU;

	t78 = (x3709/(x3710<<(x3711*x3712)));

	if (t78 != 9186625534715912LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3893 = 0U;
	int32_t x3894 = INT32_MAX;
	uint32_t x3895 = 0U;
	volatile uint32_t x3896 = 669U;
	volatile uint32_t t79 = 220U;

	t79 = (x3893/(x3894<<(x3895*x3896)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3917 = INT64_MAX;
	uint32_t x3918 = 424489U;
	uint32_t x3919 = UINT32_MAX;
	static int8_t x3920 = -3;

	t80 = (x3917/(x3918<<(x3919*x3920)));

	if (t80 != 2716022098586LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x3949 = INT32_MIN;
	volatile uint64_t x3950 = UINT64_MAX;
	volatile int16_t x3951 = -1;
	volatile uint32_t x3952 = UINT32_MAX;
	volatile uint64_t t81 = 371LLU;

	t81 = (x3949/(x3950<<(x3951*x3952)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4005 = 20U;
	static int16_t x4007 = 0;
	int64_t x4008 = -16170471946617LL;
	static int32_t t82 = -1009;

	t82 = (x4005/(x4006<<(x4007*x4008)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4233 = INT8_MAX;
	volatile uint16_t x4234 = 6354U;
	uint32_t x4236 = UINT32_MAX;
	static int32_t t83 = -110;

	t83 = (x4233/(x4234<<(x4235*x4236)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4501 = UINT32_MAX;
	static volatile int32_t x4502 = 85626;
	int8_t x4503 = 0;
	static uint16_t x4504 = UINT16_MAX;
	volatile uint32_t t84 = 1775640341U;

	t84 = (x4501/(x4502<<(x4503*x4504)));

	if (t84 != 50159U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x4636 = 21927801436LL;

	t85 = (x4633/(x4634<<(x4635*x4636)));

	if (t85 != 1351468U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4697 = INT16_MIN;
	volatile uint32_t x4698 = 14U;
	uint8_t x4699 = 0U;
	uint32_t t86 = 676U;

	t86 = (x4697/(x4698<<(x4699*x4700)));

	if (t86 != 306781037U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4701 = 114370;
	static int8_t x4702 = INT8_MAX;
	volatile int16_t x4703 = -1;
	uint32_t x4704 = UINT32_MAX;
	static int32_t t87 = 1701;

	t87 = (x4701/(x4702<<(x4703*x4704)));

	if (t87 != 450) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4741 = UINT32_MAX;
	uint16_t x4743 = 9U;
	uint32_t x4744 = 1U;
	uint32_t t88 = 90515U;

	t88 = (x4741/(x4742<<(x4743*x4744)));

	if (t88 != 7163U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x4905 = -1;
	int64_t x4906 = 1157696799850LL;
	int8_t x4908 = -1;
	int64_t t89 = 4LL;

	t89 = (x4905/(x4906<<(x4907*x4908)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x5033 = -1LL;
	uint8_t x5035 = 0U;
	int8_t x5036 = -2;

	t90 = (x5033/(x5034<<(x5035*x5036)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x5097 = 0U;
	static uint16_t x5098 = 4U;
	int64_t x5099 = INT64_MIN;
	volatile uint64_t x5100 = 14016946LLU;
	uint32_t t91 = 170583U;

	t91 = (x5097/(x5098<<(x5099*x5100)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x5269 = -1;
	int8_t x5271 = 0;
	int32_t t92 = 17975;

	t92 = (x5269/(x5270<<(x5271*x5272)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5589 = INT16_MIN;
	uint64_t x5590 = UINT64_MAX;
	uint8_t x5591 = 5U;
	uint32_t x5592 = 4U;
	uint64_t t93 = 233831LLU;

	t93 = (x5589/(x5590<<(x5591*x5592)));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x5625 = -876605LL;
	uint8_t x5626 = 3U;
	int8_t x5628 = -1;
	static volatile int64_t t94 = 1191LL;

	t94 = (x5625/(x5626<<(x5627*x5628)));

	if (t94 != -146100LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5682 = 23782476U;
	static volatile uint32_t t95 = 78750517U;

	t95 = (x5681/(x5682<<(x5683*x5684)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5709 = INT8_MAX;
	uint8_t x5710 = 1U;
	static uint64_t x5711 = UINT64_MAX;
	int32_t t96 = 3712395;

	t96 = (x5709/(x5710<<(x5711*x5712)));

	if (t96 != 63) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5741 = 44;
	int64_t x5742 = INT64_MAX;
	uint64_t x5744 = 853789977LLU;

	t97 = (x5741/(x5742<<(x5743*x5744)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5749 = INT8_MAX;
	static uint32_t x5750 = 6U;
	uint32_t x5751 = 0U;
	volatile uint32_t t98 = 98U;

	t98 = (x5749/(x5750<<(x5751*x5752)));

	if (t98 != 21U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5830 = UINT16_MAX;
	static int8_t x5831 = INT8_MIN;
	int16_t x5832 = 0;
	uint64_t t99 = 5719685700LLU;

	t99 = (x5829/(x5830<<(x5831*x5832)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

