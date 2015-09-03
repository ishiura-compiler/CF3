#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x16 = INT16_MAX;
int8_t x111 = 5;
int16_t x234 = INT16_MAX;
static int64_t t3 = 6089437000086LL;
int8_t x462 = 3;
uint32_t x507 = 13U;
uint64_t t6 = 16LLU;
volatile uint8_t x968 = 31U;
int16_t x1018 = 1;
volatile uint8_t x1079 = 2U;
volatile uint16_t x1351 = 17U;
uint16_t x1465 = 1U;
uint32_t x1466 = 10431908U;
volatile int32_t x1468 = -22;
volatile int16_t x1469 = -1;
uint64_t x1742 = 52LLU;
volatile int32_t x1766 = 31;
uint32_t x1768 = UINT32_MAX;
volatile int64_t t21 = 725160703LL;
static int64_t x1845 = INT64_MIN;
int16_t x1868 = 704;
static int8_t x2052 = 1;
static uint32_t x2093 = UINT32_MAX;
int32_t x2309 = -1;
int16_t x2312 = -38;
int32_t t28 = 29374;
int64_t x2322 = 81021757LL;
uint16_t x2386 = UINT16_MAX;
int64_t x2388 = -1LL;
volatile int64_t t31 = -2641754LL;
int8_t x2397 = -1;
int8_t x2489 = INT8_MAX;
int8_t x2491 = 0;
uint16_t x2492 = 72U;
volatile uint64_t t34 = 151923941027088243LLU;
static volatile int8_t x2658 = 38;
int16_t x2660 = -1;
uint64_t t39 = 672661286323104LLU;
static int32_t x2740 = INT32_MAX;
static uint32_t x2820 = UINT32_MAX;
static uint16_t x2971 = 10U;
static uint64_t t47 = 1729301538310991LLU;
int16_t x3491 = 4;
uint32_t x3655 = 2U;
uint8_t x3760 = 44U;
uint32_t t51 = 668308U;
volatile uint32_t x3941 = UINT32_MAX;
uint16_t x3943 = 24U;
volatile int64_t t54 = -1964088152LL;
int32_t x4148 = INT32_MAX;
uint64_t t55 = 15333329349604862LLU;
uint32_t x4338 = 21318U;
volatile uint16_t x4340 = UINT16_MAX;
static uint8_t x4350 = 8U;
int8_t x4360 = INT8_MIN;
volatile uint64_t t58 = 703047349LLU;
static uint8_t x4397 = 1U;
uint8_t x4399 = 35U;
static volatile int16_t x4416 = INT16_MIN;
static volatile int64_t t60 = -387443434801806823LL;
int8_t x4419 = 9;
volatile int8_t x4535 = 0;
int64_t x4682 = 23859LL;
int16_t x4683 = 1;
volatile uint64_t t67 = 24153843LLU;
volatile int32_t x4976 = INT32_MIN;
volatile uint64_t t69 = 687170999LLU;
uint8_t x5199 = 3U;
int32_t x5200 = INT32_MIN;
static int16_t x5218 = 4;
int8_t x5219 = 1;
int8_t x5220 = -1;
uint16_t x5226 = 14487U;
int32_t x5293 = INT32_MIN;
volatile int32_t x5306 = 1;
int32_t x5333 = 1083;
volatile uint16_t x5361 = UINT16_MAX;
static volatile int8_t x5471 = 0;
static volatile uint32_t t80 = 0U;
uint32_t x5553 = 35177142U;
uint32_t t81 = 1754U;
volatile int8_t x5634 = 11;
volatile uint64_t x5653 = UINT64_MAX;
volatile uint32_t x5654 = 219311U;
int8_t x5656 = INT8_MIN;
uint64_t x5758 = UINT64_MAX;
static uint32_t x5776 = 54U;
int64_t x5817 = 152256779LL;
uint64_t x5820 = 864065529LLU;
static uint64_t t90 = 4227972289LLU;
int16_t x5855 = 0;
int8_t x5971 = 10;
static int16_t x5972 = -100;
uint32_t x6015 = 0U;
volatile int64_t x6070 = INT64_MAX;
volatile int32_t x6331 = 1;


