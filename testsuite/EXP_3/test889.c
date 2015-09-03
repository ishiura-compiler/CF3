#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x81 = INT16_MIN;
uint32_t x91 = UINT32_MAX;
static volatile int16_t x170 = INT16_MIN;
int64_t t2 = 3774LL;
static volatile int16_t x181 = INT16_MIN;
uint64_t x190 = 306LLU;
static uint16_t x199 = 14U;
uint16_t x464 = 1U;
uint64_t x486 = UINT64_MAX;
static volatile uint32_t x487 = UINT32_MAX;
uint64_t t10 = 69738032443LLU;
int8_t x737 = INT8_MIN;
uint8_t x739 = UINT8_MAX;
static volatile int8_t x740 = 2;
volatile uint64_t t15 = 2LLU;
static uint8_t x824 = 29U;
volatile int64_t t16 = -690273642857068LL;
static uint16_t x939 = UINT16_MAX;
int64_t x967 = INT64_MAX;
int64_t x1500 = 0LL;
uint64_t t24 = 4701147887077LLU;
static uint64_t x1546 = 935623963350LLU;
int64_t x1570 = 6141LL;
int8_t x1624 = 23;
static uint8_t x1724 = 0U;
volatile int8_t x1758 = INT8_MIN;
uint8_t x1775 = UINT8_MAX;
int8_t x1813 = -2;
volatile int64_t t36 = -15736650737955LL;
volatile int64_t t38 = -7629LL;
uint32_t x2179 = 498351U;
uint8_t x2180 = 12U;
volatile int16_t x2245 = INT16_MIN;
uint32_t t40 = 233873290U;
int64_t t42 = 1605LL;
int32_t x2581 = 2;
int8_t x2583 = INT8_MAX;
static int8_t x2622 = 18;
volatile uint8_t x2802 = UINT8_MAX;
volatile uint64_t t49 = 22515845434158397LLU;
int32_t x2857 = 0;
volatile uint32_t t51 = 382U;
uint8_t x3124 = 2U;
int8_t x3202 = INT8_MAX;
volatile int64_t t59 = -9249934958295LL;
volatile uint64_t x3508 = 1LLU;
uint32_t x3630 = 63923328U;
uint16_t x3711 = 3U;
uint32_t x3737 = 3807U;
uint64_t x3738 = UINT64_MAX;
volatile uint8_t x3749 = 4U;
int8_t x3750 = -1;
int32_t x3770 = -102279;
uint16_t x3774 = UINT16_MAX;
uint8_t x3775 = 17U;
static uint64_t x3905 = 1LLU;
uint64_t t70 = 3658843607007LLU;
int32_t x4022 = INT32_MIN;
volatile uint64_t t72 = 259034238248356LLU;
static int8_t x4165 = INT8_MIN;
int8_t x4273 = -1;
int8_t x4284 = 1;
static uint8_t x4355 = 11U;
static uint16_t x4375 = 12653U;
uint64_t x4376 = 17LLU;
int16_t x4480 = 0;
int64_t x4549 = -127977LL;
volatile int8_t x4551 = 1;
volatile uint64_t t85 = 1LLU;
uint8_t x4844 = 4U;
volatile int64_t t87 = 1756LL;
static uint32_t x4858 = 51395U;
uint32_t x5010 = UINT32_MAX;
int16_t x5012 = 12;
volatile uint32_t t93 = 2270U;
int64_t t94 = -140968565523020LL;
uint16_t x5181 = UINT16_MAX;
uint64_t x5231 = 643044157LLU;
uint16_t x5232 = 35U;
volatile int16_t x5338 = -1;
int16_t x5340 = 0;
volatile uint64_t x5358 = 6857565LLU;


