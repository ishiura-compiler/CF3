#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x361 = 70LLU;
static volatile uint32_t x362 = UINT32_MAX;
volatile uint8_t x439 = 5U;
static volatile uint64_t t2 = 3862937348251LLU;
volatile int8_t x527 = 1;
static volatile uint32_t x528 = 1656970U;
uint32_t t3 = 2U;
uint64_t x562 = UINT64_MAX;
int8_t x600 = -1;
volatile int64_t t5 = 63775819792056049LL;
uint8_t x667 = 2U;
volatile int32_t x705 = 445660865;
int32_t x707 = 0;
uint64_t t7 = 64585128LLU;
int64_t x736 = 0LL;
int64_t x864 = INT64_MIN;
volatile uint32_t t11 = 120893516U;
int16_t x1023 = 1;
static int16_t x1024 = -1;
int64_t x1072 = 18710909991797230LL;
static uint64_t x1158 = UINT64_MAX;
uint64_t t16 = 8884022985LLU;
static int8_t x1364 = INT8_MIN;
int16_t x1517 = INT16_MIN;
uint8_t x1518 = 113U;
uint32_t x1519 = 7U;
uint64_t t21 = 205547LLU;
int64_t t22 = -1LL;
int8_t x1755 = 17;
volatile uint64_t t25 = 261609LLU;
volatile int8_t x1798 = INT8_MAX;
uint32_t t29 = 223780U;
volatile int32_t t30 = 178518475;
int64_t x1810 = 558387LL;
int64_t x1909 = INT64_MIN;
static volatile int64_t x1913 = -4107644573053542LL;
uint8_t x1914 = 5U;
uint8_t x2034 = 114U;
volatile int8_t x2128 = 0;
int64_t x2216 = 2LL;
int32_t x2403 = 0;
volatile int32_t x2405 = INT32_MIN;
volatile uint64_t t39 = 2LLU;
static int16_t x2452 = INT16_MIN;
int32_t t40 = -228339733;
int16_t x2492 = INT16_MIN;
int16_t x2509 = -1;
volatile uint64_t t42 = 8833061207896632LLU;
static int16_t x2533 = INT16_MIN;
static int32_t x2596 = INT32_MAX;
static int8_t x3292 = -23;
int32_t x3328 = 1184790;
volatile uint64_t t49 = 666559LLU;
static int32_t x3436 = -1;
static uint16_t x3480 = 412U;
uint32_t x3642 = 258167U;
int32_t x3837 = -1;
int32_t x3993 = INT32_MIN;
uint32_t x3994 = 0U;
static int16_t x4176 = -1;
int16_t x4234 = INT16_MAX;
volatile int32_t t60 = -1041735109;
int64_t t61 = -270796780674LL;
volatile int64_t x4532 = INT64_MIN;
uint16_t x4567 = 3U;
uint8_t x4568 = UINT8_MAX;
static uint64_t x4680 = 100LLU;
static uint32_t x4681 = UINT32_MAX;
volatile int32_t x4800 = INT32_MAX;
volatile uint32_t x4833 = 6554U;
uint64_t x4834 = UINT64_MAX;
uint64_t t70 = 10634309LLU;
volatile int32_t t72 = 13;
uint8_t x5002 = 0U;
static volatile int32_t t73 = -1;
uint32_t t75 = 307U;
int16_t x5445 = -1;
static uint16_t x5778 = 5428U;
volatile uint32_t t79 = 328335191U;
int32_t t80 = -231446;
int64_t x6005 = INT64_MIN;
int32_t x6008 = INT32_MIN;
uint64_t t83 = 521103740LLU;
int64_t x6029 = -1LL;
uint32_t x6031 = 31U;
volatile int64_t t84 = 557685388LL;
int32_t x6352 = 110914500;
uint8_t x6427 = 0U;
int64_t t87 = -174656LL;
int32_t x6461 = 5;
static volatile int64_t x6482 = 166116300LL;
volatile int64_t t89 = -43682973434011LL;
uint32_t x6634 = UINT32_MAX;
static uint8_t x6669 = 110U;
static uint64_t x6724 = 1LLU;
volatile uint32_t x6750 = UINT32_MAX;
static volatile uint8_t x6751 = 3U;
uint8_t x6752 = UINT8_MAX;
volatile uint64_t x6785 = 540LLU;
static volatile uint64_t t96 = 712960899172LLU;
int8_t x6797 = INT8_MAX;
int8_t x6815 = 2;
int16_t x6821 = INT16_MIN;
volatile int16_t x6822 = 2;


