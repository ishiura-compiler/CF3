
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

uint8_t x1 = 0U;
int32_t x3 = -1;
uint8_t x120 = 0U;
volatile uint8_t x132 = 26U;
int16_t x165 = INT16_MIN;
volatile int32_t t5 = -1096;
volatile int32_t x205 = INT32_MIN;
uint8_t x217 = 49U;
uint16_t x220 = 25U;
volatile int32_t t8 = -665;
uint8_t x384 = 11U;
int32_t t10 = 2;
int8_t x486 = -1;
int8_t x487 = -1;
static uint8_t x564 = 1U;
uint8_t x570 = 60U;
uint16_t x572 = 0U;
int8_t x601 = -1;
uint64_t x602 = 27734595LLU;
volatile uint16_t x616 = 0U;
static volatile int32_t x677 = -1;
int32_t t19 = 96543370;
uint8_t x736 = 26U;
int16_t x763 = 6867;
volatile int32_t t24 = 1;
uint64_t x813 = UINT64_MAX;
uint64_t x815 = 324LLU;
uint32_t x981 = UINT32_MAX;
int32_t t30 = -93431074;
uint8_t x1017 = 3U;
static int16_t x1050 = 8536;
static int16_t x1052 = 1;
uint64_t x1057 = 5219941LLU;
int64_t x1059 = -1022552LL;
int16_t x1060 = 8;
volatile uint32_t x1152 = 5U;
static volatile int32_t t38 = 1164387;
int32_t x1174 = 1778;
int32_t x1175 = 3636;
static volatile int16_t x1176 = 1;
volatile int64_t x1219 = INT64_MIN;
int32_t x1228 = 10;
uint8_t x1276 = 22U;
uint8_t x1343 = 56U;
volatile int32_t t44 = 7463;
int32_t t45 = -803820;
int32_t x1403 = 124204871;
int32_t x1404 = 0;
volatile int64_t x1439 = INT64_MAX;
uint32_t x1469 = 797454U;
int32_t t49 = -3819;
uint16_t x1493 = UINT16_MAX;
int32_t t51 = 314508687;
volatile int32_t t52 = -781513014;
static volatile uint64_t x1550 = 96444280LLU;
uint8_t x1748 = 9U;
volatile uint16_t x1793 = 0U;
volatile int32_t t59 = 599739271;
static volatile uint32_t x1872 = 15U;
int32_t x1974 = -198105;
int8_t x2031 = INT8_MIN;
static volatile uint8_t x2034 = 69U;
uint8_t x2122 = 9U;
int64_t x2129 = 1329LL;
int64_t x2131 = INT64_MIN;
int8_t x2151 = INT8_MIN;
volatile uint32_t x2185 = 142978U;
int16_t x2212 = 23;
int8_t x2246 = INT8_MIN;
volatile int64_t x2248 = 7LL;
uint16_t x2272 = 6U;
volatile int32_t t77 = -46689;
volatile int32_t t78 = -457;
volatile int32_t x2365 = 10;
static int16_t x2366 = -1;
static uint8_t x2400 = 0U;
int32_t t80 = -130560;
int32_t t83 = -1453;
uint64_t x2439 = 31838LLU;
int32_t t84 = 133;
volatile int64_t x2461 = 80LL;
int32_t t87 = -121460151;
int16_t x2529 = INT16_MIN;
volatile int8_t x2535 = -1;
static int64_t x2650 = -31617578LL;
volatile int8_t x2731 = INT8_MAX;
static int16_t x2754 = 92;
static uint8_t x2773 = UINT8_MAX;
int32_t x2775 = INT32_MAX;
volatile uint8_t x2776 = 1U;
uint64_t x2777 = 60802LLU;
volatile uint32_t x2778 = 153015888U;
static int16_t x2787 = INT16_MIN;
static uint64_t x2929 = UINT64_MAX;
int8_t x2930 = 8;
uint16_t x2931 = 194U;
uint8_t x2932 = 2U;
int32_t t103 = -743387;
volatile int8_t x3195 = -1;
volatile uint8_t x3196 = 30U;
static volatile int32_t t106 = 206587199;
volatile int32_t t107 = -548606;
uint32_t x3263 = 245U;
int32_t t109 = 1;
uint16_t x3282 = UINT16_MAX;
uint64_t x3291 = 473633LLU;
uint16_t x3293 = 19798U;
volatile int16_t x3295 = INT16_MIN;
int32_t x3296 = 1;
int16_t x3297 = 1;
uint8_t x3300 = 5U;
volatile int32_t t114 = -1;
int64_t x3304 = 0LL;
volatile int32_t t115 = 333029;
int8_t x3323 = INT8_MIN;
volatile int8_t x3363 = 15;
int32_t t118 = 2793;
static int32_t x3366 = -1;
int16_t x3368 = 1;
volatile int64_t x3369 = -343727546LL;
static uint16_t x3401 = 47U;
static uint16_t x3404 = 0U;
int32_t t122 = -1084;
int16_t x3467 = INT16_MIN;
static volatile uint16_t x3468 = 21U;
int64_t x3505 = -1LL;
int16_t x3520 = 5;
int32_t x3557 = -1;
static volatile int32_t t126 = -451;
static uint8_t x3613 = UINT8_MAX;
volatile int16_t x3722 = INT16_MAX;
volatile int16_t x3727 = 1753;
uint32_t x3728 = 1U;
int32_t x3793 = INT32_MAX;
static int8_t x3859 = INT8_MIN;
uint32_t x3860 = 1U;
volatile int32_t t133 = 1;
int16_t x3870 = INT16_MAX;
volatile int64_t x3871 = -15126746026436LL;
static int32_t t134 = 2030984;
int64_t x3913 = INT64_MIN;
volatile int32_t t135 = 38956;
volatile uint32_t x3922 = UINT32_MAX;
uint32_t x3924 = 2U;
volatile int32_t t139 = -44586080;
uint32_t x4068 = 0U;
static volatile int32_t t140 = -105631;
int64_t x4090 = INT64_MAX;
uint8_t x4092 = 4U;
int8_t x4125 = INT8_MIN;
uint8_t x4128 = 1U;
volatile int32_t x4185 = -1;
int8_t x4224 = 1;
static int32_t x4246 = INT32_MIN;
static int8_t x4264 = 1;
int8_t x4350 = INT8_MIN;
uint32_t x4381 = 2466027U;
int32_t t149 = 27573911;
static int32_t x4389 = -1;
int32_t x4390 = INT32_MIN;
static int16_t x4392 = 4;
volatile int32_t t151 = 22694;
int64_t x4583 = -1LL;
volatile uint64_t x4657 = 86361571647981966LLU;
static uint64_t x4791 = 478181443997552LLU;
int16_t x4825 = INT16_MIN;
uint16_t x4826 = 4609U;
volatile int8_t x4878 = -10;
int8_t x4879 = -1;
int32_t t161 = -10389;
int32_t t162 = -468;
uint32_t x4942 = UINT32_MAX;
volatile uint16_t x4943 = UINT16_MAX;
int32_t t164 = -144460;
static int64_t x4965 = 239321041LL;
int32_t x5045 = INT32_MAX;
uint8_t x5047 = 0U;
int32_t t167 = -1849027;
int64_t x5054 = -1LL;
static int32_t x5055 = -1;
int32_t t168 = -291;
uint32_t x5186 = 24243U;
volatile uint16_t x5187 = 61U;
uint32_t x5188 = 3U;
int8_t x5216 = 0;
int32_t x5277 = 60;
volatile uint32_t x5278 = 1U;
int16_t x5343 = -1;
volatile int32_t t177 = 304281;
int8_t x5392 = 20;
int32_t t178 = 261;
uint32_t x5444 = 14U;
int32_t t179 = 1;
int16_t x5457 = INT16_MIN;
static int32_t x5471 = 623953642;
volatile int32_t t181 = -780211697;
int32_t x5593 = INT32_MIN;
int32_t x5595 = -58492289;
int32_t t182 = 766891;
volatile int16_t x5598 = INT16_MIN;
volatile int16_t x5619 = -5;
uint32_t x5635 = 229190U;
static volatile int32_t t186 = -229;
static uint16_t x5650 = 2330U;
volatile int32_t t189 = 11678687;
int32_t x5790 = 123;
int32_t x5791 = INT32_MIN;
static volatile uint32_t x5792 = 0U;
volatile uint16_t x5829 = 45U;
uint16_t x5830 = UINT16_MAX;
volatile int32_t t192 = -4103030;
uint16_t x5896 = 1U;
static volatile int32_t t194 = 41084;
uint32_t x5909 = UINT32_MAX;
int64_t x5934 = 1011599382LL;
int32_t t198 = 1;


