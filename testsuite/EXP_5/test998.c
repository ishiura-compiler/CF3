#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x257 = -2653;
volatile uint8_t x351 = 19U;
int8_t x404 = INT8_MIN;
volatile uint64_t x442 = 138604237414572LLU;
int8_t x485 = -1;
uint32_t x488 = 21700219U;
volatile uint8_t x507 = 8U;
volatile int32_t t7 = -196084669;
int16_t x541 = INT16_MAX;
uint8_t x543 = 1U;
int8_t x559 = 6;
int8_t x672 = INT8_MIN;
int32_t x733 = INT32_MIN;
uint16_t x735 = 7U;
uint16_t x750 = UINT16_MAX;
uint32_t x766 = 236U;
int32_t t18 = -1;
volatile int8_t x1145 = INT8_MIN;
uint32_t x1146 = UINT32_MAX;
int16_t x1233 = INT16_MAX;
uint16_t x1235 = 0U;
int16_t x1236 = INT16_MAX;
uint16_t x1343 = 1U;
static volatile int32_t t24 = 463;
int64_t x1653 = 14607658187264LL;
int8_t x1654 = 1;
int8_t x1771 = 10;
uint32_t x1799 = 2U;
uint32_t x2002 = UINT32_MAX;
int32_t t32 = 116693187;
uint16_t x2110 = 15021U;
uint64_t x2111 = 1LLU;
int32_t t35 = -30023;
uint32_t x2182 = 801U;
static int32_t x2225 = INT32_MIN;
static int8_t x2227 = 1;
uint64_t x2274 = 1513LLU;
volatile int32_t t38 = 99;
static int32_t x2325 = -1;
uint16_t x2327 = 0U;
uint32_t x2369 = 0U;
uint8_t x2370 = 0U;
volatile int32_t t42 = 11;
static uint32_t x2650 = 3227589U;
int64_t x2752 = -1LL;
int32_t t46 = -17;
uint32_t x2871 = 51U;
uint16_t x2878 = 624U;
int16_t x2880 = -1;
int32_t x2940 = INT32_MIN;
volatile uint16_t x3119 = 1U;
int8_t x3121 = INT8_MIN;
static volatile int32_t t55 = -269209;
uint32_t x3525 = 7464U;
static int16_t x3645 = -1;
volatile int32_t t60 = 12944998;
int32_t t61 = 15;
static volatile int32_t x3841 = INT32_MIN;
int64_t x3842 = 20667015988LL;
volatile int32_t x3873 = INT32_MIN;
uint64_t x3874 = 1518958099717LLU;
static uint16_t x3960 = UINT16_MAX;
uint64_t x3964 = UINT64_MAX;
int64_t x4398 = 8489LL;
uint8_t x4399 = 4U;
static volatile int64_t x4485 = -476291223LL;
int16_t x4487 = 7;
uint16_t x4488 = 348U;
int16_t x4649 = -1;
uint16_t x4651 = 0U;
int64_t x5053 = 17LL;
uint64_t x5056 = UINT64_MAX;
int8_t x5280 = INT8_MIN;
int32_t t80 = -1;
int64_t x5424 = INT64_MAX;
volatile int32_t t83 = 89983;
volatile int32_t t84 = 1;
static volatile uint32_t x5691 = 18U;
int16_t x5692 = INT16_MIN;
int32_t t86 = 1;
int32_t x6005 = 1712011;
volatile uint8_t x6006 = UINT8_MAX;
uint16_t x6049 = 7U;
static volatile int32_t t90 = 7;
uint16_t x6062 = 4U;
static uint16_t x6086 = UINT16_MAX;
static uint8_t x6087 = 0U;
int32_t x6088 = INT32_MIN;
static volatile int16_t x6267 = 2;
int64_t x6268 = -1LL;
uint8_t x6287 = 6U;
uint8_t x6467 = 0U;
int16_t x6468 = -1;
volatile uint32_t x6491 = 2U;
volatile int32_t t98 = -46477688;
volatile uint8_t x6586 = UINT8_MAX;
uint64_t x6587 = 1LLU;


