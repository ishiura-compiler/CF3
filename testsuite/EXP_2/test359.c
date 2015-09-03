#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
int32_t x4 = -1;
static int32_t x13 = 309367;
int8_t x14 = INT8_MAX;
uint8_t x17 = 78U;
static uint16_t x24 = 9U;
volatile int8_t x43 = -7;
int32_t t9 = -37395;
uint16_t x47 = 8159U;
static int32_t x57 = INT32_MAX;
int32_t x58 = INT32_MIN;
volatile int32_t t11 = -116946;
volatile int32_t t12 = -15;
volatile int64_t x73 = -597554366LL;
volatile uint32_t x77 = 477U;
uint16_t x83 = 664U;
volatile uint8_t x84 = 5U;
volatile int32_t t15 = 1;
uint32_t x100 = 0U;
int32_t x108 = INT32_MIN;
static uint8_t x109 = 12U;
int32_t x111 = INT32_MIN;
uint16_t x116 = UINT16_MAX;
int32_t t21 = -48667;
uint32_t x117 = 15U;
int16_t x126 = INT16_MAX;
uint64_t x127 = 0LLU;
uint64_t x128 = 5LLU;
static volatile uint8_t x141 = 12U;
int8_t x143 = 12;
uint8_t x144 = UINT8_MAX;
int32_t t24 = -20;
uint16_t x149 = UINT16_MAX;
volatile int32_t x153 = 274916;
volatile int64_t x156 = INT64_MIN;
int32_t t27 = -1003151;
uint8_t x167 = 2U;
int64_t x168 = 20003419157706733LL;
int16_t x174 = -1;
int64_t x184 = -6LL;
static int32_t x185 = INT32_MAX;
volatile int32_t x191 = -1;
volatile int32_t t33 = -5642;
volatile int8_t x202 = -1;
int32_t x203 = -3071063;
volatile int64_t x205 = 26LL;
static int32_t x219 = 135;
volatile uint64_t x225 = UINT64_MAX;
uint16_t x226 = 218U;
uint16_t x227 = 1199U;
volatile int64_t x228 = -784972890541354LL;
volatile uint64_t x229 = 104443243LLU;
int16_t x242 = INT16_MIN;
volatile uint8_t x243 = 4U;
int8_t x244 = INT8_MIN;
int32_t x246 = INT32_MIN;
volatile int32_t t45 = 1546;
static volatile int32_t x249 = 186;
uint16_t x251 = 1797U;
uint32_t x275 = 1419536U;
int64_t x280 = INT64_MIN;
static int16_t x291 = -1;
uint32_t x292 = 510158472U;
static int32_t x300 = 0;
static int64_t x314 = 474563854551LL;
uint32_t x321 = UINT32_MAX;
int32_t x332 = INT32_MIN;
static volatile int32_t t60 = -7;
static uint16_t x333 = UINT16_MAX;
int16_t x334 = -1;
static int16_t x345 = INT16_MIN;
int32_t x356 = INT32_MAX;
volatile int32_t x363 = INT32_MAX;
int32_t x364 = INT32_MIN;
static int32_t t65 = -1764;
int8_t x368 = INT8_MIN;
static volatile uint64_t x379 = 14455537347219695LLU;
uint64_t x383 = 30422LLU;
volatile int32_t t70 = 55;
int32_t x391 = 3229933;
static int8_t x395 = 0;
static int32_t t72 = -31;
uint64_t x402 = 19LLU;
uint16_t x403 = UINT16_MAX;
int32_t x415 = -1;
int64_t x418 = 57335755373LL;
int32_t x422 = 69;
static uint32_t x424 = 16293U;
int16_t x425 = INT16_MAX;
static int8_t x431 = 14;
int8_t x442 = 31;
uint32_t x448 = 2U;
static int32_t t85 = 7879;
volatile int32_t t87 = -37900655;
int64_t x457 = 1087164231326841LL;
int8_t x458 = INT8_MIN;
volatile int32_t t88 = -117082976;
int64_t x464 = 9108053502186LL;
static int16_t x466 = 2;
volatile uint64_t x467 = 152962469LLU;
int32_t t90 = -21340;
uint16_t x470 = UINT16_MAX;
int16_t x471 = INT16_MIN;
int32_t t91 = -12553;
int32_t t92 = 16469380;
uint32_t x481 = 173530189U;
static volatile int64_t x484 = INT64_MAX;
static int32_t t93 = 122486;
int32_t t95 = -199749;
uint8_t x502 = 5U;
uint8_t x504 = 17U;
static uint32_t x508 = UINT32_MAX;
static uint32_t x510 = UINT32_MAX;
int32_t t98 = 363705478;
int32_t x516 = INT32_MAX;
volatile int32_t t99 = -15883686;


