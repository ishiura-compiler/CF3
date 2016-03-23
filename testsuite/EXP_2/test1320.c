
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

int16_t x7 = -1;
int8_t x10 = INT8_MIN;
volatile uint8_t x12 = 26U;
volatile uint64_t x33 = 2058593368914461LLU;
uint16_t x45 = 20804U;
volatile uint8_t x57 = 3U;
int32_t x58 = 0;
int64_t x75 = 485767069843018032LL;
uint16_t x89 = 18295U;
int8_t x92 = -40;
static int32_t t11 = -549040;
uint64_t x97 = UINT64_MAX;
static volatile uint32_t x100 = 1733097U;
volatile uint8_t x104 = UINT8_MAX;
int64_t x115 = INT64_MIN;
int16_t x117 = INT16_MAX;
int64_t x138 = INT64_MAX;
int64_t x151 = 2206LL;
uint8_t x158 = UINT8_MAX;
uint64_t x160 = UINT64_MAX;
static volatile int8_t x164 = INT8_MAX;
uint32_t t23 = 59U;
int16_t x166 = 24;
static uint64_t t24 = 18899812000LLU;
volatile int64_t x215 = INT64_MAX;
static int64_t t31 = 4173148163990LL;
volatile int16_t x234 = 126;
uint32_t x261 = 863783515U;
static int64_t t37 = 55985880491641LL;
static int8_t x267 = INT8_MIN;
volatile int8_t x268 = -1;
static volatile int32_t t38 = -7406673;
static int32_t x275 = INT32_MIN;
int32_t x285 = INT32_MAX;
static uint16_t x287 = UINT16_MAX;
uint64_t t42 = 920077062LLU;
uint64_t x301 = UINT64_MAX;
uint64_t t47 = 2327177523993869328LLU;
uint64_t x334 = UINT64_MAX;
int8_t x340 = -1;
uint64_t t49 = 2132012570170263933LLU;
uint64_t x350 = 33762250722324958LLU;
int8_t x352 = INT8_MAX;
volatile int32_t t52 = 96171;
int16_t x374 = 361;
uint8_t x381 = 11U;
uint64_t t54 = 6409873233114628LLU;
int16_t x389 = 0;
uint16_t x401 = UINT16_MAX;
uint64_t x413 = UINT64_MAX;
int16_t x415 = -757;
volatile int64_t x448 = INT64_MAX;
volatile uint64_t t60 = 1LLU;
static int32_t t64 = 350;
volatile uint64_t x498 = 16LLU;
static volatile int32_t t65 = 22;
volatile int32_t x502 = INT32_MIN;
static volatile int64_t x517 = INT64_MAX;
static uint32_t x534 = 17423U;
uint64_t x538 = 61834837LLU;
uint16_t x539 = 403U;
int8_t x561 = 1;
int64_t x569 = 1LL;
uint8_t x571 = 17U;
int16_t x573 = INT16_MAX;
static volatile int16_t x589 = 5;
int64_t t79 = -34393440891LL;
volatile uint16_t x601 = 13147U;
static int64_t x603 = INT64_MIN;
static uint32_t x610 = 205820U;
volatile int16_t x614 = -4801;
static int8_t x619 = 3;
int8_t x623 = INT8_MAX;
uint16_t x645 = UINT16_MAX;
volatile int32_t x659 = -1;
volatile int8_t x661 = 0;
int16_t x664 = 63;
volatile int16_t x678 = INT16_MIN;
int64_t x679 = INT64_MAX;
int8_t x684 = INT8_MIN;
static uint16_t x688 = UINT16_MAX;
uint32_t t94 = 4950U;
int8_t x724 = -1;
static uint32_t x733 = 2U;
static uint16_t x734 = 3470U;
int16_t x735 = -1;
static volatile uint8_t x750 = 124U;
uint8_t x751 = 40U;
static int32_t t99 = 116;
volatile int32_t t100 = 51;
uint64_t t102 = 112803742LLU;
uint16_t x781 = UINT16_MAX;
int32_t t103 = -15941595;
int16_t x785 = INT16_MAX;
uint64_t x788 = 9LLU;
static uint32_t x793 = 234417U;
int8_t x795 = INT8_MIN;
int16_t x798 = -1;
uint16_t x800 = UINT16_MAX;
int64_t x824 = INT64_MIN;
static volatile int64_t t110 = 1LL;
int64_t t112 = 55896375LL;
volatile uint32_t x845 = 514032U;
volatile uint32_t t114 = 220711U;
static int32_t x862 = -1;
int64_t t116 = 2955908882539618488LL;
static volatile int64_t x865 = INT64_MAX;
int8_t x868 = -1;
volatile int64_t t117 = 49LL;
int64_t x884 = INT64_MIN;
uint64_t x886 = 18730357612109075LLU;
volatile int64_t x887 = INT64_MIN;
int64_t x888 = 979316821LL;
volatile int64_t t120 = 29200683655LL;
int8_t x919 = -1;
int32_t x920 = -1;
int32_t t126 = 11865;
uint16_t x948 = 116U;
static volatile int32_t t128 = -246494556;
int64_t x962 = INT64_MIN;
uint8_t x970 = 24U;
volatile uint16_t x973 = UINT16_MAX;
static int64_t x975 = INT64_MIN;
volatile int64_t x993 = INT64_MAX;
uint32_t x995 = 6107U;
volatile uint64_t x996 = 1725924959064244653LLU;
uint32_t x1002 = UINT32_MAX;
static volatile uint16_t x1003 = UINT16_MAX;
int8_t x1005 = INT8_MAX;
int8_t x1008 = -1;
int32_t x1026 = INT32_MIN;
uint64_t x1032 = 13405054077LLU;
int32_t x1054 = -34466334;
volatile int16_t x1059 = INT16_MIN;
int32_t x1061 = INT32_MAX;
uint16_t x1067 = 1108U;
volatile int32_t x1074 = INT32_MIN;
static int8_t x1101 = INT8_MAX;
int32_t x1107 = 119825;
int32_t x1115 = INT32_MIN;
volatile int16_t x1117 = INT16_MAX;
static uint32_t x1118 = UINT32_MAX;
int64_t x1120 = INT64_MIN;
volatile int8_t x1132 = INT8_MAX;
int32_t x1136 = 172305058;
int64_t x1150 = INT64_MIN;
uint16_t x1165 = UINT16_MAX;
int16_t x1184 = INT16_MAX;
volatile int32_t t159 = -1895780;
uint8_t x1190 = 1U;
static uint16_t x1212 = 171U;
volatile int32_t t162 = -14289;
int16_t x1216 = INT16_MIN;
static volatile int32_t t164 = 11396941;
int32_t x1248 = -2;
static int64_t t168 = -215013LL;
volatile int8_t x1258 = INT8_MIN;
uint16_t x1273 = 18U;
volatile int16_t x1284 = INT16_MIN;
uint64_t x1300 = 1752217274813507LLU;
volatile uint32_t x1310 = 67864U;
uint64_t x1312 = 1000994LLU;
uint8_t x1318 = UINT8_MAX;
int16_t x1320 = INT16_MIN;
int8_t x1337 = INT8_MAX;
int32_t x1339 = -1;
int64_t x1340 = -62644112769LL;
int16_t x1342 = INT16_MIN;
int64_t x1351 = INT64_MIN;
volatile uint64_t t183 = 0LLU;
int8_t x1353 = 1;
volatile int32_t t184 = 100;
int16_t x1357 = INT16_MAX;
int64_t x1410 = -1LL;
uint8_t x1418 = 34U;
int64_t x1419 = INT64_MIN;
uint32_t x1451 = 32114U;
uint32_t t196 = 11397U;
int32_t t197 = 58680108;
uint8_t x1467 = 33U;
volatile int64_t t198 = 34720594756976640LL;
int8_t x1469 = INT8_MAX;


