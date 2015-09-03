#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x191 = -1;
static int16_t x192 = 0;
volatile int16_t x330 = INT16_MIN;
volatile int32_t t1 = 22571;
static uint64_t x387 = UINT64_MAX;
volatile int8_t x524 = 17;
static volatile uint32_t t6 = 462U;
int64_t x859 = -1624438LL;
volatile uint8_t x860 = 7U;
volatile int8_t x994 = -9;
volatile uint64_t x1033 = 158755LLU;
uint32_t x1159 = 31754U;
static uint32_t x1226 = UINT32_MAX;
uint16_t x1228 = 3U;
volatile uint8_t x1260 = 3U;
static uint64_t x1269 = UINT64_MAX;
int32_t x1271 = -1;
uint64_t x1491 = 267LLU;
int8_t x1509 = 1;
int16_t x1590 = 1;
static uint32_t x1591 = UINT32_MAX;
uint8_t x1592 = 3U;
volatile int8_t x1681 = 31;
uint8_t x1682 = 3U;
uint16_t x1684 = 7U;
int32_t t25 = -13019004;
int32_t x1717 = INT32_MAX;
uint8_t x1718 = 112U;
static int64_t x1721 = 365416310106LL;
static int64_t x1722 = INT64_MAX;
uint16_t x1727 = 14620U;
uint32_t x1746 = 1066U;
int64_t x1755 = 562804139LL;
static uint8_t x1911 = UINT8_MAX;
int8_t x1933 = 0;
int64_t x1938 = -96055446579253LL;
int32_t x1939 = 6;
volatile int64_t t33 = 0LL;
int8_t x1973 = 5;
static volatile int32_t t35 = -113866782;
static volatile int64_t x2214 = 2457573319312989LL;
int16_t x2251 = INT16_MIN;
static uint32_t x2491 = 0U;
int32_t x2569 = INT32_MAX;
static uint8_t x2584 = 6U;
uint32_t x3003 = 1806791U;
int64_t t47 = -417771459986061LL;
uint16_t x3083 = UINT16_MAX;
uint64_t t51 = UINT64_MAX;
int32_t x3298 = INT32_MIN;
int32_t t52 = 61246799;
uint32_t x3322 = 120472788U;
int32_t t53 = 95525518;
uint8_t x3390 = 1U;
uint64_t t55 = 4877LLU;
int32_t t56 = -412048;
volatile int32_t x3629 = INT32_MAX;
volatile int32_t t57 = 3876313;
volatile int32_t x3663 = 2;
int8_t x3699 = INT8_MAX;
volatile uint32_t x3789 = 89372U;
uint8_t x3796 = 15U;
volatile int32_t t61 = 38281;
uint64_t t62 = 2418171600964LLU;
volatile int16_t x3959 = -1;
int32_t t63 = -41;
int32_t x3978 = -1;
uint16_t x4012 = 4U;
volatile int32_t t66 = -1389;
volatile uint32_t x4037 = UINT32_MAX;
uint16_t x4039 = 3284U;
static int32_t x4230 = 16055;
uint8_t x4329 = 3U;
int8_t x4607 = INT8_MIN;
int16_t x4608 = 0;
static volatile uint64_t t76 = 31746388041318LLU;
static uint64_t t77 = 20975901589796366LLU;
uint8_t x4704 = 15U;
uint8_t x4712 = 8U;
uint8_t x4852 = 4U;
static int64_t x4961 = INT64_MAX;
uint32_t x4964 = 5U;
uint16_t x5049 = UINT16_MAX;
int64_t x5050 = INT64_MIN;
volatile int32_t t84 = 39;
static volatile int64_t x5250 = INT64_MIN;
int8_t x5252 = 4;
static uint16_t x5543 = 3U;
uint16_t x5544 = 1U;
static uint8_t x5692 = 4U;
volatile int32_t t90 = 176423;
int32_t x5723 = INT32_MAX;
int64_t x5733 = INT64_MAX;
int32_t x5734 = -1;
volatile uint8_t x5837 = 91U;
int64_t x5838 = INT64_MIN;
static uint8_t x5972 = 3U;
volatile int32_t t98 = -25150;


