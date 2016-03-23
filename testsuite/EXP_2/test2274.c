
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

static int8_t x1 = -1;
volatile int8_t x22 = -1;
static int64_t x89 = -1LL;
uint16_t x92 = 3U;
volatile int32_t t6 = 9800822;
int16_t x217 = INT16_MIN;
volatile int32_t t7 = -22;
static uint32_t x369 = 50185U;
int16_t x386 = INT16_MAX;
int32_t x387 = 5125472;
int64_t x401 = INT64_MAX;
volatile int32_t t12 = -42112932;
static int8_t x536 = 2;
int16_t x570 = INT16_MAX;
static uint16_t x572 = 5U;
static int64_t x585 = -1LL;
int32_t t17 = -87709;
int64_t x707 = INT64_MAX;
int16_t x741 = -4;
static int16_t x789 = INT16_MAX;
int64_t x817 = INT64_MAX;
static uint8_t x828 = 1U;
int32_t x847 = 1;
int64_t x848 = 1LL;
int32_t t25 = -97795603;
int32_t x933 = -232056802;
volatile int8_t x949 = -1;
static int16_t x950 = -2;
uint16_t x951 = 0U;
int8_t x952 = 0;
int32_t t32 = -677179;
uint16_t x967 = UINT16_MAX;
uint8_t x969 = 1U;
uint8_t x983 = 3U;
int16_t x989 = -198;
uint8_t x992 = 0U;
int32_t t36 = -24;
volatile uint16_t x1015 = 59U;
int32_t t38 = -1141268;
static int16_t x1054 = 1;
int64_t x1055 = INT64_MIN;
int8_t x1058 = INT8_MIN;
int32_t x1073 = INT32_MIN;
volatile int32_t t41 = 3998190;
int16_t x1139 = -1;
int8_t x1140 = 4;
volatile int32_t t42 = 12527;
int32_t x1143 = -1;
int16_t x1149 = -894;
volatile int32_t t44 = 17941687;
int8_t x1232 = 2;
int32_t t45 = -4977987;
int64_t x1334 = INT64_MIN;
int32_t x1343 = INT32_MAX;
static int16_t x1344 = 5;
int64_t x1395 = INT64_MIN;
uint32_t x1405 = 3485U;
static int8_t x1406 = INT8_MAX;
uint16_t x1407 = 633U;
int32_t t50 = 5248;
static int32_t x1415 = -814708737;
uint64_t x1498 = 425999654338470LLU;
uint8_t x1500 = 0U;
volatile int32_t x1501 = INT32_MIN;
volatile int64_t x1534 = 2815283922088LL;
uint8_t x1585 = 7U;
static int64_t x1587 = -558767332230816619LL;
uint8_t x1652 = 3U;
volatile int8_t x1729 = INT8_MIN;
int64_t x1730 = INT64_MIN;
int8_t x1843 = INT8_MIN;
static int32_t x1846 = INT32_MAX;
volatile int32_t x1847 = INT32_MIN;
int16_t x1862 = 13;
uint8_t x1863 = UINT8_MAX;
volatile int8_t x1864 = 10;
int16_t x1865 = INT16_MAX;
int32_t x1866 = 55;
volatile int32_t t67 = 1567;
int32_t t69 = -32;
volatile int32_t t71 = -158;
uint16_t x2000 = 3U;
int32_t x2023 = -12;
volatile int16_t x2024 = 4;
volatile int16_t x2105 = INT16_MIN;
int64_t x2106 = INT64_MIN;
int64_t x2107 = INT64_MAX;
static uint16_t x2115 = 1400U;
int8_t x2163 = INT8_MIN;
volatile int32_t t84 = 8559;
static uint8_t x2201 = UINT8_MAX;
int16_t x2203 = INT16_MIN;
static int64_t x2211 = -7184843721LL;
int64_t x2250 = -1LL;
int16_t x2251 = -6798;
volatile int8_t x2252 = 1;
static uint64_t x2290 = 350669575731171704LLU;
int32_t t88 = -94335;
uint8_t x2345 = 10U;
static uint8_t x2346 = 2U;
int32_t t90 = 4628052;
uint64_t x2367 = 419326151LLU;
uint32_t x2393 = UINT32_MAX;
volatile int32_t t92 = -35205380;
volatile int16_t x2429 = 469;
uint16_t x2430 = 136U;
int32_t t95 = 478694945;
static volatile int8_t x2521 = 1;
static volatile int32_t x2523 = -12900;
uint16_t x2525 = 4740U;
static uint32_t x2542 = UINT32_MAX;
uint16_t x2544 = 0U;
uint16_t x2557 = 30217U;
int32_t x2560 = 0;
volatile int32_t t101 = 15924;
uint8_t x2579 = 1U;
volatile int16_t x2580 = 1;
volatile int32_t t103 = -59;
int16_t x2583 = INT16_MIN;
static uint64_t x2702 = 221LLU;
int16_t x2890 = 0;
int8_t x2891 = INT8_MAX;
volatile uint8_t x2929 = UINT8_MAX;
static volatile uint8_t x2948 = 2U;
static int32_t x2966 = INT32_MIN;
int8_t x2968 = 5;
static uint16_t x2991 = UINT16_MAX;
uint32_t x2992 = 6U;
int32_t x3021 = INT32_MAX;
volatile int8_t x3064 = 1;
int16_t x3105 = INT16_MIN;
uint32_t x3106 = 1658U;
volatile int16_t x3108 = 1;
static int32_t t119 = -11505;
uint64_t x3161 = 6938950LLU;
int32_t t120 = 153;
uint32_t x3183 = 2U;
uint64_t x3184 = 15LLU;
int32_t x3209 = -9;
volatile int32_t t122 = -25084;
volatile int8_t x3297 = INT8_MIN;
uint64_t x3299 = 1777081619059669LLU;
int32_t x3307 = INT32_MIN;
int32_t x3414 = -1;
uint8_t x3416 = 4U;
int32_t x3425 = INT32_MAX;
uint64_t x3426 = UINT64_MAX;
uint8_t x3428 = 10U;
uint16_t x3478 = UINT16_MAX;
uint8_t x3480 = 1U;
static volatile int32_t t130 = -51;
static int64_t x3535 = INT64_MIN;
volatile int64_t x3625 = -1LL;
uint16_t x3627 = 2703U;
volatile int8_t x3673 = -3;
int64_t x3717 = INT64_MIN;
volatile int16_t x3727 = INT16_MIN;
static int32_t t137 = 48;
int32_t x3739 = -219370405;
static volatile int64_t x3740 = 1LL;
int32_t t139 = 40050;
int64_t x3802 = INT64_MAX;
static uint16_t x3804 = 1U;
static int32_t t142 = -37832148;
static volatile uint8_t x3808 = 7U;
uint16_t x3838 = 451U;
volatile int8_t x3839 = INT8_MIN;
volatile int32_t t144 = -40346;
static int32_t x3898 = -1;
volatile int32_t x3910 = INT32_MIN;
int32_t t147 = -315;
uint8_t x3930 = 28U;
volatile int32_t t149 = 180;
int64_t x4002 = INT64_MIN;
int8_t x4021 = -15;
static int32_t t153 = -31268;
int16_t x4081 = -1;
volatile int8_t x4086 = -3;
int16_t x4121 = INT16_MIN;
int8_t x4124 = 2;
static int32_t t157 = 41;
static int64_t x4149 = INT64_MAX;
static volatile int64_t x4169 = -262540245844552787LL;
static volatile int32_t t161 = 297;
volatile int32_t x4242 = 181263232;
volatile uint64_t x4288 = 7LLU;
int32_t x4369 = -91912;
int32_t x4370 = INT32_MIN;
int16_t x4403 = INT16_MIN;
int16_t x4524 = 6;
int32_t t171 = -67;
static volatile int32_t x4603 = INT32_MIN;
int8_t x4644 = 13;
uint8_t x4697 = UINT8_MAX;
uint8_t x4736 = 0U;
int32_t t178 = 28864;
static volatile uint8_t x4817 = 62U;
volatile int32_t t182 = 195;
int8_t x4918 = -1;
static volatile int64_t x4969 = 77676517460289958LL;
uint32_t x4971 = 44194U;
uint8_t x5013 = 91U;
volatile int64_t x5019 = INT64_MIN;
int64_t x5091 = -1LL;
int32_t t190 = -3629931;
static uint32_t x5098 = 7403609U;
volatile int64_t x5118 = 41437LL;
int64_t x5119 = INT64_MIN;
int8_t x5175 = -1;
uint16_t x5213 = 5640U;
static volatile uint8_t x5215 = 66U;
int8_t x5300 = 1;