void f0(void) {
    	volatile uint8_t x2 = UINT8_MAX;
	volatile int8_t x4 = 1;
	volatile int32_t t0 = 15;

    t0 = (((x1!=x2)<=x3)<<x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x41 = INT64_MIN;
	uint8_t x42 = 2U;
	uint64_t x43 = UINT64_MAX;
	uint8_t x44 = 5U;
	volatile int32_t t1 = 2;

    t1 = (((x41!=x42)<=x43)<<x44);

    if (t1 != 32) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x117 = -1LL;
	uint8_t x118 = UINT8_MAX;
	int64_t x119 = INT64_MIN;
	volatile int32_t t2 = 1839;

    t2 = (((x117!=x118)<=x119)<<x120);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x129 = UINT64_MAX;
	int64_t x130 = INT64_MIN;
	uint16_t x131 = 5846U;
	volatile int32_t t3 = -5;

    t3 = (((x129!=x130)<=x131)<<x132);

    if (t3 != 67108864) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x157 = UINT32_MAX;
	static int32_t x158 = -20;
	static volatile uint64_t x159 = 4004LLU;
	uint64_t x160 = 0LLU;
	int32_t t4 = 22;

    t4 = (((x157!=x158)<=x159)<<x160);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 30U;

    t5 = (((x165!=x166)<=x167)<<x168);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x206 = INT16_MAX;
	int32_t x207 = INT32_MIN;
	int16_t x208 = 14;
	int32_t t6 = 117796;

    t6 = (((x205!=x206)<=x207)<<x208);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	int32_t t7 = 25746;

    t7 = (((x217!=x218)<=x219)<<x220);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x237 = UINT8_MAX;
	uint32_t x238 = 4U;
	static int8_t x239 = 0;
	volatile int32_t x240 = 0;

    t8 = (((x237!=x238)<=x239)<<x240);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x249 = INT64_MIN;
	static volatile int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MIN;
	volatile int8_t x252 = 0;
	volatile int32_t t9 = 3;

    t9 = (((x249!=x250)<=x251)<<x252);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x381 = 2LLU;
	static int8_t x382 = 6;
	volatile int8_t x383 = -1;

    t10 = (((x381!=x382)<=x383)<<x384);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x449 = INT16_MIN;
	volatile int16_t x450 = -181;
	int8_t x451 = INT8_MIN;
	uint8_t x452 = 2U;
	volatile int32_t t11 = -10075343;

    t11 = (((x449!=x450)<=x451)<<x452);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x485 = INT64_MIN;
	int16_t x488 = 6;
	int32_t t12 = 567;

    t12 = (((x485!=x486)<=x487)<<x488);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x501 = -2;
	int8_t x502 = -1;
	int16_t x503 = INT16_MIN;
	volatile uint8_t x504 = 27U;
	volatile int32_t t13 = 2252101;

    t13 = (((x501!=x502)<=x503)<<x504);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x561 = 503572269421641068LLU;
	uint32_t x562 = 386U;
	volatile int16_t x563 = INT16_MAX;
	volatile int32_t t14 = -1;

    t14 = (((x561!=x562)<=x563)<<x564);

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x569 = INT64_MAX;
	int8_t x571 = INT8_MAX;
	int32_t t15 = 1;

    t15 = (((x569!=x570)<=x571)<<x572);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x603 = INT32_MIN;
	uint32_t x604 = 8U;
	volatile int32_t t16 = -1;

    t16 = (((x601!=x602)<=x603)<<x604);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x613 = 28341562U;
	int64_t x614 = INT64_MAX;
	uint64_t x615 = UINT64_MAX;
	int32_t t17 = -2183275;

    t17 = (((x613!=x614)<=x615)<<x616);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x657 = 2685322231901305LLU;
	uint32_t x658 = 167894503U;
	int64_t x659 = INT64_MAX;
	volatile int8_t x660 = 17;
	int32_t t18 = 312408;

    t18 = (((x657!=x658)<=x659)<<x660);

    if (t18 != 131072) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x678 = UINT16_MAX;
	static volatile int16_t x679 = -1;
	volatile int8_t x680 = 3;

    t19 = (((x677!=x678)<=x679)<<x680);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x729 = INT32_MAX;
	int8_t x730 = INT8_MAX;
	static int8_t x731 = -38;
	uint32_t x732 = 26U;
	int32_t t20 = -7795;

    t20 = (((x729!=x730)<=x731)<<x732);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x733 = -1LL;
	uint32_t x734 = 35U;
	static volatile int16_t x735 = INT16_MAX;
	int32_t t21 = 71875;

    t21 = (((x733!=x734)<=x735)<<x736);

    if (t21 != 67108864) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x745 = INT32_MAX;
	int64_t x746 = INT64_MIN;
	static uint16_t x747 = 955U;
	int16_t x748 = 0;
	int32_t t22 = 5347;

    t22 = (((x745!=x746)<=x747)<<x748);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x761 = 51421423722526LLU;
	static int32_t x762 = INT32_MIN;
	volatile uint8_t x764 = 1U;
	volatile int32_t t23 = 74193692;

    t23 = (((x761!=x762)<=x763)<<x764);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x797 = -502LL;
	int16_t x798 = INT16_MIN;
	int16_t x799 = INT16_MIN;
	static uint16_t x800 = 11U;

    t24 = (((x797!=x798)<=x799)<<x800);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x814 = 1U;
	int64_t x816 = 5LL;
	volatile int32_t t25 = -1505272;

    t25 = (((x813!=x814)<=x815)<<x816);

    if (t25 != 32) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x817 = 1;
	uint64_t x818 = UINT64_MAX;
	int32_t x819 = INT32_MIN;
	uint8_t x820 = 1U;
	int32_t t26 = -1;

    t26 = (((x817!=x818)<=x819)<<x820);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x901 = 1U;
	int64_t x902 = INT64_MIN;
	static int64_t x903 = -1LL;
	static volatile uint8_t x904 = 6U;
	volatile int32_t t27 = 8203;

    t27 = (((x901!=x902)<=x903)<<x904);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x925 = INT8_MIN;
	static volatile int32_t x926 = -6898983;
	uint32_t x927 = 47U;
	int32_t x928 = 0;
	volatile int32_t t28 = -534862399;

    t28 = (((x925!=x926)<=x927)<<x928);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x949 = 2432147LL;
	int16_t x950 = INT16_MAX;
	volatile int16_t x951 = -1;
	static int8_t x952 = 8;
	int32_t t29 = 113026;

    t29 = (((x949!=x950)<=x951)<<x952);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x982 = -1;
	static volatile int8_t x983 = INT8_MIN;
	uint8_t x984 = 7U;

    t30 = (((x981!=x982)<=x983)<<x984);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x1005 = UINT16_MAX;
	int64_t x1006 = INT64_MIN;
	volatile int16_t x1007 = -28;
	int8_t x1008 = 0;
	volatile int32_t t31 = -10346;

    t31 = (((x1005!=x1006)<=x1007)<<x1008);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x1018 = UINT8_MAX;
	volatile int16_t x1019 = 6;
	int32_t x1020 = 1;
	static int32_t t32 = -133;

    t32 = (((x1017!=x1018)<=x1019)<<x1020);

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x1025 = 146861628U;
	int64_t x1026 = -13634LL;
	volatile int32_t x1027 = INT32_MAX;
	int8_t x1028 = 1;
	int32_t t33 = 1318;

    t33 = (((x1025!=x1026)<=x1027)<<x1028);

    if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x1049 = 1995U;
	volatile int32_t x1051 = INT32_MIN;
	int32_t t34 = -46213;

    t34 = (((x1049!=x1050)<=x1051)<<x1052);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1058 = 31U;
	volatile int32_t t35 = 0;

    t35 = (((x1057!=x1058)<=x1059)<<x1060);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x1149 = UINT64_MAX;
	volatile uint32_t x1150 = UINT32_MAX;
	volatile int32_t x1151 = INT32_MAX;
	volatile int32_t t36 = 1;

    t36 = (((x1149!=x1150)<=x1151)<<x1152);

    if (t36 != 32) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x1153 = 102816434U;
	static volatile uint16_t x1154 = 8U;
	uint8_t x1155 = UINT8_MAX;
	int8_t x1156 = 3;
	int32_t t37 = 2561;

    t37 = (((x1153!=x1154)<=x1155)<<x1156);

    if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x1169 = -18;
	int16_t x1170 = INT16_MIN;
	int32_t x1171 = 55821;
	volatile uint16_t x1172 = 0U;

    t38 = (((x1169!=x1170)<=x1171)<<x1172);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x1173 = 1087320332LL;
	volatile int32_t t39 = -59391;

    t39 = (((x1173!=x1174)<=x1175)<<x1176);

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x1217 = 0;
	static int16_t x1218 = INT16_MAX;
	int16_t x1220 = 4;
	volatile int32_t t40 = 14;

    t40 = (((x1217!=x1218)<=x1219)<<x1220);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x1225 = INT64_MIN;
	uint64_t x1226 = 2836580LLU;
	static volatile int32_t x1227 = -697977;
	static volatile int32_t t41 = -285;

    t41 = (((x1225!=x1226)<=x1227)<<x1228);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x1273 = -2;
	uint64_t x1274 = 205LLU;
	int16_t x1275 = -81;
	volatile int32_t t42 = -1;

    t42 = (((x1273!=x1274)<=x1275)<<x1276);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1333 = INT32_MIN;
	uint64_t x1334 = 330270LLU;
	int16_t x1335 = -1;
	static uint16_t x1336 = 15U;
	volatile int32_t t43 = -414126;

    t43 = (((x1333!=x1334)<=x1335)<<x1336);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x1341 = 72U;
	volatile int16_t x1342 = -2002;
	int16_t x1344 = 2;

    t44 = (((x1341!=x1342)<=x1343)<<x1344);

    if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x1345 = -1;
	uint8_t x1346 = UINT8_MAX;
	int64_t x1347 = 37997LL;
	int32_t x1348 = 1;

    t45 = (((x1345!=x1346)<=x1347)<<x1348);

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x1377 = INT16_MAX;
	uint64_t x1378 = UINT64_MAX;
	static uint64_t x1379 = UINT64_MAX;
	volatile int8_t x1380 = 7;
	int32_t t46 = 887;

    t46 = (((x1377!=x1378)<=x1379)<<x1380);

    if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x1401 = INT32_MAX;
	volatile uint16_t x1402 = 10071U;
	static volatile int32_t t47 = -1397;

    t47 = (((x1401!=x1402)<=x1403)<<x1404);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x1437 = INT16_MAX;
	static int32_t x1438 = -695923328;
	uint16_t x1440 = 5U;
	int32_t t48 = -292;

    t48 = (((x1437!=x1438)<=x1439)<<x1440);

    if (t48 != 32) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x1470 = INT16_MIN;
	int8_t x1471 = -1;
	static uint8_t x1472 = 15U;

    t49 = (((x1469!=x1470)<=x1471)<<x1472);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1489 = UINT8_MAX;
	static uint16_t x1490 = UINT16_MAX;
	volatile int64_t x1491 = -1LL;
	volatile uint16_t x1492 = 21U;
	int32_t t50 = -26518584;

    t50 = (((x1489!=x1490)<=x1491)<<x1492);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x1494 = INT64_MAX;
	int32_t x1495 = INT32_MIN;
	int8_t x1496 = 7;

    t51 = (((x1493!=x1494)<=x1495)<<x1496);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x1517 = INT16_MAX;
	static uint8_t x1518 = UINT8_MAX;
	uint8_t x1519 = UINT8_MAX;
	uint64_t x1520 = 4LLU;

    t52 = (((x1517!=x1518)<=x1519)<<x1520);

    if (t52 != 16) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x1521 = INT32_MIN;
	static int8_t x1522 = -1;
	int8_t x1523 = 11;
	int8_t x1524 = 19;
	int32_t t53 = 113368;

    t53 = (((x1521!=x1522)<=x1523)<<x1524);

    if (t53 != 524288) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x1549 = 1793757531287877658LLU;
	static int64_t x1551 = -1LL;
	int8_t x1552 = 1;
	int32_t t54 = 149915;

    t54 = (((x1549!=x1550)<=x1551)<<x1552);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x1705 = 0;
	int8_t x1706 = 36;
	static int16_t x1707 = -41;
	volatile int8_t x1708 = 0;
	volatile int32_t t55 = -906331;

    t55 = (((x1705!=x1706)<=x1707)<<x1708);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x1737 = INT32_MIN;
	static volatile int8_t x1738 = INT8_MIN;
	uint8_t x1739 = 55U;
	uint8_t x1740 = 23U;
	volatile int32_t t56 = -1;

    t56 = (((x1737!=x1738)<=x1739)<<x1740);

    if (t56 != 8388608) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x1745 = 402305208LLU;
	static uint8_t x1746 = 113U;
	static int8_t x1747 = INT8_MIN;
	volatile int32_t t57 = 4046661;

    t57 = (((x1745!=x1746)<=x1747)<<x1748);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x1794 = INT16_MAX;
	static int8_t x1795 = INT8_MAX;
	static uint16_t x1796 = 8U;
	int32_t t58 = 519;

    t58 = (((x1793!=x1794)<=x1795)<<x1796);

    if (t58 != 256) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x1797 = 5765U;
	uint16_t x1798 = UINT16_MAX;
	int64_t x1799 = INT64_MIN;
	static uint8_t x1800 = 23U;

    t59 = (((x1797!=x1798)<=x1799)<<x1800);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x1809 = INT64_MIN;
	int32_t x1810 = INT32_MAX;
	volatile int16_t x1811 = INT16_MAX;
	int8_t x1812 = 1;
	volatile int32_t t60 = 1821;

    t60 = (((x1809!=x1810)<=x1811)<<x1812);

    if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x1841 = INT32_MAX;
	int32_t x1842 = -1;
	int16_t x1843 = 156;
	uint8_t x1844 = 2U;
	static volatile int32_t t61 = -3304583;

    t61 = (((x1841!=x1842)<=x1843)<<x1844);

    if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x1869 = -1;
	volatile int16_t x1870 = INT16_MIN;
	volatile int16_t x1871 = INT16_MAX;
	volatile int32_t t62 = -19030384;

    t62 = (((x1869!=x1870)<=x1871)<<x1872);

    if (t62 != 32768) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x1973 = 32434U;
	uint8_t x1975 = 7U;
	volatile uint16_t x1976 = 15U;
	static int32_t t63 = -24;

    t63 = (((x1973!=x1974)<=x1975)<<x1976);

    if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x2029 = INT32_MAX;
	static int8_t x2030 = 1;
	uint64_t x2032 = 6LLU;
	int32_t t64 = -48;

    t64 = (((x2029!=x2030)<=x2031)<<x2032);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x2033 = -1;
	int16_t x2035 = -1;
	uint16_t x2036 = 5U;
	int32_t t65 = 2125348;

    t65 = (((x2033!=x2034)<=x2035)<<x2036);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x2073 = -1;
	static volatile int8_t x2074 = -43;
	uint64_t x2075 = 8126115180980LLU;
	int8_t x2076 = 2;
	static int32_t t66 = 38003858;

    t66 = (((x2073!=x2074)<=x2075)<<x2076);

    if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x2105 = UINT16_MAX;
	volatile int16_t x2106 = 159;
	uint8_t x2107 = UINT8_MAX;
	uint32_t x2108 = 0U;
	volatile int32_t t67 = 250789830;

    t67 = (((x2105!=x2106)<=x2107)<<x2108);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x2121 = INT32_MIN;
	uint64_t x2123 = 9LLU;
	static int8_t x2124 = 30;
	int32_t t68 = -14;

    t68 = (((x2121!=x2122)<=x2123)<<x2124);

    if (t68 != 1073741824) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x2130 = 54U;
	uint8_t x2132 = 3U;
	volatile int32_t t69 = 6;

    t69 = (((x2129!=x2130)<=x2131)<<x2132);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2149 = INT8_MAX;
	static volatile uint16_t x2150 = UINT16_MAX;
	int8_t x2152 = 21;
	volatile int32_t t70 = 943410573;

    t70 = (((x2149!=x2150)<=x2151)<<x2152);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x2165 = 1U;
	volatile int16_t x2166 = -1;
	int64_t x2167 = INT64_MIN;
	static int32_t x2168 = 0;
	volatile int32_t t71 = 2137884;

    t71 = (((x2165!=x2166)<=x2167)<<x2168);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x2186 = UINT64_MAX;
	volatile int16_t x2187 = -355;
	static uint32_t x2188 = 22U;
	static volatile int32_t t72 = 1954383;

    t72 = (((x2185!=x2186)<=x2187)<<x2188);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x2209 = INT16_MIN;
	int64_t x2210 = 170125863LL;
	static uint32_t x2211 = 669825U;
	int32_t t73 = 145;

    t73 = (((x2209!=x2210)<=x2211)<<x2212);

    if (t73 != 8388608) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x2221 = 265233316LL;
	uint16_t x2222 = 13U;
	int64_t x2223 = -246752493LL;
	uint8_t x2224 = 20U;
	volatile int32_t t74 = -8978479;

    t74 = (((x2221!=x2222)<=x2223)<<x2224);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x2245 = 0U;
	int16_t x2247 = 1;
	volatile int32_t t75 = -7326510;

    t75 = (((x2245!=x2246)<=x2247)<<x2248);

    if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x2269 = INT64_MIN;
	uint64_t x2270 = 3LLU;
	int8_t x2271 = INT8_MIN;
	volatile int32_t t76 = 14;

    t76 = (((x2269!=x2270)<=x2271)<<x2272);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2277 = INT8_MAX;
	volatile uint8_t x2278 = 7U;
	static uint32_t x2279 = UINT32_MAX;
	int32_t x2280 = 1;

    t77 = (((x2277!=x2278)<=x2279)<<x2280);

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x2333 = INT64_MIN;
	static volatile int32_t x2334 = -10;
	volatile uint16_t x2335 = 12070U;
	volatile int8_t x2336 = 1;

    t78 = (((x2333!=x2334)<=x2335)<<x2336);

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x2367 = -1;
	int16_t x2368 = 11;
	static volatile int32_t t79 = 4387;

    t79 = (((x2365!=x2366)<=x2367)<<x2368);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x2397 = INT16_MIN;
	static uint8_t x2398 = 18U;
	volatile int32_t x2399 = INT32_MIN;

    t80 = (((x2397!=x2398)<=x2399)<<x2400);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x2421 = INT16_MIN;
	static uint32_t x2422 = UINT32_MAX;
	int16_t x2423 = -7215;
	uint16_t x2424 = 7U;
	int32_t t81 = 0;

    t81 = (((x2421!=x2422)<=x2423)<<x2424);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x2425 = 324419765U;
	int16_t x2426 = -1;
	static int8_t x2427 = -1;
	int8_t x2428 = 0;
	volatile int32_t t82 = 330839;

    t82 = (((x2425!=x2426)<=x2427)<<x2428);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x2429 = INT64_MIN;
	uint16_t x2430 = 1U;
	static volatile int32_t x2431 = INT32_MIN;
	int64_t x2432 = 0LL;

    t83 = (((x2429!=x2430)<=x2431)<<x2432);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x2437 = -105570;
	volatile int16_t x2438 = -1;
	uint32_t x2440 = 4U;

    t84 = (((x2437!=x2438)<=x2439)<<x2440);

    if (t84 != 16) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x2462 = -1;
	volatile uint16_t x2463 = 698U;
	uint8_t x2464 = 3U;
	int32_t t85 = 1;

    t85 = (((x2461!=x2462)<=x2463)<<x2464);

    if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x2477 = -1;
	volatile uint16_t x2478 = 1U;
	int64_t x2479 = INT64_MAX;
	static volatile uint16_t x2480 = 1U;
	volatile int32_t t86 = 60207222;

    t86 = (((x2477!=x2478)<=x2479)<<x2480);

    if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x2485 = INT8_MAX;
	uint64_t x2486 = UINT64_MAX;
	static int16_t x2487 = -1;
	int16_t x2488 = 1;

    t87 = (((x2485!=x2486)<=x2487)<<x2488);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x2501 = -1;
	int64_t x2502 = INT64_MIN;
	int64_t x2503 = -1LL;
	uint16_t x2504 = 29U;
	int32_t t88 = 18;

    t88 = (((x2501!=x2502)<=x2503)<<x2504);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x2530 = INT8_MIN;
	int64_t x2531 = INT64_MIN;
	static volatile int8_t x2532 = 1;
	static volatile int32_t t89 = -11598539;

    t89 = (((x2529!=x2530)<=x2531)<<x2532);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x2533 = INT64_MIN;
	static int64_t x2534 = INT64_MIN;
	uint8_t x2536 = 0U;
	int32_t t90 = 41815;

    t90 = (((x2533!=x2534)<=x2535)<<x2536);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x2649 = 68986060;
	uint32_t x2651 = 868849U;
	static volatile int8_t x2652 = 15;
	volatile int32_t t91 = 1;

    t91 = (((x2649!=x2650)<=x2651)<<x2652);

    if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x2729 = 9426;
	static uint32_t x2730 = 3720U;
	volatile uint64_t x2732 = 12LLU;
	volatile int32_t t92 = -7405;

    t92 = (((x2729!=x2730)<=x2731)<<x2732);

    if (t92 != 4096) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x2753 = INT16_MAX;
	uint16_t x2755 = UINT16_MAX;
	int32_t x2756 = 0;
	volatile int32_t t93 = -10333;

    t93 = (((x2753!=x2754)<=x2755)<<x2756);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x2757 = 27835423LLU;
	volatile uint16_t x2758 = 59U;
	uint32_t x2759 = UINT32_MAX;
	volatile int8_t x2760 = 0;
	int32_t t94 = 18487731;

    t94 = (((x2757!=x2758)<=x2759)<<x2760);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x2774 = INT32_MAX;
	int32_t t95 = 1;

    t95 = (((x2773!=x2774)<=x2775)<<x2776);

    if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x2779 = 8572980LLU;
	int8_t x2780 = 10;
	volatile int32_t t96 = 0;

    t96 = (((x2777!=x2778)<=x2779)<<x2780);

    if (t96 != 1024) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x2785 = -6;
	static volatile int16_t x2786 = INT16_MAX;
	static int8_t x2788 = 0;
	int32_t t97 = 6;

    t97 = (((x2785!=x2786)<=x2787)<<x2788);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t t98 = 0;

    t98 = (((x2929!=x2930)<=x2931)<<x2932);

    if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x2949 = INT8_MIN;
	static int64_t x2950 = -30556169LL;
	int16_t x2951 = INT16_MIN;
	uint64_t x2952 = 7LLU;
	volatile int32_t t99 = 29459705;

    t99 = (((x2949!=x2950)<=x2951)<<x2952);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x2985 = INT16_MIN;
	static int16_t x2986 = INT16_MAX;
	volatile int16_t x2987 = -13830;
	static uint32_t x2988 = 21U;
	volatile int32_t t100 = -8091;

    t100 = (((x2985!=x2986)<=x2987)<<x2988);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x3065 = -2906308;
	int64_t x3066 = INT64_MIN;
	int32_t x3067 = INT32_MAX;
	static uint16_t x3068 = 11U;
	int32_t t101 = 12823;

    t101 = (((x3065!=x3066)<=x3067)<<x3068);

    if (t101 != 2048) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x3101 = 1988;
	int16_t x3102 = INT16_MAX;
	int64_t x3103 = 2409687872224LL;
	static int8_t x3104 = 1;
	volatile int32_t t102 = -31033;

    t102 = (((x3101!=x3102)<=x3103)<<x3104);

    if (t102 != 2) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x3129 = INT64_MIN;
	static uint64_t x3130 = 708861432LLU;
	int32_t x3131 = -228787;
	volatile int8_t x3132 = 0;

    t103 = (((x3129!=x3130)<=x3131)<<x3132);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x3185 = 37LL;
	int16_t x3186 = 31;
	int16_t x3187 = INT16_MIN;
	volatile int8_t x3188 = 14;
	int32_t t104 = -153398198;

    t104 = (((x3185!=x3186)<=x3187)<<x3188);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x3193 = 1235U;
	static int8_t x3194 = INT8_MIN;
	volatile int32_t t105 = -28791043;

    t105 = (((x3193!=x3194)<=x3195)<<x3196);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x3213 = -832;
	static int64_t x3214 = 8803809701869LL;
	uint32_t x3215 = 82U;
	uint64_t x3216 = 0LLU;

    t106 = (((x3213!=x3214)<=x3215)<<x3216);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x3245 = INT8_MIN;
	int8_t x3246 = INT8_MIN;
	int32_t x3247 = -1;
	int64_t x3248 = 5LL;

    t107 = (((x3245!=x3246)<=x3247)<<x3248);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3257 = 30;
	int32_t x3258 = -1338858;
	volatile int32_t x3259 = INT32_MIN;
	volatile int32_t x3260 = 14;
	volatile int32_t t108 = 818993;

    t108 = (((x3257!=x3258)<=x3259)<<x3260);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x3261 = INT32_MAX;
	uint16_t x3262 = 0U;
	int16_t x3264 = 7;

    t109 = (((x3261!=x3262)<=x3263)<<x3264);

    if (t109 != 128) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x3265 = 3311LLU;
	int16_t x3266 = INT16_MAX;
	volatile int16_t x3267 = INT16_MIN;
	int16_t x3268 = 1;
	volatile int32_t t110 = 114;

    t110 = (((x3265!=x3266)<=x3267)<<x3268);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x3281 = -1;
	int16_t x3283 = INT16_MIN;
	uint8_t x3284 = 0U;
	volatile int32_t t111 = -11942;

    t111 = (((x3281!=x3282)<=x3283)<<x3284);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x3289 = -1;
	uint64_t x3290 = 11548LLU;
	static uint16_t x3292 = 3U;
	static volatile int32_t t112 = -149;

    t112 = (((x3289!=x3290)<=x3291)<<x3292);

    if (t112 != 8) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x3294 = 18U;
	static volatile int32_t t113 = 212;

    t113 = (((x3293!=x3294)<=x3295)<<x3296);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x3298 = 3097U;
	volatile int64_t x3299 = INT64_MAX;

    t114 = (((x3297!=x3298)<=x3299)<<x3300);

    if (t114 != 32) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x3301 = -1;
	int32_t x3302 = INT32_MIN;
	uint16_t x3303 = 42U;

    t115 = (((x3301!=x3302)<=x3303)<<x3304);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x3321 = INT16_MIN;
	int64_t x3322 = -19952364737882LL;
	uint8_t x3324 = 2U;
	int32_t t116 = 63717467;

    t116 = (((x3321!=x3322)<=x3323)<<x3324);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x3345 = INT8_MIN;
	int32_t x3346 = INT32_MIN;
	int16_t x3347 = -1;
	int16_t x3348 = 3;
	static int32_t t117 = 0;

    t117 = (((x3345!=x3346)<=x3347)<<x3348);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x3361 = 1657U;
	int16_t x3362 = -1;
	int16_t x3364 = 2;

    t118 = (((x3361!=x3362)<=x3363)<<x3364);

    if (t118 != 4) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x3365 = INT16_MIN;
	uint32_t x3367 = 254557U;
	static volatile int32_t t119 = -8248477;

    t119 = (((x3365!=x3366)<=x3367)<<x3368);

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x3370 = 105594533LLU;
	int16_t x3371 = INT16_MIN;
	uint8_t x3372 = 9U;
	volatile int32_t t120 = 115;

    t120 = (((x3369!=x3370)<=x3371)<<x3372);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x3402 = INT32_MIN;
	int64_t x3403 = INT64_MIN;
	volatile int32_t t121 = -89957315;

    t121 = (((x3401!=x3402)<=x3403)<<x3404);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x3425 = INT32_MIN;
	volatile int32_t x3426 = -1;
	uint16_t x3427 = 15314U;
	volatile uint8_t x3428 = 26U;

    t122 = (((x3425!=x3426)<=x3427)<<x3428);

    if (t122 != 67108864) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x3465 = -1;
	int64_t x3466 = INT64_MIN;
	static int32_t t123 = 87;

    t123 = (((x3465!=x3466)<=x3467)<<x3468);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x3506 = 1U;
	uint64_t x3507 = UINT64_MAX;
	static uint8_t x3508 = 23U;
	int32_t t124 = 10864;

    t124 = (((x3505!=x3506)<=x3507)<<x3508);

    if (t124 != 8388608) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x3517 = 34052343U;
	int64_t x3518 = -1LL;
	uint32_t x3519 = 92U;
	int32_t t125 = 0;

    t125 = (((x3517!=x3518)<=x3519)<<x3520);

    if (t125 != 32) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x3558 = UINT16_MAX;
	int16_t x3559 = -550;
	volatile int8_t x3560 = 13;

    t126 = (((x3557!=x3558)<=x3559)<<x3560);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x3614 = INT16_MAX;
	int8_t x3615 = INT8_MIN;
	volatile uint8_t x3616 = 10U;
	volatile int32_t t127 = -3497;

    t127 = (((x3613!=x3614)<=x3615)<<x3616);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x3625 = -7;
	int8_t x3626 = INT8_MAX;
	static volatile int16_t x3627 = 8;
	int16_t x3628 = 3;
	int32_t t128 = 7151;

    t128 = (((x3625!=x3626)<=x3627)<<x3628);

    if (t128 != 8) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x3641 = INT16_MIN;
	int64_t x3642 = -1LL;
	int64_t x3643 = 271167LL;
	uint8_t x3644 = 16U;
	int32_t t129 = 55971;

    t129 = (((x3641!=x3642)<=x3643)<<x3644);

    if (t129 != 65536) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x3721 = 43;
	static volatile uint32_t x3723 = 103180278U;
	int8_t x3724 = 0;
	int32_t t130 = -120983863;

    t130 = (((x3721!=x3722)<=x3723)<<x3724);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x3725 = INT16_MAX;
	static volatile uint32_t x3726 = UINT32_MAX;
	static int32_t t131 = -2715352;

    t131 = (((x3725!=x3726)<=x3727)<<x3728);

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x3794 = INT16_MIN;
	int32_t x3795 = -1;
	int16_t x3796 = 0;
	volatile int32_t t132 = 3061;

    t132 = (((x3793!=x3794)<=x3795)<<x3796);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x3857 = INT8_MIN;
	uint64_t x3858 = 10547456936LLU;

    t133 = (((x3857!=x3858)<=x3859)<<x3860);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x3869 = UINT32_MAX;
	volatile uint64_t x3872 = 17LLU;

    t134 = (((x3869!=x3870)<=x3871)<<x3872);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x3914 = UINT8_MAX;
	uint32_t x3915 = UINT32_MAX;
	static uint8_t x3916 = 9U;

    t135 = (((x3913!=x3914)<=x3915)<<x3916);

    if (t135 != 512) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x3921 = UINT16_MAX;
	static int64_t x3923 = -1LL;
	int32_t t136 = 919712;

    t136 = (((x3921!=x3922)<=x3923)<<x3924);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x3925 = INT64_MAX;
	uint16_t x3926 = 30362U;
	volatile int8_t x3927 = -1;
	volatile int8_t x3928 = 0;
	volatile int32_t t137 = -47518;

    t137 = (((x3925!=x3926)<=x3927)<<x3928);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x3933 = INT8_MIN;
	int32_t x3934 = INT32_MIN;
	uint8_t x3935 = 107U;
	uint16_t x3936 = 3U;
	static int32_t t138 = -907;

    t138 = (((x3933!=x3934)<=x3935)<<x3936);

    if (t138 != 8) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x3973 = 15;
	int8_t x3974 = INT8_MIN;
	int16_t x3975 = INT16_MIN;
	uint16_t x3976 = 0U;

    t139 = (((x3973!=x3974)<=x3975)<<x3976);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x4065 = -1LL;
	int32_t x4066 = -1;
	int16_t x4067 = 1029;

    t140 = (((x4065!=x4066)<=x4067)<<x4068);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x4089 = 95;
	int16_t x4091 = -1;
	static int32_t t141 = -142;

    t141 = (((x4089!=x4090)<=x4091)<<x4092);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x4126 = INT64_MAX;
	static volatile int64_t x4127 = INT64_MAX;
	volatile int32_t t142 = -423868499;

    t142 = (((x4125!=x4126)<=x4127)<<x4128);

    if (t142 != 2) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x4186 = INT16_MIN;
	uint32_t x4187 = 2438486U;
	int8_t x4188 = 1;
	volatile int32_t t143 = -1;

    t143 = (((x4185!=x4186)<=x4187)<<x4188);

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x4221 = 1467U;
	volatile int8_t x4222 = -3;
	uint8_t x4223 = 3U;
	int32_t t144 = 207950058;

    t144 = (((x4221!=x4222)<=x4223)<<x4224);

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x4245 = -13696;
	uint16_t x4247 = 7381U;
	volatile uint8_t x4248 = 1U;
	volatile int32_t t145 = 426;

    t145 = (((x4245!=x4246)<=x4247)<<x4248);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x4261 = 198847186;
	static int8_t x4262 = -1;
	static int16_t x4263 = 6;
	int32_t t146 = -10779;

    t146 = (((x4261!=x4262)<=x4263)<<x4264);

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x4349 = INT32_MIN;
	int64_t x4351 = -1LL;
	static volatile uint32_t x4352 = 0U;
	volatile int32_t t147 = 1022675;

    t147 = (((x4349!=x4350)<=x4351)<<x4352);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x4365 = -1;
	uint32_t x4366 = 816072026U;
	uint32_t x4367 = UINT32_MAX;
	int32_t x4368 = 3;
	volatile int32_t t148 = 0;

    t148 = (((x4365!=x4366)<=x4367)<<x4368);

    if (t148 != 8) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x4382 = INT32_MIN;
	static int8_t x4383 = INT8_MIN;
	volatile int8_t x4384 = 2;

    t149 = (((x4381!=x4382)<=x4383)<<x4384);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x4391 = 818841662U;
	volatile int32_t t150 = -317588983;

    t150 = (((x4389!=x4390)<=x4391)<<x4392);

    if (t150 != 16) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x4401 = INT64_MAX;
	static uint32_t x4402 = 842524U;
	int32_t x4403 = 42758;
	static uint8_t x4404 = 0U;

    t151 = (((x4401!=x4402)<=x4403)<<x4404);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x4513 = INT64_MAX;
	static int8_t x4514 = INT8_MIN;
	uint32_t x4515 = 75955660U;
	volatile uint8_t x4516 = 1U;
	volatile int32_t t152 = 1944097;

    t152 = (((x4513!=x4514)<=x4515)<<x4516);

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x4521 = 5U;
	volatile int32_t x4522 = -3856590;
	uint16_t x4523 = UINT16_MAX;
	int8_t x4524 = 0;
	volatile int32_t t153 = -56385231;

    t153 = (((x4521!=x4522)<=x4523)<<x4524);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x4581 = INT16_MAX;
	int32_t x4582 = INT32_MAX;
	uint32_t x4584 = 6U;
	volatile int32_t t154 = 132116800;

    t154 = (((x4581!=x4582)<=x4583)<<x4584);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x4613 = -335401510;
	uint64_t x4614 = UINT64_MAX;
	int32_t x4615 = INT32_MAX;
	int16_t x4616 = 19;
	int32_t t155 = 92;

    t155 = (((x4613!=x4614)<=x4615)<<x4616);

    if (t155 != 524288) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x4658 = -1LL;
	volatile int64_t x4659 = INT64_MIN;
	uint32_t x4660 = 8U;
	volatile int32_t t156 = -16331589;

    t156 = (((x4657!=x4658)<=x4659)<<x4660);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x4665 = 70U;
	volatile uint32_t x4666 = 158364508U;
	int64_t x4667 = -1LL;
	static uint16_t x4668 = 26U;
	volatile int32_t t157 = 908709;

    t157 = (((x4665!=x4666)<=x4667)<<x4668);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x4789 = INT16_MIN;
	static int8_t x4790 = INT8_MAX;
	uint8_t x4792 = 0U;
	int32_t t158 = -97;

    t158 = (((x4789!=x4790)<=x4791)<<x4792);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x4827 = INT64_MAX;
	uint8_t x4828 = 14U;
	volatile int32_t t159 = 0;

    t159 = (((x4825!=x4826)<=x4827)<<x4828);

    if (t159 != 16384) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x4837 = INT8_MIN;
	static int8_t x4838 = INT8_MAX;
	volatile int16_t x4839 = INT16_MIN;
	int8_t x4840 = 29;
	volatile int32_t t160 = 17;

    t160 = (((x4837!=x4838)<=x4839)<<x4840);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x4877 = INT16_MIN;
	uint32_t x4880 = 6U;

    t161 = (((x4877!=x4878)<=x4879)<<x4880);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x4901 = INT8_MIN;
	int8_t x4902 = INT8_MIN;
	int16_t x4903 = 0;
	int8_t x4904 = 15;

    t162 = (((x4901!=x4902)<=x4903)<<x4904);

    if (t162 != 32768) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x4917 = 9U;
	static uint32_t x4918 = 235293558U;
	int16_t x4919 = 726;
	uint16_t x4920 = 2U;
	static int32_t t163 = 20135754;

    t163 = (((x4917!=x4918)<=x4919)<<x4920);

    if (t163 != 4) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x4941 = INT16_MIN;
	int8_t x4944 = 0;

    t164 = (((x4941!=x4942)<=x4943)<<x4944);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x4953 = 1;
	volatile int64_t x4954 = -1LL;
	volatile int32_t x4955 = 1;
	uint8_t x4956 = 1U;
	static volatile int32_t t165 = -9;

    t165 = (((x4953!=x4954)<=x4955)<<x4956);

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x4966 = -1LL;
	uint8_t x4967 = 15U;
	volatile uint8_t x4968 = 29U;
	int32_t t166 = 11075;

    t166 = (((x4965!=x4966)<=x4967)<<x4968);

    if (t166 != 536870912) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint16_t x5046 = UINT16_MAX;
	uint64_t x5048 = 29LLU;

    t167 = (((x5045!=x5046)<=x5047)<<x5048);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x5053 = INT8_MIN;
	uint8_t x5056 = 22U;

    t168 = (((x5053!=x5054)<=x5055)<<x5056);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x5113 = 447835899221LLU;
	static int16_t x5114 = -1;
	int32_t x5115 = -1;
	static uint8_t x5116 = 31U;
	static volatile int32_t t169 = -457665284;

    t169 = (((x5113!=x5114)<=x5115)<<x5116);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x5177 = INT16_MIN;
	int32_t x5178 = INT32_MIN;
	volatile int16_t x5179 = INT16_MIN;
	uint8_t x5180 = 2U;
	volatile int32_t t170 = -2790105;

    t170 = (((x5177!=x5178)<=x5179)<<x5180);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x5185 = 2966649;
	int32_t t171 = 4;

    t171 = (((x5185!=x5186)<=x5187)<<x5188);

    if (t171 != 8) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x5213 = -1LL;
	int8_t x5214 = INT8_MIN;
	static int32_t x5215 = -91;
	volatile int32_t t172 = 103847974;

    t172 = (((x5213!=x5214)<=x5215)<<x5216);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x5279 = INT32_MIN;
	uint8_t x5280 = 6U;
	int32_t t173 = 6;

    t173 = (((x5277!=x5278)<=x5279)<<x5280);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x5297 = INT16_MIN;
	int32_t x5298 = INT32_MIN;
	int8_t x5299 = INT8_MIN;
	int8_t x5300 = 1;
	static volatile int32_t t174 = 3;

    t174 = (((x5297!=x5298)<=x5299)<<x5300);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x5301 = 172300U;
	int16_t x5302 = INT16_MIN;
	volatile uint32_t x5303 = 663194816U;
	static uint16_t x5304 = 1U;
	volatile int32_t t175 = -10811218;

    t175 = (((x5301!=x5302)<=x5303)<<x5304);

    if (t175 != 2) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x5333 = 2;
	int16_t x5334 = -1;
	int16_t x5335 = INT16_MAX;
	volatile int32_t x5336 = 0;
	static volatile int32_t t176 = 1164870;

    t176 = (((x5333!=x5334)<=x5335)<<x5336);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x5341 = -49303489;
	int64_t x5342 = 1314007281263548LL;
	static volatile int16_t x5344 = 6;

    t177 = (((x5341!=x5342)<=x5343)<<x5344);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x5389 = UINT8_MAX;
	int8_t x5390 = INT8_MIN;
	int8_t x5391 = 18;

    t178 = (((x5389!=x5390)<=x5391)<<x5392);

    if (t178 != 1048576) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x5441 = 26U;
	int32_t x5442 = INT32_MIN;
	int32_t x5443 = INT32_MAX;

    t179 = (((x5441!=x5442)<=x5443)<<x5444);

    if (t179 != 16384) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x5458 = UINT16_MAX;
	volatile int16_t x5459 = INT16_MIN;
	uint8_t x5460 = 19U;
	static volatile int32_t t180 = 1;

    t180 = (((x5457!=x5458)<=x5459)<<x5460);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x5469 = 0U;
	int32_t x5470 = -1;
	uint8_t x5472 = 2U;

    t181 = (((x5469!=x5470)<=x5471)<<x5472);

    if (t181 != 4) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x5594 = 963U;
	uint8_t x5596 = 6U;

    t182 = (((x5593!=x5594)<=x5595)<<x5596);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x5597 = -1;
	int32_t x5599 = -1;
	uint8_t x5600 = 0U;
	volatile int32_t t183 = -204;

    t183 = (((x5597!=x5598)<=x5599)<<x5600);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x5617 = -2405076970LL;
	volatile uint32_t x5618 = 4U;
	uint8_t x5620 = 7U;
	static int32_t t184 = 7283;

    t184 = (((x5617!=x5618)<=x5619)<<x5620);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x5633 = -1;
	int64_t x5634 = -4735264596LL;
	volatile uint8_t x5636 = 3U;
	volatile int32_t t185 = 51;

    t185 = (((x5633!=x5634)<=x5635)<<x5636);

    if (t185 != 8) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x5641 = 0U;
	static int64_t x5642 = 1049LL;
	volatile uint64_t x5643 = 197056LLU;
	int32_t x5644 = 0;

    t186 = (((x5641!=x5642)<=x5643)<<x5644);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x5645 = INT8_MIN;
	int32_t x5646 = INT32_MIN;
	static uint16_t x5647 = UINT16_MAX;
	volatile int8_t x5648 = 1;
	int32_t t187 = -22316;

    t187 = (((x5645!=x5646)<=x5647)<<x5648);

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x5649 = INT64_MIN;
	int64_t x5651 = -1LL;
	int8_t x5652 = 8;
	int32_t t188 = -384438;

    t188 = (((x5649!=x5650)<=x5651)<<x5652);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x5785 = 70430886LLU;
	int32_t x5786 = INT32_MIN;
	int8_t x5787 = -1;
	static volatile uint16_t x5788 = 19U;

    t189 = (((x5785!=x5786)<=x5787)<<x5788);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x5789 = INT8_MIN;
	int32_t t190 = 6;

    t190 = (((x5789!=x5790)<=x5791)<<x5792);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x5797 = 0U;
	static int8_t x5798 = INT8_MIN;
	int64_t x5799 = INT64_MAX;
	static int8_t x5800 = 0;
	int32_t t191 = 126;

    t191 = (((x5797!=x5798)<=x5799)<<x5800);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x5831 = INT64_MIN;
	int8_t x5832 = 1;

    t192 = (((x5829!=x5830)<=x5831)<<x5832);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x5861 = -1;
	static int32_t x5862 = INT32_MAX;
	uint8_t x5863 = 7U;
	int32_t x5864 = 7;
	static int32_t t193 = -55;

    t193 = (((x5861!=x5862)<=x5863)<<x5864);

    if (t193 != 128) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x5893 = 17U;
	volatile int16_t x5894 = INT16_MIN;
	volatile int64_t x5895 = -1LL;

    t194 = (((x5893!=x5894)<=x5895)<<x5896);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x5910 = 1118873U;
	int16_t x5911 = 2866;
	uint16_t x5912 = 13U;
	volatile int32_t t195 = -63;

    t195 = (((x5909!=x5910)<=x5911)<<x5912);

    if (t195 != 8192) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x5925 = INT64_MAX;
	static uint16_t x5926 = 780U;
	int16_t x5927 = 27;
	volatile uint16_t x5928 = 2U;
	static int32_t t196 = 5992609;

    t196 = (((x5925!=x5926)<=x5927)<<x5928);

    if (t196 != 4) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x5933 = -6086707965084671LL;
	uint32_t x5935 = 13U;
	static int16_t x5936 = 19;
	int32_t t197 = 1;

    t197 = (((x5933!=x5934)<=x5935)<<x5936);

    if (t197 != 524288) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x5965 = UINT64_MAX;
	int16_t x5966 = INT16_MIN;
	uint32_t x5967 = UINT32_MAX;
	uint8_t x5968 = 22U;

    t198 = (((x5965!=x5966)<=x5967)<<x5968);

    if (t198 != 4194304) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x5969 = -68203LL;
	int16_t x5970 = INT16_MIN;
	int16_t x5971 = INT16_MAX;
	uint8_t x5972 = 0U;
	static volatile int32_t t199 = 1;

    t199 = (((x5969!=x5970)<=x5971)<<x5972);

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

