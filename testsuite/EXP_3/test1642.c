#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = -1;
int32_t x9 = INT32_MIN;
uint16_t x10 = UINT16_MAX;
uint64_t x20 = UINT64_MAX;
uint8_t x76 = 9U;
static int64_t x81 = -11LL;
int8_t x99 = 31;
volatile uint8_t x100 = UINT8_MAX;
volatile int8_t x102 = -1;
static int32_t t11 = 111700180;
static uint64_t x110 = 388LLU;
volatile int32_t t12 = -255937353;
volatile int64_t x114 = 10656041534335528LL;
int32_t t13 = -5183543;
static volatile int64_t x124 = INT64_MAX;
int64_t x134 = INT64_MAX;
int8_t x136 = -1;
uint32_t x138 = 127U;
volatile int64_t x146 = 99577LL;
volatile int8_t x147 = INT8_MIN;
int64_t x149 = 72441LL;
volatile int32_t t19 = 9533598;
int16_t x225 = -25;
int32_t x239 = 5168328;
uint64_t x247 = 1249LLU;
int32_t t27 = -61063440;
int64_t x251 = INT64_MIN;
static volatile uint32_t x263 = UINT32_MAX;
int32_t x278 = -1;
volatile int32_t t31 = -4653091;
volatile int32_t x284 = INT32_MAX;
volatile int32_t t34 = -24;
uint64_t x328 = UINT64_MAX;
volatile int8_t x337 = 1;
int32_t t39 = 1;
uint16_t x353 = 1U;
static volatile uint32_t x356 = UINT32_MAX;
int64_t x375 = -1LL;
int16_t x379 = INT16_MAX;
int32_t t46 = 99030277;
int32_t t47 = -241660944;
uint32_t x419 = 6U;
uint8_t x421 = UINT8_MAX;
int64_t x422 = INT64_MIN;
static volatile int32_t t55 = 33115458;
static int64_t x429 = 96370967189886LL;
static volatile int32_t t56 = -118;
volatile int16_t x441 = INT16_MIN;
int16_t x444 = INT16_MIN;
uint16_t x467 = 10025U;
volatile int32_t t60 = -630;
uint32_t x472 = 203909667U;
volatile int32_t t61 = -1;
uint64_t x483 = 52343539LLU;
int64_t x485 = INT64_MIN;
int8_t x488 = 8;
int32_t t63 = -18;
int8_t x489 = INT8_MIN;
volatile int32_t x490 = INT32_MIN;
int8_t x491 = -6;
volatile uint32_t x493 = 249U;
int8_t x495 = INT8_MIN;
int16_t x496 = INT16_MAX;
int32_t t65 = 1012;
int64_t x501 = -1LL;
static volatile int16_t x556 = 1;
uint64_t x573 = UINT64_MAX;
int32_t x575 = 828;
uint16_t x596 = UINT16_MAX;
int64_t x620 = INT64_MAX;
static uint16_t x621 = UINT16_MAX;
volatile int16_t x622 = INT16_MIN;
int32_t x667 = INT32_MIN;
uint8_t x668 = 55U;
volatile int32_t t89 = 64;
static int8_t x669 = -1;
int32_t x672 = -1067;
int8_t x689 = -1;
uint16_t x696 = 13319U;
volatile int32_t t93 = -14269309;
volatile int8_t x702 = INT8_MIN;
static uint8_t x704 = UINT8_MAX;
static uint8_t x706 = 44U;
int8_t x707 = INT8_MIN;
static int16_t x714 = -1009;
volatile int32_t t96 = -1;
static int32_t x733 = INT32_MIN;
uint64_t x735 = 1328865LLU;
static uint64_t x739 = UINT64_MAX;


