#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x56 = 3U;
static int32_t x152 = 0;
volatile int64_t t3 = 60777649711439662LL;
uint16_t x168 = 4U;
int16_t x267 = 6477;
uint64_t x310 = UINT64_MAX;
int32_t x343 = -91435;
int8_t x365 = INT8_MIN;
int64_t x405 = -1LL;
uint32_t x407 = 95U;
int8_t x474 = INT8_MIN;
int8_t x482 = 2;
volatile int16_t x568 = 4;
volatile uint16_t x586 = UINT16_MAX;
int64_t x647 = INT64_MIN;
uint32_t x681 = 101850U;
uint8_t x684 = 1U;
int32_t x700 = 7;
static uint16_t x827 = 11U;
volatile int16_t x910 = INT16_MAX;
volatile uint64_t t27 = 57922LLU;
int32_t x1139 = INT32_MIN;
int64_t x1161 = INT64_MIN;
int16_t x1164 = 0;
static int8_t x1405 = INT8_MIN;
static int64_t t32 = 6691714788LL;
static uint8_t x1564 = 1U;
volatile uint64_t x1685 = 4166125LLU;
uint64_t t36 = 313363LLU;
volatile uint64_t t37 = 1867419LLU;
int8_t x1810 = 3;
uint32_t x1896 = 44U;
static uint64_t x1952 = 1LLU;
volatile int32_t t42 = 11;
uint16_t x2125 = 1U;
uint64_t t44 = 25704740994725849LLU;
uint8_t x2146 = 6U;
uint16_t x2148 = 1U;
int32_t x2278 = INT32_MIN;
volatile int64_t x2279 = INT64_MIN;
static int32_t x2282 = 916465390;
uint8_t x2283 = UINT8_MAX;
volatile int8_t x2300 = 2;
int32_t x2353 = -648521297;
volatile int16_t x2418 = -3;
int32_t t53 = 19910;
int16_t x2452 = 5;
volatile int32_t t54 = -2289128;
int16_t x2474 = INT16_MAX;
int32_t x2735 = 80967;
int8_t x2766 = -1;
int64_t x2767 = -1LL;
uint8_t x2768 = 2U;
int64_t t62 = -5507639LL;
uint64_t x2794 = 420668706781268LLU;
static volatile int64_t x2795 = INT64_MAX;
int16_t x2816 = 2;
int8_t x2826 = -3;
volatile uint16_t x2850 = 144U;
volatile uint64_t t68 = 12907182343LLU;
int16_t x2935 = -1;
int32_t x2936 = 1;
static volatile uint16_t x2953 = 210U;
static volatile int32_t x2954 = 453;
volatile int32_t t70 = -34920;
uint64_t x2957 = 116307603LLU;
int8_t x3048 = 3;
volatile uint64_t t73 = 833471LLU;
static int32_t x3114 = INT32_MAX;
int32_t x3123 = 88454591;
static volatile int32_t t77 = -63;
static int32_t x3199 = 15502114;
int64_t x3207 = 15784680806LL;
uint64_t x3210 = 5039410988LLU;
int16_t x3213 = INT16_MAX;
volatile uint16_t x3318 = 197U;
uint32_t t85 = 9U;
int64_t x3395 = INT64_MAX;
static volatile int64_t t86 = INT64_MIN;
volatile uint64_t t87 = 21602362258919LLU;
int32_t x3541 = INT32_MAX;
uint64_t t90 = 580388088207LLU;
int8_t x3723 = INT8_MIN;
int32_t x3743 = INT32_MIN;
volatile int16_t x3744 = 18;
int16_t x3754 = -1;
uint64_t x3755 = UINT64_MAX;
volatile uint64_t t95 = 4657201122180524LLU;
uint64_t t96 = 4398176050026877401LLU;
static int8_t x3809 = -1;
uint16_t x3812 = 4U;


