
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

static int32_t x53 = INT32_MIN;
int64_t x78 = INT64_MAX;
volatile uint8_t x80 = 1U;
static volatile uint32_t x170 = 1063U;
static volatile int16_t x192 = 1;
int16_t x197 = INT16_MAX;
int8_t x273 = 1;
uint8_t x276 = 10U;
volatile int32_t x295 = INT32_MAX;
volatile int64_t t7 = 1LL;
static int8_t x393 = INT8_MIN;
volatile uint64_t x399 = 804LLU;
volatile int8_t x400 = 0;
static uint64_t t10 = 2141257726074066LLU;
int32_t x442 = INT32_MIN;
int8_t x443 = 4;
int32_t x481 = INT32_MIN;
uint16_t x484 = 3U;
int64_t t13 = 1762352465887129LL;
int16_t x601 = INT16_MIN;
volatile int32_t x602 = 1081360;
volatile int16_t x604 = 0;
int64_t x607 = -1LL;
int16_t x608 = 7;
uint16_t x669 = 3633U;
static int64_t x697 = INT64_MAX;
uint16_t x717 = UINT16_MAX;
int64_t x746 = INT64_MIN;
static volatile uint32_t x747 = UINT32_MAX;
uint32_t x854 = 1279810U;
static volatile int32_t t26 = -919;
uint16_t x910 = 432U;
volatile int8_t x912 = 8;
static volatile int32_t t27 = -89639;
static int16_t x925 = INT16_MIN;
uint8_t x928 = 22U;
int32_t x939 = INT32_MAX;
volatile int16_t x962 = INT16_MAX;
int8_t x964 = 3;
int8_t x970 = 1;
volatile int32_t t31 = 197565;
int8_t x1013 = INT8_MIN;
int16_t x1014 = INT16_MIN;
int8_t x1015 = -1;
volatile int32_t t32 = 95362386;
uint64_t x1029 = UINT64_MAX;
int32_t x1030 = -332782;
static volatile int8_t x1060 = 3;
int8_t x1104 = 1;
static uint64_t x1111 = 1418562728948776568LLU;
uint64_t x1138 = 103094344658LLU;
int16_t x1139 = 1;
volatile uint8_t x1193 = 26U;
int32_t t38 = 7826;
uint16_t x1228 = 0U;
uint64_t t40 = 11671476LLU;
static int16_t x1433 = 8596;
uint16_t x1434 = UINT16_MAX;
int32_t t44 = -1;
static volatile int8_t x1551 = INT8_MIN;
static int32_t x1641 = -811882427;
static volatile int16_t x1644 = 11;
int32_t t47 = 6767412;
uint32_t x1725 = 5U;
int64_t t49 = -16904436235757608LL;
uint8_t x1768 = 0U;
int64_t x1823 = INT64_MIN;
uint32_t x1825 = UINT32_MAX;
int64_t x1858 = INT64_MIN;
uint16_t x1860 = 7U;
int64_t x1877 = -1686827325458661LL;
int8_t x1878 = INT8_MIN;
uint8_t x1925 = 87U;
volatile int64_t x1931 = -1LL;
int64_t t59 = 3016564LL;
int8_t x1981 = INT8_MIN;
int32_t x2027 = -424129958;
static volatile uint8_t x2040 = 3U;
static volatile int32_t t62 = -65107;
int8_t x2094 = -62;
int16_t x2096 = 1;
uint64_t x2146 = 21021192764461150LLU;
uint32_t x2148 = 0U;
uint32_t t65 = 42765U;
int8_t x2231 = INT8_MIN;
int64_t x2262 = INT64_MIN;
static int16_t x2325 = -1973;
uint32_t x2326 = 1043292189U;
volatile int16_t x2421 = -1;
uint16_t x2499 = 14U;
volatile int16_t x2510 = -1;
int16_t x2512 = 6;
volatile int32_t x2577 = 147;
static uint8_t x2580 = 51U;
uint8_t x2584 = 11U;
int8_t x2625 = 12;
int8_t x2627 = INT8_MIN;
int64_t t75 = -4LL;
volatile int32_t t76 = 47;
int64_t x2837 = 845441963169455970LL;
static volatile int16_t x2838 = INT16_MAX;
int8_t x2880 = 17;
int16_t x2903 = 63;
volatile uint64_t t80 = 63950952843040670LLU;
int32_t x2921 = -1;
uint8_t x2981 = 24U;
static volatile int64_t x3014 = 48LL;
uint8_t x3016 = 0U;
int64_t x3077 = INT64_MIN;
static volatile uint8_t x3080 = 17U;
int8_t x3104 = 19;
int64_t x3286 = INT64_MAX;
volatile int16_t x3327 = -1;
volatile int32_t t93 = 745432;
volatile uint64_t t94 = 15LLU;
static int64_t x3394 = INT64_MIN;
uint32_t t97 = 0U;
volatile uint16_t x3413 = 3U;
int32_t t98 = 258124;
int16_t x3506 = INT16_MAX;
uint32_t x3507 = 8223277U;
int64_t x3525 = INT64_MIN;
int8_t x3677 = INT8_MAX;
uint8_t x3679 = UINT8_MAX;
volatile int64_t x3758 = INT64_MIN;
static volatile int64_t t104 = -492326199723LL;
uint64_t x3773 = UINT64_MAX;
static int16_t x3774 = 0;
int16_t x3836 = 1;
volatile int64_t t112 = -3118065089223LL;
uint8_t x3922 = UINT8_MAX;
static uint8_t x3925 = UINT8_MAX;
uint16_t x3927 = 3905U;
volatile int32_t t114 = -977;
int8_t x3944 = 0;
uint64_t t115 = 1518089198668006424LLU;
int16_t x3986 = 30;
volatile int32_t x3987 = INT32_MAX;
uint32_t x3999 = 0U;
static uint64_t x4006 = 4025482856712609765LLU;
int64_t x4007 = -128449920LL;
static uint8_t x4024 = 4U;
int8_t x4126 = INT8_MIN;
volatile int64_t t121 = 42678530LL;
uint32_t t125 = 295259U;
int8_t x4390 = -47;
volatile int32_t x4550 = INT32_MAX;
volatile uint16_t x5017 = 2U;
int32_t x5057 = 4718715;
volatile int32_t x5077 = INT32_MIN;
uint16_t x5078 = UINT16_MAX;
uint64_t x5079 = 176418LLU;
uint64_t t141 = 3739663382882708LLU;
uint16_t x5143 = UINT16_MAX;
uint32_t t142 = 31405U;
uint8_t x5232 = 44U;
int8_t x5241 = INT8_MIN;
volatile uint16_t x5243 = 8151U;
int8_t x5441 = INT8_MIN;
uint8_t x5471 = UINT8_MAX;
volatile uint32_t x5472 = 4U;
int8_t x5500 = 1;
volatile int32_t x5514 = 984940128;
int32_t x5518 = -37698781;
int8_t x5539 = INT8_MAX;
int16_t x5544 = 0;
static int64_t t155 = 883335809406LL;
int32_t x5633 = -1;
volatile int32_t t158 = -20771;
int32_t x5710 = INT32_MIN;
uint32_t t159 = 431U;
volatile int8_t x5736 = 1;
int32_t x5769 = -115803;
int32_t x6062 = INT32_MAX;
volatile int16_t x6083 = INT16_MIN;
int16_t x6089 = INT16_MAX;
static volatile int64_t t171 = 643LL;
volatile int64_t x6107 = -1LL;
static int32_t x6126 = INT32_MIN;
int32_t x6158 = INT32_MIN;
volatile int32_t x6159 = INT32_MAX;
volatile uint16_t x6180 = 24U;
uint32_t x6225 = 768U;
uint8_t x6228 = 9U;
uint64_t x6257 = 13895927015634LLU;
int8_t x6258 = 0;
uint8_t x6268 = 14U;
uint64_t x6354 = 28516552548064LLU;
uint16_t x6371 = 126U;
uint8_t x6372 = 1U;
int8_t x6381 = INT8_MIN;
volatile uint8_t x6442 = UINT8_MAX;
uint16_t x6453 = 810U;
int64_t x6481 = INT64_MIN;
volatile uint8_t x6484 = 2U;
int8_t x6491 = INT8_MIN;
volatile int16_t x6566 = -110;
volatile int16_t x6642 = 4;
int64_t x6666 = INT64_MIN;
volatile int32_t t197 = 1;
int16_t x6729 = 15;
int8_t x6732 = 0;
uint64_t x6733 = 38117926678410LLU;
int64_t x6734 = 58223732515662LL;


