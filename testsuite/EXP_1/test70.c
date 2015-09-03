#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x21 = UINT16_MAX;
uint8_t x23 = 0U;
volatile int64_t x50 = 372460LL;
uint8_t x51 = 3U;
volatile uint8_t x322 = UINT8_MAX;
int64_t x324 = 1LL;
volatile uint64_t x367 = 1LLU;
uint32_t x392 = 3949193U;
int8_t x491 = 1;
uint32_t t9 = 19609U;
uint32_t t10 = 14U;
volatile uint64_t x541 = UINT64_MAX;
int16_t x562 = 255;
uint16_t x606 = 23829U;
volatile int32_t t14 = 30;
static int8_t x1092 = INT8_MIN;
uint64_t x1166 = 24LLU;
int32_t x1213 = -21757;
uint16_t x1249 = 502U;
uint32_t x1250 = UINT32_MAX;
int16_t x1251 = 4;
volatile uint32_t t20 = 34U;
int8_t x1287 = 9;
int16_t x1288 = -1;
static int32_t t22 = 86;
uint8_t x1382 = UINT8_MAX;
uint8_t x1707 = 1U;
static volatile uint32_t t27 = 569U;
volatile int8_t x1719 = 6;
static int64_t x1766 = -1LL;
volatile int32_t x1767 = 2;
uint32_t x1873 = 12344U;
int64_t x2245 = -65083560LL;
int16_t x2270 = 332;
volatile uint64_t t35 = 580LLU;
uint8_t x2489 = 3U;
uint8_t x2491 = 1U;
int64_t x2504 = INT64_MIN;
int64_t x2525 = 2064577929LL;
int16_t x2526 = INT16_MIN;
int64_t x2537 = -1LL;
volatile uint64_t x2589 = UINT64_MAX;
static int16_t x2592 = INT16_MIN;
volatile int16_t x2775 = 1;
uint16_t x2776 = 20088U;
static uint8_t x2819 = 2U;
int8_t x2860 = INT8_MIN;
int16_t x2861 = 145;
volatile uint64_t x2902 = UINT64_MAX;
int64_t x2913 = -233893LL;
uint64_t x3353 = 259561303358684869LLU;
int8_t x3354 = 2;
uint64_t x3419 = 2LLU;
uint16_t x3567 = 4U;
volatile uint32_t t57 = 205740U;
static uint64_t x3584 = 457119202916645LLU;
static uint16_t x3754 = 10892U;
int8_t x3756 = INT8_MIN;
int32_t t60 = -3095682;
volatile int8_t x3759 = 0;
int32_t x3760 = INT32_MIN;
int32_t t61 = 1463;
volatile uint8_t x3839 = 2U;
uint64_t t62 = 15574066LLU;
volatile int8_t x3982 = INT8_MIN;
uint64_t x4049 = 66131307524739LLU;
uint64_t x4102 = 41857016074LLU;
static uint64_t t66 = 8858261106127072LLU;
uint16_t x4340 = UINT16_MAX;
uint64_t t67 = 1040027LLU;
int64_t x4373 = 12599464221019067LL;
int16_t x4374 = INT16_MIN;
uint64_t x4381 = 64785796LLU;
volatile uint8_t x4429 = 24U;
static uint8_t x4431 = 4U;
uint64_t t71 = 727860797060798252LLU;
volatile int32_t x4534 = 2903424;
int32_t x4536 = INT32_MIN;
volatile int16_t x4702 = -10;
int64_t x4745 = INT64_MAX;
int8_t x5127 = 0;
int32_t x5128 = INT32_MIN;
volatile int32_t x5152 = INT32_MIN;
uint64_t x5198 = UINT64_MAX;
volatile uint64_t t81 = 901020LLU;
volatile int8_t x5218 = -1;
volatile int64_t t82 = -942065392LL;
int8_t x5386 = INT8_MIN;
volatile uint16_t x5408 = 252U;
volatile uint32_t t87 = 7029U;
uint16_t x5417 = 124U;
static volatile uint64_t x5545 = 16327247LLU;
uint8_t x5698 = UINT8_MAX;
int64_t x5699 = 11LL;
volatile uint8_t x5831 = 0U;
int8_t x5977 = INT8_MIN;
uint32_t x5980 = 28898991U;
uint32_t x6118 = 15541215U;
int8_t x6120 = 3;
uint8_t x6123 = 0U;
int8_t x6172 = -1;
static int32_t t98 = 504286151;
volatile int8_t x6214 = INT8_MIN;


