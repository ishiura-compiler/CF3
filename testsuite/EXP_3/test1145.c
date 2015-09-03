#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x38 = INT16_MIN;
int16_t x40 = 1;
int16_t x56 = 11;
static int16_t x65 = INT16_MIN;
static int16_t x68 = 15;
static int64_t t4 = 639LL;
volatile int16_t x234 = -61;
uint8_t x235 = UINT8_MAX;
int32_t t6 = 186259243;
uint64_t t7 = 2415771025310749632LLU;
uint32_t x313 = UINT32_MAX;
int64_t x316 = 1LL;
uint8_t x358 = 2U;
volatile uint32_t x506 = 60U;
volatile int64_t t11 = INT64_MIN;
int32_t x690 = INT32_MIN;
static int32_t x758 = -30;
uint16_t x760 = 29U;
volatile uint64_t t14 = 117412847LLU;
int64_t x813 = -1652395992691594LL;
uint8_t x985 = 6U;
static int8_t x1096 = 0;
volatile uint64_t t19 = 48067796LLU;
volatile int8_t x1138 = INT8_MIN;
int64_t x1139 = INT64_MAX;
volatile int16_t x1305 = INT16_MIN;
uint64_t x1306 = 1LLU;
uint64_t x1308 = 5LLU;
uint16_t x1310 = UINT16_MAX;
volatile uint16_t x1420 = 3U;
uint16_t x1448 = 2U;
int32_t x1509 = INT32_MAX;
int16_t x1512 = 5;
volatile int32_t t27 = 266728362;
static volatile int32_t x1590 = INT32_MAX;
uint64_t t28 = 3953222LLU;
uint32_t x1621 = UINT32_MAX;
uint16_t x1623 = UINT16_MAX;
int8_t x1703 = 0;
volatile uint8_t x1753 = 54U;
int16_t x1786 = INT16_MIN;
uint64_t x2178 = 3856441804180LLU;
uint64_t x2189 = 123943907082950LLU;
static volatile uint64_t t38 = 474803LLU;
static uint8_t x2229 = 16U;
volatile int32_t t41 = 80;
int64_t x2309 = INT64_MIN;
uint8_t x2310 = 15U;
uint32_t x2445 = UINT32_MAX;
static volatile int16_t x2470 = INT16_MIN;
uint64_t x2471 = UINT64_MAX;
volatile int8_t x2472 = 0;
static int8_t x2490 = -1;
volatile uint32_t t46 = 91U;
int64_t x2606 = INT64_MIN;
int32_t x2633 = INT32_MIN;
int64_t x2635 = 61376655746LL;
uint32_t x2653 = UINT32_MAX;
uint8_t x2704 = 2U;
volatile int64_t t51 = 803644277361209581LL;
uint16_t x2815 = 26U;
static int64_t t53 = -15051LL;
volatile int64_t x2911 = INT64_MAX;
uint32_t x2918 = 213719420U;
uint64_t x2939 = 8169247450LLU;
uint64_t t56 = 3648066LLU;
volatile int16_t x3226 = INT16_MIN;
uint16_t x3228 = 23U;
static int16_t x3238 = INT16_MIN;
uint8_t x3239 = UINT8_MAX;
int16_t x3278 = -1;
volatile int64_t t62 = -54303132LL;
uint32_t x3442 = UINT32_MAX;
int16_t x3490 = INT16_MIN;
uint64_t x3495 = 18790331279LLU;
int32_t x3580 = 1;
volatile int8_t x3662 = 5;
uint32_t x3671 = 63393U;
volatile int16_t x3758 = INT16_MIN;
int32_t x3818 = -1;
int64_t x3819 = INT64_MAX;
int64_t x4049 = 14955LL;
uint64_t x4050 = UINT64_MAX;
uint8_t x4052 = 3U;
int32_t x4071 = 2303041;
volatile uint32_t t74 = 4U;
static uint16_t x4209 = 12U;
static volatile uint8_t x4243 = 0U;
static int16_t x4281 = 13;
int64_t t80 = INT64_MIN;
static uint32_t t81 = 1409540U;
static volatile int16_t x4545 = -146;
volatile uint64_t x4547 = 1LLU;
int32_t x4602 = -16216;
uint8_t x4603 = 0U;
static int32_t t83 = 84;
uint64_t t84 = 1099955185846985LLU;
int16_t x4638 = 0;
uint32_t t87 = 63850630U;
uint32_t x4810 = UINT32_MAX;
static int16_t x4896 = 0;
int8_t x4924 = 1;
int32_t x4974 = INT32_MAX;
static int64_t x5005 = -1LL;
int16_t x5006 = -1;
uint8_t x5007 = 8U;
static int32_t x5008 = 9;
volatile uint32_t t93 = 402160742U;
int64_t x5258 = -8316610263LL;
volatile int64_t x5259 = INT64_MAX;
int8_t x5323 = 1;
static uint8_t x5437 = 12U;
int16_t x5438 = INT16_MIN;
static int8_t x5440 = 14;
int32_t t99 = 0;


