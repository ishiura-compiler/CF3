#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 852375U;
static uint32_t x10 = 1275U;
volatile int8_t x11 = -1;
int32_t t2 = 3321592;
int32_t x17 = 118431;
int16_t x19 = INT16_MAX;
uint64_t x20 = UINT64_MAX;
uint8_t x27 = UINT8_MAX;
volatile int32_t t4 = 35;
uint32_t x45 = 1878U;
volatile int32_t t5 = -1425;
static int32_t x63 = INT32_MAX;
static uint32_t x64 = 25342U;
uint16_t x67 = 7U;
static int64_t x74 = INT64_MAX;
int32_t t10 = 6;
static int64_t x77 = 728762LL;
static uint32_t x94 = UINT32_MAX;
int8_t x95 = 1;
volatile int64_t x100 = -1LL;
int16_t x109 = 3;
static int32_t x123 = INT32_MIN;
static volatile int32_t t16 = 670807;
int16_t x143 = INT16_MIN;
uint32_t x157 = 54U;
static volatile int64_t x159 = -6483721347LL;
uint8_t x160 = 2U;
int8_t x165 = 3;
int32_t x166 = -1;
static int16_t x196 = INT16_MAX;
int8_t x208 = -11;
int64_t x211 = -965977177154587899LL;
uint32_t x220 = 1953U;
uint32_t x229 = 17U;
int16_t x230 = INT16_MIN;
static volatile int32_t t29 = -436644876;
static int64_t x235 = -1LL;
static int64_t x283 = INT64_MIN;
int16_t x315 = INT16_MAX;
static uint8_t x317 = UINT8_MAX;
int32_t t37 = 432155791;
static volatile int64_t x325 = 28LL;
uint8_t x335 = 62U;
int32_t x339 = -164;
int32_t t40 = 0;
static uint64_t x342 = 510546946LLU;
int16_t x343 = INT16_MIN;
int8_t x388 = INT8_MIN;
static volatile uint16_t x389 = 0U;
static int64_t x395 = -1LL;
int16_t x396 = INT16_MIN;
static int64_t x408 = -1LL;
int8_t x409 = 3;
int16_t x410 = INT16_MIN;
int16_t x411 = INT16_MIN;
int32_t t51 = 1889;
uint8_t x418 = UINT8_MAX;
static uint32_t x420 = UINT32_MAX;
int64_t x422 = 56531876696384LL;
volatile int16_t x423 = INT16_MIN;
uint64_t x425 = UINT64_MAX;
int16_t x428 = 0;
volatile int32_t t55 = 1;
int16_t x438 = INT16_MAX;
int32_t x450 = -1;
int32_t t58 = -6;
static volatile uint16_t x462 = 4628U;
uint32_t x465 = UINT32_MAX;
static int32_t x468 = 232417;
int32_t x469 = INT32_MAX;
int8_t x482 = -17;
volatile int32_t t63 = 204859975;
static int32_t t64 = 194;
uint16_t x515 = UINT16_MAX;
uint16_t x523 = 6658U;
volatile int8_t x524 = INT8_MIN;
uint8_t x540 = 119U;
int16_t x551 = 0;
int8_t x552 = -1;
volatile int16_t x555 = INT16_MIN;
int16_t x563 = INT16_MIN;
uint64_t x581 = 433LLU;
int16_t x582 = INT16_MIN;
int32_t x586 = INT32_MAX;
uint8_t x596 = 13U;
volatile int16_t x604 = INT16_MIN;
volatile uint64_t x617 = 191819818LLU;
int32_t x620 = INT32_MIN;
uint64_t x625 = UINT64_MAX;
int32_t x627 = -34833727;
int16_t x635 = INT16_MIN;
int32_t t88 = 681592;
uint8_t x646 = 45U;
static int16_t x647 = INT16_MIN;
int32_t t89 = -15210317;
int32_t x659 = -1;
int16_t x668 = INT16_MAX;
volatile int32_t t91 = -3980;
uint32_t x670 = 6190228U;
static volatile int64_t x671 = -15LL;
uint8_t x677 = UINT8_MAX;
volatile int32_t t94 = 6123;
static volatile int32_t t95 = -1;
static uint32_t x701 = UINT32_MAX;
uint64_t x703 = UINT64_MAX;
uint8_t x705 = 0U;
uint16_t x713 = 25550U;
static int64_t x714 = 0LL;
int64_t x715 = -1LL;
int8_t x722 = 30;
int32_t x724 = -3;


