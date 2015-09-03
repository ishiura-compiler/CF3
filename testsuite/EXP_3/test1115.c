#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x244 = 1;
uint32_t x389 = 41890U;
static uint16_t x482 = 5266U;
int32_t t7 = -121;
int64_t x490 = -896836556543393318LL;
static uint32_t x492 = 1U;
volatile int32_t t8 = -393;
int32_t t9 = -409;
int8_t x673 = 4;
static int32_t t10 = 3;
uint8_t x712 = 24U;
int32_t x777 = INT32_MIN;
uint8_t x779 = UINT8_MAX;
int8_t x813 = 1;
static int8_t x815 = INT8_MAX;
uint32_t x871 = 23082527U;
static volatile int32_t t17 = 31919;
static uint8_t x887 = UINT8_MAX;
volatile int16_t x991 = INT16_MAX;
int64_t x1006 = INT64_MAX;
uint32_t x1008 = 14U;
static int8_t x1013 = -30;
static uint16_t x1064 = 6U;
volatile int32_t x1105 = -1;
int16_t x1418 = INT16_MAX;
uint16_t x1420 = 29U;
static int32_t t26 = 33;
static int32_t x1425 = INT32_MIN;
uint32_t x1428 = 0U;
volatile int16_t x1437 = -1;
volatile uint8_t x1493 = UINT8_MAX;
int64_t x1494 = INT64_MIN;
int16_t x1495 = INT16_MAX;
int64_t x1561 = INT64_MIN;
volatile uint64_t x1563 = UINT64_MAX;
static volatile int16_t x1564 = 0;
uint16_t x1593 = 22U;
uint8_t x1648 = 18U;
static volatile int32_t t35 = -40;
volatile uint8_t x1756 = 0U;
uint16_t x1794 = UINT16_MAX;
uint32_t x1891 = 10311U;
int8_t x1892 = 6;
static volatile int64_t x1963 = INT64_MAX;
static uint32_t x2038 = UINT32_MAX;
volatile int32_t t41 = -651;
int16_t x2097 = INT16_MAX;
int8_t x2126 = INT8_MIN;
int32_t t44 = -1;
volatile int16_t x2274 = 1;
int8_t x2275 = 1;
int8_t x2276 = 0;
uint64_t x2395 = UINT64_MAX;
volatile int32_t t46 = -44399;
int16_t x2466 = -1;
int8_t x2583 = 30;
int32_t t50 = 461020;
uint16_t x2715 = UINT16_MAX;
volatile int32_t t51 = 15237241;
int8_t x2746 = 26;
static int32_t t52 = -43058;
int16_t x2853 = -457;
uint8_t x2856 = 20U;
int32_t x2922 = INT32_MAX;
volatile int32_t t55 = -135713724;
uint32_t x2989 = 658U;
uint16_t x3015 = 4U;
uint32_t x3172 = 2U;
int32_t x3381 = 343497;
int32_t x3461 = INT32_MAX;
volatile int32_t t63 = -22650817;
volatile int8_t x3506 = -20;
int64_t x3575 = INT64_MAX;
volatile int32_t t65 = 218880080;
int8_t x3673 = -1;
static uint64_t x3874 = 3LLU;
int8_t x3875 = INT8_MAX;
int32_t t67 = -232;
int16_t x4249 = INT16_MIN;
uint64_t x4251 = 3LLU;
volatile uint8_t x4260 = 5U;
uint64_t x4293 = 2267249LLU;
uint16_t x4295 = UINT16_MAX;
int8_t x4325 = INT8_MIN;
int64_t x4326 = -2105276LL;
uint16_t x4328 = 8U;
uint16_t x4350 = UINT16_MAX;
static uint64_t x4352 = 3LLU;
int32_t t76 = -21197264;
uint16_t x4368 = 2U;
uint16_t x4439 = UINT16_MAX;
int32_t t80 = 1843;
int32_t t83 = -112;
volatile int16_t x4730 = 3561;
static int32_t x4933 = 0;
uint8_t x4936 = 17U;
int32_t t92 = 188462448;
volatile int32_t t93 = 2433842;
int16_t x5518 = INT16_MIN;
static uint16_t x5794 = 1U;
static int32_t t97 = -13153;
static volatile uint8_t x5836 = 0U;
volatile int32_t t98 = 12643663;
volatile int16_t x6058 = INT16_MIN;
int16_t x6060 = 0;


