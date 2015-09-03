#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x9 = 7494U;
static int8_t x11 = -19;
uint32_t x14 = 2U;
int16_t x21 = -1;
int32_t x36 = -1;
int32_t x39 = INT32_MAX;
static volatile uint32_t x43 = UINT32_MAX;
volatile int32_t t7 = -85806;
int8_t x67 = 5;
uint64_t x75 = UINT64_MAX;
uint32_t x76 = 292U;
uint8_t x81 = UINT8_MAX;
volatile int8_t x82 = INT8_MAX;
uint16_t x83 = 937U;
uint64_t t12 = 126680922LLU;
volatile uint16_t x105 = 179U;
volatile int64_t x113 = INT64_MIN;
static int64_t x153 = INT64_MIN;
int16_t x156 = -1;
uint64_t x164 = UINT64_MAX;
volatile uint64_t x169 = UINT64_MAX;
int8_t x172 = -21;
int16_t x200 = -1;
int16_t x211 = -3;
static int64_t t22 = 6948419551792LL;
int32_t x217 = -278065;
uint64_t x220 = UINT64_MAX;
int8_t x225 = INT8_MAX;
int64_t t24 = 1022LL;
int64_t x237 = 4LL;
volatile int32_t x238 = 873;
uint8_t x241 = UINT8_MAX;
volatile int32_t t27 = -111324;
int64_t x256 = -27103077965672LL;
uint8_t x260 = 34U;
uint64_t x282 = 234276004888LLU;
int64_t x299 = INT64_MIN;
int8_t x328 = -25;
int32_t t35 = -445057382;
int64_t x350 = INT64_MIN;
volatile uint32_t t38 = 43408469U;
static uint8_t x368 = 103U;
int8_t x373 = 1;
int8_t x375 = 51;
int8_t x389 = 25;
int16_t x392 = INT16_MIN;
static int16_t x419 = -3;
int64_t x428 = -1LL;
int8_t x433 = -1;
static int32_t t53 = -6;
int64_t x462 = 4926126454LL;
uint64_t x465 = 165479524LLU;
uint16_t x470 = 430U;
uint32_t x473 = 42634U;
static int64_t x474 = INT64_MIN;
int64_t x481 = 973498256743431987LL;
volatile uint16_t x485 = 3U;
int8_t x488 = INT8_MIN;
volatile int8_t x497 = -7;
int32_t x505 = INT32_MAX;
uint32_t x506 = 914U;
uint32_t x522 = 5U;
int64_t x562 = INT64_MIN;
int32_t x564 = INT32_MIN;
static volatile uint32_t t67 = 156207U;
static volatile int64_t t70 = -7317132LL;
static int8_t x622 = INT8_MIN;
volatile int8_t x628 = -1;
static volatile int32_t t75 = -460711755;
int32_t t76 = -401308;
int32_t x668 = INT32_MIN;
int32_t x670 = -1;
uint8_t x671 = UINT8_MAX;
int16_t x679 = INT16_MAX;
int32_t x687 = -1;
uint32_t x699 = UINT32_MAX;
static int8_t x701 = -1;
uint64_t x713 = 890872LLU;
int64_t x715 = 23398881863240732LL;
uint32_t t90 = 99U;
static uint16_t x749 = 2U;
int8_t x754 = -42;
volatile int8_t x761 = 6;
uint8_t x762 = UINT8_MAX;
uint16_t x763 = 8205U;
uint64_t x817 = 782196623577LLU;
int64_t x819 = 4327521338770LL;
volatile int16_t x820 = -2287;


