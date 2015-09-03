#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x9 = UINT8_MAX;
int64_t x13 = 3LL;
static int16_t x16 = 1;
int64_t t2 = -90575757871LL;
int64_t x22 = -312360194034809779LL;
static uint8_t x24 = UINT8_MAX;
int32_t t3 = -72;
uint64_t x27 = 6430785LLU;
int8_t x28 = INT8_MAX;
int64_t t4 = 787185691163303855LL;
int32_t x59 = 7885;
volatile int32_t x60 = -99780231;
volatile int8_t x62 = INT8_MIN;
volatile uint8_t x63 = UINT8_MAX;
static int32_t x68 = INT32_MIN;
volatile int32_t t10 = INT32_MAX;
volatile int32_t t14 = 337;
static int16_t x105 = -1;
volatile int32_t x114 = INT32_MIN;
static volatile uint16_t x115 = 1137U;
uint16_t x117 = 388U;
int32_t t19 = -33;
int32_t x126 = INT32_MIN;
volatile uint32_t t23 = 614U;
static int64_t x145 = 0LL;
volatile int64_t t25 = 243630984739LL;
int32_t x150 = INT32_MIN;
int64_t x154 = -8532426550690LL;
volatile int32_t t27 = INT32_MIN;
int8_t x162 = INT8_MIN;
int32_t x163 = 3;
volatile int64_t t29 = 6726073LL;
int64_t t30 = -601904LL;
uint64_t x203 = UINT64_MAX;
volatile int32_t t34 = -2;
int16_t x206 = -77;
uint8_t x211 = UINT8_MAX;
int64_t x213 = -3LL;
volatile int32_t x214 = INT32_MAX;
int64_t t39 = INT64_MIN;
int32_t x233 = INT32_MIN;
volatile int32_t x234 = INT32_MIN;
int64_t x248 = -1LL;
volatile int64_t t41 = -7521634896LL;
int32_t x249 = -1263541;
uint8_t x251 = 61U;
int16_t x320 = 6;
volatile uint32_t t48 = 226531U;
int8_t x350 = 1;
int8_t x359 = INT8_MIN;
int64_t x365 = INT64_MIN;
static int8_t x374 = INT8_MIN;
int32_t x375 = 387405;
uint8_t x382 = 12U;
static int64_t x384 = -1LL;
static volatile uint64_t t56 = 374236LLU;
static volatile uint64_t t57 = 452932521926LLU;
static uint8_t x419 = UINT8_MAX;
int16_t x432 = INT16_MAX;
int64_t x444 = -1LL;
volatile int64_t t62 = 29359360483034607LL;
static uint32_t x445 = 764684307U;
static volatile int64_t t63 = INT64_MAX;
int32_t x450 = INT32_MIN;
volatile int64_t x451 = 9060LL;
volatile int8_t x452 = INT8_MAX;
int8_t x461 = INT8_MIN;
static int32_t x463 = 1;
int32_t t65 = 1;
uint64_t x467 = UINT64_MAX;
int32_t x470 = INT32_MIN;
int64_t x474 = INT64_MIN;
int64_t x478 = INT64_MIN;
int32_t x479 = INT32_MIN;
uint16_t x480 = 7U;
uint32_t x482 = 7U;
static int32_t x483 = -1;
int8_t x491 = INT8_MIN;
int64_t x501 = 41177506LL;
int8_t x503 = -1;
int8_t x521 = INT8_MIN;
static uint64_t x526 = 2459457225LLU;
static int64_t x535 = INT64_MAX;
uint16_t x551 = UINT16_MAX;
uint32_t t78 = 75680U;
static volatile int32_t x556 = -1;
volatile int32_t t79 = 29878;
volatile uint16_t x560 = 3652U;
int64_t x571 = 208880998662919LL;
uint32_t t83 = 26U;
static int64_t x579 = -702LL;
static volatile int64_t x594 = -13181LL;
uint8_t x599 = 0U;
uint8_t x618 = 4U;
uint16_t x619 = UINT16_MAX;
uint64_t t88 = 0LLU;
uint64_t x638 = 871LLU;
volatile int64_t t90 = INT64_MAX;
int16_t x643 = -3551;
int8_t x644 = -1;
static int16_t x660 = INT16_MAX;
volatile int64_t x689 = INT64_MAX;
static int64_t x721 = 16214250081660707LL;
uint32_t x724 = 446587832U;
int64_t t97 = -14663086LL;
int8_t x726 = INT8_MIN;
uint16_t x728 = UINT16_MAX;
int64_t x730 = INT64_MIN;
int8_t x732 = INT8_MAX;
volatile int32_t t99 = -30;


