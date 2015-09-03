#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = UINT32_MAX;
int16_t x17 = 87;
static int32_t t3 = 61;
uint32_t x36 = 32861U;
uint8_t x41 = 11U;
int32_t t6 = 745988294;
static volatile int32_t x48 = INT32_MIN;
volatile uint64_t x49 = UINT64_MAX;
int32_t x50 = 79865165;
int32_t t8 = 918813968;
int32_t t11 = 127;
int32_t x92 = -1;
volatile int32_t t12 = -6;
int32_t t13 = 6687;
volatile int64_t x97 = 10829645516150663LL;
int8_t x120 = 36;
volatile int8_t x128 = INT8_MIN;
volatile int32_t t16 = 5;
volatile int32_t t20 = 14396;
int64_t x166 = INT64_MAX;
static volatile uint8_t x168 = 9U;
int16_t x172 = 135;
int16_t x175 = INT16_MIN;
int16_t x184 = -2308;
static int32_t t25 = -33758147;
static int64_t x191 = 5239LL;
int32_t t27 = 1053792;
static uint8_t x202 = 9U;
int32_t t28 = 97006759;
int16_t x206 = INT16_MIN;
volatile int32_t t29 = 3881;
int32_t t30 = -170639870;
volatile int64_t x221 = INT64_MAX;
static uint16_t x229 = 0U;
uint8_t x231 = 3U;
volatile int32_t t35 = 0;
int32_t t36 = 6613;
static volatile int16_t x248 = -941;
static int64_t x257 = INT64_MAX;
static int32_t t39 = 3362;
volatile int32_t x276 = INT32_MIN;
int32_t t41 = -1;
uint64_t x281 = UINT64_MAX;
static int16_t x282 = INT16_MAX;
static int64_t x284 = -510894067584630193LL;
volatile int32_t x286 = -5;
static int8_t x288 = 0;
static volatile int32_t t44 = 54056749;
volatile int64_t x298 = -19505063731LL;
int8_t x340 = -1;
int64_t x342 = -1LL;
volatile int32_t x344 = -521057;
uint8_t x365 = UINT8_MAX;
int16_t x403 = INT16_MIN;
volatile uint32_t x405 = 136989U;
int16_t x416 = INT16_MAX;
int16_t x424 = 12;
static int8_t x427 = INT8_MAX;
volatile int32_t t60 = -2179509;
static volatile uint8_t x435 = 1U;
int32_t t61 = -7780826;
volatile int8_t x467 = INT8_MIN;
uint8_t x469 = 5U;
uint8_t x474 = 7U;
static uint16_t x477 = UINT16_MAX;
uint8_t x488 = 115U;
volatile int64_t x503 = INT64_MAX;
static int32_t t72 = -41501;
volatile int16_t x522 = INT16_MAX;
int16_t x530 = -1;
int64_t x555 = -1LL;
static uint64_t x565 = 2430LLU;
static int32_t x584 = 18870;
static int32_t t86 = 4587594;
uint8_t x593 = UINT8_MAX;
int32_t t87 = 30994866;
static int64_t x600 = 41LL;
int16_t x610 = -1;
static int32_t x624 = -1;
int32_t t92 = 6943;
int64_t x634 = -1LL;
int8_t x641 = INT8_MAX;
volatile uint32_t x643 = 209U;
int64_t x650 = INT64_MIN;
int32_t x656 = 5;


