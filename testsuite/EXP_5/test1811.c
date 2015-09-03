#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
volatile int32_t t3 = -7693;
static uint32_t x44 = 2047796186U;
int32_t x46 = 108;
int64_t x57 = INT64_MIN;
uint32_t x58 = UINT32_MAX;
volatile int64_t x65 = 21378183998783481LL;
int16_t x71 = -786;
volatile int32_t t8 = 29309;
int32_t x76 = INT32_MAX;
uint16_t x81 = 1335U;
int8_t x83 = -1;
volatile uint32_t t12 = UINT32_MAX;
static int16_t x97 = INT16_MIN;
int8_t x104 = INT8_MIN;
volatile int64_t x112 = INT64_MAX;
int32_t t16 = 6;
int64_t x114 = INT64_MIN;
int16_t x115 = -1;
int64_t x116 = -1LL;
volatile uint64_t t18 = UINT64_MAX;
int64_t x125 = 3550LL;
int64_t t19 = -16795989036861LL;
uint64_t x138 = 239052LLU;
volatile uint16_t x160 = UINT16_MAX;
volatile uint32_t t23 = 13U;
uint8_t x173 = 104U;
volatile int64_t x220 = INT64_MAX;
static int32_t x226 = INT32_MAX;
uint16_t x232 = 456U;
int8_t x233 = 21;
static int8_t x235 = -1;
int16_t x242 = -1;
volatile int32_t t34 = 227;
int16_t x254 = INT16_MAX;
static int8_t x286 = INT8_MIN;
volatile uint32_t x290 = 474478U;
int32_t t40 = 421;
static volatile int32_t x296 = INT32_MAX;
int8_t x309 = INT8_MIN;
static uint64_t x311 = 1899466201271363145LLU;
uint8_t x314 = UINT8_MAX;
uint64_t x316 = UINT64_MAX;
int8_t x320 = -1;
uint64_t x334 = 51LLU;
int16_t x335 = -1;
volatile int64_t x336 = 1339909274717443LL;
volatile int32_t t49 = -65519542;
static uint32_t x340 = 23365U;
volatile int8_t x366 = -3;
static volatile uint32_t x368 = UINT32_MAX;
volatile int32_t t53 = 456278404;
int8_t x402 = -1;
int64_t x403 = -24LL;
uint8_t x413 = 88U;
int64_t x414 = INT64_MIN;
volatile uint32_t x416 = 395504U;
volatile int8_t x417 = INT8_MAX;
volatile uint32_t x418 = 1844444942U;
int64_t x427 = INT64_MIN;
int8_t x428 = 0;
uint32_t x438 = 39U;
static int8_t x441 = -20;
int32_t x445 = INT32_MAX;
static volatile uint16_t x454 = UINT16_MAX;
uint64_t x460 = 14700437470LLU;
uint64_t x464 = 31602407506LLU;
int64_t x473 = INT64_MIN;
static int8_t x494 = -1;
int32_t t72 = 8998781;
int16_t x514 = -444;
int64_t x519 = -331962997LL;
uint64_t x536 = 93622682812908LLU;
int32_t t77 = 11;
uint8_t x582 = 25U;
int8_t x583 = INT8_MIN;
int32_t t79 = 201098205;
uint16_t x599 = UINT16_MAX;
int16_t x600 = INT16_MAX;
int32_t t82 = 0;
int16_t x618 = INT16_MAX;
int64_t x620 = 4139856LL;
static volatile int32_t t83 = 15;
int32_t x632 = INT32_MIN;
int32_t t86 = 1;
volatile int16_t x651 = 3;
static volatile uint8_t x658 = 5U;
int32_t x659 = -1;
int64_t t88 = -234LL;
int64_t x666 = INT64_MIN;
static int8_t x668 = INT8_MAX;
volatile uint64_t x681 = 417135807LLU;
int64_t x683 = 792888849LL;
uint8_t x689 = 104U;
int8_t x691 = INT8_MIN;
static uint16_t x692 = 34U;
int32_t t93 = 577670100;
volatile uint32_t t94 = UINT32_MAX;
volatile int32_t t96 = INT32_MIN;
int32_t x737 = INT32_MIN;
uint64_t x738 = 246LLU;
int16_t x739 = INT16_MIN;
int32_t t97 = INT32_MIN;
int16_t x749 = INT16_MIN;
int64_t x750 = INT64_MIN;
volatile int32_t t98 = -20706559;
static uint16_t x753 = 1U;
static volatile int32_t t99 = 1175;


