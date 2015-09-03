#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x196 = 109;
uint8_t x222 = 2U;
uint32_t x244 = UINT32_MAX;
int16_t x464 = INT16_MIN;
uint32_t x491 = UINT32_MAX;
static int32_t t8 = -10;
uint32_t x498 = 5U;
int16_t x506 = 1;
int16_t x563 = INT16_MIN;
int32_t x564 = -1;
int32_t x787 = INT32_MAX;
volatile int8_t x804 = INT8_MAX;
int32_t x900 = INT32_MIN;
int32_t x987 = INT32_MAX;
uint16_t x988 = 7U;
int8_t x1113 = 1;
uint8_t x1247 = UINT8_MAX;
int32_t t22 = 3;
int64_t x1508 = -1LL;
int8_t x1562 = 19;
int8_t x1563 = INT8_MAX;
static uint32_t x1564 = 567358262U;
int32_t t27 = 4003040;
volatile uint64_t x1680 = UINT64_MAX;
int32_t t28 = 54467;
volatile uint64_t x1712 = 823934318281LLU;
int8_t x1781 = 12;
uint8_t x1782 = 14U;
int32_t t33 = -6335;
volatile int32_t t35 = -15;
uint32_t x2057 = 106U;
int16_t x2134 = 0;
static int16_t x2136 = -1;
volatile int32_t t37 = 17507504;
int64_t x2208 = -4532LL;
volatile int32_t t40 = 3170476;
volatile int32_t t41 = -1;
volatile int32_t t42 = 0;
int8_t x2543 = 49;
static int16_t x2544 = INT16_MIN;
uint8_t x2573 = UINT8_MAX;
volatile uint8_t x2574 = 1U;
int32_t x2575 = INT32_MIN;
static int32_t t46 = -744;
int64_t x2635 = -1LL;
int32_t t47 = -3488;
uint16_t x2818 = 57U;
volatile int32_t t49 = -6;
int64_t x3127 = INT64_MAX;
static volatile int32_t x3193 = INT32_MAX;
static uint32_t x3369 = 114869268U;
static int8_t x3433 = 20;
uint8_t x3697 = 6U;
static uint64_t x3699 = 178233LLU;
int32_t t63 = 7103280;
uint8_t x3826 = 0U;
int8_t x4070 = 1;
uint8_t x4146 = 45U;
static uint8_t x4153 = 13U;
uint32_t x4155 = UINT32_MAX;
volatile int32_t t72 = -6904;
volatile int64_t x4273 = INT64_MAX;
uint16_t x4294 = 1U;
volatile int32_t x4296 = INT32_MIN;
static volatile uint32_t x4374 = 0U;
static int32_t x4375 = INT32_MAX;
int8_t x4403 = -7;
static int16_t x4404 = INT16_MAX;
int8_t x4587 = -1;
static volatile int32_t t80 = 23371962;
uint32_t x4597 = 153U;
int32_t t82 = 17;
uint8_t x4650 = 7U;
uint8_t x4652 = 25U;
static volatile uint32_t x4663 = 10032U;
uint16_t x4674 = 0U;
static int64_t x4708 = INT64_MIN;
volatile uint16_t x4730 = 8U;
int8_t x4826 = 12;
static volatile int32_t t89 = 194;
volatile int32_t t91 = -4555;
uint32_t x5206 = 1U;
static int32_t x5291 = 216;
uint16_t x5515 = 10U;
int32_t t98 = -13;
volatile int8_t x5682 = 2;


