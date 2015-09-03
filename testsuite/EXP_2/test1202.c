#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x21 = 0U;
int8_t x24 = 0;
volatile int32_t t0 = 100653;
uint8_t x36 = 5U;
uint32_t x78 = 13000U;
uint64_t x79 = 120235012LLU;
volatile int64_t x80 = 3LL;
uint16_t x81 = UINT16_MAX;
static int8_t x84 = 4;
static uint8_t x217 = 5U;
int8_t x218 = 38;
volatile uint8_t x333 = UINT8_MAX;
volatile int64_t x336 = 0LL;
volatile int64_t x438 = -1LL;
volatile int32_t t10 = 24325;
static volatile int16_t x450 = -1;
static volatile uint8_t x452 = 12U;
static uint64_t x503 = 34060815199040760LLU;
static volatile uint16_t x592 = 1U;
int32_t t13 = 123424;
uint64_t x605 = 183390299374LLU;
static int64_t t15 = 256530LL;
volatile int8_t x679 = INT8_MIN;
int8_t x680 = 1;
int8_t x763 = INT8_MIN;
volatile uint32_t x961 = 60398U;
volatile int8_t x963 = INT8_MIN;
volatile int32_t t22 = -935372612;
static uint16_t x1200 = 2U;
int16_t x1274 = -1;
uint16_t x1621 = 0U;
volatile int64_t x1735 = 4194248134LL;
uint16_t x1749 = 2U;
uint8_t x1929 = 108U;
uint8_t x1930 = 1U;
uint8_t x1932 = 1U;
int16_t x1962 = INT16_MAX;
int64_t x1963 = 73LL;
static uint16_t x2048 = 0U;
uint8_t x2055 = UINT8_MAX;
uint16_t x2181 = 11046U;
volatile uint16_t x2182 = 2U;
static int8_t x2313 = INT8_MAX;
uint32_t x2433 = 8629U;
uint32_t x2434 = 16U;
static int32_t x2435 = -1;
uint8_t x2564 = 8U;
volatile int32_t t44 = 4584;
volatile uint16_t x2568 = 2U;
uint8_t x2675 = UINT8_MAX;
volatile int8_t x2705 = 2;
int64_t x2777 = 927812720865766171LL;
uint32_t x2778 = 39U;
uint8_t x2780 = 0U;
uint64_t x2932 = 7LLU;
int32_t t50 = -25;
int64_t x3019 = 94931236924708260LL;
uint32_t x3020 = 1U;
volatile uint32_t t55 = 7690613U;
uint16_t x3492 = 1U;
volatile uint32_t t59 = 23U;
uint32_t x3602 = UINT32_MAX;
volatile int64_t x3767 = 4403LL;
uint8_t x3768 = 12U;
uint32_t x3832 = 50U;
int32_t x3974 = INT32_MIN;
int8_t x3975 = INT8_MIN;
uint8_t x4244 = 4U;
volatile uint32_t t71 = 1447220U;
int16_t x4286 = -9;
int8_t x4288 = 3;
uint8_t x4529 = UINT8_MAX;
int16_t x4530 = INT16_MIN;
int8_t x4532 = 1;
int8_t x4572 = 0;
uint16_t x4613 = UINT16_MAX;
static uint32_t t79 = 3444893U;
static uint64_t x4741 = 279105145613639LLU;
int64_t x4743 = INT64_MAX;
static uint64_t x4749 = 6657555LLU;
int64_t x4751 = -1LL;
static int8_t x4813 = 1;
volatile int64_t x4815 = -1375212605811LL;
uint32_t x4905 = 21530914U;
int8_t x4914 = INT8_MIN;
uint64_t t87 = 1LLU;
uint16_t x5058 = 14U;
static volatile uint32_t x5109 = 6854U;
int16_t x5111 = -1983;
volatile uint64_t x5205 = 2051385459LLU;
volatile uint64_t t91 = 63687LLU;
static uint32_t x5445 = 170U;
int32_t x5447 = -2290164;
static volatile uint32_t t92 = 4592494U;
volatile uint32_t t93 = 83U;
uint16_t x5653 = UINT16_MAX;
volatile uint64_t x5737 = 388546LLU;
int16_t x5738 = -434;
uint64_t t97 = 1311237399245622LLU;
static int32_t t98 = 1745;


