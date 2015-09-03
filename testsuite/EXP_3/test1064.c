#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
uint16_t x93 = UINT16_MAX;
int8_t x110 = -1;
static uint8_t x112 = 1U;
volatile uint64_t t2 = 1143423755815448467LLU;
volatile int64_t t3 = 1097LL;
uint64_t t5 = 2LLU;
int32_t t6 = -1548105;
int64_t x377 = INT64_MIN;
int32_t x454 = INT32_MIN;
static int16_t x576 = 1;
static volatile int64_t t12 = -28388675LL;
uint16_t x903 = 98U;
static volatile int32_t t14 = 1328;
volatile uint32_t t15 = 57396097U;
static int16_t x1241 = 1942;
uint64_t t18 = 191495918683802107LLU;
int32_t x1421 = INT32_MAX;
uint16_t x1455 = UINT16_MAX;
volatile int16_t x1456 = 0;
int16_t x1636 = 11;
int8_t x1915 = 1;
static int32_t x1947 = 12666202;
int8_t x1948 = 2;
uint16_t x2027 = UINT16_MAX;
int32_t x2171 = INT32_MAX;
uint8_t x2172 = 16U;
static uint8_t x2260 = 3U;
volatile int32_t x2277 = -1;
static volatile int32_t t31 = -136916561;
uint64_t x2306 = UINT64_MAX;
volatile int64_t x2420 = 39LL;
volatile int8_t x2457 = -1;
volatile int64_t x2543 = 0LL;
static uint8_t x2544 = 0U;
int8_t x2575 = INT8_MAX;
uint8_t x2576 = 12U;
static volatile int32_t t36 = 160663551;
volatile uint64_t t37 = 42631LLU;
uint8_t x2612 = 4U;
uint16_t x2680 = 2U;
int32_t x2700 = 0;
uint16_t x2709 = 34U;
int8_t x2711 = 1;
int32_t t43 = 6;
uint64_t x2798 = UINT64_MAX;
volatile uint32_t x2800 = 2U;
int32_t x2912 = 0;
int8_t x3121 = -1;
uint32_t x3126 = UINT32_MAX;
uint64_t x3245 = UINT64_MAX;
volatile uint16_t x3247 = 82U;
uint8_t x3279 = UINT8_MAX;
int16_t x3404 = 1;
int32_t x3578 = INT32_MIN;
uint32_t x3579 = UINT32_MAX;
volatile uint8_t x3600 = 15U;
static int64_t t63 = 1258716796927692LL;
int8_t x3793 = -41;
volatile int64_t x3913 = 1022137946944051LL;
volatile int64_t t65 = 2424520679827LL;
static uint16_t x3955 = UINT16_MAX;
uint32_t x4030 = 176625003U;
volatile int8_t x4050 = -63;
volatile int16_t x4052 = 13;
uint8_t x4224 = 4U;
volatile int8_t x4295 = INT8_MAX;
int64_t x4298 = INT64_MAX;
uint32_t t78 = 146068U;
int16_t x4394 = INT16_MAX;
volatile uint64_t t79 = 8345971455LLU;
static volatile int64_t t80 = -45113LL;
static uint8_t x4488 = 8U;
int8_t x4502 = INT8_MAX;
static int64_t t82 = 2317683931LL;
volatile int16_t x4509 = INT16_MIN;
int16_t x4512 = 0;
uint64_t t84 = 9593018LLU;
int16_t x4642 = -1;
uint8_t x4656 = 22U;
int16_t x4662 = -2;
uint8_t x4664 = 0U;
uint8_t x4686 = 22U;
int16_t x4702 = INT16_MIN;
static uint32_t x4704 = 5U;
uint64_t t90 = 11836391247284464LLU;
uint32_t x4796 = 0U;
uint16_t x5301 = UINT16_MAX;
uint8_t x5361 = 84U;
int32_t x5362 = -945;
static uint32_t x5363 = 0U;
volatile uint32_t t98 = 979U;
uint32_t x5376 = 0U;
int32_t t99 = 0;