void f0(void) {
	int8_t x189 = 2;
	static int16_t x190 = -1;
	int32_t t0 = 13994;

	t0 = ((x189-(x190<x191))>>x192);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x329 = 384U;
	int64_t x331 = INT64_MIN;
	int8_t x332 = 7;

	t1 = ((x329-(x330<x331))>>x332);

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x365 = 11330LLU;
	int64_t x366 = -1LL;
	int8_t x367 = 1;
	int32_t x368 = 0;
	static uint64_t t2 = 344688303LLU;

	t2 = ((x365-(x366<x367))>>x368);

	if (t2 != 11329LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x385 = 10U;
	static int16_t x386 = 0;
	uint32_t x388 = 25U;
	volatile int32_t t3 = -54;

	t3 = ((x385-(x386<x387))>>x388);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x497 = 0U;
	int64_t x498 = INT64_MAX;
	int64_t x499 = -1LL;
	uint16_t x500 = 11U;
	int32_t t4 = 1492;

	t4 = ((x497-(x498<x499))>>x500);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x521 = UINT16_MAX;
	uint16_t x522 = UINT16_MAX;
	int32_t x523 = INT32_MIN;
	int32_t t5 = 1;

	t5 = ((x521-(x522<x523))>>x524);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x609 = 894556U;
	int64_t x610 = INT64_MIN;
	uint16_t x611 = 73U;
	static uint8_t x612 = 0U;

	t6 = ((x609-(x610<x611))>>x612);

	if (t6 != 894555U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x633 = UINT16_MAX;
	int32_t x634 = INT32_MAX;
	int8_t x635 = -1;
	int8_t x636 = 2;
	volatile int32_t t7 = -181486;

	t7 = ((x633-(x634<x635))>>x636);

	if (t7 != 16383) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x737 = 0U;
	volatile int64_t x738 = INT64_MAX;
	int16_t x739 = INT16_MAX;
	static uint8_t x740 = 1U;
	int32_t t8 = -20687;

	t8 = ((x737-(x738<x739))>>x740);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x857 = UINT64_MAX;
	int32_t x858 = INT32_MAX;
	uint64_t t9 = 496562553668LLU;

	t9 = ((x857-(x858<x859))>>x860);

	if (t9 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x913 = UINT32_MAX;
	volatile uint8_t x914 = 99U;
	volatile int64_t x915 = INT64_MIN;
	static uint16_t x916 = 2U;
	uint32_t t10 = 5U;

	t10 = ((x913-(x914<x915))>>x916);

	if (t10 != 1073741823U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x949 = 14U;
	static volatile int32_t x950 = 46;
	uint64_t x951 = 1077063291000107LLU;
	uint16_t x952 = 2U;
	int32_t t11 = 1961519;

	t11 = ((x949-(x950<x951))>>x952);

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x973 = 1213238;
	int64_t x974 = -1LL;
	static int16_t x975 = INT16_MIN;
	int8_t x976 = 21;
	int32_t t12 = -44961489;

	t12 = ((x973-(x974<x975))>>x976);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x993 = 6U;
	uint16_t x995 = UINT16_MAX;
	int8_t x996 = 1;
	static uint32_t t13 = 0U;

	t13 = ((x993-(x994<x995))>>x996);

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1034 = -48;
	uint8_t x1035 = 17U;
	int32_t x1036 = 1;
	volatile uint64_t t14 = 112375153093541LLU;

	t14 = ((x1033-(x1034<x1035))>>x1036);

	if (t14 != 79377LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1041 = 1;
	volatile int8_t x1042 = 45;
	int32_t x1043 = -1;
	static uint16_t x1044 = 1U;
	int32_t t15 = 254562;

	t15 = ((x1041-(x1042<x1043))>>x1044);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x1157 = UINT16_MAX;
	volatile int16_t x1158 = INT16_MIN;
	uint8_t x1160 = 0U;
	int32_t t16 = -2002899;

	t16 = ((x1157-(x1158<x1159))>>x1160);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1225 = 3339984148718435LL;
	static uint32_t x1227 = 26U;
	volatile int64_t t17 = -262LL;

	t17 = ((x1225-(x1226<x1227))>>x1228);

	if (t17 != 417498018589804LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x1257 = 2662LLU;
	volatile int64_t x1258 = INT64_MIN;
	static uint8_t x1259 = UINT8_MAX;
	uint64_t t18 = 12100622992LLU;

	t18 = ((x1257-(x1258<x1259))>>x1260);

	if (t18 != 332LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1270 = INT16_MIN;
	static uint16_t x1272 = 3U;
	static volatile uint64_t t19 = 6997433926504606LLU;

	t19 = ((x1269-(x1270<x1271))>>x1272);

	if (t19 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1377 = 54435929040LLU;
	volatile int32_t x1378 = -1;
	int64_t x1379 = INT64_MAX;
	static volatile uint8_t x1380 = 4U;
	volatile uint64_t t20 = 1LLU;

	t20 = ((x1377-(x1378<x1379))>>x1380);

	if (t20 != 3402245564LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1489 = 2U;
	uint8_t x1490 = UINT8_MAX;
	uint32_t x1492 = 14U;
	volatile int32_t t21 = -422;

	t21 = ((x1489-(x1490<x1491))>>x1492);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1497 = INT8_MAX;
	int16_t x1498 = -4;
	int64_t x1499 = -1LL;
	int8_t x1500 = 31;
	volatile int32_t t22 = -10;

	t22 = ((x1497-(x1498<x1499))>>x1500);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1510 = UINT8_MAX;
	int16_t x1511 = INT16_MIN;
	int8_t x1512 = 0;
	static volatile int32_t t23 = -249804276;

	t23 = ((x1509-(x1510<x1511))>>x1512);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1589 = 31;
	int32_t t24 = -7657;

	t24 = ((x1589-(x1590<x1591))>>x1592);

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x1683 = 36U;

	t25 = ((x1681-(x1682<x1683))>>x1684);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1719 = -1;
	volatile int8_t x1720 = 1;
	int32_t t26 = -449222881;

	t26 = ((x1717-(x1718<x1719))>>x1720);

	if (t26 != 1073741823) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1723 = 15;
	int16_t x1724 = 1;
	volatile int64_t t27 = -342418764006639912LL;

	t27 = ((x1721-(x1722<x1723))>>x1724);

	if (t27 != 182708155053LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1725 = INT16_MAX;
	static uint8_t x1726 = 1U;
	uint8_t x1728 = 1U;
	static volatile int32_t t28 = -6026;

	t28 = ((x1725-(x1726<x1727))>>x1728);

	if (t28 != 16383) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1745 = 6U;
	volatile int32_t x1747 = 11420;
	uint8_t x1748 = 31U;
	int32_t t29 = -76;

	t29 = ((x1745-(x1746<x1747))>>x1748);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1753 = 1;
	static uint8_t x1754 = UINT8_MAX;
	volatile uint32_t x1756 = 12U;
	int32_t t30 = -679618728;

	t30 = ((x1753-(x1754<x1755))>>x1756);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1909 = UINT64_MAX;
	static int8_t x1910 = INT8_MIN;
	volatile uint32_t x1912 = 27U;
	volatile uint64_t t31 = 3729LLU;

	t31 = ((x1909-(x1910<x1911))>>x1912);

	if (t31 != 137438953471LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1934 = INT16_MAX;
	uint8_t x1935 = 9U;
	int16_t x1936 = 15;
	int32_t t32 = -3376005;

	t32 = ((x1933-(x1934<x1935))>>x1936);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x1937 = INT64_MAX;
	int8_t x1940 = 59;

	t33 = ((x1937-(x1938<x1939))>>x1940);

	if (t33 != 15LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1974 = 22;
	volatile int16_t x1975 = INT16_MAX;
	uint8_t x1976 = 3U;
	volatile int32_t t34 = -32762485;

	t34 = ((x1973-(x1974<x1975))>>x1976);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2109 = 2;
	static uint64_t x2110 = 24413440479LLU;
	uint8_t x2111 = 0U;
	int8_t x2112 = 4;

	t35 = ((x2109-(x2110<x2111))>>x2112);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x2169 = INT8_MAX;
	int64_t x2170 = -54645596679028LL;
	int32_t x2171 = INT32_MAX;
	static int8_t x2172 = 4;
	volatile int32_t t36 = 178;

	t36 = ((x2169-(x2170<x2171))>>x2172);

	if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2173 = 2824U;
	int64_t x2174 = INT64_MIN;
	static int64_t x2175 = INT64_MIN;
	volatile uint8_t x2176 = 19U;
	uint32_t t37 = 7768888U;

	t37 = ((x2173-(x2174<x2175))>>x2176);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2213 = INT64_MAX;
	int16_t x2215 = INT16_MAX;
	static int8_t x2216 = 2;
	int64_t t38 = 111050994LL;

	t38 = ((x2213-(x2214<x2215))>>x2216);

	if (t38 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2249 = INT64_MAX;
	static uint8_t x2250 = 12U;
	uint8_t x2252 = 1U;
	int64_t t39 = 52108899LL;

	t39 = ((x2249-(x2250<x2251))>>x2252);

	if (t39 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2269 = UINT16_MAX;
	static int16_t x2270 = INT16_MAX;
	volatile int64_t x2271 = -420365782443903786LL;
	uint8_t x2272 = 19U;
	volatile int32_t t40 = -2;

	t40 = ((x2269-(x2270<x2271))>>x2272);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2489 = 74895099287782LLU;
	static volatile int8_t x2490 = INT8_MIN;
	uint32_t x2492 = 29U;
	volatile uint64_t t41 = 3085892819492915LLU;

	t41 = ((x2489-(x2490<x2491))>>x2492);

	if (t41 != 139502LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2517 = UINT32_MAX;
	static uint8_t x2518 = UINT8_MAX;
	int64_t x2519 = INT64_MAX;
	volatile uint16_t x2520 = 1U;
	volatile uint32_t t42 = 43U;

	t42 = ((x2517-(x2518<x2519))>>x2520);

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x2570 = 431U;
	int8_t x2571 = INT8_MIN;
	uint8_t x2572 = 0U;
	volatile int32_t t43 = INT32_MAX;

	t43 = ((x2569-(x2570<x2571))>>x2572);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2581 = UINT64_MAX;
	static int32_t x2582 = -1760201;
	volatile int8_t x2583 = 1;
	volatile uint64_t t44 = 235851LLU;

	t44 = ((x2581-(x2582<x2583))>>x2584);

	if (t44 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2609 = 209U;
	int64_t x2610 = -143657406431053LL;
	uint64_t x2611 = 7039355294011LLU;
	volatile uint8_t x2612 = 1U;
	static volatile int32_t t45 = -16452;

	t45 = ((x2609-(x2610<x2611))>>x2612);

	if (t45 != 104) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3001 = INT64_MAX;
	int16_t x3002 = -1;
	static uint8_t x3004 = 0U;
	int64_t t46 = INT64_MAX;

	t46 = ((x3001-(x3002<x3003))>>x3004);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3065 = 11493062LL;
	int16_t x3066 = 38;
	int64_t x3067 = INT64_MIN;
	uint8_t x3068 = 30U;

	t47 = ((x3065-(x3066<x3067))>>x3068);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3081 = 44032U;
	uint32_t x3082 = UINT32_MAX;
	static uint16_t x3084 = 0U;
	volatile uint32_t t48 = 198136U;

	t48 = ((x3081-(x3082<x3083))>>x3084);

	if (t48 != 44032U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x3245 = INT32_MAX;
	static volatile int16_t x3246 = -1;
	static int16_t x3247 = 0;
	uint8_t x3248 = 1U;
	volatile int32_t t49 = 1838;

	t49 = ((x3245-(x3246<x3247))>>x3248);

	if (t49 != 1073741823) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3273 = 20547293LLU;
	volatile uint16_t x3274 = UINT16_MAX;
	volatile int64_t x3275 = 0LL;
	volatile uint16_t x3276 = 15U;
	volatile uint64_t t50 = 1759LLU;

	t50 = ((x3273-(x3274<x3275))>>x3276);

	if (t50 != 627LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3281 = UINT64_MAX;
	volatile uint8_t x3282 = UINT8_MAX;
	int8_t x3283 = INT8_MIN;
	int16_t x3284 = 0;

	t51 = ((x3281-(x3282<x3283))>>x3284);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3297 = 4;
	static volatile int32_t x3299 = -1;
	uint64_t x3300 = 0LLU;

	t52 = ((x3297-(x3298<x3299))>>x3300);

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3321 = 1;
	int8_t x3323 = -1;
	uint16_t x3324 = 3U;

	t53 = ((x3321-(x3322<x3323))>>x3324);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3389 = 9806U;
	static int32_t x3391 = 1016;
	uint8_t x3392 = 2U;
	static int32_t t54 = -999413364;

	t54 = ((x3389-(x3390<x3391))>>x3392);

	if (t54 != 2451) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x3533 = UINT64_MAX;
	int16_t x3534 = -789;
	int8_t x3535 = 6;
	volatile uint16_t x3536 = 1U;

	t55 = ((x3533-(x3534<x3535))>>x3536);

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3613 = INT32_MAX;
	int64_t x3614 = 1361031LL;
	uint16_t x3615 = 32U;
	uint8_t x3616 = 23U;

	t56 = ((x3613-(x3614<x3615))>>x3616);

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3630 = INT16_MAX;
	volatile int8_t x3631 = -1;
	uint8_t x3632 = 2U;

	t57 = ((x3629-(x3630<x3631))>>x3632);

	if (t57 != 536870911) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3661 = 9U;
	volatile int8_t x3662 = INT8_MIN;
	uint32_t x3664 = 7U;
	static volatile int32_t t58 = -8361;

	t58 = ((x3661-(x3662<x3663))>>x3664);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3697 = UINT64_MAX;
	volatile int8_t x3698 = 0;
	uint8_t x3700 = 7U;
	uint64_t t59 = 211549423002583033LLU;

	t59 = ((x3697-(x3698<x3699))>>x3700);

	if (t59 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3790 = INT8_MAX;
	int8_t x3791 = 4;
	uint8_t x3792 = 1U;
	volatile uint32_t t60 = 224U;

	t60 = ((x3789-(x3790<x3791))>>x3792);

	if (t60 != 44686U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3793 = UINT8_MAX;
	int64_t x3794 = INT64_MIN;
	volatile uint8_t x3795 = 0U;

	t61 = ((x3793-(x3794<x3795))>>x3796);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3849 = UINT64_MAX;
	int64_t x3850 = -1LL;
	int64_t x3851 = INT64_MIN;
	uint16_t x3852 = 4U;

	t62 = ((x3849-(x3850<x3851))>>x3852);

	if (t62 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3957 = INT16_MAX;
	int16_t x3958 = -17;
	uint8_t x3960 = 23U;

	t63 = ((x3957-(x3958<x3959))>>x3960);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3965 = INT8_MAX;
	uint16_t x3966 = 4320U;
	int64_t x3967 = -1LL;
	uint8_t x3968 = 2U;
	volatile int32_t t64 = -20081683;

	t64 = ((x3965-(x3966<x3967))>>x3968);

	if (t64 != 31) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3977 = 1550688118317249LL;
	int32_t x3979 = INT32_MIN;
	int8_t x3980 = 3;
	int64_t t65 = -26375LL;

	t65 = ((x3977-(x3978<x3979))>>x3980);

	if (t65 != 193836014789656LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4009 = 10U;
	int32_t x4010 = -88541;
	uint8_t x4011 = 0U;

	t66 = ((x4009-(x4010<x4011))>>x4012);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x4038 = 144LL;
	volatile int8_t x4040 = 19;
	static uint32_t t67 = 190094U;

	t67 = ((x4037-(x4038<x4039))>>x4040);

	if (t67 != 8191U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4121 = UINT8_MAX;
	uint32_t x4122 = 4U;
	uint16_t x4123 = UINT16_MAX;
	static uint16_t x4124 = 12U;
	int32_t t68 = 6587649;

	t68 = ((x4121-(x4122<x4123))>>x4124);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4173 = 0U;
	uint64_t x4174 = 510902441247109LLU;
	volatile uint64_t x4175 = 1202321274LLU;
	int32_t x4176 = 14;
	volatile uint32_t t69 = 18909036U;

	t69 = ((x4173-(x4174<x4175))>>x4176);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x4229 = UINT16_MAX;
	int16_t x4231 = 0;
	volatile uint8_t x4232 = 0U;
	static volatile int32_t t70 = 1;

	t70 = ((x4229-(x4230<x4231))>>x4232);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4321 = UINT64_MAX;
	int32_t x4322 = -1;
	static volatile int32_t x4323 = -39721374;
	int16_t x4324 = 1;
	volatile uint64_t t71 = 724738566LLU;

	t71 = ((x4321-(x4322<x4323))>>x4324);

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4330 = INT8_MAX;
	int32_t x4331 = 21;
	uint8_t x4332 = 6U;
	volatile int32_t t72 = 88;

	t72 = ((x4329-(x4330<x4331))>>x4332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4433 = INT32_MAX;
	static int64_t x4434 = -1LL;
	static int8_t x4435 = INT8_MAX;
	volatile int16_t x4436 = 0;
	volatile int32_t t73 = 27;

	t73 = ((x4433-(x4434<x4435))>>x4436);

	if (t73 != 2147483646) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4569 = 5U;
	uint8_t x4570 = 0U;
	int8_t x4571 = 11;
	uint16_t x4572 = 0U;
	int32_t t74 = -3497;

	t74 = ((x4569-(x4570<x4571))>>x4572);

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x4577 = 1;
	volatile uint16_t x4578 = 17187U;
	int16_t x4579 = INT16_MAX;
	uint8_t x4580 = 30U;
	volatile int32_t t75 = 75670;

	t75 = ((x4577-(x4578<x4579))>>x4580);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4605 = UINT64_MAX;
	uint32_t x4606 = 166813U;

	t76 = ((x4605-(x4606<x4607))>>x4608);

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4657 = UINT64_MAX;
	int16_t x4658 = INT16_MIN;
	int16_t x4659 = -1;
	uint8_t x4660 = 9U;

	t77 = ((x4657-(x4658<x4659))>>x4660);

	if (t77 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4701 = INT64_MAX;
	static uint8_t x4702 = 10U;
	uint64_t x4703 = 1LLU;
	volatile int64_t t78 = -232LL;

	t78 = ((x4701-(x4702<x4703))>>x4704);

	if (t78 != 281474976710655LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4709 = 449791396;
	int64_t x4710 = INT64_MAX;
	uint16_t x4711 = UINT16_MAX;
	volatile int32_t t79 = -7;

	t79 = ((x4709-(x4710<x4711))>>x4712);

	if (t79 != 1756997) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4849 = 70U;
	int64_t x4850 = -72634LL;
	uint64_t x4851 = 21LLU;
	volatile int32_t t80 = -47;

	t80 = ((x4849-(x4850<x4851))>>x4852);

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4917 = INT8_MAX;
	uint16_t x4918 = UINT16_MAX;
	volatile uint64_t x4919 = 1410LLU;
	volatile uint8_t x4920 = 10U;
	int32_t t81 = -18032;

	t81 = ((x4917-(x4918<x4919))>>x4920);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4949 = INT8_MAX;
	int64_t x4950 = INT64_MAX;
	volatile uint8_t x4951 = UINT8_MAX;
	volatile uint16_t x4952 = 16U;
	int32_t t82 = 1;

	t82 = ((x4949-(x4950<x4951))>>x4952);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4962 = INT8_MIN;
	volatile int64_t x4963 = -141LL;
	int64_t t83 = 54767682999LL;

	t83 = ((x4961-(x4962<x4963))>>x4964);

	if (t83 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x5051 = 745557130649883609LL;
	int8_t x5052 = 14;

	t84 = ((x5049-(x5050<x5051))>>x5052);

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x5249 = 947735LLU;
	static int64_t x5251 = -115407872LL;
	volatile uint64_t t85 = 296941LLU;

	t85 = ((x5249-(x5250<x5251))>>x5252);

	if (t85 != 59233LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5285 = 8U;
	uint16_t x5286 = UINT16_MAX;
	static volatile int64_t x5287 = -1LL;
	volatile uint16_t x5288 = 1U;
	volatile int32_t t86 = -3;

	t86 = ((x5285-(x5286<x5287))>>x5288);

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5353 = 260U;
	uint16_t x5354 = 1309U;
	int8_t x5355 = INT8_MIN;
	int16_t x5356 = 0;
	int32_t t87 = -23636;

	t87 = ((x5353-(x5354<x5355))>>x5356);

	if (t87 != 260) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5541 = 23329212143LLU;
	int8_t x5542 = -1;
	uint64_t t88 = 125608691676291476LLU;

	t88 = ((x5541-(x5542<x5543))>>x5544);

	if (t88 != 11664606071LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x5689 = 5U;
	int8_t x5690 = INT8_MIN;
	int32_t x5691 = -5;
	uint32_t t89 = 3655U;

	t89 = ((x5689-(x5690<x5691))>>x5692);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5717 = 37U;
	volatile int16_t x5718 = INT16_MIN;
	int8_t x5719 = INT8_MAX;
	uint8_t x5720 = 24U;

	t90 = ((x5717-(x5718<x5719))>>x5720);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5721 = INT32_MAX;
	uint32_t x5722 = 234925U;
	uint16_t x5724 = 29U;
	volatile int32_t t91 = -2198774;

	t91 = ((x5721-(x5722<x5723))>>x5724);

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x5735 = -1;
	int8_t x5736 = 12;
	int64_t t92 = 78074LL;

	t92 = ((x5733-(x5734<x5735))>>x5736);

	if (t92 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x5757 = UINT32_MAX;
	uint8_t x5758 = UINT8_MAX;
	int8_t x5759 = INT8_MAX;
	uint16_t x5760 = 15U;
	volatile uint32_t t93 = 52109327U;

	t93 = ((x5757-(x5758<x5759))>>x5760);

	if (t93 != 131071U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x5797 = UINT8_MAX;
	static volatile int8_t x5798 = INT8_MIN;
	int16_t x5799 = INT16_MAX;
	uint8_t x5800 = 8U;
	volatile int32_t t94 = -48413004;

	t94 = ((x5797-(x5798<x5799))>>x5800);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5801 = 0U;
	int64_t x5802 = INT64_MAX;
	static int64_t x5803 = 73LL;
	volatile uint8_t x5804 = 0U;
	static volatile int32_t t95 = -103;

	t95 = ((x5801-(x5802<x5803))>>x5804);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5839 = -1LL;
	uint8_t x5840 = 2U;
	int32_t t96 = 5676407;

	t96 = ((x5837-(x5838<x5839))>>x5840);

	if (t96 != 22) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x5961 = 28343165713001835LLU;
	uint8_t x5962 = 2U;
	int32_t x5963 = INT32_MIN;
	uint8_t x5964 = 1U;
	volatile uint64_t t97 = 119953800635269LLU;

	t97 = ((x5961-(x5962<x5963))>>x5964);

	if (t97 != 14171582856500917LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5969 = 21795U;
	uint64_t x5970 = 583271026LLU;
	int32_t x5971 = INT32_MIN;

	t98 = ((x5969-(x5970<x5971))>>x5972);

	if (t98 != 2724) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6097 = INT64_MAX;
	int8_t x6098 = INT8_MAX;
	static volatile int64_t x6099 = INT64_MIN;
	int8_t x6100 = 0;
	volatile int64_t t99 = INT64_MAX;

	t99 = ((x6097-(x6098<x6099))>>x6100);

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