void f0(void) {
	int64_t x1 = -177304395657801892LL;
	volatile uint32_t x2 = UINT32_MAX;
	static volatile int32_t x3 = INT32_MIN;
	int16_t x4 = 580;
	int32_t t0 = 523;

	t0 = ((x1<=x2)/(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 625156261U;
	volatile int8_t x7 = -3;
	static uint16_t x8 = UINT16_MAX;
	int32_t t1 = 1;

	t1 = ((x5<=x6)/(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = -1;
	int64_t x12 = -1LL;
	volatile int32_t t2 = 6406;

	t2 = ((x9<=x10)/(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	static uint8_t x18 = UINT8_MAX;
	uint32_t x19 = 1867U;
	volatile int32_t t3 = 0;

	t3 = ((x17<=x18)/(x19<=x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MAX;
	uint64_t x22 = 238086158LLU;
	volatile int32_t x23 = INT32_MIN;
	int64_t x24 = 108420194LL;
	int32_t t4 = -680;

	t4 = ((x21<=x22)/(x23<=x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x25 = 14136U;
	int32_t x26 = INT32_MAX;
	int8_t x27 = 3;
	uint32_t x28 = 182681U;
	static volatile int32_t t5 = 1;

	t5 = ((x25<=x26)/(x27<=x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x33 = INT16_MIN;
	static int64_t x34 = 0LL;
	uint64_t x35 = 1LLU;
	uint32_t x36 = UINT32_MAX;
	int32_t t6 = 3433801;

	t6 = ((x33<=x34)/(x35<=x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x57 = 5096U;
	static int64_t x58 = INT64_MAX;
	uint16_t x59 = 32U;
	volatile uint16_t x60 = 40U;
	volatile int32_t t7 = -94568099;

	t7 = ((x57<=x58)/(x59<=x60));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x73 = 4836U;
	int32_t x74 = -7529662;
	int16_t x75 = INT16_MIN;
	volatile int32_t t8 = -21346382;

	t8 = ((x73<=x74)/(x75<=x76));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	static volatile int64_t x84 = 109298202659273393LL;
	int32_t t9 = -23685;

	t9 = ((x81<=x82)/(x83<=x84));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x97 = -1LL;
	static int64_t x98 = INT64_MAX;
	volatile int32_t t10 = -3;

	t10 = ((x97<=x98)/(x99<=x100));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x101 = 1U;
	int64_t x103 = INT64_MIN;
	static volatile uint8_t x104 = UINT8_MAX;

	t11 = ((x101<=x102)/(x103<=x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x111 = INT8_MIN;
	static int64_t x112 = 3420407060607839LL;

	t12 = ((x109<=x110)/(x111<=x112));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x113 = -1;
	static uint32_t x115 = 13763077U;
	static uint64_t x116 = UINT64_MAX;

	t13 = ((x113<=x114)/(x115<=x116));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x121 = -35;
	int64_t x122 = INT64_MAX;
	int8_t x123 = INT8_MIN;
	static int32_t t14 = 49989607;

	t14 = ((x121<=x122)/(x123<=x124));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x133 = UINT64_MAX;
	int16_t x135 = INT16_MIN;
	int32_t t15 = -49;

	t15 = ((x133<=x134)/(x135<=x136));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x137 = INT8_MIN;
	int8_t x139 = 1;
	int32_t x140 = 114;
	int32_t t16 = -431584922;

	t16 = ((x137<=x138)/(x139<=x140));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x145 = INT16_MIN;
	uint32_t x148 = UINT32_MAX;
	static volatile int32_t t17 = 1193962;

	t17 = ((x145<=x146)/(x147<=x148));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x150 = 34557553LLU;
	volatile int64_t x151 = -1LL;
	int64_t x152 = -1LL;
	static int32_t t18 = 1189532;

	t18 = ((x149<=x150)/(x151<=x152));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x153 = -1749;
	static volatile uint8_t x154 = 116U;
	int16_t x155 = INT16_MAX;
	static int64_t x156 = 456743LL;

	t19 = ((x153<=x154)/(x155<=x156));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x157 = -1LL;
	int16_t x158 = -7;
	int8_t x159 = INT8_MIN;
	static int8_t x160 = -1;
	volatile int32_t t20 = 16129139;

	t20 = ((x157<=x158)/(x159<=x160));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x169 = 13;
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 16LLU;
	int64_t x172 = INT64_MAX;
	volatile int32_t t21 = -430;

	t21 = ((x169<=x170)/(x171<=x172));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x173 = 104074326434484LLU;
	uint16_t x174 = UINT16_MAX;
	static int8_t x175 = -1;
	uint32_t x176 = UINT32_MAX;
	int32_t t22 = -167;

	t22 = ((x173<=x174)/(x175<=x176));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x185 = 84802136919818404LLU;
	int32_t x186 = -1;
	int8_t x187 = 7;
	uint64_t x188 = 400483342150490386LLU;
	int32_t t23 = -14565;

	t23 = ((x185<=x186)/(x187<=x188));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x221 = 2419044LLU;
	int16_t x222 = -1;
	volatile int64_t x223 = INT64_MIN;
	uint32_t x224 = 108808U;
	int32_t t24 = -1198137;

	t24 = ((x221<=x222)/(x223<=x224));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	static int16_t x228 = -1;
	static int32_t t25 = 16212;

	t25 = ((x225<=x226)/(x227<=x228));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x237 = UINT32_MAX;
	static int8_t x238 = 16;
	volatile int32_t x240 = INT32_MAX;
	volatile int32_t t26 = 11609781;

	t26 = ((x237<=x238)/(x239<=x240));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x245 = UINT32_MAX;
	uint8_t x246 = UINT8_MAX;
	uint32_t x248 = 1464931606U;

	t27 = ((x245<=x246)/(x247<=x248));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x249 = 39U;
	volatile int64_t x250 = 7311469063535765LL;
	int16_t x252 = 1622;
	int32_t t28 = -7288924;

	t28 = ((x249<=x250)/(x251<=x252));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x262 = INT16_MIN;
	static volatile uint32_t x264 = UINT32_MAX;
	volatile int32_t t29 = 182;

	t29 = ((x261<=x262)/(x263<=x264));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x265 = 14;
	uint64_t x266 = 252LLU;
	uint64_t x267 = 537254LLU;
	static int8_t x268 = INT8_MIN;
	int32_t t30 = -1078;

	t30 = ((x265<=x266)/(x267<=x268));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x277 = -246134556;
	int16_t x279 = INT16_MIN;
	static volatile int32_t x280 = -1;

	t31 = ((x277<=x278)/(x279<=x280));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x281 = 1;
	static uint8_t x282 = UINT8_MAX;
	uint32_t x283 = 96291493U;
	volatile int32_t t32 = 98171;

	t32 = ((x281<=x282)/(x283<=x284));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x297 = UINT16_MAX;
	uint16_t x298 = UINT16_MAX;
	static int64_t x299 = INT64_MIN;
	static uint16_t x300 = 22550U;
	volatile int32_t t33 = 3;

	t33 = ((x297<=x298)/(x299<=x300));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MAX;
	int16_t x303 = 125;
	uint32_t x304 = UINT32_MAX;

	t34 = ((x301<=x302)/(x303<=x304));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x317 = INT32_MAX;
	volatile uint64_t x318 = 115679717046353LLU;
	static uint32_t x319 = 137U;
	static int32_t x320 = -19;
	volatile int32_t t35 = -139823294;

	t35 = ((x317<=x318)/(x319<=x320));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x321 = 1191403LL;
	int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MAX;
	static volatile int64_t x324 = INT64_MAX;
	volatile int32_t t36 = -19;

	t36 = ((x321<=x322)/(x323<=x324));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x325 = INT16_MIN;
	static int16_t x326 = INT16_MAX;
	uint64_t x327 = 729781101252029LLU;
	int32_t t37 = 55422;

	t37 = ((x325<=x326)/(x327<=x328));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x329 = -5890;
	int8_t x330 = 0;
	volatile int64_t x331 = INT64_MIN;
	int64_t x332 = INT64_MIN;
	int32_t t38 = 1049635;

	t38 = ((x329<=x330)/(x331<=x332));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x338 = INT16_MIN;
	volatile int32_t x339 = INT32_MIN;
	int8_t x340 = -1;

	t39 = ((x337<=x338)/(x339<=x340));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x345 = 6U;
	uint16_t x346 = 730U;
	int64_t x347 = INT64_MIN;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t40 = 461230209;

	t40 = ((x345<=x346)/(x347<=x348));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x354 = INT32_MIN;
	int8_t x355 = 3;
	static volatile int32_t t41 = -5;

	t41 = ((x353<=x354)/(x355<=x356));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x365 = UINT8_MAX;
	uint8_t x366 = 5U;
	int16_t x367 = INT16_MAX;
	volatile uint64_t x368 = 1778351LLU;
	int32_t t42 = 3374;

	t42 = ((x365<=x366)/(x367<=x368));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x373 = 7U;
	int32_t x374 = INT32_MIN;
	uint8_t x376 = 27U;
	volatile int32_t t43 = -31;

	t43 = ((x373<=x374)/(x375<=x376));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x377 = -1;
	volatile uint16_t x378 = 408U;
	static uint16_t x380 = UINT16_MAX;
	int32_t t44 = 504806;

	t44 = ((x377<=x378)/(x379<=x380));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x385 = 13123U;
	static int64_t x386 = INT64_MAX;
	static volatile uint32_t x387 = 10905U;
	volatile int32_t x388 = INT32_MAX;
	static volatile int32_t t45 = 60;

	t45 = ((x385<=x386)/(x387<=x388));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x389 = INT64_MIN;
	uint32_t x390 = UINT32_MAX;
	int64_t x391 = INT64_MIN;
	static uint32_t x392 = UINT32_MAX;

	t46 = ((x389<=x390)/(x391<=x392));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x393 = UINT64_MAX;
	int8_t x394 = -1;
	int16_t x395 = INT16_MIN;
	volatile uint8_t x396 = 29U;

	t47 = ((x393<=x394)/(x395<=x396));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x397 = -1LL;
	uint8_t x398 = 1U;
	static uint8_t x399 = 10U;
	int64_t x400 = INT64_MAX;
	volatile int32_t t48 = 0;

	t48 = ((x397<=x398)/(x399<=x400));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x401 = 1U;
	int32_t x402 = 30754;
	int8_t x403 = -1;
	volatile int8_t x404 = -1;
	static volatile int32_t t49 = -7;

	t49 = ((x401<=x402)/(x403<=x404));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x405 = -1LL;
	int16_t x406 = INT16_MIN;
	int32_t x407 = -1;
	uint64_t x408 = UINT64_MAX;
	int32_t t50 = -49;

	t50 = ((x405<=x406)/(x407<=x408));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x409 = UINT16_MAX;
	volatile uint8_t x410 = UINT8_MAX;
	static int16_t x411 = -11198;
	static int32_t x412 = -1;
	static volatile int32_t t51 = -5999;

	t51 = ((x409<=x410)/(x411<=x412));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MAX;
	uint16_t x415 = 9U;
	volatile int64_t x416 = INT64_MAX;
	int32_t t52 = 44968023;

	t52 = ((x413<=x414)/(x415<=x416));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x417 = INT64_MIN;
	volatile uint16_t x418 = 61U;
	static volatile uint8_t x420 = UINT8_MAX;
	static int32_t t53 = -48602793;

	t53 = ((x417<=x418)/(x419<=x420));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x423 = 1301529960U;
	int16_t x424 = INT16_MIN;
	int32_t t54 = 16;

	t54 = ((x421<=x422)/(x423<=x424));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x425 = UINT8_MAX;
	int8_t x426 = INT8_MIN;
	static int16_t x427 = INT16_MIN;
	int32_t x428 = 116003;

	t55 = ((x425<=x426)/(x427<=x428));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x430 = INT8_MIN;
	static uint8_t x431 = 0U;
	uint16_t x432 = 7186U;

	t56 = ((x429<=x430)/(x431<=x432));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	volatile int32_t t57 = 2;

	t57 = ((x441<=x442)/(x443<=x444));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x445 = UINT32_MAX;
	int64_t x446 = -1LL;
	int64_t x447 = -1LL;
	int32_t x448 = 10;
	static volatile int32_t t58 = 331564;

	t58 = ((x445<=x446)/(x447<=x448));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x449 = INT16_MAX;
	int8_t x450 = INT8_MAX;
	volatile uint32_t x451 = 63735869U;
	int8_t x452 = -1;
	static volatile int32_t t59 = 3;

	t59 = ((x449<=x450)/(x451<=x452));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x465 = INT16_MAX;
	volatile int32_t x466 = INT32_MAX;
	int32_t x468 = INT32_MAX;

	t60 = ((x465<=x466)/(x467<=x468));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x469 = UINT32_MAX;
	uint16_t x470 = 3791U;
	int64_t x471 = -31816129018LL;

	t61 = ((x469<=x470)/(x471<=x472));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x481 = 1;
	volatile uint8_t x482 = 24U;
	volatile int64_t x484 = INT64_MIN;
	static volatile int32_t t62 = 50960;

	t62 = ((x481<=x482)/(x483<=x484));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x486 = INT16_MAX;
	int32_t x487 = INT32_MIN;

	t63 = ((x485<=x486)/(x487<=x488));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x492 = UINT32_MAX;
	volatile int32_t t64 = -1;

	t64 = ((x489<=x490)/(x491<=x492));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x494 = 9U;

	t65 = ((x493<=x494)/(x495<=x496));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x502 = UINT64_MAX;
	volatile int8_t x503 = INT8_MAX;
	uint64_t x504 = 2265380391433346LLU;
	volatile int32_t t66 = 267744031;

	t66 = ((x501<=x502)/(x503<=x504));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x505 = INT8_MIN;
	int64_t x506 = INT64_MAX;
	static int8_t x507 = INT8_MIN;
	int8_t x508 = INT8_MIN;
	volatile int32_t t67 = 29;

	t67 = ((x505<=x506)/(x507<=x508));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x509 = INT32_MIN;
	int8_t x510 = INT8_MAX;
	static uint32_t x511 = 6U;
	volatile uint32_t x512 = 682701571U;
	static int32_t t68 = -7894;

	t68 = ((x509<=x510)/(x511<=x512));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x513 = -1;
	volatile int32_t x514 = 909419847;
	uint8_t x515 = 2U;
	int8_t x516 = INT8_MAX;
	volatile int32_t t69 = -1;

	t69 = ((x513<=x514)/(x515<=x516));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x521 = -1;
	static volatile uint32_t x522 = UINT32_MAX;
	int8_t x523 = -8;
	int64_t x524 = 13252989453LL;
	volatile int32_t t70 = 824613779;

	t70 = ((x521<=x522)/(x523<=x524));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x525 = INT8_MIN;
	uint8_t x526 = UINT8_MAX;
	int64_t x527 = INT64_MIN;
	volatile int32_t x528 = -1;
	int32_t t71 = 663;

	t71 = ((x525<=x526)/(x527<=x528));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x529 = INT8_MIN;
	int32_t x530 = INT32_MIN;
	static int64_t x531 = -1LL;
	int64_t x532 = INT64_MAX;
	static volatile int32_t t72 = 11;

	t72 = ((x529<=x530)/(x531<=x532));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x537 = -3548065LL;
	static uint8_t x538 = 1U;
	int32_t x539 = INT32_MIN;
	int8_t x540 = -1;
	volatile int32_t t73 = -10064;

	t73 = ((x537<=x538)/(x539<=x540));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x545 = UINT8_MAX;
	int64_t x546 = -1LL;
	static int64_t x547 = INT64_MIN;
	static uint32_t x548 = 22U;
	volatile int32_t t74 = -5;

	t74 = ((x545<=x546)/(x547<=x548));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x553 = INT8_MIN;
	int16_t x554 = -1731;
	int8_t x555 = 1;
	volatile int32_t t75 = 12628;

	t75 = ((x553<=x554)/(x555<=x556));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x557 = -11636;
	int8_t x558 = INT8_MAX;
	uint64_t x559 = 31LLU;
	volatile int16_t x560 = -57;
	static volatile int32_t t76 = -22194;

	t76 = ((x557<=x558)/(x559<=x560));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x565 = UINT16_MAX;
	volatile int64_t x566 = INT64_MAX;
	static int32_t x567 = INT32_MIN;
	int32_t x568 = -29072511;
	int32_t t77 = 182539;

	t77 = ((x565<=x566)/(x567<=x568));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x574 = UINT32_MAX;
	uint64_t x576 = UINT64_MAX;
	volatile int32_t t78 = 1987;

	t78 = ((x573<=x574)/(x575<=x576));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x581 = INT8_MIN;
	static int8_t x582 = 0;
	int16_t x583 = -6;
	static volatile int64_t x584 = -1LL;
	int32_t t79 = 1708;

	t79 = ((x581<=x582)/(x583<=x584));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x593 = INT8_MAX;
	int8_t x594 = -1;
	int64_t x595 = -1LL;
	int32_t t80 = 1;

	t80 = ((x593<=x594)/(x595<=x596));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x597 = -44881;
	int16_t x598 = -1;
	int8_t x599 = -1;
	uint8_t x600 = 126U;
	volatile int32_t t81 = 13934;

	t81 = ((x597<=x598)/(x599<=x600));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x601 = INT64_MIN;
	static int16_t x602 = 260;
	volatile uint32_t x603 = 26969U;
	int16_t x604 = INT16_MAX;
	int32_t t82 = 64046898;

	t82 = ((x601<=x602)/(x603<=x604));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x617 = INT8_MIN;
	uint64_t x618 = 1509LLU;
	int64_t x619 = INT64_MIN;
	volatile int32_t t83 = 112;

	t83 = ((x617<=x618)/(x619<=x620));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x623 = INT8_MIN;
	static int64_t x624 = 23723139833610LL;
	int32_t t84 = 124;

	t84 = ((x621<=x622)/(x623<=x624));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x633 = 1U;
	static int16_t x634 = -1;
	static volatile int64_t x635 = -125564653LL;
	int32_t x636 = INT32_MAX;
	static volatile int32_t t85 = 1;

	t85 = ((x633<=x634)/(x635<=x636));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x645 = INT16_MIN;
	static uint8_t x646 = UINT8_MAX;
	int32_t x647 = INT32_MAX;
	int64_t x648 = INT64_MAX;
	int32_t t86 = 1031438422;

	t86 = ((x645<=x646)/(x647<=x648));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x649 = 513998U;
	uint64_t x650 = 14882096618LLU;
	int8_t x651 = INT8_MAX;
	int32_t x652 = INT32_MAX;
	volatile int32_t t87 = -1455;

	t87 = ((x649<=x650)/(x651<=x652));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x657 = 1;
	static uint32_t x658 = 192U;
	volatile uint32_t x659 = 19473796U;
	int32_t x660 = INT32_MIN;
	static volatile int32_t t88 = -7130;

	t88 = ((x657<=x658)/(x659<=x660));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x665 = INT32_MAX;
	int8_t x666 = INT8_MIN;

	t89 = ((x665<=x666)/(x667<=x668));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x670 = 0U;
	volatile int32_t x671 = INT32_MIN;
	volatile int32_t t90 = -213;

	t90 = ((x669<=x670)/(x671<=x672));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x681 = 4942759813375565066LLU;
	int16_t x682 = -1;
	int16_t x683 = 0;
	uint64_t x684 = 19738069091901LLU;
	int32_t t91 = 45;

	t91 = ((x681<=x682)/(x683<=x684));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x690 = INT16_MAX;
	static int64_t x691 = INT64_MIN;
	static int16_t x692 = INT16_MIN;
	int32_t t92 = -1;

	t92 = ((x689<=x690)/(x691<=x692));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x693 = INT8_MAX;
	static volatile uint8_t x694 = 0U;
	int32_t x695 = -27747256;

	t93 = ((x693<=x694)/(x695<=x696));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x701 = UINT16_MAX;
	int8_t x703 = INT8_MAX;
	volatile int32_t t94 = 679157316;

	t94 = ((x701<=x702)/(x703<=x704));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x705 = INT64_MIN;
	static uint16_t x708 = 77U;
	volatile int32_t t95 = -558;

	t95 = ((x705<=x706)/(x707<=x708));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x713 = INT64_MIN;
	int16_t x715 = 112;
	int32_t x716 = INT32_MAX;

	t96 = ((x713<=x714)/(x715<=x716));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x734 = 1;
	int8_t x736 = -10;
	volatile int32_t t97 = 985104701;

	t97 = ((x733<=x734)/(x735<=x736));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x737 = -466709168;
	static int64_t x738 = INT64_MIN;
	uint64_t x740 = UINT64_MAX;
	volatile int32_t t98 = 344753406;

	t98 = ((x737<=x738)/(x739<=x740));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x745 = 1U;
	static volatile uint64_t x746 = 722988827290785089LLU;
	uint64_t x747 = 72217129LLU;
	int64_t x748 = INT64_MIN;
	int32_t t99 = -10966;

	t99 = ((x745<=x746)/(x747<=x748));

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

