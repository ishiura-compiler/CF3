#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x67 = INT64_MAX;
volatile int8_t x112 = 0;
volatile int8_t x225 = INT8_MAX;
int32_t t2 = -3907;
int16_t x502 = -1;
uint8_t x527 = 3U;
volatile int8_t x586 = -1;
int32_t t5 = 6346;
uint64_t x703 = 30359LLU;
volatile int64_t t7 = 28249017LL;
uint32_t x758 = 905349849U;
volatile int32_t t8 = -14;
int16_t x852 = 14;
volatile uint32_t t9 = 6U;
volatile int32_t x857 = 8003;
static int64_t x858 = -430401230640LL;
volatile int64_t t12 = INT64_MAX;
static int8_t x1012 = 3;
int64_t x1269 = 832LL;
volatile int32_t x1337 = INT32_MIN;
int64_t x1338 = INT64_MIN;
uint8_t x1345 = UINT8_MAX;
uint16_t x1346 = 1175U;
volatile int32_t t21 = -1;
int8_t x1677 = -1;
static uint8_t x1680 = 5U;
uint8_t x1771 = 9U;
uint8_t x1836 = 0U;
volatile int16_t x2006 = INT16_MIN;
int32_t t26 = 239733436;
int32_t t28 = 49044;
uint16_t x2214 = 3U;
static volatile int16_t x2216 = 1;
volatile int8_t x2348 = 3;
int64_t t31 = -4LL;
uint64_t x2379 = 12391415293193LLU;
int8_t x2381 = INT8_MAX;
int16_t x2383 = 2;
static int32_t t34 = -51570;
uint16_t x2439 = 23837U;
int16_t x2501 = INT16_MAX;
static uint32_t x2502 = UINT32_MAX;
int8_t x2632 = 22;
int32_t t39 = 1500817;
static int32_t x2807 = INT32_MAX;
volatile int16_t x2869 = -61;
uint64_t x2913 = 3720080444LLU;
static volatile int8_t x2922 = -1;
static uint32_t x3098 = 29U;
int64_t x3103 = INT64_MAX;
int16_t x3105 = -1;
volatile uint16_t x3108 = 18U;
int32_t t50 = 1;
uint64_t x3199 = UINT64_MAX;
int8_t x3214 = INT8_MIN;
int8_t x3215 = INT8_MAX;
uint8_t x3216 = 8U;
static uint8_t x3226 = 1U;
static int32_t t53 = 147645454;
int32_t x3334 = INT32_MIN;
int16_t x3358 = INT16_MAX;
int8_t x3362 = -1;
volatile int32_t t57 = 46;
int16_t x3410 = -1;
uint32_t x3477 = 23648234U;
volatile int16_t x3478 = INT16_MAX;
uint32_t x3496 = 21U;
static volatile int32_t x3610 = -1;
static int64_t x3631 = 3218057306266063715LL;
uint64_t x3707 = 900974588220299409LLU;
volatile int64_t x3734 = INT64_MIN;
int16_t x3792 = 29;
uint16_t x3804 = 15U;
static int32_t t70 = -939993855;
static int32_t x3850 = -1;
volatile uint32_t t73 = 6056U;
volatile int16_t x4139 = 28;
uint16_t x4344 = 6U;
int64_t x4573 = INT64_MIN;
volatile int32_t t79 = 54075;
volatile int8_t x4625 = 16;
volatile uint32_t x4655 = UINT32_MAX;
uint32_t x4859 = 114U;
uint8_t x4860 = 4U;
volatile uint32_t t84 = 32U;
uint8_t x4928 = 0U;
volatile int32_t t87 = 4590607;
uint8_t x5108 = 1U;
uint8_t x5129 = 13U;
int8_t x5130 = INT8_MIN;
volatile uint64_t t92 = 897LLU;
static volatile int16_t x5700 = 1;
volatile int32_t t98 = 110;


