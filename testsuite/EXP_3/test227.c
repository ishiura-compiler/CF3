#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x71 = 1LL;
static int32_t x72 = -1;
int64_t x114 = -1LL;
volatile int8_t x115 = 0;
static int64_t x274 = INT64_MIN;
static uint8_t x486 = 1U;
int32_t x668 = INT32_MIN;
static int16_t x751 = 8;
int64_t x752 = -1LL;
int16_t x879 = INT16_MIN;
int16_t x912 = -1;
volatile int32_t x916 = -1;
volatile int32_t x924 = INT32_MIN;
volatile int32_t t15 = 465450965;
static volatile int16_t x1069 = 6;
int32_t x1071 = -1;
uint8_t x1074 = 2U;
uint32_t t17 = 2U;
int64_t x1128 = INT64_MIN;
int32_t x1246 = -1;
int32_t x1378 = INT32_MIN;
int8_t x1402 = INT8_MIN;
int16_t x1406 = INT16_MIN;
volatile int16_t x1407 = -1;
int16_t x1470 = INT16_MIN;
int16_t x1627 = INT16_MIN;
uint32_t x1796 = UINT32_MAX;
int8_t x1802 = INT8_MIN;
static volatile uint64_t x1804 = UINT64_MAX;
uint64_t x1816 = UINT64_MAX;
int16_t x1899 = INT16_MIN;
static int8_t x1901 = INT8_MAX;
volatile int64_t t33 = 27848270860LL;
volatile int8_t x2023 = 1;
uint32_t t34 = 1214U;
static uint64_t x2115 = UINT64_MAX;
volatile int64_t x2181 = 34858400495940LL;
int16_t x2184 = -1;
int64_t t38 = 9654303892660949LL;
int32_t x2254 = INT32_MAX;
int16_t x2267 = INT16_MIN;
uint32_t x2304 = UINT32_MAX;
uint8_t x2360 = 0U;
volatile int8_t x2445 = -3;
uint32_t x2446 = 8U;
volatile uint32_t x2459 = UINT32_MAX;
static volatile uint32_t x2460 = UINT32_MAX;
static volatile int64_t t46 = -15388438837172476LL;
int8_t x2478 = INT8_MIN;
volatile int32_t x2506 = INT32_MAX;
static uint8_t x2585 = 11U;
uint8_t x2586 = 11U;
uint16_t x2683 = 23U;
uint32_t t51 = 7U;
uint8_t x2717 = 99U;
int8_t x2870 = INT8_MAX;
int32_t x2872 = -1;
static int8_t x2930 = INT8_MIN;
int8_t x2941 = INT8_MAX;
volatile int32_t t56 = -1053724606;
volatile int32_t x3027 = INT32_MIN;
static int64_t x3082 = 534449347544LL;
uint16_t x3084 = 1U;
int8_t x3327 = 36;
uint32_t x3345 = UINT32_MAX;
int32_t x3347 = -1;
int32_t x3485 = 15;
int32_t t68 = 358531;
uint32_t x3529 = UINT32_MAX;
int64_t x3530 = INT64_MAX;
volatile int64_t t69 = 1782629147LL;
int32_t t70 = 7611;
int64_t x3638 = -1LL;
uint8_t x3725 = 8U;
uint16_t x3727 = 5U;
volatile int32_t t74 = -30309177;
uint8_t x3837 = UINT8_MAX;
uint16_t x3998 = 31U;
volatile uint64_t x4045 = UINT64_MAX;
static int8_t x4048 = -6;
int32_t t79 = -3;
volatile uint64_t x4173 = UINT64_MAX;
uint8_t x4279 = 4U;
volatile uint32_t x4305 = 3253U;
int16_t x4308 = -1;
uint32_t t83 = 25U;
static volatile int32_t x4545 = INT32_MIN;
volatile uint32_t x4547 = UINT32_MAX;
int32_t x4548 = -1;
int16_t x4741 = -1;
static volatile uint32_t x4743 = UINT32_MAX;
static uint32_t x4910 = 311728631U;
uint32_t x5109 = 18314689U;
volatile int64_t x5110 = INT64_MIN;
uint32_t x5112 = UINT32_MAX;
int32_t x5114 = 6759436;
int32_t t96 = 76;