void f0(void) {
	int64_t x1 = 369494910LL;
	uint16_t x3 = UINT16_MAX;
	static uint16_t x4 = 1U;
	static int64_t t0 = 134021490LL;

	t0 = ((x1/x2)&(x3>>x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x94 = INT8_MIN;
	int8_t x95 = 15;
	uint8_t x96 = 4U;
	volatile int32_t t1 = 80;

	t1 = ((x93/x94)&(x95>>x96));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x109 = 117U;
	static uint64_t x111 = 4013LLU;

	t2 = ((x109/x110)&(x111>>x112));

	if (t2 != 1922LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x113 = INT64_MIN;
	volatile uint32_t x114 = 1621U;
	int64_t x115 = 81858LL;
	static volatile int8_t x116 = 1;

	t3 = ((x113/x114)&(x115>>x116));

	if (t3 != 5664LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x141 = -31;
	int16_t x142 = 2521;
	int8_t x143 = INT8_MAX;
	int8_t x144 = 1;
	int32_t t4 = 259181527;

	t4 = ((x141/x142)&(x143>>x144));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x173 = 1825U;
	int8_t x174 = INT8_MAX;
	static uint64_t x175 = 29792638007601LLU;
	uint8_t x176 = 2U;

	t5 = ((x173/x174)&(x175>>x176));

	if (t5 != 12LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x241 = UINT8_MAX;
	uint8_t x242 = 110U;
	int32_t x243 = 831971757;
	uint64_t x244 = 17LLU;

	t6 = ((x241/x242)&(x243>>x244));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x281 = 183953466409823LLU;
	int16_t x282 = INT16_MIN;
	uint8_t x283 = 64U;
	int8_t x284 = 0;
	volatile uint64_t t7 = 537992656594825145LLU;

	t7 = ((x281/x282)&(x283>>x284));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x297 = INT32_MIN;
	volatile uint32_t x298 = 153U;
	volatile uint32_t x299 = UINT32_MAX;
	static int8_t x300 = 14;
	static uint32_t t8 = 1U;

	t8 = ((x297/x298)&(x299>>x300));

	if (t8 != 142208U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x378 = INT64_MIN;
	volatile int16_t x379 = 39;
	uint64_t x380 = 1LLU;
	static volatile int64_t t9 = -1033162889597449LL;

	t9 = ((x377/x378)&(x379>>x380));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x453 = -1;
	uint8_t x455 = 13U;
	int8_t x456 = 1;
	static int32_t t10 = -91794919;

	t10 = ((x453/x454)&(x455>>x456));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x573 = -695520;
	static uint64_t x574 = 119714126301LLU;
	uint8_t x575 = 96U;
	uint64_t t11 = 47975484131423LLU;

	t11 = ((x573/x574)&(x575>>x576));

	if (t11 != 32LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x669 = 2874017092286723LL;
	int32_t x670 = 1701;
	int32_t x671 = INT32_MAX;
	int8_t x672 = 0;

	t12 = ((x669/x670)&(x671>>x672));

	if (t12 != 1682257308LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x701 = 44U;
	static int64_t x702 = 196620311709LL;
	static uint64_t x703 = 3LLU;
	uint8_t x704 = 10U;
	uint64_t t13 = 7062LLU;

	t13 = ((x701/x702)&(x703>>x704));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x901 = INT8_MIN;
	int32_t x902 = INT32_MIN;
	uint8_t x904 = 1U;

	t14 = ((x901/x902)&(x903>>x904));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x1157 = INT16_MIN;
	static int16_t x1158 = INT16_MIN;
	volatile uint32_t x1159 = 195U;
	volatile int32_t x1160 = 3;

	t15 = ((x1157/x1158)&(x1159>>x1160));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1242 = 199680LL;
	volatile int32_t x1243 = INT32_MAX;
	uint32_t x1244 = 0U;
	volatile int64_t t16 = -6LL;

	t16 = ((x1241/x1242)&(x1243>>x1244));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1325 = UINT64_MAX;
	static int16_t x1326 = INT16_MIN;
	static uint8_t x1327 = UINT8_MAX;
	volatile int8_t x1328 = 0;
	uint64_t t17 = 21LLU;

	t17 = ((x1325/x1326)&(x1327>>x1328));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1329 = 9783;
	int64_t x1330 = 12398426570725638LL;
	static uint64_t x1331 = UINT64_MAX;
	uint64_t x1332 = 52LLU;

	t18 = ((x1329/x1330)&(x1331>>x1332));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1401 = INT64_MIN;
	static int32_t x1402 = 21;
	static int16_t x1403 = INT16_MAX;
	uint8_t x1404 = 1U;
	int64_t t19 = -1434656376763786LL;

	t19 = ((x1401/x1402)&(x1403>>x1404));

	if (t19 != 14824LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1422 = INT16_MIN;
	static uint16_t x1423 = UINT16_MAX;
	uint8_t x1424 = 0U;
	int32_t t20 = 59065;

	t20 = ((x1421/x1422)&(x1423>>x1424));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1437 = 0;
	uint32_t x1438 = 888U;
	uint32_t x1439 = 3396U;
	static uint64_t x1440 = 2LLU;
	volatile uint32_t t21 = 617U;

	t21 = ((x1437/x1438)&(x1439>>x1440));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x1453 = 0U;
	volatile int32_t x1454 = 281890;
	int32_t t22 = -4869383;

	t22 = ((x1453/x1454)&(x1455>>x1456));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1633 = -1;
	static volatile uint8_t x1634 = 1U;
	uint32_t x1635 = 4750218U;
	uint32_t t23 = 149877374U;

	t23 = ((x1633/x1634)&(x1635>>x1636));

	if (t23 != 2319U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1645 = INT8_MIN;
	int16_t x1646 = INT16_MIN;
	int64_t x1647 = 115690947804495826LL;
	int8_t x1648 = 1;
	volatile int64_t t24 = -16834255600LL;

	t24 = ((x1645/x1646)&(x1647>>x1648));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1913 = INT32_MAX;
	int32_t x1914 = -1;
	static uint16_t x1916 = 6U;
	volatile int32_t t25 = 16248;

	t25 = ((x1913/x1914)&(x1915>>x1916));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1917 = 11U;
	int64_t x1918 = INT64_MAX;
	uint64_t x1919 = 272799121599774427LLU;
	uint8_t x1920 = 2U;
	static volatile uint64_t t26 = 115941146118754744LLU;

	t26 = ((x1917/x1918)&(x1919>>x1920));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1945 = -1;
	static uint8_t x1946 = UINT8_MAX;
	volatile int32_t t27 = -35053629;

	t27 = ((x1945/x1946)&(x1947>>x1948));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x2025 = INT64_MIN;
	uint32_t x2026 = 5335977U;
	uint16_t x2028 = 0U;
	int64_t t28 = 48681LL;

	t28 = ((x2025/x2026)&(x2027>>x2028));

	if (t28 != 51964LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x2169 = 323146900;
	uint8_t x2170 = UINT8_MAX;
	volatile int32_t t29 = -245;

	t29 = ((x2169/x2170)&(x2171>>x2172));

	if (t29 != 22058) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x2257 = -1;
	static uint64_t x2258 = 7113369463LLU;
	volatile uint16_t x2259 = 0U;
	static uint64_t t30 = 32848869154LLU;

	t30 = ((x2257/x2258)&(x2259>>x2260));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x2278 = 38U;
	uint16_t x2279 = 121U;
	int16_t x2280 = 6;

	t31 = ((x2277/x2278)&(x2279>>x2280));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x2305 = UINT16_MAX;
	volatile uint64_t x2307 = 157532355820306LLU;
	uint64_t x2308 = 48LLU;
	uint64_t t32 = 8368261LLU;

	t32 = ((x2305/x2306)&(x2307>>x2308));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2417 = INT32_MAX;
	static volatile int64_t x2418 = INT64_MAX;
	int64_t x2419 = INT64_MAX;
	volatile int64_t t33 = -30LL;

	t33 = ((x2417/x2418)&(x2419>>x2420));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2458 = INT32_MIN;
	uint8_t x2459 = 2U;
	int64_t x2460 = 1LL;
	volatile int32_t t34 = -253753672;

	t34 = ((x2457/x2458)&(x2459>>x2460));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2541 = 79U;
	uint64_t x2542 = 2202411100LLU;
	static uint64_t t35 = 39516340014966397LLU;

	t35 = ((x2541/x2542)&(x2543>>x2544));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2573 = -56;
	volatile int32_t x2574 = -49;

	t36 = ((x2573/x2574)&(x2575>>x2576));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x2597 = INT64_MAX;
	uint64_t x2598 = 95597434350696055LLU;
	int32_t x2599 = 2420254;
	volatile int8_t x2600 = 3;

	t37 = ((x2597/x2598)&(x2599>>x2600));

	if (t37 != 64LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2609 = INT32_MAX;
	static volatile uint64_t x2610 = UINT64_MAX;
	volatile int16_t x2611 = INT16_MAX;
	static volatile uint64_t t38 = 16337LLU;

	t38 = ((x2609/x2610)&(x2611>>x2612));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2657 = UINT8_MAX;
	uint8_t x2658 = 88U;
	int32_t x2659 = INT32_MAX;
	int8_t x2660 = 1;
	volatile int32_t t39 = 959;

	t39 = ((x2657/x2658)&(x2659>>x2660));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2669 = 49U;
	static int32_t x2670 = INT32_MAX;
	int16_t x2671 = 1962;
	static int16_t x2672 = 1;
	volatile int32_t t40 = -16;

	t40 = ((x2669/x2670)&(x2671>>x2672));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2677 = INT16_MIN;
	int64_t x2678 = 68052788167902LL;
	static uint32_t x2679 = 357158152U;
	volatile int64_t t41 = -34457859184448942LL;

	t41 = ((x2677/x2678)&(x2679>>x2680));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x2697 = -1;
	int8_t x2698 = INT8_MIN;
	uint8_t x2699 = 2U;
	volatile int32_t t42 = 1100086;

	t42 = ((x2697/x2698)&(x2699>>x2700));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2710 = 3961;
	uint32_t x2712 = 1U;

	t43 = ((x2709/x2710)&(x2711>>x2712));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2797 = -1;
	static uint8_t x2799 = 1U;
	uint64_t t44 = 852222432309LLU;

	t44 = ((x2797/x2798)&(x2799>>x2800));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2801 = UINT8_MAX;
	volatile int8_t x2802 = -22;
	uint64_t x2803 = 1LLU;
	uint8_t x2804 = 35U;
	static uint64_t t45 = 1702097LLU;

	t45 = ((x2801/x2802)&(x2803>>x2804));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2841 = INT16_MIN;
	uint32_t x2842 = 21U;
	uint32_t x2843 = 11U;
	volatile int16_t x2844 = 2;
	uint32_t t46 = 0U;

	t46 = ((x2841/x2842)&(x2843>>x2844));

	if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x2889 = INT32_MAX;
	uint32_t x2890 = UINT32_MAX;
	volatile int32_t x2891 = INT32_MAX;
	volatile uint32_t x2892 = 20U;
	uint32_t t47 = 1555871057U;

	t47 = ((x2889/x2890)&(x2891>>x2892));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2909 = INT64_MIN;
	int8_t x2910 = -5;
	static uint16_t x2911 = UINT16_MAX;
	volatile int64_t t48 = 10177164742119981LL;

	t48 = ((x2909/x2910)&(x2911>>x2912));

	if (t48 != 39321LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3061 = INT64_MIN;
	volatile uint16_t x3062 = 4U;
	int8_t x3063 = INT8_MAX;
	int64_t x3064 = 0LL;
	int64_t t49 = 79587125562900846LL;

	t49 = ((x3061/x3062)&(x3063>>x3064));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3122 = -14;
	int16_t x3123 = INT16_MAX;
	int8_t x3124 = 0;
	int32_t t50 = -555506967;

	t50 = ((x3121/x3122)&(x3123>>x3124));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x3125 = INT64_MIN;
	uint16_t x3127 = 0U;
	static uint8_t x3128 = 14U;
	volatile int64_t t51 = -488933162LL;

	t51 = ((x3125/x3126)&(x3127>>x3128));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3137 = 89079581U;
	int32_t x3138 = -1;
	int32_t x3139 = INT32_MAX;
	int16_t x3140 = 3;
	uint32_t t52 = 8U;

	t52 = ((x3137/x3138)&(x3139>>x3140));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3246 = 29545939LLU;
	volatile uint8_t x3248 = 1U;
	volatile uint64_t t53 = 651872129LLU;

	t53 = ((x3245/x3246)&(x3247>>x3248));

	if (t53 != 40LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x3277 = INT32_MIN;
	static int16_t x3278 = 4410;
	int32_t x3280 = 14;
	volatile int32_t t54 = 273570;

	t54 = ((x3277/x3278)&(x3279>>x3280));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x3341 = 1091452;
	volatile int64_t x3342 = -1LL;
	volatile uint64_t x3343 = 36756785736795606LLU;
	uint8_t x3344 = 1U;
	volatile uint64_t t55 = 5638454997557152210LLU;

	t55 = ((x3341/x3342)&(x3343>>x3344));

	if (t55 != 18378392867307648LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3401 = 11090008LLU;
	static volatile int16_t x3402 = INT16_MIN;
	static uint8_t x3403 = 2U;
	uint64_t t56 = 43271787015889LLU;

	t56 = ((x3401/x3402)&(x3403>>x3404));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x3541 = INT32_MAX;
	int8_t x3542 = INT8_MIN;
	static uint32_t x3543 = UINT32_MAX;
	volatile uint16_t x3544 = 1U;
	volatile uint32_t t57 = 39132U;

	t57 = ((x3541/x3542)&(x3543>>x3544));

	if (t57 != 2130706433U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3577 = INT8_MAX;
	volatile int8_t x3580 = 4;
	static uint32_t t58 = 23870853U;

	t58 = ((x3577/x3578)&(x3579>>x3580));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3589 = 7;
	int16_t x3590 = -56;
	static uint32_t x3591 = UINT32_MAX;
	int8_t x3592 = 0;
	uint32_t t59 = 26609U;

	t59 = ((x3589/x3590)&(x3591>>x3592));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3597 = 182LLU;
	static uint32_t x3598 = 5796325U;
	uint8_t x3599 = 7U;
	uint64_t t60 = 65713137224524LLU;

	t60 = ((x3597/x3598)&(x3599>>x3600));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x3653 = INT32_MIN;
	int64_t x3654 = INT64_MIN;
	int64_t x3655 = INT64_MAX;
	uint32_t x3656 = 0U;
	int64_t t61 = 8382256LL;

	t61 = ((x3653/x3654)&(x3655>>x3656));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3777 = -1;
	int64_t x3778 = INT64_MAX;
	uint64_t x3779 = UINT64_MAX;
	uint32_t x3780 = 10U;
	uint64_t t62 = 3LLU;

	t62 = ((x3777/x3778)&(x3779>>x3780));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3781 = 11170;
	int64_t x3782 = -30711LL;
	uint16_t x3783 = UINT16_MAX;
	static uint8_t x3784 = 7U;

	t63 = ((x3781/x3782)&(x3783>>x3784));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3794 = INT32_MIN;
	static uint64_t x3795 = 33356LLU;
	static uint64_t x3796 = 6LLU;
	uint64_t t64 = 8978LLU;

	t64 = ((x3793/x3794)&(x3795>>x3796));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x3914 = -1LL;
	int8_t x3915 = 3;
	int64_t x3916 = 3LL;

	t65 = ((x3913/x3914)&(x3915>>x3916));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3953 = INT16_MAX;
	int8_t x3954 = INT8_MAX;
	int8_t x3956 = 2;
	static int32_t t66 = -15249827;

	t66 = ((x3953/x3954)&(x3955>>x3956));

	if (t66 != 258) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4029 = -1749LL;
	uint8_t x4031 = 14U;
	uint8_t x4032 = 27U;
	int64_t t67 = -5688531696LL;

	t67 = ((x4029/x4030)&(x4031>>x4032));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x4049 = -1LL;
	uint16_t x4051 = UINT16_MAX;
	int64_t t68 = -3563898477330751164LL;

	t68 = ((x4049/x4050)&(x4051>>x4052));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x4085 = -1;
	volatile int64_t x4086 = INT64_MAX;
	volatile int16_t x4087 = 2;
	uint16_t x4088 = 1U;
	volatile int64_t t69 = -502LL;

	t69 = ((x4085/x4086)&(x4087>>x4088));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4117 = 0U;
	int8_t x4118 = INT8_MIN;
	static uint8_t x4119 = 97U;
	uint8_t x4120 = 26U;
	volatile int32_t t70 = 202;

	t70 = ((x4117/x4118)&(x4119>>x4120));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x4217 = UINT32_MAX;
	uint8_t x4218 = UINT8_MAX;
	int8_t x4219 = INT8_MAX;
	static uint8_t x4220 = 25U;
	uint32_t t71 = 32515U;

	t71 = ((x4217/x4218)&(x4219>>x4220));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4221 = 7;
	uint32_t x4222 = 4149047U;
	uint64_t x4223 = 110410202LLU;
	uint64_t t72 = 69LLU;

	t72 = ((x4221/x4222)&(x4223>>x4224));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4225 = UINT64_MAX;
	static uint64_t x4226 = UINT64_MAX;
	static uint8_t x4227 = 3U;
	uint8_t x4228 = 31U;
	volatile uint64_t t73 = 583483464LLU;

	t73 = ((x4225/x4226)&(x4227>>x4228));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x4257 = 232115U;
	int8_t x4258 = INT8_MIN;
	volatile uint16_t x4259 = 235U;
	uint16_t x4260 = 3U;
	uint32_t t74 = 129U;

	t74 = ((x4257/x4258)&(x4259>>x4260));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x4281 = UINT64_MAX;
	volatile int32_t x4282 = INT32_MIN;
	int8_t x4283 = 1;
	uint8_t x4284 = 2U;
	uint64_t t75 = 11032896529LLU;

	t75 = ((x4281/x4282)&(x4283>>x4284));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4293 = 2U;
	int64_t x4294 = -1LL;
	uint32_t x4296 = 2U;
	volatile int64_t t76 = -18188LL;

	t76 = ((x4293/x4294)&(x4295>>x4296));

	if (t76 != 30LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4297 = 2;
	uint64_t x4299 = 56413493361LLU;
	uint8_t x4300 = 17U;
	volatile uint64_t t77 = 50169723065958LLU;

	t77 = ((x4297/x4298)&(x4299>>x4300));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4381 = -219;
	uint32_t x4382 = UINT32_MAX;
	uint32_t x4383 = 1014292U;
	uint16_t x4384 = 6U;

	t78 = ((x4381/x4382)&(x4383>>x4384));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x4393 = INT8_MAX;
	static uint64_t x4395 = 2408759746LLU;
	static uint8_t x4396 = 24U;

	t79 = ((x4393/x4394)&(x4395>>x4396));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4481 = INT64_MAX;
	volatile uint8_t x4482 = 49U;
	int32_t x4483 = 31089;
	uint8_t x4484 = 1U;

	t80 = ((x4481/x4482)&(x4483>>x4484));

	if (t80 != 9256LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4485 = INT8_MIN;
	int64_t x4486 = 997187461898659LL;
	int64_t x4487 = 230LL;
	int64_t t81 = 42250354898LL;

	t81 = ((x4485/x4486)&(x4487>>x4488));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4501 = INT64_MIN;
	int16_t x4503 = INT16_MAX;
	volatile uint8_t x4504 = 1U;

	t82 = ((x4501/x4502)&(x4503>>x4504));

	if (t82 != 16255LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4510 = -1;
	uint64_t x4511 = UINT64_MAX;
	volatile uint64_t t83 = 11921607LLU;

	t83 = ((x4509/x4510)&(x4511>>x4512));

	if (t83 != 32768LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x4605 = 9115LLU;
	volatile int32_t x4606 = 119;
	int64_t x4607 = INT64_MAX;
	volatile uint32_t x4608 = 1U;

	t84 = ((x4605/x4606)&(x4607>>x4608));

	if (t84 != 76LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4633 = INT32_MAX;
	static int16_t x4634 = 13568;
	int64_t x4635 = 876555522926368LL;
	static uint8_t x4636 = 43U;
	volatile int64_t t85 = -299348076340325LL;

	t85 = ((x4633/x4634)&(x4635>>x4636));

	if (t85 != 67LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x4641 = -1;
	volatile int32_t x4643 = 0;
	static uint64_t x4644 = 1LLU;
	int32_t t86 = 123459503;

	t86 = ((x4641/x4642)&(x4643>>x4644));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4653 = INT16_MIN;
	volatile uint16_t x4654 = UINT16_MAX;
	static volatile uint64_t x4655 = 78903718LLU;
	volatile uint64_t t87 = 111526317818243965LLU;

	t87 = ((x4653/x4654)&(x4655>>x4656));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4661 = 88U;
	int32_t x4663 = INT32_MAX;
	int32_t t88 = -133398;

	t88 = ((x4661/x4662)&(x4663>>x4664));

	if (t88 != 2147483604) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4685 = 3U;
	static int8_t x4687 = 22;
	static int16_t x4688 = 14;
	volatile int32_t t89 = -1;

	t89 = ((x4685/x4686)&(x4687>>x4688));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x4701 = INT64_MIN;
	volatile uint64_t x4703 = 17682305227LLU;

	t90 = ((x4701/x4702)&(x4703>>x4704));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x4781 = INT64_MAX;
	uint16_t x4782 = UINT16_MAX;
	static int8_t x4783 = INT8_MAX;
	uint8_t x4784 = 1U;
	int64_t t91 = 1867352531336962LL;

	t91 = ((x4781/x4782)&(x4783>>x4784));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4793 = INT32_MIN;
	int16_t x4794 = INT16_MIN;
	int8_t x4795 = INT8_MAX;
	volatile int32_t t92 = -1;

	t92 = ((x4793/x4794)&(x4795>>x4796));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4853 = INT64_MIN;
	int16_t x4854 = INT16_MAX;
	uint16_t x4855 = UINT16_MAX;
	int64_t x4856 = 1LL;
	volatile int64_t t93 = 897798139285125LL;

	t93 = ((x4853/x4854)&(x4855>>x4856));

	if (t93 != 32760LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x5077 = -4;
	uint32_t x5078 = 3094U;
	uint8_t x5079 = UINT8_MAX;
	uint32_t x5080 = 2U;
	uint32_t t94 = 765U;

	t94 = ((x5077/x5078)&(x5079>>x5080));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x5145 = UINT16_MAX;
	int16_t x5146 = INT16_MIN;
	static int8_t x5147 = INT8_MAX;
	uint16_t x5148 = 1U;
	static volatile int32_t t95 = -1633074;

	t95 = ((x5145/x5146)&(x5147>>x5148));

	if (t95 != 63) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5302 = INT8_MIN;
	int64_t x5303 = INT64_MAX;
	volatile uint8_t x5304 = 2U;
	volatile int64_t t96 = -2071237718LL;

	t96 = ((x5301/x5302)&(x5303>>x5304));

	if (t96 != 2305843009213693441LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x5329 = INT64_MAX;
	static int32_t x5330 = -16;
	uint64_t x5331 = 7861583LLU;
	volatile uint16_t x5332 = 0U;
	static volatile uint64_t t97 = 2935893533064812LLU;

	t97 = ((x5329/x5330)&(x5331>>x5332));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5364 = 2U;

	t98 = ((x5361/x5362)&(x5363>>x5364));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5373 = 7U;
	static int32_t x5374 = INT32_MIN;
	uint8_t x5375 = UINT8_MAX;

	t99 = ((x5373/x5374)&(x5375>>x5376));

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