void f0(void) {
	int64_t x37 = INT64_MIN;
	uint16_t x39 = 1U;
	volatile int64_t t0 = INT64_MIN;

	t0 = ((x37&x38)+(x39>>x40));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x53 = 42U;
	static int64_t x54 = -1LL;
	volatile uint64_t x55 = 382155428LLU;
	uint64_t t1 = 442075631835LLU;

	t1 = ((x53&x54)+(x55>>x56));

	if (t1 != 186641LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MAX;
	static volatile int32_t t2 = -4438;

	t2 = ((x65&x66)+(x67>>x68));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x125 = INT8_MAX;
	int16_t x126 = 1;
	int64_t x127 = INT64_MAX;
	static volatile int8_t x128 = 1;
	int64_t t3 = 283558563648159912LL;

	t3 = ((x125&x126)+(x127>>x128));

	if (t3 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x157 = -1883688983LL;
	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 20106U;
	uint32_t x160 = 1U;

	t4 = ((x157&x158)+(x159>>x160));

	if (t4 != 10286LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x205 = 1;
	int16_t x206 = -1;
	uint64_t x207 = 44536604996298195LLU;
	static uint8_t x208 = 12U;
	uint64_t t5 = 1381643182LLU;

	t5 = ((x205&x206)+(x207>>x208));

	if (t5 != 10873194579175LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x233 = UINT8_MAX;
	uint32_t x236 = 3U;

	t6 = ((x233&x234)+(x235>>x236));

	if (t6 != 226) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 60243552328781856LLU;
	static int16_t x240 = 19;

	t7 = ((x237&x238)+(x239>>x240));

	if (t7 != 112757973522LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x314 = -1;
	int8_t x315 = INT8_MAX;
	volatile uint32_t t8 = 0U;

	t8 = ((x313&x314)+(x315>>x316));

	if (t8 != 62U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x357 = 13U;
	static int16_t x359 = 3;
	uint8_t x360 = 1U;
	int32_t t9 = 511562;

	t9 = ((x357&x358)+(x359>>x360));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x505 = -4015;
	uint16_t x507 = 12U;
	uint8_t x508 = 3U;
	volatile uint32_t t10 = 126727680U;

	t10 = ((x505&x506)+(x507>>x508));

	if (t10 != 17U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x661 = INT64_MIN;
	static int64_t x662 = -1LL;
	int16_t x663 = INT16_MAX;
	uint8_t x664 = 17U;

	t11 = ((x661&x662)+(x663>>x664));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x689 = -1;
	int32_t x691 = 733449865;
	volatile uint8_t x692 = 2U;
	int32_t t12 = 4736;

	t12 = ((x689&x690)+(x691>>x692));

	if (t12 != -1964121182) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x757 = -9;
	volatile int16_t x759 = 1267;
	volatile int32_t t13 = -200675;

	t13 = ((x757&x758)+(x759>>x760));

	if (t13 != -30) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x761 = -9;
	volatile int64_t x762 = INT64_MIN;
	static uint64_t x763 = UINT64_MAX;
	int8_t x764 = 0;

	t14 = ((x761&x762)+(x763>>x764));

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x814 = 2051303712314LLU;
	static int16_t x815 = 1;
	uint8_t x816 = 5U;
	volatile uint64_t t15 = 26735009LLU;

	t15 = ((x813&x814)+(x815>>x816));

	if (t15 != 1123453928498LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x877 = 7U;
	static int64_t x878 = -1LL;
	uint8_t x879 = 99U;
	volatile uint16_t x880 = 1U;
	int64_t t16 = 11754671LL;

	t16 = ((x877&x878)+(x879>>x880));

	if (t16 != 56LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x986 = INT8_MIN;
	int8_t x987 = INT8_MAX;
	volatile int16_t x988 = 1;
	int32_t t17 = 168;

	t17 = ((x985&x986)+(x987>>x988));

	if (t17 != 63) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1093 = -18246361168508LL;
	int16_t x1094 = -2072;
	static volatile int64_t x1095 = 64LL;
	int64_t t18 = -138513614LL;

	t18 = ((x1093&x1094)+(x1095>>x1096));

	if (t18 != -18246361168448LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1129 = 1;
	uint64_t x1130 = UINT64_MAX;
	uint16_t x1131 = 417U;
	uint32_t x1132 = 25U;

	t19 = ((x1129&x1130)+(x1131>>x1132));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1137 = UINT16_MAX;
	static uint16_t x1140 = 3U;
	static volatile int64_t t20 = 49764488509187LL;

	t20 = ((x1137&x1138)+(x1139>>x1140));

	if (t20 != 1152921504606912383LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1307 = 0U;
	uint64_t t21 = 203861291671LLU;

	t21 = ((x1305&x1306)+(x1307>>x1308));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1309 = -2;
	static uint16_t x1311 = 62U;
	int16_t x1312 = 3;
	int32_t t22 = 3199;

	t22 = ((x1309&x1310)+(x1311>>x1312));

	if (t22 != 65541) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1397 = 70309890844497548LLU;
	int16_t x1398 = -1;
	volatile uint8_t x1399 = UINT8_MAX;
	int8_t x1400 = 0;
	static uint64_t t23 = 170278988351102LLU;

	t23 = ((x1397&x1398)+(x1399>>x1400));

	if (t23 != 70309890844497803LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1417 = -1LL;
	volatile int64_t x1418 = INT64_MAX;
	uint64_t x1419 = 5LLU;
	volatile uint64_t t24 = 156LLU;

	t24 = ((x1417&x1418)+(x1419>>x1420));

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1445 = INT64_MIN;
	uint64_t x1446 = 2982472867303LLU;
	uint64_t x1447 = 2LLU;
	volatile uint64_t t25 = 1002443547LLU;

	t25 = ((x1445&x1446)+(x1447>>x1448));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1457 = -1;
	int8_t x1458 = -1;
	volatile int32_t x1459 = INT32_MAX;
	volatile int16_t x1460 = 0;
	volatile int32_t t26 = 4;

	t26 = ((x1457&x1458)+(x1459>>x1460));

	if (t26 != 2147483646) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1510 = 11056;
	uint16_t x1511 = UINT16_MAX;

	t27 = ((x1509&x1510)+(x1511>>x1512));

	if (t27 != 13103) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1589 = 19678LLU;
	static uint32_t x1591 = UINT32_MAX;
	uint32_t x1592 = 6U;

	t28 = ((x1589&x1590)+(x1591>>x1592));

	if (t28 != 67128541LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1622 = INT16_MIN;
	int32_t x1624 = 0;
	volatile uint32_t t29 = 12565990U;

	t29 = ((x1621&x1622)+(x1623>>x1624));

	if (t29 != 32767U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1701 = INT16_MIN;
	int32_t x1702 = -1;
	int8_t x1704 = 2;
	int32_t t30 = -7818;

	t30 = ((x1701&x1702)+(x1703>>x1704));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1754 = 168828U;
	int16_t x1755 = 28;
	int8_t x1756 = 5;
	volatile uint32_t t31 = 1402608U;

	t31 = ((x1753&x1754)+(x1755>>x1756));

	if (t31 != 52U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1785 = INT8_MIN;
	static int32_t x1787 = 8120;
	uint8_t x1788 = 0U;
	int32_t t32 = 245304877;

	t32 = ((x1785&x1786)+(x1787>>x1788));

	if (t32 != -24648) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1801 = INT8_MIN;
	int64_t x1802 = INT64_MIN;
	volatile uint8_t x1803 = 125U;
	uint8_t x1804 = 22U;
	int64_t t33 = INT64_MIN;

	t33 = ((x1801&x1802)+(x1803>>x1804));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1985 = -1098148739LL;
	uint16_t x1986 = 865U;
	static int8_t x1987 = 1;
	int32_t x1988 = 6;
	int64_t t34 = -28260854306LL;

	t34 = ((x1985&x1986)+(x1987>>x1988));

	if (t34 != 97LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2077 = 5402443LLU;
	int64_t x2078 = INT64_MAX;
	int16_t x2079 = 2441;
	volatile int16_t x2080 = 0;
	volatile uint64_t t35 = 1LLU;

	t35 = ((x2077&x2078)+(x2079>>x2080));

	if (t35 != 5404884LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x2121 = -1;
	static int32_t x2122 = INT32_MIN;
	uint16_t x2123 = 7U;
	uint16_t x2124 = 0U;
	int32_t t36 = 12;

	t36 = ((x2121&x2122)+(x2123>>x2124));

	if (t36 != -2147483641) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2177 = 0;
	static uint32_t x2179 = 299U;
	int64_t x2180 = 1LL;
	static volatile uint64_t t37 = 14324892483LLU;

	t37 = ((x2177&x2178)+(x2179>>x2180));

	if (t37 != 149LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2190 = 44092450762572LLU;
	uint32_t x2191 = 1U;
	uint8_t x2192 = 28U;

	t38 = ((x2189&x2190)+(x2191>>x2192));

	if (t38 != 35287728996932LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x2230 = UINT16_MAX;
	uint16_t x2231 = UINT16_MAX;
	int32_t x2232 = 24;
	volatile int32_t t39 = 60;

	t39 = ((x2229&x2230)+(x2231>>x2232));

	if (t39 != 16) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2245 = -1;
	int32_t x2246 = INT32_MIN;
	uint64_t x2247 = 39677934LLU;
	static int16_t x2248 = 22;
	uint64_t t40 = 20321445LLU;

	t40 = ((x2245&x2246)+(x2247>>x2248));

	if (t40 != 18446744071562067977LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2265 = -18;
	volatile int32_t x2266 = -11455;
	int32_t x2267 = 27;
	uint16_t x2268 = 31U;

	t41 = ((x2265&x2266)+(x2267>>x2268));

	if (t41 != -11456) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2311 = 1U;
	int64_t x2312 = 0LL;
	volatile int64_t t42 = 1466000426170LL;

	t42 = ((x2309&x2310)+(x2311>>x2312));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2313 = INT64_MIN;
	static int32_t x2314 = -1;
	uint16_t x2315 = UINT16_MAX;
	static uint64_t x2316 = 25LLU;
	static int64_t t43 = INT64_MIN;

	t43 = ((x2313&x2314)+(x2315>>x2316));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2446 = INT16_MIN;
	uint16_t x2447 = 26U;
	int32_t x2448 = 6;
	uint32_t t44 = 76U;

	t44 = ((x2445&x2446)+(x2447>>x2448));

	if (t44 != 4294934528U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2469 = -3;
	volatile uint64_t t45 = 1997824956LLU;

	t45 = ((x2469&x2470)+(x2471>>x2472));

	if (t45 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x2489 = UINT8_MAX;
	uint32_t x2491 = 2U;
	uint8_t x2492 = 2U;

	t46 = ((x2489&x2490)+(x2491>>x2492));

	if (t46 != 255U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2601 = -1;
	static volatile uint8_t x2602 = 15U;
	uint16_t x2603 = 1U;
	static uint8_t x2604 = 0U;
	static volatile int32_t t47 = -7616284;

	t47 = ((x2601&x2602)+(x2603>>x2604));

	if (t47 != 16) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2605 = UINT64_MAX;
	int64_t x2607 = INT64_MAX;
	int16_t x2608 = 1;
	uint64_t t48 = 1283128LLU;

	t48 = ((x2605&x2606)+(x2607>>x2608));

	if (t48 != 13835058055282163711LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2634 = -3;
	int16_t x2636 = 22;
	static volatile int64_t t49 = -1LL;

	t49 = ((x2633&x2634)+(x2635>>x2636));

	if (t49 != -2147469015LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2654 = INT64_MIN;
	static volatile int32_t x2655 = INT32_MAX;
	int8_t x2656 = 3;
	int64_t t50 = 112037LL;

	t50 = ((x2653&x2654)+(x2655>>x2656));

	if (t50 != 268435455LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2701 = INT16_MIN;
	int64_t x2702 = 2166129305524771LL;
	static uint8_t x2703 = 4U;

	t51 = ((x2701&x2702)+(x2703>>x2704));

	if (t51 != 2166129305518081LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x2753 = -1;
	uint64_t x2754 = UINT64_MAX;
	uint16_t x2755 = 12313U;
	static uint16_t x2756 = 0U;
	uint64_t t52 = 2361041197513909LLU;

	t52 = ((x2753&x2754)+(x2755>>x2756));

	if (t52 != 12312LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x2813 = 1U;
	int64_t x2814 = 1LL;
	static int8_t x2816 = 0;

	t53 = ((x2813&x2814)+(x2815>>x2816));

	if (t53 != 27LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2909 = 72529308;
	uint8_t x2910 = UINT8_MAX;
	uint8_t x2912 = 45U;
	static int64_t t54 = -104270LL;

	t54 = ((x2909&x2910)+(x2911>>x2912));

	if (t54 != 262299LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2917 = -1;
	int8_t x2919 = 1;
	uint8_t x2920 = 0U;
	uint32_t t55 = 29646U;

	t55 = ((x2917&x2918)+(x2919>>x2920));

	if (t55 != 213719421U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x2937 = 478;
	static int64_t x2938 = -46172770724971930LL;
	uint16_t x2940 = 12U;

	t56 = ((x2937&x2938)+(x2939>>x2940));

	if (t56 != 1994515LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3005 = INT64_MIN;
	volatile uint32_t x3006 = UINT32_MAX;
	volatile uint16_t x3007 = 29U;
	volatile uint16_t x3008 = 4U;
	static volatile int64_t t57 = -1LL;

	t57 = ((x3005&x3006)+(x3007>>x3008));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x3225 = 38LL;
	uint64_t x3227 = 2694937588990216430LLU;
	uint64_t t58 = 455669LLU;

	t58 = ((x3225&x3226)+(x3227>>x3228));

	if (t58 != 321261595367LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x3237 = INT16_MAX;
	uint8_t x3240 = 0U;
	int32_t t59 = -14;

	t59 = ((x3237&x3238)+(x3239>>x3240));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3241 = INT64_MIN;
	int64_t x3242 = INT64_MIN;
	int64_t x3243 = 109384061263897821LL;
	static int32_t x3244 = 1;
	int64_t t60 = -640756457277LL;

	t60 = ((x3241&x3242)+(x3243>>x3244));

	if (t60 != -9168680006222826898LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x3265 = INT64_MIN;
	volatile int16_t x3266 = -1;
	uint8_t x3267 = 6U;
	volatile uint8_t x3268 = 31U;
	volatile int64_t t61 = INT64_MIN;

	t61 = ((x3265&x3266)+(x3267>>x3268));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x3277 = -1;
	int64_t x3279 = INT64_MAX;
	uint32_t x3280 = 1U;

	t62 = ((x3277&x3278)+(x3279>>x3280));

	if (t62 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3313 = INT8_MIN;
	static int64_t x3314 = INT64_MIN;
	uint16_t x3315 = 1639U;
	volatile uint8_t x3316 = 1U;
	volatile int64_t t63 = 23LL;

	t63 = ((x3313&x3314)+(x3315>>x3316));

	if (t63 != -9223372036854774989LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3441 = 2214695138790701LLU;
	static int32_t x3443 = INT32_MAX;
	uint8_t x3444 = 10U;
	volatile uint64_t t64 = 19LLU;

	t64 = ((x3441&x3442)+(x3443>>x3444));

	if (t64 != 3844640044LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x3489 = -1286;
	uint64_t x3491 = UINT64_MAX;
	uint16_t x3492 = 49U;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = ((x3489&x3490)+(x3491>>x3492));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x3493 = 13064419454718890LL;
	uint16_t x3494 = UINT16_MAX;
	uint8_t x3496 = 22U;
	volatile uint64_t t66 = 29912304893LLU;

	t66 = ((x3493&x3494)+(x3495>>x3496));

	if (t66 != 42281LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3577 = INT32_MIN;
	int16_t x3578 = INT16_MIN;
	static volatile int64_t x3579 = INT64_MAX;
	static int64_t t67 = -8222LL;

	t67 = ((x3577&x3578)+(x3579>>x3580));

	if (t67 != 4611686016279904255LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3661 = -1;
	static int8_t x3663 = 42;
	uint8_t x3664 = 0U;
	int32_t t68 = -1885358;

	t68 = ((x3661&x3662)+(x3663>>x3664));

	if (t68 != 47) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x3669 = INT32_MIN;
	uint8_t x3670 = UINT8_MAX;
	static uint16_t x3672 = 7U;
	uint32_t t69 = 5U;

	t69 = ((x3669&x3670)+(x3671>>x3672));

	if (t69 != 495U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3693 = -66106071742LL;
	int64_t x3694 = INT64_MAX;
	static int8_t x3695 = INT8_MAX;
	uint8_t x3696 = 3U;
	static int64_t t70 = 67012156LL;

	t70 = ((x3693&x3694)+(x3695>>x3696));

	if (t70 != 9223371970748704081LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3757 = 669923604513028175LLU;
	int8_t x3759 = 16;
	static uint16_t x3760 = 1U;
	static uint64_t t71 = 7416172639598329LLU;

	t71 = ((x3757&x3758)+(x3759>>x3760));

	if (t71 != 669923604512997384LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x3817 = 31;
	uint8_t x3820 = 47U;
	int64_t t72 = 1871951969LL;

	t72 = ((x3817&x3818)+(x3819>>x3820));

	if (t72 != 65566LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4051 = UINT8_MAX;
	uint64_t t73 = 173843335LLU;

	t73 = ((x4049&x4050)+(x4051>>x4052));

	if (t73 != 14986LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4069 = INT32_MIN;
	uint32_t x4070 = 2U;
	static uint8_t x4072 = 7U;

	t74 = ((x4069&x4070)+(x4071>>x4072));

	if (t74 != 17992U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4210 = 10U;
	uint8_t x4211 = UINT8_MAX;
	int8_t x4212 = 0;
	int32_t t75 = -1581049;

	t75 = ((x4209&x4210)+(x4211>>x4212));

	if (t75 != 263) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4225 = UINT16_MAX;
	int32_t x4226 = INT32_MIN;
	uint8_t x4227 = UINT8_MAX;
	int16_t x4228 = 1;
	int32_t t76 = -112;

	t76 = ((x4225&x4226)+(x4227>>x4228));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4229 = -1LL;
	int16_t x4230 = -1;
	volatile int16_t x4231 = 493;
	volatile int8_t x4232 = 1;
	volatile int64_t t77 = 576358819LL;

	t77 = ((x4229&x4230)+(x4231>>x4232));

	if (t77 != 245LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4241 = -11898;
	uint8_t x4242 = 7U;
	uint16_t x4244 = 6U;
	int32_t t78 = -9;

	t78 = ((x4241&x4242)+(x4243>>x4244));

	if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x4282 = INT8_MIN;
	uint64_t x4283 = 2LLU;
	static volatile uint16_t x4284 = 3U;
	static uint64_t t79 = 3LLU;

	t79 = ((x4281&x4282)+(x4283>>x4284));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x4433 = INT64_MIN;
	int32_t x4434 = INT32_MIN;
	uint8_t x4435 = UINT8_MAX;
	uint8_t x4436 = 10U;

	t80 = ((x4433&x4434)+(x4435>>x4436));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x4533 = 5;
	uint32_t x4534 = 710572807U;
	int8_t x4535 = INT8_MAX;
	int8_t x4536 = 3;

	t81 = ((x4533&x4534)+(x4535>>x4536));

	if (t81 != 20U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4546 = UINT64_MAX;
	uint32_t x4548 = 8U;
	volatile uint64_t t82 = 1830LLU;

	t82 = ((x4545&x4546)+(x4547>>x4548));

	if (t82 != 18446744073709551470LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x4601 = INT16_MAX;
	uint16_t x4604 = 7U;

	t83 = ((x4601&x4602)+(x4603>>x4604));

	if (t83 != 16552) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x4633 = 2235880602742LLU;
	uint32_t x4634 = 0U;
	int8_t x4635 = 3;
	uint32_t x4636 = 5U;

	t84 = ((x4633&x4634)+(x4635>>x4636));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4637 = INT16_MIN;
	uint8_t x4639 = UINT8_MAX;
	static volatile uint16_t x4640 = 1U;
	static volatile int32_t t85 = -31730;

	t85 = ((x4637&x4638)+(x4639>>x4640));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4661 = INT16_MIN;
	uint16_t x4662 = UINT16_MAX;
	uint8_t x4663 = 29U;
	uint8_t x4664 = 2U;
	volatile int32_t t86 = -1;

	t86 = ((x4661&x4662)+(x4663>>x4664));

	if (t86 != 32775) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4693 = 9824845;
	static int32_t x4694 = 64638228;
	uint32_t x4695 = 577395452U;
	volatile uint8_t x4696 = 23U;

	t87 = ((x4693&x4694)+(x4695>>x4696));

	if (t87 != 9455688U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4809 = INT8_MIN;
	static uint32_t x4811 = UINT32_MAX;
	int64_t x4812 = 1LL;
	volatile uint32_t t88 = 1U;

	t88 = ((x4809&x4810)+(x4811>>x4812));

	if (t88 != 2147483519U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4893 = 174454U;
	int8_t x4894 = INT8_MAX;
	uint32_t x4895 = UINT32_MAX;
	uint32_t t89 = 166773157U;

	t89 = ((x4893&x4894)+(x4895>>x4896));

	if (t89 != 117U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x4921 = 1;
	static volatile uint16_t x4922 = 1329U;
	uint64_t x4923 = 10195741775217080LLU;
	volatile uint64_t t90 = 3824413306853LLU;

	t90 = ((x4921&x4922)+(x4923>>x4924));

	if (t90 != 5097870887608541LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4973 = 13340;
	uint8_t x4975 = UINT8_MAX;
	int8_t x4976 = 3;
	volatile int32_t t91 = -1;

	t91 = ((x4973&x4974)+(x4975>>x4976));

	if (t91 != 13371) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t t92 = -8022358594566LL;

	t92 = ((x5005&x5006)+(x5007>>x5008));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x5045 = UINT32_MAX;
	int8_t x5046 = INT8_MIN;
	volatile uint16_t x5047 = UINT16_MAX;
	uint16_t x5048 = 4U;

	t93 = ((x5045&x5046)+(x5047>>x5048));

	if (t93 != 3967U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x5257 = 138U;
	int8_t x5260 = 1;
	static volatile int64_t t94 = 1LL;

	t94 = ((x5257&x5258)+(x5259>>x5260));

	if (t94 != 4611686018427387911LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x5277 = UINT8_MAX;
	int64_t x5278 = -1LL;
	uint64_t x5279 = 5193775602047745286LLU;
	uint32_t x5280 = 43U;
	static volatile uint64_t t95 = 105978199268938011LLU;

	t95 = ((x5277&x5278)+(x5279>>x5280));

	if (t95 != 590718LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5321 = -25;
	static int16_t x5322 = INT16_MIN;
	static uint8_t x5324 = 30U;
	volatile int32_t t96 = -283218908;

	t96 = ((x5321&x5322)+(x5323>>x5324));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5345 = 0;
	int16_t x5346 = 1576;
	volatile uint8_t x5347 = 112U;
	int64_t x5348 = 4LL;
	int32_t t97 = 205847;

	t97 = ((x5345&x5346)+(x5347>>x5348));

	if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x5401 = INT8_MAX;
	volatile uint64_t x5402 = UINT64_MAX;
	static volatile int32_t x5403 = 110;
	uint16_t x5404 = 14U;
	uint64_t t98 = 1043748416420LLU;

	t98 = ((x5401&x5402)+(x5403>>x5404));

	if (t98 != 127LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5439 = 1U;

	t99 = ((x5437&x5438)+(x5439>>x5440));

	if (t99 != 0) { NG(); } else { ; }
	
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

