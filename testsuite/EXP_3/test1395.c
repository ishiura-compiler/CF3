#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 2LL;
int64_t x22 = INT64_MAX;
volatile int64_t x23 = -191659002366771844LL;
int32_t x24 = INT32_MAX;
int64_t x43 = -298511831496007LL;
static uint64_t t4 = 7786914657693LLU;
uint64_t t6 = 272676009129029LLU;
static volatile uint32_t t7 = 8341400U;
int64_t x92 = INT64_MAX;
volatile int32_t t9 = -313;
static uint16_t x100 = UINT16_MAX;
volatile uint64_t t11 = 1299324689642LLU;
static volatile uint64_t x113 = UINT64_MAX;
int8_t x124 = INT8_MAX;
int8_t x128 = 1;
static uint32_t t14 = 171392U;
int32_t x130 = INT32_MIN;
int64_t x134 = 338LL;
int64_t x136 = INT64_MAX;
uint32_t x153 = 521482U;
int8_t x155 = -1;
static int32_t x156 = 2;
static uint32_t t18 = 578408U;
uint8_t x163 = 7U;
int16_t x198 = -1;
static int8_t x205 = 0;
volatile int32_t t25 = 45;
static int16_t x228 = INT16_MAX;
uint32_t x238 = 29626174U;
volatile uint32_t t29 = 8762475U;
volatile int64_t t30 = 33618514538905LL;
int64_t x285 = INT64_MIN;
int64_t t34 = -11999411295067416LL;
volatile int32_t t35 = -2;
uint16_t x336 = 22U;
volatile uint8_t x354 = 3U;
uint64_t x356 = UINT64_MAX;
uint8_t x360 = 101U;
int64_t x363 = INT64_MIN;
int64_t t41 = 45847LL;
volatile uint16_t x377 = 646U;
uint8_t x394 = 15U;
static uint32_t x396 = UINT32_MAX;
volatile int16_t x415 = INT16_MIN;
volatile int32_t x419 = -22;
volatile int64_t x423 = INT64_MIN;
uint32_t t52 = 305U;
int16_t x469 = -239;
uint8_t x470 = 1U;
volatile uint64_t x480 = 94LLU;
int64_t t55 = 1984202223724006LL;
volatile uint32_t t57 = 15421U;
int32_t x512 = INT32_MAX;
int8_t x540 = 2;
static uint32_t x549 = 14266U;
uint64_t x550 = UINT64_MAX;
uint64_t x551 = 95595391LLU;
uint8_t x555 = UINT8_MAX;
volatile uint32_t t63 = 0U;
static uint64_t x565 = 41516LLU;
volatile int8_t x594 = 50;
uint16_t x595 = 0U;
volatile int64_t t69 = -11261LL;
volatile int16_t x629 = INT16_MAX;
uint16_t x631 = 11138U;
int32_t x658 = INT32_MIN;
uint32_t x669 = 27U;
int16_t x675 = INT16_MIN;
uint32_t x680 = 28299U;
int32_t t78 = 833519;
uint8_t x718 = 29U;
uint8_t x720 = 0U;
uint8_t x721 = 26U;
volatile int16_t x724 = INT16_MIN;
static uint64_t t80 = 839018LLU;
static uint32_t x730 = 1170472665U;
int64_t x733 = INT64_MIN;
static volatile uint8_t x786 = UINT8_MAX;
uint16_t x788 = 6587U;
int32_t x807 = INT32_MIN;
static int64_t x808 = -1LL;
volatile int8_t x811 = 1;
static uint16_t x826 = 29896U;
static volatile int32_t x840 = -1;
uint64_t t90 = 119951487LLU;
int16_t x864 = INT16_MAX;
int8_t x872 = INT8_MIN;
uint64_t x874 = UINT64_MAX;
int8_t x911 = 61;
volatile int8_t x912 = INT8_MAX;