void f0(void) {
	int32_t x1 = -6248156;
	uint8_t x2 = 1U;
	volatile int8_t x3 = INT8_MAX;
	static uint8_t x4 = 2U;
	volatile int32_t t0 = 1;

	t0 = ((x1%(x2<x3))^x4);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MIN;
	static int32_t x11 = 3065;
	int32_t x12 = -1;
	volatile int32_t t1 = -2164;

	t1 = ((x9%(x10<x11))^x12);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MIN;
	int32_t x15 = -1;

	t2 = ((x13%(x14<x15))^x16);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x21 = INT16_MIN;
	static int32_t x23 = INT32_MIN;

	t3 = ((x21%(x22<x23))^x24);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MAX;
	uint8_t x26 = 0U;

	t4 = ((x25%(x26<x27))^x28);

	if (t4 != 127LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x49 = 14U;
	uint64_t x50 = 368999LLU;
	int64_t x51 = 544030365468LL;
	uint32_t x52 = 6262719U;
	uint32_t t5 = 1255U;

	t5 = ((x49%(x50<x51))^x52);

	if (t5 != 6262719U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x53 = INT8_MIN;
	static volatile int16_t x54 = INT16_MIN;
	static volatile int8_t x55 = -1;
	uint8_t x56 = 68U;
	int32_t t6 = -102;

	t6 = ((x53%(x54<x55))^x56);

	if (t6 != 68) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x57 = 198U;
	static int8_t x58 = 3;
	static volatile uint32_t t7 = 5282770U;

	t7 = ((x57%(x58<x59))^x60);

	if (t7 != 4195187065U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x61 = 27382U;
	int32_t x64 = -531980653;
	static int32_t t8 = -61;

	t8 = ((x61%(x62<x63))^x64);

	if (t8 != -531980653) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x65 = 25265U;
	int32_t x66 = INT32_MIN;
	int8_t x67 = 7;
	volatile int32_t t9 = INT32_MIN;

	t9 = ((x65%(x66<x67))^x68);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x69 = 3U;
	volatile int32_t x70 = -247;
	uint16_t x71 = 235U;
	static volatile int32_t x72 = INT32_MAX;

	t10 = ((x69%(x70<x71))^x72);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = -1;
	int16_t x74 = -18;
	int64_t x75 = INT64_MAX;
	uint32_t x76 = UINT32_MAX;
	uint32_t t11 = UINT32_MAX;

	t11 = ((x73%(x74<x75))^x76);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x85 = 0U;
	uint16_t x86 = 2376U;
	uint64_t x87 = UINT64_MAX;
	volatile uint32_t x88 = 58359U;
	static volatile uint32_t t12 = 0U;

	t12 = ((x85%(x86<x87))^x88);

	if (t12 != 58359U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x89 = 0U;
	int16_t x90 = -60;
	volatile uint8_t x91 = UINT8_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t13 = 2;

	t13 = ((x89%(x90<x91))^x92);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x93 = 3U;
	int32_t x94 = -2;
	int32_t x95 = INT32_MAX;
	static uint16_t x96 = 3U;

	t14 = ((x93%(x94<x95))^x96);

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x101 = 0U;
	uint8_t x102 = 0U;
	uint16_t x103 = 31U;
	static int32_t x104 = INT32_MIN;
	int32_t t15 = INT32_MIN;

	t15 = ((x101%(x102<x103))^x104);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x106 = INT32_MIN;
	volatile int32_t x107 = 30311714;
	volatile uint16_t x108 = 22U;
	static volatile int32_t t16 = -68114;

	t16 = ((x105%(x106<x107))^x108);

	if (t16 != 22) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x109 = 105U;
	int32_t x110 = INT32_MIN;
	int64_t x111 = INT64_MAX;
	int64_t x112 = -1LL;
	int64_t t17 = -3786551LL;

	t17 = ((x109%(x110<x111))^x112);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x113 = 30U;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t18 = 593;

	t18 = ((x113%(x114<x115))^x116);

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x118 = INT64_MIN;
	int32_t x119 = -1;
	int16_t x120 = -1;

	t19 = ((x117%(x118<x119))^x120);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = -1;
	static uint64_t x122 = 65937746439LLU;
	int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t20 = 3297242;

	t20 = ((x121%(x122<x123))^x124);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = 1212505241LL;
	int8_t x127 = INT8_MIN;
	int16_t x128 = -1;
	volatile int64_t t21 = 222044092180903LL;

	t21 = ((x125%(x126<x127))^x128);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = 6449;
	volatile int64_t x134 = INT64_MIN;
	volatile uint16_t x135 = UINT16_MAX;
	uint16_t x136 = 6U;
	volatile int32_t t22 = 2129337;

	t22 = ((x133%(x134<x135))^x136);

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x137 = 13034U;
	int32_t x138 = 2;
	int32_t x139 = INT32_MAX;
	static int32_t x140 = -241;

	t23 = ((x137%(x138<x139))^x140);

	if (t23 != 4294967055U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x141 = INT64_MIN;
	int16_t x142 = -1;
	uint16_t x143 = 291U;
	int32_t x144 = INT32_MAX;
	static volatile int64_t t24 = 3179425LL;

	t24 = ((x141%(x142<x143))^x144);

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x146 = 14LL;
	uint64_t x147 = 536903529532183LLU;
	uint32_t x148 = UINT32_MAX;

	t25 = ((x145%(x146<x147))^x148);

	if (t25 != 4294967295LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = INT32_MIN;
	int16_t x151 = -8128;
	static volatile int32_t x152 = INT32_MAX;
	int32_t t26 = INT32_MAX;

	t26 = ((x149%(x150<x151))^x152);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = INT8_MAX;
	int16_t x155 = -2;
	int32_t x156 = INT32_MIN;

	t27 = ((x153%(x154<x155))^x156);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x157 = 16926981427LL;
	static uint64_t x158 = 13411461734909398LLU;
	int32_t x159 = -1;
	uint8_t x160 = 63U;
	volatile int64_t t28 = -13549LL;

	t28 = ((x157%(x158<x159))^x160);

	if (t28 != 63LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x161 = INT64_MIN;
	static uint16_t x164 = 50U;

	t29 = ((x161%(x162<x163))^x164);

	if (t29 != 50LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x169 = INT64_MIN;
	uint32_t x170 = 1U;
	int16_t x171 = -1;
	uint32_t x172 = UINT32_MAX;

	t30 = ((x169%(x170<x171))^x172);

	if (t30 != 4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x181 = INT64_MIN;
	static int32_t x182 = INT32_MIN;
	int64_t x183 = 137009083092LL;
	uint32_t x184 = 3469526U;
	int64_t t31 = -83405LL;

	t31 = ((x181%(x182<x183))^x184);

	if (t31 != 3469526LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x189 = -1;
	int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	uint16_t x192 = 1U;
	int32_t t32 = -8058538;

	t32 = ((x189%(x190<x191))^x192);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	int16_t x195 = 0;
	volatile uint8_t x196 = 59U;
	static volatile int32_t t33 = -1;

	t33 = ((x193%(x194<x195))^x196);

	if (t33 != 59) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x201 = -1;
	volatile int8_t x202 = INT8_MAX;
	uint8_t x204 = 83U;

	t34 = ((x201%(x202<x203))^x204);

	if (t34 != 83) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x205 = 115LLU;
	int64_t x207 = 115985181422220445LL;
	int8_t x208 = -15;
	uint64_t t35 = 6471269LLU;

	t35 = ((x205%(x206<x207))^x208);

	if (t35 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x209 = UINT16_MAX;
	volatile uint8_t x210 = 1U;
	static volatile int32_t x212 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

	t36 = ((x209%(x210<x211))^x212);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x215 = INT64_MAX;
	int32_t x216 = -1;
	volatile int64_t t37 = 484734LL;

	t37 = ((x213%(x214<x215))^x216);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x225 = INT16_MIN;
	volatile int16_t x226 = INT16_MIN;
	int64_t x227 = 1689033LL;
	static int8_t x228 = -1;
	static volatile int32_t t38 = -17563;

	t38 = ((x225%(x226<x227))^x228);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MIN;
	static volatile int64_t x231 = -1LL;
	static volatile int64_t x232 = INT64_MIN;

	t39 = ((x229%(x230<x231))^x232);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x235 = 1U;
	uint32_t x236 = 426966U;
	uint32_t t40 = 26965U;

	t40 = ((x233%(x234<x235))^x236);

	if (t40 != 426966U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x245 = -2;
	static int16_t x246 = INT16_MIN;
	static volatile int8_t x247 = INT8_MIN;

	t41 = ((x245%(x246<x247))^x248);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x250 = -1;
	int64_t x252 = INT64_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = ((x249%(x250<x251))^x252);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x261 = INT32_MIN;
	static int32_t x262 = INT32_MAX;
	int64_t x263 = 11693390625946LL;
	uint8_t x264 = 3U;
	volatile int32_t t43 = 1;

	t43 = ((x261%(x262<x263))^x264);

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x273 = 0;
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = 1;
	int8_t x276 = INT8_MIN;
	volatile int32_t t44 = 66187069;

	t44 = ((x273%(x274<x275))^x276);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x289 = INT32_MIN;
	uint16_t x290 = UINT16_MAX;
	static int64_t x291 = INT64_MAX;
	uint32_t x292 = 4181727U;
	uint32_t t45 = 9708075U;

	t45 = ((x289%(x290<x291))^x292);

	if (t45 != 4181727U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x297 = 839;
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = ((x297%(x298<x299))^x300);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x317 = -56;
	int16_t x318 = INT16_MIN;
	int64_t x319 = -1LL;
	int32_t t47 = -18865313;

	t47 = ((x317%(x318<x319))^x320);

	if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x329 = UINT32_MAX;
	int32_t x330 = INT32_MIN;
	static volatile int32_t x331 = 3408137;
	uint8_t x332 = 6U;

	t48 = ((x329%(x330<x331))^x332);

	if (t48 != 6U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x337 = -1;
	uint32_t x338 = 100591032U;
	uint32_t x339 = UINT32_MAX;
	uint16_t x340 = 113U;
	volatile int32_t t49 = 777220;

	t49 = ((x337%(x338<x339))^x340);

	if (t49 != 113) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x349 = -1;
	uint64_t x351 = 152299717LLU;
	int16_t x352 = -1;
	int32_t t50 = 4;

	t50 = ((x349%(x350<x351))^x352);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x357 = INT16_MAX;
	static uint64_t x358 = 60475313499806LLU;
	int32_t x360 = INT32_MIN;
	int32_t t51 = INT32_MIN;

	t51 = ((x357%(x358<x359))^x360);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x366 = INT32_MIN;
	uint16_t x367 = 4077U;
	int32_t x368 = INT32_MAX;
	volatile int64_t t52 = 101578410028149LL;

	t52 = ((x365%(x366<x367))^x368);

	if (t52 != 2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x373 = INT32_MAX;
	int16_t x376 = -15348;
	static int32_t t53 = -2;

	t53 = ((x373%(x374<x375))^x376);

	if (t53 != -15348) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x377 = INT16_MAX;
	uint16_t x378 = 26551U;
	static int64_t x379 = 150415756092214472LL;
	int16_t x380 = -1;
	volatile int32_t t54 = 76;

	t54 = ((x377%(x378<x379))^x380);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x381 = INT16_MIN;
	static int8_t x383 = INT8_MAX;
	int64_t t55 = 259485LL;

	t55 = ((x381%(x382<x383))^x384);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int16_t x386 = -15320;
	static int8_t x387 = -1;
	volatile int32_t x388 = INT32_MAX;

	t56 = ((x385%(x386<x387))^x388);

	if (t56 != 2147483647LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x414 = 13355776;
	static uint64_t x415 = 14918787956LLU;
	uint64_t x416 = 248358035724440LLU;

	t57 = ((x413%(x414<x415))^x416);

	if (t57 != 248358035724440LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x417 = 22U;
	int64_t x418 = INT64_MIN;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t58 = -10380949;

	t58 = ((x417%(x418<x419))^x420);

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x421 = INT64_MIN;
	int32_t x422 = -137364;
	volatile uint8_t x423 = 4U;
	int64_t x424 = -537657668LL;
	volatile int64_t t59 = -54044LL;

	t59 = ((x421%(x422<x423))^x424);

	if (t59 != -537657668LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x429 = -1;
	int64_t x430 = -267016003463753LL;
	static int32_t x431 = -1;
	volatile int32_t t60 = -9;

	t60 = ((x429%(x430<x431))^x432);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x433 = INT8_MAX;
	int8_t x434 = INT8_MAX;
	uint64_t x435 = UINT64_MAX;
	int8_t x436 = -1;
	static volatile int32_t t61 = 3936973;

	t61 = ((x433%(x434<x435))^x436);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x441 = 9U;
	static uint32_t x442 = 11U;
	static uint32_t x443 = UINT32_MAX;

	t62 = ((x441%(x442<x443))^x444);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x446 = -1LL;
	volatile uint8_t x447 = 0U;
	int64_t x448 = INT64_MAX;

	t63 = ((x445%(x446<x447))^x448);

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x449 = INT16_MIN;
	static volatile int32_t t64 = -43712590;

	t64 = ((x449%(x450<x451))^x452);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x462 = -1;
	int8_t x464 = -1;

	t65 = ((x461%(x462<x463))^x464);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x465 = -1LL;
	volatile int16_t x466 = INT16_MIN;
	uint16_t x468 = UINT16_MAX;
	int64_t t66 = 892619909691101LL;

	t66 = ((x465%(x466<x467))^x468);

	if (t66 != 65535LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x469 = UINT32_MAX;
	int16_t x471 = INT16_MIN;
	int64_t x472 = 536LL;
	int64_t t67 = 1403754690634128191LL;

	t67 = ((x469%(x470<x471))^x472);

	if (t67 != 536LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x473 = 913275718525181LLU;
	static int64_t x475 = 7756993742LL;
	volatile int16_t x476 = -1;
	static volatile uint64_t t68 = UINT64_MAX;

	t68 = ((x473%(x474<x475))^x476);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x477 = 316U;
	static volatile int32_t t69 = -692081;

	t69 = ((x477%(x478<x479))^x480);

	if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x481 = INT16_MIN;
	int8_t x484 = -11;
	static volatile int32_t t70 = -9969525;

	t70 = ((x481%(x482<x483))^x484);

	if (t70 != -11) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x485 = 3290772U;
	int8_t x486 = INT8_MIN;
	volatile uint8_t x487 = 2U;
	int16_t x488 = 0;
	volatile uint32_t t71 = 9U;

	t71 = ((x485%(x486<x487))^x488);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x489 = INT8_MIN;
	uint64_t x490 = 11175106953156307LLU;
	int16_t x492 = INT16_MIN;
	volatile int32_t t72 = 535383045;

	t72 = ((x489%(x490<x491))^x492);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x502 = -3392;
	int8_t x504 = INT8_MAX;
	static int64_t t73 = -4864LL;

	t73 = ((x501%(x502<x503))^x504);

	if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x513 = INT64_MAX;
	volatile int64_t x514 = INT64_MIN;
	int64_t x515 = INT64_MAX;
	uint8_t x516 = 76U;
	volatile int64_t t74 = 55765512187974LL;

	t74 = ((x513%(x514<x515))^x516);

	if (t74 != 76LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x522 = -1512377;
	static int16_t x523 = -1;
	static volatile int8_t x524 = -1;
	int32_t t75 = 400;

	t75 = ((x521%(x522<x523))^x524);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x525 = 119;
	int64_t x527 = INT64_MIN;
	uint16_t x528 = 70U;
	volatile int32_t t76 = 7710;

	t76 = ((x525%(x526<x527))^x528);

	if (t76 != 70) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x533 = UINT64_MAX;
	int32_t x534 = -32572;
	uint16_t x536 = 924U;
	uint64_t t77 = 3LLU;

	t77 = ((x533%(x534<x535))^x536);

	if (t77 != 924LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x549 = 3U;
	int32_t x550 = 5835;
	uint32_t x552 = 2946U;

	t78 = ((x549%(x550<x551))^x552);

	if (t78 != 2946U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x553 = INT8_MAX;
	int64_t x554 = INT64_MIN;
	static int32_t x555 = -1;

	t79 = ((x553%(x554<x555))^x556);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x557 = INT32_MAX;
	static volatile int64_t x558 = INT64_MIN;
	volatile uint32_t x559 = 13107U;
	volatile int32_t t80 = 6207;

	t80 = ((x557%(x558<x559))^x560);

	if (t80 != 3652) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x565 = INT16_MIN;
	int16_t x566 = INT16_MIN;
	int8_t x567 = INT8_MAX;
	static uint8_t x568 = 66U;
	static volatile int32_t t81 = 31;

	t81 = ((x565%(x566<x567))^x568);

	if (t81 != 66) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x569 = -1;
	int32_t x570 = 125;
	uint16_t x572 = UINT16_MAX;
	volatile int32_t t82 = 566;

	t82 = ((x569%(x570<x571))^x572);

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x573 = 32137U;
	static int32_t x574 = -1;
	volatile int8_t x575 = 29;
	int16_t x576 = INT16_MIN;

	t83 = ((x573%(x574<x575))^x576);

	if (t83 != 4294934528U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x577 = 0;
	uint64_t x578 = 3117293352614268LLU;
	int16_t x580 = INT16_MAX;
	volatile int32_t t84 = 0;

	t84 = ((x577%(x578<x579))^x580);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x593 = INT8_MIN;
	static int64_t x595 = -1LL;
	uint8_t x596 = 61U;
	int32_t t85 = 1249;

	t85 = ((x593%(x594<x595))^x596);

	if (t85 != 61) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x597 = 15;
	volatile int64_t x598 = INT64_MIN;
	volatile int8_t x600 = INT8_MIN;
	int32_t t86 = 165;

	t86 = ((x597%(x598<x599))^x600);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x609 = 30U;
	static int16_t x610 = -1;
	uint8_t x611 = 2U;
	static uint64_t x612 = 639085987920LLU;
	volatile uint64_t t87 = 6005901LLU;

	t87 = ((x609%(x610<x611))^x612);

	if (t87 != 639085987920LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x617 = -5980;
	uint64_t x620 = 451276792527193LLU;

	t88 = ((x617%(x618<x619))^x620);

	if (t88 != 451276792527193LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x629 = UINT32_MAX;
	int16_t x630 = -3472;
	volatile int64_t x631 = INT64_MAX;
	uint16_t x632 = UINT16_MAX;
	static volatile uint32_t t89 = 2275341U;

	t89 = ((x629%(x630<x631))^x632);

	if (t89 != 65535U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x637 = 1;
	volatile int8_t x639 = INT8_MIN;
	int64_t x640 = INT64_MAX;

	t90 = ((x637%(x638<x639))^x640);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x641 = -1LL;
	int32_t x642 = INT32_MIN;
	int64_t t91 = 120358249LL;

	t91 = ((x641%(x642<x643))^x644);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x649 = -672875463;
	int32_t x650 = INT32_MIN;
	uint16_t x651 = 16U;
	int16_t x652 = 1;
	static volatile int32_t t92 = 19048;

	t92 = ((x649%(x650<x651))^x652);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x657 = -7;
	static int16_t x658 = -897;
	int16_t x659 = INT16_MAX;
	static volatile int32_t t93 = 50620186;

	t93 = ((x657%(x658<x659))^x660);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x661 = INT16_MIN;
	int8_t x662 = -1;
	int64_t x663 = 9494458132826LL;
	int8_t x664 = INT8_MIN;
	int32_t t94 = 2114138;

	t94 = ((x661%(x662<x663))^x664);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x690 = 5171476U;
	int32_t x691 = INT32_MIN;
	int32_t x692 = -1;
	volatile int64_t t95 = 3312LL;

	t95 = ((x689%(x690<x691))^x692);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x701 = 15;
	int16_t x702 = -1;
	uint8_t x703 = 13U;
	static uint32_t x704 = 90479U;
	uint32_t t96 = 2522U;

	t96 = ((x701%(x702<x703))^x704);

	if (t96 != 90479U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x722 = 15U;
	volatile uint64_t x723 = UINT64_MAX;

	t97 = ((x721%(x722<x723))^x724);

	if (t97 != 446587832LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x725 = -1;
	uint16_t x727 = UINT16_MAX;
	volatile int32_t t98 = 5682;

	t98 = ((x725%(x726<x727))^x728);

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x729 = -1;
	static int8_t x731 = -24;

	t99 = ((x729%(x730<x731))^x732);

	if (t99 != 127) { NG(); } else { ; }
	
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

