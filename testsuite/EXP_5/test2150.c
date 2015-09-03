#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x17 = 7U;
int32_t t1 = -1;
uint8_t x25 = UINT8_MAX;
volatile uint64_t x31 = UINT64_MAX;
static int16_t x66 = -1807;
uint32_t x69 = UINT32_MAX;
uint16_t x72 = 801U;
uint64_t x92 = UINT64_MAX;
uint8_t x97 = 0U;
int64_t x100 = INT64_MAX;
static int64_t x109 = -1LL;
int8_t x112 = -2;
static volatile int32_t x130 = INT32_MIN;
int32_t x132 = INT32_MAX;
int64_t x140 = INT64_MIN;
int64_t t13 = 51644LL;
int64_t x150 = -3LL;
int8_t x157 = 35;
uint16_t x160 = 199U;
int16_t x167 = -1;
static int8_t x176 = -1;
int32_t x187 = INT32_MAX;
int8_t x198 = -1;
int32_t t21 = -228378;
int16_t x209 = 2256;
static int8_t x210 = INT8_MAX;
static int64_t x219 = -27LL;
int16_t x220 = -3;
int8_t x230 = -1;
volatile uint64_t x231 = 110539308647040LLU;
volatile int16_t x232 = -1;
static volatile int16_t x236 = -7536;
static int8_t x245 = -1;
int32_t x246 = -1;
static volatile uint32_t x247 = 0U;
int64_t x250 = -1LL;
volatile uint64_t x254 = 4447109LLU;
int16_t x256 = INT16_MIN;
int16_t x277 = INT16_MIN;
uint64_t x291 = UINT64_MAX;
uint32_t x296 = 601U;
int64_t x315 = INT64_MIN;
static volatile int32_t t38 = -260422;
uint16_t x345 = UINT16_MAX;
int16_t x346 = 10045;
static int16_t x356 = 0;
uint8_t x359 = 52U;
uint64_t x360 = UINT64_MAX;
int16_t x364 = INT16_MIN;
int32_t x378 = INT32_MAX;
volatile int32_t x384 = INT32_MAX;
volatile int8_t x385 = -1;
static uint16_t x386 = 2689U;
int8_t x387 = INT8_MIN;
int64_t x389 = INT64_MIN;
uint16_t x391 = UINT16_MAX;
int64_t t47 = -251138LL;
int16_t x419 = INT16_MIN;
int16_t x427 = -528;
volatile uint64_t t50 = 24977344875188LLU;
int8_t x449 = INT8_MIN;
int32_t x457 = -1;
int32_t x460 = -1;
volatile int32_t t53 = 3;
static int8_t x478 = INT8_MIN;
volatile int32_t t57 = -788758814;
volatile uint16_t x499 = 3U;
int8_t x500 = INT8_MAX;
int32_t x511 = -1;
int32_t x512 = 708488;
static int8_t x529 = INT8_MIN;
int16_t x541 = INT16_MAX;
uint64_t x542 = 150247266021131147LLU;
volatile int32_t t66 = 2734;
volatile uint8_t x559 = UINT8_MAX;
int64_t x573 = INT64_MIN;
int16_t x576 = -1;
int16_t x577 = -62;
volatile int16_t x585 = INT16_MAX;
int64_t x587 = -1LL;
int16_t x610 = -118;
uint16_t x611 = 189U;
uint32_t x619 = 12155U;
int16_t x656 = -2;
int32_t x657 = -1;
int32_t t79 = -3;
int64_t x661 = 11674917LL;
int64_t t80 = -16423437109810LL;
volatile uint16_t x668 = 837U;
static uint8_t x696 = 8U;
volatile uint64_t x703 = 313555LLU;
int16_t x704 = -1;
static uint32_t x711 = 962U;
uint64_t t87 = 2695349532999045LLU;
volatile int16_t x713 = -1;
volatile int64_t x725 = 378057797004138592LL;
int32_t x731 = 1;
int16_t x735 = INT16_MIN;
volatile int8_t x746 = -1;
int16_t x747 = 1015;
int8_t x757 = 0;
int8_t x778 = 0;
static volatile int8_t x780 = INT8_MAX;