void f0(void) {
	uint64_t x22 = 28LLU;
	int16_t x24 = 377;
	static volatile uint64_t t0 = 23443564LLU;

	t0 = (((x21+x22)<<x23)%x24);

	if (t0 != 342LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x49 = -17;
	static int8_t x52 = INT8_MAX;
	volatile int64_t t1 = 1LL;

	t1 = (((x49+x50)<<x51)%x52);

	if (t1 != 124LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MAX;
	int8_t x119 = 12;
	uint8_t x120 = 3U;
	static volatile uint64_t t2 = 7LLU;

	t2 = (((x117+x118)<<x119)%x120);

	if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x309 = 62U;
	int64_t x310 = -1LL;
	uint16_t x311 = 2U;
	static volatile int8_t x312 = INT8_MAX;
	int64_t t3 = 77572805018893LL;

	t3 = (((x309+x310)<<x311)%x312);

	if (t3 != 117LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x321 = 33955615244LL;
	int8_t x323 = 9;
	volatile int64_t t4 = 1413512767970792528LL;

	t4 = (((x321+x322)<<x323)%x324);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x361 = 6482718766LLU;
	static int32_t x362 = -1;
	uint8_t x363 = 23U;
	uint16_t x364 = 499U;
	static uint64_t t5 = 537367745858501LLU;

	t5 = (((x361+x362)<<x363)%x364);

	if (t5 != 484LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x365 = INT8_MAX;
	static volatile int8_t x366 = INT8_MAX;
	int8_t x368 = 11;
	int32_t t6 = 50185291;

	t6 = (((x365+x366)<<x367)%x368);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x377 = 2121215183U;
	int8_t x378 = INT8_MAX;
	volatile int16_t x379 = 1;
	int8_t x380 = -1;
	uint32_t t7 = 27U;

	t7 = (((x377+x378)<<x379)%x380);

	if (t7 != 4242430620U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x389 = INT8_MAX;
	uint64_t x390 = 187421866476LLU;
	uint64_t x391 = 1LLU;
	volatile uint64_t t8 = 446351049921393254LLU;

	t8 = (((x389+x390)<<x391)%x392);

	if (t8 != 2130418LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x489 = INT16_MAX;
	uint32_t x490 = 17090234U;
	int8_t x492 = INT8_MIN;

	t9 = (((x489+x490)<<x491)%x492);

	if (t9 != 34246002U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x521 = 2U;
	volatile uint32_t x522 = UINT32_MAX;
	int8_t x523 = 5;
	int32_t x524 = -1;

	t10 = (((x521+x522)<<x523)%x524);

	if (t10 != 32U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x542 = INT16_MIN;
	static volatile uint16_t x543 = 27U;
	static volatile uint8_t x544 = UINT8_MAX;
	uint64_t t11 = 858LLU;

	t11 = (((x541+x542)<<x543)%x544);

	if (t11 != 244LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x561 = 7707U;
	uint16_t x563 = 0U;
	int16_t x564 = INT16_MIN;
	int32_t t12 = 37396;

	t12 = (((x561+x562)<<x563)%x564);

	if (t12 != 7962) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x605 = UINT64_MAX;
	int8_t x607 = 2;
	volatile int64_t x608 = INT64_MIN;
	uint64_t t13 = 22LLU;

	t13 = (((x605+x606)<<x607)%x608);

	if (t13 != 95312LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x689 = UINT16_MAX;
	uint16_t x690 = 18734U;
	volatile uint16_t x691 = 1U;
	int32_t x692 = -27909;

	t14 = (((x689+x690)<<x691)%x692);

	if (t14 != 1084) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x717 = 408393;
	int8_t x718 = INT8_MIN;
	uint8_t x719 = 5U;
	int16_t x720 = INT16_MIN;
	static int32_t t15 = -2954786;

	t15 = (((x717+x718)<<x719)%x720);

	if (t15 != 22816) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1009 = 18738U;
	volatile int8_t x1010 = INT8_MIN;
	int8_t x1011 = 9;
	uint16_t x1012 = 1U;
	volatile int32_t t16 = -100098431;

	t16 = (((x1009+x1010)<<x1011)%x1012);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1089 = UINT8_MAX;
	int64_t x1090 = 13947899185340919LL;
	uint8_t x1091 = 0U;
	volatile int64_t t17 = 4401443541LL;

	t17 = (((x1089+x1090)<<x1091)%x1092);

	if (t17 != 118LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x1165 = 4297U;
	uint8_t x1167 = 11U;
	int16_t x1168 = 2726;
	uint64_t t18 = 0LLU;

	t18 = (((x1165+x1166)<<x1167)%x1168);

	if (t18 != 812LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1214 = 4LLU;
	static uint32_t x1215 = 26U;
	int64_t x1216 = -10769751213LL;
	volatile uint64_t t19 = 30699265LLU;

	t19 = (((x1213+x1214)<<x1215)%x1216);

	if (t19 != 18446742613890433024LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1252 = 1;

	t20 = (((x1249+x1250)<<x1251)%x1252);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1285 = 3001720LL;
	int16_t x1286 = INT16_MIN;
	int64_t t21 = 139749474059LL;

	t21 = (((x1285+x1286)<<x1287)%x1288);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1341 = 1;
	uint8_t x1342 = 10U;
	int8_t x1343 = 5;
	uint16_t x1344 = 193U;

	t22 = (((x1341+x1342)<<x1343)%x1344);

	if (t22 != 159) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1381 = INT8_MIN;
	uint16_t x1383 = 3U;
	static int32_t x1384 = INT32_MAX;
	volatile int32_t t23 = -38101;

	t23 = (((x1381+x1382)<<x1383)%x1384);

	if (t23 != 1016) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1497 = 362299091369060424LL;
	volatile uint64_t x1498 = 599499LLU;
	volatile uint8_t x1499 = 1U;
	int32_t x1500 = INT32_MIN;
	volatile uint64_t t24 = 212LLU;

	t24 = (((x1497+x1498)<<x1499)%x1500);

	if (t24 != 724598182739319846LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x1621 = UINT64_MAX;
	int64_t x1622 = INT64_MIN;
	static int8_t x1623 = 6;
	int32_t x1624 = INT32_MIN;
	static uint64_t t25 = 15LLU;

	t25 = (((x1621+x1622)<<x1623)%x1624);

	if (t25 != 2147483584LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x1697 = 472772U;
	volatile int8_t x1698 = -1;
	uint32_t x1699 = 11U;
	int64_t x1700 = INT64_MIN;
	volatile int64_t t26 = 7753LL;

	t26 = (((x1697+x1698)<<x1699)%x1700);

	if (t26 != 968235008LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1705 = INT8_MIN;
	volatile uint32_t x1706 = 885U;
	static uint8_t x1708 = UINT8_MAX;

	t27 = (((x1705+x1706)<<x1707)%x1708);

	if (t27 != 239U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1717 = -1;
	uint64_t x1718 = 2903370LLU;
	static int64_t x1720 = 176529907557LL;
	volatile uint64_t t28 = 1LLU;

	t28 = (((x1717+x1718)<<x1719)%x1720);

	if (t28 != 185815616LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1765 = INT32_MAX;
	int64_t x1768 = -1LL;
	int64_t t29 = -51175LL;

	t29 = (((x1765+x1766)<<x1767)%x1768);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1874 = INT32_MAX;
	volatile int8_t x1875 = 25;
	int16_t x1876 = INT16_MIN;
	uint32_t t30 = 2995310U;

	t30 = (((x1873+x1874)<<x1875)%x1876);

	if (t30 != 1845493760U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1973 = UINT64_MAX;
	int8_t x1974 = INT8_MIN;
	uint8_t x1975 = 0U;
	static uint16_t x1976 = 7U;
	volatile uint64_t t31 = 106862764137639833LLU;

	t31 = (((x1973+x1974)<<x1975)%x1976);

	if (t31 != 6LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1985 = -1;
	uint8_t x1986 = 85U;
	uint32_t x1987 = 20U;
	int64_t x1988 = -1110480530LL;
	volatile int64_t t32 = 53223366084LL;

	t32 = (((x1985+x1986)<<x1987)%x1988);

	if (t32 != 88080384LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x2213 = UINT64_MAX;
	uint16_t x2214 = UINT16_MAX;
	int16_t x2215 = 1;
	int16_t x2216 = 872;
	uint64_t t33 = 7145598654926799LLU;

	t33 = (((x2213+x2214)<<x2215)%x2216);

	if (t33 != 268LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2246 = 8370531425134LLU;
	int16_t x2247 = 1;
	uint16_t x2248 = 2U;
	volatile uint64_t t34 = 15026405549818LLU;

	t34 = (((x2245+x2246)<<x2247)%x2248);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2269 = 28U;
	uint8_t x2271 = 11U;
	uint64_t x2272 = 10840LLU;

	t35 = (((x2269+x2270)<<x2271)%x2272);

	if (t35 != 160LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2453 = 229216371U;
	int64_t x2454 = -1LL;
	int8_t x2455 = 1;
	volatile int64_t x2456 = INT64_MIN;
	volatile int64_t t36 = -4LL;

	t36 = (((x2453+x2454)<<x2455)%x2456);

	if (t36 != 458432740LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2490 = 73U;
	static int16_t x2492 = INT16_MAX;
	int32_t t37 = 567907;

	t37 = (((x2489+x2490)<<x2491)%x2492);

	if (t37 != 152) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x2493 = -4;
	uint8_t x2494 = 22U;
	static uint8_t x2495 = 6U;
	volatile int16_t x2496 = INT16_MAX;
	static volatile int32_t t38 = 100;

	t38 = (((x2493+x2494)<<x2495)%x2496);

	if (t38 != 1152) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2501 = 19U;
	int64_t x2502 = 3679355299378LL;
	int8_t x2503 = 1;
	int64_t t39 = 1263114208LL;

	t39 = (((x2501+x2502)<<x2503)%x2504);

	if (t39 != 7358710598794LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2527 = 27U;
	int16_t x2528 = 5;
	int64_t t40 = -2LL;

	t40 = (((x2525+x2526)<<x2527)%x2528);

	if (t40 != 3LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2538 = UINT8_MAX;
	uint8_t x2539 = 16U;
	int64_t x2540 = -1LL;
	volatile int64_t t41 = 3220LL;

	t41 = (((x2537+x2538)<<x2539)%x2540);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2577 = UINT64_MAX;
	int32_t x2578 = 963716;
	static uint32_t x2579 = 0U;
	uint32_t x2580 = 225221U;
	volatile uint64_t t42 = 22971674166951LLU;

	t42 = (((x2577+x2578)<<x2579)%x2580);

	if (t42 != 62831LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2590 = 131U;
	static uint16_t x2591 = 47U;
	uint64_t t43 = 1870814630LLU;

	t43 = (((x2589+x2590)<<x2591)%x2592);

	if (t43 != 18295873486192640LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2773 = 27U;
	volatile int8_t x2774 = INT8_MAX;
	static int32_t t44 = -203928;

	t44 = (((x2773+x2774)<<x2775)%x2776);

	if (t44 != 308) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2817 = INT8_MIN;
	static int64_t x2818 = 33838937745759854LL;
	volatile int32_t x2820 = INT32_MIN;
	int64_t t45 = 29590192598794292LL;

	t45 = (((x2817+x2818)<<x2819)%x2820);

	if (t45 != 531003320LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2841 = 3867;
	volatile uint32_t x2842 = UINT32_MAX;
	int16_t x2843 = 0;
	uint8_t x2844 = 77U;
	volatile uint32_t t46 = 0U;

	t46 = (((x2841+x2842)<<x2843)%x2844);

	if (t46 != 16U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2857 = 14577277027LLU;
	int32_t x2858 = INT32_MIN;
	volatile uint8_t x2859 = 1U;
	volatile uint64_t t47 = 246285770832696283LLU;

	t47 = (((x2857+x2858)<<x2859)%x2860);

	if (t47 != 24859586758LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2862 = INT8_MIN;
	volatile uint16_t x2863 = 13U;
	volatile int32_t x2864 = INT32_MIN;
	int32_t t48 = -995641523;

	t48 = (((x2861+x2862)<<x2863)%x2864);

	if (t48 != 139264) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2901 = INT32_MIN;
	uint8_t x2903 = 13U;
	volatile int64_t x2904 = 503422530095295LL;
	volatile uint64_t t49 = 11927990966630LLU;

	t49 = (((x2901+x2902)<<x2903)%x2904);

	if (t49 != 318133771699618LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2914 = INT64_MAX;
	int8_t x2915 = 0;
	static int32_t x2916 = INT32_MAX;
	int64_t t50 = 62359871LL;

	t50 = (((x2913+x2914)<<x2915)%x2916);

	if (t50 != 2147249755LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3093 = -1;
	static volatile uint64_t x3094 = UINT64_MAX;
	static volatile uint8_t x3095 = 7U;
	int8_t x3096 = 6;
	volatile uint64_t t51 = 276781900507322LLU;

	t51 = (((x3093+x3094)<<x3095)%x3096);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x3355 = 23U;
	volatile uint16_t x3356 = 442U;
	volatile uint64_t t52 = 58432LLU;

	t52 = (((x3353+x3354)<<x3355)%x3356);

	if (t52 != 368LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3369 = 284U;
	int8_t x3370 = INT8_MIN;
	int8_t x3371 = 1;
	uint8_t x3372 = UINT8_MAX;
	volatile int32_t t53 = 748583;

	t53 = (((x3369+x3370)<<x3371)%x3372);

	if (t53 != 57) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x3417 = -7;
	static uint8_t x3418 = 12U;
	int16_t x3420 = INT16_MIN;
	volatile int32_t t54 = 492601015;

	t54 = (((x3417+x3418)<<x3419)%x3420);

	if (t54 != 20) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3457 = 47U;
	volatile uint8_t x3458 = 6U;
	static volatile int8_t x3459 = 23;
	volatile int32_t x3460 = -1;
	int32_t t55 = -14232446;

	t55 = (((x3457+x3458)<<x3459)%x3460);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3497 = -1;
	int16_t x3498 = 4139;
	uint16_t x3499 = 4U;
	volatile int16_t x3500 = INT16_MIN;
	int32_t t56 = 32;

	t56 = (((x3497+x3498)<<x3499)%x3500);

	if (t56 != 672) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x3565 = 28;
	uint32_t x3566 = 407770U;
	uint16_t x3568 = 4214U;

	t57 = (((x3565+x3566)<<x3567)%x3568);

	if (t57 != 1496U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3581 = -1;
	static uint8_t x3582 = UINT8_MAX;
	uint32_t x3583 = 2U;
	uint64_t t58 = 10687LLU;

	t58 = (((x3581+x3582)<<x3583)%x3584);

	if (t58 != 1016LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x3705 = 475607047406LL;
	int16_t x3706 = INT16_MIN;
	int32_t x3707 = 7;
	volatile int32_t x3708 = 9;
	int64_t t59 = 10742649122LL;

	t59 = (((x3705+x3706)<<x3707)%x3708);

	if (t59 != 3LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3753 = 0;
	uint8_t x3755 = 3U;

	t60 = (((x3753+x3754)<<x3755)%x3756);

	if (t60 != 96) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3757 = UINT8_MAX;
	uint8_t x3758 = 2U;

	t61 = (((x3757+x3758)<<x3759)%x3760);

	if (t61 != 257) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3837 = UINT64_MAX;
	uint32_t x3838 = UINT32_MAX;
	static int64_t x3840 = INT64_MAX;

	t62 = (((x3837+x3838)<<x3839)%x3840);

	if (t62 != 17179869176LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3885 = 50;
	int64_t x3886 = -1LL;
	volatile int8_t x3887 = 1;
	int32_t x3888 = 102667501;
	volatile int64_t t63 = 6720999099254428LL;

	t63 = (((x3885+x3886)<<x3887)%x3888);

	if (t63 != 98LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3981 = 19U;
	uint16_t x3983 = 9U;
	uint64_t x3984 = UINT64_MAX;
	uint64_t t64 = 639495840LLU;

	t64 = (((x3981+x3982)<<x3983)%x3984);

	if (t64 != 4294911488LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4050 = 4U;
	static int8_t x4051 = 12;
	volatile int16_t x4052 = INT16_MIN;
	uint64_t t65 = 2430758585544LLU;

	t65 = (((x4049+x4050)<<x4051)%x4052);

	if (t65 != 270873835621347328LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x4101 = -1;
	uint8_t x4103 = 12U;
	uint16_t x4104 = 14U;

	t66 = (((x4101+x4102)<<x4103)%x4104);

	if (t66 != 12LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x4337 = 3052LLU;
	volatile int8_t x4338 = -28;
	uint8_t x4339 = 0U;

	t67 = (((x4337+x4338)<<x4339)%x4340);

	if (t67 != 3024LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4375 = 6LLU;
	uint32_t x4376 = 31631U;
	static volatile int64_t t68 = 9417616552LL;

	t68 = (((x4373+x4374)<<x4375)%x4376);

	if (t68 != 19237LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4382 = -1;
	uint8_t x4383 = 0U;
	int32_t x4384 = -68510586;
	volatile uint64_t t69 = 253129333LLU;

	t69 = (((x4381+x4382)<<x4383)%x4384);

	if (t69 != 64785795LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4430 = UINT32_MAX;
	int64_t x4432 = INT64_MAX;
	int64_t t70 = 489018LL;

	t70 = (((x4429+x4430)<<x4431)%x4432);

	if (t70 != 368LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4453 = 3LLU;
	int16_t x4454 = -1;
	int32_t x4455 = 9;
	static volatile int16_t x4456 = -6094;

	t71 = (((x4453+x4454)<<x4455)%x4456);

	if (t71 != 1024LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4533 = -5;
	int8_t x4535 = 1;
	volatile int32_t t72 = 29;

	t72 = (((x4533+x4534)<<x4535)%x4536);

	if (t72 != 5806838) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4569 = UINT64_MAX;
	volatile int16_t x4570 = INT16_MIN;
	static int16_t x4571 = 6;
	int16_t x4572 = INT16_MAX;
	uint64_t t73 = 474184420212988LLU;

	t73 = (((x4569+x4570)<<x4571)%x4572);

	if (t73 != 32655LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4605 = INT16_MIN;
	static uint64_t x4606 = 224803578071808445LLU;
	int8_t x4607 = 31;
	uint64_t x4608 = 46103799909956493LLU;
	static volatile uint64_t t74 = 6843823404464LLU;

	t74 = (((x4605+x4606)<<x4607)%x4608);

	if (t74 != 33638951316417401LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4701 = 1929637915LLU;
	int16_t x4703 = 0;
	uint8_t x4704 = 62U;
	volatile uint64_t t75 = 88869329LLU;

	t75 = (((x4701+x4702)<<x4703)%x4704);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4746 = -20;
	int8_t x4747 = 0;
	int32_t x4748 = INT32_MIN;
	volatile int64_t t76 = 16261061LL;

	t76 = (((x4745+x4746)<<x4747)%x4748);

	if (t76 != 2147483627LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4965 = 167;
	int16_t x4966 = -1;
	int8_t x4967 = 1;
	static int32_t x4968 = 1;
	int32_t t77 = 260704;

	t77 = (((x4965+x4966)<<x4967)%x4968);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x5009 = 337U;
	int8_t x5010 = INT8_MAX;
	uint8_t x5011 = 9U;
	int16_t x5012 = INT16_MIN;
	static volatile int32_t t78 = 3723759;

	t78 = (((x5009+x5010)<<x5011)%x5012);

	if (t78 != 8192) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x5125 = -1;
	int64_t x5126 = 1169568415LL;
	volatile int64_t t79 = 1LL;

	t79 = (((x5125+x5126)<<x5127)%x5128);

	if (t79 != 1169568414LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x5149 = -1LL;
	static uint32_t x5150 = 101U;
	static uint32_t x5151 = 31U;
	int64_t t80 = 3585477550431126LL;

	t80 = (((x5149+x5150)<<x5151)%x5152);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5197 = INT16_MIN;
	volatile uint16_t x5199 = 54U;
	int8_t x5200 = INT8_MIN;

	t81 = (((x5197+x5198)<<x5199)%x5200);

	if (t81 != 18428729675200069632LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5217 = 9884U;
	volatile int8_t x5219 = 0;
	int64_t x5220 = INT64_MIN;

	t82 = (((x5217+x5218)<<x5219)%x5220);

	if (t82 != 9883LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5353 = INT16_MAX;
	volatile int8_t x5354 = INT8_MAX;
	static uint16_t x5355 = 7U;
	volatile uint64_t x5356 = UINT64_MAX;
	uint64_t t83 = 17317775601645LLU;

	t83 = (((x5353+x5354)<<x5355)%x5356);

	if (t83 != 4210432LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5365 = -1;
	uint16_t x5366 = UINT16_MAX;
	volatile int16_t x5367 = 9;
	volatile uint64_t x5368 = 100LLU;
	volatile uint64_t t84 = 1LLU;

	t84 = (((x5365+x5366)<<x5367)%x5368);

	if (t84 != 8LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x5377 = UINT64_MAX;
	volatile int64_t x5378 = INT64_MAX;
	uint8_t x5379 = 0U;
	int8_t x5380 = INT8_MIN;
	uint64_t t85 = 18284828193LLU;

	t85 = (((x5377+x5378)<<x5379)%x5380);

	if (t85 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x5385 = 568LLU;
	static int8_t x5387 = 17;
	uint32_t x5388 = 28972U;
	volatile uint64_t t86 = 1509656283772775166LLU;

	t86 = (((x5385+x5386)<<x5387)%x5388);

	if (t86 != 17400LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5405 = 2666974U;
	uint32_t x5406 = 248406460U;
	uint16_t x5407 = 0U;

	t87 = (((x5405+x5406)<<x5407)%x5408);

	if (t87 != 38U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x5418 = -59;
	int64_t x5419 = 9LL;
	uint8_t x5420 = UINT8_MAX;
	volatile int32_t t88 = -60;

	t88 = (((x5417+x5418)<<x5419)%x5420);

	if (t88 != 130) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5477 = 109LLU;
	volatile int32_t x5478 = -30768;
	uint8_t x5479 = 3U;
	uint64_t x5480 = UINT64_MAX;
	volatile uint64_t t89 = 18274LLU;

	t89 = (((x5477+x5478)<<x5479)%x5480);

	if (t89 != 18446744073709306344LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5546 = INT8_MIN;
	static uint32_t x5547 = 0U;
	int16_t x5548 = -11952;
	volatile uint64_t t90 = 29LLU;

	t90 = (((x5545+x5546)<<x5547)%x5548);

	if (t90 != 16327119LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5697 = 2650091329LLU;
	uint32_t x5700 = 3U;
	volatile uint64_t t91 = 175LLU;

	t91 = (((x5697+x5698)<<x5699)%x5700);

	if (t91 != 2LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x5809 = UINT32_MAX;
	uint64_t x5810 = UINT64_MAX;
	uint8_t x5811 = 22U;
	int64_t x5812 = -12LL;
	volatile uint64_t t92 = 17384180LLU;

	t92 = (((x5809+x5810)<<x5811)%x5812);

	if (t92 != 18014398501093376LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5829 = 1U;
	int8_t x5830 = 0;
	int32_t x5832 = 903678879;
	uint32_t t93 = 1464591U;

	t93 = (((x5829+x5830)<<x5831)%x5832);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5978 = 28803;
	int8_t x5979 = 0;
	uint32_t t94 = 29513766U;

	t94 = (((x5977+x5978)<<x5979)%x5980);

	if (t94 != 28675U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x6073 = 12;
	volatile uint64_t x6074 = 27499131686307LLU;
	uint32_t x6075 = 14U;
	volatile uint32_t x6076 = 108846215U;
	uint64_t t95 = 1881251176850LLU;

	t95 = (((x6073+x6074)<<x6075)%x6076);

	if (t95 != 77609306LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6117 = -1;
	int32_t x6119 = 1;
	volatile uint32_t t96 = 1U;

	t96 = (((x6117+x6118)<<x6119)%x6120);

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6121 = 44U;
	volatile int16_t x6122 = INT16_MAX;
	int32_t x6124 = -1;
	volatile int32_t t97 = 692752;

	t97 = (((x6121+x6122)<<x6123)%x6124);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6169 = UINT8_MAX;
	volatile int16_t x6170 = INT16_MAX;
	volatile uint8_t x6171 = 15U;

	t98 = (((x6169+x6170)<<x6171)%x6172);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6213 = 139LLU;
	uint8_t x6215 = 0U;
	volatile int32_t x6216 = -1;
	uint64_t t99 = 4978187592LLU;

	t99 = (((x6213+x6214)<<x6215)%x6216);

	if (t99 != 11LLU) { NG(); } else { ; }
	
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