void f0(void) {
	volatile uint64_t x1 = 12778900863576LLU;
	static int64_t x3 = INT64_MAX;
	volatile int32_t t0 = 113;

	t0 = ((x1-(x2*x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x6 = 148244602LLU;
	int32_t x7 = -1;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = -1;

	t1 = ((x5-(x6*x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	static int64_t x10 = -1LL;
	volatile uint32_t x11 = UINT32_MAX;
	uint16_t x12 = 20U;
	volatile int32_t t2 = -62419009;

	t2 = ((x9-(x10*x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = 203;
	static volatile int64_t x16 = INT64_MIN;
	int32_t t3 = 1;

	t3 = ((x13-(x14*x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 47;
	static uint16_t x19 = UINT16_MAX;
	int16_t x20 = -1;
	int32_t t4 = 24469848;

	t4 = ((x17-(x18*x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static uint16_t x22 = 1U;
	int16_t x23 = -1;
	volatile int32_t t5 = 406894;

	t5 = ((x21-(x22*x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	int64_t x26 = -1LL;
	volatile int16_t x27 = -1;
	static int64_t x28 = -1LL;
	int32_t t6 = 56941348;

	t6 = ((x25-(x26*x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -1;
	int32_t x30 = INT32_MIN;
	int64_t x31 = 5476LL;
	static uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = 2;

	t7 = ((x29-(x30*x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -7;
	volatile uint16_t x38 = 183U;
	uint8_t x39 = 0U;
	uint64_t x40 = 373359605063070LLU;
	int32_t t8 = 49503;

	t8 = ((x37-(x38*x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	static uint16_t x42 = UINT16_MAX;
	int32_t x44 = -852611515;

	t9 = ((x41-(x42*x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = -1;
	volatile uint16_t x48 = UINT16_MAX;
	int32_t t10 = 38;

	t10 = ((x45-(x46*x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x59 = 389LL;
	uint32_t x60 = UINT32_MAX;

	t11 = ((x57-(x58*x59))==x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = UINT16_MAX;
	static int16_t x70 = INT16_MIN;
	uint8_t x71 = 12U;
	int16_t x72 = INT16_MIN;

	t12 = ((x69-(x70*x71))==x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x74 = INT64_MAX;
	uint8_t x75 = 0U;
	static uint8_t x76 = UINT8_MAX;
	int32_t t13 = -1;

	t13 = ((x73-(x74*x75))==x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x78 = 28U;
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = -1;
	volatile int32_t t14 = -9244;

	t14 = ((x77-(x78*x79))==x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = 63U;
	uint64_t x82 = 75864LLU;

	t15 = ((x81-(x82*x83))==x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x93 = -49;
	static int32_t x94 = -4;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = 7U;
	int32_t t16 = -4091;

	t16 = ((x93-(x94*x95))==x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -3516257LL;
	uint8_t x98 = 26U;
	volatile int16_t x99 = INT16_MIN;
	static int32_t t17 = 137388;

	t17 = ((x97-(x98*x99))==x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = 0U;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = -1;
	uint8_t x104 = UINT8_MAX;
	int32_t t18 = -86069517;

	t18 = ((x101-(x102*x103))==x104);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MAX;
	volatile int16_t x107 = INT16_MIN;
	volatile int32_t t19 = 87981;

	t19 = ((x105-(x106*x107))==x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x110 = -1LL;
	int32_t x112 = 813948;
	static volatile int32_t t20 = 20;

	t20 = ((x109-(x110*x111))==x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = 265560;
	uint32_t x114 = 166262745U;
	uint32_t x115 = 28149U;

	t21 = ((x113-(x114*x115))==x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = 1;
	uint8_t x119 = 1U;
	static int32_t x120 = INT32_MIN;
	int32_t t22 = 610527;

	t22 = ((x117-(x118*x119))==x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x125 = INT32_MIN;
	int32_t t23 = -1899393;

	t23 = ((x125-(x126*x127))==x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x142 = -1;

	t24 = ((x141-(x142*x143))==x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x145 = -18LL;
	int16_t x146 = -1;
	int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MAX;
	static int32_t t25 = -12;

	t25 = ((x145-(x146*x147))==x148);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t26 = 46;

	t26 = ((x149-(x150*x151))==x152);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x154 = 231U;
	static uint32_t x155 = 2996U;

	t27 = ((x153-(x154*x155))==x156);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x157 = UINT32_MAX;
	static int16_t x158 = -50;
	uint8_t x159 = UINT8_MAX;
	volatile uint64_t x160 = 65886764280LLU;
	volatile int32_t t28 = 1020870051;

	t28 = ((x157-(x158*x159))==x160);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = -1;
	static uint8_t x166 = UINT8_MAX;
	int32_t t29 = 670807676;

	t29 = ((x165-(x166*x167))==x168);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x173 = INT16_MIN;
	static int64_t x175 = -1LL;
	uint16_t x176 = 615U;
	int32_t t30 = 7889;

	t30 = ((x173-(x174*x175))==x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x181 = 17;
	static int8_t x182 = 37;
	volatile int16_t x183 = 13731;
	int32_t t31 = 7105076;

	t31 = ((x181-(x182*x183))==x184);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x186 = 13;
	uint32_t x187 = UINT32_MAX;
	uint16_t x188 = UINT16_MAX;
	int32_t t32 = -406266740;

	t32 = ((x185-(x186*x187))==x188);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x189 = 17671505U;
	int64_t x190 = -48LL;
	static int64_t x192 = INT64_MIN;

	t33 = ((x189-(x190*x191))==x192);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x193 = -951440;
	int32_t x194 = -6581435;
	static volatile uint8_t x195 = UINT8_MAX;
	volatile uint64_t x196 = 4177516LLU;
	volatile int32_t t34 = -14;

	t34 = ((x193-(x194*x195))==x196);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x197 = INT32_MIN;
	static int8_t x198 = INT8_MAX;
	uint32_t x199 = 922993028U;
	int64_t x200 = INT64_MIN;
	int32_t t35 = 0;

	t35 = ((x197-(x198*x199))==x200);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x201 = INT8_MIN;
	volatile int64_t x204 = 665715687727580812LL;
	int32_t t36 = 3;

	t36 = ((x201-(x202*x203))==x204);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x206 = 14668665U;
	uint32_t x207 = 700583U;
	int64_t x208 = -1LL;
	volatile int32_t t37 = 32702732;

	t37 = ((x205-(x206*x207))==x208);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = -25;
	volatile uint8_t x214 = 1U;
	int8_t x215 = -2;
	int8_t x216 = INT8_MIN;
	int32_t t38 = -448;

	t38 = ((x213-(x214*x215))==x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x217 = 27789;
	static uint64_t x218 = 8344LLU;
	uint32_t x220 = 47161851U;
	int32_t t39 = 104650796;

	t39 = ((x217-(x218*x219))==x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x221 = 24U;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t40 = 250874;

	t40 = ((x221-(x222*x223))==x224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t t41 = -360474820;

	t41 = ((x225-(x226*x227))==x228);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x230 = 1514771774U;
	static uint32_t x231 = UINT32_MAX;
	volatile int64_t x232 = 5174248LL;
	int32_t t42 = -2473;

	t42 = ((x229-(x230*x231))==x232);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x237 = 109303;
	uint64_t x238 = 14476099LLU;
	static int8_t x239 = 0;
	int32_t x240 = INT32_MAX;
	static int32_t t43 = -1;

	t43 = ((x237-(x238*x239))==x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x241 = 963LL;
	int32_t t44 = 2680810;

	t44 = ((x241-(x242*x243))==x244);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x245 = INT16_MAX;
	volatile uint64_t x247 = 52707LLU;
	static int8_t x248 = -1;

	t45 = ((x245-(x246*x247))==x248);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x250 = 41;
	uint8_t x252 = 7U;
	static int32_t t46 = 38;

	t46 = ((x249-(x250*x251))==x252);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x253 = 8U;
	static uint32_t x254 = 11U;
	uint8_t x255 = UINT8_MAX;
	int64_t x256 = INT64_MIN;
	static volatile int32_t t47 = 60981983;

	t47 = ((x253-(x254*x255))==x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x257 = 215128705U;
	static volatile int8_t x258 = INT8_MIN;
	uint32_t x259 = 1788U;
	volatile int16_t x260 = -1;
	int32_t t48 = 7003;

	t48 = ((x257-(x258*x259))==x260);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x261 = 4408950087411482383LL;
	volatile int64_t x262 = 1622520916784LL;
	volatile int8_t x263 = INT8_MIN;
	volatile int16_t x264 = 980;
	int32_t t49 = -1923775;

	t49 = ((x261-(x262*x263))==x264);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x269 = 7U;
	uint32_t x270 = 2544U;
	volatile uint32_t x271 = 385U;
	volatile uint8_t x272 = UINT8_MAX;
	int32_t t50 = -139370;

	t50 = ((x269-(x270*x271))==x272);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MAX;
	uint32_t x276 = 40254U;
	int32_t t51 = -19634035;

	t51 = ((x273-(x274*x275))==x276);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x277 = INT64_MIN;
	volatile int16_t x278 = INT16_MIN;
	uint16_t x279 = 104U;
	int32_t t52 = 62649719;

	t52 = ((x277-(x278*x279))==x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x289 = 33U;
	static volatile uint16_t x290 = 1U;
	int32_t t53 = -105622485;

	t53 = ((x289-(x290*x291))==x292);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x293 = INT16_MIN;
	static int16_t x294 = -43;
	static int16_t x295 = INT16_MIN;
	int32_t x296 = -7866747;
	int32_t t54 = -14205;

	t54 = ((x293-(x294*x295))==x296);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x297 = 34846763;
	int32_t x298 = 76;
	static uint32_t x299 = 27080U;
	int32_t t55 = -495831327;

	t55 = ((x297-(x298*x299))==x300);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = -8290286791952681LL;
	static int8_t x306 = 0;
	static volatile int8_t x307 = INT8_MIN;
	static volatile uint8_t x308 = 3U;
	int32_t t56 = -27;

	t56 = ((x305-(x306*x307))==x308);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x313 = -1LL;
	uint32_t x315 = 43U;
	uint8_t x316 = 20U;
	static volatile int32_t t57 = 69148048;

	t57 = ((x313-(x314*x315))==x316);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x322 = 0;
	static int64_t x323 = 1088780322087LL;
	volatile int64_t x324 = INT64_MIN;
	int32_t t58 = 505;

	t58 = ((x321-(x322*x323))==x324);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = -1;
	volatile int16_t x326 = INT16_MAX;
	uint8_t x327 = 7U;
	static int64_t x328 = -7922240LL;
	static volatile int32_t t59 = -6;

	t59 = ((x325-(x326*x327))==x328);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x329 = INT8_MAX;
	uint8_t x330 = UINT8_MAX;
	static int32_t x331 = -8420939;

	t60 = ((x329-(x330*x331))==x332);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x335 = INT16_MIN;
	uint32_t x336 = 14U;
	static int32_t t61 = 1;

	t61 = ((x333-(x334*x335))==x336);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x337 = -1LL;
	static int16_t x338 = INT16_MIN;
	int64_t x339 = -3409312197LL;
	int64_t x340 = 33531645682075907LL;
	volatile int32_t t62 = -162596;

	t62 = ((x337-(x338*x339))==x340);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x346 = 3169U;
	int64_t x347 = -1LL;
	int16_t x348 = INT16_MIN;
	volatile int32_t t63 = -8;

	t63 = ((x345-(x346*x347))==x348);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x353 = 1;
	int8_t x354 = -8;
	uint64_t x355 = UINT64_MAX;
	volatile int32_t t64 = 111297;

	t64 = ((x353-(x354*x355))==x356);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x361 = INT64_MAX;
	uint32_t x362 = UINT32_MAX;

	t65 = ((x361-(x362*x363))==x364);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x365 = -1LL;
	int8_t x366 = 1;
	int32_t x367 = INT32_MIN;
	int32_t t66 = 94275;

	t66 = ((x365-(x366*x367))==x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x369 = 3;
	uint32_t x370 = 150U;
	static volatile int8_t x371 = -1;
	int16_t x372 = INT16_MAX;
	static int32_t t67 = -31;

	t67 = ((x369-(x370*x371))==x372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x377 = UINT16_MAX;
	int32_t x378 = INT32_MIN;
	int32_t x380 = INT32_MAX;
	volatile int32_t t68 = 14;

	t68 = ((x377-(x378*x379))==x380);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x381 = -1;
	int16_t x382 = -1;
	uint32_t x384 = 4U;
	volatile int32_t t69 = -193296;

	t69 = ((x381-(x382*x383))==x384);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x385 = INT8_MIN;
	static uint64_t x386 = 18167268LLU;
	int64_t x387 = INT64_MIN;
	volatile uint64_t x388 = 29763926311548720LLU;

	t70 = ((x385-(x386*x387))==x388);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x389 = 557LLU;
	uint32_t x390 = 3133096U;
	uint64_t x392 = 165003LLU;
	static int32_t t71 = -2324950;

	t71 = ((x389-(x390*x391))==x392);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x393 = INT8_MIN;
	static int8_t x394 = INT8_MAX;
	volatile int64_t x396 = 0LL;

	t72 = ((x393-(x394*x395))==x396);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = 12378238645262LLU;
	static uint64_t x399 = 7367030LLU;
	uint16_t x400 = 0U;
	volatile int32_t t73 = 21710715;

	t73 = ((x397-(x398*x399))==x400);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x401 = INT16_MIN;
	volatile int8_t x404 = INT8_MIN;
	static volatile int32_t t74 = 906788;

	t74 = ((x401-(x402*x403))==x404);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x405 = 2U;
	int16_t x406 = -1;
	int16_t x407 = INT16_MIN;
	static volatile int64_t x408 = INT64_MAX;
	int32_t t75 = -115;

	t75 = ((x405-(x406*x407))==x408);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x409 = INT32_MAX;
	volatile int16_t x410 = INT16_MAX;
	uint16_t x411 = UINT16_MAX;
	volatile int32_t x412 = INT32_MIN;
	volatile int32_t t76 = 556396;

	t76 = ((x409-(x410*x411))==x412);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x413 = 386;
	int8_t x414 = INT8_MAX;
	volatile uint64_t x416 = 10065LLU;
	int32_t t77 = 14;

	t77 = ((x413-(x414*x415))==x416);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x417 = 446;
	int64_t x419 = -1LL;
	uint16_t x420 = 2U;
	volatile int32_t t78 = -189544;

	t78 = ((x417-(x418*x419))==x420);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x421 = 18U;
	volatile int32_t x423 = -766;
	volatile int32_t t79 = -11;

	t79 = ((x421-(x422*x423))==x424);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x426 = 7U;
	int8_t x427 = -1;
	static volatile int16_t x428 = INT16_MAX;
	static int32_t t80 = 6;

	t80 = ((x425-(x426*x427))==x428);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x429 = -4;
	int8_t x430 = INT8_MIN;
	static uint32_t x432 = 72U;
	static volatile int32_t t81 = 381;

	t81 = ((x429-(x430*x431))==x432);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x433 = UINT64_MAX;
	volatile int8_t x434 = -1;
	uint8_t x435 = UINT8_MAX;
	int64_t x436 = INT64_MAX;
	static volatile int32_t t82 = 474378;

	t82 = ((x433-(x434*x435))==x436);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x437 = -1;
	int64_t x438 = -1LL;
	static int32_t x439 = INT32_MIN;
	uint32_t x440 = 3249U;
	int32_t t83 = -1;

	t83 = ((x437-(x438*x439))==x440);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x441 = -1;
	uint32_t x443 = UINT32_MAX;
	uint8_t x444 = 30U;
	int32_t t84 = -4176337;

	t84 = ((x441-(x442*x443))==x444);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x445 = 8U;
	static uint16_t x446 = UINT16_MAX;
	static int64_t x447 = 145734168648LL;

	t85 = ((x445-(x446*x447))==x448);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x449 = 2;
	int16_t x450 = INT16_MIN;
	volatile uint32_t x451 = UINT32_MAX;
	static int64_t x452 = INT64_MAX;
	static volatile int32_t t86 = -46386;

	t86 = ((x449-(x450*x451))==x452);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x453 = INT32_MIN;
	int8_t x454 = INT8_MAX;
	static int16_t x455 = 0;
	int32_t x456 = INT32_MIN;

	t87 = ((x453-(x454*x455))==x456);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x459 = 441U;
	static int32_t x460 = -1;

	t88 = ((x457-(x458*x459))==x460);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x461 = 1162944025U;
	static uint64_t x462 = 886151LLU;
	uint8_t x463 = 17U;
	volatile int32_t t89 = -3;

	t89 = ((x461-(x462*x463))==x464);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x465 = INT8_MAX;
	int32_t x468 = INT32_MIN;

	t90 = ((x465-(x466*x467))==x468);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x469 = 54109034U;
	int16_t x472 = INT16_MIN;

	t91 = ((x469-(x470*x471))==x472);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x477 = INT32_MIN;
	static int64_t x478 = INT64_MIN;
	uint64_t x479 = 1117819001568333018LLU;
	int32_t x480 = -187;

	t92 = ((x477-(x478*x479))==x480);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x482 = 2;
	int64_t x483 = -1LL;

	t93 = ((x481-(x482*x483))==x484);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x489 = -1;
	uint32_t x490 = 2131U;
	int16_t x491 = INT16_MIN;
	int16_t x492 = -1;
	int32_t t94 = 239504;

	t94 = ((x489-(x490*x491))==x492);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x497 = -29;
	uint32_t x498 = 11646332U;
	int32_t x499 = 513547475;
	int64_t x500 = INT64_MIN;

	t95 = ((x497-(x498*x499))==x500);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x501 = 109740LL;
	int8_t x503 = INT8_MAX;
	volatile int32_t t96 = -120096;

	t96 = ((x501-(x502*x503))==x504);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x505 = INT16_MIN;
	int64_t x506 = 3887797620LL;
	volatile int16_t x507 = INT16_MAX;
	static int32_t t97 = 11;

	t97 = ((x505-(x506*x507))==x508);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x509 = UINT16_MAX;
	uint64_t x511 = 1213938019985697684LLU;
	int16_t x512 = INT16_MIN;

	t98 = ((x509-(x510*x511))==x512);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x513 = UINT8_MAX;
	int16_t x514 = INT16_MIN;
	uint32_t x515 = 2371U;

	t99 = ((x513-(x514*x515))==x516);

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