void f0(void) {
	uint64_t x69 = UINT64_MAX;
	static int16_t x70 = INT16_MAX;
	uint64_t t0 = 29766027317430726LLU;

	t0 = ((x69%x70)<<(x71-x72));

	if (t0 != 60LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x113 = 7U;
	int64_t x116 = -1LL;
	volatile int64_t t1 = 73903109832279LL;

	t1 = ((x113%x114)<<(x115-x116));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x273 = 1542230356322LLU;
	int32_t x275 = INT32_MIN;
	static int32_t x276 = INT32_MIN;
	volatile uint64_t t2 = 11273861907LLU;

	t2 = ((x273%x274)<<(x275-x276));

	if (t2 != 1542230356322LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x357 = INT64_MAX;
	uint32_t x358 = UINT32_MAX;
	int64_t x359 = -1LL;
	volatile int16_t x360 = -1;
	int64_t t3 = 1LL;

	t3 = ((x357%x358)<<(x359-x360));

	if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x361 = INT64_MAX;
	volatile int32_t x362 = -1;
	static int8_t x363 = -1;
	volatile int64_t x364 = -1LL;
	static int64_t t4 = -2LL;

	t4 = ((x361%x362)<<(x363-x364));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x485 = -1;
	int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MIN;
	volatile int32_t t5 = 2;

	t5 = ((x485%x486)<<(x487-x488));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x549 = UINT64_MAX;
	int32_t x550 = 18536;
	static volatile uint64_t x551 = UINT64_MAX;
	int64_t x552 = -1LL;
	uint64_t t6 = 268368798522525LLU;

	t6 = ((x549%x550)<<(x551-x552));

	if (t6 != 15LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x573 = 942283U;
	static int16_t x574 = INT16_MIN;
	volatile uint8_t x575 = 0U;
	volatile uint32_t x576 = UINT32_MAX;
	volatile uint32_t t7 = 466U;

	t7 = ((x573%x574)<<(x575-x576));

	if (t7 != 1884566U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x665 = 7278096052579LLU;
	int64_t x666 = INT64_MIN;
	static int32_t x667 = INT32_MIN;
	static volatile uint64_t t8 = 1959062967006508LLU;

	t8 = ((x665%x666)<<(x667-x668));

	if (t8 != 7278096052579LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x749 = UINT64_MAX;
	int8_t x750 = -9;
	volatile uint64_t t9 = 201057051608955LLU;

	t9 = ((x749%x750)<<(x751-x752));

	if (t9 != 4096LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x841 = UINT8_MAX;
	int32_t x842 = -1;
	int64_t x843 = -1LL;
	static int8_t x844 = -1;
	volatile int32_t t10 = -1313;

	t10 = ((x841%x842)<<(x843-x844));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x877 = 1;
	int32_t x878 = INT32_MAX;
	int16_t x880 = INT16_MIN;
	volatile int32_t t11 = 15699;

	t11 = ((x877%x878)<<(x879-x880));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x909 = 1U;
	volatile int16_t x910 = INT16_MAX;
	volatile int8_t x911 = 12;
	volatile uint32_t t12 = 4074442U;

	t12 = ((x909%x910)<<(x911-x912));

	if (t12 != 8192U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x913 = INT64_MIN;
	int16_t x914 = -1;
	int64_t x915 = -1LL;
	int64_t t13 = -18507LL;

	t13 = ((x913%x914)<<(x915-x916));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x921 = INT64_MAX;
	int32_t x922 = INT32_MIN;
	int32_t x923 = INT32_MIN;
	volatile int64_t t14 = 127681317391LL;

	t14 = ((x921%x922)<<(x923-x924));

	if (t14 != 2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1045 = 1479U;
	int8_t x1046 = INT8_MIN;
	uint64_t x1047 = UINT64_MAX;
	int8_t x1048 = -1;

	t15 = ((x1045%x1046)<<(x1047-x1048));

	if (t15 != 71) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1070 = INT16_MIN;
	static int16_t x1072 = -1;
	volatile int32_t t16 = -286917082;

	t16 = ((x1069%x1070)<<(x1071-x1072));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1073 = 1447984912U;
	static int16_t x1075 = -1;
	uint32_t x1076 = UINT32_MAX;

	t17 = ((x1073%x1074)<<(x1075-x1076));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1125 = 0;
	int64_t x1126 = INT64_MIN;
	int64_t x1127 = INT64_MIN;
	int64_t t18 = 175148LL;

	t18 = ((x1125%x1126)<<(x1127-x1128));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x1245 = 12U;
	int8_t x1247 = 11;
	volatile uint32_t x1248 = UINT32_MAX;
	int32_t t19 = -2397;

	t19 = ((x1245%x1246)<<(x1247-x1248));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1277 = -1;
	int8_t x1278 = -1;
	int16_t x1279 = INT16_MAX;
	volatile int16_t x1280 = INT16_MAX;
	int32_t t20 = 11885117;

	t20 = ((x1277%x1278)<<(x1279-x1280));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1377 = 29;
	int32_t x1379 = INT32_MIN;
	static int32_t x1380 = INT32_MIN;
	static volatile int32_t t21 = -9;

	t21 = ((x1377%x1378)<<(x1379-x1380));

	if (t21 != 29) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1401 = INT64_MIN;
	int8_t x1403 = INT8_MAX;
	static uint16_t x1404 = 123U;
	volatile int64_t t22 = 907183105336879LL;

	t22 = ((x1401%x1402)<<(x1403-x1404));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1405 = UINT64_MAX;
	static uint64_t x1408 = UINT64_MAX;
	static uint64_t t23 = 470227LLU;

	t23 = ((x1405%x1406)<<(x1407-x1408));

	if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1469 = INT64_MAX;
	int8_t x1471 = -1;
	int64_t x1472 = -1LL;
	volatile int64_t t24 = 229549525738874LL;

	t24 = ((x1469%x1470)<<(x1471-x1472));

	if (t24 != 32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1569 = INT16_MIN;
	uint32_t x1570 = UINT32_MAX;
	int8_t x1571 = -1;
	volatile int8_t x1572 = -1;
	volatile uint32_t t25 = 1655993857U;

	t25 = ((x1569%x1570)<<(x1571-x1572));

	if (t25 != 4294934528U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1573 = INT8_MAX;
	int16_t x1574 = INT16_MAX;
	static int32_t x1575 = -1;
	int16_t x1576 = -20;
	static volatile int32_t t26 = 14;

	t26 = ((x1573%x1574)<<(x1575-x1576));

	if (t26 != 66584576) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1625 = UINT8_MAX;
	uint16_t x1626 = 398U;
	int16_t x1628 = INT16_MIN;
	static volatile int32_t t27 = 248316638;

	t27 = ((x1625%x1626)<<(x1627-x1628));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1753 = INT8_MIN;
	int32_t x1754 = -1;
	uint8_t x1755 = 12U;
	volatile int16_t x1756 = -1;
	volatile int32_t t28 = -390;

	t28 = ((x1753%x1754)<<(x1755-x1756));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1793 = 82127515952508LL;
	int16_t x1794 = INT16_MIN;
	uint8_t x1795 = 13U;
	int64_t t29 = 125836LL;

	t29 = ((x1793%x1794)<<(x1795-x1796));

	if (t29 != 157220864LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1801 = 16U;
	volatile int16_t x1803 = -1;
	int32_t t30 = 0;

	t30 = ((x1801%x1802)<<(x1803-x1804));

	if (t30 != 16) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x1813 = 21U;
	int16_t x1814 = 9638;
	int16_t x1815 = 7;
	volatile int32_t t31 = -587;

	t31 = ((x1813%x1814)<<(x1815-x1816));

	if (t31 != 5376) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1897 = INT8_MAX;
	volatile int16_t x1898 = -1;
	static int16_t x1900 = INT16_MIN;
	int32_t t32 = 0;

	t32 = ((x1897%x1898)<<(x1899-x1900));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1902 = -106094LL;
	uint8_t x1903 = 3U;
	int16_t x1904 = -1;

	t33 = ((x1901%x1902)<<(x1903-x1904));

	if (t33 != 2032LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x2021 = 23;
	uint32_t x2022 = 246051U;
	static int64_t x2024 = -1LL;

	t34 = ((x2021%x2022)<<(x2023-x2024));

	if (t34 != 92U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x2093 = INT16_MAX;
	uint32_t x2094 = 96322726U;
	uint16_t x2095 = 14U;
	int32_t x2096 = 5;
	volatile uint32_t t35 = 208U;

	t35 = ((x2093%x2094)<<(x2095-x2096));

	if (t35 != 16776704U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2113 = 5LLU;
	volatile uint64_t x2114 = 1086567631LLU;
	volatile int16_t x2116 = -1;
	uint64_t t36 = 9746LLU;

	t36 = ((x2113%x2114)<<(x2115-x2116));

	if (t36 != 5LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x2125 = 202U;
	int16_t x2126 = 7405;
	static volatile int64_t x2127 = -1LL;
	int64_t x2128 = -1LL;
	uint32_t t37 = 15U;

	t37 = ((x2125%x2126)<<(x2127-x2128));

	if (t37 != 202U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2182 = INT16_MIN;
	int64_t x2183 = -1LL;

	t38 = ((x2181%x2182)<<(x2183-x2184));

	if (t38 != 14660LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2253 = 15892012508150174LL;
	uint8_t x2255 = 2U;
	int8_t x2256 = -1;
	static int64_t t39 = 6879073812811LL;

	t39 = ((x2253%x2254)<<(x2255-x2256));

	if (t39 != 101394472LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2257 = -24;
	static volatile uint64_t x2258 = 1827049944985LLU;
	int64_t x2259 = -1LL;
	int16_t x2260 = -1;
	static uint64_t t40 = 812LLU;

	t40 = ((x2257%x2258)<<(x2259-x2260));

	if (t40 != 77966518552LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2265 = INT64_MIN;
	int32_t x2266 = INT32_MIN;
	int16_t x2268 = INT16_MIN;
	volatile int64_t t41 = -12123723121210992LL;

	t41 = ((x2265%x2266)<<(x2267-x2268));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2301 = -1;
	int64_t x2302 = -1LL;
	static uint32_t x2303 = UINT32_MAX;
	int64_t t42 = -16LL;

	t42 = ((x2301%x2302)<<(x2303-x2304));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2325 = INT64_MAX;
	volatile int64_t x2326 = INT64_MIN;
	int16_t x2327 = INT16_MIN;
	int16_t x2328 = INT16_MIN;
	volatile int64_t t43 = INT64_MAX;

	t43 = ((x2325%x2326)<<(x2327-x2328));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2357 = 1LLU;
	int8_t x2358 = 11;
	volatile int64_t x2359 = 48LL;
	uint64_t t44 = 16902LLU;

	t44 = ((x2357%x2358)<<(x2359-x2360));

	if (t44 != 281474976710656LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2447 = 29U;
	uint16_t x2448 = 14U;
	volatile uint32_t t45 = 3800837U;

	t45 = ((x2445%x2446)<<(x2447-x2448));

	if (t45 != 163840U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2457 = -1;
	int64_t x2458 = -1LL;

	t46 = ((x2457%x2458)<<(x2459-x2460));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2477 = INT32_MIN;
	volatile int8_t x2479 = -1;
	volatile uint32_t x2480 = UINT32_MAX;
	volatile int32_t t47 = -215;

	t47 = ((x2477%x2478)<<(x2479-x2480));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2505 = 11U;
	uint64_t x2507 = UINT64_MAX;
	int8_t x2508 = -1;
	static volatile int32_t t48 = 59205847;

	t48 = ((x2505%x2506)<<(x2507-x2508));

	if (t48 != 11) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2541 = 981405507087834LLU;
	static int32_t x2542 = INT32_MIN;
	int16_t x2543 = 40;
	uint32_t x2544 = UINT32_MAX;
	uint64_t t49 = 1411LLU;

	t49 = ((x2541%x2542)<<(x2543-x2544));

	if (t49 != 4817642138495877120LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2587 = -1;
	uint32_t x2588 = UINT32_MAX;
	int32_t t50 = -69245296;

	t50 = ((x2585%x2586)<<(x2587-x2588));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x2681 = INT8_MAX;
	uint32_t x2682 = 297632U;
	int8_t x2684 = -1;

	t51 = ((x2681%x2682)<<(x2683-x2684));

	if (t51 != 2130706432U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x2718 = INT64_MAX;
	volatile int32_t x2719 = 1;
	volatile int8_t x2720 = -1;
	volatile int64_t t52 = 203805291717077LL;

	t52 = ((x2717%x2718)<<(x2719-x2720));

	if (t52 != 396LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x2869 = 3960LLU;
	int32_t x2871 = -1;
	uint64_t t53 = 83616LLU;

	t53 = ((x2869%x2870)<<(x2871-x2872));

	if (t53 != 23LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2873 = UINT8_MAX;
	int8_t x2874 = -36;
	uint8_t x2875 = 1U;
	volatile int8_t x2876 = -2;
	volatile int32_t t54 = -253;

	t54 = ((x2873%x2874)<<(x2875-x2876));

	if (t54 != 24) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2929 = 0;
	volatile int16_t x2931 = INT16_MIN;
	int16_t x2932 = INT16_MIN;
	volatile int32_t t55 = -161;

	t55 = ((x2929%x2930)<<(x2931-x2932));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2942 = 27252798;
	uint64_t x2943 = UINT64_MAX;
	volatile int8_t x2944 = -1;

	t56 = ((x2941%x2942)<<(x2943-x2944));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3025 = 6U;
	int8_t x3026 = 15;
	static int32_t x3028 = INT32_MIN;
	volatile int32_t t57 = -14221844;

	t57 = ((x3025%x3026)<<(x3027-x3028));

	if (t57 != 6) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3061 = 78U;
	static volatile uint32_t x3062 = 260U;
	static volatile uint64_t x3063 = 24LLU;
	static uint8_t x3064 = 3U;
	volatile uint32_t t58 = 6827U;

	t58 = ((x3061%x3062)<<(x3063-x3064));

	if (t58 != 163577856U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3069 = INT32_MIN;
	static uint64_t x3070 = 49201557066800LLU;
	int8_t x3071 = 1;
	static volatile uint32_t x3072 = UINT32_MAX;
	uint64_t t59 = 60LLU;

	t59 = ((x3069%x3070)<<(x3071-x3072));

	if (t59 != 188378081380672LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3081 = 15U;
	uint8_t x3083 = 36U;
	int64_t t60 = 3LL;

	t60 = ((x3081%x3082)<<(x3083-x3084));

	if (t60 != 515396075520LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3149 = UINT16_MAX;
	static volatile int8_t x3150 = -1;
	volatile uint8_t x3151 = 3U;
	int16_t x3152 = -1;
	static int32_t t61 = 55326688;

	t61 = ((x3149%x3150)<<(x3151-x3152));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3165 = 914809861399401LLU;
	int16_t x3166 = INT16_MIN;
	int8_t x3167 = -1;
	int8_t x3168 = -2;
	static volatile uint64_t t62 = 184482260178280761LLU;

	t62 = ((x3165%x3166)<<(x3167-x3168));

	if (t62 != 1829619722798802LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3277 = 37827980LLU;
	int16_t x3278 = -7;
	volatile uint16_t x3279 = 40U;
	static volatile int16_t x3280 = 7;
	uint64_t t63 = 3516699275LLU;

	t63 = ((x3277%x3278)<<(x3279-x3280));

	if (t63 != 324939873947484160LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3317 = INT32_MAX;
	int16_t x3318 = INT16_MIN;
	uint32_t x3319 = UINT32_MAX;
	volatile int8_t x3320 = -1;
	volatile int32_t t64 = 1204;

	t64 = ((x3317%x3318)<<(x3319-x3320));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3325 = 62280458112LLU;
	static int16_t x3326 = -5;
	uint32_t x3328 = UINT32_MAX;
	uint64_t t65 = 123368802LLU;

	t65 = ((x3325%x3326)<<(x3327-x3328));

	if (t65 != 471734468781015040LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3346 = INT64_MIN;
	static int8_t x3348 = -1;
	static volatile int64_t t66 = 1192LL;

	t66 = ((x3345%x3346)<<(x3347-x3348));

	if (t66 != 4294967295LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x3486 = UINT64_MAX;
	volatile uint8_t x3487 = 5U;
	uint32_t x3488 = UINT32_MAX;
	volatile uint64_t t67 = 12650483474LLU;

	t67 = ((x3485%x3486)<<(x3487-x3488));

	if (t67 != 960LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x3513 = INT32_MIN;
	static int32_t x3514 = -1;
	int8_t x3515 = INT8_MIN;
	int16_t x3516 = -132;

	t68 = ((x3513%x3514)<<(x3515-x3516));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3531 = 42U;
	uint32_t x3532 = 21U;

	t69 = ((x3529%x3530)<<(x3531-x3532));

	if (t69 != 9007199252643840LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3569 = 6029;
	volatile int32_t x3570 = INT32_MAX;
	static int8_t x3571 = INT8_MIN;
	int8_t x3572 = INT8_MIN;

	t70 = ((x3569%x3570)<<(x3571-x3572));

	if (t70 != 6029) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3593 = 13872;
	int16_t x3594 = INT16_MAX;
	volatile int16_t x3595 = INT16_MIN;
	static int16_t x3596 = INT16_MIN;
	int32_t t71 = -64940032;

	t71 = ((x3593%x3594)<<(x3595-x3596));

	if (t71 != 13872) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3625 = INT64_MAX;
	int32_t x3626 = INT32_MIN;
	int8_t x3627 = 0;
	int8_t x3628 = -1;
	volatile int64_t t72 = -31176712LL;

	t72 = ((x3625%x3626)<<(x3627-x3628));

	if (t72 != 4294967294LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3637 = INT32_MAX;
	int64_t x3639 = -1LL;
	volatile int8_t x3640 = -1;
	volatile int64_t t73 = -530843730LL;

	t73 = ((x3637%x3638)<<(x3639-x3640));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3726 = -1;
	static uint32_t x3728 = UINT32_MAX;

	t74 = ((x3725%x3726)<<(x3727-x3728));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3773 = INT64_MAX;
	uint32_t x3774 = 2946871U;
	volatile int64_t x3775 = INT64_MIN;
	int64_t x3776 = INT64_MIN;
	volatile int64_t t75 = 78581LL;

	t75 = ((x3773%x3774)<<(x3775-x3776));

	if (t75 != 2088907LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3838 = UINT32_MAX;
	int8_t x3839 = -1;
	int64_t x3840 = -1LL;
	uint32_t t76 = 7U;

	t76 = ((x3837%x3838)<<(x3839-x3840));

	if (t76 != 255U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3997 = UINT16_MAX;
	int8_t x3999 = -1;
	uint32_t x4000 = UINT32_MAX;
	int32_t t77 = -2240;

	t77 = ((x3997%x3998)<<(x3999-x4000));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4046 = -1;
	static uint32_t x4047 = UINT32_MAX;
	uint64_t t78 = 3462LLU;

	t78 = ((x4045%x4046)<<(x4047-x4048));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x4113 = 3198;
	volatile int8_t x4114 = INT8_MAX;
	static uint64_t x4115 = 5LLU;
	volatile int32_t x4116 = -1;

	t79 = ((x4113%x4114)<<(x4115-x4116));

	if (t79 != 1472) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4174 = INT64_MAX;
	volatile uint8_t x4175 = 7U;
	volatile uint64_t x4176 = UINT64_MAX;
	uint64_t t80 = 51181998546LLU;

	t80 = ((x4173%x4174)<<(x4175-x4176));

	if (t80 != 256LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x4221 = 14U;
	static volatile int32_t x4222 = -1;
	uint64_t x4223 = UINT64_MAX;
	volatile int8_t x4224 = -1;
	int32_t t81 = 167416;

	t81 = ((x4221%x4222)<<(x4223-x4224));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4277 = INT64_MAX;
	uint64_t x4278 = 99367479404LLU;
	int8_t x4280 = -1;
	uint64_t t82 = 2231LLU;

	t82 = ((x4277%x4278)<<(x4279-x4280));

	if (t82 != 774403554656LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4306 = 3U;
	volatile int8_t x4307 = 0;

	t83 = ((x4305%x4306)<<(x4307-x4308));

	if (t83 != 2U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x4329 = UINT8_MAX;
	int16_t x4330 = INT16_MAX;
	volatile int16_t x4331 = 13;
	uint32_t x4332 = UINT32_MAX;
	volatile int32_t t84 = 0;

	t84 = ((x4329%x4330)<<(x4331-x4332));

	if (t84 != 4177920) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4393 = -1;
	volatile uint64_t x4394 = 8305104813383982LLU;
	static int16_t x4395 = 0;
	int8_t x4396 = 0;
	static uint64_t t85 = 1LLU;

	t85 = ((x4393%x4394)<<(x4395-x4396));

	if (t85 != 1106283183727593LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4546 = INT32_MIN;
	volatile int32_t t86 = 13;

	t86 = ((x4545%x4546)<<(x4547-x4548));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4629 = INT8_MIN;
	int8_t x4630 = -2;
	uint8_t x4631 = 2U;
	static int16_t x4632 = -1;
	int32_t t87 = -32361;

	t87 = ((x4629%x4630)<<(x4631-x4632));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4705 = INT64_MIN;
	uint8_t x4706 = 1U;
	uint64_t x4707 = 66LLU;
	uint16_t x4708 = 23U;
	volatile int64_t t88 = -977251LL;

	t88 = ((x4705%x4706)<<(x4707-x4708));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x4742 = UINT32_MAX;
	int32_t x4744 = -1;
	uint32_t t89 = 176884U;

	t89 = ((x4741%x4742)<<(x4743-x4744));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x4897 = 169991617LLU;
	int16_t x4898 = INT16_MIN;
	int8_t x4899 = -1;
	int32_t x4900 = -1;
	uint64_t t90 = 0LLU;

	t90 = ((x4897%x4898)<<(x4899-x4900));

	if (t90 != 169991617LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x4909 = 21U;
	int16_t x4911 = INT16_MIN;
	int16_t x4912 = INT16_MIN;
	volatile uint32_t t91 = 12543U;

	t91 = ((x4909%x4910)<<(x4911-x4912));

	if (t91 != 21U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4981 = 5623;
	int8_t x4982 = -1;
	static int8_t x4983 = -1;
	static int32_t x4984 = -1;
	volatile int32_t t92 = 569123;

	t92 = ((x4981%x4982)<<(x4983-x4984));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5097 = UINT16_MAX;
	int16_t x5098 = INT16_MIN;
	int64_t x5099 = -1LL;
	volatile int16_t x5100 = -1;
	static int32_t t93 = 0;

	t93 = ((x5097%x5098)<<(x5099-x5100));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5111 = 26;
	volatile int64_t t94 = -213525LL;

	t94 = ((x5109%x5110)<<(x5111-x5112));

	if (t94 != 2458155946606592LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5113 = UINT8_MAX;
	uint32_t x5115 = UINT32_MAX;
	static volatile uint32_t x5116 = UINT32_MAX;
	volatile int32_t t95 = 3;

	t95 = ((x5113%x5114)<<(x5115-x5116));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x5169 = 7;
	static volatile int8_t x5170 = INT8_MIN;
	int8_t x5171 = 29;
	uint8_t x5172 = 5U;

	t96 = ((x5169%x5170)<<(x5171-x5172));

	if (t96 != 117440512) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x5173 = 33176LLU;
	volatile uint32_t x5174 = 190U;
	uint32_t x5175 = UINT32_MAX;
	int16_t x5176 = -27;
	volatile uint64_t t97 = 5775894503221LLU;

	t97 = ((x5173%x5174)<<(x5175-x5176));

	if (t97 != 7784628224LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5313 = UINT32_MAX;
	int8_t x5314 = INT8_MAX;
	uint64_t x5315 = UINT64_MAX;
	int8_t x5316 = -1;
	static uint32_t t98 = 162U;

	t98 = ((x5313%x5314)<<(x5315-x5316));

	if (t98 != 15U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5325 = INT64_MAX;
	int32_t x5326 = INT32_MIN;
	int32_t x5327 = INT32_MIN;
	int32_t x5328 = INT32_MIN;
	volatile int64_t t99 = 1532965LL;

	t99 = ((x5325%x5326)<<(x5327-x5328));

	if (t99 != 2147483647LL) { NG(); } else { ; }
	
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