void f0(void) {
	volatile uint64_t x65 = 1112948759863812433LLU;
	uint64_t x66 = 32241978636830LLU;
	volatile uint16_t x68 = 5U;
	int64_t t0 = 7441380151409480LL;

	t0 = (((x65<=x66)|x67)>>x68);

	if (t0 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x109 = 167U;
	volatile int8_t x110 = 23;
	static int32_t x111 = 1;
	int32_t t1 = -362398;

	t1 = (((x109<=x110)|x111)>>x112);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x226 = 0;
	uint8_t x227 = 18U;
	int8_t x228 = 14;

	t2 = (((x225<=x226)|x227)>>x228);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x501 = INT32_MIN;
	uint8_t x503 = UINT8_MAX;
	uint16_t x504 = 1U;
	volatile int32_t t3 = -241279;

	t3 = (((x501<=x502)|x503)>>x504);

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x525 = 288150741LLU;
	static int64_t x526 = -1LL;
	uint8_t x528 = 0U;
	volatile int32_t t4 = 4126468;

	t4 = (((x525<=x526)|x527)>>x528);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x585 = INT8_MAX;
	uint16_t x587 = 1U;
	volatile int8_t x588 = 0;

	t5 = (((x585<=x586)|x587)>>x588);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x701 = INT16_MIN;
	int8_t x702 = 0;
	static uint16_t x704 = 29U;
	volatile uint64_t t6 = 22LLU;

	t6 = (((x701<=x702)|x703)>>x704);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x705 = 2;
	int8_t x706 = -1;
	int64_t x707 = 389934147592440LL;
	int16_t x708 = 12;

	t7 = (((x705<=x706)|x707)>>x708);

	if (t7 != 95198766502LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x757 = INT8_MIN;
	int32_t x759 = 2037;
	uint8_t x760 = 2U;

	t8 = (((x757<=x758)|x759)>>x760);

	if (t8 != 509) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x849 = -1LL;
	int64_t x850 = -18121331350931505LL;
	static uint32_t x851 = UINT32_MAX;

	t9 = (((x849<=x850)|x851)>>x852);

	if (t9 != 262143U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x859 = 548U;
	uint8_t x860 = 2U;
	int32_t t10 = -297258028;

	t10 = (((x857<=x858)|x859)>>x860);

	if (t10 != 137) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x893 = -47900521385569LL;
	static int32_t x894 = INT32_MIN;
	static int32_t x895 = 40422;
	int8_t x896 = 6;
	static volatile int32_t t11 = -149361;

	t11 = (((x893<=x894)|x895)>>x896);

	if (t11 != 631) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x933 = -1;
	int64_t x934 = INT64_MIN;
	int64_t x935 = INT64_MAX;
	int8_t x936 = 0;

	t12 = (((x933<=x934)|x935)>>x936);

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x1009 = 627U;
	uint8_t x1010 = 93U;
	static int16_t x1011 = INT16_MAX;
	volatile int32_t t13 = -1177249;

	t13 = (((x1009<=x1010)|x1011)>>x1012);

	if (t13 != 4095) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1169 = UINT16_MAX;
	uint32_t x1170 = UINT32_MAX;
	int64_t x1171 = INT64_MAX;
	static uint32_t x1172 = 2U;
	volatile int64_t t14 = -18766LL;

	t14 = (((x1169<=x1170)|x1171)>>x1172);

	if (t14 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1181 = -1;
	int64_t x1182 = INT64_MIN;
	volatile int8_t x1183 = 0;
	volatile uint8_t x1184 = 3U;
	volatile int32_t t15 = 26831751;

	t15 = (((x1181<=x1182)|x1183)>>x1184);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1270 = 14U;
	uint16_t x1271 = 6467U;
	volatile uint8_t x1272 = 1U;
	volatile int32_t t16 = -136;

	t16 = (((x1269<=x1270)|x1271)>>x1272);

	if (t16 != 3233) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1313 = UINT8_MAX;
	int8_t x1314 = INT8_MIN;
	uint16_t x1315 = 161U;
	uint8_t x1316 = 0U;
	static volatile int32_t t17 = 16221358;

	t17 = (((x1313<=x1314)|x1315)>>x1316);

	if (t17 != 161) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1339 = 12179;
	int16_t x1340 = 0;
	static int32_t t18 = -29291245;

	t18 = (((x1337<=x1338)|x1339)>>x1340);

	if (t18 != 12179) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1347 = 3447U;
	static uint8_t x1348 = 0U;
	static volatile int32_t t19 = 29704;

	t19 = (((x1345<=x1346)|x1347)>>x1348);

	if (t19 != 3447) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1521 = -1LL;
	int16_t x1522 = INT16_MAX;
	int32_t x1523 = 23598072;
	int16_t x1524 = 1;
	static int32_t t20 = 2419;

	t20 = (((x1521<=x1522)|x1523)>>x1524);

	if (t20 != 11799036) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1661 = UINT8_MAX;
	int8_t x1662 = INT8_MIN;
	static uint8_t x1663 = 0U;
	static volatile uint16_t x1664 = 1U;

	t21 = (((x1661<=x1662)|x1663)>>x1664);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1678 = 206308927;
	uint64_t x1679 = UINT64_MAX;
	static uint64_t t22 = 160LLU;

	t22 = (((x1677<=x1678)|x1679)>>x1680);

	if (t22 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1689 = INT64_MIN;
	int32_t x1690 = -1;
	uint64_t x1691 = 53LLU;
	uint8_t x1692 = 15U;
	static volatile uint64_t t23 = 20265727054LLU;

	t23 = (((x1689<=x1690)|x1691)>>x1692);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1769 = INT16_MIN;
	int32_t x1770 = INT32_MAX;
	int32_t x1772 = 1;
	int32_t t24 = -466544424;

	t24 = (((x1769<=x1770)|x1771)>>x1772);

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1833 = 336;
	uint16_t x1834 = UINT16_MAX;
	static int64_t x1835 = 4LL;
	int64_t t25 = -35827LL;

	t25 = (((x1833<=x1834)|x1835)>>x1836);

	if (t25 != 5LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x2005 = 33196089652700574LLU;
	int32_t x2007 = INT32_MAX;
	uint16_t x2008 = 13U;

	t26 = (((x2005<=x2006)|x2007)>>x2008);

	if (t26 != 262143) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x2013 = 2;
	uint32_t x2014 = 391U;
	uint64_t x2015 = 109554452235271585LLU;
	int32_t x2016 = 30;
	uint64_t t27 = 118139427580126LLU;

	t27 = (((x2013<=x2014)|x2015)>>x2016);

	if (t27 != 102030534LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2121 = 1U;
	int16_t x2122 = -1;
	uint16_t x2123 = UINT16_MAX;
	int8_t x2124 = 1;

	t28 = (((x2121<=x2122)|x2123)>>x2124);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2213 = INT16_MIN;
	uint8_t x2215 = 1U;
	volatile int32_t t29 = -1;

	t29 = (((x2213<=x2214)|x2215)>>x2216);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x2253 = -1840;
	static int32_t x2254 = INT32_MAX;
	uint16_t x2255 = 57U;
	int64_t x2256 = 0LL;
	int32_t t30 = -1809628;

	t30 = (((x2253<=x2254)|x2255)>>x2256);

	if (t30 != 57) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x2345 = 172U;
	int16_t x2346 = 101;
	int64_t x2347 = INT64_MAX;

	t31 = (((x2345<=x2346)|x2347)>>x2348);

	if (t31 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x2349 = 46954790024623LL;
	int32_t x2350 = -1;
	static uint8_t x2351 = 13U;
	static uint16_t x2352 = 14U;
	int32_t t32 = -10624202;

	t32 = (((x2349<=x2350)|x2351)>>x2352);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x2377 = -1;
	uint64_t x2378 = 9531124LLU;
	uint16_t x2380 = 0U;
	uint64_t t33 = 939LLU;

	t33 = (((x2377<=x2378)|x2379)>>x2380);

	if (t33 != 12391415293193LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2382 = 7LL;
	uint16_t x2384 = 12U;

	t34 = (((x2381<=x2382)|x2383)>>x2384);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x2437 = UINT8_MAX;
	int16_t x2438 = -7;
	int16_t x2440 = 2;
	volatile int32_t t35 = 0;

	t35 = (((x2437<=x2438)|x2439)>>x2440);

	if (t35 != 5959) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2503 = 30U;
	uint8_t x2504 = 7U;
	static volatile uint32_t t36 = 483U;

	t36 = (((x2501<=x2502)|x2503)>>x2504);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2553 = INT64_MIN;
	volatile int32_t x2554 = -1;
	uint32_t x2555 = 13103827U;
	int16_t x2556 = 0;
	volatile uint32_t t37 = 1970013U;

	t37 = (((x2553<=x2554)|x2555)>>x2556);

	if (t37 != 13103827U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2629 = 1U;
	int8_t x2630 = -1;
	uint64_t x2631 = 66515795274844928LLU;
	static uint64_t t38 = 1200999184LLU;

	t38 = (((x2629<=x2630)|x2631)>>x2632);

	if (t38 != 15858601397LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2657 = 8439717089589464473LLU;
	static uint32_t x2658 = 2U;
	int16_t x2659 = 0;
	int16_t x2660 = 1;

	t39 = (((x2657<=x2658)|x2659)>>x2660);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2805 = INT8_MIN;
	static int8_t x2806 = INT8_MIN;
	int16_t x2808 = 1;
	volatile int32_t t40 = -1;

	t40 = (((x2805<=x2806)|x2807)>>x2808);

	if (t40 != 1073741823) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2870 = INT64_MIN;
	int16_t x2871 = 3;
	uint32_t x2872 = 7U;
	static volatile int32_t t41 = 0;

	t41 = (((x2869<=x2870)|x2871)>>x2872);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2877 = INT8_MIN;
	int64_t x2878 = INT64_MIN;
	uint32_t x2879 = 13U;
	static uint8_t x2880 = 3U;
	static volatile uint32_t t42 = 5538U;

	t42 = (((x2877<=x2878)|x2879)>>x2880);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2914 = INT64_MIN;
	int64_t x2915 = 21961LL;
	uint8_t x2916 = 6U;
	volatile int64_t t43 = -2235646LL;

	t43 = (((x2913<=x2914)|x2915)>>x2916);

	if (t43 != 343LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2921 = 74U;
	uint64_t x2923 = UINT64_MAX;
	static uint64_t x2924 = 51LLU;
	uint64_t t44 = 65255LLU;

	t44 = (((x2921<=x2922)|x2923)>>x2924);

	if (t44 != 8191LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x3081 = 39U;
	static int64_t x3082 = 3463062170230LL;
	uint64_t x3083 = UINT64_MAX;
	int64_t x3084 = 14LL;
	volatile uint64_t t45 = 12203460LLU;

	t45 = (((x3081<=x3082)|x3083)>>x3084);

	if (t45 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3097 = 1;
	int64_t x3099 = 33972611133022440LL;
	int8_t x3100 = 54;
	volatile int64_t t46 = -510619LL;

	t46 = (((x3097<=x3098)|x3099)>>x3100);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3101 = 2U;
	volatile int8_t x3102 = -2;
	int16_t x3104 = 1;
	int64_t t47 = 21847LL;

	t47 = (((x3101<=x3102)|x3103)>>x3104);

	if (t47 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3106 = 283;
	uint32_t x3107 = 8245U;
	uint32_t t48 = 66U;

	t48 = (((x3105<=x3106)|x3107)>>x3108);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3157 = -1LL;
	static uint8_t x3158 = 0U;
	uint32_t x3159 = 18716995U;
	uint8_t x3160 = 3U;
	volatile uint32_t t49 = 113329U;

	t49 = (((x3157<=x3158)|x3159)>>x3160);

	if (t49 != 2339624U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3169 = -1;
	static volatile uint64_t x3170 = 795758019536951LLU;
	volatile uint8_t x3171 = UINT8_MAX;
	uint8_t x3172 = 8U;

	t50 = (((x3169<=x3170)|x3171)>>x3172);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3197 = 396U;
	static uint32_t x3198 = 630471345U;
	uint32_t x3200 = 3U;
	uint64_t t51 = 27316LLU;

	t51 = (((x3197<=x3198)|x3199)>>x3200);

	if (t51 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3213 = -23;
	static volatile int32_t t52 = 288;

	t52 = (((x3213<=x3214)|x3215)>>x3216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3225 = 0LL;
	static uint8_t x3227 = 10U;
	static uint16_t x3228 = 28U;

	t53 = (((x3225<=x3226)|x3227)>>x3228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3333 = 16342LLU;
	int32_t x3335 = INT32_MAX;
	int8_t x3336 = 0;
	volatile int32_t t54 = INT32_MAX;

	t54 = (((x3333<=x3334)|x3335)>>x3336);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3357 = INT16_MIN;
	int32_t x3359 = 99;
	int8_t x3360 = 1;
	int32_t t55 = -3385784;

	t55 = (((x3357<=x3358)|x3359)>>x3360);

	if (t55 != 49) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3361 = INT8_MIN;
	uint8_t x3363 = 7U;
	uint8_t x3364 = 13U;
	static volatile int32_t t56 = 9160;

	t56 = (((x3361<=x3362)|x3363)>>x3364);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x3401 = 0U;
	int16_t x3402 = -1;
	int32_t x3403 = 211027;
	static uint16_t x3404 = 0U;

	t57 = (((x3401<=x3402)|x3403)>>x3404);

	if (t57 != 211027) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3409 = -1;
	volatile uint64_t x3411 = 1675LLU;
	static int8_t x3412 = 15;
	volatile uint64_t t58 = 2LLU;

	t58 = (((x3409<=x3410)|x3411)>>x3412);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x3473 = -5;
	uint64_t x3474 = 38411754243256LLU;
	uint8_t x3475 = UINT8_MAX;
	uint8_t x3476 = 3U;
	int32_t t59 = -177;

	t59 = (((x3473<=x3474)|x3475)>>x3476);

	if (t59 != 31) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3479 = INT32_MAX;
	volatile uint8_t x3480 = 3U;
	static int32_t t60 = 17;

	t60 = (((x3477<=x3478)|x3479)>>x3480);

	if (t60 != 268435455) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3493 = INT64_MIN;
	int8_t x3494 = 0;
	volatile uint32_t x3495 = UINT32_MAX;
	uint32_t t61 = 1U;

	t61 = (((x3493<=x3494)|x3495)>>x3496);

	if (t61 != 2047U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x3525 = -202547775;
	uint64_t x3526 = 2747149LLU;
	uint16_t x3527 = UINT16_MAX;
	int16_t x3528 = 1;
	volatile int32_t t62 = -1339;

	t62 = (((x3525<=x3526)|x3527)>>x3528);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3553 = UINT16_MAX;
	volatile uint8_t x3554 = 5U;
	volatile uint8_t x3555 = 70U;
	int16_t x3556 = 6;
	volatile int32_t t63 = 3;

	t63 = (((x3553<=x3554)|x3555)>>x3556);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3609 = UINT32_MAX;
	static uint32_t x3611 = UINT32_MAX;
	volatile uint16_t x3612 = 24U;
	uint32_t t64 = 8522006U;

	t64 = (((x3609<=x3610)|x3611)>>x3612);

	if (t64 != 255U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3629 = -1202;
	int32_t x3630 = INT32_MIN;
	static volatile int32_t x3632 = 0;
	int64_t t65 = 933017813LL;

	t65 = (((x3629<=x3630)|x3631)>>x3632);

	if (t65 != 3218057306266063715LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3685 = INT32_MAX;
	int8_t x3686 = 2;
	static int8_t x3687 = 1;
	int8_t x3688 = 0;
	int32_t t66 = 10843000;

	t66 = (((x3685<=x3686)|x3687)>>x3688);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3705 = INT16_MAX;
	int64_t x3706 = INT64_MIN;
	uint8_t x3708 = 0U;
	static volatile uint64_t t67 = 401882645LLU;

	t67 = (((x3705<=x3706)|x3707)>>x3708);

	if (t67 != 900974588220299409LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3733 = 0;
	static uint32_t x3735 = UINT32_MAX;
	static volatile uint64_t x3736 = 1LLU;
	volatile uint32_t t68 = 122700U;

	t68 = (((x3733<=x3734)|x3735)>>x3736);

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3789 = 116U;
	static uint16_t x3790 = 57U;
	int64_t x3791 = 168689204422842552LL;
	volatile int64_t t69 = 49LL;

	t69 = (((x3789<=x3790)|x3791)>>x3792);

	if (t69 != 314208128LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3801 = INT8_MIN;
	uint16_t x3802 = 1601U;
	volatile int32_t x3803 = INT32_MAX;

	t70 = (((x3801<=x3802)|x3803)>>x3804);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3841 = 1343U;
	volatile int32_t x3842 = -43658175;
	int8_t x3843 = 3;
	static uint64_t x3844 = 7LLU;
	volatile int32_t t71 = 1;

	t71 = (((x3841<=x3842)|x3843)>>x3844);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3849 = 6093;
	static volatile uint8_t x3851 = 5U;
	volatile uint8_t x3852 = 8U;
	int32_t t72 = -49;

	t72 = (((x3849<=x3850)|x3851)>>x3852);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x4065 = 1LL;
	volatile int8_t x4066 = -44;
	uint32_t x4067 = 194U;
	uint32_t x4068 = 0U;

	t73 = (((x4065<=x4066)|x4067)>>x4068);

	if (t73 != 194U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4137 = UINT8_MAX;
	volatile uint8_t x4138 = 57U;
	int16_t x4140 = 1;
	int32_t t74 = 849;

	t74 = (((x4137<=x4138)|x4139)>>x4140);

	if (t74 != 14) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4153 = INT8_MAX;
	int32_t x4154 = -158079730;
	int8_t x4155 = 25;
	uint8_t x4156 = 7U;
	volatile int32_t t75 = 0;

	t75 = (((x4153<=x4154)|x4155)>>x4156);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4173 = 7669LLU;
	volatile int8_t x4174 = -1;
	uint32_t x4175 = 44U;
	uint8_t x4176 = 7U;
	uint32_t t76 = 101152U;

	t76 = (((x4173<=x4174)|x4175)>>x4176);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4341 = 1699720298U;
	int64_t x4342 = INT64_MIN;
	int32_t x4343 = 22;
	int32_t t77 = 231718489;

	t77 = (((x4341<=x4342)|x4343)>>x4344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4461 = INT32_MIN;
	uint16_t x4462 = UINT16_MAX;
	uint32_t x4463 = 89695U;
	int8_t x4464 = 0;
	uint32_t t78 = 212736452U;

	t78 = (((x4461<=x4462)|x4463)>>x4464);

	if (t78 != 89695U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4574 = 52U;
	uint16_t x4575 = 459U;
	uint32_t x4576 = 5U;

	t79 = (((x4573<=x4574)|x4575)>>x4576);

	if (t79 != 14) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4626 = UINT64_MAX;
	uint8_t x4627 = 12U;
	static uint8_t x4628 = 27U;
	volatile int32_t t80 = -44;

	t80 = (((x4625<=x4626)|x4627)>>x4628);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x4653 = 40746935630721LLU;
	int8_t x4654 = 0;
	int32_t x4656 = 15;
	uint32_t t81 = 0U;

	t81 = (((x4653<=x4654)|x4655)>>x4656);

	if (t81 != 131071U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x4737 = -1LL;
	int16_t x4738 = INT16_MAX;
	static uint32_t x4739 = 119925U;
	uint8_t x4740 = 0U;
	uint32_t t82 = 21890351U;

	t82 = (((x4737<=x4738)|x4739)>>x4740);

	if (t82 != 119925U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4845 = INT32_MAX;
	int8_t x4846 = INT8_MAX;
	int8_t x4847 = 2;
	uint16_t x4848 = 18U;
	volatile int32_t t83 = -161;

	t83 = (((x4845<=x4846)|x4847)>>x4848);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x4857 = UINT8_MAX;
	int32_t x4858 = INT32_MIN;

	t84 = (((x4857<=x4858)|x4859)>>x4860);

	if (t84 != 7U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4921 = INT64_MAX;
	uint64_t x4922 = 242885743LLU;
	volatile uint8_t x4923 = UINT8_MAX;
	int16_t x4924 = 2;
	int32_t t85 = -130543686;

	t85 = (((x4921<=x4922)|x4923)>>x4924);

	if (t85 != 63) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x4925 = -22;
	uint32_t x4926 = UINT32_MAX;
	static volatile uint32_t x4927 = UINT32_MAX;
	uint32_t t86 = UINT32_MAX;

	t86 = (((x4925<=x4926)|x4927)>>x4928);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x4929 = 2U;
	int8_t x4930 = INT8_MIN;
	int8_t x4931 = 2;
	static int16_t x4932 = 20;

	t87 = (((x4929<=x4930)|x4931)>>x4932);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4985 = 1210U;
	uint64_t x4986 = 4LLU;
	int32_t x4987 = 130546586;
	int32_t x4988 = 0;
	int32_t t88 = 649;

	t88 = (((x4985<=x4986)|x4987)>>x4988);

	if (t88 != 130546586) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x5105 = -513LL;
	int16_t x5106 = INT16_MAX;
	static int32_t x5107 = INT32_MAX;
	volatile int32_t t89 = 14241;

	t89 = (((x5105<=x5106)|x5107)>>x5108);

	if (t89 != 1073741823) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5131 = 1U;
	int32_t x5132 = 1;
	uint32_t t90 = 192U;

	t90 = (((x5129<=x5130)|x5131)>>x5132);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5161 = INT8_MIN;
	int8_t x5162 = INT8_MIN;
	static volatile uint16_t x5163 = UINT16_MAX;
	uint8_t x5164 = 1U;
	int32_t t91 = -715528;

	t91 = (((x5161<=x5162)|x5163)>>x5164);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5233 = -18;
	int32_t x5234 = -1;
	static uint64_t x5235 = 445302931LLU;
	uint16_t x5236 = 6U;

	t92 = (((x5233<=x5234)|x5235)>>x5236);

	if (t92 != 6957858LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x5241 = 74;
	int16_t x5242 = INT16_MAX;
	static uint32_t x5243 = 522306371U;
	static uint32_t x5244 = 0U;
	static uint32_t t93 = 679337U;

	t93 = (((x5241<=x5242)|x5243)>>x5244);

	if (t93 != 522306371U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5385 = -1;
	int32_t x5386 = INT32_MIN;
	uint64_t x5387 = 4617435155237406LLU;
	static uint8_t x5388 = 23U;
	volatile uint64_t t94 = 563026564387807LLU;

	t94 = (((x5385<=x5386)|x5387)>>x5388);

	if (t94 != 550441164LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x5505 = INT32_MIN;
	int16_t x5506 = 0;
	volatile uint16_t x5507 = 1U;
	volatile uint8_t x5508 = 7U;
	volatile int32_t t95 = -774655481;

	t95 = (((x5505<=x5506)|x5507)>>x5508);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5665 = 698656992901207LLU;
	static uint32_t x5666 = UINT32_MAX;
	int8_t x5667 = 25;
	uint8_t x5668 = 0U;
	volatile int32_t t96 = 662;

	t96 = (((x5665<=x5666)|x5667)>>x5668);

	if (t96 != 25) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5697 = 6;
	int16_t x5698 = -1;
	uint64_t x5699 = 1103552051140LLU;
	uint64_t t97 = 545065696551233245LLU;

	t97 = (((x5697<=x5698)|x5699)>>x5700);

	if (t97 != 551776025570LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x5701 = 12799;
	int32_t x5702 = -1;
	int16_t x5703 = INT16_MAX;
	uint8_t x5704 = 5U;

	t98 = (((x5701<=x5702)|x5703)>>x5704);

	if (t98 != 1023) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5717 = 92U;
	uint32_t x5718 = 64U;
	uint32_t x5719 = 398663U;
	uint16_t x5720 = 18U;
	volatile uint32_t t99 = 6685413U;

	t99 = (((x5717<=x5718)|x5719)>>x5720);

	if (t99 != 1U) { NG(); } else { ; }
	
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

