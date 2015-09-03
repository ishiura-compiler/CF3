#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x105 = 811LLU;
static int32_t t1 = 6;
volatile int32_t x182 = 5;
static int32_t x183 = INT32_MAX;
volatile int32_t t3 = 6;
static int32_t t4 = 3;
static int8_t x515 = INT8_MIN;
int64_t x516 = -2053260399833041597LL;
int64_t x571 = -1LL;
int8_t x626 = 12;
int8_t x627 = -1;
uint32_t x665 = UINT32_MAX;
int8_t x668 = -1;
int32_t t10 = -95870145;
int32_t x741 = 305528;
int32_t x744 = INT32_MAX;
uint8_t x866 = 0U;
static uint8_t x885 = 58U;
int32_t x892 = -19;
int32_t t14 = -851178;
int8_t x951 = 1;
volatile uint64_t x1144 = UINT64_MAX;
volatile int32_t t18 = -8616;
int8_t x1151 = 17;
static int32_t t19 = -9;
volatile uint32_t x1197 = 191U;
uint16_t x1204 = 7747U;
static uint32_t x1271 = 1139947U;
int32_t x1305 = 6;
uint32_t x1308 = UINT32_MAX;
static volatile uint32_t x1317 = UINT32_MAX;
volatile int16_t x1422 = 1;
uint16_t x1423 = 0U;
uint32_t x1443 = UINT32_MAX;
uint8_t x1461 = UINT8_MAX;
int32_t x1612 = 972267;
uint32_t x1633 = UINT32_MAX;
uint8_t x1634 = 6U;
static uint64_t x1636 = UINT64_MAX;
int32_t t32 = -39671;
uint32_t x1638 = 1U;
int32_t x1651 = INT32_MIN;
int64_t x2005 = INT64_MAX;
int32_t x2012 = INT32_MIN;
int64_t x2069 = 94LL;
uint64_t x2102 = 12LLU;
volatile int32_t t41 = -318203;
int8_t x2168 = -8;
int16_t x2214 = 7;
static int32_t t43 = -221280;
volatile int16_t x2395 = INT16_MIN;
static int8_t x2396 = -1;
static volatile int16_t x2408 = INT16_MIN;
static int8_t x2432 = -1;
int32_t t48 = 30;
int64_t x2452 = INT64_MIN;
uint64_t x2511 = 473987794261322LLU;
volatile int32_t x2717 = INT32_MAX;
static int32_t x2719 = INT32_MIN;
static volatile int64_t x2837 = INT64_MAX;
int8_t x2839 = -1;
int8_t x2840 = 4;
int32_t t54 = 127217442;
uint64_t x2925 = UINT64_MAX;
int8_t x2928 = -1;
volatile uint32_t x3005 = 56325U;
static uint64_t x3069 = UINT64_MAX;
volatile int8_t x3102 = 14;
int16_t x3104 = -1;
int32_t t62 = -5679;
volatile int64_t x3227 = INT64_MIN;
uint64_t x3293 = UINT64_MAX;
static volatile int16_t x3307 = INT16_MIN;
volatile uint64_t x3322 = 39LLU;
int32_t x3346 = 6;
int8_t x3362 = 11;
volatile int32_t t70 = -12;
static uint8_t x3377 = 1U;
volatile int32_t t73 = 597;
int32_t t74 = 784457;
int16_t x3734 = 1;
uint8_t x3901 = UINT8_MAX;
uint32_t x4041 = UINT32_MAX;
int16_t x4212 = INT16_MIN;
uint64_t x4268 = 1597374050279LLU;
uint64_t x4297 = 4732341412LLU;
volatile int32_t t85 = 28;
volatile uint16_t x4318 = 1U;
uint16_t x4425 = 495U;
static int32_t t87 = 41;
volatile int32_t t89 = -275;
volatile int32_t t91 = 11805453;
uint16_t x4833 = UINT16_MAX;
static int64_t x4836 = INT64_MIN;
static int8_t x4867 = INT8_MIN;
int32_t x4929 = 246531;
int16_t x5041 = 106;
int8_t x5043 = 1;


