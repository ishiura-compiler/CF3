
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x131 = INT8_MIN;
int16_t x147 = INT16_MAX;
static int8_t x190 = 0;
uint8_t x321 = UINT8_MAX;
uint64_t x518 = 1LLU;
uint64_t x594 = 1LLU;
static int64_t x747 = INT64_MIN;
uint32_t x748 = UINT32_MAX;
static uint64_t x941 = UINT64_MAX;
static int16_t x943 = -1;
volatile int64_t x1016 = INT64_MIN;
static int8_t x1120 = 1;
volatile uint64_t t15 = 0LLU;
uint8_t x1185 = UINT8_MAX;
static uint8_t x1206 = 9U;
static uint8_t x1448 = 7U;
int16_t x1552 = 1;
static uint32_t t20 = 24U;
uint8_t x1678 = 22U;
int32_t t21 = -15;
static int64_t x1687 = 9298120148903923LL;
volatile int64_t x1732 = -626LL;
int64_t x2119 = INT64_MAX;
volatile int32_t t25 = 2045;
static volatile int64_t x2129 = 18273126LL;
uint16_t x2131 = UINT16_MAX;
static int16_t x2132 = 27;
volatile int64_t t26 = -3654768031805602350LL;
int64_t x2167 = -1LL;
uint32_t x2168 = UINT32_MAX;
static uint16_t x2207 = 1U;
int32_t x2217 = 317126184;
volatile int32_t t29 = 118;
volatile int16_t x2249 = INT16_MAX;
int32_t x2251 = -1;
static int32_t x2301 = INT32_MAX;
static int16_t x2379 = -1;
uint32_t x2380 = 38893121U;
volatile int16_t x2498 = 3;
int8_t x2583 = INT8_MAX;
uint8_t x2617 = 40U;
volatile int64_t x2620 = -1LL;
volatile int32_t t37 = 3384840;
uint64_t x2689 = 76927347152LLU;
static uint16_t x2781 = UINT16_MAX;
uint64_t x3020 = 169809754856793LLU;
int32_t t43 = -54212459;
int32_t x3129 = 92342;
volatile int16_t x3132 = INT16_MAX;
int32_t t44 = 32549106;
int32_t x3146 = 0;
int64_t x3167 = INT64_MAX;
int64_t x3192 = 6LL;
uint8_t x3254 = 2U;
int64_t x3255 = -2239596576LL;
int32_t t49 = 75502360;
volatile uint16_t x3505 = 0U;
uint64_t x3508 = 5LLU;
volatile int8_t x3522 = 1;
uint8_t x3524 = UINT8_MAX;
int16_t x3581 = INT16_MAX;
uint16_t x3583 = UINT16_MAX;
volatile int32_t t54 = 56807737;
int16_t x3660 = -463;
uint64_t x3741 = 29484209626203500LLU;
int32_t x3742 = 0;
uint64_t x3743 = 2187936556479242LLU;
int64_t x3744 = -1822773060LL;
static uint64_t x3749 = 55LLU;
volatile int8_t x3750 = 44;
volatile uint64_t t59 = 1938995103198765LLU;
int32_t x3755 = -1148421;
int32_t t60 = 1285;
int8_t x3759 = 0;
static uint8_t x3762 = 6U;
int64_t x3763 = -171473LL;
volatile int32_t t62 = 0;
uint16_t x3903 = 4187U;
static int8_t x3904 = -12;
uint32_t x3934 = 8U;
int32_t x3986 = 0;
uint8_t x4074 = 1U;
uint16_t x4076 = 6405U;
uint64_t x4097 = 23LLU;
int8_t x4100 = -1;
uint64_t t67 = 2LLU;
uint16_t x4108 = UINT16_MAX;
static uint8_t x4202 = 25U;
uint16_t x4204 = 32751U;
uint64_t t69 = 10LLU;
volatile int32_t t70 = 97737506;
uint64_t x4349 = UINT64_MAX;
int32_t x4352 = 797281759;
int64_t x4400 = INT64_MIN;
int32_t t72 = -19;
int8_t x4436 = INT8_MIN;
static int16_t x4457 = 2;
volatile int32_t t75 = -236928962;
uint32_t x4586 = 16U;
uint16_t x4846 = 27U;
static int32_t x4866 = 3;
uint8_t x4879 = 33U;
uint64_t x5101 = UINT64_MAX;
int64_t x5197 = 63617368049742LL;
uint64_t t85 = 3491044029800502LLU;
int64_t x5604 = INT64_MIN;
volatile uint8_t x5614 = 5U;
uint8_t x5615 = 1U;
volatile int32_t x5743 = -6987908;
int32_t t89 = -740320252;
int32_t x5824 = 9143;
volatile uint32_t t90 = 777010U;
uint8_t x5869 = UINT8_MAX;
volatile int32_t t92 = -130;
int8_t x5923 = 4;
volatile uint32_t t93 = 1366051032U;
int32_t x5951 = INT32_MIN;
uint64_t x5957 = 1661876LLU;
int16_t x5959 = INT16_MAX;
int64_t t97 = -800LL;
volatile int32_t x6064 = INT32_MIN;
uint64_t t99 = 463517240509688702LLU;
int16_t x6259 = -5;
volatile int32_t x6367 = -5023517;
int64_t x6377 = INT64_MAX;
volatile int64_t x6485 = 28153375580LL;
int32_t x6487 = -11623;
int64_t x6581 = INT64_MAX;
int32_t x6584 = -501760981;
static volatile int64_t x6636 = -1LL;
static int32_t t109 = 744391;
uint16_t x6690 = 10U;
int32_t t110 = 6760;
int64_t x6704 = -1LL;
int32_t t111 = -124260007;
volatile uint64_t x6777 = 231142203273LLU;
int16_t x6779 = INT16_MAX;
volatile uint8_t x6780 = 14U;
static volatile uint64_t t112 = 7LLU;
int8_t x6875 = INT8_MAX;
static volatile int32_t t115 = -1;
int16_t x6976 = INT16_MIN;
uint32_t x7069 = UINT32_MAX;
int32_t t120 = 461;
static int16_t x7606 = 10;
volatile uint16_t x7638 = 0U;
uint32_t x7763 = 1897397576U;
volatile uint64_t x7792 = 687723198603666LLU;
uint64_t x7886 = 0LLU;
int64_t x7888 = 6528050306642LL;
int32_t x8017 = 842651;
volatile int32_t t130 = 47893882;
int16_t x8144 = INT16_MAX;
int32_t x8208 = INT32_MIN;
volatile uint64_t t132 = 204142802LLU;
uint64_t x8637 = 28519LLU;
static uint64_t t136 = 101017063297135873LLU;
uint8_t x8662 = 5U;
static uint32_t x8693 = 3565476U;
uint32_t t139 = 1677U;
uint16_t x8841 = 323U;
static uint8_t x8859 = 1U;
uint16_t x8870 = 1U;
int8_t x8907 = INT8_MAX;
int16_t x8908 = INT16_MAX;
volatile uint64_t t144 = 7215143LLU;
uint16_t x8914 = 0U;
uint64_t x9012 = 46LLU;
uint64_t x9069 = UINT64_MAX;
volatile int32_t x9079 = INT32_MIN;
volatile int32_t x9163 = 245413;
uint16_t x9269 = UINT16_MAX;
static int32_t t152 = -5;
int32_t x9905 = 44175574;
uint16_t x9906 = 13U;
uint8_t x9909 = 0U;
uint64_t x10061 = 98LLU;
int8_t x10062 = 2;
int64_t x10063 = -5167325284725LL;
static volatile uint64_t t163 = 32201645292040LLU;
int16_t x10081 = 11361;
int64_t x10084 = 0LL;
static int8_t x10111 = INT8_MIN;
uint16_t x10189 = 1580U;
uint8_t x10190 = 12U;
int16_t x10192 = INT16_MIN;
volatile int32_t t168 = 35;
static int64_t x10936 = -2039LL;
volatile int32_t t172 = -2301;
uint16_t x10978 = 0U;
int16_t x10980 = INT16_MIN;
int64_t x11044 = -1343638352LL;
int32_t t176 = -232861711;
volatile uint64_t t177 = 30016726613965935LLU;
int32_t x11249 = 1744;
volatile int32_t t179 = -17;
static uint32_t x11295 = 144114U;
int16_t x11341 = INT16_MAX;
volatile int32_t t183 = -624;
int32_t x11591 = -3;
uint32_t x11636 = 89951U;
volatile uint32_t t186 = 0U;
uint8_t x11680 = UINT8_MAX;
volatile uint32_t t187 = 177599604U;
static int64_t x11707 = 97342742LL;
uint8_t x11926 = 1U;
int16_t x12036 = -6864;
int16_t x12356 = 7721;
volatile uint16_t x12430 = 0U;
int32_t x12432 = -1;
static int8_t x12684 = INT8_MAX;