void f0(void) {
	int8_t x22 = 0;
	int16_t x23 = INT16_MIN;

	t0 = ((x21-(x22==x23))<<x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x34 = INT8_MIN;
	int64_t x35 = -158860672386231LL;
	volatile uint64_t t1 = 19916605366789LLU;

	t1 = ((x33-(x34==x35))<<x36);

	if (t1 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t t2 = -6;

	t2 = ((x77-(x78==x79))<<x80);

	if (t2 != 524280) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x82 = INT16_MAX;
	int64_t x83 = -1LL;
	int32_t t3 = 51;

	t3 = ((x81-(x82==x83))<<x84);

	if (t3 != 1048560) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x153 = INT16_MAX;
	volatile uint64_t x154 = UINT64_MAX;
	int32_t x155 = 38264994;
	uint16_t x156 = 1U;
	static int32_t t4 = -95;

	t4 = ((x153-(x154==x155))<<x156);

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x219 = 7U;
	volatile uint16_t x220 = 2U;
	volatile int32_t t5 = -124;

	t5 = ((x217-(x218==x219))<<x220);

	if (t5 != 20) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x221 = 1U;
	uint64_t x222 = 1474595287109402894LLU;
	uint16_t x223 = 15267U;
	uint8_t x224 = 3U;
	volatile int32_t t6 = -14632959;

	t6 = ((x221-(x222==x223))<<x224);

	if (t6 != 8) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x289 = UINT8_MAX;
	uint64_t x290 = 185696LLU;
	static uint8_t x291 = UINT8_MAX;
	uint8_t x292 = 6U;
	volatile int32_t t7 = -41042807;

	t7 = ((x289-(x290==x291))<<x292);

	if (t7 != 16320) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x334 = 13;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t t8 = 180;

	t8 = ((x333-(x334==x335))<<x336);

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int16_t x358 = INT16_MIN;
	int64_t x359 = -31064957LL;
	volatile int16_t x360 = 0;
	static volatile uint32_t t9 = UINT32_MAX;

	t9 = ((x357-(x358==x359))<<x360);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x437 = UINT16_MAX;
	static int16_t x439 = INT16_MIN;
	static uint32_t x440 = 3U;

	t10 = ((x437-(x438==x439))<<x440);

	if (t10 != 524280) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x449 = 3873;
	uint8_t x451 = 0U;
	volatile int32_t t11 = -13884902;

	t11 = ((x449-(x450==x451))<<x452);

	if (t11 != 15863808) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x501 = 3;
	volatile uint8_t x502 = UINT8_MAX;
	int32_t x504 = 1;
	int32_t t12 = 3736;

	t12 = ((x501-(x502==x503))<<x504);

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x589 = 2;
	uint64_t x590 = 28949LLU;
	volatile uint32_t x591 = 94U;

	t13 = ((x589-(x590==x591))<<x592);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x606 = 0U;
	int16_t x607 = 4272;
	int32_t x608 = 0;
	volatile uint64_t t14 = 0LLU;

	t14 = ((x605-(x606==x607))<<x608);

	if (t14 != 183390299374LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x609 = 7LL;
	static uint16_t x610 = 1220U;
	int16_t x611 = -76;
	static uint8_t x612 = 41U;

	t15 = ((x609-(x610==x611))<<x612);

	if (t15 != 15393162788864LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x677 = 113LLU;
	volatile int16_t x678 = INT16_MAX;
	volatile uint64_t t16 = 2750096552214LLU;

	t16 = ((x677-(x678==x679))<<x680);

	if (t16 != 226LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x761 = UINT64_MAX;
	int32_t x762 = INT32_MIN;
	static int8_t x764 = 7;
	uint64_t t17 = 1069LLU;

	t17 = ((x761-(x762==x763))<<x764);

	if (t17 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x765 = UINT64_MAX;
	uint32_t x766 = 1U;
	static uint8_t x767 = UINT8_MAX;
	static uint32_t x768 = 15U;
	uint64_t t18 = 93270614LLU;

	t18 = ((x765-(x766==x767))<<x768);

	if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x962 = 1;
	volatile int64_t x964 = 3LL;
	volatile uint32_t t19 = 1401243U;

	t19 = ((x961-(x962==x963))<<x964);

	if (t19 != 483184U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x989 = UINT32_MAX;
	int8_t x990 = INT8_MIN;
	int8_t x991 = 3;
	volatile uint32_t x992 = 1U;
	uint32_t t20 = 89507381U;

	t20 = ((x989-(x990==x991))<<x992);

	if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1109 = 7310;
	volatile uint8_t x1110 = 4U;
	uint32_t x1111 = 1117011U;
	uint16_t x1112 = 1U;
	volatile int32_t t21 = 155077341;

	t21 = ((x1109-(x1110==x1111))<<x1112);

	if (t21 != 14620) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1141 = 505827515;
	int64_t x1142 = INT64_MIN;
	int16_t x1143 = INT16_MIN;
	uint32_t x1144 = 1U;

	t22 = ((x1141-(x1142==x1143))<<x1144);

	if (t22 != 1011655030) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1197 = 55476LL;
	int16_t x1198 = -1;
	static uint16_t x1199 = UINT16_MAX;
	volatile int64_t t23 = 2766LL;

	t23 = ((x1197-(x1198==x1199))<<x1200);

	if (t23 != 221904LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1273 = 6;
	int64_t x1275 = INT64_MIN;
	int16_t x1276 = 28;
	volatile int32_t t24 = 4;

	t24 = ((x1273-(x1274==x1275))<<x1276);

	if (t24 != 1610612736) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1593 = 86U;
	uint16_t x1594 = UINT16_MAX;
	int16_t x1595 = INT16_MAX;
	uint16_t x1596 = 0U;
	volatile int32_t t25 = 1;

	t25 = ((x1593-(x1594==x1595))<<x1596);

	if (t25 != 86) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1622 = INT32_MIN;
	static int16_t x1623 = -1;
	uint8_t x1624 = 1U;
	int32_t t26 = -33;

	t26 = ((x1621-(x1622==x1623))<<x1624);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1733 = 18211U;
	int16_t x1734 = INT16_MIN;
	uint32_t x1736 = 4U;
	int32_t t27 = 87342;

	t27 = ((x1733-(x1734==x1735))<<x1736);

	if (t27 != 291376) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1750 = -1;
	uint64_t x1751 = 23969217LLU;
	int16_t x1752 = 12;
	static int32_t t28 = 0;

	t28 = ((x1749-(x1750==x1751))<<x1752);

	if (t28 != 8192) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1931 = -1162LL;
	int32_t t29 = -1;

	t29 = ((x1929-(x1930==x1931))<<x1932);

	if (t29 != 216) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1961 = 1260496189LLU;
	volatile uint8_t x1964 = 25U;
	uint64_t t30 = 299626343LLU;

	t30 = ((x1961-(x1962==x1963))<<x1964);

	if (t30 != 42295233660059648LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2025 = 5U;
	static uint64_t x2026 = 92LLU;
	int8_t x2027 = INT8_MAX;
	volatile int8_t x2028 = 31;
	uint32_t t31 = 244942867U;

	t31 = ((x2025-(x2026==x2027))<<x2028);

	if (t31 != 2147483648U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x2045 = UINT64_MAX;
	uint16_t x2046 = UINT16_MAX;
	int8_t x2047 = INT8_MIN;
	static uint64_t t32 = UINT64_MAX;

	t32 = ((x2045-(x2046==x2047))<<x2048);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2053 = 16459226394688LL;
	int8_t x2054 = -1;
	uint8_t x2056 = 15U;
	int64_t t33 = 49964012LL;

	t33 = ((x2053-(x2054==x2055))<<x2056);

	if (t33 != 539335930501136384LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2109 = 77920U;
	int8_t x2110 = -1;
	int16_t x2111 = -1;
	uint8_t x2112 = 11U;
	static volatile uint32_t t34 = 466U;

	t34 = ((x2109-(x2110==x2111))<<x2112);

	if (t34 != 159578112U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x2117 = 1625717LL;
	static uint64_t x2118 = UINT64_MAX;
	int32_t x2119 = INT32_MIN;
	uint8_t x2120 = 6U;
	volatile int64_t t35 = -97744LL;

	t35 = ((x2117-(x2118==x2119))<<x2120);

	if (t35 != 104045888LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2183 = INT64_MIN;
	int8_t x2184 = 3;
	int32_t t36 = -332;

	t36 = ((x2181-(x2182==x2183))<<x2184);

	if (t36 != 88368) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2285 = 0;
	int64_t x2286 = INT64_MAX;
	static int16_t x2287 = INT16_MIN;
	uint64_t x2288 = 3LLU;
	static volatile int32_t t37 = 357;

	t37 = ((x2285-(x2286==x2287))<<x2288);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2314 = -1;
	int32_t x2315 = -1;
	uint8_t x2316 = 3U;
	volatile int32_t t38 = 11;

	t38 = ((x2313-(x2314==x2315))<<x2316);

	if (t38 != 1008) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2365 = 16U;
	volatile int64_t x2366 = 2LL;
	int16_t x2367 = INT16_MIN;
	static uint32_t x2368 = 7U;
	int32_t t39 = -25037711;

	t39 = ((x2365-(x2366==x2367))<<x2368);

	if (t39 != 2048) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2393 = UINT16_MAX;
	static volatile uint64_t x2394 = UINT64_MAX;
	int8_t x2395 = -1;
	uint8_t x2396 = 1U;
	int32_t t40 = 291;

	t40 = ((x2393-(x2394==x2395))<<x2396);

	if (t40 != 131068) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2405 = INT8_MAX;
	uint32_t x2406 = UINT32_MAX;
	volatile int8_t x2407 = -1;
	static uint16_t x2408 = 8U;
	int32_t t41 = 105;

	t41 = ((x2405-(x2406==x2407))<<x2408);

	if (t41 != 32256) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2409 = 2025U;
	int16_t x2410 = INT16_MIN;
	volatile uint64_t x2411 = 38244LLU;
	uint64_t x2412 = 5LLU;
	volatile int32_t t42 = -6920;

	t42 = ((x2409-(x2410==x2411))<<x2412);

	if (t42 != 64800) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x2436 = 1LLU;
	uint32_t t43 = 76869U;

	t43 = ((x2433-(x2434==x2435))<<x2436);

	if (t43 != 17258U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2561 = 0;
	uint64_t x2562 = UINT64_MAX;
	int16_t x2563 = INT16_MAX;

	t44 = ((x2561-(x2562==x2563))<<x2564);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2565 = INT8_MAX;
	int64_t x2566 = INT64_MAX;
	static uint64_t x2567 = 183391863919726878LLU;
	int32_t t45 = -1;

	t45 = ((x2565-(x2566==x2567))<<x2568);

	if (t45 != 508) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2673 = 68108209U;
	int64_t x2674 = INT64_MIN;
	volatile int8_t x2676 = 1;
	volatile uint32_t t46 = 2355U;

	t46 = ((x2673-(x2674==x2675))<<x2676);

	if (t46 != 136216418U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2681 = UINT32_MAX;
	int32_t x2682 = INT32_MIN;
	uint16_t x2683 = 187U;
	static int32_t x2684 = 0;
	static volatile uint32_t t47 = UINT32_MAX;

	t47 = ((x2681-(x2682==x2683))<<x2684);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2706 = 335;
	int32_t x2707 = -28110551;
	uint8_t x2708 = 0U;
	int32_t t48 = -57;

	t48 = ((x2705-(x2706==x2707))<<x2708);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x2779 = INT16_MIN;
	int64_t t49 = -11440317881893012LL;

	t49 = ((x2777-(x2778==x2779))<<x2780);

	if (t49 != 927812720865766171LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2929 = 119U;
	int16_t x2930 = 1;
	uint16_t x2931 = UINT16_MAX;

	t50 = ((x2929-(x2930==x2931))<<x2932);

	if (t50 != 15232) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x3017 = 0;
	uint32_t x3018 = 144U;
	volatile int32_t t51 = 534;

	t51 = ((x3017-(x3018==x3019))<<x3020);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3085 = UINT32_MAX;
	volatile int32_t x3086 = INT32_MIN;
	volatile uint8_t x3087 = UINT8_MAX;
	uint8_t x3088 = 10U;
	static volatile uint32_t t52 = 1U;

	t52 = ((x3085-(x3086==x3087))<<x3088);

	if (t52 != 4294966272U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3201 = 24;
	uint16_t x3202 = 26U;
	int32_t x3203 = INT32_MAX;
	uint16_t x3204 = 2U;
	static int32_t t53 = 12488;

	t53 = ((x3201-(x3202==x3203))<<x3204);

	if (t53 != 96) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x3297 = UINT32_MAX;
	uint64_t x3298 = 6056LLU;
	int64_t x3299 = 102271113LL;
	static uint8_t x3300 = 10U;
	volatile uint32_t t54 = 1010U;

	t54 = ((x3297-(x3298==x3299))<<x3300);

	if (t54 != 4294966272U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3325 = 1849U;
	static volatile uint32_t x3326 = 369853U;
	static int16_t x3327 = 5914;
	static int8_t x3328 = 11;

	t55 = ((x3325-(x3326==x3327))<<x3328);

	if (t55 != 3786752U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3437 = UINT8_MAX;
	static uint32_t x3438 = UINT32_MAX;
	uint8_t x3439 = 1U;
	static volatile uint8_t x3440 = 9U;
	volatile int32_t t56 = 355097001;

	t56 = ((x3437-(x3438==x3439))<<x3440);

	if (t56 != 130560) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3489 = INT8_MAX;
	static uint16_t x3490 = 730U;
	int8_t x3491 = INT8_MIN;
	volatile int32_t t57 = 1998;

	t57 = ((x3489-(x3490==x3491))<<x3492);

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3509 = 104374914LL;
	volatile uint64_t x3510 = 454738LLU;
	static uint32_t x3511 = 2U;
	int8_t x3512 = 1;
	volatile int64_t t58 = -6133498842738197LL;

	t58 = ((x3509-(x3510==x3511))<<x3512);

	if (t58 != 208749828LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x3545 = 787U;
	uint8_t x3546 = 24U;
	int8_t x3547 = INT8_MIN;
	static uint8_t x3548 = 1U;

	t59 = ((x3545-(x3546==x3547))<<x3548);

	if (t59 != 1574U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x3565 = 1U;
	volatile int32_t x3566 = INT32_MAX;
	volatile int8_t x3567 = INT8_MAX;
	uint16_t x3568 = 1U;
	int32_t t60 = 1956;

	t60 = ((x3565-(x3566==x3567))<<x3568);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3601 = 4445646U;
	volatile uint16_t x3603 = 189U;
	uint16_t x3604 = 2U;
	volatile uint32_t t61 = 394458U;

	t61 = ((x3601-(x3602==x3603))<<x3604);

	if (t61 != 17782584U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3653 = UINT64_MAX;
	volatile int16_t x3654 = INT16_MAX;
	int64_t x3655 = -36068018203LL;
	uint8_t x3656 = 17U;
	uint64_t t62 = 829638626977LLU;

	t62 = ((x3653-(x3654==x3655))<<x3656);

	if (t62 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3717 = INT8_MAX;
	int16_t x3718 = -6957;
	uint64_t x3719 = UINT64_MAX;
	int8_t x3720 = 5;
	volatile int32_t t63 = -31;

	t63 = ((x3717-(x3718==x3719))<<x3720);

	if (t63 != 4064) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3753 = 3U;
	uint8_t x3754 = UINT8_MAX;
	int64_t x3755 = -1112164087084960777LL;
	uint8_t x3756 = 6U;
	volatile uint32_t t64 = 42162253U;

	t64 = ((x3753-(x3754==x3755))<<x3756);

	if (t64 != 192U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3765 = UINT32_MAX;
	static int32_t x3766 = INT32_MAX;
	uint32_t t65 = 10U;

	t65 = ((x3765-(x3766==x3767))<<x3768);

	if (t65 != 4294963200U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3829 = 214LLU;
	int16_t x3830 = 7;
	int64_t x3831 = INT64_MIN;
	uint64_t t66 = 1184050197LLU;

	t66 = ((x3829-(x3830==x3831))<<x3832);

	if (t66 != 240942580064321536LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3897 = 1061238583U;
	int16_t x3898 = 374;
	static int8_t x3899 = -1;
	volatile uint16_t x3900 = 8U;
	uint32_t t67 = 3106U;

	t67 = ((x3897-(x3898==x3899))<<x3900);

	if (t67 != 1094137600U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3973 = 22LLU;
	static volatile int16_t x3976 = 0;
	volatile uint64_t t68 = 25106327650816LLU;

	t68 = ((x3973-(x3974==x3975))<<x3976);

	if (t68 != 22LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3989 = 117;
	volatile int32_t x3990 = -1028436559;
	int8_t x3991 = -1;
	uint8_t x3992 = 2U;
	volatile int32_t t69 = -59692894;

	t69 = ((x3989-(x3990==x3991))<<x3992);

	if (t69 != 468) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x4113 = INT16_MAX;
	volatile uint16_t x4114 = UINT16_MAX;
	static int64_t x4115 = -1LL;
	uint8_t x4116 = 4U;
	int32_t t70 = -723788453;

	t70 = ((x4113-(x4114==x4115))<<x4116);

	if (t70 != 524272) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4241 = UINT32_MAX;
	int16_t x4242 = INT16_MIN;
	static int32_t x4243 = 31030;

	t71 = ((x4241-(x4242==x4243))<<x4244);

	if (t71 != 4294967280U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4249 = 53U;
	int16_t x4250 = INT16_MAX;
	static volatile int8_t x4251 = -1;
	uint32_t x4252 = 0U;
	volatile uint32_t t72 = 47947760U;

	t72 = ((x4249-(x4250==x4251))<<x4252);

	if (t72 != 53U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x4285 = 333530855LLU;
	int64_t x4287 = -43723069LL;
	uint64_t t73 = 21LLU;

	t73 = ((x4285-(x4286==x4287))<<x4288);

	if (t73 != 2668246840LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4365 = 15;
	int64_t x4366 = 6574940445LL;
	volatile uint8_t x4367 = UINT8_MAX;
	uint16_t x4368 = 15U;
	int32_t t74 = 8;

	t74 = ((x4365-(x4366==x4367))<<x4368);

	if (t74 != 491520) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4531 = -8653;
	volatile int32_t t75 = 3601;

	t75 = ((x4529-(x4530==x4531))<<x4532);

	if (t75 != 510) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4569 = 25U;
	int64_t x4570 = INT64_MIN;
	volatile int32_t x4571 = INT32_MAX;
	int32_t t76 = -1866780;

	t76 = ((x4569-(x4570==x4571))<<x4572);

	if (t76 != 25) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x4597 = 7;
	volatile uint8_t x4598 = UINT8_MAX;
	int16_t x4599 = -1;
	static volatile uint8_t x4600 = 20U;
	static int32_t t77 = 3;

	t77 = ((x4597-(x4598==x4599))<<x4600);

	if (t77 != 7340032) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4614 = UINT16_MAX;
	int8_t x4615 = 0;
	int8_t x4616 = 1;
	volatile int32_t t78 = 171;

	t78 = ((x4613-(x4614==x4615))<<x4616);

	if (t78 != 131070) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4637 = UINT32_MAX;
	uint32_t x4638 = UINT32_MAX;
	uint16_t x4639 = UINT16_MAX;
	uint8_t x4640 = 25U;

	t79 = ((x4637-(x4638==x4639))<<x4640);

	if (t79 != 4261412864U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4709 = 301409223U;
	uint32_t x4710 = UINT32_MAX;
	volatile uint8_t x4711 = 3U;
	int8_t x4712 = 1;
	volatile uint32_t t80 = 144503U;

	t80 = ((x4709-(x4710==x4711))<<x4712);

	if (t80 != 602818446U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4742 = 26U;
	int32_t x4744 = 4;
	volatile uint64_t t81 = 2LLU;

	t81 = ((x4741-(x4742==x4743))<<x4744);

	if (t81 != 4465682329818224LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4750 = UINT32_MAX;
	int8_t x4752 = 1;
	static uint64_t t82 = 1450650596256779642LLU;

	t82 = ((x4749-(x4750==x4751))<<x4752);

	if (t82 != 13315110LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x4769 = 5U;
	int8_t x4770 = INT8_MIN;
	int32_t x4771 = -1;
	volatile uint8_t x4772 = 13U;
	int32_t t83 = -6044;

	t83 = ((x4769-(x4770==x4771))<<x4772);

	if (t83 != 40960) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x4814 = 55U;
	int8_t x4816 = 13;
	static int32_t t84 = -129442;

	t84 = ((x4813-(x4814==x4815))<<x4816);

	if (t84 != 8192) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x4906 = -1;
	int32_t x4907 = 16388226;
	static uint8_t x4908 = 14U;
	static volatile uint32_t t85 = 3226U;

	t85 = ((x4905-(x4906==x4907))<<x4908);

	if (t85 != 575176704U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x4913 = 79U;
	static int64_t x4915 = INT64_MIN;
	int8_t x4916 = 1;
	volatile int32_t t86 = 294;

	t86 = ((x4913-(x4914==x4915))<<x4916);

	if (t86 != 158) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x4981 = 8129671077LLU;
	volatile int16_t x4982 = -1;
	static volatile uint32_t x4983 = UINT32_MAX;
	uint8_t x4984 = 1U;

	t87 = ((x4981-(x4982==x4983))<<x4984);

	if (t87 != 16259342152LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5057 = 170LLU;
	uint16_t x5059 = UINT16_MAX;
	uint16_t x5060 = 21U;
	uint64_t t88 = 6323710898967737957LLU;

	t88 = ((x5057-(x5058==x5059))<<x5060);

	if (t88 != 356515840LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5110 = INT64_MIN;
	uint8_t x5112 = 0U;
	uint32_t t89 = 6462746U;

	t89 = ((x5109-(x5110==x5111))<<x5112);

	if (t89 != 6854U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x5129 = UINT16_MAX;
	int32_t x5130 = 105280;
	uint64_t x5131 = 1909772944530277952LLU;
	int8_t x5132 = 0;
	static volatile int32_t t90 = -607831;

	t90 = ((x5129-(x5130==x5131))<<x5132);

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x5206 = -1;
	static volatile uint64_t x5207 = UINT64_MAX;
	static int32_t x5208 = 18;

	t91 = ((x5205-(x5206==x5207))<<x5208);

	if (t91 != 537758389501952LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x5446 = UINT64_MAX;
	volatile uint32_t x5448 = 1U;

	t92 = ((x5445-(x5446==x5447))<<x5448);

	if (t92 != 340U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5537 = UINT32_MAX;
	int8_t x5538 = 7;
	static int64_t x5539 = -32688964578993860LL;
	static int8_t x5540 = 1;

	t93 = ((x5537-(x5538==x5539))<<x5540);

	if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x5625 = 391883U;
	int16_t x5626 = INT16_MIN;
	int64_t x5627 = 840847321324984LL;
	int32_t x5628 = 1;
	static volatile uint32_t t94 = 2U;

	t94 = ((x5625-(x5626==x5627))<<x5628);

	if (t94 != 783766U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x5654 = 2653LLU;
	int32_t x5655 = INT32_MIN;
	uint32_t x5656 = 7U;
	static int32_t t95 = 34;

	t95 = ((x5653-(x5654==x5655))<<x5656);

	if (t95 != 8388480) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5721 = 1;
	int64_t x5722 = INT64_MIN;
	static int8_t x5723 = 45;
	uint8_t x5724 = 3U;
	static volatile int32_t t96 = 27;

	t96 = ((x5721-(x5722==x5723))<<x5724);

	if (t96 != 8) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x5739 = 40;
	int8_t x5740 = 0;

	t97 = ((x5737-(x5738==x5739))<<x5740);

	if (t97 != 388546LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x5765 = 0;
	uint64_t x5766 = 112672827LLU;
	volatile int8_t x5767 = INT8_MIN;
	volatile uint8_t x5768 = 3U;

	t98 = ((x5765-(x5766==x5767))<<x5768);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x5777 = 2U;
	static int8_t x5778 = INT8_MIN;
	static volatile uint16_t x5779 = 824U;
	int64_t x5780 = 1LL;
	int32_t t99 = 0;

	t99 = ((x5777-(x5778==x5779))<<x5780);

	if (t99 != 4) { NG(); } else { ; }
	
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