void f0(void) {
	uint64_t x13 = UINT64_MAX;
	static int8_t x14 = 1;
	volatile int64_t x15 = INT64_MIN;
	volatile int32_t x16 = 65997;
	volatile uint64_t t0 = 3947779LLU;

	t0 = (x13%((x14^x15)<=x16));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x18 = -1;
	static int32_t x19 = -1;
	volatile int8_t x20 = INT8_MAX;

	t1 = (x17%((x18^x19)<=x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x26 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t2 = -244154540;

	t2 = (x25%((x26^x27)<=x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x29 = 98180U;
	volatile uint64_t x30 = UINT64_MAX;
	int32_t x32 = INT32_MIN;
	uint32_t t3 = 226085702U;

	t3 = (x29%((x30^x31)<=x32));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x49 = 6728820U;
	int64_t x50 = 25116083602587023LL;
	int64_t x51 = INT64_MIN;
	int8_t x52 = -6;
	uint32_t t4 = 240U;

	t4 = (x49%((x50^x51)<=x52));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x65 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	uint8_t x68 = UINT8_MAX;
	int64_t t5 = 227606323LL;

	t5 = (x65%((x66^x67)<=x68));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x70 = UINT32_MAX;
	int64_t x71 = INT64_MIN;
	static uint32_t t6 = 15278U;

	t6 = (x69%((x70^x71)<=x72));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x85 = -1LL;
	static int8_t x86 = -1;
	static int64_t x87 = 560983975LL;
	volatile int32_t x88 = -1;
	int64_t t7 = -2LL;

	t7 = (x85%((x86^x87)<=x88));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x89 = 47664;
	uint64_t x90 = 5665338729439486318LLU;
	volatile int16_t x91 = -1772;
	volatile int32_t t8 = 0;

	t8 = (x89%((x90^x91)<=x92));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x98 = 1U;
	volatile int32_t x99 = INT32_MIN;
	int32_t t9 = 112;

	t9 = (x97%((x98^x99)<=x100));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x110 = -1LL;
	uint8_t x111 = 1U;
	static int64_t t10 = 12891LL;

	t10 = (x109%((x110^x111)<=x112));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x117 = -1LL;
	volatile uint64_t x118 = 5131212743LLU;
	int64_t x119 = 502438825026551247LL;
	int16_t x120 = INT16_MIN;
	int64_t t11 = -7042LL;

	t11 = (x117%((x118^x119)<=x120));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x129 = 0;
	static uint64_t x131 = UINT64_MAX;
	static volatile int32_t t12 = 511;

	t12 = (x129%((x130^x131)<=x132));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x137 = INT64_MIN;
	uint64_t x138 = 103210821933105LLU;
	uint8_t x139 = UINT8_MAX;

	t13 = (x137%((x138^x139)<=x140));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x149 = INT16_MIN;
	int32_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	int32_t t14 = 334;

	t14 = (x149%((x150^x151)<=x152));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x158 = INT8_MAX;
	static int16_t x159 = INT16_MIN;
	int32_t t15 = -106103;

	t15 = (x157%((x158^x159)<=x160));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x161 = 8222121746195498LLU;
	int8_t x162 = -1;
	volatile uint64_t x163 = UINT64_MAX;
	uint64_t x164 = UINT64_MAX;
	static uint64_t t16 = 27955861024LLU;

	t16 = (x161%((x162^x163)<=x164));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x165 = INT8_MIN;
	int64_t x166 = INT64_MAX;
	static int8_t x168 = INT8_MIN;
	int32_t t17 = -769;

	t17 = (x165%((x166^x167)<=x168));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x173 = 380883;
	static int16_t x174 = INT16_MAX;
	int8_t x175 = -1;
	static int32_t t18 = 1;

	t18 = (x173%((x174^x175)<=x176));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x185 = 42U;
	volatile int8_t x186 = INT8_MIN;
	volatile int16_t x188 = -1;
	int32_t t19 = 14391;

	t19 = (x185%((x186^x187)<=x188));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x193 = 7U;
	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t20 = 1048633075;

	t20 = (x193%((x194^x195)<=x196));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x197 = UINT8_MAX;
	int64_t x199 = 135662145390349LL;
	volatile int32_t x200 = 35;

	t21 = (x197%((x198^x199)<=x200));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MAX;
	static int32_t t22 = 627;

	t22 = (x209%((x210^x211)<=x212));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x217 = 2063904207U;
	volatile uint16_t x218 = 13573U;
	uint32_t t23 = 2U;

	t23 = (x217%((x218^x219)<=x220));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x229 = -1;
	volatile int32_t t24 = 0;

	t24 = (x229%((x230^x231)<=x232));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x233 = 4;
	int8_t x234 = 1;
	int16_t x235 = INT16_MIN;
	static volatile int32_t t25 = 420926;

	t25 = (x233%((x234^x235)<=x236));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x248 = 239257015959LLU;
	int32_t t26 = 282837147;

	t26 = (x245%((x246^x247)<=x248));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x249 = INT8_MAX;
	int32_t x251 = INT32_MAX;
	int16_t x252 = -1;
	volatile int32_t t27 = 27230;

	t27 = (x249%((x250^x251)<=x252));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x253 = INT32_MIN;
	static int64_t x255 = INT64_MAX;
	int32_t t28 = -100733;

	t28 = (x253%((x254^x255)<=x256));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x257 = 782U;
	int8_t x258 = -1;
	static uint64_t x259 = UINT64_MAX;
	volatile uint16_t x260 = 5U;
	volatile uint32_t t29 = 101361231U;

	t29 = (x257%((x258^x259)<=x260));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x261 = UINT8_MAX;
	int64_t x262 = INT64_MAX;
	static int8_t x263 = INT8_MIN;
	volatile uint64_t x264 = UINT64_MAX;
	volatile int32_t t30 = -16467647;

	t30 = (x261%((x262^x263)<=x264));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x273 = INT8_MAX;
	uint32_t x274 = 0U;
	static volatile int64_t x275 = -1LL;
	int32_t x276 = 712043;
	int32_t t31 = 11;

	t31 = (x273%((x274^x275)<=x276));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x278 = 0;
	static int8_t x279 = INT8_MAX;
	static int64_t x280 = 9071LL;
	int32_t t32 = -1;

	t32 = (x277%((x278^x279)<=x280));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x281 = 2195U;
	volatile int64_t x282 = INT64_MAX;
	int8_t x283 = INT8_MIN;
	static int8_t x284 = INT8_MIN;
	volatile uint32_t t33 = 207U;

	t33 = (x281%((x282^x283)<=x284));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x289 = UINT16_MAX;
	static volatile int8_t x290 = INT8_MIN;
	uint16_t x292 = UINT16_MAX;
	static int32_t t34 = 364;

	t34 = (x289%((x290^x291)<=x292));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x293 = -1;
	int16_t x294 = 37;
	int16_t x295 = 3;
	volatile int32_t t35 = 8359;

	t35 = (x293%((x294^x295)<=x296));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x313 = -1LL;
	volatile int16_t x314 = INT16_MAX;
	volatile int32_t x316 = -7790;
	volatile int64_t t36 = 19678394637823833LL;

	t36 = (x313%((x314^x315)<=x316));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x317 = 1U;
	uint64_t x318 = UINT64_MAX;
	int8_t x319 = 16;
	int16_t x320 = -1;
	static int32_t t37 = 144403602;

	t37 = (x317%((x318^x319)<=x320));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x333 = INT32_MIN;
	uint16_t x334 = 175U;
	int32_t x335 = -2036934;
	volatile int16_t x336 = INT16_MIN;

	t38 = (x333%((x334^x335)<=x336));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x347 = 103U;
	volatile int16_t x348 = -1;
	int32_t t39 = 806338;

	t39 = (x345%((x346^x347)<=x348));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x353 = 0U;
	static int32_t x354 = INT32_MIN;
	volatile uint16_t x355 = UINT16_MAX;
	uint32_t t40 = 118U;

	t40 = (x353%((x354^x355)<=x356));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = -1;
	int32_t t41 = -23956485;

	t41 = (x357%((x358^x359)<=x360));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x361 = INT16_MAX;
	static uint64_t x362 = 1417531111LLU;
	int64_t x363 = INT64_MIN;
	volatile int32_t t42 = -5353;

	t42 = (x361%((x362^x363)<=x364));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x365 = -52130LL;
	static uint32_t x366 = 4685U;
	static int16_t x367 = 1856;
	static int32_t x368 = INT32_MIN;
	volatile int64_t t43 = 896LL;

	t43 = (x365%((x366^x367)<=x368));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x377 = -1;
	uint8_t x379 = 8U;
	static int64_t x380 = 967695643694763LL;
	volatile int32_t t44 = 9999;

	t44 = (x377%((x378^x379)<=x380));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x381 = 0U;
	int8_t x382 = INT8_MAX;
	int8_t x383 = INT8_MIN;
	volatile uint32_t t45 = 1050286785U;

	t45 = (x381%((x382^x383)<=x384));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x388 = 633078527110246308LL;
	volatile int32_t t46 = 1181314;

	t46 = (x385%((x386^x387)<=x388));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x390 = -1;
	int64_t x392 = -1LL;

	t47 = (x389%((x390^x391)<=x392));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x417 = INT64_MIN;
	static int16_t x418 = 182;
	int16_t x420 = -1;
	int64_t t48 = 650LL;

	t48 = (x417%((x418^x419)<=x420));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x425 = -1LL;
	int8_t x426 = INT8_MAX;
	uint16_t x428 = 447U;
	volatile int64_t t49 = 6098455739378241LL;

	t49 = (x425%((x426^x427)<=x428));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x437 = UINT64_MAX;
	int8_t x438 = INT8_MIN;
	volatile uint32_t x439 = UINT32_MAX;
	int16_t x440 = -438;

	t50 = (x437%((x438^x439)<=x440));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x445 = 193675U;
	static uint32_t x446 = 9U;
	static int32_t x447 = -1;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t51 = 7353U;

	t51 = (x445%((x446^x447)<=x448));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x450 = INT8_MIN;
	int16_t x451 = 53;
	int64_t x452 = 14536180434LL;
	static volatile int32_t t52 = 24;

	t52 = (x449%((x450^x451)<=x452));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x458 = INT16_MIN;
	static uint8_t x459 = 30U;

	t53 = (x457%((x458^x459)<=x460));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x473 = -3;
	int64_t x474 = INT64_MIN;
	uint16_t x475 = UINT16_MAX;
	int16_t x476 = -239;
	volatile int32_t t54 = -241306;

	t54 = (x473%((x474^x475)<=x476));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x477 = 668U;
	uint8_t x479 = 2U;
	volatile int8_t x480 = INT8_MAX;
	int32_t t55 = -35;

	t55 = (x477%((x478^x479)<=x480));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x485 = INT64_MIN;
	static int32_t x486 = 1115364;
	int8_t x487 = INT8_MAX;
	uint64_t x488 = 23532908LLU;
	int64_t t56 = 0LL;

	t56 = (x485%((x486^x487)<=x488));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x489 = INT8_MAX;
	volatile uint32_t x490 = 4U;
	int64_t x491 = -2798831180LL;
	int8_t x492 = -61;

	t57 = (x489%((x490^x491)<=x492));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x497 = 483261557759661472LLU;
	static volatile int64_t x498 = -10698869864LL;
	volatile uint64_t t58 = 5829230038LLU;

	t58 = (x497%((x498^x499)<=x500));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x509 = INT16_MIN;
	static int32_t x510 = -1;
	static volatile int32_t t59 = 184194;

	t59 = (x509%((x510^x511)<=x512));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x517 = 69U;
	int32_t x518 = 5378781;
	uint8_t x519 = 1U;
	static int64_t x520 = 3566199852962856LL;
	int32_t t60 = -1402;

	t60 = (x517%((x518^x519)<=x520));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x521 = UINT8_MAX;
	volatile int64_t x522 = INT64_MIN;
	int32_t x523 = INT32_MAX;
	int64_t x524 = -108737297066LL;
	volatile int32_t t61 = -48828701;

	t61 = (x521%((x522^x523)<=x524));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x530 = -291845305LL;
	int64_t x531 = INT64_MAX;
	int32_t x532 = -36397;
	static volatile int32_t t62 = 1759;

	t62 = (x529%((x530^x531)<=x532));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x533 = INT64_MIN;
	int32_t x534 = 93;
	static uint32_t x535 = 14594U;
	uint32_t x536 = UINT32_MAX;
	int64_t t63 = -3578375630196034LL;

	t63 = (x533%((x534^x535)<=x536));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x543 = 7673;
	int8_t x544 = -1;
	int32_t t64 = 50216311;

	t64 = (x541%((x542^x543)<=x544));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x549 = INT32_MIN;
	int64_t x550 = INT64_MAX;
	uint64_t x551 = UINT64_MAX;
	volatile int32_t x552 = -23624;
	static int32_t t65 = -867;

	t65 = (x549%((x550^x551)<=x552));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x553 = INT16_MIN;
	int8_t x554 = -1;
	int64_t x555 = -1LL;
	uint32_t x556 = UINT32_MAX;

	t66 = (x553%((x554^x555)<=x556));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x557 = 1193;
	static int64_t x558 = INT64_MIN;
	volatile int32_t x560 = INT32_MIN;
	volatile int32_t t67 = -936544171;

	t67 = (x557%((x558^x559)<=x560));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x569 = INT8_MIN;
	int64_t x570 = INT64_MAX;
	int16_t x571 = -7;
	int8_t x572 = -1;
	int32_t t68 = -93982;

	t68 = (x569%((x570^x571)<=x572));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x574 = -31332LL;
	int32_t x575 = INT32_MAX;
	volatile int64_t t69 = 180533LL;

	t69 = (x573%((x574^x575)<=x576));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x578 = -1LL;
	static uint32_t x579 = 113U;
	static volatile int64_t x580 = 86688540LL;
	static volatile int32_t t70 = -250870;

	t70 = (x577%((x578^x579)<=x580));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x581 = UINT16_MAX;
	static int32_t x582 = -1;
	uint64_t x583 = UINT64_MAX;
	int32_t x584 = -1;
	int32_t t71 = 1;

	t71 = (x581%((x582^x583)<=x584));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x586 = INT8_MIN;
	static uint64_t x588 = UINT64_MAX;
	int32_t t72 = -2350;

	t72 = (x585%((x586^x587)<=x588));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x597 = UINT32_MAX;
	int64_t x598 = INT64_MAX;
	static int32_t x599 = INT32_MIN;
	int64_t x600 = -1LL;
	volatile uint32_t t73 = 3239831U;

	t73 = (x597%((x598^x599)<=x600));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x609 = INT8_MIN;
	static int8_t x612 = 1;
	int32_t t74 = 485438;

	t74 = (x609%((x610^x611)<=x612));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x617 = INT16_MAX;
	volatile int64_t x618 = 67LL;
	uint32_t x620 = 74248U;
	int32_t t75 = 892472571;

	t75 = (x617%((x618^x619)<=x620));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x633 = -1;
	int32_t x634 = -1;
	volatile int16_t x635 = -1;
	static uint32_t x636 = UINT32_MAX;
	int32_t t76 = -4106430;

	t76 = (x633%((x634^x635)<=x636));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x645 = -56510575621LL;
	int32_t x646 = -1;
	static int8_t x647 = 1;
	int32_t x648 = 284910392;
	volatile int64_t t77 = 17LL;

	t77 = (x645%((x646^x647)<=x648));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x653 = INT8_MAX;
	int32_t x654 = INT32_MAX;
	int32_t x655 = -1;
	int32_t t78 = -64;

	t78 = (x653%((x654^x655)<=x656));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x658 = 24767U;
	int32_t x659 = -1;
	volatile int32_t x660 = INT32_MAX;

	t79 = (x657%((x658^x659)<=x660));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x662 = -1;
	uint8_t x663 = 23U;
	uint16_t x664 = UINT16_MAX;

	t80 = (x661%((x662^x663)<=x664));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x665 = 1140LL;
	volatile uint32_t x666 = 248U;
	uint8_t x667 = UINT8_MAX;
	volatile int64_t t81 = 1600080585142LL;

	t81 = (x665%((x666^x667)<=x668));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x669 = INT32_MAX;
	int32_t x670 = INT32_MAX;
	int64_t x671 = INT64_MAX;
	uint64_t x672 = UINT64_MAX;
	volatile int32_t t82 = -473619973;

	t82 = (x669%((x670^x671)<=x672));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x689 = 195457928;
	int64_t x690 = -1LL;
	int32_t x691 = 1103674;
	uint16_t x692 = 765U;
	int32_t t83 = -1234263;

	t83 = (x689%((x690^x691)<=x692));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x693 = 22024797LLU;
	int16_t x694 = -189;
	uint8_t x695 = 8U;
	static volatile uint64_t t84 = 60225331541619LLU;

	t84 = (x693%((x694^x695)<=x696));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x697 = 28;
	int8_t x698 = -13;
	int16_t x699 = INT16_MIN;
	volatile uint32_t x700 = UINT32_MAX;
	volatile int32_t t85 = 1;

	t85 = (x697%((x698^x699)<=x700));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x701 = UINT64_MAX;
	uint16_t x702 = 4U;
	uint64_t t86 = 1696055LLU;

	t86 = (x701%((x702^x703)<=x704));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x709 = UINT64_MAX;
	int64_t x710 = INT64_MIN;
	int32_t x712 = INT32_MIN;

	t87 = (x709%((x710^x711)<=x712));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x714 = 3634826528LLU;
	int8_t x715 = -40;
	int8_t x716 = INT8_MIN;
	static int32_t t88 = 1;

	t88 = (x713%((x714^x715)<=x716));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x726 = INT8_MIN;
	uint16_t x727 = 5990U;
	int32_t x728 = 240926294;
	static volatile int64_t t89 = 395395857450254LL;

	t89 = (x725%((x726^x727)<=x728));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x729 = UINT8_MAX;
	static int32_t x730 = INT32_MIN;
	static volatile int32_t x732 = -202490;
	int32_t t90 = 994835;

	t90 = (x729%((x730^x731)<=x732));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x733 = -1LL;
	int8_t x734 = INT8_MAX;
	uint8_t x736 = 3U;
	volatile int64_t t91 = 598373399LL;

	t91 = (x733%((x734^x735)<=x736));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x741 = UINT8_MAX;
	int64_t x742 = -17286238686LL;
	static int32_t x743 = INT32_MAX;
	int64_t x744 = INT64_MAX;
	volatile int32_t t92 = -4794;

	t92 = (x741%((x742^x743)<=x744));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x745 = 39U;
	int64_t x748 = 381564LL;
	volatile uint32_t t93 = 55U;

	t93 = (x745%((x746^x747)<=x748));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x749 = 1U;
	uint16_t x750 = 28292U;
	int64_t x751 = INT64_MIN;
	volatile uint8_t x752 = UINT8_MAX;
	volatile int32_t t94 = -57544;

	t94 = (x749%((x750^x751)<=x752));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x758 = 30425U;
	uint16_t x759 = 2U;
	volatile int16_t x760 = INT16_MAX;
	int32_t t95 = 8328562;

	t95 = (x757%((x758^x759)<=x760));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x761 = -4342;
	volatile int8_t x762 = INT8_MIN;
	uint16_t x763 = 48U;
	uint8_t x764 = 0U;
	volatile int32_t t96 = 173714171;

	t96 = (x761%((x762^x763)<=x764));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x765 = 120U;
	int64_t x766 = INT64_MAX;
	uint64_t x767 = 16270543LLU;
	int8_t x768 = -1;
	volatile int32_t t97 = -16;

	t97 = (x765%((x766^x767)<=x768));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x777 = INT64_MIN;
	int64_t x779 = INT64_MIN;
	int64_t t98 = -21353552LL;

	t98 = (x777%((x778^x779)<=x780));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x781 = 4;
	static int64_t x782 = INT64_MIN;
	volatile int16_t x783 = INT16_MAX;
	uint16_t x784 = 384U;
	volatile int32_t t99 = 10;

	t99 = (x781%((x782^x783)<=x784));

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