void f0(void) {
    	uint16_t x1 = 4U;
	uint16_t x2 = 1U;
	uint16_t x3 = 26205U;
	uint32_t x4 = 115440U;
	uint32_t t0 = 44U;

    t0 = ((x1>>(x2!=x3))/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	uint8_t x6 = 27U;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -118;

    t1 = ((x5>>(x6!=x7))/x8);

    if (t1 != 8454660) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 3398LLU;
	static uint32_t x11 = 1988U;
	uint64_t t2 = 25226833054457562LLU;

    t2 = ((x9>>(x10!=x11))/x12);

    if (t2 != 65LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x17 = UINT32_MAX;
	int8_t x18 = 30;
	static uint32_t x19 = 167239U;
	volatile int16_t x20 = INT16_MIN;
	static volatile uint32_t t3 = 7110403U;

    t3 = ((x17>>(x18!=x19))/x20);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x34 = -1;
	int8_t x35 = 2;
	uint8_t x36 = 5U;
	volatile uint64_t t4 = 264519LLU;

    t4 = ((x33>>(x34!=x35))/x36);

    if (t4 != 205859336891446LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x46 = INT32_MIN;
	volatile int32_t x47 = 2043709;
	static uint8_t x48 = 45U;
	volatile int32_t t5 = -5826591;

    t5 = ((x45>>(x46!=x47))/x48);

    if (t5 != 231) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x49 = 317207261U;
	int16_t x50 = INT16_MAX;
	int64_t x51 = -1LL;
	uint16_t x52 = UINT16_MAX;
	volatile uint32_t t6 = 681800242U;

    t6 = ((x49>>(x50!=x51))/x52);

    if (t6 != 2420U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x59 = 5095838;
	int64_t x60 = INT64_MIN;
	int64_t t7 = -3811859289733LL;

    t7 = ((x57>>(x58!=x59))/x60);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x65 = INT32_MAX;
	static int8_t x66 = 0;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = 6;
	static volatile int32_t t8 = -14839;

    t8 = ((x65>>(x66!=x67))/x68);

    if (t8 != 178956970) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x73 = 101U;
	int16_t x74 = -140;
	volatile int64_t x76 = -65820260819028LL;
	int64_t t9 = -390223LL;

    t9 = ((x73>>(x74!=x75))/x76);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x77 = 4633282LLU;
	static uint64_t x78 = 8066LLU;
	static uint64_t x79 = 538721592224108523LLU;
	volatile uint32_t x80 = 11U;
	static volatile uint64_t t10 = 7898303026711604LLU;

    t10 = ((x77>>(x78!=x79))/x80);

    if (t10 != 210603LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x90 = 0U;
	uint32_t x91 = 4057072U;

    t11 = ((x89>>(x90!=x91))/x92);

    if (t11 != -228) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x98 = -1;
	static int32_t x99 = INT32_MIN;
	volatile uint64_t t12 = 4191133407LLU;

    t12 = ((x97>>(x98!=x99))/x100);

    if (t12 != 5321901795949LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x101 = 8033362049403380905LLU;
	uint32_t x102 = 257U;
	volatile int64_t x103 = INT64_MIN;
	uint64_t t13 = 32480171LLU;

    t13 = ((x101>>(x102!=x103))/x104);

    if (t13 != 15751690292947805LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x105 = 44456687932868LLU;
	int8_t x106 = -1;
	uint16_t x107 = 34U;
	volatile uint16_t x108 = 14009U;
	uint64_t t14 = 1789837444940066502LLU;

    t14 = ((x105>>(x106!=x107))/x108);

    if (t14 != 1586718821LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x109 = 5U;
	static int64_t x110 = INT64_MIN;
	static uint8_t x111 = 30U;
	volatile int32_t x112 = INT32_MIN;
	uint32_t t15 = 33U;

    t15 = ((x109>>(x110!=x111))/x112);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x113 = 1;
	static int8_t x114 = -1;
	int32_t x116 = -90634648;
	static int32_t t16 = 40351;

    t16 = ((x113>>(x114!=x115))/x116);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x118 = -3;
	volatile uint16_t x119 = UINT16_MAX;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t17 = -189984;

    t17 = ((x117>>(x118!=x119))/x120);

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x129 = 384189888LL;
	int16_t x130 = -7212;
	static uint8_t x131 = 3U;
	uint8_t x132 = 1U;
	volatile int64_t t18 = -29939222194131137LL;

    t18 = ((x129>>(x130!=x131))/x132);

    if (t18 != 192094944LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x137 = 2U;
	static int64_t x139 = -65918628017058208LL;
	int16_t x140 = INT16_MAX;
	volatile int32_t t19 = -991364555;

    t19 = ((x137>>(x138!=x139))/x140);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x141 = 24;
	static int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	int64_t x144 = 11631922136LL;
	int64_t t20 = -247471699243481910LL;

    t20 = ((x141>>(x142!=x143))/x144);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x149 = 12353U;
	int8_t x150 = INT8_MAX;
	int16_t x152 = INT16_MAX;
	volatile int32_t t21 = -76733532;

    t21 = ((x149>>(x150!=x151))/x152);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x157 = UINT32_MAX;
	static uint16_t x159 = 2U;
	static uint64_t t22 = 716LLU;

    t22 = ((x157>>(x158!=x159))/x160);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x161 = UINT32_MAX;
	static int8_t x162 = 49;
	int64_t x163 = INT64_MAX;

    t23 = ((x161>>(x162!=x163))/x164);

    if (t23 != 16909320U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x165 = 279720LLU;
	static volatile int8_t x167 = 23;
	int32_t x168 = -2562;

    t24 = ((x165>>(x166!=x167))/x168);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x169 = 60U;
	int32_t x170 = INT32_MIN;
	int8_t x171 = 37;
	int32_t x172 = -49;
	volatile int32_t t25 = -70;

    t25 = ((x169>>(x170!=x171))/x172);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x177 = 2U;
	uint16_t x178 = 0U;
	static int32_t x179 = -1;
	static volatile uint32_t x180 = 2123U;
	volatile uint32_t t26 = 19470U;

    t26 = ((x177>>(x178!=x179))/x180);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x181 = 13766U;
	uint64_t x182 = UINT64_MAX;
	uint64_t x183 = 1997016798869272LLU;
	uint64_t x184 = 542546684688LLU;
	volatile uint64_t t27 = 19069350539LLU;

    t27 = ((x181>>(x182!=x183))/x184);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x189 = 31123;
	int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	static int8_t x192 = INT8_MIN;
	int32_t t28 = -3004898;

    t28 = ((x189>>(x190!=x191))/x192);

    if (t28 != -121) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x197 = 5154895U;
	static uint8_t x198 = 8U;
	volatile uint8_t x199 = 15U;
	int64_t x200 = INT64_MIN;
	static volatile int64_t t29 = 2861LL;

    t29 = ((x197>>(x198!=x199))/x200);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x201 = 69U;
	volatile int64_t x202 = INT64_MIN;
	uint8_t x203 = UINT8_MAX;
	static uint8_t x204 = 7U;
	uint32_t t30 = 33270U;

    t30 = ((x201>>(x202!=x203))/x204);

    if (t30 != 4U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x213 = INT64_MAX;
	uint16_t x214 = UINT16_MAX;
	int8_t x216 = INT8_MAX;

    t31 = ((x213>>(x214!=x215))/x216);

    if (t31 != 36312488334073920LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x217 = INT64_MAX;
	uint16_t x218 = 3933U;
	int32_t x219 = INT32_MIN;
	static volatile int16_t x220 = INT16_MIN;
	volatile int64_t t32 = 1LL;

    t32 = ((x217>>(x218!=x219))/x220);

    if (t32 != -140737488355327LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x221 = 281U;
	uint8_t x222 = 16U;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = 1;
	int32_t t33 = 71;

    t33 = ((x221>>(x222!=x223))/x224);

    if (t33 != 140) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x225 = 45U;
	int32_t x226 = INT32_MAX;
	int32_t x227 = INT32_MIN;
	int16_t x228 = -1;
	static volatile int32_t t34 = 8327006;

    t34 = ((x225>>(x226!=x227))/x228);

    if (t34 != -22) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x229 = 0;
	static int64_t x230 = INT64_MIN;
	static uint32_t x231 = 2058664U;
	int16_t x232 = 14;
	int32_t t35 = -3040687;

    t35 = ((x229>>(x230!=x231))/x232);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x233 = 10489U;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t36 = -47581533;

    t36 = ((x233>>(x234!=x235))/x236);

    if (t36 != -40) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x262 = 227U;
	volatile int64_t x263 = 2201LL;
	int64_t x264 = INT64_MAX;

    t37 = ((x261>>(x262!=x263))/x264);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x265 = 15;
	static int64_t x266 = INT64_MIN;

    t38 = ((x265>>(x266!=x267))/x268);

    if (t38 != -7) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x273 = 30U;
	int16_t x274 = INT16_MIN;
	int16_t x276 = INT16_MIN;
	uint32_t t39 = 553452366U;

    t39 = ((x273>>(x274!=x275))/x276);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x281 = UINT8_MAX;
	int8_t x282 = INT8_MIN;
	static int8_t x283 = INT8_MIN;
	uint8_t x284 = 7U;
	int32_t t40 = 8;

    t40 = ((x281>>(x282!=x283))/x284);

    if (t40 != 36) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x286 = 10688U;
	static int64_t x288 = -23645162LL;
	volatile int64_t t41 = -211452110486LL;

    t41 = ((x285>>(x286!=x287))/x288);

    if (t41 != -45LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x289 = UINT64_MAX;
	int16_t x290 = 119;
	uint16_t x291 = UINT16_MAX;
	volatile int16_t x292 = 1;

    t42 = ((x289>>(x290!=x291))/x292);

    if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x302 = 0U;
	int16_t x303 = INT16_MAX;
	uint8_t x304 = UINT8_MAX;
	volatile uint64_t t43 = 1430799406845952LLU;

    t43 = ((x301>>(x302!=x303))/x304);

    if (t43 != 36170086419038336LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x305 = UINT8_MAX;
	static uint64_t x306 = 50365311470430402LLU;
	uint16_t x307 = 221U;
	static uint32_t x308 = 9U;
	uint32_t t44 = 96U;

    t44 = ((x305>>(x306!=x307))/x308);

    if (t44 != 14U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x309 = 183404733LLU;
	int64_t x310 = INT64_MAX;
	static uint16_t x311 = 871U;
	volatile int64_t x312 = -2312252761113894915LL;
	volatile uint64_t t45 = 215947694735870924LLU;

    t45 = ((x309>>(x310!=x311))/x312);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x325 = INT32_MAX;
	uint8_t x326 = UINT8_MAX;
	volatile int64_t x327 = -55188720045LL;
	int32_t x328 = INT32_MIN;
	volatile int32_t t46 = 242554067;

    t46 = ((x325>>(x326!=x327))/x328);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x329 = 19U;
	int32_t x330 = -1;
	uint8_t x331 = 5U;
	static uint64_t x332 = 5746LLU;

    t47 = ((x329>>(x330!=x331))/x332);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x333 = 36870242LLU;
	static int8_t x335 = 18;
	uint32_t x336 = 21U;
	static volatile uint64_t t48 = 429611002LLU;

    t48 = ((x333>>(x334!=x335))/x336);

    if (t48 != 877862LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x337 = 105432573LLU;
	static volatile int16_t x338 = INT16_MIN;
	uint8_t x339 = 63U;

    t49 = ((x337>>(x338!=x339))/x340);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x349 = 16691262675019121LL;
	uint16_t x351 = UINT16_MAX;
	int64_t t50 = 884703508235916900LL;

    t50 = ((x349>>(x350!=x351))/x352);

    if (t50 != 65713632578815LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x357 = INT16_MAX;
	static volatile int8_t x358 = -11;
	int32_t x359 = 693809080;
	int16_t x360 = -346;
	int32_t t51 = 1141627;

    t51 = ((x357>>(x358!=x359))/x360);

    if (t51 != -47) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x365 = INT16_MAX;
	static int8_t x366 = 6;
	uint16_t x367 = 6U;
	int16_t x368 = INT16_MAX;

    t52 = ((x365>>(x366!=x367))/x368);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x373 = 0;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MAX;
	int32_t t53 = 125604830;

    t53 = ((x373>>(x374!=x375))/x376);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x382 = 15U;
	uint32_t x383 = 659U;
	uint64_t x384 = 66987LLU;

    t54 = ((x381>>(x382!=x383))/x384);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x385 = 2U;
	int64_t x386 = -1LL;
	static volatile int8_t x387 = -1;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t55 = -27;

    t55 = ((x385>>(x386!=x387))/x388);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x390 = 0;
	uint16_t x391 = UINT16_MAX;
	static int64_t x392 = -1LL;
	int64_t t56 = 381919147144LL;

    t56 = ((x389>>(x390!=x391))/x392);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x402 = -1LL;
	static int32_t x403 = INT32_MAX;
	int16_t x404 = 497;
	volatile int32_t t57 = -530849297;

    t57 = ((x401>>(x402!=x403))/x404);

    if (t57 != 65) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x414 = -171;
	uint32_t x416 = 804U;
	uint64_t t58 = 20122690LLU;

    t58 = ((x413>>(x414!=x415))/x416);

    if (t58 != 11471855767232308LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x421 = 220956LL;
	static uint8_t x422 = 1U;
	int32_t x423 = INT32_MAX;
	int8_t x424 = INT8_MIN;
	volatile int64_t t59 = 15376824878448116LL;

    t59 = ((x421>>(x422!=x423))/x424);

    if (t59 != -863LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x445 = 116319247350LLU;
	int8_t x446 = -1;
	int8_t x447 = INT8_MIN;

    t60 = ((x445>>(x446!=x447))/x448);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x461 = UINT16_MAX;
	static int16_t x462 = INT16_MIN;
	int16_t x463 = -1;
	int8_t x464 = INT8_MIN;
	volatile int32_t t61 = 27;

    t61 = ((x461>>(x462!=x463))/x464);

    if (t61 != -255) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x465 = 3036448;
	uint8_t x466 = UINT8_MAX;
	volatile int8_t x467 = INT8_MIN;
	volatile int8_t x468 = INT8_MIN;
	static int32_t t62 = 648881;

    t62 = ((x465>>(x466!=x467))/x468);

    if (t62 != -11861) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x469 = 14;
	int64_t x470 = INT64_MIN;
	int32_t x471 = INT32_MAX;
	uint8_t x472 = 36U;
	volatile int32_t t63 = 1364297;

    t63 = ((x469>>(x470!=x471))/x472);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x473 = 47U;
	uint32_t x474 = 1376321U;
	int8_t x475 = 53;
	int32_t x476 = INT32_MIN;

    t64 = ((x473>>(x474!=x475))/x476);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x497 = INT32_MAX;
	int16_t x499 = INT16_MIN;
	int16_t x500 = -1;

    t65 = ((x497>>(x498!=x499))/x500);

    if (t65 != -1073741823) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	volatile uint16_t x503 = 232U;
	int32_t x504 = INT32_MIN;
	int32_t t66 = 2559;

    t66 = ((x501>>(x502!=x503))/x504);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x509 = 1;
	int64_t x510 = INT64_MAX;
	volatile int64_t x511 = INT64_MIN;
	int32_t x512 = 28;
	static int32_t t67 = 0;

    t67 = ((x509>>(x510!=x511))/x512);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x518 = 0U;
	uint8_t x519 = 0U;
	uint8_t x520 = 2U;
	volatile int64_t t68 = -106530096162289LL;

    t68 = ((x517>>(x518!=x519))/x520);

    if (t68 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x529 = INT16_MAX;
	int32_t x530 = INT32_MIN;
	int64_t x531 = -2371810LL;
	int64_t x532 = -1LL;
	volatile int64_t t69 = -919820025542LL;

    t69 = ((x529>>(x530!=x531))/x532);

    if (t69 != -16383LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x533 = INT16_MAX;
	int16_t x535 = INT16_MIN;
	volatile uint8_t x536 = 3U;
	volatile int32_t t70 = -1;

    t70 = ((x533>>(x534!=x535))/x536);

    if (t70 != 5461) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x537 = INT32_MAX;
	volatile int16_t x540 = -1;
	int32_t t71 = 3;

    t71 = ((x537>>(x538!=x539))/x540);

    if (t71 != -1073741823) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x549 = UINT8_MAX;
	uint32_t x550 = UINT32_MAX;
	uint8_t x551 = 41U;
	static int32_t x552 = INT32_MIN;
	volatile int32_t t72 = 9407363;

    t72 = ((x549>>(x550!=x551))/x552);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x557 = 144023773U;
	static uint8_t x558 = 44U;
	int8_t x559 = INT8_MIN;
	volatile int32_t x560 = 8751261;
	uint32_t t73 = 754748374U;

    t73 = ((x557>>(x558!=x559))/x560);

    if (t73 != 8U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x562 = INT16_MIN;
	int8_t x563 = INT8_MIN;
	int16_t x564 = INT16_MIN;
	int32_t t74 = -237040;

    t74 = ((x561>>(x562!=x563))/x564);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x570 = 877;
	int8_t x572 = -1;
	int64_t t75 = -10LL;

    t75 = ((x569>>(x570!=x571))/x572);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x574 = 1U;
	volatile int32_t x575 = 20678372;
	int16_t x576 = INT16_MIN;
	static int32_t t76 = 112;

    t76 = ((x573>>(x574!=x575))/x576);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x581 = UINT16_MAX;
	volatile uint16_t x582 = UINT16_MAX;
	int32_t x583 = -12314252;
	static int16_t x584 = 3331;
	int32_t t77 = 64227464;

    t77 = ((x581>>(x582!=x583))/x584);

    if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x590 = UINT64_MAX;
	volatile int32_t x591 = 6346246;
	uint32_t x592 = 984U;
	static uint32_t t78 = 510335U;

    t78 = ((x589>>(x590!=x591))/x592);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x597 = 481U;
	uint64_t x598 = 1508LLU;
	static uint64_t x599 = 115751834932LLU;
	static int64_t x600 = -1LL;

    t79 = ((x597>>(x598!=x599))/x600);

    if (t79 != -240LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x602 = 0;
	static volatile uint16_t x604 = 8162U;
	int32_t t80 = -12600;

    t80 = ((x601>>(x602!=x603))/x604);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x609 = 27422U;
	static volatile int16_t x611 = -1;
	static volatile uint64_t x612 = 259668558956374LLU;
	volatile uint64_t t81 = 391938483691129689LLU;

    t81 = ((x609>>(x610!=x611))/x612);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x613 = 254184LLU;
	int64_t x615 = -1LL;
	int64_t x616 = INT64_MIN;
	uint64_t t82 = 39422969744347LLU;

    t82 = ((x613>>(x614!=x615))/x616);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x617 = 3U;
	uint64_t x618 = 1216853649178482LLU;
	static int16_t x620 = -1;
	int32_t t83 = -40796499;

    t83 = ((x617>>(x618!=x619))/x620);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint32_t x621 = 52478U;
	int8_t x622 = INT8_MAX;
	int8_t x624 = INT8_MIN;
	volatile uint32_t t84 = 1U;

    t84 = ((x621>>(x622!=x623))/x624);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x637 = 24791LLU;
	uint16_t x638 = 204U;
	int16_t x639 = INT16_MAX;
	volatile int16_t x640 = INT16_MAX;
	volatile uint64_t t85 = 9LLU;

    t85 = ((x637>>(x638!=x639))/x640);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x641 = 57U;
	static int8_t x642 = 33;
	static int8_t x643 = INT8_MAX;
	int64_t x644 = -5LL;
	int64_t t86 = -1028156LL;

    t86 = ((x641>>(x642!=x643))/x644);

    if (t86 != -5LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x646 = INT16_MAX;
	uint32_t x647 = 1969U;
	int32_t x648 = 1760210;
	int32_t t87 = 8302;

    t87 = ((x645>>(x646!=x647))/x648);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x649 = INT32_MAX;
	static uint32_t x650 = 3740U;
	int64_t x651 = -1LL;
	int16_t x652 = -1;
	int32_t t88 = -11820731;

    t88 = ((x649>>(x650!=x651))/x652);

    if (t88 != -1073741823) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x657 = INT32_MAX;
	static int64_t x658 = -1LL;
	int64_t x660 = INT64_MAX;
	volatile int64_t t89 = 5584266112024705LL;

    t89 = ((x657>>(x658!=x659))/x660);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x662 = UINT64_MAX;
	uint16_t x663 = UINT16_MAX;
	volatile int32_t t90 = -22;

    t90 = ((x661>>(x662!=x663))/x664);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x677 = 10536U;
	int32_t x680 = INT32_MIN;
	uint32_t t91 = 3U;

    t91 = ((x677>>(x678!=x679))/x680);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x681 = INT64_MAX;
	int64_t x682 = 8LL;
	static int8_t x683 = 7;
	int64_t t92 = -505666262333220235LL;

    t92 = ((x681>>(x682!=x683))/x684);

    if (t92 != -36028797018963967LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x685 = INT64_MAX;
	int32_t x686 = INT32_MIN;
	static int16_t x687 = -461;
	volatile int64_t t93 = 650566071303LL;

    t93 = ((x685>>(x686!=x687))/x688);

    if (t93 != 70369817935872LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x717 = UINT32_MAX;
	static uint32_t x718 = UINT32_MAX;
	static int32_t x719 = -1;
	uint8_t x720 = 88U;

    t94 = ((x717>>(x718!=x719))/x720);

    if (t94 != 48806446U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x721 = 38165387649633042LL;
	volatile int8_t x722 = INT8_MIN;
	static int8_t x723 = -1;
	volatile int64_t t95 = 190797299345656LL;

    t95 = ((x721>>(x722!=x723))/x724);

    if (t95 != -19082693824816521LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x736 = -1;
	volatile uint32_t t96 = 11685347U;

    t96 = ((x733>>(x734!=x735))/x736);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x745 = 43249667588064332LLU;
	uint8_t x746 = 1U;
	volatile int64_t x747 = INT64_MIN;
	int32_t x748 = -1;
	volatile uint64_t t97 = 1144171036723LLU;

    t97 = ((x745>>(x746!=x747))/x748);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x749 = UINT16_MAX;
	volatile int16_t x752 = INT16_MIN;
	volatile int32_t t98 = -35;

    t98 = ((x749>>(x750!=x751))/x752);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x757 = 13U;
	uint64_t x758 = UINT64_MAX;
	uint8_t x759 = 123U;
	volatile int16_t x760 = INT16_MIN;

    t99 = ((x757>>(x758!=x759))/x760);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x761 = INT32_MAX;
	int32_t x762 = INT32_MAX;
	int64_t x763 = -5LL;
	uint16_t x764 = 14973U;

    t100 = ((x761>>(x762!=x763))/x764);

    if (t100 != 71711) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x769 = INT32_MAX;
	uint32_t x770 = 24U;
	int32_t x771 = INT32_MIN;
	uint8_t x772 = 11U;
	volatile int32_t t101 = 3184073;

    t101 = ((x769>>(x770!=x771))/x772);

    if (t101 != 97612893) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x777 = INT32_MAX;
	uint32_t x778 = 289480743U;
	volatile int32_t x779 = -39986982;
	volatile uint64_t x780 = 497716LLU;

    t102 = ((x777>>(x778!=x779))/x780);

    if (t102 != 2157LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x782 = INT16_MIN;
	uint16_t x783 = 7620U;
	static int16_t x784 = -1;

    t103 = ((x781>>(x782!=x783))/x784);

    if (t103 != -32767) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x786 = 1LLU;
	int32_t x787 = 284;
	uint64_t t104 = 999LLU;

    t104 = ((x785>>(x786!=x787))/x788);

    if (t104 != 1820LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x789 = 834925880674613LLU;
	uint8_t x790 = 3U;
	static volatile int32_t x791 = INT32_MIN;
	int64_t x792 = -110136LL;
	uint64_t t105 = 684763973085LLU;

    t105 = ((x789>>(x790!=x791))/x792);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x794 = -1;
	int64_t x796 = INT64_MAX;
	int64_t t106 = 124LL;

    t106 = ((x793>>(x794!=x795))/x796);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x797 = UINT64_MAX;
	static int64_t x799 = INT64_MAX;
	uint64_t t107 = 90370LLU;

    t107 = ((x797>>(x798!=x799))/x800);

    if (t107 != 140739635871744LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x809 = 318;
	int64_t x810 = INT64_MAX;
	uint8_t x811 = 48U;
	uint64_t x812 = UINT64_MAX;
	static uint64_t t108 = 5212876331236LLU;

    t108 = ((x809>>(x810!=x811))/x812);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x817 = 93114686682LLU;
	uint16_t x818 = UINT16_MAX;
	uint16_t x819 = 7U;
	int32_t x820 = INT32_MIN;
	uint64_t t109 = 21LLU;

    t109 = ((x817>>(x818!=x819))/x820);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x821 = 1;
	int64_t x822 = -559405476523LL;
	int64_t x823 = 51608894LL;

    t110 = ((x821>>(x822!=x823))/x824);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x825 = 3303448U;
	volatile int32_t x826 = INT32_MAX;
	uint8_t x827 = 49U;
	int32_t x828 = -1;
	volatile uint32_t t111 = 232282231U;

    t111 = ((x825>>(x826!=x827))/x828);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x833 = INT64_MAX;
	volatile int32_t x834 = 8003;
	uint16_t x835 = 0U;
	int32_t x836 = -1;

    t112 = ((x833>>(x834!=x835))/x836);

    if (t112 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x837 = 51;
	static volatile int32_t x838 = -1;
	int32_t x839 = -4;
	static int64_t x840 = 6312523353460720LL;
	int64_t t113 = -700842421LL;

    t113 = ((x837>>(x838!=x839))/x840);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x846 = -1;
	static int32_t x847 = -9164240;
	uint16_t x848 = 44U;

    t114 = ((x845>>(x846!=x847))/x848);

    if (t114 != 5841U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x857 = 1;
	volatile int64_t x858 = -1LL;
	static int8_t x859 = -1;
	volatile int32_t x860 = 49647;
	volatile int32_t t115 = 0;

    t115 = ((x857>>(x858!=x859))/x860);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x861 = 3490;
	volatile int64_t x863 = -22603871388154LL;
	int64_t x864 = INT64_MIN;

    t116 = ((x861>>(x862!=x863))/x864);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x866 = 11640LL;
	volatile uint32_t x867 = UINT32_MAX;

    t117 = ((x865>>(x866!=x867))/x868);

    if (t117 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x869 = 24;
	volatile int32_t x870 = -1;
	volatile int8_t x871 = 1;
	int16_t x872 = -1;
	int32_t t118 = 63084;

    t118 = ((x869>>(x870!=x871))/x872);

    if (t118 != -12) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x881 = UINT32_MAX;
	volatile int16_t x882 = 390;
	int8_t x883 = 1;
	volatile int64_t t119 = 1190435342692229761LL;

    t119 = ((x881>>(x882!=x883))/x884);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x885 = 58;

    t120 = ((x885>>(x886!=x887))/x888);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint8_t x893 = UINT8_MAX;
	static int32_t x894 = INT32_MAX;
	int32_t x895 = INT32_MIN;
	uint8_t x896 = UINT8_MAX;
	static volatile int32_t t121 = 263250004;

    t121 = ((x893>>(x894!=x895))/x896);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x905 = 53;
	int8_t x906 = 1;
	int8_t x907 = 0;
	int8_t x908 = -1;
	volatile int32_t t122 = -13558;

    t122 = ((x905>>(x906!=x907))/x908);

    if (t122 != -26) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x913 = 944030;
	int16_t x914 = -1704;
	static int64_t x915 = INT64_MAX;
	int8_t x916 = -8;
	volatile int32_t t123 = 691833;

    t123 = ((x913>>(x914!=x915))/x916);

    if (t123 != -59001) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x917 = 109261LLU;
	int64_t x918 = -40LL;
	volatile uint64_t t124 = 316832951519251LLU;

    t124 = ((x917>>(x918!=x919))/x920);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x925 = 0;
	int32_t x926 = 0;
	volatile uint8_t x927 = UINT8_MAX;
	static int64_t x928 = INT64_MIN;
	int64_t t125 = -13193298LL;

    t125 = ((x925>>(x926!=x927))/x928);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x929 = UINT8_MAX;
	volatile uint8_t x930 = 2U;
	uint64_t x931 = 500468095253241590LLU;
	int16_t x932 = INT16_MIN;

    t126 = ((x929>>(x930!=x931))/x932);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x933 = 107154321U;
	static int16_t x934 = -353;
	int8_t x935 = -12;
	int32_t x936 = INT32_MIN;
	volatile uint32_t t127 = 1539064U;

    t127 = ((x933>>(x934!=x935))/x936);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x945 = 84;
	int16_t x946 = INT16_MIN;
	int64_t x947 = -1LL;

    t128 = ((x945>>(x946!=x947))/x948);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x949 = INT64_MAX;
	int64_t x950 = -1LL;
	int16_t x951 = INT16_MIN;
	int16_t x952 = -1;
	static int64_t t129 = -75LL;

    t129 = ((x949>>(x950!=x951))/x952);

    if (t129 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x961 = 0U;
	int8_t x963 = INT8_MIN;
	uint64_t x964 = UINT64_MAX;
	volatile uint64_t t130 = 610019042428LLU;

    t130 = ((x961>>(x962!=x963))/x964);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x969 = 9U;
	int16_t x971 = INT16_MIN;
	int8_t x972 = INT8_MIN;
	int32_t t131 = 11323;

    t131 = ((x969>>(x970!=x971))/x972);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x974 = UINT8_MAX;
	static int64_t x976 = INT64_MIN;
	int64_t t132 = 11992289LL;

    t132 = ((x973>>(x974!=x975))/x976);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x994 = 21;
	static volatile uint64_t t133 = 708116567820LLU;

    t133 = ((x993>>(x994!=x995))/x996);

    if (t133 != 2LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x997 = 11U;
	int32_t x998 = -1;
	int64_t x999 = INT64_MIN;
	uint16_t x1000 = 177U;
	volatile int32_t t134 = 8033846;

    t134 = ((x997>>(x998!=x999))/x1000);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint32_t x1001 = 35094072U;
	static uint32_t x1004 = UINT32_MAX;
	uint32_t t135 = 2U;

    t135 = ((x1001>>(x1002!=x1003))/x1004);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x1006 = UINT64_MAX;
	uint64_t x1007 = 2582431782LLU;
	static int32_t t136 = -1;

    t136 = ((x1005>>(x1006!=x1007))/x1008);

    if (t136 != -63) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x1009 = 1875619U;
	static volatile int16_t x1010 = -218;
	volatile int8_t x1011 = INT8_MIN;
	int8_t x1012 = -4;
	volatile uint32_t t137 = 26181U;

    t137 = ((x1009>>(x1010!=x1011))/x1012);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x1017 = INT32_MAX;
	int64_t x1018 = INT64_MAX;
	int8_t x1019 = INT8_MAX;
	int64_t x1020 = -26027838479LL;
	volatile int64_t t138 = -792930451843049LL;

    t138 = ((x1017>>(x1018!=x1019))/x1020);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x1025 = 60643356U;
	int8_t x1027 = -1;
	int16_t x1028 = INT16_MIN;
	volatile uint32_t t139 = 3U;

    t139 = ((x1025>>(x1026!=x1027))/x1028);

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1029 = 0U;
	int32_t x1030 = -1;
	volatile uint64_t x1031 = UINT64_MAX;
	volatile uint64_t t140 = 249259916LLU;

    t140 = ((x1029>>(x1030!=x1031))/x1032);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x1033 = UINT16_MAX;
	int64_t x1034 = -1LL;
	int16_t x1035 = -1;
	int32_t x1036 = INT32_MIN;
	volatile int32_t t141 = -630498;

    t141 = ((x1033>>(x1034!=x1035))/x1036);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1041 = 11080638662689389LLU;
	int8_t x1042 = 1;
	int8_t x1043 = INT8_MIN;
	int8_t x1044 = INT8_MAX;
	uint64_t t142 = 85LLU;

    t142 = ((x1041>>(x1042!=x1043))/x1044);

    if (t142 != 43624561664131LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1049 = UINT8_MAX;
	static int64_t x1050 = INT64_MIN;
	int16_t x1051 = INT16_MAX;
	int64_t x1052 = INT64_MAX;
	static volatile int64_t t143 = -6212444300081LL;

    t143 = ((x1049>>(x1050!=x1051))/x1052);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x1053 = INT64_MAX;
	int32_t x1055 = -1;
	static volatile uint8_t x1056 = UINT8_MAX;
	int64_t t144 = 3247LL;

    t144 = ((x1053>>(x1054!=x1055))/x1056);

    if (t144 != 18085043209519168LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1057 = 1798;
	static uint16_t x1058 = 43U;
	uint8_t x1060 = 5U;
	static int32_t t145 = -675519;

    t145 = ((x1057>>(x1058!=x1059))/x1060);

    if (t145 != 179) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1062 = 1;
	int64_t x1063 = 1228409277406421340LL;
	int8_t x1064 = INT8_MIN;
	int32_t t146 = -42;

    t146 = ((x1061>>(x1062!=x1063))/x1064);

    if (t146 != -8388607) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1065 = 0;
	uint32_t x1066 = 1184407U;
	static int64_t x1068 = INT64_MIN;
	volatile int64_t t147 = -1152916871LL;

    t147 = ((x1065>>(x1066!=x1067))/x1068);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x1073 = 20;
	int32_t x1075 = INT32_MIN;
	int64_t x1076 = -1LL;
	volatile int64_t t148 = 0LL;

    t148 = ((x1073>>(x1074!=x1075))/x1076);

    if (t148 != -20LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x1089 = UINT16_MAX;
	uint64_t x1090 = 3168976973453661272LLU;
	static int8_t x1091 = INT8_MIN;
	int32_t x1092 = 865765278;
	static volatile int32_t t149 = 30175707;

    t149 = ((x1089>>(x1090!=x1091))/x1092);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1102 = INT32_MIN;
	uint8_t x1103 = 10U;
	int8_t x1104 = 1;
	static volatile int32_t t150 = -7786;

    t150 = ((x1101>>(x1102!=x1103))/x1104);

    if (t150 != 63) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x1105 = 946559;
	uint8_t x1106 = 3U;
	volatile uint32_t x1108 = 2U;
	volatile uint32_t t151 = 720U;

    t151 = ((x1105>>(x1106!=x1107))/x1108);

    if (t151 != 236639U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1109 = UINT16_MAX;
	int8_t x1110 = 14;
	volatile int32_t x1111 = INT32_MIN;
	int64_t x1112 = INT64_MIN;
	int64_t t152 = 37932761669029388LL;

    t152 = ((x1109>>(x1110!=x1111))/x1112);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1113 = 1U;
	static int64_t x1114 = INT64_MIN;
	int8_t x1116 = 1;
	volatile int32_t t153 = -50934916;

    t153 = ((x1113>>(x1114!=x1115))/x1116);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1119 = INT32_MIN;
	volatile int64_t t154 = -176LL;

    t154 = ((x1117>>(x1118!=x1119))/x1120);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1129 = 113429349185734LLU;
	static int8_t x1130 = INT8_MAX;
	static int16_t x1131 = 11398;
	uint64_t t155 = 520178LLU;

    t155 = ((x1129>>(x1130!=x1131))/x1132);

    if (t155 != 446572240888LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x1133 = UINT64_MAX;
	volatile int8_t x1134 = INT8_MIN;
	uint16_t x1135 = 8U;
	static uint64_t t156 = 771136351LLU;

    t156 = ((x1133>>(x1134!=x1135))/x1136);

    if (t156 != 53529316805LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1149 = 0;
	volatile int16_t x1151 = INT16_MAX;
	int32_t x1152 = INT32_MAX;
	volatile int32_t t157 = -3710251;

    t157 = ((x1149>>(x1150!=x1151))/x1152);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1166 = INT8_MIN;
	volatile int16_t x1167 = -3237;
	static int32_t x1168 = -324959;
	int32_t t158 = 0;

    t158 = ((x1165>>(x1166!=x1167))/x1168);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1181 = 213U;
	volatile int64_t x1182 = INT64_MAX;
	static int64_t x1183 = -1LL;

    t159 = ((x1181>>(x1182!=x1183))/x1184);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x1189 = 15758039U;
	uint32_t x1191 = UINT32_MAX;
	static volatile int16_t x1192 = INT16_MIN;
	volatile uint32_t t160 = 2070379U;

    t160 = ((x1189>>(x1190!=x1191))/x1192);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1205 = 0LL;
	int32_t x1206 = -1;
	int16_t x1207 = -304;
	int64_t x1208 = INT64_MIN;
	volatile int64_t t161 = -62260819705257228LL;

    t161 = ((x1205>>(x1206!=x1207))/x1208);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x1209 = 1;
	int32_t x1210 = 100583702;
	uint16_t x1211 = 2U;

    t162 = ((x1209>>(x1210!=x1211))/x1212);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x1213 = 7U;
	static int8_t x1214 = INT8_MIN;
	int8_t x1215 = 7;
	volatile int32_t t163 = -48077;

    t163 = ((x1213>>(x1214!=x1215))/x1216);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1237 = INT8_MAX;
	uint16_t x1238 = 56U;
	volatile int32_t x1239 = INT32_MIN;
	int32_t x1240 = INT32_MIN;

    t164 = ((x1237>>(x1238!=x1239))/x1240);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x1241 = 0;
	volatile uint16_t x1242 = UINT16_MAX;
	uint16_t x1243 = 6U;
	int16_t x1244 = -1;
	static volatile int32_t t165 = 449730388;

    t165 = ((x1241>>(x1242!=x1243))/x1244);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1245 = 138;
	static uint32_t x1246 = 397U;
	int64_t x1247 = -1LL;
	volatile int32_t t166 = 495;

    t166 = ((x1245>>(x1246!=x1247))/x1248);

    if (t166 != -34) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x1249 = 60U;
	int64_t x1250 = INT64_MAX;
	uint64_t x1251 = 1887LLU;
	int8_t x1252 = INT8_MIN;
	volatile int32_t t167 = -6;

    t167 = ((x1249>>(x1250!=x1251))/x1252);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1253 = 5;
	static volatile int32_t x1254 = 54;
	volatile uint64_t x1255 = UINT64_MAX;
	volatile int64_t x1256 = -1LL;

    t168 = ((x1253>>(x1254!=x1255))/x1256);

    if (t168 != -2LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1257 = INT32_MAX;
	int8_t x1259 = INT8_MIN;
	static int16_t x1260 = INT16_MIN;
	volatile int32_t t169 = -16428233;

    t169 = ((x1257>>(x1258!=x1259))/x1260);

    if (t169 != -65535) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1274 = UINT16_MAX;
	volatile int32_t x1275 = -21;
	volatile uint8_t x1276 = 3U;
	int32_t t170 = 360;

    t170 = ((x1273>>(x1274!=x1275))/x1276);

    if (t170 != 3) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x1281 = 2118888663316575592LLU;
	int32_t x1282 = -337347;
	uint8_t x1283 = 9U;
	uint64_t t171 = 5644841LLU;

    t171 = ((x1281>>(x1282!=x1283))/x1284);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1285 = 3303U;
	int8_t x1286 = INT8_MIN;
	int8_t x1287 = INT8_MIN;
	int8_t x1288 = INT8_MAX;
	static int32_t t172 = -50883868;

    t172 = ((x1285>>(x1286!=x1287))/x1288);

    if (t172 != 26) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1289 = 6342U;
	int64_t x1290 = INT64_MIN;
	static int32_t x1291 = -1;
	int8_t x1292 = -1;
	volatile int32_t t173 = -145;

    t173 = ((x1289>>(x1290!=x1291))/x1292);

    if (t173 != -3171) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x1293 = 194U;
	int16_t x1294 = INT16_MIN;
	static int64_t x1295 = INT64_MIN;
	volatile uint64_t x1296 = UINT64_MAX;
	uint64_t t174 = 4LLU;

    t174 = ((x1293>>(x1294!=x1295))/x1296);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1297 = 20U;
	volatile int8_t x1298 = -1;
	uint8_t x1299 = 3U;
	uint64_t t175 = 28855513912LLU;

    t175 = ((x1297>>(x1298!=x1299))/x1300);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1309 = 12;
	uint16_t x1311 = 44U;
	volatile uint64_t t176 = 1708436544805324712LLU;

    t176 = ((x1309>>(x1310!=x1311))/x1312);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint64_t x1313 = 4018769925283381LLU;
	int32_t x1314 = INT32_MIN;
	int32_t x1315 = INT32_MIN;
	static uint16_t x1316 = 701U;
	static volatile uint64_t t177 = 912648626383950LLU;

    t177 = ((x1313>>(x1314!=x1315))/x1316);

    if (t177 != 5732910021802LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x1317 = 4U;
	volatile int32_t x1319 = 18774290;
	int32_t t178 = 31399668;

    t178 = ((x1317>>(x1318!=x1319))/x1320);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1321 = 1393722619U;
	int8_t x1322 = -1;
	int64_t x1323 = -1LL;
	uint64_t x1324 = 5362298218530LLU;
	uint64_t t179 = 12612172263458620LLU;

    t179 = ((x1321>>(x1322!=x1323))/x1324);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1333 = INT32_MAX;
	static int32_t x1334 = -425841962;
	volatile uint64_t x1335 = UINT64_MAX;
	uint16_t x1336 = UINT16_MAX;
	volatile int32_t t180 = -475;

    t180 = ((x1333>>(x1334!=x1335))/x1336);

    if (t180 != 16384) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x1338 = 0;
	static int64_t t181 = 12062017319097702LL;

    t181 = ((x1337>>(x1338!=x1339))/x1340);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1341 = 20778LLU;
	int32_t x1343 = INT32_MAX;
	int32_t x1344 = INT32_MIN;
	volatile uint64_t t182 = 3827LLU;

    t182 = ((x1341>>(x1342!=x1343))/x1344);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x1349 = 170859396528303374LLU;
	static volatile uint8_t x1350 = 54U;
	volatile int16_t x1352 = INT16_MIN;

    t183 = ((x1349>>(x1350!=x1351))/x1352);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1354 = INT16_MIN;
	int16_t x1355 = -1;
	static int16_t x1356 = -3;

    t184 = ((x1353>>(x1354!=x1355))/x1356);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1358 = -1LL;
	uint64_t x1359 = 23LLU;
	int64_t x1360 = -1LL;
	volatile int64_t t185 = 235542727367806LL;

    t185 = ((x1357>>(x1358!=x1359))/x1360);

    if (t185 != -16383LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1361 = INT64_MAX;
	volatile uint32_t x1362 = 1577U;
	uint64_t x1363 = 310LLU;
	int32_t x1364 = INT32_MIN;
	int64_t t186 = 3053LL;

    t186 = ((x1361>>(x1362!=x1363))/x1364);

    if (t186 != -2147483647LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1381 = 12948886125860LLU;
	uint8_t x1382 = 16U;
	int64_t x1383 = -129884746798246LL;
	static uint32_t x1384 = 152417926U;
	uint64_t t187 = 127473407018093310LLU;

    t187 = ((x1381>>(x1382!=x1383))/x1384);

    if (t187 != 42478LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1385 = UINT64_MAX;
	uint32_t x1386 = 0U;
	int8_t x1387 = INT8_MIN;
	uint64_t x1388 = 368573870LLU;
	uint64_t t188 = 3851268688661449LLU;

    t188 = ((x1385>>(x1386!=x1387))/x1388);

    if (t188 != 25024487050LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1393 = 1U;
	static int16_t x1394 = -6;
	int32_t x1395 = INT32_MAX;
	uint16_t x1396 = 12080U;
	int32_t t189 = 8296038;

    t189 = ((x1393>>(x1394!=x1395))/x1396);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1405 = INT16_MAX;
	int32_t x1406 = -46;
	volatile int64_t x1407 = -1LL;
	volatile int16_t x1408 = -1;
	int32_t t190 = -3036739;

    t190 = ((x1405>>(x1406!=x1407))/x1408);

    if (t190 != -16383) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x1409 = 28773453U;
	uint64_t x1411 = 124473LLU;
	int8_t x1412 = INT8_MAX;
	volatile uint32_t t191 = 10010416U;

    t191 = ((x1409>>(x1410!=x1411))/x1412);

    if (t191 != 113281U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1413 = 13U;
	volatile uint8_t x1414 = 119U;
	uint16_t x1415 = 22U;
	static uint64_t x1416 = 139787791915680LLU;
	static volatile uint64_t t192 = 747058LLU;

    t192 = ((x1413>>(x1414!=x1415))/x1416);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1417 = 1983279949LLU;
	volatile int32_t x1420 = INT32_MIN;
	volatile uint64_t t193 = 17001028638253LLU;

    t193 = ((x1417>>(x1418!=x1419))/x1420);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x1421 = 0;
	int16_t x1422 = -1;
	int32_t x1423 = INT32_MIN;
	volatile int32_t x1424 = 109860;
	int32_t t194 = 3775;

    t194 = ((x1421>>(x1422!=x1423))/x1424);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x1445 = UINT8_MAX;
	int64_t x1446 = 1469742651063LL;
	uint8_t x1447 = 3U;
	uint8_t x1448 = UINT8_MAX;
	int32_t t195 = 7043;

    t195 = ((x1445>>(x1446!=x1447))/x1448);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1449 = 21U;
	int64_t x1450 = INT64_MAX;
	int16_t x1452 = INT16_MIN;

    t196 = ((x1449>>(x1450!=x1451))/x1452);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1461 = 7;
	int64_t x1462 = INT64_MIN;
	static volatile int64_t x1463 = -1LL;
	int8_t x1464 = INT8_MIN;

    t197 = ((x1461>>(x1462!=x1463))/x1464);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1465 = 41;
	int64_t x1466 = -6059684LL;
	volatile int64_t x1468 = -1LL;

    t198 = ((x1465>>(x1466!=x1467))/x1468);

    if (t198 != -20LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1470 = -1LL;
	int32_t x1471 = INT32_MIN;
	static int16_t x1472 = 9;
	int32_t t199 = -113408;

    t199 = ((x1469>>(x1470!=x1471))/x1472);

    if (t199 != 7) { NG(); } else { ; }
	
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