void f0(void) {
	volatile uint64_t x2 = 1LLU;
	volatile int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 0;

	t0 = (x1/((x2&x3)<=x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	volatile int8_t x10 = 25;
	static uint32_t x11 = UINT32_MAX;
	int32_t x12 = 853174;
	volatile int32_t t1 = INT32_MIN;

	t1 = (x9/((x10&x11)<=x12));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = 211;
	static uint8_t x22 = 28U;
	static uint32_t x23 = 5U;
	volatile uint32_t x24 = UINT32_MAX;
	int32_t t2 = 13953413;

	t2 = (x21/((x22&x23)<=x24));

	if (t2 != 211) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = 2;
	int8_t x27 = 61;
	int64_t x28 = 511LL;

	t3 = (x25/((x26&x27)<=x28));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = 3839LL;
	uint16_t x43 = 0U;
	static volatile int64_t t4 = INT64_MIN;

	t4 = (x41/((x42&x43)<=x44));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x45 = INT32_MAX;
	int8_t x47 = 27;
	volatile uint8_t x48 = 15U;
	volatile int32_t t5 = INT32_MAX;

	t5 = (x45/((x46&x47)<=x48));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = INT16_MIN;
	volatile int64_t t6 = INT64_MIN;

	t6 = (x57/((x58&x59)<=x60));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x66 = -1;
	uint8_t x67 = 1U;
	int8_t x68 = INT8_MAX;
	int64_t t7 = -12LL;

	t7 = (x65/((x66&x67)<=x68));

	if (t7 != 21378183998783481LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = 943;
	int64_t x72 = INT64_MAX;

	t8 = (x69/((x70&x71)<=x72));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x73 = 10483U;
	int64_t x74 = -631192LL;
	int64_t x75 = -5058691391LL;
	static int32_t t9 = -1;

	t9 = (x73/((x74&x75)<=x76));

	if (t9 != 10483) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x77 = INT16_MIN;
	uint64_t x78 = 19LLU;
	uint64_t x79 = UINT64_MAX;
	int32_t x80 = -1;
	static int32_t t10 = -6672980;

	t10 = (x77/((x78&x79)<=x80));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x82 = 1;
	volatile uint64_t x84 = 53LLU;
	volatile int32_t t11 = 9;

	t11 = (x81/((x82&x83)<=x84));

	if (t11 != 1335) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x85 = UINT32_MAX;
	static volatile int64_t x86 = INT64_MAX;
	volatile uint64_t x87 = 234929895145LLU;
	volatile int16_t x88 = -1;

	t12 = (x85/((x86&x87)<=x88));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int32_t x94 = INT32_MIN;
	int8_t x95 = 0;
	static uint16_t x96 = UINT16_MAX;
	uint32_t t13 = UINT32_MAX;

	t13 = (x93/((x94&x95)<=x96));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x98 = 1;
	volatile int64_t x99 = INT64_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile int32_t t14 = -217;

	t14 = (x97/((x98&x99)<=x100));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x101 = 27182U;
	int32_t x102 = -1;
	volatile int8_t x103 = INT8_MIN;
	static volatile uint32_t t15 = 122750U;

	t15 = (x101/((x102&x103)<=x104));

	if (t15 != 27182U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x109 = -1;
	int32_t x110 = 34;
	volatile int32_t x111 = INT32_MIN;

	t16 = (x109/((x110&x111)<=x112));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x113 = INT64_MAX;
	int64_t t17 = INT64_MAX;

	t17 = (x113/((x114&x115)<=x116));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MIN;
	int32_t x119 = -46;
	int64_t x120 = 26989LL;

	t18 = (x117/((x118&x119)<=x120));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x126 = UINT64_MAX;
	int64_t x127 = INT64_MAX;
	int32_t x128 = -3444052;

	t19 = (x125/((x126&x127)<=x128));

	if (t19 != 3550LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x129 = UINT64_MAX;
	int32_t x130 = INT32_MAX;
	int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MAX;
	static uint64_t t20 = UINT64_MAX;

	t20 = (x129/((x130&x131)<=x132));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x133 = 8;
	int32_t x134 = 871;
	int16_t x135 = INT16_MAX;
	static volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t21 = -5137;

	t21 = (x133/((x134&x135)<=x136));

	if (t21 != 8) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x137 = 2U;
	volatile uint64_t x139 = 1623104047798186795LLU;
	uint64_t x140 = 156108960888879219LLU;
	int32_t t22 = 56;

	t22 = (x137/((x138&x139)<=x140));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x157 = 418498U;
	int32_t x158 = INT32_MIN;
	int64_t x159 = -1LL;

	t23 = (x157/((x158&x159)<=x160));

	if (t23 != 418498U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x165 = 14;
	static int16_t x166 = -158;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t24 = 14543073;

	t24 = (x165/((x166&x167)<=x168));

	if (t24 != 14) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x169 = -1;
	static uint16_t x170 = 1U;
	uint64_t x171 = 52198LLU;
	uint64_t x172 = 40495LLU;
	int32_t t25 = -13;

	t25 = (x169/((x170&x171)<=x172));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x174 = 14U;
	int16_t x175 = -4083;
	int16_t x176 = 14048;
	static int32_t t26 = -208;

	t26 = (x173/((x174&x175)<=x176));

	if (t26 != 104) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x189 = 186973LL;
	int16_t x190 = -1;
	static int64_t x191 = -111893703037125798LL;
	volatile int16_t x192 = -1;
	volatile int64_t t27 = -1279LL;

	t27 = (x189/((x190&x191)<=x192));

	if (t27 != 186973LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x209 = UINT8_MAX;
	int32_t x210 = 2919;
	static volatile int8_t x211 = -1;
	int16_t x212 = INT16_MAX;
	volatile int32_t t28 = 62;

	t28 = (x209/((x210&x211)<=x212));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x217 = -1LL;
	uint16_t x218 = 997U;
	uint16_t x219 = UINT16_MAX;
	int64_t t29 = 89047176331610LL;

	t29 = (x217/((x218&x219)<=x220));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x221 = 237;
	int8_t x222 = 19;
	int16_t x223 = 122;
	int64_t x224 = INT64_MAX;
	static int32_t t30 = 9280;

	t30 = (x221/((x222&x223)<=x224));

	if (t30 != 237) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x225 = -1;
	int64_t x227 = INT64_MIN;
	static int16_t x228 = 760;
	int32_t t31 = 1480630;

	t31 = (x225/((x226&x227)<=x228));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x229 = INT16_MAX;
	volatile uint64_t x230 = 2938LLU;
	uint16_t x231 = 268U;
	int32_t t32 = -423320;

	t32 = (x229/((x230&x231)<=x232));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x234 = UINT32_MAX;
	static int16_t x236 = -1;
	int32_t t33 = 48;

	t33 = (x233/((x234&x235)<=x236));

	if (t33 != 21) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x241 = INT16_MIN;
	static int8_t x243 = INT8_MIN;
	volatile int64_t x244 = -1LL;

	t34 = (x241/((x242&x243)<=x244));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x253 = 579630U;
	uint32_t x255 = 32U;
	volatile uint64_t x256 = 888215355584107122LLU;
	static uint32_t t35 = 104591294U;

	t35 = (x253/((x254&x255)<=x256));

	if (t35 != 579630U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MIN;
	uint64_t x271 = 158LLU;
	static int64_t x272 = INT64_MAX;
	volatile int32_t t36 = 148;

	t36 = (x269/((x270&x271)<=x272));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x273 = 232652U;
	static int8_t x274 = 1;
	static int16_t x275 = INT16_MIN;
	static int64_t x276 = INT64_MAX;
	volatile uint32_t t37 = 258U;

	t37 = (x273/((x274&x275)<=x276));

	if (t37 != 232652U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x277 = 52661092290LLU;
	static int8_t x278 = 1;
	uint32_t x279 = 562963654U;
	uint16_t x280 = 19956U;
	uint64_t t38 = 26281061989LLU;

	t38 = (x277/((x278&x279)<=x280));

	if (t38 != 52661092290LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x285 = INT32_MIN;
	volatile int16_t x287 = INT16_MIN;
	volatile uint64_t x288 = UINT64_MAX;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x285/((x286&x287)<=x288));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x289 = 0U;
	int8_t x291 = -1;
	static int64_t x292 = INT64_MAX;

	t40 = (x289/((x290&x291)<=x292));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x293 = -1;
	int16_t x294 = INT16_MAX;
	uint8_t x295 = 52U;
	int32_t t41 = 7471;

	t41 = (x293/((x294&x295)<=x296));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x301 = 23U;
	int16_t x302 = INT16_MIN;
	int8_t x303 = -6;
	volatile int8_t x304 = 1;
	int32_t t42 = 4;

	t42 = (x301/((x302&x303)<=x304));

	if (t42 != 23) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x310 = 1U;
	int8_t x312 = 3;
	int32_t t43 = -22362378;

	t43 = (x309/((x310&x311)<=x312));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x313 = 14U;
	int16_t x315 = -2453;
	volatile int32_t t44 = 651740049;

	t44 = (x313/((x314&x315)<=x316));

	if (t44 != 14) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x317 = INT8_MIN;
	uint32_t x318 = 131062U;
	static uint16_t x319 = 3961U;
	volatile int32_t t45 = 0;

	t45 = (x317/((x318&x319)<=x320));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = -4199107LL;
	int16_t x323 = -6;
	int32_t x324 = -3702002;
	int32_t t46 = -6308490;

	t46 = (x321/((x322&x323)<=x324));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MIN;
	int8_t x327 = -1;
	int32_t x328 = INT32_MAX;
	static volatile int32_t t47 = 13;

	t47 = (x325/((x326&x327)<=x328));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x329 = -1;
	uint16_t x330 = 126U;
	volatile int8_t x331 = INT8_MAX;
	volatile uint64_t x332 = 735479221LLU;
	int32_t t48 = 310111;

	t48 = (x329/((x330&x331)<=x332));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x333 = INT16_MAX;

	t49 = (x333/((x334&x335)<=x336));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x337 = -274LL;
	static uint16_t x338 = UINT16_MAX;
	volatile uint64_t x339 = 12LLU;
	volatile int64_t t50 = -4644746312LL;

	t50 = (x337/((x338&x339)<=x340));

	if (t50 != -274LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x341 = UINT32_MAX;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	volatile int32_t x344 = INT32_MIN;
	uint32_t t51 = UINT32_MAX;

	t51 = (x341/((x342&x343)<=x344));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x365 = INT32_MAX;
	int8_t x367 = -1;
	int32_t t52 = INT32_MAX;

	t52 = (x365/((x366&x367)<=x368));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x377 = 3U;
	uint64_t x378 = UINT64_MAX;
	uint32_t x379 = 14U;
	static uint64_t x380 = 306067780238944LLU;

	t53 = (x377/((x378&x379)<=x380));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x393 = 24U;
	int32_t x394 = INT32_MIN;
	uint8_t x395 = UINT8_MAX;
	uint8_t x396 = 4U;
	volatile int32_t t54 = -13278;

	t54 = (x393/((x394&x395)<=x396));

	if (t54 != 24) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x397 = INT32_MAX;
	static volatile int64_t x398 = INT64_MAX;
	static uint16_t x399 = 2166U;
	int32_t x400 = INT32_MAX;
	static volatile int32_t t55 = INT32_MAX;

	t55 = (x397/((x398&x399)<=x400));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x401 = 2U;
	int8_t x404 = -22;
	uint32_t t56 = 160U;

	t56 = (x401/((x402&x403)<=x404));

	if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x409 = INT8_MAX;
	volatile int64_t x410 = -478125572543964LL;
	static int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	volatile int32_t t57 = 33;

	t57 = (x409/((x410&x411)<=x412));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x415 = UINT8_MAX;
	int32_t t58 = 11;

	t58 = (x413/((x414&x415)<=x416));

	if (t58 != 88) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x419 = INT64_MIN;
	static int8_t x420 = INT8_MAX;
	volatile int32_t t59 = 46288;

	t59 = (x417/((x418&x419)<=x420));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x425 = -1;
	static volatile uint64_t x426 = 252768LLU;
	volatile int32_t t60 = -93255219;

	t60 = (x425/((x426&x427)<=x428));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x433 = -4243;
	int32_t x434 = INT32_MIN;
	volatile int16_t x435 = 368;
	int32_t x436 = INT32_MAX;
	int32_t t61 = -43999188;

	t61 = (x433/((x434&x435)<=x436));

	if (t61 != -4243) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x437 = INT32_MIN;
	static uint64_t x439 = 111370721832111218LLU;
	uint32_t x440 = 6642U;
	volatile int32_t t62 = INT32_MIN;

	t62 = (x437/((x438&x439)<=x440));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x442 = UINT8_MAX;
	int8_t x443 = -1;
	int64_t x444 = 14379801524LL;
	int32_t t63 = -760389875;

	t63 = (x441/((x442&x443)<=x444));

	if (t63 != -20) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x446 = -1;
	int32_t x447 = -1;
	int16_t x448 = 1174;
	static volatile int32_t t64 = INT32_MAX;

	t64 = (x445/((x446&x447)<=x448));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x453 = INT32_MIN;
	int64_t x455 = -1LL;
	int64_t x456 = 121789755460966012LL;
	int32_t t65 = INT32_MIN;

	t65 = (x453/((x454&x455)<=x456));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x457 = 4U;
	uint16_t x458 = 2U;
	volatile int16_t x459 = 11;
	volatile int32_t t66 = -41;

	t66 = (x457/((x458&x459)<=x460));

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x461 = UINT16_MAX;
	volatile int64_t x462 = INT64_MIN;
	int32_t x463 = 241781091;
	int32_t t67 = -6737604;

	t67 = (x461/((x462&x463)<=x464));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x465 = UINT16_MAX;
	uint8_t x466 = 4U;
	int8_t x467 = -1;
	uint16_t x468 = 20U;
	volatile int32_t t68 = -121665;

	t68 = (x465/((x466&x467)<=x468));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x474 = 0;
	uint8_t x475 = 126U;
	volatile uint8_t x476 = 93U;
	int64_t t69 = INT64_MIN;

	t69 = (x473/((x474&x475)<=x476));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x493 = INT8_MIN;
	int16_t x495 = INT16_MAX;
	volatile int32_t x496 = 664345;
	int32_t t70 = 87750;

	t70 = (x493/((x494&x495)<=x496));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x497 = INT64_MIN;
	int16_t x498 = -36;
	int16_t x499 = INT16_MIN;
	volatile int16_t x500 = 53;
	int64_t t71 = INT64_MIN;

	t71 = (x497/((x498&x499)<=x500));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x509 = INT16_MAX;
	uint16_t x510 = 657U;
	static int16_t x511 = 30;
	static uint64_t x512 = 2245103LLU;

	t72 = (x509/((x510&x511)<=x512));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x513 = -1;
	static int16_t x515 = 6600;
	int64_t x516 = 125162089330818691LL;
	volatile int32_t t73 = -87302121;

	t73 = (x513/((x514&x515)<=x516));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x517 = 3U;
	int64_t x518 = 3541139LL;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t74 = 792864740;

	t74 = (x517/((x518&x519)<=x520));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x521 = INT32_MIN;
	int8_t x522 = INT8_MIN;
	uint16_t x523 = 11847U;
	int32_t x524 = INT32_MAX;
	volatile int32_t t75 = INT32_MIN;

	t75 = (x521/((x522&x523)<=x524));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x529 = -66163367;
	int64_t x530 = -1LL;
	uint8_t x531 = 1U;
	volatile int8_t x532 = INT8_MAX;
	static volatile int32_t t76 = 12230;

	t76 = (x529/((x530&x531)<=x532));

	if (t76 != -66163367) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x533 = -1;
	uint16_t x534 = UINT16_MAX;
	static int64_t x535 = -4282066551753003LL;

	t77 = (x533/((x534&x535)<=x536));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x581 = 98U;
	volatile int32_t x584 = 686;
	int32_t t78 = -23549122;

	t78 = (x581/((x582&x583)<=x584));

	if (t78 != 98) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x585 = -1;
	volatile int64_t x586 = INT64_MAX;
	int32_t x587 = -1;
	uint64_t x588 = UINT64_MAX;

	t79 = (x585/((x586&x587)<=x588));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x589 = 153U;
	int32_t x590 = -16;
	static int32_t x591 = -2285;
	volatile uint32_t x592 = UINT32_MAX;
	int32_t t80 = 237789;

	t80 = (x589/((x590&x591)<=x592));

	if (t80 != 153) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x597 = INT16_MIN;
	int32_t x598 = INT32_MIN;
	int32_t t81 = -379826;

	t81 = (x597/((x598&x599)<=x600));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x601 = INT16_MAX;
	int8_t x602 = -6;
	int64_t x603 = -17249484LL;
	uint8_t x604 = 0U;

	t82 = (x601/((x602&x603)<=x604));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x617 = INT16_MIN;
	uint64_t x619 = UINT64_MAX;

	t83 = (x617/((x618&x619)<=x620));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x629 = INT32_MAX;
	uint64_t x630 = UINT64_MAX;
	uint8_t x631 = UINT8_MAX;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x629/((x630&x631)<=x632));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x633 = INT8_MIN;
	uint8_t x634 = 3U;
	uint32_t x635 = UINT32_MAX;
	uint64_t x636 = 9181763567LLU;
	volatile int32_t t85 = 3;

	t85 = (x633/((x634&x635)<=x636));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x645 = 80U;
	int64_t x646 = -2282656054463686571LL;
	int8_t x647 = -1;
	uint64_t x648 = UINT64_MAX;

	t86 = (x645/((x646&x647)<=x648));

	if (t86 != 80) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x649 = INT64_MIN;
	uint32_t x650 = 167306884U;
	int16_t x652 = -14235;
	int64_t t87 = INT64_MIN;

	t87 = (x649/((x650&x651)<=x652));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x657 = 341665LL;
	uint32_t x660 = 529318U;

	t88 = (x657/((x658&x659)<=x660));

	if (t88 != 341665LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x665 = -1;
	static uint16_t x667 = 1735U;
	static volatile int32_t t89 = -59296;

	t89 = (x665/((x666&x667)<=x668));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x673 = 50U;
	uint16_t x674 = UINT16_MAX;
	uint32_t x675 = UINT32_MAX;
	int8_t x676 = INT8_MIN;
	int32_t t90 = -10992;

	t90 = (x673/((x674&x675)<=x676));

	if (t90 != 50) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x682 = UINT32_MAX;
	int64_t x684 = INT64_MAX;
	volatile uint64_t t91 = 42300010800000638LLU;

	t91 = (x681/((x682&x683)<=x684));

	if (t91 != 417135807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x690 = 30U;
	int32_t t92 = 107494;

	t92 = (x689/((x690&x691)<=x692));

	if (t92 != 104) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x693 = UINT8_MAX;
	uint8_t x694 = 0U;
	uint32_t x695 = UINT32_MAX;
	int16_t x696 = INT16_MIN;

	t93 = (x693/((x694&x695)<=x696));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x705 = UINT32_MAX;
	volatile uint64_t x706 = 6264595LLU;
	static int32_t x707 = INT32_MIN;
	volatile int32_t x708 = INT32_MIN;

	t94 = (x705/((x706&x707)<=x708));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x709 = 3705U;
	uint32_t x710 = 1479U;
	int8_t x711 = -1;
	static int64_t x712 = 1037584491944357394LL;
	volatile int32_t t95 = 419641418;

	t95 = (x709/((x710&x711)<=x712));

	if (t95 != 3705) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x725 = INT32_MIN;
	int8_t x726 = -1;
	static uint64_t x727 = UINT64_MAX;
	int8_t x728 = -1;

	t96 = (x725/((x726&x727)<=x728));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x740 = UINT8_MAX;

	t97 = (x737/((x738&x739)<=x740));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x751 = 73219528577757LLU;
	volatile int64_t x752 = 6LL;

	t98 = (x749/((x750&x751)<=x752));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x754 = -1;
	uint8_t x755 = 9U;
	static uint16_t x756 = 12415U;

	t99 = (x753/((x754&x755)<=x756));

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

