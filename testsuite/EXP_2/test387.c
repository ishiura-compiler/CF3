#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x9 = 13U;
int16_t x11 = INT16_MIN;
volatile uint8_t x12 = UINT8_MAX;
volatile uint64_t x26 = 151LLU;
int16_t x33 = INT16_MIN;
uint8_t x39 = 67U;
int32_t t8 = -127957453;
static uint8_t x50 = 59U;
static int8_t x57 = 3;
static volatile uint32_t x80 = 187U;
uint8_t x84 = UINT8_MAX;
uint32_t x99 = 1446U;
int32_t t17 = -6;
volatile int16_t x108 = INT16_MIN;
static int32_t t18 = 14317;
volatile int8_t x122 = INT8_MIN;
int64_t x126 = -1LL;
static int32_t t20 = 114546596;
int64_t x138 = -1LL;
static int8_t x144 = -50;
uint32_t x150 = 2375014U;
volatile uint16_t x155 = 24U;
uint32_t x174 = 4642U;
uint64_t x176 = 221964087535832954LLU;
uint8_t x178 = UINT8_MAX;
int8_t x181 = INT8_MIN;
int8_t x184 = INT8_MIN;
int32_t x185 = -1;
int64_t x187 = -16297LL;
static uint32_t x191 = 17965U;
volatile int16_t x198 = -6803;
static int8_t x204 = INT8_MIN;
uint32_t x205 = UINT32_MAX;
uint16_t x221 = 3901U;
static int16_t x223 = -214;
uint64_t x224 = 141705058695427LLU;
static int8_t x229 = INT8_MIN;
volatile int32_t t38 = 3438;
volatile uint16_t x246 = UINT16_MAX;
int8_t x247 = 1;
int8_t x258 = INT8_MIN;
static volatile int32_t x267 = 21;
int32_t t42 = -112268459;
int32_t t43 = 1;
int32_t x277 = 11023272;
uint32_t x278 = 623404525U;
volatile int32_t t44 = 145714960;
static uint32_t x295 = 12874553U;
int16_t x302 = -1;
int32_t x303 = -90401;
int32_t t47 = -80;
int32_t x309 = -22792996;
int8_t x316 = -3;
volatile int8_t x322 = INT8_MAX;
uint8_t x328 = 13U;
uint64_t x329 = UINT64_MAX;
int32_t x330 = 1;
static uint16_t x333 = 286U;
uint64_t x336 = 134LLU;
static uint16_t x348 = 1U;
int32_t t55 = 2;
uint32_t x354 = 109199U;
int32_t t58 = -3028;
int16_t x370 = -1;
volatile int32_t t59 = -35708;
static volatile int32_t t60 = 90900;
static uint16_t x385 = 632U;
static int16_t x386 = INT16_MAX;
int32_t x388 = INT32_MIN;
int16_t x390 = -484;
int8_t x392 = INT8_MIN;
int64_t x393 = -674230704587209LL;
int32_t t64 = -3635215;
int64_t x401 = INT64_MIN;
volatile int8_t x404 = INT8_MAX;
uint16_t x413 = 4201U;
int16_t x420 = -1;
volatile int64_t x421 = 274LL;
static volatile int8_t x423 = -1;
volatile uint32_t x430 = 496995U;
volatile int32_t t70 = 139506;
uint8_t x438 = 1U;
uint16_t x448 = 1U;
static volatile uint32_t x454 = 191045U;
uint64_t x455 = 732789390266129LLU;
static volatile int32_t x462 = -698;
uint32_t x466 = 1U;
int32_t t79 = -4593;
int8_t x477 = 0;
int32_t t80 = -149;
int8_t x495 = INT8_MAX;
static uint32_t x497 = UINT32_MAX;
int16_t x498 = 37;
volatile int8_t x499 = -1;
int32_t t82 = 7391;
int32_t x511 = -32092;
static volatile uint32_t x515 = UINT32_MAX;
volatile int32_t t85 = 432;
int64_t x519 = -1LL;
static volatile int32_t t87 = -421296291;
int32_t x539 = 1;
int32_t t91 = -3137129;
int8_t x549 = INT8_MAX;
int32_t x552 = INT32_MIN;
static int32_t t94 = -9827;
volatile uint32_t x566 = 1781903773U;
volatile int16_t x585 = -1;
int64_t x588 = 113037929LL;
static int8_t x591 = -1;
uint32_t x592 = UINT32_MAX;


