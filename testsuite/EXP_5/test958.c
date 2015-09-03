#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = UINT16_MAX;
volatile int32_t t0 = 8;
volatile int64_t x62 = 44900086270199LL;
volatile uint64_t x63 = 11LLU;
uint8_t x97 = UINT8_MAX;
uint32_t x98 = UINT32_MAX;
int32_t t2 = -198261;
int32_t t4 = -32559116;
volatile uint16_t x198 = 153U;
int32_t x337 = INT32_MIN;
volatile int32_t x338 = 29;
int8_t x340 = INT8_MIN;
volatile uint32_t x518 = 44611U;
volatile int32_t t9 = -946716771;
volatile int32_t t10 = 122937;
static uint16_t x765 = 104U;
int32_t x1032 = INT32_MAX;
volatile int32_t t15 = -1357043;
volatile uint64_t x1057 = 3206921735LLU;
static uint32_t x1185 = UINT32_MAX;
uint64_t x1278 = UINT64_MAX;
static int32_t x1331 = 0;
static volatile int16_t x1536 = INT16_MIN;
uint8_t x1558 = 13U;
volatile uint8_t x1559 = 0U;
static int32_t t23 = -954;
uint8_t x1627 = 1U;
volatile int16_t x1777 = 8447;
static uint32_t x1846 = 247039325U;
static volatile int32_t x1848 = INT32_MIN;
int32_t t28 = -218265325;
int16_t x1976 = INT16_MAX;
int64_t x2021 = -1LL;
volatile int32_t x2024 = INT32_MAX;
static volatile int32_t t30 = 91581611;
int8_t x2038 = 29;
int32_t t32 = -1827;
int8_t x2175 = 3;
int32_t t34 = 4874;
uint16_t x2227 = 5U;
int32_t x2387 = 4;
volatile uint16_t x2423 = 3U;
volatile uint8_t x2499 = 2U;
uint64_t x2509 = 598379183956LLU;
static int32_t t41 = -294;
static int16_t x2659 = 0;
static uint8_t x2839 = 0U;
volatile int32_t t46 = -120994;
volatile int32_t t48 = 42138692;
volatile int16_t x3179 = 20;
int8_t x3285 = -1;
volatile int32_t t52 = 403733191;
uint64_t x3331 = 4LLU;
uint8_t x3355 = 0U;
volatile uint32_t x3358 = 2021981649U;
int8_t x3497 = INT8_MAX;
uint64_t x3500 = 81606LLU;
static volatile uint16_t x3592 = 38U;
int16_t x3733 = INT16_MAX;
uint16_t x3734 = 651U;
int32_t x3736 = -1;
int8_t x3781 = INT8_MAX;
uint16_t x3858 = UINT16_MAX;
uint16_t x3859 = 2U;
static uint16_t x3899 = 3U;
static int32_t t65 = -293330543;
uint8_t x4158 = 1U;
uint32_t x4160 = UINT32_MAX;
static uint8_t x4199 = 3U;
volatile int32_t t71 = 3;
uint64_t x4429 = 8755633310116832124LLU;
int16_t x4431 = 7;
int32_t t75 = -934705;
uint32_t x4614 = 186144U;
volatile int32_t t76 = 25;
volatile int8_t x4656 = INT8_MIN;
static volatile int64_t x4665 = INT64_MAX;
int32_t x4668 = INT32_MAX;
uint64_t x4692 = UINT64_MAX;
volatile int32_t t80 = -6285;
static int32_t x4778 = 7;
int64_t x5024 = INT64_MIN;
static int8_t x5241 = INT8_MAX;
volatile int8_t x5244 = INT8_MIN;
uint8_t x5810 = 3U;
volatile int16_t x6062 = 138;
volatile uint64_t x6064 = 300278048662924LLU;


