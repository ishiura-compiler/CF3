#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -17968;
int64_t x405 = INT64_MIN;
int64_t x418 = 140816740036441037LL;
uint32_t x473 = UINT32_MAX;
int8_t x475 = 1;
int64_t x476 = -1LL;
int64_t x523 = INT64_MIN;
int64_t x524 = INT64_MIN;
uint64_t t9 = 179030005LLU;
volatile int16_t x559 = INT16_MAX;
int16_t x560 = INT16_MAX;
int8_t x580 = -3;
int8_t x630 = INT8_MIN;
int16_t x632 = -7;
int16_t x895 = INT16_MIN;
volatile int32_t x1000 = -1;
volatile uint64_t t17 = 6537LLU;
static int8_t x1138 = -1;
uint64_t x1173 = 8468795LLU;
volatile int64_t x1277 = 47099708295LL;
static uint16_t x1279 = 85U;
static int64_t t21 = 13586LL;
int32_t x1460 = -1;
int32_t x1486 = -1;
volatile int32_t x1492 = INT32_MAX;
int32_t t24 = 1161;
static uint64_t x1569 = 16LLU;
uint8_t x1570 = 1U;
int32_t x1572 = -1;
uint64_t t25 = 6903442LLU;
uint8_t x1603 = 0U;
volatile int32_t t27 = -3988762;
int32_t t28 = -5408;
int16_t x1775 = -1;
static volatile int32_t x1883 = -1;
uint64_t t30 = 12945978750869LLU;
int32_t x1935 = 28;
uint64_t t31 = 1714611680313436418LLU;
volatile int64_t x1971 = INT64_MIN;
static uint32_t x2141 = 125492U;
volatile uint32_t x2169 = UINT32_MAX;
static volatile int8_t x2171 = 0;
int16_t x2172 = -5;
static uint16_t x2183 = 26U;
uint32_t x2205 = 180U;
volatile uint64_t t38 = 803397482126LLU;
int64_t x2358 = -1LL;
int64_t t39 = 0LL;
int32_t x2399 = -1;
static int8_t x2521 = 1;
int32_t x2522 = -1;
static volatile int16_t x2523 = 3;
static int32_t x2524 = -13;
int8_t x2598 = 1;
int8_t x2677 = INT8_MIN;
static uint64_t t46 = 1LLU;
int8_t x2728 = -1;
uint8_t x2827 = 11U;
volatile int64_t x2898 = -1LL;
uint64_t x2899 = UINT64_MAX;
int16_t x2950 = -8326;
int16_t x2960 = INT16_MIN;
static int64_t x2974 = -779739LL;
volatile uint64_t t53 = 619091069377584LLU;
int32_t x3038 = -1;
int16_t x3125 = 3;
volatile int8_t x3527 = INT8_MIN;
int64_t x3551 = INT64_MIN;
int32_t x3580 = -1;
volatile uint64_t t60 = 8296977404928051LLU;
static uint32_t x3593 = 42633148U;
static uint32_t x3636 = UINT32_MAX;
static uint32_t t62 = 11U;
volatile int32_t x3706 = 7300508;
uint16_t x3881 = 2U;
static int8_t x3884 = INT8_MIN;
static uint32_t x3970 = 116U;
uint8_t x4081 = UINT8_MAX;
int32_t x4109 = INT32_MAX;
uint64_t x4112 = UINT64_MAX;
static uint32_t x4132 = UINT32_MAX;
uint64_t t71 = 1091778345601045LLU;
int64_t x4172 = -13LL;
volatile uint32_t x4190 = 47287719U;
volatile uint64_t t75 = 48LLU;
static int32_t x4496 = INT32_MIN;
volatile uint32_t x4621 = 168193U;
int8_t x4622 = 29;
int8_t x4623 = -1;
int32_t x4758 = -1;
static uint8_t x4879 = 5U;
static volatile int64_t t83 = -1LL;
uint32_t x4958 = 1797125U;
volatile int16_t x4986 = INT16_MIN;
int16_t x5023 = -1;
volatile int32_t t87 = 24;
uint32_t x5044 = UINT32_MAX;
int64_t x5058 = INT64_MAX;
int16_t x5060 = -1;
volatile int16_t x5157 = INT16_MAX;
static int8_t x5160 = -14;
int64_t x5250 = -1LL;
int8_t x5553 = INT8_MIN;
uint32_t x5556 = UINT32_MAX;
static uint32_t t96 = 29U;


