#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x13 = INT16_MAX;
int32_t x15 = 864;
uint8_t x56 = 31U;
int8_t x220 = -1;
volatile int8_t x279 = 41;
int32_t x280 = INT32_MIN;
static int64_t x364 = -149LL;
uint64_t t8 = UINT64_MAX;
uint32_t x461 = 106253151U;
int64_t x464 = INT64_MIN;
uint32_t x566 = 1U;
static volatile int32_t t11 = 4043;
int32_t x583 = -1;
volatile uint32_t t12 = 5275U;
uint8_t x618 = 0U;
static int8_t x655 = INT8_MIN;
uint8_t x698 = 7U;
uint64_t t15 = 50942218LLU;
volatile uint32_t x868 = UINT32_MAX;
uint32_t t16 = UINT32_MAX;
static int8_t x1107 = INT8_MAX;
int64_t t21 = -996497887LL;
int64_t x1162 = 1LL;
uint16_t x1285 = UINT16_MAX;
volatile int64_t x1288 = -1LL;
int8_t x1294 = 0;
volatile uint64_t t24 = 57691917374418776LLU;
volatile int16_t x1335 = INT16_MAX;
uint32_t t28 = 12U;
uint32_t x1525 = 92U;
uint64_t t29 = UINT64_MAX;
int16_t x1796 = -1;
volatile uint64_t t31 = UINT64_MAX;
int16_t x1807 = INT16_MAX;
int16_t x2187 = 1;
uint64_t t33 = UINT64_MAX;
int32_t x2255 = 2922;
int8_t x2256 = -1;
uint8_t x2266 = 6U;
static uint32_t x2466 = 8U;
int32_t x2669 = 3922;
uint64_t t41 = 414LLU;
uint64_t x2731 = 588263609LLU;
uint64_t x2765 = 504004378903LLU;
static int8_t x2956 = INT8_MIN;
int8_t x2960 = INT8_MIN;
uint64_t t46 = 2065LLU;
int32_t x2975 = -1;
uint16_t x3014 = 5U;
static int8_t x3074 = 0;
int64_t t50 = 2LL;
static volatile uint32_t t51 = 758222446U;
volatile int32_t t52 = -363921;
uint8_t x3618 = 1U;
int16_t x3762 = 2;
uint32_t x3829 = 8682118U;
uint32_t t60 = 160640U;
int64_t t61 = 2920487258400232758LL;
int32_t t65 = 6265;
int8_t x4543 = INT8_MIN;
static uint8_t x4550 = 14U;
int8_t x4551 = INT8_MAX;
int8_t x4692 = -11;
uint64_t x4733 = 81646652LLU;
volatile uint8_t x4734 = 1U;
volatile int32_t x4736 = -1;
uint32_t x4748 = 986U;
static uint64_t t73 = 62129334161LLU;
volatile int16_t x4892 = -10;
uint8_t x4974 = 23U;
int16_t x4975 = -1;
static volatile uint64_t x5046 = 2LLU;
volatile int64_t x5048 = -1LL;
uint8_t x5052 = 35U;
int64_t x5244 = -1LL;
uint8_t x5342 = 19U;
volatile int32_t t83 = -58711798;
int32_t x5377 = 49964;
uint8_t x5521 = UINT8_MAX;
static uint32_t t88 = 9U;
uint32_t x5583 = UINT32_MAX;
int64_t x5584 = 2441580976LL;
volatile uint8_t x5857 = UINT8_MAX;
int8_t x5858 = 0;
static int16_t x5984 = 1;
uint64_t t93 = 851788LLU;
volatile uint32_t x5997 = 25868U;
int8_t x5998 = 1;
volatile uint32_t t94 = 5445088U;
int8_t x6151 = -1;
uint32_t t98 = 354751U;
volatile uint16_t x6201 = UINT16_MAX;
int32_t x6202 = 0;