void f0(void) {
	uint16_t x5 = 141U;
	static volatile uint8_t x6 = UINT8_MAX;
	int64_t x7 = 7353LL;
	int16_t x8 = INT16_MAX;
	volatile int32_t t0 = -5445878;

	t0 = ((x5>>(x6<=x7))<x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	uint64_t x10 = 455601161173816LLU;
	uint16_t x11 = UINT16_MAX;
	volatile int32_t t1 = -14;

	t1 = ((x9>>(x10<=x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x18 = -1;
	volatile int64_t x19 = INT64_MAX;
	int16_t x20 = -1;
	volatile int32_t t2 = 2343;

	t2 = ((x17>>(x18<=x19))<x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = 1;
	int8_t x26 = INT8_MIN;
	static uint32_t x27 = 108448U;
	static int8_t x28 = -1;

	t3 = ((x25>>(x26<=x27))<x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x29 = INT8_MAX;
	volatile uint16_t x30 = 1766U;
	int32_t x31 = INT32_MIN;
	volatile uint32_t x32 = UINT32_MAX;
	volatile int32_t t4 = -27419633;

	t4 = ((x29>>(x30<=x31))<x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = 635979;
	static volatile int16_t x34 = -1;
	volatile int32_t x35 = -1743754;
	volatile int32_t t5 = -65688562;

	t5 = ((x33>>(x34<=x35))<x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x42 = -1;
	int8_t x43 = 25;
	static volatile int32_t x44 = -1;

	t6 = ((x41>>(x42<=x43))<x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 4038165534565558LLU;
	static volatile uint64_t x46 = 137628574LLU;
	int16_t x47 = -3;
	int32_t t7 = -12;

	t7 = ((x45>>(x46<=x47))<x48);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x51 = 241913605888555LLU;
	int64_t x52 = 532600368648LL;

	t8 = ((x49>>(x50<=x51))<x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x65 = 4878346U;
	volatile int64_t x66 = 551755469553769LL;
	int32_t x67 = INT32_MIN;
	uint16_t x68 = 6048U;
	volatile int32_t t9 = 395250;

	t9 = ((x65>>(x66<=x67))<x68);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x73 = 60985920;
	int64_t x74 = 18006353966562056LL;
	uint32_t x75 = UINT32_MAX;
	static int64_t x76 = INT64_MIN;
	static volatile int32_t t10 = 201177;

	t10 = ((x73>>(x74<=x75))<x76);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x77 = INT32_MAX;
	uint8_t x78 = 0U;
	volatile int64_t x79 = INT64_MIN;
	int16_t x80 = INT16_MIN;

	t11 = ((x77>>(x78<=x79))<x80);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x89 = UINT8_MAX;
	uint64_t x90 = UINT64_MAX;
	uint16_t x91 = 72U;

	t12 = ((x89>>(x90<=x91))<x92);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x93 = UINT32_MAX;
	int8_t x94 = -1;
	volatile int8_t x95 = -1;
	static int8_t x96 = INT8_MIN;

	t13 = ((x93>>(x94<=x95))<x96);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x98 = -1;
	uint32_t x99 = 38500021U;
	int8_t x100 = -17;
	volatile int32_t t14 = -185104280;

	t14 = ((x97>>(x98<=x99))<x100);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x117 = INT64_MAX;
	volatile int8_t x118 = INT8_MIN;
	static int32_t x119 = INT32_MAX;
	static int32_t t15 = 2603;

	t15 = ((x117>>(x118<=x119))<x120);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x125 = INT32_MAX;
	static volatile int32_t x126 = -1;
	volatile int32_t x127 = INT32_MAX;

	t16 = ((x125>>(x126<=x127))<x128);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x133 = 267916233;
	int16_t x134 = -1;
	int32_t x135 = INT32_MAX;
	int8_t x136 = -8;
	int32_t t17 = -94462;

	t17 = ((x133>>(x134<=x135))<x136);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int64_t x138 = -1LL;
	int16_t x139 = INT16_MIN;
	volatile uint8_t x140 = 1U;
	static volatile int32_t t18 = 91;

	t18 = ((x137>>(x138<=x139))<x140);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x141 = 6U;
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = INT64_MAX;
	volatile int8_t x144 = INT8_MIN;
	int32_t t19 = -763;

	t19 = ((x141>>(x142<=x143))<x144);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x149 = UINT32_MAX;
	static uint8_t x150 = 2U;
	uint32_t x151 = 5393417U;
	int64_t x152 = INT64_MAX;

	t20 = ((x149>>(x150<=x151))<x152);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x153 = INT32_MAX;
	uint16_t x154 = 6U;
	uint16_t x155 = 0U;
	int16_t x156 = -140;
	volatile int32_t t21 = 153;

	t21 = ((x153>>(x154<=x155))<x156);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x165 = 517LLU;
	int16_t x167 = 1;
	volatile int32_t t22 = -679140399;

	t22 = ((x165>>(x166<=x167))<x168);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x169 = 11552;
	volatile int64_t x170 = INT64_MAX;
	static int16_t x171 = INT16_MAX;
	volatile int32_t t23 = -465235645;

	t23 = ((x169>>(x170<=x171))<x172);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x173 = 3975391828025119LLU;
	int16_t x174 = INT16_MIN;
	int8_t x176 = -11;
	static int32_t t24 = -3277727;

	t24 = ((x173>>(x174<=x175))<x176);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x181 = 1045620561589162LLU;
	int64_t x182 = INT64_MIN;
	uint32_t x183 = 31998U;

	t25 = ((x181>>(x182<=x183))<x184);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = INT32_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t26 = -416;

	t26 = ((x189>>(x190<=x191))<x192);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x193 = 1U;
	int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 117209;

	t27 = ((x193>>(x194<=x195))<x196);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int64_t x203 = -2038563210260LL;
	volatile int16_t x204 = INT16_MIN;

	t28 = ((x201>>(x202<=x203))<x204);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x205 = 2391U;
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = -15530260148LL;

	t29 = ((x205>>(x206<=x207))<x208);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x213 = 9U;
	int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MIN;
	uint32_t x216 = 81127541U;

	t30 = ((x213>>(x214<=x215))<x216);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x222 = 2008LLU;
	uint16_t x223 = 13640U;
	static int64_t x224 = INT64_MAX;
	static int32_t t31 = 6;

	t31 = ((x221>>(x222<=x223))<x224);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x225 = 22065467U;
	int16_t x226 = 40;
	int8_t x227 = INT8_MIN;
	volatile int8_t x228 = 14;
	int32_t t32 = 10425;

	t32 = ((x225>>(x226<=x227))<x228);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x230 = 30130U;
	int8_t x232 = INT8_MAX;
	volatile int32_t t33 = -4;

	t33 = ((x229>>(x230<=x231))<x232);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x233 = 45;
	static uint64_t x234 = UINT64_MAX;
	int32_t x235 = 2;
	int8_t x236 = INT8_MAX;
	volatile int32_t t34 = 2;

	t34 = ((x233>>(x234<=x235))<x236);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x237 = 48774219295LL;
	static uint8_t x238 = 7U;
	volatile int16_t x239 = INT16_MAX;
	int16_t x240 = 11;

	t35 = ((x237>>(x238<=x239))<x240);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x241 = 891U;
	static uint16_t x242 = 33U;
	int16_t x243 = 10;
	volatile int32_t x244 = 12;

	t36 = ((x241>>(x242<=x243))<x244);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x245 = 75U;
	int32_t x246 = INT32_MAX;
	int16_t x247 = -35;
	int32_t t37 = 2;

	t37 = ((x245>>(x246<=x247))<x248);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x258 = INT16_MIN;
	uint32_t x259 = 337059156U;
	volatile uint8_t x260 = UINT8_MAX;
	volatile int32_t t38 = -1601575;

	t38 = ((x257>>(x258<=x259))<x260);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x261 = 1021119623U;
	uint32_t x262 = 49U;
	uint8_t x263 = 34U;
	static int32_t x264 = -1;

	t39 = ((x261>>(x262<=x263))<x264);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x269 = 7U;
	int16_t x270 = INT16_MIN;
	volatile uint16_t x271 = UINT16_MAX;
	int16_t x272 = -95;
	volatile int32_t t40 = 390;

	t40 = ((x269>>(x270<=x271))<x272);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x273 = INT16_MAX;
	static int32_t x274 = INT32_MIN;
	uint8_t x275 = UINT8_MAX;

	t41 = ((x273>>(x274<=x275))<x276);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x283 = UINT16_MAX;
	int32_t t42 = -696651;

	t42 = ((x281>>(x282<=x283))<x284);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x285 = 130;
	uint8_t x287 = UINT8_MAX;
	volatile int32_t t43 = -112811035;

	t43 = ((x285>>(x286<=x287))<x288);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x291 = -1;
	int8_t x292 = -6;

	t44 = ((x289>>(x290<=x291))<x292);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x293 = INT8_MAX;
	static uint8_t x294 = UINT8_MAX;
	volatile int16_t x295 = -1;
	int16_t x296 = 0;
	volatile int32_t t45 = 7;

	t45 = ((x293>>(x294<=x295))<x296);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x297 = 0;
	int64_t x299 = INT64_MAX;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t46 = -99361;

	t46 = ((x297>>(x298<=x299))<x300);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x305 = 509723LLU;
	uint16_t x306 = 1934U;
	int64_t x307 = INT64_MIN;
	volatile int8_t x308 = -1;
	int32_t t47 = -5358566;

	t47 = ((x305>>(x306<=x307))<x308);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x337 = UINT32_MAX;
	int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MAX;
	int32_t t48 = 1;

	t48 = ((x337>>(x338<=x339))<x340);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x341 = 85U;
	volatile int8_t x343 = INT8_MAX;
	volatile int32_t t49 = -10028684;

	t49 = ((x341>>(x342<=x343))<x344);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x349 = 1;
	static uint16_t x350 = UINT16_MAX;
	int64_t x351 = -930LL;
	uint32_t x352 = 7774U;
	int32_t t50 = -31253;

	t50 = ((x349>>(x350<=x351))<x352);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x353 = 27U;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = INT8_MAX;
	volatile int16_t x356 = 381;
	volatile int32_t t51 = -160257572;

	t51 = ((x353>>(x354<=x355))<x356);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x366 = 210525LL;
	int64_t x367 = INT64_MIN;
	int16_t x368 = -1;
	int32_t t52 = -407269;

	t52 = ((x365>>(x366<=x367))<x368);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x369 = 411467115308LLU;
	int32_t x370 = -22;
	static volatile uint32_t x371 = 444051842U;
	static int8_t x372 = -1;
	static int32_t t53 = -91341;

	t53 = ((x369>>(x370<=x371))<x372);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x389 = UINT32_MAX;
	int8_t x390 = 25;
	int8_t x391 = INT8_MAX;
	int64_t x392 = INT64_MAX;
	static int32_t t54 = 5290116;

	t54 = ((x389>>(x390<=x391))<x392);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x397 = 734309464LLU;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = 0U;
	int8_t x400 = INT8_MAX;
	int32_t t55 = 414233320;

	t55 = ((x397>>(x398<=x399))<x400);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x401 = INT8_MAX;
	int16_t x402 = -1;
	int32_t x404 = -1198119;
	volatile int32_t t56 = -2952360;

	t56 = ((x401>>(x402<=x403))<x404);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MIN;
	volatile int32_t t57 = -1011195172;

	t57 = ((x405>>(x406<=x407))<x408);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x413 = 280;
	volatile int64_t x414 = -1LL;
	uint8_t x415 = 85U;
	static int32_t t58 = -928488;

	t58 = ((x413>>(x414<=x415))<x416);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x421 = 1;
	uint8_t x422 = 0U;
	uint64_t x423 = UINT64_MAX;
	static volatile int32_t t59 = 19824;

	t59 = ((x421>>(x422<=x423))<x424);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x425 = 227427561843LLU;
	uint64_t x426 = UINT64_MAX;
	int16_t x428 = INT16_MIN;

	t60 = ((x425>>(x426<=x427))<x428);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x433 = 22696937;
	uint64_t x434 = 5159046LLU;
	uint32_t x436 = 20U;

	t61 = ((x433>>(x434<=x435))<x436);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x441 = 37U;
	int32_t x442 = -118372;
	volatile uint8_t x443 = UINT8_MAX;
	static volatile int64_t x444 = INT64_MIN;
	int32_t t62 = -1763236;

	t62 = ((x441>>(x442<=x443))<x444);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x445 = 40551886U;
	uint64_t x446 = 10708111351LLU;
	int8_t x447 = INT8_MAX;
	int16_t x448 = INT16_MIN;
	volatile int32_t t63 = -5;

	t63 = ((x445>>(x446<=x447))<x448);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x453 = 454U;
	int8_t x454 = INT8_MAX;
	int8_t x455 = -1;
	int8_t x456 = INT8_MIN;
	static volatile int32_t t64 = -9471;

	t64 = ((x453>>(x454<=x455))<x456);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x457 = 17441735962769944LL;
	uint32_t x458 = 121305800U;
	static uint32_t x459 = 24245026U;
	int16_t x460 = -9;
	int32_t t65 = 247072;

	t65 = ((x457>>(x458<=x459))<x460);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x465 = 48;
	int32_t x466 = INT32_MAX;
	int64_t x468 = 2785625800LL;
	volatile int32_t t66 = 8281704;

	t66 = ((x465>>(x466<=x467))<x468);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x470 = INT8_MIN;
	uint8_t x471 = 3U;
	volatile int8_t x472 = -1;
	volatile int32_t t67 = -2896;

	t67 = ((x469>>(x470<=x471))<x472);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x473 = UINT32_MAX;
	static int16_t x475 = -11;
	static volatile int64_t x476 = INT64_MIN;
	static int32_t t68 = -1637159;

	t68 = ((x473>>(x474<=x475))<x476);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x478 = 2;
	uint64_t x479 = 5682404457LLU;
	int32_t x480 = -1;
	static volatile int32_t t69 = 248891;

	t69 = ((x477>>(x478<=x479))<x480);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x481 = 9;
	int32_t x482 = 3429;
	uint8_t x483 = 26U;
	volatile uint16_t x484 = UINT16_MAX;
	int32_t t70 = -8;

	t70 = ((x481>>(x482<=x483))<x484);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x485 = 3253757098584104370LL;
	uint16_t x486 = 74U;
	int64_t x487 = 183018LL;
	volatile int32_t t71 = 20;

	t71 = ((x485>>(x486<=x487))<x488);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x501 = 0;
	static int32_t x502 = INT32_MAX;
	int32_t x504 = INT32_MIN;

	t72 = ((x501>>(x502<=x503))<x504);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x505 = 2;
	int64_t x506 = INT64_MAX;
	int16_t x507 = INT16_MAX;
	int64_t x508 = 5LL;
	volatile int32_t t73 = 34016;

	t73 = ((x505>>(x506<=x507))<x508);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x513 = 738U;
	uint8_t x514 = 9U;
	int32_t x515 = INT32_MIN;
	int8_t x516 = -1;
	volatile int32_t t74 = 12546;

	t74 = ((x513>>(x514<=x515))<x516);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x517 = INT16_MAX;
	static int64_t x518 = 7LL;
	volatile int32_t x519 = 16259;
	static int8_t x520 = 7;
	int32_t t75 = -683169035;

	t75 = ((x517>>(x518<=x519))<x520);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x521 = 434293505U;
	int16_t x523 = 0;
	int16_t x524 = -176;
	int32_t t76 = 13;

	t76 = ((x521>>(x522<=x523))<x524);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x525 = 3;
	int64_t x526 = -947616835768339LL;
	uint8_t x527 = 1U;
	volatile int64_t x528 = INT64_MIN;
	int32_t t77 = 28963053;

	t77 = ((x525>>(x526<=x527))<x528);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x529 = UINT32_MAX;
	int8_t x531 = INT8_MAX;
	int16_t x532 = -33;
	volatile int32_t t78 = -894;

	t78 = ((x529>>(x530<=x531))<x532);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x537 = 123397497989816111LLU;
	static volatile int16_t x538 = INT16_MIN;
	int64_t x539 = 1873278682360780LL;
	int32_t x540 = INT32_MIN;
	volatile int32_t t79 = 37036;

	t79 = ((x537>>(x538<=x539))<x540);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x553 = 47U;
	int8_t x554 = -1;
	uint8_t x556 = 6U;
	int32_t t80 = -3335896;

	t80 = ((x553>>(x554<=x555))<x556);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x557 = 47;
	static int32_t x558 = -4783787;
	uint32_t x559 = 7125U;
	int64_t x560 = 177925729127520808LL;
	static int32_t t81 = 11939753;

	t81 = ((x557>>(x558<=x559))<x560);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x561 = 0;
	static uint64_t x562 = 106775861940036LLU;
	int32_t x563 = -2;
	static uint32_t x564 = 134U;
	int32_t t82 = -8;

	t82 = ((x561>>(x562<=x563))<x564);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x566 = 9U;
	int64_t x567 = -1LL;
	uint64_t x568 = 380821064127934LLU;
	int32_t t83 = -8;

	t83 = ((x565>>(x566<=x567))<x568);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x569 = INT64_MAX;
	int8_t x570 = INT8_MIN;
	int32_t x571 = -1;
	uint32_t x572 = UINT32_MAX;
	volatile int32_t t84 = 1;

	t84 = ((x569>>(x570<=x571))<x572);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x581 = UINT64_MAX;
	uint32_t x582 = 422614U;
	static uint64_t x583 = 23125114LLU;
	volatile int32_t t85 = -102120150;

	t85 = ((x581>>(x582<=x583))<x584);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x589 = UINT16_MAX;
	volatile uint16_t x590 = 2U;
	int8_t x591 = -1;
	volatile int8_t x592 = INT8_MIN;

	t86 = ((x589>>(x590<=x591))<x592);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x594 = INT8_MIN;
	uint16_t x595 = 7U;
	int8_t x596 = INT8_MIN;

	t87 = ((x593>>(x594<=x595))<x596);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x597 = 3;
	volatile int16_t x598 = INT16_MIN;
	static volatile int64_t x599 = 18337439523398581LL;
	int32_t t88 = 2;

	t88 = ((x597>>(x598<=x599))<x600);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x601 = INT32_MAX;
	volatile int16_t x602 = -1;
	int32_t x603 = -27858347;
	static int8_t x604 = INT8_MIN;
	int32_t t89 = -798742;

	t89 = ((x601>>(x602<=x603))<x604);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x605 = UINT8_MAX;
	static int16_t x606 = -1;
	int16_t x607 = 1;
	static uint8_t x608 = 2U;
	volatile int32_t t90 = 558550;

	t90 = ((x605>>(x606<=x607))<x608);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x609 = INT64_MAX;
	int8_t x611 = 1;
	uint64_t x612 = 0LLU;
	int32_t t91 = 23;

	t91 = ((x609>>(x610<=x611))<x612);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x621 = UINT8_MAX;
	uint8_t x622 = 93U;
	int16_t x623 = -10566;

	t92 = ((x621>>(x622<=x623))<x624);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x625 = 43194926277703LLU;
	int64_t x626 = INT64_MIN;
	static int32_t x627 = -1;
	int64_t x628 = INT64_MIN;
	volatile int32_t t93 = -940;

	t93 = ((x625>>(x626<=x627))<x628);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x633 = 203U;
	uint16_t x635 = 0U;
	uint16_t x636 = 14U;
	volatile int32_t t94 = 12;

	t94 = ((x633>>(x634<=x635))<x636);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x637 = 14U;
	static int32_t x638 = -1;
	static int32_t x639 = INT32_MAX;
	uint16_t x640 = 14U;
	static int32_t t95 = 368;

	t95 = ((x637>>(x638<=x639))<x640);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x642 = INT32_MAX;
	int32_t x644 = INT32_MIN;
	int32_t t96 = 204375706;

	t96 = ((x641>>(x642<=x643))<x644);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x645 = INT8_MAX;
	int8_t x646 = 0;
	static volatile int16_t x647 = INT16_MIN;
	int32_t x648 = -2;
	int32_t t97 = -80;

	t97 = ((x645>>(x646<=x647))<x648);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x649 = 61060;
	static int16_t x651 = 411;
	int16_t x652 = INT16_MIN;
	int32_t t98 = -3255;

	t98 = ((x649>>(x650<=x651))<x652);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x653 = UINT64_MAX;
	int16_t x654 = INT16_MAX;
	static volatile uint64_t x655 = UINT64_MAX;
	static volatile int32_t t99 = 96484;

	t99 = ((x653>>(x654<=x655))<x656);

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

