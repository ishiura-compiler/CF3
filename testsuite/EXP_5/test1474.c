#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1LL;
volatile int8_t x36 = INT8_MAX;
static uint64_t x37 = 530LLU;
static int64_t x43 = INT64_MAX;
static uint32_t t7 = 2U;
int16_t x59 = INT16_MAX;
volatile int16_t x92 = INT16_MAX;
volatile int32_t t12 = -1515;
int16_t x93 = -1;
uint64_t x96 = 179256240043LLU;
volatile int32_t t13 = -228;
volatile int32_t t14 = -476099;
uint16_t x106 = UINT16_MAX;
int8_t x114 = 2;
static uint8_t x116 = 0U;
volatile int64_t t18 = 25700LL;
uint16_t x132 = 13U;
static uint64_t x133 = UINT64_MAX;
int32_t x135 = INT32_MIN;
int64_t x169 = INT64_MIN;
volatile uint64_t x172 = 3618LLU;
uint64_t x182 = UINT64_MAX;
int32_t x205 = 5316311;
static uint32_t x208 = 1U;
static volatile int32_t t28 = 813829914;
int32_t x213 = 2528368;
int64_t x214 = INT64_MIN;
int32_t t30 = -659455;
uint32_t x217 = 4413U;
uint16_t x219 = 3972U;
int8_t x230 = INT8_MAX;
volatile int16_t x232 = INT16_MAX;
int32_t x252 = INT32_MAX;
int32_t t34 = 7782;
static uint16_t x256 = UINT16_MAX;
int16_t x273 = -2894;
int8_t x274 = INT8_MIN;
volatile int8_t x276 = 13;
static int16_t x279 = INT16_MIN;
uint64_t t37 = 66374LLU;
int32_t t38 = -26439;
int64_t x285 = INT64_MAX;
int16_t x291 = INT16_MIN;
uint16_t x312 = UINT16_MAX;
uint8_t x317 = UINT8_MAX;
volatile int32_t t44 = -218;
int16_t x323 = -1;
int32_t t47 = -1;
int64_t x342 = -722788723346LL;
static uint8_t x344 = 3U;
int8_t x363 = 0;
volatile uint32_t x368 = UINT32_MAX;
static volatile int32_t t51 = 87;
uint8_t x393 = 25U;
uint64_t x396 = UINT64_MAX;
int64_t x414 = INT64_MIN;
uint8_t x416 = 6U;
int64_t x423 = -292147350753036770LL;
static int8_t x426 = INT8_MIN;
volatile int64_t x435 = -21308857LL;
static int64_t t57 = -6611047LL;
int8_t x439 = -1;
volatile int8_t x441 = -1;
int8_t x442 = INT8_MIN;
static int32_t x448 = 869;
volatile int32_t t60 = -573745166;
int64_t t61 = 10847543LL;
static int16_t x480 = 7238;
uint64_t x485 = UINT64_MAX;
static int16_t x519 = -1;
int32_t x541 = -1;
volatile int32_t t70 = -4;
uint16_t x552 = UINT16_MAX;
static volatile int32_t t73 = 250941691;
int16_t x557 = -1;
int16_t x558 = INT16_MAX;
int32_t t75 = 197588796;
uint16_t x576 = UINT16_MAX;
int32_t t77 = 7549318;
int8_t x578 = -1;
int64_t x596 = INT64_MAX;
int32_t t79 = 8525913;
int8_t x598 = 1;
volatile uint16_t x616 = 1U;
int32_t t82 = -8237635;
int32_t x627 = -1;
static uint16_t x630 = UINT16_MAX;
uint32_t x634 = UINT32_MAX;
uint16_t x635 = 4478U;
static int32_t x636 = INT32_MAX;
volatile int32_t x642 = -92218138;
static int32_t t87 = 10203726;
int32_t x645 = 190441194;
int8_t x647 = 17;
uint32_t x648 = UINT32_MAX;
volatile int32_t t88 = -1;
int64_t x655 = -1LL;
int64_t x656 = INT64_MAX;
int32_t t89 = -602350;
volatile int32_t t91 = 370102910;
uint64_t x674 = UINT64_MAX;
static volatile uint16_t x676 = 206U;
static volatile int16_t x677 = INT16_MIN;
int16_t x679 = INT16_MAX;
uint32_t x688 = UINT32_MAX;
int16_t x692 = INT16_MAX;
int16_t x693 = INT16_MIN;
uint32_t x721 = UINT32_MAX;


