
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

uint32_t x3 = UINT32_MAX;
static volatile int8_t x6 = INT8_MIN;
volatile uint8_t x25 = 0U;
volatile int64_t x27 = -1LL;
int8_t x28 = INT8_MIN;
int32_t t2 = 17049868;
uint32_t x39 = 103190U;
int32_t x40 = -1;
volatile uint32_t t4 = 218U;
static int32_t x50 = -1;
static int32_t x52 = INT32_MIN;
int16_t x78 = -1;
int32_t x80 = INT32_MIN;
int32_t t6 = -156752695;
int64_t x84 = -62815431LL;
volatile int32_t x89 = 42;
static volatile int8_t x91 = INT8_MAX;
int32_t x97 = INT32_MAX;
static int32_t t10 = INT32_MAX;
volatile uint64_t x111 = UINT64_MAX;
uint64_t x116 = 29460139LLU;
int64_t x126 = INT64_MIN;
volatile uint32_t x130 = 0U;
int64_t x131 = INT64_MAX;
static int32_t t15 = 2684897;
uint16_t x143 = UINT16_MAX;
static volatile int64_t t17 = 147708418LL;
uint64_t x145 = UINT64_MAX;
int32_t x146 = -1619;
int64_t x147 = INT64_MIN;
volatile int64_t x151 = INT64_MIN;
volatile int32_t t22 = 1;
static uint64_t t23 = 4094738200LLU;
int16_t x206 = -14365;
int8_t x209 = INT8_MAX;
int64_t x213 = 130LL;
volatile uint64_t x215 = UINT64_MAX;
volatile uint64_t t29 = UINT64_MAX;
static int32_t x221 = 22277;
static int64_t x224 = INT64_MIN;
uint64_t x229 = UINT64_MAX;
int64_t x230 = INT64_MIN;
uint16_t x231 = 17U;
int16_t x240 = INT16_MAX;
int32_t t35 = 3154;
int32_t x280 = INT32_MIN;
int16_t x306 = 15;
int8_t x308 = -1;
int32_t x312 = INT32_MIN;
int64_t x318 = INT64_MAX;
uint16_t x321 = 7452U;
uint8_t x324 = 0U;
int32_t t42 = -1;
uint64_t x335 = 24989233LLU;
int64_t x346 = INT64_MIN;
int32_t t45 = -1;
volatile int32_t t46 = 1550;
int64_t x374 = INT64_MIN;
uint64_t x409 = 1024LLU;
int64_t x411 = 1543965670756LL;
int64_t x418 = INT64_MIN;
static volatile int32_t t55 = -9;
int8_t x432 = INT8_MAX;
uint32_t x437 = 863739U;
static int64_t x438 = -2833623LL;
static int64_t x439 = -1LL;
int32_t x454 = 351;
int8_t x456 = INT8_MIN;
volatile uint32_t t62 = UINT32_MAX;
uint16_t x473 = 899U;
int32_t x474 = 859;
static uint32_t x481 = 93548U;
int64_t x485 = 683607463348115LL;
int64_t t66 = 40791824731LL;
uint32_t x502 = 22U;
uint16_t x508 = 223U;
int64_t x517 = INT64_MAX;
static volatile uint64_t x554 = 11082812472LLU;
volatile int32_t t76 = 7278620;
int32_t x574 = INT32_MIN;
volatile uint16_t x577 = UINT16_MAX;
int64_t x579 = INT64_MIN;
static uint32_t x621 = 74U;
int8_t x622 = INT8_MIN;
int32_t t83 = -133692505;
static volatile int32_t t84 = INT32_MAX;
static uint8_t x648 = 36U;
int32_t t85 = 4390083;
volatile int32_t t86 = -6525;
volatile uint32_t t89 = UINT32_MAX;
uint16_t x706 = 66U;
uint8_t x721 = UINT8_MAX;
volatile int32_t t93 = -1941;
int8_t x751 = INT8_MAX;
int32_t x753 = 0;
uint8_t x783 = 60U;
int16_t x784 = -3;
volatile int32_t t101 = INT32_MAX;
int16_t x794 = -1;
int16_t x799 = 1;
static uint64_t t104 = 30438LLU;
int32_t x801 = INT32_MAX;
volatile int64_t x804 = 4458613LL;
int32_t t105 = INT32_MAX;
int64_t x810 = INT64_MIN;
int32_t x820 = -2327;
static uint16_t x854 = 101U;
int16_t x856 = -1;
uint16_t x861 = 232U;
int32_t x874 = -1941152;
int64_t x876 = -2LL;
uint16_t x888 = UINT16_MAX;
static uint16_t x892 = 20315U;
int64_t x895 = INT64_MIN;
int16_t x899 = INT16_MAX;
int32_t t120 = -65370;
static volatile int8_t x909 = INT8_MAX;
volatile uint64_t x912 = 5100749858118986068LLU;
int16_t x927 = -11045;
volatile uint64_t t123 = 12036627043LLU;
int32_t x938 = INT32_MIN;
uint64_t x939 = 14675790LLU;
static uint16_t x940 = UINT16_MAX;
uint32_t x942 = 44U;
static int16_t x943 = -7;
int64_t x944 = INT64_MAX;
static volatile uint8_t x952 = UINT8_MAX;
int8_t x965 = 1;
int32_t x966 = INT32_MIN;
int32_t x981 = INT32_MAX;
int16_t x1016 = 12;
int64_t x1029 = 2611777LL;
int16_t x1033 = 4703;
volatile int8_t x1035 = INT8_MAX;
volatile int32_t t135 = -3;
uint8_t x1041 = 46U;
uint64_t x1052 = 7325526871222450741LLU;
static volatile int32_t t139 = 2244;
uint16_t x1059 = 60U;
volatile int32_t t140 = 40175;
static uint8_t x1071 = UINT8_MAX;
volatile int32_t t143 = 10;
int16_t x1078 = INT16_MIN;
uint16_t x1093 = 10374U;
volatile int32_t x1100 = INT32_MAX;
int16_t x1123 = INT16_MIN;
static int64_t x1140 = INT64_MIN;
int16_t x1154 = INT16_MAX;
uint8_t x1158 = UINT8_MAX;
volatile uint8_t x1161 = UINT8_MAX;
int64_t x1164 = -1182031264LL;
uint32_t x1165 = 6349853U;
volatile int64_t x1167 = -93984LL;
uint32_t x1169 = 2024720U;
volatile uint8_t x1171 = UINT8_MAX;
static uint64_t x1197 = 1773912501522LLU;
static uint8_t x1198 = 87U;
int64_t x1200 = INT64_MIN;
static uint64_t t161 = 11LLU;
static volatile uint64_t x1208 = 1469283612005449LLU;
uint64_t x1213 = UINT64_MAX;
int8_t x1214 = -3;
static uint32_t x1215 = 22331512U;
uint64_t t165 = UINT64_MAX;
int32_t x1228 = INT32_MIN;
static int64_t x1229 = INT64_MAX;
int64_t t167 = INT64_MAX;
int16_t x1238 = 9;
uint64_t x1240 = UINT64_MAX;
int64_t x1244 = INT64_MAX;
int16_t x1250 = INT16_MIN;
volatile int32_t t170 = -1657821;
int32_t x1266 = INT32_MIN;
int16_t x1290 = 698;
int32_t x1292 = 509552;
uint16_t x1301 = 32762U;
uint16_t x1302 = UINT16_MAX;
uint16_t x1313 = 4U;
int32_t t177 = -336201235;
volatile int16_t x1317 = INT16_MAX;
volatile int8_t x1350 = INT8_MIN;
int64_t x1373 = INT64_MAX;
int32_t x1374 = 2969;
uint64_t x1375 = 65903788708021LLU;
int64_t t185 = INT64_MAX;
uint64_t t186 = UINT64_MAX;
int8_t x1407 = INT8_MAX;
static int32_t t189 = INT32_MAX;
static uint8_t x1410 = 5U;
int32_t x1411 = INT32_MAX;
volatile int64_t x1416 = 1248LL;
volatile uint32_t x1426 = UINT32_MAX;
int64_t x1438 = -1LL;
static uint16_t x1440 = 14246U;
uint16_t x1442 = 425U;
uint16_t x1455 = 48U;
int16_t x1465 = 132;
uint16_t x1466 = 9185U;
volatile int16_t x1467 = -1;
static volatile int8_t x1477 = INT8_MAX;
static int8_t x1478 = -2;
int64_t x1487 = INT64_MIN;