void f0(void) {
	uint8_t x14 = 3U;
	int64_t x16 = 2LL;
	int64_t t0 = 2617LL;

	t0 = (((x13<<x14)*x15)|x16);

	if (t0 != 226485506LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x53 = 125284U;
	int16_t x54 = 16;
	volatile uint16_t x55 = UINT16_MAX;
	uint32_t t1 = 186973349U;

	t1 = (((x53<<x54)*x55)|x56);

	if (t1 != 379322399U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x209 = 637U;
	volatile uint8_t x210 = 6U;
	volatile uint32_t x211 = UINT32_MAX;
	uint32_t x212 = 7041334U;
	volatile uint32_t t2 = 686U;

	t2 = (((x209<<x210)*x211)|x212);

	if (t2 != 4294930934U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x213 = UINT32_MAX;
	uint8_t x214 = 2U;
	int32_t x215 = INT32_MIN;
	volatile int16_t x216 = INT16_MAX;
	volatile uint32_t t3 = 224241U;

	t3 = (((x213<<x214)*x215)|x216);

	if (t3 != 32767U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x217 = 49215876703LL;
	volatile uint64_t x218 = 3LLU;
	uint8_t x219 = UINT8_MAX;
	volatile int64_t t4 = -13504162137783343LL;

	t4 = (((x217<<x218)*x219)|x220);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x277 = 15330U;
	static int8_t x278 = 0;
	static volatile uint32_t t5 = 245U;

	t5 = (((x277<<x278)*x279)|x280);

	if (t5 != 2148112178U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x361 = UINT64_MAX;
	uint64_t x362 = 0LLU;
	uint64_t x363 = UINT64_MAX;
	uint64_t t6 = 3169709899541LLU;

	t6 = (((x361<<x362)*x363)|x364);

	if (t6 != 18446744073709551467LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x405 = 9;
	uint16_t x406 = 9U;
	static int8_t x407 = -1;
	int16_t x408 = INT16_MAX;
	int32_t t7 = -41;

	t7 = (((x405<<x406)*x407)|x408);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x425 = 57841784U;
	volatile int32_t x426 = 1;
	volatile int32_t x427 = 20069;
	static uint64_t x428 = UINT64_MAX;

	t8 = (((x425<<x426)*x427)|x428);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x462 = 21U;
	int8_t x463 = 1;
	int64_t t9 = -138694236768605LL;

	t9 = (((x461<<x462)*x463)|x464);

	if (t9 != -9223372035044933632LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x477 = 64471387859008LLU;
	uint8_t x478 = 12U;
	static uint32_t x479 = 29676977U;
	volatile uint64_t x480 = 13800LLU;
	volatile uint64_t t10 = 163653447LLU;

	t10 = (((x477<<x478)*x479)|x480);

	if (t10 != 8705466985544431080LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x565 = 908U;
	static int8_t x567 = INT8_MIN;
	int32_t x568 = INT32_MIN;

	t11 = (((x565<<x566)*x567)|x568);

	if (t11 != -232448) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x581 = UINT16_MAX;
	int8_t x582 = 4;
	uint32_t x584 = 3761U;

	t12 = (((x581<<x582)*x583)|x584);

	if (t12 != 4293922481U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x617 = 30421U;
	int16_t x619 = INT16_MIN;
	int64_t x620 = 17127039LL;
	volatile int64_t t13 = 57LL;

	t13 = (((x617<<x618)*x619)|x620);

	if (t13 != -980035969LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x653 = 445442066108951LLU;
	static uint8_t x654 = 33U;
	static int16_t x656 = INT16_MAX;
	volatile uint64_t t14 = 356529409LLU;

	t14 = (((x653<<x654)*x655)|x656);

	if (t14 != 16261910015714033663LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x697 = INT8_MAX;
	volatile uint64_t x699 = 4299097492037446002LLU;
	int16_t x700 = INT16_MIN;

	t15 = (((x697<<x698)*x699)|x700);

	if (t15 != 18446744073709537024LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x865 = UINT32_MAX;
	uint8_t x866 = 4U;
	uint32_t x867 = UINT32_MAX;

	t16 = (((x865<<x866)*x867)|x868);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x909 = UINT32_MAX;
	uint8_t x910 = 1U;
	int8_t x911 = INT8_MIN;
	int8_t x912 = -1;
	uint32_t t17 = UINT32_MAX;

	t17 = (((x909<<x910)*x911)|x912);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x917 = UINT32_MAX;
	uint16_t x918 = 17U;
	int8_t x919 = INT8_MAX;
	volatile int32_t x920 = 292123;
	uint32_t t18 = 19265U;

	t18 = (((x917<<x918)*x919)|x920);

	if (t18 != 4278613275U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x937 = UINT32_MAX;
	static int32_t x938 = 3;
	static int8_t x939 = -1;
	static uint64_t x940 = 19636544456029LLU;
	uint64_t t19 = 1529256959960165842LLU;

	t19 = (((x937<<x938)*x939)|x940);

	if (t19 != 19636544456029LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1105 = 4;
	static int32_t x1106 = 0;
	int32_t x1108 = INT32_MIN;
	int32_t t20 = 160667;

	t20 = (((x1105<<x1106)*x1107)|x1108);

	if (t20 != -2147483140) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1121 = INT16_MAX;
	uint8_t x1122 = 1U;
	int8_t x1123 = INT8_MIN;
	int64_t x1124 = -1LL;

	t21 = (((x1121<<x1122)*x1123)|x1124);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x1161 = 69763359U;
	uint64_t x1163 = 124493LLU;
	static uint64_t x1164 = 490LLU;
	uint64_t t22 = 11501730001LLU;

	t22 = (((x1161<<x1162)*x1163)|x1164);

	if (t22 != 17370099704302LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1286 = 7;
	uint32_t x1287 = 6U;
	static volatile int64_t t23 = -285701326535LL;

	t23 = (((x1285<<x1286)*x1287)|x1288);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1293 = UINT16_MAX;
	uint64_t x1295 = UINT64_MAX;
	int16_t x1296 = INT16_MIN;

	t24 = (((x1293<<x1294)*x1295)|x1296);

	if (t24 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1325 = 21U;
	volatile uint32_t x1326 = 12U;
	uint16_t x1327 = UINT16_MAX;
	uint8_t x1328 = 28U;
	uint32_t t25 = 8989U;

	t25 = (((x1325<<x1326)*x1327)|x1328);

	if (t25 != 1342091292U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1333 = 68U;
	uint64_t x1334 = 12LLU;
	int8_t x1336 = -1;
	uint32_t t26 = UINT32_MAX;

	t26 = (((x1333<<x1334)*x1335)|x1336);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1445 = 23;
	int8_t x1446 = 11;
	int8_t x1447 = INT8_MIN;
	int32_t x1448 = INT32_MIN;
	int32_t t27 = 7;

	t27 = (((x1445<<x1446)*x1447)|x1448);

	if (t27 != -6029312) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1477 = 2812;
	uint8_t x1478 = 1U;
	static uint32_t x1479 = UINT32_MAX;
	int32_t x1480 = 0;

	t28 = (((x1477<<x1478)*x1479)|x1480);

	if (t28 != 4294961672U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1526 = 0U;
	int8_t x1527 = -1;
	volatile uint64_t x1528 = UINT64_MAX;

	t29 = (((x1525<<x1526)*x1527)|x1528);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1749 = UINT16_MAX;
	int32_t x1750 = 7;
	uint8_t x1751 = 4U;
	uint32_t x1752 = 149368U;
	uint32_t t30 = 4U;

	t30 = (((x1749<<x1750)*x1751)|x1752);

	if (t30 != 33554296U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1793 = INT8_MAX;
	uint8_t x1794 = 15U;
	uint64_t x1795 = UINT64_MAX;

	t31 = (((x1793<<x1794)*x1795)|x1796);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1805 = UINT8_MAX;
	volatile uint16_t x1806 = 5U;
	int8_t x1808 = -1;
	volatile int32_t t32 = 110934;

	t32 = (((x1805<<x1806)*x1807)|x1808);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2185 = 2U;
	volatile int8_t x2186 = 8;
	static uint64_t x2188 = UINT64_MAX;

	t33 = (((x2185<<x2186)*x2187)|x2188);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2253 = 8LLU;
	int16_t x2254 = 12;
	uint64_t t34 = UINT64_MAX;

	t34 = (((x2253<<x2254)*x2255)|x2256);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2265 = 2U;
	uint16_t x2267 = 7U;
	int64_t x2268 = INT64_MIN;
	volatile int64_t t35 = -3964366833882127LL;

	t35 = (((x2265<<x2266)*x2267)|x2268);

	if (t35 != -9223372036854774912LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x2429 = UINT16_MAX;
	uint8_t x2430 = 3U;
	static uint8_t x2431 = 51U;
	uint64_t x2432 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = (((x2429<<x2430)*x2431)|x2432);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x2433 = 5U;
	int64_t x2434 = 12LL;
	uint32_t x2435 = 228U;
	static int32_t x2436 = INT32_MIN;
	uint32_t t37 = 7189U;

	t37 = (((x2433<<x2434)*x2435)|x2436);

	if (t37 != 2152153088U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2465 = 64803064U;
	int16_t x2467 = -21;
	int8_t x2468 = 0;
	uint32_t t38 = 239566U;

	t38 = (((x2465<<x2466)*x2467)|x2468);

	if (t38 != 3806046208U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x2521 = 98;
	uint16_t x2522 = 1U;
	uint64_t x2523 = UINT64_MAX;
	uint16_t x2524 = 44U;
	uint64_t t39 = 57033526548LLU;

	t39 = (((x2521<<x2522)*x2523)|x2524);

	if (t39 != 18446744073709551420LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2601 = 57494259LLU;
	int16_t x2602 = 13;
	volatile uint16_t x2603 = 65U;
	int64_t x2604 = INT64_MIN;
	static volatile uint64_t t40 = 80915133538594718LLU;

	t40 = (((x2601<<x2602)*x2603)|x2604);

	if (t40 != 9223402651397808128LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2670 = 6;
	uint64_t x2671 = 1071378894496LLU;
	int8_t x2672 = INT8_MIN;

	t41 = (((x2669<<x2670)*x2671)|x2672);

	if (t41 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2729 = UINT64_MAX;
	volatile uint32_t x2730 = 12U;
	int32_t x2732 = INT32_MIN;
	volatile uint64_t t42 = 6941819614264LLU;

	t42 = (((x2729<<x2730)*x2731)|x2732);

	if (t42 != 18446744073658462208LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x2761 = UINT64_MAX;
	static int64_t x2762 = 23LL;
	static uint32_t x2763 = UINT32_MAX;
	int64_t x2764 = -1LL;
	static uint64_t t43 = UINT64_MAX;

	t43 = (((x2761<<x2762)*x2763)|x2764);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2766 = 1U;
	static int32_t x2767 = INT32_MIN;
	uint8_t x2768 = 1U;
	static uint64_t t44 = 1970LLU;

	t44 = (((x2765<<x2766)*x2767)|x2768);

	if (t44 != 12033476268549734401LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2953 = 5173381LLU;
	int8_t x2954 = 0;
	int64_t x2955 = -1LL;
	uint64_t t45 = 8893040979513085285LLU;

	t45 = (((x2953<<x2954)*x2955)|x2956);

	if (t45 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2957 = 3;
	uint8_t x2958 = 0U;
	volatile uint64_t x2959 = UINT64_MAX;

	t46 = (((x2957<<x2958)*x2959)|x2960);

	if (t46 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2973 = 84023686U;
	static int8_t x2974 = 1;
	volatile int8_t x2976 = INT8_MAX;
	uint32_t t47 = 1579U;

	t47 = (((x2973<<x2974)*x2975)|x2976);

	if (t47 != 4126919935U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2977 = 1;
	int8_t x2978 = 0;
	uint16_t x2979 = UINT16_MAX;
	static uint16_t x2980 = 28U;
	volatile int32_t t48 = -536;

	t48 = (((x2977<<x2978)*x2979)|x2980);

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x3013 = 13884212;
	int64_t x3015 = -75411LL;
	int64_t x3016 = INT64_MAX;
	volatile int64_t t49 = 59707LL;

	t49 = (((x3013<<x3014)*x3015)|x3016);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3073 = 3769990LL;
	uint8_t x3075 = 1U;
	int64_t x3076 = -4205028063171LL;

	t50 = (((x3073<<x3074)*x3075)|x3076);

	if (t50 != -4205024915777LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3197 = 187U;
	volatile uint8_t x3198 = 4U;
	uint16_t x3199 = UINT16_MAX;
	uint32_t x3200 = 3U;

	t51 = (((x3197<<x3198)*x3199)|x3200);

	if (t51 != 196080723U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3333 = 41;
	uint8_t x3334 = 0U;
	int8_t x3335 = -7;
	int16_t x3336 = INT16_MAX;

	t52 = (((x3333<<x3334)*x3335)|x3336);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x3449 = UINT64_MAX;
	volatile uint8_t x3450 = 5U;
	int16_t x3451 = 1;
	volatile int64_t x3452 = 1514545839243608394LL;
	uint64_t t53 = 1LLU;

	t53 = (((x3449<<x3450)*x3451)|x3452);

	if (t53 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3517 = 87240083549370361LLU;
	int16_t x3518 = 3;
	int8_t x3519 = 1;
	static volatile int64_t x3520 = INT64_MIN;
	uint64_t t54 = 7404209757239802LLU;

	t54 = (((x3517<<x3518)*x3519)|x3520);

	if (t54 != 9921292705249738696LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3585 = INT16_MAX;
	uint8_t x3586 = 1U;
	static volatile uint8_t x3587 = 29U;
	static uint16_t x3588 = 16U;
	int32_t t55 = 25863959;

	t55 = (((x3585<<x3586)*x3587)|x3588);

	if (t55 != 1900502) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3617 = 286701639U;
	uint64_t x3619 = 185LLU;
	static volatile int16_t x3620 = 1;
	volatile uint64_t t56 = 56366532865289LLU;

	t56 = (((x3617<<x3618)*x3619)|x3620);

	if (t56 != 106079606431LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x3665 = 13;
	volatile int16_t x3666 = 10;
	uint32_t x3667 = UINT32_MAX;
	int64_t x3668 = -797302823LL;
	int64_t t57 = 404904LL;

	t57 = (((x3665<<x3666)*x3667)|x3668);

	if (t57 != -8231LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3761 = UINT8_MAX;
	int8_t x3763 = INT8_MIN;
	int8_t x3764 = -1;
	static volatile int32_t t58 = 2273580;

	t58 = (((x3761<<x3762)*x3763)|x3764);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3821 = 94;
	uint8_t x3822 = 7U;
	uint8_t x3823 = UINT8_MAX;
	int16_t x3824 = -791;
	volatile int32_t t59 = -3;

	t59 = (((x3821<<x3822)*x3823)|x3824);

	if (t59 != -535) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x3830 = 30U;
	volatile int8_t x3831 = -1;
	static volatile uint32_t x3832 = 131U;

	t60 = (((x3829<<x3830)*x3831)|x3832);

	if (t60 != 2147483779U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3857 = INT8_MAX;
	uint16_t x3858 = 1U;
	int64_t x3859 = -1LL;
	static uint32_t x3860 = UINT32_MAX;

	t61 = (((x3857<<x3858)*x3859)|x3860);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4017 = 0U;
	static uint16_t x4018 = 0U;
	int8_t x4019 = -27;
	uint16_t x4020 = 1U;
	static volatile int32_t t62 = 3;

	t62 = (((x4017<<x4018)*x4019)|x4020);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4197 = 0U;
	volatile int8_t x4198 = 4;
	static uint16_t x4199 = 245U;
	static uint64_t x4200 = 70561362250LLU;
	static volatile uint64_t t63 = 41056867555762933LLU;

	t63 = (((x4197<<x4198)*x4199)|x4200);

	if (t63 != 70561362250LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4217 = INT8_MAX;
	static uint16_t x4218 = 12U;
	uint8_t x4219 = 0U;
	int8_t x4220 = -1;
	static int32_t t64 = 40;

	t64 = (((x4217<<x4218)*x4219)|x4220);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x4293 = 13U;
	uint16_t x4294 = 4U;
	int8_t x4295 = -1;
	static int32_t x4296 = INT32_MIN;

	t65 = (((x4293<<x4294)*x4295)|x4296);

	if (t65 != -208) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4369 = 55U;
	uint8_t x4370 = 11U;
	static uint16_t x4371 = 6U;
	static int8_t x4372 = INT8_MIN;
	static volatile uint32_t t66 = 53U;

	t66 = (((x4369<<x4370)*x4371)|x4372);

	if (t66 != 4294967168U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4541 = 241693008183530LLU;
	volatile int8_t x4542 = 1;
	uint8_t x4544 = UINT8_MAX;
	volatile uint64_t t67 = 319425881825800LLU;

	t67 = (((x4541<<x4542)*x4543)|x4544);

	if (t67 != 18384870663614568191LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4549 = 30U;
	int16_t x4552 = -7525;
	uint32_t t68 = 197965222U;

	t68 = (((x4549<<x4550)*x4551)|x4552);

	if (t68 != 4294959771U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4585 = 1957246U;
	uint32_t x4586 = 8U;
	int32_t x4587 = INT32_MIN;
	static int8_t x4588 = -1;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (((x4585<<x4586)*x4587)|x4588);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4689 = 91262U;
	int8_t x4690 = 0;
	int16_t x4691 = INT16_MIN;
	uint32_t t70 = 1547532U;

	t70 = (((x4689<<x4690)*x4691)|x4692);

	if (t70 != 4294967285U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x4735 = INT16_MIN;
	uint64_t t71 = UINT64_MAX;

	t71 = (((x4733<<x4734)*x4735)|x4736);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4745 = 0U;
	int32_t x4746 = 1;
	static volatile uint32_t x4747 = 7410U;
	static volatile uint32_t t72 = 427U;

	t72 = (((x4745<<x4746)*x4747)|x4748);

	if (t72 != 986U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x4869 = 70U;
	static volatile int8_t x4870 = 19;
	volatile int16_t x4871 = 23;
	uint64_t x4872 = 4159473701612965LLU;

	t73 = (((x4869<<x4870)*x4871)|x4872);

	if (t73 != 4159473736215973LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4889 = INT8_MAX;
	uint8_t x4890 = 1U;
	int16_t x4891 = -1;
	static int32_t t74 = -7412;

	t74 = (((x4889<<x4890)*x4891)|x4892);

	if (t74 != -10) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x4905 = 14;
	uint16_t x4906 = 1U;
	int8_t x4907 = INT8_MIN;
	volatile int16_t x4908 = -1;
	volatile int32_t t75 = -1066458457;

	t75 = (((x4905<<x4906)*x4907)|x4908);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4925 = 28U;
	int16_t x4926 = 1;
	volatile int16_t x4927 = -46;
	int8_t x4928 = INT8_MIN;
	static int32_t t76 = 0;

	t76 = (((x4925<<x4926)*x4927)|x4928);

	if (t76 != -16) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4973 = 230291U;
	static int8_t x4976 = INT8_MIN;
	volatile uint32_t t77 = 37U;

	t77 = (((x4973<<x4974)*x4975)|x4976);

	if (t77 != 4294967168U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x5005 = 42766U;
	uint8_t x5006 = 0U;
	volatile int8_t x5007 = INT8_MAX;
	int16_t x5008 = INT16_MIN;
	uint32_t t78 = 126U;

	t78 = (((x5005<<x5006)*x5007)|x5008);

	if (t78 != 4294959090U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5045 = 0U;
	int8_t x5047 = INT8_MAX;
	volatile int64_t t79 = 7394882LL;

	t79 = (((x5045<<x5046)*x5047)|x5048);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5049 = 37763530U;
	static uint16_t x5050 = 3U;
	volatile int32_t x5051 = INT32_MAX;
	static uint32_t t80 = 28974268U;

	t80 = (((x5049<<x5050)*x5051)|x5052);

	if (t80 != 3992859059U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5241 = 58U;
	volatile int8_t x5242 = 22;
	int32_t x5243 = INT32_MIN;
	volatile int64_t t81 = -5280LL;

	t81 = (((x5241<<x5242)*x5243)|x5244);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x5341 = 35267311247415LLU;
	int8_t x5343 = 1;
	int32_t x5344 = 1137;
	uint64_t t82 = 1550LLU;

	t82 = (((x5341<<x5342)*x5343)|x5344);

	if (t82 != 43484005575165041LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5353 = 3282;
	static uint32_t x5354 = 0U;
	int16_t x5355 = 149;
	int16_t x5356 = -11;

	t83 = (((x5353<<x5354)*x5355)|x5356);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x5378 = 4;
	uint8_t x5379 = 8U;
	static volatile int64_t x5380 = -1LL;
	int64_t t84 = -236353924790538LL;

	t84 = (((x5377<<x5378)*x5379)|x5380);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5465 = UINT16_MAX;
	static uint8_t x5466 = 0U;
	uint32_t x5467 = 1U;
	int8_t x5468 = -27;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (((x5465<<x5466)*x5467)|x5468);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5517 = 691U;
	static uint8_t x5518 = 11U;
	volatile uint8_t x5519 = 29U;
	static uint64_t x5520 = 325787187620LLU;
	uint64_t t86 = 12462422671037LLU;

	t86 = (((x5517<<x5518)*x5519)|x5520);

	if (t86 != 325788367268LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5522 = 3U;
	int8_t x5523 = INT8_MIN;
	uint32_t x5524 = 3U;
	uint32_t t87 = 12U;

	t87 = (((x5521<<x5522)*x5523)|x5524);

	if (t87 != 4294706179U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5561 = UINT32_MAX;
	static volatile uint8_t x5562 = 2U;
	uint32_t x5563 = 900140775U;
	uint32_t x5564 = 1U;

	t88 = (((x5561<<x5562)*x5563)|x5564);

	if (t88 != 694404197U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x5581 = 29;
	volatile int8_t x5582 = 1;
	static volatile int64_t t89 = 1149919347742304716LL;

	t89 = (((x5581<<x5582)*x5583)|x5584);

	if (t89 != 4294967286LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x5657 = 7597U;
	int32_t x5658 = 1;
	volatile int32_t x5659 = INT32_MAX;
	int8_t x5660 = 7;
	volatile uint32_t t90 = 60315936U;

	t90 = (((x5657<<x5658)*x5659)|x5660);

	if (t90 != 4294952103U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5845 = 6823;
	volatile uint8_t x5846 = 3U;
	static int16_t x5847 = 77;
	int8_t x5848 = INT8_MIN;
	int32_t t91 = -35103236;

	t91 = (((x5845<<x5846)*x5847)|x5848);

	if (t91 != -40) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5859 = UINT32_MAX;
	static volatile int8_t x5860 = INT8_MIN;
	uint32_t t92 = 22U;

	t92 = (((x5857<<x5858)*x5859)|x5860);

	if (t92 != 4294967169U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5981 = UINT64_MAX;
	uint8_t x5982 = 26U;
	int8_t x5983 = INT8_MAX;

	t93 = (((x5981<<x5982)*x5983)|x5984);

	if (t93 != 18446744065186725889LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5999 = UINT32_MAX;
	uint32_t x6000 = 114993U;

	t94 = (((x5997<<x5998)*x5999)|x6000);

	if (t94 != 4294964729U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x6069 = UINT32_MAX;
	int8_t x6070 = 25;
	uint64_t x6071 = 6750151LLU;
	volatile int8_t x6072 = INT8_MAX;
	static volatile uint64_t t95 = 27287618123950LLU;

	t95 = (((x6069<<x6070)*x6071)|x6072);

	if (t95 != 28765180305342591LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x6077 = 1LL;
	static volatile int8_t x6078 = 1;
	static int64_t x6079 = -33638LL;
	static int16_t x6080 = INT16_MIN;
	int64_t t96 = 15497667LL;

	t96 = (((x6077<<x6078)*x6079)|x6080);

	if (t96 != -1740LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6133 = 693610LL;
	uint32_t x6134 = 3U;
	int16_t x6135 = -12;
	static volatile uint8_t x6136 = 21U;
	int64_t t97 = 2028715LL;

	t97 = (((x6133<<x6134)*x6135)|x6136);

	if (t97 != -66586539LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x6149 = UINT32_MAX;
	uint8_t x6150 = 23U;
	uint32_t x6152 = 7734178U;

	t98 = (((x6149<<x6150)*x6151)|x6152);

	if (t98 != 16122786U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x6203 = -27;
	int8_t x6204 = 0;
	int32_t t99 = -38276815;

	t99 = (((x6201<<x6202)*x6203)|x6204);

	if (t99 != -1769445) { NG(); } else { ; }
	
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