void f0(void) {
	uint8_t x5 = 28U;
	int64_t x6 = INT64_MIN;
	static int32_t x7 = -672529015;
	int8_t x8 = -1;

	t0 = ((x5/x6)/(x7<x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -1;
	int64_t x10 = 1547766215LL;
	uint64_t x11 = 39259392013745LLU;
	volatile int32_t x12 = INT32_MIN;
	static volatile int64_t t1 = -5820015353LL;

	t1 = ((x9/x10)/(x11<x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x21 = INT8_MIN;
	volatile int64_t t2 = -2310751335380574985LL;

	t2 = ((x21/x22)/(x23<x24));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int8_t x42 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	int32_t t3 = -490777592;

	t3 = ((x41/x42)/(x43<x44));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x53 = 7567950241079LLU;
	volatile uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MIN;
	uint16_t x56 = 1U;

	t4 = ((x53/x54)/(x55<x56));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = INT64_MIN;
	static int8_t x59 = INT8_MIN;
	int16_t x60 = -1;
	int64_t t5 = -9536LL;

	t5 = ((x57/x58)/(x59<x60));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x61 = UINT64_MAX;
	uint16_t x62 = 17U;
	int64_t x63 = INT64_MIN;
	int16_t x64 = 1;

	t6 = ((x61/x62)/(x63<x64));

	if (t6 != 1085102592571150095LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x81 = 0U;
	uint32_t x82 = 17229637U;
	static int32_t x83 = INT32_MIN;
	static int16_t x84 = INT16_MIN;

	t7 = ((x81/x82)/(x83<x84));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x89 = INT8_MAX;
	static uint64_t x90 = 15429791600LLU;
	int64_t x91 = INT64_MIN;
	static uint64_t t8 = 357430166084100LLU;

	t8 = ((x89/x90)/(x91<x92));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x93 = -55;
	int32_t x94 = -8123;
	int16_t x95 = -2584;
	int16_t x96 = 14501;

	t9 = ((x93/x94)/(x95<x96));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x97 = 2585U;
	static int64_t x98 = -1LL;
	int8_t x99 = -1;
	static int64_t t10 = 7849560405662049LL;

	t10 = ((x97/x98)/(x99<x100));

	if (t10 != -2585LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x109 = UINT16_MAX;
	uint64_t x110 = 1783027771LLU;
	int32_t x111 = INT32_MIN;
	uint8_t x112 = UINT8_MAX;

	t11 = ((x109/x110)/(x111<x112));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x114 = -1LL;
	int8_t x115 = INT8_MIN;
	volatile uint64_t x116 = UINT64_MAX;
	volatile uint64_t t12 = 378101LLU;

	t12 = ((x113/x114)/(x115<x116));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x121 = 32;
	int32_t x122 = INT32_MAX;
	volatile int64_t x123 = -11135593405LL;
	int32_t t13 = 405563060;

	t13 = ((x121/x122)/(x123<x124));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x125 = 999869U;
	static uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MIN;

	t14 = ((x125/x126)/(x127<x128));

	if (t14 != 3921U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x129 = -166287877049014229LL;
	int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MAX;
	volatile int64_t t15 = -181116229LL;

	t15 = ((x129/x130)/(x131<x132));

	if (t15 != 77433826LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x133 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	volatile int64_t t16 = -9LL;

	t16 = ((x133/x134)/(x135<x136));

	if (t16 != -96LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MAX;
	volatile uint8_t x151 = 15U;
	static int16_t x152 = 307;
	volatile int32_t t17 = -411;

	t17 = ((x149/x150)/(x151<x152));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x154 = 392U;

	t18 = ((x153/x154)/(x155<x156));

	if (t18 != 1330U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x161 = 59U;
	uint32_t x162 = UINT32_MAX;
	int16_t x164 = 8995;
	uint32_t t19 = 1U;

	t19 = ((x161/x162)/(x163<x164));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x165 = 16;
	static int16_t x166 = INT16_MAX;
	volatile int32_t x167 = 1;
	uint8_t x168 = 5U;
	static int32_t t20 = -29;

	t20 = ((x165/x166)/(x167<x168));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x173 = INT64_MAX;
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	volatile uint32_t x176 = UINT32_MAX;
	volatile int64_t t21 = -103485097242LL;

	t21 = ((x173/x174)/(x175<x176));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x181 = 0;
	int32_t x182 = INT32_MAX;
	volatile int16_t x183 = -34;
	volatile int32_t x184 = 392;
	static volatile int32_t t22 = 10625792;

	t22 = ((x181/x182)/(x183<x184));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x197 = -15;
	volatile int32_t x199 = -22755248;
	static uint8_t x200 = 55U;
	int32_t t23 = -390;

	t23 = ((x197/x198)/(x199<x200));

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x201 = INT64_MAX;
	volatile int64_t x202 = INT64_MIN;
	uint8_t x203 = 9U;
	uint64_t x204 = 50796557LLU;
	int64_t t24 = 91LL;

	t24 = ((x201/x202)/(x203<x204));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x206 = -1;
	int64_t x207 = -1LL;
	int32_t x208 = INT32_MAX;

	t25 = ((x205/x206)/(x207<x208));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x213 = 55LLU;
	int16_t x214 = INT16_MIN;
	static volatile int16_t x215 = 12;
	int64_t x216 = INT64_MAX;
	volatile uint64_t t26 = 56914LLU;

	t26 = ((x213/x214)/(x215<x216));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x221 = INT8_MAX;
	static uint64_t x222 = 3343157LLU;
	volatile int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;
	static volatile uint64_t t27 = 7908797LLU;

	t27 = ((x221/x222)/(x223<x224));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x225 = -28;
	uint16_t x226 = UINT16_MAX;
	static int16_t x227 = INT16_MIN;
	volatile int32_t t28 = -441285;

	t28 = ((x225/x226)/(x227<x228));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x237 = 0U;
	int8_t x239 = INT8_MIN;
	static int32_t x240 = 6377;

	t29 = ((x237/x238)/(x239<x240));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x241 = -1LL;
	volatile int16_t x242 = INT16_MIN;
	int16_t x243 = -1;
	uint8_t x244 = 1U;

	t30 = ((x241/x242)/(x243<x244));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = -3149435697862LL;
	int32_t x251 = INT32_MIN;
	int32_t x252 = -1;
	volatile int64_t t31 = -526091096203077304LL;

	t31 = ((x249/x250)/(x251<x252));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x253 = 31U;
	int16_t x254 = INT16_MAX;
	uint8_t x255 = 6U;
	uint16_t x256 = 12U;
	int32_t t32 = -1845142;

	t32 = ((x253/x254)/(x255<x256));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x286 = 332;
	uint8_t x287 = UINT8_MAX;
	uint32_t x288 = UINT32_MAX;
	int64_t t33 = -960782LL;

	t33 = ((x285/x286)/(x287<x288));

	if (t33 != -27781241074863782LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x289 = INT8_MIN;
	int64_t x290 = 5629686257761LL;
	uint32_t x291 = 0U;
	uint16_t x292 = 5538U;

	t34 = ((x289/x290)/(x291<x292));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x293 = UINT16_MAX;
	int16_t x294 = 41;
	volatile uint16_t x295 = 741U;
	int32_t x296 = 193655;

	t35 = ((x293/x294)/(x295<x296));

	if (t35 != 1598) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x317 = -25;
	static int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = UINT16_MAX;
	int32_t t36 = 1787131;

	t36 = ((x317/x318)/(x319<x320));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MIN;
	volatile int16_t x335 = INT16_MIN;
	uint64_t t37 = 241877LLU;

	t37 = ((x333/x334)/(x335<x336));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x353 = UINT16_MAX;
	uint64_t x355 = 15LLU;
	int32_t t38 = -108906998;

	t38 = ((x353/x354)/(x355<x356));

	if (t38 != 21845) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x357 = INT32_MIN;
	static uint16_t x358 = UINT16_MAX;
	int8_t x359 = 1;
	int32_t t39 = -876190;

	t39 = ((x357/x358)/(x359<x360));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int64_t x362 = INT64_MIN;
	int32_t x364 = INT32_MIN;
	static volatile int64_t t40 = 11610213LL;

	t40 = ((x361/x362)/(x363<x364));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x365 = -42666317246546LL;
	uint16_t x366 = 9U;
	volatile int32_t x367 = INT32_MIN;
	uint16_t x368 = 15U;

	t41 = ((x365/x366)/(x367<x368));

	if (t41 != -4740701916282LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x373 = UINT8_MAX;
	int16_t x374 = -2831;
	uint16_t x375 = 1U;
	uint32_t x376 = 34851U;
	static volatile int32_t t42 = -238843;

	t42 = ((x373/x374)/(x375<x376));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x378 = INT32_MIN;
	int8_t x379 = 3;
	uint16_t x380 = 429U;
	int32_t t43 = -3509758;

	t43 = ((x377/x378)/(x379<x380));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x381 = 0;
	int8_t x382 = INT8_MIN;
	volatile uint64_t x383 = 1559766LLU;
	int16_t x384 = INT16_MIN;
	volatile int32_t t44 = -8566108;

	t44 = ((x381/x382)/(x383<x384));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x385 = UINT64_MAX;
	static int32_t x386 = -1;
	uint64_t x387 = 2492LLU;
	int8_t x388 = -22;
	volatile uint64_t t45 = 266594LLU;

	t45 = ((x385/x386)/(x387<x388));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x393 = -1;
	int32_t x395 = INT32_MIN;
	int32_t t46 = 6737964;

	t46 = ((x393/x394)/(x395<x396));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x405 = 1148236LLU;
	volatile int8_t x406 = INT8_MIN;
	int64_t x407 = -337468917732880923LL;
	int8_t x408 = -1;
	uint64_t t47 = 34609058482211LLU;

	t47 = ((x405/x406)/(x407<x408));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x413 = -20;
	static int64_t x414 = -38237437LL;
	volatile int8_t x416 = INT8_MIN;
	volatile int64_t t48 = 174678244LL;

	t48 = ((x413/x414)/(x415<x416));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x417 = INT32_MAX;
	uint8_t x418 = 1U;
	int64_t x420 = -3LL;
	static volatile int32_t t49 = INT32_MAX;

	t49 = ((x417/x418)/(x419<x420));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x421 = -2240307;
	int8_t x422 = INT8_MIN;
	int8_t x424 = -2;
	volatile int32_t t50 = 104039488;

	t50 = ((x421/x422)/(x423<x424));

	if (t50 != 17502) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x453 = UINT16_MAX;
	uint16_t x454 = UINT16_MAX;
	static int16_t x455 = INT16_MIN;
	int16_t x456 = 6989;
	volatile int32_t t51 = 141853980;

	t51 = ((x453/x454)/(x455<x456));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x457 = INT16_MAX;
	static uint32_t x458 = 597U;
	volatile int64_t x459 = INT64_MIN;
	int16_t x460 = -1;

	t52 = ((x457/x458)/(x459<x460));

	if (t52 != 54U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x471 = 13181835086245LLU;
	int16_t x472 = -2;
	int32_t t53 = 102;

	t53 = ((x469/x470)/(x471<x472));

	if (t53 != -239) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x477 = -1;
	uint16_t x478 = UINT16_MAX;
	int8_t x479 = 0;
	volatile int32_t t54 = -11980248;

	t54 = ((x477/x478)/(x479<x480));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x481 = INT64_MIN;
	int64_t x482 = INT64_MAX;
	static int64_t x483 = INT64_MIN;
	static int64_t x484 = -9LL;

	t55 = ((x481/x482)/(x483<x484));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x493 = -1;
	uint16_t x494 = 291U;
	volatile int32_t x495 = -3366091;
	int64_t x496 = 1950LL;
	static volatile int32_t t56 = -5;

	t56 = ((x493/x494)/(x495<x496));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x497 = -126;
	uint32_t x498 = UINT32_MAX;
	static int8_t x499 = -1;
	static int32_t x500 = 126138305;

	t57 = ((x497/x498)/(x499<x500));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x509 = 3286520052895930LLU;
	static int64_t x510 = 8589475104LL;
	int32_t x511 = INT32_MIN;
	uint64_t t58 = 20624LLU;

	t58 = ((x509/x510)/(x511<x512));

	if (t58 != 382621LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x529 = INT16_MIN;
	int8_t x530 = 2;
	uint32_t x531 = 391U;
	volatile int32_t x532 = -105598;
	volatile int32_t t59 = 329960;

	t59 = ((x529/x530)/(x531<x532));

	if (t59 != -16384) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x537 = 289022;
	uint16_t x538 = 25232U;
	uint16_t x539 = 0U;
	static volatile int32_t t60 = 182;

	t60 = ((x537/x538)/(x539<x540));

	if (t60 != 11) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x552 = UINT32_MAX;
	uint64_t t61 = 30905996219279LLU;

	t61 = ((x549/x550)/(x551<x552));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x553 = INT32_MIN;
	static volatile uint16_t x554 = 15722U;
	uint64_t x556 = 112930699LLU;
	int32_t t62 = 31;

	t62 = ((x553/x554)/(x555<x556));

	if (t62 != -136590) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x557 = 14U;
	static int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MIN;
	int16_t x560 = INT16_MAX;

	t63 = ((x557/x558)/(x559<x560));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x561 = UINT16_MAX;
	int16_t x562 = INT16_MAX;
	volatile int8_t x563 = 0;
	uint32_t x564 = UINT32_MAX;
	static int32_t t64 = 0;

	t64 = ((x561/x562)/(x563<x564));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x566 = INT64_MIN;
	static volatile int8_t x567 = INT8_MIN;
	int64_t x568 = INT64_MAX;
	static uint64_t t65 = 29537302901060LLU;

	t65 = ((x565/x566)/(x567<x568));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x573 = 41;
	static volatile int16_t x574 = INT16_MIN;
	int16_t x575 = INT16_MIN;
	int8_t x576 = INT8_MIN;
	static int32_t t66 = 3276;

	t66 = ((x573/x574)/(x575<x576));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x593 = INT32_MIN;
	volatile uint64_t x596 = UINT64_MAX;
	volatile int32_t t67 = -854;

	t67 = ((x593/x594)/(x595<x596));

	if (t67 != -42949672) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x605 = -2461;
	volatile int8_t x606 = -18;
	int32_t x607 = INT32_MIN;
	uint16_t x608 = UINT16_MAX;
	int32_t t68 = 0;

	t68 = ((x605/x606)/(x607<x608));

	if (t68 != 136) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x613 = INT64_MIN;
	static uint16_t x614 = UINT16_MAX;
	int16_t x615 = -3394;
	volatile int16_t x616 = -350;

	t69 = ((x613/x614)/(x615<x616));

	if (t69 != -140739635871744LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x630 = -14LL;
	static int32_t x632 = INT32_MAX;
	int64_t t70 = 74436114546572LL;

	t70 = ((x629/x630)/(x631<x632));

	if (t70 != -2340LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x633 = 652U;
	volatile int64_t x634 = INT64_MIN;
	int8_t x635 = -1;
	uint16_t x636 = 5U;
	int64_t t71 = 6LL;

	t71 = ((x633/x634)/(x635<x636));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x657 = INT64_MAX;
	volatile uint8_t x659 = 44U;
	int32_t x660 = INT32_MAX;
	static int64_t t72 = -2237945449574408LL;

	t72 = ((x657/x658)/(x659<x660));

	if (t72 != -4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x661 = INT32_MIN;
	int32_t x662 = -163928943;
	int32_t x663 = -24912;
	int64_t x664 = INT64_MAX;
	volatile int32_t t73 = -6757;

	t73 = ((x661/x662)/(x663<x664));

	if (t73 != 13) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x670 = INT32_MIN;
	uint8_t x671 = UINT8_MAX;
	int64_t x672 = 7939LL;
	static volatile uint32_t t74 = 11U;

	t74 = ((x669/x670)/(x671<x672));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x673 = -1;
	int64_t x674 = INT64_MIN;
	static int64_t x676 = 28977846556779563LL;
	static int64_t t75 = -8996LL;

	t75 = ((x673/x674)/(x675<x676));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x677 = INT32_MIN;
	int64_t x678 = 392014LL;
	int8_t x679 = INT8_MAX;
	int64_t t76 = 4115LL;

	t76 = ((x677/x678)/(x679<x680));

	if (t76 != -5478LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x689 = INT64_MIN;
	int64_t x690 = INT64_MIN;
	volatile int64_t x691 = -3693188153LL;
	uint64_t x692 = UINT64_MAX;
	volatile int64_t t77 = -30612965409505LL;

	t77 = ((x689/x690)/(x691<x692));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x701 = INT32_MIN;
	static uint8_t x702 = UINT8_MAX;
	int32_t x703 = INT32_MAX;
	uint32_t x704 = UINT32_MAX;

	t78 = ((x701/x702)/(x703<x704));

	if (t78 != -8421504) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x717 = 2;
	int64_t x719 = -1LL;
	volatile int32_t t79 = 1791;

	t79 = ((x717/x718)/(x719<x720));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x722 = 170LLU;
	static int32_t x723 = INT32_MIN;

	t80 = ((x721/x722)/(x723<x724));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x729 = 12036LLU;
	int32_t x731 = -72;
	int16_t x732 = 20;
	volatile uint64_t t81 = 4929LLU;

	t81 = ((x729/x730)/(x731<x732));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x734 = 27;
	int32_t x735 = INT32_MIN;
	int8_t x736 = -1;
	int64_t t82 = -923089499406054860LL;

	t82 = ((x733/x734)/(x735<x736));

	if (t82 != -341606371735362066LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x777 = -1;
	uint16_t x778 = UINT16_MAX;
	int64_t x779 = INT64_MIN;
	volatile int16_t x780 = 0;
	int32_t t83 = 391286;

	t83 = ((x777/x778)/(x779<x780));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x785 = 74U;
	int8_t x787 = -58;
	volatile int32_t t84 = 1741;

	t84 = ((x785/x786)/(x787<x788));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x805 = 6U;
	uint16_t x806 = UINT16_MAX;
	int32_t t85 = 247;

	t85 = ((x805/x806)/(x807<x808));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x809 = INT32_MIN;
	int32_t x810 = INT32_MIN;
	volatile uint64_t x812 = UINT64_MAX;
	static int32_t t86 = -110932635;

	t86 = ((x809/x810)/(x811<x812));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x825 = -1496;
	int8_t x827 = INT8_MIN;
	int64_t x828 = -1LL;
	int32_t t87 = 489062;

	t87 = ((x825/x826)/(x827<x828));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x837 = INT16_MAX;
	static volatile uint32_t x838 = 7941038U;
	uint32_t x839 = 32U;
	volatile uint32_t t88 = 2U;

	t88 = ((x837/x838)/(x839<x840));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x845 = -1LL;
	uint32_t x846 = UINT32_MAX;
	int8_t x847 = INT8_MIN;
	int64_t x848 = -1LL;
	int64_t t89 = -39725070309680LL;

	t89 = ((x845/x846)/(x847<x848));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x857 = 0LLU;
	int64_t x858 = 2958259786579LL;
	volatile uint16_t x859 = 1U;
	int64_t x860 = 321LL;

	t90 = ((x857/x858)/(x859<x860));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x861 = 40;
	int32_t x862 = -212266;
	static int16_t x863 = INT16_MIN;
	int32_t t91 = 5;

	t91 = ((x861/x862)/(x863<x864));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x865 = INT16_MIN;
	int8_t x866 = -35;
	volatile uint16_t x867 = UINT16_MAX;
	uint32_t x868 = 1312428U;
	volatile int32_t t92 = -760535561;

	t92 = ((x865/x866)/(x867<x868));

	if (t92 != 936) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x869 = 5275U;
	uint32_t x870 = UINT32_MAX;
	uint64_t x871 = 38LLU;
	volatile uint32_t t93 = 19222477U;

	t93 = ((x869/x870)/(x871<x872));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x873 = UINT16_MAX;
	volatile int64_t x875 = -1LL;
	uint8_t x876 = 55U;
	uint64_t t94 = 527825706239LLU;

	t94 = ((x873/x874)/(x875<x876));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x881 = INT32_MIN;
	static uint64_t x882 = 4206863121198866831LLU;
	int64_t x883 = -26LL;
	uint32_t x884 = UINT32_MAX;
	uint64_t t95 = 2972055LLU;

	t95 = ((x881/x882)/(x883<x884));

	if (t95 != 4LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x897 = -1;
	volatile int8_t x898 = INT8_MIN;
	int8_t x899 = 0;
	volatile uint16_t x900 = 2535U;
	volatile int32_t t96 = -232865;

	t96 = ((x897/x898)/(x899<x900));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x905 = INT16_MAX;
	volatile int64_t x906 = -1LL;
	int8_t x907 = INT8_MAX;
	volatile uint8_t x908 = UINT8_MAX;
	static int64_t t97 = 32LL;

	t97 = ((x905/x906)/(x907<x908));

	if (t97 != -32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x909 = -1;
	static int16_t x910 = -47;
	static int32_t t98 = -151408;

	t98 = ((x909/x910)/(x911<x912));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x921 = -184734312;
	int64_t x922 = -406051LL;
	int16_t x923 = -1675;
	int16_t x924 = 1;
	int64_t t99 = -7479099327921LL;

	t99 = ((x921/x922)/(x923<x924));

	if (t99 != 454LL) { NG(); } else { ; }
	
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