void f0(void) {
	uint64_t x258 = UINT64_MAX;
	uint32_t x259 = 0U;
	int64_t x260 = INT64_MIN;
	volatile int32_t t0 = 21785791;

	t0 = (x257<=((x258<<x259)|x260));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x349 = INT16_MIN;
	uint8_t x350 = UINT8_MAX;
	uint32_t x352 = 2U;
	int32_t t1 = -2544727;

	t1 = (x349<=((x350<<x351)|x352));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x401 = INT16_MAX;
	volatile int32_t x402 = 41123008;
	static uint8_t x403 = 1U;
	static volatile int32_t t2 = 5;

	t2 = (x401<=((x402<<x403)|x404));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x409 = -1;
	int8_t x410 = INT8_MAX;
	int8_t x411 = 1;
	int64_t x412 = -1LL;
	static volatile int32_t t3 = -20;

	t3 = (x409<=((x410<<x411)|x412));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x441 = INT32_MIN;
	uint16_t x443 = 0U;
	int32_t x444 = INT32_MIN;
	volatile int32_t t4 = 93142478;

	t4 = (x441<=((x442<<x443)|x444));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x445 = 7;
	uint64_t x446 = 2231880186608371364LLU;
	volatile uint64_t x447 = 2LLU;
	uint16_t x448 = 29U;
	int32_t t5 = 1;

	t5 = (x445<=((x446<<x447)|x448));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x486 = UINT32_MAX;
	int8_t x487 = 0;
	volatile int32_t t6 = 2;

	t6 = (x485<=((x486<<x487)|x488));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x505 = UINT16_MAX;
	uint64_t x506 = UINT64_MAX;
	uint8_t x508 = 14U;

	t7 = (x505<=((x506<<x507)|x508));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x542 = INT16_MAX;
	volatile int16_t x544 = -1;
	int32_t t8 = -593;

	t8 = (x541<=((x542<<x543)|x544));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x557 = INT16_MIN;
	volatile int8_t x558 = INT8_MAX;
	int64_t x560 = INT64_MIN;
	volatile int32_t t9 = 93058628;

	t9 = (x557<=((x558<<x559)|x560));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x581 = INT32_MIN;
	uint32_t x582 = 476752U;
	int16_t x583 = 2;
	int16_t x584 = 737;
	static int32_t t10 = 848;

	t10 = (x581<=((x582<<x583)|x584));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x669 = -1;
	static uint8_t x670 = UINT8_MAX;
	uint16_t x671 = 1U;
	volatile int32_t t11 = 72922;

	t11 = (x669<=((x670<<x671)|x672));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x734 = UINT16_MAX;
	static int32_t x736 = -10181;
	volatile int32_t t12 = -471194;

	t12 = (x733<=((x734<<x735)|x736));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x749 = INT64_MIN;
	uint32_t x751 = 3U;
	static int32_t x752 = -6;
	volatile int32_t t13 = 183005291;

	t13 = (x749<=((x750<<x751)|x752));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x765 = INT64_MIN;
	static uint8_t x767 = 3U;
	int16_t x768 = INT16_MIN;
	volatile int32_t t14 = -2;

	t14 = (x765<=((x766<<x767)|x768));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x809 = -177;
	int16_t x810 = 2039;
	static uint8_t x811 = 13U;
	int8_t x812 = -1;
	int32_t t15 = 7;

	t15 = (x809<=((x810<<x811)|x812));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x969 = INT32_MIN;
	uint64_t x970 = 2091661007LLU;
	uint8_t x971 = 40U;
	uint16_t x972 = 4137U;
	int32_t t16 = -168261;

	t16 = (x969<=((x970<<x971)|x972));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x1081 = -1LL;
	int16_t x1082 = 13438;
	uint8_t x1083 = 2U;
	uint32_t x1084 = 150282702U;
	int32_t t17 = 9064676;

	t17 = (x1081<=((x1082<<x1083)|x1084));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1129 = 1159;
	static uint64_t x1130 = 575557620526241369LLU;
	static uint8_t x1131 = 2U;
	static uint8_t x1132 = 3U;

	t18 = (x1129<=((x1130<<x1131)|x1132));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1147 = 31;
	int16_t x1148 = 617;
	static volatile int32_t t19 = -277401;

	t19 = (x1145<=((x1146<<x1147)|x1148));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1189 = INT8_MIN;
	volatile uint64_t x1190 = UINT64_MAX;
	uint8_t x1191 = 38U;
	int16_t x1192 = INT16_MAX;
	volatile int32_t t20 = -71785;

	t20 = (x1189<=((x1190<<x1191)|x1192));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1197 = 10481U;
	volatile uint8_t x1198 = 81U;
	int16_t x1199 = 1;
	static uint32_t x1200 = 35438218U;
	volatile int32_t t21 = 6685;

	t21 = (x1197<=((x1198<<x1199)|x1200));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x1234 = UINT8_MAX;
	volatile int32_t t22 = 360813;

	t22 = (x1233<=((x1234<<x1235)|x1236));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1321 = INT64_MIN;
	uint16_t x1322 = 7005U;
	volatile uint16_t x1323 = 18U;
	int16_t x1324 = INT16_MAX;
	volatile int32_t t23 = 20;

	t23 = (x1321<=((x1322<<x1323)|x1324));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1341 = INT8_MIN;
	static volatile int8_t x1342 = INT8_MAX;
	int32_t x1344 = INT32_MIN;

	t24 = (x1341<=((x1342<<x1343)|x1344));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1385 = INT16_MIN;
	uint32_t x1386 = 56U;
	int16_t x1387 = 1;
	uint16_t x1388 = 78U;
	int32_t t25 = 1292701;

	t25 = (x1385<=((x1386<<x1387)|x1388));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1655 = 1;
	volatile int8_t x1656 = INT8_MIN;
	int32_t t26 = 312;

	t26 = (x1653<=((x1654<<x1655)|x1656));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1661 = UINT16_MAX;
	volatile uint16_t x1662 = 3U;
	static int8_t x1663 = 25;
	static volatile int8_t x1664 = -1;
	int32_t t27 = 0;

	t27 = (x1661<=((x1662<<x1663)|x1664));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1769 = INT32_MAX;
	uint64_t x1770 = 2678642902565004904LLU;
	uint32_t x1772 = UINT32_MAX;
	static int32_t t28 = -7336;

	t28 = (x1769<=((x1770<<x1771)|x1772));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1797 = 573946271981477LL;
	static int64_t x1798 = 1525321826966011701LL;
	int64_t x1800 = -1LL;
	volatile int32_t t29 = -28423;

	t29 = (x1797<=((x1798<<x1799)|x1800));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1825 = INT64_MIN;
	int64_t x1826 = 3763LL;
	uint8_t x1827 = 0U;
	int64_t x1828 = INT64_MAX;
	int32_t t30 = -82;

	t30 = (x1825<=((x1826<<x1827)|x1828));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1877 = 3038;
	uint8_t x1878 = 1U;
	int8_t x1879 = 1;
	int64_t x1880 = -1LL;
	int32_t t31 = 70262396;

	t31 = (x1877<=((x1878<<x1879)|x1880));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x2001 = 1336670016356441LL;
	static uint8_t x2003 = 1U;
	static volatile uint64_t x2004 = UINT64_MAX;

	t32 = (x2001<=((x2002<<x2003)|x2004));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x2085 = -34;
	uint32_t x2086 = 38U;
	uint32_t x2087 = 3U;
	uint8_t x2088 = UINT8_MAX;
	int32_t t33 = 8619169;

	t33 = (x2085<=((x2086<<x2087)|x2088));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x2097 = UINT32_MAX;
	volatile uint64_t x2098 = UINT64_MAX;
	static int16_t x2099 = 0;
	int32_t x2100 = 132275995;
	int32_t t34 = -24;

	t34 = (x2097<=((x2098<<x2099)|x2100));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2109 = INT64_MIN;
	static int32_t x2112 = INT32_MIN;

	t35 = (x2109<=((x2110<<x2111)|x2112));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x2181 = -1;
	volatile uint8_t x2183 = 1U;
	int16_t x2184 = INT16_MIN;
	volatile int32_t t36 = 7;

	t36 = (x2181<=((x2182<<x2183)|x2184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2226 = 1;
	uint32_t x2228 = UINT32_MAX;
	volatile int32_t t37 = -89457317;

	t37 = (x2225<=((x2226<<x2227)|x2228));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2273 = INT32_MIN;
	uint32_t x2275 = 36U;
	volatile uint16_t x2276 = UINT16_MAX;

	t38 = (x2273<=((x2274<<x2275)|x2276));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x2277 = UINT16_MAX;
	int64_t x2278 = 41213158324883LL;
	int8_t x2279 = 3;
	static int8_t x2280 = INT8_MAX;
	volatile int32_t t39 = 939548;

	t39 = (x2277<=((x2278<<x2279)|x2280));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x2301 = UINT32_MAX;
	uint16_t x2302 = 1U;
	static uint8_t x2303 = 1U;
	int16_t x2304 = -1;
	int32_t t40 = -388;

	t40 = (x2301<=((x2302<<x2303)|x2304));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2326 = 166U;
	int8_t x2328 = INT8_MIN;
	volatile int32_t t41 = -942522;

	t41 = (x2325<=((x2326<<x2327)|x2328));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2371 = 0;
	static uint32_t x2372 = 144004308U;

	t42 = (x2369<=((x2370<<x2371)|x2372));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2497 = INT64_MAX;
	int32_t x2498 = 45510;
	int8_t x2499 = 1;
	int16_t x2500 = INT16_MAX;
	static int32_t t43 = -25695304;

	t43 = (x2497<=((x2498<<x2499)|x2500));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2529 = 241326;
	uint8_t x2530 = 31U;
	int8_t x2531 = 0;
	volatile int64_t x2532 = 240365163LL;
	int32_t t44 = 37782280;

	t44 = (x2529<=((x2530<<x2531)|x2532));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2649 = INT8_MAX;
	uint8_t x2651 = 3U;
	int16_t x2652 = INT16_MIN;
	static int32_t t45 = 378;

	t45 = (x2649<=((x2650<<x2651)|x2652));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2749 = INT64_MAX;
	uint16_t x2750 = 11U;
	int32_t x2751 = 14;

	t46 = (x2749<=((x2750<<x2751)|x2752));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x2869 = 3U;
	static uint64_t x2870 = 58465676LLU;
	uint64_t x2872 = 1LLU;
	static volatile int32_t t47 = 169398;

	t47 = (x2869<=((x2870<<x2871)|x2872));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2877 = INT8_MAX;
	volatile uint32_t x2879 = 9U;
	int32_t t48 = 980401;

	t48 = (x2877<=((x2878<<x2879)|x2880));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x2937 = INT64_MAX;
	volatile int64_t x2938 = 7LL;
	uint32_t x2939 = 1U;
	static int32_t t49 = -985309;

	t49 = (x2937<=((x2938<<x2939)|x2940));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2997 = UINT16_MAX;
	int32_t x2998 = 7320967;
	int16_t x2999 = 0;
	int64_t x3000 = INT64_MIN;
	volatile int32_t t50 = -4671468;

	t50 = (x2997<=((x2998<<x2999)|x3000));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3113 = 0U;
	uint16_t x3114 = 5U;
	uint16_t x3115 = 15U;
	int32_t x3116 = 2002;
	int32_t t51 = 2;

	t51 = (x3113<=((x3114<<x3115)|x3116));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3117 = 14526U;
	static uint8_t x3118 = 0U;
	int8_t x3120 = -8;
	volatile int32_t t52 = -2948094;

	t52 = (x3117<=((x3118<<x3119)|x3120));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3122 = UINT16_MAX;
	static int8_t x3123 = 1;
	int32_t x3124 = INT32_MAX;
	volatile int32_t t53 = 48456;

	t53 = (x3121<=((x3122<<x3123)|x3124));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3201 = INT8_MAX;
	volatile uint32_t x3202 = 27777469U;
	static uint8_t x3203 = 1U;
	int16_t x3204 = INT16_MAX;
	int32_t t54 = 13721;

	t54 = (x3201<=((x3202<<x3203)|x3204));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3337 = INT8_MIN;
	uint32_t x3338 = UINT32_MAX;
	uint16_t x3339 = 10U;
	static int16_t x3340 = -1;

	t55 = (x3337<=((x3338<<x3339)|x3340));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3461 = -1;
	uint32_t x3462 = UINT32_MAX;
	int64_t x3463 = 9LL;
	uint32_t x3464 = 241640U;
	volatile int32_t t56 = 13377990;

	t56 = (x3461<=((x3462<<x3463)|x3464));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3526 = UINT32_MAX;
	uint64_t x3527 = 3LLU;
	uint16_t x3528 = UINT16_MAX;
	static int32_t t57 = 2497;

	t57 = (x3525<=((x3526<<x3527)|x3528));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3605 = INT64_MIN;
	int16_t x3606 = 0;
	static uint8_t x3607 = 6U;
	int8_t x3608 = -1;
	volatile int32_t t58 = -6883529;

	t58 = (x3605<=((x3606<<x3607)|x3608));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3646 = 24U;
	uint8_t x3647 = 6U;
	int32_t x3648 = INT32_MAX;
	volatile int32_t t59 = 162482;

	t59 = (x3645<=((x3646<<x3647)|x3648));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x3649 = 111853U;
	int16_t x3650 = 0;
	uint8_t x3651 = 2U;
	static volatile uint16_t x3652 = 605U;

	t60 = (x3649<=((x3650<<x3651)|x3652));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3741 = 118782331LLU;
	volatile int8_t x3742 = INT8_MAX;
	int8_t x3743 = 1;
	uint64_t x3744 = UINT64_MAX;

	t61 = (x3741<=((x3742<<x3743)|x3744));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x3809 = UINT32_MAX;
	volatile int16_t x3810 = 2569;
	int32_t x3811 = 0;
	uint16_t x3812 = 2810U;
	volatile int32_t t62 = -105;

	t62 = (x3809<=((x3810<<x3811)|x3812));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3843 = 23U;
	int8_t x3844 = 1;
	volatile int32_t t63 = -31085;

	t63 = (x3841<=((x3842<<x3843)|x3844));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3875 = 1;
	uint16_t x3876 = UINT16_MAX;
	volatile int32_t t64 = -25;

	t64 = (x3873<=((x3874<<x3875)|x3876));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3885 = 1;
	uint32_t x3886 = UINT32_MAX;
	int8_t x3887 = 0;
	static volatile uint64_t x3888 = 3801986156895LLU;
	volatile int32_t t65 = -13998166;

	t65 = (x3885<=((x3886<<x3887)|x3888));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3957 = -1;
	uint32_t x3958 = UINT32_MAX;
	uint16_t x3959 = 2U;
	volatile int32_t t66 = 2548933;

	t66 = (x3957<=((x3958<<x3959)|x3960));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3961 = -1469;
	volatile uint8_t x3962 = 5U;
	static int16_t x3963 = 13;
	volatile int32_t t67 = -1912444;

	t67 = (x3961<=((x3962<<x3963)|x3964));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4037 = 11;
	uint32_t x4038 = 24616221U;
	uint64_t x4039 = 7LLU;
	int16_t x4040 = -1;
	static int32_t t68 = -86;

	t68 = (x4037<=((x4038<<x4039)|x4040));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4129 = INT64_MAX;
	static uint32_t x4130 = 17U;
	uint64_t x4131 = 0LLU;
	int64_t x4132 = INT64_MAX;
	int32_t t69 = 634;

	t69 = (x4129<=((x4130<<x4131)|x4132));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4397 = INT64_MIN;
	volatile uint8_t x4400 = 25U;
	volatile int32_t t70 = 7110;

	t70 = (x4397<=((x4398<<x4399)|x4400));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4486 = 981079U;
	int32_t t71 = -37;

	t71 = (x4485<=((x4486<<x4487)|x4488));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4621 = 16U;
	uint64_t x4622 = UINT64_MAX;
	int8_t x4623 = 21;
	uint16_t x4624 = UINT16_MAX;
	volatile int32_t t72 = 101312034;

	t72 = (x4621<=((x4622<<x4623)|x4624));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4650 = 290366892451LLU;
	int32_t x4652 = -106832084;
	volatile int32_t t73 = -3;

	t73 = (x4649<=((x4650<<x4651)|x4652));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4897 = INT8_MIN;
	volatile int16_t x4898 = INT16_MAX;
	uint16_t x4899 = 9U;
	int8_t x4900 = 7;
	int32_t t74 = -4;

	t74 = (x4897<=((x4898<<x4899)|x4900));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4929 = UINT64_MAX;
	uint64_t x4930 = 1594372LLU;
	static uint32_t x4931 = 12U;
	int64_t x4932 = INT64_MIN;
	volatile int32_t t75 = 9505470;

	t75 = (x4929<=((x4930<<x4931)|x4932));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5054 = 208U;
	volatile int32_t x5055 = 0;
	volatile int32_t t76 = -301;

	t76 = (x5053<=((x5054<<x5055)|x5056));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x5229 = UINT8_MAX;
	uint8_t x5230 = UINT8_MAX;
	static int8_t x5231 = 16;
	static int16_t x5232 = INT16_MAX;
	int32_t t77 = 6006341;

	t77 = (x5229<=((x5230<<x5231)|x5232));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x5253 = INT64_MIN;
	static uint16_t x5254 = 293U;
	int64_t x5255 = 20LL;
	uint8_t x5256 = 7U;
	int32_t t78 = 1;

	t78 = (x5253<=((x5254<<x5255)|x5256));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5277 = 2;
	int8_t x5278 = INT8_MAX;
	volatile uint8_t x5279 = 10U;
	static int32_t t79 = 8942;

	t79 = (x5277<=((x5278<<x5279)|x5280));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x5301 = INT32_MAX;
	volatile uint64_t x5302 = 2828LLU;
	uint8_t x5303 = 1U;
	int32_t x5304 = INT32_MIN;

	t80 = (x5301<=((x5302<<x5303)|x5304));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5421 = INT64_MAX;
	int32_t x5422 = INT32_MAX;
	static uint8_t x5423 = 0U;
	volatile int32_t t81 = 1;

	t81 = (x5421<=((x5422<<x5423)|x5424));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5445 = 127498;
	static uint64_t x5446 = 49LLU;
	volatile uint16_t x5447 = 49U;
	int64_t x5448 = INT64_MIN;
	static volatile int32_t t82 = -67613614;

	t82 = (x5445<=((x5446<<x5447)|x5448));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5481 = INT32_MIN;
	uint16_t x5482 = 6U;
	int16_t x5483 = 3;
	uint64_t x5484 = 26604LLU;

	t83 = (x5481<=((x5482<<x5483)|x5484));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5621 = 108LLU;
	static int64_t x5622 = 1159335510880601LL;
	volatile uint8_t x5623 = 7U;
	int16_t x5624 = INT16_MIN;

	t84 = (x5621<=((x5622<<x5623)|x5624));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5689 = 246870LLU;
	uint32_t x5690 = 262U;
	volatile int32_t t85 = 0;

	t85 = (x5689<=((x5690<<x5691)|x5692));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x5809 = INT16_MIN;
	uint32_t x5810 = 12123U;
	int16_t x5811 = 27;
	volatile uint32_t x5812 = UINT32_MAX;

	t86 = (x5809<=((x5810<<x5811)|x5812));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x5845 = 8706;
	int8_t x5846 = INT8_MAX;
	uint8_t x5847 = 0U;
	int8_t x5848 = INT8_MAX;
	volatile int32_t t87 = -497687;

	t87 = (x5845<=((x5846<<x5847)|x5848));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x5881 = -1;
	volatile int16_t x5882 = 28;
	uint16_t x5883 = 0U;
	int16_t x5884 = 0;
	volatile int32_t t88 = 70;

	t88 = (x5881<=((x5882<<x5883)|x5884));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6007 = 1;
	static int32_t x6008 = -16302;
	volatile int32_t t89 = 145870;

	t89 = (x6005<=((x6006<<x6007)|x6008));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x6050 = 1451026673LL;
	int8_t x6051 = 0;
	int16_t x6052 = INT16_MIN;

	t90 = (x6049<=((x6050<<x6051)|x6052));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x6061 = -1LL;
	uint32_t x6063 = 14U;
	uint16_t x6064 = 0U;
	static int32_t t91 = 11;

	t91 = (x6061<=((x6062<<x6063)|x6064));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6085 = 3934;
	int32_t t92 = -840;

	t92 = (x6085<=((x6086<<x6087)|x6088));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x6265 = -1LL;
	uint32_t x6266 = 1919427598U;
	int32_t t93 = -12627287;

	t93 = (x6265<=((x6266<<x6267)|x6268));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x6285 = 485017646648LLU;
	uint16_t x6286 = UINT16_MAX;
	int32_t x6288 = -1;
	int32_t t94 = -605755558;

	t94 = (x6285<=((x6286<<x6287)|x6288));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x6465 = UINT32_MAX;
	uint64_t x6466 = UINT64_MAX;
	volatile int32_t t95 = 1;

	t95 = (x6465<=((x6466<<x6467)|x6468));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6477 = INT32_MIN;
	int64_t x6478 = INT64_MAX;
	static int8_t x6479 = 0;
	int64_t x6480 = -314897745370LL;
	int32_t t96 = 1235479;

	t96 = (x6477<=((x6478<<x6479)|x6480));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6489 = -440885913358649LL;
	uint32_t x6490 = 606U;
	int32_t x6492 = 18;
	int32_t t97 = 135167;

	t97 = (x6489<=((x6490<<x6491)|x6492));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x6561 = UINT64_MAX;
	static volatile int64_t x6562 = 56225LL;
	uint8_t x6563 = 7U;
	static uint16_t x6564 = 2U;

	t98 = (x6561<=((x6562<<x6563)|x6564));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6585 = 3U;
	uint64_t x6588 = 810460880LLU;
	int32_t t99 = 2;

	t99 = (x6585<=((x6586<<x6587)|x6588));

	if (t99 != 1) { NG(); } else { ; }
	
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

