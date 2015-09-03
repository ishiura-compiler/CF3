#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x74 = INT64_MAX;
uint8_t x75 = 3U;
static uint32_t x233 = UINT32_MAX;
int8_t x262 = INT8_MAX;
uint8_t x274 = 103U;
uint16_t x405 = 24U;
static volatile uint32_t x433 = 4097U;
uint32_t t7 = 5861U;
static volatile int32_t t9 = 562903;
volatile int16_t x529 = 12;
static int32_t x565 = 5;
int8_t x566 = INT8_MAX;
volatile uint32_t x649 = UINT32_MAX;
int64_t x750 = INT64_MIN;
uint8_t x752 = 1U;
static volatile int32_t t14 = -2043;
volatile int32_t t15 = 141616477;
volatile uint32_t t16 = 403U;
uint16_t x915 = 7U;
int64_t x933 = INT64_MAX;
int32_t x935 = 99980;
uint64_t x1179 = UINT64_MAX;
int8_t x1243 = INT8_MIN;
volatile int32_t t22 = 5;
volatile uint32_t t23 = 85378U;
uint8_t x1388 = 2U;
int32_t x1446 = -89785101;
static volatile uint16_t x1448 = 3U;
int64_t x1542 = INT64_MIN;
static int8_t x1544 = 4;
static int64_t x1562 = INT64_MIN;
static volatile int8_t x1587 = INT8_MIN;
uint16_t x1588 = 0U;
uint32_t x1609 = 1U;
uint64_t x1925 = UINT64_MAX;
int8_t x1926 = 15;
int8_t x1928 = 0;
volatile uint8_t x1950 = UINT8_MAX;
volatile uint16_t x1968 = 0U;
static volatile int32_t t37 = 40953663;
volatile int32_t t38 = 114;
uint8_t x2357 = UINT8_MAX;
int64_t x2358 = INT64_MIN;
volatile int32_t t40 = 569258;
static volatile uint8_t x2460 = 1U;
static uint64_t x2499 = 52813870672482990LLU;
int8_t x2533 = INT8_MAX;
static int32_t t47 = 80024176;
static uint64_t x2573 = 14522666612967056LLU;
volatile uint64_t x2575 = 121839924172LLU;
static uint64_t t48 = 22170110216919138LLU;
uint16_t x2625 = 32U;
static volatile int32_t t49 = -83;
int8_t x2703 = -13;
volatile uint8_t x2704 = 0U;
int8_t x2742 = INT8_MIN;
static uint32_t x2744 = 3U;
volatile uint8_t x2828 = 31U;
static uint16_t x2961 = 254U;
static uint64_t x2963 = 3378500233LLU;
static uint16_t x2964 = 0U;
uint8_t x2975 = 2U;
volatile int64_t t55 = 7LL;
uint16_t x3056 = 14U;
volatile uint8_t x3372 = 1U;
int64_t x3394 = -1LL;
int16_t x3429 = 503;
int64_t x3431 = INT64_MIN;
int64_t x3586 = INT64_MIN;
int32_t t66 = -25881;
volatile int8_t x3785 = 3;
volatile uint32_t t69 = 24020U;
int64_t x3901 = 17254LL;
static volatile int32_t t71 = -88743;
volatile uint16_t x4022 = 69U;
int64_t x4058 = INT64_MIN;
int32_t x4061 = INT32_MAX;
int64_t x4115 = 219656991568LL;
static uint16_t x4277 = UINT16_MAX;
volatile int32_t t77 = -52;
uint8_t x4297 = 13U;
volatile int16_t x4448 = 0;
int16_t x4493 = INT16_MAX;
uint64_t x4505 = 1LLU;
int16_t x4507 = INT16_MIN;
int64_t x4671 = 49662470LL;
uint64_t x4934 = 8092946980LLU;
int8_t x4968 = 27;
volatile int64_t x5009 = 2778961402842LL;
int8_t x5012 = 11;
uint16_t x5197 = 152U;
volatile int64_t x5198 = -1957245531LL;
static volatile uint64_t t92 = 734459961127422142LLU;
int16_t x5308 = 63;
volatile uint64_t t93 = 81811005893LLU;
uint8_t x5365 = 110U;
int16_t x5368 = 5;
int8_t x5391 = 0;
int64_t x5678 = -1591101256372995602LL;
static uint32_t x5681 = UINT32_MAX;