void f0(void) {
	uint8_t x363 = 2U;
	volatile uint16_t x364 = 4675U;
	volatile uint64_t t0 = 118685756LLU;

	t0 = (x361-((x362>>x363)+x364));

	if (t0 != 18446744072635805188LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x437 = -1;
	uint32_t x438 = 75639U;
	volatile int64_t x440 = INT64_MIN;
	int64_t t1 = -4LL;

	t1 = (x437-((x438>>x439)+x440));

	if (t1 != 9223372036854773444LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x501 = 9;
	uint64_t x502 = UINT64_MAX;
	volatile uint8_t x503 = 1U;
	int16_t x504 = -1;

	t2 = (x501-((x502>>x503)+x504));

	if (t2 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x525 = INT32_MIN;
	uint16_t x526 = UINT16_MAX;

	t3 = (x525-((x526>>x527)+x528));

	if (t3 != 2145793911U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x561 = 1984772940880547318LL;
	uint8_t x563 = 0U;
	int16_t x564 = INT16_MIN;
	volatile uint64_t t4 = 1641186644678599599LLU;

	t4 = (x561-((x562>>x563)+x564));

	if (t4 != 1984772940880580087LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x597 = -14625LL;
	int16_t x598 = 8;
	uint8_t x599 = 1U;

	t5 = (x597-((x598>>x599)+x600));

	if (t5 != -14628LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x665 = 12696431259315985LLU;
	uint8_t x666 = 22U;
	int64_t x668 = 94LL;
	volatile uint64_t t6 = 487873046231LLU;

	t6 = (x665-((x666>>x667)+x668));

	if (t6 != 12696431259315886LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x706 = UINT64_MAX;
	volatile uint8_t x708 = 1U;

	t7 = (x705-((x706>>x707)+x708));

	if (t7 != 445660865LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x733 = 53LLU;
	int32_t x734 = INT32_MAX;
	int8_t x735 = 29;
	volatile uint64_t t8 = 385458798LLU;

	t8 = (x733-((x734>>x735)+x736));

	if (t8 != 50LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x841 = INT8_MAX;
	uint64_t x842 = 14302838672LLU;
	static uint16_t x843 = 5U;
	uint64_t x844 = UINT64_MAX;
	uint64_t t9 = 332599016LLU;

	t9 = (x841-((x842>>x843)+x844));

	if (t9 != 18446744073262588036LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x861 = -1;
	uint64_t x862 = UINT64_MAX;
	uint16_t x863 = 2U;
	volatile uint64_t t10 = 182231757831631963LLU;

	t10 = (x861-((x862>>x863)+x864));

	if (t10 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x945 = INT8_MIN;
	uint32_t x946 = 7146210U;
	uint8_t x947 = 3U;
	int32_t x948 = -1;

	t11 = (x945-((x946>>x947)+x948));

	if (t11 != 4294073893U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1021 = 20U;
	volatile int8_t x1022 = INT8_MAX;
	int32_t t12 = -395;

	t12 = (x1021-((x1022>>x1023)+x1024));

	if (t12 != -42) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x1069 = 2498560377830217326LLU;
	int64_t x1070 = 10341891834LL;
	static int64_t x1071 = 13LL;
	volatile uint64_t t13 = 458614251126467LLU;

	t13 = (x1069-((x1070>>x1071)+x1072));

	if (t13 != 2479849467837157659LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x1101 = INT64_MIN;
	int8_t x1102 = 7;
	uint16_t x1103 = 5U;
	int16_t x1104 = -1356;
	int64_t t14 = -10014265LL;

	t14 = (x1101-((x1102>>x1103)+x1104));

	if (t14 != -9223372036854774452LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1117 = 8910LL;
	uint16_t x1118 = 219U;
	uint16_t x1119 = 0U;
	volatile uint8_t x1120 = UINT8_MAX;
	static volatile int64_t t15 = 42933349LL;

	t15 = (x1117-((x1118>>x1119)+x1120));

	if (t15 != 8436LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1157 = INT16_MAX;
	volatile int64_t x1159 = 0LL;
	int8_t x1160 = INT8_MIN;

	t16 = (x1157-((x1158>>x1159)+x1160));

	if (t16 != 32896LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1261 = 0;
	volatile int32_t x1262 = INT32_MAX;
	uint8_t x1263 = 25U;
	int16_t x1264 = -49;
	int32_t t17 = -6;

	t17 = (x1261-((x1262>>x1263)+x1264));

	if (t17 != -14) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1361 = 63079982U;
	int32_t x1362 = INT32_MAX;
	uint32_t x1363 = 3U;
	uint32_t t18 = 324846U;

	t18 = (x1361-((x1362>>x1363)+x1364));

	if (t18 != 4089611951U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1421 = INT8_MIN;
	volatile uint16_t x1422 = 1U;
	uint8_t x1423 = 0U;
	uint64_t x1424 = 14805967723LLU;
	volatile uint64_t t19 = 174647415956093LLU;

	t19 = (x1421-((x1422>>x1423)+x1424));

	if (t19 != 18446744058903583764LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1441 = INT64_MIN;
	int16_t x1442 = INT16_MAX;
	int8_t x1443 = 1;
	static int16_t x1444 = INT16_MIN;
	volatile int64_t t20 = 122808786LL;

	t20 = (x1441-((x1442>>x1443)+x1444));

	if (t20 != -9223372036854759423LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1520 = 11640LLU;

	t21 = (x1517-((x1518>>x1519)+x1520));

	if (t21 != 18446744073709507208LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1525 = INT16_MAX;
	int32_t x1526 = 28665647;
	uint32_t x1527 = 3U;
	int64_t x1528 = 125503032190LL;

	t22 = (x1525-((x1526>>x1527)+x1528));

	if (t22 != -125506582628LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1533 = -1;
	int8_t x1534 = INT8_MAX;
	int64_t x1535 = 8LL;
	uint64_t x1536 = 192960926LLU;
	volatile uint64_t t23 = 3086LLU;

	t23 = (x1533-((x1534>>x1535)+x1536));

	if (t23 != 18446744073516590689LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1621 = 2U;
	static int64_t x1622 = 425323232LL;
	volatile uint16_t x1623 = 0U;
	int8_t x1624 = -1;
	int64_t t24 = -7725406550805LL;

	t24 = (x1621-((x1622>>x1623)+x1624));

	if (t24 != -425323229LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1753 = INT32_MIN;
	uint64_t x1754 = 8448524906LLU;
	uint16_t x1756 = 3088U;

	t25 = (x1753-((x1754>>x1755)+x1756));

	if (t25 != 18446744071562000423LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1761 = INT8_MAX;
	int8_t x1762 = 16;
	int8_t x1763 = 8;
	uint32_t x1764 = 753007U;
	uint32_t t26 = 55U;

	t26 = (x1761-((x1762>>x1763)+x1764));

	if (t26 != 4294214416U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1777 = 4464902U;
	int32_t x1778 = INT32_MAX;
	uint8_t x1779 = 22U;
	int64_t x1780 = 15742523914330LL;
	volatile int64_t t27 = 90564260604650879LL;

	t27 = (x1777-((x1778>>x1779)+x1780));

	if (t27 != -15742519449939LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1785 = INT8_MIN;
	volatile uint32_t x1786 = 278276448U;
	static uint8_t x1787 = 1U;
	volatile uint32_t x1788 = 198U;
	static uint32_t t28 = 2U;

	t28 = (x1785-((x1786>>x1787)+x1788));

	if (t28 != 4155828746U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1797 = 1U;
	uint8_t x1799 = 0U;
	volatile uint16_t x1800 = UINT16_MAX;

	t29 = (x1797-((x1798>>x1799)+x1800));

	if (t29 != 4294901635U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1805 = INT8_MAX;
	static volatile uint8_t x1806 = 2U;
	uint16_t x1807 = 18U;
	int8_t x1808 = INT8_MAX;

	t30 = (x1805-((x1806>>x1807)+x1808));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1809 = 982927663365559LL;
	uint64_t x1811 = 2LLU;
	volatile uint8_t x1812 = UINT8_MAX;
	int64_t t31 = -254575438258LL;

	t31 = (x1809-((x1810>>x1811)+x1812));

	if (t31 != 982927663225708LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1910 = 6547;
	int8_t x1911 = 5;
	int16_t x1912 = INT16_MIN;
	static volatile int64_t t32 = -3LL;

	t32 = (x1909-((x1910>>x1911)+x1912));

	if (t32 != -9223372036854743244LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x1915 = 12U;
	int32_t x1916 = -51352;
	int64_t t33 = -287657251433807487LL;

	t33 = (x1913-((x1914>>x1915)+x1916));

	if (t33 != -4107644573002190LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2033 = -35312148421994906LL;
	volatile int8_t x2035 = 1;
	uint8_t x2036 = 3U;
	volatile int64_t t34 = -19400098576315LL;

	t34 = (x2033-((x2034>>x2035)+x2036));

	if (t34 != -35312148421994966LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2125 = 180083LLU;
	static volatile int32_t x2126 = INT32_MAX;
	volatile int8_t x2127 = 20;
	uint64_t t35 = 2717208899487582LLU;

	t35 = (x2125-((x2126>>x2127)+x2128));

	if (t35 != 178036LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2213 = INT8_MIN;
	int8_t x2214 = INT8_MAX;
	volatile int32_t x2215 = 1;
	int64_t t36 = -238411LL;

	t36 = (x2213-((x2214>>x2215)+x2216));

	if (t36 != -193LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2333 = -1;
	uint8_t x2334 = 13U;
	volatile uint64_t x2335 = 3LLU;
	static volatile int32_t x2336 = -1;
	int32_t t37 = -4;

	t37 = (x2333-((x2334>>x2335)+x2336));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x2401 = 8142U;
	uint64_t x2402 = UINT64_MAX;
	int16_t x2404 = INT16_MIN;
	uint64_t t38 = 2LLU;

	t38 = (x2401-((x2402>>x2403)+x2404));

	if (t38 != 40911LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2406 = 4U;
	int8_t x2407 = 12;
	static uint64_t x2408 = UINT64_MAX;

	t39 = (x2405-((x2406>>x2407)+x2408));

	if (t39 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2449 = UINT8_MAX;
	uint8_t x2450 = UINT8_MAX;
	volatile uint8_t x2451 = 7U;

	t40 = (x2449-((x2450>>x2451)+x2452));

	if (t40 != 33022) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2489 = INT32_MIN;
	uint16_t x2490 = 2035U;
	static volatile int16_t x2491 = 5;
	volatile int32_t t41 = 81;

	t41 = (x2489-((x2490>>x2491)+x2492));

	if (t41 != -2147450943) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2510 = 636204077LLU;
	uint8_t x2511 = 0U;
	int16_t x2512 = -7;

	t42 = (x2509-((x2510>>x2511)+x2512));

	if (t42 != 18446744073073347545LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2534 = 150987261974007LL;
	static uint8_t x2535 = 21U;
	int32_t x2536 = INT32_MIN;
	volatile int64_t t43 = 1535100799171LL;

	t43 = (x2533-((x2534>>x2535)+x2536));

	if (t43 != 2075454544LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2593 = -1LL;
	uint8_t x2594 = 0U;
	uint16_t x2595 = 6U;
	int64_t t44 = 1998763018484965844LL;

	t44 = (x2593-((x2594>>x2595)+x2596));

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x2957 = -1;
	uint16_t x2958 = 4185U;
	uint8_t x2959 = 7U;
	int16_t x2960 = INT16_MAX;
	int32_t t45 = 643570485;

	t45 = (x2957-((x2958>>x2959)+x2960));

	if (t45 != -32800) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3137 = 39;
	uint32_t x3138 = 69148701U;
	int32_t x3139 = 3;
	volatile int8_t x3140 = INT8_MAX;
	uint32_t t46 = 1U;

	t46 = (x3137-((x3138>>x3139)+x3140));

	if (t46 != 4286323621U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3289 = UINT32_MAX;
	int16_t x3290 = 250;
	volatile uint32_t x3291 = 0U;
	uint32_t t47 = 31091U;

	t47 = (x3289-((x3290>>x3291)+x3292));

	if (t47 != 4294967068U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3325 = INT16_MAX;
	uint32_t x3326 = 924466U;
	static volatile uint16_t x3327 = 0U;
	uint32_t t48 = 5214634U;

	t48 = (x3325-((x3326>>x3327)+x3328));

	if (t48 != 4292890807U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3341 = INT16_MAX;
	uint64_t x3342 = 850715923814LLU;
	int32_t x3343 = 5;
	uint32_t x3344 = UINT32_MAX;

	t49 = (x3341-((x3342>>x3343)+x3344));

	if (t49 != 18446744042829744469LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3433 = 212U;
	uint8_t x3434 = UINT8_MAX;
	uint16_t x3435 = 30U;
	static volatile int32_t t50 = 425955;

	t50 = (x3433-((x3434>>x3435)+x3436));

	if (t50 != 213) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3477 = 5;
	int32_t x3478 = INT32_MAX;
	static uint8_t x3479 = 20U;
	int32_t t51 = -1278;

	t51 = (x3477-((x3478>>x3479)+x3480));

	if (t51 != -2454) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3497 = INT32_MIN;
	uint64_t x3498 = UINT64_MAX;
	int16_t x3499 = 1;
	int16_t x3500 = -113;
	volatile uint64_t t52 = 64LLU;

	t52 = (x3497-((x3498>>x3499)+x3500));

	if (t52 != 9223372034707292274LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3553 = 320448U;
	static int8_t x3554 = 2;
	uint8_t x3555 = 24U;
	volatile uint64_t x3556 = UINT64_MAX;
	uint64_t t53 = 6076128475648LLU;

	t53 = (x3553-((x3554>>x3555)+x3556));

	if (t53 != 320449LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3641 = 1;
	uint16_t x3643 = 31U;
	volatile uint32_t x3644 = 777U;
	volatile uint32_t t54 = 117769U;

	t54 = (x3641-((x3642>>x3643)+x3644));

	if (t54 != 4294966520U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3838 = UINT16_MAX;
	uint8_t x3839 = 27U;
	int64_t x3840 = INT64_MIN;
	static volatile int64_t t55 = INT64_MAX;

	t55 = (x3837-((x3838>>x3839)+x3840));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x3853 = INT16_MIN;
	static uint8_t x3854 = 9U;
	volatile int32_t x3855 = 17;
	static volatile int8_t x3856 = INT8_MIN;
	volatile int32_t t56 = -3652388;

	t56 = (x3853-((x3854>>x3855)+x3856));

	if (t56 != -32640) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3995 = 0;
	int32_t x3996 = INT32_MIN;
	uint32_t t57 = 99U;

	t57 = (x3993-((x3994>>x3995)+x3996));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x4173 = 16204U;
	volatile int16_t x4174 = 3185;
	int16_t x4175 = 20;
	int32_t t58 = -199919592;

	t58 = (x4173-((x4174>>x4175)+x4176));

	if (t58 != 16205) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4233 = -1LL;
	int8_t x4235 = 1;
	static int8_t x4236 = INT8_MAX;
	volatile int64_t t59 = 104443402LL;

	t59 = (x4233-((x4234>>x4235)+x4236));

	if (t59 != -16511LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x4241 = INT32_MAX;
	static int32_t x4242 = INT32_MAX;
	static uint16_t x4243 = 6U;
	volatile int8_t x4244 = INT8_MIN;

	t60 = (x4241-((x4242>>x4243)+x4244));

	if (t60 != 2113929344) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4289 = UINT16_MAX;
	uint32_t x4290 = 113621410U;
	volatile uint8_t x4291 = 0U;
	int64_t x4292 = -1LL;

	t61 = (x4289-((x4290>>x4291)+x4292));

	if (t61 != -113555874LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4389 = 5U;
	uint8_t x4390 = 25U;
	uint16_t x4391 = 11U;
	int8_t x4392 = INT8_MAX;
	volatile int32_t t62 = 58461028;

	t62 = (x4389-((x4390>>x4391)+x4392));

	if (t62 != -122) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4529 = -1;
	volatile int16_t x4530 = 0;
	static int8_t x4531 = 0;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x4529-((x4530>>x4531)+x4532));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x4565 = INT8_MAX;
	int16_t x4566 = INT16_MAX;
	int32_t t64 = 202296704;

	t64 = (x4565-((x4566>>x4567)+x4568));

	if (t64 != -4223) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4649 = -1;
	int16_t x4650 = INT16_MAX;
	int8_t x4651 = 0;
	static volatile int8_t x4652 = INT8_MIN;
	volatile int32_t t65 = 916471;

	t65 = (x4649-((x4650>>x4651)+x4652));

	if (t65 != -32640) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4677 = -50598LL;
	static uint16_t x4678 = 1474U;
	uint8_t x4679 = 12U;
	uint64_t t66 = 70417123LLU;

	t66 = (x4677-((x4678>>x4679)+x4680));

	if (t66 != 18446744073709500918LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4682 = INT8_MAX;
	volatile uint8_t x4683 = 28U;
	volatile uint16_t x4684 = UINT16_MAX;
	volatile uint32_t t67 = 15579U;

	t67 = (x4681-((x4682>>x4683)+x4684));

	if (t67 != 4294901760U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4737 = INT8_MIN;
	volatile uint64_t x4738 = UINT64_MAX;
	int8_t x4739 = 7;
	uint32_t x4740 = 2U;
	uint64_t t68 = 7853158455267350LLU;

	t68 = (x4737-((x4738>>x4739)+x4740));

	if (t68 != 18302628885633695615LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4797 = -1;
	uint64_t x4798 = UINT64_MAX;
	int8_t x4799 = 9;
	volatile uint64_t t69 = 60946350774LLU;

	t69 = (x4797-((x4798>>x4799)+x4800));

	if (t69 != 18410715274543104001LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x4835 = 0;
	int64_t x4836 = -1LL;

	t70 = (x4833-((x4834>>x4835)+x4836));

	if (t70 != 6556LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4921 = INT16_MIN;
	static int16_t x4922 = 6;
	static volatile uint16_t x4923 = 31U;
	int8_t x4924 = INT8_MIN;
	volatile int32_t t71 = -128831;

	t71 = (x4921-((x4922>>x4923)+x4924));

	if (t71 != -32640) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4965 = INT16_MIN;
	volatile uint16_t x4966 = 0U;
	int16_t x4967 = 7;
	int16_t x4968 = 0;

	t72 = (x4965-((x4966>>x4967)+x4968));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5001 = INT8_MIN;
	int32_t x5003 = 28;
	uint16_t x5004 = UINT16_MAX;

	t73 = (x5001-((x5002>>x5003)+x5004));

	if (t73 != -65663) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x5013 = UINT64_MAX;
	uint16_t x5014 = UINT16_MAX;
	int8_t x5015 = 11;
	volatile uint8_t x5016 = 14U;
	static uint64_t t74 = 1LLU;

	t74 = (x5013-((x5014>>x5015)+x5016));

	if (t74 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x5185 = 44;
	volatile uint32_t x5186 = 2U;
	uint16_t x5187 = 0U;
	static volatile uint16_t x5188 = 8U;

	t75 = (x5185-((x5186>>x5187)+x5188));

	if (t75 != 34U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x5446 = UINT64_MAX;
	static int8_t x5447 = 0;
	int8_t x5448 = INT8_MIN;
	volatile uint64_t t76 = 5554867232349LLU;

	t76 = (x5445-((x5446>>x5447)+x5448));

	if (t76 != 128LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5521 = -1;
	static uint8_t x5522 = 0U;
	uint8_t x5523 = 0U;
	volatile uint32_t x5524 = 1780U;
	uint32_t t77 = 29U;

	t77 = (x5521-((x5522>>x5523)+x5524));

	if (t77 != 4294965515U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x5633 = INT16_MAX;
	uint32_t x5634 = 0U;
	int8_t x5635 = 0;
	uint8_t x5636 = UINT8_MAX;
	volatile uint32_t t78 = 1U;

	t78 = (x5633-((x5634>>x5635)+x5636));

	if (t78 != 32512U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5777 = 60283U;
	int8_t x5779 = 0;
	uint8_t x5780 = UINT8_MAX;

	t79 = (x5777-((x5778>>x5779)+x5780));

	if (t79 != 54600U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x5817 = -149932;
	static int8_t x5818 = INT8_MAX;
	int8_t x5819 = 1;
	int16_t x5820 = INT16_MIN;

	t80 = (x5817-((x5818>>x5819)+x5820));

	if (t80 != -117227) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x5829 = INT16_MIN;
	uint32_t x5830 = 30U;
	int32_t x5831 = 0;
	uint8_t x5832 = 1U;
	volatile uint32_t t81 = 185834551U;

	t81 = (x5829-((x5830>>x5831)+x5832));

	if (t81 != 4294934497U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x5833 = 7;
	int8_t x5834 = 2;
	uint16_t x5835 = 3U;
	volatile int8_t x5836 = -1;
	static int32_t t82 = 7147;

	t82 = (x5833-((x5834>>x5835)+x5836));

	if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x6006 = 2024011LLU;
	int32_t x6007 = 60;

	t83 = (x6005-((x6006>>x6007)+x6008));

	if (t83 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x6030 = UINT32_MAX;
	int64_t x6032 = -28278385805500949LL;

	t84 = (x6029-((x6030>>x6031)+x6032));

	if (t84 != 28278385805500947LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x6249 = INT8_MIN;
	int16_t x6250 = INT16_MAX;
	static uint16_t x6251 = 0U;
	uint8_t x6252 = UINT8_MAX;
	volatile int32_t t85 = -39718590;

	t85 = (x6249-((x6250>>x6251)+x6252));

	if (t85 != -33150) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x6349 = INT64_MAX;
	int16_t x6350 = 12016;
	uint8_t x6351 = 3U;
	volatile int64_t t86 = 1239030742413LL;

	t86 = (x6349-((x6350>>x6351)+x6352));

	if (t86 != 9223372036743859805LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x6425 = 3619U;
	static uint32_t x6426 = 3U;
	int64_t x6428 = -1LL;

	t87 = (x6425-((x6426>>x6427)+x6428));

	if (t87 != 3617LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x6462 = UINT8_MAX;
	static volatile uint8_t x6463 = 1U;
	static uint64_t x6464 = 2759127236LLU;
	static volatile uint64_t t88 = 8075027795847658753LLU;

	t88 = (x6461-((x6462>>x6463)+x6464));

	if (t88 != 18446744070950424258LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6481 = INT16_MAX;
	int8_t x6483 = 17;
	int32_t x6484 = INT32_MAX;

	t89 = (x6481-((x6482>>x6483)+x6484));

	if (t89 != -2147452147LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x6549 = INT32_MIN;
	int16_t x6550 = INT16_MAX;
	static uint8_t x6551 = 13U;
	volatile uint64_t x6552 = UINT64_MAX;
	uint64_t t90 = 14185678LLU;

	t90 = (x6549-((x6550>>x6551)+x6552));

	if (t90 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x6633 = INT16_MIN;
	int8_t x6635 = 12;
	int8_t x6636 = -1;
	uint32_t t91 = 5U;

	t91 = (x6633-((x6634>>x6635)+x6636));

	if (t91 != 4293885954U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x6670 = 19U;
	static int8_t x6671 = 1;
	uint32_t x6672 = UINT32_MAX;
	uint32_t t92 = 109U;

	t92 = (x6669-((x6670>>x6671)+x6672));

	if (t92 != 102U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x6681 = UINT8_MAX;
	uint32_t x6682 = 11U;
	volatile uint16_t x6683 = 30U;
	int32_t x6684 = -1;
	static volatile uint32_t t93 = 124U;

	t93 = (x6681-((x6682>>x6683)+x6684));

	if (t93 != 256U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6721 = INT64_MAX;
	volatile uint64_t x6722 = 136909330707996468LLU;
	static volatile int8_t x6723 = 0;
	volatile uint64_t t94 = 824536LLU;

	t94 = (x6721-((x6722>>x6723)+x6724));

	if (t94 != 9086462706146779338LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6749 = INT32_MAX;
	volatile uint32_t t95 = 3U;

	t95 = (x6749-((x6750>>x6751)+x6752));

	if (t95 != 1610612481U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6786 = INT32_MAX;
	uint8_t x6787 = 1U;
	uint8_t x6788 = UINT8_MAX;

	t96 = (x6785-((x6786>>x6787)+x6788));

	if (t96 != 18446744072635810078LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x6798 = UINT16_MAX;
	uint16_t x6799 = 6U;
	uint64_t x6800 = UINT64_MAX;
	volatile uint64_t t97 = 2711993738686487LLU;

	t97 = (x6797-((x6798>>x6799)+x6800));

	if (t97 != 18446744073709550721LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x6813 = -238;
	uint32_t x6814 = UINT32_MAX;
	int64_t x6816 = -1373320604LL;
	int64_t t98 = 8729573492126LL;

	t98 = (x6813-((x6814>>x6815)+x6816));

	if (t98 != 299578543LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6823 = 0;
	static int32_t x6824 = -12792201;
	int32_t t99 = 0;

	t99 = (x6821-((x6822>>x6823)+x6824));

	if (t99 != 12759431) { NG(); } else { ; }
	
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

