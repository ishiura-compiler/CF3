#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x18 = 7337LLU;
uint16_t x50 = 2U;
uint8_t x51 = 3U;
int16_t x52 = INT16_MIN;
volatile int64_t x221 = -296689443494LL;
uint16_t x734 = 1U;
int64_t x845 = 84295498038917LL;
static uint16_t x846 = 806U;
static int32_t x848 = -1;
uint32_t x886 = 125569226U;
uint8_t x887 = 0U;
int32_t t9 = -10040797;
static uint64_t x914 = UINT64_MAX;
int64_t x928 = -32707674LL;
static uint16_t x930 = 3U;
int32_t x932 = -36551;
uint8_t x967 = 2U;
volatile int32_t t13 = 237945;
static uint8_t x979 = 0U;
uint8_t x1127 = 3U;
uint16_t x1147 = 3U;
static int16_t x1148 = INT16_MIN;
int8_t x1201 = 34;
uint8_t x1203 = 8U;
static int32_t t17 = -6299477;
static int64_t x1488 = INT64_MIN;
uint16_t x1521 = UINT16_MAX;
uint8_t x1539 = 1U;
int32_t t21 = 5821;
int64_t x1616 = INT64_MIN;
static volatile int32_t t24 = 178861;
uint32_t x2128 = 785643U;
int16_t x2243 = 1;
uint8_t x2455 = 3U;
uint64_t x2550 = 3739616643662327LLU;
uint8_t x2551 = 14U;
int16_t x2581 = INT16_MIN;
uint16_t x2582 = 402U;
int32_t t35 = -2033615;
static uint32_t x2642 = 854989U;
int32_t t37 = 1564;
uint16_t x2669 = 112U;
uint64_t x2771 = 3LLU;
uint32_t x2778 = 44062907U;
volatile uint16_t x2859 = 2U;
static uint64_t x2860 = 5729075043837469390LLU;
volatile int32_t t42 = 0;
int8_t x2871 = 14;
uint8_t x2874 = 27U;
uint64_t x2875 = 1LLU;
volatile int32_t t44 = -655993;
uint8_t x2942 = UINT8_MAX;
int32_t t45 = -11007;
uint8_t x3127 = 17U;
uint64_t x3271 = 8LLU;
int32_t x3356 = -47;
volatile int16_t x3549 = -1;
static volatile uint16_t x3551 = 13U;
int32_t t56 = 229989287;
uint8_t x3707 = 0U;
volatile int32_t t58 = -2276;
volatile int32_t t60 = -1600;
volatile int8_t x4171 = 1;
uint16_t x4275 = 2U;
int64_t x4329 = -1LL;
int32_t t67 = 84;
static volatile int32_t t68 = 4749;
int64_t x4546 = 1548628244293185116LL;
int16_t x4548 = INT16_MIN;
volatile int8_t x4575 = 1;
int32_t x4685 = INT32_MIN;
int16_t x4687 = 0;
static int32_t x4688 = INT32_MAX;
volatile uint8_t x4819 = 20U;
int64_t x4820 = -59330582LL;
static uint64_t x4836 = 550319796101681034LLU;
int16_t x4865 = -1;
uint32_t x4866 = 45231441U;
uint16_t x4868 = 45U;
uint32_t x4904 = 13313U;
uint8_t x4907 = 0U;
static uint8_t x5095 = 36U;
uint8_t x5303 = 0U;
volatile int8_t x5304 = 1;
uint16_t x5313 = 14764U;
static int64_t x5314 = 0LL;
int32_t x5316 = -1;
static volatile uint16_t x5540 = 118U;
uint16_t x5655 = 1U;
int8_t x5697 = INT8_MIN;
int32_t t90 = 158462138;
uint8_t x5770 = 27U;
static int32_t x5869 = INT32_MIN;
static volatile uint8_t x5871 = 24U;
volatile int32_t t93 = -423873284;
int8_t x6123 = 8;
uint8_t x6124 = UINT8_MAX;