void f0(void) {
	uint16_t x1 = 1U;
	static int16_t x2 = 0;
	volatile int64_t x3 = 13LL;

	t0 = (x1<((x2<<x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x61 = -4438;
	int64_t x64 = -1105LL;
	int32_t t1 = -1;

	t1 = (x61<((x62<<x63)<x64));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x99 = 1;
	int16_t x100 = 1768;

	t2 = (x97<((x98<<x99)<x100));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x109 = 1143554996U;
	uint16_t x110 = 100U;
	uint8_t x111 = 7U;
	static int64_t x112 = INT64_MIN;
	volatile int32_t t3 = 2350888;

	t3 = (x109<((x110<<x111)<x112));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x129 = INT64_MIN;
	uint32_t x130 = UINT32_MAX;
	uint8_t x131 = 6U;
	static uint32_t x132 = 8783152U;

	t4 = (x129<((x130<<x131)<x132));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x157 = 37404198809509LL;
	uint8_t x158 = 2U;
	int8_t x159 = 4;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t5 = -3967;

	t5 = (x157<((x158<<x159)<x160));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x161 = INT64_MIN;
	volatile int8_t x162 = INT8_MAX;
	int8_t x163 = 0;
	int8_t x164 = -1;
	int32_t t6 = -26418050;

	t6 = (x161<((x162<<x163)<x164));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x197 = -48;
	int16_t x199 = 0;
	int8_t x200 = INT8_MIN;
	volatile int32_t t7 = 1513;

	t7 = (x197<((x198<<x199)<x200));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x339 = 5;
	static int32_t t8 = -345;

	t8 = (x337<((x338<<x339)<x340));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x517 = UINT32_MAX;
	int16_t x519 = 1;
	uint64_t x520 = UINT64_MAX;

	t9 = (x517<((x518<<x519)<x520));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x573 = -1;
	uint32_t x574 = UINT32_MAX;
	uint16_t x575 = 0U;
	static volatile int8_t x576 = 1;

	t10 = (x573<((x574<<x575)<x576));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x633 = -9769646454319LL;
	volatile uint64_t x634 = 1797062101286LLU;
	int8_t x635 = 0;
	int32_t x636 = INT32_MIN;
	int32_t t11 = 122160;

	t11 = (x633<((x634<<x635)<x636));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x701 = UINT64_MAX;
	volatile uint32_t x702 = 1103U;
	uint64_t x703 = 7LLU;
	static uint32_t x704 = 139786603U;
	static volatile int32_t t12 = 176097;

	t12 = (x701<((x702<<x703)<x704));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x766 = 80346487135854LL;
	uint8_t x767 = 0U;
	static uint16_t x768 = 6U;
	static volatile int32_t t13 = 27743;

	t13 = (x765<((x766<<x767)<x768));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x1025 = 2859;
	int32_t x1026 = 157395683;
	uint16_t x1027 = 2U;
	int16_t x1028 = INT16_MIN;
	volatile int32_t t14 = 1;

	t14 = (x1025<((x1026<<x1027)<x1028));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x1029 = INT16_MIN;
	uint32_t x1030 = UINT32_MAX;
	volatile uint8_t x1031 = 3U;

	t15 = (x1029<((x1030<<x1031)<x1032));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1058 = INT16_MAX;
	int8_t x1059 = 0;
	volatile uint64_t x1060 = UINT64_MAX;
	int32_t t16 = 724202639;

	t16 = (x1057<((x1058<<x1059)<x1060));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1186 = 3027073U;
	int8_t x1187 = 2;
	static int64_t x1188 = 25840LL;
	volatile int32_t t17 = -15;

	t17 = (x1185<((x1186<<x1187)<x1188));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1277 = INT8_MAX;
	uint16_t x1279 = 52U;
	uint8_t x1280 = UINT8_MAX;
	int32_t t18 = 490894433;

	t18 = (x1277<((x1278<<x1279)<x1280));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1329 = -1;
	uint8_t x1330 = 1U;
	volatile uint32_t x1332 = UINT32_MAX;
	volatile int32_t t19 = -3;

	t19 = (x1329<((x1330<<x1331)<x1332));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1385 = UINT32_MAX;
	static uint64_t x1386 = 165199575767858432LLU;
	int16_t x1387 = 1;
	int32_t x1388 = -1;
	int32_t t20 = 3;

	t20 = (x1385<((x1386<<x1387)<x1388));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1429 = -1;
	uint32_t x1430 = UINT32_MAX;
	volatile uint16_t x1431 = 7U;
	int16_t x1432 = INT16_MIN;
	volatile int32_t t21 = 1;

	t21 = (x1429<((x1430<<x1431)<x1432));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1533 = 32027037;
	int16_t x1534 = 0;
	volatile uint8_t x1535 = 26U;
	int32_t t22 = -1358467;

	t22 = (x1533<((x1534<<x1535)<x1536));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1557 = 6U;
	uint32_t x1560 = 3230863U;

	t23 = (x1557<((x1558<<x1559)<x1560));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1625 = UINT64_MAX;
	int64_t x1626 = 2551499LL;
	volatile int32_t x1628 = INT32_MAX;
	volatile int32_t t24 = 15149;

	t24 = (x1625<((x1626<<x1627)<x1628));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1677 = 12819486716LL;
	uint32_t x1678 = 14U;
	volatile int8_t x1679 = 7;
	static volatile int16_t x1680 = 1;
	volatile int32_t t25 = -136;

	t25 = (x1677<((x1678<<x1679)<x1680));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1778 = 17U;
	uint8_t x1779 = 0U;
	static volatile int64_t x1780 = INT64_MAX;
	static volatile int32_t t26 = -221781;

	t26 = (x1777<((x1778<<x1779)<x1780));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1817 = 572U;
	uint64_t x1818 = 57LLU;
	volatile uint8_t x1819 = 28U;
	int8_t x1820 = INT8_MAX;
	volatile int32_t t27 = -16954;

	t27 = (x1817<((x1818<<x1819)<x1820));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x1845 = INT8_MIN;
	static int8_t x1847 = 0;

	t28 = (x1845<((x1846<<x1847)<x1848));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1973 = INT8_MIN;
	int32_t x1974 = 22;
	uint8_t x1975 = 9U;
	int32_t t29 = -768255;

	t29 = (x1973<((x1974<<x1975)<x1976));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2022 = 1079798944LLU;
	uint8_t x2023 = 20U;

	t30 = (x2021<((x2022<<x2023)<x2024));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x2037 = -1;
	static volatile uint16_t x2039 = 2U;
	int16_t x2040 = -11;
	static int32_t t31 = -1;

	t31 = (x2037<((x2038<<x2039)<x2040));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2049 = 0;
	uint16_t x2050 = UINT16_MAX;
	static int8_t x2051 = 15;
	int16_t x2052 = INT16_MIN;

	t32 = (x2049<((x2050<<x2051)<x2052));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2173 = 1U;
	uint32_t x2174 = 98U;
	int64_t x2176 = INT64_MIN;
	volatile int32_t t33 = 0;

	t33 = (x2173<((x2174<<x2175)<x2176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x2193 = UINT32_MAX;
	int64_t x2194 = 106543128137LL;
	uint8_t x2195 = 0U;
	uint32_t x2196 = 4337926U;

	t34 = (x2193<((x2194<<x2195)<x2196));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2225 = 15560237787570LLU;
	uint32_t x2226 = UINT32_MAX;
	uint8_t x2228 = 1U;
	int32_t t35 = 2;

	t35 = (x2225<((x2226<<x2227)<x2228));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2277 = INT64_MAX;
	uint64_t x2278 = UINT64_MAX;
	uint8_t x2279 = 0U;
	volatile int64_t x2280 = 293356LL;
	volatile int32_t t36 = -13389803;

	t36 = (x2277<((x2278<<x2279)<x2280));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2385 = INT32_MAX;
	uint16_t x2386 = UINT16_MAX;
	volatile int32_t x2388 = -992200;
	int32_t t37 = 10495480;

	t37 = (x2385<((x2386<<x2387)<x2388));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2421 = INT64_MIN;
	volatile uint32_t x2422 = 75U;
	int64_t x2424 = INT64_MIN;
	static int32_t t38 = 0;

	t38 = (x2421<((x2422<<x2423)<x2424));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2497 = 23U;
	uint64_t x2498 = 62701LLU;
	int32_t x2500 = INT32_MIN;
	int32_t t39 = 2098;

	t39 = (x2497<((x2498<<x2499)<x2500));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2510 = 41U;
	uint16_t x2511 = 2U;
	volatile int64_t x2512 = INT64_MIN;
	volatile int32_t t40 = 44;

	t40 = (x2509<((x2510<<x2511)<x2512));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2537 = INT16_MIN;
	static uint32_t x2538 = 2700U;
	uint64_t x2539 = 11LLU;
	int64_t x2540 = -10748378263678LL;

	t41 = (x2537<((x2538<<x2539)<x2540));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2657 = INT64_MAX;
	static uint8_t x2658 = UINT8_MAX;
	static int32_t x2660 = 5;
	volatile int32_t t42 = 545572399;

	t42 = (x2657<((x2658<<x2659)<x2660));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x2829 = INT32_MAX;
	int32_t x2830 = INT32_MAX;
	int64_t x2831 = 0LL;
	uint32_t x2832 = UINT32_MAX;
	volatile int32_t t43 = -11;

	t43 = (x2829<((x2830<<x2831)<x2832));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2837 = INT64_MIN;
	int16_t x2838 = INT16_MAX;
	static uint64_t x2840 = 1611927LLU;
	int32_t t44 = -14562;

	t44 = (x2837<((x2838<<x2839)<x2840));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2873 = 0U;
	static uint64_t x2874 = 284928712405010027LLU;
	volatile int16_t x2875 = 7;
	volatile int64_t x2876 = INT64_MAX;
	volatile int32_t t45 = -1048058809;

	t45 = (x2873<((x2874<<x2875)<x2876));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2881 = 1503;
	uint16_t x2882 = 25701U;
	uint8_t x2883 = 10U;
	uint32_t x2884 = UINT32_MAX;

	t46 = (x2881<((x2882<<x2883)<x2884));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2917 = UINT16_MAX;
	static uint32_t x2918 = UINT32_MAX;
	uint8_t x2919 = 28U;
	int16_t x2920 = -740;
	volatile int32_t t47 = 588;

	t47 = (x2917<((x2918<<x2919)<x2920));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3077 = 1478273482LLU;
	uint8_t x3078 = 5U;
	uint8_t x3079 = 28U;
	int16_t x3080 = INT16_MAX;

	t48 = (x3077<((x3078<<x3079)<x3080));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x3093 = 2U;
	uint64_t x3094 = 14183619LLU;
	uint8_t x3095 = 0U;
	static int8_t x3096 = -49;
	static volatile int32_t t49 = -49821;

	t49 = (x3093<((x3094<<x3095)<x3096));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3177 = INT8_MIN;
	uint32_t x3178 = 3265827U;
	uint16_t x3180 = 1U;
	volatile int32_t t50 = 279308855;

	t50 = (x3177<((x3178<<x3179)<x3180));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x3225 = 55U;
	uint64_t x3226 = 520036753246270LLU;
	uint8_t x3227 = 43U;
	int16_t x3228 = 62;
	int32_t t51 = -783644172;

	t51 = (x3225<((x3226<<x3227)<x3228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3286 = 3284U;
	uint16_t x3287 = 14U;
	int64_t x3288 = INT64_MAX;

	t52 = (x3285<((x3286<<x3287)<x3288));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x3329 = 42U;
	static volatile uint32_t x3330 = 1U;
	volatile int16_t x3332 = INT16_MAX;
	volatile int32_t t53 = 521;

	t53 = (x3329<((x3330<<x3331)<x3332));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3353 = INT16_MIN;
	uint16_t x3354 = UINT16_MAX;
	uint16_t x3356 = UINT16_MAX;
	volatile int32_t t54 = -257228198;

	t54 = (x3353<((x3354<<x3355)<x3356));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x3357 = -1LL;
	uint8_t x3359 = 12U;
	volatile int64_t x3360 = INT64_MAX;
	volatile int32_t t55 = -185;

	t55 = (x3357<((x3358<<x3359)<x3360));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x3498 = 0U;
	int8_t x3499 = 1;
	volatile int32_t t56 = 0;

	t56 = (x3497<((x3498<<x3499)<x3500));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3589 = -27;
	uint8_t x3590 = 110U;
	volatile int8_t x3591 = 1;
	volatile int32_t t57 = 60;

	t57 = (x3589<((x3590<<x3591)<x3592));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3621 = INT32_MIN;
	int16_t x3622 = INT16_MAX;
	int8_t x3623 = 0;
	int8_t x3624 = INT8_MAX;
	int32_t t58 = -810341226;

	t58 = (x3621<((x3622<<x3623)<x3624));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3717 = UINT8_MAX;
	uint8_t x3718 = UINT8_MAX;
	uint8_t x3719 = 15U;
	static volatile int32_t x3720 = INT32_MAX;
	int32_t t59 = 109;

	t59 = (x3717<((x3718<<x3719)<x3720));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3735 = 5;
	volatile int32_t t60 = 0;

	t60 = (x3733<((x3734<<x3735)<x3736));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x3737 = 255LL;
	uint8_t x3738 = 2U;
	int8_t x3739 = 0;
	volatile int8_t x3740 = INT8_MAX;
	volatile int32_t t61 = -160927;

	t61 = (x3737<((x3738<<x3739)<x3740));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3782 = UINT32_MAX;
	int8_t x3783 = 28;
	int16_t x3784 = INT16_MIN;
	static volatile int32_t t62 = -7410038;

	t62 = (x3781<((x3782<<x3783)<x3784));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3857 = INT32_MIN;
	int8_t x3860 = -1;
	volatile int32_t t63 = -12276;

	t63 = (x3857<((x3858<<x3859)<x3860));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3861 = -1;
	volatile uint32_t x3862 = UINT32_MAX;
	volatile uint8_t x3863 = 5U;
	static uint32_t x3864 = 24954898U;
	int32_t t64 = -63332;

	t64 = (x3861<((x3862<<x3863)<x3864));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3897 = UINT64_MAX;
	uint8_t x3898 = 1U;
	volatile uint64_t x3900 = UINT64_MAX;

	t65 = (x3897<((x3898<<x3899)<x3900));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x3949 = INT8_MAX;
	uint64_t x3950 = 250LLU;
	uint16_t x3951 = 0U;
	uint64_t x3952 = 1955LLU;
	volatile int32_t t66 = 434009727;

	t66 = (x3949<((x3950<<x3951)<x3952));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3957 = -1LL;
	volatile uint8_t x3958 = UINT8_MAX;
	uint8_t x3959 = 1U;
	uint32_t x3960 = 516U;
	int32_t t67 = 0;

	t67 = (x3957<((x3958<<x3959)<x3960));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4069 = 91U;
	static volatile uint64_t x4070 = 266145LLU;
	int8_t x4071 = 0;
	static int16_t x4072 = -1;
	volatile int32_t t68 = -9108;

	t68 = (x4069<((x4070<<x4071)<x4072));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x4109 = INT16_MAX;
	volatile uint64_t x4110 = 104049651121964735LLU;
	uint8_t x4111 = 0U;
	volatile int32_t x4112 = INT32_MIN;
	static volatile int32_t t69 = -4;

	t69 = (x4109<((x4110<<x4111)<x4112));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4157 = 218LL;
	static uint8_t x4159 = 14U;
	int32_t t70 = -4482;

	t70 = (x4157<((x4158<<x4159)<x4160));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x4197 = -1;
	int8_t x4198 = INT8_MAX;
	int64_t x4200 = INT64_MAX;

	t71 = (x4197<((x4198<<x4199)<x4200));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x4233 = 15596U;
	uint32_t x4234 = 1U;
	uint32_t x4235 = 0U;
	int8_t x4236 = -2;
	static volatile int32_t t72 = -1;

	t72 = (x4233<((x4234<<x4235)<x4236));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4430 = 90;
	int16_t x4432 = INT16_MAX;
	static volatile int32_t t73 = 0;

	t73 = (x4429<((x4430<<x4431)<x4432));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4549 = -1;
	uint16_t x4550 = UINT16_MAX;
	uint8_t x4551 = 0U;
	int8_t x4552 = INT8_MIN;
	int32_t t74 = 1;

	t74 = (x4549<((x4550<<x4551)<x4552));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4565 = UINT16_MAX;
	int8_t x4566 = INT8_MAX;
	int8_t x4567 = 19;
	uint16_t x4568 = 105U;

	t75 = (x4565<((x4566<<x4567)<x4568));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4613 = 1984601902019410LLU;
	volatile uint8_t x4615 = 3U;
	uint8_t x4616 = 53U;

	t76 = (x4613<((x4614<<x4615)<x4616));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4637 = 0U;
	volatile uint32_t x4638 = 9U;
	int32_t x4639 = 1;
	int32_t x4640 = INT32_MIN;
	static volatile int32_t t77 = 249843051;

	t77 = (x4637<((x4638<<x4639)<x4640));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4653 = INT64_MIN;
	int8_t x4654 = 1;
	int8_t x4655 = 8;
	static volatile int32_t t78 = 951519;

	t78 = (x4653<((x4654<<x4655)<x4656));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4666 = 31;
	uint32_t x4667 = 5U;
	int32_t t79 = 1;

	t79 = (x4665<((x4666<<x4667)<x4668));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x4689 = INT64_MIN;
	uint64_t x4690 = 38892605645647989LLU;
	volatile int16_t x4691 = 0;

	t80 = (x4689<((x4690<<x4691)<x4692));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4749 = UINT16_MAX;
	uint16_t x4750 = 206U;
	int32_t x4751 = 1;
	uint64_t x4752 = 252236LLU;
	volatile int32_t t81 = -54;

	t81 = (x4749<((x4750<<x4751)<x4752));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4777 = 0;
	volatile int16_t x4779 = 0;
	static volatile int32_t x4780 = INT32_MIN;
	int32_t t82 = -41;

	t82 = (x4777<((x4778<<x4779)<x4780));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5009 = INT8_MIN;
	uint64_t x5010 = 270406006775072LLU;
	int8_t x5011 = 1;
	static volatile int16_t x5012 = -1;
	int32_t t83 = -34941484;

	t83 = (x5009<((x5010<<x5011)<x5012));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5021 = UINT16_MAX;
	volatile uint8_t x5022 = UINT8_MAX;
	static uint16_t x5023 = 19U;
	int32_t t84 = 21761235;

	t84 = (x5021<((x5022<<x5023)<x5024));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x5065 = INT16_MAX;
	uint8_t x5066 = 7U;
	volatile int8_t x5067 = 0;
	int8_t x5068 = INT8_MIN;
	volatile int32_t t85 = 159308936;

	t85 = (x5065<((x5066<<x5067)<x5068));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5085 = -6376663919599LL;
	int64_t x5086 = INT64_MAX;
	uint8_t x5087 = 0U;
	int16_t x5088 = 874;
	int32_t t86 = 5182;

	t86 = (x5085<((x5086<<x5087)<x5088));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5129 = INT16_MIN;
	int32_t x5130 = 63332037;
	int8_t x5131 = 0;
	static int8_t x5132 = INT8_MAX;
	static volatile int32_t t87 = 363895382;

	t87 = (x5129<((x5130<<x5131)<x5132));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x5213 = INT16_MIN;
	uint32_t x5214 = 4489543U;
	static int64_t x5215 = 29LL;
	static int8_t x5216 = INT8_MAX;
	static int32_t t88 = -46542983;

	t88 = (x5213<((x5214<<x5215)<x5216));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5242 = 33U;
	static volatile int8_t x5243 = 0;
	int32_t t89 = -400429;

	t89 = (x5241<((x5242<<x5243)<x5244));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5245 = 11159770U;
	int8_t x5246 = 41;
	int32_t x5247 = 0;
	volatile uint32_t x5248 = 1571U;
	volatile int32_t t90 = 237864;

	t90 = (x5245<((x5246<<x5247)<x5248));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x5313 = -1LL;
	volatile uint32_t x5314 = 3689099U;
	uint8_t x5315 = 0U;
	int32_t x5316 = -306;
	int32_t t91 = 3034;

	t91 = (x5313<((x5314<<x5315)<x5316));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5513 = INT32_MAX;
	int32_t x5514 = 414402;
	static uint16_t x5515 = 1U;
	uint8_t x5516 = 8U;
	int32_t t92 = -613946;

	t92 = (x5513<((x5514<<x5515)<x5516));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5745 = INT64_MIN;
	int32_t x5746 = 306;
	int8_t x5747 = 14;
	volatile int8_t x5748 = -1;
	volatile int32_t t93 = 27548;

	t93 = (x5745<((x5746<<x5747)<x5748));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x5809 = INT64_MIN;
	uint32_t x5811 = 27U;
	int8_t x5812 = -1;
	int32_t t94 = -4;

	t94 = (x5809<((x5810<<x5811)<x5812));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x5877 = 1626U;
	uint8_t x5878 = UINT8_MAX;
	uint16_t x5879 = 2U;
	int8_t x5880 = -1;
	int32_t t95 = -968717;

	t95 = (x5877<((x5878<<x5879)<x5880));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5941 = UINT16_MAX;
	uint8_t x5942 = 22U;
	volatile uint32_t x5943 = 24U;
	uint32_t x5944 = 2668U;
	int32_t t96 = -341;

	t96 = (x5941<((x5942<<x5943)<x5944));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5945 = 4236839515667933LLU;
	uint32_t x5946 = 463678U;
	uint32_t x5947 = 17U;
	uint32_t x5948 = UINT32_MAX;
	volatile int32_t t97 = -2644;

	t97 = (x5945<((x5946<<x5947)<x5948));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5977 = UINT16_MAX;
	int8_t x5978 = INT8_MAX;
	uint8_t x5979 = 7U;
	int32_t x5980 = -1;
	int32_t t98 = 150166952;

	t98 = (x5977<((x5978<<x5979)<x5980));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6061 = 81517938U;
	int16_t x6063 = 20;
	int32_t t99 = -23887718;

	t99 = (x6061<((x6062<<x6063)<x6064));

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

