#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -605;
int8_t x4 = -24;
static int32_t t0 = 41;
volatile int64_t x9 = INT64_MIN;
int16_t x17 = INT16_MIN;
int32_t x36 = -507;
int32_t t6 = 1033071289;
static int64_t x71 = INT64_MIN;
int8_t x79 = INT8_MIN;
uint16_t x95 = 34U;
int16_t x124 = 3;
volatile uint8_t x127 = 4U;
int64_t x132 = INT64_MAX;
uint8_t x138 = 1U;
int32_t t16 = -1;
int8_t x153 = 1;
int16_t x154 = 2;
static volatile int32_t t17 = 53424;
int64_t x166 = INT64_MAX;
int16_t x168 = INT16_MIN;
volatile uint32_t x200 = 57145U;
int32_t x227 = INT32_MIN;
int8_t x233 = -1;
static uint16_t x234 = 30206U;
volatile int32_t t23 = -797;
int64_t x242 = INT64_MIN;
int32_t t30 = -737;
int64_t x306 = INT64_MAX;
volatile uint16_t x307 = UINT16_MAX;
uint32_t x314 = 7713U;
int32_t x315 = 102166814;
int16_t x316 = INT16_MAX;
volatile int64_t t33 = -4458762367672240532LL;
static int8_t x329 = -1;
static uint8_t x332 = UINT8_MAX;
uint32_t x335 = 94293772U;
uint8_t x374 = 3U;
volatile uint64_t x375 = 6991716417928298LLU;
uint16_t x394 = 28169U;
uint8_t x395 = 3U;
int32_t x396 = 7;
uint64_t t41 = 4797722146848566387LLU;
uint16_t x400 = 60U;
uint16_t x408 = 19U;
int32_t x409 = INT32_MIN;
int8_t x412 = -1;
volatile int64_t x415 = 3LL;
uint32_t x416 = 191304166U;
int8_t x419 = INT8_MIN;
int32_t t46 = -516329897;
int32_t x428 = INT32_MIN;
int32_t t47 = -379458;
static uint32_t t49 = 6770279U;
volatile uint16_t x459 = 0U;
uint32_t x468 = UINT32_MAX;
static int32_t t51 = 32;
uint64_t x474 = UINT64_MAX;
int64_t x495 = INT64_MIN;
volatile int64_t x499 = -95LL;
volatile int32_t t55 = -418;
static int16_t x507 = INT16_MIN;
int8_t x508 = INT8_MIN;
static int16_t x550 = INT16_MIN;
int32_t t58 = 14890;
int32_t t59 = -257;
int16_t x559 = INT16_MIN;
int32_t x561 = 209723;
uint16_t x564 = 0U;
static int64_t x569 = INT64_MIN;
volatile int8_t x572 = INT8_MIN;
uint8_t x576 = 1U;
uint64_t x591 = 2150153193LLU;
uint32_t x599 = 362U;
int64_t t68 = -15092373042796298LL;
int32_t t69 = 1598;
int32_t x609 = -51007;
volatile int32_t t72 = 76632917;
volatile int32_t t75 = -407568;
volatile uint8_t x640 = UINT8_MAX;
volatile uint32_t t77 = 1038796U;
int32_t x643 = INT32_MAX;
volatile uint64_t t78 = 46652719772LLU;
int32_t t79 = 15;
int64_t t80 = -10193448811LL;
uint8_t x675 = UINT8_MAX;
int64_t t83 = 430552029301227LL;
uint64_t x681 = UINT64_MAX;
int8_t x690 = 5;
int32_t x694 = 0;
static uint8_t x703 = 6U;
volatile int32_t t90 = -68;
uint16_t x731 = 355U;
int8_t x754 = 0;
volatile int8_t x755 = INT8_MIN;
volatile int64_t t97 = 10140061394LL;
volatile uint64_t x783 = 499504861LLU;
int32_t t98 = -168057;
int8_t x806 = 5;
int32_t t99 = -940368;


