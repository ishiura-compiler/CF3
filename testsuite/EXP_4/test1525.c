
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

int64_t x4 = INT64_MIN;
static uint8_t x13 = 1U;
volatile int32_t t1 = 0;
static volatile uint8_t x22 = 3U;
int8_t x23 = -15;
volatile int32_t x31 = 637177;
int16_t x37 = INT16_MIN;
static volatile int64_t x41 = INT64_MIN;
uint32_t x42 = UINT32_MAX;
uint64_t x69 = 61LLU;
volatile uint64_t t7 = 3011314662LLU;
volatile uint16_t x74 = 261U;
static volatile uint8_t x87 = 0U;
volatile int8_t x90 = INT8_MAX;
uint64_t x91 = UINT64_MAX;
uint32_t t13 = UINT32_MAX;
int32_t x119 = INT32_MIN;
int64_t x128 = INT64_MAX;
uint16_t x130 = 13U;
uint8_t x181 = UINT8_MAX;
static uint32_t x185 = UINT32_MAX;
int64_t x191 = 178747628LL;
volatile int32_t t26 = 608315244;
volatile int16_t x193 = INT16_MIN;
static uint8_t x197 = 0U;
static uint16_t x216 = 3U;
int8_t x219 = -1;
uint64_t t30 = UINT64_MAX;
int16_t x224 = -4457;
volatile int32_t x228 = INT32_MIN;
int64_t x229 = -375374003953LL;
int8_t x236 = INT8_MIN;
static uint16_t x245 = 167U;
int16_t x249 = -2413;
volatile int32_t t37 = -263632237;
volatile int8_t x261 = INT8_MAX;
static int16_t x264 = INT16_MIN;
int32_t t39 = INT32_MAX;
uint32_t x275 = UINT32_MAX;
int8_t x277 = INT8_MIN;
int64_t x280 = -1LL;
int8_t x281 = -1;
int64_t x283 = -1LL;
static volatile int32_t t46 = -4;
static uint32_t x304 = 889259828U;
volatile int64_t t48 = -55261115987LL;
volatile uint32_t x310 = 258882U;
volatile int32_t x322 = INT32_MAX;
int32_t x323 = INT32_MIN;
int8_t x336 = 1;
static int64_t t53 = -39551525450LL;
int16_t x339 = INT16_MIN;
static int32_t t54 = -5236898;
int16_t x358 = INT16_MAX;
volatile int16_t x365 = INT16_MIN;
uint64_t x377 = UINT64_MAX;
uint64_t x381 = 264610LLU;
volatile int16_t x384 = -37;
int32_t x385 = INT32_MIN;
uint16_t x387 = 819U;
volatile int32_t t60 = 175629313;
int64_t x389 = 1LL;
int8_t x390 = INT8_MAX;
uint16_t x394 = UINT16_MAX;
uint32_t x395 = UINT32_MAX;
volatile uint64_t t63 = 449135340LLU;
int64_t x407 = 713363113001LL;
int32_t x411 = -1;
static volatile int16_t x416 = 52;
volatile uint32_t t66 = 28154U;
int64_t x433 = -1LL;
uint32_t x444 = 2256U;
volatile int64_t t69 = 112429LL;
int32_t x459 = INT32_MIN;
volatile uint8_t x461 = 62U;
int64_t x463 = INT64_MIN;
static int64_t x465 = -1LL;
int64_t x469 = -1LL;
uint32_t x470 = 16466219U;
int16_t x471 = 27;
volatile int64_t t74 = -3LL;
uint16_t x480 = 12U;
uint32_t x481 = UINT32_MAX;
volatile uint16_t x497 = UINT16_MAX;
uint32_t t77 = 53593U;
uint64_t x505 = UINT64_MAX;
volatile int64_t t79 = 212LL;
uint64_t x515 = 170LLU;
int16_t x516 = INT16_MAX;
int32_t x524 = -4;
int32_t x526 = 943;
static int64_t x527 = INT64_MIN;
static volatile int64_t t83 = -70960398LL;
volatile int32_t x553 = -6806;
int8_t x560 = 0;
int8_t x577 = 0;
volatile int64_t t90 = -8LL;
static volatile int64_t t91 = 9921LL;
uint32_t x597 = 359414425U;
uint64_t x599 = UINT64_MAX;
int16_t x600 = -1;
int16_t x604 = INT16_MIN;
static volatile int32_t t93 = -99476679;
int32_t x623 = INT32_MAX;
int64_t x635 = -1LL;
static int8_t x636 = INT8_MIN;
volatile uint8_t x657 = 12U;
static int64_t x659 = INT64_MAX;
static int8_t x660 = -55;
int64_t x665 = INT64_MIN;
static int32_t x669 = INT32_MIN;
int64_t x685 = -13LL;
static volatile int16_t x686 = INT16_MAX;
int32_t x687 = -1;
static int64_t t105 = 654865LL;
static int8_t x689 = INT8_MIN;
volatile int32_t t106 = -353;
volatile int32_t t107 = -57724;
int16_t x699 = INT16_MIN;
int32_t x704 = -1;
int64_t x730 = INT64_MAX;
volatile int64_t t113 = -65445211555499593LL;
uint64_t x742 = 63LLU;
int32_t x745 = INT32_MIN;
volatile int32_t t115 = 15851;
int16_t x757 = INT16_MIN;
int8_t x776 = INT8_MIN;
static int8_t x789 = -1;
uint64_t x790 = 925691794LLU;
int32_t x805 = INT32_MIN;
uint8_t x806 = 0U;
uint32_t x808 = 3997802U;
static volatile int8_t x833 = -15;
uint16_t x837 = 7549U;
static int8_t x843 = INT8_MIN;
volatile int32_t t131 = 489873021;
int8_t x857 = INT8_MAX;
static int16_t x859 = -35;
uint64_t t133 = 3148LLU;
int8_t x871 = INT8_MIN;
uint64_t t134 = UINT64_MAX;
int16_t x879 = INT16_MIN;
uint16_t x916 = 2080U;
volatile int32_t t138 = 0;
volatile uint32_t t141 = UINT32_MAX;
static int32_t t142 = 147317184;
int32_t x956 = -1;
uint16_t x973 = UINT16_MAX;
uint32_t x976 = UINT32_MAX;
uint16_t x990 = UINT16_MAX;
static int8_t x1007 = -7;
int32_t t152 = 12518;
int8_t x1024 = INT8_MIN;
static uint64_t x1044 = 3LLU;
int32_t t155 = 1;
int32_t t156 = 5549;
uint32_t x1066 = UINT32_MAX;
volatile int16_t x1072 = -1;
static uint64_t t159 = 504474280863159LLU;
uint8_t x1074 = UINT8_MAX;
int8_t x1076 = 4;
volatile uint16_t x1078 = 1590U;
volatile uint64_t t161 = 4168012790LLU;
volatile uint32_t t163 = 30352503U;
volatile int16_t x1105 = -1;
int32_t x1139 = -1;
uint16_t x1155 = 21333U;
static int64_t t172 = 2277264538LL;
uint32_t x1160 = UINT32_MAX;
int16_t x1166 = 117;
int32_t x1170 = INT32_MAX;
int32_t x1171 = INT32_MIN;
int32_t t176 = 3475;
static int16_t x1183 = -1;
int32_t t178 = -21;
int32_t x1206 = INT32_MAX;
uint8_t x1221 = 40U;
int8_t x1261 = INT8_MIN;
int16_t x1263 = INT16_MIN;
int8_t x1270 = INT8_MAX;
volatile int64_t t186 = 3712239558267LL;
static volatile int16_t x1276 = -6;
uint16_t x1313 = UINT16_MAX;
uint8_t x1319 = UINT8_MAX;
uint8_t x1321 = 32U;
int8_t x1322 = 13;
int64_t x1323 = INT64_MAX;
static volatile int32_t t192 = 770;
int64_t x1355 = -101792078LL;
int64_t x1356 = -1012LL;
int32_t x1360 = INT32_MAX;
static volatile uint64_t t195 = 279848388447307583LLU;
static int8_t x1372 = 3;