void f0(void) {
	static uint32_t x5 = 21703U;
	uint64_t x6 = 5LLU;
	uint64_t x7 = 283482906993493227LLU;
	static volatile int16_t x8 = -281;
	volatile int32_t t0 = 25;

	t0 = ((x5/(x6*x7))<=x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x10 = 23453700LLU;
	int32_t t1 = -170685;

	t1 = ((x9/(x10*x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = INT32_MIN;
	uint8_t x14 = 72U;
	int16_t x15 = -7579;
	volatile uint64_t x16 = UINT64_MAX;
	int32_t t2 = 88081;

	t2 = ((x13/(x14*x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 56U;
	int32_t x18 = -6744;
	uint32_t x19 = UINT32_MAX;
	volatile uint8_t x20 = 1U;
	static int32_t t3 = 13114;

	t3 = ((x17/(x18*x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint64_t x22 = 507820445431698LLU;
	volatile int64_t x23 = INT64_MAX;
	volatile int16_t x24 = 57;
	static volatile int32_t t4 = 686;

	t4 = ((x21/(x22*x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int64_t x27 = INT64_MIN;
	static int64_t x28 = -1LL;
	static volatile int32_t t5 = -4054;

	t5 = ((x25/(x26*x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = -6;
	static volatile int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 514479;

	t6 = ((x29/(x30*x31))<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = 492777677LLU;
	int64_t x35 = INT64_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t7 = -15;

	t7 = ((x33/(x34*x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	uint8_t x38 = 7U;
	uint8_t x40 = 5U;

	t8 = ((x37/(x38*x39))<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = UINT8_MAX;
	uint16_t x51 = 11920U;
	int32_t x52 = INT32_MAX;
	int32_t t9 = -2928;

	t9 = ((x49/(x50*x51))<=x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x58 = INT8_MIN;
	volatile uint16_t x59 = UINT16_MAX;
	int64_t x60 = 1066659102704LL;
	static int32_t t10 = 38566175;

	t10 = ((x57/(x58*x59))<=x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = 12U;
	int16_t x62 = -1;
	uint8_t x63 = 83U;
	int64_t x64 = -1LL;
	int32_t t11 = 16018768;

	t11 = ((x61/(x62*x63))<=x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MIN;
	volatile int8_t x66 = 2;
	int8_t x67 = -7;
	volatile uint8_t x68 = 13U;
	static int32_t t12 = 7683;

	t12 = ((x65/(x66*x67))<=x68);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x77 = 17520554;
	static uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	static int32_t t13 = -21154;

	t13 = ((x77/(x78*x79))<=x80);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = INT32_MIN;
	uint32_t x82 = 1935973001U;
	int32_t x83 = INT32_MIN;
	volatile int32_t t14 = -57;

	t14 = ((x81/(x82*x83))<=x84);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = 3;
	uint16_t x86 = 9U;
	static volatile int8_t x87 = -1;
	static int64_t x88 = -3LL;
	volatile int32_t t15 = -9606455;

	t15 = ((x85/(x86*x87))<=x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = UINT64_MAX;
	uint64_t x90 = 2LLU;
	static int32_t x91 = INT32_MIN;
	volatile int8_t x92 = -1;
	static volatile int32_t t16 = -113384855;

	t16 = ((x89/(x90*x91))<=x92);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = 8;
	volatile uint32_t x98 = 493664051U;
	volatile uint16_t x100 = 6019U;

	t17 = ((x97/(x98*x99))<=x100);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x105 = 15U;
	int16_t x106 = INT16_MIN;
	int8_t x107 = -22;

	t18 = ((x105/(x106*x107))<=x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x121 = -2396;
	int64_t x123 = -1LL;
	static int16_t x124 = INT16_MIN;
	int32_t t19 = 414;

	t19 = ((x121/(x122*x123))<=x124);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x125 = 1U;
	uint64_t x127 = UINT64_MAX;
	volatile int8_t x128 = -1;

	t20 = ((x125/(x126*x127))<=x128);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x137 = INT8_MIN;
	int16_t x139 = -818;
	int64_t x140 = INT64_MAX;
	int32_t t21 = -1;

	t21 = ((x137/(x138*x139))<=x140);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = -1LL;
	int32_t x143 = -1;
	int32_t t22 = 58029;

	t22 = ((x141/(x142*x143))<=x144);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x149 = -1;
	static uint32_t x151 = 446206U;
	uint32_t x152 = 88367678U;
	int32_t t23 = 71;

	t23 = ((x149/(x150*x151))<=x152);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x153 = 8982;
	volatile uint64_t x154 = 1095336182900747LLU;
	int8_t x156 = INT8_MIN;
	static int32_t t24 = -2874;

	t24 = ((x153/(x154*x155))<=x156);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x161 = 0;
	int8_t x162 = INT8_MIN;
	static int8_t x163 = -1;
	int32_t x164 = -13265;
	int32_t t25 = -545851342;

	t25 = ((x161/(x162*x163))<=x164);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x173 = 0LLU;
	volatile uint32_t x175 = 2U;
	volatile int32_t t26 = -102808;

	t26 = ((x173/(x174*x175))<=x176);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x177 = 11967;
	uint8_t x179 = UINT8_MAX;
	static uint16_t x180 = 564U;
	int32_t t27 = 129560833;

	t27 = ((x177/(x178*x179))<=x180);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x182 = 1876460LL;
	static int8_t x183 = INT8_MIN;
	int32_t t28 = 1369;

	t28 = ((x181/(x182*x183))<=x184);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x186 = -1;
	volatile int32_t x188 = -497214606;
	int32_t t29 = -495726989;

	t29 = ((x185/(x186*x187))<=x188);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = INT16_MAX;
	uint8_t x190 = 4U;
	int64_t x192 = INT64_MIN;
	int32_t t30 = 238674789;

	t30 = ((x189/(x190*x191))<=x192);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x197 = 87U;
	volatile int64_t x199 = 1LL;
	int16_t x200 = INT16_MAX;
	volatile int32_t t31 = 1;

	t31 = ((x197/(x198*x199))<=x200);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x201 = INT8_MIN;
	volatile int8_t x202 = INT8_MIN;
	uint16_t x203 = UINT16_MAX;
	int32_t t32 = -479060032;

	t32 = ((x201/(x202*x203))<=x204);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x206 = INT16_MIN;
	static int8_t x207 = 1;
	int16_t x208 = INT16_MAX;
	static int32_t t33 = 232;

	t33 = ((x205/(x206*x207))<=x208);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x209 = INT64_MAX;
	uint16_t x210 = UINT16_MAX;
	uint8_t x211 = UINT8_MAX;
	uint16_t x212 = 2U;
	volatile int32_t t34 = 18559876;

	t34 = ((x209/(x210*x211))<=x212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x213 = -1;
	int16_t x214 = INT16_MIN;
	uint16_t x215 = 22U;
	static int32_t x216 = -37790975;
	volatile int32_t t35 = -1;

	t35 = ((x213/(x214*x215))<=x216);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x217 = INT32_MIN;
	static int16_t x218 = -3797;
	int8_t x219 = INT8_MIN;
	static int16_t x220 = INT16_MAX;
	int32_t t36 = -158865742;

	t36 = ((x217/(x218*x219))<=x220);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x222 = -1LL;
	volatile int32_t t37 = 41244;

	t37 = ((x221/(x222*x223))<=x224);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x230 = -687;
	int32_t x231 = 102019;
	volatile int32_t x232 = INT32_MAX;

	t38 = ((x229/(x230*x231))<=x232);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x241 = INT32_MAX;
	uint8_t x242 = 71U;
	int16_t x243 = INT16_MIN;
	static int8_t x244 = INT8_MAX;
	int32_t t39 = 13;

	t39 = ((x241/(x242*x243))<=x244);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x245 = 9289LLU;
	static int16_t x248 = -8533;
	volatile int32_t t40 = 14;

	t40 = ((x245/(x246*x247))<=x248);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x257 = UINT16_MAX;
	int32_t x259 = -1;
	static int32_t x260 = INT32_MAX;
	int32_t t41 = 3;

	t41 = ((x257/(x258*x259))<=x260);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	static int16_t x268 = INT16_MIN;

	t42 = ((x265/(x266*x267))<=x268);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x269 = 45141263U;
	volatile int32_t x270 = 32;
	int8_t x271 = 1;
	int64_t x272 = INT64_MIN;

	t43 = ((x269/(x270*x271))<=x272);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x279 = -39;
	uint16_t x280 = UINT16_MAX;

	t44 = ((x277/(x278*x279))<=x280);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x281 = -1798;
	static int16_t x282 = INT16_MIN;
	uint16_t x283 = 477U;
	volatile int64_t x284 = INT64_MIN;
	int32_t t45 = 10;

	t45 = ((x281/(x282*x283))<=x284);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x293 = -1;
	int8_t x294 = -3;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t46 = -10;

	t46 = ((x293/(x294*x295))<=x296);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x301 = 1941U;
	int16_t x304 = -3;

	t47 = ((x301/(x302*x303))<=x304);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x310 = 1197172;
	int8_t x311 = -1;
	static volatile int32_t x312 = INT32_MAX;
	volatile int32_t t48 = 8;

	t48 = ((x309/(x310*x311))<=x312);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x313 = INT16_MAX;
	static uint32_t x314 = 2443374U;
	uint64_t x315 = UINT64_MAX;
	volatile int32_t t49 = -354510993;

	t49 = ((x313/(x314*x315))<=x316);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x321 = -1;
	static int32_t x323 = 8041450;
	int16_t x324 = -4150;
	volatile int32_t t50 = -38120;

	t50 = ((x321/(x322*x323))<=x324);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = -1LL;
	int32_t x327 = INT32_MIN;
	volatile int32_t t51 = -6100;

	t51 = ((x325/(x326*x327))<=x328);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x331 = UINT64_MAX;
	static int8_t x332 = INT8_MIN;
	int32_t t52 = -204;

	t52 = ((x329/(x330*x331))<=x332);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = INT16_MAX;
	volatile int32_t t53 = -23346;

	t53 = ((x333/(x334*x335))<=x336);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x345 = 4U;
	static uint16_t x346 = 3092U;
	volatile uint64_t x347 = 10383844163625814LLU;
	volatile int32_t t54 = -382015983;

	t54 = ((x345/(x346*x347))<=x348);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x349 = INT32_MAX;
	uint8_t x350 = 18U;
	volatile int16_t x351 = INT16_MIN;
	static volatile int8_t x352 = -1;

	t55 = ((x349/(x350*x351))<=x352);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x353 = UINT16_MAX;
	int8_t x355 = INT8_MAX;
	static int64_t x356 = INT64_MIN;
	int32_t t56 = 3143;

	t56 = ((x353/(x354*x355))<=x356);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x357 = 168294LLU;
	volatile int8_t x358 = INT8_MAX;
	uint32_t x359 = 13023029U;
	int8_t x360 = 29;
	volatile int32_t t57 = 54;

	t57 = ((x357/(x358*x359))<=x360);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x361 = 16;
	volatile int32_t x362 = -170456001;
	static uint64_t x363 = UINT64_MAX;
	int32_t x364 = -1;

	t58 = ((x361/(x362*x363))<=x364);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x369 = INT32_MAX;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;

	t59 = ((x369/(x370*x371))<=x372);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x381 = -5;
	int8_t x382 = INT8_MAX;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = -1LL;

	t60 = ((x381/(x382*x383))<=x384);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x387 = 24LL;
	int32_t t61 = -2208006;

	t61 = ((x385/(x386*x387))<=x388);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x389 = 411097802445616LLU;
	int64_t x391 = 13234438242093276LL;
	volatile int32_t t62 = 127523919;

	t62 = ((x389/(x390*x391))<=x392);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x394 = 1U;
	int64_t x395 = -1LL;
	uint64_t x396 = 984864LLU;
	int32_t t63 = 28917835;

	t63 = ((x393/(x394*x395))<=x396);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x397 = UINT8_MAX;
	static uint16_t x398 = UINT16_MAX;
	uint16_t x399 = 85U;
	uint32_t x400 = 3U;

	t64 = ((x397/(x398*x399))<=x400);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x402 = -1;
	uint8_t x403 = 14U;
	static volatile int32_t t65 = 1862246;

	t65 = ((x401/(x402*x403))<=x404);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x405 = -1LL;
	static uint16_t x406 = UINT16_MAX;
	int8_t x407 = -6;
	int32_t x408 = INT32_MAX;
	static volatile int32_t t66 = -157052082;

	t66 = ((x405/(x406*x407))<=x408);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x414 = 42842791LL;
	int16_t x415 = INT16_MIN;
	int64_t x416 = 548035398678602687LL;
	int32_t t67 = -15706508;

	t67 = ((x413/(x414*x415))<=x416);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x417 = 0;
	static int32_t x418 = -29;
	uint64_t x419 = 3457272882137LLU;
	int32_t t68 = 1;

	t68 = ((x417/(x418*x419))<=x420);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x422 = 2U;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t69 = -69111830;

	t69 = ((x421/(x422*x423))<=x424);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x429 = 127;
	static int64_t x431 = -1LL;
	volatile int8_t x432 = INT8_MAX;

	t70 = ((x429/(x430*x431))<=x432);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x433 = UINT16_MAX;
	static uint16_t x434 = 58U;
	int8_t x435 = INT8_MIN;
	static int32_t x436 = INT32_MIN;
	int32_t t71 = -1;

	t71 = ((x433/(x434*x435))<=x436);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x437 = INT64_MIN;
	int32_t x439 = 1149306;
	static uint8_t x440 = UINT8_MAX;
	volatile int32_t t72 = -508560374;

	t72 = ((x437/(x438*x439))<=x440);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x441 = INT64_MIN;
	int64_t x442 = -1LL;
	int64_t x443 = -10359093LL;
	volatile uint8_t x444 = 79U;
	volatile int32_t t73 = 15446547;

	t73 = ((x441/(x442*x443))<=x444);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x445 = -1;
	static int32_t x446 = 287882;
	static uint64_t x447 = UINT64_MAX;
	volatile int32_t t74 = 3764;

	t74 = ((x445/(x446*x447))<=x448);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x453 = 1160149U;
	volatile int8_t x456 = INT8_MIN;
	int32_t t75 = -10917;

	t75 = ((x453/(x454*x455))<=x456);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MAX;
	int16_t x459 = -1;
	volatile int8_t x460 = -1;
	volatile int32_t t76 = 846;

	t76 = ((x457/(x458*x459))<=x460);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x461 = 13292LLU;
	volatile uint16_t x463 = 1022U;
	static volatile int16_t x464 = INT16_MIN;
	volatile int32_t t77 = 103;

	t77 = ((x461/(x462*x463))<=x464);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x465 = UINT64_MAX;
	static int16_t x467 = -1;
	int64_t x468 = INT64_MAX;
	int32_t t78 = 28981901;

	t78 = ((x465/(x466*x467))<=x468);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x473 = INT8_MIN;
	volatile int16_t x474 = 1;
	int16_t x475 = -1;
	int8_t x476 = -1;

	t79 = ((x473/(x474*x475))<=x476);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x478 = 63637LLU;
	volatile int8_t x479 = INT8_MIN;
	int16_t x480 = -1;

	t80 = ((x477/(x478*x479))<=x480);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x493 = 608566257661139428LLU;
	volatile uint32_t x494 = 2367990U;
	static volatile int64_t x496 = -326220LL;
	static int32_t t81 = 21582444;

	t81 = ((x493/(x494*x495))<=x496);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x500 = INT8_MIN;

	t82 = ((x497/(x498*x499))<=x500);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x501 = INT32_MIN;
	int16_t x502 = -3;
	static uint8_t x503 = UINT8_MAX;
	int8_t x504 = INT8_MAX;
	int32_t t83 = 275307;

	t83 = ((x501/(x502*x503))<=x504);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x509 = INT8_MIN;
	uint8_t x510 = 1U;
	uint64_t x512 = 23952592905788329LLU;
	volatile int32_t t84 = 2914650;

	t84 = ((x509/(x510*x511))<=x512);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x513 = 0U;
	static int8_t x514 = INT8_MIN;
	static int16_t x516 = INT16_MIN;

	t85 = ((x513/(x514*x515))<=x516);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x517 = INT8_MIN;
	int64_t x518 = -9917275958985LL;
	int32_t x520 = 2;
	int32_t t86 = -8629;

	t86 = ((x517/(x518*x519))<=x520);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x521 = INT8_MIN;
	int8_t x522 = INT8_MIN;
	volatile int32_t x523 = -1;
	uint16_t x524 = 1111U;

	t87 = ((x521/(x522*x523))<=x524);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x533 = 10U;
	static int32_t x534 = INT32_MIN;
	uint64_t x535 = 861616064150LLU;
	int16_t x536 = INT16_MIN;
	int32_t t88 = 1102931;

	t88 = ((x533/(x534*x535))<=x536);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x537 = -1413320500LL;
	int32_t x538 = INT32_MAX;
	uint8_t x540 = 74U;
	static volatile int32_t t89 = 344528;

	t89 = ((x537/(x538*x539))<=x540);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x541 = INT16_MAX;
	uint32_t x542 = UINT32_MAX;
	uint64_t x543 = 63LLU;
	int32_t x544 = INT32_MIN;
	int32_t t90 = 197;

	t90 = ((x541/(x542*x543))<=x544);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x545 = INT64_MIN;
	int64_t x546 = -1LL;
	uint32_t x547 = 456569581U;
	uint32_t x548 = 13476U;

	t91 = ((x545/(x546*x547))<=x548);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x550 = -1;
	int8_t x551 = INT8_MIN;
	volatile int32_t t92 = 112795203;

	t92 = ((x549/(x550*x551))<=x552);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x557 = INT8_MIN;
	uint32_t x558 = 2035U;
	uint8_t x559 = 1U;
	static uint16_t x560 = UINT16_MAX;
	int32_t t93 = -133536790;

	t93 = ((x557/(x558*x559))<=x560);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x561 = 2474456308963890LLU;
	static int16_t x562 = INT16_MAX;
	static uint64_t x563 = 2132641266LLU;
	int16_t x564 = INT16_MIN;

	t94 = ((x561/(x562*x563))<=x564);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x565 = INT16_MAX;
	static uint64_t x567 = UINT64_MAX;
	uint8_t x568 = 2U;
	static int32_t t95 = -98;

	t95 = ((x565/(x566*x567))<=x568);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x577 = INT64_MAX;
	static volatile int16_t x578 = -1;
	uint64_t x579 = 1837076915897LLU;
	uint64_t x580 = UINT64_MAX;
	static int32_t t96 = -4;

	t96 = ((x577/(x578*x579))<=x580);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x586 = 1119U;
	volatile int16_t x587 = 6649;
	static volatile int32_t t97 = 5986;

	t97 = ((x585/(x586*x587))<=x588);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x589 = -1;
	int16_t x590 = INT16_MIN;
	static volatile int32_t t98 = -946;

	t98 = ((x589/(x590*x591))<=x592);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x593 = INT16_MIN;
	volatile uint32_t x594 = 1017U;
	int16_t x595 = INT16_MIN;
	int16_t x596 = 1;
	int32_t t99 = 8;

	t99 = ((x593/(x594*x595))<=x596);

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