void f0(void) {
	volatile int8_t x1 = -1;
	static int8_t x2 = -16;

	t0 = (x1%((x2&x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	static int8_t x6 = INT8_MAX;
	uint64_t x7 = 99967LLU;
	static int16_t x8 = -8;
	volatile int32_t t1 = 236932;

	t1 = (x5%((x6&x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 55U;
	volatile uint8_t x11 = 31U;
	uint8_t x12 = 90U;
	volatile int64_t t2 = -124LL;

	t2 = (x9%((x10&x11)<x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int64_t x14 = INT64_MIN;
	int32_t x15 = -1;
	static volatile int8_t x16 = 1;
	volatile int32_t t3 = 1554739;

	t3 = (x13%((x14&x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	static volatile int32_t x19 = INT32_MAX;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = -547;

	t4 = (x17%((x18&x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -1;
	int16_t x34 = -3330;
	int8_t x35 = INT8_MIN;
	int32_t t5 = 6;

	t5 = (x33%((x34&x35)<x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = -1;
	int16_t x50 = -133;
	int32_t x51 = -2155423;
	int32_t x52 = -1;

	t6 = (x49%((x50&x51)<x52));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x69 = INT8_MIN;
	int16_t x70 = -1;
	volatile int16_t x72 = -1;
	int32_t t7 = -237698;

	t7 = (x69%((x70&x71)<x72));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x73 = 17U;
	static uint16_t x74 = 2U;
	uint64_t x75 = UINT64_MAX;
	volatile int32_t x76 = -40383932;
	volatile int32_t t8 = 69742;

	t8 = (x73%((x74&x75)<x76));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = INT32_MAX;
	static uint64_t x80 = 7193520793147292660LLU;
	int32_t t9 = 75083562;

	t9 = (x77%((x78&x79)<x80));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x93 = 1049753162;
	volatile int32_t x94 = INT32_MAX;
	uint32_t x96 = 419455U;
	volatile int32_t t10 = 769;

	t10 = (x93%((x94&x95)<x96));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x117 = 7867659955LLU;
	static uint64_t x118 = 12397411LLU;
	int16_t x119 = -21;
	int64_t x120 = INT64_MIN;
	static uint64_t t11 = 57896889475282384LLU;

	t11 = (x117%((x118&x119)<x120));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x121 = INT8_MAX;
	volatile int8_t x122 = INT8_MIN;
	static int16_t x123 = -2;
	int32_t t12 = -3513897;

	t12 = (x121%((x122&x123)<x124));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x125 = UINT8_MAX;
	int8_t x126 = -1;
	uint16_t x128 = 31U;
	volatile int32_t t13 = 121219;

	t13 = (x125%((x126&x127)<x128));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x129 = UINT64_MAX;
	int16_t x130 = INT16_MIN;
	static int32_t x131 = 1;
	volatile uint64_t t14 = 3248824LLU;

	t14 = (x129%((x130&x131)<x132));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x137 = 1527663U;
	uint64_t x139 = 123949335726366LLU;
	int8_t x140 = INT8_MAX;
	volatile uint32_t t15 = 114565227U;

	t15 = (x137%((x138&x139)<x140));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x145 = 452U;
	int64_t x146 = INT64_MIN;
	volatile int16_t x147 = INT16_MIN;
	int8_t x148 = 31;

	t16 = (x145%((x146&x147)<x148));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x155 = INT64_MIN;
	int8_t x156 = 2;

	t17 = (x153%((x154&x155)<x156));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x157 = -1;
	int8_t x158 = -2;
	int32_t x159 = -1623632;
	static int16_t x160 = INT16_MAX;
	volatile int32_t t18 = -170429;

	t18 = (x157%((x158&x159)<x160));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x165 = 0U;
	uint64_t x167 = 545707050LLU;
	volatile uint32_t t19 = 11U;

	t19 = (x165%((x166&x167)<x168));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x197 = 6221917623175730LLU;
	volatile uint8_t x198 = 1U;
	int32_t x199 = -1;
	volatile uint64_t t20 = 55659LLU;

	t20 = (x197%((x198&x199)<x200));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x209 = 3U;
	uint8_t x210 = 109U;
	uint64_t x211 = 193LLU;
	uint64_t x212 = UINT64_MAX;
	static int32_t t21 = -1981;

	t21 = (x209%((x210&x211)<x212));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x225 = 6669143U;
	int8_t x226 = -1;
	static int8_t x228 = INT8_MAX;
	uint32_t t22 = 1480854918U;

	t22 = (x225%((x226&x227)<x228));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x235 = INT32_MIN;
	int8_t x236 = 40;

	t23 = (x233%((x234&x235)<x236));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x241 = 620514LLU;
	int16_t x243 = -1;
	int32_t x244 = 373;
	volatile uint64_t t24 = 21067611359LLU;

	t24 = (x241%((x242&x243)<x244));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x249 = 0;
	int64_t x250 = -1480626753LL;
	int32_t x251 = INT32_MIN;
	volatile int16_t x252 = -2621;
	static int32_t t25 = -919;

	t25 = (x249%((x250&x251)<x252));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x261 = -1LL;
	int8_t x262 = 60;
	uint16_t x263 = 1U;
	static volatile uint32_t x264 = 38132U;
	int64_t t26 = -6LL;

	t26 = (x261%((x262&x263)<x264));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x269 = 56930562;
	static int64_t x270 = INT64_MIN;
	static int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MAX;
	int32_t t27 = 5727287;

	t27 = (x269%((x270&x271)<x272));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x273 = UINT64_MAX;
	int64_t x274 = -183685071010809LL;
	int8_t x275 = INT8_MIN;
	int32_t x276 = 68;
	volatile uint64_t t28 = 133337664908578LLU;

	t28 = (x273%((x274&x275)<x276));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x277 = -815427;
	int8_t x278 = -3;
	uint64_t x279 = 346657664LLU;
	uint32_t x280 = 703308346U;
	static int32_t t29 = 24346720;

	t29 = (x277%((x278&x279)<x280));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x289 = INT32_MIN;
	static int64_t x290 = -1LL;
	int16_t x291 = -1;
	int16_t x292 = INT16_MAX;

	t30 = (x289%((x290&x291)<x292));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x297 = INT32_MIN;
	static uint32_t x298 = UINT32_MAX;
	int8_t x299 = INT8_MIN;
	static uint64_t x300 = 17089717809322LLU;
	int32_t t31 = 259443792;

	t31 = (x297%((x298&x299)<x300));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x305 = 2624329510966189LL;
	static uint32_t x308 = 29855493U;
	int64_t t32 = -2506755LL;

	t32 = (x305%((x306&x307)<x308));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x313 = 206154587535561633LL;

	t33 = (x313%((x314&x315)<x316));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x321 = INT64_MIN;
	static int16_t x322 = INT16_MIN;
	uint64_t x323 = 0LLU;
	int16_t x324 = -1;
	int64_t t34 = 10772662771702LL;

	t34 = (x321%((x322&x323)<x324));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x330 = UINT64_MAX;
	static uint8_t x331 = 16U;
	static volatile int32_t t35 = 217042;

	t35 = (x329%((x330&x331)<x332));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x333 = 744519201419LLU;
	uint8_t x334 = 76U;
	uint32_t x336 = 859U;
	uint64_t t36 = 96LLU;

	t36 = (x333%((x334&x335)<x336));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x341 = 5U;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = 50U;
	static int16_t x344 = 301;
	int32_t t37 = 6;

	t37 = (x341%((x342&x343)<x344));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x353 = 1LLU;
	uint64_t x354 = 1454596443168LLU;
	int8_t x355 = 0;
	int32_t x356 = INT32_MIN;
	static volatile uint64_t t38 = 261LLU;

	t38 = (x353%((x354&x355)<x356));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x373 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t39 = 1452;

	t39 = (x373%((x374&x375)<x376));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x377 = 142U;
	volatile uint64_t x378 = 13506LLU;
	int16_t x379 = INT16_MAX;
	static uint32_t x380 = UINT32_MAX;
	static int32_t t40 = -3655885;

	t40 = (x377%((x378&x379)<x380));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x393 = 30368726LLU;

	t41 = (x393%((x394&x395)<x396));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x397 = -2541226;
	int16_t x398 = INT16_MIN;
	static volatile uint16_t x399 = 27U;
	volatile int32_t t42 = -1;

	t42 = (x397%((x398&x399)<x400));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x405 = INT8_MIN;
	volatile uint16_t x406 = 1442U;
	volatile int8_t x407 = 25;
	volatile int32_t t43 = 268;

	t43 = (x405%((x406&x407)<x408));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x410 = 27062855381LLU;
	volatile uint64_t x411 = UINT64_MAX;
	int32_t t44 = 2371;

	t44 = (x409%((x410&x411)<x412));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x413 = -1;
	int16_t x414 = -1;
	volatile int32_t t45 = 47;

	t45 = (x413%((x414&x415)<x416));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x417 = -1;
	static int8_t x418 = INT8_MIN;
	static uint16_t x420 = 9U;

	t46 = (x417%((x418&x419)<x420));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x425 = 66U;
	static uint64_t x426 = 548260000662460066LLU;
	volatile int64_t x427 = -1LL;

	t47 = (x425%((x426&x427)<x428));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x441 = 136U;
	int64_t x442 = -4LL;
	int16_t x443 = INT16_MIN;
	volatile int8_t x444 = -1;
	volatile int32_t t48 = -1;

	t48 = (x441%((x442&x443)<x444));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x445 = 16734781U;
	int32_t x446 = -1;
	static uint8_t x447 = UINT8_MAX;
	uint32_t x448 = UINT32_MAX;

	t49 = (x445%((x446&x447)<x448));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x457 = INT64_MIN;
	volatile int64_t x458 = INT64_MIN;
	static int32_t x460 = 211;
	volatile int64_t t50 = -16751984119LL;

	t50 = (x457%((x458&x459)<x460));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x465 = -416;
	int16_t x466 = 2948;
	uint64_t x467 = UINT64_MAX;

	t51 = (x465%((x466&x467)<x468));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x473 = 5;
	int16_t x475 = INT16_MAX;
	int32_t x476 = INT32_MIN;
	int32_t t52 = 82;

	t52 = (x473%((x474&x475)<x476));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x489 = INT64_MAX;
	volatile int16_t x490 = -1;
	volatile int64_t x491 = 1626135LL;
	static int64_t x492 = INT64_MAX;
	volatile int64_t t53 = 615445730391LL;

	t53 = (x489%((x490&x491)<x492));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x493 = -1LL;
	static volatile uint32_t x494 = UINT32_MAX;
	static uint8_t x496 = 57U;
	int64_t t54 = -69LL;

	t54 = (x493%((x494&x495)<x496));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x497 = -1;
	int16_t x498 = INT16_MIN;
	int64_t x500 = INT64_MAX;

	t55 = (x497%((x498&x499)<x500));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x505 = INT64_MIN;
	int16_t x506 = INT16_MIN;
	static volatile int64_t t56 = 208275774418529LL;

	t56 = (x505%((x506&x507)<x508));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x521 = INT16_MIN;
	int16_t x522 = 924;
	int32_t x523 = INT32_MIN;
	volatile int16_t x524 = INT16_MAX;
	volatile int32_t t57 = -18;

	t57 = (x521%((x522&x523)<x524));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x549 = 33;
	uint64_t x551 = 7306LLU;
	uint8_t x552 = 37U;

	t58 = (x549%((x550&x551)<x552));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x553 = INT32_MIN;
	uint8_t x554 = 80U;
	volatile uint8_t x555 = 5U;
	int64_t x556 = INT64_MAX;

	t59 = (x553%((x554&x555)<x556));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x557 = 1279647U;
	static int64_t x558 = INT64_MIN;
	static int8_t x560 = 61;
	uint32_t t60 = 71164902U;

	t60 = (x557%((x558&x559)<x560));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x562 = -1LL;
	int64_t x563 = -464LL;
	int32_t t61 = 155;

	t61 = (x561%((x562&x563)<x564));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x565 = INT16_MIN;
	static volatile int64_t x566 = 489936779LL;
	static int16_t x567 = -1;
	static uint32_t x568 = UINT32_MAX;
	volatile int32_t t62 = -30003;

	t62 = (x565%((x566&x567)<x568));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x570 = -1LL;
	static uint64_t x571 = 546LLU;
	int64_t t63 = -7063977LL;

	t63 = (x569%((x570&x571)<x572));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x573 = INT32_MAX;
	int16_t x574 = -1;
	int8_t x575 = -25;
	volatile int32_t t64 = 1;

	t64 = (x573%((x574&x575)<x576));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x577 = INT64_MIN;
	static int8_t x578 = INT8_MIN;
	static uint32_t x579 = 25970135U;
	static int8_t x580 = INT8_MIN;
	int64_t t65 = -99710850501399LL;

	t65 = (x577%((x578&x579)<x580));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x589 = INT16_MIN;
	static uint16_t x590 = 1U;
	int16_t x592 = INT16_MIN;
	volatile int32_t t66 = -2049997;

	t66 = (x589%((x590&x591)<x592));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x593 = INT16_MIN;
	int64_t x594 = -84917LL;
	static uint16_t x595 = UINT16_MAX;
	int32_t x596 = INT32_MAX;
	volatile int32_t t67 = 1041881;

	t67 = (x593%((x594&x595)<x596));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x597 = -498228LL;
	static int16_t x598 = 2236;
	uint64_t x600 = UINT64_MAX;

	t68 = (x597%((x598&x599)<x600));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x605 = 2951;
	int8_t x606 = -1;
	volatile int16_t x607 = INT16_MIN;
	static volatile int64_t x608 = -1LL;

	t69 = (x605%((x606&x607)<x608));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x610 = 541LLU;
	int32_t x611 = 1877;
	int64_t x612 = 9855051324337231LL;
	volatile int32_t t70 = -187740;

	t70 = (x609%((x610&x611)<x612));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x613 = INT16_MAX;
	volatile int8_t x614 = INT8_MIN;
	static volatile uint64_t x615 = 2373766059282176147LLU;
	int32_t x616 = INT32_MIN;
	int32_t t71 = 876071254;

	t71 = (x613%((x614&x615)<x616));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x617 = INT8_MIN;
	int32_t x618 = -460;
	static int16_t x619 = -1;
	static uint8_t x620 = UINT8_MAX;

	t72 = (x617%((x618&x619)<x620));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x621 = 1U;
	uint32_t x622 = 15787670U;
	int16_t x623 = INT16_MAX;
	int32_t x624 = INT32_MIN;
	static volatile int32_t t73 = 3463;

	t73 = (x621%((x622&x623)<x624));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x625 = 42778960U;
	static volatile int8_t x626 = -2;
	static int8_t x627 = INT8_MIN;
	volatile int64_t x628 = 1776LL;
	uint32_t t74 = 228364688U;

	t74 = (x625%((x626&x627)<x628));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x629 = 6U;
	uint64_t x630 = 3466342493642448309LLU;
	uint16_t x631 = 14045U;
	static uint32_t x632 = 61976U;

	t75 = (x629%((x630&x631)<x632));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x633 = 940460LLU;
	int32_t x634 = INT32_MIN;
	int64_t x635 = -1LL;
	int8_t x636 = INT8_MIN;
	uint64_t t76 = 636056741689239264LLU;

	t76 = (x633%((x634&x635)<x636));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x637 = 3U;
	static volatile int64_t x638 = -342899LL;
	int8_t x639 = 27;

	t77 = (x637%((x638&x639)<x640));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x641 = 532770571953LLU;
	int16_t x642 = -1;
	uint32_t x644 = UINT32_MAX;

	t78 = (x641%((x642&x643)<x644));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x645 = 0;
	volatile int16_t x646 = -1;
	volatile uint16_t x647 = 20U;
	int8_t x648 = INT8_MAX;

	t79 = (x645%((x646&x647)<x648));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x649 = 37427417122LL;
	static volatile uint8_t x650 = 0U;
	int64_t x651 = 331396388937LL;
	static uint16_t x652 = 1U;

	t80 = (x649%((x650&x651)<x652));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x653 = INT8_MIN;
	int32_t x654 = 2039;
	uint8_t x655 = 1U;
	volatile uint8_t x656 = UINT8_MAX;
	static int32_t t81 = 0;

	t81 = (x653%((x654&x655)<x656));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x657 = 13434892860096039LL;
	int16_t x658 = -1;
	int32_t x659 = -236486033;
	uint8_t x660 = 0U;
	static volatile int64_t t82 = -6318706318LL;

	t82 = (x657%((x658&x659)<x660));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x673 = 118323LL;
	static uint32_t x674 = UINT32_MAX;
	int64_t x676 = 2084353LL;

	t83 = (x673%((x674&x675)<x676));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x682 = -1;
	int8_t x683 = -29;
	int64_t x684 = 2146521028757548217LL;
	uint64_t t84 = 779059448905478LLU;

	t84 = (x681%((x682&x683)<x684));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x689 = -1;
	int32_t x691 = INT32_MAX;
	uint64_t x692 = 1900149724495LLU;
	int32_t t85 = -535;

	t85 = (x689%((x690&x691)<x692));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x693 = INT32_MAX;
	volatile int32_t x695 = INT32_MIN;
	int32_t x696 = 903129;
	static volatile int32_t t86 = 3556;

	t86 = (x693%((x694&x695)<x696));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x697 = 2935396;
	volatile uint16_t x698 = 23U;
	uint64_t x699 = 1711958485428LLU;
	static int32_t x700 = INT32_MIN;
	static int32_t t87 = -1;

	t87 = (x697%((x698&x699)<x700));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x701 = -1LL;
	int16_t x702 = INT16_MIN;
	uint8_t x704 = 33U;
	int64_t t88 = 110LL;

	t88 = (x701%((x702&x703)<x704));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x721 = -1;
	static int16_t x722 = INT16_MIN;
	volatile uint32_t x723 = 206345909U;
	volatile int64_t x724 = INT64_MAX;
	volatile int32_t t89 = -1043558628;

	t89 = (x721%((x722&x723)<x724));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x725 = 24U;
	static int64_t x726 = INT64_MIN;
	int16_t x727 = INT16_MIN;
	volatile int8_t x728 = INT8_MIN;

	t90 = (x725%((x726&x727)<x728));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x729 = UINT64_MAX;
	static int32_t x730 = -47236;
	uint16_t x732 = 25228U;
	uint64_t t91 = 4LLU;

	t91 = (x729%((x730&x731)<x732));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x737 = UINT32_MAX;
	int8_t x738 = INT8_MAX;
	int8_t x739 = 0;
	uint16_t x740 = UINT16_MAX;
	uint32_t t92 = 5895U;

	t92 = (x737%((x738&x739)<x740));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x745 = 16U;
	uint64_t x746 = 87564327587LLU;
	int16_t x747 = INT16_MAX;
	static int16_t x748 = INT16_MAX;
	volatile int32_t t93 = -2930;

	t93 = (x745%((x746&x747)<x748));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x753 = -1;
	volatile int8_t x756 = INT8_MAX;
	int32_t t94 = 225457462;

	t94 = (x753%((x754&x755)<x756));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x765 = INT8_MIN;
	uint32_t x766 = UINT32_MAX;
	int16_t x767 = INT16_MIN;
	int8_t x768 = INT8_MIN;
	volatile int32_t t95 = -631695200;

	t95 = (x765%((x766&x767)<x768));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x769 = -8;
	int32_t x770 = INT32_MIN;
	static int32_t x771 = -1;
	static uint16_t x772 = 4U;
	volatile int32_t t96 = -116541;

	t96 = (x769%((x770&x771)<x772));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x777 = INT64_MIN;
	int16_t x778 = -1;
	volatile int32_t x779 = -337;
	int32_t x780 = -1;

	t97 = (x777%((x778&x779)<x780));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x781 = 796;
	volatile uint32_t x782 = 311534591U;
	volatile int8_t x784 = -1;

	t98 = (x781%((x782&x783)<x784));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x805 = INT32_MIN;
	int32_t x807 = INT32_MIN;
	uint16_t x808 = 22U;

	t99 = (x805%((x806&x807)<x808));

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

