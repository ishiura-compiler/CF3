#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x314 = 41U;
volatile int32_t x345 = 249703;
volatile uint8_t x360 = 11U;
int8_t x390 = 6;
int16_t x519 = INT16_MAX;
volatile int32_t t10 = 336699;
static int16_t x570 = 0;
static int32_t x572 = 1;
uint32_t x686 = 1510818U;
int32_t t13 = -3272684;
volatile int32_t t14 = -1804281;
uint32_t x846 = UINT32_MAX;
static uint8_t x848 = 1U;
int32_t t16 = -273;
uint32_t x1409 = 20312234U;
int32_t t18 = -47;
int16_t x1434 = -1;
uint8_t x1484 = 29U;
int64_t x1601 = INT64_MIN;
int16_t x1715 = 1;
static volatile int32_t t24 = -10315;
int8_t x1734 = INT8_MIN;
static volatile int32_t t26 = 2121;
static volatile int32_t t27 = -521;
int32_t t29 = -355;
int16_t x1933 = INT16_MIN;
int32_t x1935 = 24597;
volatile int32_t t30 = 930;
uint8_t x2038 = UINT8_MAX;
volatile int32_t x2039 = 12;
int8_t x2129 = INT8_MAX;
volatile int32_t x2130 = INT32_MAX;
uint64_t x2131 = 36778LLU;
uint32_t x2209 = 2U;
int64_t x2253 = -472084LL;
int64_t x2255 = INT64_MAX;
static volatile uint16_t x2467 = 16U;
uint16_t x2468 = 0U;
uint8_t x2493 = 3U;
volatile int32_t t41 = 95133110;
volatile int32_t t42 = -15;
volatile int32_t x2806 = -22471;
int16_t x2807 = 405;
volatile int32_t t43 = 89949;
uint16_t x2843 = 169U;
volatile int32_t t45 = -2471;
static volatile int64_t x2893 = INT64_MAX;
int8_t x2896 = 23;
int64_t x2927 = 236836520980LL;
volatile int8_t x2928 = 12;
uint8_t x2963 = 0U;
int64_t x3044 = 4LL;
int64_t x3119 = INT64_MAX;
int8_t x3180 = 6;
volatile uint64_t x3185 = 129456448LLU;
uint64_t x3209 = UINT64_MAX;
int32_t t55 = 21620;
uint64_t x3273 = UINT64_MAX;
static uint8_t x3303 = 2U;
volatile int8_t x3304 = 21;
static int8_t x3325 = 0;
int8_t x3327 = INT8_MAX;
int32_t t61 = 0;
int32_t t62 = 357788589;
static int16_t x3419 = INT16_MAX;
volatile int32_t t63 = 1056272580;
uint16_t x3536 = 1U;
int32_t x3541 = INT32_MAX;
volatile int8_t x3600 = 0;
int16_t x3637 = INT16_MIN;
uint16_t x3640 = 27U;
static int8_t x3654 = INT8_MIN;
uint64_t x3655 = 107804250LLU;
int64_t x3985 = 458280LL;
int16_t x3988 = 1;
int32_t x4126 = INT32_MAX;
int8_t x4189 = -1;
int32_t x4192 = 9;
int64_t x4205 = INT64_MIN;
int16_t x4268 = 1;
volatile int32_t t83 = -18423977;
volatile uint8_t x4430 = 14U;
volatile uint64_t x4434 = 26827284813LLU;
static uint8_t x4446 = 2U;
int32_t t87 = -631464500;
static volatile uint8_t x4762 = UINT8_MAX;
int8_t x4763 = 0;
static volatile uint32_t x4764 = 7U;
int8_t x4792 = 41;
uint32_t x4869 = 48U;
static volatile int32_t t92 = -119134458;
volatile uint64_t x4902 = 5021965192LLU;
int8_t x4904 = 62;
volatile int8_t x5005 = -1;
uint8_t x5006 = 17U;
volatile int32_t t94 = 1429275;
uint64_t x5021 = UINT64_MAX;
int16_t x5177 = INT16_MAX;


