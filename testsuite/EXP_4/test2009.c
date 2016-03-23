
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

static volatile int32_t x2 = INT32_MIN;
volatile int16_t x4 = 0;
int32_t t0 = -454;
uint32_t x30 = 327906U;
static int8_t x125 = INT8_MAX;
int32_t x126 = INT32_MIN;
static uint64_t x253 = UINT64_MAX;
uint32_t x255 = 84656137U;
uint64_t x419 = UINT64_MAX;
uint8_t x578 = 1U;
int16_t x817 = INT16_MIN;
int32_t x839 = INT32_MAX;
volatile int32_t x1014 = 352;
int32_t t13 = 99456813;
static volatile int32_t t15 = -7;
int16_t x1210 = 2899;
int32_t t16 = -7;
volatile int16_t x1349 = INT16_MAX;
int64_t x1351 = INT64_MAX;
volatile uint32_t x1352 = 1U;
uint8_t x1374 = 104U;
int32_t t20 = -2944432;
int64_t x1446 = INT64_MIN;
static volatile int8_t x1447 = 8;
uint16_t x1448 = 0U;
uint64_t x1635 = 56479327805225997LLU;
static volatile int64_t x1923 = INT64_MAX;
int32_t t25 = -86822;
uint64_t x2273 = UINT64_MAX;
uint8_t x2274 = UINT8_MAX;
int32_t t29 = 1106763;
int64_t x2391 = 865428703724LL;
int16_t x2721 = INT16_MAX;
volatile int16_t x2765 = INT16_MIN;
volatile int32_t t37 = 25593445;
int32_t x2871 = INT32_MAX;
int8_t x2872 = 1;
volatile uint8_t x3295 = 1U;
uint16_t x3380 = 1U;
uint16_t x3381 = 7U;
static volatile int32_t t48 = 593672647;
int16_t x3507 = INT16_MAX;
static uint16_t x4097 = UINT16_MAX;
static uint8_t x4100 = 1U;
uint8_t x4105 = 2U;
int8_t x4106 = 1;
uint8_t x4352 = 0U;
volatile int32_t t58 = 3093689;
int8_t x4524 = 24;
static int16_t x4613 = -26;
int32_t t61 = 27;
static uint64_t x4619 = UINT64_MAX;
int64_t x4699 = 1LL;
static int32_t t63 = -59;
static int32_t x4754 = -3083;
int16_t x5004 = 0;
volatile uint8_t x5115 = 1U;
volatile int64_t x5292 = 0LL;
int32_t t73 = 223568722;
volatile uint64_t x5450 = 0LLU;
int64_t x5743 = 1957393295370LL;
volatile uint8_t x5821 = 3U;
int64_t x5822 = INT64_MIN;
int8_t x5824 = 3;
volatile int32_t t77 = -619724022;
static int64_t x5846 = INT64_MAX;
int32_t x5847 = INT32_MAX;
uint8_t x5937 = 3U;
uint8_t x6004 = 0U;
int8_t x6260 = 2;
volatile uint8_t x6510 = 76U;
static int32_t t85 = -418435;
static uint64_t x6869 = UINT64_MAX;
static volatile int32_t x6870 = 14567406;
uint16_t x6871 = 6095U;
volatile int64_t x6903 = INT64_MAX;
volatile int16_t x6913 = 6018;
static int16_t x7122 = INT16_MAX;
int64_t x7123 = INT64_MAX;
volatile int32_t t90 = -10594146;
static volatile int8_t x7234 = INT8_MAX;
int32_t t91 = 270929;
static uint64_t x7301 = 13672170721286194LLU;
int64_t x7302 = 810514066791638615LL;
volatile uint32_t x7303 = 256767U;
static volatile int64_t x7778 = INT64_MAX;
volatile int64_t x7819 = 2246893718791LL;
int32_t x7835 = INT32_MAX;
int32_t t98 = 15;
static volatile int64_t x7906 = -1LL;
static int8_t x7908 = 0;
int64_t x8018 = INT64_MAX;
uint64_t x8019 = 124219LLU;
int8_t x8021 = INT8_MIN;
int16_t x8029 = INT16_MIN;
static int8_t x8030 = 0;
int32_t x8165 = -1;
int64_t x8236 = 0LL;
int16_t x8289 = INT16_MIN;
volatile int16_t x8292 = 0;
static volatile int32_t x8593 = 414082109;
static int32_t x8626 = -1;
uint32_t x8663 = 83243U;
uint16_t x8664 = 3U;
uint8_t x8804 = 7U;
int8_t x8880 = 5;
volatile uint8_t x8916 = 0U;
volatile int32_t t114 = -123669;
volatile uint8_t x8972 = 1U;
uint64_t x8983 = 7609150LLU;
static int32_t t116 = 220978538;
static int16_t x9022 = INT16_MIN;
int32_t x9285 = INT32_MAX;
static uint8_t x9332 = 21U;
int32_t t124 = 0;
uint16_t x9377 = 1U;
int32_t x9465 = -1;
uint64_t x9466 = 629LLU;
uint32_t x9578 = 85U;
int8_t x9652 = 1;
int8_t x9674 = INT8_MAX;
int8_t x9705 = 61;
int8_t x9706 = INT8_MIN;
uint64_t x9731 = 45447LLU;
int32_t t133 = 63;
int32_t x9943 = INT32_MAX;
uint8_t x9984 = 1U;
uint16_t x10054 = 217U;
int64_t x10127 = INT64_MAX;
uint16_t x10144 = 0U;
volatile uint64_t x10355 = 168995417413LLU;
int8_t x10356 = 1;
volatile int32_t t140 = 166036674;
int16_t x10433 = INT16_MIN;
int64_t x10434 = -129291308LL;
static int8_t x10447 = 39;
volatile int32_t t145 = -14244;
int16_t x10825 = INT16_MAX;
int32_t x10860 = 0;
static int8_t x10974 = -1;
uint16_t x10976 = 2U;
volatile int32_t t149 = -6;
volatile int8_t x11039 = INT8_MAX;
static int16_t x11040 = 4;
uint16_t x11149 = UINT16_MAX;
uint32_t x11151 = 15123083U;
uint16_t x11152 = 0U;
uint64_t x11210 = UINT64_MAX;
int8_t x11430 = INT8_MAX;
static int8_t x11432 = 0;
int32_t t156 = 404000;
static int8_t x11677 = INT8_MIN;
int8_t x11680 = 0;
int32_t t158 = -886;
static volatile int32_t t159 = -4;
int32_t x11811 = INT32_MAX;
int64_t x11819 = 16475745LL;
uint16_t x11994 = 1833U;
volatile uint8_t x12228 = 7U;
uint32_t x12243 = 971U;
static int64_t x12244 = 9LL;
uint16_t x12685 = UINT16_MAX;
volatile uint32_t x12687 = 2877987U;
uint32_t x13185 = 292310304U;
int8_t x13188 = 0;
uint32_t x13337 = 3348U;
volatile int16_t x13338 = INT16_MIN;
static volatile int32_t t175 = 81683661;
int8_t x13458 = -1;
uint64_t x13459 = UINT64_MAX;
int32_t x13630 = INT32_MIN;
static uint8_t x13631 = 3U;
int32_t x13734 = -1;
int32_t t180 = 6;
uint32_t x13799 = 21142U;
int32_t t181 = -138;
int16_t x13821 = INT16_MIN;
uint64_t x13822 = 0LLU;
volatile uint8_t x13832 = 4U;
int32_t x13854 = 10864909;
volatile uint32_t x14022 = 5967U;
uint64_t x14023 = UINT64_MAX;
uint8_t x14024 = 4U;
int32_t t187 = 4017;
int32_t x14065 = INT32_MIN;
static uint64_t x14192 = 0LLU;
volatile int32_t t190 = 0;
int32_t x14356 = 1;
volatile int32_t t193 = -6;
volatile int8_t x14363 = INT8_MAX;
static int8_t x14388 = 1;
uint32_t x14503 = 2764U;
uint8_t x14504 = 0U;
int16_t x14533 = INT16_MIN;
uint32_t x14642 = UINT32_MAX;
uint16_t x14644 = 50U;
volatile int32_t t198 = -944156;
static int16_t x14659 = 266;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	int8_t x3 = INT8_MAX;

    t0 = (x1!=(x2/(x3>>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x29 = INT64_MIN;
	uint32_t x31 = UINT32_MAX;
	volatile uint8_t x32 = 2U;
	volatile int32_t t1 = -414;

    t1 = (x29!=(x30/(x31>>x32)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x127 = 469626769;
	uint8_t x128 = 4U;
	int32_t t2 = 15;

    t2 = (x125!=(x126/(x127>>x128)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x254 = INT8_MIN;
	uint16_t x256 = 1U;
	int32_t t3 = -36315532;

    t3 = (x253!=(x254/(x255>>x256)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x417 = UINT16_MAX;
	uint8_t x418 = 37U;
	uint8_t x420 = 10U;
	int32_t t4 = -3988;

    t4 = (x417!=(x418/(x419>>x420)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x429 = INT64_MIN;
	int8_t x430 = -41;
	uint64_t x431 = 59109936496LLU;
	static volatile uint8_t x432 = 1U;
	volatile int32_t t5 = -958145;

    t5 = (x429!=(x430/(x431>>x432)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x577 = UINT32_MAX;
	int64_t x579 = 218815298564LL;
	uint8_t x580 = 3U;
	volatile int32_t t6 = -3;

    t6 = (x577!=(x578/(x579>>x580)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x737 = -1;
	int32_t x738 = INT32_MAX;
	uint32_t x739 = UINT32_MAX;
	int16_t x740 = 5;
	int32_t t7 = 209102;

    t7 = (x737!=(x738/(x739>>x740)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x818 = -8;
	uint8_t x819 = 4U;
	uint16_t x820 = 1U;
	static int32_t t8 = 0;

    t8 = (x817!=(x818/(x819>>x820)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x837 = INT16_MAX;
	uint8_t x838 = 17U;
	static uint16_t x840 = 1U;
	int32_t t9 = 198446245;

    t9 = (x837!=(x838/(x839>>x840)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x853 = INT64_MAX;
	int8_t x854 = 20;
	static int16_t x855 = INT16_MAX;
	uint64_t x856 = 5LLU;
	static int32_t t10 = -9610;

    t10 = (x853!=(x854/(x855>>x856)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x905 = INT32_MAX;
	uint64_t x906 = UINT64_MAX;
	volatile int16_t x907 = INT16_MAX;
	uint8_t x908 = 2U;
	int32_t t11 = -13964411;

    t11 = (x905!=(x906/(x907>>x908)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x1013 = INT32_MAX;
	int8_t x1015 = INT8_MAX;
	volatile int8_t x1016 = 2;
	volatile int32_t t12 = 15917542;

    t12 = (x1013!=(x1014/(x1015>>x1016)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x1021 = INT32_MAX;
	int16_t x1022 = 55;
	int8_t x1023 = 28;
	uint16_t x1024 = 3U;

    t13 = (x1021!=(x1022/(x1023>>x1024)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1101 = 24138809LLU;
	int8_t x1102 = INT8_MAX;
	volatile uint64_t x1103 = 7624960310702LLU;
	int8_t x1104 = 13;
	static volatile int32_t t14 = 388634;

    t14 = (x1101!=(x1102/(x1103>>x1104)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1161 = -1;
	int16_t x1162 = -852;
	volatile uint32_t x1163 = 4639398U;
	uint16_t x1164 = 0U;

    t15 = (x1161!=(x1162/(x1163>>x1164)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x1209 = 391269;
	int32_t x1211 = 1558;
	static uint16_t x1212 = 1U;

    t16 = (x1209!=(x1210/(x1211>>x1212)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x1217 = INT8_MIN;
	uint16_t x1218 = 2655U;
	static int32_t x1219 = INT32_MAX;
	int32_t x1220 = 0;
	volatile int32_t t17 = -19;

    t17 = (x1217!=(x1218/(x1219>>x1220)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1350 = INT8_MIN;
	volatile int32_t t18 = -542594;

    t18 = (x1349!=(x1350/(x1351>>x1352)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1373 = 28LLU;
	int16_t x1375 = 167;
	uint8_t x1376 = 1U;
	int32_t t19 = 781;

    t19 = (x1373!=(x1374/(x1375>>x1376)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x1441 = -3587;
	int64_t x1442 = -1LL;
	uint16_t x1443 = UINT16_MAX;
	static uint8_t x1444 = 3U;

    t20 = (x1441!=(x1442/(x1443>>x1444)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1445 = 29U;
	volatile int32_t t21 = 0;

    t21 = (x1445!=(x1446/(x1447>>x1448)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x1633 = -456;
	volatile uint64_t x1634 = UINT64_MAX;
	int16_t x1636 = 0;
	int32_t t22 = -20967;

    t22 = (x1633!=(x1634/(x1635>>x1636)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x1921 = INT32_MAX;
	int32_t x1922 = -1;
	static uint8_t x1924 = 8U;
	int32_t t23 = -14;

    t23 = (x1921!=(x1922/(x1923>>x1924)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x1981 = UINT16_MAX;
	static int64_t x1982 = -31267776271063LL;
	int16_t x1983 = INT16_MAX;
	uint64_t x1984 = 3LLU;
	int32_t t24 = 3948418;

    t24 = (x1981!=(x1982/(x1983>>x1984)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x2021 = 1U;
	static uint16_t x2022 = UINT16_MAX;
	uint8_t x2023 = 3U;
	volatile int8_t x2024 = 1;

    t25 = (x2021!=(x2022/(x2023>>x2024)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x2209 = 7LL;
	volatile int32_t x2210 = -1;
	uint64_t x2211 = 5LLU;
	uint16_t x2212 = 0U;
	int32_t t26 = -3;

    t26 = (x2209!=(x2210/(x2211>>x2212)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x2221 = 4U;
	volatile int16_t x2222 = -7063;
	uint64_t x2223 = 624239418713LLU;
	int8_t x2224 = 31;
	volatile int32_t t27 = 1458245;

    t27 = (x2221!=(x2222/(x2223>>x2224)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x2249 = INT64_MIN;
	uint16_t x2250 = 1U;
	uint64_t x2251 = 5451132350LLU;
	uint16_t x2252 = 3U;
	volatile int32_t t28 = 68;

    t28 = (x2249!=(x2250/(x2251>>x2252)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x2275 = 34U;
	uint16_t x2276 = 1U;

    t29 = (x2273!=(x2274/(x2275>>x2276)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x2389 = 14453U;
	uint16_t x2390 = 26U;
	static uint64_t x2392 = 6LLU;
	static volatile int32_t t30 = -1;

    t30 = (x2389!=(x2390/(x2391>>x2392)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x2529 = INT32_MIN;
	uint8_t x2530 = 85U;
	static uint16_t x2531 = 27046U;
	int8_t x2532 = 1;
	static volatile int32_t t31 = 2316924;

    t31 = (x2529!=(x2530/(x2531>>x2532)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x2557 = INT16_MIN;
	uint8_t x2558 = 26U;
	uint32_t x2559 = 321528809U;
	int16_t x2560 = 1;
	int32_t t32 = -3581056;

    t32 = (x2557!=(x2558/(x2559>>x2560)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2681 = -1;
	volatile int16_t x2682 = 222;
	volatile uint32_t x2683 = UINT32_MAX;
	int8_t x2684 = 2;
	static int32_t t33 = 286667117;

    t33 = (x2681!=(x2682/(x2683>>x2684)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x2722 = -80894223360LL;
	static int32_t x2723 = INT32_MAX;
	static volatile int8_t x2724 = 0;
	volatile int32_t t34 = -16938013;

    t34 = (x2721!=(x2722/(x2723>>x2724)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2766 = -1;
	uint64_t x2767 = UINT64_MAX;
	uint8_t x2768 = 56U;
	volatile int32_t t35 = -17266;

    t35 = (x2765!=(x2766/(x2767>>x2768)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x2781 = INT64_MIN;
	int8_t x2782 = -1;
	static int64_t x2783 = INT64_MAX;
	uint16_t x2784 = 1U;
	volatile int32_t t36 = 1902;

    t36 = (x2781!=(x2782/(x2783>>x2784)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x2793 = 1U;
	int32_t x2794 = -22793252;
	uint64_t x2795 = UINT64_MAX;
	uint32_t x2796 = 57U;

    t37 = (x2793!=(x2794/(x2795>>x2796)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x2805 = UINT8_MAX;
	static uint8_t x2806 = 5U;
	uint16_t x2807 = 231U;
	uint32_t x2808 = 1U;
	volatile int32_t t38 = -883;

    t38 = (x2805!=(x2806/(x2807>>x2808)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x2861 = -1;
	volatile int8_t x2862 = INT8_MAX;
	uint32_t x2863 = UINT32_MAX;
	volatile int8_t x2864 = 13;
	volatile int32_t t39 = -15;

    t39 = (x2861!=(x2862/(x2863>>x2864)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2869 = INT32_MAX;
	int16_t x2870 = -502;
	volatile int32_t t40 = -37;

    t40 = (x2869!=(x2870/(x2871>>x2872)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x2949 = INT32_MAX;
	int16_t x2950 = INT16_MAX;
	volatile int32_t x2951 = 14979;
	int64_t x2952 = 1LL;
	static volatile int32_t t41 = 13633;

    t41 = (x2949!=(x2950/(x2951>>x2952)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x3169 = UINT32_MAX;
	volatile int32_t x3170 = INT32_MAX;
	int32_t x3171 = INT32_MAX;
	uint8_t x3172 = 26U;
	int32_t t42 = -817635287;

    t42 = (x3169!=(x3170/(x3171>>x3172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x3257 = INT64_MAX;
	volatile uint8_t x3258 = UINT8_MAX;
	volatile uint64_t x3259 = 43677LLU;
	int16_t x3260 = 6;
	volatile int32_t t43 = 157915;

    t43 = (x3257!=(x3258/(x3259>>x3260)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x3269 = 12912;
	int8_t x3270 = -7;
	static int32_t x3271 = INT32_MAX;
	uint8_t x3272 = 12U;
	volatile int32_t t44 = 96372623;

    t44 = (x3269!=(x3270/(x3271>>x3272)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x3285 = 3U;
	int32_t x3286 = INT32_MAX;
	uint64_t x3287 = 51062219437363007LLU;
	static uint32_t x3288 = 8U;
	volatile int32_t t45 = -31;

    t45 = (x3285!=(x3286/(x3287>>x3288)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x3293 = INT8_MIN;
	volatile int64_t x3294 = INT64_MIN;
	uint8_t x3296 = 0U;
	volatile int32_t t46 = -1;

    t46 = (x3293!=(x3294/(x3295>>x3296)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x3377 = 6102989209LLU;
	int8_t x3378 = INT8_MIN;
	uint16_t x3379 = UINT16_MAX;
	int32_t t47 = -123195415;

    t47 = (x3377!=(x3378/(x3379>>x3380)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x3382 = 1;
	uint8_t x3383 = UINT8_MAX;
	uint64_t x3384 = 2LLU;

    t48 = (x3381!=(x3382/(x3383>>x3384)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x3505 = 9210548;
	static int8_t x3506 = -1;
	uint32_t x3508 = 0U;
	static int32_t t49 = 157071;

    t49 = (x3505!=(x3506/(x3507>>x3508)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x3581 = 690U;
	volatile uint32_t x3582 = UINT32_MAX;
	volatile int32_t x3583 = 192380;
	uint32_t x3584 = 1U;
	static volatile int32_t t50 = -733;

    t50 = (x3581!=(x3582/(x3583>>x3584)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x3705 = 8635778593014570LLU;
	int32_t x3706 = INT32_MIN;
	uint16_t x3707 = 228U;
	volatile uint16_t x3708 = 0U;
	volatile int32_t t51 = 1008;

    t51 = (x3705!=(x3706/(x3707>>x3708)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x3817 = INT8_MIN;
	int64_t x3818 = INT64_MAX;
	int8_t x3819 = INT8_MAX;
	volatile uint8_t x3820 = 4U;
	int32_t t52 = 3251930;

    t52 = (x3817!=(x3818/(x3819>>x3820)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x4098 = -1;
	uint64_t x4099 = 357774059LLU;
	volatile int32_t t53 = -4920664;

    t53 = (x4097!=(x4098/(x4099>>x4100)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x4107 = INT64_MAX;
	int8_t x4108 = 2;
	int32_t t54 = 1;

    t54 = (x4105!=(x4106/(x4107>>x4108)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x4113 = INT8_MIN;
	static uint16_t x4114 = 232U;
	volatile uint32_t x4115 = 2346U;
	uint32_t x4116 = 7U;
	int32_t t55 = -328;

    t55 = (x4113!=(x4114/(x4115>>x4116)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x4213 = -1;
	int64_t x4214 = -62LL;
	int64_t x4215 = INT64_MAX;
	uint8_t x4216 = 30U;
	volatile int32_t t56 = 52033;

    t56 = (x4213!=(x4214/(x4215>>x4216)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x4281 = UINT32_MAX;
	int8_t x4282 = -1;
	uint64_t x4283 = UINT64_MAX;
	int16_t x4284 = 60;
	static volatile int32_t t57 = 754094;

    t57 = (x4281!=(x4282/(x4283>>x4284)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x4349 = 7LLU;
	int32_t x4350 = INT32_MIN;
	uint64_t x4351 = 1746466123LLU;

    t58 = (x4349!=(x4350/(x4351>>x4352)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x4521 = 129306094170444301LLU;
	int8_t x4522 = INT8_MAX;
	int64_t x4523 = 142095049999597LL;
	int32_t t59 = -3;

    t59 = (x4521!=(x4522/(x4523>>x4524)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x4525 = 1818879962250909334LLU;
	int64_t x4526 = -986LL;
	uint64_t x4527 = UINT64_MAX;
	static uint32_t x4528 = 1U;
	static volatile int32_t t60 = 143;

    t60 = (x4525!=(x4526/(x4527>>x4528)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x4614 = INT16_MAX;
	uint64_t x4615 = 3011265382504LLU;
	static int8_t x4616 = 0;

    t61 = (x4613!=(x4614/(x4615>>x4616)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x4617 = -1;
	volatile uint8_t x4618 = 15U;
	volatile int32_t x4620 = 1;
	int32_t t62 = 49287720;

    t62 = (x4617!=(x4618/(x4619>>x4620)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x4697 = -1;
	volatile int16_t x4698 = -1;
	static uint32_t x4700 = 0U;

    t63 = (x4697!=(x4698/(x4699>>x4700)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x4729 = 49886489U;
	uint64_t x4730 = 5LLU;
	uint64_t x4731 = UINT64_MAX;
	uint32_t x4732 = 44U;
	int32_t t64 = -877517626;

    t64 = (x4729!=(x4730/(x4731>>x4732)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x4753 = INT32_MIN;
	int32_t x4755 = INT32_MAX;
	int8_t x4756 = 9;
	volatile int32_t t65 = 218;

    t65 = (x4753!=(x4754/(x4755>>x4756)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x4781 = INT64_MAX;
	int32_t x4782 = -3223;
	int8_t x4783 = INT8_MAX;
	int8_t x4784 = 0;
	int32_t t66 = -317;

    t66 = (x4781!=(x4782/(x4783>>x4784)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x4869 = -1;
	static volatile int64_t x4870 = INT64_MAX;
	int64_t x4871 = 11LL;
	uint8_t x4872 = 0U;
	volatile int32_t t67 = -88;

    t67 = (x4869!=(x4870/(x4871>>x4872)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x5001 = INT32_MIN;
	int8_t x5002 = INT8_MIN;
	uint32_t x5003 = 34227376U;
	int32_t t68 = -3918;

    t68 = (x5001!=(x5002/(x5003>>x5004)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x5113 = UINT16_MAX;
	int8_t x5114 = 2;
	uint16_t x5116 = 0U;
	int32_t t69 = 0;

    t69 = (x5113!=(x5114/(x5115>>x5116)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x5169 = -1LL;
	volatile int16_t x5170 = INT16_MAX;
	int64_t x5171 = INT64_MAX;
	int8_t x5172 = 29;
	volatile int32_t t70 = -56;

    t70 = (x5169!=(x5170/(x5171>>x5172)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x5289 = -1;
	int64_t x5290 = INT64_MAX;
	int64_t x5291 = INT64_MAX;
	int32_t t71 = -8;

    t71 = (x5289!=(x5290/(x5291>>x5292)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x5441 = INT64_MAX;
	static int32_t x5442 = -3972;
	uint32_t x5443 = UINT32_MAX;
	volatile int32_t x5444 = 5;
	static int32_t t72 = 63579065;

    t72 = (x5441!=(x5442/(x5443>>x5444)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x5445 = -1;
	int8_t x5446 = -8;
	static int32_t x5447 = INT32_MAX;
	int8_t x5448 = 1;

    t73 = (x5445!=(x5446/(x5447>>x5448)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x5449 = INT8_MAX;
	uint8_t x5451 = UINT8_MAX;
	static int16_t x5452 = 0;
	static volatile int32_t t74 = -268225461;

    t74 = (x5449!=(x5450/(x5451>>x5452)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x5553 = INT8_MAX;
	uint64_t x5554 = 12146278862LLU;
	uint64_t x5555 = UINT64_MAX;
	volatile uint8_t x5556 = 11U;
	volatile int32_t t75 = -252035;

    t75 = (x5553!=(x5554/(x5555>>x5556)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x5741 = -1;
	static int64_t x5742 = -1LL;
	int16_t x5744 = 1;
	static volatile int32_t t76 = 3171;

    t76 = (x5741!=(x5742/(x5743>>x5744)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x5823 = UINT16_MAX;

    t77 = (x5821!=(x5822/(x5823>>x5824)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x5845 = INT8_MAX;
	uint8_t x5848 = 16U;
	int32_t t78 = -4;

    t78 = (x5845!=(x5846/(x5847>>x5848)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x5938 = INT16_MIN;
	uint64_t x5939 = 34403356882741LLU;
	static uint8_t x5940 = 3U;
	int32_t t79 = 25138442;

    t79 = (x5937!=(x5938/(x5939>>x5940)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x6001 = -1;
	int16_t x6002 = INT16_MIN;
	uint16_t x6003 = 1563U;
	volatile int32_t t80 = 127834;

    t80 = (x6001!=(x6002/(x6003>>x6004)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x6049 = INT8_MAX;
	static uint8_t x6050 = 26U;
	volatile uint32_t x6051 = 201U;
	volatile uint32_t x6052 = 2U;
	volatile int32_t t81 = 6226312;

    t81 = (x6049!=(x6050/(x6051>>x6052)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x6257 = INT16_MAX;
	int32_t x6258 = INT32_MIN;
	uint16_t x6259 = UINT16_MAX;
	int32_t t82 = 8724666;

    t82 = (x6257!=(x6258/(x6259>>x6260)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x6261 = INT64_MIN;
	static volatile int8_t x6262 = 31;
	uint16_t x6263 = UINT16_MAX;
	uint64_t x6264 = 1LLU;
	volatile int32_t t83 = -328823;

    t83 = (x6261!=(x6262/(x6263>>x6264)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x6293 = -1;
	uint32_t x6294 = UINT32_MAX;
	volatile uint32_t x6295 = 53512U;
	static int16_t x6296 = 0;
	int32_t t84 = 424099;

    t84 = (x6293!=(x6294/(x6295>>x6296)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x6509 = 80LLU;
	int64_t x6511 = INT64_MAX;
	int32_t x6512 = 44;

    t85 = (x6509!=(x6510/(x6511>>x6512)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x6641 = -1;
	volatile int32_t x6642 = INT32_MIN;
	volatile int64_t x6643 = 1812905671724629LL;
	int8_t x6644 = 0;
	volatile int32_t t86 = 136294556;

    t86 = (x6641!=(x6642/(x6643>>x6644)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x6872 = 12U;
	int32_t t87 = 165133114;

    t87 = (x6869!=(x6870/(x6871>>x6872)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x6901 = -9986;
	uint32_t x6902 = 6273165U;
	int8_t x6904 = 12;
	static volatile int32_t t88 = -30;

    t88 = (x6901!=(x6902/(x6903>>x6904)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x6914 = INT8_MIN;
	int16_t x6915 = INT16_MAX;
	uint8_t x6916 = 1U;
	volatile int32_t t89 = -102;

    t89 = (x6913!=(x6914/(x6915>>x6916)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x7121 = UINT64_MAX;
	int8_t x7124 = 0;

    t90 = (x7121!=(x7122/(x7123>>x7124)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x7233 = -8141426;
	uint64_t x7235 = 1069719594607447LLU;
	static uint8_t x7236 = 15U;

    t91 = (x7233!=(x7234/(x7235>>x7236)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x7304 = 1;
	static volatile int32_t t92 = 29849;

    t92 = (x7301!=(x7302/(x7303>>x7304)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x7373 = 8100;
	volatile int32_t x7374 = INT32_MAX;
	static volatile int32_t x7375 = INT32_MAX;
	static int8_t x7376 = 0;
	static volatile int32_t t93 = -14387;

    t93 = (x7373!=(x7374/(x7375>>x7376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x7529 = -1;
	uint32_t x7530 = 62042488U;
	int64_t x7531 = INT64_MAX;
	volatile uint16_t x7532 = 4U;
	int32_t t94 = 0;

    t94 = (x7529!=(x7530/(x7531>>x7532)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x7777 = INT64_MIN;
	int64_t x7779 = 262166059943LL;
	volatile int8_t x7780 = 1;
	volatile int32_t t95 = 15122627;

    t95 = (x7777!=(x7778/(x7779>>x7780)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x7817 = 1019961296680620LL;
	int16_t x7818 = -1;
	int32_t x7820 = 34;
	volatile int32_t t96 = -3442;

    t96 = (x7817!=(x7818/(x7819>>x7820)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x7833 = 37;
	int8_t x7834 = INT8_MAX;
	uint8_t x7836 = 1U;
	volatile int32_t t97 = 181191759;

    t97 = (x7833!=(x7834/(x7835>>x7836)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x7869 = -5631045541120LL;
	uint8_t x7870 = 3U;
	uint64_t x7871 = UINT64_MAX;
	int8_t x7872 = 0;

    t98 = (x7869!=(x7870/(x7871>>x7872)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x7905 = 299002306181LLU;
	uint16_t x7907 = UINT16_MAX;
	int32_t t99 = 94313;

    t99 = (x7905!=(x7906/(x7907>>x7908)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x8017 = INT64_MAX;
	int8_t x8020 = 0;
	int32_t t100 = -7333;

    t100 = (x8017!=(x8018/(x8019>>x8020)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x8022 = 1U;
	static uint64_t x8023 = 19173LLU;
	int16_t x8024 = 1;
	volatile int32_t t101 = -65094;

    t101 = (x8021!=(x8022/(x8023>>x8024)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x8031 = INT8_MAX;
	int16_t x8032 = 3;
	volatile int32_t t102 = 50541;

    t102 = (x8029!=(x8030/(x8031>>x8032)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x8109 = INT32_MIN;
	static int32_t x8110 = INT32_MAX;
	int32_t x8111 = INT32_MAX;
	static uint16_t x8112 = 3U;
	int32_t t103 = 33;

    t103 = (x8109!=(x8110/(x8111>>x8112)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x8166 = INT8_MIN;
	int8_t x8167 = 33;
	volatile uint32_t x8168 = 2U;
	static volatile int32_t t104 = -490256;

    t104 = (x8165!=(x8166/(x8167>>x8168)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x8233 = INT32_MIN;
	volatile int8_t x8234 = INT8_MIN;
	volatile uint8_t x8235 = 116U;
	int32_t t105 = -20;

    t105 = (x8233!=(x8234/(x8235>>x8236)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x8290 = INT16_MAX;
	uint32_t x8291 = UINT32_MAX;
	int32_t t106 = -32147;

    t106 = (x8289!=(x8290/(x8291>>x8292)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x8525 = 42U;
	int32_t x8526 = -11;
	uint16_t x8527 = 2U;
	int8_t x8528 = 1;
	volatile int32_t t107 = -4582;

    t107 = (x8525!=(x8526/(x8527>>x8528)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x8594 = 10889756874383052LL;
	uint16_t x8595 = UINT16_MAX;
	uint8_t x8596 = 15U;
	int32_t t108 = 2;

    t108 = (x8593!=(x8594/(x8595>>x8596)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x8625 = INT16_MAX;
	uint64_t x8627 = 2527428228LLU;
	int8_t x8628 = 4;
	int32_t t109 = 513376111;

    t109 = (x8625!=(x8626/(x8627>>x8628)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x8661 = 2370447;
	int64_t x8662 = INT64_MAX;
	volatile int32_t t110 = -964034051;

    t110 = (x8661!=(x8662/(x8663>>x8664)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x8801 = -42LL;
	volatile uint64_t x8802 = 768369698672403742LLU;
	volatile int32_t x8803 = INT32_MAX;
	volatile int32_t t111 = -7821;

    t111 = (x8801!=(x8802/(x8803>>x8804)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x8877 = INT32_MAX;
	static int16_t x8878 = 3;
	uint16_t x8879 = UINT16_MAX;
	volatile int32_t t112 = -671;

    t112 = (x8877!=(x8878/(x8879>>x8880)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x8913 = INT64_MIN;
	uint8_t x8914 = 102U;
	uint8_t x8915 = 31U;
	volatile int32_t t113 = -2;

    t113 = (x8913!=(x8914/(x8915>>x8916)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x8961 = UINT32_MAX;
	int8_t x8962 = INT8_MAX;
	uint8_t x8963 = 26U;
	uint16_t x8964 = 2U;

    t114 = (x8961!=(x8962/(x8963>>x8964)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x8969 = -1;
	int16_t x8970 = -1;
	int16_t x8971 = 28;
	int32_t t115 = 13394;

    t115 = (x8969!=(x8970/(x8971>>x8972)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x8981 = INT8_MAX;
	static int16_t x8982 = 4018;
	static uint8_t x8984 = 7U;

    t116 = (x8981!=(x8982/(x8983>>x8984)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x9021 = INT8_MIN;
	uint64_t x9023 = 58094LLU;
	static uint8_t x9024 = 3U;
	int32_t t117 = -1;

    t117 = (x9021!=(x9022/(x9023>>x9024)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x9041 = INT16_MIN;
	int64_t x9042 = INT64_MIN;
	static uint64_t x9043 = UINT64_MAX;
	int64_t x9044 = 21LL;
	volatile int32_t t118 = -1;

    t118 = (x9041!=(x9042/(x9043>>x9044)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x9073 = -1;
	volatile int64_t x9074 = INT64_MAX;
	uint64_t x9075 = 374962844272LLU;
	uint16_t x9076 = 1U;
	static volatile int32_t t119 = 0;

    t119 = (x9073!=(x9074/(x9075>>x9076)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x9213 = INT64_MIN;
	uint32_t x9214 = 906U;
	uint16_t x9215 = 1447U;
	static volatile int16_t x9216 = 1;
	static int32_t t120 = 167;

    t120 = (x9213!=(x9214/(x9215>>x9216)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x9217 = 33449004289428240LL;
	volatile int8_t x9218 = -2;
	uint16_t x9219 = 92U;
	uint16_t x9220 = 1U;
	int32_t t121 = 3;

    t121 = (x9217!=(x9218/(x9219>>x9220)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x9237 = INT16_MIN;
	static uint16_t x9238 = UINT16_MAX;
	int32_t x9239 = INT32_MAX;
	int64_t x9240 = 0LL;
	int32_t t122 = -83;

    t122 = (x9237!=(x9238/(x9239>>x9240)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x9286 = UINT32_MAX;
	uint64_t x9287 = UINT64_MAX;
	volatile int32_t x9288 = 9;
	volatile int32_t t123 = -10;

    t123 = (x9285!=(x9286/(x9287>>x9288)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x9329 = UINT64_MAX;
	static uint64_t x9330 = 356434298828LLU;
	static volatile int32_t x9331 = INT32_MAX;

    t124 = (x9329!=(x9330/(x9331>>x9332)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x9378 = 71;
	volatile int16_t x9379 = 8357;
	uint8_t x9380 = 0U;
	int32_t t125 = -1;

    t125 = (x9377!=(x9378/(x9379>>x9380)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x9467 = UINT32_MAX;
	uint8_t x9468 = 1U;
	static int32_t t126 = 6334634;

    t126 = (x9465!=(x9466/(x9467>>x9468)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x9577 = INT32_MAX;
	int16_t x9579 = 117;
	int16_t x9580 = 1;
	volatile int32_t t127 = -886;

    t127 = (x9577!=(x9578/(x9579>>x9580)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x9605 = INT64_MAX;
	static int64_t x9606 = INT64_MIN;
	static int64_t x9607 = INT64_MAX;
	int16_t x9608 = 17;
	static int32_t t128 = -32;

    t128 = (x9605!=(x9606/(x9607>>x9608)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x9649 = INT64_MIN;
	static uint8_t x9650 = 3U;
	uint64_t x9651 = 211723315603634LLU;
	int32_t t129 = -858853;

    t129 = (x9649!=(x9650/(x9651>>x9652)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x9661 = -1LL;
	volatile uint32_t x9662 = 54457935U;
	static int64_t x9663 = 3122362261LL;
	uint8_t x9664 = 1U;
	volatile int32_t t130 = 3335;

    t130 = (x9661!=(x9662/(x9663>>x9664)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x9673 = 28804811678314LL;
	int32_t x9675 = INT32_MAX;
	static uint8_t x9676 = 14U;
	static volatile int32_t t131 = -405;

    t131 = (x9673!=(x9674/(x9675>>x9676)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x9707 = UINT64_MAX;
	static uint8_t x9708 = 6U;
	volatile int32_t t132 = 1360;

    t132 = (x9705!=(x9706/(x9707>>x9708)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x9729 = UINT64_MAX;
	int32_t x9730 = 39788;
	int8_t x9732 = 0;

    t133 = (x9729!=(x9730/(x9731>>x9732)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x9941 = INT32_MIN;
	int8_t x9942 = INT8_MAX;
	volatile uint8_t x9944 = 3U;
	volatile int32_t t134 = 195062;

    t134 = (x9941!=(x9942/(x9943>>x9944)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x9981 = INT32_MAX;
	static uint32_t x9982 = 1460U;
	int32_t x9983 = INT32_MAX;
	static volatile int32_t t135 = 1;

    t135 = (x9981!=(x9982/(x9983>>x9984)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x9989 = 98U;
	volatile int64_t x9990 = INT64_MIN;
	uint64_t x9991 = UINT64_MAX;
	volatile uint8_t x9992 = 5U;
	int32_t t136 = -2683;

    t136 = (x9989!=(x9990/(x9991>>x9992)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x10053 = UINT64_MAX;
	static volatile uint64_t x10055 = 11171LLU;
	uint16_t x10056 = 5U;
	int32_t t137 = 0;

    t137 = (x10053!=(x10054/(x10055>>x10056)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x10125 = INT16_MIN;
	static int8_t x10126 = INT8_MIN;
	uint32_t x10128 = 47U;
	int32_t t138 = 61;

    t138 = (x10125!=(x10126/(x10127>>x10128)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x10141 = 29;
	static volatile uint16_t x10142 = UINT16_MAX;
	static int32_t x10143 = INT32_MAX;
	volatile int32_t t139 = 5556;

    t139 = (x10141!=(x10142/(x10143>>x10144)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x10353 = 885303218743719LL;
	static uint64_t x10354 = UINT64_MAX;

    t140 = (x10353!=(x10354/(x10355>>x10356)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x10435 = INT64_MAX;
	static uint32_t x10436 = 12U;
	volatile int32_t t141 = 2153;

    t141 = (x10433!=(x10434/(x10435>>x10436)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x10445 = INT16_MIN;
	static int64_t x10446 = -7LL;
	volatile uint8_t x10448 = 0U;
	int32_t t142 = 104;

    t142 = (x10445!=(x10446/(x10447>>x10448)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x10469 = INT64_MAX;
	int64_t x10470 = INT64_MIN;
	int64_t x10471 = INT64_MAX;
	uint8_t x10472 = 41U;
	int32_t t143 = -696220;

    t143 = (x10469!=(x10470/(x10471>>x10472)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x10661 = INT32_MIN;
	uint32_t x10662 = 1528687632U;
	int32_t x10663 = INT32_MAX;
	uint16_t x10664 = 0U;
	int32_t t144 = -27918831;

    t144 = (x10661!=(x10662/(x10663>>x10664)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x10773 = -1;
	volatile int32_t x10774 = INT32_MIN;
	int8_t x10775 = 9;
	uint16_t x10776 = 3U;

    t145 = (x10773!=(x10774/(x10775>>x10776)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x10805 = -1;
	static uint16_t x10806 = UINT16_MAX;
	int8_t x10807 = 27;
	int16_t x10808 = 3;
	int32_t t146 = 45836;

    t146 = (x10805!=(x10806/(x10807>>x10808)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x10826 = -6774;
	int16_t x10827 = INT16_MAX;
	int32_t x10828 = 6;
	volatile int32_t t147 = 489056049;

    t147 = (x10825!=(x10826/(x10827>>x10828)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x10857 = -1LL;
	static int32_t x10858 = INT32_MAX;
	int64_t x10859 = 318221229839LL;
	int32_t t148 = 432158153;

    t148 = (x10857!=(x10858/(x10859>>x10860)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x10973 = UINT16_MAX;
	int8_t x10975 = 57;

    t149 = (x10973!=(x10974/(x10975>>x10976)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x11037 = -974829;
	int16_t x11038 = -1;
	int32_t t150 = 5429297;

    t150 = (x11037!=(x11038/(x11039>>x11040)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x11150 = 26U;
	volatile int32_t t151 = -18;

    t151 = (x11149!=(x11150/(x11151>>x11152)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x11209 = UINT16_MAX;
	uint32_t x11211 = 2602U;
	int8_t x11212 = 1;
	volatile int32_t t152 = -158289697;

    t152 = (x11209!=(x11210/(x11211>>x11212)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x11249 = INT16_MAX;
	int8_t x11250 = INT8_MIN;
	static int64_t x11251 = INT64_MAX;
	volatile int16_t x11252 = 3;
	volatile int32_t t153 = -110526019;

    t153 = (x11249!=(x11250/(x11251>>x11252)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x11261 = 73;
	volatile uint32_t x11262 = 1375432494U;
	int64_t x11263 = INT64_MAX;
	uint8_t x11264 = 7U;
	volatile int32_t t154 = -1014583;

    t154 = (x11261!=(x11262/(x11263>>x11264)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x11373 = INT32_MAX;
	volatile uint16_t x11374 = 0U;
	uint16_t x11375 = UINT16_MAX;
	static int64_t x11376 = 1LL;
	static int32_t t155 = -999299;

    t155 = (x11373!=(x11374/(x11375>>x11376)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x11429 = UINT16_MAX;
	int32_t x11431 = 1;

    t156 = (x11429!=(x11430/(x11431>>x11432)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x11597 = -1;
	volatile int32_t x11598 = INT32_MIN;
	uint32_t x11599 = 7073U;
	static uint8_t x11600 = 5U;
	static volatile int32_t t157 = -41;

    t157 = (x11597!=(x11598/(x11599>>x11600)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x11678 = INT16_MIN;
	uint8_t x11679 = UINT8_MAX;

    t158 = (x11677!=(x11678/(x11679>>x11680)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x11717 = INT64_MAX;
	volatile uint32_t x11718 = 31358U;
	static volatile uint64_t x11719 = UINT64_MAX;
	uint8_t x11720 = 7U;

    t159 = (x11717!=(x11718/(x11719>>x11720)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x11809 = INT32_MIN;
	int64_t x11810 = INT64_MIN;
	static int16_t x11812 = 1;
	volatile int32_t t160 = 424;

    t160 = (x11809!=(x11810/(x11811>>x11812)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x11817 = 1743380402768158LL;
	uint16_t x11818 = UINT16_MAX;
	static uint8_t x11820 = 6U;
	volatile int32_t t161 = 1445;

    t161 = (x11817!=(x11818/(x11819>>x11820)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x11993 = 5375717LLU;
	static int64_t x11995 = INT64_MAX;
	uint8_t x11996 = 53U;
	static int32_t t162 = 10;

    t162 = (x11993!=(x11994/(x11995>>x11996)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x12097 = INT8_MIN;
	volatile int32_t x12098 = -31018316;
	static uint64_t x12099 = 744001LLU;
	int32_t x12100 = 13;
	static volatile int32_t t163 = 1;

    t163 = (x12097!=(x12098/(x12099>>x12100)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x12161 = INT64_MIN;
	volatile uint16_t x12162 = 101U;
	int32_t x12163 = 6129881;
	volatile uint64_t x12164 = 3LLU;
	volatile int32_t t164 = 130844310;

    t164 = (x12161!=(x12162/(x12163>>x12164)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x12225 = INT16_MIN;
	int64_t x12226 = INT64_MIN;
	volatile int32_t x12227 = 11554;
	int32_t t165 = 54;

    t165 = (x12225!=(x12226/(x12227>>x12228)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x12241 = UINT8_MAX;
	int8_t x12242 = INT8_MIN;
	volatile int32_t t166 = -7124;

    t166 = (x12241!=(x12242/(x12243>>x12244)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x12373 = UINT32_MAX;
	int16_t x12374 = 5;
	uint64_t x12375 = UINT64_MAX;
	uint8_t x12376 = 4U;
	int32_t t167 = -216;

    t167 = (x12373!=(x12374/(x12375>>x12376)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x12537 = 342U;
	volatile uint32_t x12538 = 0U;
	int64_t x12539 = INT64_MAX;
	uint8_t x12540 = 3U;
	volatile int32_t t168 = 13254825;

    t168 = (x12537!=(x12538/(x12539>>x12540)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x12686 = -14;
	int32_t x12688 = 3;
	volatile int32_t t169 = -408;

    t169 = (x12685!=(x12686/(x12687>>x12688)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x12697 = INT32_MAX;
	int8_t x12698 = INT8_MIN;
	int32_t x12699 = INT32_MAX;
	volatile uint16_t x12700 = 10U;
	int32_t t170 = -1;

    t170 = (x12697!=(x12698/(x12699>>x12700)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x12853 = 567U;
	volatile int16_t x12854 = INT16_MIN;
	uint64_t x12855 = 7973693999675202803LLU;
	volatile uint8_t x12856 = 22U;
	int32_t t171 = 419745161;

    t171 = (x12853!=(x12854/(x12855>>x12856)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x13173 = INT64_MIN;
	uint8_t x13174 = UINT8_MAX;
	uint8_t x13175 = 63U;
	uint8_t x13176 = 5U;
	volatile int32_t t172 = -702301;

    t172 = (x13173!=(x13174/(x13175>>x13176)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x13186 = UINT8_MAX;
	int8_t x13187 = INT8_MAX;
	int32_t t173 = 14414;

    t173 = (x13185!=(x13186/(x13187>>x13188)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x13321 = 76989381LLU;
	int8_t x13322 = -1;
	uint64_t x13323 = 31465824365418018LLU;
	static uint8_t x13324 = 18U;
	volatile int32_t t174 = 35;

    t174 = (x13321!=(x13322/(x13323>>x13324)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x13339 = 2U;
	uint8_t x13340 = 0U;

    t175 = (x13337!=(x13338/(x13339>>x13340)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x13365 = -1;
	static int16_t x13366 = 1693;
	uint8_t x13367 = 4U;
	static uint8_t x13368 = 2U;
	int32_t t176 = -3;

    t176 = (x13365!=(x13366/(x13367>>x13368)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x13457 = -1;
	uint16_t x13460 = 34U;
	volatile int32_t t177 = 58;

    t177 = (x13457!=(x13458/(x13459>>x13460)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x13509 = -29;
	uint32_t x13510 = 147654329U;
	uint16_t x13511 = UINT16_MAX;
	static int8_t x13512 = 1;
	volatile int32_t t178 = -7320412;

    t178 = (x13509!=(x13510/(x13511>>x13512)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x13629 = INT16_MIN;
	int32_t x13632 = 0;
	int32_t t179 = 7935;

    t179 = (x13629!=(x13630/(x13631>>x13632)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x13733 = INT32_MAX;
	volatile int64_t x13735 = 530957770258374LL;
	static int32_t x13736 = 21;

    t180 = (x13733!=(x13734/(x13735>>x13736)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x13797 = -25596196378147LL;
	static uint16_t x13798 = 1123U;
	static int8_t x13800 = 5;

    t181 = (x13797!=(x13798/(x13799>>x13800)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x13823 = UINT64_MAX;
	int32_t x13824 = 0;
	int32_t t182 = 1021261;

    t182 = (x13821!=(x13822/(x13823>>x13824)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x13829 = 3U;
	static int8_t x13830 = INT8_MIN;
	int64_t x13831 = 16LL;
	int32_t t183 = 12030548;

    t183 = (x13829!=(x13830/(x13831>>x13832)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x13853 = 154772629LL;
	uint8_t x13855 = UINT8_MAX;
	uint16_t x13856 = 0U;
	volatile int32_t t184 = 2268;

    t184 = (x13853!=(x13854/(x13855>>x13856)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x13901 = UINT64_MAX;
	volatile int32_t x13902 = 4843937;
	int16_t x13903 = 114;
	volatile int8_t x13904 = 3;
	static int32_t t185 = 1833581;

    t185 = (x13901!=(x13902/(x13903>>x13904)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x13949 = UINT32_MAX;
	volatile int8_t x13950 = INT8_MIN;
	static uint64_t x13951 = 9584213LLU;
	uint16_t x13952 = 7U;
	int32_t t186 = -512918753;

    t186 = (x13949!=(x13950/(x13951>>x13952)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x14021 = INT32_MIN;

    t187 = (x14021!=(x14022/(x14023>>x14024)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x14066 = -1;
	uint64_t x14067 = 133578384LLU;
	int16_t x14068 = 1;
	int32_t t188 = -114;

    t188 = (x14065!=(x14066/(x14067>>x14068)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x14189 = -233269;
	uint32_t x14190 = 12547836U;
	int16_t x14191 = INT16_MAX;
	volatile int32_t t189 = 15;

    t189 = (x14189!=(x14190/(x14191>>x14192)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x14241 = INT64_MAX;
	uint32_t x14242 = 116201082U;
	uint16_t x14243 = UINT16_MAX;
	uint16_t x14244 = 2U;

    t190 = (x14241!=(x14242/(x14243>>x14244)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x14249 = 279494919376108LL;
	volatile uint32_t x14250 = 49U;
	int16_t x14251 = 11204;
	uint8_t x14252 = 1U;
	int32_t t191 = 983;

    t191 = (x14249!=(x14250/(x14251>>x14252)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x14269 = INT32_MIN;
	int64_t x14270 = 322155269LL;
	int64_t x14271 = INT64_MAX;
	static uint32_t x14272 = 1U;
	static volatile int32_t t192 = -22159341;

    t192 = (x14269!=(x14270/(x14271>>x14272)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x14353 = -521529356885820LL;
	uint64_t x14354 = 3239320750065217LLU;
	int8_t x14355 = INT8_MAX;

    t193 = (x14353!=(x14354/(x14355>>x14356)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x14361 = INT64_MIN;
	uint32_t x14362 = UINT32_MAX;
	static int32_t x14364 = 0;
	int32_t t194 = 311;

    t194 = (x14361!=(x14362/(x14363>>x14364)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x14385 = -1;
	int64_t x14386 = INT64_MIN;
	static int64_t x14387 = INT64_MAX;
	int32_t t195 = -2345;

    t195 = (x14385!=(x14386/(x14387>>x14388)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x14501 = 3U;
	uint64_t x14502 = 1670748601975819913LLU;
	int32_t t196 = -181445482;

    t196 = (x14501!=(x14502/(x14503>>x14504)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x14534 = INT64_MIN;
	uint64_t x14535 = 4296208570177485661LLU;
	int8_t x14536 = 1;
	static volatile int32_t t197 = 183;

    t197 = (x14533!=(x14534/(x14535>>x14536)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x14641 = 482;
	volatile int64_t x14643 = INT64_MAX;

    t198 = (x14641!=(x14642/(x14643>>x14644)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x14657 = 6067992;
	int8_t x14658 = -1;
	volatile uint64_t x14660 = 0LLU;
	int32_t t199 = -1845699;

    t199 = (x14657!=(x14658/(x14659>>x14660)));

    if (t199 != 1) { NG(); } else { ; }
	
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

