#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = 7U;
static volatile int64_t t0 = -902771626587LL;
uint16_t x13 = 1U;
static volatile int64_t t3 = 432LL;
int16_t x36 = -1;
int64_t x40 = 267LL;
int8_t x57 = 9;
int8_t x67 = -1;
volatile uint64_t t10 = 14146LLU;
uint64_t x77 = 132LLU;
uint16_t x80 = 1699U;
volatile int16_t x81 = INT16_MIN;
static int16_t x84 = 2534;
int32_t x87 = INT32_MIN;
int16_t x98 = INT16_MAX;
uint16_t x99 = UINT16_MAX;
uint64_t x100 = 118938LLU;
volatile uint64_t t14 = 88LLU;
static int64_t x146 = -1LL;
uint64_t x147 = 117012821084LLU;
int8_t x149 = 6;
int16_t x161 = -1;
int16_t x162 = 7990;
volatile uint16_t x166 = UINT16_MAX;
volatile int32_t x168 = -1;
int64_t x169 = 591570618848518LL;
int64_t x176 = INT64_MAX;
static int32_t x193 = -1;
static volatile uint64_t x195 = UINT64_MAX;
volatile uint32_t x211 = 378027U;
volatile int64_t t31 = -27472373601571455LL;
static int16_t x220 = 9;
int64_t x232 = INT64_MIN;
uint64_t x242 = 795563LLU;
uint8_t x245 = 12U;
uint64_t x259 = 38731645913497LLU;
int8_t x268 = INT8_MIN;
volatile int32_t t41 = 12849823;
uint64_t x277 = 127262332LLU;
int32_t x278 = INT32_MAX;
uint64_t t43 = 226311LLU;
volatile uint64_t t45 = 11641LLU;
int8_t x298 = INT8_MIN;
uint64_t x299 = 12041121541LLU;
int8_t x302 = INT8_MAX;
static uint64_t t47 = 27755248245276LLU;
volatile uint64_t t49 = 7500979511654877LLU;
static volatile int16_t x322 = INT16_MIN;
volatile uint64_t t52 = 17566914659225703LLU;
int16_t x346 = INT16_MAX;
uint16_t x352 = 1U;
int16_t x361 = -1;
int16_t x369 = INT16_MIN;
static int64_t x379 = -1931594827167486198LL;
uint64_t x381 = 29LLU;
int8_t x390 = INT8_MIN;
int64_t x391 = -1LL;
uint64_t t60 = 234897574LLU;
static int64_t x402 = INT64_MIN;
uint64_t x409 = UINT64_MAX;
int16_t x426 = INT16_MIN;
uint32_t x428 = 6U;
static volatile uint32_t t64 = 1642U;
int32_t x436 = 7;
volatile uint64_t t66 = 3895578420312847LLU;
int8_t x439 = INT8_MIN;
int8_t x442 = INT8_MIN;
static int16_t x448 = INT16_MIN;
uint16_t x455 = 1U;
volatile int32_t t74 = -275;
static volatile int64_t t75 = -278659405648170LL;
int16_t x488 = -5;
int8_t x490 = 28;
volatile int16_t x499 = INT16_MIN;
int8_t x527 = INT8_MIN;
volatile int64_t t83 = 744LL;
uint32_t x537 = UINT32_MAX;
uint64_t x547 = UINT64_MAX;
int16_t x548 = -1;
int8_t x550 = INT8_MIN;
static uint8_t x556 = 0U;
static uint32_t x561 = 58372U;
static int16_t x565 = -1;
int32_t x566 = -485;
uint64_t x573 = 622302291LLU;
int8_t x579 = -1;
uint64_t x595 = 642767868529LLU;
volatile int32_t t96 = -1;
static int32_t x610 = -772488640;
uint16_t x615 = UINT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int64_t x3 = 2884691274LL;
	uint8_t x4 = 3U;

	t0 = ((x1^x2)*(x3-x4));

	if (t0 != -6194827313807997711LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = UINT32_MAX;
	static int32_t x10 = INT32_MIN;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = 20;
	volatile uint32_t t1 = 12031U;

	t1 = ((x9^x10)*(x11-x12));

	if (t1 != 2147418133U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = 21;
	static int16_t x15 = INT16_MIN;
	int64_t x16 = -1LL;
	volatile int64_t t2 = 0LL;

	t2 = ((x13^x14)*(x15-x16));

	if (t2 != -655340LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x25 = -1LL;
	static int32_t x26 = -1;
	volatile uint8_t x27 = 104U;
	int64_t x28 = 1591742122667203LL;

	t3 = ((x25^x26)*(x27-x28));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x33 = 4679;
	static int16_t x34 = -1;
	int8_t x35 = 2;
	int32_t t4 = -6309;

	t4 = ((x33^x34)*(x35-x36));

	if (t4 != -14040) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = -1;
	uint32_t x38 = 287U;
	int16_t x39 = INT16_MIN;
	volatile int64_t t5 = 119LL;

	t5 = ((x37^x38)*(x39-x40));

	if (t5 != -141884235109280LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = -1;
	int64_t x42 = -42353039LL;
	static int16_t x43 = INT16_MIN;
	int8_t x44 = -1;
	volatile int64_t t6 = -456085LL;

	t6 = ((x41^x42)*(x43-x44));

	if (t6 != -1387781996146LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x58 = INT16_MAX;
	static int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t7 = 656746;

	t7 = ((x57^x58)*(x59-x60));

	if (t7 != -1069221120) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MIN;
	uint64_t x68 = 23869039865550LLU;
	uint64_t t8 = 17766572476073155LLU;

	t8 = ((x65^x66)*(x67-x68));

	if (t8 != 10005512735169150976LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x69 = -1;
	static int16_t x70 = 672;
	volatile uint8_t x71 = 15U;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t9 = 81129;

	t9 = ((x69^x70)*(x71-x72));

	if (t9 != -96239) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x73 = 0;
	int64_t x74 = 3487LL;
	uint64_t x75 = UINT64_MAX;
	volatile uint64_t x76 = 942LLU;

	t10 = ((x73^x74)*(x75-x76));

	if (t10 != 18446744073706263375LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x78 = UINT16_MAX;
	int64_t x79 = -461430170778889LL;
	uint64_t t11 = 4LLU;

	t11 = ((x77^x78)*(x79-x80));

	if (t11 != 6714570687856306268LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	volatile int32_t t12 = 519290;

	t12 = ((x81^x82)*(x83-x84));

	if (t12 != -86887680) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x85 = -1;
	uint32_t x86 = 381005412U;
	volatile int8_t x88 = -1;
	uint32_t t13 = 3897642U;

	t13 = ((x85^x86)*(x87-x88));

	if (t13 != 1766478235U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x97 = UINT64_MAX;

	t14 = ((x97^x98)*(x99-x100));

	if (t14 != 1749909504LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x109 = 210031U;
	uint16_t x110 = UINT16_MAX;
	int32_t x111 = INT32_MIN;
	int8_t x112 = 0;
	volatile uint32_t t15 = 4759508U;

	t15 = ((x109^x110)*(x111-x112));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x125 = 764170U;
	int16_t x126 = -2808;
	int8_t x127 = INT8_MAX;
	uint16_t x128 = 0U;
	volatile uint32_t t16 = 1042969575U;

	t16 = ((x125^x126)*(x127-x128));

	if (t16 != 4198081790U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x130 = INT8_MIN;
	volatile int32_t x131 = INT32_MAX;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t17 = 259791U;

	t17 = ((x129^x130)*(x131-x132));

	if (t17 != 2147483648U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x137 = UINT64_MAX;
	static volatile uint8_t x138 = 18U;
	volatile int64_t x139 = INT64_MIN;
	static uint64_t x140 = UINT64_MAX;
	uint64_t t18 = 368407155471LLU;

	t18 = ((x137^x138)*(x139-x140));

	if (t18 != 9223372036854775789LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x141 = 5;
	volatile int32_t x142 = INT32_MAX;
	uint64_t x143 = UINT64_MAX;
	volatile int16_t x144 = INT16_MIN;
	uint64_t t19 = 664352569579105034LLU;

	t19 = ((x141^x142)*(x143-x144));

	if (t19 != 70366596497414LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x145 = INT8_MIN;
	static uint16_t x148 = UINT16_MAX;
	uint64_t t20 = 161331903046LLU;

	t20 = ((x145^x146)*(x147-x148));

	if (t20 != 14860619954723LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x150 = INT64_MIN;
	uint64_t x151 = UINT64_MAX;
	int8_t x152 = 0;
	uint64_t t21 = 55217LLU;

	t21 = ((x149^x150)*(x151-x152));

	if (t21 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x157 = INT8_MIN;
	static int8_t x158 = 51;
	static uint32_t x159 = UINT32_MAX;
	volatile int16_t x160 = 6560;
	uint32_t t22 = 25389U;

	t22 = ((x157^x158)*(x159-x160));

	if (t22 != 505197U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x163 = 2;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t23 = 2799142;

	t23 = ((x161^x162)*(x163-x164));

	if (t23 != 523674203) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x165 = 1686LL;
	uint8_t x167 = 1U;
	int64_t t24 = 50564860LL;

	t24 = ((x165^x166)*(x167-x168));

	if (t24 != 127698LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x170 = -1;
	int64_t x171 = -1LL;
	static uint8_t x172 = UINT8_MAX;
	volatile int64_t t25 = -1LL;

	t25 = ((x169^x170)*(x171-x172));

	if (t25 != 151442078425220864LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x173 = UINT64_MAX;
	static int64_t x174 = 1971546LL;
	uint64_t x175 = 819886069007115LLU;
	static volatile uint64_t t26 = 2LLU;

	t26 = ((x173^x174)*(x175-x176));

	if (t26 != 16092930830522789564LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MAX;
	int64_t x179 = INT64_MIN;
	static volatile int8_t x180 = 0;
	uint64_t t27 = 3508721751LLU;

	t27 = ((x177^x178)*(x179-x180));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x185 = 46;
	int32_t x186 = INT32_MAX;
	uint16_t x187 = 38U;
	int64_t x188 = 472LL;
	volatile int64_t t28 = -92264933644947686LL;

	t28 = ((x185^x186)*(x187-x188));

	if (t28 != -932007882834LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x194 = -1;
	static uint8_t x196 = UINT8_MAX;
	volatile uint64_t t29 = 158860LLU;

	t29 = ((x193^x194)*(x195-x196));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x205 = 809LLU;
	int16_t x206 = -65;
	int8_t x207 = 29;
	uint16_t x208 = 123U;
	volatile uint64_t t30 = 4259743344LLU;

	t30 = ((x205^x206)*(x207-x208));

	if (t30 != 82156LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x209 = 113U;
	int64_t x210 = 64224LL;
	int8_t x212 = INT8_MIN;

	t31 = ((x209^x210)*(x211-x212));

	if (t31 != 24256752475LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MAX;
	int8_t x215 = -1;
	volatile uint16_t x216 = 0U;
	int32_t t32 = -122914182;

	t32 = ((x213^x214)*(x215-x216));

	if (t32 != 2147450881) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile int16_t x218 = -1;
	uint8_t x219 = 7U;
	int32_t t33 = 176615334;

	t33 = ((x217^x218)*(x219-x220));

	if (t33 != -65534) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = 427034532LL;
	volatile int64_t x231 = INT64_MIN;
	static uint64_t t34 = 38LLU;

	t34 = ((x229^x230)*(x231-x232));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x233 = 147292520U;
	int8_t x234 = 1;
	static int32_t x235 = INT32_MIN;
	static volatile int8_t x236 = -16;
	volatile uint32_t t35 = 2U;

	t35 = ((x233^x234)*(x235-x236));

	if (t35 != 209196688U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x237 = UINT64_MAX;
	int8_t x238 = INT8_MAX;
	static int8_t x239 = 1;
	volatile int8_t x240 = 53;
	uint64_t t36 = 6133070411111LLU;

	t36 = ((x237^x238)*(x239-x240));

	if (t36 != 6656LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	static volatile uint64_t t37 = 8209519308517LLU;

	t37 = ((x241^x242)*(x243-x244));

	if (t37 != 26069041152LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x246 = 39U;
	volatile uint16_t x247 = 3462U;
	uint64_t x248 = 14796LLU;
	uint64_t t38 = 125069817943403LLU;

	t38 = ((x245^x246)*(x247-x248));

	if (t38 != 18446744073709064254LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x249 = 192791475LL;
	static int32_t x250 = 1;
	static int64_t x251 = -1LL;
	volatile uint32_t x252 = UINT32_MAX;
	static volatile int64_t t39 = 16LL;

	t39 = ((x249^x250)*(x251-x252));

	if (t39 != -828033075777634304LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x257 = INT8_MIN;
	uint16_t x258 = 1U;
	uint16_t x260 = 216U;
	volatile uint64_t t40 = 96053518643875455LLU;

	t40 = ((x257^x258)*(x259-x260));

	if (t40 != 18441825154678564929LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x265 = -1;
	uint16_t x266 = 61U;
	static int32_t x267 = 1;

	t41 = ((x265^x266)*(x267-x268));

	if (t41 != -7998) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = INT16_MIN;
	static uint32_t t42 = 953193459U;

	t42 = ((x273^x274)*(x275-x276));

	if (t42 != 2147549184U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x279 = 0;
	static uint8_t x280 = 0U;

	t43 = ((x277^x278)*(x279-x280));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x281 = -163LL;
	int8_t x282 = INT8_MAX;
	int64_t x283 = -152087754669LL;
	uint32_t x284 = 983U;
	volatile int64_t t44 = 1LL;

	t44 = ((x281^x282)*(x283-x284));

	if (t44 != 33763481754744LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x293 = -6;
	int16_t x294 = -1;
	static int32_t x295 = INT32_MIN;
	volatile uint64_t x296 = 209831495420355146LLU;

	t45 = ((x293^x294)*(x295-x296));

	if (t45 != 17397586585870357646LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x297 = INT8_MIN;
	uint64_t x300 = 1062LLU;
	volatile uint64_t t46 = 5927LLU;

	t46 = ((x297^x298)*(x299-x300));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x301 = 380769623LLU;
	int16_t x303 = INT16_MIN;
	int16_t x304 = -1;

	t47 = ((x301^x302)*(x303-x304));

	if (t47 != 18446731597032854824LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x310 = -60;
	static uint16_t x311 = UINT16_MAX;
	static uint32_t x312 = 25898711U;
	volatile uint32_t t48 = 3761444U;

	t48 = ((x309^x310)*(x311-x312));

	if (t48 != 2538311328U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x317 = 54604904871164LLU;
	volatile int64_t x318 = INT64_MIN;
	static int8_t x319 = -1;
	volatile uint32_t x320 = 545U;

	t49 = ((x317^x318)*(x319-x320));

	if (t49 != 12793399492884102792LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x321 = 19906U;
	int8_t x323 = 3;
	uint32_t x324 = UINT32_MAX;
	uint32_t t50 = 2416U;

	t50 = ((x321^x322)*(x323-x324));

	if (t50 != 4294915848U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x329 = -1;
	int16_t x330 = 1502;
	static int16_t x331 = 1;
	int64_t x332 = -241LL;
	int64_t t51 = 5700127LL;

	t51 = ((x329^x330)*(x331-x332));

	if (t51 != -363726LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x337 = INT8_MIN;
	uint64_t x338 = 4357340LLU;
	uint8_t x339 = 2U;
	uint64_t x340 = 4LLU;

	t52 = ((x337^x338)*(x339-x340));

	if (t52 != 8714568LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x345 = UINT64_MAX;
	volatile uint8_t x347 = UINT8_MAX;
	uint16_t x348 = UINT16_MAX;
	static volatile uint64_t t53 = 1566325984LLU;

	t53 = ((x345^x346)*(x347-x348));

	if (t53 != 2139095040LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x349 = -7984813855971531LL;
	uint64_t x350 = 3LLU;
	int8_t x351 = -56;
	volatile uint64_t t54 = 71093982715986LLU;

	t54 = ((x349^x350)*(x351-x352));

	if (t54 != 455134389790377210LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x362 = 164U;
	volatile int64_t x363 = INT64_MIN;
	static uint64_t x364 = UINT64_MAX;
	uint64_t t55 = 359LLU;

	t55 = ((x361^x362)*(x363-x364));

	if (t55 != 9223372036854775643LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x370 = 536U;
	volatile int32_t x371 = -291595145;
	int64_t x372 = -1LL;
	volatile int64_t t56 = 69265884299LL;

	t56 = ((x369^x370)*(x371-x372));

	if (t56 != -1252382208457729216LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x377 = UINT64_MAX;
	volatile uint64_t x378 = 1345170963LLU;
	volatile int16_t x380 = -1;
	volatile uint64_t t57 = 294603765533LLU;

	t57 = ((x377^x378)*(x379-x380));

	if (t57 != 8077625417975453988LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x382 = 15LLU;
	int16_t x383 = 1;
	uint16_t x384 = UINT16_MAX;
	uint64_t t58 = 714324853618LLU;

	t58 = ((x381^x382)*(x383-x384));

	if (t58 != 18446744073708372004LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x389 = INT8_MAX;
	int16_t x392 = 74;
	int64_t t59 = 6652419LL;

	t59 = ((x389^x390)*(x391-x392));

	if (t59 != 75LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x393 = UINT16_MAX;
	static uint32_t x394 = 503573U;
	static int8_t x395 = INT8_MAX;
	static uint64_t x396 = 3LLU;

	t60 = ((x393^x394)*(x395-x396));

	if (t60 != 59453784LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x401 = INT64_MIN;
	uint32_t x403 = 0U;
	static int8_t x404 = INT8_MIN;
	static volatile int64_t t61 = 48LL;

	t61 = ((x401^x402)*(x403-x404));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x410 = -20;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = -1LL;
	uint64_t t62 = 5021550261681100LLU;

	t62 = ((x409^x410)*(x411-x412));

	if (t62 != 81604378624LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x417 = 51U;
	uint8_t x418 = 43U;
	uint64_t x419 = 22LLU;
	uint8_t x420 = UINT8_MAX;
	uint64_t t63 = 2LLU;

	t63 = ((x417^x418)*(x419-x420));

	if (t63 != 18446744073709546024LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x425 = 2U;
	volatile int16_t x427 = -1;

	t64 = ((x425^x426)*(x427-x428));

	if (t64 != 229362U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x429 = -1;
	int64_t x430 = -1LL;
	uint8_t x431 = UINT8_MAX;
	static uint16_t x432 = 20U;
	int64_t t65 = -474464720531235538LL;

	t65 = ((x429^x430)*(x431-x432));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x433 = 1U;
	static uint64_t x434 = UINT64_MAX;
	int8_t x435 = 14;

	t66 = ((x433^x434)*(x435-x436));

	if (t66 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MIN;
	uint8_t x440 = 1U;
	int32_t t67 = 54168584;

	t67 = ((x437^x438)*(x439-x440));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x441 = -6;
	uint32_t x443 = 3254839U;
	volatile int64_t x444 = -1LL;
	static int64_t t68 = -806571575586547LL;

	t68 = ((x441^x442)*(x443-x444));

	if (t68 != 397090480LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x445 = INT16_MIN;
	int8_t x446 = -1;
	int64_t x447 = 105957LL;
	volatile int64_t t69 = 911LL;

	t69 = ((x445^x446)*(x447-x448));

	if (t69 != 4545602075LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x449 = 241U;
	uint64_t x450 = 64008LLU;
	uint16_t x451 = 7447U;
	int16_t x452 = -550;
	uint64_t t70 = 27LLU;

	t70 = ((x449^x450)*(x451-x452));

	if (t70 != 513799253LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x453 = -8;
	int8_t x454 = INT8_MAX;
	int8_t x456 = INT8_MIN;
	int32_t t71 = 178;

	t71 = ((x453^x454)*(x455-x456));

	if (t71 != -15609) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MAX;
	uint8_t x459 = 95U;
	volatile int8_t x460 = -34;
	int32_t t72 = -68519943;

	t72 = ((x457^x458)*(x459-x460));

	if (t72 != -129) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x469 = 3U;
	int64_t x470 = INT64_MAX;
	uint64_t x471 = 403LLU;
	volatile int32_t x472 = INT32_MIN;
	uint64_t t73 = 2102274020115116323LLU;

	t73 = ((x469^x470)*(x471-x472));

	if (t73 != 9223372028264839604LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x473 = -1;
	int8_t x474 = INT8_MIN;
	uint16_t x475 = UINT16_MAX;
	int8_t x476 = INT8_MIN;

	t74 = ((x473^x474)*(x475-x476));

	if (t74 != 8339201) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x481 = INT8_MIN;
	uint16_t x482 = UINT16_MAX;
	int32_t x483 = INT32_MIN;
	int64_t x484 = -5634160352481LL;

	t75 = ((x481^x482)*(x483-x484));

	if (t75 != -368384329737497697LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x485 = 490U;
	volatile int8_t x486 = INT8_MIN;
	uint16_t x487 = 18U;
	int32_t t76 = -179301206;

	t76 = ((x485^x486)*(x487-x488));

	if (t76 != -9338) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x489 = 49450LLU;
	uint16_t x491 = UINT16_MAX;
	uint64_t x492 = 74645662033617373LLU;
	uint64_t t77 = 27893492LLU;

	t77 = ((x489^x490)*(x491-x492));

	if (t77 != 15671823312078863660LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x497 = -1LL;
	int16_t x498 = INT16_MIN;
	volatile int64_t x500 = 313034504LL;
	static int64_t t78 = -1433728743LL;

	t78 = ((x497^x498)*(x499-x500));

	if (t78 != -10258275301624LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x505 = INT32_MIN;
	int32_t x506 = -9576;
	uint32_t x507 = 70945557U;
	int8_t x508 = INT8_MIN;
	static uint32_t t79 = 1715656353U;

	t79 = ((x505^x506)*(x507-x508));

	if (t79 != 1376436856U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x509 = 0U;
	int32_t x510 = -869193;
	volatile int64_t x511 = 0LL;
	static volatile int64_t x512 = -105955002214LL;
	int64_t t80 = 69LL;

	t80 = ((x509^x510)*(x511-x512));

	if (t80 != -92095346239393302LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x521 = INT32_MAX;
	uint32_t x522 = 236U;
	int8_t x523 = 62;
	int32_t x524 = -1;
	volatile uint32_t t81 = 732174U;

	t81 = ((x521^x522)*(x523-x524));

	if (t81 != 2147468717U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x525 = -1;
	int8_t x526 = 7;
	int64_t x528 = 30675356938038LL;
	int64_t t82 = 1607871896632LL;

	t82 = ((x525^x526)*(x527-x528));

	if (t82 != 245402855505328LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x529 = INT16_MIN;
	int16_t x530 = -441;
	int64_t x531 = 57367LL;
	static uint8_t x532 = 18U;

	t83 = ((x529^x530)*(x531-x532));

	if (t83 != 1853921123LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x533 = 1U;
	static int8_t x534 = INT8_MAX;
	static int16_t x535 = INT16_MIN;
	int8_t x536 = 0;
	static volatile int32_t t84 = 17;

	t84 = ((x533^x534)*(x535-x536));

	if (t84 != -4128768) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x538 = 1297865553LLU;
	volatile uint64_t x539 = 3915167LLU;
	volatile int64_t x540 = INT64_MIN;
	volatile uint64_t t85 = 31416682435914812LLU;

	t85 = ((x537^x538)*(x539-x540));

	if (t85 != 11734153835920914LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x545 = INT16_MIN;
	static uint64_t x546 = 1140955056LLU;
	volatile uint64_t t86 = 775239LLU;

	t86 = ((x545^x546)*(x547-x548));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x549 = 43769LL;
	int32_t x551 = -320187726;
	int16_t x552 = INT16_MIN;
	int64_t t87 = -2382607968655858282LL;

	t87 = ((x549^x550)*(x551-x552));

	if (t87 != 13976364691490LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x553 = INT32_MIN;
	volatile uint16_t x554 = UINT16_MAX;
	uint64_t x555 = 303610267249489062LLU;
	uint64_t t88 = 34132696095365LLU;

	t88 = ((x553^x554)*(x555-x556));

	if (t88 != 12028748812057365338LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x557 = UINT64_MAX;
	int32_t x558 = -1;
	volatile uint16_t x559 = 127U;
	volatile int8_t x560 = INT8_MIN;
	static uint64_t t89 = 17009LLU;

	t89 = ((x557^x558)*(x559-x560));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x562 = INT16_MIN;
	volatile int64_t x563 = -1LL;
	uint16_t x564 = 1U;
	int64_t t90 = 1817351LL;

	t90 = ((x561^x562)*(x563-x564));

	if (t90 != -8589854728LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x567 = INT16_MIN;
	static volatile int8_t x568 = INT8_MIN;
	volatile int32_t t91 = -2174;

	t91 = ((x565^x566)*(x567-x568));

	if (t91 != -15797760) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x574 = INT64_MIN;
	uint32_t x575 = UINT32_MAX;
	static int16_t x576 = 841;
	volatile uint64_t t92 = 594533968671154LLU;

	t92 = ((x573^x574)*(x575-x576));

	if (t92 != 2672767464092346114LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x577 = -1LL;
	int32_t x578 = INT32_MIN;
	int32_t x580 = -71;
	static int64_t t93 = -460LL;

	t93 = ((x577^x578)*(x579-x580));

	if (t93 != 150323855290LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x585 = 1U;
	int16_t x586 = 7893;
	uint64_t x587 = 1815478767LLU;
	static volatile uint64_t x588 = UINT64_MAX;
	uint64_t t94 = 540808425236LLU;

	t94 = ((x585^x586)*(x587-x588));

	if (t94 != 14327758437056LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x593 = 166719810U;
	static volatile int32_t x594 = INT32_MIN;
	int16_t x596 = INT16_MIN;
	static volatile uint64_t t95 = 1LLU;

	t95 = ((x593^x594)*(x595-x596));

	if (t95 != 11756173976155955746LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x597 = UINT8_MAX;
	int16_t x598 = -1;
	uint8_t x599 = 6U;
	static int32_t x600 = -1;

	t96 = ((x597^x598)*(x599-x600));

	if (t96 != -1792) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x605 = 1;
	int8_t x606 = -43;
	static int8_t x607 = INT8_MIN;
	uint64_t x608 = 1LLU;
	volatile uint64_t t97 = 22580LLU;

	t97 = ((x605^x606)*(x607-x608));

	if (t97 != 5676LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x609 = -1LL;
	uint16_t x611 = 597U;
	int16_t x612 = -1;
	static volatile int64_t t98 = 129LL;

	t98 = ((x609^x610)*(x611-x612));

	if (t98 != 461948206122LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x613 = UINT64_MAX;
	uint32_t x614 = 331243U;
	static uint64_t x616 = 1LLU;
	static uint64_t t99 = 3254LLU;

	t99 = ((x613^x614)*(x615-x616));

	if (t99 != 18446744052001807320LLU) { NG(); } else { ; }
	
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