void f0(void) {
	int64_t x5 = INT64_MAX;
	int64_t x6 = INT64_MAX;
	static uint64_t x7 = UINT64_MAX;
	uint8_t x8 = 14U;
	uint64_t t0 = 61834323070596LLU;

	t0 = (x5-((x6/x7)<<x8));

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x53 = 95;
	uint64_t x54 = 80LLU;
	uint8_t x55 = 94U;
	static volatile uint64_t t1 = 1038426727456280LLU;

	t1 = (x53-((x54/x55)<<x56));

	if (t1 != 95LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile int32_t x126 = -1;
	volatile int64_t x127 = 172908925122885054LL;
	uint8_t x128 = 0U;
	int64_t t2 = 1433023320716407732LL;

	t2 = (x125-((x126/x127)<<x128));

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x149 = -1LL;
	uint32_t x150 = 2090276265U;
	int16_t x151 = INT16_MIN;

	t3 = (x149-((x150/x151)<<x152));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x165 = UINT16_MAX;
	static int16_t x166 = INT16_MIN;
	uint16_t x167 = UINT16_MAX;
	static int32_t t4 = 10266;

	t4 = (x165-((x166/x167)<<x168));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x169 = UINT32_MAX;
	static int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	volatile uint8_t x172 = 14U;
	int64_t t5 = 125497090LL;

	t5 = (x169-((x170/x171)<<x172));

	if (t5 != -4611686014132420609LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x181 = -1LL;
	uint32_t x182 = UINT32_MAX;
	volatile int16_t x183 = INT16_MIN;
	uint16_t x184 = 13U;
	int64_t t6 = -3719547938934563972LL;

	t6 = (x181-((x182/x183)<<x184));

	if (t6 != -8193LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x265 = -1;
	int16_t x266 = 7335;
	volatile uint8_t x268 = 3U;
	static int32_t t7 = -1719;

	t7 = (x265-((x266/x267)<<x268));

	if (t7 != -9) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x309 = INT8_MAX;
	int32_t x311 = -921;
	static uint64_t x312 = 0LLU;
	uint64_t t8 = 1952406479817LLU;

	t8 = (x309-((x310/x311)<<x312));

	if (t8 != 126LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x341 = INT16_MAX;
	uint32_t x342 = 15129U;
	static volatile int8_t x344 = 1;
	uint32_t t9 = 8319403U;

	t9 = (x341-((x342/x343)<<x344));

	if (t9 != 32767U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x366 = -6;
	uint8_t x367 = 21U;
	int8_t x368 = 21;
	volatile int32_t t10 = 22659;

	t10 = (x365-((x366/x367)<<x368));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x385 = UINT16_MAX;
	uint32_t x386 = 493495U;
	int32_t x387 = 233;
	uint64_t x388 = 0LLU;
	volatile uint32_t t11 = 42U;

	t11 = (x385-((x386/x387)<<x388));

	if (t11 != 63417U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x406 = INT64_MAX;
	static uint16_t x408 = 1U;
	volatile int64_t t12 = 0LL;

	t12 = (x405-((x406/x407)<<x408));

	if (t12 != -194176253407468965LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x473 = INT16_MIN;
	volatile int16_t x475 = INT16_MIN;
	uint16_t x476 = 5U;
	volatile int32_t t13 = -485940;

	t13 = (x473-((x474/x475)<<x476));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x481 = 2U;
	uint64_t x483 = 3154005454199LLU;
	int64_t x484 = 1LL;
	volatile uint64_t t14 = 121679744843314LLU;

	t14 = (x481-((x482/x483)<<x484));

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x489 = 102066582881LLU;
	uint8_t x490 = UINT8_MAX;
	int32_t x491 = INT32_MIN;
	int8_t x492 = 1;
	volatile uint64_t t15 = 0LLU;

	t15 = (x489-((x490/x491)<<x492));

	if (t15 != 102066582881LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x565 = 1900613U;
	static uint16_t x566 = 1077U;
	int32_t x567 = INT32_MAX;
	volatile uint32_t t16 = 26842788U;

	t16 = (x565-((x566/x567)<<x568));

	if (t16 != 1900613U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x585 = 13580239U;
	int32_t x587 = 18297;
	uint8_t x588 = 15U;
	volatile uint32_t t17 = 8U;

	t17 = (x585-((x586/x587)<<x588));

	if (t17 != 13481935U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x645 = 135U;
	static int64_t x646 = 14LL;
	uint8_t x648 = 3U;
	volatile int64_t t18 = -117741LL;

	t18 = (x645-((x646/x647)<<x648));

	if (t18 != 135LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x653 = 2442U;
	volatile int8_t x654 = INT8_MIN;
	int64_t x655 = -138374725628LL;
	uint8_t x656 = 1U;
	volatile int64_t t19 = -2843770269787LL;

	t19 = (x653-((x654/x655)<<x656));

	if (t19 != 2442LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x682 = INT16_MIN;
	int16_t x683 = -1;
	uint32_t t20 = 712467U;

	t20 = (x681-((x682/x683)<<x684));

	if (t20 != 36314U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x685 = -1LL;
	uint8_t x686 = 8U;
	int16_t x687 = 1;
	uint8_t x688 = 0U;
	int64_t t21 = 438250156234507488LL;

	t21 = (x685-((x686/x687)<<x688));

	if (t21 != -9LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x689 = INT8_MAX;
	static volatile int32_t x690 = -1;
	static int8_t x691 = -1;
	int32_t x692 = 12;
	static volatile int32_t t22 = -2;

	t22 = (x689-((x690/x691)<<x692));

	if (t22 != -3969) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x697 = 8582690U;
	int32_t x698 = INT32_MIN;
	int64_t x699 = INT64_MIN;
	int64_t t23 = -3986LL;

	t23 = (x697-((x698/x699)<<x700));

	if (t23 != 8582690LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x701 = INT64_MAX;
	int8_t x702 = INT8_MIN;
	uint64_t x703 = 28754236023814750LLU;
	uint8_t x704 = 17U;
	volatile uint64_t t24 = 13620LLU;

	t24 = (x701-((x702/x703)<<x704));

	if (t24 != 9223372036770758655LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x825 = INT16_MIN;
	uint64_t x826 = UINT64_MAX;
	static uint32_t x828 = 44U;
	volatile uint64_t t25 = 81LLU;

	t25 = (x825-((x826/x827)<<x828));

	if (t25 != 10061868400289742848LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x909 = INT64_MIN;
	volatile uint64_t x911 = 1298LLU;
	int8_t x912 = 13;
	static uint64_t t26 = 3939559653435LLU;

	t26 = (x909-((x910/x911)<<x912));

	if (t26 != 9223372036854571008LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1101 = 10U;
	uint64_t x1102 = UINT64_MAX;
	uint8_t x1103 = 25U;
	volatile uint8_t x1104 = 5U;

	t27 = (x1101-((x1102/x1103)<<x1104));

	if (t27 != 13281655733070877194LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1137 = 34U;
	int64_t x1138 = -7293770LL;
	static uint8_t x1140 = 62U;
	volatile int64_t t28 = -211063943261724131LL;

	t28 = (x1137-((x1138/x1139)<<x1140));

	if (t28 != 34LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1162 = INT32_MIN;
	volatile uint32_t x1163 = UINT32_MAX;
	int64_t t29 = INT64_MIN;

	t29 = (x1161-((x1162/x1163)<<x1164));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1293 = -1;
	uint8_t x1294 = UINT8_MAX;
	int16_t x1295 = INT16_MAX;
	uint8_t x1296 = 22U;
	volatile int32_t t30 = 8475379;

	t30 = (x1293-((x1294/x1295)<<x1296));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1357 = INT32_MIN;
	uint32_t x1358 = 13806U;
	volatile int16_t x1359 = INT16_MIN;
	uint16_t x1360 = 0U;
	volatile uint32_t t31 = 38679786U;

	t31 = (x1357-((x1358/x1359)<<x1360));

	if (t31 != 2147483648U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1406 = 42426581U;
	int64_t x1407 = INT64_MIN;
	volatile uint8_t x1408 = 0U;

	t32 = (x1405-((x1406/x1407)<<x1408));

	if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1453 = 29U;
	volatile uint64_t x1454 = 22651026724LLU;
	int32_t x1455 = INT32_MIN;
	uint8_t x1456 = 8U;
	volatile uint64_t t33 = 298952LLU;

	t33 = (x1453-((x1454/x1455)<<x1456));

	if (t33 != 29LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1561 = 24261425U;
	volatile int16_t x1562 = INT16_MAX;
	int64_t x1563 = -3543776352618180804LL;
	volatile int64_t t34 = 1901LL;

	t34 = (x1561-((x1562/x1563)<<x1564));

	if (t34 != 24261425LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1605 = UINT8_MAX;
	uint8_t x1606 = 0U;
	int32_t x1607 = -528725;
	static int64_t x1608 = 15LL;
	static int32_t t35 = -2230;

	t35 = (x1605-((x1606/x1607)<<x1608));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1686 = UINT32_MAX;
	int64_t x1687 = INT64_MIN;
	uint8_t x1688 = 4U;

	t36 = (x1685-((x1686/x1687)<<x1688));

	if (t36 != 4166125LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1749 = INT8_MIN;
	uint64_t x1750 = UINT64_MAX;
	uint64_t x1751 = UINT64_MAX;
	int8_t x1752 = 3;

	t37 = (x1749-((x1750/x1751)<<x1752));

	if (t37 != 18446744073709551480LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1789 = -1;
	uint8_t x1790 = UINT8_MAX;
	volatile uint64_t x1791 = 65361LLU;
	volatile uint8_t x1792 = 46U;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x1789-((x1790/x1791)<<x1792));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1809 = INT64_MIN;
	volatile int8_t x1811 = INT8_MIN;
	uint8_t x1812 = 7U;
	int64_t t39 = INT64_MIN;

	t39 = (x1809-((x1810/x1811)<<x1812));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1817 = -1;
	static int64_t x1818 = INT64_MAX;
	volatile int64_t x1819 = 2417231LL;
	uint16_t x1820 = 8U;
	int64_t t40 = -9725030594061486LL;

	t40 = (x1817-((x1818/x1819)<<x1820));

	if (t40 != -976813238550529LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1893 = 27U;
	static uint64_t x1894 = 14LLU;
	uint16_t x1895 = 7562U;
	uint64_t t41 = 17LLU;

	t41 = (x1893-((x1894/x1895)<<x1896));

	if (t41 != 27LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1949 = UINT16_MAX;
	static volatile int32_t x1950 = 4;
	int8_t x1951 = INT8_MAX;

	t42 = (x1949-((x1950/x1951)<<x1952));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2093 = 5749LLU;
	int8_t x2094 = INT8_MAX;
	int8_t x2095 = INT8_MIN;
	volatile uint8_t x2096 = 1U;
	volatile uint64_t t43 = 848618057775LLU;

	t43 = (x2093-((x2094/x2095)<<x2096));

	if (t43 != 5749LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2126 = 104745178554LLU;
	int16_t x2127 = -4;
	uint8_t x2128 = 4U;

	t44 = (x2125-((x2126/x2127)<<x2128));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2145 = -1;
	static int32_t x2147 = -85925;
	int32_t t45 = -156151107;

	t45 = (x2145-((x2146/x2147)<<x2148));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2241 = -2372158;
	uint8_t x2242 = UINT8_MAX;
	int16_t x2243 = 223;
	int64_t x2244 = 1LL;
	volatile int32_t t46 = 307090;

	t46 = (x2241-((x2242/x2243)<<x2244));

	if (t46 != -2372160) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2257 = INT8_MAX;
	uint8_t x2258 = 23U;
	static uint64_t x2259 = 1995063LLU;
	static uint8_t x2260 = 27U;
	static volatile uint64_t t47 = 760240612976LLU;

	t47 = (x2257-((x2258/x2259)<<x2260));

	if (t47 != 127LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x2277 = UINT64_MAX;
	uint8_t x2280 = 11U;
	uint64_t t48 = UINT64_MAX;

	t48 = (x2277-((x2278/x2279)<<x2280));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2281 = 174430239;
	uint8_t x2284 = 5U;
	volatile int32_t t49 = 0;

	t49 = (x2281-((x2282/x2283)<<x2284));

	if (t49 != 59422847) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x2297 = -1929;
	int64_t x2298 = INT64_MIN;
	uint64_t x2299 = UINT64_MAX;
	uint64_t t50 = 27763116073713628LLU;

	t50 = (x2297-((x2298/x2299)<<x2300));

	if (t50 != 18446744073709549687LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2354 = INT32_MIN;
	volatile int64_t x2355 = -125521421367913300LL;
	uint8_t x2356 = 1U;
	int64_t t51 = -3341LL;

	t51 = (x2353-((x2354/x2355)<<x2356));

	if (t51 != -648521297LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x2385 = -1LL;
	int16_t x2386 = INT16_MIN;
	int8_t x2387 = -1;
	volatile uint8_t x2388 = 6U;
	volatile int64_t t52 = -226144819516490LL;

	t52 = (x2385-((x2386/x2387)<<x2388));

	if (t52 != -2097153LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2417 = 57;
	int8_t x2419 = 62;
	volatile uint32_t x2420 = 20U;

	t53 = (x2417-((x2418/x2419)<<x2420));

	if (t53 != 57) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2449 = -1;
	uint16_t x2450 = 20385U;
	uint8_t x2451 = 33U;

	t54 = (x2449-((x2450/x2451)<<x2452));

	if (t54 != -19745) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2473 = 3;
	uint32_t x2475 = UINT32_MAX;
	uint8_t x2476 = 1U;
	volatile uint32_t t55 = 453117745U;

	t55 = (x2473-((x2474/x2475)<<x2476));

	if (t55 != 3U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2485 = INT8_MIN;
	int16_t x2486 = -1;
	int8_t x2487 = INT8_MIN;
	int8_t x2488 = 1;
	volatile int32_t t56 = -21118010;

	t56 = (x2485-((x2486/x2487)<<x2488));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x2565 = 33504393562319LLU;
	static uint64_t x2566 = 3786334605266386981LLU;
	int16_t x2567 = -336;
	static uint8_t x2568 = 1U;
	static uint64_t t57 = 5118686308560691566LLU;

	t57 = (x2565-((x2566/x2567)<<x2568));

	if (t57 != 33504393562319LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x2661 = 945444LLU;
	uint32_t x2662 = 1U;
	volatile int32_t x2663 = 3070507;
	volatile uint8_t x2664 = 29U;
	static volatile uint64_t t58 = 665953LLU;

	t58 = (x2661-((x2662/x2663)<<x2664));

	if (t58 != 945444LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2697 = -1;
	volatile uint32_t x2698 = UINT32_MAX;
	int16_t x2699 = -1;
	int16_t x2700 = 1;
	volatile uint32_t t59 = 1054061076U;

	t59 = (x2697-((x2698/x2699)<<x2700));

	if (t59 != 4294967293U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2733 = 343;
	volatile int16_t x2734 = -9;
	int32_t x2736 = 6;
	volatile int32_t t60 = -16;

	t60 = (x2733-((x2734/x2735)<<x2736));

	if (t60 != 343) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x2741 = 31U;
	int32_t x2742 = 6916767;
	volatile int64_t x2743 = INT64_MIN;
	static int32_t x2744 = 7;
	volatile int64_t t61 = 18024911LL;

	t61 = (x2741-((x2742/x2743)<<x2744));

	if (t61 != 31LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2765 = -16;

	t62 = (x2765-((x2766/x2767)<<x2768));

	if (t62 != -20LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2793 = INT32_MAX;
	uint32_t x2796 = 60U;
	uint64_t t63 = 3102902081751971LLU;

	t63 = (x2793-((x2794/x2795)<<x2796));

	if (t63 != 2147483647LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2813 = -14678620163082LL;
	uint64_t x2814 = 1880604520754882228LLU;
	volatile int64_t x2815 = INT64_MIN;
	uint64_t t64 = 538788793LLU;

	t64 = (x2813-((x2814/x2815)<<x2816));

	if (t64 != 18446729395089388534LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x2817 = INT64_MAX;
	int32_t x2818 = -1;
	static int32_t x2819 = -121537447;
	int8_t x2820 = 27;
	static int64_t t65 = INT64_MAX;

	t65 = (x2817-((x2818/x2819)<<x2820));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2825 = 1U;
	uint64_t x2827 = 45302LLU;
	static uint16_t x2828 = 15U;
	uint64_t t66 = 29LLU;

	t66 = (x2825-((x2826/x2827)<<x2828));

	if (t66 != 5103781074122047489LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x2849 = 358;
	volatile uint8_t x2851 = 7U;
	volatile uint8_t x2852 = 0U;
	volatile int32_t t67 = -1035942241;

	t67 = (x2849-((x2850/x2851)<<x2852));

	if (t67 != 338) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2905 = INT64_MIN;
	volatile uint64_t x2906 = 3265295480930456408LLU;
	static int32_t x2907 = -264;
	static volatile uint16_t x2908 = 3U;

	t68 = (x2905-((x2906/x2907)<<x2908));

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2933 = INT16_MIN;
	int16_t x2934 = -3735;
	volatile int32_t t69 = -7591584;

	t69 = (x2933-((x2934/x2935)<<x2936));

	if (t69 != -40238) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x2955 = INT32_MIN;
	uint8_t x2956 = 15U;

	t70 = (x2953-((x2954/x2955)<<x2956));

	if (t70 != 210) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x2958 = 4;
	uint64_t x2959 = UINT64_MAX;
	uint32_t x2960 = 1U;
	static uint64_t t71 = 977059LLU;

	t71 = (x2957-((x2958/x2959)<<x2960));

	if (t71 != 116307603LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x3045 = 52;
	int32_t x3046 = -3247;
	uint64_t x3047 = UINT64_MAX;
	uint64_t t72 = 98543104703LLU;

	t72 = (x3045-((x3046/x3047)<<x3048));

	if (t72 != 52LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3089 = INT8_MAX;
	volatile int64_t x3090 = -33075042LL;
	static uint64_t x3091 = 808071566130288LLU;
	int32_t x3092 = 0;

	t73 = (x3089-((x3090/x3091)<<x3092));

	if (t73 != 18446744073709528915LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x3113 = 73U;
	int16_t x3115 = 4816;
	uint8_t x3116 = 0U;
	volatile int32_t t74 = -987808;

	t74 = (x3113-((x3114/x3115)<<x3116));

	if (t74 != -445833) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3121 = -182;
	uint32_t x3122 = UINT32_MAX;
	int16_t x3124 = 3;
	volatile uint32_t t75 = 38272306U;

	t75 = (x3121-((x3122/x3123)<<x3124));

	if (t75 != 4294966730U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3157 = INT8_MIN;
	uint64_t x3158 = 1944411617719LLU;
	volatile int16_t x3159 = -1;
	static uint16_t x3160 = 1U;
	uint64_t t76 = 1885LLU;

	t76 = (x3157-((x3158/x3159)<<x3160));

	if (t76 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x3165 = 106U;
	int16_t x3166 = -67;
	int16_t x3167 = INT16_MIN;
	static int16_t x3168 = 2;

	t77 = (x3165-((x3166/x3167)<<x3168));

	if (t77 != 106) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x3197 = 2356742U;
	int64_t x3198 = -4844929LL;
	uint8_t x3200 = 37U;
	volatile int64_t t78 = 3882048255528722580LL;

	t78 = (x3197-((x3198/x3199)<<x3200));

	if (t78 != 2356742LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3205 = INT8_MIN;
	static volatile int32_t x3206 = INT32_MIN;
	static volatile uint8_t x3208 = 2U;
	static volatile int64_t t79 = 193897905950991482LL;

	t79 = (x3205-((x3206/x3207)<<x3208));

	if (t79 != -128LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x3209 = UINT64_MAX;
	int64_t x3211 = 2200769LL;
	uint8_t x3212 = 6U;
	volatile uint64_t t80 = 1120370705522493LLU;

	t80 = (x3209-((x3210/x3211)<<x3212));

	if (t80 != 18446744073709405119LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3214 = -1;
	static int8_t x3215 = INT8_MIN;
	uint16_t x3216 = 2U;
	static int32_t t81 = 341794;

	t81 = (x3213-((x3214/x3215)<<x3216));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3229 = -11309807846LL;
	int16_t x3230 = 1;
	int16_t x3231 = INT16_MAX;
	int32_t x3232 = 6;
	int64_t t82 = 8345781LL;

	t82 = (x3229-((x3230/x3231)<<x3232));

	if (t82 != -11309807846LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3301 = INT64_MIN;
	static volatile int16_t x3302 = 131;
	volatile int64_t x3303 = -342492LL;
	uint32_t x3304 = 1U;
	volatile int64_t t83 = INT64_MIN;

	t83 = (x3301-((x3302/x3303)<<x3304));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3317 = 1;
	int32_t x3319 = INT32_MIN;
	int8_t x3320 = 0;
	volatile int32_t t84 = -243369737;

	t84 = (x3317-((x3318/x3319)<<x3320));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3369 = INT32_MAX;
	volatile int32_t x3370 = 7;
	uint32_t x3371 = 8146120U;
	int8_t x3372 = 14;

	t85 = (x3369-((x3370/x3371)<<x3372));

	if (t85 != 2147483647U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x3393 = INT64_MIN;
	int32_t x3394 = INT32_MIN;
	int16_t x3396 = 3;

	t86 = (x3393-((x3394/x3395)<<x3396));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3405 = 109596LL;
	volatile uint64_t x3406 = 39225LLU;
	static uint32_t x3407 = 24U;
	volatile int8_t x3408 = 30;

	t87 = (x3405-((x3406/x3407)<<x3408));

	if (t87 != 18446742319215520796LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3457 = 21U;
	int32_t x3458 = -483062;
	volatile int64_t x3459 = INT64_MIN;
	int16_t x3460 = 0;
	int64_t t88 = -1531972904456885292LL;

	t88 = (x3457-((x3458/x3459)<<x3460));

	if (t88 != 21LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3542 = -831;
	static volatile int64_t x3543 = INT64_MAX;
	int16_t x3544 = 12;
	int64_t t89 = 8857470950037945LL;

	t89 = (x3541-((x3542/x3543)<<x3544));

	if (t89 != 2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3585 = 1066683383875730LL;
	uint64_t x3586 = 22033530LLU;
	int64_t x3587 = INT64_MIN;
	int8_t x3588 = 3;

	t90 = (x3585-((x3586/x3587)<<x3588));

	if (t90 != 1066683383875730LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3625 = INT8_MAX;
	volatile uint64_t x3626 = 46LLU;
	uint16_t x3627 = 29U;
	static uint8_t x3628 = 1U;
	static volatile uint64_t t91 = 1010502820175LLU;

	t91 = (x3625-((x3626/x3627)<<x3628));

	if (t91 != 125LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x3633 = 26312LLU;
	int8_t x3634 = -8;
	int32_t x3635 = INT32_MAX;
	uint16_t x3636 = 21U;
	volatile uint64_t t92 = 6321893249279LLU;

	t92 = (x3633-((x3634/x3635)<<x3636));

	if (t92 != 26312LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3721 = -1LL;
	int32_t x3722 = -1;
	uint16_t x3724 = 8U;
	volatile int64_t t93 = 34012233429186LL;

	t93 = (x3721-((x3722/x3723)<<x3724));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x3741 = UINT32_MAX;
	static volatile int8_t x3742 = 0;
	uint32_t t94 = UINT32_MAX;

	t94 = (x3741-((x3742/x3743)<<x3744));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3753 = -1;
	uint8_t x3756 = 4U;

	t95 = (x3753-((x3754/x3755)<<x3756));

	if (t95 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x3777 = UINT16_MAX;
	uint64_t x3778 = UINT64_MAX;
	static int16_t x3779 = INT16_MAX;
	static uint8_t x3780 = 26U;

	t96 = (x3777-((x3778/x3779)<<x3780));

	if (t96 != 17293787383656939519LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3810 = 0U;
	int64_t x3811 = -83965LL;
	volatile int64_t t97 = -130467827LL;

	t97 = (x3809-((x3810/x3811)<<x3812));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3957 = -1LL;
	volatile int16_t x3958 = 7864;
	uint32_t x3959 = UINT32_MAX;
	uint16_t x3960 = 30U;
	int64_t t98 = 15615843467LL;

	t98 = (x3957-((x3958/x3959)<<x3960));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x3969 = -1LL;
	uint16_t x3970 = UINT16_MAX;
	static uint64_t x3971 = 29029933055408224LLU;
	volatile int8_t x3972 = 6;
	static uint64_t t99 = UINT64_MAX;

	t99 = (x3969-((x3970/x3971)<<x3972));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