void f0(void) {
	uint32_t x10 = 7620U;
	volatile int16_t x12 = -1;
	volatile int32_t t0 = -3227616;

	t0 = ((x9%(x10<x11))&x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = 632205LL;
	int8_t x15 = 28;
	uint8_t x16 = 1U;
	static volatile int64_t t1 = 1656506642580083229LL;

	t1 = ((x13%(x14<x15))&x16);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x17 = INT8_MAX;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MAX;
	int16_t x20 = INT16_MIN;
	int32_t t2 = 10441957;

	t2 = ((x17%(x18<x19))&x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x22 = -24536514588LL;
	uint8_t x23 = 0U;
	volatile uint16_t x24 = 48U;
	int32_t t3 = 22;

	t3 = ((x21%(x22<x23))&x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x33 = UINT8_MAX;
	uint32_t x34 = 1U;
	uint8_t x35 = UINT8_MAX;
	volatile int32_t t4 = 472122;

	t4 = ((x33%(x34<x35))&x36);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = -1;
	static uint16_t x38 = 168U;
	static int8_t x40 = 10;
	int32_t t5 = 709081269;

	t5 = ((x37%(x38<x39))&x40);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x41 = -1;
	uint32_t x42 = 24U;
	volatile int64_t x44 = -1LL;
	static int64_t t6 = 80640685LL;

	t6 = ((x41%(x42<x43))&x44);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x61 = INT32_MIN;
	volatile int16_t x62 = INT16_MAX;
	static int64_t x63 = INT64_MAX;
	static int16_t x64 = -326;

	t7 = ((x61%(x62<x63))&x64);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = INT32_MIN;
	int32_t x66 = INT32_MIN;
	uint32_t x68 = 163092873U;
	static uint32_t t8 = 56423443U;

	t8 = ((x65%(x66<x67))&x68);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = 30514;
	int8_t x74 = INT8_MIN;
	uint32_t t9 = 10U;

	t9 = ((x73%(x74<x75))&x76);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x77 = 28U;
	static int8_t x78 = 17;
	int8_t x79 = 18;
	static int8_t x80 = 26;
	int32_t t10 = -1;

	t10 = ((x77%(x78<x79))&x80);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x84 = INT32_MIN;
	volatile int32_t t11 = -9573735;

	t11 = ((x81%(x82<x83))&x84);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x89 = 13LLU;
	uint64_t x90 = 0LLU;
	int8_t x91 = INT8_MAX;
	volatile int64_t x92 = INT64_MAX;

	t12 = ((x89%(x90<x91))&x92);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x93 = -42;
	int16_t x94 = -531;
	static int16_t x95 = -81;
	int64_t x96 = INT64_MIN;
	int64_t t13 = 191096874650471LL;

	t13 = ((x93%(x94<x95))&x96);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x106 = INT8_MAX;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = -1LL;
	volatile int64_t t14 = 13639336700LL;

	t14 = ((x105%(x106<x107))&x108);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x114 = 66051U;
	static int64_t x115 = 284323LL;
	uint64_t x116 = 17037159542LLU;
	uint64_t t15 = 10247034202LLU;

	t15 = ((x113%(x114<x115))&x116);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x117 = -1LL;
	static int16_t x118 = -1;
	int16_t x119 = INT16_MAX;
	volatile int8_t x120 = -12;
	static volatile int64_t t16 = 2725602013080901LL;

	t16 = ((x117%(x118<x119))&x120);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x121 = UINT8_MAX;
	int8_t x122 = -1;
	static uint16_t x123 = UINT16_MAX;
	int16_t x124 = 223;
	volatile int32_t t17 = -56558;

	t17 = ((x121%(x122<x123))&x124);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x154 = 3012LLU;
	uint16_t x155 = UINT16_MAX;
	int64_t t18 = -510437LL;

	t18 = ((x153%(x154<x155))&x156);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x161 = -1LL;
	int32_t x162 = INT32_MIN;
	int64_t x163 = -1LL;
	uint64_t t19 = 1606093492LLU;

	t19 = ((x161%(x162<x163))&x164);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x170 = 7U;
	int16_t x171 = INT16_MAX;
	uint64_t t20 = 753906LLU;

	t20 = ((x169%(x170<x171))&x172);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x197 = 500LL;
	int8_t x198 = 7;
	uint32_t x199 = UINT32_MAX;
	int64_t t21 = 159803958653169505LL;

	t21 = ((x197%(x198<x199))&x200);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x209 = 49U;
	static volatile int64_t x210 = INT64_MIN;
	int64_t x212 = -1102359156707291LL;

	t22 = ((x209%(x210<x211))&x212);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x218 = 7763122892624812671LLU;
	uint64_t x219 = UINT64_MAX;
	static uint64_t t23 = 1192138591045LLU;

	t23 = ((x217%(x218<x219))&x220);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x226 = 5U;
	static uint32_t x227 = 385U;
	int64_t x228 = -1LL;

	t24 = ((x225%(x226<x227))&x228);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x239 = 33889730870LLU;
	uint16_t x240 = 6U;
	volatile int64_t t25 = 2282548701823217168LL;

	t25 = ((x237%(x238<x239))&x240);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x242 = INT32_MAX;
	uint64_t x243 = UINT64_MAX;
	volatile uint32_t x244 = 347562536U;
	volatile uint32_t t26 = 124307U;

	t26 = ((x241%(x242<x243))&x244);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x245 = -26;
	volatile int8_t x246 = INT8_MIN;
	static uint32_t x247 = UINT32_MAX;
	volatile uint8_t x248 = UINT8_MAX;

	t27 = ((x245%(x246<x247))&x248);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x254 = 0;
	static int64_t x255 = INT64_MAX;
	volatile int64_t t28 = 0LL;

	t28 = ((x253%(x254<x255))&x256);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x257 = -1;
	int8_t x258 = -1;
	int8_t x259 = 1;
	int32_t t29 = -39348;

	t29 = ((x257%(x258<x259))&x260);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x281 = INT64_MIN;
	static int64_t x283 = INT64_MIN;
	static int8_t x284 = -1;
	volatile int64_t t30 = -4LL;

	t30 = ((x281%(x282<x283))&x284);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x289 = 4085097272105LL;
	static int32_t x290 = -1;
	static int8_t x291 = 38;
	uint64_t x292 = 9187510063309LLU;
	volatile uint64_t t31 = 119755585LLU;

	t31 = ((x289%(x290<x291))&x292);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MAX;
	int64_t x296 = INT64_MIN;
	int64_t t32 = 583LL;

	t32 = ((x293%(x294<x295))&x296);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x297 = -3255989260182LL;
	uint64_t x298 = 24521980060LLU;
	uint8_t x300 = 12U;
	static int64_t t33 = 971508482409LL;

	t33 = ((x297%(x298<x299))&x300);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x317 = -1LL;
	volatile int8_t x318 = -1;
	volatile int64_t x319 = 520963424LL;
	volatile int32_t x320 = -1;
	volatile int64_t t34 = -22330137LL;

	t34 = ((x317%(x318<x319))&x320);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x325 = 6U;
	static int64_t x326 = -6105478965572537LL;
	int64_t x327 = -1992LL;

	t35 = ((x325%(x326<x327))&x328);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x337 = INT16_MIN;
	static int32_t x338 = -8158;
	int16_t x339 = -1;
	volatile int64_t x340 = 162168017718203LL;
	volatile int64_t t36 = 15004775003LL;

	t36 = ((x337%(x338<x339))&x340);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x349 = 25440211294LL;
	volatile int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	volatile int64_t t37 = 6557558LL;

	t37 = ((x349%(x350<x351))&x352);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x353 = 105946U;
	int64_t x354 = -1LL;
	volatile uint16_t x355 = 1U;
	volatile int8_t x356 = INT8_MIN;

	t38 = ((x353%(x354<x355))&x356);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x357 = -1;
	int8_t x358 = INT8_MIN;
	uint8_t x359 = 30U;
	volatile uint32_t x360 = 0U;
	static uint32_t t39 = 26117U;

	t39 = ((x357%(x358<x359))&x360);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x365 = -14;
	volatile int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	static volatile int32_t t40 = 5976596;

	t40 = ((x365%(x366<x367))&x368);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x369 = -1LL;
	volatile int32_t x370 = INT32_MIN;
	static int8_t x371 = 31;
	int8_t x372 = -1;
	int64_t t41 = 3072031637182LL;

	t41 = ((x369%(x370<x371))&x372);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x374 = -1;
	uint64_t x376 = 9LLU;
	uint64_t t42 = 32072821150655418LLU;

	t42 = ((x373%(x374<x375))&x376);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x381 = -1;
	int8_t x382 = INT8_MAX;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = -1479;
	int32_t t43 = 121;

	t43 = ((x381%(x382<x383))&x384);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x390 = INT8_MIN;
	static uint16_t x391 = 15U;
	int32_t t44 = -3890;

	t44 = ((x389%(x390<x391))&x392);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x393 = 27U;
	volatile uint64_t x394 = 29034427895LLU;
	volatile int16_t x395 = INT16_MIN;
	int64_t x396 = -1255189125720428LL;
	volatile int64_t t45 = 1268025592069702413LL;

	t45 = ((x393%(x394<x395))&x396);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x401 = 3U;
	int8_t x402 = 6;
	static uint32_t x403 = UINT32_MAX;
	int16_t x404 = INT16_MIN;
	volatile int32_t t46 = -131656582;

	t46 = ((x401%(x402<x403))&x404);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MIN;
	static volatile int32_t x407 = 1484;
	int8_t x408 = INT8_MAX;
	volatile int32_t t47 = 199;

	t47 = ((x405%(x406<x407))&x408);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x413 = -1;
	int64_t x414 = INT64_MIN;
	int32_t x415 = -17271926;
	int8_t x416 = 0;
	volatile int32_t t48 = 364113;

	t48 = ((x413%(x414<x415))&x416);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x417 = INT16_MAX;
	uint32_t x418 = 16168501U;
	uint32_t x420 = UINT32_MAX;
	uint32_t t49 = 6917U;

	t49 = ((x417%(x418<x419))&x420);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x425 = UINT16_MAX;
	int16_t x426 = 297;
	int32_t x427 = INT32_MAX;
	int64_t t50 = 1493750LL;

	t50 = ((x425%(x426<x427))&x428);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x434 = 107U;
	uint8_t x435 = UINT8_MAX;
	uint32_t x436 = 81741U;
	volatile uint32_t t51 = 5U;

	t51 = ((x433%(x434<x435))&x436);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x445 = INT32_MIN;
	static int32_t x446 = -1;
	int64_t x447 = 1679453LL;
	volatile uint16_t x448 = 106U;
	static volatile int32_t t52 = -16669530;

	t52 = ((x445%(x446<x447))&x448);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x449 = -1;
	volatile int8_t x450 = INT8_MIN;
	int32_t x451 = -1;
	static volatile int16_t x452 = INT16_MAX;

	t53 = ((x449%(x450<x451))&x452);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x461 = INT64_MIN;
	volatile uint64_t x463 = UINT64_MAX;
	int64_t x464 = -1LL;
	volatile int64_t t54 = -710806438270LL;

	t54 = ((x461%(x462<x463))&x464);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x466 = -1;
	int64_t x467 = 120LL;
	static int16_t x468 = -1;
	uint64_t t55 = 7396447LLU;

	t55 = ((x465%(x466<x467))&x468);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x469 = UINT32_MAX;
	volatile uint64_t x471 = 31056549LLU;
	int32_t x472 = INT32_MIN;
	uint32_t t56 = 1078U;

	t56 = ((x469%(x470<x471))&x472);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x475 = 0;
	uint32_t x476 = UINT32_MAX;
	uint32_t t57 = 1647278U;

	t57 = ((x473%(x474<x475))&x476);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x477 = INT32_MIN;
	uint32_t x478 = UINT32_MAX;
	int64_t x479 = 321564463111705LL;
	int8_t x480 = -1;
	volatile int32_t t58 = -379016;

	t58 = ((x477%(x478<x479))&x480);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x482 = 234U;
	static volatile int64_t x483 = INT64_MAX;
	uint64_t x484 = 62LLU;
	volatile uint64_t t59 = 370276491695112117LLU;

	t59 = ((x481%(x482<x483))&x484);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x486 = INT16_MIN;
	int16_t x487 = 10;
	int32_t t60 = 6;

	t60 = ((x485%(x486<x487))&x488);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x498 = -1;
	int16_t x499 = INT16_MAX;
	int16_t x500 = INT16_MAX;
	volatile int32_t t61 = -13861715;

	t61 = ((x497%(x498<x499))&x500);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x501 = 1414U;
	int64_t x502 = INT64_MIN;
	static int8_t x503 = 1;
	uint16_t x504 = 1020U;
	int32_t t62 = 0;

	t62 = ((x501%(x502<x503))&x504);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x507 = INT32_MIN;
	uint64_t x508 = UINT64_MAX;
	uint64_t t63 = 3LLU;

	t63 = ((x505%(x506<x507))&x508);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x517 = 19LLU;
	int64_t x518 = INT64_MIN;
	int16_t x519 = INT16_MIN;
	uint64_t x520 = UINT64_MAX;
	volatile uint64_t t64 = 597LLU;

	t64 = ((x517%(x518<x519))&x520);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x521 = INT8_MIN;
	uint8_t x523 = UINT8_MAX;
	int32_t x524 = -1;
	int32_t t65 = 14650;

	t65 = ((x521%(x522<x523))&x524);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x545 = -1;
	int64_t x546 = INT64_MIN;
	int16_t x547 = -1;
	uint32_t x548 = 208U;
	volatile uint32_t t66 = 446U;

	t66 = ((x545%(x546<x547))&x548);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x561 = UINT32_MAX;
	uint16_t x563 = UINT16_MAX;

	t67 = ((x561%(x562<x563))&x564);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x573 = 14U;
	static int32_t x574 = INT32_MIN;
	volatile uint16_t x575 = UINT16_MAX;
	uint16_t x576 = 324U;
	static volatile uint32_t t68 = 364448107U;

	t68 = ((x573%(x574<x575))&x576);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x577 = -303;
	int32_t x578 = INT32_MIN;
	static volatile uint16_t x579 = UINT16_MAX;
	static volatile int64_t x580 = 1594745661450934LL;
	int64_t t69 = 1587023435183210643LL;

	t69 = ((x577%(x578<x579))&x580);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x585 = INT32_MAX;
	static int64_t x586 = INT64_MIN;
	int8_t x587 = INT8_MIN;
	int64_t x588 = INT64_MAX;

	t70 = ((x585%(x586<x587))&x588);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x593 = -1LL;
	static int64_t x594 = INT64_MIN;
	int32_t x595 = INT32_MIN;
	static volatile int64_t x596 = -262915027497194LL;
	static int64_t t71 = 33315550114004LL;

	t71 = ((x593%(x594<x595))&x596);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x609 = INT32_MAX;
	volatile int16_t x610 = INT16_MIN;
	int32_t x611 = 26520609;
	volatile uint32_t x612 = UINT32_MAX;
	volatile uint32_t t72 = 9U;

	t72 = ((x609%(x610<x611))&x612);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x617 = INT64_MIN;
	volatile int32_t x618 = INT32_MIN;
	int16_t x619 = -1;
	int8_t x620 = INT8_MIN;
	int64_t t73 = 1019LL;

	t73 = ((x617%(x618<x619))&x620);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x621 = -1;
	uint16_t x623 = UINT16_MAX;
	uint8_t x624 = 58U;
	static int32_t t74 = -1247861;

	t74 = ((x621%(x622<x623))&x624);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x625 = -1;
	int16_t x626 = INT16_MIN;
	uint16_t x627 = UINT16_MAX;

	t75 = ((x625%(x626<x627))&x628);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x637 = -1;
	uint64_t x638 = 391674404423411LLU;
	int8_t x639 = INT8_MIN;
	int32_t x640 = INT32_MIN;

	t76 = ((x637%(x638<x639))&x640);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x653 = 10225950;
	int32_t x654 = -2561802;
	uint8_t x655 = UINT8_MAX;
	int8_t x656 = 9;
	int32_t t77 = -169853920;

	t77 = ((x653%(x654<x655))&x656);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x657 = -1;
	static uint64_t x658 = 4LLU;
	int32_t x659 = -7186;
	int64_t x660 = INT64_MAX;
	static volatile int64_t t78 = 0LL;

	t78 = ((x657%(x658<x659))&x660);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x665 = INT8_MIN;
	volatile int16_t x666 = INT16_MAX;
	volatile uint32_t x667 = 2003377835U;
	int32_t t79 = -1153732;

	t79 = ((x665%(x666<x667))&x668);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x669 = -1;
	volatile int64_t x672 = INT64_MIN;
	int64_t t80 = -3467402LL;

	t80 = ((x669%(x670<x671))&x672);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x677 = -25515;
	volatile int8_t x678 = -1;
	static int16_t x680 = INT16_MIN;
	static int32_t t81 = -8192296;

	t81 = ((x677%(x678<x679))&x680);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x681 = INT32_MIN;
	int64_t x682 = INT64_MIN;
	int64_t x683 = 4195266LL;
	volatile int64_t x684 = -1272088484007052LL;
	int64_t t82 = 47744LL;

	t82 = ((x681%(x682<x683))&x684);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x685 = 833;
	volatile int32_t x686 = INT32_MIN;
	int32_t x688 = -148925720;
	static volatile int32_t t83 = 131548242;

	t83 = ((x685%(x686<x687))&x688);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x689 = 1121009778U;
	static int32_t x690 = 10;
	uint32_t x691 = 6733448U;
	int8_t x692 = 7;
	volatile uint32_t t84 = 121U;

	t84 = ((x689%(x690<x691))&x692);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x697 = 6904;
	int64_t x698 = INT64_MIN;
	int32_t x700 = -1;
	int32_t t85 = -104735;

	t85 = ((x697%(x698<x699))&x700);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x702 = UINT8_MAX;
	volatile int64_t x703 = INT64_MAX;
	uint16_t x704 = UINT16_MAX;
	volatile int32_t t86 = -10;

	t86 = ((x701%(x702<x703))&x704);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x705 = INT16_MAX;
	volatile int64_t x706 = INT64_MIN;
	int32_t x707 = INT32_MIN;
	static uint16_t x708 = UINT16_MAX;
	static int32_t t87 = 3;

	t87 = ((x705%(x706<x707))&x708);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x714 = UINT16_MAX;
	volatile int64_t x716 = INT64_MIN;
	uint64_t t88 = 78079091711LLU;

	t88 = ((x713%(x714<x715))&x716);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x717 = UINT32_MAX;
	static int16_t x718 = INT16_MIN;
	uint8_t x719 = 1U;
	static volatile int8_t x720 = 3;
	uint32_t t89 = 49155U;

	t89 = ((x717%(x718<x719))&x720);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x721 = 76218U;
	int16_t x722 = -21;
	int8_t x723 = 0;
	int32_t x724 = INT32_MIN;

	t90 = ((x721%(x722<x723))&x724);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x733 = 483265;
	int8_t x734 = -5;
	uint32_t x735 = UINT32_MAX;
	static int32_t x736 = -100873772;
	volatile int32_t t91 = -2873014;

	t91 = ((x733%(x734<x735))&x736);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x745 = 7;
	uint64_t x746 = 44LLU;
	int32_t x747 = -1;
	volatile int32_t x748 = -240;
	static volatile int32_t t92 = -446555;

	t92 = ((x745%(x746<x747))&x748);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x750 = 210138593931LLU;
	static volatile int16_t x751 = -1;
	uint8_t x752 = 3U;
	int32_t t93 = -22;

	t93 = ((x749%(x750<x751))&x752);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x753 = -1;
	uint8_t x755 = UINT8_MAX;
	uint16_t x756 = 56U;
	static int32_t t94 = 134;

	t94 = ((x753%(x754<x755))&x756);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x764 = INT64_MIN;
	static volatile int64_t t95 = -10148LL;

	t95 = ((x761%(x762<x763))&x764);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x765 = INT16_MIN;
	static int8_t x766 = 0;
	int16_t x767 = 2630;
	volatile uint32_t x768 = 7U;
	volatile uint32_t t96 = 1294450U;

	t96 = ((x765%(x766<x767))&x768);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x769 = 1;
	int64_t x770 = -4218275903053258471LL;
	int32_t x771 = 10;
	uint32_t x772 = 24829456U;
	uint32_t t97 = 142U;

	t97 = ((x769%(x770<x771))&x772);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x809 = 28U;
	int16_t x810 = INT16_MAX;
	uint64_t x811 = 10353685811609LLU;
	int8_t x812 = INT8_MAX;
	int32_t t98 = -6;

	t98 = ((x809%(x810<x811))&x812);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x818 = 1U;
	volatile uint64_t t99 = 13936336326LLU;

	t99 = ((x817%(x818<x819))&x820);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