void f0(void) {
    	uint16_t x129 = 1457U;
	static uint8_t x130 = 3U;
	volatile uint32_t x132 = 3U;
	int32_t t0 = 11107304;

    t0 = ((x129>>x130)%(x131!=x132));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x145 = 2LLU;
	uint16_t x146 = 18U;
	int8_t x148 = -1;
	static uint64_t t1 = 1497469824899470807LLU;

    t1 = ((x145>>x146)%(x147!=x148));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x189 = 1107U;
	int32_t x191 = INT32_MIN;
	static int32_t x192 = INT32_MAX;
	volatile uint32_t t2 = 481U;

    t2 = ((x189>>x190)%(x191!=x192));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x305 = 18U;
	static uint64_t x306 = 28LLU;
	int64_t x307 = INT64_MIN;
	static int16_t x308 = -1;
	static int32_t t3 = 3520024;

    t3 = ((x305>>x306)%(x307!=x308));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x322 = 10;
	int32_t x323 = INT32_MAX;
	static int64_t x324 = 31343601480654415LL;
	int32_t t4 = -2127875;

    t4 = ((x321>>x322)%(x323!=x324));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x513 = 8288U;
	volatile int8_t x514 = 1;
	static int64_t x515 = INT64_MAX;
	static uint64_t x516 = 2103901443783215LLU;
	uint32_t t5 = 47051562U;

    t5 = ((x513>>x514)%(x515!=x516));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x517 = 8U;
	int8_t x519 = 5;
	volatile uint8_t x520 = 86U;
	volatile int32_t t6 = -11694422;

    t6 = ((x517>>x518)%(x519!=x520));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x593 = 25429U;
	int8_t x595 = 0;
	int32_t x596 = -1;
	volatile int32_t t7 = -22397;

    t7 = ((x593>>x594)%(x595!=x596));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x745 = 488763831U;
	int8_t x746 = 6;
	uint32_t t8 = 446U;

    t8 = ((x745>>x746)%(x747!=x748));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x797 = 74623747U;
	static int16_t x798 = 0;
	uint16_t x799 = 54U;
	static volatile int64_t x800 = INT64_MAX;
	volatile uint32_t t9 = 442724259U;

    t9 = ((x797>>x798)%(x799!=x800));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x869 = 2U;
	uint16_t x870 = 21U;
	uint16_t x871 = UINT16_MAX;
	int16_t x872 = -1;
	volatile int32_t t10 = -1;

    t10 = ((x869>>x870)%(x871!=x872));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x885 = 63502654LL;
	volatile int32_t x886 = 7;
	int8_t x887 = INT8_MIN;
	int16_t x888 = 1144;
	volatile int64_t t11 = -487271LL;

    t11 = ((x885>>x886)%(x887!=x888));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x942 = 0;
	int16_t x944 = INT16_MIN;
	static volatile uint64_t t12 = 3873529LLU;

    t12 = ((x941>>x942)%(x943!=x944));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x945 = UINT64_MAX;
	volatile uint16_t x946 = 20U;
	int16_t x947 = INT16_MIN;
	int16_t x948 = 1;
	uint64_t t13 = 557987812664973778LLU;

    t13 = ((x945>>x946)%(x947!=x948));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x1013 = INT64_MAX;
	static int64_t x1014 = 1LL;
	int16_t x1015 = INT16_MIN;
	static volatile int64_t t14 = -11540758LL;

    t14 = ((x1013>>x1014)%(x1015!=x1016));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x1117 = UINT64_MAX;
	static uint8_t x1118 = 10U;
	uint8_t x1119 = UINT8_MAX;

    t15 = ((x1117>>x1118)%(x1119!=x1120));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x1186 = 4U;
	int32_t x1187 = -19662;
	uint64_t x1188 = 29107855443352LLU;
	volatile int32_t t16 = 24536;

    t16 = ((x1185>>x1186)%(x1187!=x1188));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x1205 = 154296255LL;
	volatile int8_t x1207 = INT8_MIN;
	uint64_t x1208 = 767421896244LLU;
	int64_t t17 = 36342483961234587LL;

    t17 = ((x1205>>x1206)%(x1207!=x1208));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x1433 = 431U;
	uint32_t x1434 = 0U;
	int32_t x1435 = INT32_MAX;
	volatile int8_t x1436 = INT8_MIN;
	volatile uint32_t t18 = 13714579U;

    t18 = ((x1433>>x1434)%(x1435!=x1436));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1445 = 20U;
	int8_t x1446 = 2;
	int16_t x1447 = 4224;
	static volatile uint32_t t19 = 2409U;

    t19 = ((x1445>>x1446)%(x1447!=x1448));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x1549 = 13680289U;
	uint16_t x1550 = 10U;
	static int32_t x1551 = INT32_MIN;

    t20 = ((x1549>>x1550)%(x1551!=x1552));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1677 = INT32_MAX;
	uint64_t x1679 = 1148462577353379LLU;
	int64_t x1680 = INT64_MIN;

    t21 = ((x1677>>x1678)%(x1679!=x1680));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1685 = 343569LL;
	int8_t x1686 = 1;
	int64_t x1688 = -1LL;
	int64_t t22 = 1100488458081204LL;

    t22 = ((x1685>>x1686)%(x1687!=x1688));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1729 = UINT32_MAX;
	uint8_t x1730 = 3U;
	int16_t x1731 = 67;
	uint32_t t23 = 15847977U;

    t23 = ((x1729>>x1730)%(x1731!=x1732));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x2077 = UINT32_MAX;
	int8_t x2078 = 0;
	int16_t x2079 = INT16_MIN;
	int32_t x2080 = INT32_MIN;
	uint32_t t24 = 664U;

    t24 = ((x2077>>x2078)%(x2079!=x2080));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x2117 = INT16_MAX;
	int8_t x2118 = 0;
	uint32_t x2120 = 977U;

    t25 = ((x2117>>x2118)%(x2119!=x2120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x2130 = 0;

    t26 = ((x2129>>x2130)%(x2131!=x2132));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x2165 = 375874081;
	uint16_t x2166 = 8U;
	volatile int32_t t27 = -13;

    t27 = ((x2165>>x2166)%(x2167!=x2168));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x2205 = 2LLU;
	uint8_t x2206 = 29U;
	int32_t x2208 = INT32_MIN;
	uint64_t t28 = 21LLU;

    t28 = ((x2205>>x2206)%(x2207!=x2208));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x2218 = 5U;
	int16_t x2219 = INT16_MAX;
	int64_t x2220 = INT64_MAX;

    t29 = ((x2217>>x2218)%(x2219!=x2220));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x2250 = 0U;
	static volatile uint32_t x2252 = 58U;
	int32_t t30 = -26673827;

    t30 = ((x2249>>x2250)%(x2251!=x2252));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x2302 = 4U;
	uint8_t x2303 = 0U;
	volatile int8_t x2304 = -1;
	int32_t t31 = -477047;

    t31 = ((x2301>>x2302)%(x2303!=x2304));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x2317 = UINT16_MAX;
	static uint8_t x2318 = 13U;
	int16_t x2319 = -1;
	volatile int16_t x2320 = INT16_MIN;
	static int32_t t32 = 2;

    t32 = ((x2317>>x2318)%(x2319!=x2320));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x2377 = UINT8_MAX;
	uint8_t x2378 = 16U;
	int32_t t33 = -41;

    t33 = ((x2377>>x2378)%(x2379!=x2380));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x2477 = INT16_MAX;
	uint32_t x2478 = 28U;
	int16_t x2479 = -1;
	static volatile int16_t x2480 = INT16_MAX;
	volatile int32_t t34 = -8344172;

    t34 = ((x2477>>x2478)%(x2479!=x2480));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2497 = UINT8_MAX;
	int16_t x2499 = INT16_MAX;
	static volatile int32_t x2500 = 428599322;
	volatile int32_t t35 = 11453923;

    t35 = ((x2497>>x2498)%(x2499!=x2500));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x2581 = 372U;
	volatile int8_t x2582 = 0;
	uint32_t x2584 = 115236U;
	static int32_t t36 = -27283;

    t36 = ((x2581>>x2582)%(x2583!=x2584));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x2618 = 2;
	uint16_t x2619 = 29U;

    t37 = ((x2617>>x2618)%(x2619!=x2620));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2690 = 25;
	uint8_t x2691 = 0U;
	static int32_t x2692 = INT32_MIN;
	uint64_t t38 = 232328321933815366LLU;

    t38 = ((x2689>>x2690)%(x2691!=x2692));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2693 = 5002943U;
	static int8_t x2694 = 3;
	uint32_t x2695 = 597690406U;
	uint64_t x2696 = 41787595087780170LLU;
	uint32_t t39 = 1554327531U;

    t39 = ((x2693>>x2694)%(x2695!=x2696));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x2782 = 2;
	static uint32_t x2783 = 12198659U;
	uint16_t x2784 = 366U;
	int32_t t40 = -247677869;

    t40 = ((x2781>>x2782)%(x2783!=x2784));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x3017 = INT8_MAX;
	uint8_t x3018 = 19U;
	int64_t x3019 = INT64_MIN;
	int32_t t41 = 400252626;

    t41 = ((x3017>>x3018)%(x3019!=x3020));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x3109 = UINT16_MAX;
	int8_t x3110 = 1;
	volatile uint64_t x3111 = UINT64_MAX;
	int64_t x3112 = -42061542593LL;
	static volatile int32_t t42 = 494;

    t42 = ((x3109>>x3110)%(x3111!=x3112));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x3125 = 55;
	static int8_t x3126 = 0;
	uint16_t x3127 = 1196U;
	uint16_t x3128 = UINT16_MAX;

    t43 = ((x3125>>x3126)%(x3127!=x3128));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x3130 = 4U;
	volatile int64_t x3131 = -1LL;

    t44 = ((x3129>>x3130)%(x3131!=x3132));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x3145 = 3U;
	int32_t x3147 = 51119346;
	static int8_t x3148 = -19;
	volatile uint32_t t45 = 946406U;

    t45 = ((x3145>>x3146)%(x3147!=x3148));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x3165 = 680143941LLU;
	int16_t x3166 = 1;
	static int32_t x3168 = -123405155;
	volatile uint64_t t46 = 3LLU;

    t46 = ((x3165>>x3166)%(x3167!=x3168));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x3189 = UINT64_MAX;
	uint8_t x3190 = 1U;
	int16_t x3191 = INT16_MIN;
	volatile uint64_t t47 = 340748461699061LLU;

    t47 = ((x3189>>x3190)%(x3191!=x3192));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x3225 = 3308;
	uint8_t x3226 = 4U;
	int16_t x3227 = INT16_MAX;
	volatile uint16_t x3228 = 3692U;
	int32_t t48 = -19265981;

    t48 = ((x3225>>x3226)%(x3227!=x3228));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x3253 = 85U;
	static int64_t x3256 = INT64_MAX;

    t49 = ((x3253>>x3254)%(x3255!=x3256));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x3309 = UINT64_MAX;
	uint16_t x3310 = 61U;
	int16_t x3311 = -244;
	int8_t x3312 = -1;
	uint64_t t50 = 116999693105760442LLU;

    t50 = ((x3309>>x3310)%(x3311!=x3312));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x3506 = 22;
	static volatile int64_t x3507 = -1LL;
	int32_t t51 = -859477;

    t51 = ((x3505>>x3506)%(x3507!=x3508));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x3521 = INT32_MAX;
	volatile int16_t x3523 = 60;
	volatile int32_t t52 = -1;

    t52 = ((x3521>>x3522)%(x3523!=x3524));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x3541 = UINT8_MAX;
	uint8_t x3542 = 23U;
	int8_t x3543 = INT8_MIN;
	int32_t x3544 = -1;
	static int32_t t53 = 0;

    t53 = ((x3541>>x3542)%(x3543!=x3544));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x3582 = 2U;
	int16_t x3584 = -49;

    t54 = ((x3581>>x3582)%(x3583!=x3584));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x3629 = 4392;
	uint16_t x3630 = 0U;
	uint64_t x3631 = 3LLU;
	int16_t x3632 = -1;
	int32_t t55 = 30782652;

    t55 = ((x3629>>x3630)%(x3631!=x3632));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x3657 = 2374563354LLU;
	volatile uint64_t x3658 = 7LLU;
	int16_t x3659 = -1;
	static volatile uint64_t t56 = 85834629046108LLU;

    t56 = ((x3657>>x3658)%(x3659!=x3660));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x3729 = UINT8_MAX;
	uint8_t x3730 = 27U;
	volatile uint16_t x3731 = UINT16_MAX;
	int64_t x3732 = -37433802LL;
	int32_t t57 = -27698360;

    t57 = ((x3729>>x3730)%(x3731!=x3732));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t t58 = 76308373524752039LLU;

    t58 = ((x3741>>x3742)%(x3743!=x3744));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x3751 = 258166473649557LL;
	uint64_t x3752 = 66611LLU;

    t59 = ((x3749>>x3750)%(x3751!=x3752));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x3753 = 405;
	int8_t x3754 = 0;
	int32_t x3756 = INT32_MIN;

    t60 = ((x3753>>x3754)%(x3755!=x3756));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x3757 = 7103;
	volatile uint16_t x3758 = 2U;
	uint32_t x3760 = 116U;
	static volatile int32_t t61 = 474;

    t61 = ((x3757>>x3758)%(x3759!=x3760));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x3761 = 3U;
	static volatile int16_t x3764 = INT16_MAX;

    t62 = ((x3761>>x3762)%(x3763!=x3764));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x3901 = 322;
	uint16_t x3902 = 0U;
	int32_t t63 = 256;

    t63 = ((x3901>>x3902)%(x3903!=x3904));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x3933 = 12274U;
	int64_t x3935 = INT64_MIN;
	uint32_t x3936 = 53125813U;
	volatile int32_t t64 = 913785;

    t64 = ((x3933>>x3934)%(x3935!=x3936));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x3985 = 34035441910LL;
	uint64_t x3987 = 1467796394797250110LLU;
	uint16_t x3988 = UINT16_MAX;
	volatile int64_t t65 = 1599991LL;

    t65 = ((x3985>>x3986)%(x3987!=x3988));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x4073 = UINT32_MAX;
	int64_t x4075 = -1LL;
	uint32_t t66 = 62U;

    t66 = ((x4073>>x4074)%(x4075!=x4076));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x4098 = 33U;
	static int8_t x4099 = 10;

    t67 = ((x4097>>x4098)%(x4099!=x4100));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x4105 = INT64_MAX;
	uint8_t x4106 = 3U;
	int16_t x4107 = INT16_MIN;
	static int64_t t68 = -247522092186153LL;

    t68 = ((x4105>>x4106)%(x4107!=x4108));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x4201 = UINT64_MAX;
	int64_t x4203 = INT64_MIN;

    t69 = ((x4201>>x4202)%(x4203!=x4204));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x4205 = INT16_MAX;
	volatile uint64_t x4206 = 3LLU;
	volatile int8_t x4207 = INT8_MIN;
	static int64_t x4208 = INT64_MAX;

    t70 = ((x4205>>x4206)%(x4207!=x4208));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x4350 = 57LL;
	static int64_t x4351 = INT64_MIN;
	uint64_t t71 = 1636LLU;

    t71 = ((x4349>>x4350)%(x4351!=x4352));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x4397 = 0;
	int8_t x4398 = 0;
	int32_t x4399 = INT32_MIN;

    t72 = ((x4397>>x4398)%(x4399!=x4400));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x4433 = UINT8_MAX;
	static volatile uint8_t x4434 = 10U;
	uint8_t x4435 = 7U;
	volatile int32_t t73 = -15950834;

    t73 = ((x4433>>x4434)%(x4435!=x4436));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x4458 = 1U;
	uint8_t x4459 = UINT8_MAX;
	int8_t x4460 = 36;
	volatile int32_t t74 = 10;

    t74 = ((x4457>>x4458)%(x4459!=x4460));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x4485 = 103U;
	uint8_t x4486 = 0U;
	int32_t x4487 = -1;
	uint64_t x4488 = 17036955LLU;

    t75 = ((x4485>>x4486)%(x4487!=x4488));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x4585 = UINT64_MAX;
	int64_t x4587 = -1LL;
	int8_t x4588 = INT8_MAX;
	volatile uint64_t t76 = 3153529LLU;

    t76 = ((x4585>>x4586)%(x4587!=x4588));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x4809 = UINT16_MAX;
	int8_t x4810 = 1;
	static int16_t x4811 = -1;
	uint64_t x4812 = 497781941688374581LLU;
	int32_t t77 = 1;

    t77 = ((x4809>>x4810)%(x4811!=x4812));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x4845 = 31U;
	uint64_t x4847 = 25645349776690972LLU;
	int16_t x4848 = INT16_MAX;
	volatile uint32_t t78 = 5U;

    t78 = ((x4845>>x4846)%(x4847!=x4848));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x4865 = 1053U;
	int16_t x4867 = -104;
	volatile int8_t x4868 = INT8_MAX;
	static volatile int32_t t79 = -1;

    t79 = ((x4865>>x4866)%(x4867!=x4868));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x4877 = 3304U;
	static uint8_t x4878 = 16U;
	volatile int8_t x4880 = 29;
	static int32_t t80 = 3;

    t80 = ((x4877>>x4878)%(x4879!=x4880));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x5102 = 28;
	int16_t x5103 = INT16_MIN;
	uint16_t x5104 = 0U;
	uint64_t t81 = 430LLU;

    t81 = ((x5101>>x5102)%(x5103!=x5104));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x5149 = 65504181U;
	uint16_t x5150 = 1U;
	static volatile int16_t x5151 = -1;
	int16_t x5152 = INT16_MIN;
	volatile uint32_t t82 = 194281395U;

    t82 = ((x5149>>x5150)%(x5151!=x5152));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x5198 = 17U;
	volatile int16_t x5199 = -1;
	int16_t x5200 = INT16_MAX;
	volatile int64_t t83 = -506531533681686604LL;

    t83 = ((x5197>>x5198)%(x5199!=x5200));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x5245 = 1776LLU;
	uint8_t x5246 = 41U;
	int64_t x5247 = INT64_MAX;
	int8_t x5248 = INT8_MAX;
	uint64_t t84 = 288142346185876892LLU;

    t84 = ((x5245>>x5246)%(x5247!=x5248));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x5381 = 10743035LLU;
	uint16_t x5382 = 25U;
	volatile int8_t x5383 = INT8_MIN;
	uint8_t x5384 = UINT8_MAX;

    t85 = ((x5381>>x5382)%(x5383!=x5384));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x5601 = 57U;
	static uint8_t x5602 = 1U;
	static int64_t x5603 = -46370LL;
	static int32_t t86 = -404405925;

    t86 = ((x5601>>x5602)%(x5603!=x5604));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x5613 = 29U;
	int64_t x5616 = INT64_MIN;
	volatile int32_t t87 = 1803527;

    t87 = ((x5613>>x5614)%(x5615!=x5616));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x5741 = 192;
	uint8_t x5742 = 12U;
	int16_t x5744 = 68;
	int32_t t88 = 209;

    t88 = ((x5741>>x5742)%(x5743!=x5744));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x5769 = UINT16_MAX;
	int16_t x5770 = 4;
	int8_t x5771 = -1;
	int64_t x5772 = INT64_MIN;

    t89 = ((x5769>>x5770)%(x5771!=x5772));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x5821 = 4044U;
	uint64_t x5822 = 0LLU;
	uint8_t x5823 = 0U;

    t90 = ((x5821>>x5822)%(x5823!=x5824));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5870 = 1;
	int64_t x5871 = -105604743280851573LL;
	static int64_t x5872 = -3734196693150749232LL;
	volatile int32_t t91 = -24971494;

    t91 = ((x5869>>x5870)%(x5871!=x5872));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x5881 = UINT8_MAX;
	static uint8_t x5882 = 3U;
	volatile int8_t x5883 = 31;
	uint64_t x5884 = UINT64_MAX;

    t92 = ((x5881>>x5882)%(x5883!=x5884));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x5921 = 2488U;
	static volatile uint8_t x5922 = 7U;
	int64_t x5924 = INT64_MAX;

    t93 = ((x5921>>x5922)%(x5923!=x5924));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x5941 = 28LLU;
	int8_t x5942 = 1;
	uint8_t x5943 = 3U;
	volatile uint32_t x5944 = UINT32_MAX;
	static uint64_t t94 = 6699438559LLU;

    t94 = ((x5941>>x5942)%(x5943!=x5944));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x5949 = INT16_MAX;
	volatile uint8_t x5950 = 0U;
	volatile int16_t x5952 = -3504;
	static int32_t t95 = 2;

    t95 = ((x5949>>x5950)%(x5951!=x5952));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x5958 = 2U;
	volatile int64_t x5960 = INT64_MAX;
	volatile uint64_t t96 = 1520116741565704LLU;

    t96 = ((x5957>>x5958)%(x5959!=x5960));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x6021 = 1842615115199466LL;
	static volatile uint64_t x6022 = 28LLU;
	int16_t x6023 = INT16_MIN;
	uint16_t x6024 = 104U;

    t97 = ((x6021>>x6022)%(x6023!=x6024));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x6061 = 774432427997912023LLU;
	int32_t x6062 = 3;
	uint32_t x6063 = 808950U;
	static volatile uint64_t t98 = 570323586282LLU;

    t98 = ((x6061>>x6062)%(x6063!=x6064));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x6157 = 841960047707493LLU;
	uint16_t x6158 = 16U;
	static int16_t x6159 = INT16_MAX;
	int16_t x6160 = -3700;

    t99 = ((x6157>>x6158)%(x6159!=x6160));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x6257 = 1869LLU;
	static uint32_t x6258 = 24U;
	int16_t x6260 = INT16_MIN;
	volatile uint64_t t100 = 11185437146654LLU;

    t100 = ((x6257>>x6258)%(x6259!=x6260));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x6365 = 59U;
	int8_t x6366 = 1;
	volatile uint8_t x6368 = 1U;
	static int32_t t101 = 3792;

    t101 = ((x6365>>x6366)%(x6367!=x6368));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x6378 = 17U;
	static int32_t x6379 = INT32_MIN;
	volatile int16_t x6380 = INT16_MIN;
	volatile int64_t t102 = -10021LL;

    t102 = ((x6377>>x6378)%(x6379!=x6380));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x6381 = 1U;
	uint16_t x6382 = 5U;
	int32_t x6383 = -35803773;
	int32_t x6384 = INT32_MIN;
	int32_t t103 = -7064422;

    t103 = ((x6381>>x6382)%(x6383!=x6384));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x6401 = INT16_MAX;
	volatile uint16_t x6402 = 6U;
	int64_t x6403 = INT64_MIN;
	uint8_t x6404 = 9U;
	int32_t t104 = 65184798;

    t104 = ((x6401>>x6402)%(x6403!=x6404));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x6486 = 0;
	int8_t x6488 = INT8_MAX;
	int64_t t105 = 17418325163085LL;

    t105 = ((x6485>>x6486)%(x6487!=x6488));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x6545 = INT16_MAX;
	uint8_t x6546 = 7U;
	static uint16_t x6547 = 4128U;
	int16_t x6548 = -1;
	static volatile int32_t t106 = 966682;

    t106 = ((x6545>>x6546)%(x6547!=x6548));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x6573 = 65;
	volatile int8_t x6574 = 1;
	volatile int32_t x6575 = INT32_MIN;
	uint32_t x6576 = 25065U;
	int32_t t107 = -81475384;

    t107 = ((x6573>>x6574)%(x6575!=x6576));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x6582 = 6;
	static int16_t x6583 = INT16_MAX;
	volatile int64_t t108 = 182LL;

    t108 = ((x6581>>x6582)%(x6583!=x6584));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x6633 = INT32_MAX;
	volatile int16_t x6634 = 2;
	int16_t x6635 = INT16_MIN;

    t109 = ((x6633>>x6634)%(x6635!=x6636));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x6689 = UINT16_MAX;
	static int8_t x6691 = INT8_MIN;
	int8_t x6692 = 10;

    t110 = ((x6689>>x6690)%(x6691!=x6692));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x6701 = 30U;
	int16_t x6702 = 1;
	int8_t x6703 = -8;

    t111 = ((x6701>>x6702)%(x6703!=x6704));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x6778 = 3U;

    t112 = ((x6777>>x6778)%(x6779!=x6780));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x6825 = 747627LLU;
	int8_t x6826 = 43;
	int8_t x6827 = INT8_MIN;
	volatile int64_t x6828 = INT64_MIN;
	static volatile uint64_t t113 = 635333408735278LLU;

    t113 = ((x6825>>x6826)%(x6827!=x6828));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x6873 = 11U;
	int8_t x6874 = 20;
	volatile int64_t x6876 = INT64_MIN;
	volatile int32_t t114 = 590;

    t114 = ((x6873>>x6874)%(x6875!=x6876));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x6881 = INT32_MAX;
	int8_t x6882 = 0;
	volatile int32_t x6883 = -2981349;
	int64_t x6884 = INT64_MIN;

    t115 = ((x6881>>x6882)%(x6883!=x6884));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x6885 = 5643251U;
	volatile uint16_t x6886 = 1U;
	int16_t x6887 = INT16_MIN;
	volatile int32_t x6888 = 36;
	volatile uint32_t t116 = 11U;

    t116 = ((x6885>>x6886)%(x6887!=x6888));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x6973 = 539226;
	uint32_t x6974 = 0U;
	int16_t x6975 = INT16_MAX;
	volatile int32_t t117 = 430;

    t117 = ((x6973>>x6974)%(x6975!=x6976));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x7070 = 0U;
	volatile int8_t x7071 = INT8_MIN;
	volatile int16_t x7072 = INT16_MAX;
	uint32_t t118 = 44978407U;

    t118 = ((x7069>>x7070)%(x7071!=x7072));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x7197 = 2812U;
	int32_t x7198 = 0;
	uint16_t x7199 = 6786U;
	int8_t x7200 = 1;
	uint32_t t119 = 13889U;

    t119 = ((x7197>>x7198)%(x7199!=x7200));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x7465 = INT32_MAX;
	uint16_t x7466 = 0U;
	int16_t x7467 = INT16_MAX;
	uint16_t x7468 = UINT16_MAX;

    t120 = ((x7465>>x7466)%(x7467!=x7468));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x7501 = INT16_MAX;
	static volatile int16_t x7502 = 13;
	static uint64_t x7503 = 86179762335814938LLU;
	int16_t x7504 = INT16_MIN;
	volatile int32_t t121 = 2832;

    t121 = ((x7501>>x7502)%(x7503!=x7504));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x7605 = INT16_MAX;
	volatile int64_t x7607 = INT64_MAX;
	volatile int16_t x7608 = -1;
	static volatile int32_t t122 = 93;

    t122 = ((x7605>>x7606)%(x7607!=x7608));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x7637 = INT64_MAX;
	uint16_t x7639 = UINT16_MAX;
	int64_t x7640 = -1LL;
	volatile int64_t t123 = 77167315024493326LL;

    t123 = ((x7637>>x7638)%(x7639!=x7640));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x7761 = 4;
	int32_t x7762 = 9;
	static uint16_t x7764 = UINT16_MAX;
	volatile int32_t t124 = -205;

    t124 = ((x7761>>x7762)%(x7763!=x7764));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x7765 = 1;
	int8_t x7766 = 12;
	volatile int16_t x7767 = -8;
	uint16_t x7768 = 42U;
	int32_t t125 = 59872;

    t125 = ((x7765>>x7766)%(x7767!=x7768));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x7789 = INT32_MAX;
	int8_t x7790 = 7;
	uint64_t x7791 = 22873884158417698LLU;
	static int32_t t126 = 1265;

    t126 = ((x7789>>x7790)%(x7791!=x7792));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x7885 = UINT16_MAX;
	uint32_t x7887 = UINT32_MAX;
	int32_t t127 = -7998576;

    t127 = ((x7885>>x7886)%(x7887!=x7888));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x7925 = INT64_MAX;
	static volatile uint8_t x7926 = 27U;
	int16_t x7927 = -1;
	uint8_t x7928 = 115U;
	int64_t t128 = -44602780338069069LL;

    t128 = ((x7925>>x7926)%(x7927!=x7928));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x8001 = UINT32_MAX;
	uint16_t x8002 = 19U;
	volatile int32_t x8003 = INT32_MIN;
	int16_t x8004 = 400;
	volatile uint32_t t129 = 54925U;

    t129 = ((x8001>>x8002)%(x8003!=x8004));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x8018 = 9;
	int64_t x8019 = INT64_MIN;
	volatile int32_t x8020 = -8640;

    t130 = ((x8017>>x8018)%(x8019!=x8020));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x8141 = 13890U;
	static uint16_t x8142 = 31U;
	static int8_t x8143 = -1;
	static int32_t t131 = 45037;

    t131 = ((x8141>>x8142)%(x8143!=x8144));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint64_t x8205 = 24LLU;
	volatile int16_t x8206 = 11;
	int64_t x8207 = 85768493470LL;

    t132 = ((x8205>>x8206)%(x8207!=x8208));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x8229 = INT64_MAX;
	static uint8_t x8230 = 29U;
	uint64_t x8231 = 893606617223591LLU;
	static uint16_t x8232 = 7U;
	volatile int64_t t133 = -47LL;

    t133 = ((x8229>>x8230)%(x8231!=x8232));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x8401 = UINT8_MAX;
	uint8_t x8402 = 1U;
	static volatile int16_t x8403 = -1;
	uint32_t x8404 = 365329091U;
	int32_t t134 = 70426;

    t134 = ((x8401>>x8402)%(x8403!=x8404));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x8541 = 3U;
	int16_t x8542 = 1;
	uint16_t x8543 = 567U;
	int8_t x8544 = -6;
	int32_t t135 = -31908;

    t135 = ((x8541>>x8542)%(x8543!=x8544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x8638 = 3U;
	uint64_t x8639 = UINT64_MAX;
	uint16_t x8640 = UINT16_MAX;

    t136 = ((x8637>>x8638)%(x8639!=x8640));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x8661 = UINT32_MAX;
	volatile int8_t x8663 = 23;
	int64_t x8664 = 125LL;
	uint32_t t137 = 6U;

    t137 = ((x8661>>x8662)%(x8663!=x8664));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x8694 = 3U;
	static int16_t x8695 = 29;
	static int32_t x8696 = 21197;
	static uint32_t t138 = 1U;

    t138 = ((x8693>>x8694)%(x8695!=x8696));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x8733 = 247921529U;
	uint16_t x8734 = 10U;
	uint32_t x8735 = 310671583U;
	uint16_t x8736 = UINT16_MAX;

    t139 = ((x8733>>x8734)%(x8735!=x8736));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x8842 = 0LL;
	static uint64_t x8843 = 2796118809929841LLU;
	volatile uint8_t x8844 = 2U;
	int32_t t140 = 8285257;

    t140 = ((x8841>>x8842)%(x8843!=x8844));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x8857 = 870084565U;
	int8_t x8858 = 4;
	static uint16_t x8860 = 36U;
	static uint32_t t141 = 1028900080U;

    t141 = ((x8857>>x8858)%(x8859!=x8860));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x8865 = 153726LLU;
	uint32_t x8866 = 4U;
	uint8_t x8867 = UINT8_MAX;
	static int16_t x8868 = -1;
	uint64_t t142 = 5217369LLU;

    t142 = ((x8865>>x8866)%(x8867!=x8868));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x8869 = 18;
	int32_t x8871 = INT32_MIN;
	int16_t x8872 = INT16_MIN;
	static volatile int32_t t143 = -1;

    t143 = ((x8869>>x8870)%(x8871!=x8872));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x8905 = UINT64_MAX;
	volatile int8_t x8906 = 1;

    t144 = ((x8905>>x8906)%(x8907!=x8908));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x8913 = 111032U;
	int32_t x8915 = INT32_MAX;
	int8_t x8916 = INT8_MIN;
	volatile uint32_t t145 = 477U;

    t145 = ((x8913>>x8914)%(x8915!=x8916));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x9009 = 94U;
	uint8_t x9010 = 3U;
	int32_t x9011 = INT32_MIN;
	int32_t t146 = 0;

    t146 = ((x9009>>x9010)%(x9011!=x9012));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x9049 = 82U;
	uint32_t x9050 = 0U;
	int64_t x9051 = INT64_MAX;
	uint8_t x9052 = 12U;
	int32_t t147 = 166094262;

    t147 = ((x9049>>x9050)%(x9051!=x9052));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x9070 = 21U;
	static int16_t x9071 = INT16_MIN;
	int32_t x9072 = INT32_MIN;
	static uint64_t t148 = 1520666685031421167LLU;

    t148 = ((x9069>>x9070)%(x9071!=x9072));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x9077 = INT16_MAX;
	uint16_t x9078 = 0U;
	int64_t x9080 = 2376054301756107021LL;
	volatile int32_t t149 = 14872454;

    t149 = ((x9077>>x9078)%(x9079!=x9080));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x9161 = UINT8_MAX;
	volatile uint8_t x9162 = 1U;
	int16_t x9164 = INT16_MIN;
	volatile int32_t t150 = -10939141;

    t150 = ((x9161>>x9162)%(x9163!=x9164));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x9270 = 0U;
	int64_t x9271 = 7508164810373LL;
	static uint16_t x9272 = 2785U;
	static volatile int32_t t151 = 56;

    t151 = ((x9269>>x9270)%(x9271!=x9272));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x9385 = UINT16_MAX;
	volatile int8_t x9386 = 3;
	volatile int32_t x9387 = INT32_MIN;
	volatile int64_t x9388 = -1LL;

    t152 = ((x9385>>x9386)%(x9387!=x9388));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x9433 = 315615074U;
	uint32_t x9434 = 3U;
	int64_t x9435 = INT64_MIN;
	int8_t x9436 = INT8_MIN;
	static volatile uint32_t t153 = 101594U;

    t153 = ((x9433>>x9434)%(x9435!=x9436));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x9593 = UINT32_MAX;
	int32_t x9594 = 0;
	volatile int64_t x9595 = -1LL;
	uint8_t x9596 = 0U;
	static uint32_t t154 = 6U;

    t154 = ((x9593>>x9594)%(x9595!=x9596));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x9709 = UINT8_MAX;
	uint8_t x9710 = 1U;
	uint32_t x9711 = 3U;
	volatile int8_t x9712 = 1;
	static volatile int32_t t155 = 9;

    t155 = ((x9709>>x9710)%(x9711!=x9712));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x9753 = 486U;
	uint16_t x9754 = 2U;
	uint16_t x9755 = UINT16_MAX;
	int64_t x9756 = INT64_MAX;
	static int32_t t156 = -319472394;

    t156 = ((x9753>>x9754)%(x9755!=x9756));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x9789 = 6;
	static uint8_t x9790 = 3U;
	uint64_t x9791 = UINT64_MAX;
	volatile uint8_t x9792 = 44U;
	static volatile int32_t t157 = 12;

    t157 = ((x9789>>x9790)%(x9791!=x9792));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x9805 = UINT64_MAX;
	int8_t x9806 = 0;
	int32_t x9807 = INT32_MIN;
	int64_t x9808 = -1LL;
	uint64_t t158 = 1LLU;

    t158 = ((x9805>>x9806)%(x9807!=x9808));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x9893 = UINT32_MAX;
	uint8_t x9894 = 0U;
	int32_t x9895 = INT32_MAX;
	static volatile int64_t x9896 = INT64_MIN;
	volatile uint32_t t159 = 4678U;

    t159 = ((x9893>>x9894)%(x9895!=x9896));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x9907 = -1;
	int32_t x9908 = INT32_MAX;
	volatile int32_t t160 = 160089891;

    t160 = ((x9905>>x9906)%(x9907!=x9908));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x9910 = 15U;
	int16_t x9911 = -7033;
	uint32_t x9912 = UINT32_MAX;
	int32_t t161 = 6567754;

    t161 = ((x9909>>x9910)%(x9911!=x9912));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x10017 = INT64_MAX;
	uint8_t x10018 = 58U;
	uint64_t x10019 = UINT64_MAX;
	int8_t x10020 = INT8_MAX;
	int64_t t162 = 57806011654LL;

    t162 = ((x10017>>x10018)%(x10019!=x10020));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x10064 = UINT16_MAX;

    t163 = ((x10061>>x10062)%(x10063!=x10064));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x10082 = 15U;
	int64_t x10083 = INT64_MIN;
	volatile int32_t t164 = 2746;

    t164 = ((x10081>>x10082)%(x10083!=x10084));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x10109 = 200826085140285LL;
	uint64_t x10110 = 1LLU;
	int32_t x10112 = INT32_MIN;
	volatile int64_t t165 = -3138293073015686LL;

    t165 = ((x10109>>x10110)%(x10111!=x10112));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x10153 = UINT16_MAX;
	uint8_t x10154 = 2U;
	uint8_t x10155 = 3U;
	volatile uint16_t x10156 = 3247U;
	int32_t t166 = -347568619;

    t166 = ((x10153>>x10154)%(x10155!=x10156));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x10191 = 76U;
	volatile int32_t t167 = 446227944;

    t167 = ((x10189>>x10190)%(x10191!=x10192));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x10257 = 56U;
	uint8_t x10258 = 1U;
	static int16_t x10259 = INT16_MIN;
	uint64_t x10260 = 877314272412LLU;

    t168 = ((x10257>>x10258)%(x10259!=x10260));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x10617 = UINT8_MAX;
	uint8_t x10618 = 3U;
	int64_t x10619 = 2300044LL;
	uint64_t x10620 = UINT64_MAX;
	static volatile int32_t t169 = 233088182;

    t169 = ((x10617>>x10618)%(x10619!=x10620));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x10733 = INT64_MAX;
	uint8_t x10734 = 1U;
	int64_t x10735 = -1LL;
	static int8_t x10736 = INT8_MIN;
	int64_t t170 = 981543517LL;

    t170 = ((x10733>>x10734)%(x10735!=x10736));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x10865 = INT16_MAX;
	int8_t x10866 = 0;
	volatile int16_t x10867 = -90;
	static int8_t x10868 = 5;
	int32_t t171 = 210802676;

    t171 = ((x10865>>x10866)%(x10867!=x10868));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x10933 = INT32_MAX;
	int32_t x10934 = 10;
	volatile uint32_t x10935 = UINT32_MAX;

    t172 = ((x10933>>x10934)%(x10935!=x10936));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x10977 = 0;
	static int32_t x10979 = 48;
	volatile int32_t t173 = 15584;

    t173 = ((x10977>>x10978)%(x10979!=x10980));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x11025 = 217771835976561242LL;
	volatile uint8_t x11026 = 5U;
	int8_t x11027 = 1;
	int8_t x11028 = INT8_MIN;
	volatile int64_t t174 = -135883202260616LL;

    t174 = ((x11025>>x11026)%(x11027!=x11028));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x11041 = INT32_MAX;
	static int16_t x11042 = 9;
	int8_t x11043 = -48;
	static volatile int32_t t175 = 1280;

    t175 = ((x11041>>x11042)%(x11043!=x11044));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x11145 = INT8_MAX;
	uint8_t x11146 = 5U;
	volatile int8_t x11147 = -3;
	volatile int32_t x11148 = INT32_MAX;

    t176 = ((x11145>>x11146)%(x11147!=x11148));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x11149 = UINT64_MAX;
	uint16_t x11150 = 9U;
	int8_t x11151 = 12;
	int32_t x11152 = INT32_MIN;

    t177 = ((x11149>>x11150)%(x11151!=x11152));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x11237 = 5905027773LL;
	volatile int8_t x11238 = 2;
	int64_t x11239 = 2436980127500977LL;
	int64_t x11240 = -1LL;
	volatile int64_t t178 = 10994644652456754LL;

    t178 = ((x11237>>x11238)%(x11239!=x11240));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x11250 = 2;
	uint32_t x11251 = 285U;
	int32_t x11252 = -304164;

    t179 = ((x11249>>x11250)%(x11251!=x11252));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x11293 = INT32_MAX;
	int8_t x11294 = 10;
	uint8_t x11296 = 45U;
	int32_t t180 = -305266603;

    t180 = ((x11293>>x11294)%(x11295!=x11296));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x11325 = 0U;
	static volatile int8_t x11326 = 14;
	int64_t x11327 = INT64_MIN;
	volatile int64_t x11328 = -1LL;
	volatile int32_t t181 = -1982119;

    t181 = ((x11325>>x11326)%(x11327!=x11328));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x11342 = 1U;
	volatile uint64_t x11343 = 11558743LLU;
	uint8_t x11344 = UINT8_MAX;
	volatile int32_t t182 = 3289;

    t182 = ((x11341>>x11342)%(x11343!=x11344));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x11577 = 1U;
	volatile uint8_t x11578 = 2U;
	int16_t x11579 = 1;
	int32_t x11580 = INT32_MIN;

    t183 = ((x11577>>x11578)%(x11579!=x11580));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x11589 = UINT16_MAX;
	int8_t x11590 = 4;
	int8_t x11592 = -28;
	volatile int32_t t184 = 103;

    t184 = ((x11589>>x11590)%(x11591!=x11592));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x11629 = UINT8_MAX;
	uint8_t x11630 = 2U;
	int32_t x11631 = INT32_MIN;
	int16_t x11632 = -1;
	static volatile int32_t t185 = 0;

    t185 = ((x11629>>x11630)%(x11631!=x11632));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x11633 = 230U;
	uint16_t x11634 = 1U;
	uint64_t x11635 = 1520751567250321LLU;

    t186 = ((x11633>>x11634)%(x11635!=x11636));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x11677 = UINT32_MAX;
	uint16_t x11678 = 7U;
	volatile int64_t x11679 = 497373457202LL;

    t187 = ((x11677>>x11678)%(x11679!=x11680));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x11705 = 15612604U;
	uint8_t x11706 = 0U;
	static int64_t x11708 = INT64_MIN;
	uint32_t t188 = 802987U;

    t188 = ((x11705>>x11706)%(x11707!=x11708));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x11729 = INT16_MAX;
	volatile int8_t x11730 = 0;
	int64_t x11731 = -1LL;
	volatile int16_t x11732 = INT16_MIN;
	volatile int32_t t189 = 38440;

    t189 = ((x11729>>x11730)%(x11731!=x11732));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x11781 = 52250;
	int16_t x11782 = 0;
	int64_t x11783 = 4310LL;
	volatile int32_t x11784 = INT32_MIN;
	static volatile int32_t t190 = -389222;

    t190 = ((x11781>>x11782)%(x11783!=x11784));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x11825 = INT64_MAX;
	volatile int8_t x11826 = 1;
	int16_t x11827 = 5623;
	static int32_t x11828 = 0;
	static int64_t t191 = 224293172951821032LL;

    t191 = ((x11825>>x11826)%(x11827!=x11828));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x11925 = 0;
	int8_t x11927 = INT8_MIN;
	volatile uint16_t x11928 = 106U;
	volatile int32_t t192 = 22629935;

    t192 = ((x11925>>x11926)%(x11927!=x11928));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x12033 = 1038350938U;
	uint8_t x12034 = 30U;
	uint16_t x12035 = 394U;
	volatile uint32_t t193 = 25U;

    t193 = ((x12033>>x12034)%(x12035!=x12036));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x12309 = 97951LLU;
	volatile uint8_t x12310 = 7U;
	int64_t x12311 = INT64_MAX;
	int32_t x12312 = INT32_MIN;
	volatile uint64_t t194 = 32LLU;

    t194 = ((x12309>>x12310)%(x12311!=x12312));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x12353 = 142;
	int16_t x12354 = 14;
	static uint32_t x12355 = 216U;
	static volatile int32_t t195 = 109475849;

    t195 = ((x12353>>x12354)%(x12355!=x12356));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x12417 = 5U;
	uint16_t x12418 = 1U;
	volatile uint64_t x12419 = 44631486LLU;
	volatile int16_t x12420 = -1;
	volatile int32_t t196 = 1558138;

    t196 = ((x12417>>x12418)%(x12419!=x12420));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x12429 = UINT32_MAX;
	volatile int64_t x12431 = -3549835449717LL;
	static volatile uint32_t t197 = 41977U;

    t197 = ((x12429>>x12430)%(x12431!=x12432));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x12485 = 216U;
	uint16_t x12486 = 4U;
	static uint32_t x12487 = 1U;
	static int64_t x12488 = INT64_MIN;
	volatile uint32_t t198 = 37062U;

    t198 = ((x12485>>x12486)%(x12487!=x12488));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x12681 = 138983701060597LLU;
	volatile uint16_t x12682 = 1U;
	int16_t x12683 = INT16_MIN;
	static uint64_t t199 = 158637LLU;

    t199 = ((x12681>>x12682)%(x12683!=x12684));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

