#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
static volatile int32_t t0 = -772;
uint8_t x6 = UINT8_MAX;
volatile int64_t x49 = -1LL;
int8_t x50 = INT8_MAX;
int64_t x56 = INT64_MIN;
static int16_t x57 = INT16_MIN;
volatile int32_t t9 = -8518928;
int8_t x69 = -1;
volatile int32_t t10 = 3;
uint64_t x77 = UINT64_MAX;
static int16_t x80 = -2283;
volatile uint32_t x92 = 254950023U;
uint64_t x94 = 874224577511545LLU;
int8_t x99 = -3;
int64_t x100 = -207818218769195965LL;
uint64_t x112 = 2353583461LLU;
int32_t x117 = INT32_MAX;
int64_t x136 = -1LL;
volatile uint8_t x138 = 12U;
volatile uint16_t x140 = 29U;
int32_t x142 = INT32_MAX;
uint16_t x143 = 10U;
int64_t x144 = -1LL;
static volatile uint8_t x169 = UINT8_MAX;
volatile int16_t x171 = -1;
volatile uint16_t x173 = 85U;
int8_t x175 = 20;
int8_t x184 = INT8_MIN;
static uint16_t x195 = 112U;
volatile int32_t t26 = 61704768;
static int32_t t28 = 49;
volatile int16_t x220 = 2014;
uint8_t x227 = 8U;
int8_t x231 = INT8_MIN;
uint8_t x232 = 5U;
int32_t t32 = 220219;
int32_t x249 = INT32_MIN;
uint32_t x252 = 511631606U;
static uint16_t x264 = 205U;
static int32_t x265 = -5127510;
uint32_t x266 = UINT32_MAX;
static uint32_t x271 = 54U;
volatile int8_t x279 = 33;
int16_t x280 = -1;
int64_t x283 = INT64_MIN;
static int8_t x294 = 18;
int32_t t41 = 0;
volatile int32_t x311 = 943744683;
volatile uint64_t x314 = 27322LLU;
int64_t x317 = INT64_MAX;
volatile int16_t x318 = INT16_MAX;
uint16_t x320 = 205U;
static int8_t x322 = INT8_MAX;
volatile int32_t t46 = -140;
uint64_t x334 = 7768410243397LLU;
uint64_t x354 = 25716997192526LLU;
int32_t x358 = 1;
static int32_t t50 = -5386407;
int64_t x371 = INT64_MIN;
uint64_t x430 = UINT64_MAX;
int16_t x437 = -3;
uint16_t x438 = 4U;
volatile int32_t x439 = INT32_MIN;
int32_t t59 = -12222;
volatile int32_t t61 = -134;
static uint8_t x474 = 53U;
int8_t x480 = 1;
int64_t x486 = 1487167188LL;
uint8_t x506 = UINT8_MAX;
static volatile uint16_t x519 = UINT16_MAX;
int32_t t66 = -50;
int16_t x522 = 1;
int32_t x553 = 38260;
int8_t x555 = INT8_MAX;
int16_t x565 = INT16_MIN;
volatile int32_t x566 = 152;
static uint8_t x574 = UINT8_MAX;
volatile int32_t t72 = 864;
int64_t x586 = 205164096082283LL;
volatile int32_t t74 = 85076;
static int32_t x590 = 104116;
int64_t x591 = INT64_MAX;
volatile int16_t x592 = -423;
volatile uint64_t x602 = 129150323049067LLU;
int8_t x603 = INT8_MAX;
volatile uint8_t x610 = UINT8_MAX;
int16_t x611 = -1;
static int64_t x635 = INT64_MAX;
uint8_t x642 = 1U;
int8_t x643 = INT8_MAX;
int8_t x665 = -1;
uint64_t x681 = 6744LLU;
static int32_t t85 = -470378;
int64_t x689 = 469326927109453LL;
int8_t x713 = 1;
int8_t x715 = 27;
volatile int8_t x719 = -1;
int32_t x720 = INT32_MIN;
int8_t x726 = 2;
uint8_t x732 = 9U;
volatile int32_t t91 = 1291278;
int8_t x733 = -1;
uint64_t x736 = 482292708484601177LLU;
int8_t x757 = INT8_MAX;
int64_t x759 = -4747394502470144LL;
int32_t x760 = INT32_MIN;
int64_t x771 = -1LL;
volatile int32_t t94 = 100;
static uint16_t x778 = 4286U;
int32_t x780 = INT32_MAX;
static int32_t t95 = -5365670;
int16_t x797 = -1;
uint32_t x799 = 15U;
volatile int32_t t97 = -215;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x3 = -30;
	volatile uint32_t x4 = 105U;

	t0 = (x1<(x2<<(x3<=x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	volatile int64_t x7 = -18619209771LL;
	static int16_t x8 = INT16_MIN;
	int32_t t1 = 2;

	t1 = (x5<(x6<<(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = INT64_MIN;
	static uint8_t x22 = UINT8_MAX;
	volatile uint32_t x23 = UINT32_MAX;
	int8_t x24 = 3;
	static volatile int32_t t2 = -12995;

	t2 = (x21<(x22<<(x23<=x24)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = -480251547;
	uint64_t x26 = 309LLU;
	static volatile int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	volatile int32_t t3 = -68782;

	t3 = (x25<(x26<<(x27<=x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = 4718741833683LL;
	static volatile uint16_t x30 = 31U;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = INT32_MAX;
	volatile int32_t t4 = -20667836;

	t4 = (x29<(x30<<(x31<=x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = -1;
	int8_t x38 = 7;
	uint32_t x39 = UINT32_MAX;
	static int16_t x40 = -51;
	int32_t t5 = 3144;

	t5 = (x37<(x38<<(x39<=x40)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x51 = INT8_MAX;
	int16_t x52 = 0;
	int32_t t6 = 228662717;

	t6 = (x49<(x50<<(x51<=x52)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = 32;
	int8_t x55 = -1;
	static volatile int32_t t7 = -3;

	t7 = (x53<(x54<<(x55<=x56)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x58 = 14;
	uint64_t x59 = 84259672829240098LLU;
	int16_t x60 = -1;
	volatile int32_t t8 = 157524;

	t8 = (x57<(x58<<(x59<=x60)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = INT8_MAX;
	uint64_t x62 = 2720314LLU;
	int64_t x63 = INT64_MIN;
	uint32_t x64 = UINT32_MAX;

	t9 = (x61<(x62<<(x63<=x64)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x70 = 1720U;
	uint32_t x71 = 979U;
	volatile uint8_t x72 = UINT8_MAX;

	t10 = (x69<(x70<<(x71<=x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x78 = 28;
	int8_t x79 = INT8_MIN;
	int32_t t11 = 180908792;

	t11 = (x77<(x78<<(x79<=x80)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x89 = 4U;
	static volatile int8_t x90 = 1;
	uint32_t x91 = 6764847U;
	volatile int32_t t12 = 12267;

	t12 = (x89<(x90<<(x91<=x92)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = INT8_MAX;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	volatile int32_t t13 = -46268;

	t13 = (x93<(x94<<(x95<=x96)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x97 = UINT16_MAX;
	uint16_t x98 = 31U;
	volatile int32_t t14 = 409512301;

	t14 = (x97<(x98<<(x99<=x100)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x109 = UINT32_MAX;
	uint32_t x110 = 6611U;
	uint8_t x111 = 1U;
	static int32_t t15 = -368680782;

	t15 = (x109<(x110<<(x111<=x112)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x118 = 32U;
	int16_t x119 = -1;
	static int64_t x120 = INT64_MIN;
	static volatile int32_t t16 = 5350536;

	t16 = (x117<(x118<<(x119<=x120)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x133 = -1;
	uint64_t x134 = 80LLU;
	int32_t x135 = -1;
	volatile int32_t t17 = -1;

	t17 = (x133<(x134<<(x135<=x136)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x137 = INT32_MAX;
	int16_t x139 = INT16_MIN;
	static volatile int32_t t18 = 6044;

	t18 = (x137<(x138<<(x139<=x140)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x141 = -1;
	int32_t t19 = 203599710;

	t19 = (x141<(x142<<(x143<=x144)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x149 = -30LL;
	uint8_t x150 = UINT8_MAX;
	int8_t x151 = -1;
	static volatile int16_t x152 = INT16_MIN;
	int32_t t20 = -797;

	t20 = (x149<(x150<<(x151<=x152)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x170 = INT8_MAX;
	volatile int8_t x172 = 1;
	static volatile int32_t t21 = -1;

	t21 = (x169<(x170<<(x171<=x172)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x174 = 908961815U;
	int32_t x176 = -5413;
	volatile int32_t t22 = 130273818;

	t22 = (x173<(x174<<(x175<=x176)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x177 = -1LL;
	int16_t x178 = INT16_MAX;
	static int16_t x179 = -239;
	volatile int8_t x180 = -1;
	volatile int32_t t23 = 87;

	t23 = (x177<(x178<<(x179<=x180)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x181 = 63358492469447171LL;
	volatile uint32_t x182 = UINT32_MAX;
	uint16_t x183 = 4U;
	volatile int32_t t24 = -74078945;

	t24 = (x181<(x182<<(x183<=x184)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x189 = -1LL;
	static uint32_t x190 = 21590055U;
	static int32_t x191 = INT32_MIN;
	static uint16_t x192 = 1U;
	int32_t t25 = 27;

	t25 = (x189<(x190<<(x191<=x192)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x193 = UINT32_MAX;
	static int16_t x194 = INT16_MAX;
	static int64_t x196 = INT64_MIN;

	t26 = (x193<(x194<<(x195<=x196)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x197 = INT64_MAX;
	uint64_t x198 = UINT64_MAX;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = -1;
	volatile int32_t t27 = 1898335;

	t27 = (x197<(x198<<(x199<=x200)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x201 = -109928;
	volatile int16_t x202 = 28;
	static int8_t x203 = INT8_MIN;
	uint32_t x204 = UINT32_MAX;

	t28 = (x201<(x202<<(x203<=x204)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x217 = INT64_MIN;
	uint32_t x218 = 16479465U;
	static uint32_t x219 = 180752U;
	int32_t t29 = 378041134;

	t29 = (x217<(x218<<(x219<=x220)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x221 = INT32_MIN;
	uint8_t x222 = 3U;
	int8_t x223 = 17;
	int16_t x224 = INT16_MIN;
	int32_t t30 = 0;

	t30 = (x221<(x222<<(x223<=x224)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x225 = 3891443U;
	int16_t x226 = 93;
	int16_t x228 = -1;
	int32_t t31 = -2473478;

	t31 = (x225<(x226<<(x227<=x228)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x229 = 20916U;
	int8_t x230 = INT8_MAX;

	t32 = (x229<(x230<<(x231<=x232)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x233 = 0;
	volatile uint64_t x234 = 4355272556201LLU;
	volatile int64_t x235 = 699503LL;
	static uint16_t x236 = 4630U;
	int32_t t33 = -251832;

	t33 = (x233<(x234<<(x235<=x236)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x250 = 110U;
	uint8_t x251 = 85U;
	int32_t t34 = 1;

	t34 = (x249<(x250<<(x251<=x252)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x261 = INT16_MAX;
	int8_t x262 = 0;
	int16_t x263 = INT16_MIN;
	volatile int32_t t35 = -44543;

	t35 = (x261<(x262<<(x263<=x264)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = 14076;
	int32_t t36 = -716078991;

	t36 = (x265<(x266<<(x267<=x268)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x269 = 26820359900333LLU;
	int8_t x270 = INT8_MAX;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t37 = 122833887;

	t37 = (x269<(x270<<(x271<=x272)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x277 = INT8_MIN;
	uint16_t x278 = 3U;
	volatile int32_t t38 = -1053;

	t38 = (x277<(x278<<(x279<=x280)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x281 = -16459620242LL;
	static uint16_t x282 = UINT16_MAX;
	int8_t x284 = INT8_MIN;
	volatile int32_t t39 = -4397399;

	t39 = (x281<(x282<<(x283<=x284)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x293 = 23796267376119LLU;
	volatile uint64_t x295 = 37468LLU;
	int16_t x296 = INT16_MIN;
	static int32_t t40 = -3022;

	t40 = (x293<(x294<<(x295<=x296)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x297 = 7U;
	int8_t x298 = 0;
	static uint32_t x299 = UINT32_MAX;
	uint16_t x300 = UINT16_MAX;

	t41 = (x297<(x298<<(x299<=x300)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x309 = INT16_MAX;
	uint32_t x310 = 5U;
	uint8_t x312 = UINT8_MAX;
	int32_t t42 = -248947064;

	t42 = (x309<(x310<<(x311<=x312)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x313 = 0U;
	static int16_t x315 = INT16_MIN;
	uint64_t x316 = 11292000935441LLU;
	int32_t t43 = -7084;

	t43 = (x313<(x314<<(x315<=x316)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x319 = INT32_MIN;
	int32_t t44 = -183726;

	t44 = (x317<(x318<<(x319<=x320)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x321 = -1;
	static uint8_t x323 = 74U;
	volatile int16_t x324 = INT16_MIN;
	static int32_t t45 = 1;

	t45 = (x321<(x322<<(x323<=x324)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x325 = 7218;
	int8_t x326 = 26;
	int16_t x327 = INT16_MIN;
	uint16_t x328 = 20541U;

	t46 = (x325<(x326<<(x327<=x328)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x333 = 1;
	uint64_t x335 = 503LLU;
	volatile int16_t x336 = -1;
	volatile int32_t t47 = -64093;

	t47 = (x333<(x334<<(x335<=x336)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x345 = UINT32_MAX;
	volatile uint64_t x346 = UINT64_MAX;
	volatile int16_t x347 = INT16_MIN;
	volatile int8_t x348 = -1;
	static volatile int32_t t48 = -20884;

	t48 = (x345<(x346<<(x347<=x348)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x353 = -1LL;
	volatile int64_t x355 = INT64_MIN;
	volatile int16_t x356 = -1;
	volatile int32_t t49 = -1;

	t49 = (x353<(x354<<(x355<=x356)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x357 = -14941;
	volatile int8_t x359 = INT8_MIN;
	uint32_t x360 = 14U;

	t50 = (x357<(x358<<(x359<=x360)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = 1;
	int64_t x372 = -2912LL;
	volatile int32_t t51 = -18495;

	t51 = (x369<(x370<<(x371<=x372)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = 0;
	uint16_t x379 = 3505U;
	int32_t x380 = INT32_MIN;
	volatile int32_t t52 = 6909;

	t52 = (x377<(x378<<(x379<=x380)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x381 = INT64_MAX;
	uint64_t x382 = UINT64_MAX;
	static int32_t x383 = 846191442;
	uint32_t x384 = 39320222U;
	volatile int32_t t53 = -3008008;

	t53 = (x381<(x382<<(x383<=x384)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x385 = INT16_MIN;
	volatile uint16_t x386 = UINT16_MAX;
	volatile int64_t x387 = 162LL;
	int8_t x388 = 56;
	static volatile int32_t t54 = 68451884;

	t54 = (x385<(x386<<(x387<=x388)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x413 = -1;
	volatile int32_t x414 = 403;
	volatile int32_t x415 = -9234;
	volatile uint64_t x416 = 3015LLU;
	int32_t t55 = 296;

	t55 = (x413<(x414<<(x415<=x416)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x421 = -13;
	uint64_t x422 = 3173319233535940451LLU;
	int8_t x423 = INT8_MAX;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t56 = -254;

	t56 = (x421<(x422<<(x423<=x424)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x429 = -1LL;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = 81U;
	volatile int32_t t57 = 941;

	t57 = (x429<(x430<<(x431<=x432)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x440 = 298903003;
	static volatile int32_t t58 = 5151;

	t58 = (x437<(x438<<(x439<=x440)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x441 = UINT32_MAX;
	uint8_t x442 = 1U;
	volatile int32_t x443 = 536048766;
	int8_t x444 = INT8_MIN;

	t59 = (x441<(x442<<(x443<=x444)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x449 = 648U;
	uint16_t x450 = 758U;
	int16_t x451 = 4;
	int16_t x452 = INT16_MIN;
	int32_t t60 = -20916157;

	t60 = (x449<(x450<<(x451<=x452)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x453 = INT64_MIN;
	int32_t x454 = 384932844;
	int32_t x455 = INT32_MAX;
	uint64_t x456 = 19LLU;

	t61 = (x453<(x454<<(x455<=x456)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x473 = INT64_MIN;
	static int16_t x475 = 1;
	static int64_t x476 = INT64_MIN;
	volatile int32_t t62 = 2134;

	t62 = (x473<(x474<<(x475<=x476)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x477 = 23963U;
	volatile uint32_t x478 = 86547U;
	int16_t x479 = -3;
	volatile int32_t t63 = 0;

	t63 = (x477<(x478<<(x479<=x480)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x485 = INT16_MIN;
	static uint8_t x487 = 3U;
	int16_t x488 = INT16_MIN;
	int32_t t64 = 145344295;

	t64 = (x485<(x486<<(x487<=x488)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x505 = 9380286897558LLU;
	int64_t x507 = INT64_MIN;
	int8_t x508 = -14;
	volatile int32_t t65 = -14522;

	t65 = (x505<(x506<<(x507<=x508)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x517 = 32U;
	uint16_t x518 = 1U;
	int16_t x520 = -1;

	t66 = (x517<(x518<<(x519<=x520)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x521 = 66U;
	static int64_t x523 = 1344271006235124LL;
	static uint16_t x524 = UINT16_MAX;
	volatile int32_t t67 = 233;

	t67 = (x521<(x522<<(x523<=x524)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x525 = 12591U;
	int8_t x526 = 60;
	static uint16_t x527 = 558U;
	int8_t x528 = -1;
	volatile int32_t t68 = -1920;

	t68 = (x525<(x526<<(x527<=x528)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x529 = 5U;
	static int8_t x530 = 11;
	int64_t x531 = 3221682860504LL;
	int16_t x532 = INT16_MIN;
	int32_t t69 = -1;

	t69 = (x529<(x530<<(x531<=x532)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x554 = 55U;
	uint32_t x556 = UINT32_MAX;
	static int32_t t70 = -97559254;

	t70 = (x553<(x554<<(x555<=x556)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x567 = 14729U;
	volatile int8_t x568 = INT8_MIN;
	int32_t t71 = -449318824;

	t71 = (x565<(x566<<(x567<=x568)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x573 = INT32_MIN;
	static int32_t x575 = -1830423;
	int8_t x576 = INT8_MIN;

	t72 = (x573<(x574<<(x575<=x576)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x581 = -1;
	int64_t x582 = 263690LL;
	uint16_t x583 = UINT16_MAX;
	volatile int8_t x584 = 18;
	volatile int32_t t73 = -24;

	t73 = (x581<(x582<<(x583<=x584)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x585 = -10;
	int8_t x587 = INT8_MIN;
	static int64_t x588 = -1LL;

	t74 = (x585<(x586<<(x587<=x588)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x589 = 393766048539599LL;
	volatile int32_t t75 = 8025969;

	t75 = (x589<(x590<<(x591<=x592)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x601 = INT64_MAX;
	int8_t x604 = INT8_MAX;
	volatile int32_t t76 = -15144;

	t76 = (x601<(x602<<(x603<=x604)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x609 = INT64_MAX;
	uint32_t x612 = 11808101U;
	static volatile int32_t t77 = 111949;

	t77 = (x609<(x610<<(x611<=x612)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x621 = UINT8_MAX;
	uint64_t x622 = 20273973LLU;
	int8_t x623 = -1;
	static int8_t x624 = -1;
	static volatile int32_t t78 = 263;

	t78 = (x621<(x622<<(x623<=x624)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x633 = -1;
	volatile int8_t x634 = 0;
	volatile uint64_t x636 = 6268295044086367LLU;
	volatile int32_t t79 = 434268;

	t79 = (x633<(x634<<(x635<=x636)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x641 = INT64_MIN;
	static int16_t x644 = -1;
	int32_t t80 = 30770;

	t80 = (x641<(x642<<(x643<=x644)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x649 = -238LL;
	static volatile uint16_t x650 = UINT16_MAX;
	uint16_t x651 = UINT16_MAX;
	int8_t x652 = INT8_MIN;
	static int32_t t81 = -3439;

	t81 = (x649<(x650<<(x651<=x652)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x657 = INT16_MIN;
	volatile int8_t x658 = 56;
	static int64_t x659 = -81LL;
	uint64_t x660 = UINT64_MAX;
	int32_t t82 = -14024640;

	t82 = (x657<(x658<<(x659<=x660)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x666 = 34288043351002LLU;
	uint64_t x667 = UINT64_MAX;
	volatile int8_t x668 = INT8_MIN;
	static int32_t t83 = 16317;

	t83 = (x665<(x666<<(x667<=x668)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x682 = 79U;
	static uint32_t x683 = 26U;
	static int8_t x684 = INT8_MIN;
	volatile int32_t t84 = 879548295;

	t84 = (x681<(x682<<(x683<=x684)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x685 = 2019387LLU;
	static volatile int64_t x686 = 2LL;
	int16_t x687 = INT16_MIN;
	int8_t x688 = INT8_MAX;

	t85 = (x685<(x686<<(x687<=x688)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x690 = 8349;
	uint16_t x691 = 0U;
	int32_t x692 = INT32_MAX;
	static int32_t t86 = -95089;

	t86 = (x689<(x690<<(x691<=x692)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x705 = INT64_MAX;
	volatile uint16_t x706 = 1382U;
	volatile int8_t x707 = INT8_MAX;
	int64_t x708 = 2024674783744027LL;
	static int32_t t87 = 4993;

	t87 = (x705<(x706<<(x707<=x708)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x714 = 32633U;
	uint64_t x716 = UINT64_MAX;
	volatile int32_t t88 = -81315;

	t88 = (x713<(x714<<(x715<=x716)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x717 = INT64_MIN;
	int8_t x718 = 1;
	static int32_t t89 = -198957;

	t89 = (x717<(x718<<(x719<=x720)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x725 = INT16_MIN;
	volatile int32_t x727 = -800;
	int16_t x728 = INT16_MIN;
	int32_t t90 = 0;

	t90 = (x725<(x726<<(x727<=x728)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x729 = 2U;
	uint32_t x730 = UINT32_MAX;
	int8_t x731 = INT8_MAX;

	t91 = (x729<(x730<<(x731<=x732)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x734 = 3;
	int32_t x735 = -1;
	int32_t t92 = -3305184;

	t92 = (x733<(x734<<(x735<=x736)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x758 = 68U;
	volatile int32_t t93 = 18899;

	t93 = (x757<(x758<<(x759<=x760)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x769 = INT8_MIN;
	uint8_t x770 = UINT8_MAX;
	int32_t x772 = INT32_MAX;

	t94 = (x769<(x770<<(x771<=x772)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x777 = INT8_MIN;
	static int8_t x779 = INT8_MIN;

	t95 = (x777<(x778<<(x779<=x780)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x789 = INT8_MAX;
	volatile int8_t x790 = INT8_MAX;
	int64_t x791 = -1LL;
	int8_t x792 = -37;
	volatile int32_t t96 = -689482902;

	t96 = (x789<(x790<<(x791<=x792)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x798 = UINT16_MAX;
	static int32_t x800 = INT32_MIN;

	t97 = (x797<(x798<<(x799<=x800)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x809 = -2565191241LL;
	uint8_t x810 = 1U;
	int8_t x811 = -1;
	int64_t x812 = INT64_MAX;
	volatile int32_t t98 = -10693478;

	t98 = (x809<(x810<<(x811<=x812)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x813 = INT8_MAX;
	static int16_t x814 = INT16_MAX;
	int16_t x815 = INT16_MAX;
	static uint32_t x816 = 27U;
	int32_t t99 = 0;

	t99 = (x813<(x814<<(x815<=x816)));

	if (t99 != 1) { NG(); } else { ; }
	
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