void f0(void) {
    	static int8_t x54 = -2;
	static int64_t x55 = INT64_MIN;
	uint32_t x56 = 3U;
	static volatile int64_t t0 = 1027034821LL;

    t0 = ((x53/(x54^x55))<<x56);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x77 = INT32_MAX;
	int64_t x79 = -1LL;
	static int64_t t1 = -13951291400LL;

    t1 = ((x77/(x78^x79))<<x80);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x169 = 48U;
	int32_t x171 = INT32_MIN;
	int64_t x172 = 7LL;
	volatile uint32_t t2 = 17U;

    t2 = ((x169/(x170^x171))<<x172);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x189 = -752;
	int16_t x190 = -1;
	int16_t x191 = INT16_MIN;
	volatile int32_t t3 = -577098128;

    t3 = ((x189/(x190^x191))<<x192);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x198 = -1;
	static int16_t x199 = INT16_MAX;
	volatile uint8_t x200 = 1U;
	static volatile int32_t t4 = 27529598;

    t4 = ((x197/(x198^x199))<<x200);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint32_t x274 = UINT32_MAX;
	uint8_t x275 = 127U;
	uint32_t t5 = 2430U;

    t5 = ((x273/(x274^x275))<<x276);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x293 = 57U;
	volatile int32_t x294 = INT32_MIN;
	int8_t x296 = 4;
	uint32_t t6 = 7U;

    t6 = ((x293/(x294^x295))<<x296);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x333 = UINT32_MAX;
	int32_t x334 = -1;
	static int64_t x335 = INT64_MIN;
	int16_t x336 = 2;

    t7 = ((x333/(x334^x335))<<x336);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x361 = -1;
	static int32_t x362 = INT32_MIN;
	uint8_t x363 = 6U;
	volatile int16_t x364 = 5;
	static volatile int32_t t8 = -109;

    t8 = ((x361/(x362^x363))<<x364);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x394 = INT32_MIN;
	int64_t x395 = -1LL;
	uint8_t x396 = 6U;
	volatile int64_t t9 = 4552506LL;

    t9 = ((x393/(x394^x395))<<x396);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x397 = 2131262978LL;
	volatile int16_t x398 = -1;

    t10 = ((x397/(x398^x399))<<x400);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x441 = UINT16_MAX;
	uint8_t x444 = 12U;
	volatile int32_t t11 = 1;

    t11 = ((x441/(x442^x443))<<x444);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x477 = 1;
	int16_t x478 = -1;
	int64_t x479 = 1507875LL;
	uint8_t x480 = 2U;
	volatile int64_t t12 = -62571687LL;

    t12 = ((x477/(x478^x479))<<x480);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x482 = INT16_MIN;
	volatile int64_t x483 = INT64_MAX;

    t13 = ((x481/(x482^x483))<<x484);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x485 = 0U;
	int32_t x486 = INT32_MIN;
	uint8_t x487 = 12U;
	int16_t x488 = 8;
	int32_t t14 = 6815375;

    t14 = ((x485/(x486^x487))<<x488);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x603 = INT64_MAX;
	volatile int64_t t15 = -117321429280546338LL;

    t15 = ((x601/(x602^x603))<<x604);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x605 = 1U;
	uint32_t x606 = 766U;
	static volatile int64_t t16 = 35642274800582LL;

    t16 = ((x605/(x606^x607))<<x608);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x661 = INT64_MAX;
	volatile int16_t x662 = -1;
	int64_t x663 = INT64_MIN;
	uint16_t x664 = 2U;
	volatile int64_t t17 = -327211835291365LL;

    t17 = ((x661/(x662^x663))<<x664);

    if (t17 != 4LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x670 = UINT16_MAX;
	uint8_t x671 = 66U;
	uint16_t x672 = 1U;
	volatile int32_t t18 = -4;

    t18 = ((x669/(x670^x671))<<x672);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x698 = -1;
	static volatile int8_t x699 = INT8_MIN;
	int8_t x700 = 0;
	static int64_t t19 = -49306LL;

    t19 = ((x697/(x698^x699))<<x700);

    if (t19 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x718 = -610205851LL;
	int32_t x719 = -1;
	uint8_t x720 = 1U;
	static volatile int64_t t20 = -2445909127LL;

    t20 = ((x717/(x718^x719))<<x720);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x745 = INT32_MIN;
	uint8_t x748 = 1U;
	volatile int64_t t21 = 17388244510LL;

    t21 = ((x745/(x746^x747))<<x748);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x781 = -1;
	static uint8_t x782 = 6U;
	int64_t x783 = INT64_MIN;
	static uint8_t x784 = 1U;
	volatile int64_t t22 = -61544279LL;

    t22 = ((x781/(x782^x783))<<x784);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x853 = 5;
	volatile uint16_t x855 = UINT16_MAX;
	volatile uint32_t x856 = 11U;
	volatile uint32_t t23 = 1299U;

    t23 = ((x853/(x854^x855))<<x856);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x869 = 50LLU;
	int32_t x870 = 9269557;
	static volatile uint8_t x871 = UINT8_MAX;
	int16_t x872 = 18;
	volatile uint64_t t24 = 21378522495298LLU;

    t24 = ((x869/(x870^x871))<<x872);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x877 = 129U;
	int32_t x878 = INT32_MIN;
	int64_t x879 = -170LL;
	uint8_t x880 = 1U;
	int64_t t25 = 211905LL;

    t25 = ((x877/(x878^x879))<<x880);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x893 = 3513210;
	int32_t x894 = INT32_MIN;
	uint8_t x895 = 5U;
	uint16_t x896 = 9U;

    t26 = ((x893/(x894^x895))<<x896);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x909 = -6;
	uint16_t x911 = UINT16_MAX;

    t27 = ((x909/(x910^x911))<<x912);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x926 = UINT32_MAX;
	static uint32_t x927 = 90934186U;
	uint32_t t28 = 50506325U;

    t28 = ((x925/(x926^x927))<<x928);

    if (t28 != 4194304U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x937 = -1;
	uint32_t x938 = 9578737U;
	int8_t x940 = 1;
	volatile uint32_t t29 = 0U;

    t29 = ((x937/(x938^x939))<<x940);

    if (t29 != 4U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x961 = UINT8_MAX;
	static volatile int64_t x963 = -25186242639750127LL;
	int64_t t30 = -48435502445795081LL;

    t30 = ((x961/(x962^x963))<<x964);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x969 = UINT8_MAX;
	int16_t x971 = 1720;
	uint8_t x972 = 3U;

    t31 = ((x969/(x970^x971))<<x972);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1016 = 1;

    t32 = ((x1013/(x1014^x1015))<<x1016);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x1031 = INT32_MAX;
	int8_t x1032 = 0;
	static uint64_t t33 = 530283119581896LLU;

    t33 = ((x1029/(x1030^x1031))<<x1032);

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x1057 = INT16_MIN;
	uint32_t x1058 = 1719051U;
	int16_t x1059 = INT16_MIN;
	static volatile uint32_t t34 = 218U;

    t34 = ((x1057/(x1058^x1059))<<x1060);

    if (t34 != 8U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x1101 = INT64_MAX;
	int8_t x1102 = INT8_MAX;
	int64_t x1103 = 1271578990LL;
	int64_t t35 = 27862665655LL;

    t35 = ((x1101/(x1102^x1103))<<x1104);

    if (t35 != 14506959904LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x1109 = UINT64_MAX;
	uint64_t x1110 = UINT64_MAX;
	static uint64_t x1112 = 1LLU;
	uint64_t t36 = 2793022963710926448LLU;

    t36 = ((x1109/(x1110^x1111))<<x1112);

    if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x1137 = -1;
	volatile int64_t x1140 = 0LL;
	static volatile uint64_t t37 = 36731961LLU;

    t37 = ((x1137/(x1138^x1139))<<x1140);

    if (t37 != 178930707LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x1194 = INT32_MAX;
	uint16_t x1195 = 31652U;
	uint16_t x1196 = 3U;

    t38 = ((x1193/(x1194^x1195))<<x1196);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1225 = INT32_MIN;
	int16_t x1226 = -1;
	uint8_t x1227 = UINT8_MAX;
	int32_t t39 = -1620244;

    t39 = ((x1225/(x1226^x1227))<<x1228);

    if (t39 != 8388608) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x1253 = 6U;
	static int16_t x1254 = INT16_MAX;
	uint64_t x1255 = 70LLU;
	uint8_t x1256 = 0U;

    t40 = ((x1253/(x1254^x1255))<<x1256);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x1257 = 90U;
	static uint64_t x1258 = UINT64_MAX;
	static int8_t x1259 = INT8_MAX;
	int32_t x1260 = 3;
	static uint64_t t41 = 746516243LLU;

    t41 = ((x1257/(x1258^x1259))<<x1260);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x1301 = INT32_MAX;
	volatile int16_t x1302 = INT16_MIN;
	int8_t x1303 = -19;
	volatile uint16_t x1304 = 1U;
	int32_t t42 = 18174941;

    t42 = ((x1301/(x1302^x1303))<<x1304);

    if (t42 != 131148) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x1435 = INT64_MIN;
	static uint8_t x1436 = 1U;
	volatile int64_t t43 = -1761647451721LL;

    t43 = ((x1433/(x1434^x1435))<<x1436);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x1453 = 5U;
	volatile uint16_t x1454 = 5U;
	static uint8_t x1455 = 3U;
	static uint16_t x1456 = 0U;

    t44 = ((x1453/(x1454^x1455))<<x1456);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x1549 = INT64_MIN;
	volatile uint64_t x1550 = UINT64_MAX;
	uint16_t x1552 = 11U;
	volatile uint64_t t45 = 1635837541130LLU;

    t45 = ((x1549/(x1550^x1551))<<x1552);

    if (t45 != 1161999626690365440LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1642 = INT8_MIN;
	uint16_t x1643 = 6697U;
	int32_t t46 = 31433;

    t46 = ((x1641/(x1642^x1643))<<x1644);

    if (t46 != 246585344) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x1685 = -9;
	volatile uint16_t x1686 = 8U;
	static volatile int32_t x1687 = 502896;
	uint8_t x1688 = 14U;

    t47 = ((x1685/(x1686^x1687))<<x1688);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x1726 = UINT16_MAX;
	volatile int8_t x1727 = -1;
	uint16_t x1728 = 13U;
	volatile uint32_t t48 = 4642U;

    t48 = ((x1725/(x1726^x1727))<<x1728);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1745 = INT64_MIN;
	int16_t x1746 = INT16_MAX;
	int16_t x1747 = -1;
	int32_t x1748 = 3;

    t49 = ((x1745/(x1746^x1747))<<x1748);

    if (t49 != 2251799813685248LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint64_t x1765 = UINT64_MAX;
	volatile int16_t x1766 = -1;
	int8_t x1767 = INT8_MIN;
	volatile uint64_t t50 = 599LLU;

    t50 = ((x1765/(x1766^x1767))<<x1768);

    if (t50 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x1821 = 1U;
	int64_t x1822 = 27640442LL;
	uint32_t x1824 = 0U;
	static int64_t t51 = 19LL;

    t51 = ((x1821/(x1822^x1823))<<x1824);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x1826 = INT64_MIN;
	int16_t x1827 = INT16_MIN;
	static uint8_t x1828 = 6U;
	int64_t t52 = -735847LL;

    t52 = ((x1825/(x1826^x1827))<<x1828);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1829 = -1;
	uint8_t x1830 = 1U;
	static int16_t x1831 = -875;
	static int8_t x1832 = 0;
	int32_t t53 = -169047643;

    t53 = ((x1829/(x1830^x1831))<<x1832);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1849 = INT8_MIN;
	volatile int16_t x1850 = -1;
	volatile int32_t x1851 = INT32_MIN;
	int16_t x1852 = 4;
	int32_t t54 = -1851;

    t54 = ((x1849/(x1850^x1851))<<x1852);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1857 = UINT8_MAX;
	int8_t x1859 = INT8_MIN;
	int64_t t55 = -27952585150LL;

    t55 = ((x1857/(x1858^x1859))<<x1860);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x1879 = 214934226802674323LLU;
	uint16_t x1880 = 13U;
	static volatile uint64_t t56 = 8568181340048967003LLU;

    t56 = ((x1877/(x1878^x1879))<<x1880);

    if (t56 != 8192LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x1893 = -1;
	int16_t x1894 = INT16_MIN;
	int32_t x1895 = INT32_MAX;
	uint16_t x1896 = 17U;
	volatile int32_t t57 = 64881;

    t57 = ((x1893/(x1894^x1895))<<x1896);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x1926 = -1;
	int64_t x1927 = INT64_MIN;
	uint32_t x1928 = 3U;
	static int64_t t58 = -394989LL;

    t58 = ((x1925/(x1926^x1927))<<x1928);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x1929 = -4220;
	uint16_t x1930 = 197U;
	static int8_t x1932 = 0;

    t59 = ((x1929/(x1930^x1931))<<x1932);

    if (t59 != 21LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x1982 = 568U;
	int16_t x1983 = INT16_MIN;
	uint8_t x1984 = 0U;
	int32_t t60 = -133747576;

    t60 = ((x1981/(x1982^x1983))<<x1984);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x2025 = 0;
	uint64_t x2026 = UINT64_MAX;
	static volatile int8_t x2028 = 14;
	volatile uint64_t t61 = 552326801LLU;

    t61 = ((x2025/(x2026^x2027))<<x2028);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x2037 = INT16_MIN;
	uint16_t x2038 = UINT16_MAX;
	volatile int16_t x2039 = -1;

    t62 = ((x2037/(x2038^x2039))<<x2040);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x2093 = INT64_MIN;
	volatile int32_t x2095 = INT32_MAX;
	volatile int64_t t63 = 65134380959405LL;

    t63 = ((x2093/(x2094^x2095))<<x2096);

    if (t63 != 8589934836LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2145 = -7;
	int32_t x2147 = 350;
	uint64_t t64 = 5LLU;

    t64 = ((x2145/(x2146^x2147))<<x2148);

    if (t64 != 877LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x2213 = INT8_MIN;
	uint32_t x2214 = 2U;
	uint8_t x2215 = 51U;
	uint8_t x2216 = 12U;

    t65 = ((x2213/(x2214^x2215))<<x2216);

    if (t65 != 2541907968U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x2229 = UINT64_MAX;
	int8_t x2230 = -1;
	int16_t x2232 = 0;
	uint64_t t66 = 8111087LLU;

    t66 = ((x2229/(x2230^x2231))<<x2232);

    if (t66 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint8_t x2245 = 1U;
	static int64_t x2246 = 8302502542840231LL;
	static int16_t x2247 = -374;
	uint64_t x2248 = 22LLU;
	volatile int64_t t67 = -44785LL;

    t67 = ((x2245/(x2246^x2247))<<x2248);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x2261 = INT16_MAX;
	volatile uint64_t x2263 = UINT64_MAX;
	uint8_t x2264 = 0U;
	volatile uint64_t t68 = 10388LLU;

    t68 = ((x2261/(x2262^x2263))<<x2264);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x2327 = -7766680681565LL;
	int64_t x2328 = 20LL;
	volatile int64_t t69 = 6LL;

    t69 = ((x2325/(x2326^x2327))<<x2328);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x2422 = 5006741767002326463LLU;
	volatile int8_t x2423 = INT8_MIN;
	uint16_t x2424 = 7U;
	volatile uint64_t t70 = 2748149533LLU;

    t70 = ((x2421/(x2422^x2423))<<x2424);

    if (t70 != 128LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x2497 = 442;
	uint64_t x2498 = UINT64_MAX;
	static uint8_t x2500 = 7U;
	uint64_t t71 = 62712848361110815LLU;

    t71 = ((x2497/(x2498^x2499))<<x2500);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x2509 = 2623U;
	static int16_t x2511 = -1019;
	int32_t t72 = -1423;

    t72 = ((x2509/(x2510^x2511))<<x2512);

    if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x2578 = UINT16_MAX;
	static int64_t x2579 = 2LL;
	int64_t t73 = 1LL;

    t73 = ((x2577/(x2578^x2579))<<x2580);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x2581 = 2230195552LLU;
	uint16_t x2582 = 1880U;
	volatile int8_t x2583 = -1;
	volatile uint64_t t74 = 211205914861991LLU;

    t74 = ((x2581/(x2582^x2583))<<x2584);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x2626 = INT64_MIN;
	uint8_t x2628 = 25U;

    t75 = ((x2625/(x2626^x2627))<<x2628);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x2721 = 1U;
	volatile int8_t x2722 = INT8_MIN;
	int32_t x2723 = INT32_MIN;
	static uint64_t x2724 = 0LLU;

    t76 = ((x2721/(x2722^x2723))<<x2724);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x2809 = -383755827342477467LL;
	uint64_t x2810 = 3025403LLU;
	uint8_t x2811 = 55U;
	volatile uint16_t x2812 = 2U;
	uint64_t t77 = 14LLU;

    t77 = ((x2809/(x2810^x2811))<<x2812);

    if (t77 != 23882132544224LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x2839 = INT64_MAX;
	uint8_t x2840 = 1U;
	int64_t t78 = -4195LL;

    t78 = ((x2837/(x2838^x2839))<<x2840);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x2877 = 4U;
	int8_t x2878 = -1;
	uint16_t x2879 = UINT16_MAX;
	volatile int32_t t79 = -950;

    t79 = ((x2877/(x2878^x2879))<<x2880);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x2901 = INT64_MIN;
	static uint64_t x2902 = 588870860002LLU;
	uint8_t x2904 = 32U;

    t80 = ((x2901/(x2902^x2903))<<x2904);

    if (t80 != 67271252418494464LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x2922 = 21933525762296354LLU;
	int16_t x2923 = INT16_MAX;
	static uint8_t x2924 = 3U;
	uint64_t t81 = 15631328LLU;

    t81 = ((x2921/(x2922^x2923))<<x2924);

    if (t81 != 6728LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x2982 = INT64_MIN;
	int8_t x2983 = INT8_MAX;
	static int8_t x2984 = 1;
	int64_t t82 = -508256428749LL;

    t82 = ((x2981/(x2982^x2983))<<x2984);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x2985 = INT8_MIN;
	static uint32_t x2986 = UINT32_MAX;
	int64_t x2987 = INT64_MIN;
	volatile uint64_t x2988 = 9LLU;
	int64_t t83 = -256LL;

    t83 = ((x2985/(x2986^x2987))<<x2988);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x3013 = 22870873712539LLU;
	int8_t x3015 = INT8_MAX;
	uint64_t t84 = 3689650617LLU;

    t84 = ((x3013/(x3014^x3015))<<x3016);

    if (t84 != 289504730538LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x3078 = 47358861LLU;
	int8_t x3079 = INT8_MIN;
	uint64_t t85 = 88710404LLU;

    t85 = ((x3077/(x3078^x3079))<<x3080);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x3101 = 321U;
	uint16_t x3102 = 17349U;
	uint8_t x3103 = 1U;
	int32_t t86 = 1;

    t86 = ((x3101/(x3102^x3103))<<x3104);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x3121 = -1LL;
	int32_t x3122 = INT32_MIN;
	static int16_t x3123 = -1;
	static uint8_t x3124 = 26U;
	int64_t t87 = -8851021540999733LL;

    t87 = ((x3121/(x3122^x3123))<<x3124);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x3205 = 6200154U;
	volatile uint8_t x3206 = 41U;
	static int8_t x3207 = INT8_MIN;
	static volatile uint8_t x3208 = 0U;
	volatile uint32_t t88 = 5585846U;

    t88 = ((x3205/(x3206^x3207))<<x3208);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x3233 = 3U;
	int32_t x3234 = -56;
	static int8_t x3235 = INT8_MIN;
	volatile uint16_t x3236 = 0U;
	volatile int32_t t89 = 392;

    t89 = ((x3233/(x3234^x3235))<<x3236);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x3269 = 6404021U;
	volatile int32_t x3270 = 106420;
	static int64_t x3271 = 476LL;
	uint16_t x3272 = 31U;
	int64_t t90 = -1LL;

    t90 = ((x3269/(x3270^x3271))<<x3272);

    if (t90 != 128849018880LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x3285 = -345;
	volatile int16_t x3287 = INT16_MAX;
	int8_t x3288 = 1;
	volatile int64_t t91 = 43482LL;

    t91 = ((x3285/(x3286^x3287))<<x3288);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x3313 = -1;
	volatile uint8_t x3314 = 74U;
	int8_t x3315 = INT8_MIN;
	int8_t x3316 = 1;
	static volatile int32_t t92 = 1;

    t92 = ((x3313/(x3314^x3315))<<x3316);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x3325 = -272;
	uint16_t x3326 = 2018U;
	int16_t x3328 = 0;

    t93 = ((x3325/(x3326^x3327))<<x3328);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x3329 = 0U;
	volatile uint64_t x3330 = 208LLU;
	int16_t x3331 = 1636;
	static int16_t x3332 = 4;

    t94 = ((x3329/(x3330^x3331))<<x3332);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x3365 = -15;
	int32_t x3366 = 44;
	int32_t x3367 = INT32_MIN;
	uint8_t x3368 = 1U;
	int32_t t95 = -11440950;

    t95 = ((x3365/(x3366^x3367))<<x3368);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x3393 = INT64_MIN;
	uint8_t x3395 = 63U;
	int16_t x3396 = 6;
	int64_t t96 = -405075190438956557LL;

    t96 = ((x3393/(x3394^x3395))<<x3396);

    if (t96 != 64LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x3405 = 15U;
	uint32_t x3406 = 39823U;
	static int32_t x3407 = 0;
	uint8_t x3408 = 0U;

    t97 = ((x3405/(x3406^x3407))<<x3408);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x3414 = INT8_MIN;
	int32_t x3415 = 726439;
	static uint8_t x3416 = 4U;

    t98 = ((x3413/(x3414^x3415))<<x3416);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x3453 = INT16_MIN;
	static int64_t x3454 = INT64_MIN;
	uint64_t x3455 = 6643384765LLU;
	uint8_t x3456 = 14U;
	uint64_t t99 = 675593671573LLU;

    t99 = ((x3453/(x3454^x3455))<<x3456);

    if (t99 != 16384LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x3505 = 99U;
	uint16_t x3508 = 0U;
	uint32_t t100 = 8U;

    t100 = ((x3505/(x3506^x3507))<<x3508);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x3526 = -2;
	int16_t x3527 = 525;
	uint8_t x3528 = 2U;
	volatile int64_t t101 = -7367759893LL;

    t101 = ((x3525/(x3526^x3527))<<x3528);

    if (t101 != 70273310756988768LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x3537 = INT8_MIN;
	uint8_t x3538 = 0U;
	int64_t x3539 = 248034111820740LL;
	int32_t x3540 = 0;
	int64_t t102 = -38669328LL;

    t102 = ((x3537/(x3538^x3539))<<x3540);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x3678 = INT64_MAX;
	volatile uint8_t x3680 = 5U;
	int64_t t103 = -244738256521LL;

    t103 = ((x3677/(x3678^x3679))<<x3680);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x3757 = -1;
	int8_t x3759 = INT8_MIN;
	volatile uint64_t x3760 = 9LLU;

    t104 = ((x3757/(x3758^x3759))<<x3760);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x3761 = UINT32_MAX;
	int32_t x3762 = INT32_MIN;
	int64_t x3763 = INT64_MIN;
	uint16_t x3764 = 18U;
	int64_t t105 = -2064940857232099956LL;

    t105 = ((x3761/(x3762^x3763))<<x3764);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x3775 = INT8_MIN;
	int8_t x3776 = 2;
	volatile uint64_t t106 = 1678077LLU;

    t106 = ((x3773/(x3774^x3775))<<x3776);

    if (t106 != 4LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x3833 = -30346;
	int64_t x3834 = -1LL;
	uint32_t x3835 = 170754049U;
	static int64_t t107 = 1713LL;

    t107 = ((x3833/(x3834^x3835))<<x3836);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3845 = 1;
	uint16_t x3846 = 9694U;
	static int8_t x3847 = -51;
	volatile int8_t x3848 = 1;
	static int32_t t108 = 498062;

    t108 = ((x3845/(x3846^x3847))<<x3848);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x3849 = INT64_MAX;
	volatile uint16_t x3850 = UINT16_MAX;
	int32_t x3851 = 480;
	static uint16_t x3852 = 0U;
	int64_t t109 = -377932029LL;

    t109 = ((x3849/(x3850^x3851))<<x3852);

    if (t109 != 141778065280989LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x3869 = INT16_MIN;
	uint64_t x3870 = 51047LLU;
	int16_t x3871 = 6;
	uint8_t x3872 = 27U;
	volatile uint64_t t110 = 19447584045LLU;

    t110 = ((x3869/(x3870^x3871))<<x3872);

    if (t110 != 11181673848263147520LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x3901 = 1943;
	static volatile int32_t x3902 = INT32_MAX;
	uint64_t x3903 = 7589LLU;
	int8_t x3904 = 1;
	uint64_t t111 = 433483288590LLU;

    t111 = ((x3901/(x3902^x3903))<<x3904);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x3909 = INT32_MAX;
	uint16_t x3910 = UINT16_MAX;
	static int64_t x3911 = -1328097424776253881LL;
	volatile int8_t x3912 = 48;

    t112 = ((x3909/(x3910^x3911))<<x3912);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x3921 = 0U;
	int16_t x3923 = INT16_MAX;
	static volatile uint8_t x3924 = 3U;
	volatile int32_t t113 = -9;

    t113 = ((x3921/(x3922^x3923))<<x3924);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x3926 = INT8_MIN;
	int8_t x3928 = 1;

    t114 = ((x3925/(x3926^x3927))<<x3928);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x3941 = -82;
	static volatile uint32_t x3942 = UINT32_MAX;
	uint64_t x3943 = 1402073512LLU;

    t115 = ((x3941/(x3942^x3943))<<x3944);

    if (t115 != 6376571508LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x3985 = INT16_MIN;
	static uint8_t x3988 = 0U;
	int32_t t116 = 1527;

    t116 = ((x3985/(x3986^x3987))<<x3988);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x3997 = INT8_MAX;
	int32_t x3998 = INT32_MIN;
	uint16_t x4000 = 0U;
	volatile uint32_t t117 = 113558903U;

    t117 = ((x3997/(x3998^x3999))<<x4000);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x4005 = -6;
	static volatile int16_t x4008 = 0;
	uint64_t t118 = 163207601LLU;

    t118 = ((x4005/(x4006^x4007))<<x4008);

    if (t118 != 1LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x4021 = 0;
	int32_t x4022 = INT32_MAX;
	int64_t x4023 = INT64_MIN;
	int64_t t119 = 528484500457LL;

    t119 = ((x4021/(x4022^x4023))<<x4024);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x4077 = INT16_MIN;
	volatile int32_t x4078 = 227674;
	volatile int8_t x4079 = INT8_MIN;
	static uint8_t x4080 = 31U;
	volatile int32_t t120 = -1147606;

    t120 = ((x4077/(x4078^x4079))<<x4080);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x4125 = -1;
	static int64_t x4127 = INT64_MAX;
	int8_t x4128 = 1;

    t121 = ((x4125/(x4126^x4127))<<x4128);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x4161 = 3370U;
	int64_t x4162 = INT64_MAX;
	int8_t x4163 = INT8_MIN;
	int16_t x4164 = 7;
	int64_t t122 = -39045519LL;

    t122 = ((x4161/(x4162^x4163))<<x4164);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x4185 = INT64_MIN;
	static int8_t x4186 = -1;
	uint16_t x4187 = UINT16_MAX;
	uint8_t x4188 = 1U;
	int64_t t123 = 629906844745805936LL;

    t123 = ((x4185/(x4186^x4187))<<x4188);

    if (t123 != 281474976710656LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x4229 = 4869595850540842LL;
	int32_t x4230 = -25305460;
	int32_t x4231 = INT32_MIN;
	volatile uint8_t x4232 = 14U;
	static volatile int64_t t124 = 0LL;

    t124 = ((x4229/(x4230^x4231))<<x4232);

    if (t124 != 37595070464LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x4265 = 1743U;
	int16_t x4266 = -1;
	volatile int8_t x4267 = INT8_MIN;
	static int16_t x4268 = 0;

    t125 = ((x4265/(x4266^x4267))<<x4268);

    if (t125 != 13U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x4337 = 1U;
	uint32_t x4338 = UINT32_MAX;
	int8_t x4339 = INT8_MIN;
	int8_t x4340 = 8;
	static volatile uint32_t t126 = 50292U;

    t126 = ((x4337/(x4338^x4339))<<x4340);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x4357 = -1;
	int64_t x4358 = -1LL;
	static volatile int8_t x4359 = 2;
	uint8_t x4360 = 0U;
	volatile int64_t t127 = 105778LL;

    t127 = ((x4357/(x4358^x4359))<<x4360);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x4389 = INT32_MIN;
	static uint64_t x4391 = UINT64_MAX;
	uint8_t x4392 = 1U;
	uint64_t t128 = 1132LLU;

    t128 = ((x4389/(x4390^x4391))<<x4392);

    if (t128 != 802032350937481216LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x4393 = -1;
	int16_t x4394 = -1;
	uint64_t x4395 = 4356756925030930LLU;
	uint8_t x4396 = 5U;
	volatile uint64_t t129 = 2688098LLU;

    t129 = ((x4393/(x4394^x4395))<<x4396);

    if (t129 != 32LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x4549 = -1LL;
	static int16_t x4551 = INT16_MIN;
	int8_t x4552 = 2;
	int64_t t130 = 240824849LL;

    t130 = ((x4549/(x4550^x4551))<<x4552);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x4625 = UINT64_MAX;
	int32_t x4626 = -250032925;
	volatile uint64_t x4627 = 14LLU;
	int8_t x4628 = 47;
	static uint64_t t131 = 1678901LLU;

    t131 = ((x4625/(x4626^x4627))<<x4628);

    if (t131 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x4689 = INT8_MAX;
	static int64_t x4690 = INT64_MIN;
	uint8_t x4691 = 8U;
	int8_t x4692 = 1;
	int64_t t132 = 31137838087131LL;

    t132 = ((x4689/(x4690^x4691))<<x4692);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x4781 = 318297U;
	uint32_t x4782 = 470U;
	volatile int16_t x4783 = 232;
	uint8_t x4784 = 6U;
	volatile uint32_t t133 = 420351449U;

    t133 = ((x4781/(x4782^x4783))<<x4784);

    if (t133 != 64000U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x4885 = 0;
	uint8_t x4886 = 11U;
	int32_t x4887 = -1;
	static int16_t x4888 = 20;
	static volatile int32_t t134 = -819;

    t134 = ((x4885/(x4886^x4887))<<x4888);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x4897 = 8092657U;
	uint8_t x4898 = 11U;
	int32_t x4899 = 30755;
	static volatile int8_t x4900 = 0;
	volatile uint32_t t135 = 67U;

    t135 = ((x4897/(x4898^x4899))<<x4900);

    if (t135 != 263U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x4961 = INT8_MIN;
	volatile int32_t x4962 = 0;
	int8_t x4963 = -1;
	static int16_t x4964 = 0;
	static int32_t t136 = 21176;

    t136 = ((x4961/(x4962^x4963))<<x4964);

    if (t136 != 128) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x4997 = INT8_MIN;
	int32_t x4998 = -35;
	volatile uint16_t x4999 = 5387U;
	volatile uint8_t x5000 = 27U;
	volatile int32_t t137 = 0;

    t137 = ((x4997/(x4998^x4999))<<x5000);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x5018 = 1;
	uint8_t x5019 = UINT8_MAX;
	int8_t x5020 = 28;
	volatile int32_t t138 = 69375648;

    t138 = ((x5017/(x5018^x5019))<<x5020);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x5021 = -220352002LL;
	int8_t x5022 = INT8_MAX;
	volatile int64_t x5023 = INT64_MIN;
	volatile int8_t x5024 = 3;
	int64_t t139 = 1736368090LL;

    t139 = ((x5021/(x5022^x5023))<<x5024);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x5058 = INT8_MIN;
	volatile int64_t x5059 = -1LL;
	uint8_t x5060 = 1U;
	int64_t t140 = 400768936LL;

    t140 = ((x5057/(x5058^x5059))<<x5060);

    if (t140 != 74310LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x5080 = 14;

    t141 = ((x5077/(x5078^x5079))<<x5080);

    if (t141 != 1998079180148686848LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x5141 = UINT32_MAX;
	uint32_t x5142 = 252304262U;
	uint32_t x5144 = 0U;

    t142 = ((x5141/(x5142^x5143))<<x5144);

    if (t142 != 17U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x5153 = -1;
	static volatile uint16_t x5154 = 0U;
	int64_t x5155 = INT64_MAX;
	uint8_t x5156 = 57U;
	static volatile int64_t t143 = 51643001LL;

    t143 = ((x5153/(x5154^x5155))<<x5156);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x5181 = 1014731508LLU;
	uint64_t x5182 = 8119843LLU;
	int64_t x5183 = -22707974LL;
	static uint16_t x5184 = 6U;
	uint64_t t144 = 2101017524031603LLU;

    t144 = ((x5181/(x5182^x5183))<<x5184);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x5229 = -3;
	uint8_t x5230 = 9U;
	int64_t x5231 = -133735350LL;
	volatile int64_t t145 = -3138570002742229LL;

    t145 = ((x5229/(x5230^x5231))<<x5232);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x5242 = 3;
	int8_t x5244 = 10;
	volatile int32_t t146 = 15405;

    t146 = ((x5241/(x5242^x5243))<<x5244);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x5442 = UINT8_MAX;
	int8_t x5443 = INT8_MIN;
	uint16_t x5444 = 13U;
	volatile int32_t t147 = 947524;

    t147 = ((x5441/(x5442^x5443))<<x5444);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x5469 = 8705729012096LLU;
	volatile uint32_t x5470 = 349U;
	uint64_t t148 = 169186040LLU;

    t148 = ((x5469/(x5470^x5471))<<x5472);

    if (t148 != 333233646384LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x5497 = 131995796;
	int32_t x5498 = INT32_MIN;
	int32_t x5499 = -21;
	int32_t t149 = -7;

    t149 = ((x5497/(x5498^x5499))<<x5500);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x5513 = 2U;
	uint16_t x5515 = 2373U;
	int16_t x5516 = 10;
	volatile int32_t t150 = -104395;

    t150 = ((x5513/(x5514^x5515))<<x5516);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x5517 = INT8_MAX;
	int8_t x5519 = 11;
	uint8_t x5520 = 2U;
	static volatile int32_t t151 = -7854;

    t151 = ((x5517/(x5518^x5519))<<x5520);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x5525 = UINT32_MAX;
	static volatile int32_t x5526 = 1;
	static volatile int8_t x5527 = -6;
	volatile uint8_t x5528 = 6U;
	volatile uint32_t t152 = 10U;

    t152 = ((x5525/(x5526^x5527))<<x5528);

    if (t152 != 64U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x5537 = -1;
	volatile uint8_t x5538 = 14U;
	volatile uint8_t x5540 = 0U;
	int32_t t153 = -464;

    t153 = ((x5537/(x5538^x5539))<<x5540);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x5541 = INT16_MAX;
	int16_t x5542 = 0;
	static volatile uint64_t x5543 = 3881894LLU;
	uint64_t t154 = 309759LLU;

    t154 = ((x5541/(x5542^x5543))<<x5544);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x5585 = INT8_MAX;
	int64_t x5586 = INT64_MAX;
	volatile int32_t x5587 = INT32_MAX;
	int16_t x5588 = 0;

    t155 = ((x5585/(x5586^x5587))<<x5588);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x5609 = INT16_MIN;
	volatile int64_t x5610 = -1LL;
	volatile uint16_t x5611 = UINT16_MAX;
	uint8_t x5612 = 2U;
	volatile int64_t t156 = -6334041LL;

    t156 = ((x5609/(x5610^x5611))<<x5612);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x5634 = INT8_MIN;
	int64_t x5635 = 1033044746LL;
	static volatile uint32_t x5636 = 1U;
	int64_t t157 = 1042706588631LL;

    t157 = ((x5633/(x5634^x5635))<<x5636);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x5661 = -2;
	int16_t x5662 = INT16_MIN;
	uint8_t x5663 = 112U;
	static volatile uint8_t x5664 = 1U;

    t158 = ((x5661/(x5662^x5663))<<x5664);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x5709 = INT32_MAX;
	uint32_t x5711 = UINT32_MAX;
	uint16_t x5712 = 4U;

    t159 = ((x5709/(x5710^x5711))<<x5712);

    if (t159 != 16U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x5733 = 0U;
	volatile uint8_t x5734 = 3U;
	uint16_t x5735 = UINT16_MAX;
	int32_t t160 = 494;

    t160 = ((x5733/(x5734^x5735))<<x5736);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x5761 = INT8_MIN;
	int64_t x5762 = 522993486LL;
	int16_t x5763 = -1;
	static int32_t x5764 = 3;
	volatile int64_t t161 = 2747597663LL;

    t161 = ((x5761/(x5762^x5763))<<x5764);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x5770 = -3604784980628908558LL;
	volatile int16_t x5771 = INT16_MIN;
	static volatile uint8_t x5772 = 19U;
	volatile int64_t t162 = -297905057330LL;

    t162 = ((x5769/(x5770^x5771))<<x5772);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x5797 = 1845707409U;
	int8_t x5798 = -2;
	volatile int64_t x5799 = INT64_MIN;
	int8_t x5800 = 3;
	int64_t t163 = 978155412LL;

    t163 = ((x5797/(x5798^x5799))<<x5800);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x5825 = UINT8_MAX;
	volatile int16_t x5826 = INT16_MAX;
	static int32_t x5827 = -326546954;
	static uint16_t x5828 = 1U;
	static int32_t t164 = -5;

    t164 = ((x5825/(x5826^x5827))<<x5828);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x5865 = 0;
	int64_t x5866 = INT64_MIN;
	int32_t x5867 = INT32_MIN;
	uint8_t x5868 = 0U;
	int64_t t165 = -62803526983423619LL;

    t165 = ((x5865/(x5866^x5867))<<x5868);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x5905 = INT32_MAX;
	int16_t x5906 = INT16_MAX;
	static int64_t x5907 = -197313957890085LL;
	int8_t x5908 = 41;
	static volatile int64_t t166 = 361446319597785793LL;

    t166 = ((x5905/(x5906^x5907))<<x5908);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x6009 = INT16_MIN;
	int16_t x6010 = INT16_MIN;
	int64_t x6011 = INT64_MAX;
	uint16_t x6012 = 2U;
	int64_t t167 = -4LL;

    t167 = ((x6009/(x6010^x6011))<<x6012);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x6053 = -1;
	uint32_t x6054 = UINT32_MAX;
	uint16_t x6055 = UINT16_MAX;
	static uint8_t x6056 = 0U;
	uint32_t t168 = 16513990U;

    t168 = ((x6053/(x6054^x6055))<<x6056);

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x6061 = INT32_MIN;
	int16_t x6063 = INT16_MIN;
	uint64_t x6064 = 18LLU;
	static volatile int32_t t169 = -3389684;

    t169 = ((x6061/(x6062^x6063))<<x6064);

    if (t169 != 262144) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x6081 = INT64_MAX;
	volatile int32_t x6082 = INT32_MIN;
	uint8_t x6084 = 1U;
	int64_t t170 = 31640809630872LL;

    t170 = ((x6081/(x6082^x6083))<<x6084);

    if (t170 != 8590065666LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x6090 = 116188684914LL;
	int32_t x6091 = -126;
	uint32_t x6092 = 2U;

    t171 = ((x6089/(x6090^x6091))<<x6092);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x6105 = -1LL;
	static uint8_t x6106 = 55U;
	static uint16_t x6108 = 7U;
	int64_t t172 = -186427LL;

    t172 = ((x6105/(x6106^x6107))<<x6108);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x6125 = 24U;
	int64_t x6127 = 19028401LL;
	uint64_t x6128 = 5LLU;
	int64_t t173 = -1LL;

    t173 = ((x6125/(x6126^x6127))<<x6128);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x6133 = -1589;
	uint8_t x6134 = 0U;
	volatile int64_t x6135 = -142LL;
	static volatile uint16_t x6136 = 1U;
	volatile int64_t t174 = -44262165LL;

    t174 = ((x6133/(x6134^x6135))<<x6136);

    if (t174 != 22LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x6157 = 0U;
	volatile int16_t x6160 = 12;
	static int32_t t175 = -488489;

    t175 = ((x6157/(x6158^x6159))<<x6160);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x6177 = INT8_MAX;
	int32_t x6178 = -1;
	uint32_t x6179 = 611989304U;
	volatile uint32_t t176 = 174437314U;

    t176 = ((x6177/(x6178^x6179))<<x6180);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x6226 = 6550U;
	uint16_t x6227 = UINT16_MAX;
	volatile uint32_t t177 = 42373159U;

    t177 = ((x6225/(x6226^x6227))<<x6228);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x6259 = -1;
	uint64_t x6260 = 4LLU;
	volatile uint64_t t178 = 4020561LLU;

    t178 = ((x6257/(x6258^x6259))<<x6260);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x6265 = 62U;
	volatile int8_t x6266 = INT8_MAX;
	static volatile int8_t x6267 = 34;
	volatile int32_t t179 = 14026641;

    t179 = ((x6265/(x6266^x6267))<<x6268);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x6273 = UINT64_MAX;
	int64_t x6274 = -1LL;
	static uint32_t x6275 = UINT32_MAX;
	int8_t x6276 = 0;
	uint64_t t180 = 19538807053031606LLU;

    t180 = ((x6273/(x6274^x6275))<<x6276);

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x6281 = 2109U;
	int8_t x6282 = -11;
	static volatile int16_t x6283 = INT16_MIN;
	volatile uint8_t x6284 = 0U;
	int32_t t181 = -673;

    t181 = ((x6281/(x6282^x6283))<<x6284);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x6353 = 104829LL;
	uint64_t x6355 = 898LLU;
	static uint16_t x6356 = 3U;
	static volatile uint64_t t182 = 12245270224032LLU;

    t182 = ((x6353/(x6354^x6355))<<x6356);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x6369 = INT32_MIN;
	int64_t x6370 = INT64_MAX;
	int64_t t183 = 184716409LL;

    t183 = ((x6369/(x6370^x6371))<<x6372);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x6373 = 47U;
	int64_t x6374 = -1LL;
	uint64_t x6375 = 835970504LLU;
	uint8_t x6376 = 1U;
	volatile uint64_t t184 = 91068731LLU;

    t184 = ((x6373/(x6374^x6375))<<x6376);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x6382 = 412LLU;
	int16_t x6383 = INT16_MIN;
	int16_t x6384 = 63;
	volatile uint64_t t185 = 14477443763631689LLU;

    t185 = ((x6381/(x6382^x6383))<<x6384);

    if (t185 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x6393 = INT8_MAX;
	int64_t x6394 = INT64_MIN;
	uint16_t x6395 = 4484U;
	uint8_t x6396 = 11U;
	static volatile int64_t t186 = 764LL;

    t186 = ((x6393/(x6394^x6395))<<x6396);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x6433 = 127679774LLU;
	uint64_t x6434 = UINT64_MAX;
	int8_t x6435 = -4;
	uint8_t x6436 = 0U;
	volatile uint64_t t187 = 1547270564909LLU;

    t187 = ((x6433/(x6434^x6435))<<x6436);

    if (t187 != 42559924LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x6441 = 14U;
	int32_t x6443 = INT32_MAX;
	int32_t x6444 = 12;
	int32_t t188 = 1403438;

    t188 = ((x6441/(x6442^x6443))<<x6444);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x6454 = -1;
	int64_t x6455 = INT64_MIN;
	volatile uint8_t x6456 = 2U;
	int64_t t189 = 27001826LL;

    t189 = ((x6453/(x6454^x6455))<<x6456);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x6482 = -9651LL;
	uint32_t x6483 = 5694718U;
	static int64_t t190 = 285182789518LL;

    t190 = ((x6481/(x6482^x6483))<<x6484);

    if (t190 != 6488956563524LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x6489 = INT64_MIN;
	uint16_t x6490 = 374U;
	volatile int32_t x6492 = 0;
	volatile int64_t t191 = 7172663997LL;

    t191 = ((x6489/(x6490^x6491))<<x6492);

    if (t191 != 34674330965619457LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x6565 = UINT64_MAX;
	int16_t x6567 = -1;
	volatile uint8_t x6568 = 28U;
	volatile uint64_t t192 = 11037886199LLU;

    t192 = ((x6565/(x6566^x6567))<<x6568);

    if (t192 != 11169588154560675840LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x6573 = 12U;
	volatile int8_t x6574 = INT8_MIN;
	int32_t x6575 = INT32_MIN;
	uint16_t x6576 = 4U;
	int32_t t193 = -1024;

    t193 = ((x6573/(x6574^x6575))<<x6576);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x6589 = INT64_MAX;
	uint64_t x6590 = 369881111LLU;
	uint8_t x6591 = 0U;
	uint8_t x6592 = 1U;
	volatile uint64_t t194 = 264849009121348432LLU;

    t194 = ((x6589/(x6590^x6591))<<x6592);

    if (t194 != 49872090044LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x6641 = INT32_MAX;
	int32_t x6643 = 7562;
	static int32_t x6644 = 2;
	volatile int32_t t195 = -1;

    t195 = ((x6641/(x6642^x6643))<<x6644);

    if (t195 != 1135332) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x6665 = 4U;
	volatile int32_t x6667 = INT32_MAX;
	int32_t x6668 = 1;
	volatile int64_t t196 = 748LL;

    t196 = ((x6665/(x6666^x6667))<<x6668);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x6705 = INT16_MAX;
	int8_t x6706 = 4;
	uint8_t x6707 = 72U;
	int16_t x6708 = 4;

    t197 = ((x6705/(x6706^x6707))<<x6708);

    if (t197 != 6896) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x6730 = 298U;
	volatile int8_t x6731 = 0;
	volatile int32_t t198 = 31;

    t198 = ((x6729/(x6730^x6731))<<x6732);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x6735 = 32474128U;
	int32_t x6736 = 22;
	volatile uint64_t t199 = 238855LLU;

    t199 = ((x6733/(x6734^x6735))<<x6736);

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

