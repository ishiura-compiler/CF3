#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -3972;
static int64_t x3 = -1LL;
volatile uint32_t x35 = UINT32_MAX;
int32_t x63 = INT32_MIN;
int16_t x74 = INT16_MIN;
uint16_t x75 = 17507U;
volatile int32_t t5 = 2;
int8_t x92 = 16;
int64_t x96 = 118381982640434056LL;
uint32_t x99 = UINT32_MAX;
int8_t x127 = INT8_MIN;
int32_t x137 = INT32_MIN;
volatile int32_t t14 = -4807960;
uint8_t x149 = 0U;
static volatile int8_t x172 = 29;
int16_t x179 = INT16_MAX;
uint16_t x193 = 117U;
volatile uint32_t x198 = 129570748U;
static int64_t x200 = -1LL;
int32_t t21 = 2730;
int8_t x213 = INT8_MIN;
int8_t x221 = -1;
int64_t x222 = -1LL;
int32_t x224 = INT32_MIN;
int32_t x242 = INT32_MIN;
static volatile int32_t x246 = -695357;
int16_t x247 = -1;
int16_t x248 = INT16_MIN;
volatile int32_t x251 = INT32_MAX;
static uint8_t x258 = 13U;
volatile int64_t t29 = -338LL;
static int8_t x287 = INT8_MAX;
static volatile int64_t t31 = 6532880828542341LL;
uint16_t x290 = 1U;
uint64_t x297 = 0LLU;
int32_t x298 = 54924205;
int16_t x318 = -1;
static uint8_t x329 = 12U;
static int8_t x338 = INT8_MIN;
static int32_t t38 = INT32_MAX;
uint32_t x345 = UINT32_MAX;
volatile uint32_t x353 = 252568U;
static volatile uint8_t x354 = 5U;
uint16_t x358 = UINT16_MAX;
int32_t x360 = INT32_MIN;
int16_t x382 = -5;
uint32_t x392 = 0U;
int64_t x395 = INT64_MAX;
static uint64_t x396 = 3LLU;
int16_t x423 = -3;
int8_t x439 = 2;
uint16_t x441 = 3130U;
int32_t x447 = INT32_MAX;
int64_t t53 = 453359080220447242LL;
volatile int16_t x468 = -1;
uint32_t x513 = 15U;
int64_t x515 = INT64_MAX;
int32_t x523 = -1;
int64_t x561 = -57424401LL;
int8_t x562 = INT8_MIN;
int32_t x563 = -1;
static volatile int16_t x573 = 2008;
static int32_t x574 = INT32_MIN;
volatile int32_t t66 = -29;
uint8_t x596 = UINT8_MAX;
int8_t x614 = INT8_MAX;
int8_t x646 = INT8_MAX;
uint32_t x648 = 3U;
uint32_t t71 = UINT32_MAX;
static volatile uint32_t x653 = 1284U;
volatile int64_t t74 = -225187763427526650LL;
int8_t x692 = 1;
int64_t t78 = -1LL;
int64_t x701 = INT64_MIN;
static int8_t x706 = INT8_MIN;
volatile int64_t t82 = 484175561LL;
int64_t x729 = -8227035357LL;
uint32_t t85 = UINT32_MAX;
static int32_t t86 = -18557;
static int32_t x778 = INT32_MIN;
static uint64_t t88 = UINT64_MAX;
uint32_t x789 = 2105U;
static uint32_t x791 = 27U;
int32_t x799 = -2;
int32_t x810 = INT32_MIN;
static int64_t t92 = 124366416301231LL;
uint64_t x825 = 102LLU;
uint64_t x828 = 19699784591818LLU;
static uint16_t x837 = 20U;
int8_t x847 = 1;
uint32_t x848 = 23262999U;
uint32_t t96 = 67599462U;
int32_t x858 = -56728540;
volatile int64_t t98 = -15LL;