void f0(void) {
	static uint16_t x6 = 55U;
	int32_t x7 = INT32_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile int64_t t0 = 5234826159620LL;

	t0 = (x5%((x6<x7)<=x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	volatile int32_t x10 = INT32_MIN;
	int64_t x11 = 669824948084316588LL;
	static int32_t x12 = 6;
	int64_t t1 = -23767LL;

	t1 = (x9%((x10<x11)<=x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = 33206891;
	static int32_t x18 = -407;
	int8_t x19 = -5;
	uint16_t x20 = 369U;
	static volatile int32_t t2 = 649103674;

	t2 = (x17%((x18<x19)<=x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x25 = INT16_MIN;
	static int16_t x26 = INT16_MIN;
	static uint8_t x27 = UINT8_MAX;
	static uint8_t x28 = UINT8_MAX;
	int32_t t3 = 1514010;

	t3 = (x25%((x26<x27)<=x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = UINT16_MAX;
	static int8_t x30 = -1;
	uint64_t x31 = 1LLU;
	volatile uint32_t x32 = 1601U;
	volatile int32_t t4 = 2130117;

	t4 = (x29%((x30<x31)<=x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x34 = UINT64_MAX;
	volatile int8_t x35 = INT8_MIN;
	volatile int64_t t5 = -143LL;

	t5 = (x33%((x34<x35)<=x36));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x38 = 115U;
	static int32_t x39 = 15591;
	int16_t x40 = INT16_MAX;
	static uint64_t t6 = 102347321418150LLU;

	t6 = (x37%((x38<x39)<=x40));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 237675619U;
	static uint32_t x42 = 95264U;
	int16_t x44 = INT16_MAX;

	t7 = (x41%((x42<x43)<=x44));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 57354U;
	int64_t x46 = 499LL;
	static uint32_t x47 = UINT32_MAX;
	static int32_t x48 = 568;
	uint32_t t8 = 2U;

	t8 = (x45%((x46<x47)<=x48));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x57 = 0;
	static int16_t x58 = -1;
	int32_t x60 = INT32_MAX;
	volatile int32_t t9 = -52151263;

	t9 = (x57%((x58<x59)<=x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x81 = 24U;
	int16_t x82 = INT16_MIN;
	uint8_t x83 = 3U;
	uint32_t x84 = 1280U;
	static int32_t t10 = 21;

	t10 = (x81%((x82<x83)<=x84));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x85 = 9U;
	int32_t x86 = INT32_MIN;
	uint16_t x87 = 60U;
	int64_t x88 = INT64_MAX;
	volatile uint32_t t11 = 3700U;

	t11 = (x85%((x86<x87)<=x88));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x89 = -1;
	volatile int8_t x90 = 0;
	int32_t x91 = INT32_MIN;

	t12 = (x89%((x90<x91)<=x92));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;

	t13 = (x93%((x94<x95)<=x96));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x97 = 4817U;
	int8_t x98 = INT8_MAX;
	static int16_t x99 = -6982;
	uint64_t x100 = UINT64_MAX;

	t14 = (x97%((x98<x99)<=x100));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x101 = INT32_MAX;
	int8_t x102 = -5;
	volatile uint32_t x103 = UINT32_MAX;
	static int64_t x104 = 87203518121039297LL;
	int32_t t15 = -59387085;

	t15 = (x101%((x102<x103)<=x104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x105 = 377U;
	volatile int8_t x107 = -9;
	volatile int32_t x108 = 1;
	volatile uint32_t t16 = 245125370U;

	t16 = (x105%((x106<x107)<=x108));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x113 = 9U;
	volatile int8_t x115 = -22;
	volatile int32_t t17 = -24006;

	t17 = (x113%((x114<x115)<=x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x117 = -1LL;
	uint16_t x118 = UINT16_MAX;
	int64_t x119 = -1LL;
	uint16_t x120 = 11U;

	t18 = (x117%((x118<x119)<=x120));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x129 = 0U;
	int32_t x130 = 28728;
	int64_t x131 = -30271LL;
	int32_t t19 = -63;

	t19 = (x129%((x130<x131)<=x132));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x134 = 5832U;
	static uint32_t x136 = 1922438467U;
	volatile uint64_t t20 = 40386320120897LLU;

	t20 = (x133%((x134<x135)<=x136));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x145 = 15;
	uint64_t x146 = 69234LLU;
	static uint8_t x147 = UINT8_MAX;
	int32_t x148 = INT32_MAX;
	int32_t t21 = 2763;

	t21 = (x145%((x146<x147)<=x148));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x149 = INT32_MAX;
	volatile uint16_t x150 = UINT16_MAX;
	int8_t x151 = INT8_MIN;
	uint64_t x152 = 34094038475LLU;
	volatile int32_t t22 = 5889;

	t22 = (x149%((x150<x151)<=x152));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x157 = -58;
	int8_t x158 = INT8_MIN;
	volatile int32_t x159 = INT32_MIN;
	uint16_t x160 = 63U;
	static volatile int32_t t23 = -133424122;

	t23 = (x157%((x158<x159)<=x160));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = INT64_MIN;
	int64_t x168 = 245056LL;
	volatile int32_t t24 = -36130;

	t24 = (x165%((x166<x167)<=x168));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x170 = INT64_MIN;
	static uint32_t x171 = UINT32_MAX;
	volatile int64_t t25 = 11830435LL;

	t25 = (x169%((x170<x171)<=x172));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x173 = 0U;
	static int64_t x174 = -1LL;
	int32_t x175 = -1;
	int8_t x176 = 3;
	int32_t t26 = -6794;

	t26 = (x173%((x174<x175)<=x176));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x181 = -1LL;
	int64_t x183 = INT64_MIN;
	int8_t x184 = 31;
	int64_t t27 = 3261346369LL;

	t27 = (x181%((x182<x183)<=x184));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x206 = 7704276099512LLU;
	int32_t x207 = INT32_MIN;

	t28 = (x205%((x206<x207)<=x208));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x209 = 63U;
	uint16_t x210 = 427U;
	volatile int64_t x211 = INT64_MIN;
	volatile uint8_t x212 = UINT8_MAX;
	static int32_t t29 = -15;

	t29 = (x209%((x210<x211)<=x212));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x215 = -4066596;
	int16_t x216 = INT16_MAX;

	t30 = (x213%((x214<x215)<=x216));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x218 = INT8_MIN;
	static uint64_t x220 = UINT64_MAX;
	static volatile uint32_t t31 = 734400706U;

	t31 = (x217%((x218<x219)<=x220));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x225 = 0;
	static int8_t x226 = INT8_MIN;
	volatile uint16_t x227 = UINT16_MAX;
	int32_t x228 = 1567;
	int32_t t32 = 272818;

	t32 = (x225%((x226<x227)<=x228));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x231 = INT8_MAX;
	static volatile int32_t t33 = -6;

	t33 = (x229%((x230<x231)<=x232));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;

	t34 = (x249%((x250<x251)<=x252));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x253 = 15730599U;
	uint8_t x254 = 2U;
	int16_t x255 = -3173;
	volatile uint32_t t35 = 212615867U;

	t35 = (x253%((x254<x255)<=x256));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x275 = INT64_MAX;
	int32_t t36 = -11;

	t36 = (x273%((x274<x275)<=x276));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x277 = 798168660LLU;
	volatile int8_t x278 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;

	t37 = (x277%((x278<x279)<=x280));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x281 = -1;
	static int64_t x282 = INT64_MAX;
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MAX;

	t38 = (x281%((x282<x283)<=x284));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	uint16_t x288 = 1U;
	int64_t t39 = -5769364409874LL;

	t39 = (x285%((x286<x287)<=x288));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x289 = INT8_MIN;
	uint64_t x290 = UINT64_MAX;
	int64_t x292 = 81892490LL;
	static volatile int32_t t40 = -64799096;

	t40 = (x289%((x290<x291)<=x292));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x293 = INT16_MIN;
	volatile int64_t x294 = -1LL;
	int8_t x295 = INT8_MAX;
	volatile uint64_t x296 = 11765428828LLU;
	volatile int32_t t41 = 2129;

	t41 = (x293%((x294<x295)<=x296));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x301 = -3986097829214LL;
	uint32_t x302 = 2U;
	uint32_t x303 = 3966U;
	uint32_t x304 = 947U;
	int64_t t42 = -850530637970602LL;

	t42 = (x301%((x302<x303)<=x304));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x309 = -1;
	uint64_t x310 = 595LLU;
	int64_t x311 = INT64_MIN;
	int32_t t43 = -68733788;

	t43 = (x309%((x310<x311)<=x312));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x318 = INT8_MIN;
	int8_t x319 = -6;
	int64_t x320 = INT64_MAX;

	t44 = (x317%((x318<x319)<=x320));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x321 = INT16_MAX;
	int64_t x322 = -1LL;
	int32_t x324 = 30679734;
	static int32_t t45 = -205040417;

	t45 = (x321%((x322<x323)<=x324));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x329 = 460U;
	int8_t x330 = -1;
	int16_t x331 = INT16_MIN;
	volatile uint16_t x332 = 16331U;
	int32_t t46 = -3907;

	t46 = (x329%((x330<x331)<=x332));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x333 = 1U;
	static int8_t x334 = INT8_MIN;
	volatile uint8_t x335 = 18U;
	volatile int16_t x336 = 289;

	t47 = (x333%((x334<x335)<=x336));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x341 = UINT8_MAX;
	uint64_t x343 = 166LLU;
	int32_t t48 = 5;

	t48 = (x341%((x342<x343)<=x344));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x361 = 63272574575332LLU;
	int32_t x362 = INT32_MAX;
	uint8_t x364 = 0U;
	volatile uint64_t t49 = 495543142947974LLU;

	t49 = (x361%((x362<x363)<=x364));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x365 = INT64_MAX;
	static int8_t x366 = INT8_MIN;
	volatile int32_t x367 = -1;
	int64_t t50 = 58282866LL;

	t50 = (x365%((x366<x367)<=x368));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x369 = -1;
	int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MIN;
	uint16_t x372 = 0U;

	t51 = (x369%((x370<x371)<=x372));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x394 = 99U;
	volatile uint16_t x395 = 0U;
	int32_t t52 = 23710459;

	t52 = (x393%((x394<x395)<=x396));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x413 = INT32_MIN;
	static uint8_t x415 = 21U;
	volatile int32_t t53 = 15723;

	t53 = (x413%((x414<x415)<=x416));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x417 = UINT16_MAX;
	static int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MIN;
	static volatile uint32_t x420 = 54686663U;
	volatile int32_t t54 = -16584832;

	t54 = (x417%((x418<x419)<=x420));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x421 = 26U;
	int64_t x422 = INT64_MAX;
	int8_t x424 = 4;
	int32_t t55 = -23;

	t55 = (x421%((x422<x423)<=x424));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x425 = 0;
	int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MAX;
	int32_t t56 = 0;

	t56 = (x425%((x426<x427)<=x428));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x433 = 5346864170LL;
	int8_t x434 = -12;
	volatile int8_t x436 = 5;

	t57 = (x433%((x434<x435)<=x436));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x437 = INT8_MIN;
	int32_t x438 = INT32_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t58 = -935913540;

	t58 = (x437%((x438<x439)<=x440));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x443 = 115565;
	uint16_t x444 = 5U;
	int32_t t59 = -19235;

	t59 = (x441%((x442<x443)<=x444));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x445 = 301946717;
	static int64_t x446 = INT64_MAX;
	int8_t x447 = INT8_MIN;

	t60 = (x445%((x446<x447)<=x448));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x453 = INT64_MIN;
	volatile uint64_t x454 = 1763940721737713347LLU;
	uint16_t x455 = UINT16_MAX;
	int8_t x456 = INT8_MAX;

	t61 = (x453%((x454<x455)<=x456));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x457 = -7;
	static int8_t x458 = 3;
	int16_t x459 = -6740;
	int64_t x460 = INT64_MAX;
	int32_t t62 = -7588678;

	t62 = (x457%((x458<x459)<=x460));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x477 = -1LL;
	int32_t x478 = INT32_MIN;
	uint8_t x479 = UINT8_MAX;
	volatile int64_t t63 = 1807983769652813LL;

	t63 = (x477%((x478<x479)<=x480));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x481 = 4108560107637918LLU;
	int16_t x482 = -138;
	static int8_t x483 = 1;
	int8_t x484 = 15;
	static volatile uint64_t t64 = 15479032361798LLU;

	t64 = (x481%((x482<x483)<=x484));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x486 = INT8_MIN;
	int8_t x487 = INT8_MIN;
	int16_t x488 = 176;
	volatile uint64_t t65 = 31651328902LLU;

	t65 = (x485%((x486<x487)<=x488));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x497 = 1U;
	uint8_t x498 = UINT8_MAX;
	volatile int64_t x499 = 1549029817837LL;
	uint8_t x500 = UINT8_MAX;
	uint32_t t66 = 430547754U;

	t66 = (x497%((x498<x499)<=x500));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x513 = 1U;
	int32_t x514 = INT32_MIN;
	volatile int8_t x515 = INT8_MIN;
	int64_t x516 = INT64_MAX;
	int32_t t67 = 253;

	t67 = (x513%((x514<x515)<=x516));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x517 = 0;
	uint8_t x518 = 58U;
	static uint64_t x520 = 204385583LLU;
	volatile int32_t t68 = 16114;

	t68 = (x517%((x518<x519)<=x520));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x537 = INT32_MIN;
	static volatile uint32_t x538 = UINT32_MAX;
	uint8_t x539 = 14U;
	static uint16_t x540 = 11462U;
	int32_t t69 = 96969782;

	t69 = (x537%((x538<x539)<=x540));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x542 = INT64_MIN;
	int16_t x543 = INT16_MIN;
	static int32_t x544 = 15;

	t70 = (x541%((x542<x543)<=x544));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x545 = UINT64_MAX;
	volatile int32_t x546 = INT32_MIN;
	static uint64_t x547 = 41137LLU;
	volatile uint16_t x548 = UINT16_MAX;
	volatile uint64_t t71 = 10035232LLU;

	t71 = (x545%((x546<x547)<=x548));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x549 = -16;
	int8_t x550 = 17;
	static int32_t x551 = INT32_MIN;
	static int32_t t72 = 13876;

	t72 = (x549%((x550<x551)<=x552));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x553 = INT16_MIN;
	static int64_t x554 = INT64_MIN;
	static int16_t x555 = INT16_MAX;
	static int16_t x556 = INT16_MAX;

	t73 = (x553%((x554<x555)<=x556));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x559 = -1LL;
	uint16_t x560 = 2U;
	int32_t t74 = -22599501;

	t74 = (x557%((x558<x559)<=x560));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x565 = -1;
	uint8_t x566 = UINT8_MAX;
	uint16_t x567 = 4998U;
	uint32_t x568 = 1974208905U;

	t75 = (x565%((x566<x567)<=x568));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x569 = -1;
	int32_t x570 = 0;
	static uint64_t x571 = UINT64_MAX;
	volatile int64_t x572 = 25134037LL;
	static int32_t t76 = 33977545;

	t76 = (x569%((x570<x571)<=x572));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x573 = INT32_MIN;
	int32_t x574 = INT32_MIN;
	volatile int8_t x575 = INT8_MIN;

	t77 = (x573%((x574<x575)<=x576));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x577 = INT8_MIN;
	int64_t x579 = INT64_MIN;
	static uint8_t x580 = UINT8_MAX;
	volatile int32_t t78 = 699496;

	t78 = (x577%((x578<x579)<=x580));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x593 = INT32_MIN;
	int64_t x594 = INT64_MIN;
	int32_t x595 = 48;

	t79 = (x593%((x594<x595)<=x596));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x597 = -385;
	uint16_t x599 = UINT16_MAX;
	static uint32_t x600 = 842104357U;
	volatile int32_t t80 = 25326863;

	t80 = (x597%((x598<x599)<=x600));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x609 = UINT8_MAX;
	static uint64_t x610 = 75680156210735671LLU;
	int64_t x611 = INT64_MAX;
	volatile int8_t x612 = INT8_MAX;
	int32_t t81 = 70;

	t81 = (x609%((x610<x611)<=x612));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x613 = INT8_MIN;
	int32_t x614 = INT32_MAX;
	int8_t x615 = INT8_MIN;

	t82 = (x613%((x614<x615)<=x616));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x625 = -1;
	int16_t x626 = INT16_MIN;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t83 = 1213476;

	t83 = (x625%((x626<x627)<=x628));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x629 = INT64_MIN;
	int8_t x631 = INT8_MAX;
	static uint8_t x632 = UINT8_MAX;
	volatile int64_t t84 = 1289861LL;

	t84 = (x629%((x630<x631)<=x632));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x633 = -1;
	int32_t t85 = 1;

	t85 = (x633%((x634<x635)<=x636));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x637 = INT64_MAX;
	static uint16_t x638 = UINT16_MAX;
	uint8_t x639 = 1U;
	uint8_t x640 = 3U;
	static int64_t t86 = -1614204705915LL;

	t86 = (x637%((x638<x639)<=x640));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x641 = INT16_MAX;
	uint32_t x643 = 0U;
	static volatile uint32_t x644 = UINT32_MAX;

	t87 = (x641%((x642<x643)<=x644));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x646 = 0;

	t88 = (x645%((x646<x647)<=x648));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x653 = 31584U;
	int8_t x654 = INT8_MIN;

	t89 = (x653%((x654<x655)<=x656));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x657 = 0U;
	static int64_t x658 = INT64_MIN;
	int16_t x659 = INT16_MIN;
	volatile int16_t x660 = 9153;
	volatile int32_t t90 = -19;

	t90 = (x657%((x658<x659)<=x660));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x661 = INT8_MAX;
	int64_t x662 = INT64_MIN;
	static uint16_t x663 = 31U;
	static uint8_t x664 = 3U;

	t91 = (x661%((x662<x663)<=x664));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x665 = INT32_MIN;
	uint16_t x666 = UINT16_MAX;
	volatile int16_t x667 = INT16_MIN;
	int8_t x668 = INT8_MAX;
	int32_t t92 = -18;

	t92 = (x665%((x666<x667)<=x668));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x673 = INT8_MIN;
	int8_t x675 = INT8_MIN;
	int32_t t93 = 23082;

	t93 = (x673%((x674<x675)<=x676));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x678 = INT8_MIN;
	static uint16_t x680 = UINT16_MAX;
	int32_t t94 = -27092815;

	t94 = (x677%((x678<x679)<=x680));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x685 = INT8_MAX;
	static int32_t x686 = -1;
	uint8_t x687 = UINT8_MAX;
	volatile int32_t t95 = 0;

	t95 = (x685%((x686<x687)<=x688));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x689 = 2960U;
	int8_t x690 = INT8_MAX;
	int8_t x691 = -13;
	volatile int32_t t96 = -14331;

	t96 = (x689%((x690<x691)<=x692));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x694 = INT64_MIN;
	int64_t x695 = INT64_MIN;
	static uint16_t x696 = 0U;
	volatile int32_t t97 = -756;

	t97 = (x693%((x694<x695)<=x696));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x705 = INT32_MIN;
	int32_t x706 = INT32_MIN;
	uint8_t x707 = 22U;
	volatile uint8_t x708 = UINT8_MAX;
	volatile int32_t t98 = -45665479;

	t98 = (x705%((x706<x707)<=x708));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x722 = INT16_MIN;
	int64_t x723 = -16898206LL;
	int16_t x724 = INT16_MAX;
	uint32_t t99 = 19036U;

	t99 = (x721%((x722<x723)<=x724));

	if (t99 != 0U) { NG(); } else { ; }
	
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