void f0(void) {
	int32_t x1 = -304;
	int64_t x2 = 3146401190328299LL;
	int8_t x3 = 4;
	int32_t x4 = -1;
	volatile int32_t t0 = 1;

	t0 = (x1<=((x2<<x3)%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = 49699218LL;
	static uint8_t x19 = 5U;
	volatile int16_t x20 = INT16_MIN;
	int32_t t1 = -18;

	t1 = (x17<=((x18<<x19)%x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x49 = -1LL;
	int32_t t2 = -179;

	t2 = (x49<=((x50<<x51)%x52));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x101 = INT16_MIN;
	static uint16_t x102 = 69U;
	int8_t x103 = 0;
	int16_t x104 = -1;
	volatile int32_t t3 = 3988089;

	t3 = (x101<=((x102<<x103)%x104));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x222 = UINT32_MAX;
	uint8_t x223 = 3U;
	int32_t x224 = INT32_MIN;
	int32_t t4 = 234414595;

	t4 = (x221<=((x222<<x223)%x224));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x321 = INT8_MIN;
	volatile uint32_t x322 = UINT32_MAX;
	volatile uint8_t x323 = 14U;
	uint16_t x324 = UINT16_MAX;
	static int32_t t5 = 1;

	t5 = (x321<=((x322<<x323)%x324));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x433 = UINT32_MAX;
	uint64_t x434 = UINT64_MAX;
	int8_t x435 = 5;
	int8_t x436 = -1;
	volatile int32_t t6 = -133;

	t6 = (x433<=((x434<<x435)%x436));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x733 = INT8_MIN;
	static int8_t x735 = 1;
	volatile int8_t x736 = 1;
	int32_t t7 = -11751365;

	t7 = (x733<=((x734<<x735)%x736));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x847 = 11U;
	int32_t t8 = 3454824;

	t8 = (x845<=((x846<<x847)%x848));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x885 = INT64_MAX;
	uint64_t x888 = 5378925LLU;

	t9 = (x885<=((x886<<x887)%x888));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x913 = INT32_MIN;
	uint16_t x915 = 34U;
	uint8_t x916 = UINT8_MAX;
	volatile int32_t t10 = 4157;

	t10 = (x913<=((x914<<x915)%x916));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x925 = -12;
	static volatile uint16_t x926 = 893U;
	uint8_t x927 = 3U;
	static int32_t t11 = -1934;

	t11 = (x925<=((x926<<x927)%x928));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x929 = INT16_MIN;
	volatile uint32_t x931 = 6U;
	volatile int32_t t12 = -463;

	t12 = (x929<=((x930<<x931)%x932));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x965 = INT16_MIN;
	int32_t x966 = 128334;
	volatile int64_t x968 = INT64_MAX;

	t13 = (x965<=((x966<<x967)%x968));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x977 = 27484LLU;
	int32_t x978 = INT32_MAX;
	int64_t x980 = -82LL;
	static int32_t t14 = -50;

	t14 = (x977<=((x978<<x979)%x980));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x1125 = INT64_MIN;
	uint64_t x1126 = UINT64_MAX;
	volatile int64_t x1128 = INT64_MIN;
	static int32_t t15 = -6310;

	t15 = (x1125<=((x1126<<x1127)%x1128));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1145 = INT64_MIN;
	static volatile int16_t x1146 = INT16_MAX;
	volatile int32_t t16 = -922875;

	t16 = (x1145<=((x1146<<x1147)%x1148));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x1202 = 692;
	volatile int8_t x1204 = -1;

	t17 = (x1201<=((x1202<<x1203)%x1204));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x1485 = 0U;
	int8_t x1486 = 0;
	int8_t x1487 = 1;
	volatile int32_t t18 = -1938;

	t18 = (x1485<=((x1486<<x1487)%x1488));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1522 = 5U;
	static volatile int8_t x1523 = 4;
	static int8_t x1524 = INT8_MIN;
	int32_t t19 = -2957;

	t19 = (x1521<=((x1522<<x1523)%x1524));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1537 = INT64_MIN;
	uint8_t x1538 = 1U;
	static uint8_t x1540 = UINT8_MAX;
	volatile int32_t t20 = 8636963;

	t20 = (x1537<=((x1538<<x1539)%x1540));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1565 = -1386918;
	volatile uint8_t x1566 = 13U;
	int8_t x1567 = 20;
	int16_t x1568 = INT16_MIN;

	t21 = (x1565<=((x1566<<x1567)%x1568));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1581 = UINT64_MAX;
	static uint16_t x1582 = 11U;
	uint8_t x1583 = 18U;
	uint8_t x1584 = 42U;
	int32_t t22 = -17485016;

	t22 = (x1581<=((x1582<<x1583)%x1584));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1613 = INT32_MIN;
	uint16_t x1614 = UINT16_MAX;
	uint8_t x1615 = 14U;
	volatile int32_t t23 = -130451;

	t23 = (x1613<=((x1614<<x1615)%x1616));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1885 = UINT16_MAX;
	int16_t x1886 = 146;
	static volatile int8_t x1887 = 21;
	static volatile uint32_t x1888 = 1289584531U;

	t24 = (x1885<=((x1886<<x1887)%x1888));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1893 = -1;
	uint16_t x1894 = 62U;
	int8_t x1895 = 9;
	static uint16_t x1896 = 4U;
	int32_t t25 = -2481;

	t25 = (x1893<=((x1894<<x1895)%x1896));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x1897 = 1U;
	static int8_t x1898 = 26;
	volatile uint32_t x1899 = 19U;
	volatile uint32_t x1900 = 2213208U;
	static volatile int32_t t26 = 10;

	t26 = (x1897<=((x1898<<x1899)%x1900));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1993 = INT16_MAX;
	uint32_t x1994 = UINT32_MAX;
	uint16_t x1995 = 4U;
	uint16_t x1996 = UINT16_MAX;
	static int32_t t27 = 2500;

	t27 = (x1993<=((x1994<<x1995)%x1996));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x2125 = INT64_MAX;
	int16_t x2126 = 6769;
	uint8_t x2127 = 6U;
	volatile int32_t t28 = -31;

	t28 = (x2125<=((x2126<<x2127)%x2128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x2169 = -1;
	static uint32_t x2170 = 2745285U;
	uint8_t x2171 = 6U;
	uint64_t x2172 = UINT64_MAX;
	static int32_t t29 = -76260466;

	t29 = (x2169<=((x2170<<x2171)%x2172));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2241 = 58U;
	static uint64_t x2242 = 130821001820269LLU;
	int64_t x2244 = INT64_MAX;
	int32_t t30 = 1783096;

	t30 = (x2241<=((x2242<<x2243)%x2244));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2325 = 0;
	uint8_t x2326 = UINT8_MAX;
	uint8_t x2327 = 0U;
	uint32_t x2328 = UINT32_MAX;
	int32_t t31 = 8966359;

	t31 = (x2325<=((x2326<<x2327)%x2328));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2341 = INT8_MAX;
	uint8_t x2342 = UINT8_MAX;
	int8_t x2343 = 0;
	static uint8_t x2344 = 50U;
	static volatile int32_t t32 = -62220172;

	t32 = (x2341<=((x2342<<x2343)%x2344));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2453 = INT64_MAX;
	static volatile uint64_t x2454 = 37560074523486926LLU;
	uint32_t x2456 = 351090U;
	int32_t t33 = -678350;

	t33 = (x2453<=((x2454<<x2455)%x2456));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2549 = -1;
	int8_t x2552 = -1;
	int32_t t34 = 13923036;

	t34 = (x2549<=((x2550<<x2551)%x2552));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x2583 = 1;
	static volatile int8_t x2584 = INT8_MIN;

	t35 = (x2581<=((x2582<<x2583)%x2584));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x2585 = INT32_MAX;
	static uint8_t x2586 = 48U;
	volatile int8_t x2587 = 1;
	int64_t x2588 = 82LL;
	volatile int32_t t36 = -2657351;

	t36 = (x2585<=((x2586<<x2587)%x2588));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2641 = -1;
	static int16_t x2643 = 2;
	volatile int64_t x2644 = INT64_MIN;

	t37 = (x2641<=((x2642<<x2643)%x2644));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2670 = UINT32_MAX;
	uint8_t x2671 = 0U;
	int8_t x2672 = -1;
	int32_t t38 = -9307;

	t38 = (x2669<=((x2670<<x2671)%x2672));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2745 = UINT16_MAX;
	uint32_t x2746 = UINT32_MAX;
	int64_t x2747 = 31LL;
	int8_t x2748 = -1;
	volatile int32_t t39 = 11506;

	t39 = (x2745<=((x2746<<x2747)%x2748));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2769 = -1LL;
	uint64_t x2770 = 100998278LLU;
	volatile int16_t x2772 = INT16_MAX;
	static int32_t t40 = -762;

	t40 = (x2769<=((x2770<<x2771)%x2772));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x2777 = -1LL;
	int8_t x2779 = 26;
	volatile int64_t x2780 = -1LL;
	volatile int32_t t41 = 60;

	t41 = (x2777<=((x2778<<x2779)%x2780));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2857 = 406968439;
	uint32_t x2858 = 16U;

	t42 = (x2857<=((x2858<<x2859)%x2860));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x2869 = 981762204149714721LL;
	uint8_t x2870 = 15U;
	uint32_t x2872 = UINT32_MAX;
	int32_t t43 = -2352809;

	t43 = (x2869<=((x2870<<x2871)%x2872));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2873 = UINT32_MAX;
	static uint64_t x2876 = 825738732705LLU;

	t44 = (x2873<=((x2874<<x2875)%x2876));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2941 = 38;
	volatile int8_t x2943 = 2;
	uint8_t x2944 = UINT8_MAX;

	t45 = (x2941<=((x2942<<x2943)%x2944));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x3069 = UINT16_MAX;
	static int8_t x3070 = 3;
	uint8_t x3071 = 2U;
	int16_t x3072 = -1;
	volatile int32_t t46 = 3979190;

	t46 = (x3069<=((x3070<<x3071)%x3072));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x3125 = 15720480U;
	uint32_t x3126 = UINT32_MAX;
	uint32_t x3128 = 449U;
	volatile int32_t t47 = 4130527;

	t47 = (x3125<=((x3126<<x3127)%x3128));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3193 = 3U;
	int64_t x3194 = INT64_MAX;
	int8_t x3195 = 0;
	static int64_t x3196 = -387116825738472LL;
	volatile int32_t t48 = 3647093;

	t48 = (x3193<=((x3194<<x3195)%x3196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x3229 = -39;
	uint64_t x3230 = 569501119185LLU;
	uint32_t x3231 = 6U;
	static uint16_t x3232 = UINT16_MAX;
	int32_t t49 = -106788972;

	t49 = (x3229<=((x3230<<x3231)%x3232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3245 = 3U;
	volatile uint32_t x3246 = UINT32_MAX;
	static uint8_t x3247 = 11U;
	int16_t x3248 = -1;
	int32_t t50 = -13395;

	t50 = (x3245<=((x3246<<x3247)%x3248));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3269 = 82;
	uint16_t x3270 = 17399U;
	static int64_t x3272 = 639848991775048LL;
	int32_t t51 = 1;

	t51 = (x3269<=((x3270<<x3271)%x3272));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3353 = INT16_MAX;
	volatile uint16_t x3354 = 11614U;
	uint8_t x3355 = 6U;
	static volatile int32_t t52 = 119804530;

	t52 = (x3353<=((x3354<<x3355)%x3356));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3373 = INT16_MAX;
	volatile uint64_t x3374 = 11LLU;
	static volatile int16_t x3375 = 0;
	int8_t x3376 = INT8_MAX;
	int32_t t53 = -62453;

	t53 = (x3373<=((x3374<<x3375)%x3376));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3481 = -1;
	static volatile uint32_t x3482 = UINT32_MAX;
	volatile int8_t x3483 = 1;
	int64_t x3484 = INT64_MAX;
	int32_t t54 = 0;

	t54 = (x3481<=((x3482<<x3483)%x3484));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3550 = 353753430LLU;
	int32_t x3552 = INT32_MIN;
	int32_t t55 = 955334588;

	t55 = (x3549<=((x3550<<x3551)%x3552));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3649 = INT16_MIN;
	uint64_t x3650 = 32517762LLU;
	int16_t x3651 = 14;
	static int32_t x3652 = 41922;

	t56 = (x3649<=((x3650<<x3651)%x3652));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x3705 = -32509LL;
	static volatile uint8_t x3706 = UINT8_MAX;
	uint16_t x3708 = 2U;
	volatile int32_t t57 = 4;

	t57 = (x3705<=((x3706<<x3707)%x3708));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3741 = -92;
	int16_t x3742 = 41;
	uint16_t x3743 = 3U;
	uint16_t x3744 = 1U;

	t58 = (x3741<=((x3742<<x3743)%x3744));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3817 = 135U;
	static volatile uint32_t x3818 = 858U;
	int8_t x3819 = 1;
	int32_t x3820 = INT32_MIN;
	volatile int32_t t59 = -138;

	t59 = (x3817<=((x3818<<x3819)%x3820));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x3885 = INT32_MAX;
	static uint16_t x3886 = 58U;
	uint16_t x3887 = 0U;
	int32_t x3888 = 444864;

	t60 = (x3885<=((x3886<<x3887)%x3888));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3909 = INT16_MAX;
	int8_t x3910 = 3;
	uint8_t x3911 = 2U;
	static int8_t x3912 = INT8_MIN;
	volatile int32_t t61 = 11152;

	t61 = (x3909<=((x3910<<x3911)%x3912));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3989 = INT8_MIN;
	int16_t x3990 = INT16_MAX;
	int8_t x3991 = 7;
	static uint8_t x3992 = 62U;
	volatile int32_t t62 = 1;

	t62 = (x3989<=((x3990<<x3991)%x3992));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x4093 = INT64_MIN;
	volatile uint32_t x4094 = UINT32_MAX;
	int16_t x4095 = 28;
	int64_t x4096 = -3091207188383LL;
	volatile int32_t t63 = -213226;

	t63 = (x4093<=((x4094<<x4095)%x4096));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4169 = INT16_MIN;
	uint64_t x4170 = UINT64_MAX;
	int16_t x4172 = -2504;
	int32_t t64 = 88;

	t64 = (x4169<=((x4170<<x4171)%x4172));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x4273 = 1361191031388291LL;
	static uint64_t x4274 = UINT64_MAX;
	volatile int16_t x4276 = INT16_MIN;
	static volatile int32_t t65 = 842817;

	t65 = (x4273<=((x4274<<x4275)%x4276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4330 = 4U;
	uint16_t x4331 = 0U;
	int32_t x4332 = 2558;
	volatile int32_t t66 = 3081501;

	t66 = (x4329<=((x4330<<x4331)%x4332));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4333 = 23U;
	uint64_t x4334 = 16434170533493LLU;
	static int8_t x4335 = 31;
	uint8_t x4336 = 1U;

	t67 = (x4333<=((x4334<<x4335)%x4336));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4393 = INT64_MIN;
	int8_t x4394 = INT8_MAX;
	volatile int32_t x4395 = 7;
	int32_t x4396 = -1;

	t68 = (x4393<=((x4394<<x4395)%x4396));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4545 = -1LL;
	uint16_t x4547 = 2U;
	volatile int32_t t69 = 8;

	t69 = (x4545<=((x4546<<x4547)%x4548));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x4573 = INT64_MAX;
	static uint16_t x4574 = UINT16_MAX;
	volatile uint8_t x4576 = 1U;
	int32_t t70 = 2647;

	t70 = (x4573<=((x4574<<x4575)%x4576));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x4686 = UINT8_MAX;
	volatile int32_t t71 = -1;

	t71 = (x4685<=((x4686<<x4687)%x4688));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4717 = 0;
	int16_t x4718 = 70;
	static uint16_t x4719 = 14U;
	uint64_t x4720 = UINT64_MAX;
	int32_t t72 = 8734448;

	t72 = (x4717<=((x4718<<x4719)%x4720));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4817 = UINT64_MAX;
	uint64_t x4818 = 255778137603848LLU;
	int32_t t73 = 40;

	t73 = (x4817<=((x4818<<x4819)%x4820));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x4833 = -2586;
	int16_t x4834 = 1;
	uint8_t x4835 = 2U;
	int32_t t74 = -104727342;

	t74 = (x4833<=((x4834<<x4835)%x4836));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4867 = 11LLU;
	int32_t t75 = 13466;

	t75 = (x4865<=((x4866<<x4867)%x4868));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x4901 = UINT16_MAX;
	static int32_t x4902 = 6934983;
	uint8_t x4903 = 2U;
	int32_t t76 = 666569;

	t76 = (x4901<=((x4902<<x4903)%x4904));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x4905 = UINT32_MAX;
	uint64_t x4906 = 30741871124098LLU;
	int16_t x4908 = 255;
	static int32_t t77 = 3774141;

	t77 = (x4905<=((x4906<<x4907)%x4908));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4993 = 6900LL;
	static int16_t x4994 = 681;
	uint8_t x4995 = 2U;
	uint32_t x4996 = 16431255U;
	volatile int32_t t78 = -6784822;

	t78 = (x4993<=((x4994<<x4995)%x4996));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5045 = 12581U;
	static uint64_t x5046 = 2018LLU;
	int8_t x5047 = 1;
	volatile int16_t x5048 = 5;
	int32_t t79 = -86;

	t79 = (x5045<=((x5046<<x5047)%x5048));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5069 = 2004496711817720LLU;
	volatile uint64_t x5070 = 241333140LLU;
	uint8_t x5071 = 3U;
	int32_t x5072 = -2791;
	volatile int32_t t80 = 224166;

	t80 = (x5069<=((x5070<<x5071)%x5072));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5089 = UINT64_MAX;
	uint16_t x5090 = 3452U;
	int8_t x5091 = 11;
	static uint64_t x5092 = 3982696070099270LLU;
	static volatile int32_t t81 = 1983;

	t81 = (x5089<=((x5090<<x5091)%x5092));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5093 = INT64_MIN;
	uint64_t x5094 = 547137691297LLU;
	uint64_t x5096 = 3575LLU;
	volatile int32_t t82 = 20;

	t82 = (x5093<=((x5094<<x5095)%x5096));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x5245 = -1;
	static uint32_t x5246 = 3550U;
	int32_t x5247 = 8;
	volatile int32_t x5248 = INT32_MAX;
	int32_t t83 = 446;

	t83 = (x5245<=((x5246<<x5247)%x5248));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5301 = 0;
	static volatile uint32_t x5302 = 2866U;
	volatile int32_t t84 = -17;

	t84 = (x5301<=((x5302<<x5303)%x5304));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5315 = 0U;
	int32_t t85 = 49993;

	t85 = (x5313<=((x5314<<x5315)%x5316));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5537 = INT8_MAX;
	int8_t x5538 = 0;
	int64_t x5539 = 20LL;
	static volatile int32_t t86 = 682;

	t86 = (x5537<=((x5538<<x5539)%x5540));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5629 = UINT64_MAX;
	volatile uint8_t x5630 = UINT8_MAX;
	uint8_t x5631 = 10U;
	int64_t x5632 = 6644778LL;
	int32_t t87 = 96839593;

	t87 = (x5629<=((x5630<<x5631)%x5632));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x5653 = INT8_MIN;
	int8_t x5654 = INT8_MAX;
	int16_t x5656 = INT16_MIN;
	int32_t t88 = 26;

	t88 = (x5653<=((x5654<<x5655)%x5656));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5661 = 53917LL;
	int8_t x5662 = INT8_MAX;
	uint32_t x5663 = 7U;
	int32_t x5664 = INT32_MIN;
	volatile int32_t t89 = 2170;

	t89 = (x5661<=((x5662<<x5663)%x5664));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5698 = 3348918258208LLU;
	static int8_t x5699 = 10;
	int32_t x5700 = -6416;

	t90 = (x5697<=((x5698<<x5699)%x5700));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5713 = -1;
	int8_t x5714 = 59;
	volatile uint16_t x5715 = 3U;
	uint8_t x5716 = 2U;
	volatile int32_t t91 = -347508964;

	t91 = (x5713<=((x5714<<x5715)%x5716));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x5769 = UINT8_MAX;
	uint8_t x5771 = 3U;
	int32_t x5772 = INT32_MIN;
	int32_t t92 = -749;

	t92 = (x5769<=((x5770<<x5771)%x5772));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5870 = 64944LLU;
	uint64_t x5872 = 5LLU;

	t93 = (x5869<=((x5870<<x5871)%x5872));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6121 = INT64_MIN;
	uint16_t x6122 = UINT16_MAX;
	int32_t t94 = 61375368;

	t94 = (x6121<=((x6122<<x6123)%x6124));

	if (t94 != 1) { NG(); } else { ; }
	
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


    return 0;
}

