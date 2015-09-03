#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x110 = INT64_MIN;
static int32_t x111 = INT32_MAX;
int32_t x205 = 55882360;
volatile int64_t x207 = INT64_MAX;
volatile int64_t x208 = 2LL;
uint32_t x299 = 1005033769U;
static uint32_t x558 = 0U;
static int8_t x560 = 0;
volatile uint8_t x565 = UINT8_MAX;
uint32_t x567 = UINT32_MAX;
int16_t x585 = INT16_MIN;
volatile int64_t x586 = INT64_MIN;
volatile int64_t x730 = INT64_MIN;
uint8_t x731 = UINT8_MAX;
static int32_t x895 = INT32_MAX;
volatile int8_t x961 = -1;
int16_t x1051 = INT16_MAX;
static volatile uint16_t x1052 = 2U;
static volatile int64_t t17 = -5908722572LL;
volatile int64_t x1159 = INT64_MAX;
int64_t t19 = 1762002510894277677LL;
uint16_t x1359 = 14113U;
volatile int64_t t23 = -109868717505LL;
static int32_t x1645 = INT32_MAX;
uint32_t t24 = 39394025U;
volatile int32_t x1710 = INT32_MAX;
uint64_t x1711 = UINT64_MAX;
static int8_t x1712 = 0;
static volatile int32_t x1797 = 0;
static int32_t x2049 = -42414;
volatile int32_t x2082 = INT32_MAX;
uint8_t x2083 = 4U;
volatile int32_t x2127 = INT32_MAX;
volatile int8_t x2360 = 4;
static uint8_t x2390 = UINT8_MAX;
static uint16_t x2598 = 6022U;
int8_t x2760 = 1;
int8_t x2876 = 7;
static int64_t x3369 = INT64_MIN;
volatile int8_t x3370 = -1;
uint64_t x3431 = 26393635472LLU;
volatile uint64_t t46 = 401LLU;
uint8_t x3648 = 0U;
static int64_t x3682 = INT64_MIN;
int8_t x3852 = 1;
static int64_t x4041 = -5152LL;
uint8_t x4044 = 0U;
volatile int64_t t52 = 4121325LL;
int16_t x4232 = 9;
volatile uint64_t t55 = 252581200371030937LLU;
uint8_t x4272 = 1U;
uint64_t t56 = 28890163141LLU;
uint32_t x4354 = 734U;
int8_t x4356 = 1;
volatile uint32_t t57 = 46321U;
uint32_t x4398 = UINT32_MAX;
int32_t x4417 = INT32_MIN;
int64_t t59 = 1622006LL;
uint16_t x4600 = 4U;
int32_t x4613 = INT32_MAX;
int8_t x4615 = INT8_MAX;
int64_t x4623 = INT64_MAX;
int64_t t62 = -485548LL;
volatile uint64_t x4910 = UINT64_MAX;
int32_t x4932 = 7;
uint16_t x5004 = 7U;
static uint16_t x5006 = UINT16_MAX;
static int8_t x5110 = 6;
uint32_t x5665 = UINT32_MAX;
static volatile uint8_t x5789 = 123U;
int64_t x5791 = INT64_MAX;
uint64_t x5863 = UINT64_MAX;
int64_t x6069 = INT64_MAX;
uint32_t x6343 = UINT32_MAX;
int8_t x6344 = 1;
uint16_t x6373 = UINT16_MAX;
uint64_t x6381 = UINT64_MAX;
int16_t x6590 = INT16_MIN;
volatile int8_t x6601 = -1;
static int8_t x6666 = -1;
volatile int8_t x6820 = 0;
uint16_t x6875 = 27270U;
static volatile uint32_t t89 = 1198U;
int32_t x7070 = -308493;
int8_t x7158 = INT8_MAX;
static int64_t x7350 = INT64_MIN;
int64_t t93 = 1LL;
static volatile int8_t x7565 = INT8_MIN;
uint16_t x7567 = 373U;
static int64_t t97 = 27LL;
static volatile int64_t x7637 = INT64_MIN;
volatile int64_t x7638 = INT64_MIN;
int8_t x7640 = 0;
uint32_t x7646 = UINT32_MAX;


