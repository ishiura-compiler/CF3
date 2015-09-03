#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x91 = 2079698641222LLU;
static volatile int64_t t3 = 131922254567776892LL;
volatile uint64_t t5 = 3206182838714962134LLU;
uint64_t t6 = 389807LLU;
uint32_t x591 = 28449U;
uint8_t x592 = 2U;
int32_t t10 = -29639950;
static volatile int16_t x990 = 51;
uint8_t x991 = UINT8_MAX;
static int64_t t12 = 30139037856LL;
static int8_t x1017 = -31;
uint8_t x1020 = 0U;
int8_t x1037 = INT8_MIN;
int64_t t15 = -5008LL;
uint32_t x1056 = 6U;
int16_t x1058 = 615;
static uint32_t x1060 = 1U;
static uint8_t x1151 = UINT8_MAX;
uint8_t x1152 = 6U;
int8_t x1160 = 1;
int64_t x1484 = 14LL;
volatile uint16_t x1514 = 0U;
volatile int16_t x1638 = -1;
uint8_t x1830 = 1U;
uint32_t x1853 = UINT32_MAX;
volatile int32_t x1913 = INT32_MAX;
static int64_t x1914 = 2LL;
uint32_t x1998 = 2060593474U;
uint16_t x1999 = 29625U;
uint8_t x2064 = 1U;
int64_t x2074 = -162577LL;
uint32_t x2076 = 0U;
static uint8_t x2101 = 2U;
uint8_t x2102 = 27U;
int32_t x2103 = 129278838;
volatile int32_t t37 = -836332513;
static volatile int8_t x2116 = 5;
uint32_t x2377 = UINT32_MAX;
int64_t t45 = -134217LL;
uint64_t x2481 = 72941725LLU;
volatile uint64_t t46 = 140035047488131LLU;
static int32_t x2511 = -1;
int16_t x2641 = INT16_MAX;
int32_t x2643 = -97;
static int8_t x2800 = 0;
uint64_t t49 = 52097319140449LLU;
volatile uint64_t x2906 = 413LLU;
volatile uint64_t t50 = 28205019508257LLU;
volatile uint8_t x2988 = 0U;
int16_t x3155 = INT16_MAX;
static int8_t x3169 = -1;
int8_t x3318 = -1;
uint16_t x3600 = 3U;
static int64_t x3793 = INT64_MIN;
static uint8_t x3796 = 41U;
volatile int64_t t64 = -7LL;
static int8_t x4064 = 13;
uint64_t t65 = 20449914237LLU;
int8_t x4149 = 19;
volatile int32_t x4211 = -1;
uint32_t x4297 = 2U;
uint8_t x4300 = 48U;
volatile uint64_t t70 = 57LLU;
uint32_t t73 = UINT32_MAX;
uint32_t x4522 = UINT32_MAX;
volatile uint32_t x4524 = 28U;
int16_t x4527 = -1;
int32_t t76 = 95522581;
static volatile uint64_t t77 = 106711522412123LLU;
uint64_t x4606 = 2933917991122895LLU;
int16_t x4641 = -1;
int32_t x4643 = INT32_MAX;
uint16_t x4767 = 62U;
uint16_t x4768 = 2U;
volatile uint64_t x4781 = UINT64_MAX;
int16_t x4784 = 8;
volatile uint64_t t82 = 557848371LLU;
uint32_t x4866 = 1137211724U;
volatile uint8_t x4983 = 83U;
static int32_t x5003 = 392515;
uint32_t x5070 = 6369957U;
int16_t x5071 = 223;
uint8_t x5088 = 3U;
int32_t x5425 = INT32_MAX;
volatile int8_t x5428 = 19;
volatile uint64_t t96 = 1585LLU;
int64_t x5433 = -1LL;
static volatile int64_t t97 = 3628594984LL;