void f0(void) {
	static int64_t x9 = INT64_MAX;
	uint64_t x10 = 4LLU;
	int8_t x11 = -15;
	int8_t x12 = INT8_MIN;
	int32_t t0 = -845701317;

	t0 = ((x9>>x10)<(x11|x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x65 = 21U;
	int8_t x66 = 3;
	int8_t x67 = -12;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t1 = 56609;

	t1 = ((x65>>x66)<(x67|x68));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x165 = UINT32_MAX;
	uint16_t x166 = 27U;
	static uint64_t x167 = UINT64_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t2 = 10;

	t2 = ((x165>>x166)<(x167|x168));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x193 = INT64_MAX;
	volatile int16_t x194 = 6;
	int16_t x195 = INT16_MAX;
	int32_t t3 = 3457;

	t3 = ((x193>>x194)<(x195|x196));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x221 = 26;
	uint16_t x223 = 1U;
	volatile uint64_t x224 = UINT64_MAX;
	volatile int32_t t4 = 34384;

	t4 = ((x221>>x222)<(x223|x224));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x241 = 5U;
	static int8_t x242 = 0;
	uint32_t x243 = 818854U;
	volatile int32_t t5 = -9317570;

	t5 = ((x241>>x242)<(x243|x244));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x381 = INT64_MAX;
	volatile int16_t x382 = 0;
	volatile int8_t x383 = -1;
	int8_t x384 = -1;
	int32_t t6 = -57981;

	t6 = ((x381>>x382)<(x383|x384));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x461 = 15U;
	static uint8_t x462 = 0U;
	int8_t x463 = -1;
	volatile int32_t t7 = 1781222;

	t7 = ((x461>>x462)<(x463|x464));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x489 = 13;
	uint8_t x490 = 31U;
	static uint64_t x492 = 13851891377808LLU;

	t8 = ((x489>>x490)<(x491|x492));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x497 = 63U;
	int32_t x499 = -1018;
	int16_t x500 = -3;
	static int32_t t9 = -28837;

	t9 = ((x497>>x498)<(x499|x500));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x505 = UINT32_MAX;
	int8_t x507 = INT8_MIN;
	static int8_t x508 = INT8_MIN;
	volatile int32_t t10 = -7;

	t10 = ((x505>>x506)<(x507|x508));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x561 = INT16_MAX;
	int8_t x562 = 1;
	static int32_t t11 = 26;

	t11 = ((x561>>x562)<(x563|x564));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x677 = UINT16_MAX;
	volatile int16_t x678 = 1;
	volatile int64_t x679 = -151777LL;
	int8_t x680 = -1;
	volatile int32_t t12 = 172768;

	t12 = ((x677>>x678)<(x679|x680));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x729 = 1;
	volatile int8_t x730 = 1;
	uint64_t x731 = 3135441LLU;
	static uint16_t x732 = 5U;
	static int32_t t13 = -688;

	t13 = ((x729>>x730)<(x731|x732));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x785 = UINT16_MAX;
	int16_t x786 = 27;
	int32_t x788 = INT32_MAX;
	int32_t t14 = -15700;

	t14 = ((x785>>x786)<(x787|x788));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x801 = 739U;
	int8_t x802 = 1;
	static int16_t x803 = INT16_MIN;
	static int32_t t15 = -498730;

	t15 = ((x801>>x802)<(x803|x804));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x821 = INT32_MAX;
	static volatile int16_t x822 = 8;
	int64_t x823 = INT64_MAX;
	int64_t x824 = 65616LL;
	volatile int32_t t16 = -2;

	t16 = ((x821>>x822)<(x823|x824));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x897 = 8943706;
	uint8_t x898 = 7U;
	volatile int64_t x899 = -1LL;
	volatile int32_t t17 = -1291436;

	t17 = ((x897>>x898)<(x899|x900));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x985 = UINT16_MAX;
	static int8_t x986 = 19;
	static int32_t t18 = 2776;

	t18 = ((x985>>x986)<(x987|x988));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1085 = 4966LL;
	uint8_t x1086 = 27U;
	volatile int32_t x1087 = -1;
	uint16_t x1088 = 8U;
	volatile int32_t t19 = -1006423093;

	t19 = ((x1085>>x1086)<(x1087|x1088));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1114 = 1U;
	static uint8_t x1115 = 59U;
	int8_t x1116 = INT8_MAX;
	int32_t t20 = 22;

	t20 = ((x1113>>x1114)<(x1115|x1116));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1133 = 47;
	int8_t x1134 = 1;
	int32_t x1135 = 7;
	volatile uint32_t x1136 = UINT32_MAX;
	int32_t t21 = 3180;

	t21 = ((x1133>>x1134)<(x1135|x1136));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1245 = 6277U;
	volatile int8_t x1246 = 0;
	volatile int64_t x1248 = -176LL;

	t22 = ((x1245>>x1246)<(x1247|x1248));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1337 = 30240U;
	static volatile int8_t x1338 = 0;
	int8_t x1339 = INT8_MAX;
	volatile uint32_t x1340 = UINT32_MAX;
	int32_t t23 = -1645;

	t23 = ((x1337>>x1338)<(x1339|x1340));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1393 = 9068U;
	uint8_t x1394 = 1U;
	volatile uint16_t x1395 = 504U;
	uint32_t x1396 = UINT32_MAX;
	volatile int32_t t24 = -130;

	t24 = ((x1393>>x1394)<(x1395|x1396));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1505 = 1225767LLU;
	int8_t x1506 = 24;
	static uint8_t x1507 = UINT8_MAX;
	int32_t t25 = 32;

	t25 = ((x1505>>x1506)<(x1507|x1508));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1561 = 36603076U;
	static int32_t t26 = 592068;

	t26 = ((x1561>>x1562)<(x1563|x1564));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1581 = 482415125LLU;
	uint16_t x1582 = 21U;
	int32_t x1583 = INT32_MIN;
	uint64_t x1584 = UINT64_MAX;

	t27 = ((x1581>>x1582)<(x1583|x1584));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x1677 = 3124U;
	uint16_t x1678 = 3U;
	int64_t x1679 = INT64_MIN;

	t28 = ((x1677>>x1678)<(x1679|x1680));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1685 = 17;
	volatile int16_t x1686 = 27;
	int16_t x1687 = -3;
	int64_t x1688 = INT64_MAX;
	volatile int32_t t29 = -665;

	t29 = ((x1685>>x1686)<(x1687|x1688));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1709 = 318660586740325LL;
	volatile uint8_t x1710 = 1U;
	volatile uint16_t x1711 = UINT16_MAX;
	int32_t t30 = -1182;

	t30 = ((x1709>>x1710)<(x1711|x1712));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1749 = 38U;
	uint16_t x1750 = 24U;
	volatile uint64_t x1751 = 323364408893LLU;
	static int64_t x1752 = -1LL;
	volatile int32_t t31 = 74997;

	t31 = ((x1749>>x1750)<(x1751|x1752));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1783 = 202905372LLU;
	static int64_t x1784 = -1LL;
	static volatile int32_t t32 = 0;

	t32 = ((x1781>>x1782)<(x1783|x1784));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1801 = 83241928U;
	volatile uint8_t x1802 = 5U;
	static uint64_t x1803 = 1539648223143575LLU;
	int16_t x1804 = INT16_MIN;

	t33 = ((x1801>>x1802)<(x1803|x1804));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x1873 = 0U;
	uint8_t x1874 = 9U;
	int16_t x1875 = -743;
	int64_t x1876 = -1LL;
	static int32_t t34 = 97;

	t34 = ((x1873>>x1874)<(x1875|x1876));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1993 = 32U;
	static uint8_t x1994 = 2U;
	static uint64_t x1995 = 56639081LLU;
	int64_t x1996 = INT64_MIN;

	t35 = ((x1993>>x1994)<(x1995|x1996));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2058 = 0U;
	volatile uint32_t x2059 = UINT32_MAX;
	int64_t x2060 = INT64_MIN;
	int32_t t36 = 164896055;

	t36 = ((x2057>>x2058)<(x2059|x2060));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2133 = UINT16_MAX;
	static int32_t x2135 = INT32_MIN;

	t37 = ((x2133>>x2134)<(x2135|x2136));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2205 = UINT8_MAX;
	uint8_t x2206 = 10U;
	int64_t x2207 = INT64_MIN;
	volatile int32_t t38 = 38287840;

	t38 = ((x2205>>x2206)<(x2207|x2208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2325 = 2526819623470LLU;
	int64_t x2326 = 28LL;
	static int8_t x2327 = INT8_MAX;
	volatile int8_t x2328 = INT8_MIN;
	volatile int32_t t39 = 15;

	t39 = ((x2325>>x2326)<(x2327|x2328));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2365 = 1187940216LL;
	uint16_t x2366 = 15U;
	static volatile int8_t x2367 = -1;
	static uint8_t x2368 = 0U;

	t40 = ((x2365>>x2366)<(x2367|x2368));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x2377 = 0U;
	int16_t x2378 = 5;
	volatile uint16_t x2379 = 1U;
	volatile int16_t x2380 = -3435;

	t41 = ((x2377>>x2378)<(x2379|x2380));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2409 = 1417LL;
	static int16_t x2410 = 0;
	volatile int16_t x2411 = INT16_MAX;
	volatile int8_t x2412 = 5;

	t42 = ((x2409>>x2410)<(x2411|x2412));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2445 = INT8_MAX;
	int8_t x2446 = 1;
	int8_t x2447 = -1;
	int32_t x2448 = INT32_MIN;
	volatile int32_t t43 = -2282;

	t43 = ((x2445>>x2446)<(x2447|x2448));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2541 = UINT64_MAX;
	uint8_t x2542 = 25U;
	static volatile int32_t t44 = -24;

	t44 = ((x2541>>x2542)<(x2543|x2544));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2553 = INT64_MAX;
	uint16_t x2554 = 1U;
	int16_t x2555 = INT16_MIN;
	int8_t x2556 = INT8_MIN;
	volatile int32_t t45 = -1;

	t45 = ((x2553>>x2554)<(x2555|x2556));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2576 = -1;

	t46 = ((x2573>>x2574)<(x2575|x2576));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2633 = 21U;
	volatile uint16_t x2634 = 5U;
	int32_t x2636 = -68531;

	t47 = ((x2633>>x2634)<(x2635|x2636));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2657 = INT32_MAX;
	static volatile uint16_t x2658 = 7U;
	int64_t x2659 = INT64_MIN;
	volatile int8_t x2660 = INT8_MIN;
	volatile int32_t t48 = 243170;

	t48 = ((x2657>>x2658)<(x2659|x2660));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2817 = 2706492250LL;
	uint8_t x2819 = UINT8_MAX;
	uint16_t x2820 = UINT16_MAX;

	t49 = ((x2817>>x2818)<(x2819|x2820));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2937 = INT64_MAX;
	uint8_t x2938 = 10U;
	int64_t x2939 = 12792075567LL;
	volatile int64_t x2940 = -353576488LL;
	volatile int32_t t50 = 1782;

	t50 = ((x2937>>x2938)<(x2939|x2940));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x2953 = 2U;
	static int16_t x2954 = 1;
	int64_t x2955 = INT64_MIN;
	static int64_t x2956 = 1176LL;
	int32_t t51 = 20;

	t51 = ((x2953>>x2954)<(x2955|x2956));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3041 = UINT64_MAX;
	uint64_t x3042 = 3LLU;
	int32_t x3043 = INT32_MIN;
	int8_t x3044 = -1;
	int32_t t52 = -581198758;

	t52 = ((x3041>>x3042)<(x3043|x3044));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3053 = UINT64_MAX;
	uint16_t x3054 = 0U;
	int8_t x3055 = -29;
	int16_t x3056 = INT16_MIN;
	volatile int32_t t53 = -2454;

	t53 = ((x3053>>x3054)<(x3055|x3056));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3125 = 8461827159039642LL;
	static int8_t x3126 = 0;
	uint32_t x3128 = 99U;
	int32_t t54 = -264476465;

	t54 = ((x3125>>x3126)<(x3127|x3128));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3194 = 1;
	uint16_t x3195 = 56U;
	int8_t x3196 = -1;
	volatile int32_t t55 = 19476;

	t55 = ((x3193>>x3194)<(x3195|x3196));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3321 = 0;
	int16_t x3322 = 1;
	int8_t x3323 = 40;
	uint16_t x3324 = 851U;
	volatile int32_t t56 = -933;

	t56 = ((x3321>>x3322)<(x3323|x3324));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x3370 = 1U;
	uint8_t x3371 = UINT8_MAX;
	int16_t x3372 = -1;
	int32_t t57 = -1;

	t57 = ((x3369>>x3370)<(x3371|x3372));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3434 = 1U;
	static int8_t x3435 = INT8_MAX;
	int32_t x3436 = -1;
	int32_t t58 = 30735;

	t58 = ((x3433>>x3434)<(x3435|x3436));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3437 = 7207U;
	uint16_t x3438 = 0U;
	uint32_t x3439 = UINT32_MAX;
	int64_t x3440 = INT64_MIN;
	volatile int32_t t59 = 48666794;

	t59 = ((x3437>>x3438)<(x3439|x3440));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3581 = 659U;
	int16_t x3582 = 0;
	int8_t x3583 = -1;
	int16_t x3584 = -1;
	int32_t t60 = 37834319;

	t60 = ((x3581>>x3582)<(x3583|x3584));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3641 = UINT64_MAX;
	uint8_t x3642 = 16U;
	int16_t x3643 = -46;
	static int16_t x3644 = INT16_MIN;
	int32_t t61 = 518059524;

	t61 = ((x3641>>x3642)<(x3643|x3644));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3673 = INT16_MAX;
	uint8_t x3674 = 1U;
	static volatile uint32_t x3675 = 24769U;
	int32_t x3676 = INT32_MIN;
	static volatile int32_t t62 = -235565695;

	t62 = ((x3673>>x3674)<(x3675|x3676));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x3698 = 1U;
	uint16_t x3700 = 3930U;

	t63 = ((x3697>>x3698)<(x3699|x3700));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3801 = INT8_MAX;
	volatile uint64_t x3802 = 13LLU;
	int64_t x3803 = -115306LL;
	volatile int64_t x3804 = INT64_MIN;
	volatile int32_t t64 = -874761009;

	t64 = ((x3801>>x3802)<(x3803|x3804));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x3825 = 29722563490539LL;
	int8_t x3827 = INT8_MIN;
	volatile int8_t x3828 = -15;
	int32_t t65 = -9;

	t65 = ((x3825>>x3826)<(x3827|x3828));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3885 = 19351955736154LL;
	int8_t x3886 = 1;
	static uint8_t x3887 = 14U;
	int16_t x3888 = -201;
	int32_t t66 = -16669776;

	t66 = ((x3885>>x3886)<(x3887|x3888));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4069 = 60;
	volatile int8_t x4071 = 1;
	uint32_t x4072 = 664174634U;
	volatile int32_t t67 = 348155281;

	t67 = ((x4069>>x4070)<(x4071|x4072));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4085 = 1U;
	static volatile int16_t x4086 = 0;
	uint32_t x4087 = 0U;
	int16_t x4088 = INT16_MIN;
	int32_t t68 = 48905646;

	t68 = ((x4085>>x4086)<(x4087|x4088));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x4145 = INT64_MAX;
	uint64_t x4147 = 52755107466769399LLU;
	int16_t x4148 = INT16_MAX;
	volatile int32_t t69 = -221533;

	t69 = ((x4145>>x4146)<(x4147|x4148));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4154 = 0U;
	int32_t x4156 = INT32_MIN;
	volatile int32_t t70 = -1196036;

	t70 = ((x4153>>x4154)<(x4155|x4156));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4169 = INT64_MAX;
	int8_t x4170 = 0;
	uint8_t x4171 = UINT8_MAX;
	volatile int64_t x4172 = INT64_MIN;
	volatile int32_t t71 = 538809060;

	t71 = ((x4169>>x4170)<(x4171|x4172));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4225 = 9U;
	uint8_t x4226 = 6U;
	volatile int8_t x4227 = -1;
	uint32_t x4228 = 40561322U;

	t72 = ((x4225>>x4226)<(x4227|x4228));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4274 = 0LL;
	static int8_t x4275 = INT8_MIN;
	volatile int64_t x4276 = -14920941LL;
	static int32_t t73 = -911924726;

	t73 = ((x4273>>x4274)<(x4275|x4276));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x4293 = INT8_MAX;
	int16_t x4295 = -1;
	volatile int32_t t74 = -238651;

	t74 = ((x4293>>x4294)<(x4295|x4296));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4373 = INT8_MAX;
	int8_t x4376 = -1;
	static volatile int32_t t75 = 402350;

	t75 = ((x4373>>x4374)<(x4375|x4376));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4401 = INT32_MAX;
	static volatile uint8_t x4402 = 3U;
	volatile int32_t t76 = -225048;

	t76 = ((x4401>>x4402)<(x4403|x4404));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x4425 = UINT16_MAX;
	uint16_t x4426 = 10U;
	int8_t x4427 = INT8_MIN;
	volatile int32_t x4428 = INT32_MIN;
	static int32_t t77 = 200277;

	t77 = ((x4425>>x4426)<(x4427|x4428));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4493 = UINT32_MAX;
	volatile int8_t x4494 = 6;
	static int64_t x4495 = INT64_MAX;
	uint8_t x4496 = UINT8_MAX;
	volatile int32_t t78 = -22675;

	t78 = ((x4493>>x4494)<(x4495|x4496));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4553 = INT32_MAX;
	int8_t x4554 = 0;
	int32_t x4555 = 831279222;
	int16_t x4556 = INT16_MIN;
	static volatile int32_t t79 = 466405053;

	t79 = ((x4553>>x4554)<(x4555|x4556));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4585 = INT32_MAX;
	int8_t x4586 = 0;
	static int16_t x4588 = INT16_MAX;

	t80 = ((x4585>>x4586)<(x4587|x4588));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4598 = 3;
	volatile int16_t x4599 = INT16_MAX;
	int8_t x4600 = INT8_MAX;
	volatile int32_t t81 = 117;

	t81 = ((x4597>>x4598)<(x4599|x4600));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4641 = UINT32_MAX;
	int8_t x4642 = 1;
	volatile int32_t x4643 = -665409604;
	int16_t x4644 = -1;

	t82 = ((x4641>>x4642)<(x4643|x4644));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4649 = 0;
	int16_t x4651 = INT16_MIN;
	int32_t t83 = -15;

	t83 = ((x4649>>x4650)<(x4651|x4652));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4661 = 8;
	uint16_t x4662 = 1U;
	int64_t x4664 = -61388419LL;
	int32_t t84 = -9;

	t84 = ((x4661>>x4662)<(x4663|x4664));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x4673 = 8;
	int32_t x4675 = -43;
	int16_t x4676 = -1;
	volatile int32_t t85 = -261146282;

	t85 = ((x4673>>x4674)<(x4675|x4676));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x4705 = 28U;
	int8_t x4706 = 2;
	static int16_t x4707 = 0;
	volatile int32_t t86 = 3772;

	t86 = ((x4705>>x4706)<(x4707|x4708));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4729 = 12077LLU;
	static int8_t x4731 = INT8_MAX;
	uint32_t x4732 = 1463U;
	volatile int32_t t87 = -59159;

	t87 = ((x4729>>x4730)<(x4731|x4732));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4737 = 0;
	uint16_t x4738 = 3U;
	uint64_t x4739 = 1785021LLU;
	int64_t x4740 = -377LL;
	volatile int32_t t88 = -7997005;

	t88 = ((x4737>>x4738)<(x4739|x4740));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4825 = UINT32_MAX;
	int32_t x4827 = INT32_MIN;
	uint32_t x4828 = UINT32_MAX;

	t89 = ((x4825>>x4826)<(x4827|x4828));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4937 = 5;
	uint8_t x4938 = 15U;
	int64_t x4939 = INT64_MAX;
	int8_t x4940 = -1;
	int32_t t90 = -168545260;

	t90 = ((x4937>>x4938)<(x4939|x4940));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5097 = 17;
	uint8_t x5098 = 0U;
	uint8_t x5099 = 1U;
	uint32_t x5100 = UINT32_MAX;

	t91 = ((x5097>>x5098)<(x5099|x5100));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x5205 = 397;
	uint32_t x5207 = 595076U;
	uint64_t x5208 = 1220008432LLU;
	static int32_t t92 = 463853;

	t92 = ((x5205>>x5206)<(x5207|x5208));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5245 = UINT8_MAX;
	uint8_t x5246 = 0U;
	volatile int8_t x5247 = -1;
	int64_t x5248 = -1LL;
	int32_t t93 = 305871797;

	t93 = ((x5245>>x5246)<(x5247|x5248));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5289 = 11;
	uint16_t x5290 = 7U;
	volatile int16_t x5292 = 126;
	static int32_t t94 = 1133220;

	t94 = ((x5289>>x5290)<(x5291|x5292));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5321 = UINT16_MAX;
	int16_t x5322 = 0;
	static uint64_t x5323 = 8918982997927LLU;
	uint16_t x5324 = 1U;
	int32_t t95 = -3415144;

	t95 = ((x5321>>x5322)<(x5323|x5324));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5377 = UINT64_MAX;
	uint8_t x5378 = 6U;
	int64_t x5379 = INT64_MIN;
	static int8_t x5380 = INT8_MAX;
	static volatile int32_t t96 = -53;

	t96 = ((x5377>>x5378)<(x5379|x5380));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x5401 = 15774857LLU;
	uint8_t x5402 = 2U;
	int64_t x5403 = INT64_MIN;
	int64_t x5404 = 39770425LL;
	volatile int32_t t97 = 6721705;

	t97 = ((x5401>>x5402)<(x5403|x5404));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x5513 = UINT64_MAX;
	uint16_t x5514 = 0U;
	volatile int64_t x5516 = INT64_MIN;

	t98 = ((x5513>>x5514)<(x5515|x5516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x5681 = 582U;
	int8_t x5683 = 5;
	volatile int32_t x5684 = -1;
	volatile int32_t t99 = -3;

	t99 = ((x5681>>x5682)<(x5683|x5684));

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

