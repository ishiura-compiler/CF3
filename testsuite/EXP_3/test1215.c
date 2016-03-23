
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

int16_t x8 = INT16_MIN;
static int8_t x10 = -1;
int32_t x24 = INT32_MIN;
uint64_t t2 = 16903617LLU;
volatile uint64_t t3 = 419827LLU;
static uint8_t x41 = UINT8_MAX;
static int16_t x69 = INT16_MIN;
static volatile int8_t x100 = 19;
int8_t x114 = 0;
static int16_t x115 = INT16_MIN;
static volatile int32_t t13 = -41;
volatile int64_t x126 = INT64_MAX;
uint64_t t15 = 7630990144202989LLU;
int32_t x133 = INT32_MIN;
int64_t x136 = -1LL;
volatile int64_t t16 = 64788LL;
volatile int32_t x146 = 3316988;
uint32_t t18 = 4U;
volatile int16_t x164 = -1;
volatile uint32_t x234 = UINT32_MAX;
int64_t x235 = INT64_MIN;
static int64_t x236 = -1LL;
static volatile uint32_t x237 = UINT32_MAX;
static int64_t x239 = INT64_MIN;
volatile int8_t x255 = INT8_MAX;
static int64_t x257 = -1LL;
volatile uint8_t x259 = 23U;
int32_t x260 = INT32_MAX;
uint8_t x262 = UINT8_MAX;
volatile int32_t t33 = 25756500;
uint64_t x282 = 156738734LLU;
int64_t x287 = INT64_MAX;
uint64_t x292 = UINT64_MAX;
int64_t x296 = INT64_MIN;
volatile int16_t x299 = INT16_MIN;
volatile int8_t x312 = -1;
volatile uint32_t x322 = UINT32_MAX;
uint32_t t41 = 3U;
int64_t x328 = INT64_MIN;
int8_t x335 = INT8_MIN;
int16_t x349 = 1;
int32_t x371 = INT32_MIN;
volatile int16_t x377 = -235;
int32_t x391 = INT32_MIN;
static int32_t x392 = INT32_MIN;
int16_t x394 = 1002;
uint32_t x395 = UINT32_MAX;
uint32_t t53 = 9630U;
uint16_t x413 = 25U;
int32_t x414 = 404420;
int64_t x423 = INT64_MAX;
uint64_t x446 = 12434333933465LLU;
uint64_t t58 = 103300126LLU;
int32_t x450 = 14655;
uint64_t x452 = UINT64_MAX;
int64_t x460 = INT64_MAX;
uint32_t t61 = 524505U;
static volatile int64_t x471 = 76LL;
static int8_t x474 = -1;
int64_t x487 = -1LL;
uint32_t x488 = UINT32_MAX;
static int8_t x491 = INT8_MIN;
static volatile uint32_t t69 = 51354U;
int16_t x531 = INT16_MAX;
int16_t x549 = INT16_MAX;
volatile uint32_t t73 = 31284958U;
int8_t x570 = -5;
int8_t x572 = 1;
int64_t x576 = -1LL;
static uint32_t x582 = 8160U;
int8_t x590 = -1;
uint32_t t78 = 13630003U;
uint64_t x597 = 114552451706832LLU;
int64_t x612 = -1LL;
volatile int32_t t81 = 347053;
volatile uint32_t x621 = 815702U;
int8_t x633 = 8;
volatile int64_t x639 = INT64_MIN;
int32_t t87 = 1311;
static uint32_t x647 = UINT32_MAX;
volatile uint64_t t88 = 70LLU;
int64_t x660 = INT64_MIN;
volatile uint64_t t90 = 520147235487LLU;
volatile uint64_t x665 = 480174156LLU;
int32_t x666 = INT32_MIN;
volatile uint64_t t91 = 33196479750924316LLU;
int64_t x695 = 2027466101266768LL;
uint32_t x697 = UINT32_MAX;
volatile uint32_t t95 = 9063U;
uint16_t x709 = 3794U;
uint8_t x710 = UINT8_MAX;
int32_t x711 = INT32_MIN;
int32_t t96 = 121;
volatile int64_t t97 = -1103255870710053LL;
volatile int16_t x745 = INT16_MAX;
int8_t x757 = 18;
static volatile int32_t x758 = 5;
int32_t x759 = -1;
int32_t x775 = INT32_MIN;
volatile int8_t x779 = -1;
volatile uint64_t t102 = 8LLU;
int8_t x783 = INT8_MIN;
static int32_t x784 = INT32_MIN;
int32_t x785 = -1;
volatile int64_t t104 = 445388819181801LL;
volatile uint32_t t105 = 65902U;
int64_t x800 = 5022611LL;
uint16_t x808 = UINT16_MAX;
volatile int64_t x810 = -1LL;
int16_t x818 = -97;
int32_t x820 = -72;
int64_t x821 = -1LL;
static int64_t t110 = 0LL;
uint64_t x833 = 2964413939LLU;
uint64_t t111 = 8250156150467631283LLU;
int8_t x842 = INT8_MAX;
int32_t x856 = INT32_MIN;
volatile int8_t x861 = -61;
int8_t x862 = -46;
int32_t x864 = -25210355;
static int64_t x867 = INT64_MAX;
int16_t x868 = -1;
int32_t t117 = 2209;
static volatile uint16_t x877 = 14263U;
int8_t x886 = 1;
volatile uint32_t t121 = 1656U;
int16_t x906 = -240;
uint64_t x917 = 42865775352796LLU;
int16_t x918 = 1;
uint64_t t123 = 7371638104LLU;
uint64_t x928 = UINT64_MAX;
int32_t x940 = -1;
volatile uint64_t t125 = 6054368935940199150LLU;
uint8_t x956 = 23U;
static uint32_t x962 = 602482U;
static int32_t x970 = -81194;
int32_t x971 = INT32_MIN;
int16_t x972 = 1;
volatile uint32_t x975 = 3045U;
int8_t x984 = -1;
volatile uint32_t t131 = 12U;
int32_t x986 = -45880274;
static volatile int32_t t133 = 41;
int16_t x1018 = -3;
volatile uint16_t x1023 = UINT16_MAX;
static int8_t x1025 = -13;
int16_t x1034 = INT16_MIN;
static volatile int64_t x1037 = -1LL;
static int16_t x1042 = -1;
uint8_t x1045 = 1U;
static uint8_t x1065 = UINT8_MAX;
uint16_t x1068 = 32U;
uint32_t x1074 = UINT32_MAX;
volatile int32_t t146 = 75;
uint16_t x1109 = 0U;
int32_t x1110 = 9167830;
uint64_t t150 = 1082955LLU;
uint64_t x1117 = 58242963LLU;
uint64_t t151 = 9LLU;
static int8_t x1130 = -1;
static int8_t x1141 = -1;
volatile uint32_t x1143 = 11U;
uint16_t x1152 = UINT16_MAX;
uint64_t x1162 = 1452864LLU;
static uint64_t t157 = 2626709030054LLU;
int16_t x1167 = 1272;
static int64_t x1170 = INT64_MIN;
uint16_t x1172 = 155U;
int8_t x1173 = -1;
uint32_t t161 = 11U;
uint8_t x1191 = 16U;
int8_t x1194 = -1;
volatile int32_t x1195 = INT32_MAX;
volatile int32_t t163 = 3;
int64_t x1197 = -1LL;
int32_t t166 = -36;
int32_t x1209 = 2060;
uint8_t x1217 = UINT8_MAX;
uint16_t x1220 = 12U;
volatile uint32_t t169 = 36U;
int8_t x1221 = -1;
uint16_t x1226 = 1U;
uint16_t x1227 = 720U;
volatile uint32_t x1253 = 0U;
uint32_t t172 = 396U;
static uint64_t x1258 = 130628145876LLU;
static volatile uint64_t t173 = 7079485075156623804LLU;
int16_t x1261 = -21;
uint32_t x1262 = 1199U;
uint64_t x1269 = UINT64_MAX;
int16_t x1271 = -1;
uint64_t t176 = 504057416LLU;
uint64_t t177 = 564047LLU;
int64_t x1314 = 27LL;
uint8_t x1321 = 48U;
uint32_t t180 = 436476094U;
volatile uint8_t x1355 = 0U;
static int64_t x1369 = -1LL;
int16_t x1381 = INT16_MAX;
volatile uint16_t x1382 = 0U;
static int32_t x1386 = -233719452;
uint8_t x1396 = UINT8_MAX;
uint64_t x1401 = UINT64_MAX;
static int16_t x1411 = INT16_MIN;
uint8_t x1430 = 14U;
uint32_t x1437 = 174661940U;
uint8_t x1439 = 1U;
uint32_t t193 = 125412U;
volatile uint64_t t195 = 7131391LLU;
volatile uint32_t t197 = 1U;
int8_t x1475 = INT8_MAX;
int64_t t199 = 160539909LL;