void f0(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x30 = UINT64_MAX;
	uint8_t x31 = 1U;
	volatile int8_t x32 = 1;
	static uint64_t t0 = 367338922148LLU;

	t0 = (x29^((x30+x31)>>x32));

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x89 = -1;
	int16_t x90 = -1;
	static uint16_t x92 = 14U;
	uint64_t t1 = 40136211LLU;

	t1 = (x89^((x90+x91)>>x92));

	if (t1 != 18446744073582616884LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x105 = -1;
	uint32_t x106 = 0U;
	static int32_t x107 = 20;
	static volatile int8_t x108 = 16;
	uint32_t t2 = UINT32_MAX;

	t2 = (x105^((x106+x107)>>x108));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x157 = INT32_MAX;
	int32_t x158 = 200342693;
	int64_t x159 = -1LL;
	static uint8_t x160 = 0U;

	t3 = (x157^((x158+x159)>>x160));

	if (t3 != 1947140955LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x321 = 20;
	static int8_t x322 = -1;
	int8_t x323 = 13;
	volatile uint8_t x324 = 1U;
	int32_t t4 = 1597734;

	t4 = (x321^((x322+x323)>>x324));

	if (t4 != 18) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x429 = INT16_MIN;
	uint64_t x430 = 131811753527LLU;
	static uint16_t x431 = UINT16_MAX;
	uint8_t x432 = 44U;

	t5 = (x429^((x430+x431)>>x432));

	if (t5 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x437 = 3636U;
	volatile uint64_t x438 = 27650543935322105LLU;
	volatile uint32_t x439 = 9328U;
	volatile uint8_t x440 = 13U;

	t6 = (x437^((x438+x439)>>x440));

	if (t6 != 3375310538448LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x457 = 1745317945730785671LLU;
	volatile int32_t x458 = -1;
	volatile int16_t x459 = INT16_MAX;
	int16_t x460 = 0;
	volatile uint64_t t7 = 522188LLU;

	t7 = (x457^((x458+x459)>>x460));

	if (t7 != 1745317945730768505LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x465 = UINT32_MAX;
	static int64_t x466 = INT64_MAX;
	int16_t x467 = -1;
	static uint16_t x468 = 7U;
	volatile int64_t t8 = 1LL;

	t8 = (x465^((x466+x467)>>x468));

	if (t8 != 72057589742960640LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x589 = UINT16_MAX;
	int64_t x590 = -7402LL;
	volatile int64_t t9 = 98786988LL;

	t9 = (x589^((x590+x591)>>x592));

	if (t9 != 60274LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x761 = -16;
	uint16_t x762 = UINT16_MAX;
	volatile int8_t x763 = INT8_MIN;
	int16_t x764 = 0;

	t10 = (x761^((x762+x763)>>x764));

	if (t10 != -65393) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x989 = -1;
	uint16_t x992 = 13U;
	int32_t t11 = -109730;

	t11 = (x989^((x990+x991)>>x992));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x997 = INT64_MIN;
	int16_t x998 = INT16_MAX;
	volatile int16_t x999 = INT16_MAX;
	int16_t x1000 = 2;

	t12 = (x997^((x998+x999)>>x1000));

	if (t12 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1005 = INT16_MIN;
	uint16_t x1006 = 49U;
	int32_t x1007 = -1;
	int16_t x1008 = 0;
	volatile int32_t t13 = -3117;

	t13 = (x1005^((x1006+x1007)>>x1008));

	if (t13 != -32720) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x1018 = INT8_MIN;
	uint32_t x1019 = 16428U;
	volatile uint32_t t14 = 140U;

	t14 = (x1017^((x1018+x1019)>>x1020));

	if (t14 != 4294950989U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x1038 = -207;
	int64_t x1039 = INT64_MAX;
	uint8_t x1040 = 0U;

	t15 = (x1037^((x1038+x1039)>>x1040));

	if (t15 != -9223372036854775632LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1053 = 4U;
	int16_t x1054 = -1;
	volatile uint64_t x1055 = 342767203LLU;
	static uint64_t t16 = 442492682458955639LLU;

	t16 = (x1053^((x1054+x1055)>>x1056));

	if (t16 != 5355741LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1057 = 21U;
	static uint64_t x1059 = UINT64_MAX;
	volatile uint64_t t17 = 8673790990LLU;

	t17 = (x1057^((x1058+x1059)>>x1060));

	if (t17 != 294LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1109 = 6;
	volatile int16_t x1110 = INT16_MAX;
	int64_t x1111 = -1LL;
	static uint16_t x1112 = 2U;
	volatile int64_t t18 = -59855371878LL;

	t18 = (x1109^((x1110+x1111)>>x1112));

	if (t18 != 8185LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1137 = -1;
	uint64_t x1138 = UINT64_MAX;
	static int32_t x1139 = -6043;
	int8_t x1140 = 0;
	volatile uint64_t t19 = 96793598331LLU;

	t19 = (x1137^((x1138+x1139)>>x1140));

	if (t19 != 6043LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1149 = 29475U;
	int8_t x1150 = INT8_MIN;
	int32_t t20 = 12351;

	t20 = (x1149^((x1150+x1151)>>x1152));

	if (t20 != 29474) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1157 = INT16_MIN;
	volatile uint64_t x1158 = 2LLU;
	int64_t x1159 = -29618709LL;
	volatile uint64_t t21 = 4474778214380412690LLU;

	t21 = (x1157^((x1158+x1159)>>x1160));

	if (t21 != 9223372036869555958LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1281 = INT32_MAX;
	int8_t x1282 = INT8_MIN;
	uint64_t x1283 = 527331012LLU;
	static uint16_t x1284 = 24U;
	uint64_t t22 = 25565565910LLU;

	t22 = (x1281^((x1282+x1283)>>x1284));

	if (t22 != 2147483616LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1481 = UINT32_MAX;
	uint32_t x1482 = UINT32_MAX;
	uint32_t x1483 = 353877497U;
	uint32_t t23 = 3U;

	t23 = (x1481^((x1482+x1483)>>x1484));

	if (t23 != 4294945697U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1513 = UINT8_MAX;
	static uint16_t x1515 = 2064U;
	uint8_t x1516 = 0U;
	static int32_t t24 = 215177019;

	t24 = (x1513^((x1514+x1515)>>x1516));

	if (t24 != 2287) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1557 = INT8_MIN;
	int16_t x1558 = -4;
	int64_t x1559 = INT64_MAX;
	uint8_t x1560 = 7U;
	int64_t t25 = 467319823783LL;

	t25 = (x1557^((x1558+x1559)>>x1560));

	if (t25 != -72057594037927809LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1561 = 148;
	volatile uint64_t x1562 = UINT64_MAX;
	int16_t x1563 = -1;
	uint8_t x1564 = 47U;
	uint64_t t26 = 5520324LLU;

	t26 = (x1561^((x1562+x1563)>>x1564));

	if (t26 != 130923LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1637 = -1;
	uint64_t x1639 = UINT64_MAX;
	int8_t x1640 = 1;
	volatile uint64_t t27 = 44483779LLU;

	t27 = (x1637^((x1638+x1639)>>x1640));

	if (t27 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1829 = INT64_MAX;
	int32_t x1831 = 1828267;
	int16_t x1832 = 3;
	volatile int64_t t28 = -263643661341936897LL;

	t28 = (x1829^((x1830+x1831)>>x1832));

	if (t28 != 9223372036854547274LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1854 = 49808069;
	static int32_t x1855 = -1;
	uint32_t x1856 = 1U;
	volatile uint32_t t29 = 10U;

	t29 = (x1853^((x1854+x1855)>>x1856));

	if (t29 != 4270063261U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1915 = 7LL;
	static volatile int16_t x1916 = 1;
	static volatile int64_t t30 = -4LL;

	t30 = (x1913^((x1914+x1915)>>x1916));

	if (t30 != 2147483643LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1989 = -1LL;
	volatile int8_t x1990 = -7;
	uint8_t x1991 = 88U;
	int32_t x1992 = 17;
	volatile int64_t t31 = -1564671481LL;

	t31 = (x1989^((x1990+x1991)>>x1992));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1997 = INT64_MAX;
	uint8_t x2000 = 17U;
	static int64_t t32 = -2220201795746LL;

	t32 = (x1997^((x1998+x1999)>>x2000));

	if (t32 != 9223372036854760086LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2033 = INT32_MIN;
	uint8_t x2034 = UINT8_MAX;
	static uint32_t x2035 = 830U;
	uint8_t x2036 = 9U;
	volatile uint32_t t33 = 1U;

	t33 = (x2033^((x2034+x2035)>>x2036));

	if (t33 != 2147483650U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2061 = INT32_MAX;
	volatile int32_t x2062 = -478908343;
	int32_t x2063 = INT32_MAX;
	static int32_t t34 = -2496636;

	t34 = (x2061^((x2062+x2063)>>x2064));

	if (t34 != 1313195995) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2073 = 8062442LLU;
	int32_t x2075 = INT32_MAX;
	uint64_t t35 = 40411213607676LLU;

	t35 = (x2073^((x2074+x2075)>>x2076));

	if (t35 != 2139521284LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x2089 = -121;
	volatile uint32_t x2090 = 4U;
	int16_t x2091 = -1;
	volatile int8_t x2092 = 11;
	uint32_t t36 = 56U;

	t36 = (x2089^((x2090+x2091)>>x2092));

	if (t36 != 4294967175U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2104 = 8U;

	t37 = (x2101^((x2102+x2103)>>x2104));

	if (t37 != 504993) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2109 = 57;
	volatile int8_t x2110 = 4;
	volatile uint16_t x2111 = 1136U;
	uint8_t x2112 = 18U;
	static int32_t t38 = -185367108;

	t38 = (x2109^((x2110+x2111)>>x2112));

	if (t38 != 57) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2113 = 5807412931LLU;
	volatile int32_t x2114 = INT32_MIN;
	uint32_t x2115 = UINT32_MAX;
	volatile uint64_t t39 = 208412220130044374LLU;

	t39 = (x2113^((x2114+x2115)>>x2116));

	if (t39 != 5802420540LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x2333 = -1LL;
	volatile int32_t x2334 = -7592;
	uint32_t x2335 = UINT32_MAX;
	static volatile uint8_t x2336 = 2U;
	volatile int64_t t40 = 29381251LL;

	t40 = (x2333^((x2334+x2335)>>x2336));

	if (t40 != -1073739926LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2345 = INT16_MAX;
	int16_t x2346 = INT16_MIN;
	static uint16_t x2347 = UINT16_MAX;
	uint8_t x2348 = 11U;
	int32_t t41 = -219042155;

	t41 = (x2345^((x2346+x2347)>>x2348));

	if (t41 != 32752) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2349 = 85U;
	uint32_t x2350 = 29U;
	static uint16_t x2351 = 8U;
	int8_t x2352 = 3;
	static volatile uint32_t t42 = 3460U;

	t42 = (x2349^((x2350+x2351)>>x2352));

	if (t42 != 81U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2378 = INT16_MAX;
	int16_t x2379 = -1721;
	uint32_t x2380 = 4U;
	volatile uint32_t t43 = 936615U;

	t43 = (x2377^((x2378+x2379)>>x2380));

	if (t43 != 4294965355U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2381 = INT32_MIN;
	uint16_t x2382 = 3U;
	volatile int8_t x2383 = 1;
	static uint8_t x2384 = 24U;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x2381^((x2382+x2383)>>x2384));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2453 = INT16_MIN;
	int64_t x2454 = 1704443LL;
	static int32_t x2455 = INT32_MAX;
	uint8_t x2456 = 44U;

	t45 = (x2453^((x2454+x2455)>>x2456));

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2482 = -1;
	uint8_t x2483 = 103U;
	static volatile uint32_t x2484 = 2U;

	t46 = (x2481^((x2482+x2483)>>x2484));

	if (t46 != 72941700LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2509 = -1;
	uint32_t x2510 = 37U;
	int16_t x2512 = 2;
	uint32_t t47 = 110U;

	t47 = (x2509^((x2510+x2511)>>x2512));

	if (t47 != 4294967286U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2642 = 3070LLU;
	int8_t x2644 = 1;
	volatile uint64_t t48 = 8034673663618435786LLU;

	t48 = (x2641^((x2642+x2643)>>x2644));

	if (t48 != 31281LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2797 = 233663212085LLU;
	int32_t x2798 = INT32_MAX;
	static int64_t x2799 = -1LL;

	t49 = (x2797^((x2798+x2799)>>x2800));

	if (t49 != 232340739531LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x2905 = 6U;
	int8_t x2907 = INT8_MIN;
	int8_t x2908 = 60;

	t50 = (x2905^((x2906+x2907)>>x2908));

	if (t50 != 6LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x2985 = INT64_MIN;
	int8_t x2986 = INT8_MAX;
	int32_t x2987 = 864420;
	volatile int64_t t51 = -883074778LL;

	t51 = (x2985^((x2986+x2987)>>x2988));

	if (t51 != -9223372036853911261LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2993 = 221U;
	int64_t x2994 = INT64_MAX;
	static int8_t x2995 = INT8_MIN;
	int16_t x2996 = 0;
	volatile int64_t t52 = 55856246404073LL;

	t52 = (x2993^((x2994+x2995)>>x2996));

	if (t52 != 9223372036854775714LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3137 = 13794U;
	volatile uint64_t x3138 = 52854LLU;
	uint64_t x3139 = 63636735608LLU;
	uint8_t x3140 = 21U;
	uint64_t t53 = 531685902982766355LLU;

	t53 = (x3137^((x3138+x3139)>>x3140));

	if (t53 != 17258LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x3153 = 262457582LLU;
	int64_t x3154 = 182688LL;
	uint8_t x3156 = 6U;
	uint64_t t54 = 106LLU;

	t54 = (x3153^((x3154+x3155)>>x3156));

	if (t54 != 262456776LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3170 = -1;
	volatile uint16_t x3171 = 8962U;
	uint8_t x3172 = 1U;
	volatile int32_t t55 = 30;

	t55 = (x3169^((x3170+x3171)>>x3172));

	if (t55 != -4481) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x3313 = -8546187257LL;
	uint32_t x3314 = 3033U;
	int32_t x3315 = INT32_MIN;
	int8_t x3316 = 26;
	static int64_t t56 = -91087250233670LL;

	t56 = (x3313^((x3314+x3315)>>x3316));

	if (t56 != -8546187225LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3317 = 67758397559543LL;
	volatile uint64_t x3319 = UINT64_MAX;
	static uint8_t x3320 = 3U;
	volatile uint64_t t57 = 1LLU;

	t57 = (x3317^((x3318+x3319)>>x3320));

	if (t57 != 2305775250816134408LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x3385 = UINT8_MAX;
	uint64_t x3386 = 662904369055LLU;
	static int16_t x3387 = INT16_MIN;
	static uint8_t x3388 = 2U;
	volatile uint64_t t58 = 6929LLU;

	t58 = (x3385^((x3386+x3387)>>x3388));

	if (t58 != 165726083864LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3409 = INT8_MIN;
	static uint64_t x3410 = UINT64_MAX;
	int8_t x3411 = 13;
	int16_t x3412 = 0;
	static volatile uint64_t t59 = 7772462199563650164LLU;

	t59 = (x3409^((x3410+x3411)>>x3412));

	if (t59 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3533 = 12276344LLU;
	uint16_t x3534 = 25547U;
	int16_t x3535 = -10;
	static uint8_t x3536 = 4U;
	volatile uint64_t t60 = 89674348564LLU;

	t60 = (x3533^((x3534+x3535)>>x3536));

	if (t60 != 12276804LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3597 = INT8_MIN;
	int16_t x3598 = INT16_MAX;
	static int16_t x3599 = -6;
	volatile int32_t t61 = 542;

	t61 = (x3597^((x3598+x3599)>>x3600));

	if (t61 != -3969) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x3794 = INT32_MIN;
	static uint64_t x3795 = 1242254084321LLU;
	volatile uint64_t t62 = 919747178697092LLU;

	t62 = (x3793^((x3794+x3795)>>x3796));

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4033 = INT8_MIN;
	uint16_t x4034 = UINT16_MAX;
	int8_t x4035 = -2;
	uint8_t x4036 = 6U;
	int32_t t63 = -2054089;

	t63 = (x4033^((x4034+x4035)>>x4036));

	if (t63 != -897) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4053 = INT8_MAX;
	int32_t x4054 = -1;
	int64_t x4055 = INT64_MAX;
	volatile uint32_t x4056 = 1U;

	t64 = (x4053^((x4054+x4055)>>x4056));

	if (t64 != 4611686018427387776LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x4061 = INT32_MIN;
	uint64_t x4062 = 14865771276559LLU;
	volatile int64_t x4063 = 50717070LL;

	t65 = (x4061^((x4062+x4063)>>x4064));

	if (t65 != 18446744073376743504LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4097 = INT8_MIN;
	volatile uint32_t x4098 = UINT32_MAX;
	static int16_t x4099 = 6739;
	int64_t x4100 = 6LL;
	static uint32_t t66 = 3005U;

	t66 = (x4097^((x4098+x4099)>>x4100));

	if (t66 != 4294967273U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4150 = UINT16_MAX;
	uint16_t x4151 = 74U;
	uint64_t x4152 = 0LLU;
	volatile int32_t t67 = -59407;

	t67 = (x4149^((x4150+x4151)>>x4152));

	if (t67 != 65626) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4165 = -1;
	int32_t x4166 = INT32_MIN;
	uint64_t x4167 = 97664002LLU;
	int8_t x4168 = 1;
	uint64_t t68 = 6019881675LLU;

	t68 = (x4165^((x4166+x4167)>>x4168));

	if (t68 != 9223372037879685630LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4209 = INT32_MAX;
	static volatile int64_t x4210 = 6600380608LL;
	int16_t x4212 = 16;
	static int64_t t69 = 39491257452086756LL;

	t69 = (x4209^((x4210+x4211)>>x4212));

	if (t69 != 2147382934LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4298 = INT64_MIN;
	uint64_t x4299 = UINT64_MAX;

	t70 = (x4297^((x4298+x4299)>>x4300));

	if (t70 != 32765LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x4317 = UINT16_MAX;
	uint16_t x4318 = 1659U;
	uint8_t x4319 = 21U;
	int8_t x4320 = 0;
	volatile int32_t t71 = -5016183;

	t71 = (x4317^((x4318+x4319)>>x4320));

	if (t71 != 63855) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4361 = INT8_MIN;
	static uint32_t x4362 = UINT32_MAX;
	uint64_t x4363 = 47587439565057LLU;
	uint8_t x4364 = 39U;
	volatile uint64_t t72 = 224979312530743670LLU;

	t72 = (x4361^((x4362+x4363)>>x4364));

	if (t72 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4421 = -1;
	uint32_t x4422 = 48690U;
	static int8_t x4423 = -1;
	uint8_t x4424 = 24U;

	t73 = (x4421^((x4422+x4423)>>x4424));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4485 = INT32_MIN;
	int64_t x4486 = -1LL;
	uint64_t x4487 = 6LLU;
	uint8_t x4488 = 46U;
	volatile uint64_t t74 = 15LLU;

	t74 = (x4485^((x4486+x4487)>>x4488));

	if (t74 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4521 = -1;
	static uint16_t x4523 = 3430U;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x4521^((x4522+x4523)>>x4524));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4525 = 0U;
	int32_t x4526 = 1862;
	static int16_t x4528 = 1;

	t76 = (x4525^((x4526+x4527)>>x4528));

	if (t76 != 930) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4561 = -1;
	static volatile uint16_t x4562 = 4174U;
	uint64_t x4563 = 236363618814LLU;
	uint8_t x4564 = 10U;

	t77 = (x4561^((x4562+x4563)>>x4564));

	if (t77 != 18446744073478727765LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4605 = 3LLU;
	uint64_t x4607 = 357034683931341LLU;
	int32_t x4608 = 30;
	uint64_t t78 = 302971897LLU;

	t78 = (x4605^((x4606+x4607)>>x4608));

	if (t78 != 3064937LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x4642 = -19003521;
	uint8_t x4644 = 0U;
	volatile int32_t t79 = -506291;

	t79 = (x4641^((x4642+x4643)>>x4644));

	if (t79 != -2128480127) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4681 = INT8_MAX;
	int8_t x4682 = 19;
	int32_t x4683 = 52;
	volatile uint16_t x4684 = 0U;
	static volatile int32_t t80 = 1;

	t80 = (x4681^((x4682+x4683)>>x4684));

	if (t80 != 56) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4765 = INT16_MAX;
	int8_t x4766 = -1;
	volatile int32_t t81 = 21;

	t81 = (x4765^((x4766+x4767)>>x4768));

	if (t81 != 32752) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x4782 = 3373;
	uint64_t x4783 = 105LLU;

	t82 = (x4781^((x4782+x4783)>>x4784));

	if (t82 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x4865 = INT8_MIN;
	static uint8_t x4867 = UINT8_MAX;
	uint8_t x4868 = 5U;
	volatile uint32_t t83 = 321324U;

	t83 = (x4865^((x4866+x4867)>>x4868));

	if (t83 != 4259429458U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4929 = UINT16_MAX;
	static int8_t x4930 = INT8_MIN;
	uint64_t x4931 = 351776136LLU;
	static volatile uint8_t x4932 = 1U;
	volatile uint64_t t84 = 17412506029370404LLU;

	t84 = (x4929^((x4930+x4931)>>x4932));

	if (t84 != 175843707LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x4953 = 1;
	volatile int64_t x4954 = 24766247189983800LL;
	volatile uint8_t x4955 = 7U;
	volatile uint8_t x4956 = 3U;
	int64_t t85 = -5016LL;

	t85 = (x4953^((x4954+x4955)>>x4956));

	if (t85 != 3095780898747974LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4981 = -4560;
	uint8_t x4982 = UINT8_MAX;
	volatile uint64_t x4984 = 3LLU;
	int32_t t86 = 16927;

	t86 = (x4981^((x4982+x4983)>>x4984));

	if (t86 != -4582) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x5001 = UINT64_MAX;
	static uint64_t x5002 = 1726LLU;
	volatile uint8_t x5004 = 34U;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = (x5001^((x5002+x5003)>>x5004));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5041 = 9125U;
	uint8_t x5042 = 93U;
	uint64_t x5043 = UINT64_MAX;
	uint32_t x5044 = 10U;
	uint64_t t88 = 95946398416006LLU;

	t88 = (x5041^((x5042+x5043)>>x5044));

	if (t88 != 9125LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5069 = -1;
	int8_t x5072 = 0;
	volatile uint32_t t89 = 59153521U;

	t89 = (x5069^((x5070+x5071)>>x5072));

	if (t89 != 4288597115U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5085 = -1;
	int32_t x5086 = 41345;
	volatile int8_t x5087 = INT8_MIN;
	volatile int32_t t90 = 2552549;

	t90 = (x5085^((x5086+x5087)>>x5088));

	if (t90 != -5153) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5109 = INT16_MIN;
	volatile int8_t x5110 = INT8_MIN;
	uint16_t x5111 = UINT16_MAX;
	uint8_t x5112 = 5U;
	volatile int32_t t91 = 516908816;

	t91 = (x5109^((x5110+x5111)>>x5112));

	if (t91 != -30725) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5133 = INT32_MIN;
	static int8_t x5134 = INT8_MAX;
	static int32_t x5135 = -27;
	int8_t x5136 = 20;
	static volatile int32_t t92 = INT32_MIN;

	t92 = (x5133^((x5134+x5135)>>x5136));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x5233 = -1;
	uint64_t x5234 = 9043511978031LLU;
	static uint16_t x5235 = UINT16_MAX;
	int16_t x5236 = 0;
	static uint64_t t93 = 269071171944LLU;

	t93 = (x5233^((x5234+x5235)>>x5236));

	if (t93 != 18446735030197508049LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x5241 = UINT16_MAX;
	volatile uint16_t x5242 = 42U;
	volatile int8_t x5243 = -8;
	volatile uint8_t x5244 = 1U;
	int32_t t94 = 15155;

	t94 = (x5241^((x5242+x5243)>>x5244));

	if (t94 != 65518) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5369 = 18;
	int32_t x5370 = INT32_MIN;
	static uint32_t x5371 = UINT32_MAX;
	uint64_t x5372 = 3LLU;
	uint32_t t95 = 1337U;

	t95 = (x5369^((x5370+x5371)>>x5372));

	if (t95 != 268435437U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5426 = 31541320021LLU;
	static volatile int8_t x5427 = INT8_MAX;

	t96 = (x5425^((x5426+x5427)>>x5428));

	if (t96 != 2147423487LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5434 = UINT8_MAX;
	static int32_t x5435 = -1;
	volatile uint8_t x5436 = 1U;

	t97 = (x5433^((x5434+x5435)>>x5436));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5457 = INT32_MAX;
	volatile uint64_t x5458 = 194LLU;
	uint16_t x5459 = UINT16_MAX;
	uint8_t x5460 = 14U;
	static volatile uint64_t t98 = 4LLU;

	t98 = (x5457^((x5458+x5459)>>x5460));

	if (t98 != 2147483643LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5465 = UINT32_MAX;
	volatile int64_t x5466 = -1LL;
	uint32_t x5467 = UINT32_MAX;
	static int16_t x5468 = 1;
	static volatile int64_t t99 = 654302583LL;

	t99 = (x5465^((x5466+x5467)>>x5468));

	if (t99 != 2147483648LL) { NG(); } else { ; }
	
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