void f0(void) {
	uint8_t x33 = 71U;
	uint8_t x34 = 24U;
	static uint64_t x35 = UINT64_MAX;
	int8_t x36 = -1;
	volatile int32_t t0 = 31334;

	t0 = ((x33%x34)>>(x35-x36));

	if (t0 != 23) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x165 = 90U;
	int32_t x166 = INT32_MIN;
	volatile int16_t x167 = -1;
	static int8_t x168 = -1;

	t1 = ((x165%x166)>>(x167-x168));

	if (t1 != 90) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x237 = INT8_MIN;
	int16_t x238 = -1;
	int16_t x239 = INT16_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t2 = -1409850;

	t2 = ((x237%x238)>>(x239-x240));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x253 = INT64_MAX;
	int8_t x254 = -1;
	static volatile int64_t x255 = 1LL;
	uint32_t x256 = 0U;
	volatile int64_t t3 = 88LL;

	t3 = ((x253%x254)>>(x255-x256));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x277 = INT16_MIN;
	static int16_t x278 = INT16_MIN;
	volatile uint32_t x279 = UINT32_MAX;
	uint32_t x280 = UINT32_MAX;
	int32_t t4 = -508615;

	t4 = ((x277%x278)>>(x279-x280));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x406 = -2;
	volatile int8_t x407 = 3;
	volatile int32_t x408 = 1;
	volatile int64_t t5 = 290055712572785392LL;

	t5 = ((x405%x406)>>(x407-x408));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x417 = INT16_MAX;
	uint8_t x419 = 0U;
	int8_t x420 = -1;
	int64_t t6 = 33188223160642204LL;

	t6 = ((x417%x418)>>(x419-x420));

	if (t6 != 16383LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x474 = UINT32_MAX;
	uint32_t t7 = 1U;

	t7 = ((x473%x474)>>(x475-x476));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x521 = 158692;
	int8_t x522 = INT8_MIN;
	volatile int32_t t8 = 11;

	t8 = ((x521%x522)>>(x523-x524));

	if (t8 != 100) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x529 = 145267LLU;
	int32_t x530 = -281303993;
	volatile uint8_t x531 = 0U;
	int32_t x532 = -1;

	t9 = ((x529%x530)>>(x531-x532));

	if (t9 != 72633LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x557 = INT32_MAX;
	int8_t x558 = 11;
	volatile int32_t t10 = -284751323;

	t10 = ((x557%x558)>>(x559-x560));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x577 = 283U;
	static int32_t x578 = INT32_MIN;
	int8_t x579 = 5;
	volatile uint32_t t11 = 48161426U;

	t11 = ((x577%x578)>>(x579-x580));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x625 = UINT8_MAX;
	static volatile int64_t x626 = -122538267LL;
	static uint32_t x627 = UINT32_MAX;
	int8_t x628 = -1;
	static volatile int64_t t12 = 1390426160LL;

	t12 = ((x625%x626)>>(x627-x628));

	if (t12 != 255LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x629 = INT16_MIN;
	uint64_t x631 = UINT64_MAX;
	volatile int32_t t13 = 630813534;

	t13 = ((x629%x630)>>(x631-x632));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x685 = INT8_MAX;
	uint64_t x686 = 46LLU;
	int32_t x687 = INT32_MIN;
	int32_t x688 = INT32_MIN;
	uint64_t t14 = 25677561203051LLU;

	t14 = ((x685%x686)>>(x687-x688));

	if (t14 != 35LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x765 = UINT32_MAX;
	int16_t x766 = INT16_MIN;
	int8_t x767 = -1;
	uint64_t x768 = UINT64_MAX;
	uint32_t t15 = 62849U;

	t15 = ((x765%x766)>>(x767-x768));

	if (t15 != 32767U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x893 = 18U;
	int64_t x894 = INT64_MIN;
	int16_t x896 = INT16_MIN;
	static int64_t t16 = -3858LL;

	t16 = ((x893%x894)>>(x895-x896));

	if (t16 != 18LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x997 = UINT64_MAX;
	int64_t x998 = INT64_MIN;
	uint32_t x999 = UINT32_MAX;

	t17 = ((x997%x998)>>(x999-x1000));

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x1137 = INT64_MAX;
	uint64_t x1139 = 5LLU;
	static uint64_t x1140 = UINT64_MAX;
	int64_t t18 = 309831276LL;

	t18 = ((x1137%x1138)>>(x1139-x1140));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1174 = INT64_MIN;
	int8_t x1175 = 19;
	static volatile int32_t x1176 = 2;
	volatile uint64_t t19 = 24077124656LLU;

	t19 = ((x1173%x1174)>>(x1175-x1176));

	if (t19 != 64LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1273 = INT32_MAX;
	volatile uint64_t x1274 = UINT64_MAX;
	volatile int16_t x1275 = -1;
	int8_t x1276 = -1;
	static volatile uint64_t t20 = 925LLU;

	t20 = ((x1273%x1274)>>(x1275-x1276));

	if (t20 != 2147483647LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1278 = 6;
	uint8_t x1280 = 24U;

	t21 = ((x1277%x1278)>>(x1279-x1280));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1457 = -1;
	uint64_t x1458 = 8302784LLU;
	int8_t x1459 = 3;
	uint64_t t22 = 2018LLU;

	t22 = ((x1457%x1458)>>(x1459-x1460));

	if (t22 != 134519LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1485 = INT64_MAX;
	volatile int16_t x1487 = 59;
	uint64_t x1488 = UINT64_MAX;
	int64_t t23 = -16LL;

	t23 = ((x1485%x1486)>>(x1487-x1488));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1489 = 662799;
	int16_t x1490 = INT16_MIN;
	int32_t x1491 = INT32_MAX;

	t24 = ((x1489%x1490)>>(x1491-x1492));

	if (t24 != 7439) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1571 = 50U;

	t25 = ((x1569%x1570)>>(x1571-x1572));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x1601 = UINT8_MAX;
	static volatile int32_t x1602 = INT32_MIN;
	int64_t x1604 = -1LL;
	static int32_t t26 = -595062;

	t26 = ((x1601%x1602)>>(x1603-x1604));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1713 = 0;
	volatile int32_t x1714 = -116382;
	int16_t x1715 = -1;
	uint64_t x1716 = UINT64_MAX;

	t27 = ((x1713%x1714)>>(x1715-x1716));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1733 = INT16_MAX;
	int8_t x1734 = -1;
	int8_t x1735 = 1;
	int8_t x1736 = 1;

	t28 = ((x1733%x1734)>>(x1735-x1736));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1773 = 2;
	int16_t x1774 = INT16_MAX;
	uint64_t x1776 = UINT64_MAX;
	int32_t t29 = 3798912;

	t29 = ((x1773%x1774)>>(x1775-x1776));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1881 = 31817U;
	static volatile uint64_t x1882 = 6826029684LLU;
	uint32_t x1884 = UINT32_MAX;

	t30 = ((x1881%x1882)>>(x1883-x1884));

	if (t30 != 31817LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x1933 = -1LL;
	uint64_t x1934 = 175289343LLU;
	static volatile int16_t x1936 = -1;

	t31 = ((x1933%x1934)>>(x1935-x1936));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1969 = UINT8_MAX;
	int8_t x1970 = INT8_MIN;
	volatile int64_t x1972 = INT64_MIN;
	static volatile int32_t t32 = 15;

	t32 = ((x1969%x1970)>>(x1971-x1972));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x2117 = UINT32_MAX;
	int32_t x2118 = INT32_MAX;
	uint8_t x2119 = 1U;
	int8_t x2120 = -11;
	static uint32_t t33 = 1856602U;

	t33 = ((x2117%x2118)>>(x2119-x2120));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x2142 = 36017074;
	volatile uint32_t x2143 = UINT32_MAX;
	uint32_t x2144 = UINT32_MAX;
	uint32_t t34 = 96U;

	t34 = ((x2141%x2142)>>(x2143-x2144));

	if (t34 != 125492U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2170 = 3LLU;
	uint64_t t35 = 752212LLU;

	t35 = ((x2169%x2170)>>(x2171-x2172));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2181 = 467550143960LLU;
	int64_t x2182 = -17103457656LL;
	uint8_t x2184 = 16U;
	uint64_t t36 = 127541655625429503LLU;

	t36 = ((x2181%x2182)>>(x2183-x2184));

	if (t36 != 456591937LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2206 = UINT8_MAX;
	int16_t x2207 = INT16_MAX;
	int16_t x2208 = INT16_MAX;
	volatile uint32_t t37 = 14337406U;

	t37 = ((x2205%x2206)>>(x2207-x2208));

	if (t37 != 180U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2217 = -1;
	static volatile uint64_t x2218 = 257494936226816LLU;
	uint64_t x2219 = UINT64_MAX;
	uint64_t x2220 = UINT64_MAX;

	t38 = ((x2217%x2218)>>(x2219-x2220));

	if (t38 != 64337356680191LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2357 = 7;
	static uint8_t x2359 = 37U;
	int16_t x2360 = -1;

	t39 = ((x2357%x2358)>>(x2359-x2360));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2397 = INT64_MIN;
	volatile uint8_t x2398 = 1U;
	int8_t x2400 = -1;
	int64_t t40 = 32591LL;

	t40 = ((x2397%x2398)>>(x2399-x2400));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t t41 = -38110496;

	t41 = ((x2521%x2522)>>(x2523-x2524));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2569 = 15433294U;
	static int8_t x2570 = INT8_MIN;
	int32_t x2571 = -1;
	volatile int16_t x2572 = -1;
	volatile uint32_t t42 = 0U;

	t42 = ((x2569%x2570)>>(x2571-x2572));

	if (t42 != 15433294U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2573 = INT64_MIN;
	int32_t x2574 = 8;
	uint8_t x2575 = 2U;
	int32_t x2576 = -1;
	volatile int64_t t43 = 29519549LL;

	t43 = ((x2573%x2574)>>(x2575-x2576));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2597 = -1;
	volatile uint8_t x2599 = 9U;
	volatile uint32_t x2600 = UINT32_MAX;
	volatile int32_t t44 = 0;

	t44 = ((x2597%x2598)>>(x2599-x2600));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2678 = 36U;
	volatile int64_t x2679 = -1LL;
	static volatile uint64_t x2680 = UINT64_MAX;
	volatile uint32_t t45 = 872U;

	t45 = ((x2677%x2678)>>(x2679-x2680));

	if (t45 != 20U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2713 = -236452383696750296LL;
	uint64_t x2714 = 3277LLU;
	static uint64_t x2715 = UINT64_MAX;
	static uint64_t x2716 = UINT64_MAX;

	t46 = ((x2713%x2714)>>(x2715-x2716));

	if (t46 != 2885LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2725 = 2372243371969LL;
	uint8_t x2726 = 32U;
	uint16_t x2727 = 0U;
	int64_t t47 = 6240281666LL;

	t47 = ((x2725%x2726)>>(x2727-x2728));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2825 = INT64_MAX;
	uint64_t x2826 = 91875LLU;
	uint64_t x2828 = UINT64_MAX;
	static uint64_t t48 = 1092469392369LLU;

	t48 = ((x2825%x2826)>>(x2827-x2828));

	if (t48 != 8LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2897 = -1;
	static int8_t x2900 = -1;
	static int64_t t49 = 227191LL;

	t49 = ((x2897%x2898)>>(x2899-x2900));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x2949 = 1LLU;
	int8_t x2951 = -1;
	int16_t x2952 = -1;
	volatile uint64_t t50 = 5125519LLU;

	t50 = ((x2949%x2950)>>(x2951-x2952));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2957 = 752521U;
	static volatile uint32_t x2958 = 34133U;
	int16_t x2959 = INT16_MIN;
	volatile uint32_t t51 = 20534U;

	t51 = ((x2957%x2958)>>(x2959-x2960));

	if (t51 != 1595U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2973 = 0;
	uint16_t x2975 = 6U;
	int32_t x2976 = -1;
	int64_t t52 = -1LL;

	t52 = ((x2973%x2974)>>(x2975-x2976));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3025 = INT32_MAX;
	uint64_t x3026 = 2019992LLU;
	uint16_t x3027 = 21U;
	static int16_t x3028 = -1;

	t53 = ((x3025%x3026)>>(x3027-x3028));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x3037 = -1;
	uint16_t x3039 = 15U;
	int32_t x3040 = -1;
	int32_t t54 = 3737;

	t54 = ((x3037%x3038)>>(x3039-x3040));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3126 = INT64_MIN;
	uint8_t x3127 = 5U;
	uint16_t x3128 = 1U;
	static volatile int64_t t55 = 192734872248LL;

	t55 = ((x3125%x3126)>>(x3127-x3128));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x3253 = 63U;
	static int64_t x3254 = -17079046515412LL;
	int16_t x3255 = -1;
	uint32_t x3256 = UINT32_MAX;
	static volatile int64_t t56 = 311816LL;

	t56 = ((x3253%x3254)>>(x3255-x3256));

	if (t56 != 63LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x3525 = 1022302460065301970LLU;
	int64_t x3526 = -44572413206LL;
	int8_t x3528 = INT8_MIN;
	volatile uint64_t t57 = 3LLU;

	t57 = ((x3525%x3526)>>(x3527-x3528));

	if (t57 != 1022302460065301970LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3533 = 7U;
	int16_t x3534 = INT16_MIN;
	static int8_t x3535 = 28;
	int8_t x3536 = -1;
	volatile uint32_t t58 = 1014U;

	t58 = ((x3533%x3534)>>(x3535-x3536));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3549 = 1082195031171LL;
	int16_t x3550 = INT16_MIN;
	int64_t x3552 = INT64_MIN;
	volatile int64_t t59 = -8226596955893252LL;

	t59 = ((x3549%x3550)>>(x3551-x3552));

	if (t59 != 13443LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x3577 = 2257950312456448829LLU;
	int8_t x3578 = INT8_MIN;
	uint64_t x3579 = UINT64_MAX;

	t60 = ((x3577%x3578)>>(x3579-x3580));

	if (t60 != 2257950312456448829LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3594 = -7;
	static uint64_t x3595 = UINT64_MAX;
	int8_t x3596 = -1;
	uint32_t t61 = 1475U;

	t61 = ((x3593%x3594)>>(x3595-x3596));

	if (t61 != 42633148U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3633 = 49U;
	static uint32_t x3634 = UINT32_MAX;
	int32_t x3635 = -1;

	t62 = ((x3633%x3634)>>(x3635-x3636));

	if (t62 != 49U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3705 = 559415929721561386LLU;
	static int8_t x3707 = -1;
	int32_t x3708 = -1;
	static volatile uint64_t t63 = 239449700LLU;

	t63 = ((x3705%x3706)>>(x3707-x3708));

	if (t63 != 2996958LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3825 = 1;
	int16_t x3826 = -1;
	uint8_t x3827 = 2U;
	int8_t x3828 = 1;
	int32_t t64 = -9011817;

	t64 = ((x3825%x3826)>>(x3827-x3828));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x3882 = 214905U;
	int8_t x3883 = INT8_MIN;
	volatile uint32_t t65 = 242459697U;

	t65 = ((x3881%x3882)>>(x3883-x3884));

	if (t65 != 2U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3969 = 647U;
	int8_t x3971 = INT8_MIN;
	volatile int8_t x3972 = INT8_MIN;
	volatile uint32_t t66 = 83216424U;

	t66 = ((x3969%x3970)>>(x3971-x3972));

	if (t66 != 67U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4082 = -2503;
	int16_t x4083 = -1;
	uint64_t x4084 = UINT64_MAX;
	int32_t t67 = -72;

	t67 = ((x4081%x4082)>>(x4083-x4084));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4093 = 2U;
	int32_t x4094 = INT32_MIN;
	static uint8_t x4095 = 9U;
	static uint64_t x4096 = UINT64_MAX;
	uint32_t t68 = 417060U;

	t68 = ((x4093%x4094)>>(x4095-x4096));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x4110 = 930266U;
	uint64_t x4111 = UINT64_MAX;
	static volatile uint32_t t69 = 2U;

	t69 = ((x4109%x4110)>>(x4111-x4112));

	if (t69 != 429719U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x4129 = 1021402U;
	uint64_t x4130 = 2224LLU;
	volatile int8_t x4131 = 0;
	uint64_t t70 = 1516351239LLU;

	t70 = ((x4129%x4130)>>(x4131-x4132));

	if (t70 != 293LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x4157 = UINT32_MAX;
	uint64_t x4158 = 63199542LLU;
	uint32_t x4159 = UINT32_MAX;
	static int16_t x4160 = -1;

	t71 = ((x4157%x4158)>>(x4159-x4160));

	if (t71 != 60597981LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x4169 = UINT32_MAX;
	volatile uint8_t x4170 = 9U;
	static int16_t x4171 = -5;
	volatile uint32_t t72 = 404U;

	t72 = ((x4169%x4170)>>(x4171-x4172));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4189 = 0U;
	int64_t x4191 = INT64_MIN;
	int64_t x4192 = INT64_MIN;
	static volatile uint32_t t73 = 152U;

	t73 = ((x4189%x4190)>>(x4191-x4192));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4261 = UINT32_MAX;
	volatile int8_t x4262 = 2;
	int16_t x4263 = -1;
	static int32_t x4264 = -1;
	volatile uint32_t t74 = 18U;

	t74 = ((x4261%x4262)>>(x4263-x4264));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x4285 = 88465987LLU;
	int8_t x4286 = -48;
	uint64_t x4287 = UINT64_MAX;
	static int16_t x4288 = -24;

	t75 = ((x4285%x4286)>>(x4287-x4288));

	if (t75 != 10LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4469 = INT8_MIN;
	static int8_t x4470 = INT8_MIN;
	int64_t x4471 = -1LL;
	static int8_t x4472 = -22;
	int32_t t76 = 66664376;

	t76 = ((x4469%x4470)>>(x4471-x4472));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x4493 = INT64_MIN;
	int16_t x4494 = -1;
	volatile int32_t x4495 = INT32_MIN;
	static int64_t t77 = 7943434629747952LL;

	t77 = ((x4493%x4494)>>(x4495-x4496));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x4624 = -20;
	volatile uint32_t t78 = 4454817U;

	t78 = ((x4621%x4622)>>(x4623-x4624));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x4645 = -1;
	uint32_t x4646 = UINT32_MAX;
	uint32_t x4647 = UINT32_MAX;
	volatile uint32_t x4648 = UINT32_MAX;
	uint32_t t79 = 111U;

	t79 = ((x4645%x4646)>>(x4647-x4648));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4673 = 3U;
	int64_t x4674 = INT64_MIN;
	static uint64_t x4675 = UINT64_MAX;
	int64_t x4676 = -1LL;
	static int64_t t80 = 0LL;

	t80 = ((x4673%x4674)>>(x4675-x4676));

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4757 = UINT32_MAX;
	int16_t x4759 = -1;
	int32_t x4760 = -1;
	static volatile uint32_t t81 = 104443U;

	t81 = ((x4757%x4758)>>(x4759-x4760));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4789 = -331LL;
	int16_t x4790 = 1;
	static int8_t x4791 = INT8_MIN;
	static int8_t x4792 = INT8_MIN;
	volatile int64_t t82 = 3685134455328515LL;

	t82 = ((x4789%x4790)>>(x4791-x4792));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x4877 = INT8_MAX;
	int64_t x4878 = -1LL;
	volatile uint32_t x4880 = UINT32_MAX;

	t83 = ((x4877%x4878)>>(x4879-x4880));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x4957 = 2LL;
	uint32_t x4959 = UINT32_MAX;
	int8_t x4960 = -11;
	volatile int64_t t84 = -3782LL;

	t84 = ((x4957%x4958)>>(x4959-x4960));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4961 = INT16_MIN;
	int16_t x4962 = INT16_MIN;
	uint8_t x4963 = 3U;
	int16_t x4964 = 0;
	int32_t t85 = 97483;

	t85 = ((x4961%x4962)>>(x4963-x4964));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x4985 = INT32_MIN;
	volatile int32_t x4987 = -1;
	uint32_t x4988 = UINT32_MAX;
	volatile int32_t t86 = -1;

	t86 = ((x4985%x4986)>>(x4987-x4988));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5021 = 20U;
	volatile uint16_t x5022 = UINT16_MAX;
	int32_t x5024 = -1;

	t87 = ((x5021%x5022)>>(x5023-x5024));

	if (t87 != 20) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x5041 = 7683026LL;
	int8_t x5042 = 34;
	uint8_t x5043 = 0U;
	volatile int64_t t88 = 1097752069135849LL;

	t88 = ((x5041%x5042)>>(x5043-x5044));

	if (t88 != 6LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5057 = INT8_MAX;
	static uint16_t x5059 = 0U;
	int64_t t89 = -36LL;

	t89 = ((x5057%x5058)>>(x5059-x5060));

	if (t89 != 63LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5133 = INT32_MAX;
	static volatile uint32_t x5134 = 498006U;
	int8_t x5135 = 30;
	static volatile uint32_t x5136 = UINT32_MAX;
	static uint32_t t90 = 189589437U;

	t90 = ((x5133%x5134)>>(x5135-x5136));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5158 = 45U;
	static uint8_t x5159 = 0U;
	volatile int32_t t91 = 1;

	t91 = ((x5157%x5158)>>(x5159-x5160));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5249 = -1;
	volatile uint16_t x5251 = 29U;
	int32_t x5252 = 0;
	volatile int64_t t92 = -56186047216856LL;

	t92 = ((x5249%x5250)>>(x5251-x5252));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5285 = 6;
	static int16_t x5286 = INT16_MIN;
	uint8_t x5287 = 0U;
	int32_t x5288 = -1;
	int32_t t93 = -219;

	t93 = ((x5285%x5286)>>(x5287-x5288));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5554 = UINT64_MAX;
	volatile uint16_t x5555 = 5U;
	uint64_t t94 = 4343290845703LLU;

	t94 = ((x5553%x5554)>>(x5555-x5556));

	if (t94 != 288230376151711742LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x5569 = 1721381628LLU;
	static int8_t x5570 = INT8_MIN;
	uint64_t x5571 = UINT64_MAX;
	int16_t x5572 = -1;
	volatile uint64_t t95 = 1097LLU;

	t95 = ((x5569%x5570)>>(x5571-x5572));

	if (t95 != 1721381628LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5717 = INT32_MIN;
	uint32_t x5718 = 7681U;
	static volatile int32_t x5719 = 4;
	int32_t x5720 = -1;

	t96 = ((x5717%x5718)>>(x5719-x5720));

	if (t96 != 207U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5741 = INT16_MIN;
	int16_t x5742 = -1;
	volatile int16_t x5743 = -1;
	volatile uint32_t x5744 = UINT32_MAX;
	volatile int32_t t97 = -141463487;

	t97 = ((x5741%x5742)>>(x5743-x5744));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5837 = 7;
	uint32_t x5838 = 336472U;
	static uint16_t x5839 = 0U;
	static int8_t x5840 = -6;
	uint32_t t98 = 2U;

	t98 = ((x5837%x5838)>>(x5839-x5840));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5877 = 136779943736968LLU;
	int8_t x5878 = -1;
	volatile int8_t x5879 = -1;
	int8_t x5880 = -1;
	static uint64_t t99 = 1LLU;

	t99 = ((x5877%x5878)>>(x5879-x5880));

	if (t99 != 136779943736968LLU) { NG(); } else { ; }
	
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