void f0(void) {
    	uint8_t x5 = 1U;
	static uint8_t x6 = 55U;
	volatile uint64_t x7 = UINT64_MAX;
	volatile int32_t t0 = 1;

    t0 = ((x5*x6)>>(x7!=x8));

    if (t0 != 27) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 487U;
	uint8_t x11 = UINT8_MAX;
	int64_t x12 = 3679852LL;
	uint32_t t1 = 49586U;

    t1 = ((x9*x10)>>(x11!=x12));

    if (t1 != 2147483404U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x21 = UINT64_MAX;
	int8_t x22 = -16;
	uint16_t x23 = 7U;

    t2 = ((x21*x22)>>(x23!=x24));

    if (t2 != 8LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x29 = UINT64_MAX;
	int8_t x30 = 21;
	uint64_t x31 = 2444610176604991LLU;
	static uint64_t x32 = UINT64_MAX;

    t3 = ((x29*x30)>>(x31!=x32));

    if (t3 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x42 = 58413U;
	static uint32_t x43 = UINT32_MAX;
	uint16_t x44 = 1U;
	volatile uint32_t t4 = 999130215U;

    t4 = ((x41*x42)>>(x43!=x44));

    if (t4 != 7447657U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x45 = INT64_MAX;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = INT64_MIN;
	volatile int8_t x48 = -1;
	uint64_t t5 = 344748213591513680LLU;

    t5 = ((x45*x46)>>(x47!=x48));

    if (t5 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x61 = -1;
	int32_t x62 = -1;
	int64_t x63 = INT64_MAX;
	static volatile int64_t x64 = INT64_MIN;
	int32_t t6 = -3525;

    t6 = ((x61*x62)>>(x63!=x64));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x65 = -2;
	volatile int8_t x66 = -3;
	int64_t x67 = -1LL;
	static int64_t x68 = INT64_MIN;
	static int32_t t7 = -6561002;

    t7 = ((x65*x66)>>(x67!=x68));

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x70 = UINT64_MAX;
	volatile int16_t x71 = -25;
	uint8_t x72 = UINT8_MAX;
	volatile uint64_t t8 = 52021774LLU;

    t8 = ((x69*x70)>>(x71!=x72));

    if (t8 != 16384LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x73 = 23U;
	uint64_t x74 = 4035893LLU;
	int16_t x75 = 115;
	static volatile int8_t x76 = INT8_MIN;
	volatile uint64_t t9 = 1150566784229935LLU;

    t9 = ((x73*x74)>>(x75!=x76));

    if (t9 != 46412769LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x89 = 30;
	int8_t x90 = 0;
	int32_t x91 = INT32_MIN;
	static int8_t x92 = 1;
	int32_t t10 = 70;

    t10 = ((x89*x90)>>(x91!=x92));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x97 = 3219814847881068LLU;
	int16_t x98 = INT16_MIN;
	volatile int64_t x99 = INT64_MIN;
	uint64_t t11 = 4LLU;

    t11 = ((x97*x98)>>(x99!=x100));

    if (t11 != 2586785753445236736LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x101 = 13467;
	uint64_t x102 = UINT64_MAX;
	uint16_t x103 = 465U;
	uint32_t x104 = 45951U;
	volatile uint64_t t12 = 12918487038LLU;

    t12 = ((x101*x102)>>(x103!=x104));

    if (t12 != 9223372036854769074LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x113 = 25797U;
	int8_t x116 = -1;

    t13 = ((x113*x114)>>(x115!=x116));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x117 = 26634012;
	uint64_t x118 = 1LLU;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = -180590646050038335LL;
	uint64_t t14 = 1LLU;

    t14 = ((x117*x118)>>(x119!=x120));

    if (t14 != 13317006LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x125 = 219005730182090777LLU;
	static volatile int64_t x127 = -204330114LL;
	uint64_t x128 = 5919LLU;

    t15 = ((x125*x126)>>(x127!=x128));

    if (t15 != 4502183153336342515LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x134 = -26885LL;
	int8_t x135 = INT8_MAX;

    t16 = ((x133*x134)>>(x135!=x136));

    if (t16 != 28867548938240LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x137 = UINT32_MAX;
	int8_t x138 = 18;
	uint16_t x139 = 2U;
	int16_t x140 = INT16_MAX;
	static volatile uint32_t t17 = 18632485U;

    t17 = ((x137*x138)>>(x139!=x140));

    if (t17 != 2147483639U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x145 = 177865894U;
	uint64_t x147 = 1284250LLU;
	static int32_t x148 = -1;

    t18 = ((x145*x146)>>(x147!=x148));

    if (t18 != 426696116U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x161 = INT8_MIN;
	volatile int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MAX;
	static volatile int32_t t19 = 5;

    t19 = ((x161*x162)>>(x163!=x164));

    if (t19 != 8192) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x181 = -1;
	int64_t x182 = -39791851928040904LL;
	volatile int16_t x183 = 24;
	static int16_t x184 = 0;
	volatile int64_t t20 = 2865123659219761780LL;

    t20 = ((x181*x182)>>(x183!=x184));

    if (t20 != 19895925964020452LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x197 = 3;
	uint16_t x198 = 9U;
	volatile int8_t x199 = INT8_MIN;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t21 = 63769510;

    t21 = ((x197*x198)>>(x199!=x200));

    if (t21 != 13) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x209 = INT32_MAX;
	static int16_t x210 = 1;
	volatile int8_t x211 = 1;
	uint8_t x212 = UINT8_MAX;
	int32_t t22 = -3360;

    t22 = ((x209*x210)>>(x211!=x212));

    if (t22 != 1073741823) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x213 = 850LLU;
	int8_t x214 = INT8_MAX;
	static int16_t x215 = INT16_MIN;
	volatile int8_t x216 = 0;
	volatile uint64_t t23 = 525119666424190LLU;

    t23 = ((x213*x214)>>(x215!=x216));

    if (t23 != 53975LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x221 = -1;
	volatile int8_t x222 = INT8_MIN;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = 9416;
	volatile int32_t t24 = 726;

    t24 = ((x221*x222)>>(x223!=x224));

    if (t24 != 64) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x225 = INT32_MIN;
	int64_t x226 = -30LL;
	static uint16_t x227 = 6419U;
	static int16_t x228 = -3;
	int64_t t25 = 77961820998578652LL;

    t25 = ((x225*x226)>>(x227!=x228));

    if (t25 != 32212254720LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x229 = 752101;
	static int16_t x230 = 694;
	int8_t x231 = -8;
	static int16_t x232 = INT16_MIN;
	volatile int32_t t26 = 171555129;

    t26 = ((x229*x230)>>(x231!=x232));

    if (t26 != 260979047) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x233 = 12;
	volatile uint32_t t27 = 125U;

    t27 = ((x233*x234)>>(x235!=x236));

    if (t27 != 2147483642U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x238 = INT32_MAX;
	static int32_t x240 = 1;
	static volatile uint32_t t28 = 7796U;

    t28 = ((x237*x238)>>(x239!=x240));

    if (t28 != 1073741824U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x241 = 3;
	uint8_t x242 = 13U;
	int64_t x243 = -115386891135597048LL;
	int8_t x244 = INT8_MIN;
	volatile int32_t t29 = 21063;

    t29 = ((x241*x242)>>(x243!=x244));

    if (t29 != 19) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	int8_t x256 = INT8_MIN;
	volatile uint64_t t30 = 200370477111331LLU;

    t30 = ((x253*x254)>>(x255!=x256));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x258 = INT16_MIN;
	volatile int64_t t31 = 0LL;

    t31 = ((x257*x258)>>(x259!=x260));

    if (t31 != 16384LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x261 = UINT16_MAX;
	volatile int8_t x263 = INT8_MAX;
	int8_t x264 = 15;
	volatile int32_t t32 = -4522803;

    t32 = ((x261*x262)>>(x263!=x264));

    if (t32 != 8355712) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x273 = INT8_MIN;
	int32_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	volatile uint8_t x276 = 4U;

    t33 = ((x273*x274)>>(x275!=x276));

    if (t33 != 64) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x277 = UINT16_MAX;
	static int8_t x278 = INT8_MAX;
	uint32_t x279 = UINT32_MAX;
	volatile int8_t x280 = INT8_MIN;
	static volatile int32_t t34 = 355;

    t34 = ((x277*x278)>>(x279!=x280));

    if (t34 != 4161472) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x281 = 4007086701493562LL;
	static int8_t x283 = 1;
	static int64_t x284 = INT64_MIN;
	static volatile uint64_t t35 = 435LLU;

    t35 = ((x281*x282)>>(x283!=x284));

    if (t35 != 4700571373856580278LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x285 = INT8_MIN;
	static uint64_t x286 = 1730354LLU;
	int8_t x288 = 13;
	static uint64_t t36 = 551192LLU;

    t36 = ((x285*x286)>>(x287!=x288));

    if (t36 != 9223372036744033152LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x289 = INT16_MAX;
	uint8_t x290 = 8U;
	uint32_t x291 = UINT32_MAX;
	static int32_t t37 = 31;

    t37 = ((x289*x290)>>(x291!=x292));

    if (t37 != 131068) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x293 = -55422;
	int16_t x294 = -34;
	int16_t x295 = 8;
	int32_t t38 = -232;

    t38 = ((x293*x294)>>(x295!=x296));

    if (t38 != 942174) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x297 = -1;
	int16_t x298 = -61;
	volatile int32_t x300 = 2;
	static volatile int32_t t39 = -6;

    t39 = ((x297*x298)>>(x299!=x300));

    if (t39 != 30) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x309 = UINT32_MAX;
	uint16_t x310 = 1U;
	volatile int16_t x311 = INT16_MAX;
	uint32_t t40 = 1730296U;

    t40 = ((x309*x310)>>(x311!=x312));

    if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x321 = INT8_MIN;
	int32_t x323 = INT32_MAX;
	volatile uint8_t x324 = UINT8_MAX;

    t41 = ((x321*x322)>>(x323!=x324));

    if (t41 != 64U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x325 = INT16_MIN;
	volatile int8_t x326 = INT8_MIN;
	int8_t x327 = 29;
	volatile int32_t t42 = 1484;

    t42 = ((x325*x326)>>(x327!=x328));

    if (t42 != 2097152) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x334 = -77;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t43 = -1369653;

    t43 = ((x333*x334)>>(x335!=x336));

    if (t43 != 2523136) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x341 = 1;
	uint8_t x342 = 15U;
	static int32_t x343 = INT32_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	int32_t t44 = -19078817;

    t44 = ((x341*x342)>>(x343!=x344));

    if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x350 = 19U;
	int64_t x351 = INT64_MAX;
	uint64_t x352 = 4285657369700LLU;
	static int32_t t45 = 30863308;

    t45 = ((x349*x350)>>(x351!=x352));

    if (t45 != 9) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x353 = 5460U;
	uint8_t x354 = 30U;
	int8_t x355 = 16;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t46 = 72311;

    t46 = ((x353*x354)>>(x355!=x356));

    if (t46 != 81900) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x365 = 1216763290U;
	int64_t x366 = 4125058LL;
	int32_t x367 = INT32_MAX;
	uint32_t x368 = 1807370668U;
	int64_t t47 = 5LL;

    t47 = ((x365*x366)>>(x367!=x368));

    if (t47 != 2509609571760410LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x369 = UINT64_MAX;
	int64_t x370 = 407477LL;
	uint16_t x372 = 46U;
	volatile uint64_t t48 = 2883803LLU;

    t48 = ((x369*x370)>>(x371!=x372));

    if (t48 != 9223372036854572069LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x373 = -3;
	int32_t x374 = -35;
	uint64_t x375 = 12800LLU;
	uint8_t x376 = 0U;
	volatile int32_t t49 = 1852795;

    t49 = ((x373*x374)>>(x375!=x376));

    if (t49 != 52) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x378 = INT16_MIN;
	volatile int16_t x379 = -354;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t50 = -14;

    t50 = ((x377*x378)>>(x379!=x380));

    if (t50 != 3850240) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x385 = -1;
	uint32_t x386 = 102450852U;
	volatile uint16_t x387 = 0U;
	int8_t x388 = -45;
	volatile uint32_t t51 = 27127U;

    t51 = ((x385*x386)>>(x387!=x388));

    if (t51 != 2096258222U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MAX;
	uint64_t t52 = 16720174606552773LLU;

    t52 = ((x389*x390)>>(x391!=x392));

    if (t52 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x393 = 299U;
	int32_t x396 = INT32_MAX;

    t53 = ((x393*x394)>>(x395!=x396));

    if (t53 != 149799U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x397 = INT64_MIN;
	volatile uint64_t x398 = 4705721982434502LLU;
	int64_t x399 = -1LL;
	static int32_t x400 = INT32_MIN;
	volatile uint64_t t54 = 33000007068LLU;

    t54 = ((x397*x398)>>(x399!=x400));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x401 = INT32_MAX;
	volatile uint64_t x402 = UINT64_MAX;
	uint32_t x403 = 13U;
	int32_t x404 = -1;
	static uint64_t t55 = 6396611161745564LLU;

    t55 = ((x401*x402)>>(x403!=x404));

    if (t55 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x415 = 3U;
	uint8_t x416 = 116U;
	static volatile int32_t t56 = -103;

    t56 = ((x413*x414)>>(x415!=x416));

    if (t56 != 5055250) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x421 = UINT64_MAX;
	uint32_t x422 = 26780U;
	volatile int8_t x424 = -1;
	volatile uint64_t t57 = 74LLU;

    t57 = ((x421*x422)>>(x423!=x424));

    if (t57 != 9223372036854762418LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x445 = -2987;
	int64_t x447 = INT64_MIN;
	volatile int8_t x448 = INT8_MIN;

    t58 = ((x445*x446)>>(x447!=x448));

    if (t58 != 9204801359125145830LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x449 = 1;
	static uint8_t x451 = UINT8_MAX;
	volatile int32_t t59 = 348954;

    t59 = ((x449*x450)>>(x451!=x452));

    if (t59 != 7327) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x453 = 0;
	int64_t x454 = INT64_MAX;
	int16_t x455 = -5530;
	uint32_t x456 = 473U;
	volatile int64_t t60 = 3537157392018040LL;

    t60 = ((x453*x454)>>(x455!=x456));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x457 = 480U;
	static uint32_t x458 = 348U;
	uint8_t x459 = 26U;

    t61 = ((x457*x458)>>(x459!=x460));

    if (t61 != 83520U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x465 = -1LL;
	int8_t x466 = INT8_MIN;
	int8_t x467 = INT8_MIN;
	static uint64_t x468 = UINT64_MAX;
	volatile int64_t t62 = -346224242502563719LL;

    t62 = ((x465*x466)>>(x467!=x468));

    if (t62 != 64LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x469 = UINT16_MAX;
	uint64_t x470 = UINT64_MAX;
	int16_t x472 = 3;
	uint64_t t63 = 1096452640410338943LLU;

    t63 = ((x469*x470)>>(x471!=x472));

    if (t63 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x473 = -1LL;
	int16_t x475 = 1;
	uint8_t x476 = 7U;
	static volatile int64_t t64 = -15245660881297835LL;

    t64 = ((x473*x474)>>(x475!=x476));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x481 = 2;
	volatile int8_t x482 = INT8_MAX;
	int16_t x483 = -1;
	int32_t x484 = INT32_MAX;
	static volatile int32_t t65 = -279464064;

    t65 = ((x481*x482)>>(x483!=x484));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x485 = UINT8_MAX;
	int8_t x486 = 1;
	volatile int32_t t66 = -147857;

    t66 = ((x485*x486)>>(x487!=x488));

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x489 = INT16_MIN;
	int8_t x490 = INT8_MIN;
	int16_t x492 = INT16_MIN;
	int32_t t67 = -206112;

    t67 = ((x489*x490)>>(x491!=x492));

    if (t67 != 2097152) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x497 = UINT64_MAX;
	int16_t x498 = 1;
	volatile uint8_t x499 = 105U;
	uint64_t x500 = UINT64_MAX;
	volatile uint64_t t68 = 558LLU;

    t68 = ((x497*x498)>>(x499!=x500));

    if (t68 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x525 = 35175854U;
	int32_t x526 = INT32_MAX;
	uint32_t x527 = 85231684U;
	int32_t x528 = INT32_MIN;

    t69 = ((x525*x526)>>(x527!=x528));

    if (t69 != 2129895721U) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x529 = INT8_MIN;
	int32_t x530 = -12;
	static int16_t x532 = -1;
	int32_t t70 = -55;

    t70 = ((x529*x530)>>(x531!=x532));

    if (t70 != 768) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x541 = INT16_MIN;
	uint16_t x542 = 0U;
	volatile int32_t x543 = 651;
	int32_t x544 = -253030;
	int32_t t71 = 73669467;

    t71 = ((x541*x542)>>(x543!=x544));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x550 = 3LL;
	int32_t x551 = INT32_MIN;
	static volatile int64_t x552 = INT64_MAX;
	volatile int64_t t72 = -223LL;

    t72 = ((x549*x550)>>(x551!=x552));

    if (t72 != 49150LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x553 = INT32_MIN;
	static uint32_t x554 = 0U;
	int16_t x555 = 1;
	int64_t x556 = INT64_MIN;

    t73 = ((x553*x554)>>(x555!=x556));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x565 = 14604896LLU;
	uint64_t x566 = 429400843LLU;
	int64_t x567 = INT64_MAX;
	uint64_t x568 = 11LLU;
	volatile uint64_t t74 = 89LLU;

    t74 = ((x565*x566)>>(x567!=x568));

    if (t74 != 3135677327163664LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x569 = UINT64_MAX;
	int16_t x571 = INT16_MAX;
	uint64_t t75 = 3825406041LLU;

    t75 = ((x569*x570)>>(x571!=x572));

    if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x573 = INT8_MIN;
	uint64_t x574 = 7780LLU;
	int64_t x575 = INT64_MIN;
	volatile uint64_t t76 = 12745080978921199LLU;

    t76 = ((x573*x574)>>(x575!=x576));

    if (t76 != 9223372036854277888LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x581 = -145261;
	static uint16_t x583 = 7623U;
	static int16_t x584 = INT16_MIN;
	volatile uint32_t t77 = 9909U;

    t77 = ((x581*x582)>>(x583!=x584));

    if (t77 != 1554818768U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x589 = 726943U;
	int64_t x591 = INT64_MAX;
	int16_t x592 = INT16_MIN;

    t78 = ((x589*x590)>>(x591!=x592));

    if (t78 != 2147120176U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x593 = INT64_MIN;
	static volatile uint64_t x594 = 241027LLU;
	static int64_t x595 = INT64_MAX;
	uint32_t x596 = 429U;
	uint64_t t79 = 52094061LLU;

    t79 = ((x593*x594)>>(x595!=x596));

    if (t79 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x598 = 16125U;
	volatile uint32_t x599 = UINT32_MAX;
	int16_t x600 = -162;
	volatile uint64_t t80 = 5LLU;

    t80 = ((x597*x598)>>(x599!=x600));

    if (t80 != 923579141886333000LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x609 = -1;
	int32_t x610 = 0;
	int16_t x611 = INT16_MIN;

    t81 = ((x609*x610)>>(x611!=x612));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x613 = INT16_MAX;
	int16_t x614 = 1;
	uint16_t x615 = 26U;
	static int16_t x616 = -9605;
	volatile int32_t t82 = 138;

    t82 = ((x613*x614)>>(x615!=x616));

    if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x617 = INT8_MIN;
	volatile int16_t x618 = -18;
	static int16_t x619 = INT16_MIN;
	int8_t x620 = INT8_MAX;
	volatile int32_t t83 = 57656;

    t83 = ((x617*x618)>>(x619!=x620));

    if (t83 != 1152) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x622 = UINT64_MAX;
	int16_t x623 = INT16_MAX;
	volatile uint16_t x624 = 11U;
	uint64_t t84 = 1612LLU;

    t84 = ((x621*x622)>>(x623!=x624));

    if (t84 != 9223372036854367957LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x625 = -8;
	static int16_t x626 = -1;
	int64_t x627 = INT64_MIN;
	int16_t x628 = -206;
	int32_t t85 = -64;

    t85 = ((x625*x626)>>(x627!=x628));

    if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x634 = 61U;
	static int8_t x635 = -40;
	static volatile int8_t x636 = INT8_MAX;
	static volatile int32_t t86 = -8;

    t86 = ((x633*x634)>>(x635!=x636));

    if (t86 != 244) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x637 = 8U;
	int32_t x638 = 0;
	static int64_t x640 = -1LL;

    t87 = ((x637*x638)>>(x639!=x640));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x645 = 66060047LLU;
	static int32_t x646 = INT32_MAX;
	int8_t x648 = 1;

    t88 = ((x645*x646)>>(x647!=x648));

    if (t88 != 70931435326275704LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x653 = INT8_MAX;
	static volatile int16_t x654 = INT16_MAX;
	uint32_t x655 = 13400U;
	volatile uint16_t x656 = 4U;
	int32_t t89 = 46709397;

    t89 = ((x653*x654)>>(x655!=x656));

    if (t89 != 2080704) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x657 = -1;
	uint64_t x658 = 2838709LLU;
	static int16_t x659 = INT16_MAX;

    t90 = ((x657*x658)>>(x659!=x660));

    if (t90 != 9223372036853356453LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x667 = UINT8_MAX;
	static int64_t x668 = -1039300944308228320LL;

    t91 = ((x665*x666)>>(x667!=x668));

    if (t91 != 8707788962753675264LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x685 = 6;
	uint64_t x686 = UINT64_MAX;
	int64_t x687 = INT64_MIN;
	uint32_t x688 = 2684154U;
	volatile uint64_t t92 = 9312LLU;

    t92 = ((x685*x686)>>(x687!=x688));

    if (t92 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x689 = 13U;
	static uint64_t x690 = UINT64_MAX;
	int64_t x691 = -548036556420LL;
	int32_t x692 = INT32_MIN;
	uint64_t t93 = 300146236LLU;

    t93 = ((x689*x690)>>(x691!=x692));

    if (t93 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x693 = 15847744U;
	volatile uint32_t x694 = UINT32_MAX;
	int8_t x696 = -1;
	uint32_t t94 = 247U;

    t94 = ((x693*x694)>>(x695!=x696));

    if (t94 != 2139559776U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x698 = -1;
	int8_t x699 = 5;
	int32_t x700 = INT32_MAX;

    t95 = ((x697*x698)>>(x699!=x700));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x712 = -1LL;

    t96 = ((x709*x710)>>(x711!=x712));

    if (t96 != 483735) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x721 = -3269LL;
	int32_t x722 = -15351;
	volatile int32_t x723 = -1;
	int16_t x724 = INT16_MIN;

    t97 = ((x721*x722)>>(x723!=x724));

    if (t97 != 25091209LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x733 = -4;
	static int8_t x734 = INT8_MIN;
	uint8_t x735 = 42U;
	int64_t x736 = -1LL;
	int32_t t98 = 25765;

    t98 = ((x733*x734)>>(x735!=x736));

    if (t98 != 256) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x746 = 126;
	int8_t x747 = INT8_MIN;
	int64_t x748 = -1LL;
	volatile int32_t t99 = -632;

    t99 = ((x745*x746)>>(x747!=x748));

    if (t99 != 2064321) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x760 = 590U;
	static int32_t t100 = 311501807;

    t100 = ((x757*x758)>>(x759!=x760));

    if (t100 != 45) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x773 = INT32_MIN;
	static uint32_t x774 = 22U;
	uint64_t x776 = UINT64_MAX;
	uint32_t t101 = 9206377U;

    t101 = ((x773*x774)>>(x775!=x776));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x777 = INT64_MAX;
	uint64_t x778 = 25560253239270499LLU;
	static int8_t x780 = INT8_MAX;

    t102 = ((x777*x778)>>(x779!=x780));

    if (t102 != 4598905891807752654LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x781 = INT8_MIN;
	int16_t x782 = INT16_MIN;
	volatile int32_t t103 = -5695932;

    t103 = ((x781*x782)>>(x783!=x784));

    if (t103 != 2097152) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x786 = -1LL;
	uint8_t x787 = 2U;
	int64_t x788 = INT64_MIN;

    t104 = ((x785*x786)>>(x787!=x788));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x793 = UINT32_MAX;
	volatile uint16_t x794 = 30U;
	volatile int32_t x795 = 0;
	int8_t x796 = INT8_MAX;

    t105 = ((x793*x794)>>(x795!=x796));

    if (t105 != 2147483633U) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x797 = 14U;
	uint64_t x798 = 198LLU;
	uint64_t x799 = 2311193224623LLU;
	uint64_t t106 = 1542129582LLU;

    t106 = ((x797*x798)>>(x799!=x800));

    if (t106 != 1386LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x805 = 6534;
	int16_t x806 = 0;
	int16_t x807 = INT16_MIN;
	volatile int32_t t107 = -815428186;

    t107 = ((x805*x806)>>(x807!=x808));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x809 = INT8_MIN;
	int16_t x811 = 22;
	static uint8_t x812 = UINT8_MAX;
	int64_t t108 = -7155842LL;

    t108 = ((x809*x810)>>(x811!=x812));

    if (t108 != 64LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x817 = -13875;
	uint64_t x819 = UINT64_MAX;
	int32_t t109 = 504086940;

    t109 = ((x817*x818)>>(x819!=x820));

    if (t109 != 672937) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x822 = -1;
	int32_t x823 = INT32_MIN;
	volatile uint16_t x824 = 1876U;

    t110 = ((x821*x822)>>(x823!=x824));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x834 = INT8_MIN;
	volatile int16_t x835 = -2913;
	uint64_t x836 = 0LLU;

    t111 = ((x833*x834)>>(x835!=x836));

    if (t111 != 9223371847132283712LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x841 = UINT32_MAX;
	int8_t x843 = -1;
	int32_t x844 = -1;
	volatile uint32_t t112 = 6U;

    t112 = ((x841*x842)>>(x843!=x844));

    if (t112 != 4294967169U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x845 = UINT64_MAX;
	volatile uint32_t x846 = 280969U;
	int32_t x847 = -9789;
	volatile int8_t x848 = -1;
	static uint64_t t113 = 81LLU;

    t113 = ((x845*x846)>>(x847!=x848));

    if (t113 != 9223372036854635323LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x849 = 24;
	static int16_t x850 = 259;
	int64_t x851 = 576368908293LL;
	int16_t x852 = INT16_MAX;
	int32_t t114 = 87;

    t114 = ((x849*x850)>>(x851!=x852));

    if (t114 != 3108) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x853 = 1LLU;
	int32_t x854 = INT32_MIN;
	int16_t x855 = INT16_MAX;
	static uint64_t t115 = 244LLU;

    t115 = ((x853*x854)>>(x855!=x856));

    if (t115 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x863 = -7362171LL;
	int32_t t116 = 299;

    t116 = ((x861*x862)>>(x863!=x864));

    if (t116 != 1403) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x865 = UINT8_MAX;
	uint8_t x866 = 15U;

    t117 = ((x865*x866)>>(x867!=x868));

    if (t117 != 1912) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x869 = UINT32_MAX;
	volatile uint32_t x870 = 76919U;
	volatile int32_t x871 = -18411963;
	int32_t x872 = -290;
	uint32_t t118 = 7963161U;

    t118 = ((x869*x870)>>(x871!=x872));

    if (t118 != 2147445188U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x873 = 219U;
	static int8_t x874 = 1;
	uint64_t x875 = UINT64_MAX;
	int16_t x876 = INT16_MIN;
	static volatile int32_t t119 = -13;

    t119 = ((x873*x874)>>(x875!=x876));

    if (t119 != 109) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x878 = 26U;
	int64_t x879 = INT64_MAX;
	static int8_t x880 = -1;
	static int32_t t120 = -136303;

    t120 = ((x877*x878)>>(x879!=x880));

    if (t120 != 185419) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x885 = 6U;
	int64_t x887 = -5432647LL;
	uint64_t x888 = UINT64_MAX;

    t121 = ((x885*x886)>>(x887!=x888));

    if (t121 != 3U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x905 = INT8_MIN;
	int32_t x907 = INT32_MIN;
	volatile int8_t x908 = -1;
	volatile int32_t t122 = -479746845;

    t122 = ((x905*x906)>>(x907!=x908));

    if (t122 != 15360) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x919 = INT16_MIN;
	uint32_t x920 = 31U;

    t123 = ((x917*x918)>>(x919!=x920));

    if (t123 != 21432887676398LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x925 = -245840599LL;
	volatile int32_t x926 = INT32_MIN;
	uint32_t x927 = 58U;
	volatile int64_t t124 = 1560507623974350LL;

    t124 = ((x925*x926)>>(x927!=x928));

    if (t124 != 263969333183512576LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x937 = 29930829451532320LLU;
	int64_t x938 = 209360298LL;
	static int64_t x939 = INT64_MIN;

    t125 = ((x937*x938)>>(x939!=x940));

    if (t125 != 2652504497903489696LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x953 = 1;
	int64_t x954 = INT64_MAX;
	int32_t x955 = -273;
	volatile int64_t t126 = -236191284169784LL;

    t126 = ((x953*x954)>>(x955!=x956));

    if (t126 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x961 = INT16_MIN;
	int8_t x963 = INT8_MAX;
	int16_t x964 = INT16_MIN;
	volatile uint32_t t127 = 59772U;

    t127 = ((x961*x962)>>(x963!=x964));

    if (t127 != 866353152U) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x965 = 6644030086041996172LLU;
	int16_t x966 = INT16_MIN;
	uint8_t x967 = 49U;
	int16_t x968 = -65;
	uint64_t t128 = 11624807829404LLU;

    t128 = ((x965*x966)>>(x967!=x968));

    if (t128 != 7671221284853579776LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x969 = -1LL;
	int64_t t129 = 76968599LL;

    t129 = ((x969*x970)>>(x971!=x972));

    if (t129 != 40597LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x973 = INT8_MIN;
	int64_t x974 = -1LL;
	static volatile int16_t x976 = INT16_MAX;
	int64_t t130 = 10LL;

    t130 = ((x973*x974)>>(x975!=x976));

    if (t130 != 64LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x981 = INT8_MIN;
	uint32_t x982 = UINT32_MAX;
	uint16_t x983 = 76U;

    t131 = ((x981*x982)>>(x983!=x984));

    if (t131 != 64U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x985 = -2770888LL;
	int64_t x987 = -1LL;
	static volatile int8_t x988 = INT8_MIN;
	volatile int64_t t132 = -64151LL;

    t132 = ((x985*x986)>>(x987!=x988));

    if (t132 != 63564550331656LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x989 = 4U;
	int16_t x990 = INT16_MAX;
	uint16_t x991 = 21U;
	int16_t x992 = 58;

    t133 = ((x989*x990)>>(x991!=x992));

    if (t133 != 65534) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x993 = 1400U;
	uint16_t x994 = 2612U;
	int32_t x995 = INT32_MIN;
	static int64_t x996 = INT64_MIN;
	static int32_t t134 = 0;

    t134 = ((x993*x994)>>(x995!=x996));

    if (t134 != 1828400) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x1017 = 244LLU;
	volatile uint16_t x1019 = 559U;
	static volatile uint16_t x1020 = 24034U;
	uint64_t t135 = 73616356152099374LLU;

    t135 = ((x1017*x1018)>>(x1019!=x1020));

    if (t135 != 9223372036854775442LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x1021 = INT64_MIN;
	uint64_t x1022 = UINT64_MAX;
	volatile int64_t x1024 = INT64_MIN;
	uint64_t t136 = 2108263327707076035LLU;

    t136 = ((x1021*x1022)>>(x1023!=x1024));

    if (t136 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x1026 = -1;
	int64_t x1027 = INT64_MIN;
	int32_t x1028 = -5656;
	volatile int32_t t137 = 122766;

    t137 = ((x1025*x1026)>>(x1027!=x1028));

    if (t137 != 6) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1033 = -1;
	int8_t x1035 = 59;
	int8_t x1036 = INT8_MIN;
	int32_t t138 = -155066668;

    t138 = ((x1033*x1034)>>(x1035!=x1036));

    if (t138 != 16384) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x1038 = INT16_MIN;
	static int8_t x1039 = 1;
	int64_t x1040 = INT64_MIN;
	int64_t t139 = -36LL;

    t139 = ((x1037*x1038)>>(x1039!=x1040));

    if (t139 != 16384LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x1041 = INT8_MIN;
	int64_t x1043 = INT64_MIN;
	static int16_t x1044 = -1;
	static int32_t t140 = 8809;

    t140 = ((x1041*x1042)>>(x1043!=x1044));

    if (t140 != 64) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1046 = INT64_MAX;
	uint16_t x1047 = 64U;
	int8_t x1048 = 4;
	static int64_t t141 = 248LL;

    t141 = ((x1045*x1046)>>(x1047!=x1048));

    if (t141 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x1061 = 867657U;
	uint16_t x1062 = 4509U;
	uint64_t x1063 = 19763126061530658LLU;
	static int16_t x1064 = -1;
	uint32_t t142 = 26069595U;

    t142 = ((x1061*x1062)>>(x1063!=x1064));

    if (t142 != 1956132706U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1066 = UINT32_MAX;
	int64_t x1067 = INT64_MIN;
	uint32_t t143 = 13U;

    t143 = ((x1065*x1066)>>(x1067!=x1068));

    if (t143 != 2147483520U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1073 = UINT8_MAX;
	volatile int16_t x1075 = INT16_MIN;
	int32_t x1076 = INT32_MAX;
	volatile uint32_t t144 = 768110U;

    t144 = ((x1073*x1074)>>(x1075!=x1076));

    if (t144 != 2147483520U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1081 = INT32_MIN;
	uint32_t x1082 = 344U;
	static uint8_t x1083 = 99U;
	uint8_t x1084 = 7U;
	volatile uint32_t t145 = 21341278U;

    t145 = ((x1081*x1082)>>(x1083!=x1084));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1085 = INT16_MAX;
	static int8_t x1086 = INT8_MAX;
	int8_t x1087 = INT8_MIN;
	int64_t x1088 = INT64_MIN;

    t146 = ((x1085*x1086)>>(x1087!=x1088));

    if (t146 != 2080704) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1097 = 23;
	static volatile int16_t x1098 = 2017;
	uint64_t x1099 = 3363441167072582053LLU;
	int16_t x1100 = INT16_MIN;
	volatile int32_t t147 = -8957950;

    t147 = ((x1097*x1098)>>(x1099!=x1100));

    if (t147 != 23195) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1105 = INT8_MAX;
	int32_t x1106 = 10;
	static uint8_t x1107 = UINT8_MAX;
	int64_t x1108 = INT64_MIN;
	int32_t t148 = -108768444;

    t148 = ((x1105*x1106)>>(x1107!=x1108));

    if (t148 != 635) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x1111 = -1;
	uint64_t x1112 = 17594LLU;
	volatile int32_t t149 = 257703858;

    t149 = ((x1109*x1110)>>(x1111!=x1112));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1113 = 221452010LLU;
	volatile int64_t x1114 = INT64_MIN;
	int64_t x1115 = -15808LL;
	int16_t x1116 = INT16_MIN;

    t150 = ((x1113*x1114)>>(x1115!=x1116));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x1118 = 27312U;
	int32_t x1119 = -4;
	volatile uint8_t x1120 = 22U;

    t151 = ((x1117*x1118)>>(x1119!=x1120));

    if (t151 != 795365902728LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1121 = 1U;
	int8_t x1122 = 1;
	int16_t x1123 = -1;
	int8_t x1124 = INT8_MIN;
	volatile int32_t t152 = -31;

    t152 = ((x1121*x1122)>>(x1123!=x1124));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x1129 = 379LLU;
	volatile int8_t x1131 = INT8_MAX;
	uint8_t x1132 = 58U;
	uint64_t t153 = 555581140881241LLU;

    t153 = ((x1129*x1130)>>(x1131!=x1132));

    if (t153 != 9223372036854775618LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x1137 = UINT32_MAX;
	int32_t x1138 = INT32_MIN;
	int64_t x1139 = INT64_MAX;
	static int8_t x1140 = 1;
	static volatile uint32_t t154 = 8933851U;

    t154 = ((x1137*x1138)>>(x1139!=x1140));

    if (t154 != 1073741824U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x1142 = INT8_MIN;
	int32_t x1144 = -4392025;
	int32_t t155 = -2;

    t155 = ((x1141*x1142)>>(x1143!=x1144));

    if (t155 != 64) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x1149 = -1LL;
	static volatile uint64_t x1150 = UINT64_MAX;
	static volatile int8_t x1151 = INT8_MAX;
	static volatile uint64_t t156 = 33LLU;

    t156 = ((x1149*x1150)>>(x1151!=x1152));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1161 = INT8_MIN;
	int32_t x1163 = INT32_MIN;
	static int64_t x1164 = INT64_MAX;

    t157 = ((x1161*x1162)>>(x1163!=x1164));

    if (t157 != 9223372036761792512LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1165 = UINT16_MAX;
	int8_t x1166 = 0;
	int16_t x1168 = 331;
	int32_t t158 = -129862;

    t158 = ((x1165*x1166)>>(x1167!=x1168));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1169 = UINT64_MAX;
	uint32_t x1171 = 4684923U;
	volatile uint64_t t159 = 78316981628LLU;

    t159 = ((x1169*x1170)>>(x1171!=x1172));

    if (t159 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1174 = 190002U;
	int16_t x1175 = -1;
	int16_t x1176 = INT16_MAX;
	static volatile uint32_t t160 = 50745U;

    t160 = ((x1173*x1174)>>(x1175!=x1176));

    if (t160 != 2147388647U) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x1181 = UINT32_MAX;
	uint16_t x1182 = 105U;
	uint64_t x1183 = UINT64_MAX;
	uint16_t x1184 = UINT16_MAX;

    t161 = ((x1181*x1182)>>(x1183!=x1184));

    if (t161 != 2147483595U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x1189 = INT8_MAX;
	int16_t x1190 = 3;
	static volatile uint8_t x1192 = UINT8_MAX;
	static int32_t t162 = -13;

    t162 = ((x1189*x1190)>>(x1191!=x1192));

    if (t162 != 190) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x1193 = INT8_MIN;
	volatile int16_t x1196 = -1;

    t163 = ((x1193*x1194)>>(x1195!=x1196));

    if (t163 != 64) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1198 = -12;
	int16_t x1199 = -218;
	static uint16_t x1200 = 3U;
	volatile int64_t t164 = 10915960LL;

    t164 = ((x1197*x1198)>>(x1199!=x1200));

    if (t164 != 6LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1201 = -1;
	uint64_t x1202 = 3LLU;
	static uint16_t x1203 = 4766U;
	uint64_t x1204 = 4375610091LLU;
	static uint64_t t165 = 1515812227738631638LLU;

    t165 = ((x1201*x1202)>>(x1203!=x1204));

    if (t165 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1205 = INT16_MIN;
	volatile int16_t x1206 = INT16_MIN;
	int8_t x1207 = INT8_MAX;
	int16_t x1208 = -1;

    t166 = ((x1205*x1206)>>(x1207!=x1208));

    if (t166 != 536870912) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x1210 = UINT32_MAX;
	uint64_t x1211 = 12306879497919043LLU;
	volatile int32_t x1212 = INT32_MIN;
	volatile uint32_t t167 = 470U;

    t167 = ((x1209*x1210)>>(x1211!=x1212));

    if (t167 != 2147482618U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1213 = 17094486680LL;
	int8_t x1214 = 6;
	int16_t x1215 = INT16_MIN;
	int32_t x1216 = 99;
	int64_t t168 = -262983842644900953LL;

    t168 = ((x1213*x1214)>>(x1215!=x1216));

    if (t168 != 51283460040LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1218 = 9409U;
	int64_t x1219 = INT64_MIN;

    t169 = ((x1217*x1218)>>(x1219!=x1220));

    if (t169 != 1199647U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1222 = -13;
	int16_t x1223 = 57;
	int32_t x1224 = -1;
	volatile int32_t t170 = -459817649;

    t170 = ((x1221*x1222)>>(x1223!=x1224));

    if (t170 != 6) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1225 = UINT64_MAX;
	int32_t x1228 = INT32_MIN;
	volatile uint64_t t171 = 5650654094LLU;

    t171 = ((x1225*x1226)>>(x1227!=x1228));

    if (t171 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x1254 = 908U;
	static volatile uint32_t x1255 = 51U;
	int32_t x1256 = 2;

    t172 = ((x1253*x1254)>>(x1255!=x1256));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1257 = 1U;
	uint64_t x1259 = UINT64_MAX;
	static int64_t x1260 = -1LL;

    t173 = ((x1257*x1258)>>(x1259!=x1260));

    if (t173 != 130628145876LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x1263 = 103U;
	int16_t x1264 = INT16_MAX;
	static uint32_t t174 = 14430U;

    t174 = ((x1261*x1262)>>(x1263!=x1264));

    if (t174 != 2147471058U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x1265 = 4189;
	uint8_t x1266 = 4U;
	volatile uint32_t x1267 = 222U;
	int8_t x1268 = INT8_MIN;
	volatile int32_t t175 = 886362;

    t175 = ((x1265*x1266)>>(x1267!=x1268));

    if (t175 != 8378) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1270 = -5024;
	int64_t x1272 = INT64_MIN;

    t176 = ((x1269*x1270)>>(x1271!=x1272));

    if (t176 != 2512LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x1309 = 79365421LLU;
	uint32_t x1310 = 37U;
	static volatile uint16_t x1311 = 73U;
	volatile int8_t x1312 = INT8_MIN;

    t177 = ((x1309*x1310)>>(x1311!=x1312));

    if (t177 != 1468260288LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1313 = UINT16_MAX;
	uint16_t x1315 = 5396U;
	static int8_t x1316 = -1;
	volatile int64_t t178 = 13630LL;

    t178 = ((x1313*x1314)>>(x1315!=x1316));

    if (t178 != 884722LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1322 = 3241097586611239LLU;
	static uint8_t x1323 = 100U;
	int8_t x1324 = 1;
	volatile uint64_t t179 = 22567397LLU;

    t179 = ((x1321*x1322)>>(x1323!=x1324));

    if (t179 != 77786342078669736LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1325 = UINT8_MAX;
	uint32_t x1326 = UINT32_MAX;
	int16_t x1327 = INT16_MIN;
	volatile uint32_t x1328 = 285612U;

    t180 = ((x1325*x1326)>>(x1327!=x1328));

    if (t180 != 2147483520U) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x1329 = 0;
	static uint32_t x1330 = 26U;
	int16_t x1331 = INT16_MIN;
	int16_t x1332 = -10468;
	volatile uint32_t t181 = 379923129U;

    t181 = ((x1329*x1330)>>(x1331!=x1332));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1349 = 51522743U;
	static uint16_t x1350 = 2328U;
	uint32_t x1351 = 24U;
	volatile uint8_t x1352 = 1U;
	volatile uint32_t t182 = 36671818U;

    t182 = ((x1349*x1350)>>(x1351!=x1352));

    if (t182 != 1990414356U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1353 = -1;
	int16_t x1354 = INT16_MIN;
	static volatile uint8_t x1356 = UINT8_MAX;
	static int32_t t183 = 3;

    t183 = ((x1353*x1354)>>(x1355!=x1356));

    if (t183 != 16384) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1365 = UINT32_MAX;
	volatile int16_t x1366 = INT16_MAX;
	uint8_t x1367 = 1U;
	static int8_t x1368 = INT8_MAX;
	static volatile uint32_t t184 = 362336184U;

    t184 = ((x1365*x1366)>>(x1367!=x1368));

    if (t184 != 2147467264U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1370 = 1149739022726967306LLU;
	static int8_t x1371 = -53;
	uint16_t x1372 = 10U;
	volatile uint64_t t185 = 2802663131LLU;

    t185 = ((x1369*x1370)>>(x1371!=x1372));

    if (t185 != 8648502525491292155LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x1383 = INT32_MIN;
	int64_t x1384 = -77065316179280056LL;
	int32_t t186 = 4960912;

    t186 = ((x1381*x1382)>>(x1383!=x1384));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1385 = -1;
	int8_t x1387 = -23;
	int32_t x1388 = INT32_MIN;
	volatile int32_t t187 = -67146;

    t187 = ((x1385*x1386)>>(x1387!=x1388));

    if (t187 != 116859726) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x1393 = INT16_MIN;
	uint64_t x1394 = 710655234LLU;
	static volatile int8_t x1395 = -1;
	volatile uint64_t t188 = 76339708628LLU;

    t188 = ((x1393*x1394)>>(x1395!=x1396));

    if (t188 != 9223360393479421952LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1397 = 658170015633LLU;
	volatile int32_t x1398 = 4002564;
	volatile int32_t x1399 = -1;
	int16_t x1400 = -1;
	uint64_t t189 = 4145302458918421LLU;

    t189 = ((x1397*x1398)>>(x1399!=x1400));

    if (t189 != 2634367610452083012LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1402 = INT8_MIN;
	uint32_t x1403 = UINT32_MAX;
	int16_t x1404 = INT16_MIN;
	volatile uint64_t t190 = 67940913498222672LLU;

    t190 = ((x1401*x1402)>>(x1403!=x1404));

    if (t190 != 64LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1409 = UINT32_MAX;
	uint8_t x1410 = 57U;
	int32_t x1412 = -1;
	volatile uint32_t t191 = 120818U;

    t191 = ((x1409*x1410)>>(x1411!=x1412));

    if (t191 != 2147483619U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x1429 = 1U;
	uint64_t x1431 = UINT64_MAX;
	int8_t x1432 = 0;
	uint32_t t192 = 121803U;

    t192 = ((x1429*x1430)>>(x1431!=x1432));

    if (t192 != 7U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x1438 = INT32_MIN;
	static uint64_t x1440 = 8LLU;

    t193 = ((x1437*x1438)>>(x1439!=x1440));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1441 = UINT64_MAX;
	volatile uint8_t x1442 = 118U;
	static uint32_t x1443 = 1943U;
	uint64_t x1444 = UINT64_MAX;
	uint64_t t194 = 1LLU;

    t194 = ((x1441*x1442)>>(x1443!=x1444));

    if (t194 != 9223372036854775749LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1453 = UINT64_MAX;
	uint32_t x1454 = UINT32_MAX;
	int16_t x1455 = INT16_MAX;
	uint32_t x1456 = 122U;

    t195 = ((x1453*x1454)>>(x1455!=x1456));

    if (t195 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1457 = 56474091959026LLU;
	int64_t x1458 = -1LL;
	volatile int32_t x1459 = -1;
	uint64_t x1460 = UINT64_MAX;
	volatile uint64_t t196 = 106101082486148038LLU;

    t196 = ((x1457*x1458)>>(x1459!=x1460));

    if (t196 != 18446687599617592590LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x1461 = 0U;
	uint32_t x1462 = 1399205U;
	int16_t x1463 = INT16_MIN;
	int32_t x1464 = INT32_MIN;

    t197 = ((x1461*x1462)>>(x1463!=x1464));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1473 = -10733480LL;
	volatile int32_t x1474 = INT32_MIN;
	volatile int32_t x1476 = INT32_MIN;
	static int64_t t198 = -1081855169579307LL;

    t198 = ((x1473*x1474)>>(x1475!=x1476));

    if (t198 != 11524986393067520LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1477 = 7762;
	volatile int64_t x1478 = 26735LL;
	uint64_t x1479 = 25791LLU;
	int8_t x1480 = INT8_MIN;

    t199 = ((x1477*x1478)>>(x1479!=x1480));

    if (t199 != 103758535LL) { NG(); } else { ; }
	
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