void f0(void) {
	volatile uint8_t x82 = UINT8_MAX;
	volatile int8_t x83 = 1;
	static uint16_t x84 = 0U;
	int32_t t0 = -2;

	t0 = ((x81/x82)%(x83<<x84));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x89 = INT64_MIN;
	static uint32_t x90 = 77739U;
	static uint16_t x92 = 24U;
	volatile int64_t t1 = -36958174859355LL;

	t1 = ((x89/x90)%(x91<<x92));

	if (t1 != -2597793025LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x169 = -1LL;
	static volatile uint16_t x171 = UINT16_MAX;
	int8_t x172 = 15;

	t2 = ((x169/x170)%(x171<<x172));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x182 = -1;
	uint32_t x183 = 4448U;
	static int8_t x184 = 0;
	uint32_t t3 = 251967653U;

	t3 = ((x181/x182)%(x183<<x184));

	if (t3 != 1632U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x189 = INT16_MIN;
	static volatile uint64_t x191 = 23286LLU;
	static int8_t x192 = 5;
	volatile uint64_t t4 = 1790313781952196LLU;

	t4 = ((x189/x190)%(x191<<x192));

	if (t4 != 603691LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x193 = INT16_MIN;
	uint64_t x194 = 709027985781LLU;
	volatile uint64_t x195 = UINT64_MAX;
	static uint8_t x196 = 7U;
	volatile uint64_t t5 = 24707467858873032LLU;

	t5 = ((x193/x194)%(x195<<x196));

	if (t5 != 26016947LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x197 = -1;
	int8_t x198 = INT8_MAX;
	static volatile uint16_t x200 = 21U;
	int32_t t6 = 1;

	t6 = ((x197/x198)%(x199<<x200));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x341 = -4;
	int64_t x342 = -1LL;
	uint64_t x343 = UINT64_MAX;
	uint8_t x344 = 1U;
	volatile uint64_t t7 = 261475136LLU;

	t7 = ((x341/x342)%(x343<<x344));

	if (t7 != 4LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x365 = INT32_MAX;
	uint32_t x366 = 643U;
	static uint32_t x367 = UINT32_MAX;
	volatile int8_t x368 = 0;
	volatile uint32_t t8 = 868965779U;

	t8 = ((x365/x366)%(x367<<x368));

	if (t8 != 3339787U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x461 = INT32_MIN;
	int64_t x462 = INT64_MIN;
	uint16_t x463 = UINT16_MAX;
	static int64_t t9 = -406379LL;

	t9 = ((x461/x462)%(x463<<x464));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x485 = UINT32_MAX;
	int16_t x488 = 1;

	t10 = ((x485/x486)%(x487<<x488));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x581 = 36U;
	uint64_t x582 = 125278111839LLU;
	uint64_t x583 = UINT64_MAX;
	uint8_t x584 = 0U;
	volatile uint64_t t11 = 2LLU;

	t11 = ((x581/x582)%(x583<<x584));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x593 = INT16_MIN;
	int16_t x594 = INT16_MIN;
	uint8_t x595 = 45U;
	volatile uint32_t x596 = 3U;
	static volatile int32_t t12 = -2838;

	t12 = ((x593/x594)%(x595<<x596));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x629 = INT8_MIN;
	int8_t x630 = INT8_MIN;
	int32_t x631 = 26806;
	volatile int32_t x632 = 0;
	int32_t t13 = -2;

	t13 = ((x629/x630)%(x631<<x632));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x738 = INT8_MAX;
	volatile int32_t t14 = -6182;

	t14 = ((x737/x738)%(x739<<x740));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x813 = 1U;
	int32_t x814 = INT32_MIN;
	volatile uint64_t x815 = UINT64_MAX;
	volatile int8_t x816 = 7;

	t15 = ((x813/x814)%(x815<<x816));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x821 = -1;
	int64_t x822 = INT64_MAX;
	uint32_t x823 = 1U;

	t16 = ((x821/x822)%(x823<<x824));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x885 = 3272U;
	static uint64_t x886 = 288034LLU;
	int8_t x887 = INT8_MAX;
	volatile uint8_t x888 = 3U;
	uint64_t t17 = 165207066464706LLU;

	t17 = ((x885/x886)%(x887<<x888));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x937 = 2967274LLU;
	uint16_t x938 = 15632U;
	volatile uint16_t x940 = 0U;
	uint64_t t18 = 110192601699878LLU;

	t18 = ((x937/x938)%(x939<<x940));

	if (t18 != 189LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x965 = 75367364360951LLU;
	int64_t x966 = -1LL;
	int16_t x968 = 0;
	uint64_t t19 = 274011967166196026LLU;

	t19 = ((x965/x966)%(x967<<x968));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x985 = INT16_MIN;
	int8_t x986 = INT8_MIN;
	uint64_t x987 = 125715878LLU;
	static uint32_t x988 = 0U;
	volatile uint64_t t20 = 1683028927653017237LLU;

	t20 = ((x985/x986)%(x987<<x988));

	if (t20 != 256LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1065 = -1LL;
	volatile uint32_t x1066 = UINT32_MAX;
	int8_t x1067 = 1;
	volatile uint8_t x1068 = 12U;
	static int64_t t21 = -14LL;

	t21 = ((x1065/x1066)%(x1067<<x1068));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1273 = INT16_MAX;
	volatile int16_t x1274 = INT16_MIN;
	uint8_t x1275 = 49U;
	static uint8_t x1276 = 2U;
	volatile int32_t t22 = -269874;

	t22 = ((x1273/x1274)%(x1275<<x1276));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1357 = -1LL;
	volatile uint16_t x1358 = 2040U;
	volatile uint64_t x1359 = 16870LLU;
	volatile uint16_t x1360 = 55U;
	volatile uint64_t t23 = 13825LLU;

	t23 = ((x1357/x1358)%(x1359<<x1360));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1497 = 13268U;
	static uint16_t x1498 = UINT16_MAX;
	volatile uint64_t x1499 = 388207573039656LLU;

	t24 = ((x1497/x1498)%(x1499<<x1500));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1545 = INT16_MAX;
	int32_t x1547 = 73684525;
	uint32_t x1548 = 1U;
	uint64_t t25 = 54126635252855LLU;

	t25 = ((x1545/x1546)%(x1547<<x1548));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x1569 = INT64_MIN;
	int32_t x1571 = 165378;
	uint8_t x1572 = 0U;
	int64_t t26 = -1051982140878903LL;

	t26 = ((x1569/x1570)%(x1571<<x1572));

	if (t26 != -109809LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1621 = INT32_MIN;
	int64_t x1622 = INT64_MIN;
	uint64_t x1623 = 246260855230805626LLU;
	volatile uint64_t t27 = 718676422663997LLU;

	t27 = ((x1621/x1622)%(x1623<<x1624));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1721 = 2083338U;
	volatile int64_t x1722 = 2545882538691948009LL;
	int16_t x1723 = INT16_MAX;
	int64_t t28 = -12586501934181699LL;

	t28 = ((x1721/x1722)%(x1723<<x1724));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1745 = INT8_MAX;
	int16_t x1746 = 54;
	static uint64_t x1747 = UINT64_MAX;
	volatile int16_t x1748 = 29;
	uint64_t t29 = 75LLU;

	t29 = ((x1745/x1746)%(x1747<<x1748));

	if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1757 = INT32_MIN;
	static int64_t x1759 = 13976LL;
	static int16_t x1760 = 2;
	static int64_t t30 = -3913LL;

	t30 = ((x1757/x1758)%(x1759<<x1760));

	if (t30 != 6016LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1769 = 1;
	int16_t x1770 = INT16_MAX;
	uint16_t x1771 = 4713U;
	uint16_t x1772 = 5U;
	int32_t t31 = 883;

	t31 = ((x1769/x1770)%(x1771<<x1772));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1773 = INT64_MIN;
	uint8_t x1774 = 7U;
	uint16_t x1776 = 0U;
	volatile int64_t t32 = -460328992764757945LL;

	t32 = ((x1773/x1774)%(x1775<<x1776));

	if (t32 != -91LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1789 = UINT32_MAX;
	uint16_t x1790 = 50U;
	uint64_t x1791 = UINT64_MAX;
	static uint8_t x1792 = 3U;
	volatile uint64_t t33 = 6407280148LLU;

	t33 = ((x1789/x1790)%(x1791<<x1792));

	if (t33 != 85899345LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1814 = INT16_MIN;
	volatile uint32_t x1815 = 14646U;
	int32_t x1816 = 0;
	uint32_t t34 = 220054U;

	t34 = ((x1813/x1814)%(x1815<<x1816));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2013 = 8015;
	static int32_t x2014 = -1;
	static uint16_t x2015 = UINT16_MAX;
	volatile uint8_t x2016 = 3U;
	static int32_t t35 = 8;

	t35 = ((x2013/x2014)%(x2015<<x2016));

	if (t35 != -8015) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x2033 = UINT32_MAX;
	int64_t x2034 = -1LL;
	uint16_t x2035 = 679U;
	uint32_t x2036 = 1U;

	t36 = ((x2033/x2034)%(x2035<<x2036));

	if (t36 != -325LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2077 = 0;
	int8_t x2078 = INT8_MAX;
	volatile uint64_t x2079 = UINT64_MAX;
	uint32_t x2080 = 0U;
	uint64_t t37 = 161LLU;

	t37 = ((x2077/x2078)%(x2079<<x2080));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2169 = INT64_MAX;
	static int8_t x2170 = -1;
	volatile int8_t x2171 = INT8_MAX;
	uint8_t x2172 = 2U;

	t38 = ((x2169/x2170)%(x2171<<x2172));

	if (t38 != -127LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2177 = -1;
	int32_t x2178 = INT32_MAX;
	uint32_t t39 = 68949U;

	t39 = ((x2177/x2178)%(x2179<<x2180));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2246 = 699U;
	uint32_t x2247 = 1471142880U;
	volatile int8_t x2248 = 0;

	t40 = ((x2245/x2246)%(x2247<<x2248));

	if (t40 != 6144398U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2285 = INT16_MIN;
	volatile uint8_t x2286 = 23U;
	int32_t x2287 = 1731;
	uint16_t x2288 = 3U;
	int32_t t41 = 53;

	t41 = ((x2285/x2286)%(x2287<<x2288));

	if (t41 != -1424) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2313 = 1U;
	int64_t x2314 = -1782040661LL;
	uint8_t x2315 = 1U;
	uint8_t x2316 = 1U;

	t42 = ((x2313/x2314)%(x2315<<x2316));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2445 = -41160223;
	static uint64_t x2446 = UINT64_MAX;
	uint64_t x2447 = 68858LLU;
	volatile int32_t x2448 = 0;
	volatile uint64_t t43 = 225293373844LLU;

	t43 = ((x2445/x2446)%(x2447<<x2448));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x2561 = 3350U;
	int8_t x2562 = INT8_MIN;
	uint16_t x2563 = 226U;
	uint32_t x2564 = 11U;
	int32_t t44 = -7;

	t44 = ((x2561/x2562)%(x2563<<x2564));

	if (t44 != -26) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2582 = INT64_MIN;
	volatile uint8_t x2584 = 0U;
	int64_t t45 = 108346075LL;

	t45 = ((x2581/x2582)%(x2583<<x2584));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2621 = INT8_MIN;
	int16_t x2623 = INT16_MAX;
	uint16_t x2624 = 7U;
	volatile int32_t t46 = -1;

	t46 = ((x2621/x2622)%(x2623<<x2624));

	if (t46 != -7) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2753 = 1509U;
	static int16_t x2754 = 11798;
	int32_t x2755 = INT32_MAX;
	uint8_t x2756 = 0U;
	volatile uint32_t t47 = 14662U;

	t47 = ((x2753/x2754)%(x2755<<x2756));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x2801 = -1LL;
	static volatile uint64_t x2803 = UINT64_MAX;
	int16_t x2804 = 0;
	uint64_t t48 = 3409948LLU;

	t48 = ((x2801/x2802)%(x2803<<x2804));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2837 = INT16_MIN;
	uint8_t x2838 = UINT8_MAX;
	uint64_t x2839 = 11866488619870LLU;
	int64_t x2840 = 1LL;

	t49 = ((x2837/x2838)%(x2839<<x2840));

	if (t49 != 2718394759608LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2841 = UINT16_MAX;
	int32_t x2842 = -615033;
	int64_t x2843 = 40726128598268479LL;
	volatile int16_t x2844 = 1;
	int64_t t50 = 33LL;

	t50 = ((x2841/x2842)%(x2843<<x2844));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2858 = INT16_MIN;
	uint32_t x2859 = 794409787U;
	int16_t x2860 = 25;

	t51 = ((x2857/x2858)%(x2859<<x2860));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x2889 = UINT32_MAX;
	uint32_t x2890 = 52451987U;
	static int8_t x2891 = INT8_MAX;
	uint16_t x2892 = 1U;
	uint32_t t52 = 224U;

	t52 = ((x2889/x2890)%(x2891<<x2892));

	if (t52 != 81U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2937 = 38;
	volatile int64_t x2938 = INT64_MIN;
	uint64_t x2939 = UINT64_MAX;
	uint16_t x2940 = 27U;
	uint64_t t53 = 258224955726046LLU;

	t53 = ((x2937/x2938)%(x2939<<x2940));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2993 = INT16_MIN;
	static uint64_t x2994 = UINT64_MAX;
	uint64_t x2995 = 503LLU;
	uint16_t x2996 = 9U;
	static uint64_t t54 = 43036881927LLU;

	t54 = ((x2993/x2994)%(x2995<<x2996));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3121 = 0;
	int8_t x3122 = INT8_MAX;
	static uint8_t x3123 = UINT8_MAX;
	volatile int32_t t55 = -9160;

	t55 = ((x3121/x3122)%(x3123<<x3124));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3197 = 3686;
	int64_t x3198 = 42132637274481LL;
	volatile uint64_t x3199 = 2979989LLU;
	static int8_t x3200 = 0;
	uint64_t t56 = 2485LLU;

	t56 = ((x3197/x3198)%(x3199<<x3200));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3201 = INT8_MIN;
	uint64_t x3203 = UINT64_MAX;
	uint16_t x3204 = 12U;
	volatile uint64_t t57 = 32326982183904600LLU;

	t57 = ((x3201/x3202)%(x3203<<x3204));

	if (t57 != 4095LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x3217 = INT8_MAX;
	int32_t x3218 = 23182;
	volatile int8_t x3219 = INT8_MAX;
	uint8_t x3220 = 19U;
	volatile int32_t t58 = -378926;

	t58 = ((x3217/x3218)%(x3219<<x3220));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3433 = -26492800677914051LL;
	volatile int16_t x3434 = INT16_MAX;
	static uint32_t x3435 = UINT32_MAX;
	int64_t x3436 = 10LL;

	t59 = ((x3433/x3434)%(x3435<<x3436));

	if (t59 != -1067129398LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3505 = INT8_MIN;
	volatile int32_t x3506 = 86;
	int16_t x3507 = 6;
	volatile int32_t t60 = 717;

	t60 = ((x3505/x3506)%(x3507<<x3508));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3617 = UINT8_MAX;
	int32_t x3618 = INT32_MAX;
	uint8_t x3619 = UINT8_MAX;
	volatile uint8_t x3620 = 9U;
	volatile int32_t t61 = -4757901;

	t61 = ((x3617/x3618)%(x3619<<x3620));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3629 = INT16_MAX;
	volatile int8_t x3631 = INT8_MAX;
	volatile int16_t x3632 = 11;
	uint32_t t62 = 17U;

	t62 = ((x3629/x3630)%(x3631<<x3632));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3665 = INT32_MIN;
	int64_t x3666 = INT64_MAX;
	volatile uint32_t x3667 = 1U;
	uint8_t x3668 = 4U;
	volatile int64_t t63 = -29655319469282LL;

	t63 = ((x3665/x3666)%(x3667<<x3668));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x3709 = 11792;
	static int16_t x3710 = -4;
	uint32_t x3712 = 3U;
	static volatile int32_t t64 = -14957;

	t64 = ((x3709/x3710)%(x3711<<x3712));

	if (t64 != -20) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3739 = UINT32_MAX;
	volatile uint8_t x3740 = 3U;
	uint64_t t65 = 48860074532402LLU;

	t65 = ((x3737/x3738)%(x3739<<x3740));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x3751 = INT16_MAX;
	uint8_t x3752 = 2U;
	volatile int32_t t66 = 878387;

	t66 = ((x3749/x3750)%(x3751<<x3752));

	if (t66 != -4) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3769 = -1833;
	int8_t x3771 = 1;
	uint16_t x3772 = 9U;
	volatile int32_t t67 = 255;

	t67 = ((x3769/x3770)%(x3771<<x3772));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3773 = 8982;
	uint32_t x3776 = 14U;
	static volatile int32_t t68 = 1964875;

	t68 = ((x3773/x3774)%(x3775<<x3776));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x3849 = 15LL;
	static int32_t x3850 = INT32_MIN;
	uint32_t x3851 = UINT32_MAX;
	int8_t x3852 = 1;
	volatile int64_t t69 = -94788221809LL;

	t69 = ((x3849/x3850)%(x3851<<x3852));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x3906 = 15874329991173LL;
	static int8_t x3907 = INT8_MAX;
	static uint8_t x3908 = 12U;

	t70 = ((x3905/x3906)%(x3907<<x3908));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4021 = 798;
	int16_t x4023 = INT16_MAX;
	volatile uint16_t x4024 = 14U;
	int32_t t71 = 1;

	t71 = ((x4021/x4022)%(x4023<<x4024));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4113 = INT64_MIN;
	int32_t x4114 = INT32_MIN;
	static uint64_t x4115 = UINT64_MAX;
	int64_t x4116 = 1LL;

	t72 = ((x4113/x4114)%(x4115<<x4116));

	if (t72 != 4294967296LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4166 = INT64_MIN;
	int16_t x4167 = INT16_MAX;
	volatile int32_t x4168 = 1;
	int64_t t73 = -7066290LL;

	t73 = ((x4165/x4166)%(x4167<<x4168));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4193 = -428;
	int32_t x4194 = -1;
	uint32_t x4195 = 31U;
	int8_t x4196 = 10;
	uint32_t t74 = 72842083U;

	t74 = ((x4193/x4194)%(x4195<<x4196));

	if (t74 != 428U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4274 = -1;
	int16_t x4275 = 1302;
	int8_t x4276 = 1;
	int32_t t75 = 3368734;

	t75 = ((x4273/x4274)%(x4275<<x4276));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x4281 = 146389330634452LLU;
	static volatile int64_t x4282 = INT64_MIN;
	static uint16_t x4283 = UINT16_MAX;
	uint64_t t76 = 171587LLU;

	t76 = ((x4281/x4282)%(x4283<<x4284));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4305 = INT8_MAX;
	volatile int64_t x4306 = -121438LL;
	static int16_t x4307 = 587;
	volatile uint8_t x4308 = 15U;
	volatile int64_t t77 = 21790356234LL;

	t77 = ((x4305/x4306)%(x4307<<x4308));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4353 = INT8_MAX;
	uint16_t x4354 = UINT16_MAX;
	uint16_t x4356 = 19U;
	volatile int32_t t78 = -3186523;

	t78 = ((x4353/x4354)%(x4355<<x4356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x4373 = 0;
	int32_t x4374 = 1596;
	int32_t t79 = 9639201;

	t79 = ((x4373/x4374)%(x4375<<x4376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4421 = -1;
	int64_t x4422 = -1LL;
	uint16_t x4423 = 2137U;
	static uint8_t x4424 = 16U;
	int64_t t80 = 1248831597157824899LL;

	t80 = ((x4421/x4422)%(x4423<<x4424));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x4477 = -1;
	int8_t x4478 = -7;
	uint32_t x4479 = 122U;
	uint32_t t81 = 11496U;

	t81 = ((x4477/x4478)%(x4479<<x4480));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x4485 = INT8_MIN;
	volatile int16_t x4486 = -1;
	uint32_t x4487 = 12997933U;
	uint32_t x4488 = 1U;
	volatile uint32_t t82 = 27078218U;

	t82 = ((x4485/x4486)%(x4487<<x4488));

	if (t82 != 128U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4550 = UINT8_MAX;
	uint16_t x4552 = 1U;
	static int64_t t83 = -2048760LL;

	t83 = ((x4549/x4550)%(x4551<<x4552));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4653 = -1;
	volatile uint16_t x4654 = 84U;
	volatile uint32_t x4655 = UINT32_MAX;
	volatile uint8_t x4656 = 1U;
	uint32_t t84 = 9086838U;

	t84 = ((x4653/x4654)%(x4655<<x4656));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4805 = -285452;
	volatile int8_t x4806 = -1;
	static uint64_t x4807 = UINT64_MAX;
	int32_t x4808 = 24;

	t85 = ((x4805/x4806)%(x4807<<x4808));

	if (t85 != 285452LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4837 = UINT16_MAX;
	uint64_t x4838 = 60LLU;
	uint64_t x4839 = 401536LLU;
	uint16_t x4840 = 17U;
	static volatile uint64_t t86 = 11885LLU;

	t86 = ((x4837/x4838)%(x4839<<x4840));

	if (t86 != 1092LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4841 = 1LL;
	int16_t x4842 = 1;
	static volatile uint16_t x4843 = UINT16_MAX;

	t87 = ((x4841/x4842)%(x4843<<x4844));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x4857 = INT8_MIN;
	static uint64_t x4859 = 8221376053LLU;
	static int8_t x4860 = 26;
	uint64_t t88 = 562701853373LLU;

	t88 = ((x4857/x4858)%(x4859<<x4860));

	if (t88 != 83567LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x4885 = INT8_MIN;
	static volatile uint8_t x4886 = UINT8_MAX;
	uint64_t x4887 = UINT64_MAX;
	int8_t x4888 = 10;
	volatile uint64_t t89 = 3973347081915685154LLU;

	t89 = ((x4885/x4886)%(x4887<<x4888));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x4977 = -427732;
	int16_t x4978 = -36;
	volatile uint64_t x4979 = 31449730LLU;
	static int32_t x4980 = 1;
	uint64_t t90 = 0LLU;

	t90 = ((x4977/x4978)%(x4979<<x4980));

	if (t90 != 11881LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4993 = UINT8_MAX;
	volatile int8_t x4994 = INT8_MAX;
	volatile uint32_t x4995 = 2065024027U;
	uint32_t x4996 = 20U;
	static volatile uint32_t t91 = 2096U;

	t91 = ((x4993/x4994)%(x4995<<x4996));

	if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x5001 = INT32_MIN;
	int32_t x5002 = INT32_MIN;
	uint32_t x5003 = 8U;
	uint8_t x5004 = 26U;
	volatile uint32_t t92 = 0U;

	t92 = ((x5001/x5002)%(x5003<<x5004));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x5009 = INT16_MIN;
	volatile uint32_t x5011 = 2U;

	t93 = ((x5009/x5010)%(x5011<<x5012));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5065 = -1;
	int64_t x5066 = 84LL;
	uint16_t x5067 = 103U;
	uint8_t x5068 = 3U;

	t94 = ((x5065/x5066)%(x5067<<x5068));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5149 = -6LL;
	int16_t x5150 = INT16_MAX;
	uint16_t x5151 = UINT16_MAX;
	uint16_t x5152 = 1U;
	volatile int64_t t95 = -3003789377926LL;

	t95 = ((x5149/x5150)%(x5151<<x5152));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x5182 = UINT16_MAX;
	uint16_t x5183 = 12315U;
	uint8_t x5184 = 6U;
	volatile int32_t t96 = 956;

	t96 = ((x5181/x5182)%(x5183<<x5184));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5229 = 9U;
	volatile int8_t x5230 = INT8_MIN;
	uint64_t t97 = 3185419253LLU;

	t97 = ((x5229/x5230)%(x5231<<x5232));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x5337 = 24;
	int8_t x5339 = 4;
	volatile int32_t t98 = 355947;

	t98 = ((x5337/x5338)%(x5339<<x5340));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5357 = INT16_MIN;
	uint64_t x5359 = 51531043551LLU;
	static int64_t x5360 = 6LL;
	uint64_t t99 = 17654038668143965LLU;

	t99 = ((x5357/x5358)%(x5359<<x5360));

	if (t99 != 2689984575240LLU) { NG(); } else { ; }
	
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