void f0(void) {
	int8_t x5 = INT8_MAX;
	int64_t x6 = INT64_MAX;
	volatile int8_t x7 = -1;
	uint64_t x8 = UINT64_MAX;
	int32_t t0 = -280844;

	t0 = ((x5<<(x6<x7))==x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x12 = 695U;
	volatile int32_t t1 = 874516;

	t1 = ((x9<<(x10<x11))==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 6;
	int64_t x14 = -1LL;
	int8_t x15 = INT8_MIN;
	int8_t x16 = 2;

	t2 = ((x13<<(x14<x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = UINT16_MAX;
	volatile int32_t t3 = 3174481;

	t3 = ((x17<<(x18<x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 4070826662966769982LLU;
	static uint16_t x26 = 2U;
	static int32_t x28 = INT32_MIN;

	t4 = ((x25<<(x26<x27))==x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x46 = -1;
	uint8_t x47 = UINT8_MAX;
	uint8_t x48 = 125U;

	t5 = ((x45<<(x46<x47))==x48);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x49 = 423;
	int8_t x50 = INT8_MIN;
	static volatile int32_t x51 = INT32_MAX;
	int8_t x52 = -1;
	int32_t t6 = -123;

	t6 = ((x49<<(x50<x51))==x52);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x53 = UINT32_MAX;
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MIN;
	volatile int8_t x56 = INT8_MAX;
	volatile int32_t t7 = 5398;

	t7 = ((x53<<(x54<x55))==x56);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x61 = UINT16_MAX;
	static int32_t x62 = 1009440906;
	volatile int32_t t8 = -4931;

	t8 = ((x61<<(x62<x63))==x64);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x65 = 43;
	uint8_t x66 = 7U;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t9 = 13367196;

	t9 = ((x65<<(x66<x67))==x68);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x73 = INT64_MAX;
	uint32_t x75 = 13619603U;
	uint64_t x76 = 7825257118LLU;

	t10 = ((x73<<(x74<x75))==x76);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x78 = -1;
	int16_t x79 = 1049;
	int16_t x80 = -3;
	int32_t t11 = -6;

	t11 = ((x77<<(x78<x79))==x80);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x93 = UINT32_MAX;
	static uint64_t x96 = 10LLU;
	static volatile int32_t t12 = 1;

	t12 = ((x93<<(x94<x95))==x96);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x97 = 35U;
	int64_t x98 = -21573929LL;
	volatile int8_t x99 = -1;
	volatile int32_t t13 = 0;

	t13 = ((x97<<(x98<x99))==x100);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x110 = INT8_MAX;
	int8_t x111 = -1;
	int64_t x112 = INT64_MIN;
	int32_t t14 = -66801;

	t14 = ((x109<<(x110<x111))==x112);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x121 = INT64_MAX;
	volatile int32_t x122 = INT32_MIN;
	int32_t x124 = -5434956;
	volatile int32_t t15 = -855;

	t15 = ((x121<<(x122<x123))==x124);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x133 = 1020686;
	static int8_t x134 = INT8_MIN;
	int8_t x135 = -1;
	int32_t x136 = INT32_MIN;

	t16 = ((x133<<(x134<x135))==x136);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x141 = UINT64_MAX;
	static uint8_t x142 = 37U;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t17 = 17676;

	t17 = ((x141<<(x142<x143))==x144);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x145 = UINT32_MAX;
	uint8_t x146 = 13U;
	uint16_t x147 = 12388U;
	static int16_t x148 = INT16_MIN;
	int32_t t18 = -85;

	t18 = ((x145<<(x146<x147))==x148);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x158 = INT8_MIN;
	int32_t t19 = 27050;

	t19 = ((x157<<(x158<x159))==x160);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x167 = INT16_MAX;
	volatile int16_t x168 = 152;
	volatile int32_t t20 = -7817;

	t20 = ((x165<<(x166<x167))==x168);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x169 = 59026768;
	int64_t x170 = -1LL;
	volatile uint64_t x171 = 805500733848193LLU;
	uint64_t x172 = UINT64_MAX;
	int32_t t21 = -4828475;

	t21 = ((x169<<(x170<x171))==x172);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x173 = 591;
	volatile int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	volatile int32_t t22 = 5;

	t22 = ((x173<<(x174<x175))==x176);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x185 = 1;
	volatile uint8_t x186 = 1U;
	int64_t x187 = INT64_MAX;
	volatile uint64_t x188 = 502532686784598LLU;
	int32_t t23 = -474;

	t23 = ((x185<<(x186<x187))==x188);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x193 = 370195U;
	volatile int64_t x194 = INT64_MAX;
	uint32_t x195 = UINT32_MAX;
	volatile int32_t t24 = -64572965;

	t24 = ((x193<<(x194<x195))==x196);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x205 = UINT16_MAX;
	uint16_t x206 = 39U;
	int32_t x207 = INT32_MIN;
	int32_t t25 = 29729149;

	t25 = ((x205<<(x206<x207))==x208);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x209 = UINT64_MAX;
	uint32_t x210 = 3371974U;
	volatile int8_t x212 = -1;
	volatile int32_t t26 = -158471;

	t26 = ((x209<<(x210<x211))==x212);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x217 = 0U;
	static uint64_t x218 = UINT64_MAX;
	volatile uint16_t x219 = 19342U;
	volatile int32_t t27 = -3772;

	t27 = ((x217<<(x218<x219))==x220);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x225 = 184179274U;
	int64_t x226 = -1LL;
	uint64_t x227 = 10343374506LLU;
	int64_t x228 = -1LL;
	int32_t t28 = 116711;

	t28 = ((x225<<(x226<x227))==x228);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x231 = 1;
	volatile uint64_t x232 = 8729310405138067LLU;

	t29 = ((x229<<(x230<x231))==x232);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x233 = 1;
	uint64_t x234 = UINT64_MAX;
	volatile int64_t x236 = INT64_MIN;
	int32_t t30 = -220780;

	t30 = ((x233<<(x234<x235))==x236);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x249 = 38;
	int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MAX;
	volatile int32_t x252 = -1;
	volatile int32_t t31 = 24448427;

	t31 = ((x249<<(x250<x251))==x252);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x273 = INT16_MAX;
	int64_t x274 = INT64_MIN;
	int32_t x275 = -1035;
	int64_t x276 = INT64_MIN;
	static int32_t t32 = 15;

	t32 = ((x273<<(x274<x275))==x276);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = INT32_MIN;
	int16_t x279 = -3598;
	int32_t x280 = INT32_MIN;
	volatile int32_t t33 = 0;

	t33 = ((x277<<(x278<x279))==x280);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = INT64_MIN;
	int32_t x284 = INT32_MIN;
	volatile int32_t t34 = 202797624;

	t34 = ((x281<<(x282<x283))==x284);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = INT64_MIN;
	static volatile int8_t x295 = INT8_MIN;
	int64_t x296 = -1LL;
	int32_t t35 = 41;

	t35 = ((x293<<(x294<x295))==x296);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x313 = 3U;
	static volatile uint64_t x314 = UINT64_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t36 = -5878;

	t36 = ((x313<<(x314<x315))==x316);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x318 = 84;
	uint32_t x319 = UINT32_MAX;
	static int16_t x320 = -4;

	t37 = ((x317<<(x318<x319))==x320);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x326 = UINT64_MAX;
	volatile int32_t x327 = -1;
	static int16_t x328 = INT16_MAX;
	volatile int32_t t38 = 1213;

	t38 = ((x325<<(x326<x327))==x328);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x333 = UINT8_MAX;
	static uint32_t x334 = 25137978U;
	int16_t x336 = INT16_MIN;
	volatile int32_t t39 = -2737134;

	t39 = ((x333<<(x334<x335))==x336);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x337 = 59;
	uint8_t x338 = UINT8_MAX;
	int64_t x340 = INT64_MAX;

	t40 = ((x337<<(x338<x339))==x340);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x341 = 1;
	volatile int32_t x344 = INT32_MIN;
	int32_t t41 = -130;

	t41 = ((x341<<(x342<x343))==x344);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x369 = 3U;
	int8_t x370 = 0;
	int8_t x371 = INT8_MIN;
	int8_t x372 = -1;
	int32_t t42 = -61;

	t42 = ((x369<<(x370<x371))==x372);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x373 = UINT8_MAX;
	static uint8_t x374 = 0U;
	int32_t x375 = -1;
	int64_t x376 = INT64_MIN;
	int32_t t43 = -4141254;

	t43 = ((x373<<(x374<x375))==x376);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x381 = 92U;
	static int8_t x382 = INT8_MIN;
	int16_t x383 = -60;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t44 = 7347185;

	t44 = ((x381<<(x382<x383))==x384);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	static uint64_t x387 = 22LLU;
	int32_t t45 = 409730;

	t45 = ((x385<<(x386<x387))==x388);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x390 = 5U;
	static int8_t x391 = INT8_MIN;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t46 = -123180;

	t46 = ((x389<<(x390<x391))==x392);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x393 = 5LLU;
	volatile int8_t x394 = INT8_MIN;
	int32_t t47 = 188227;

	t47 = ((x393<<(x394<x395))==x396);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x397 = 0;
	uint32_t x398 = 543172405U;
	volatile uint8_t x399 = 2U;
	volatile int64_t x400 = -1LL;
	static int32_t t48 = 133838889;

	t48 = ((x397<<(x398<x399))==x400);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x405 = 52095943238238392LL;
	int32_t x406 = 1;
	volatile int32_t x407 = -1;
	int32_t t49 = -298;

	t49 = ((x405<<(x406<x407))==x408);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x412 = INT8_MIN;
	volatile int32_t t50 = 114164646;

	t50 = ((x409<<(x410<x411))==x412);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x413 = UINT8_MAX;
	uint32_t x414 = UINT32_MAX;
	uint8_t x415 = UINT8_MAX;
	uint32_t x416 = 94U;

	t51 = ((x413<<(x414<x415))==x416);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x417 = 1648;
	int8_t x419 = 1;
	volatile int32_t t52 = -199649335;

	t52 = ((x417<<(x418<x419))==x420);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t53 = 33;

	t53 = ((x421<<(x422<x423))==x424);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x426 = INT8_MIN;
	int16_t x427 = -5;
	static int32_t t54 = -3436;

	t54 = ((x425<<(x426<x427))==x428);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x433 = 2U;
	uint32_t x434 = 141U;
	volatile int8_t x435 = INT8_MIN;
	uint32_t x436 = UINT32_MAX;

	t55 = ((x433<<(x434<x435))==x436);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x437 = 45175U;
	static uint16_t x439 = 0U;
	static int64_t x440 = -126LL;
	static volatile int32_t t56 = -1;

	t56 = ((x437<<(x438<x439))==x440);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x441 = 71U;
	static int16_t x442 = INT16_MIN;
	int16_t x443 = 1;
	int32_t x444 = INT32_MIN;
	int32_t t57 = 393141;

	t57 = ((x441<<(x442<x443))==x444);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x449 = 2556875090654153LLU;
	uint16_t x451 = UINT16_MAX;
	int32_t x452 = -3;

	t58 = ((x449<<(x450<x451))==x452);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x461 = 960833651179567LLU;
	volatile int32_t x463 = 202717827;
	int16_t x464 = 286;
	volatile int32_t t59 = -13291148;

	t59 = ((x461<<(x462<x463))==x464);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x466 = -1LL;
	static volatile uint8_t x467 = 0U;
	static int32_t t60 = 223;

	t60 = ((x465<<(x466<x467))==x468);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x470 = UINT32_MAX;
	static int16_t x471 = INT16_MIN;
	int32_t x472 = -1;
	volatile int32_t t61 = 99354;

	t61 = ((x469<<(x470<x471))==x472);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x481 = 1678888517334037LLU;
	int32_t x483 = INT32_MIN;
	int8_t x484 = -6;
	static int32_t t62 = 1;

	t62 = ((x481<<(x482<x483))==x484);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x485 = 1U;
	volatile int8_t x486 = -43;
	volatile int32_t x487 = 614019;
	volatile int32_t x488 = INT32_MIN;

	t63 = ((x485<<(x486<x487))==x488);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x493 = 42U;
	int32_t x494 = -1;
	uint16_t x495 = UINT16_MAX;
	int8_t x496 = -2;

	t64 = ((x493<<(x494<x495))==x496);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x505 = INT16_MAX;
	volatile int16_t x506 = -2;
	int8_t x507 = INT8_MIN;
	int32_t x508 = -23064;
	volatile int32_t t65 = 1350;

	t65 = ((x505<<(x506<x507))==x508);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x513 = INT8_MAX;
	static volatile uint8_t x514 = UINT8_MAX;
	static int32_t x516 = 46;
	volatile int32_t t66 = 1037019;

	t66 = ((x513<<(x514<x515))==x516);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x517 = 1674U;
	uint8_t x518 = 1U;
	int8_t x519 = 1;
	static volatile int32_t x520 = INT32_MAX;
	int32_t t67 = 29496242;

	t67 = ((x517<<(x518<x519))==x520);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x521 = 2U;
	static volatile int16_t x522 = INT16_MAX;
	int32_t t68 = 3;

	t68 = ((x521<<(x522<x523))==x524);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x529 = 5;
	static volatile int64_t x530 = INT64_MIN;
	volatile int16_t x531 = INT16_MIN;
	int16_t x532 = INT16_MAX;
	int32_t t69 = 984943;

	t69 = ((x529<<(x530<x531))==x532);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x533 = INT8_MAX;
	int64_t x534 = -1LL;
	int64_t x535 = 1947953814063971176LL;
	static int32_t x536 = INT32_MAX;
	volatile int32_t t70 = 19348065;

	t70 = ((x533<<(x534<x535))==x536);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x537 = UINT8_MAX;
	int16_t x538 = -1;
	uint64_t x539 = 7906126360511896037LLU;
	static int32_t t71 = 0;

	t71 = ((x537<<(x538<x539))==x540);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x541 = INT64_MAX;
	static int32_t x542 = 151001881;
	uint32_t x543 = 424306U;
	static int64_t x544 = 16108LL;
	int32_t t72 = -590;

	t72 = ((x541<<(x542<x543))==x544);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x545 = 20835996329889582LLU;
	static uint64_t x546 = 55LLU;
	static int64_t x547 = INT64_MIN;
	int16_t x548 = INT16_MAX;
	int32_t t73 = -55;

	t73 = ((x545<<(x546<x547))==x548);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x549 = INT8_MAX;
	int8_t x550 = INT8_MIN;
	volatile int32_t t74 = -12;

	t74 = ((x549<<(x550<x551))==x552);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x553 = INT64_MAX;
	uint32_t x554 = UINT32_MAX;
	volatile uint64_t x556 = 6LLU;
	static volatile int32_t t75 = -955;

	t75 = ((x553<<(x554<x555))==x556);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x561 = UINT64_MAX;
	volatile int8_t x562 = -1;
	int8_t x564 = INT8_MIN;
	int32_t t76 = -397564943;

	t76 = ((x561<<(x562<x563))==x564);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x565 = INT16_MAX;
	uint16_t x566 = 36U;
	int8_t x567 = -1;
	int8_t x568 = INT8_MIN;
	volatile int32_t t77 = -1;

	t77 = ((x565<<(x566<x567))==x568);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x583 = INT8_MIN;
	uint8_t x584 = 1U;
	volatile int32_t t78 = 18;

	t78 = ((x581<<(x582<x583))==x584);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x585 = UINT16_MAX;
	int16_t x587 = -1;
	static int32_t x588 = 5177;
	volatile int32_t t79 = 238563051;

	t79 = ((x585<<(x586<x587))==x588);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x593 = INT8_MAX;
	int64_t x594 = -1LL;
	static int8_t x595 = 0;
	static int32_t t80 = 30137191;

	t80 = ((x593<<(x594<x595))==x596);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x601 = INT32_MAX;
	uint8_t x602 = 21U;
	volatile uint8_t x603 = 0U;
	static volatile int32_t t81 = -5;

	t81 = ((x601<<(x602<x603))==x604);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x605 = UINT64_MAX;
	uint32_t x606 = UINT32_MAX;
	static int16_t x607 = 49;
	uint16_t x608 = UINT16_MAX;
	static volatile int32_t t82 = 9330;

	t82 = ((x605<<(x606<x607))==x608);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x609 = 5238501U;
	static int8_t x610 = INT8_MIN;
	uint64_t x611 = 7620470310017129845LLU;
	static int64_t x612 = -1386856LL;
	static volatile int32_t t83 = -15675102;

	t83 = ((x609<<(x610<x611))==x612);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x613 = 2U;
	int8_t x614 = -1;
	int32_t x615 = 577920;
	int16_t x616 = INT16_MAX;
	volatile int32_t t84 = -1;

	t84 = ((x613<<(x614<x615))==x616);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x618 = -1;
	int64_t x619 = INT64_MIN;
	volatile int32_t t85 = 601357;

	t85 = ((x617<<(x618<x619))==x620);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x626 = INT32_MAX;
	static volatile int8_t x628 = INT8_MIN;
	volatile int32_t t86 = -4037379;

	t86 = ((x625<<(x626<x627))==x628);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x629 = 1695U;
	int32_t x630 = -1;
	int8_t x631 = INT8_MIN;
	volatile uint64_t x632 = UINT64_MAX;
	int32_t t87 = 1;

	t87 = ((x629<<(x630<x631))==x632);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x633 = 10;
	int64_t x634 = -1LL;
	uint32_t x636 = UINT32_MAX;

	t88 = ((x633<<(x634<x635))==x636);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x645 = 61U;
	static int32_t x648 = INT32_MAX;

	t89 = ((x645<<(x646<x647))==x648);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x657 = INT32_MAX;
	int8_t x658 = INT8_MAX;
	int64_t x660 = -28655536489617450LL;
	volatile int32_t t90 = -973175;

	t90 = ((x657<<(x658<x659))==x660);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x665 = UINT32_MAX;
	int8_t x666 = -1;
	int64_t x667 = 2372139843LL;

	t91 = ((x665<<(x666<x667))==x668);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x669 = UINT32_MAX;
	int16_t x672 = -332;
	int32_t t92 = -50;

	t92 = ((x669<<(x670<x671))==x672);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x678 = -5;
	uint32_t x679 = 94U;
	volatile int64_t x680 = INT64_MIN;
	volatile int32_t t93 = 54138;

	t93 = ((x677<<(x678<x679))==x680);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x685 = INT64_MAX;
	uint16_t x686 = UINT16_MAX;
	int32_t x687 = INT32_MIN;
	int32_t x688 = INT32_MIN;

	t94 = ((x685<<(x686<x687))==x688);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x693 = 8119U;
	static uint16_t x694 = UINT16_MAX;
	int64_t x695 = -1659610911LL;
	int32_t x696 = INT32_MIN;

	t95 = ((x693<<(x694<x695))==x696);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x702 = 8U;
	uint32_t x704 = 160869801U;
	volatile int32_t t96 = -370;

	t96 = ((x701<<(x702<x703))==x704);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x706 = -1;
	uint8_t x707 = UINT8_MAX;
	volatile int32_t x708 = -1;
	volatile int32_t t97 = -7;

	t97 = ((x705<<(x706<x707))==x708);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x716 = INT8_MIN;
	volatile int32_t t98 = -86;

	t98 = ((x713<<(x714<x715))==x716);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x721 = 85345614089447297LLU;
	int8_t x723 = -2;
	int32_t t99 = -195028;

	t99 = ((x721<<(x722<x723))==x724);

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