void f0(void) {
	static int32_t x33 = 2;
	uint8_t x34 = 1U;
	volatile uint16_t x35 = 3U;
	uint8_t x36 = 0U;
	int32_t t0 = 3;

	t0 = ((x33^x34)%(x35>>x36));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x109 = INT8_MIN;
	uint64_t x112 = 8LLU;
	volatile int64_t t1 = 1877577625429LL;

	t1 = ((x109^x110)%(x111>>x112));

	if (t1 != 130944LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x206 = -677089LL;
	static int64_t t2 = 495130LL;

	t2 = ((x205^x206)%(x207>>x208));

	if (t2 != -56551065LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x213 = 27333671483LLU;
	int64_t x214 = 5034177LL;
	int16_t x215 = INT16_MAX;
	volatile int16_t x216 = 4;
	static uint64_t t3 = 2356828155LLU;

	t3 = ((x213^x214)%(x215>>x216));

	if (t3 != 960LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x293 = INT32_MIN;
	volatile int16_t x294 = INT16_MAX;
	uint16_t x295 = UINT16_MAX;
	uint16_t x296 = 6U;
	int32_t t4 = 3028;

	t4 = ((x293^x294)%(x295>>x296));

	if (t4 != -994) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x297 = INT16_MIN;
	static int16_t x298 = INT16_MAX;
	static uint8_t x300 = 1U;
	uint32_t t5 = 3099463U;

	t5 = ((x297^x298)%(x299>>x300));

	if (t5 != 274832223U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x541 = INT8_MIN;
	int32_t x542 = 1025509;
	volatile int64_t x543 = 18093715LL;
	int8_t x544 = 15;
	static volatile int64_t t6 = -4165225152961350LL;

	t6 = ((x541^x542)%(x543>>x544));

	if (t6 != -371LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x557 = 1U;
	uint32_t x559 = UINT32_MAX;
	uint32_t t7 = 807149547U;

	t7 = ((x557^x558)%(x559>>x560));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x566 = 1U;
	volatile int8_t x568 = 0;
	volatile uint32_t t8 = 0U;

	t8 = ((x565^x566)%(x567>>x568));

	if (t8 != 254U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x587 = INT64_MAX;
	volatile uint8_t x588 = 14U;
	int64_t t9 = 38877255710734619LL;

	t9 = ((x585^x586)%(x587>>x588));

	if (t9 != 562949953404927LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x729 = UINT16_MAX;
	uint64_t x732 = 0LLU;
	volatile int64_t t10 = -21LL;

	t10 = ((x729^x730)%(x731>>x732));

	if (t10 != -128LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x745 = 7U;
	int64_t x746 = INT64_MAX;
	static uint16_t x747 = 9U;
	int8_t x748 = 0;
	int64_t t11 = -22LL;

	t11 = ((x745^x746)%(x747>>x748));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x877 = INT8_MIN;
	volatile uint8_t x878 = 0U;
	volatile uint8_t x879 = 6U;
	uint16_t x880 = 2U;
	int32_t t12 = 3664;

	t12 = ((x877^x878)%(x879>>x880));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x893 = INT32_MIN;
	int16_t x894 = INT16_MAX;
	volatile int64_t x896 = 7LL;
	int32_t t13 = 289127472;

	t13 = ((x893^x894)%(x895>>x896));

	if (t13 != -16744576) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x962 = UINT16_MAX;
	uint64_t x963 = 38473LLU;
	uint8_t x964 = 14U;
	uint64_t t14 = 3LLU;

	t14 = ((x961^x962)%(x963>>x964));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x965 = UINT64_MAX;
	int32_t x966 = INT32_MAX;
	uint64_t x967 = 2233518682464111595LLU;
	int8_t x968 = 1;
	uint64_t t15 = 14891284325587989LLU;

	t15 = ((x965^x966)%(x967>>x968));

	if (t15 != 578594611849175216LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x985 = 19853U;
	static volatile uint16_t x986 = 3708U;
	static int64_t x987 = 24897592608LL;
	static uint8_t x988 = 0U;
	int64_t t16 = -210151LL;

	t16 = ((x985^x986)%(x987>>x988));

	if (t16 != 17393LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x1049 = -1LL;
	int64_t x1050 = INT64_MIN;

	t17 = ((x1049^x1050)%(x1051>>x1052));

	if (t17 != 2047LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1157 = INT8_MIN;
	int8_t x1158 = INT8_MIN;
	uint16_t x1160 = 21U;
	int64_t t18 = 1LL;

	t18 = ((x1157^x1158)%(x1159>>x1160));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x1177 = INT64_MIN;
	uint8_t x1178 = UINT8_MAX;
	static uint32_t x1179 = UINT32_MAX;
	uint8_t x1180 = 12U;

	t19 = ((x1177^x1178)%(x1179>>x1180));

	if (t19 != -1048328LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1333 = INT32_MIN;
	static volatile uint64_t x1334 = UINT64_MAX;
	int32_t x1335 = INT32_MAX;
	static volatile uint8_t x1336 = 2U;
	uint64_t t20 = 7083LLU;

	t20 = ((x1333^x1334)%(x1335>>x1336));

	if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1353 = -1748;
	int32_t x1354 = -1;
	int64_t x1355 = INT64_MAX;
	volatile uint8_t x1356 = 2U;
	int64_t t21 = -41173403LL;

	t21 = ((x1353^x1354)%(x1355>>x1356));

	if (t21 != 1747LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1357 = -1;
	static int8_t x1358 = INT8_MIN;
	volatile int8_t x1360 = 6;
	int32_t t22 = -3145016;

	t22 = ((x1357^x1358)%(x1359>>x1360));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1625 = INT8_MAX;
	int64_t x1626 = -1LL;
	uint32_t x1627 = 1563940483U;
	volatile int8_t x1628 = 2;

	t23 = ((x1625^x1626)%(x1627>>x1628));

	if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1646 = UINT16_MAX;
	volatile uint32_t x1647 = UINT32_MAX;
	uint8_t x1648 = 3U;

	t24 = ((x1645^x1646)%(x1647>>x1648));

	if (t24 != 536805379U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1709 = INT32_MAX;
	volatile uint64_t t25 = 6419726889977095440LLU;

	t25 = ((x1709^x1710)%(x1711>>x1712));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1798 = -1;
	int32_t x1799 = INT32_MAX;
	uint8_t x1800 = 6U;
	volatile int32_t t26 = 93;

	t26 = ((x1797^x1798)%(x1799>>x1800));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2050 = INT32_MIN;
	volatile int8_t x2051 = INT8_MAX;
	int8_t x2052 = 1;
	volatile int32_t t27 = 32272216;

	t27 = ((x2049^x2050)%(x2051>>x2052));

	if (t27 != 50) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2081 = 0;
	uint16_t x2084 = 0U;
	volatile int32_t t28 = 264280;

	t28 = ((x2081^x2082)%(x2083>>x2084));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x2125 = -1;
	int32_t x2126 = 1114455;
	int32_t x2128 = 0;
	static volatile int32_t t29 = 2479;

	t29 = ((x2125^x2126)%(x2127>>x2128));

	if (t29 != -1114456) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2149 = 16U;
	static int16_t x2150 = INT16_MIN;
	uint64_t x2151 = 28180051606334LLU;
	int16_t x2152 = 5;
	uint64_t t30 = 3473LLU;

	t30 = ((x2149^x2150)%(x2151>>x2152));

	if (t30 != 393947939643LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2165 = -477116;
	int8_t x2166 = INT8_MIN;
	int8_t x2167 = 11;
	volatile uint16_t x2168 = 1U;
	volatile int32_t t31 = 45398639;

	t31 = ((x2165^x2166)%(x2167>>x2168));

	if (t31 != 4) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x2261 = INT8_MIN;
	uint64_t x2262 = 1LLU;
	volatile int8_t x2263 = INT8_MAX;
	uint8_t x2264 = 6U;
	uint64_t t32 = 43739678011294890LLU;

	t32 = ((x2261^x2262)%(x2263>>x2264));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x2313 = 11U;
	int64_t x2314 = INT64_MIN;
	int32_t x2315 = INT32_MAX;
	static int16_t x2316 = 13;
	int64_t t33 = -75130032254377014LL;

	t33 = ((x2313^x2314)%(x2315>>x2316));

	if (t33 != -501LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x2357 = INT32_MAX;
	volatile int16_t x2358 = INT16_MIN;
	static uint32_t x2359 = 1936473645U;
	volatile uint32_t t34 = 10961806U;

	t34 = ((x2357^x2358)%(x2359>>x2360));

	if (t34 != 90013181U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2389 = 11666;
	static volatile uint64_t x2391 = UINT64_MAX;
	uint8_t x2392 = 0U;
	volatile uint64_t t35 = 2842327178750LLU;

	t35 = ((x2389^x2390)%(x2391>>x2392));

	if (t35 != 11629LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2469 = INT16_MIN;
	int64_t x2470 = -11035685LL;
	volatile uint64_t x2471 = 25895114362LLU;
	volatile uint16_t x2472 = 1U;
	static volatile uint64_t t36 = 398406696363896LLU;

	t36 = ((x2469^x2470)%(x2471>>x2472));

	if (t36 != 11017179LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2597 = INT64_MIN;
	uint32_t x2599 = 5757U;
	int16_t x2600 = 0;
	volatile int64_t t37 = -1726670LL;

	t37 = ((x2597^x2598)%(x2599>>x2600));

	if (t37 != -532LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x2605 = UINT64_MAX;
	int8_t x2606 = INT8_MAX;
	int32_t x2607 = 6280;
	uint16_t x2608 = 1U;
	static volatile uint64_t t38 = 26314802196786829LLU;

	t38 = ((x2605^x2606)%(x2607>>x2608));

	if (t38 != 828LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x2757 = -6789;
	int32_t x2758 = 306008;
	uint64_t x2759 = UINT64_MAX;
	uint64_t t39 = 141395192LLU;

	t39 = ((x2757^x2758)%(x2759>>x2760));

	if (t39 != 9223372036854468132LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x2865 = INT16_MIN;
	int8_t x2866 = INT8_MAX;
	uint8_t x2867 = 36U;
	uint16_t x2868 = 3U;
	volatile int32_t t40 = -7967;

	t40 = ((x2865^x2866)%(x2867>>x2868));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x2873 = INT32_MIN;
	uint64_t x2874 = UINT64_MAX;
	uint8_t x2875 = UINT8_MAX;
	volatile uint64_t t41 = 3573310214179274LLU;

	t41 = ((x2873^x2874)%(x2875>>x2876));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3085 = 1214470U;
	int32_t x3086 = INT32_MAX;
	static volatile uint64_t x3087 = UINT64_MAX;
	uint8_t x3088 = 1U;
	uint64_t t42 = 42922844956LLU;

	t42 = ((x3085^x3086)%(x3087>>x3088));

	if (t42 != 2146269177LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x3349 = 1395141U;
	uint32_t x3350 = UINT32_MAX;
	int32_t x3351 = INT32_MAX;
	volatile int8_t x3352 = 16;
	volatile uint32_t t43 = 296U;

	t43 = ((x3349^x3350)%(x3351>>x3352));

	if (t43 != 13843U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x3361 = -1;
	static volatile uint32_t x3362 = 22971641U;
	uint16_t x3363 = 8027U;
	uint64_t x3364 = 1LLU;
	uint32_t t44 = 24752U;

	t44 = ((x3361^x3362)%(x3363>>x3364));

	if (t44 != 647U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x3371 = 31527706372986703LL;
	uint8_t x3372 = 22U;
	int64_t t45 = 3097762LL;

	t45 = ((x3369^x3370)%(x3371>>x3372));

	if (t45 != 5496502372LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3429 = 215471558;
	int8_t x3430 = INT8_MIN;
	uint16_t x3432 = 5U;

	t46 = ((x3429^x3430)%(x3431>>x3432));

	if (t46 != 26081674LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3485 = INT16_MIN;
	uint64_t x3486 = 37LLU;
	int64_t x3487 = 102750545LL;
	volatile int8_t x3488 = 6;
	volatile uint64_t t47 = 55356LLU;

	t47 = ((x3485^x3486)%(x3487>>x3488));

	if (t47 != 799239LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3613 = -1;
	int8_t x3614 = -1;
	uint16_t x3615 = 17U;
	uint8_t x3616 = 3U;
	static volatile int32_t t48 = 6;

	t48 = ((x3613^x3614)%(x3615>>x3616));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x3645 = 5021794U;
	int32_t x3646 = -1;
	uint64_t x3647 = UINT64_MAX;
	volatile uint64_t t49 = 4846LLU;

	t49 = ((x3645^x3646)%(x3647>>x3648));

	if (t49 != 4289945501LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x3681 = -2159;
	uint64_t x3683 = 1000677315LLU;
	uint8_t x3684 = 4U;
	uint64_t t50 = 779067130LLU;

	t50 = ((x3681^x3682)%(x3683>>x3684));

	if (t50 != 41023161LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3849 = 7U;
	int16_t x3850 = -1;
	uint64_t x3851 = UINT64_MAX;
	static uint64_t t51 = 31274224892750LLU;

	t51 = ((x3849^x3850)%(x3851>>x3852));

	if (t51 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x4042 = INT32_MAX;
	uint8_t x4043 = UINT8_MAX;

	t52 = ((x4041^x4042)%(x4043>>x4044));

	if (t52 != -77LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x4081 = INT16_MIN;
	int8_t x4082 = INT8_MAX;
	uint32_t x4083 = 852U;
	static uint16_t x4084 = 3U;
	uint32_t t53 = 1698U;

	t53 = ((x4081^x4082)%(x4083>>x4084));

	if (t53 != 49U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x4229 = 449505359U;
	int32_t x4230 = 46392;
	int64_t x4231 = INT64_MAX;
	volatile int64_t t54 = -5LL;

	t54 = ((x4229^x4230)%(x4231>>x4232));

	if (t54 != 449469815LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x4253 = 107894970LLU;
	volatile int8_t x4254 = 17;
	static volatile int16_t x4255 = 14025;
	uint16_t x4256 = 0U;

	t55 = ((x4253^x4254)%(x4255>>x4256));

	if (t55 != 630LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x4269 = 233209065U;
	uint64_t x4270 = 36028007584312914LLU;
	static volatile uint64_t x4271 = 1206242LLU;

	t56 = ((x4269^x4270)%(x4271>>x4272));

	if (t56 != 44353LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4353 = INT8_MAX;
	uint32_t x4355 = UINT32_MAX;

	t57 = ((x4353^x4354)%(x4355>>x4356));

	if (t57 != 673U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4397 = INT8_MAX;
	uint16_t x4399 = UINT16_MAX;
	volatile int16_t x4400 = 5;
	volatile uint32_t t58 = 16U;

	t58 = ((x4397^x4398)%(x4399>>x4400));

	if (t58 != 896U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4418 = INT64_MAX;
	volatile int64_t x4419 = INT64_MAX;
	int16_t x4420 = 0;

	t59 = ((x4417^x4418)%(x4419>>x4420));

	if (t59 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4597 = 112U;
	int16_t x4598 = INT16_MAX;
	int16_t x4599 = 19;
	volatile uint32_t t60 = 0U;

	t60 = ((x4597^x4598)%(x4599>>x4600));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x4614 = 14;
	uint16_t x4616 = 6U;
	volatile int32_t t61 = 2091439;

	t61 = ((x4613^x4614)%(x4615>>x4616));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x4621 = INT64_MIN;
	uint16_t x4622 = UINT16_MAX;
	int8_t x4624 = 1;

	t62 = ((x4621^x4622)%(x4623>>x4624));

	if (t62 != -4611686018427322370LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4633 = UINT16_MAX;
	int32_t x4634 = INT32_MIN;
	uint32_t x4635 = 283U;
	volatile int8_t x4636 = 6;
	static volatile uint32_t t63 = 1765897874U;

	t63 = ((x4633^x4634)%(x4635>>x4636));

	if (t63 != 3U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4873 = 1U;
	uint32_t x4874 = 3283U;
	int16_t x4875 = INT16_MAX;
	uint16_t x4876 = 2U;
	static volatile uint32_t t64 = 13U;

	t64 = ((x4873^x4874)%(x4875>>x4876));

	if (t64 != 3282U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4909 = 41841LLU;
	volatile int32_t x4911 = 30312;
	uint32_t x4912 = 1U;
	volatile uint64_t t65 = 3831015390828LLU;

	t65 = ((x4909^x4910)%(x4911>>x4912));

	if (t65 != 9546LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4929 = UINT8_MAX;
	uint8_t x4930 = 1U;
	volatile int64_t x4931 = INT64_MAX;
	static volatile int64_t t66 = -2398LL;

	t66 = ((x4929^x4930)%(x4931>>x4932));

	if (t66 != 254LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x5001 = INT16_MAX;
	static uint32_t x5002 = 7807731U;
	int64_t x5003 = 3286265443368307LL;
	volatile int64_t t67 = -241LL;

	t67 = ((x5001^x5002)%(x5003>>x5004));

	if (t67 != 7822604LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x5005 = INT16_MAX;
	int16_t x5007 = INT16_MAX;
	uint64_t x5008 = 1LLU;
	volatile int32_t t68 = 223909;

	t68 = ((x5005^x5006)%(x5007>>x5008));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x5109 = -1;
	int8_t x5111 = 25;
	uint8_t x5112 = 3U;
	volatile int32_t t69 = -5972;

	t69 = ((x5109^x5110)%(x5111>>x5112));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x5285 = INT64_MIN;
	uint8_t x5286 = 12U;
	uint32_t x5287 = 1672495U;
	static int8_t x5288 = 0;
	volatile int64_t t70 = -8429118826791LL;

	t70 = ((x5285^x5286)%(x5287>>x5288));

	if (t70 != -9236LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x5301 = UINT8_MAX;
	int16_t x5302 = -11930;
	int64_t x5303 = 1093977972790174LL;
	uint32_t x5304 = 4U;
	volatile int64_t t71 = -1142470344601209854LL;

	t71 = ((x5301^x5302)%(x5303>>x5304));

	if (t71 != -11879LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x5333 = -1;
	volatile int16_t x5334 = -1;
	int32_t x5335 = 184310327;
	int8_t x5336 = 7;
	volatile int32_t t72 = -20257;

	t72 = ((x5333^x5334)%(x5335>>x5336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5613 = -1;
	int8_t x5614 = INT8_MIN;
	static uint16_t x5615 = 25761U;
	uint16_t x5616 = 0U;
	static int32_t t73 = 114801120;

	t73 = ((x5613^x5614)%(x5615>>x5616));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x5666 = UINT64_MAX;
	uint32_t x5667 = UINT32_MAX;
	int8_t x5668 = 2;
	uint64_t t74 = 1577975730634152203LLU;

	t74 = ((x5665^x5666)%(x5667>>x5668));

	if (t74 != 12LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x5773 = UINT8_MAX;
	volatile int32_t x5774 = -13847874;
	uint64_t x5775 = UINT64_MAX;
	volatile int16_t x5776 = 5;
	volatile uint64_t t75 = 3415169974LLU;

	t75 = ((x5773^x5774)%(x5775>>x5776));

	if (t75 != 576460752289575520LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x5790 = INT16_MIN;
	volatile uint16_t x5792 = 7U;
	int64_t t76 = -3934351166LL;

	t76 = ((x5789^x5790)%(x5791>>x5792));

	if (t76 != -32645LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5861 = 2;
	uint64_t x5862 = UINT64_MAX;
	static uint8_t x5864 = 4U;
	static volatile uint64_t t77 = 60807LLU;

	t77 = ((x5861^x5862)%(x5863>>x5864));

	if (t77 != 13LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x6070 = -155631;
	uint32_t x6071 = 303U;
	uint8_t x6072 = 1U;
	int64_t t78 = -200350LL;

	t78 = ((x6069^x6070)%(x6071>>x6072));

	if (t78 != -59LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6173 = INT8_MIN;
	volatile uint8_t x6174 = 55U;
	static uint32_t x6175 = UINT32_MAX;
	int8_t x6176 = 1;
	uint32_t t79 = 2822U;

	t79 = ((x6173^x6174)%(x6175>>x6176));

	if (t79 != 2147483576U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x6245 = UINT64_MAX;
	static uint32_t x6246 = 6329U;
	static uint64_t x6247 = UINT64_MAX;
	uint8_t x6248 = 54U;
	static volatile uint64_t t80 = 368375371026199302LLU;

	t80 = ((x6245^x6246)%(x6247>>x6248));

	if (t80 != 847LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x6341 = -1LL;
	uint32_t x6342 = 2285U;
	volatile int64_t t81 = -2199074978889LL;

	t81 = ((x6341^x6342)%(x6343>>x6344));

	if (t81 != -2286LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x6374 = 58U;
	volatile uint8_t x6375 = 11U;
	uint8_t x6376 = 0U;
	int32_t t82 = 24629;

	t82 = ((x6373^x6374)%(x6375>>x6376));

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x6382 = INT16_MIN;
	int32_t x6383 = INT32_MAX;
	volatile uint8_t x6384 = 1U;
	uint64_t t83 = 19449026LLU;

	t83 = ((x6381^x6382)%(x6383>>x6384));

	if (t83 != 32767LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x6589 = -1;
	volatile uint64_t x6591 = 13487129LLU;
	uint8_t x6592 = 0U;
	volatile uint64_t t84 = 39759890777LLU;

	t84 = ((x6589^x6590)%(x6591>>x6592));

	if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x6602 = -1;
	int16_t x6603 = INT16_MAX;
	int16_t x6604 = 0;
	int32_t t85 = -40810035;

	t85 = ((x6601^x6602)%(x6603>>x6604));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x6665 = INT16_MIN;
	volatile int64_t x6667 = INT64_MAX;
	uint8_t x6668 = 0U;
	int64_t t86 = -8393371058718206LL;

	t86 = ((x6665^x6666)%(x6667>>x6668));

	if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x6733 = 259839437LL;
	int8_t x6734 = -29;
	volatile int8_t x6735 = 13;
	uint16_t x6736 = 0U;
	static volatile int64_t t87 = -1577619412LL;

	t87 = ((x6733^x6734)%(x6735>>x6736));

	if (t87 != -5LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6817 = UINT8_MAX;
	int16_t x6818 = INT16_MAX;
	static volatile int32_t x6819 = INT32_MAX;
	volatile int32_t t88 = -248;

	t88 = ((x6817^x6818)%(x6819>>x6820));

	if (t88 != 32512) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x6873 = INT8_MAX;
	uint32_t x6874 = 3679059U;
	uint8_t x6876 = 9U;

	t89 = ((x6873^x6874)%(x6875>>x6876));

	if (t89 != 25U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x7069 = INT8_MIN;
	int32_t x7071 = INT32_MAX;
	uint8_t x7072 = 1U;
	int32_t t90 = 44;

	t90 = ((x7069^x7070)%(x7071>>x7072));

	if (t90 != 308595) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x7157 = -2;
	static uint16_t x7159 = 16U;
	int8_t x7160 = 0;
	static int32_t t91 = 877261;

	t91 = ((x7157^x7158)%(x7159>>x7160));

	if (t91 != -15) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x7297 = -104;
	volatile int16_t x7298 = INT16_MIN;
	int8_t x7299 = 12;
	uint32_t x7300 = 3U;
	volatile int32_t t92 = 2284346;

	t92 = ((x7297^x7298)%(x7299>>x7300));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x7349 = 68983212LL;
	uint16_t x7351 = 432U;
	int8_t x7352 = 0;

	t93 = ((x7349^x7350)%(x7351>>x7352));

	if (t93 != -356LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x7437 = INT64_MIN;
	int64_t x7438 = INT64_MAX;
	uint8_t x7439 = 26U;
	uint8_t x7440 = 2U;
	volatile int64_t t94 = -5718759LL;

	t94 = ((x7437^x7438)%(x7439>>x7440));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x7553 = UINT64_MAX;
	uint64_t x7554 = 16118LLU;
	int16_t x7555 = 148;
	volatile int8_t x7556 = 0;
	static uint64_t t95 = 3769149LLU;

	t95 = ((x7553^x7554)%(x7555>>x7556));

	if (t95 != 25LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x7566 = 11239;
	volatile int8_t x7568 = 1;
	int32_t t96 = -6;

	t96 = ((x7565^x7566)%(x7567>>x7568));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x7629 = 18U;
	volatile int64_t x7630 = INT64_MIN;
	uint32_t x7631 = UINT32_MAX;
	uint8_t x7632 = 1U;

	t97 = ((x7629^x7630)%(x7631>>x7632));

	if (t97 != -2147483631LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x7639 = INT32_MAX;
	volatile int64_t t98 = -66207110883806049LL;

	t98 = ((x7637^x7638)%(x7639>>x7640));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x7645 = 56;
	static volatile uint8_t x7647 = UINT8_MAX;
	uint8_t x7648 = 1U;
	uint32_t t99 = 1182627032U;

	t99 = ((x7645^x7646)%(x7647>>x7648));

	if (t99 != 86U) { NG(); } else { ; }
	
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