void f0(void) {
    	int64_t x1 = 3523419063944071101LL;
	uint32_t x2 = 212742U;
	uint8_t x4 = 34U;
	static volatile int64_t t0 = -1767LL;

    t0 = (x1<<(x2==(x3!=x4)));

    if (t0 != 3523419063944071101LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int64_t x7 = -1LL;
	int32_t x8 = -1;
	int32_t t1 = -212;

    t1 = (x5<<(x6==(x7!=x8)));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x26 = 7888725U;

    t2 = (x25<<(x26==(x27!=x28)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x29 = 7U;
	volatile uint64_t x30 = 1266LLU;
	uint32_t x31 = 12U;
	uint8_t x32 = 0U;
	volatile int32_t t3 = -467111579;

    t3 = (x29<<(x30==(x31!=x32)));

    if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x37 = 1824U;
	int8_t x38 = INT8_MIN;

    t4 = (x37<<(x38==(x39!=x40)));

    if (t4 != 1824U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x49 = 0U;
	int8_t x51 = INT8_MIN;
	volatile int32_t t5 = 19;

    t5 = (x49<<(x50==(x51!=x52)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x77 = 0U;
	volatile int16_t x79 = -2;

    t6 = (x77<<(x78==(x79!=x80)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x81 = 216U;
	int8_t x82 = INT8_MAX;
	int8_t x83 = -1;
	int32_t t7 = 5;

    t7 = (x81<<(x82==(x83!=x84)));

    if (t7 != 216) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x85 = UINT16_MAX;
	static int16_t x86 = 642;
	static int8_t x87 = INT8_MAX;
	volatile int16_t x88 = INT16_MIN;
	static int32_t t8 = 87339101;

    t8 = (x85<<(x86==(x87!=x88)));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x90 = -1;
	int32_t x92 = INT32_MIN;
	volatile int32_t t9 = 183255;

    t9 = (x89<<(x90==(x91!=x92)));

    if (t9 != 42) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x98 = 1634;
	int16_t x99 = INT16_MAX;
	uint8_t x100 = 0U;

    t10 = (x97<<(x98==(x99!=x100)));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x109 = UINT32_MAX;
	uint64_t x110 = 3174536791031611641LLU;
	static uint16_t x112 = 37U;
	static volatile uint32_t t11 = UINT32_MAX;

    t11 = (x109<<(x110==(x111!=x112)));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x113 = INT32_MAX;
	int16_t x114 = INT16_MIN;
	static volatile int16_t x115 = -2;
	int32_t t12 = INT32_MAX;

    t12 = (x113<<(x114==(x115!=x116)));

    if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x125 = INT16_MAX;
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = 355U;
	int32_t t13 = 261090;

    t13 = (x125<<(x126==(x127!=x128)));

    if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x129 = INT64_MAX;
	int64_t x132 = 479987545128845LL;
	int64_t t14 = INT64_MAX;

    t14 = (x129<<(x130==(x131!=x132)));

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x133 = UINT8_MAX;
	uint16_t x134 = 2U;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = 143U;

    t15 = (x133<<(x134==(x135!=x136)));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x137 = 3U;
	volatile int32_t x138 = 1;
	static int64_t x139 = -1LL;
	volatile int64_t x140 = 1LL;
	static int32_t t16 = 0;

    t16 = (x137<<(x138==(x139!=x140)));

    if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x141 = 2473LL;
	uint8_t x142 = UINT8_MAX;
	int64_t x144 = -1LL;

    t17 = (x141<<(x142==(x143!=x144)));

    if (t17 != 2473LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x148 = 92756177133897LLU;
	static uint64_t t18 = UINT64_MAX;

    t18 = (x145<<(x146==(x147!=x148)));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x149 = UINT8_MAX;
	static int64_t x150 = -2413589170348LL;
	uint8_t x152 = UINT8_MAX;
	static int32_t t19 = -2587;

    t19 = (x149<<(x150==(x151!=x152)));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x153 = 1;
	int16_t x154 = 6;
	int8_t x155 = INT8_MIN;
	uint32_t x156 = 60U;
	volatile int32_t t20 = 1;

    t20 = (x153<<(x154==(x155!=x156)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x165 = INT8_MAX;
	int8_t x166 = INT8_MAX;
	int64_t x167 = INT64_MIN;
	uint64_t x168 = UINT64_MAX;
	volatile int32_t t21 = -96;

    t21 = (x165<<(x166==(x167!=x168)));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x169 = 50U;
	int16_t x170 = INT16_MIN;
	static int32_t x171 = -982476070;
	int64_t x172 = INT64_MIN;

    t22 = (x169<<(x170==(x171!=x172)));

    if (t22 != 50) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x173 = 3359105559558LLU;
	int64_t x174 = INT64_MAX;
	volatile int8_t x175 = INT8_MAX;
	static uint64_t x176 = 3068790587555853LLU;

    t23 = (x173<<(x174==(x175!=x176)));

    if (t23 != 3359105559558LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x177 = 0U;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = -1;
	int32_t x180 = INT32_MIN;
	volatile int32_t t24 = -105136;

    t24 = (x177<<(x178==(x179!=x180)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x189 = 29191U;
	static uint32_t x190 = 115263361U;
	int8_t x191 = -23;
	uint64_t x192 = 1431LLU;
	volatile int32_t t25 = 14450;

    t25 = (x189<<(x190==(x191!=x192)));

    if (t25 != 29191) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x205 = 0;
	int64_t x207 = -1LL;
	volatile int16_t x208 = -405;
	static volatile int32_t t26 = -490063410;

    t26 = (x205<<(x206==(x207!=x208)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x210 = UINT32_MAX;
	int64_t x211 = 1LL;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t27 = -2743;

    t27 = (x209<<(x210==(x211!=x212)));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x214 = 440649380965043619LL;
	static int32_t x216 = INT32_MIN;
	int64_t t28 = 25695094963947608LL;

    t28 = (x213<<(x214==(x215!=x216)));

    if (t28 != 130LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MIN;
	int8_t x219 = -1;
	int64_t x220 = 71174LL;

    t29 = (x217<<(x218==(x219!=x220)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x222 = 137028039246738913LLU;
	int8_t x223 = INT8_MIN;
	static volatile int32_t t30 = -7028863;

    t30 = (x221<<(x222==(x223!=x224)));

    if (t30 != 22277) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x232 = UINT32_MAX;
	static volatile uint64_t t31 = UINT64_MAX;

    t31 = (x229<<(x230==(x231!=x232)));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x233 = 4729U;
	int8_t x234 = INT8_MAX;
	volatile uint64_t x235 = 2LLU;
	static volatile int64_t x236 = 1452332447853LL;
	volatile uint32_t t32 = 3U;

    t32 = (x233<<(x234==(x235!=x236)));

    if (t32 != 4729U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x237 = UINT32_MAX;
	uint32_t x238 = 67378147U;
	int64_t x239 = 1276301359204921LL;
	volatile uint32_t t33 = UINT32_MAX;

    t33 = (x237<<(x238==(x239!=x240)));

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x245 = UINT32_MAX;
	int16_t x246 = -1;
	int8_t x247 = -1;
	uint8_t x248 = 10U;
	static uint32_t t34 = UINT32_MAX;

    t34 = (x245<<(x246==(x247!=x248)));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x257 = 167;
	static uint64_t x258 = 7LLU;
	uint32_t x259 = 1326561572U;
	uint8_t x260 = UINT8_MAX;

    t35 = (x257<<(x258==(x259!=x260)));

    if (t35 != 167) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x277 = 14U;
	static int8_t x278 = -1;
	static int32_t x279 = INT32_MIN;
	volatile int32_t t36 = 358243;

    t36 = (x277<<(x278==(x279!=x280)));

    if (t36 != 14) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x289 = 15366707020844LL;
	volatile int32_t x290 = INT32_MIN;
	int32_t x291 = 477;
	int32_t x292 = INT32_MIN;
	volatile int64_t t37 = 44677313LL;

    t37 = (x289<<(x290==(x291!=x292)));

    if (t37 != 15366707020844LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x301 = UINT8_MAX;
	int8_t x302 = INT8_MIN;
	static volatile int32_t x303 = INT32_MIN;
	static uint64_t x304 = UINT64_MAX;
	volatile int32_t t38 = 1;

    t38 = (x301<<(x302==(x303!=x304)));

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x305 = 109U;
	uint8_t x307 = 3U;
	volatile int32_t t39 = -424516712;

    t39 = (x305<<(x306==(x307!=x308)));

    if (t39 != 109) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x309 = 1;
	int8_t x310 = -1;
	volatile int8_t x311 = INT8_MIN;
	int32_t t40 = 339945;

    t40 = (x309<<(x310==(x311!=x312)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x317 = 495U;
	static uint64_t x319 = UINT64_MAX;
	volatile int32_t x320 = 633111457;
	uint32_t t41 = 995087391U;

    t41 = (x317<<(x318==(x319!=x320)));

    if (t41 != 495U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x322 = -13273396988407784LL;
	uint64_t x323 = UINT64_MAX;

    t42 = (x321<<(x322==(x323!=x324)));

    if (t42 != 7452) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x325 = INT64_MAX;
	volatile uint64_t x326 = 7170345016833440585LLU;
	volatile int8_t x327 = INT8_MAX;
	static uint64_t x328 = 327678201327LLU;
	int64_t t43 = INT64_MAX;

    t43 = (x325<<(x326==(x327!=x328)));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x333 = 2;
	volatile int8_t x334 = INT8_MAX;
	int32_t x336 = -50138;
	static volatile int32_t t44 = 211;

    t44 = (x333<<(x334==(x335!=x336)));

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x345 = INT16_MAX;
	int64_t x347 = -1044158493777519LL;
	int64_t x348 = INT64_MIN;

    t45 = (x345<<(x346==(x347!=x348)));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x349 = 7U;
	static uint16_t x350 = 24082U;
	static volatile uint16_t x351 = 434U;
	int8_t x352 = INT8_MAX;

    t46 = (x349<<(x350==(x351!=x352)));

    if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x353 = INT32_MAX;
	int64_t x354 = INT64_MIN;
	uint8_t x355 = UINT8_MAX;
	static uint16_t x356 = 29901U;
	static volatile int32_t t47 = INT32_MAX;

    t47 = (x353<<(x354==(x355!=x356)));

    if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x373 = 19538U;
	int16_t x375 = -1;
	int64_t x376 = INT64_MIN;
	static volatile uint32_t t48 = 1439U;

    t48 = (x373<<(x374==(x375!=x376)));

    if (t48 != 19538U) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x381 = 10683U;
	int64_t x382 = 27676724785615LL;
	int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t49 = 0;

    t49 = (x381<<(x382==(x383!=x384)));

    if (t49 != 10683) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x389 = 53625264LLU;
	int64_t x390 = INT64_MIN;
	int16_t x391 = -7;
	int64_t x392 = -1334544390LL;
	uint64_t t50 = 22836896638LLU;

    t50 = (x389<<(x390==(x391!=x392)));

    if (t50 != 53625264LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MAX;
	int8_t x395 = INT8_MIN;
	volatile int16_t x396 = INT16_MAX;
	volatile int32_t t51 = INT32_MAX;

    t51 = (x393<<(x394==(x395!=x396)));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x401 = 1299;
	uint32_t x402 = 15838627U;
	volatile int32_t x403 = INT32_MIN;
	volatile int8_t x404 = INT8_MIN;
	int32_t t52 = -229121;

    t52 = (x401<<(x402==(x403!=x404)));

    if (t52 != 1299) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x410 = 5U;
	uint8_t x412 = 6U;
	volatile uint64_t t53 = 225778010LLU;

    t53 = (x409<<(x410==(x411!=x412)));

    if (t53 != 1024LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x413 = INT8_MAX;
	int16_t x414 = INT16_MIN;
	int16_t x415 = 4;
	uint32_t x416 = 434U;
	int32_t t54 = 61;

    t54 = (x413<<(x414==(x415!=x416)));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x417 = 2;
	static int32_t x419 = INT32_MIN;
	static int16_t x420 = -1;

    t55 = (x417<<(x418==(x419!=x420)));

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x429 = UINT64_MAX;
	static volatile uint8_t x430 = 1U;
	int16_t x431 = INT16_MIN;
	static uint64_t t56 = 91LLU;

    t56 = (x429<<(x430==(x431!=x432)));

    if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x440 = 33U;
	uint32_t t57 = 109U;

    t57 = (x437<<(x438==(x439!=x440)));

    if (t57 != 863739U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x441 = INT32_MAX;
	uint8_t x442 = 10U;
	int64_t x443 = -1LL;
	uint64_t x444 = UINT64_MAX;
	static volatile int32_t t58 = INT32_MAX;

    t58 = (x441<<(x442==(x443!=x444)));

    if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x445 = 54U;
	int16_t x446 = -2868;
	int32_t x447 = -1;
	volatile int8_t x448 = INT8_MAX;
	volatile int32_t t59 = 7;

    t59 = (x445<<(x446==(x447!=x448)));

    if (t59 != 54) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x453 = 35;
	static volatile uint16_t x455 = 871U;
	volatile int32_t t60 = -28;

    t60 = (x453<<(x454==(x455!=x456)));

    if (t60 != 35) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x461 = 2;
	int8_t x462 = 20;
	uint8_t x463 = UINT8_MAX;
	int64_t x464 = 122432570565795LL;
	int32_t t61 = -36;

    t61 = (x461<<(x462==(x463!=x464)));

    if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x465 = UINT32_MAX;
	static int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MIN;
	int64_t x468 = -13483041154240LL;

    t62 = (x465<<(x466==(x467!=x468)));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x475 = INT16_MIN;
	static uint16_t x476 = 20939U;
	int32_t t63 = -874;

    t63 = (x473<<(x474==(x475!=x476)));

    if (t63 != 899) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x477 = 870LL;
	static volatile int16_t x478 = INT16_MAX;
	volatile uint8_t x479 = 1U;
	static uint64_t x480 = 94109288LLU;
	static volatile int64_t t64 = -16LL;

    t64 = (x477<<(x478==(x479!=x480)));

    if (t64 != 870LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x482 = -8;
	int32_t x483 = INT32_MIN;
	volatile int32_t x484 = INT32_MAX;
	static uint32_t t65 = 20732U;

    t65 = (x481<<(x482==(x483!=x484)));

    if (t65 != 93548U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x486 = INT32_MIN;
	static int16_t x487 = INT16_MAX;
	static int16_t x488 = -4;

    t66 = (x485<<(x486==(x487!=x488)));

    if (t66 != 683607463348115LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x493 = 503155U;
	int16_t x494 = INT16_MIN;
	int32_t x495 = -124817;
	int64_t x496 = INT64_MAX;
	static uint32_t t67 = 128022U;

    t67 = (x493<<(x494==(x495!=x496)));

    if (t67 != 503155U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x501 = 7290U;
	int32_t x503 = INT32_MIN;
	int16_t x504 = INT16_MAX;
	static int32_t t68 = -1837;

    t68 = (x501<<(x502==(x503!=x504)));

    if (t68 != 7290) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x505 = 5;
	int16_t x506 = INT16_MAX;
	int8_t x507 = INT8_MAX;
	int32_t t69 = 20;

    t69 = (x505<<(x506==(x507!=x508)));

    if (t69 != 5) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x513 = 1U;
	int64_t x514 = INT64_MIN;
	volatile int32_t x515 = -1;
	uint32_t x516 = UINT32_MAX;
	static volatile int32_t t70 = -2;

    t70 = (x513<<(x514==(x515!=x516)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x518 = INT8_MIN;
	volatile uint8_t x519 = 39U;
	int8_t x520 = 32;
	volatile int64_t t71 = INT64_MAX;

    t71 = (x517<<(x518==(x519!=x520)));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint8_t x521 = 7U;
	uint16_t x522 = 500U;
	uint64_t x523 = UINT64_MAX;
	int16_t x524 = INT16_MAX;
	int32_t t72 = -2152;

    t72 = (x521<<(x522==(x523!=x524)));

    if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x529 = 63;
	volatile uint8_t x530 = 5U;
	uint8_t x531 = UINT8_MAX;
	int8_t x532 = 18;
	static int32_t t73 = 13452;

    t73 = (x529<<(x530==(x531!=x532)));

    if (t73 != 63) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x533 = 32836;
	int16_t x534 = INT16_MIN;
	uint8_t x535 = UINT8_MAX;
	uint32_t x536 = UINT32_MAX;
	static volatile int32_t t74 = -90136;

    t74 = (x533<<(x534==(x535!=x536)));

    if (t74 != 32836) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x553 = 978U;
	int64_t x555 = INT64_MAX;
	int64_t x556 = 567023651313543755LL;
	int32_t t75 = 1;

    t75 = (x553<<(x554==(x555!=x556)));

    if (t75 != 978) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x557 = UINT8_MAX;
	int32_t x558 = -1;
	uint8_t x559 = 25U;
	uint64_t x560 = 2209712867718854LLU;

    t76 = (x557<<(x558==(x559!=x560)));

    if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x565 = 42U;
	int8_t x566 = INT8_MIN;
	static uint64_t x567 = UINT64_MAX;
	int8_t x568 = -11;
	volatile uint32_t t77 = 2U;

    t77 = (x565<<(x566==(x567!=x568)));

    if (t77 != 42U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x573 = 21U;
	uint32_t x575 = 285U;
	volatile int64_t x576 = INT64_MIN;
	int32_t t78 = 0;

    t78 = (x573<<(x574==(x575!=x576)));

    if (t78 != 21) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x578 = -1;
	int64_t x580 = -4414508850098540LL;
	volatile int32_t t79 = -5;

    t79 = (x577<<(x578==(x579!=x580)));

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x613 = 4;
	int64_t x614 = INT64_MAX;
	uint8_t x615 = 22U;
	uint8_t x616 = 0U;
	volatile int32_t t80 = -301;

    t80 = (x613<<(x614==(x615!=x616)));

    if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x623 = 16LLU;
	uint64_t x624 = 245LLU;
	static uint32_t t81 = 106074U;

    t81 = (x621<<(x622==(x623!=x624)));

    if (t81 != 74U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x629 = 2292240357309LL;
	int16_t x630 = INT16_MAX;
	int64_t x631 = INT64_MIN;
	int32_t x632 = 28771037;
	int64_t t82 = 1020652012LL;

    t82 = (x629<<(x630==(x631!=x632)));

    if (t82 != 2292240357309LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x633 = 2398;
	volatile int8_t x634 = INT8_MAX;
	int16_t x635 = INT16_MAX;
	static int16_t x636 = INT16_MIN;

    t83 = (x633<<(x634==(x635!=x636)));

    if (t83 != 2398) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x641 = INT32_MAX;
	int32_t x642 = INT32_MIN;
	uint16_t x643 = 18U;
	uint16_t x644 = UINT16_MAX;

    t84 = (x641<<(x642==(x643!=x644)));

    if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x645 = INT8_MAX;
	static int16_t x646 = -14;
	int64_t x647 = INT64_MIN;

    t85 = (x645<<(x646==(x647!=x648)));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x657 = 0;
	int8_t x658 = -1;
	uint8_t x659 = 2U;
	uint16_t x660 = 0U;

    t86 = (x657<<(x658==(x659!=x660)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x661 = 483U;
	int64_t x662 = -4200205123LL;
	int8_t x663 = -1;
	uint16_t x664 = 56U;
	volatile int32_t t87 = -4;

    t87 = (x661<<(x662==(x663!=x664)));

    if (t87 != 483) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x673 = INT64_MAX;
	static uint32_t x674 = 189U;
	uint8_t x675 = UINT8_MAX;
	int16_t x676 = -1;
	int64_t t88 = INT64_MAX;

    t88 = (x673<<(x674==(x675!=x676)));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x693 = UINT32_MAX;
	int16_t x694 = -555;
	uint32_t x695 = 11U;
	volatile uint8_t x696 = 43U;

    t89 = (x693<<(x694==(x695!=x696)));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile int16_t x707 = INT16_MIN;
	int8_t x708 = INT8_MAX;
	volatile int32_t t90 = -43;

    t90 = (x705<<(x706==(x707!=x708)));

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x709 = 3U;
	static int8_t x710 = -27;
	static int8_t x711 = INT8_MIN;
	uint32_t x712 = 325965U;
	uint32_t t91 = 312U;

    t91 = (x709<<(x710==(x711!=x712)));

    if (t91 != 3U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x722 = INT64_MIN;
	uint64_t x723 = UINT64_MAX;
	int32_t x724 = -55;
	int32_t t92 = -417;

    t92 = (x721<<(x722==(x723!=x724)));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x729 = 58U;
	uint64_t x730 = UINT64_MAX;
	int32_t x731 = 84;
	uint32_t x732 = 247361U;

    t93 = (x729<<(x730==(x731!=x732)));

    if (t93 != 58) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x745 = INT16_MAX;
	uint32_t x746 = 94386945U;
	volatile int8_t x747 = INT8_MAX;
	static uint8_t x748 = 1U;
	int32_t t94 = -982;

    t94 = (x745<<(x746==(x747!=x748)));

    if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x749 = INT64_MAX;
	static int16_t x750 = 10;
	volatile int8_t x752 = INT8_MAX;
	volatile int64_t t95 = INT64_MAX;

    t95 = (x749<<(x750==(x751!=x752)));

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x754 = 29U;
	int32_t x755 = 1;
	int16_t x756 = 0;
	static int32_t t96 = -3393004;

    t96 = (x753<<(x754==(x755!=x756)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x757 = 1671827963103696LL;
	int32_t x758 = INT32_MAX;
	uint16_t x759 = UINT16_MAX;
	int8_t x760 = -2;
	volatile int64_t t97 = -43611158856LL;

    t97 = (x757<<(x758==(x759!=x760)));

    if (t97 != 1671827963103696LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x761 = 248528438313836155LLU;
	int64_t x762 = INT64_MIN;
	static volatile uint32_t x763 = 954U;
	int16_t x764 = INT16_MAX;
	uint64_t t98 = 45604942841LLU;

    t98 = (x761<<(x762==(x763!=x764)));

    if (t98 != 248528438313836155LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x769 = 3;
	static int8_t x770 = -1;
	static volatile int64_t x771 = INT64_MAX;
	int64_t x772 = -310228809783096380LL;
	int32_t t99 = 115413;

    t99 = (x769<<(x770==(x771!=x772)));

    if (t99 != 3) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x781 = INT8_MAX;
	int8_t x782 = INT8_MAX;
	static int32_t t100 = -19;

    t100 = (x781<<(x782==(x783!=x784)));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x785 = INT32_MAX;
	int8_t x786 = 2;
	volatile int8_t x787 = -2;
	uint16_t x788 = 7U;

    t101 = (x785<<(x786==(x787!=x788)));

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x789 = INT8_MAX;
	int8_t x790 = -30;
	int64_t x791 = INT64_MAX;
	static volatile int16_t x792 = -1;
	volatile int32_t t102 = -80;

    t102 = (x789<<(x790==(x791!=x792)));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x793 = UINT8_MAX;
	int32_t x795 = INT32_MIN;
	int64_t x796 = 15LL;
	static volatile int32_t t103 = 206809;

    t103 = (x793<<(x794==(x795!=x796)));

    if (t103 != 255) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x797 = 493LLU;
	volatile int64_t x798 = -54734018974805101LL;
	int16_t x800 = -1;

    t104 = (x797<<(x798==(x799!=x800)));

    if (t104 != 493LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x802 = 123023191184LL;
	int16_t x803 = -1;

    t105 = (x801<<(x802==(x803!=x804)));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x805 = INT64_MAX;
	uint32_t x806 = 12U;
	volatile int64_t x807 = -1LL;
	int16_t x808 = INT16_MAX;
	int64_t t106 = INT64_MAX;

    t106 = (x805<<(x806==(x807!=x808)));

    if (t106 != INT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x809 = 7U;
	static int64_t x811 = 1646184LL;
	uint64_t x812 = UINT64_MAX;
	volatile uint32_t t107 = 353838U;

    t107 = (x809<<(x810==(x811!=x812)));

    if (t107 != 7U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x817 = 64U;
	static int64_t x818 = INT64_MIN;
	volatile uint16_t x819 = 1290U;
	volatile int32_t t108 = -58134910;

    t108 = (x817<<(x818==(x819!=x820)));

    if (t108 != 64) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x825 = INT32_MAX;
	int64_t x826 = INT64_MIN;
	uint32_t x827 = 68822U;
	volatile uint64_t x828 = 3781944LLU;
	int32_t t109 = INT32_MAX;

    t109 = (x825<<(x826==(x827!=x828)));

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x829 = 20536U;
	int16_t x830 = -64;
	uint8_t x831 = 6U;
	int32_t x832 = INT32_MIN;
	volatile int32_t t110 = -20;

    t110 = (x829<<(x830==(x831!=x832)));

    if (t110 != 20536) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x841 = UINT32_MAX;
	static int16_t x842 = -1;
	int32_t x843 = INT32_MIN;
	int64_t x844 = INT64_MIN;
	uint32_t t111 = UINT32_MAX;

    t111 = (x841<<(x842==(x843!=x844)));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x853 = 15;
	uint32_t x855 = UINT32_MAX;
	volatile int32_t t112 = -5;

    t112 = (x853<<(x854==(x855!=x856)));

    if (t112 != 15) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x862 = -1;
	int64_t x863 = INT64_MAX;
	int8_t x864 = INT8_MIN;
	volatile int32_t t113 = -647188;

    t113 = (x861<<(x862==(x863!=x864)));

    if (t113 != 232) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x865 = 16990698U;
	int16_t x866 = -1;
	uint64_t x867 = 470995977571938LLU;
	int64_t x868 = 2978LL;
	uint32_t t114 = 368980572U;

    t114 = (x865<<(x866==(x867!=x868)));

    if (t114 != 16990698U) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x873 = UINT32_MAX;
	static int8_t x875 = INT8_MIN;
	uint32_t t115 = UINT32_MAX;

    t115 = (x873<<(x874==(x875!=x876)));

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x885 = UINT64_MAX;
	static uint64_t x886 = 12LLU;
	int32_t x887 = INT32_MAX;
	static uint64_t t116 = UINT64_MAX;

    t116 = (x885<<(x886==(x887!=x888)));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x889 = 1U;
	static uint8_t x890 = UINT8_MAX;
	int8_t x891 = -8;
	volatile int32_t t117 = 247151;

    t117 = (x889<<(x890==(x891!=x892)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x893 = 14486U;
	uint8_t x894 = UINT8_MAX;
	volatile int16_t x896 = INT16_MIN;
	int32_t t118 = -35;

    t118 = (x893<<(x894==(x895!=x896)));

    if (t118 != 14486) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x897 = UINT32_MAX;
	static volatile int64_t x898 = 1964998876942780LL;
	static int64_t x900 = INT64_MAX;
	uint32_t t119 = UINT32_MAX;

    t119 = (x897<<(x898==(x899!=x900)));

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x905 = 94U;
	int16_t x906 = -1;
	int64_t x907 = 25705248LL;
	int8_t x908 = -4;

    t120 = (x905<<(x906==(x907!=x908)));

    if (t120 != 94) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x910 = INT16_MAX;
	int64_t x911 = -965680LL;
	volatile int32_t t121 = -3019;

    t121 = (x909<<(x910==(x911!=x912)));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x913 = 1030901903183LL;
	static int16_t x914 = 1;
	static int8_t x915 = -48;
	static uint16_t x916 = UINT16_MAX;
	volatile int64_t t122 = 1117913691LL;

    t122 = (x913<<(x914==(x915!=x916)));

    if (t122 != 2061803806366LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x925 = 102398981LLU;
	int16_t x926 = INT16_MIN;
	volatile int64_t x928 = INT64_MAX;

    t123 = (x925<<(x926==(x927!=x928)));

    if (t123 != 102398981LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x929 = 8358995629484LL;
	static int32_t x930 = 9191576;
	int16_t x931 = -1;
	int64_t x932 = -1LL;
	volatile int64_t t124 = 102836513622872LL;

    t124 = (x929<<(x930==(x931!=x932)));

    if (t124 != 8358995629484LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x937 = 1;
	volatile int32_t t125 = 949758;

    t125 = (x937<<(x938==(x939!=x940)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x941 = 76U;
	int32_t t126 = -132900;

    t126 = (x941<<(x942==(x943!=x944)));

    if (t126 != 76) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x949 = 3;
	int8_t x950 = -1;
	int32_t x951 = INT32_MAX;
	volatile int32_t t127 = 397024190;

    t127 = (x949<<(x950==(x951!=x952)));

    if (t127 != 3) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x967 = INT8_MIN;
	static uint16_t x968 = 28U;
	int32_t t128 = -1354;

    t128 = (x965<<(x966==(x967!=x968)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x969 = INT64_MAX;
	volatile int16_t x970 = 9212;
	static int32_t x971 = -1;
	int16_t x972 = INT16_MIN;
	int64_t t129 = INT64_MAX;

    t129 = (x969<<(x970==(x971!=x972)));

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x977 = UINT16_MAX;
	int16_t x978 = INT16_MIN;
	int32_t x979 = INT32_MAX;
	int64_t x980 = -4LL;
	int32_t t130 = -8;

    t130 = (x977<<(x978==(x979!=x980)));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x982 = 1826755978LLU;
	int64_t x983 = INT64_MIN;
	volatile int64_t x984 = -1LL;
	int32_t t131 = INT32_MAX;

    t131 = (x981<<(x982==(x983!=x984)));

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x1005 = UINT8_MAX;
	int32_t x1006 = INT32_MIN;
	int8_t x1007 = 1;
	static volatile uint32_t x1008 = 306418U;
	int32_t t132 = -305;

    t132 = (x1005<<(x1006==(x1007!=x1008)));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x1013 = UINT64_MAX;
	int8_t x1014 = INT8_MIN;
	int32_t x1015 = INT32_MIN;
	volatile uint64_t t133 = UINT64_MAX;

    t133 = (x1013<<(x1014==(x1015!=x1016)));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x1030 = INT32_MIN;
	static uint32_t x1031 = 543U;
	uint32_t x1032 = 1U;
	int64_t t134 = -5796155LL;

    t134 = (x1029<<(x1030==(x1031!=x1032)));

    if (t134 != 2611777LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x1034 = 4U;
	int16_t x1036 = INT16_MIN;

    t135 = (x1033<<(x1034==(x1035!=x1036)));

    if (t135 != 4703) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x1037 = 52U;
	volatile int16_t x1038 = INT16_MAX;
	int32_t x1039 = 45464;
	int8_t x1040 = -5;
	volatile int32_t t136 = -505160;

    t136 = (x1037<<(x1038==(x1039!=x1040)));

    if (t136 != 52) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1042 = INT16_MIN;
	int8_t x1043 = INT8_MAX;
	int32_t x1044 = -2646;
	int32_t t137 = -3223492;

    t137 = (x1041<<(x1042==(x1043!=x1044)));

    if (t137 != 46) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x1045 = 10U;
	uint32_t x1046 = 825U;
	uint32_t x1047 = UINT32_MAX;
	static volatile int32_t x1048 = -1;
	int32_t t138 = -455205618;

    t138 = (x1045<<(x1046==(x1047!=x1048)));

    if (t138 != 10) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1049 = 3U;
	volatile int64_t x1050 = INT64_MAX;
	volatile int32_t x1051 = INT32_MIN;

    t139 = (x1049<<(x1050==(x1051!=x1052)));

    if (t139 != 3) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1057 = UINT8_MAX;
	int64_t x1058 = INT64_MIN;
	static uint64_t x1060 = UINT64_MAX;

    t140 = (x1057<<(x1058==(x1059!=x1060)));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x1065 = 54U;
	uint32_t x1066 = UINT32_MAX;
	int64_t x1067 = -1LL;
	uint16_t x1068 = 48U;
	static int32_t t141 = 245;

    t141 = (x1065<<(x1066==(x1067!=x1068)));

    if (t141 != 54) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x1069 = 127U;
	volatile int16_t x1070 = 6;
	int8_t x1072 = -1;
	volatile int32_t t142 = -59397097;

    t142 = (x1069<<(x1070==(x1071!=x1072)));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1073 = 53U;
	volatile int16_t x1074 = -4565;
	uint64_t x1075 = UINT64_MAX;
	volatile int8_t x1076 = 0;

    t143 = (x1073<<(x1074==(x1075!=x1076)));

    if (t143 != 53) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x1077 = 639LLU;
	volatile int32_t x1079 = INT32_MAX;
	int64_t x1080 = INT64_MIN;
	uint64_t t144 = 490646705LLU;

    t144 = (x1077<<(x1078==(x1079!=x1080)));

    if (t144 != 639LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1085 = UINT32_MAX;
	static volatile uint32_t x1086 = 23U;
	uint64_t x1087 = UINT64_MAX;
	int32_t x1088 = 99;
	static uint32_t t145 = UINT32_MAX;

    t145 = (x1085<<(x1086==(x1087!=x1088)));

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1094 = 129756382673768LL;
	int8_t x1095 = INT8_MIN;
	int64_t x1096 = INT64_MAX;
	static volatile int32_t t146 = 456;

    t146 = (x1093<<(x1094==(x1095!=x1096)));

    if (t146 != 10374) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1097 = 611;
	int8_t x1098 = INT8_MIN;
	uint8_t x1099 = UINT8_MAX;
	int32_t t147 = 1;

    t147 = (x1097<<(x1098==(x1099!=x1100)));

    if (t147 != 611) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1113 = INT64_MAX;
	int8_t x1114 = INT8_MAX;
	volatile int64_t x1115 = INT64_MAX;
	int16_t x1116 = INT16_MIN;
	volatile int64_t t148 = INT64_MAX;

    t148 = (x1113<<(x1114==(x1115!=x1116)));

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x1117 = UINT8_MAX;
	volatile int32_t x1118 = INT32_MIN;
	int8_t x1119 = -1;
	int64_t x1120 = 348160755LL;
	volatile int32_t t149 = -200365;

    t149 = (x1117<<(x1118==(x1119!=x1120)));

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1121 = 2U;
	uint64_t x1122 = 9209365958734078317LLU;
	uint64_t x1124 = 2776730208032389537LLU;
	static int32_t t150 = -748353;

    t150 = (x1121<<(x1122==(x1123!=x1124)));

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1129 = UINT64_MAX;
	uint16_t x1130 = 248U;
	int8_t x1131 = -1;
	int32_t x1132 = INT32_MAX;
	volatile uint64_t t151 = UINT64_MAX;

    t151 = (x1129<<(x1130==(x1131!=x1132)));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x1137 = INT32_MAX;
	uint8_t x1138 = UINT8_MAX;
	int32_t x1139 = INT32_MAX;
	int32_t t152 = INT32_MAX;

    t152 = (x1137<<(x1138==(x1139!=x1140)));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1145 = 0;
	int32_t x1146 = -93792;
	volatile int8_t x1147 = INT8_MIN;
	uint8_t x1148 = 5U;
	int32_t t153 = -13169768;

    t153 = (x1145<<(x1146==(x1147!=x1148)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x1149 = UINT32_MAX;
	int8_t x1150 = 10;
	int16_t x1151 = 7301;
	volatile int32_t x1152 = INT32_MIN;
	static volatile uint32_t t154 = UINT32_MAX;

    t154 = (x1149<<(x1150==(x1151!=x1152)));

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x1153 = UINT64_MAX;
	int8_t x1155 = INT8_MAX;
	static volatile int32_t x1156 = -261542351;
	uint64_t t155 = UINT64_MAX;

    t155 = (x1153<<(x1154==(x1155!=x1156)));

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1157 = 12U;
	uint32_t x1159 = UINT32_MAX;
	int32_t x1160 = -323749;
	static volatile int32_t t156 = 105;

    t156 = (x1157<<(x1158==(x1159!=x1160)));

    if (t156 != 12) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1162 = INT16_MIN;
	int32_t x1163 = -1362;
	volatile int32_t t157 = -214269717;

    t157 = (x1161<<(x1162==(x1163!=x1164)));

    if (t157 != 255) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1166 = -3065;
	int16_t x1168 = 771;
	uint32_t t158 = 26U;

    t158 = (x1165<<(x1166==(x1167!=x1168)));

    if (t158 != 6349853U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1170 = INT64_MAX;
	uint16_t x1172 = UINT16_MAX;
	volatile uint32_t t159 = 1U;

    t159 = (x1169<<(x1170==(x1171!=x1172)));

    if (t159 != 2024720U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1173 = 243317409509620LL;
	volatile uint8_t x1174 = 0U;
	static uint32_t x1175 = 2764564U;
	int8_t x1176 = INT8_MAX;
	volatile int64_t t160 = 5921648742985LL;

    t160 = (x1173<<(x1174==(x1175!=x1176)));

    if (t160 != 243317409509620LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x1199 = UINT16_MAX;

    t161 = (x1197<<(x1198==(x1199!=x1200)));

    if (t161 != 1773912501522LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1205 = 364969LL;
	int8_t x1206 = 14;
	volatile int64_t x1207 = INT64_MIN;
	volatile int64_t t162 = -1184150830510062LL;

    t162 = (x1205<<(x1206==(x1207!=x1208)));

    if (t162 != 364969LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1209 = 544933010091LL;
	volatile int16_t x1210 = -1;
	int32_t x1211 = -704102167;
	uint16_t x1212 = UINT16_MAX;
	volatile int64_t t163 = 1LL;

    t163 = (x1209<<(x1210==(x1211!=x1212)));

    if (t163 != 544933010091LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1216 = -881;
	volatile uint64_t t164 = UINT64_MAX;

    t164 = (x1213<<(x1214==(x1215!=x1216)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1217 = UINT64_MAX;
	int16_t x1218 = INT16_MIN;
	int16_t x1219 = INT16_MIN;
	static uint8_t x1220 = UINT8_MAX;

    t165 = (x1217<<(x1218==(x1219!=x1220)));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1225 = 98U;
	volatile int16_t x1226 = 0;
	static uint16_t x1227 = UINT16_MAX;
	static int32_t t166 = -13;

    t166 = (x1225<<(x1226==(x1227!=x1228)));

    if (t166 != 98) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1230 = 118U;
	int16_t x1231 = INT16_MAX;
	static int64_t x1232 = INT64_MAX;

    t167 = (x1229<<(x1230==(x1231!=x1232)));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1237 = UINT8_MAX;
	int64_t x1239 = -1LL;
	static volatile int32_t t168 = 55282576;

    t168 = (x1237<<(x1238==(x1239!=x1240)));

    if (t168 != 255) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1241 = INT64_MAX;
	int32_t x1242 = -22;
	static int16_t x1243 = 106;
	volatile int64_t t169 = INT64_MAX;

    t169 = (x1241<<(x1242==(x1243!=x1244)));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1249 = 1110U;
	static int64_t x1251 = 1LL;
	uint16_t x1252 = UINT16_MAX;

    t170 = (x1249<<(x1250==(x1251!=x1252)));

    if (t170 != 1110) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1257 = 0U;
	uint16_t x1258 = UINT16_MAX;
	static int16_t x1259 = INT16_MIN;
	static int32_t x1260 = -459447280;
	volatile int32_t t171 = 7;

    t171 = (x1257<<(x1258==(x1259!=x1260)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1265 = 1928485U;
	volatile int16_t x1267 = -1;
	uint32_t x1268 = 845U;
	static uint32_t t172 = 25122U;

    t172 = (x1265<<(x1266==(x1267!=x1268)));

    if (t172 != 1928485U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x1281 = 482U;
	uint64_t x1282 = 491539241151LLU;
	static volatile int32_t x1283 = 1152899;
	volatile uint16_t x1284 = 7U;
	uint32_t t173 = 616320498U;

    t173 = (x1281<<(x1282==(x1283!=x1284)));

    if (t173 != 482U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x1289 = 46925734U;
	volatile int32_t x1291 = -628;
	volatile uint32_t t174 = 6790773U;

    t174 = (x1289<<(x1290==(x1291!=x1292)));

    if (t174 != 46925734U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1303 = -1;
	volatile int16_t x1304 = 12043;
	volatile int32_t t175 = 4055;

    t175 = (x1301<<(x1302==(x1303!=x1304)));

    if (t175 != 32762) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1305 = INT16_MAX;
	uint8_t x1306 = 2U;
	uint32_t x1307 = 22538U;
	int32_t x1308 = -950;
	volatile int32_t t176 = 24821;

    t176 = (x1305<<(x1306==(x1307!=x1308)));

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x1314 = INT32_MIN;
	int32_t x1315 = -1;
	int32_t x1316 = INT32_MIN;

    t177 = (x1313<<(x1314==(x1315!=x1316)));

    if (t177 != 4) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x1318 = INT16_MIN;
	uint32_t x1319 = 676030189U;
	int8_t x1320 = 1;
	int32_t t178 = -177021;

    t178 = (x1317<<(x1318==(x1319!=x1320)));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1321 = 4;
	static volatile uint16_t x1322 = 25635U;
	static int8_t x1323 = INT8_MAX;
	static int64_t x1324 = INT64_MAX;
	volatile int32_t t179 = 0;

    t179 = (x1321<<(x1322==(x1323!=x1324)));

    if (t179 != 4) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1329 = 3883U;
	volatile uint16_t x1330 = UINT16_MAX;
	uint8_t x1331 = 0U;
	static int32_t x1332 = INT32_MAX;
	int32_t t180 = 42392240;

    t180 = (x1329<<(x1330==(x1331!=x1332)));

    if (t180 != 3883) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1337 = 13U;
	uint8_t x1338 = 2U;
	int16_t x1339 = -1;
	int64_t x1340 = INT64_MAX;
	volatile int32_t t181 = 291740281;

    t181 = (x1337<<(x1338==(x1339!=x1340)));

    if (t181 != 13) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1341 = UINT8_MAX;
	int16_t x1342 = INT16_MIN;
	uint8_t x1343 = 50U;
	int32_t x1344 = INT32_MIN;
	volatile int32_t t182 = -7610108;

    t182 = (x1341<<(x1342==(x1343!=x1344)));

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x1349 = 3828379U;
	int8_t x1351 = INT8_MAX;
	static int64_t x1352 = -1LL;
	volatile uint32_t t183 = 154222336U;

    t183 = (x1349<<(x1350==(x1351!=x1352)));

    if (t183 != 3828379U) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x1357 = UINT16_MAX;
	int32_t x1358 = INT32_MAX;
	static volatile int16_t x1359 = INT16_MAX;
	int8_t x1360 = -1;
	int32_t t184 = -15;

    t184 = (x1357<<(x1358==(x1359!=x1360)));

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x1376 = 2660U;

    t185 = (x1373<<(x1374==(x1375!=x1376)));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1377 = UINT64_MAX;
	uint8_t x1378 = UINT8_MAX;
	int16_t x1379 = -1;
	uint64_t x1380 = UINT64_MAX;

    t186 = (x1377<<(x1378==(x1379!=x1380)));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1385 = 16U;
	int32_t x1386 = INT32_MAX;
	uint32_t x1387 = 192U;
	uint16_t x1388 = 0U;
	volatile int32_t t187 = 316;

    t187 = (x1385<<(x1386==(x1387!=x1388)));

    if (t187 != 16) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1397 = INT8_MAX;
	int8_t x1398 = -1;
	uint32_t x1399 = UINT32_MAX;
	int8_t x1400 = -11;
	int32_t t188 = -75842005;

    t188 = (x1397<<(x1398==(x1399!=x1400)));

    if (t188 != 127) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1405 = INT32_MAX;
	static volatile uint32_t x1406 = 51U;
	int8_t x1408 = -1;

    t189 = (x1405<<(x1406==(x1407!=x1408)));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1409 = 154799085919LLU;
	int64_t x1412 = -1LL;
	volatile uint64_t t190 = 20782256307LLU;

    t190 = (x1409<<(x1410==(x1411!=x1412)));

    if (t190 != 154799085919LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1413 = 62U;
	static int32_t x1414 = INT32_MIN;
	uint16_t x1415 = 0U;
	int32_t t191 = -6;

    t191 = (x1413<<(x1414==(x1415!=x1416)));

    if (t191 != 62) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1417 = 0;
	static int64_t x1418 = -1LL;
	static uint64_t x1419 = UINT64_MAX;
	int64_t x1420 = INT64_MAX;
	volatile int32_t t192 = 2663;

    t192 = (x1417<<(x1418==(x1419!=x1420)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1425 = 16264U;
	uint32_t x1427 = 10U;
	int64_t x1428 = INT64_MIN;
	static volatile uint32_t t193 = 0U;

    t193 = (x1425<<(x1426==(x1427!=x1428)));

    if (t193 != 16264U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1437 = 5100756U;
	int32_t x1439 = 818330023;
	uint32_t t194 = 256U;

    t194 = (x1437<<(x1438==(x1439!=x1440)));

    if (t194 != 5100756U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x1441 = INT16_MAX;
	int32_t x1443 = -1;
	uint64_t x1444 = 17496336LLU;
	volatile int32_t t195 = -5758065;

    t195 = (x1441<<(x1442==(x1443!=x1444)));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1453 = INT8_MAX;
	static int32_t x1454 = 759;
	volatile int8_t x1456 = 32;
	volatile int32_t t196 = -975;

    t196 = (x1453<<(x1454==(x1455!=x1456)));

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1468 = UINT8_MAX;
	volatile int32_t t197 = -118078;

    t197 = (x1465<<(x1466==(x1467!=x1468)));

    if (t197 != 132) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1479 = -1;
	uint64_t x1480 = 1080352941695952LLU;
	volatile int32_t t198 = 1436;

    t198 = (x1477<<(x1478==(x1479!=x1480)));

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1485 = 4186;
	int16_t x1486 = 63;
	static volatile int32_t x1488 = INT32_MIN;
	int32_t t199 = -59093;

    t199 = (x1485<<(x1486==(x1487!=x1488)));

    if (t199 != 4186) { NG(); } else { ; }
	
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