void f0(void) {
	int16_t x9 = -798;
	static int16_t x10 = INT16_MAX;
	uint8_t x11 = 1U;
	uint16_t x12 = UINT16_MAX;
	int32_t t0 = 1819;

	t0 = ((x9^(x10>>x11))*x12);

	if (t0 != -1021494045) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x13 = 12U;
	static uint64_t x14 = 8288125522463LLU;
	uint16_t x15 = 13U;
	volatile uint64_t t1 = 1044743730834LLU;

	t1 = ((x13^(x14>>x15))*x16);

	if (t1 != 33151490206156LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x109 = UINT64_MAX;
	uint64_t x110 = UINT64_MAX;
	int8_t x112 = -42;
	uint64_t t2 = 2653LLU;

	t2 = ((x109^(x110>>x111))*x112);

	if (t2 != 5764607523034234880LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x233 = INT8_MIN;
	static uint8_t x235 = 7U;
	int64_t x236 = 695LL;

	t3 = ((x233^(x234>>x235))*x236);

	if (t3 != -89655LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x349 = INT16_MIN;
	uint32_t x350 = UINT32_MAX;
	static volatile uint8_t x351 = 0U;
	int16_t x352 = INT16_MAX;
	volatile uint32_t t4 = 56871968U;

	t4 = ((x349^(x350>>x351))*x352);

	if (t4 != 1073676289U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x461 = INT8_MAX;
	uint8_t x463 = 1U;
	static int8_t x464 = 0;
	static int32_t t5 = -74;

	t5 = ((x461^(x462>>x463))*x464);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x505 = 5846375151589367LLU;
	uint64_t x506 = 92652505654LLU;
	uint16_t x508 = 591U;

	t6 = ((x505^(x506>>x507))*x508);

	if (t6 != 3455207718788673489LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x753 = 121792124LLU;
	static int64_t x754 = 16735459654LL;
	static volatile uint16_t x755 = 26U;
	int32_t x756 = INT32_MIN;
	uint64_t t7 = 23783948LLU;

	t7 = ((x753^(x754>>x755))*x756);

	if (t7 != 18185197459637010432LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x809 = 4U;
	uint64_t x810 = 607582436LLU;
	uint8_t x811 = 37U;
	int8_t x812 = INT8_MIN;
	uint64_t t8 = 2060855064LLU;

	t8 = ((x809^(x810>>x811))*x812);

	if (t8 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x957 = INT8_MIN;
	static uint32_t x958 = UINT32_MAX;
	uint16_t x959 = 3U;
	uint8_t x960 = UINT8_MAX;
	volatile uint32_t t9 = 55U;

	t9 = ((x957^(x958>>x959))*x960);

	if (t9 != 536903297U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x965 = INT8_MIN;
	int8_t x966 = INT8_MAX;
	int8_t x967 = 19;
	volatile int32_t t10 = 981;

	t10 = ((x965^(x966>>x967))*x968);

	if (t10 != -3968) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x1017 = UINT16_MAX;
	uint8_t x1019 = 7U;
	int16_t x1020 = -1;
	volatile int32_t t11 = -202;

	t11 = ((x1017^(x1018>>x1019))*x1020);

	if (t11 != -65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1077 = UINT32_MAX;
	uint8_t x1078 = UINT8_MAX;
	int16_t x1080 = 5867;
	static uint32_t t12 = 550525350U;

	t12 = ((x1077^(x1078>>x1079))*x1080);

	if (t12 != 4294591808U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1085 = UINT16_MAX;
	int8_t x1086 = 3;
	volatile uint8_t x1087 = 0U;
	static int8_t x1088 = 1;
	volatile int32_t t13 = -186;

	t13 = ((x1085^(x1086>>x1087))*x1088);

	if (t13 != 65532) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1109 = 37U;
	uint32_t x1110 = 228221707U;
	uint8_t x1111 = 6U;
	static int16_t x1112 = 838;
	uint32_t t14 = 43478U;

	t14 = ((x1109^(x1110>>x1111))*x1112);

	if (t14 != 2988302134U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x1349 = INT64_MIN;
	uint64_t x1350 = 94387281861789LLU;
	static int16_t x1352 = -137;
	uint64_t t15 = 1572LLU;

	t15 = ((x1349^(x1350>>x1351))*x1352);

	if (t15 != 9223371938198635564LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1467 = 0;
	uint32_t t16 = 489414U;

	t16 = ((x1465^(x1466>>x1467))*x1468);

	if (t16 != 4065465298U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1470 = 13;
	int16_t x1471 = 16;
	int32_t x1472 = 9344218;
	static int32_t t17 = 4647;

	t17 = ((x1469^(x1470>>x1471))*x1472);

	if (t17 != -9344218) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1621 = INT32_MAX;
	static uint64_t x1622 = 3LLU;
	volatile uint64_t x1623 = 3LLU;
	static int16_t x1624 = -1;
	static volatile uint64_t t18 = 377177952630967LLU;

	t18 = ((x1621^(x1622>>x1623))*x1624);

	if (t18 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1693 = UINT16_MAX;
	int16_t x1694 = 9732;
	int8_t x1695 = 6;
	int8_t x1696 = -1;
	int32_t t19 = 5773;

	t19 = ((x1693^(x1694>>x1695))*x1696);

	if (t19 != -65383) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1741 = INT8_MAX;
	uint8_t x1743 = 3U;
	uint64_t x1744 = UINT64_MAX;
	static volatile uint64_t t20 = 447LLU;

	t20 = ((x1741^(x1742>>x1743))*x1744);

	if (t20 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1765 = -1LL;
	volatile uint64_t x1767 = 3LLU;

	t21 = ((x1765^(x1766>>x1767))*x1768);

	if (t21 != -17179869180LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1846 = 221616LLU;
	uint16_t x1847 = 31U;
	int8_t x1848 = -1;
	static uint64_t t22 = 45390891705632934LLU;

	t22 = ((x1845^(x1846>>x1847))*x1848);

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1865 = UINT64_MAX;
	volatile int16_t x1866 = INT16_MAX;
	uint16_t x1867 = 14U;
	static uint64_t t23 = 1151749117733394703LLU;

	t23 = ((x1865^(x1866>>x1867))*x1868);

	if (t23 != 18446744073709550208LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x2009 = INT64_MAX;
	volatile uint64_t x2010 = 102LLU;
	static int16_t x2011 = 50;
	static uint8_t x2012 = 96U;
	static volatile uint64_t t24 = 990127LLU;

	t24 = ((x2009^(x2010>>x2011))*x2012);

	if (t24 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2049 = -1;
	uint8_t x2050 = UINT8_MAX;
	static uint8_t x2051 = 0U;
	int32_t t25 = 15;

	t25 = ((x2049^(x2050>>x2051))*x2052);

	if (t25 != -256) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2094 = INT32_MAX;
	uint8_t x2095 = 25U;
	volatile uint16_t x2096 = 3947U;
	uint32_t t26 = 1U;

	t26 = ((x2093^(x2094>>x2095))*x2096);

	if (t26 != 4294714688U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x2177 = INT64_MAX;
	uint32_t x2178 = UINT32_MAX;
	static uint16_t x2179 = 6U;
	int16_t x2180 = -1;
	volatile int64_t t27 = 18408LL;

	t27 = ((x2177^(x2178>>x2179))*x2180);

	if (t27 != -9223372036787666944LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x2310 = INT8_MAX;
	uint8_t x2311 = 9U;

	t28 = ((x2309^(x2310>>x2311))*x2312);

	if (t28 != 38) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x2321 = UINT16_MAX;
	static uint8_t x2323 = 0U;
	int16_t x2324 = INT16_MAX;
	volatile int64_t t29 = 4643704827797470LL;

	t29 = ((x2321^(x2322>>x2323))*x2324);

	if (t29 != 2655725046590LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2337 = 1LLU;
	int32_t x2338 = 143575688;
	uint16_t x2339 = 0U;
	static int8_t x2340 = INT8_MAX;
	volatile uint64_t t30 = 289369LLU;

	t30 = ((x2337^(x2338>>x2339))*x2340);

	if (t30 != 18234112503LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2385 = -35LL;
	uint8_t x2387 = 15U;

	t31 = ((x2385^(x2386>>x2387))*x2388);

	if (t31 != 36LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2398 = INT16_MAX;
	int16_t x2399 = 0;
	volatile int8_t x2400 = -28;
	volatile int32_t t32 = 315;

	t32 = ((x2397^(x2398>>x2399))*x2400);

	if (t32 != 917504) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x2490 = INT16_MAX;
	volatile int32_t t33 = -9464;

	t33 = ((x2489^(x2490>>x2491))*x2492);

	if (t33 != 2350080) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x2541 = 6978U;
	int64_t x2542 = 2204642520433LL;
	uint8_t x2543 = 6U;
	volatile uint64_t x2544 = UINT64_MAX;

	t34 = ((x2541^(x2542>>x2543))*x2544);

	if (t34 != 18446744039262017545LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2585 = 1;
	int64_t x2586 = INT64_MAX;
	int32_t x2587 = 9;
	int32_t x2588 = 29;
	volatile int64_t t35 = -12958950077540230LL;

	t35 = ((x2585^(x2586>>x2587))*x2588);

	if (t35 != 522417556774977478LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2641 = -1668;
	uint8_t x2642 = 36U;
	static int32_t x2643 = 2;
	int64_t x2644 = 46256LL;
	static int64_t t36 = 6988068527595588LL;

	t36 = ((x2641^(x2642>>x2643))*x2644);

	if (t36 != -77478800LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2653 = -1;
	uint64_t x2654 = 7184990869807483141LLU;
	volatile uint32_t x2655 = 5U;
	volatile int8_t x2656 = -1;
	uint64_t t37 = 880518270149547LLU;

	t37 = ((x2653^(x2654>>x2655))*x2656);

	if (t37 != 224530964681483849LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2657 = INT16_MIN;
	uint8_t x2659 = 0U;
	int32_t t38 = 972631;

	t38 = ((x2657^(x2658>>x2659))*x2660);

	if (t38 != 32730) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x2673 = 9U;
	uint16_t x2674 = UINT16_MAX;
	uint8_t x2675 = 0U;
	volatile uint64_t x2676 = 35699LLU;

	t39 = ((x2673^(x2674>>x2675))*x2676);

	if (t39 != 2339212674LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2737 = UINT8_MAX;
	volatile uint32_t x2738 = UINT32_MAX;
	uint16_t x2739 = 1U;
	uint32_t t40 = 11257999U;

	t40 = ((x2737^(x2738>>x2739))*x2740);

	if (t40 != 2147483904U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2817 = 13489339LLU;
	uint64_t x2818 = 2507623LLU;
	static volatile int64_t x2819 = 1LL;
	uint64_t t41 = 684LLU;

	t41 = ((x2817^(x2818>>x2819))*x2820);

	if (t41 != 62756859523697400LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2969 = -3882463LL;
	int32_t x2970 = 1358387;
	uint64_t x2972 = 4LLU;
	uint64_t t42 = 275145277714984134LLU;

	t42 = ((x2969^(x2970>>x2971))*x2972);

	if (t42 != 18446744073694026812LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2977 = 518615279LLU;
	uint32_t x2978 = 1824617905U;
	uint8_t x2979 = 1U;
	volatile uint16_t x2980 = 5U;
	volatile uint64_t t43 = 557083850388LLU;

	t43 = ((x2977^(x2978>>x2979))*x2980);

	if (t43 != 3400594195LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x3029 = -988210510LL;
	uint64_t x3030 = 10417720888797LLU;
	uint32_t x3031 = 0U;
	int16_t x3032 = INT16_MAX;
	volatile uint64_t t44 = 154LLU;

	t44 = ((x3029^(x3030>>x3031))*x3032);

	if (t44 != 18105372393456461969LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3153 = INT16_MIN;
	uint32_t x3154 = UINT32_MAX;
	int8_t x3155 = 1;
	int8_t x3156 = 7;
	static uint32_t t45 = 23U;

	t45 = ((x3153^(x3154>>x3155))*x3156);

	if (t45 != 2147713017U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3201 = INT8_MIN;
	uint16_t x3202 = 7163U;
	int8_t x3203 = 2;
	static int16_t x3204 = INT16_MIN;
	int32_t t46 = 300;

	t46 = ((x3201^(x3202>>x3203))*x3204);

	if (t46 != 54591488) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x3393 = UINT64_MAX;
	uint32_t x3394 = UINT32_MAX;
	int16_t x3395 = 6;
	uint16_t x3396 = 1U;

	t47 = ((x3393^(x3394>>x3395))*x3396);

	if (t47 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3489 = INT8_MAX;
	uint64_t x3490 = 3965398346408125LLU;
	uint8_t x3492 = 57U;
	volatile uint64_t t48 = 223875037844554764LLU;

	t48 = ((x3489^(x3490>>x3491))*x3492);

	if (t48 != 14126731609084884LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3653 = -4076LL;
	uint32_t x3654 = 18697410U;
	volatile int8_t x3656 = INT8_MIN;
	int64_t t49 = -27502035LL;

	t49 = ((x3653^(x3654>>x3655))*x3656);

	if (t49 != 598633984LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3757 = UINT16_MAX;
	volatile int64_t x3758 = 1972645125LL;
	static uint16_t x3759 = 5U;
	volatile int64_t t50 = 7016587LL;

	t50 = ((x3757^(x3758>>x3759))*x3760);

	if (t50 != 2711634420LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3821 = 73384753U;
	static int32_t x3822 = 45915;
	uint8_t x3823 = 0U;
	int8_t x3824 = -2;

	t51 = ((x3821^(x3822>>x3823))*x3824);

	if (t51 != 4148240172U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x3942 = 1U;
	volatile int16_t x3944 = -1;
	volatile uint32_t t52 = 72404U;

	t52 = ((x3941^(x3942>>x3943))*x3944);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x4017 = 12;
	static uint16_t x4018 = UINT16_MAX;
	int16_t x4019 = 2;
	uint16_t x4020 = 9698U;
	int32_t t53 = 38315;

	t53 = ((x4017^(x4018>>x4019))*x4020);

	if (t53 != 158765958) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x4093 = INT64_MIN;
	uint8_t x4094 = 21U;
	int8_t x4095 = 1;
	int16_t x4096 = -1;

	t54 = ((x4093^(x4094>>x4095))*x4096);

	if (t54 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4145 = INT16_MIN;
	uint64_t x4146 = UINT64_MAX;
	uint8_t x4147 = 1U;

	t55 = ((x4145^(x4146>>x4147))*x4148);

	if (t55 != 9223442403451437057LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x4337 = INT32_MIN;
	int8_t x4339 = 12;
	uint32_t t56 = 33243U;

	t56 = ((x4337^(x4338>>x4339))*x4340);

	if (t56 != 2147811323U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4349 = -1;
	volatile uint16_t x4351 = 24U;
	int32_t x4352 = -432;
	static int32_t t57 = 235987;

	t57 = ((x4349^(x4350>>x4351))*x4352);

	if (t57 != 432) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x4357 = 4274479519739450922LLU;
	int32_t x4358 = 997;
	volatile uint32_t x4359 = 28U;

	t58 = ((x4357^(x4358>>x4359))*x4360);

	if (t58 != 6268943684636830464LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4398 = 979250883344088LLU;
	uint64_t x4400 = 102422004LLU;
	static uint64_t t59 = 1LLU;

	t59 = ((x4397^(x4398>>x4399))*x4400);

	if (t59 != 2918822269992LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x4413 = -1;
	volatile int64_t x4414 = 179059022527266LL;
	uint8_t x4415 = 2U;

	t60 = ((x4413^(x4414>>x4415))*x4416);

	if (t60 != 1466851512543379456LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4417 = -1;
	uint16_t x4418 = 26328U;
	static int16_t x4420 = INT16_MIN;
	static volatile int32_t t61 = -8558;

	t61 = ((x4417^(x4418>>x4419))*x4420);

	if (t61 != 1703936) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4477 = INT16_MAX;
	uint64_t x4478 = 131862654161962LLU;
	uint16_t x4479 = 0U;
	int16_t x4480 = 1;
	uint64_t t62 = 26LLU;

	t62 = ((x4477^(x4478>>x4479))*x4480);

	if (t62 != 131862654184405LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4525 = -47;
	uint64_t x4526 = 3120LLU;
	int8_t x4527 = 0;
	uint32_t x4528 = 6673U;
	volatile uint64_t t63 = 882447LLU;

	t63 = ((x4525^(x4526>>x4527))*x4528);

	if (t63 != 18446744073688845297LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4533 = 34303LLU;
	uint16_t x4534 = 570U;
	volatile uint8_t x4536 = UINT8_MAX;
	volatile uint64_t t64 = 23117LLU;

	t64 = ((x4533^(x4534>>x4535))*x4536);

	if (t64 != 8863035LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x4681 = INT8_MAX;
	volatile uint8_t x4684 = 13U;
	volatile int64_t t65 = 4147761817LL;

	t65 = ((x4681^(x4682>>x4683))*x4684);

	if (t65 != 156078LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4761 = -758099527;
	static volatile int16_t x4762 = INT16_MAX;
	int8_t x4763 = 8;
	uint32_t x4764 = UINT32_MAX;
	volatile uint32_t t66 = 26193U;

	t66 = ((x4761^(x4762>>x4763))*x4764);

	if (t66 != 758099514U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4885 = -1;
	int8_t x4886 = INT8_MAX;
	uint8_t x4887 = 14U;
	uint64_t x4888 = 24646LLU;

	t67 = ((x4885^(x4886>>x4887))*x4888);

	if (t67 != 18446744073709526970LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x4961 = 1U;
	volatile int32_t x4962 = 122548;
	uint16_t x4963 = 4U;
	int8_t x4964 = -1;
	int32_t t68 = -159736699;

	t68 = ((x4961^(x4962>>x4963))*x4964);

	if (t68 != -7658) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4973 = INT32_MIN;
	uint64_t x4974 = UINT64_MAX;
	uint8_t x4975 = 57U;

	t69 = ((x4973^(x4974>>x4975))*x4976);

	if (t69 != 4611685745696964608LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x5109 = INT32_MAX;
	uint32_t x5110 = 48362815U;
	uint16_t x5111 = 1U;
	static uint32_t x5112 = 10U;
	volatile uint32_t t70 = 879U;

	t70 = ((x5109^(x5110>>x5111))*x5112);

	if (t70 != 4053153216U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x5197 = UINT8_MAX;
	uint64_t x5198 = UINT64_MAX;
	uint64_t t71 = 343709351370733221LLU;

	t71 = ((x5197^(x5198>>x5199))*x5200);

	if (t71 != 549755813888LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5217 = 101;
	int32_t t72 = 70;

	t72 = ((x5217^(x5218>>x5219))*x5220);

	if (t72 != -103) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x5225 = INT16_MIN;
	int8_t x5227 = 0;
	static volatile int16_t x5228 = -1;
	int32_t t73 = -1;

	t73 = ((x5225^(x5226>>x5227))*x5228);

	if (t73 != 18281) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5233 = -1;
	static uint8_t x5234 = 13U;
	uint16_t x5235 = 14U;
	volatile int16_t x5236 = 2447;
	volatile int32_t t74 = -74196026;

	t74 = ((x5233^(x5234>>x5235))*x5236);

	if (t74 != -2447) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5294 = 69983810619243LL;
	uint32_t x5295 = 43U;
	int16_t x5296 = -2;
	volatile int64_t t75 = 80058237LL;

	t75 = ((x5293^(x5294>>x5295))*x5296);

	if (t75 != 4294967282LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5305 = 50U;
	volatile uint8_t x5307 = 8U;
	int16_t x5308 = -1;
	static volatile int32_t t76 = 374;

	t76 = ((x5305^(x5306>>x5307))*x5308);

	if (t76 != -50) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5334 = 16065U;
	uint16_t x5335 = 7U;
	int64_t x5336 = -1LL;
	static int64_t t77 = 3LL;

	t77 = ((x5333^(x5334>>x5335))*x5336);

	if (t77 != -1094LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5362 = 835LL;
	volatile uint32_t x5363 = 5U;
	static int64_t x5364 = -181700182005LL;
	volatile int64_t t78 = 251928393900LL;

	t78 = ((x5361^(x5362>>x5363))*x5364);

	if (t78 != -11902997222965545LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x5377 = UINT32_MAX;
	uint8_t x5378 = 3U;
	uint8_t x5379 = 1U;
	static volatile int32_t x5380 = INT32_MAX;
	static volatile uint32_t t79 = 55U;

	t79 = ((x5377^(x5378>>x5379))*x5380);

	if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5469 = UINT32_MAX;
	static uint16_t x5470 = 380U;
	int16_t x5472 = INT16_MIN;

	t80 = ((x5469^(x5470>>x5471))*x5472);

	if (t80 != 12484608U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5554 = 0;
	int16_t x5555 = 1;
	int16_t x5556 = -1;

	t81 = ((x5553^(x5554>>x5555))*x5556);

	if (t81 != 4259790154U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x5577 = INT64_MIN;
	uint64_t x5578 = UINT64_MAX;
	int16_t x5579 = 4;
	int32_t x5580 = -59;
	static uint64_t t82 = 6154977750817083554LLU;

	t82 = ((x5577^(x5578>>x5579))*x5580);

	if (t82 != 14987979559889010747LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5625 = 26U;
	int16_t x5626 = 12;
	static int8_t x5627 = 1;
	uint16_t x5628 = 726U;
	int32_t t83 = 357587498;

	t83 = ((x5625^(x5626>>x5627))*x5628);

	if (t83 != 20328) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x5633 = INT16_MAX;
	int8_t x5635 = 1;
	volatile int64_t x5636 = -1LL;
	volatile int64_t t84 = -907465593421LL;

	t84 = ((x5633^(x5634>>x5635))*x5636);

	if (t84 != -32762LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5655 = 1;
	uint64_t t85 = 4102069LLU;

	t85 = ((x5653^(x5654>>x5655))*x5656);

	if (t85 != 14035968LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5757 = UINT32_MAX;
	uint8_t x5759 = 56U;
	int64_t x5760 = -1LL;
	uint64_t t86 = 61781052062275703LLU;

	t86 = ((x5757^(x5758>>x5759))*x5760);

	if (t86 != 18446744069414584576LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x5765 = 20U;
	uint8_t x5766 = 51U;
	uint16_t x5767 = 24U;
	uint16_t x5768 = UINT16_MAX;
	volatile int32_t t87 = 1022;

	t87 = ((x5765^(x5766>>x5767))*x5768);

	if (t87 != 1310700) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5773 = INT8_MIN;
	uint64_t x5774 = 119688776984333LLU;
	static int8_t x5775 = 0;
	static volatile uint64_t t88 = 2LLU;

	t88 = ((x5773^(x5774>>x5775))*x5776);

	if (t88 != 18440280879752392126LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5805 = 1LLU;
	static uint16_t x5806 = 2U;
	uint64_t x5807 = 1LLU;
	int8_t x5808 = -1;
	uint64_t t89 = 57702608567839030LLU;

	t89 = ((x5805^(x5806>>x5807))*x5808);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x5818 = 3;
	int8_t x5819 = 5;

	t90 = ((x5817^(x5818>>x5819))*x5820);

	if (t90 != 131559834290471091LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5853 = -23;
	uint64_t x5854 = 26126143575LLU;
	static int64_t x5856 = INT64_MIN;
	static volatile uint64_t t91 = 25078LLU;

	t91 = ((x5853^(x5854>>x5855))*x5856);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5857 = INT32_MAX;
	int64_t x5858 = 4604919LL;
	uint16_t x5859 = 2U;
	int32_t x5860 = INT32_MIN;
	volatile int64_t t92 = -65116912639LL;

	t92 = ((x5857^(x5858>>x5859))*x5860);

	if (t92 != -4609213770827300864LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5969 = 9U;
	static volatile int32_t x5970 = 1692842;
	volatile int32_t t93 = -183;

	t93 = ((x5969^(x5970>>x5971))*x5972);

	if (t93 != -166000) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5989 = INT16_MAX;
	uint64_t x5990 = 251216507LLU;
	uint8_t x5991 = 60U;
	int64_t x5992 = INT64_MIN;
	volatile uint64_t t94 = 432644979238340LLU;

	t94 = ((x5989^(x5990>>x5991))*x5992);

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x6013 = 152008439834521LLU;
	uint32_t x6014 = 183U;
	volatile int32_t x6016 = INT32_MIN;
	static volatile uint64_t t95 = 1497935LLU;

	t95 = ((x6013^(x6014>>x6015))*x6016);

	if (t95 != 16390970042042286080LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x6069 = 0LL;
	uint16_t x6071 = 63U;
	static uint32_t x6072 = UINT32_MAX;
	int64_t t96 = -1040290306430177849LL;

	t96 = ((x6069^(x6070>>x6071))*x6072);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x6077 = 3U;
	volatile uint32_t x6078 = 26U;
	uint8_t x6079 = 0U;
	int64_t x6080 = -116LL;
	volatile int64_t t97 = 6029161LL;

	t97 = ((x6077^(x6078>>x6079))*x6080);

	if (t97 != -2900LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6133 = UINT32_MAX;
	static int32_t x6134 = INT32_MAX;
	uint16_t x6135 = 22U;
	int8_t x6136 = -1;
	uint32_t t98 = 175U;

	t98 = ((x6133^(x6134>>x6135))*x6136);

	if (t98 != 512U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x6329 = 229U;
	volatile uint32_t x6330 = 211U;
	static volatile int8_t x6332 = INT8_MIN;
	uint32_t t99 = 106U;

	t99 = ((x6329^(x6330>>x6331))*x6332);

	if (t99 != 4294949376U) { NG(); } else { ; }
	
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