void f0(void) {
	uint64_t x57 = 13660923811969LLU;
	uint8_t x58 = 4U;
	int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MAX;
	static int32_t t0 = -17126728;

	t0 = ((x57>>x58)<(x59^x60));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x106 = 8U;
	static uint16_t x107 = 32U;
	int32_t x108 = INT32_MIN;

	t1 = ((x105>>x106)<(x107^x108));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x184 = -1LL;
	int32_t t2 = 21;

	t2 = ((x181>>x182)<(x183^x184));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x201 = INT16_MAX;
	int64_t x202 = 13LL;
	static int8_t x203 = INT8_MIN;
	volatile int64_t x204 = INT64_MIN;

	t3 = ((x201>>x202)<(x203^x204));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x405 = UINT16_MAX;
	uint8_t x406 = 2U;
	static volatile uint32_t x407 = UINT32_MAX;
	int16_t x408 = INT16_MIN;

	t4 = ((x405>>x406)<(x407^x408));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x513 = UINT64_MAX;
	uint8_t x514 = 1U;
	static int32_t t5 = 23589;

	t5 = ((x513>>x514)<(x515^x516));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x569 = UINT16_MAX;
	int64_t x570 = 1LL;
	uint16_t x572 = 39U;
	static volatile int32_t t6 = 44786960;

	t6 = ((x569>>x570)<(x571^x572));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x625 = 0U;
	static int64_t x628 = INT64_MAX;
	volatile int32_t t7 = -493;

	t7 = ((x625>>x626)<(x627^x628));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x666 = 2LLU;
	static uint16_t x667 = 60U;
	volatile int32_t t8 = 10193;

	t8 = ((x665>>x666)<(x667^x668));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x689 = 10475LLU;
	static uint64_t x690 = 55LLU;
	static int16_t x691 = -90;
	volatile uint8_t x692 = UINT8_MAX;
	int32_t t9 = -128920;

	t9 = ((x689>>x690)<(x691^x692));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x693 = UINT16_MAX;
	uint32_t x694 = 9U;
	static volatile int8_t x695 = INT8_MIN;
	static uint16_t x696 = 5106U;

	t10 = ((x693>>x694)<(x695^x696));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x742 = 0LLU;
	static volatile int16_t x743 = -1;
	int32_t t11 = 1032934644;

	t11 = ((x741>>x742)<(x743^x744));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x865 = INT8_MAX;
	static int8_t x867 = -1;
	int8_t x868 = INT8_MIN;
	int32_t t12 = -2942279;

	t12 = ((x865>>x866)<(x867^x868));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x886 = 22U;
	int16_t x887 = INT16_MAX;
	int64_t x888 = 9LL;
	int32_t t13 = 2037;

	t13 = ((x885>>x886)<(x887^x888));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x889 = 0LLU;
	int8_t x890 = 1;
	int64_t x891 = INT64_MIN;

	t14 = ((x889>>x890)<(x891^x892));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x913 = 8;
	volatile int8_t x914 = 1;
	int8_t x915 = INT8_MIN;
	volatile int64_t x916 = 297073999800924LL;
	static volatile int32_t t15 = -16007997;

	t15 = ((x913>>x914)<(x915^x916));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x917 = 0;
	uint16_t x918 = 9U;
	static uint32_t x919 = 97U;
	int64_t x920 = INT64_MIN;
	int32_t t16 = 2008;

	t16 = ((x917>>x918)<(x919^x920));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x949 = 20LL;
	uint64_t x950 = 15LLU;
	static volatile uint16_t x952 = 1U;
	volatile int32_t t17 = 0;

	t17 = ((x949>>x950)<(x951^x952));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1141 = 52U;
	uint64_t x1142 = 1LLU;
	int32_t x1143 = -14910;

	t18 = ((x1141>>x1142)<(x1143^x1144));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1149 = 4879LLU;
	int8_t x1150 = 15;
	volatile int16_t x1152 = 1;

	t19 = ((x1149>>x1150)<(x1151^x1152));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1198 = 0;
	static volatile int64_t x1199 = INT64_MAX;
	static volatile int16_t x1200 = 0;
	volatile int32_t t20 = -307;

	t20 = ((x1197>>x1198)<(x1199^x1200));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1201 = 10172;
	volatile int8_t x1202 = 14;
	int32_t x1203 = 269;
	int32_t t21 = -1;

	t21 = ((x1201>>x1202)<(x1203^x1204));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1269 = 10035337186LLU;
	int8_t x1270 = 42;
	static volatile int32_t x1272 = INT32_MAX;
	int32_t t22 = 697;

	t22 = ((x1269>>x1270)<(x1271^x1272));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1306 = 31U;
	int8_t x1307 = -15;
	static volatile int32_t t23 = 56;

	t23 = ((x1305>>x1306)<(x1307^x1308));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1318 = 0;
	volatile int8_t x1319 = 14;
	int64_t x1320 = INT64_MIN;
	static volatile int32_t t24 = 0;

	t24 = ((x1317>>x1318)<(x1319^x1320));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1421 = UINT32_MAX;
	int8_t x1424 = -1;
	int32_t t25 = 108216903;

	t25 = ((x1421>>x1422)<(x1423^x1424));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1441 = 3743172U;
	volatile int8_t x1442 = 2;
	int32_t x1444 = -31;
	volatile int32_t t26 = 9409333;

	t26 = ((x1441>>x1442)<(x1443^x1444));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1462 = 14U;
	int8_t x1463 = -1;
	int32_t x1464 = -5861;
	volatile int32_t t27 = -2319150;

	t27 = ((x1461>>x1462)<(x1463^x1464));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1481 = 8985850038577147959LLU;
	int16_t x1482 = 13;
	uint32_t x1483 = UINT32_MAX;
	static volatile int16_t x1484 = -1;
	int32_t t28 = 102;

	t28 = ((x1481>>x1482)<(x1483^x1484));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1521 = INT64_MAX;
	int64_t x1522 = 26LL;
	int16_t x1523 = INT16_MIN;
	uint8_t x1524 = 4U;
	volatile int32_t t29 = 251616006;

	t29 = ((x1521>>x1522)<(x1523^x1524));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1609 = 168U;
	volatile int8_t x1610 = 21;
	int64_t x1611 = -870LL;
	int32_t t30 = -98554414;

	t30 = ((x1609>>x1610)<(x1611^x1612));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1613 = 879U;
	uint8_t x1614 = 3U;
	static volatile int8_t x1615 = 1;
	uint16_t x1616 = 5U;
	int32_t t31 = -119293702;

	t31 = ((x1613>>x1614)<(x1615^x1616));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1635 = INT64_MIN;

	t32 = ((x1633>>x1634)<(x1635^x1636));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1637 = UINT8_MAX;
	int16_t x1639 = 527;
	int64_t x1640 = INT64_MIN;
	volatile int32_t t33 = -18898;

	t33 = ((x1637>>x1638)<(x1639^x1640));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1649 = 101573;
	int64_t x1650 = 15LL;
	int32_t x1652 = 3;
	static volatile int32_t t34 = -1;

	t34 = ((x1649>>x1650)<(x1651^x1652));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2006 = 47LL;
	int64_t x2007 = -1LL;
	volatile int32_t x2008 = -31238;
	volatile int32_t t35 = -17723841;

	t35 = ((x2005>>x2006)<(x2007^x2008));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2009 = UINT32_MAX;
	static int8_t x2010 = 28;
	int8_t x2011 = INT8_MIN;
	int32_t t36 = -2404;

	t36 = ((x2009>>x2010)<(x2011^x2012));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2045 = UINT64_MAX;
	static volatile uint64_t x2046 = 58LLU;
	static volatile uint16_t x2047 = 29709U;
	uint64_t x2048 = 5500999LLU;
	static int32_t t37 = -227;

	t37 = ((x2045>>x2046)<(x2047^x2048));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x2070 = 41U;
	uint8_t x2071 = 31U;
	int64_t x2072 = 8LL;
	volatile int32_t t38 = 4141979;

	t38 = ((x2069>>x2070)<(x2071^x2072));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2101 = INT32_MAX;
	int32_t x2103 = 208890;
	int8_t x2104 = INT8_MAX;
	volatile int32_t t39 = 3590731;

	t39 = ((x2101>>x2102)<(x2103^x2104));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2113 = INT32_MAX;
	uint16_t x2114 = 1U;
	uint8_t x2115 = 51U;
	uint32_t x2116 = 426U;
	static int32_t t40 = 46911988;

	t40 = ((x2113>>x2114)<(x2115^x2116));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x2157 = INT64_MAX;
	uint8_t x2158 = 13U;
	int16_t x2159 = 17;
	uint16_t x2160 = 102U;

	t41 = ((x2157>>x2158)<(x2159^x2160));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2165 = UINT64_MAX;
	static uint8_t x2166 = 2U;
	uint32_t x2167 = 24U;
	static volatile int32_t t42 = 152;

	t42 = ((x2165>>x2166)<(x2167^x2168));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2213 = 115718LLU;
	static int64_t x2215 = INT64_MAX;
	uint32_t x2216 = UINT32_MAX;

	t43 = ((x2213>>x2214)<(x2215^x2216));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x2233 = INT32_MAX;
	static uint8_t x2234 = 3U;
	int32_t x2235 = INT32_MIN;
	static uint8_t x2236 = 3U;
	static volatile int32_t t44 = -26951;

	t44 = ((x2233>>x2234)<(x2235^x2236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2257 = 804LLU;
	int16_t x2258 = 4;
	volatile int16_t x2259 = 6;
	static int64_t x2260 = INT64_MIN;
	volatile int32_t t45 = 1137359;

	t45 = ((x2257>>x2258)<(x2259^x2260));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2393 = UINT32_MAX;
	volatile uint8_t x2394 = 18U;
	int32_t t46 = 13821;

	t46 = ((x2393>>x2394)<(x2395^x2396));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2405 = 576201620468227024LLU;
	volatile int16_t x2406 = 1;
	int16_t x2407 = INT16_MIN;
	int32_t t47 = -221079;

	t47 = ((x2405>>x2406)<(x2407^x2408));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2429 = 12;
	uint8_t x2430 = 2U;
	int64_t x2431 = -10347LL;

	t48 = ((x2429>>x2430)<(x2431^x2432));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2449 = UINT64_MAX;
	uint8_t x2450 = 0U;
	int8_t x2451 = INT8_MIN;
	volatile int32_t t49 = 5539;

	t49 = ((x2449>>x2450)<(x2451^x2452));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2489 = 2748U;
	uint32_t x2490 = 11U;
	uint64_t x2491 = UINT64_MAX;
	int64_t x2492 = INT64_MIN;
	int32_t t50 = 457003;

	t50 = ((x2489>>x2490)<(x2491^x2492));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2509 = 10U;
	int16_t x2510 = 1;
	int32_t x2512 = INT32_MIN;
	volatile int32_t t51 = 818;

	t51 = ((x2509>>x2510)<(x2511^x2512));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x2585 = 6089U;
	static int16_t x2586 = 12;
	uint8_t x2587 = 52U;
	uint64_t x2588 = UINT64_MAX;
	int32_t t52 = 29467511;

	t52 = ((x2585>>x2586)<(x2587^x2588));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x2718 = 24U;
	int16_t x2720 = -440;
	static volatile int32_t t53 = 25417357;

	t53 = ((x2717>>x2718)<(x2719^x2720));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x2838 = 25;

	t54 = ((x2837>>x2838)<(x2839^x2840));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2905 = INT64_MAX;
	volatile int8_t x2906 = 0;
	static uint64_t x2907 = 507979559323726957LLU;
	uint32_t x2908 = 2742U;
	volatile int32_t t55 = 0;

	t55 = ((x2905>>x2906)<(x2907^x2908));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2926 = 1LLU;
	static uint64_t x2927 = 2751775240605LLU;
	static volatile int32_t t56 = 431622789;

	t56 = ((x2925>>x2926)<(x2927^x2928));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x3001 = UINT16_MAX;
	uint32_t x3002 = 0U;
	uint8_t x3003 = UINT8_MAX;
	uint64_t x3004 = 4LLU;
	int32_t t57 = 425798;

	t57 = ((x3001>>x3002)<(x3003^x3004));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3006 = 1U;
	int32_t x3007 = INT32_MAX;
	int32_t x3008 = -264;
	volatile int32_t t58 = 0;

	t58 = ((x3005>>x3006)<(x3007^x3008));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x3070 = 24U;
	static volatile int64_t x3071 = -1332718691359104212LL;
	int16_t x3072 = INT16_MIN;
	int32_t t59 = -967;

	t59 = ((x3069>>x3070)<(x3071^x3072));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3101 = INT8_MAX;
	int32_t x3103 = INT32_MIN;
	int32_t t60 = 11466;

	t60 = ((x3101>>x3102)<(x3103^x3104));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x3121 = INT8_MAX;
	int8_t x3122 = 24;
	int8_t x3123 = INT8_MIN;
	static uint8_t x3124 = 25U;
	volatile int32_t t61 = -20;

	t61 = ((x3121>>x3122)<(x3123^x3124));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3221 = 68902517617918LLU;
	uint8_t x3222 = 14U;
	uint32_t x3223 = 179668700U;
	static uint64_t x3224 = UINT64_MAX;

	t62 = ((x3221>>x3222)<(x3223^x3224));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3225 = 208;
	static int8_t x3226 = 12;
	int32_t x3228 = INT32_MIN;
	int32_t t63 = -2229;

	t63 = ((x3225>>x3226)<(x3227^x3228));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3233 = INT16_MAX;
	uint8_t x3234 = 7U;
	volatile uint8_t x3235 = 0U;
	int8_t x3236 = 10;
	int32_t t64 = 1;

	t64 = ((x3233>>x3234)<(x3235^x3236));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3294 = 1;
	uint32_t x3295 = 253826925U;
	int64_t x3296 = -53095791LL;
	volatile int32_t t65 = 448;

	t65 = ((x3293>>x3294)<(x3295^x3296));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3297 = 22U;
	int8_t x3298 = 23;
	volatile int16_t x3299 = INT16_MAX;
	int16_t x3300 = 82;
	int32_t t66 = -1;

	t66 = ((x3297>>x3298)<(x3299^x3300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3305 = UINT8_MAX;
	uint8_t x3306 = 1U;
	uint64_t x3308 = UINT64_MAX;
	int32_t t67 = -970;

	t67 = ((x3305>>x3306)<(x3307^x3308));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3321 = 294869798996LL;
	int32_t x3323 = -594357527;
	volatile int64_t x3324 = -21357245840990LL;
	int32_t t68 = 0;

	t68 = ((x3321>>x3322)<(x3323^x3324));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3345 = 0;
	int64_t x3347 = INT64_MIN;
	int32_t x3348 = INT32_MIN;
	static volatile int32_t t69 = 190;

	t69 = ((x3345>>x3346)<(x3347^x3348));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3361 = UINT64_MAX;
	static int32_t x3363 = INT32_MIN;
	int64_t x3364 = -1LL;

	t70 = ((x3361>>x3362)<(x3363^x3364));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3378 = 0;
	static int16_t x3379 = INT16_MIN;
	int32_t x3380 = INT32_MAX;
	int32_t t71 = 16520;

	t71 = ((x3377>>x3378)<(x3379^x3380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3429 = 114;
	int8_t x3430 = 2;
	int16_t x3431 = -6082;
	volatile int32_t x3432 = 489546;
	volatile int32_t t72 = 43;

	t72 = ((x3429>>x3430)<(x3431^x3432));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3461 = INT8_MAX;
	int8_t x3462 = 15;
	int16_t x3463 = -1;
	uint16_t x3464 = 18U;

	t73 = ((x3461>>x3462)<(x3463^x3464));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3489 = 263LLU;
	volatile int16_t x3490 = 3;
	int64_t x3491 = -1838536669997099080LL;
	uint8_t x3492 = 0U;

	t74 = ((x3489>>x3490)<(x3491^x3492));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3637 = INT32_MAX;
	uint16_t x3638 = 6U;
	int8_t x3639 = INT8_MIN;
	int32_t x3640 = INT32_MIN;
	volatile int32_t t75 = -179;

	t75 = ((x3637>>x3638)<(x3639^x3640));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3733 = 0;
	static int64_t x3735 = -1034186713943LL;
	int64_t x3736 = INT64_MIN;
	int32_t t76 = 498;

	t76 = ((x3733>>x3734)<(x3735^x3736));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x3757 = 43613U;
	static int32_t x3758 = 1;
	static int64_t x3759 = INT64_MIN;
	uint64_t x3760 = 829LLU;
	volatile int32_t t77 = 0;

	t77 = ((x3757>>x3758)<(x3759^x3760));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3902 = 1;
	volatile int32_t x3903 = INT32_MIN;
	volatile int64_t x3904 = 11019515188823LL;
	int32_t t78 = 386557;

	t78 = ((x3901>>x3902)<(x3903^x3904));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3937 = 41U;
	uint16_t x3938 = 11U;
	int64_t x3939 = -13916LL;
	static int64_t x3940 = INT64_MIN;
	static volatile int32_t t79 = 1;

	t79 = ((x3937>>x3938)<(x3939^x3940));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4042 = 5;
	uint16_t x4043 = 35U;
	static int32_t x4044 = INT32_MIN;
	volatile int32_t t80 = 9261;

	t80 = ((x4041>>x4042)<(x4043^x4044));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4197 = UINT64_MAX;
	int8_t x4198 = 1;
	uint8_t x4199 = UINT8_MAX;
	int32_t x4200 = 6;
	static int32_t t81 = 5;

	t81 = ((x4197>>x4198)<(x4199^x4200));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4209 = UINT32_MAX;
	uint8_t x4210 = 0U;
	static int64_t x4211 = -22952726408305863LL;
	int32_t t82 = -447708;

	t82 = ((x4209>>x4210)<(x4211^x4212));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4241 = INT32_MAX;
	int8_t x4242 = 1;
	static int16_t x4243 = 0;
	uint16_t x4244 = 43U;
	volatile int32_t t83 = -1;

	t83 = ((x4241>>x4242)<(x4243^x4244));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4265 = 10U;
	uint64_t x4266 = 5LLU;
	volatile int64_t x4267 = -1LL;
	volatile int32_t t84 = -1;

	t84 = ((x4265>>x4266)<(x4267^x4268));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x4298 = 20;
	int8_t x4299 = 2;
	uint16_t x4300 = 1U;

	t85 = ((x4297>>x4298)<(x4299^x4300));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x4317 = 9U;
	volatile uint32_t x4319 = 53878U;
	static int8_t x4320 = INT8_MIN;
	int32_t t86 = -78;

	t86 = ((x4317>>x4318)<(x4319^x4320));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4426 = 4U;
	int8_t x4427 = -1;
	int8_t x4428 = INT8_MAX;

	t87 = ((x4425>>x4426)<(x4427^x4428));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4509 = 3U;
	static int32_t x4510 = 8;
	static int8_t x4511 = -1;
	int32_t x4512 = INT32_MIN;
	int32_t t88 = 5068559;

	t88 = ((x4509>>x4510)<(x4511^x4512));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4569 = 56U;
	int16_t x4570 = 5;
	uint32_t x4571 = 7155162U;
	static uint32_t x4572 = 22U;

	t89 = ((x4569>>x4570)<(x4571^x4572));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x4601 = 483U;
	int32_t x4602 = 0;
	static int32_t x4603 = INT32_MAX;
	uint16_t x4604 = UINT16_MAX;
	volatile int32_t t90 = 1;

	t90 = ((x4601>>x4602)<(x4603^x4604));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x4637 = 18294U;
	uint16_t x4638 = 7U;
	static uint16_t x4639 = 1U;
	uint8_t x4640 = 0U;

	t91 = ((x4637>>x4638)<(x4639^x4640));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4773 = INT64_MAX;
	uint64_t x4774 = 2LLU;
	volatile int8_t x4775 = INT8_MAX;
	static volatile uint8_t x4776 = UINT8_MAX;
	static volatile int32_t t92 = 11;

	t92 = ((x4773>>x4774)<(x4775^x4776));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4834 = 4U;
	volatile uint32_t x4835 = UINT32_MAX;
	static int32_t t93 = -387529158;

	t93 = ((x4833>>x4834)<(x4835^x4836));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4865 = 0U;
	volatile uint8_t x4866 = 15U;
	static uint16_t x4868 = UINT16_MAX;
	volatile int32_t t94 = 29267;

	t94 = ((x4865>>x4866)<(x4867^x4868));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4930 = 3U;
	static int16_t x4931 = -1;
	int32_t x4932 = INT32_MIN;
	static int32_t t95 = 1133;

	t95 = ((x4929>>x4930)<(x4931^x4932));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4969 = 520669531660321LLU;
	uint16_t x4970 = 21U;
	int16_t x4971 = INT16_MAX;
	static int32_t x4972 = -1;
	static int32_t t96 = 15900;

	t96 = ((x4969>>x4970)<(x4971^x4972));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4989 = 447438059441364LL;
	uint16_t x4990 = 26U;
	int16_t x4991 = -1;
	static volatile int32_t x4992 = INT32_MIN;
	static int32_t t97 = 372;

	t97 = ((x4989>>x4990)<(x4991^x4992));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x5033 = INT64_MAX;
	static int16_t x5034 = 54;
	static volatile int16_t x5035 = -10;
	volatile uint8_t x5036 = 6U;
	int32_t t98 = -3813;

	t98 = ((x5033>>x5034)<(x5035^x5036));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5042 = 0;
	volatile int32_t x5044 = 0;
	volatile int32_t t99 = 10;

	t99 = ((x5041>>x5042)<(x5043^x5044));

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

