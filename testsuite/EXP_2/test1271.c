#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int64_t x10 = INT64_MIN;
int64_t x53 = 80899LL;
int32_t x54 = 482942534;
int16_t x56 = -1;
int64_t x58 = 47242780LL;
static int16_t x80 = INT16_MIN;
volatile int8_t x84 = 2;
static int16_t x86 = INT16_MIN;
int8_t x94 = INT8_MIN;
int8_t x106 = INT8_MIN;
uint16_t x123 = UINT16_MAX;
static uint64_t x135 = UINT64_MAX;
static uint64_t x141 = UINT64_MAX;
uint64_t x149 = 165218LLU;
int8_t x170 = INT8_MAX;
int32_t t21 = 39311179;
int8_t x196 = 0;
uint64_t x209 = UINT64_MAX;
uint8_t x210 = UINT8_MAX;
int32_t t25 = -56185;
static int8_t x220 = INT8_MAX;
int32_t t26 = -4725;
static volatile uint64_t x223 = 387LLU;
int8_t x228 = -1;
uint8_t x245 = 81U;
volatile int32_t x248 = -42;
int64_t x268 = -1LL;
static volatile int32_t t32 = 3452638;
volatile int32_t t33 = -849366608;
volatile int32_t t35 = 7;
int8_t x292 = INT8_MAX;
static int8_t x302 = INT8_MIN;
static int32_t t37 = -1;
int32_t x330 = -169227599;
volatile int16_t x334 = INT16_MIN;
uint8_t x339 = UINT8_MAX;
int32_t t41 = -440858;
uint64_t x353 = UINT64_MAX;
volatile int32_t t43 = 126253409;
int16_t x372 = INT16_MIN;
uint32_t x382 = 3621U;
uint32_t x383 = UINT32_MAX;
int32_t x396 = INT32_MIN;
int32_t x400 = -1;
int16_t x433 = 61;
static int8_t x448 = INT8_MIN;
int32_t t54 = -65962;
static uint16_t x449 = 15001U;
volatile int32_t x451 = -1;
volatile int64_t x457 = INT64_MAX;
int32_t t56 = 5874;
int32_t x466 = INT32_MIN;
int32_t t59 = -497162;
uint8_t x486 = 56U;
static volatile int32_t x487 = -28583372;
volatile int32_t t62 = -2;
int8_t x519 = -1;
int32_t t65 = 42375815;
static int64_t x525 = INT64_MAX;
int8_t x526 = INT8_MIN;
volatile int16_t x555 = INT16_MIN;
uint16_t x556 = 12U;
uint64_t x558 = UINT64_MAX;
volatile int16_t x574 = -1;
int32_t x589 = INT32_MAX;
static int32_t t74 = 11;
int8_t x598 = -1;
int32_t t75 = 1;
int32_t x602 = INT32_MIN;
volatile int32_t t77 = -931809233;
volatile int8_t x609 = 0;
static volatile int16_t x610 = INT16_MIN;
int16_t x624 = -1;
volatile int32_t t80 = 4665013;
uint32_t x627 = UINT32_MAX;
uint64_t x638 = 365468313705LLU;
static uint8_t x639 = 15U;
int8_t x641 = 1;
int16_t x642 = INT16_MAX;
int64_t x643 = INT64_MIN;
static uint64_t x658 = UINT64_MAX;
uint64_t x671 = 911829LLU;
int16_t x675 = INT16_MIN;
static int32_t x676 = -1;
static volatile int32_t t86 = 107644;
int16_t x687 = INT16_MIN;
static int32_t x693 = 85070;
int32_t t93 = -41688729;
int8_t x709 = INT8_MAX;
uint8_t x731 = 103U;
int32_t t97 = 418190;
static uint8_t x747 = 50U;
int64_t x748 = 70779238151353LL;
static int32_t t99 = 32646;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	int32_t t0 = 114;

	t0 = ((x1>>(x2==x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 32U;
	volatile int32_t x11 = INT32_MIN;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t1 = 44626;

	t1 = ((x9>>(x10==x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x29 = 7;
	int16_t x30 = 722;
	int32_t x31 = 0;
	int64_t x32 = INT64_MIN;
	volatile int32_t t2 = -71;

	t2 = ((x29>>(x30==x31))<=x32);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = UINT16_MAX;
	uint16_t x39 = UINT16_MAX;
	static int64_t x40 = INT64_MIN;
	int32_t t3 = 43086899;

	t3 = ((x37>>(x38==x39))<=x40);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x55 = UINT64_MAX;
	volatile int32_t t4 = -3;

	t4 = ((x53>>(x54==x55))<=x56);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x57 = 15U;
	uint16_t x59 = UINT16_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t5 = 30746;

	t5 = ((x57>>(x58==x59))<=x60);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x77 = INT32_MAX;
	int32_t x78 = 1095;
	int64_t x79 = -4LL;
	static volatile int32_t t6 = -99385;

	t6 = ((x77>>(x78==x79))<=x80);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x81 = 23U;
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = 1;
	int32_t t7 = 1457;

	t7 = ((x81>>(x82==x83))<=x84);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x85 = INT8_MAX;
	static volatile uint8_t x87 = 77U;
	int8_t x88 = INT8_MIN;
	int32_t t8 = -443956;

	t8 = ((x85>>(x86==x87))<=x88);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x93 = 55U;
	int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t9 = 94201;

	t9 = ((x93>>(x94==x95))<=x96);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x101 = UINT32_MAX;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = -1;
	int64_t x104 = -2057432641571666473LL;
	static volatile int32_t t10 = 0;

	t10 = ((x101>>(x102==x103))<=x104);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x105 = 25U;
	static int64_t x107 = -1LL;
	static int16_t x108 = INT16_MIN;
	int32_t t11 = -1;

	t11 = ((x105>>(x106==x107))<=x108);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x109 = 47;
	static volatile int32_t x110 = INT32_MIN;
	int32_t x111 = -1;
	uint16_t x112 = UINT16_MAX;
	static volatile int32_t t12 = 37;

	t12 = ((x109>>(x110==x111))<=x112);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x117 = 9291;
	static int32_t x118 = INT32_MIN;
	volatile uint64_t x119 = 79699081LLU;
	uint16_t x120 = UINT16_MAX;
	int32_t t13 = 4157164;

	t13 = ((x117>>(x118==x119))<=x120);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x121 = 50U;
	static int8_t x122 = INT8_MIN;
	static int16_t x124 = -1;
	volatile int32_t t14 = 10;

	t14 = ((x121>>(x122==x123))<=x124);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x125 = 610;
	uint32_t x126 = UINT32_MAX;
	int64_t x127 = -1LL;
	int64_t x128 = -627756500LL;
	volatile int32_t t15 = -248635;

	t15 = ((x125>>(x126==x127))<=x128);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x133 = 0U;
	uint16_t x134 = 2980U;
	int16_t x136 = INT16_MIN;
	int32_t t16 = -126017;

	t16 = ((x133>>(x134==x135))<=x136);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x142 = INT64_MAX;
	int32_t x143 = -222720575;
	static uint32_t x144 = 0U;
	volatile int32_t t17 = 168486;

	t17 = ((x141>>(x142==x143))<=x144);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MAX;
	static uint64_t x152 = 94708603885LLU;
	static int32_t t18 = -389889691;

	t18 = ((x149>>(x150==x151))<=x152);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x169 = INT32_MAX;
	uint8_t x171 = UINT8_MAX;
	int32_t x172 = -1;
	int32_t t19 = 55475499;

	t19 = ((x169>>(x170==x171))<=x172);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x173 = 100475;
	uint64_t x174 = 8926028098320653883LLU;
	int8_t x175 = 3;
	int8_t x176 = 6;
	volatile int32_t t20 = 109648312;

	t20 = ((x173>>(x174==x175))<=x176);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x185 = 25;
	uint8_t x186 = 2U;
	volatile uint32_t x187 = 40388U;
	int8_t x188 = 0;

	t21 = ((x185>>(x186==x187))<=x188);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x189 = 435701LL;
	volatile int32_t x190 = -1;
	static uint64_t x191 = UINT64_MAX;
	volatile uint8_t x192 = UINT8_MAX;
	volatile int32_t t22 = 119570660;

	t22 = ((x189>>(x190==x191))<=x192);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x193 = 53965818816291LL;
	volatile int16_t x194 = INT16_MAX;
	static int32_t x195 = -2308;
	static volatile int32_t t23 = 1522;

	t23 = ((x193>>(x194==x195))<=x196);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x211 = -1;
	static volatile int8_t x212 = 0;
	static int32_t t24 = -711540092;

	t24 = ((x209>>(x210==x211))<=x212);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x213 = 0;
	int64_t x214 = INT64_MIN;
	int64_t x215 = -1LL;
	static int64_t x216 = -25373611776453LL;

	t25 = ((x213>>(x214==x215))<=x216);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x217 = 1U;
	int32_t x218 = INT32_MIN;
	volatile int8_t x219 = INT8_MAX;

	t26 = ((x217>>(x218==x219))<=x220);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x221 = INT32_MAX;
	volatile int16_t x222 = INT16_MIN;
	volatile int32_t x224 = INT32_MIN;
	int32_t t27 = 1;

	t27 = ((x221>>(x222==x223))<=x224);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x225 = 55U;
	static int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MAX;
	static volatile int32_t t28 = -188405513;

	t28 = ((x225>>(x226==x227))<=x228);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x246 = UINT16_MAX;
	static int64_t x247 = INT64_MIN;
	volatile int32_t t29 = 64782;

	t29 = ((x245>>(x246==x247))<=x248);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x257 = 5U;
	uint16_t x258 = 2864U;
	volatile int64_t x259 = -1LL;
	static int16_t x260 = 395;
	int32_t t30 = -14118;

	t30 = ((x257>>(x258==x259))<=x260);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	int16_t x267 = 9;
	int32_t t31 = -185748478;

	t31 = ((x265>>(x266==x267))<=x268);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x269 = INT16_MAX;
	uint32_t x270 = 1430129302U;
	int16_t x271 = -1;
	uint32_t x272 = 223U;

	t32 = ((x269>>(x270==x271))<=x272);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x273 = 2317U;
	uint16_t x274 = 9U;
	int32_t x275 = -155;
	int8_t x276 = 0;

	t33 = ((x273>>(x274==x275))<=x276);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x277 = INT16_MAX;
	volatile uint8_t x278 = UINT8_MAX;
	volatile int64_t x279 = INT64_MIN;
	volatile uint64_t x280 = 372496LLU;
	int32_t t34 = -15900014;

	t34 = ((x277>>(x278==x279))<=x280);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x285 = 228637269978031LL;
	uint16_t x286 = 10U;
	int16_t x287 = INT16_MIN;
	uint16_t x288 = UINT16_MAX;

	t35 = ((x285>>(x286==x287))<=x288);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x289 = 1;
	int16_t x290 = INT16_MIN;
	int64_t x291 = 4671825580LL;
	static int32_t t36 = 6099839;

	t36 = ((x289>>(x290==x291))<=x292);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x301 = 2U;
	uint16_t x303 = 39U;
	uint8_t x304 = 27U;

	t37 = ((x301>>(x302==x303))<=x304);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x305 = 3857LLU;
	volatile uint8_t x306 = 21U;
	uint32_t x307 = 121918U;
	uint32_t x308 = 2610U;
	int32_t t38 = 8851873;

	t38 = ((x305>>(x306==x307))<=x308);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x329 = INT64_MAX;
	int8_t x331 = 1;
	int64_t x332 = INT64_MAX;
	volatile int32_t t39 = 42931;

	t39 = ((x329>>(x330==x331))<=x332);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x333 = 354295935;
	int8_t x335 = INT8_MAX;
	int64_t x336 = 110738LL;
	static int32_t t40 = -432;

	t40 = ((x333>>(x334==x335))<=x336);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x337 = 11;
	int8_t x338 = INT8_MIN;
	static int64_t x340 = INT64_MIN;

	t41 = ((x337>>(x338==x339))<=x340);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x341 = 4401837288LLU;
	int8_t x342 = -1;
	volatile int16_t x343 = -1;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t42 = 14550;

	t42 = ((x341>>(x342==x343))<=x344);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 4092677728046585181LLU;

	t43 = ((x353>>(x354==x355))<=x356);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x365 = 562796862507513266LLU;
	volatile uint32_t x366 = 81U;
	int16_t x367 = 3263;
	static uint8_t x368 = UINT8_MAX;
	volatile int32_t t44 = -3;

	t44 = ((x365>>(x366==x367))<=x368);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x369 = 5624;
	int64_t x370 = -1LL;
	static int8_t x371 = INT8_MAX;
	static volatile int32_t t45 = 757;

	t45 = ((x369>>(x370==x371))<=x372);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x381 = 55U;
	int8_t x384 = 5;
	volatile int32_t t46 = 23;

	t46 = ((x381>>(x382==x383))<=x384);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x389 = 22U;
	uint32_t x390 = 16187309U;
	int16_t x391 = INT16_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t47 = 3863925;

	t47 = ((x389>>(x390==x391))<=x392);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x393 = UINT32_MAX;
	uint8_t x394 = 59U;
	volatile uint64_t x395 = 48LLU;
	int32_t t48 = -11989;

	t48 = ((x393>>(x394==x395))<=x396);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x397 = 10686564LLU;
	int16_t x398 = INT16_MIN;
	static uint8_t x399 = 11U;
	int32_t t49 = 60227;

	t49 = ((x397>>(x398==x399))<=x400);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x405 = UINT16_MAX;
	int8_t x406 = -21;
	uint64_t x407 = UINT64_MAX;
	int32_t x408 = 1;
	static int32_t t50 = -11362;

	t50 = ((x405>>(x406==x407))<=x408);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x417 = 2271073059445399829LLU;
	static int64_t x418 = -1LL;
	int32_t x419 = -5;
	int64_t x420 = INT64_MIN;
	int32_t t51 = 0;

	t51 = ((x417>>(x418==x419))<=x420);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x429 = 20;
	uint64_t x430 = 2486LLU;
	static uint16_t x431 = UINT16_MAX;
	uint8_t x432 = UINT8_MAX;
	static volatile int32_t t52 = -40569;

	t52 = ((x429>>(x430==x431))<=x432);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x434 = -1;
	uint8_t x435 = 1U;
	int32_t x436 = INT32_MAX;
	volatile int32_t t53 = -228;

	t53 = ((x433>>(x434==x435))<=x436);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x445 = 17;
	int32_t x446 = 786777;
	volatile int32_t x447 = 423;

	t54 = ((x445>>(x446==x447))<=x448);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x450 = INT16_MIN;
	uint64_t x452 = 14686573998803LLU;
	int32_t t55 = -78174085;

	t55 = ((x449>>(x450==x451))<=x452);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x458 = INT16_MIN;
	static uint16_t x459 = 43U;
	volatile int64_t x460 = INT64_MAX;

	t56 = ((x457>>(x458==x459))<=x460);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x461 = 25;
	int64_t x462 = INT64_MIN;
	uint16_t x463 = 5U;
	volatile uint16_t x464 = 483U;
	volatile int32_t t57 = -157442;

	t57 = ((x461>>(x462==x463))<=x464);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x465 = UINT8_MAX;
	uint8_t x467 = 0U;
	uint8_t x468 = 3U;
	int32_t t58 = 8257634;

	t58 = ((x465>>(x466==x467))<=x468);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x473 = 3LLU;
	volatile int32_t x474 = INT32_MAX;
	uint64_t x475 = UINT64_MAX;
	int64_t x476 = INT64_MAX;

	t59 = ((x473>>(x474==x475))<=x476);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x477 = 6U;
	static int32_t x478 = INT32_MIN;
	volatile int8_t x479 = -1;
	uint16_t x480 = 1U;
	volatile int32_t t60 = 853;

	t60 = ((x477>>(x478==x479))<=x480);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x485 = INT32_MAX;
	int32_t x488 = INT32_MAX;
	volatile int32_t t61 = -3;

	t61 = ((x485>>(x486==x487))<=x488);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x493 = INT64_MAX;
	int16_t x494 = INT16_MIN;
	volatile int64_t x495 = -1LL;
	uint16_t x496 = UINT16_MAX;

	t62 = ((x493>>(x494==x495))<=x496);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x505 = 35U;
	int32_t x506 = -1126713;
	int64_t x507 = INT64_MIN;
	uint32_t x508 = UINT32_MAX;
	int32_t t63 = -24409050;

	t63 = ((x505>>(x506==x507))<=x508);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x517 = 3661775LL;
	int16_t x518 = INT16_MAX;
	volatile uint8_t x520 = UINT8_MAX;
	int32_t t64 = -232;

	t64 = ((x517>>(x518==x519))<=x520);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x521 = 26540U;
	int8_t x522 = -12;
	static volatile int64_t x523 = -1006LL;
	static volatile int32_t x524 = INT32_MIN;

	t65 = ((x521>>(x522==x523))<=x524);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x527 = INT8_MAX;
	int16_t x528 = INT16_MIN;
	int32_t t66 = 254;

	t66 = ((x525>>(x526==x527))<=x528);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x537 = 7U;
	int64_t x538 = -1LL;
	int64_t x539 = INT64_MIN;
	uint16_t x540 = UINT16_MAX;
	int32_t t67 = -14;

	t67 = ((x537>>(x538==x539))<=x540);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x553 = 0U;
	uint16_t x554 = UINT16_MAX;
	int32_t t68 = 9;

	t68 = ((x553>>(x554==x555))<=x556);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x557 = 450734883U;
	int64_t x559 = INT64_MIN;
	int64_t x560 = -1494264841539411678LL;
	int32_t t69 = -13158;

	t69 = ((x557>>(x558==x559))<=x560);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x561 = INT64_MAX;
	volatile int16_t x562 = INT16_MIN;
	static uint16_t x563 = 0U;
	int8_t x564 = INT8_MIN;
	static int32_t t70 = -61;

	t70 = ((x561>>(x562==x563))<=x564);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x569 = 4595677;
	static int32_t x570 = INT32_MIN;
	int8_t x571 = INT8_MIN;
	static int32_t x572 = 3953;
	static int32_t t71 = -1019145123;

	t71 = ((x569>>(x570==x571))<=x572);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x573 = 15U;
	int32_t x575 = INT32_MIN;
	int16_t x576 = -1;
	static volatile int32_t t72 = -757;

	t72 = ((x573>>(x574==x575))<=x576);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x581 = 11U;
	static uint32_t x582 = 444443980U;
	uint16_t x583 = UINT16_MAX;
	int16_t x584 = INT16_MIN;
	int32_t t73 = 3992628;

	t73 = ((x581>>(x582==x583))<=x584);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x590 = INT16_MAX;
	int64_t x591 = -55538135962LL;
	volatile int16_t x592 = INT16_MAX;

	t74 = ((x589>>(x590==x591))<=x592);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x597 = INT32_MAX;
	volatile int32_t x599 = -1;
	int16_t x600 = INT16_MIN;

	t75 = ((x597>>(x598==x599))<=x600);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x601 = 1;
	int8_t x603 = 3;
	uint16_t x604 = 9293U;
	volatile int32_t t76 = -60496;

	t76 = ((x601>>(x602==x603))<=x604);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x605 = UINT64_MAX;
	int64_t x606 = -1LL;
	static int32_t x607 = -1;
	uint16_t x608 = 7U;

	t77 = ((x605>>(x606==x607))<=x608);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x611 = 716U;
	uint16_t x612 = 10423U;
	int32_t t78 = 420925;

	t78 = ((x609>>(x610==x611))<=x612);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x617 = 426U;
	static int64_t x618 = 3785047600766542073LL;
	static int16_t x619 = INT16_MIN;
	uint8_t x620 = 0U;
	static int32_t t79 = 3;

	t79 = ((x617>>(x618==x619))<=x620);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x621 = UINT8_MAX;
	static volatile uint64_t x622 = 79663715LLU;
	int32_t x623 = INT32_MAX;

	t80 = ((x621>>(x622==x623))<=x624);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x625 = 20;
	volatile uint8_t x626 = UINT8_MAX;
	int32_t x628 = -9669342;
	int32_t t81 = -25998203;

	t81 = ((x625>>(x626==x627))<=x628);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x637 = 3U;
	int16_t x640 = INT16_MAX;
	volatile int32_t t82 = -588;

	t82 = ((x637>>(x638==x639))<=x640);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x644 = INT32_MIN;
	int32_t t83 = -16377813;

	t83 = ((x641>>(x642==x643))<=x644);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x657 = 1;
	int16_t x659 = 30;
	static uint32_t x660 = 55435U;
	volatile int32_t t84 = -8;

	t84 = ((x657>>(x658==x659))<=x660);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x669 = 88U;
	static int8_t x670 = INT8_MIN;
	static uint64_t x672 = UINT64_MAX;
	static int32_t t85 = -703193;

	t85 = ((x669>>(x670==x671))<=x672);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x673 = UINT8_MAX;
	int32_t x674 = INT32_MAX;

	t86 = ((x673>>(x674==x675))<=x676);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x677 = UINT8_MAX;
	uint8_t x678 = 4U;
	volatile int8_t x679 = INT8_MAX;
	static int64_t x680 = INT64_MAX;
	static int32_t t87 = -387;

	t87 = ((x677>>(x678==x679))<=x680);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x681 = 7U;
	static uint32_t x682 = UINT32_MAX;
	static uint16_t x683 = 1U;
	uint64_t x684 = 1366346020183377LLU;
	static volatile int32_t t88 = 6500;

	t88 = ((x681>>(x682==x683))<=x684);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x685 = 5;
	static int8_t x686 = 25;
	int8_t x688 = -49;
	volatile int32_t t89 = -60;

	t89 = ((x685>>(x686==x687))<=x688);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x689 = 10202841214401744LLU;
	int64_t x690 = -1LL;
	int64_t x691 = -2LL;
	int64_t x692 = INT64_MIN;
	int32_t t90 = 0;

	t90 = ((x689>>(x690==x691))<=x692);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x694 = 264U;
	static int16_t x695 = INT16_MIN;
	int64_t x696 = -74218LL;
	static volatile int32_t t91 = 259114;

	t91 = ((x693>>(x694==x695))<=x696);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x701 = INT64_MAX;
	int8_t x702 = INT8_MAX;
	static volatile int64_t x703 = 12LL;
	int32_t x704 = INT32_MIN;
	volatile int32_t t92 = 315;

	t92 = ((x701>>(x702==x703))<=x704);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x705 = 4458;
	volatile uint32_t x706 = 7U;
	int8_t x707 = INT8_MAX;
	int64_t x708 = 59LL;

	t93 = ((x705>>(x706==x707))<=x708);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x710 = 0U;
	volatile int32_t x711 = INT32_MIN;
	uint64_t x712 = 32879857LLU;
	int32_t t94 = -20175;

	t94 = ((x709>>(x710==x711))<=x712);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x717 = 3U;
	uint32_t x718 = UINT32_MAX;
	volatile int64_t x719 = INT64_MAX;
	int8_t x720 = INT8_MAX;
	int32_t t95 = -770;

	t95 = ((x717>>(x718==x719))<=x720);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x729 = 94163252697975975LL;
	int32_t x730 = INT32_MIN;
	int16_t x732 = INT16_MIN;
	int32_t t96 = 6;

	t96 = ((x729>>(x730==x731))<=x732);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x733 = UINT16_MAX;
	int32_t x734 = INT32_MAX;
	static uint8_t x735 = UINT8_MAX;
	int8_t x736 = -52;

	t97 = ((x733>>(x734==x735))<=x736);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x741 = 2691535U;
	static uint8_t x742 = UINT8_MAX;
	uint32_t x743 = UINT32_MAX;
	volatile int64_t x744 = -7LL;
	volatile int32_t t98 = 212478;

	t98 = ((x741>>(x742==x743))<=x744);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x745 = UINT8_MAX;
	int32_t x746 = -1;

	t99 = ((x745>>(x746==x747))<=x748);

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