void f0(void) {
	int8_t x17 = -59;
	static volatile uint32_t x18 = 55U;
	uint8_t x19 = UINT8_MAX;
	static volatile int32_t x20 = 7;
	int32_t t0 = -8137;

	t0 = (x17<(x18&(x19>>x20)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MIN;
	uint32_t x175 = 0U;
	int8_t x176 = 22;
	int32_t t1 = -1250670;

	t1 = (x173<(x174&(x175>>x176)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x209 = 26812570209227322LL;
	volatile uint64_t x210 = 1763058569389310LLU;
	int32_t x211 = 317;
	uint16_t x212 = 1U;
	static volatile int32_t t2 = 1;

	t2 = (x209<(x210&(x211>>x212)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x313 = -448;
	static int8_t x315 = 1;
	volatile uint32_t x316 = 0U;
	int32_t t3 = 44459;

	t3 = (x313<(x314&(x315>>x316)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x346 = 16067835;
	static uint8_t x347 = UINT8_MAX;
	uint8_t x348 = 24U;
	static int32_t t4 = -18;

	t4 = (x345<(x346&(x347>>x348)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x353 = -1;
	uint64_t x354 = 23082217LLU;
	int32_t x355 = 1884593;
	int8_t x356 = 0;
	volatile int32_t t5 = 6;

	t5 = (x353<(x354&(x355>>x356)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x357 = INT64_MAX;
	int32_t x358 = -1;
	uint64_t x359 = 244645711266355LLU;
	int32_t t6 = 2226;

	t6 = (x357<(x358&(x359>>x360)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x389 = -1;
	volatile uint8_t x391 = UINT8_MAX;
	volatile int8_t x392 = 1;
	volatile int32_t t7 = 13529103;

	t7 = (x389<(x390&(x391>>x392)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x445 = 1727;
	uint32_t x446 = 4713430U;
	int32_t x447 = INT32_MAX;
	static int32_t x448 = 18;
	int32_t t8 = 30;

	t8 = (x445<(x446&(x447>>x448)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x509 = -1;
	uint16_t x510 = 27U;
	static uint16_t x511 = UINT16_MAX;
	uint8_t x512 = 6U;
	volatile int32_t t9 = 373086;

	t9 = (x509<(x510&(x511>>x512)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x517 = UINT8_MAX;
	int16_t x518 = -1;
	static volatile int8_t x520 = 2;

	t10 = (x517<(x518&(x519>>x520)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x569 = UINT32_MAX;
	int32_t x571 = 884337145;
	int32_t t11 = -21;

	t11 = (x569<(x570&(x571>>x572)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x609 = INT32_MIN;
	int8_t x610 = INT8_MIN;
	volatile uint16_t x611 = UINT16_MAX;
	static uint8_t x612 = 2U;
	volatile int32_t t12 = 16317;

	t12 = (x609<(x610&(x611>>x612)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x685 = INT8_MAX;
	volatile int8_t x687 = INT8_MAX;
	int16_t x688 = 1;

	t13 = (x685<(x686&(x687>>x688)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x757 = -22;
	volatile uint16_t x758 = 1U;
	uint8_t x759 = 4U;
	uint32_t x760 = 17U;

	t14 = (x757<(x758&(x759>>x760)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x845 = 1U;
	volatile int8_t x847 = INT8_MAX;
	int32_t t15 = 3772;

	t15 = (x845<(x846&(x847>>x848)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1017 = -1LL;
	uint64_t x1018 = 16429794377LLU;
	int16_t x1019 = 0;
	uint16_t x1020 = 6U;

	t16 = (x1017<(x1018&(x1019>>x1020)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1221 = INT8_MAX;
	int64_t x1222 = 180037264LL;
	static uint32_t x1223 = 3316052U;
	uint64_t x1224 = 15LLU;
	int32_t t17 = 49168375;

	t17 = (x1221<(x1222&(x1223>>x1224)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x1410 = 1020538LLU;
	uint8_t x1411 = 118U;
	uint32_t x1412 = 2U;

	t18 = (x1409<(x1410&(x1411>>x1412)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1433 = 46052680U;
	uint32_t x1435 = 14690053U;
	uint8_t x1436 = 4U;
	static volatile int32_t t19 = 3898;

	t19 = (x1433<(x1434&(x1435>>x1436)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x1481 = INT64_MIN;
	int32_t x1482 = INT32_MAX;
	int64_t x1483 = INT64_MAX;
	static int32_t t20 = -1889877;

	t20 = (x1481<(x1482&(x1483>>x1484)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1557 = INT32_MIN;
	int64_t x1558 = INT64_MIN;
	volatile uint32_t x1559 = 1234880U;
	static int8_t x1560 = 5;
	static volatile int32_t t21 = -14;

	t21 = (x1557<(x1558&(x1559>>x1560)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1602 = -1;
	static uint16_t x1603 = 9820U;
	static uint8_t x1604 = 7U;
	volatile int32_t t22 = -9672124;

	t22 = (x1601<(x1602&(x1603>>x1604)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1713 = INT8_MAX;
	int16_t x1714 = INT16_MIN;
	volatile int8_t x1716 = 5;
	int32_t t23 = -247;

	t23 = (x1713<(x1714&(x1715>>x1716)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1729 = -1;
	int8_t x1730 = INT8_MAX;
	int64_t x1731 = INT64_MAX;
	int32_t x1732 = 5;

	t24 = (x1729<(x1730&(x1731>>x1732)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1733 = -1LL;
	volatile int64_t x1735 = INT64_MAX;
	static int16_t x1736 = 0;
	volatile int32_t t25 = -56378280;

	t25 = (x1733<(x1734&(x1735>>x1736)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1761 = INT32_MIN;
	int8_t x1762 = INT8_MIN;
	static volatile int16_t x1763 = 223;
	static volatile uint8_t x1764 = 1U;

	t26 = (x1761<(x1762&(x1763>>x1764)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1805 = INT32_MIN;
	int8_t x1806 = INT8_MIN;
	uint64_t x1807 = UINT64_MAX;
	uint64_t x1808 = 1LLU;

	t27 = (x1805<(x1806&(x1807>>x1808)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1861 = 303315810265117LL;
	int64_t x1862 = INT64_MIN;
	int64_t x1863 = INT64_MAX;
	static uint8_t x1864 = 1U;
	volatile int32_t t28 = 16005;

	t28 = (x1861<(x1862&(x1863>>x1864)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1897 = INT8_MIN;
	volatile int32_t x1898 = -1;
	int16_t x1899 = INT16_MAX;
	int8_t x1900 = 1;

	t29 = (x1897<(x1898&(x1899>>x1900)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1934 = UINT32_MAX;
	int8_t x1936 = 25;

	t30 = (x1933<(x1934&(x1935>>x1936)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1957 = INT8_MIN;
	int64_t x1958 = INT64_MIN;
	uint8_t x1959 = UINT8_MAX;
	uint8_t x1960 = 1U;
	int32_t t31 = 18;

	t31 = (x1957<(x1958&(x1959>>x1960)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2037 = INT16_MAX;
	uint64_t x2040 = 1LLU;
	int32_t t32 = -298926;

	t32 = (x2037<(x2038&(x2039>>x2040)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2093 = INT64_MIN;
	int16_t x2094 = -11;
	volatile int16_t x2095 = 4197;
	uint8_t x2096 = 27U;
	volatile int32_t t33 = 0;

	t33 = (x2093<(x2094&(x2095>>x2096)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2132 = 0;
	static volatile int32_t t34 = -2719;

	t34 = (x2129<(x2130&(x2131>>x2132)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2145 = INT64_MIN;
	static volatile uint32_t x2146 = 240893U;
	volatile uint32_t x2147 = 0U;
	uint8_t x2148 = 23U;
	int32_t t35 = -155;

	t35 = (x2145<(x2146&(x2147>>x2148)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2153 = -1;
	uint8_t x2154 = 8U;
	uint32_t x2155 = 968842894U;
	static volatile int16_t x2156 = 0;
	volatile int32_t t36 = -110192863;

	t36 = (x2153<(x2154&(x2155>>x2156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2210 = -31453;
	uint64_t x2211 = 224703393LLU;
	static int8_t x2212 = 0;
	int32_t t37 = 67;

	t37 = (x2209<(x2210&(x2211>>x2212)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2254 = 42321839382405028LL;
	static uint16_t x2256 = 36U;
	int32_t t38 = 63465644;

	t38 = (x2253<(x2254&(x2255>>x2256)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2465 = 189U;
	uint64_t x2466 = UINT64_MAX;
	int32_t t39 = 1190873;

	t39 = (x2465<(x2466&(x2467>>x2468)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2494 = 14466;
	int16_t x2495 = 17;
	uint8_t x2496 = 7U;
	int32_t t40 = 342998;

	t40 = (x2493<(x2494&(x2495>>x2496)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2565 = UINT32_MAX;
	int32_t x2566 = INT32_MIN;
	int16_t x2567 = 1;
	int8_t x2568 = 0;

	t41 = (x2565<(x2566&(x2567>>x2568)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2585 = INT8_MIN;
	static int32_t x2586 = INT32_MIN;
	static int32_t x2587 = 0;
	uint16_t x2588 = 5U;

	t42 = (x2585<(x2586&(x2587>>x2588)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2805 = UINT64_MAX;
	int8_t x2808 = 1;

	t43 = (x2805<(x2806&(x2807>>x2808)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x2837 = 1904649579U;
	uint64_t x2838 = 3483LLU;
	static int16_t x2839 = INT16_MAX;
	static volatile uint8_t x2840 = 0U;
	volatile int32_t t44 = -116586;

	t44 = (x2837<(x2838&(x2839>>x2840)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2841 = INT8_MIN;
	uint32_t x2842 = UINT32_MAX;
	static volatile int8_t x2844 = 1;

	t45 = (x2841<(x2842&(x2843>>x2844)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2885 = 91568848;
	uint16_t x2886 = 1U;
	uint8_t x2887 = 3U;
	uint8_t x2888 = 6U;
	volatile int32_t t46 = 357497938;

	t46 = (x2885<(x2886&(x2887>>x2888)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2894 = INT16_MIN;
	volatile uint16_t x2895 = 263U;
	int32_t t47 = 7818759;

	t47 = (x2893<(x2894&(x2895>>x2896)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2925 = INT32_MAX;
	static int16_t x2926 = 1;
	volatile int32_t t48 = -46627;

	t48 = (x2925<(x2926&(x2927>>x2928)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x2961 = 2LL;
	uint8_t x2962 = 118U;
	uint16_t x2964 = 0U;
	volatile int32_t t49 = -3;

	t49 = (x2961<(x2962&(x2963>>x2964)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x3041 = INT8_MAX;
	int32_t x3042 = -31536;
	uint64_t x3043 = 3260LLU;
	int32_t t50 = 0;

	t50 = (x3041<(x3042&(x3043>>x3044)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x3117 = INT64_MIN;
	int32_t x3118 = INT32_MIN;
	volatile int16_t x3120 = 1;
	int32_t t51 = 229736;

	t51 = (x3117<(x3118&(x3119>>x3120)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x3177 = 1U;
	uint8_t x3178 = UINT8_MAX;
	volatile int32_t x3179 = 1;
	int32_t t52 = -3684978;

	t52 = (x3177<(x3178&(x3179>>x3180)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x3186 = INT8_MAX;
	uint16_t x3187 = 14U;
	int64_t x3188 = 0LL;
	volatile int32_t t53 = -121;

	t53 = (x3185<(x3186&(x3187>>x3188)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x3210 = 104U;
	int16_t x3211 = INT16_MAX;
	static volatile uint16_t x3212 = 4U;
	volatile int32_t t54 = -3;

	t54 = (x3209<(x3210&(x3211>>x3212)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3237 = INT16_MIN;
	int8_t x3238 = 13;
	static uint16_t x3239 = 689U;
	uint64_t x3240 = 0LLU;

	t55 = (x3237<(x3238&(x3239>>x3240)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3245 = -1;
	int8_t x3246 = -1;
	static uint32_t x3247 = 60U;
	volatile uint8_t x3248 = 6U;
	int32_t t56 = 47611627;

	t56 = (x3245<(x3246&(x3247>>x3248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3253 = 84344LL;
	uint32_t x3254 = UINT32_MAX;
	int32_t x3255 = 128614;
	uint32_t x3256 = 2U;
	volatile int32_t t57 = 141037115;

	t57 = (x3253<(x3254&(x3255>>x3256)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3274 = INT64_MAX;
	static volatile int16_t x3275 = 13;
	uint16_t x3276 = 4U;
	volatile int32_t t58 = 11284544;

	t58 = (x3273<(x3274&(x3275>>x3276)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x3301 = INT8_MIN;
	int32_t x3302 = -1;
	int32_t t59 = 17967069;

	t59 = (x3301<(x3302&(x3303>>x3304)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3317 = -1;
	uint16_t x3318 = 4U;
	uint8_t x3319 = 106U;
	volatile uint8_t x3320 = 16U;
	int32_t t60 = -560320;

	t60 = (x3317<(x3318&(x3319>>x3320)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3326 = -1;
	static uint16_t x3328 = 2U;

	t61 = (x3325<(x3326&(x3327>>x3328)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x3385 = -418646LL;
	uint32_t x3386 = UINT32_MAX;
	static uint8_t x3387 = UINT8_MAX;
	int8_t x3388 = 26;

	t62 = (x3385<(x3386&(x3387>>x3388)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3417 = -1;
	int64_t x3418 = 17393538398559LL;
	int8_t x3420 = 20;

	t63 = (x3417<(x3418&(x3419>>x3420)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x3521 = -118LL;
	int64_t x3522 = -1LL;
	static int64_t x3523 = 502451173LL;
	uint8_t x3524 = 5U;
	int32_t t64 = 9;

	t64 = (x3521<(x3522&(x3523>>x3524)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x3533 = UINT64_MAX;
	int32_t x3534 = INT32_MIN;
	volatile uint32_t x3535 = 26335627U;
	static int32_t t65 = 2677;

	t65 = (x3533<(x3534&(x3535>>x3536)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3542 = INT8_MAX;
	uint8_t x3543 = UINT8_MAX;
	uint8_t x3544 = 3U;
	volatile int32_t t66 = -44098643;

	t66 = (x3541<(x3542&(x3543>>x3544)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3561 = 48LL;
	int64_t x3562 = 1278581134706881LL;
	int8_t x3563 = 1;
	int64_t x3564 = 1LL;
	static int32_t t67 = 6;

	t67 = (x3561<(x3562&(x3563>>x3564)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3581 = INT8_MIN;
	int8_t x3582 = -2;
	uint8_t x3583 = 16U;
	int8_t x3584 = 15;
	static int32_t t68 = 15859;

	t68 = (x3581<(x3582&(x3583>>x3584)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3597 = INT16_MIN;
	int8_t x3598 = -1;
	static int64_t x3599 = INT64_MAX;
	static int32_t t69 = 1978698;

	t69 = (x3597<(x3598&(x3599>>x3600)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3629 = -3;
	uint32_t x3630 = 966U;
	int16_t x3631 = INT16_MAX;
	uint16_t x3632 = 15U;
	int32_t t70 = 44237566;

	t70 = (x3629<(x3630&(x3631>>x3632)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x3638 = -1;
	uint32_t x3639 = 649882645U;
	int32_t t71 = 34039291;

	t71 = (x3637<(x3638&(x3639>>x3640)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3653 = INT64_MAX;
	uint8_t x3656 = 3U;
	static int32_t t72 = 124752;

	t72 = (x3653<(x3654&(x3655>>x3656)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3705 = 5;
	int32_t x3706 = -26322823;
	static uint8_t x3707 = UINT8_MAX;
	uint8_t x3708 = 12U;
	volatile int32_t t73 = 218590;

	t73 = (x3705<(x3706&(x3707>>x3708)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x3753 = 26U;
	static int8_t x3754 = INT8_MAX;
	uint16_t x3755 = 315U;
	uint16_t x3756 = 27U;
	int32_t t74 = -198663920;

	t74 = (x3753<(x3754&(x3755>>x3756)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x3913 = INT32_MIN;
	int8_t x3914 = 5;
	int8_t x3915 = INT8_MAX;
	int32_t x3916 = 1;
	static volatile int32_t t75 = 0;

	t75 = (x3913<(x3914&(x3915>>x3916)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3986 = INT64_MAX;
	static uint64_t x3987 = 120401LLU;
	volatile int32_t t76 = 5336760;

	t76 = (x3985<(x3986&(x3987>>x3988)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3989 = UINT32_MAX;
	int64_t x3990 = 203160639912895525LL;
	uint64_t x3991 = 145774691690792449LLU;
	static int16_t x3992 = 14;
	volatile int32_t t77 = -1477;

	t77 = (x3989<(x3990&(x3991>>x3992)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4125 = 0;
	static uint8_t x4127 = 1U;
	static int8_t x4128 = 0;
	volatile int32_t t78 = -1;

	t78 = (x4125<(x4126&(x4127>>x4128)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4190 = -1;
	int16_t x4191 = INT16_MAX;
	static volatile int32_t t79 = 39331542;

	t79 = (x4189<(x4190&(x4191>>x4192)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4206 = 11726262478LL;
	uint64_t x4207 = 58346912828143231LLU;
	uint16_t x4208 = 31U;
	static int32_t t80 = -453590;

	t80 = (x4205<(x4206&(x4207>>x4208)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x4265 = 22U;
	static int16_t x4266 = INT16_MAX;
	volatile uint64_t x4267 = UINT64_MAX;
	static int32_t t81 = -434;

	t81 = (x4265<(x4266&(x4267>>x4268)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4273 = INT8_MAX;
	uint64_t x4274 = UINT64_MAX;
	static volatile uint8_t x4275 = 1U;
	uint8_t x4276 = 3U;
	volatile int32_t t82 = 10990026;

	t82 = (x4273<(x4274&(x4275>>x4276)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x4325 = INT8_MAX;
	static uint64_t x4326 = UINT64_MAX;
	uint16_t x4327 = 2269U;
	uint8_t x4328 = 4U;

	t83 = (x4325<(x4326&(x4327>>x4328)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4381 = 1809707LLU;
	uint64_t x4382 = 5342949LLU;
	int64_t x4383 = 8LL;
	uint32_t x4384 = 52U;
	int32_t t84 = -10546;

	t84 = (x4381<(x4382&(x4383>>x4384)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4429 = 1061336292LLU;
	int32_t x4431 = INT32_MAX;
	static int64_t x4432 = 2LL;
	static volatile int32_t t85 = 810324789;

	t85 = (x4429<(x4430&(x4431>>x4432)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4433 = -3547;
	uint16_t x4435 = UINT16_MAX;
	int16_t x4436 = 1;
	volatile int32_t t86 = -8;

	t86 = (x4433<(x4434&(x4435>>x4436)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4445 = INT8_MIN;
	static int8_t x4447 = 1;
	static int32_t x4448 = 8;

	t87 = (x4445<(x4446&(x4447>>x4448)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4705 = -1LL;
	int32_t x4706 = -1;
	uint32_t x4707 = UINT32_MAX;
	uint8_t x4708 = 14U;
	int32_t t88 = -90971153;

	t88 = (x4705<(x4706&(x4707>>x4708)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x4761 = 104493170;
	volatile int32_t t89 = -3;

	t89 = (x4761<(x4762&(x4763>>x4764)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4789 = 364U;
	int8_t x4790 = INT8_MIN;
	uint64_t x4791 = 9439890LLU;
	int32_t t90 = -6;

	t90 = (x4789<(x4790&(x4791>>x4792)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x4861 = 85467085008790LLU;
	int16_t x4862 = -1;
	volatile uint16_t x4863 = 76U;
	uint16_t x4864 = 1U;
	int32_t t91 = 14170;

	t91 = (x4861<(x4862&(x4863>>x4864)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4870 = -23359084;
	uint64_t x4871 = 4283919135255576LLU;
	static volatile int8_t x4872 = 10;

	t92 = (x4869<(x4870&(x4871>>x4872)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x4901 = INT16_MIN;
	int64_t x4903 = 1644264295937901475LL;
	int32_t t93 = -89558;

	t93 = (x4901<(x4902&(x4903>>x4904)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x5007 = UINT32_MAX;
	uint16_t x5008 = 0U;

	t94 = (x5005<(x5006&(x5007>>x5008)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5022 = 4U;
	static uint64_t x5023 = UINT64_MAX;
	static int16_t x5024 = 1;
	volatile int32_t t95 = 13;

	t95 = (x5021<(x5022&(x5023>>x5024)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5029 = INT32_MIN;
	int16_t x5030 = -48;
	int16_t x5031 = INT16_MAX;
	uint32_t x5032 = 17U;
	int32_t t96 = 789;

	t96 = (x5029<(x5030&(x5031>>x5032)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5109 = -1;
	static int64_t x5110 = -1LL;
	int32_t x5111 = INT32_MAX;
	uint8_t x5112 = 9U;
	volatile int32_t t97 = 390;

	t97 = (x5109<(x5110&(x5111>>x5112)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5178 = UINT8_MAX;
	uint64_t x5179 = 381323741224LLU;
	int16_t x5180 = 2;
	volatile int32_t t98 = 4724;

	t98 = (x5177<(x5178&(x5179>>x5180)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5189 = 0;
	uint32_t x5190 = 8U;
	int64_t x5191 = 20LL;
	int32_t x5192 = 11;
	int32_t t99 = 7623074;

	t99 = (x5189<(x5190&(x5191>>x5192)));

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