void f0(void) {
	int64_t x2 = -809LL;
	volatile uint16_t x4 = 5U;
	int32_t t0 = 269;

	t0 = ((x1/(x2<x3))|x4);

	if (t0 != -3971) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile int32_t x6 = -1;
	static int64_t x7 = 136085798034472161LL;
	int32_t x8 = INT32_MAX;
	int32_t t1 = -36095714;

	t1 = ((x5/(x6<x7))|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x33 = INT64_MIN;
	uint8_t x34 = 52U;
	uint8_t x36 = 6U;
	volatile int64_t t2 = 22017LL;

	t2 = ((x33/(x34<x35))|x36);

	if (t2 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x49 = UINT64_MAX;
	uint16_t x50 = 1U;
	uint32_t x51 = 988160486U;
	uint32_t x52 = 10599U;
	static volatile uint64_t t3 = UINT64_MAX;

	t3 = ((x49/(x50<x51))|x52);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x61 = -1LL;
	int64_t x62 = INT64_MIN;
	static int8_t x64 = 50;
	static volatile int64_t t4 = 3LL;

	t4 = ((x61/(x62<x63))|x64);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x73 = -4566093;
	uint16_t x76 = 3U;

	t5 = ((x73/(x74<x75))|x76);

	if (t5 != -4566093) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x81 = -27;
	static int16_t x82 = 112;
	uint32_t x83 = 3157U;
	static int8_t x84 = INT8_MAX;
	static volatile int32_t t6 = -4;

	t6 = ((x81/(x82<x83))|x84);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x85 = INT32_MIN;
	static volatile uint8_t x86 = 73U;
	static uint64_t x87 = 873123LLU;
	uint32_t x88 = 3900390U;
	uint32_t t7 = 49U;

	t7 = ((x85/(x86<x87))|x88);

	if (t7 != 2151384038U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x89 = INT64_MIN;
	static int32_t x90 = 96;
	uint16_t x91 = 23241U;
	static volatile int64_t t8 = 49427LL;

	t8 = ((x89/(x90<x91))|x92);

	if (t8 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MAX;
	volatile int64_t t9 = -968774256LL;

	t9 = ((x93/(x94<x95))|x96);

	if (t9 != 118381982640439295LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x97 = 6253U;
	int16_t x98 = INT16_MIN;
	int64_t x100 = INT64_MIN;
	volatile int64_t t10 = 37LL;

	t10 = ((x97/(x98<x99))|x100);

	if (t10 != -9223372036854769555LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x105 = INT64_MIN;
	volatile int32_t x106 = INT32_MIN;
	int8_t x107 = 19;
	uint8_t x108 = 3U;
	static int64_t t11 = 5LL;

	t11 = ((x105/(x106<x107))|x108);

	if (t11 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x109 = 113485961LL;
	uint32_t x110 = 9613317U;
	int8_t x111 = INT8_MIN;
	uint32_t x112 = 21U;
	int64_t t12 = 3540LL;

	t12 = ((x109/(x110<x111))|x112);

	if (t12 != 113485981LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x125 = 1178577;
	volatile uint32_t x126 = 100824U;
	uint8_t x128 = 99U;
	static volatile int32_t t13 = 576491;

	t13 = ((x125/(x126<x127))|x128);

	if (t13 != 1178611) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x138 = 5270U;
	static uint64_t x139 = UINT64_MAX;
	volatile int16_t x140 = INT16_MIN;

	t14 = ((x137/(x138<x139))|x140);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x145 = 185U;
	static volatile int8_t x146 = INT8_MIN;
	static int64_t x147 = 27LL;
	uint16_t x148 = 1083U;
	static volatile uint32_t t15 = 4505U;

	t15 = ((x145/(x146<x147))|x148);

	if (t15 != 1211U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x150 = -9;
	volatile int64_t x151 = -1LL;
	int32_t x152 = -1628824;
	int32_t t16 = -16505515;

	t16 = ((x149/(x150<x151))|x152);

	if (t16 != -1628824) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x169 = 78892780230404942LLU;
	uint32_t x170 = 934U;
	int16_t x171 = -1;
	volatile uint64_t t17 = 4264484477007781914LLU;

	t17 = ((x169/(x170<x171))|x172);

	if (t17 != 78892780230404959LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = -848955190362LL;
	static uint32_t x180 = 27888U;
	uint32_t t18 = 2U;

	t18 = ((x177/(x178<x179))|x180);

	if (t18 != 4294967280U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x194 = INT16_MIN;
	int64_t x195 = -1LL;
	static int64_t x196 = INT64_MAX;
	volatile int64_t t19 = INT64_MAX;

	t19 = ((x193/(x194<x195))|x196);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x197 = INT32_MIN;
	int16_t x199 = -1;
	static int64_t t20 = -31LL;

	t20 = ((x197/(x198<x199))|x200);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x201 = INT16_MAX;
	static uint64_t x202 = 110690193002LLU;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;

	t21 = ((x201/(x202<x203))|x204);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x214 = 7510876LLU;
	volatile int64_t x215 = INT64_MIN;
	uint16_t x216 = 10U;
	int32_t t22 = 4;

	t22 = ((x213/(x214<x215))|x216);

	if (t22 != -118) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x223 = UINT16_MAX;
	volatile int32_t t23 = -6063839;

	t23 = ((x221/(x222<x223))|x224);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = 0;
	int64_t x227 = 26367715842LL;
	int32_t x228 = -1;
	int32_t t24 = -1;

	t24 = ((x225/(x226<x227))|x228);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x241 = 2U;
	volatile int64_t x243 = -82346497LL;
	static int8_t x244 = 30;
	int32_t t25 = -344;

	t25 = ((x241/(x242<x243))|x244);

	if (t25 != 30) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x245 = INT16_MIN;
	volatile int32_t t26 = -3900339;

	t26 = ((x245/(x246<x247))|x248);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x249 = INT8_MAX;
	volatile int8_t x250 = INT8_MIN;
	int32_t x252 = -1294508;
	int32_t t27 = 802213;

	t27 = ((x249/(x250<x251))|x252);

	if (t27 != -1294465) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x257 = 237835084LL;
	volatile uint16_t x259 = UINT16_MAX;
	volatile uint8_t x260 = 1U;
	volatile int64_t t28 = 6236376611860LL;

	t28 = ((x257/(x258<x259))|x260);

	if (t28 != 237835085LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x261 = INT16_MIN;
	static int32_t x262 = INT32_MIN;
	uint8_t x263 = 76U;
	int64_t x264 = INT64_MAX;

	t29 = ((x261/(x262<x263))|x264);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MAX;
	int8_t x268 = -12;
	static volatile int32_t t30 = -3676315;

	t30 = ((x265/(x266<x267))|x268);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x285 = 14;
	volatile int32_t x286 = -1;
	int64_t x288 = -1LL;

	t31 = ((x285/(x286<x287))|x288);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x289 = INT32_MIN;
	uint32_t x291 = 148109U;
	volatile int64_t x292 = INT64_MIN;
	int64_t t32 = -4199LL;

	t32 = ((x289/(x290<x291))|x292);

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x293 = 2821257;
	uint32_t x294 = 22783U;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t33 = -472;

	t33 = ((x293/(x294<x295))|x296);

	if (t33 != -29559) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x299 = INT32_MAX;
	uint16_t x300 = UINT16_MAX;
	volatile uint64_t t34 = 1734420143427315097LLU;

	t34 = ((x297/(x298<x299))|x300);

	if (t34 != 65535LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x302 = -3778;
	int64_t x303 = INT64_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t35 = 1;

	t35 = ((x301/(x302<x303))|x304);

	if (t35 != -2147483393) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x317 = -1LL;
	int32_t x319 = 532;
	uint64_t x320 = 27LLU;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x317/(x318<x319))|x320);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x330 = INT16_MIN;
	static volatile int8_t x331 = INT8_MIN;
	int16_t x332 = -8403;
	int32_t t37 = 95;

	t37 = ((x329/(x330<x331))|x332);

	if (t37 != -8403) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x337 = 981U;
	volatile int32_t x339 = INT32_MAX;
	int32_t x340 = INT32_MAX;

	t38 = ((x337/(x338<x339))|x340);

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x346 = 8341331527240230LLU;
	int8_t x347 = -1;
	uint16_t x348 = 14U;
	uint32_t t39 = UINT32_MAX;

	t39 = ((x345/(x346<x347))|x348);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x349 = INT64_MAX;
	static uint8_t x350 = 0U;
	uint32_t x351 = UINT32_MAX;
	uint16_t x352 = 355U;
	volatile int64_t t40 = INT64_MAX;

	t40 = ((x349/(x350<x351))|x352);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x355 = INT16_MAX;
	volatile uint64_t x356 = UINT64_MAX;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x353/(x354<x355))|x356);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x357 = 10782U;
	int64_t x359 = 1073733LL;
	volatile int32_t t42 = -1;

	t42 = ((x357/(x358<x359))|x360);

	if (t42 != -2147472866) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x365 = 12U;
	int32_t x366 = INT32_MIN;
	volatile int32_t x367 = INT32_MAX;
	int32_t x368 = 2;
	static volatile int32_t t43 = -81182735;

	t43 = ((x365/(x366<x367))|x368);

	if (t43 != 14) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x369 = INT64_MIN;
	volatile int64_t x370 = -1463918468LL;
	int8_t x371 = 0;
	static int8_t x372 = INT8_MIN;
	int64_t t44 = -973732LL;

	t44 = ((x369/(x370<x371))|x372);

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x381 = 16U;
	int16_t x383 = 2;
	uint32_t x384 = 667U;
	static volatile uint32_t t45 = 78417580U;

	t45 = ((x381/(x382<x383))|x384);

	if (t45 != 667U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x385 = 3U;
	uint32_t x386 = UINT32_MAX;
	static int64_t x387 = INT64_MAX;
	int8_t x388 = -31;
	volatile int32_t t46 = -1;

	t46 = ((x385/(x386<x387))|x388);

	if (t46 != -29) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x389 = 17373U;
	static int64_t x390 = INT64_MIN;
	int16_t x391 = 134;
	uint32_t t47 = 247U;

	t47 = ((x389/(x390<x391))|x392);

	if (t47 != 17373U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x393 = UINT32_MAX;
	int16_t x394 = -1;
	volatile uint64_t t48 = 132129185LLU;

	t48 = ((x393/(x394<x395))|x396);

	if (t48 != 4294967295LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x421 = UINT64_MAX;
	static int64_t x422 = INT64_MIN;
	int8_t x424 = -1;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x421/(x422<x423))|x424);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x425 = 6114727893LLU;
	int64_t x426 = INT64_MIN;
	static int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MIN;
	uint64_t t50 = 778643256437LLU;

	t50 = ((x425/(x426<x427))|x428);

	if (t50 != 18446744073381828565LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x437 = 1;
	static int8_t x438 = INT8_MIN;
	static uint8_t x440 = 50U;
	volatile int32_t t51 = -1;

	t51 = ((x437/(x438<x439))|x440);

	if (t51 != 51) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x442 = INT16_MIN;
	int16_t x443 = -1357;
	static int8_t x444 = INT8_MAX;
	int32_t t52 = -1;

	t52 = ((x441/(x442<x443))|x444);

	if (t52 != 3199) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x445 = INT64_MAX;
	int32_t x446 = -567174;
	int32_t x448 = INT32_MIN;

	t53 = ((x445/(x446<x447))|x448);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x453 = INT64_MIN;
	volatile uint16_t x454 = 5231U;
	uint16_t x455 = UINT16_MAX;
	volatile int16_t x456 = INT16_MIN;
	static volatile int64_t t54 = 3774349LL;

	t54 = ((x453/(x454<x455))|x456);

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x461 = -32744753;
	volatile int64_t x462 = INT64_MIN;
	static int32_t x463 = INT32_MIN;
	int16_t x464 = -1;
	volatile int32_t t55 = -204001591;

	t55 = ((x461/(x462<x463))|x464);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x465 = 452LLU;
	static uint32_t x466 = 53288773U;
	uint32_t x467 = UINT32_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = ((x465/(x466<x467))|x468);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x481 = INT32_MAX;
	int32_t x482 = -38230435;
	int16_t x483 = -98;
	static uint64_t x484 = 266652113819LLU;
	static uint64_t t57 = 4198654236290064887LLU;

	t57 = ((x481/(x482<x483))|x484);

	if (t57 != 268435455999LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x489 = INT32_MIN;
	static volatile int16_t x490 = 1;
	int16_t x491 = 7;
	int32_t x492 = 1;
	volatile int32_t t58 = 2911;

	t58 = ((x489/(x490<x491))|x492);

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x509 = INT16_MIN;
	int64_t x510 = INT64_MIN;
	int16_t x511 = 1;
	int8_t x512 = 1;
	int32_t t59 = 205711154;

	t59 = ((x509/(x510<x511))|x512);

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x514 = UINT16_MAX;
	int64_t x516 = 838144462830973LL;
	int64_t t60 = -6908808LL;

	t60 = ((x513/(x514<x515))|x516);

	if (t60 != 838144462830975LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x521 = INT64_MIN;
	int8_t x522 = -44;
	static uint16_t x524 = UINT16_MAX;
	int64_t t61 = 284844728224671177LL;

	t61 = ((x521/(x522<x523))|x524);

	if (t61 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x564 = INT32_MIN;
	int64_t t62 = -1LL;

	t62 = ((x561/(x562<x563))|x564);

	if (t62 != -57424401LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x569 = INT16_MIN;
	static int16_t x570 = 2;
	int16_t x571 = INT16_MAX;
	int64_t x572 = -46807288LL;
	int64_t t63 = -56762035LL;

	t63 = ((x569/(x570<x571))|x572);

	if (t63 != -14584LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x575 = UINT8_MAX;
	static volatile int64_t x576 = -1LL;
	volatile int64_t t64 = 19584058LL;

	t64 = ((x573/(x574<x575))|x576);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x577 = 87U;
	volatile uint32_t x578 = 545U;
	int8_t x579 = INT8_MIN;
	static int8_t x580 = INT8_MIN;
	int32_t t65 = -7775500;

	t65 = ((x577/(x578<x579))|x580);

	if (t65 != -41) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x589 = INT32_MIN;
	volatile int64_t x590 = INT64_MIN;
	int8_t x591 = INT8_MIN;
	int16_t x592 = -1;

	t66 = ((x589/(x590<x591))|x592);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x593 = 2106070895150LLU;
	int64_t x594 = INT64_MIN;
	int16_t x595 = -1;
	uint64_t t67 = 119LLU;

	t67 = ((x593/(x594<x595))|x596);

	if (t67 != 2106070895359LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x613 = 5U;
	int32_t x615 = INT32_MAX;
	volatile int64_t x616 = INT64_MIN;
	static volatile int64_t t68 = 916223066082LL;

	t68 = ((x613/(x614<x615))|x616);

	if (t68 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x617 = UINT16_MAX;
	int8_t x618 = INT8_MIN;
	int16_t x619 = 0;
	int8_t x620 = 0;
	volatile int32_t t69 = -42258;

	t69 = ((x617/(x618<x619))|x620);

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x625 = UINT8_MAX;
	volatile int32_t x626 = -28;
	uint16_t x627 = UINT16_MAX;
	int32_t x628 = INT32_MIN;
	int32_t t70 = 2881629;

	t70 = ((x625/(x626<x627))|x628);

	if (t70 != -2147483393) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x645 = -1;
	static int16_t x647 = 306;

	t71 = ((x645/(x646<x647))|x648);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x654 = INT16_MIN;
	static volatile uint8_t x655 = 3U;
	static int64_t x656 = -1LL;
	static volatile int64_t t72 = -25LL;

	t72 = ((x653/(x654<x655))|x656);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x657 = 169431LLU;
	volatile int8_t x658 = 4;
	volatile uint64_t x659 = 1895552LLU;
	uint8_t x660 = 1U;
	volatile uint64_t t73 = 14905LLU;

	t73 = ((x657/(x658<x659))|x660);

	if (t73 != 169431LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x665 = INT8_MAX;
	static int8_t x666 = INT8_MIN;
	int64_t x667 = INT64_MAX;
	static volatile int64_t x668 = -516883332858208154LL;

	t74 = ((x665/(x666<x667))|x668);

	if (t74 != -516883332858208129LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x677 = 25506LLU;
	int64_t x678 = INT64_MIN;
	uint16_t x679 = UINT16_MAX;
	static volatile uint64_t x680 = 783269930LLU;
	uint64_t t75 = 61LLU;

	t75 = ((x677/(x678<x679))|x680);

	if (t75 != 783279018LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x681 = INT8_MIN;
	uint8_t x682 = 12U;
	uint16_t x683 = 4144U;
	uint32_t x684 = 552020U;
	static uint32_t t76 = 7458U;

	t76 = ((x681/(x682<x683))|x684);

	if (t76 != 4294967252U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x685 = INT16_MIN;
	int32_t x686 = INT32_MIN;
	int8_t x687 = INT8_MIN;
	static uint16_t x688 = 31U;
	volatile int32_t t77 = -37949;

	t77 = ((x685/(x686<x687))|x688);

	if (t77 != -32737) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x689 = 109583580LL;
	int32_t x690 = -1;
	volatile uint16_t x691 = UINT16_MAX;

	t78 = ((x689/(x690<x691))|x692);

	if (t78 != 109583581LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x702 = 13009U;
	int16_t x703 = INT16_MAX;
	static int32_t x704 = INT32_MAX;
	volatile int64_t t79 = -1LL;

	t79 = ((x701/(x702<x703))|x704);

	if (t79 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x705 = -1LL;
	uint8_t x707 = 77U;
	volatile uint64_t x708 = 1966276745613678LLU;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x705/(x706<x707))|x708);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x709 = INT16_MAX;
	uint16_t x710 = 62U;
	uint32_t x711 = 29870938U;
	uint32_t x712 = 0U;
	uint32_t t81 = 134U;

	t81 = ((x709/(x710<x711))|x712);

	if (t81 != 32767U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x717 = INT64_MAX;
	static uint64_t x718 = 255177212LLU;
	int16_t x719 = -1;
	int64_t x720 = INT64_MIN;

	t82 = ((x717/(x718<x719))|x720);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x725 = -24;
	volatile uint32_t x726 = 2U;
	volatile uint32_t x727 = UINT32_MAX;
	int16_t x728 = -1;
	volatile int32_t t83 = -4;

	t83 = ((x725/(x726<x727))|x728);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x730 = 2020012373209LLU;
	static int32_t x731 = -1;
	static int64_t x732 = INT64_MIN;
	static int64_t t84 = 157432153LL;

	t84 = ((x729/(x730<x731))|x732);

	if (t84 != -8227035357LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x753 = 6U;
	static int16_t x754 = INT16_MIN;
	uint16_t x755 = 8593U;
	volatile uint32_t x756 = UINT32_MAX;

	t85 = ((x753/(x754<x755))|x756);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x761 = 4U;
	static uint16_t x762 = 0U;
	uint64_t x763 = UINT64_MAX;
	static int8_t x764 = INT8_MIN;

	t86 = ((x761/(x762<x763))|x764);

	if (t86 != -124) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x765 = 3029526U;
	uint16_t x766 = 1U;
	uint16_t x767 = UINT16_MAX;
	volatile int16_t x768 = -1;
	static uint32_t t87 = UINT32_MAX;

	t87 = ((x765/(x766<x767))|x768);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x777 = INT16_MIN;
	static uint32_t x779 = UINT32_MAX;
	uint64_t x780 = UINT64_MAX;

	t88 = ((x777/(x778<x779))|x780);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x790 = INT64_MIN;
	uint8_t x792 = UINT8_MAX;
	uint32_t t89 = 0U;

	t89 = ((x789/(x790<x791))|x792);

	if (t89 != 2303U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x793 = -11;
	volatile int16_t x794 = -2241;
	static uint8_t x795 = UINT8_MAX;
	uint16_t x796 = UINT16_MAX;
	static int32_t t90 = 6;

	t90 = ((x793/(x794<x795))|x796);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x797 = INT16_MIN;
	int32_t x798 = INT32_MIN;
	uint64_t x800 = 11889041LLU;
	volatile uint64_t t91 = 94301LLU;

	t91 = ((x797/(x798<x799))|x800);

	if (t91 != 18446744073709545873LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x809 = 1U;
	volatile uint16_t x811 = 36U;
	int64_t x812 = -1LL;

	t92 = ((x809/(x810<x811))|x812);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x813 = 1U;
	int8_t x814 = INT8_MAX;
	uint8_t x815 = UINT8_MAX;
	uint16_t x816 = 5855U;
	volatile int32_t t93 = -759;

	t93 = ((x813/(x814<x815))|x816);

	if (t93 != 5855) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x826 = -1;
	int16_t x827 = INT16_MAX;
	static volatile uint64_t t94 = 470LLU;

	t94 = ((x825/(x826<x827))|x828);

	if (t94 != 19699784591854LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x838 = INT64_MIN;
	static volatile int8_t x839 = INT8_MIN;
	static uint64_t x840 = 16384157470057084LLU;
	uint64_t t95 = 55172965298LLU;

	t95 = ((x837/(x838<x839))|x840);

	if (t95 != 16384157470057084LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x845 = UINT16_MAX;
	int64_t x846 = INT64_MIN;

	t96 = ((x845/(x846<x847))|x848);

	if (t96 != 23265279U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x857 = INT64_MIN;
	int8_t x859 = 0;
	static int16_t x860 = 279;
	volatile int64_t t97 = 7LL;

	t97 = ((x857/(x858<x859))|x860);

	if (t97 != -9223372036854775529LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x861 = INT64_MAX;
	int64_t x862 = INT64_MIN;
	volatile int8_t x863 = -30;
	static int8_t x864 = -26;

	t98 = ((x861/(x862<x863))|x864);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x869 = 0;
	volatile int8_t x870 = -1;
	int16_t x871 = 477;
	volatile int64_t x872 = INT64_MAX;
	static int64_t t99 = INT64_MAX;

	t99 = ((x869/(x870<x871))|x872);

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