void f0(void) {
	int32_t x13 = -1;
	uint16_t x14 = 29531U;
	uint64_t x15 = UINT64_MAX;
	static uint8_t x16 = 0U;
	volatile int32_t t0 = 20871;

	t0 = ((x13==x14)<=(x15>>x16));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x205 = INT8_MIN;
	volatile uint64_t x206 = UINT64_MAX;
	uint8_t x207 = 81U;
	uint32_t x208 = 1U;
	static volatile int32_t t1 = -4159;

	t1 = ((x205==x206)<=(x207>>x208));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x209 = INT64_MAX;
	uint8_t x210 = 1U;
	uint8_t x211 = 33U;
	int8_t x212 = 0;
	int32_t t2 = -27;

	t2 = ((x209==x210)<=(x211>>x212));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x241 = INT64_MAX;
	static volatile uint64_t x242 = UINT64_MAX;
	uint32_t x243 = 1028067U;
	int32_t t3 = 272461654;

	t3 = ((x241==x242)<=(x243>>x244));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x345 = 347678793742123LLU;
	uint16_t x346 = 1U;
	int8_t x347 = 1;
	uint8_t x348 = 2U;
	int32_t t4 = -1714152;

	t4 = ((x345==x346)<=(x347>>x348));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x369 = -279LL;
	static uint16_t x370 = 246U;
	uint64_t x371 = 50864326065940LLU;
	uint8_t x372 = 3U;
	volatile int32_t t5 = 1205;

	t5 = ((x369==x370)<=(x371>>x372));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x390 = 86476;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 63U;
	volatile int32_t t6 = -221;

	t6 = ((x389==x390)<=(x391>>x392));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x481 = 206210001U;
	uint16_t x483 = UINT16_MAX;
	volatile uint8_t x484 = 1U;

	t7 = ((x481==x482)<=(x483>>x484));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x489 = 0;
	static uint16_t x491 = 0U;

	t8 = ((x489==x490)<=(x491>>x492));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x657 = -79332101LL;
	int64_t x658 = -2427191286420LL;
	int32_t x659 = 100517968;
	static volatile int8_t x660 = 1;

	t9 = ((x657==x658)<=(x659>>x660));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x674 = INT64_MIN;
	uint16_t x675 = UINT16_MAX;
	int16_t x676 = 1;

	t10 = ((x673==x674)<=(x675>>x676));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x689 = INT32_MAX;
	int16_t x690 = -27;
	uint8_t x691 = UINT8_MAX;
	static volatile int16_t x692 = 11;
	int32_t t11 = -177993;

	t11 = ((x689==x690)<=(x691>>x692));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x697 = -337;
	int8_t x698 = 5;
	int64_t x699 = 11600LL;
	static volatile uint32_t x700 = 9U;
	volatile int32_t t12 = 2;

	t12 = ((x697==x698)<=(x699>>x700));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x709 = 21U;
	volatile uint8_t x710 = 0U;
	static uint64_t x711 = UINT64_MAX;
	volatile int32_t t13 = -21;

	t13 = ((x709==x710)<=(x711>>x712));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x761 = UINT16_MAX;
	int64_t x762 = -1LL;
	static volatile uint64_t x763 = 238190680273028LLU;
	uint16_t x764 = 30U;
	static volatile int32_t t14 = 43583;

	t14 = ((x761==x762)<=(x763>>x764));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x778 = 1;
	static int8_t x780 = 1;
	volatile int32_t t15 = -75292731;

	t15 = ((x777==x778)<=(x779>>x780));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x814 = 580LLU;
	int8_t x816 = 16;
	static volatile int32_t t16 = 239877340;

	t16 = ((x813==x814)<=(x815>>x816));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x869 = INT16_MAX;
	int16_t x870 = -1;
	int8_t x872 = 0;

	t17 = ((x869==x870)<=(x871>>x872));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x885 = 46962866547513LL;
	int64_t x886 = INT64_MIN;
	int16_t x888 = 1;
	volatile int32_t t18 = 3;

	t18 = ((x885==x886)<=(x887>>x888));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x937 = 6;
	int32_t x938 = INT32_MAX;
	volatile uint8_t x939 = UINT8_MAX;
	uint8_t x940 = 1U;
	volatile int32_t t19 = -56383397;

	t19 = ((x937==x938)<=(x939>>x940));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x989 = INT32_MAX;
	uint8_t x990 = 0U;
	static uint16_t x992 = 31U;
	int32_t t20 = 103566860;

	t20 = ((x989==x990)<=(x991>>x992));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1005 = 80;
	static uint64_t x1007 = 168150653010196LLU;
	static int32_t t21 = -86992;

	t21 = ((x1005==x1006)<=(x1007>>x1008));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1014 = 56;
	uint16_t x1015 = UINT16_MAX;
	uint32_t x1016 = 0U;
	int32_t t22 = 32121912;

	t22 = ((x1013==x1014)<=(x1015>>x1016));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1061 = INT8_MAX;
	int16_t x1062 = INT16_MIN;
	int64_t x1063 = INT64_MAX;
	int32_t t23 = -563;

	t23 = ((x1061==x1062)<=(x1063>>x1064));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1106 = 187;
	uint16_t x1107 = UINT16_MAX;
	volatile int8_t x1108 = 2;
	int32_t t24 = -1;

	t24 = ((x1105==x1106)<=(x1107>>x1108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x1401 = 344049876751957698LLU;
	volatile int64_t x1402 = INT64_MIN;
	uint8_t x1403 = 1U;
	volatile uint8_t x1404 = 18U;
	static volatile int32_t t25 = -8;

	t25 = ((x1401==x1402)<=(x1403>>x1404));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1417 = -1;
	int8_t x1419 = INT8_MAX;

	t26 = ((x1417==x1418)<=(x1419>>x1420));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1426 = INT8_MAX;
	uint32_t x1427 = UINT32_MAX;
	int32_t t27 = 1167;

	t27 = ((x1425==x1426)<=(x1427>>x1428));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1438 = 1;
	uint16_t x1439 = UINT16_MAX;
	uint32_t x1440 = 1U;
	volatile int32_t t28 = 2;

	t28 = ((x1437==x1438)<=(x1439>>x1440));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1496 = 5U;
	volatile int32_t t29 = -3031;

	t29 = ((x1493==x1494)<=(x1495>>x1496));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x1562 = -1;
	volatile int32_t t30 = -73679;

	t30 = ((x1561==x1562)<=(x1563>>x1564));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1565 = 137963692U;
	uint16_t x1566 = 12650U;
	static int64_t x1567 = 14001992LL;
	static uint8_t x1568 = 6U;
	int32_t t31 = -122;

	t31 = ((x1565==x1566)<=(x1567>>x1568));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1594 = INT64_MAX;
	uint8_t x1595 = UINT8_MAX;
	volatile uint16_t x1596 = 15U;
	int32_t t32 = 1385465;

	t32 = ((x1593==x1594)<=(x1595>>x1596));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x1645 = 137LLU;
	int8_t x1646 = INT8_MIN;
	uint64_t x1647 = UINT64_MAX;
	static int32_t t33 = -48075;

	t33 = ((x1645==x1646)<=(x1647>>x1648));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1649 = 11U;
	static volatile int64_t x1650 = 49519126500646082LL;
	volatile int8_t x1651 = INT8_MAX;
	volatile uint8_t x1652 = 2U;
	static int32_t t34 = 9;

	t34 = ((x1649==x1650)<=(x1651>>x1652));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1693 = INT64_MAX;
	volatile uint8_t x1694 = 10U;
	int16_t x1695 = INT16_MAX;
	int8_t x1696 = 13;

	t35 = ((x1693==x1694)<=(x1695>>x1696));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1753 = 96;
	volatile int64_t x1754 = -1LL;
	volatile uint32_t x1755 = 0U;
	static volatile int32_t t36 = 0;

	t36 = ((x1753==x1754)<=(x1755>>x1756));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1793 = UINT64_MAX;
	uint64_t x1795 = UINT64_MAX;
	volatile uint8_t x1796 = 9U;
	volatile int32_t t37 = -64159769;

	t37 = ((x1793==x1794)<=(x1795>>x1796));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1889 = UINT16_MAX;
	int8_t x1890 = INT8_MAX;
	int32_t t38 = 13690;

	t38 = ((x1889==x1890)<=(x1891>>x1892));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1961 = UINT8_MAX;
	int64_t x1962 = INT64_MIN;
	int8_t x1964 = 5;
	volatile int32_t t39 = -148;

	t39 = ((x1961==x1962)<=(x1963>>x1964));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2009 = 14405U;
	volatile int8_t x2010 = INT8_MAX;
	static uint8_t x2011 = 81U;
	uint16_t x2012 = 7U;
	static volatile int32_t t40 = 31787999;

	t40 = ((x2009==x2010)<=(x2011>>x2012));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2037 = -5841;
	uint32_t x2039 = UINT32_MAX;
	uint64_t x2040 = 15LLU;

	t41 = ((x2037==x2038)<=(x2039>>x2040));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2098 = INT64_MIN;
	static int32_t x2099 = INT32_MAX;
	uint8_t x2100 = 2U;
	volatile int32_t t42 = -31;

	t42 = ((x2097==x2098)<=(x2099>>x2100));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2125 = 8U;
	int16_t x2127 = 321;
	int8_t x2128 = 4;
	volatile int32_t t43 = 741104448;

	t43 = ((x2125==x2126)<=(x2127>>x2128));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2233 = INT8_MIN;
	static int16_t x2234 = INT16_MIN;
	static uint16_t x2235 = 8107U;
	int8_t x2236 = 0;

	t44 = ((x2233==x2234)<=(x2235>>x2236));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2273 = UINT8_MAX;
	int32_t t45 = 906961306;

	t45 = ((x2273==x2274)<=(x2275>>x2276));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2393 = -1;
	int64_t x2394 = INT64_MIN;
	int16_t x2396 = 0;

	t46 = ((x2393==x2394)<=(x2395>>x2396));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2421 = UINT32_MAX;
	int32_t x2422 = INT32_MAX;
	uint16_t x2423 = 12863U;
	volatile uint32_t x2424 = 1U;
	int32_t t47 = -62794788;

	t47 = ((x2421==x2422)<=(x2423>>x2424));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2465 = INT32_MIN;
	int8_t x2467 = 2;
	uint8_t x2468 = 7U;
	volatile int32_t t48 = 678613;

	t48 = ((x2465==x2466)<=(x2467>>x2468));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x2581 = UINT16_MAX;
	uint32_t x2582 = 1211U;
	int32_t x2584 = 7;
	int32_t t49 = -7305340;

	t49 = ((x2581==x2582)<=(x2583>>x2584));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2701 = -1;
	uint16_t x2702 = UINT16_MAX;
	uint16_t x2703 = UINT16_MAX;
	uint8_t x2704 = 10U;

	t50 = ((x2701==x2702)<=(x2703>>x2704));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x2713 = UINT64_MAX;
	int64_t x2714 = INT64_MIN;
	int16_t x2716 = 28;

	t51 = ((x2713==x2714)<=(x2715>>x2716));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x2745 = INT64_MIN;
	uint64_t x2747 = 6273135871385802093LLU;
	static uint8_t x2748 = 11U;

	t52 = ((x2745==x2746)<=(x2747>>x2748));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2813 = 12U;
	int32_t x2814 = INT32_MAX;
	int16_t x2815 = INT16_MAX;
	uint16_t x2816 = 25U;
	volatile int32_t t53 = -430121;

	t53 = ((x2813==x2814)<=(x2815>>x2816));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2854 = INT32_MIN;
	volatile int8_t x2855 = 1;
	volatile int32_t t54 = 39218;

	t54 = ((x2853==x2854)<=(x2855>>x2856));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2921 = INT64_MIN;
	volatile uint64_t x2923 = UINT64_MAX;
	int32_t x2924 = 2;

	t55 = ((x2921==x2922)<=(x2923>>x2924));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2990 = UINT32_MAX;
	uint64_t x2991 = UINT64_MAX;
	uint8_t x2992 = 1U;
	int32_t t56 = -3234;

	t56 = ((x2989==x2990)<=(x2991>>x2992));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x3013 = INT8_MIN;
	volatile int16_t x3014 = -1;
	uint16_t x3016 = 0U;
	static volatile int32_t t57 = 0;

	t57 = ((x3013==x3014)<=(x3015>>x3016));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3033 = -1;
	int16_t x3034 = INT16_MAX;
	uint16_t x3035 = 11678U;
	static volatile uint16_t x3036 = 19U;
	static volatile int32_t t58 = 821299713;

	t58 = ((x3033==x3034)<=(x3035>>x3036));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x3169 = UINT32_MAX;
	int32_t x3170 = INT32_MIN;
	int64_t x3171 = INT64_MAX;
	static int32_t t59 = 27198;

	t59 = ((x3169==x3170)<=(x3171>>x3172));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3209 = 1564U;
	static int32_t x3210 = INT32_MIN;
	uint8_t x3211 = 44U;
	static uint8_t x3212 = 5U;
	int32_t t60 = -408019790;

	t60 = ((x3209==x3210)<=(x3211>>x3212));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x3325 = INT8_MAX;
	int64_t x3326 = INT64_MAX;
	uint64_t x3327 = UINT64_MAX;
	int8_t x3328 = 1;
	volatile int32_t t61 = 52630;

	t61 = ((x3325==x3326)<=(x3327>>x3328));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3382 = INT16_MAX;
	int8_t x3383 = INT8_MAX;
	int16_t x3384 = 1;
	volatile int32_t t62 = -6958;

	t62 = ((x3381==x3382)<=(x3383>>x3384));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3462 = 937U;
	uint64_t x3463 = UINT64_MAX;
	int8_t x3464 = 1;

	t63 = ((x3461==x3462)<=(x3463>>x3464));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x3505 = UINT16_MAX;
	int64_t x3507 = 1LL;
	volatile uint8_t x3508 = 12U;
	volatile int32_t t64 = 55308596;

	t64 = ((x3505==x3506)<=(x3507>>x3508));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3573 = -2962;
	uint8_t x3574 = UINT8_MAX;
	int8_t x3576 = 2;

	t65 = ((x3573==x3574)<=(x3575>>x3576));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3674 = -1;
	volatile uint64_t x3675 = UINT64_MAX;
	uint64_t x3676 = 25LLU;
	int32_t t66 = -7;

	t66 = ((x3673==x3674)<=(x3675>>x3676));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3873 = INT32_MAX;
	uint16_t x3876 = 0U;

	t67 = ((x3873==x3874)<=(x3875>>x3876));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3885 = INT8_MIN;
	static int8_t x3886 = 5;
	static uint16_t x3887 = 4U;
	static uint8_t x3888 = 3U;
	volatile int32_t t68 = -463665157;

	t68 = ((x3885==x3886)<=(x3887>>x3888));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4181 = -1;
	volatile uint32_t x4182 = 12U;
	static int16_t x4183 = INT16_MAX;
	uint16_t x4184 = 1U;
	volatile int32_t t69 = -303836;

	t69 = ((x4181==x4182)<=(x4183>>x4184));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4250 = 73897U;
	volatile int64_t x4252 = 62LL;
	static volatile int32_t t70 = -171387;

	t70 = ((x4249==x4250)<=(x4251>>x4252));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4257 = 10;
	int64_t x4258 = 7647323932LL;
	uint8_t x4259 = UINT8_MAX;
	int32_t t71 = -42;

	t71 = ((x4257==x4258)<=(x4259>>x4260));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4285 = 2U;
	int32_t x4286 = INT32_MIN;
	volatile uint16_t x4287 = 65U;
	static volatile uint8_t x4288 = 3U;
	int32_t t72 = 954049086;

	t72 = ((x4285==x4286)<=(x4287>>x4288));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4294 = INT8_MAX;
	uint8_t x4296 = 11U;
	volatile int32_t t73 = 76;

	t73 = ((x4293==x4294)<=(x4295>>x4296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4327 = 111438475U;
	static int32_t t74 = 257524052;

	t74 = ((x4325==x4326)<=(x4327>>x4328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4349 = -1;
	uint8_t x4351 = 2U;
	volatile int32_t t75 = 1;

	t75 = ((x4349==x4350)<=(x4351>>x4352));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x4353 = INT16_MIN;
	int16_t x4354 = INT16_MIN;
	uint16_t x4355 = 3U;
	uint16_t x4356 = 0U;

	t76 = ((x4353==x4354)<=(x4355>>x4356));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4365 = INT64_MIN;
	static uint8_t x4366 = UINT8_MAX;
	int64_t x4367 = INT64_MAX;
	volatile int32_t t77 = 238778;

	t77 = ((x4365==x4366)<=(x4367>>x4368));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4381 = INT32_MIN;
	int16_t x4382 = INT16_MIN;
	int16_t x4383 = 348;
	static uint32_t x4384 = 29U;
	int32_t t78 = 314908;

	t78 = ((x4381==x4382)<=(x4383>>x4384));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4437 = INT8_MAX;
	int64_t x4438 = INT64_MIN;
	volatile int8_t x4440 = 4;
	volatile int32_t t79 = 67571302;

	t79 = ((x4437==x4438)<=(x4439>>x4440));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4573 = INT32_MIN;
	int64_t x4574 = -1LL;
	uint32_t x4575 = UINT32_MAX;
	volatile uint64_t x4576 = 7LLU;

	t80 = ((x4573==x4574)<=(x4575>>x4576));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4605 = INT16_MIN;
	static uint16_t x4606 = 586U;
	uint64_t x4607 = UINT64_MAX;
	uint8_t x4608 = 59U;
	int32_t t81 = 248;

	t81 = ((x4605==x4606)<=(x4607>>x4608));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4625 = -1;
	static int64_t x4626 = INT64_MIN;
	int16_t x4627 = 1;
	uint16_t x4628 = 5U;
	volatile int32_t t82 = -4494356;

	t82 = ((x4625==x4626)<=(x4627>>x4628));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4665 = 10476LL;
	int16_t x4666 = INT16_MAX;
	uint16_t x4667 = 14U;
	uint8_t x4668 = 12U;

	t83 = ((x4665==x4666)<=(x4667>>x4668));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x4729 = UINT16_MAX;
	int64_t x4731 = INT64_MAX;
	static uint16_t x4732 = 2U;
	volatile int32_t t84 = 150442;

	t84 = ((x4729==x4730)<=(x4731>>x4732));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4841 = 7902U;
	volatile uint16_t x4842 = UINT16_MAX;
	int64_t x4843 = INT64_MAX;
	uint16_t x4844 = 11U;
	static volatile int32_t t85 = 152225;

	t85 = ((x4841==x4842)<=(x4843>>x4844));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x4885 = INT64_MIN;
	int32_t x4886 = 15922820;
	int32_t x4887 = 414540;
	int8_t x4888 = 26;
	volatile int32_t t86 = 585985;

	t86 = ((x4885==x4886)<=(x4887>>x4888));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x4934 = INT8_MIN;
	int64_t x4935 = 161270905LL;
	static int32_t t87 = -30180533;

	t87 = ((x4933==x4934)<=(x4935>>x4936));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x5081 = -9;
	uint8_t x5082 = 25U;
	uint16_t x5083 = 1370U;
	volatile int32_t x5084 = 0;
	volatile int32_t t88 = -6868499;

	t88 = ((x5081==x5082)<=(x5083>>x5084));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x5169 = -1;
	int64_t x5170 = INT64_MIN;
	static uint32_t x5171 = 1U;
	uint16_t x5172 = 0U;
	volatile int32_t t89 = -33086613;

	t89 = ((x5169==x5170)<=(x5171>>x5172));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5213 = 57U;
	uint8_t x5214 = 28U;
	uint32_t x5215 = UINT32_MAX;
	volatile uint32_t x5216 = 0U;
	int32_t t90 = -259719;

	t90 = ((x5213==x5214)<=(x5215>>x5216));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5289 = INT32_MIN;
	uint64_t x5290 = 13536LLU;
	static uint8_t x5291 = UINT8_MAX;
	uint16_t x5292 = 15U;
	int32_t t91 = 3;

	t91 = ((x5289==x5290)<=(x5291>>x5292));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x5329 = -520378682992366LL;
	static int16_t x5330 = -1;
	uint32_t x5331 = 232U;
	uint8_t x5332 = 1U;

	t92 = ((x5329==x5330)<=(x5331>>x5332));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5409 = -1;
	uint64_t x5410 = UINT64_MAX;
	volatile int8_t x5411 = INT8_MAX;
	static volatile int8_t x5412 = 14;

	t93 = ((x5409==x5410)<=(x5411>>x5412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x5517 = 223373163755085LL;
	uint16_t x5519 = 8U;
	volatile int16_t x5520 = 0;
	volatile int32_t t94 = -28320;

	t94 = ((x5517==x5518)<=(x5519>>x5520));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5681 = INT64_MIN;
	int64_t x5682 = -691566053499152646LL;
	int16_t x5683 = INT16_MAX;
	uint32_t x5684 = 28U;
	int32_t t95 = 554999;

	t95 = ((x5681==x5682)<=(x5683>>x5684));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x5789 = 3011U;
	int16_t x5790 = -1;
	uint64_t x5791 = UINT64_MAX;
	uint16_t x5792 = 42U;
	volatile int32_t t96 = -350;

	t96 = ((x5789==x5790)<=(x5791>>x5792));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5793 = -1;
	static uint32_t x5795 = 3603U;
	int16_t x5796 = 1;

	t97 = ((x5793==x5794)<=(x5795>>x5796));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x5833 = -1LL;
	static volatile int64_t x5834 = INT64_MIN;
	static uint64_t x5835 = 21060474288371LLU;

	t98 = ((x5833==x5834)<=(x5835>>x5836));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6057 = INT16_MIN;
	volatile int32_t x6059 = 775615407;
	volatile int32_t t99 = 14;

	t99 = ((x6057==x6058)<=(x6059>>x6060));

	if (t99 != 1) { NG(); } else { ; }
	
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