void f0(void) {
    	static uint64_t x2 = 59241482877LLU;
	int32_t x3 = INT32_MAX;
	int32_t x4 = 19;
	static int32_t t0 = 667;

    t0 = ((x1>(x2&x3))<<x4);

    if (t0 != 524288) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x21 = INT64_MIN;
	uint32_t x23 = 3U;
	int16_t x24 = 1;
	volatile int32_t t1 = 1375252;

    t1 = ((x21>(x22&x23))<<x24);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x33 = 10482287116993LLU;
	int64_t x34 = -1700211LL;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = 5;
	volatile int32_t t2 = -84417450;

    t2 = ((x33>(x34&x35))<<x36);

    if (t2 != 32) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x90 = -1LL;
	uint16_t x91 = UINT16_MAX;
	volatile int32_t t3 = 8;

    t3 = ((x89>(x90&x91))<<x92);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x97 = -6694296412LL;
	uint64_t x98 = 5444599LLU;
	int64_t x99 = 15483987LL;
	uint8_t x100 = 27U;
	static volatile int32_t t4 = 144;

    t4 = ((x97>(x98&x99))<<x100);

    if (t4 != 134217728) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x197 = 4U;
	volatile int32_t x198 = INT32_MIN;
	int32_t x199 = 930506;
	int16_t x200 = 1;
	int32_t t5 = -929948;

    t5 = ((x197>(x198&x199))<<x200);

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x205 = INT8_MIN;
	static volatile uint64_t x206 = 1633LLU;
	uint64_t x207 = 3096358311157019LLU;
	uint8_t x208 = 0U;

    t6 = ((x205>(x206&x207))<<x208);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x218 = UINT16_MAX;
	volatile int8_t x219 = -1;
	int8_t x220 = 0;

    t7 = ((x217>(x218&x219))<<x220);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x370 = -6;
	static uint8_t x371 = UINT8_MAX;
	static volatile uint8_t x372 = 3U;
	volatile int32_t t8 = 33316;

    t8 = ((x369>(x370&x371))<<x372);

    if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x388 = 26;
	int32_t t9 = 26;

    t9 = ((x385>(x386&x387))<<x388);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x402 = 62;
	volatile int16_t x403 = -1;
	uint8_t x404 = 21U;
	static volatile int32_t t10 = -316311052;

    t10 = ((x401>(x402&x403))<<x404);

    if (t10 != 2097152) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x449 = 7206255762451142LL;
	uint64_t x450 = UINT64_MAX;
	int8_t x451 = -24;
	volatile uint8_t x452 = 7U;
	static volatile int32_t t11 = 1;

    t11 = ((x449>(x450&x451))<<x452);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x501 = INT32_MIN;
	static volatile uint64_t x502 = 195206431053866757LLU;
	static uint32_t x503 = UINT32_MAX;
	volatile uint16_t x504 = 12U;

    t12 = ((x501>(x502&x503))<<x504);

    if (t12 != 4096) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x533 = INT32_MIN;
	static int8_t x534 = INT8_MIN;
	uint64_t x535 = 1599LLU;
	volatile int32_t t13 = -421393;

    t13 = ((x533>(x534&x535))<<x536);

    if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x541 = 5;
	int64_t x542 = INT64_MIN;
	volatile int8_t x543 = -22;
	volatile uint16_t x544 = 3U;
	int32_t t14 = 2419943;

    t14 = ((x541>(x542&x543))<<x544);

    if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x569 = 39970LLU;
	int32_t x571 = 391012718;
	volatile int32_t t15 = 1534925;

    t15 = ((x569>(x570&x571))<<x572);

    if (t15 != 32) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x586 = -6;
	int16_t x587 = 0;
	uint64_t x588 = 1LLU;
	int32_t t16 = -239;

    t16 = ((x585>(x586&x587))<<x588);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x609 = -4418;
	static int16_t x610 = 62;
	volatile int32_t x611 = 889730;
	uint8_t x612 = 1U;

    t17 = ((x609>(x610&x611))<<x612);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x705 = 16;
	static int64_t x706 = -5560998197361532LL;
	static uint16_t x708 = 20U;
	volatile int32_t t18 = -14;

    t18 = ((x705>(x706&x707))<<x708);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x737 = -7;
	volatile int8_t x738 = INT8_MAX;
	uint8_t x739 = UINT8_MAX;
	static uint16_t x740 = 3U;
	static int32_t t19 = -129309;

    t19 = ((x737>(x738&x739))<<x740);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x742 = 61U;
	static uint8_t x743 = 1U;
	int32_t x744 = 0;
	int32_t t20 = -20;

    t20 = ((x741>(x742&x743))<<x744);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x790 = UINT32_MAX;
	volatile int32_t x791 = INT32_MIN;
	int8_t x792 = 0;
	int32_t t21 = -9454938;

    t21 = ((x789>(x790&x791))<<x792);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x818 = UINT64_MAX;
	static int32_t x819 = INT32_MAX;
	volatile int8_t x820 = 5;
	int32_t t22 = -459043357;

    t22 = ((x817>(x818&x819))<<x820);

    if (t22 != 32) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x825 = 61633940818468907LLU;
	static int32_t x826 = -4123;
	volatile int8_t x827 = -1;
	volatile int32_t t23 = -6;

    t23 = ((x825>(x826&x827))<<x828);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x829 = INT16_MAX;
	int16_t x830 = -1;
	int32_t x831 = 51135201;
	int16_t x832 = 7;
	volatile int32_t t24 = 222994;

    t24 = ((x829>(x830&x831))<<x832);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x845 = 18532073549LL;
	int16_t x846 = INT16_MIN;

    t25 = ((x845>(x846&x847))<<x848);

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x861 = -167;
	int32_t x862 = -1;
	static uint8_t x863 = UINT8_MAX;
	volatile uint16_t x864 = 14U;
	static volatile int32_t t26 = -146;

    t26 = ((x861>(x862&x863))<<x864);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x925 = -1;
	uint64_t x926 = 406910177146429895LLU;
	static int32_t x927 = -7269860;
	static uint16_t x928 = 4U;
	volatile int32_t t27 = -3694;

    t27 = ((x925>(x926&x927))<<x928);

    if (t27 != 16) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x934 = 1;
	volatile int16_t x935 = -1;
	uint8_t x936 = 13U;
	int32_t t28 = 1498;

    t28 = ((x933>(x934&x935))<<x936);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x937 = INT64_MAX;
	uint8_t x938 = 18U;
	int16_t x939 = INT16_MAX;
	static uint16_t x940 = 19U;
	int32_t t29 = -6657;

    t29 = ((x937>(x938&x939))<<x940);

    if (t29 != 524288) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t t30 = -1;

    t30 = ((x949>(x950&x951))<<x952);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x953 = UINT64_MAX;
	uint16_t x954 = 6U;
	static int32_t x955 = -2177;
	static uint8_t x956 = 0U;
	volatile int32_t t31 = 0;

    t31 = ((x953>(x954&x955))<<x956);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x961 = UINT64_MAX;
	int16_t x962 = -16;
	static uint32_t x963 = 7U;
	int8_t x964 = 6;

    t32 = ((x961>(x962&x963))<<x964);

    if (t32 != 64) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x965 = INT64_MIN;
	uint64_t x966 = 13646487631358LLU;
	volatile uint8_t x968 = 17U;
	volatile int32_t t33 = -76675138;

    t33 = ((x965>(x966&x967))<<x968);

    if (t33 != 131072) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x970 = UINT64_MAX;
	uint8_t x971 = UINT8_MAX;
	uint8_t x972 = 6U;
	int32_t t34 = 0;

    t34 = ((x969>(x970&x971))<<x972);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x981 = 13360U;
	volatile int64_t x982 = -228LL;
	uint16_t x984 = 21U;
	volatile int32_t t35 = -379;

    t35 = ((x981>(x982&x983))<<x984);

    if (t35 != 2097152) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x990 = 83U;
	volatile int64_t x991 = INT64_MIN;

    t36 = ((x989>(x990&x991))<<x992);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x1013 = 7620U;
	volatile int8_t x1014 = INT8_MIN;
	int64_t x1016 = 23LL;
	volatile int32_t t37 = 502253;

    t37 = ((x1013>(x1014&x1015))<<x1016);

    if (t37 != 8388608) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x1037 = INT8_MIN;
	uint32_t x1038 = 4946U;
	volatile int64_t x1039 = INT64_MIN;
	static uint8_t x1040 = 0U;

    t38 = ((x1037>(x1038&x1039))<<x1040);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x1053 = UINT16_MAX;
	static uint8_t x1056 = 0U;
	static volatile int32_t t39 = -12;

    t39 = ((x1053>(x1054&x1055))<<x1056);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x1057 = 61352U;
	int8_t x1059 = INT8_MAX;
	uint8_t x1060 = 15U;
	static int32_t t40 = 3118100;

    t40 = ((x1057>(x1058&x1059))<<x1060);

    if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1074 = INT8_MIN;
	volatile int16_t x1075 = 1511;
	uint16_t x1076 = 18U;

    t41 = ((x1073>(x1074&x1075))<<x1076);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1137 = INT8_MIN;
	uint32_t x1138 = 438291269U;

    t42 = ((x1137>(x1138&x1139))<<x1140);

    if (t42 != 16) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x1141 = INT16_MAX;
	int64_t x1142 = INT64_MIN;
	volatile int8_t x1144 = 8;
	static volatile int32_t t43 = 39;

    t43 = ((x1141>(x1142&x1143))<<x1144);

    if (t43 != 256) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x1150 = UINT8_MAX;
	uint32_t x1151 = UINT32_MAX;
	volatile uint8_t x1152 = 9U;

    t44 = ((x1149>(x1150&x1151))<<x1152);

    if (t44 != 512) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x1229 = UINT64_MAX;
	int16_t x1230 = -1;
	int16_t x1231 = -5;

    t45 = ((x1229>(x1230&x1231))<<x1232);

    if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x1249 = UINT16_MAX;
	int64_t x1250 = INT64_MIN;
	int32_t x1251 = INT32_MAX;
	uint8_t x1252 = 1U;
	int32_t t46 = 342;

    t46 = ((x1249>(x1250&x1251))<<x1252);

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x1333 = UINT32_MAX;
	int64_t x1335 = INT64_MIN;
	int8_t x1336 = 1;
	int32_t t47 = -104070621;

    t47 = ((x1333>(x1334&x1335))<<x1336);

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x1341 = 13868U;
	volatile int64_t x1342 = -1LL;
	static volatile int32_t t48 = -4519;

    t48 = ((x1341>(x1342&x1343))<<x1344);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x1393 = 4U;
	int16_t x1394 = INT16_MIN;
	volatile uint32_t x1396 = 28U;
	volatile int32_t t49 = 15022;

    t49 = ((x1393>(x1394&x1395))<<x1396);

    if (t49 != 268435456) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1408 = 0U;

    t50 = ((x1405>(x1406&x1407))<<x1408);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1413 = INT32_MIN;
	uint16_t x1414 = 35U;
	static uint16_t x1416 = 1U;
	int32_t t51 = -123562;

    t51 = ((x1413>(x1414&x1415))<<x1416);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x1485 = INT8_MAX;
	int64_t x1486 = -1LL;
	volatile uint16_t x1487 = UINT16_MAX;
	int8_t x1488 = 0;
	volatile int32_t t52 = 84;

    t52 = ((x1485>(x1486&x1487))<<x1488);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x1497 = 158U;
	int16_t x1499 = -2;
	volatile int32_t t53 = 0;

    t53 = ((x1497>(x1498&x1499))<<x1500);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x1502 = INT32_MIN;
	int8_t x1503 = -1;
	uint8_t x1504 = 30U;
	volatile int32_t t54 = 44;

    t54 = ((x1501>(x1502&x1503))<<x1504);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x1533 = 80U;
	int64_t x1535 = INT64_MIN;
	int64_t x1536 = 0LL;
	volatile int32_t t55 = -5728680;

    t55 = ((x1533>(x1534&x1535))<<x1536);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1586 = INT8_MAX;
	uint16_t x1588 = 5U;
	int32_t t56 = 10;

    t56 = ((x1585>(x1586&x1587))<<x1588);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x1613 = -1;
	uint8_t x1614 = 3U;
	uint64_t x1615 = UINT64_MAX;
	static uint16_t x1616 = 0U;
	static int32_t t57 = 338364;

    t57 = ((x1613>(x1614&x1615))<<x1616);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x1637 = 555845747U;
	int32_t x1638 = -1;
	static uint16_t x1639 = 1652U;
	uint8_t x1640 = 2U;
	int32_t t58 = -10;

    t58 = ((x1637>(x1638&x1639))<<x1640);

    if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x1649 = -3;
	static uint32_t x1650 = UINT32_MAX;
	volatile uint64_t x1651 = 115037848437040LLU;
	static volatile int32_t t59 = -1;

    t59 = ((x1649>(x1650&x1651))<<x1652);

    if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x1731 = INT16_MAX;
	uint8_t x1732 = 19U;
	int32_t t60 = 2;

    t60 = ((x1729>(x1730&x1731))<<x1732);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x1773 = 15677968LLU;
	volatile int64_t x1774 = INT64_MAX;
	int64_t x1775 = -4394432218710LL;
	static volatile int16_t x1776 = 0;
	static int32_t t61 = -176703;

    t61 = ((x1773>(x1774&x1775))<<x1776);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x1841 = -1;
	volatile uint32_t x1842 = 9U;
	uint8_t x1844 = 1U;
	volatile int32_t t62 = -3563498;

    t62 = ((x1841>(x1842&x1843))<<x1844);

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x1845 = -1;
	int16_t x1848 = 0;
	static volatile int32_t t63 = -2076;

    t63 = ((x1845>(x1846&x1847))<<x1848);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x1861 = INT32_MIN;
	volatile int32_t t64 = -280779337;

    t64 = ((x1861>(x1862&x1863))<<x1864);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x1867 = -22;
	uint8_t x1868 = 12U;
	volatile int32_t t65 = -101;

    t65 = ((x1865>(x1866&x1867))<<x1868);

    if (t65 != 4096) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x1897 = 55728;
	int8_t x1898 = -6;
	int16_t x1899 = INT16_MIN;
	volatile uint8_t x1900 = 1U;
	int32_t t66 = -183;

    t66 = ((x1897>(x1898&x1899))<<x1900);

    if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x1921 = UINT8_MAX;
	int32_t x1922 = -818818;
	volatile int8_t x1923 = 0;
	int64_t x1924 = 27LL;

    t67 = ((x1921>(x1922&x1923))<<x1924);

    if (t67 != 134217728) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x1925 = INT64_MIN;
	int8_t x1926 = INT8_MIN;
	int64_t x1927 = INT64_MIN;
	int16_t x1928 = 1;
	int32_t t68 = -391045;

    t68 = ((x1925>(x1926&x1927))<<x1928);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x1933 = INT8_MIN;
	volatile int64_t x1934 = 2946LL;
	int16_t x1935 = INT16_MAX;
	volatile int16_t x1936 = 0;

    t69 = ((x1933>(x1934&x1935))<<x1936);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x1937 = INT32_MIN;
	int16_t x1938 = -1;
	uint32_t x1939 = UINT32_MAX;
	static int8_t x1940 = 1;
	volatile int32_t t70 = 1804;

    t70 = ((x1937>(x1938&x1939))<<x1940);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x1945 = 13U;
	int32_t x1946 = INT32_MAX;
	static volatile int8_t x1947 = INT8_MIN;
	volatile int8_t x1948 = 7;

    t71 = ((x1945>(x1946&x1947))<<x1948);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x1949 = 28U;
	static uint32_t x1950 = UINT32_MAX;
	volatile uint16_t x1951 = 2U;
	volatile uint8_t x1952 = 30U;
	int32_t t72 = 248640;

    t72 = ((x1949>(x1950&x1951))<<x1952);

    if (t72 != 1073741824) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x1997 = -1LL;
	int64_t x1998 = INT64_MIN;
	static int32_t x1999 = INT32_MAX;
	int32_t t73 = 255;

    t73 = ((x1997>(x1998&x1999))<<x2000);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x2021 = -13349;
	int8_t x2022 = INT8_MIN;
	volatile int32_t t74 = 1;

    t74 = ((x2021>(x2022&x2023))<<x2024);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x2041 = 245;
	int8_t x2042 = INT8_MIN;
	volatile int32_t x2043 = INT32_MAX;
	volatile uint8_t x2044 = 1U;
	volatile int32_t t75 = 480284;

    t75 = ((x2041>(x2042&x2043))<<x2044);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x2045 = INT64_MAX;
	volatile int64_t x2046 = 53361238945LL;
	int64_t x2047 = -1LL;
	int8_t x2048 = 2;
	volatile int32_t t76 = 5996;

    t76 = ((x2045>(x2046&x2047))<<x2048);

    if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x2061 = 2U;
	static uint8_t x2062 = 98U;
	uint8_t x2063 = UINT8_MAX;
	uint8_t x2064 = 0U;
	static int32_t t77 = -200;

    t77 = ((x2061>(x2062&x2063))<<x2064);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x2108 = 3U;
	int32_t t78 = -553;

    t78 = ((x2105>(x2106&x2107))<<x2108);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x2113 = 1U;
	uint16_t x2114 = 5U;
	static uint32_t x2116 = 6U;
	int32_t t79 = -344404569;

    t79 = ((x2113>(x2114&x2115))<<x2116);

    if (t79 != 64) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x2121 = INT8_MIN;
	static volatile uint16_t x2122 = UINT16_MAX;
	int64_t x2123 = -3591254810689LL;
	static uint64_t x2124 = 17LLU;
	volatile int32_t t80 = -173899;

    t80 = ((x2121>(x2122&x2123))<<x2124);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x2133 = INT32_MAX;
	volatile int64_t x2134 = -1LL;
	int64_t x2135 = -132384980058123LL;
	uint8_t x2136 = 30U;
	int32_t t81 = -1982;

    t81 = ((x2133>(x2134&x2135))<<x2136);

    if (t81 != 1073741824) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x2153 = INT32_MIN;
	int32_t x2154 = -1;
	volatile uint64_t x2155 = 806202525695145LLU;
	int16_t x2156 = 0;
	int32_t t82 = 1;

    t82 = ((x2153>(x2154&x2155))<<x2156);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2161 = -1;
	int32_t x2162 = INT32_MIN;
	static volatile uint8_t x2164 = 0U;
	volatile int32_t t83 = -5;

    t83 = ((x2161>(x2162&x2163))<<x2164);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2177 = 0;
	int64_t x2178 = INT64_MIN;
	static int8_t x2179 = INT8_MAX;
	volatile uint16_t x2180 = 1U;

    t84 = ((x2177>(x2178&x2179))<<x2180);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x2202 = -16021;
	int8_t x2204 = 17;
	int32_t t85 = -29962786;

    t85 = ((x2201>(x2202&x2203))<<x2204);

    if (t85 != 131072) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x2209 = -229;
	int8_t x2210 = 1;
	uint8_t x2212 = 0U;
	int32_t t86 = -15;

    t86 = ((x2209>(x2210&x2211))<<x2212);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x2249 = INT16_MIN;
	volatile int32_t t87 = -1931418;

    t87 = ((x2249>(x2250&x2251))<<x2252);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x2289 = INT16_MIN;
	uint64_t x2291 = 276396LLU;
	volatile int16_t x2292 = 0;

    t88 = ((x2289>(x2290&x2291))<<x2292);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2321 = -752561;
	volatile uint32_t x2322 = 16508U;
	int8_t x2323 = INT8_MIN;
	uint16_t x2324 = 3U;
	volatile int32_t t89 = -33692876;

    t89 = ((x2321>(x2322&x2323))<<x2324);

    if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x2347 = 64138;
	uint8_t x2348 = 8U;

    t90 = ((x2345>(x2346&x2347))<<x2348);

    if (t90 != 256) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x2365 = UINT16_MAX;
	static volatile uint8_t x2366 = UINT8_MAX;
	volatile int8_t x2368 = 4;
	volatile int32_t t91 = -208;

    t91 = ((x2365>(x2366&x2367))<<x2368);

    if (t91 != 16) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x2394 = INT64_MIN;
	uint32_t x2395 = 30969491U;
	int16_t x2396 = 17;

    t92 = ((x2393>(x2394&x2395))<<x2396);

    if (t92 != 131072) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x2431 = INT16_MIN;
	uint32_t x2432 = 4U;
	volatile int32_t t93 = 92145117;

    t93 = ((x2429>(x2430&x2431))<<x2432);

    if (t93 != 16) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x2513 = -1;
	static int16_t x2514 = INT16_MIN;
	uint64_t x2515 = 28LLU;
	uint16_t x2516 = 1U;
	int32_t t94 = -8;

    t94 = ((x2513>(x2514&x2515))<<x2516);

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x2517 = UINT32_MAX;
	uint32_t x2518 = 26284424U;
	uint32_t x2519 = 10457U;
	uint8_t x2520 = 20U;

    t95 = ((x2517>(x2518&x2519))<<x2520);

    if (t95 != 1048576) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x2522 = UINT16_MAX;
	uint8_t x2524 = 18U;
	static int32_t t96 = 280238;

    t96 = ((x2521>(x2522&x2523))<<x2524);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x2526 = 341335683492918LLU;
	uint32_t x2527 = 166992370U;
	int16_t x2528 = 14;
	static int32_t t97 = 202688;

    t97 = ((x2525>(x2526&x2527))<<x2528);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x2541 = INT8_MIN;
	static uint16_t x2543 = 438U;
	volatile int32_t t98 = -17879951;

    t98 = ((x2541>(x2542&x2543))<<x2544);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint64_t x2545 = 3113697LLU;
	static uint64_t x2546 = 72705117913LLU;
	static int64_t x2547 = -1713LL;
	int8_t x2548 = 1;
	volatile int32_t t99 = 39;

    t99 = ((x2545>(x2546&x2547))<<x2548);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x2549 = 71538781314LLU;
	int16_t x2550 = INT16_MIN;
	volatile uint32_t x2551 = UINT32_MAX;
	static int8_t x2552 = 10;
	int32_t t100 = 57;

    t100 = ((x2549>(x2550&x2551))<<x2552);

    if (t100 != 1024) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x2558 = UINT32_MAX;
	int64_t x2559 = INT64_MAX;

    t101 = ((x2557>(x2558&x2559))<<x2560);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x2569 = 100U;
	static int16_t x2570 = INT16_MAX;
	uint32_t x2571 = UINT32_MAX;
	uint32_t x2572 = 0U;
	int32_t t102 = -407026;

    t102 = ((x2569>(x2570&x2571))<<x2572);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x2577 = -1;
	int32_t x2578 = 104;

    t103 = ((x2577>(x2578&x2579))<<x2580);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x2581 = INT8_MIN;
	volatile int8_t x2582 = -1;
	volatile int8_t x2584 = 0;
	volatile int32_t t104 = -48798355;

    t104 = ((x2581>(x2582&x2583))<<x2584);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x2597 = -91;
	static int32_t x2598 = 95878585;
	int32_t x2599 = INT32_MIN;
	uint64_t x2600 = 3LLU;
	int32_t t105 = 902726683;

    t105 = ((x2597>(x2598&x2599))<<x2600);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x2653 = INT16_MAX;
	volatile int8_t x2654 = INT8_MIN;
	volatile int64_t x2655 = INT64_MIN;
	uint8_t x2656 = 10U;
	static int32_t t106 = -56937951;

    t106 = ((x2653>(x2654&x2655))<<x2656);

    if (t106 != 1024) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x2681 = INT8_MAX;
	int32_t x2682 = -1;
	int64_t x2683 = INT64_MAX;
	static uint16_t x2684 = 8U;
	int32_t t107 = 59616869;

    t107 = ((x2681>(x2682&x2683))<<x2684);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x2701 = INT32_MIN;
	int8_t x2703 = INT8_MIN;
	int8_t x2704 = 4;
	int32_t t108 = -8;

    t108 = ((x2701>(x2702&x2703))<<x2704);

    if (t108 != 16) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x2889 = 1U;
	int8_t x2892 = 9;
	volatile int32_t t109 = 28890;

    t109 = ((x2889>(x2890&x2891))<<x2892);

    if (t109 != 512) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x2913 = 88106681;
	uint32_t x2914 = 3105895U;
	static int8_t x2915 = INT8_MAX;
	uint16_t x2916 = 5U;
	volatile int32_t t110 = 40266;

    t110 = ((x2913>(x2914&x2915))<<x2916);

    if (t110 != 32) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x2921 = 3U;
	int32_t x2922 = INT32_MAX;
	volatile int32_t x2923 = INT32_MIN;
	static int8_t x2924 = 6;
	int32_t t111 = -22834;

    t111 = ((x2921>(x2922&x2923))<<x2924);

    if (t111 != 64) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x2930 = INT8_MIN;
	uint64_t x2931 = UINT64_MAX;
	static uint8_t x2932 = 11U;
	static int32_t t112 = 785;

    t112 = ((x2929>(x2930&x2931))<<x2932);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x2945 = 1U;
	int64_t x2946 = INT64_MIN;
	static int64_t x2947 = -1LL;
	volatile int32_t t113 = -59032;

    t113 = ((x2945>(x2946&x2947))<<x2948);

    if (t113 != 4) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x2965 = 3;
	int8_t x2967 = INT8_MIN;
	int32_t t114 = -77508238;

    t114 = ((x2965>(x2966&x2967))<<x2968);

    if (t114 != 32) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x2989 = UINT16_MAX;
	static uint8_t x2990 = 114U;
	volatile int32_t t115 = -866957048;

    t115 = ((x2989>(x2990&x2991))<<x2992);

    if (t115 != 64) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x3022 = -1;
	volatile int16_t x3023 = INT16_MIN;
	uint8_t x3024 = 1U;
	volatile int32_t t116 = -1;

    t116 = ((x3021>(x3022&x3023))<<x3024);

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x3061 = -12;
	int8_t x3062 = 6;
	int64_t x3063 = INT64_MIN;
	int32_t t117 = -163;

    t117 = ((x3061>(x3062&x3063))<<x3064);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x3065 = INT64_MAX;
	int64_t x3066 = INT64_MIN;
	int64_t x3067 = INT64_MIN;
	uint16_t x3068 = 5U;
	volatile int32_t t118 = -3345;

    t118 = ((x3065>(x3066&x3067))<<x3068);

    if (t118 != 32) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x3107 = INT8_MAX;

    t119 = ((x3105>(x3106&x3107))<<x3108);

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x3162 = UINT8_MAX;
	int16_t x3163 = INT16_MAX;
	uint8_t x3164 = 0U;

    t120 = ((x3161>(x3162&x3163))<<x3164);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x3181 = INT64_MIN;
	int64_t x3182 = -561432129545182LL;
	int32_t t121 = 1134;

    t121 = ((x3181>(x3182&x3183))<<x3184);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x3210 = INT32_MIN;
	volatile uint16_t x3211 = UINT16_MAX;
	uint16_t x3212 = 29U;

    t122 = ((x3209>(x3210&x3211))<<x3212);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x3289 = INT32_MIN;
	int16_t x3290 = INT16_MIN;
	volatile int64_t x3291 = 1204757180786105385LL;
	static volatile uint8_t x3292 = 2U;
	int32_t t123 = -497;

    t123 = ((x3289>(x3290&x3291))<<x3292);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x3298 = 8540423384595242646LLU;
	int32_t x3300 = 11;
	int32_t t124 = -563877;

    t124 = ((x3297>(x3298&x3299))<<x3300);

    if (t124 != 2048) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x3305 = 1103843480116947LL;
	int8_t x3306 = INT8_MAX;
	int32_t x3308 = 1;
	static int32_t t125 = 570960256;

    t125 = ((x3305>(x3306&x3307))<<x3308);

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x3317 = INT16_MAX;
	uint64_t x3318 = 204660027LLU;
	uint32_t x3319 = 3321U;
	uint8_t x3320 = 11U;
	volatile int32_t t126 = 147411;

    t126 = ((x3317>(x3318&x3319))<<x3320);

    if (t126 != 2048) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x3325 = INT32_MIN;
	int16_t x3326 = INT16_MIN;
	uint32_t x3327 = 11267552U;
	volatile uint64_t x3328 = 0LLU;
	volatile int32_t t127 = 5;

    t127 = ((x3325>(x3326&x3327))<<x3328);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x3413 = 17;
	int16_t x3415 = INT16_MAX;
	int32_t t128 = 162627;

    t128 = ((x3413>(x3414&x3415))<<x3416);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x3427 = 503600796705LLU;
	int32_t t129 = -241369;

    t129 = ((x3425>(x3426&x3427))<<x3428);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x3477 = 1;
	volatile int8_t x3479 = INT8_MIN;

    t130 = ((x3477>(x3478&x3479))<<x3480);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x3525 = 4U;
	static uint8_t x3526 = 0U;
	uint64_t x3527 = 135627714724775LLU;
	static volatile uint32_t x3528 = 22U;
	static volatile int32_t t131 = -1299411;

    t131 = ((x3525>(x3526&x3527))<<x3528);

    if (t131 != 4194304) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x3533 = INT32_MIN;
	int8_t x3534 = -60;
	volatile uint8_t x3536 = 15U;
	volatile int32_t t132 = -28857072;

    t132 = ((x3533>(x3534&x3535))<<x3536);

    if (t132 != 32768) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x3626 = 1;
	int8_t x3628 = 11;
	volatile int32_t t133 = 0;

    t133 = ((x3625>(x3626&x3627))<<x3628);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x3653 = 70U;
	int32_t x3654 = -1;
	uint64_t x3655 = 516669LLU;
	volatile uint8_t x3656 = 31U;
	int32_t t134 = 54671;

    t134 = ((x3653>(x3654&x3655))<<x3656);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x3674 = INT16_MIN;
	uint32_t x3675 = 233729149U;
	uint8_t x3676 = 0U;
	volatile int32_t t135 = -453566;

    t135 = ((x3673>(x3674&x3675))<<x3676);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x3718 = 15926LL;
	uint16_t x3719 = 415U;
	int8_t x3720 = 6;
	int32_t t136 = -87636971;

    t136 = ((x3717>(x3718&x3719))<<x3720);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x3725 = UINT8_MAX;
	uint8_t x3726 = UINT8_MAX;
	uint16_t x3728 = 24U;

    t137 = ((x3725>(x3726&x3727))<<x3728);

    if (t137 != 16777216) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x3733 = INT64_MIN;
	int8_t x3734 = 7;
	volatile int8_t x3735 = -2;
	uint32_t x3736 = 0U;
	volatile int32_t t138 = 1991;

    t138 = ((x3733>(x3734&x3735))<<x3736);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x3737 = INT64_MAX;
	int64_t x3738 = INT64_MIN;

    t139 = ((x3737>(x3738&x3739))<<x3740);

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x3741 = 169U;
	int64_t x3742 = INT64_MAX;
	int64_t x3743 = -1LL;
	uint8_t x3744 = 7U;
	volatile int32_t t140 = 805865;

    t140 = ((x3741>(x3742&x3743))<<x3744);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x3765 = 158695U;
	volatile uint64_t x3766 = 0LLU;
	int32_t x3767 = INT32_MAX;
	static int8_t x3768 = 3;
	volatile int32_t t141 = -6315;

    t141 = ((x3765>(x3766&x3767))<<x3768);

    if (t141 != 8) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x3801 = 16147U;
	static int64_t x3803 = -1LL;

    t142 = ((x3801>(x3802&x3803))<<x3804);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x3805 = 106973206009238LLU;
	int16_t x3806 = 1;
	int32_t x3807 = INT32_MIN;
	volatile int32_t t143 = 634589;

    t143 = ((x3805>(x3806&x3807))<<x3808);

    if (t143 != 128) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x3837 = INT32_MIN;
	uint8_t x3840 = 0U;

    t144 = ((x3837>(x3838&x3839))<<x3840);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x3897 = 1966581073U;
	uint32_t x3899 = 282317U;
	int8_t x3900 = 0;
	int32_t t145 = 735184;

    t145 = ((x3897>(x3898&x3899))<<x3900);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x3909 = INT8_MIN;
	static volatile int8_t x3911 = INT8_MIN;
	static uint8_t x3912 = 2U;
	int32_t t146 = -1232;

    t146 = ((x3909>(x3910&x3911))<<x3912);

    if (t146 != 4) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x3917 = INT32_MAX;
	int8_t x3918 = INT8_MAX;
	int16_t x3919 = INT16_MIN;
	int16_t x3920 = 4;

    t147 = ((x3917>(x3918&x3919))<<x3920);

    if (t147 != 16) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x3929 = UINT16_MAX;
	int32_t x3931 = -1;
	uint16_t x3932 = 1U;
	volatile int32_t t148 = -5937;

    t148 = ((x3929>(x3930&x3931))<<x3932);

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x3945 = -1;
	int16_t x3946 = INT16_MIN;
	volatile int16_t x3947 = -1;
	uint8_t x3948 = 20U;

    t149 = ((x3945>(x3946&x3947))<<x3948);

    if (t149 != 1048576) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x3993 = INT16_MIN;
	int8_t x3994 = INT8_MAX;
	volatile uint16_t x3995 = UINT16_MAX;
	static int8_t x3996 = 2;
	int32_t t150 = 110062;

    t150 = ((x3993>(x3994&x3995))<<x3996);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x4001 = INT32_MIN;
	static int8_t x4003 = INT8_MAX;
	int8_t x4004 = 10;
	int32_t t151 = -733;

    t151 = ((x4001>(x4002&x4003))<<x4004);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x4013 = -143;
	int8_t x4014 = 40;
	uint8_t x4015 = 8U;
	uint8_t x4016 = 3U;
	int32_t t152 = -1;

    t152 = ((x4013>(x4014&x4015))<<x4016);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x4022 = UINT32_MAX;
	int8_t x4023 = INT8_MAX;
	int8_t x4024 = 27;

    t153 = ((x4021>(x4022&x4023))<<x4024);

    if (t153 != 134217728) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint16_t x4082 = 12U;
	int8_t x4083 = 3;
	uint16_t x4084 = 0U;
	static volatile int32_t t154 = 1;

    t154 = ((x4081>(x4082&x4083))<<x4084);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x4085 = 8U;
	uint8_t x4087 = UINT8_MAX;
	static volatile int8_t x4088 = 3;
	static int32_t t155 = -62;

    t155 = ((x4085>(x4086&x4087))<<x4088);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x4109 = -2;
	int32_t x4110 = -45376181;
	int32_t x4111 = INT32_MIN;
	uint32_t x4112 = 5U;
	int32_t t156 = -7;

    t156 = ((x4109>(x4110&x4111))<<x4112);

    if (t156 != 32) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x4122 = 0;
	uint8_t x4123 = UINT8_MAX;

    t157 = ((x4121>(x4122&x4123))<<x4124);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x4129 = INT32_MAX;
	int8_t x4130 = 60;
	uint32_t x4131 = 236201U;
	int8_t x4132 = 22;
	volatile int32_t t158 = -1;

    t158 = ((x4129>(x4130&x4131))<<x4132);

    if (t158 != 4194304) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x4150 = UINT16_MAX;
	uint16_t x4151 = 4357U;
	uint8_t x4152 = 1U;
	volatile int32_t t159 = 13156;

    t159 = ((x4149>(x4150&x4151))<<x4152);

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x4170 = INT32_MAX;
	uint32_t x4171 = 498U;
	uint16_t x4172 = 0U;
	volatile int32_t t160 = 1227072;

    t160 = ((x4169>(x4170&x4171))<<x4172);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x4225 = 164U;
	int8_t x4226 = -1;
	int32_t x4227 = INT32_MAX;
	static uint8_t x4228 = 2U;

    t161 = ((x4225>(x4226&x4227))<<x4228);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x4229 = INT8_MAX;
	int8_t x4230 = -18;
	int64_t x4231 = INT64_MIN;
	volatile uint8_t x4232 = 17U;
	int32_t t162 = -520;

    t162 = ((x4229>(x4230&x4231))<<x4232);

    if (t162 != 131072) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x4241 = INT16_MIN;
	int64_t x4243 = INT64_MIN;
	uint8_t x4244 = 1U;
	int32_t t163 = -4340534;

    t163 = ((x4241>(x4242&x4243))<<x4244);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x4261 = INT16_MIN;
	static uint64_t x4262 = 0LLU;
	int16_t x4263 = 1;
	static int16_t x4264 = 0;
	volatile int32_t t164 = 18;

    t164 = ((x4261>(x4262&x4263))<<x4264);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x4285 = INT16_MIN;
	volatile int16_t x4286 = -1;
	uint32_t x4287 = 36333044U;
	int32_t t165 = 0;

    t165 = ((x4285>(x4286&x4287))<<x4288);

    if (t165 != 128) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x4349 = UINT32_MAX;
	int8_t x4350 = -12;
	uint16_t x4351 = UINT16_MAX;
	int16_t x4352 = 13;
	int32_t t166 = 110682612;

    t166 = ((x4349>(x4350&x4351))<<x4352);

    if (t166 != 8192) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x4371 = UINT16_MAX;
	uint16_t x4372 = 5U;
	int32_t t167 = 7;

    t167 = ((x4369>(x4370&x4371))<<x4372);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x4401 = INT64_MIN;
	int32_t x4402 = -224528;
	int32_t x4404 = 2;
	int32_t t168 = -232321353;

    t168 = ((x4401>(x4402&x4403))<<x4404);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x4421 = -14578;
	volatile int32_t x4422 = 3;
	int8_t x4423 = -1;
	volatile int16_t x4424 = 7;
	static int32_t t169 = -6;

    t169 = ((x4421>(x4422&x4423))<<x4424);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x4453 = 803LLU;
	volatile int64_t x4454 = 7828LL;
	uint32_t x4455 = 3398264U;
	uint8_t x4456 = 3U;
	volatile int32_t t170 = 54;

    t170 = ((x4453>(x4454&x4455))<<x4456);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x4521 = 84955U;
	int16_t x4522 = INT16_MIN;
	uint8_t x4523 = UINT8_MAX;

    t171 = ((x4521>(x4522&x4523))<<x4524);

    if (t171 != 64) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x4601 = INT64_MAX;
	volatile int64_t x4602 = 64909112LL;
	int8_t x4604 = 3;
	volatile int32_t t172 = -6092441;

    t172 = ((x4601>(x4602&x4603))<<x4604);

    if (t172 != 8) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x4605 = -1;
	static int32_t x4606 = -1;
	int64_t x4607 = -73075898LL;
	uint8_t x4608 = 0U;
	volatile int32_t t173 = 47475;

    t173 = ((x4605>(x4606&x4607))<<x4608);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x4617 = INT32_MIN;
	int8_t x4618 = 0;
	int8_t x4619 = INT8_MIN;
	static volatile int8_t x4620 = 0;
	volatile int32_t t174 = -172;

    t174 = ((x4617>(x4618&x4619))<<x4620);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x4641 = -2;
	int32_t x4642 = INT32_MIN;
	int32_t x4643 = 236;
	int32_t t175 = -7386803;

    t175 = ((x4641>(x4642&x4643))<<x4644);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x4693 = 7686U;
	static volatile uint8_t x4694 = 0U;
	int16_t x4695 = 3;
	volatile uint16_t x4696 = 2U;
	int32_t t176 = 1;

    t176 = ((x4693>(x4694&x4695))<<x4696);

    if (t176 != 4) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x4698 = INT16_MAX;
	uint32_t x4699 = 4169U;
	int8_t x4700 = 13;
	volatile int32_t t177 = 26;

    t177 = ((x4697>(x4698&x4699))<<x4700);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x4733 = 1104000390562LL;
	int8_t x4734 = INT8_MAX;
	volatile int64_t x4735 = 6426759982354747LL;

    t178 = ((x4733>(x4734&x4735))<<x4736);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x4818 = INT64_MAX;
	int32_t x4819 = INT32_MIN;
	int32_t x4820 = 6;
	volatile int32_t t179 = 26;

    t179 = ((x4817>(x4818&x4819))<<x4820);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x4853 = -73;
	int8_t x4854 = 62;
	uint8_t x4855 = 9U;
	volatile uint8_t x4856 = 2U;
	static volatile int32_t t180 = 1;

    t180 = ((x4853>(x4854&x4855))<<x4856);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x4909 = -3244357306319057LL;
	int8_t x4910 = INT8_MAX;
	int16_t x4911 = INT16_MIN;
	uint8_t x4912 = 1U;
	int32_t t181 = -14399;

    t181 = ((x4909>(x4910&x4911))<<x4912);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x4913 = INT32_MIN;
	int64_t x4914 = INT64_MIN;
	uint32_t x4915 = 3925024U;
	static int8_t x4916 = 17;

    t182 = ((x4913>(x4914&x4915))<<x4916);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x4917 = 172LL;
	volatile int32_t x4919 = INT32_MIN;
	static int16_t x4920 = 7;
	int32_t t183 = -443496;

    t183 = ((x4917>(x4918&x4919))<<x4920);

    if (t183 != 128) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x4970 = INT64_MIN;
	uint16_t x4972 = 1U;
	int32_t t184 = 3885;

    t184 = ((x4969>(x4970&x4971))<<x4972);

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x4981 = 15228093865071515LLU;
	int16_t x4982 = -13751;
	int64_t x4983 = -1LL;
	uint8_t x4984 = 24U;
	static int32_t t185 = 4200;

    t185 = ((x4981>(x4982&x4983))<<x4984);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x5014 = 337146582LL;
	uint64_t x5015 = 15636324996LLU;
	uint8_t x5016 = 28U;
	volatile int32_t t186 = -434587;

    t186 = ((x5013>(x5014&x5015))<<x5016);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x5017 = 3765947129015LL;
	int16_t x5018 = INT16_MIN;
	volatile uint8_t x5020 = 1U;
	int32_t t187 = 3329;

    t187 = ((x5017>(x5018&x5019))<<x5020);

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x5029 = 0;
	static int8_t x5030 = -35;
	int16_t x5031 = -1;
	int16_t x5032 = 1;
	volatile int32_t t188 = -211913107;

    t188 = ((x5029>(x5030&x5031))<<x5032);

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x5061 = UINT16_MAX;
	int64_t x5062 = 3144525LL;
	uint8_t x5063 = 4U;
	int32_t x5064 = 1;
	static int32_t t189 = -1055360;

    t189 = ((x5061>(x5062&x5063))<<x5064);

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x5089 = -1LL;
	int16_t x5090 = 1343;
	uint8_t x5092 = 1U;

    t190 = ((x5089>(x5090&x5091))<<x5092);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x5097 = -251631;
	uint8_t x5099 = 0U;
	uint32_t x5100 = 14U;
	volatile int32_t t191 = -19347822;

    t191 = ((x5097>(x5098&x5099))<<x5100);

    if (t191 != 16384) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x5117 = -1851665;
	volatile int8_t x5120 = 19;
	int32_t t192 = -25;

    t192 = ((x5117>(x5118&x5119))<<x5120);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x5173 = 11069725704LL;
	static volatile int16_t x5174 = INT16_MIN;
	uint8_t x5176 = 11U;
	int32_t t193 = -549615010;

    t193 = ((x5173>(x5174&x5175))<<x5176);

    if (t193 != 2048) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x5189 = INT64_MAX;
	int32_t x5190 = -1;
	uint16_t x5191 = 4U;
	int8_t x5192 = 28;
	volatile int32_t t194 = 800694;

    t194 = ((x5189>(x5190&x5191))<<x5192);

    if (t194 != 268435456) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x5214 = UINT64_MAX;
	int8_t x5216 = 10;
	volatile int32_t t195 = -72;

    t195 = ((x5213>(x5214&x5215))<<x5216);

    if (t195 != 1024) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x5225 = 0;
	int32_t x5226 = 15993;
	int8_t x5227 = -3;
	volatile int8_t x5228 = 17;
	static int32_t t196 = -6;

    t196 = ((x5225>(x5226&x5227))<<x5228);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x5229 = INT64_MIN;
	int64_t x5230 = INT64_MIN;
	static volatile int16_t x5231 = INT16_MIN;
	int16_t x5232 = 3;
	volatile int32_t t197 = -28661845;

    t197 = ((x5229>(x5230&x5231))<<x5232);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x5257 = INT64_MIN;
	static uint8_t x5258 = 122U;
	int8_t x5259 = INT8_MIN;
	uint16_t x5260 = 2U;
	volatile int32_t t198 = 1;

    t198 = ((x5257>(x5258&x5259))<<x5260);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x5297 = -1096423204486474740LL;
	int16_t x5298 = INT16_MIN;
	static int32_t x5299 = INT32_MIN;
	static int32_t t199 = -11862;

    t199 = ((x5297>(x5298&x5299))<<x5300);

    if (t199 != 0) { NG(); } else { ; }
	
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