void f0(void) {
    	static volatile int32_t x1 = -22634;
	static int16_t x2 = 6010;
	volatile uint32_t x3 = 3U;
	volatile int32_t t0 = -4202;

    t0 = (x1|(x2>>(x3==x4)));

    if (t0 != -18434) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x14 = 14U;
	uint8_t x15 = 3U;
	volatile int32_t x16 = -2106;

    t1 = (x13|(x14>>(x15==x16)));

    if (t1 != 15) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x21 = 6844618;
	static int64_t x24 = INT64_MAX;
	volatile int32_t t2 = 37754;

    t2 = (x21|(x22>>(x23==x24)));

    if (t2 != 6844619) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x29 = INT64_MAX;
	uint64_t x30 = 7488606579953LLU;
	int16_t x32 = INT16_MIN;
	static volatile uint64_t t3 = 2640884945LLU;

    t3 = (x29|(x30>>(x31==x32)));

    if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x33 = 26U;
	uint8_t x34 = 2U;
	static int8_t x35 = -1;
	uint8_t x36 = 5U;
	volatile int32_t t4 = 254583;

    t4 = (x33|(x34>>(x35==x36)));

    if (t4 != 26) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x38 = 7671556LL;
	static uint32_t x39 = UINT32_MAX;
	int64_t x40 = INT64_MIN;
	static volatile int64_t t5 = 1LL;

    t5 = (x37|(x38>>(x39==x40)));

    if (t5 != -28924LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x43 = UINT32_MAX;
	volatile uint64_t x44 = UINT64_MAX;
	int64_t t6 = -4072029782685LL;

    t6 = (x41|(x42>>(x43==x44)));

    if (t6 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x70 = 26034610U;
	int8_t x71 = -1;
	int32_t x72 = -1;

    t7 = (x69|(x70>>(x71==x72)));

    if (t7 != 13017341LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x73 = INT32_MAX;
	uint16_t x75 = UINT16_MAX;
	int16_t x76 = INT16_MIN;
	volatile int32_t t8 = INT32_MAX;

    t8 = (x73|(x74>>(x75==x76)));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x77 = -3;
	static volatile uint64_t x78 = 14932057LLU;
	static int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MIN;
	uint64_t t9 = 9293011497735677LLU;

    t9 = (x77|(x78>>(x79==x80)));

    if (t9 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x81 = UINT32_MAX;
	int16_t x82 = 0;
	static int16_t x83 = 1;
	int16_t x84 = 1;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = (x81|(x82>>(x83==x84)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x85 = INT16_MIN;
	static volatile uint64_t x86 = 721492343351LLU;
	uint64_t x88 = 794289638LLU;
	volatile uint64_t t11 = 77632713864097LLU;

    t11 = (x85|(x86>>(x87==x88)));

    if (t11 != 18446744073709550135LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x89 = INT8_MIN;
	uint32_t x92 = UINT32_MAX;
	static int32_t t12 = -37251;

    t12 = (x89|(x90>>(x91==x92)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x93 = UINT32_MAX;
	int16_t x94 = 214;
	uint16_t x95 = 3U;
	int8_t x96 = INT8_MIN;

    t13 = (x93|(x94>>(x95==x96)));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x97 = INT32_MAX;
	int16_t x98 = 1;
	int64_t x99 = -4437096243836LL;
	static volatile int8_t x100 = 18;
	volatile int32_t t14 = INT32_MAX;

    t14 = (x97|(x98>>(x99==x100)));

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x113 = 2U;
	volatile uint16_t x114 = 14U;
	int16_t x115 = INT16_MIN;
	int32_t x116 = 7086;
	static volatile int32_t t15 = -250;

    t15 = (x113|(x114>>(x115==x116)));

    if (t15 != 14) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x117 = UINT64_MAX;
	uint8_t x118 = UINT8_MAX;
	int8_t x120 = -15;
	volatile uint64_t t16 = UINT64_MAX;

    t16 = (x117|(x118>>(x119==x120)));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x125 = 24156U;
	static int16_t x126 = INT16_MAX;
	volatile uint64_t x127 = 18968957745283LLU;
	int32_t t17 = -32759945;

    t17 = (x125|(x126>>(x127==x128)));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x129 = INT64_MIN;
	volatile int16_t x131 = -3212;
	int16_t x132 = -1;
	int64_t t18 = 243221LL;

    t18 = (x129|(x130>>(x131==x132)));

    if (t18 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x133 = INT16_MIN;
	volatile int32_t x134 = INT32_MAX;
	int64_t x135 = -1LL;
	static volatile uint16_t x136 = UINT16_MAX;
	static int32_t t19 = -47066;

    t19 = (x133|(x134>>(x135==x136)));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x137 = INT16_MIN;
	uint8_t x138 = 11U;
	uint8_t x139 = 0U;
	uint64_t x140 = 9132693LLU;
	static int32_t t20 = 127;

    t20 = (x137|(x138>>(x139==x140)));

    if (t20 != -32757) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x141 = INT16_MIN;
	volatile uint32_t x142 = 4008686U;
	static uint64_t x143 = 134467788827032323LLU;
	int8_t x144 = 1;
	volatile uint32_t t21 = 10551966U;

    t21 = (x141|(x142>>(x143==x144)));

    if (t21 != 4294945518U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x149 = INT8_MIN;
	volatile uint32_t x150 = 20261U;
	int64_t x151 = 1010091945731770786LL;
	uint32_t x152 = 77U;
	volatile uint32_t t22 = 95683584U;

    t22 = (x149|(x150>>(x151==x152)));

    if (t22 != 4294967205U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x173 = INT32_MIN;
	int16_t x174 = 29;
	int8_t x175 = INT8_MIN;
	static int64_t x176 = 109937551458873764LL;
	int32_t t23 = 25083;

    t23 = (x173|(x174>>(x175==x176)));

    if (t23 != -2147483619) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x182 = 877U;
	int8_t x183 = INT8_MAX;
	volatile int32_t x184 = -1;
	volatile int32_t t24 = -3278;

    t24 = (x181|(x182>>(x183==x184)));

    if (t24 != 1023) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x186 = UINT32_MAX;
	uint64_t x187 = 14286718862400LLU;
	volatile uint8_t x188 = 13U;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = (x185|(x186>>(x187==x188)));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x189 = 54;
	int16_t x190 = 10;
	uint32_t x192 = UINT32_MAX;

    t26 = (x189|(x190>>(x191==x192)));

    if (t26 != 62) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x194 = 75962785U;
	uint16_t x195 = 1472U;
	int32_t x196 = INT32_MAX;
	uint32_t t27 = 473U;

    t27 = (x193|(x194>>(x195==x196)));

    if (t27 != 4294941089U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x198 = INT64_MAX;
	static int8_t x199 = INT8_MIN;
	int32_t x200 = 796;
	static volatile int64_t t28 = INT64_MAX;

    t28 = (x197|(x198>>(x199==x200)));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x213 = INT32_MAX;
	uint8_t x214 = 3U;
	volatile int8_t x215 = -10;
	static int32_t t29 = INT32_MAX;

    t29 = (x213|(x214>>(x215==x216)));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x217 = 16046U;
	uint64_t x218 = UINT64_MAX;
	static uint8_t x220 = UINT8_MAX;

    t30 = (x217|(x218>>(x219==x220)));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x221 = 24;
	volatile int8_t x222 = 1;
	volatile int16_t x223 = 1;
	int32_t t31 = 1;

    t31 = (x221|(x222>>(x223==x224)));

    if (t31 != 25) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x225 = -1;
	uint16_t x226 = 5U;
	int64_t x227 = INT64_MIN;
	volatile int32_t t32 = 1;

    t32 = (x225|(x226>>(x227==x228)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x230 = 5230;
	int64_t x231 = -1LL;
	volatile uint32_t x232 = UINT32_MAX;
	volatile int64_t t33 = 2424256741499648LL;

    t33 = (x229|(x230>>(x231==x232)));

    if (t33 != -375373998737LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x233 = UINT32_MAX;
	static int16_t x234 = INT16_MAX;
	uint64_t x235 = UINT64_MAX;
	static volatile uint32_t t34 = UINT32_MAX;

    t34 = (x233|(x234>>(x235==x236)));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x241 = -1LL;
	static uint32_t x242 = UINT32_MAX;
	int64_t x243 = INT64_MAX;
	int64_t x244 = INT64_MIN;
	static volatile int64_t t35 = -476180777LL;

    t35 = (x241|(x242>>(x243==x244)));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x246 = 7244764216262LLU;
	volatile int8_t x247 = -1;
	static volatile int64_t x248 = -3675142711047LL;
	volatile uint64_t t36 = 122234850024480466LLU;

    t36 = (x245|(x246>>(x247==x248)));

    if (t36 != 7244764216295LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x250 = INT16_MAX;
	volatile int8_t x251 = INT8_MIN;
	uint8_t x252 = 107U;

    t37 = (x249|(x250>>(x251==x252)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x257 = -688LL;
	static volatile int64_t x258 = 991009212624774LL;
	static volatile int64_t x259 = -3275885206038754LL;
	int64_t x260 = INT64_MAX;
	volatile int64_t t38 = 25236222043735LL;

    t38 = (x257|(x258>>(x259==x260)));

    if (t38 != -42LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x262 = INT32_MAX;
	int8_t x263 = INT8_MIN;

    t39 = (x261|(x262>>(x263==x264)));

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x265 = 124U;
	uint8_t x266 = 7U;
	uint64_t x267 = 2328020982LLU;
	int16_t x268 = -1;
	int32_t t40 = 980513172;

    t40 = (x265|(x266>>(x267==x268)));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x273 = -145389910425754LL;
	uint64_t x274 = 4229154LLU;
	int16_t x276 = -3303;
	volatile uint64_t t41 = 401967905430838772LLU;

    t41 = (x273|(x274>>(x275==x276)));

    if (t41 != 18446598683803320166LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x278 = 319885166044154953LLU;
	int32_t x279 = INT32_MIN;
	uint64_t t42 = 45LLU;

    t42 = (x277|(x278>>(x279==x280)));

    if (t42 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x282 = INT8_MAX;
	int16_t x284 = INT16_MIN;
	volatile int32_t t43 = -165110;

    t43 = (x281|(x282>>(x283==x284)));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x289 = INT64_MIN;
	uint32_t x290 = UINT32_MAX;
	uint16_t x291 = 2035U;
	int64_t x292 = INT64_MIN;
	volatile int64_t t44 = 199126033050116181LL;

    t44 = (x289|(x290>>(x291==x292)));

    if (t44 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x293 = UINT32_MAX;
	static uint8_t x294 = 29U;
	uint32_t x295 = 96U;
	volatile int32_t x296 = INT32_MAX;
	volatile uint32_t t45 = UINT32_MAX;

    t45 = (x293|(x294>>(x295==x296)));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x297 = -1;
	static uint8_t x298 = UINT8_MAX;
	uint8_t x299 = 36U;
	int16_t x300 = -1;

    t46 = (x297|(x298>>(x299==x300)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x301 = -42;
	int64_t x302 = 31805372219441980LL;
	static int16_t x303 = 53;
	volatile int64_t t47 = 57LL;

    t47 = (x301|(x302>>(x303==x304)));

    if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x305 = INT64_MIN;
	static volatile int8_t x306 = INT8_MAX;
	int8_t x307 = 0;
	int16_t x308 = INT16_MAX;

    t48 = (x305|(x306>>(x307==x308)));

    if (t48 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x309 = 15;
	static volatile uint32_t x311 = 429562235U;
	uint32_t x312 = UINT32_MAX;
	uint32_t t49 = 357799708U;

    t49 = (x309|(x310>>(x311==x312)));

    if (t49 != 258895U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x313 = -1382861;
	uint32_t x314 = 11U;
	int64_t x315 = -641041361179LL;
	int32_t x316 = INT32_MIN;
	static uint32_t t50 = 2181U;

    t50 = (x313|(x314>>(x315==x316)));

    if (t50 != 4293584443U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x321 = INT16_MIN;
	static uint32_t x324 = 3U;
	static volatile int32_t t51 = -4;

    t51 = (x321|(x322>>(x323==x324)));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x325 = 23;
	int8_t x326 = 3;
	int32_t x327 = INT32_MIN;
	int32_t x328 = -1;
	static volatile int32_t t52 = 274363;

    t52 = (x325|(x326>>(x327==x328)));

    if (t52 != 23) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x333 = INT64_MIN;
	uint8_t x334 = 2U;
	int64_t x335 = INT64_MAX;

    t53 = (x333|(x334>>(x335==x336)));

    if (t53 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x337 = -1572;
	uint16_t x338 = 2588U;
	static int16_t x340 = INT16_MIN;

    t54 = (x337|(x338>>(x339==x340)));

    if (t54 != -546) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x357 = 3418;
	volatile int32_t x359 = 0;
	volatile uint16_t x360 = UINT16_MAX;
	int32_t t55 = 1;

    t55 = (x357|(x358>>(x359==x360)));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x366 = 2LLU;
	static volatile uint64_t x367 = 1768745732528447LLU;
	int8_t x368 = -1;
	static volatile uint64_t t56 = 45883523412LLU;

    t56 = (x365|(x366>>(x367==x368)));

    if (t56 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x373 = 5;
	volatile uint32_t x374 = 36682205U;
	int64_t x375 = INT64_MAX;
	uint8_t x376 = UINT8_MAX;
	volatile uint32_t t57 = 10150290U;

    t57 = (x373|(x374>>(x375==x376)));

    if (t57 != 36682205U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x378 = INT64_MAX;
	uint32_t x379 = UINT32_MAX;
	static int8_t x380 = -1;
	uint64_t t58 = UINT64_MAX;

    t58 = (x377|(x378>>(x379==x380)));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x382 = INT64_MAX;
	volatile int16_t x383 = -1;
	uint64_t t59 = 1LLU;

    t59 = (x381|(x382>>(x383==x384)));

    if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x386 = 20734U;
	static int32_t x388 = -3328;

    t60 = (x385|(x386>>(x387==x388)));

    if (t60 != -2147462914) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x391 = -91971;
	uint32_t x392 = UINT32_MAX;
	int64_t t61 = 4220026970581197LL;

    t61 = (x389|(x390>>(x391==x392)));

    if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x393 = INT16_MAX;
	int64_t x396 = -11838020679841603LL;
	int32_t t62 = 50655138;

    t62 = (x393|(x394>>(x395==x396)));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x401 = 2510022LLU;
	int32_t x402 = INT32_MAX;
	int8_t x403 = 1;
	static int64_t x404 = 17129661324631LL;

    t63 = (x401|(x402>>(x403==x404)));

    if (t63 != 2147483647LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x405 = 184U;
	volatile int8_t x406 = INT8_MAX;
	int8_t x408 = INT8_MIN;
	uint32_t t64 = 1904570U;

    t64 = (x405|(x406>>(x407==x408)));

    if (t64 != 255U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x409 = INT64_MIN;
	volatile int64_t x410 = INT64_MAX;
	volatile uint16_t x412 = UINT16_MAX;
	volatile int64_t t65 = 0LL;

    t65 = (x409|(x410>>(x411==x412)));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x413 = INT8_MIN;
	uint32_t x414 = 112U;
	volatile int8_t x415 = -26;

    t66 = (x413|(x414>>(x415==x416)));

    if (t66 != 4294967280U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x417 = INT8_MIN;
	uint8_t x418 = 0U;
	static int16_t x419 = 4;
	volatile int8_t x420 = INT8_MIN;
	static volatile int32_t t67 = -919;

    t67 = (x417|(x418>>(x419==x420)));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x434 = UINT8_MAX;
	int8_t x435 = 0;
	uint8_t x436 = UINT8_MAX;
	int64_t t68 = -182731691875160061LL;

    t68 = (x433|(x434>>(x435==x436)));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x441 = -10LL;
	static int64_t x442 = 5527LL;
	uint64_t x443 = UINT64_MAX;

    t69 = (x441|(x442>>(x443==x444)));

    if (t69 != -9LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x453 = INT32_MIN;
	int32_t x454 = INT32_MAX;
	volatile uint64_t x455 = 142117858587582454LLU;
	int8_t x456 = INT8_MIN;
	int32_t t70 = -18717998;

    t70 = (x453|(x454>>(x455==x456)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x457 = INT32_MIN;
	int64_t x458 = 7017LL;
	uint16_t x460 = 966U;
	int64_t t71 = 38656835852730858LL;

    t71 = (x457|(x458>>(x459==x460)));

    if (t71 != -2147476631LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x462 = UINT8_MAX;
	uint32_t x464 = 1U;
	volatile int32_t t72 = -14170;

    t72 = (x461|(x462>>(x463==x464)));

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x466 = 13515U;
	volatile uint8_t x467 = 0U;
	static int8_t x468 = 2;
	int64_t t73 = 4362812510425265LL;

    t73 = (x465|(x466>>(x467==x468)));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x472 = UINT16_MAX;

    t74 = (x469|(x470>>(x471==x472)));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x477 = 49830U;
	uint16_t x478 = 2U;
	static int64_t x479 = 66399020416295LL;
	uint32_t t75 = 11590988U;

    t75 = (x477|(x478>>(x479==x480)));

    if (t75 != 49830U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x482 = UINT64_MAX;
	int64_t x483 = 8495547672414LL;
	int64_t x484 = INT64_MIN;
	static volatile uint64_t t76 = UINT64_MAX;

    t76 = (x481|(x482>>(x483==x484)));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x498 = 6535U;
	int8_t x499 = 0;
	int32_t x500 = INT32_MAX;

    t77 = (x497|(x498>>(x499==x500)));

    if (t77 != 65535U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x506 = 2045674106198LLU;
	static int8_t x507 = 15;
	int8_t x508 = 0;
	uint64_t t78 = UINT64_MAX;

    t78 = (x505|(x506>>(x507==x508)));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x509 = INT64_MIN;
	uint32_t x510 = 816U;
	volatile int32_t x511 = INT32_MAX;
	uint64_t x512 = UINT64_MAX;

    t79 = (x509|(x510>>(x511==x512)));

    if (t79 != -9223372036854774992LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x513 = INT32_MIN;
	int64_t x514 = 32867620817402721LL;
	volatile int64_t t80 = -82888LL;

    t80 = (x513|(x514>>(x515==x516)));

    if (t80 != -814810271LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x521 = 42U;
	uint8_t x522 = 2U;
	static uint32_t x523 = UINT32_MAX;
	volatile int32_t t81 = -723;

    t81 = (x521|(x522>>(x523==x524)));

    if (t81 != 42) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x525 = INT32_MIN;
	volatile uint64_t x528 = 28000116341576302LLU;
	static int32_t t82 = 14270041;

    t82 = (x525|(x526>>(x527==x528)));

    if (t82 != -2147482705) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x545 = 15258991LL;
	static volatile int8_t x546 = INT8_MAX;
	int32_t x547 = -3817791;
	volatile int64_t x548 = INT64_MIN;

    t83 = (x545|(x546>>(x547==x548)));

    if (t83 != 15259007LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x554 = 14934776974402439LL;
	int8_t x555 = INT8_MIN;
	uint64_t x556 = 151677850797882LLU;
	volatile int64_t t84 = 0LL;

    t84 = (x553|(x554>>(x555==x556)));

    if (t84 != -6161LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x557 = UINT32_MAX;
	uint32_t x558 = UINT32_MAX;
	volatile int8_t x559 = -14;
	static uint32_t t85 = UINT32_MAX;

    t85 = (x557|(x558>>(x559==x560)));

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x569 = UINT8_MAX;
	static uint32_t x570 = 27U;
	uint32_t x571 = 325U;
	int64_t x572 = INT64_MAX;
	volatile uint32_t t86 = 1U;

    t86 = (x569|(x570>>(x571==x572)));

    if (t86 != 255U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x573 = UINT16_MAX;
	uint64_t x574 = 21409387LLU;
	int16_t x575 = -1;
	int64_t x576 = INT64_MAX;
	static uint64_t t87 = 52072765145840LLU;

    t87 = (x573|(x574>>(x575==x576)));

    if (t87 != 21430271LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x578 = UINT16_MAX;
	uint16_t x579 = 38U;
	int16_t x580 = 0;
	int32_t t88 = 45519;

    t88 = (x577|(x578>>(x579==x580)));

    if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x581 = -98222581231LL;
	volatile uint32_t x582 = UINT32_MAX;
	int16_t x583 = INT16_MIN;
	int32_t x584 = INT32_MIN;
	volatile int64_t t89 = 354102927890959LL;

    t89 = (x581|(x582>>(x583==x584)));

    if (t89 != -94489280513LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x585 = INT32_MIN;
	volatile int64_t x586 = 44105001304LL;
	uint64_t x587 = 64733193689797LLU;
	int64_t x588 = INT64_MIN;

    t90 = (x585|(x586>>(x587==x588)));

    if (t90 != -992155304LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x593 = 9524U;
	volatile int64_t x594 = 31871887329643LL;
	volatile int16_t x595 = INT16_MIN;
	uint32_t x596 = 83509U;

    t91 = (x593|(x594>>(x595==x596)));

    if (t91 != 31871887338879LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x598 = 380313503U;
	volatile uint32_t t92 = 27U;

    t92 = (x597|(x598>>(x599==x600)));

    if (t92 != 528334815U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x601 = 32U;
	uint16_t x602 = 31319U;
	int16_t x603 = -3866;

    t93 = (x601|(x602>>(x603==x604)));

    if (t93 != 31351) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x609 = 429681U;
	int32_t x610 = INT32_MAX;
	int64_t x611 = INT64_MIN;
	int16_t x612 = 11;
	static volatile uint32_t t94 = 323889308U;

    t94 = (x609|(x610>>(x611==x612)));

    if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x621 = INT32_MAX;
	uint64_t x622 = 6000400LLU;
	static volatile int32_t x624 = -1;
	volatile uint64_t t95 = 3746688364043LLU;

    t95 = (x621|(x622>>(x623==x624)));

    if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x633 = UINT16_MAX;
	static uint16_t x634 = 4U;
	volatile int32_t t96 = -697;

    t96 = (x633|(x634>>(x635==x636)));

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x637 = 765906U;
	volatile int64_t x638 = 49835794706249881LL;
	int64_t x639 = INT64_MIN;
	volatile uint16_t x640 = 3U;
	int64_t t97 = 2136845576160647LL;

    t97 = (x637|(x638>>(x639==x640)));

    if (t97 != 49835794706972635LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x645 = INT64_MIN;
	int8_t x646 = 5;
	uint32_t x647 = 427485912U;
	uint8_t x648 = 1U;
	volatile int64_t t98 = -743467897010098114LL;

    t98 = (x645|(x646>>(x647==x648)));

    if (t98 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x649 = -1LL;
	uint16_t x650 = 1U;
	volatile uint16_t x651 = 2443U;
	int64_t x652 = -1LL;
	volatile int64_t t99 = 15731966LL;

    t99 = (x649|(x650>>(x651==x652)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x658 = 1899LLU;
	volatile uint64_t t100 = 117159775104LLU;

    t100 = (x657|(x658>>(x659==x660)));

    if (t100 != 1903LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x661 = INT8_MIN;
	uint16_t x662 = 3U;
	uint8_t x663 = UINT8_MAX;
	int16_t x664 = INT16_MAX;
	int32_t t101 = -4;

    t101 = (x661|(x662>>(x663==x664)));

    if (t101 != -125) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x666 = 515U;
	int8_t x667 = 61;
	uint64_t x668 = 1121616311LLU;
	volatile int64_t t102 = 600639224338331765LL;

    t102 = (x665|(x666>>(x667==x668)));

    if (t102 != -9223372036854775293LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x670 = UINT32_MAX;
	uint64_t x671 = UINT64_MAX;
	int16_t x672 = -1;
	volatile uint32_t t103 = UINT32_MAX;

    t103 = (x669|(x670>>(x671==x672)));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x673 = INT32_MIN;
	uint16_t x674 = 80U;
	static int8_t x675 = INT8_MIN;
	int64_t x676 = -222335786221421LL;
	int32_t t104 = -1;

    t104 = (x673|(x674>>(x675==x676)));

    if (t104 != -2147483568) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x688 = INT32_MIN;

    t105 = (x685|(x686>>(x687==x688)));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x690 = INT32_MAX;
	int64_t x691 = INT64_MIN;
	volatile int64_t x692 = INT64_MIN;

    t106 = (x689|(x690>>(x691==x692)));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x693 = 8U;
	uint8_t x694 = 3U;
	int64_t x695 = -16120146LL;
	uint16_t x696 = 13U;

    t107 = (x693|(x694>>(x695==x696)));

    if (t107 != 11) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x697 = 582;
	volatile int64_t x698 = INT64_MAX;
	static int8_t x700 = -7;
	volatile int64_t t108 = INT64_MAX;

    t108 = (x697|(x698>>(x699==x700)));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x701 = INT8_MIN;
	volatile int32_t x702 = 19;
	int8_t x703 = -1;
	volatile int32_t t109 = -122;

    t109 = (x701|(x702>>(x703==x704)));

    if (t109 != -119) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x705 = 46U;
	uint8_t x706 = 22U;
	int64_t x707 = INT64_MIN;
	static int64_t x708 = INT64_MAX;
	int32_t t110 = -40;

    t110 = (x705|(x706>>(x707==x708)));

    if (t110 != 62) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x709 = INT64_MIN;
	volatile uint8_t x710 = 0U;
	int64_t x711 = INT64_MAX;
	static volatile int8_t x712 = INT8_MIN;
	int64_t t111 = INT64_MIN;

    t111 = (x709|(x710>>(x711==x712)));

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = 4;
	int16_t x727 = 0;
	static int8_t x728 = -1;
	volatile int32_t t112 = 332645788;

    t112 = (x725|(x726>>(x727==x728)));

    if (t112 != -32764) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x729 = INT16_MIN;
	volatile uint8_t x731 = 123U;
	uint8_t x732 = UINT8_MAX;

    t113 = (x729|(x730>>(x731==x732)));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x741 = 0U;
	static volatile int16_t x743 = INT16_MAX;
	int64_t x744 = -1LL;
	static uint64_t t114 = 3165361024LLU;

    t114 = (x741|(x742>>(x743==x744)));

    if (t114 != 63LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x746 = INT32_MAX;
	int64_t x747 = INT64_MIN;
	volatile int64_t x748 = 55LL;

    t115 = (x745|(x746>>(x747==x748)));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x753 = -1LL;
	static int8_t x754 = 3;
	uint8_t x755 = 7U;
	int32_t x756 = INT32_MIN;
	int64_t t116 = -6948601898145813LL;

    t116 = (x753|(x754>>(x755==x756)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x758 = UINT32_MAX;
	int16_t x759 = -332;
	static int32_t x760 = -25607814;
	volatile uint32_t t117 = UINT32_MAX;

    t117 = (x757|(x758>>(x759==x760)));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x769 = INT16_MIN;
	uint32_t x770 = UINT32_MAX;
	uint16_t x771 = 2164U;
	volatile int16_t x772 = INT16_MAX;
	volatile uint32_t t118 = UINT32_MAX;

    t118 = (x769|(x770>>(x771==x772)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x773 = 1764151479853865LLU;
	int64_t x774 = INT64_MAX;
	int8_t x775 = INT8_MAX;
	volatile uint64_t t119 = 623738235LLU;

    t119 = (x773|(x774>>(x775==x776)));

    if (t119 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x777 = INT64_MIN;
	int8_t x778 = INT8_MAX;
	static int64_t x779 = INT64_MIN;
	int8_t x780 = INT8_MIN;
	volatile int64_t t120 = -11752572320LL;

    t120 = (x777|(x778>>(x779==x780)));

    if (t120 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x781 = INT8_MIN;
	static int64_t x782 = INT64_MAX;
	int8_t x783 = INT8_MAX;
	volatile uint16_t x784 = 287U;
	int64_t t121 = -95226634LL;

    t121 = (x781|(x782>>(x783==x784)));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x791 = INT64_MIN;
	int16_t x792 = -5;
	volatile uint64_t t122 = UINT64_MAX;

    t122 = (x789|(x790>>(x791==x792)));

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x793 = 7679407922118316LL;
	static int64_t x794 = 2274333LL;
	int8_t x795 = INT8_MIN;
	int8_t x796 = INT8_MIN;
	volatile int64_t t123 = -5645277928LL;

    t123 = (x793|(x794>>(x795==x796)));

    if (t123 != 7679407923232430LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x797 = INT64_MAX;
	uint8_t x798 = 2U;
	int32_t x799 = INT32_MAX;
	uint16_t x800 = 2U;
	volatile int64_t t124 = INT64_MAX;

    t124 = (x797|(x798>>(x799==x800)));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x801 = 118U;
	volatile uint16_t x802 = 3524U;
	uint32_t x803 = 44312U;
	uint8_t x804 = 5U;
	uint32_t t125 = 3829U;

    t125 = (x801|(x802>>(x803==x804)));

    if (t125 != 3574U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x807 = INT16_MAX;
	int32_t t126 = INT32_MIN;

    t126 = (x805|(x806>>(x807==x808)));

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x821 = INT8_MAX;
	uint8_t x822 = 5U;
	volatile int8_t x823 = INT8_MIN;
	static uint64_t x824 = 13853708671LLU;
	volatile int32_t t127 = 5;

    t127 = (x821|(x822>>(x823==x824)));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x834 = INT32_MAX;
	volatile int8_t x835 = INT8_MIN;
	static volatile int32_t x836 = INT32_MIN;
	int32_t t128 = 1692;

    t128 = (x833|(x834>>(x835==x836)));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x838 = 9769640;
	static uint64_t x839 = UINT64_MAX;
	volatile uint32_t x840 = 148553U;
	static int32_t t129 = -3806;

    t129 = (x837|(x838>>(x839==x840)));

    if (t129 != 9773053) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x841 = INT32_MIN;
	int32_t x842 = INT32_MAX;
	int32_t x844 = -1;
	int32_t t130 = -87580;

    t130 = (x841|(x842>>(x843==x844)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x845 = INT32_MIN;
	int8_t x846 = INT8_MAX;
	static int8_t x847 = INT8_MIN;
	int16_t x848 = INT16_MAX;

    t131 = (x845|(x846>>(x847==x848)));

    if (t131 != -2147483521) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x849 = -1;
	uint64_t x850 = UINT64_MAX;
	volatile int8_t x851 = -55;
	uint8_t x852 = UINT8_MAX;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = (x849|(x850>>(x851==x852)));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x858 = 1LLU;
	int16_t x860 = -1;

    t133 = (x857|(x858>>(x859==x860)));

    if (t133 != 127LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x869 = INT32_MAX;
	uint64_t x870 = UINT64_MAX;
	uint8_t x872 = UINT8_MAX;

    t134 = (x869|(x870>>(x871==x872)));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x877 = INT16_MIN;
	static int8_t x878 = 20;
	static int8_t x880 = -1;
	volatile int32_t t135 = -12239;

    t135 = (x877|(x878>>(x879==x880)));

    if (t135 != -32748) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x881 = INT32_MIN;
	int16_t x882 = INT16_MAX;
	uint64_t x883 = UINT64_MAX;
	static int8_t x884 = INT8_MIN;
	volatile int32_t t136 = -77261;

    t136 = (x881|(x882>>(x883==x884)));

    if (t136 != -2147450881) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x885 = 0U;
	uint8_t x886 = UINT8_MAX;
	static volatile int64_t x887 = 17603671748483741LL;
	uint32_t x888 = 783548686U;
	static uint32_t t137 = 8U;

    t137 = (x885|(x886>>(x887==x888)));

    if (t137 != 255U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x913 = -7136633;
	uint8_t x914 = UINT8_MAX;
	uint32_t x915 = UINT32_MAX;

    t138 = (x913|(x914>>(x915==x916)));

    if (t138 != -7136513) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x917 = INT8_MIN;
	static uint32_t x918 = UINT32_MAX;
	int8_t x919 = INT8_MAX;
	int8_t x920 = INT8_MIN;
	uint32_t t139 = UINT32_MAX;

    t139 = (x917|(x918>>(x919==x920)));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x925 = INT32_MIN;
	int16_t x926 = INT16_MAX;
	volatile uint16_t x927 = 21U;
	int16_t x928 = -1;
	int32_t t140 = 1839;

    t140 = (x925|(x926>>(x927==x928)));

    if (t140 != -2147450881) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x933 = INT8_MAX;
	uint32_t x934 = UINT32_MAX;
	int16_t x935 = 275;
	static int16_t x936 = INT16_MIN;

    t141 = (x933|(x934>>(x935==x936)));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x937 = -1;
	int8_t x938 = 1;
	static int8_t x939 = INT8_MIN;
	uint16_t x940 = 5773U;

    t142 = (x937|(x938>>(x939==x940)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x941 = 389U;
	uint64_t x942 = 32431484151LLU;
	int64_t x943 = -1LL;
	int16_t x944 = INT16_MIN;
	volatile uint64_t t143 = 4412224206159022LLU;

    t143 = (x941|(x942>>(x943==x944)));

    if (t143 != 32431484407LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x949 = INT16_MAX;
	volatile uint32_t x950 = UINT32_MAX;
	uint32_t x951 = 305175U;
	volatile int8_t x952 = INT8_MIN;
	volatile uint32_t t144 = UINT32_MAX;

    t144 = (x949|(x950>>(x951==x952)));

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x953 = 16547650241285617LL;
	static uint16_t x954 = 6U;
	static int32_t x955 = -1;
	int64_t t145 = 1121796757023LL;

    t145 = (x953|(x954>>(x955==x956)));

    if (t145 != 16547650241285619LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x965 = INT8_MAX;
	volatile int64_t x966 = INT64_MAX;
	volatile uint32_t x967 = 833U;
	int32_t x968 = 8471;
	volatile int64_t t146 = INT64_MAX;

    t146 = (x965|(x966>>(x967==x968)));

    if (t146 != INT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x974 = INT16_MAX;
	int16_t x975 = INT16_MIN;
	static volatile int32_t t147 = -3;

    t147 = (x973|(x974>>(x975==x976)));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x989 = INT64_MAX;
	uint64_t x991 = 8345874887335LLU;
	int64_t x992 = INT64_MIN;
	volatile int64_t t148 = INT64_MAX;

    t148 = (x989|(x990>>(x991==x992)));

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x1005 = 65U;
	uint16_t x1006 = 13431U;
	int16_t x1008 = 4;
	uint32_t t149 = 111110U;

    t149 = (x1005|(x1006>>(x1007==x1008)));

    if (t149 != 13431U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1009 = 61U;
	volatile uint64_t x1010 = 24198506LLU;
	volatile int64_t x1011 = -1LL;
	uint64_t x1012 = UINT64_MAX;
	uint64_t t150 = 121LLU;

    t150 = (x1009|(x1010>>(x1011==x1012)));

    if (t150 != 12099261LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1013 = 0;
	uint8_t x1014 = 10U;
	static uint64_t x1015 = 16856909864162LLU;
	uint32_t x1016 = 259634U;
	int32_t t151 = -173306069;

    t151 = (x1013|(x1014>>(x1015==x1016)));

    if (t151 != 10) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1017 = INT8_MIN;
	int8_t x1018 = 1;
	int32_t x1019 = 4935158;
	int32_t x1020 = INT32_MIN;

    t152 = (x1017|(x1018>>(x1019==x1020)));

    if (t152 != -127) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1021 = 11U;
	uint32_t x1022 = UINT32_MAX;
	uint64_t x1023 = 24143LLU;
	uint32_t t153 = UINT32_MAX;

    t153 = (x1021|(x1022>>(x1023==x1024)));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1041 = 4LLU;
	uint64_t x1042 = 1LLU;
	uint8_t x1043 = UINT8_MAX;
	volatile uint64_t t154 = 3481616095135421579LLU;

    t154 = (x1041|(x1042>>(x1043==x1044)));

    if (t154 != 5LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x1049 = 12U;
	static uint8_t x1050 = 3U;
	int16_t x1051 = INT16_MIN;
	static int32_t x1052 = -2246707;

    t155 = (x1049|(x1050>>(x1051==x1052)));

    if (t155 != 15) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x1057 = -1;
	static uint16_t x1058 = 8034U;
	static uint32_t x1059 = UINT32_MAX;
	int64_t x1060 = INT64_MIN;

    t156 = (x1057|(x1058>>(x1059==x1060)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1061 = INT16_MIN;
	static uint16_t x1062 = 179U;
	int64_t x1063 = INT64_MAX;
	int32_t x1064 = INT32_MIN;
	volatile int32_t t157 = -88468062;

    t157 = (x1061|(x1062>>(x1063==x1064)));

    if (t157 != -32589) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x1065 = INT32_MIN;
	static volatile int8_t x1067 = INT8_MIN;
	uint32_t x1068 = UINT32_MAX;
	volatile uint32_t t158 = UINT32_MAX;

    t158 = (x1065|(x1066>>(x1067==x1068)));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1069 = 358509092LLU;
	int16_t x1070 = 46;
	int8_t x1071 = INT8_MAX;

    t159 = (x1069|(x1070>>(x1071==x1072)));

    if (t159 != 358509102LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1073 = 3U;
	int16_t x1075 = 1068;
	uint32_t t160 = 20559U;

    t160 = (x1073|(x1074>>(x1075==x1076)));

    if (t160 != 255U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x1077 = 2002LLU;
	uint32_t x1079 = 14796168U;
	uint16_t x1080 = 20U;

    t161 = (x1077|(x1078>>(x1079==x1080)));

    if (t161 != 2038LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x1081 = 9;
	int64_t x1082 = 1915LL;
	int64_t x1083 = 5703035922360634LL;
	int32_t x1084 = INT32_MIN;
	static int64_t t162 = -2231700LL;

    t162 = (x1081|(x1082>>(x1083==x1084)));

    if (t162 != 1915LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x1093 = 52U;
	uint32_t x1094 = 108000722U;
	static volatile uint64_t x1095 = 1890LLU;
	uint8_t x1096 = UINT8_MAX;

    t163 = (x1093|(x1094>>(x1095==x1096)));

    if (t163 != 108000758U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1097 = -1LL;
	uint64_t x1098 = UINT64_MAX;
	volatile uint8_t x1099 = 33U;
	int32_t x1100 = 27449;
	uint64_t t164 = UINT64_MAX;

    t164 = (x1097|(x1098>>(x1099==x1100)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x1101 = -10942;
	uint32_t x1102 = 344U;
	static uint64_t x1103 = 1840333032214244098LLU;
	volatile uint16_t x1104 = 75U;
	uint32_t t165 = 209552378U;

    t165 = (x1101|(x1102>>(x1103==x1104)));

    if (t165 != 4294956378U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1106 = 1338896248447LL;
	int64_t x1107 = -1LL;
	volatile int32_t x1108 = -917006;
	volatile int64_t t166 = 28940LL;

    t166 = (x1105|(x1106>>(x1107==x1108)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1117 = -31595467074LL;
	volatile uint64_t x1118 = 463906436558637LLU;
	static volatile int16_t x1119 = INT16_MIN;
	int16_t x1120 = 1232;
	volatile uint64_t t167 = 7781246652716478LLU;

    t167 = (x1117|(x1118>>(x1119==x1120)));

    if (t167 != 18446744055034376127LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x1121 = INT32_MIN;
	int32_t x1122 = INT32_MAX;
	int32_t x1123 = INT32_MAX;
	static int64_t x1124 = -1LL;
	volatile int32_t t168 = -1;

    t168 = (x1121|(x1122>>(x1123==x1124)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1129 = INT32_MAX;
	uint16_t x1130 = UINT16_MAX;
	int64_t x1131 = -1LL;
	int64_t x1132 = -1LL;
	int32_t t169 = INT32_MAX;

    t169 = (x1129|(x1130>>(x1131==x1132)));

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x1137 = UINT16_MAX;
	int16_t x1138 = 0;
	int8_t x1140 = INT8_MIN;
	int32_t t170 = -5131;

    t170 = (x1137|(x1138>>(x1139==x1140)));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x1145 = -1;
	int32_t x1146 = INT32_MAX;
	static uint64_t x1147 = 31673LLU;
	static int16_t x1148 = 7;
	int32_t t171 = -1451;

    t171 = (x1145|(x1146>>(x1147==x1148)));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x1153 = INT64_MIN;
	uint8_t x1154 = UINT8_MAX;
	int16_t x1156 = INT16_MAX;

    t172 = (x1153|(x1154>>(x1155==x1156)));

    if (t172 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x1157 = INT8_MAX;
	uint64_t x1158 = 61344690161367LLU;
	int8_t x1159 = INT8_MAX;
	uint64_t t173 = 1791LLU;

    t173 = (x1157|(x1158>>(x1159==x1160)));

    if (t173 != 61344690161407LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x1165 = -1;
	int64_t x1167 = INT64_MAX;
	volatile int64_t x1168 = INT64_MIN;
	volatile int32_t t174 = -9040610;

    t174 = (x1165|(x1166>>(x1167==x1168)));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1169 = UINT16_MAX;
	int32_t x1172 = -1;
	volatile int32_t t175 = INT32_MAX;

    t175 = (x1169|(x1170>>(x1171==x1172)));

    if (t175 != INT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x1177 = -1;
	uint8_t x1178 = 0U;
	uint16_t x1179 = UINT16_MAX;
	uint16_t x1180 = UINT16_MAX;

    t176 = (x1177|(x1178>>(x1179==x1180)));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1181 = -3;
	uint16_t x1182 = 4U;
	uint32_t x1184 = 310539U;
	volatile int32_t t177 = 458282;

    t177 = (x1181|(x1182>>(x1183==x1184)));

    if (t177 != -3) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1189 = 17;
	volatile uint8_t x1190 = UINT8_MAX;
	int16_t x1191 = 1;
	uint16_t x1192 = 4040U;

    t178 = (x1189|(x1190>>(x1191==x1192)));

    if (t178 != 255) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1205 = 320U;
	volatile int16_t x1207 = -1;
	int8_t x1208 = INT8_MAX;
	int32_t t179 = INT32_MAX;

    t179 = (x1205|(x1206>>(x1207==x1208)));

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1213 = 1U;
	uint8_t x1214 = UINT8_MAX;
	int64_t x1215 = -2933577321797LL;
	static volatile uint16_t x1216 = UINT16_MAX;
	volatile int32_t t180 = 1;

    t180 = (x1213|(x1214>>(x1215==x1216)));

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1217 = -1;
	uint64_t x1218 = 6119574082453LLU;
	int32_t x1219 = -2083;
	int16_t x1220 = -1;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = (x1217|(x1218>>(x1219==x1220)));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1222 = 1U;
	volatile uint8_t x1223 = 0U;
	volatile int8_t x1224 = 13;
	volatile int32_t t182 = -26;

    t182 = (x1221|(x1222>>(x1223==x1224)));

    if (t182 != 41) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x1241 = INT16_MIN;
	volatile int8_t x1242 = 26;
	uint32_t x1243 = UINT32_MAX;
	static int64_t x1244 = INT64_MIN;
	volatile int32_t t183 = 30;

    t183 = (x1241|(x1242>>(x1243==x1244)));

    if (t183 != -32742) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1253 = INT32_MIN;
	uint32_t x1254 = UINT32_MAX;
	uint64_t x1255 = UINT64_MAX;
	int32_t x1256 = -46;
	volatile uint32_t t184 = UINT32_MAX;

    t184 = (x1253|(x1254>>(x1255==x1256)));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1262 = UINT64_MAX;
	int64_t x1264 = INT64_MIN;
	static uint64_t t185 = UINT64_MAX;

    t185 = (x1261|(x1262>>(x1263==x1264)));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1269 = INT64_MIN;
	int16_t x1271 = -27;
	volatile int32_t x1272 = -7;

    t186 = (x1269|(x1270>>(x1271==x1272)));

    if (t186 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1273 = 26U;
	uint16_t x1274 = 20669U;
	int16_t x1275 = INT16_MAX;
	int32_t t187 = 129;

    t187 = (x1273|(x1274>>(x1275==x1276)));

    if (t187 != 20671) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1297 = 3365806107020154LLU;
	static uint32_t x1298 = 85896U;
	int16_t x1299 = INT16_MIN;
	int64_t x1300 = INT64_MIN;
	volatile uint64_t t188 = 20LLU;

    t188 = (x1297|(x1298>>(x1299==x1300)));

    if (t188 != 3365806107086842LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x1301 = INT8_MIN;
	int8_t x1302 = INT8_MAX;
	int16_t x1303 = INT16_MIN;
	int32_t x1304 = INT32_MIN;
	static int32_t t189 = 82948530;

    t189 = (x1301|(x1302>>(x1303==x1304)));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1314 = 5041LLU;
	int16_t x1315 = INT16_MAX;
	static int64_t x1316 = 2350802643LL;
	volatile uint64_t t190 = 16953008554353176LLU;

    t190 = (x1313|(x1314>>(x1315==x1316)));

    if (t190 != 65535LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1317 = -1;
	int16_t x1318 = 86;
	volatile int64_t x1320 = INT64_MAX;
	int32_t t191 = -7;

    t191 = (x1317|(x1318>>(x1319==x1320)));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1324 = -1;

    t192 = (x1321|(x1322>>(x1323==x1324)));

    if (t192 != 45) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint8_t x1333 = UINT8_MAX;
	static uint32_t x1334 = 171156022U;
	static uint8_t x1335 = 30U;
	uint8_t x1336 = 1U;
	volatile uint32_t t193 = 1698199509U;

    t193 = (x1333|(x1334>>(x1335==x1336)));

    if (t193 != 171156223U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1353 = UINT64_MAX;
	static int32_t x1354 = INT32_MAX;
	volatile uint64_t t194 = UINT64_MAX;

    t194 = (x1353|(x1354>>(x1355==x1356)));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1357 = 101403LLU;
	uint8_t x1358 = UINT8_MAX;
	int16_t x1359 = 12;

    t195 = (x1357|(x1358>>(x1359==x1360)));

    if (t195 != 101631LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x1361 = 6U;
	uint32_t x1362 = UINT32_MAX;
	int16_t x1363 = INT16_MIN;
	int8_t x1364 = 21;
	volatile uint32_t t196 = UINT32_MAX;

    t196 = (x1361|(x1362>>(x1363==x1364)));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1365 = 375U;
	uint8_t x1366 = UINT8_MAX;
	static volatile int8_t x1367 = 0;
	uint16_t x1368 = 18889U;
	static volatile int32_t t197 = -55923223;

    t197 = (x1365|(x1366>>(x1367==x1368)));

    if (t197 != 511) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1369 = INT8_MIN;
	int16_t x1370 = INT16_MAX;
	int64_t x1371 = INT64_MAX;
	int32_t t198 = -256032;

    t198 = (x1369|(x1370>>(x1371==x1372)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x1373 = INT64_MIN;
	uint64_t x1374 = 170261418795LLU;
	int16_t x1375 = 1;
	int32_t x1376 = -1;
	uint64_t t199 = 15412568LLU;

    t199 = (x1373|(x1374>>(x1375==x1376)));

    if (t199 != 9223372207116194603LLU) { NG(); } else { ; }
	
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