void f0(void) {
	uint32_t x73 = UINT32_MAX;
	static uint8_t x76 = 9U;
	static volatile uint32_t t0 = 39U;

	t0 = ((x73+(x74==x75))>>x76);

	if (t0 != 8388607U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x125 = 55711972139LLU;
	uint64_t x126 = UINT64_MAX;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = 0;
	volatile uint64_t t1 = 307251470765LLU;

	t1 = ((x125+(x126==x127))>>x128);

	if (t1 != 55711972140LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x213 = INT16_MAX;
	volatile uint64_t x214 = UINT64_MAX;
	int8_t x215 = -1;
	static volatile uint32_t x216 = 4U;
	volatile int32_t t2 = -2676995;

	t2 = ((x213+(x214==x215))>>x216);

	if (t2 != 2048) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x234 = 141545181U;
	uint16_t x235 = 243U;
	uint8_t x236 = 4U;
	uint32_t t3 = 3827199U;

	t3 = ((x233+(x234==x235))>>x236);

	if (t3 != 268435455U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x261 = 94LL;
	int16_t x263 = INT16_MIN;
	int16_t x264 = 30;
	static int64_t t4 = -153400681747LL;

	t4 = ((x261+(x262==x263))>>x264);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x273 = UINT16_MAX;
	uint32_t x275 = 9U;
	uint8_t x276 = 27U;
	volatile int32_t t5 = 0;

	t5 = ((x273+(x274==x275))>>x276);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x406 = 93U;
	uint8_t x407 = UINT8_MAX;
	volatile uint8_t x408 = 15U;
	volatile int32_t t6 = 1;

	t6 = ((x405+(x406==x407))>>x408);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x434 = 318U;
	static uint8_t x435 = UINT8_MAX;
	uint8_t x436 = 1U;

	t7 = ((x433+(x434==x435))>>x436);

	if (t7 != 2048U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x449 = UINT64_MAX;
	static volatile int64_t x450 = INT64_MIN;
	int64_t x451 = -349682LL;
	uint8_t x452 = 1U;
	volatile uint64_t t8 = 387153680282LLU;

	t8 = ((x449+(x450==x451))>>x452);

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x513 = INT16_MAX;
	volatile int64_t x514 = -21373LL;
	static int32_t x515 = -1;
	static volatile int8_t x516 = 24;

	t9 = ((x513+(x514==x515))>>x516);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x530 = INT64_MAX;
	volatile int32_t x531 = -37847653;
	volatile int16_t x532 = 2;
	volatile int32_t t10 = -20607;

	t10 = ((x529+(x530==x531))>>x532);

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x567 = 22;
	static volatile int32_t x568 = 1;
	int32_t t11 = -3754766;

	t11 = ((x565+(x566==x567))>>x568);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x609 = UINT32_MAX;
	static int16_t x610 = INT16_MAX;
	uint64_t x611 = UINT64_MAX;
	int64_t x612 = 4LL;
	uint32_t t12 = 356905009U;

	t12 = ((x609+(x610==x611))>>x612);

	if (t12 != 268435455U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x650 = -1LL;
	int32_t x651 = -1;
	int16_t x652 = 7;
	uint32_t t13 = 32654U;

	t13 = ((x649+(x650==x651))>>x652);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x749 = 1;
	int32_t x751 = INT32_MIN;

	t14 = ((x749+(x750==x751))>>x752);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x785 = 1;
	volatile uint16_t x786 = UINT16_MAX;
	volatile int8_t x787 = INT8_MAX;
	int32_t x788 = 17;

	t15 = ((x785+(x786==x787))>>x788);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x861 = 914382U;
	uint16_t x862 = 24981U;
	int32_t x863 = -1;
	static uint8_t x864 = 2U;

	t16 = ((x861+(x862==x863))>>x864);

	if (t16 != 228595U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x913 = INT64_MAX;
	volatile uint32_t x914 = 275U;
	static int8_t x916 = 28;
	volatile int64_t t17 = 817679829471799567LL;

	t17 = ((x913+(x914==x915))>>x916);

	if (t17 != 34359738367LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x934 = 15855LL;
	int8_t x936 = 2;
	static int64_t t18 = -677176028128690LL;

	t18 = ((x933+(x934==x935))>>x936);

	if (t18 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x953 = INT64_MAX;
	int16_t x954 = INT16_MIN;
	int64_t x955 = INT64_MIN;
	uint8_t x956 = 15U;
	volatile int64_t t19 = -6LL;

	t19 = ((x953+(x954==x955))>>x956);

	if (t19 != 281474976710655LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1065 = UINT16_MAX;
	volatile uint16_t x1066 = UINT16_MAX;
	int8_t x1067 = INT8_MIN;
	uint16_t x1068 = 0U;
	volatile int32_t t20 = -24387981;

	t20 = ((x1065+(x1066==x1067))>>x1068);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1177 = 245LLU;
	volatile int32_t x1178 = -327;
	static uint8_t x1180 = 14U;
	volatile uint64_t t21 = 3047784967LLU;

	t21 = ((x1177+(x1178==x1179))>>x1180);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1241 = INT16_MAX;
	uint32_t x1242 = 1053629U;
	volatile uint8_t x1244 = 0U;

	t22 = ((x1241+(x1242==x1243))>>x1244);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1245 = 1U;
	static int32_t x1246 = -1;
	uint32_t x1247 = UINT32_MAX;
	static int8_t x1248 = 1;

	t23 = ((x1245+(x1246==x1247))>>x1248);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1305 = UINT64_MAX;
	int16_t x1306 = -1;
	volatile int64_t x1307 = 104468868LL;
	static uint8_t x1308 = 2U;
	uint64_t t24 = 501189534812LLU;

	t24 = ((x1305+(x1306==x1307))>>x1308);

	if (t24 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1385 = 28647U;
	int8_t x1386 = -1;
	uint8_t x1387 = 3U;
	volatile int32_t t25 = 14;

	t25 = ((x1385+(x1386==x1387))>>x1388);

	if (t25 != 7161) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1445 = INT8_MAX;
	static uint16_t x1447 = 16123U;
	int32_t t26 = -2643570;

	t26 = ((x1445+(x1446==x1447))>>x1448);

	if (t26 != 15) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1541 = UINT64_MAX;
	static int16_t x1543 = INT16_MIN;
	volatile uint64_t t27 = 77369553882LLU;

	t27 = ((x1541+(x1542==x1543))>>x1544);

	if (t27 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1561 = 3324151251773LLU;
	int8_t x1563 = -30;
	int8_t x1564 = 1;
	static uint64_t t28 = 1637856531506232LLU;

	t28 = ((x1561+(x1562==x1563))>>x1564);

	if (t28 != 1662075625886LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1585 = 16U;
	int16_t x1586 = INT16_MIN;
	volatile int32_t t29 = 551680014;

	t29 = ((x1585+(x1586==x1587))>>x1588);

	if (t29 != 16) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1610 = UINT16_MAX;
	static int64_t x1611 = -50005LL;
	volatile int16_t x1612 = 9;
	static uint32_t t30 = 308498U;

	t30 = ((x1609+(x1610==x1611))>>x1612);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1721 = -1;
	uint32_t x1722 = UINT32_MAX;
	int16_t x1723 = -1;
	int32_t x1724 = 1;
	int32_t t31 = -1340927;

	t31 = ((x1721+(x1722==x1723))>>x1724);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1789 = 5947;
	uint16_t x1790 = UINT16_MAX;
	int8_t x1791 = 5;
	uint64_t x1792 = 0LLU;
	int32_t t32 = -6921;

	t32 = ((x1789+(x1790==x1791))>>x1792);

	if (t32 != 5947) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x1841 = 39;
	uint64_t x1842 = 227661322LLU;
	volatile int8_t x1843 = INT8_MIN;
	static uint8_t x1844 = 4U;
	volatile int32_t t33 = 14755;

	t33 = ((x1841+(x1842==x1843))>>x1844);

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1927 = 31;
	uint64_t t34 = UINT64_MAX;

	t34 = ((x1925+(x1926==x1927))>>x1928);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1949 = 25U;
	static volatile int16_t x1951 = 12;
	volatile uint8_t x1952 = 24U;
	int32_t t35 = -3806;

	t35 = ((x1949+(x1950==x1951))>>x1952);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1965 = INT64_MAX;
	int64_t x1966 = INT64_MAX;
	int16_t x1967 = -1;
	volatile int64_t t36 = INT64_MAX;

	t36 = ((x1965+(x1966==x1967))>>x1968);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x2009 = 1U;
	int8_t x2010 = 27;
	uint64_t x2011 = UINT64_MAX;
	uint8_t x2012 = 0U;

	t37 = ((x2009+(x2010==x2011))>>x2012);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x2349 = 19U;
	int8_t x2350 = -29;
	int32_t x2351 = -5;
	volatile int8_t x2352 = 0;

	t38 = ((x2349+(x2350==x2351))>>x2352);

	if (t38 != 19) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x2359 = INT32_MIN;
	uint64_t x2360 = 22LLU;
	volatile int32_t t39 = 594449;

	t39 = ((x2357+(x2358==x2359))>>x2360);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2405 = INT8_MAX;
	int64_t x2406 = 4153LL;
	volatile int16_t x2407 = INT16_MIN;
	volatile uint8_t x2408 = 0U;

	t40 = ((x2405+(x2406==x2407))>>x2408);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2425 = UINT8_MAX;
	int64_t x2426 = INT64_MAX;
	uint32_t x2427 = 33156309U;
	int8_t x2428 = 0;
	static volatile int32_t t41 = 129395744;

	t41 = ((x2425+(x2426==x2427))>>x2428);

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2433 = 14836U;
	uint32_t x2434 = UINT32_MAX;
	int64_t x2435 = -1LL;
	int8_t x2436 = 5;
	uint32_t t42 = 2733784U;

	t42 = ((x2433+(x2434==x2435))>>x2436);

	if (t42 != 463U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2457 = 8125923094227268LL;
	int32_t x2458 = INT32_MIN;
	int8_t x2459 = 8;
	static volatile int64_t t43 = 247203969666LL;

	t43 = ((x2457+(x2458==x2459))>>x2460);

	if (t43 != 4062961547113634LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2497 = INT32_MAX;
	int8_t x2498 = 4;
	volatile int8_t x2500 = 23;
	volatile int32_t t44 = -173;

	t44 = ((x2497+(x2498==x2499))>>x2500);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2521 = INT32_MAX;
	uint32_t x2522 = 2239760U;
	volatile int32_t x2523 = INT32_MAX;
	int8_t x2524 = 3;
	static volatile int32_t t45 = -205;

	t45 = ((x2521+(x2522==x2523))>>x2524);

	if (t45 != 268435455) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2529 = 63845473U;
	int32_t x2530 = -1;
	int8_t x2531 = -1;
	volatile uint8_t x2532 = 17U;
	uint32_t t46 = 1579U;

	t46 = ((x2529+(x2530==x2531))>>x2532);

	if (t46 != 487U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2534 = -1;
	static int32_t x2535 = -1;
	static int8_t x2536 = 1;

	t47 = ((x2533+(x2534==x2535))>>x2536);

	if (t47 != 64) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x2574 = 1823494437918LLU;
	uint8_t x2576 = 5U;

	t48 = ((x2573+(x2574==x2575))>>x2576);

	if (t48 != 453833331655220LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x2626 = INT64_MIN;
	int32_t x2627 = -35384683;
	int32_t x2628 = 12;

	t49 = ((x2625+(x2626==x2627))>>x2628);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2701 = 40U;
	uint8_t x2702 = UINT8_MAX;
	int32_t t50 = 7877287;

	t50 = ((x2701+(x2702==x2703))>>x2704);

	if (t50 != 40) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2705 = 32108844LLU;
	int32_t x2706 = INT32_MAX;
	int8_t x2707 = -3;
	int16_t x2708 = 25;
	uint64_t t51 = 2144074356LLU;

	t51 = ((x2705+(x2706==x2707))>>x2708);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x2741 = INT32_MAX;
	static int32_t x2743 = INT32_MIN;
	int32_t t52 = -237996;

	t52 = ((x2741+(x2742==x2743))>>x2744);

	if (t52 != 268435455) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2825 = INT16_MAX;
	int16_t x2826 = 57;
	static int16_t x2827 = INT16_MAX;
	int32_t t53 = -1596968;

	t53 = ((x2825+(x2826==x2827))>>x2828);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2962 = 14;
	static volatile int32_t t54 = -131;

	t54 = ((x2961+(x2962==x2963))>>x2964);

	if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2973 = INT64_MAX;
	uint64_t x2974 = 7296LLU;
	uint16_t x2976 = 21U;

	t55 = ((x2973+(x2974==x2975))>>x2976);

	if (t55 != 4398046511103LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3053 = INT64_MAX;
	int32_t x3054 = -1;
	int32_t x3055 = INT32_MIN;
	int64_t t56 = 4504LL;

	t56 = ((x3053+(x3054==x3055))>>x3056);

	if (t56 != 562949953421311LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3061 = INT64_MAX;
	uint16_t x3062 = 3U;
	volatile int64_t x3063 = INT64_MIN;
	uint32_t x3064 = 1U;
	int64_t t57 = 225713342064932224LL;

	t57 = ((x3061+(x3062==x3063))>>x3064);

	if (t57 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3265 = INT8_MAX;
	static volatile uint16_t x3266 = UINT16_MAX;
	uint64_t x3267 = 1096580115208LLU;
	int8_t x3268 = 18;
	static int32_t t58 = 0;

	t58 = ((x3265+(x3266==x3267))>>x3268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3321 = 1655977;
	int64_t x3322 = 113666066357LL;
	static int8_t x3323 = INT8_MIN;
	uint32_t x3324 = 1U;
	static volatile int32_t t59 = -260109069;

	t59 = ((x3321+(x3322==x3323))>>x3324);

	if (t59 != 827988) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3345 = UINT16_MAX;
	int64_t x3346 = INT64_MIN;
	volatile int32_t x3347 = -3129;
	volatile uint8_t x3348 = 2U;
	volatile int32_t t60 = -529773576;

	t60 = ((x3345+(x3346==x3347))>>x3348);

	if (t60 != 16383) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3369 = INT16_MAX;
	int32_t x3370 = INT32_MIN;
	static int32_t x3371 = INT32_MIN;
	volatile int32_t t61 = 731042214;

	t61 = ((x3369+(x3370==x3371))>>x3372);

	if (t61 != 16384) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x3393 = 7U;
	volatile int16_t x3395 = 0;
	int8_t x3396 = 26;
	int32_t t62 = -1;

	t62 = ((x3393+(x3394==x3395))>>x3396);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x3430 = -1LL;
	volatile int16_t x3432 = 0;
	int32_t t63 = 1064292958;

	t63 = ((x3429+(x3430==x3431))>>x3432);

	if (t63 != 503) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3557 = 14814LLU;
	int64_t x3558 = -1LL;
	int64_t x3559 = -31413LL;
	static volatile int8_t x3560 = 1;
	uint64_t t64 = 5225LLU;

	t64 = ((x3557+(x3558==x3559))>>x3560);

	if (t64 != 7407LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x3585 = 155U;
	int32_t x3587 = INT32_MIN;
	volatile int8_t x3588 = 14;
	static int32_t t65 = 455203;

	t65 = ((x3585+(x3586==x3587))>>x3588);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3705 = 2U;
	static int8_t x3706 = INT8_MAX;
	static uint8_t x3707 = 83U;
	int8_t x3708 = 3;

	t66 = ((x3705+(x3706==x3707))>>x3708);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3786 = -1;
	volatile int16_t x3787 = -1;
	uint8_t x3788 = 7U;
	volatile int32_t t67 = 166643;

	t67 = ((x3785+(x3786==x3787))>>x3788);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x3821 = 527730368LLU;
	uint32_t x3822 = UINT32_MAX;
	int16_t x3823 = INT16_MIN;
	uint8_t x3824 = 12U;
	uint64_t t68 = 2870707560960LLU;

	t68 = ((x3821+(x3822==x3823))>>x3824);

	if (t68 != 128840LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x3873 = 251U;
	static volatile int64_t x3874 = 121898012296565918LL;
	volatile int64_t x3875 = -465464LL;
	static uint16_t x3876 = 2U;

	t69 = ((x3873+(x3874==x3875))>>x3876);

	if (t69 != 62U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3902 = -55;
	volatile uint16_t x3903 = 8620U;
	uint16_t x3904 = 1U;
	volatile int64_t t70 = 2LL;

	t70 = ((x3901+(x3902==x3903))>>x3904);

	if (t70 != 8627LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3993 = 7U;
	uint8_t x3994 = UINT8_MAX;
	uint64_t x3995 = 1956488267LLU;
	uint16_t x3996 = 2U;

	t71 = ((x3993+(x3994==x3995))>>x3996);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x4021 = 46765LL;
	int64_t x4023 = 701381742330LL;
	volatile uint8_t x4024 = 6U;
	volatile int64_t t72 = -1423830LL;

	t72 = ((x4021+(x4022==x4023))>>x4024);

	if (t72 != 730LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x4057 = UINT8_MAX;
	static volatile int16_t x4059 = -3168;
	uint16_t x4060 = 1U;
	int32_t t73 = 1;

	t73 = ((x4057+(x4058==x4059))>>x4060);

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4062 = 17;
	static int8_t x4063 = INT8_MIN;
	int8_t x4064 = 1;
	int32_t t74 = 0;

	t74 = ((x4061+(x4062==x4063))>>x4064);

	if (t74 != 1073741823) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x4101 = UINT64_MAX;
	int32_t x4102 = -14;
	static int64_t x4103 = -28117LL;
	int8_t x4104 = 52;
	static uint64_t t75 = 64649326753LLU;

	t75 = ((x4101+(x4102==x4103))>>x4104);

	if (t75 != 4095LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4113 = 0;
	static int64_t x4114 = INT64_MIN;
	int8_t x4116 = 1;
	int32_t t76 = -825382089;

	t76 = ((x4113+(x4114==x4115))>>x4116);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x4278 = 9U;
	volatile int8_t x4279 = INT8_MIN;
	uint8_t x4280 = 10U;

	t77 = ((x4277+(x4278==x4279))>>x4280);

	if (t77 != 63) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x4298 = -1;
	int8_t x4299 = -1;
	uint64_t x4300 = 0LLU;
	volatile int32_t t78 = -217078;

	t78 = ((x4297+(x4298==x4299))>>x4300);

	if (t78 != 14) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x4445 = 1LLU;
	int64_t x4446 = 186094450412968LL;
	int64_t x4447 = -1LL;
	static volatile uint64_t t79 = 6075294581668121604LLU;

	t79 = ((x4445+(x4446==x4447))>>x4448);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4494 = -1;
	int16_t x4495 = INT16_MIN;
	uint16_t x4496 = 6U;
	int32_t t80 = -1;

	t80 = ((x4493+(x4494==x4495))>>x4496);

	if (t80 != 511) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4506 = UINT32_MAX;
	uint8_t x4508 = 2U;
	static volatile uint64_t t81 = 15LLU;

	t81 = ((x4505+(x4506==x4507))>>x4508);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4549 = 7;
	uint8_t x4550 = 32U;
	uint16_t x4551 = 522U;
	static uint8_t x4552 = 0U;
	volatile int32_t t82 = -1;

	t82 = ((x4549+(x4550==x4551))>>x4552);

	if (t82 != 7) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x4589 = 0U;
	int64_t x4590 = INT64_MIN;
	uint8_t x4591 = UINT8_MAX;
	uint32_t x4592 = 2U;
	volatile int32_t t83 = 5;

	t83 = ((x4589+(x4590==x4591))>>x4592);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x4669 = 6U;
	uint32_t x4670 = 12911U;
	int8_t x4672 = 1;
	int32_t t84 = 112605;

	t84 = ((x4669+(x4670==x4671))>>x4672);

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x4813 = 0U;
	int16_t x4814 = -1;
	volatile uint8_t x4815 = 73U;
	int16_t x4816 = 0;
	volatile int32_t t85 = -94;

	t85 = ((x4813+(x4814==x4815))>>x4816);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4933 = INT16_MAX;
	int8_t x4935 = -1;
	static volatile int8_t x4936 = 1;
	volatile int32_t t86 = -505;

	t86 = ((x4933+(x4934==x4935))>>x4936);

	if (t86 != 16383) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4965 = UINT32_MAX;
	static int16_t x4966 = 3035;
	int8_t x4967 = 1;
	uint32_t t87 = 141956U;

	t87 = ((x4965+(x4966==x4967))>>x4968);

	if (t87 != 31U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5001 = UINT32_MAX;
	uint16_t x5002 = 343U;
	static volatile int16_t x5003 = INT16_MIN;
	static uint16_t x5004 = 13U;
	uint32_t t88 = 0U;

	t88 = ((x5001+(x5002==x5003))>>x5004);

	if (t88 != 524287U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5010 = UINT16_MAX;
	volatile uint8_t x5011 = 62U;
	volatile int64_t t89 = -586LL;

	t89 = ((x5009+(x5010==x5011))>>x5012);

	if (t89 != 1356914747LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5181 = 22;
	int8_t x5182 = -5;
	int8_t x5183 = INT8_MIN;
	static volatile uint16_t x5184 = 24U;
	volatile int32_t t90 = -811;

	t90 = ((x5181+(x5182==x5183))>>x5184);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x5199 = INT16_MIN;
	uint16_t x5200 = 2U;
	int32_t t91 = 399932;

	t91 = ((x5197+(x5198==x5199))>>x5200);

	if (t91 != 38) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5297 = 14LLU;
	uint64_t x5298 = 124825758959141LLU;
	static int16_t x5299 = 320;
	int8_t x5300 = 22;

	t92 = ((x5297+(x5298==x5299))>>x5300);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5305 = 1700196347801384LLU;
	static int32_t x5306 = 214468369;
	static volatile int8_t x5307 = INT8_MIN;

	t93 = ((x5305+(x5306==x5307))>>x5308);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x5366 = -477;
	static uint64_t x5367 = UINT64_MAX;
	volatile int32_t t94 = 334752131;

	t94 = ((x5365+(x5366==x5367))>>x5368);

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x5385 = INT8_MAX;
	int64_t x5386 = -1LL;
	volatile uint64_t x5387 = 12687LLU;
	uint8_t x5388 = 23U;
	volatile int32_t t95 = -3184;

	t95 = ((x5385+(x5386==x5387))>>x5388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5389 = UINT8_MAX;
	static uint32_t x5390 = UINT32_MAX;
	volatile uint32_t x5392 = 0U;
	volatile int32_t t96 = 123002;

	t96 = ((x5389+(x5390==x5391))>>x5392);

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5597 = INT16_MAX;
	int64_t x5598 = -1LL;
	int16_t x5599 = INT16_MAX;
	uint8_t x5600 = 8U;
	static int32_t t97 = 4;

	t97 = ((x5597+(x5598==x5599))>>x5600);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5677 = 96230748693029LL;
	static int16_t x5679 = 24;
	static volatile uint16_t x5680 = 10U;
	int64_t t98 = -466347LL;

	t98 = ((x5677+(x5678==x5679))>>x5680);

	if (t98 != 93975340520LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x5682 = -1981;
	uint64_t x5683 = 951930743352070LLU;
	volatile int32_t x5684 = 2;
	volatile uint32_t t99 = 21U;

	t99 = ((x5681+(x5682==x5683))>>x5684);

	if (t99 != 1073741823U) { NG(); } else { ; }
	
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

