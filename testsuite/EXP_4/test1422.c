#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = -6;
static int32_t x23 = INT32_MAX;
volatile int32_t t5 = -3;
volatile int32_t t6 = -7677196;
uint32_t t8 = 353U;
volatile uint64_t t9 = 90828LLU;
uint32_t x81 = 2093937U;
volatile uint16_t x83 = UINT16_MAX;
int64_t t10 = 457442LL;
uint16_t x85 = 1806U;
volatile int32_t t11 = 32;
uint64_t t12 = 24014858LLU;
int16_t x102 = INT16_MAX;
uint16_t x105 = 50U;
volatile int64_t t16 = 14542124LL;
volatile int16_t x120 = INT16_MIN;
uint32_t x130 = 3U;
int8_t x135 = INT8_MIN;
static int64_t x161 = -1LL;
int64_t x162 = 13LL;
volatile int32_t t25 = -464040317;
static uint16_t x186 = 1U;
int8_t x200 = 5;
uint32_t x213 = 44407U;
static uint16_t x215 = 29370U;
int64_t t31 = -6600960685LL;
static uint64_t t38 = 163084074LLU;
int8_t x338 = INT8_MAX;
volatile int32_t t40 = -1037861570;
static int16_t x353 = 174;
int32_t x354 = INT32_MAX;
int32_t t41 = -894480;
int8_t x358 = 9;
int8_t x372 = INT8_MIN;
int32_t t44 = 6;
int16_t x373 = -1;
int8_t x381 = INT8_MIN;
int64_t x382 = 1603979524558563611LL;
int64_t x388 = INT64_MIN;
volatile int64_t x417 = INT64_MIN;
volatile uint64_t t50 = 1577204591477561620LLU;
int32_t x426 = 39554062;
volatile uint64_t t52 = 118186305LLU;
int8_t x441 = INT8_MIN;
static int16_t x446 = INT16_MAX;
uint64_t x447 = 1961124831052169966LLU;
int16_t x464 = -1;
int32_t x466 = INT32_MAX;
uint8_t x470 = UINT8_MAX;
uint16_t x486 = 6741U;
int8_t x488 = INT8_MIN;
int64_t x497 = INT64_MIN;
int16_t x501 = INT16_MIN;
int32_t t63 = 42176928;
uint8_t x512 = 2U;
volatile int32_t t64 = 163567;
volatile int16_t x522 = 7888;
volatile int32_t t67 = 4133696;
uint32_t x526 = 9U;
uint32_t t68 = 29237235U;
uint16_t x530 = 26149U;
static int32_t t69 = 124920;
static volatile uint16_t x536 = 127U;
int32_t t71 = -552;
static uint16_t x542 = UINT16_MAX;
int64_t x543 = INT64_MIN;
int32_t t72 = -544634;
uint16_t x546 = 6U;
uint32_t x554 = UINT32_MAX;
uint16_t x556 = UINT16_MAX;
int8_t x559 = -24;
int8_t x562 = 1;
static int32_t x584 = INT32_MIN;
uint64_t x587 = 29271117583373LLU;
int64_t x588 = INT64_MAX;
int16_t x599 = INT16_MIN;
int8_t x600 = 3;
int32_t x613 = INT32_MAX;
int16_t x622 = INT16_MAX;
uint16_t x624 = 9U;
uint8_t x627 = 18U;
volatile int64_t x628 = INT64_MIN;
volatile int8_t x629 = INT8_MIN;
int64_t x636 = 16300439LL;
uint32_t t85 = 860443311U;
volatile int32_t t87 = -8542819;
int16_t x648 = INT16_MIN;
int16_t x663 = -1;
uint64_t x673 = 83782313434287352LLU;
int16_t x687 = INT16_MIN;
volatile int32_t t92 = 2;
volatile int32_t t94 = 97657896;
int32_t t96 = 548875;
int8_t x713 = 45;
static int16_t x716 = -3;
uint32_t t98 = 24090U;
int64_t x723 = INT64_MAX;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int32_t x2 = 2482295;
	uint8_t x3 = 101U;
	static int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 1429;

	t0 = (x1%(x2<<(x3<x4)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -15000;
	uint64_t x10 = 13604029403289LLU;
	int64_t x11 = INT64_MIN;
	static int32_t x12 = -1;
	uint64_t t1 = 204875665922649083LLU;

	t1 = (x9%(x10<<(x11<x12)));

	if (t1 != 6699555331552LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	volatile int8_t x14 = INT8_MAX;
	uint64_t x15 = 516439001433LLU;
	static int8_t x16 = -1;

	t2 = (x13%(x14<<(x15<x16)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = 48409751729152261LL;
	uint16_t x19 = 1268U;
	static int64_t x20 = 3530379515LL;
	volatile int64_t t3 = -254955665490LL;

	t3 = (x17%(x18<<(x19<x20)));

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	uint16_t x22 = 1U;
	static int64_t x24 = INT64_MIN;
	uint32_t t4 = 862154U;

	t4 = (x21%(x22<<(x23<x24)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x30 = 20848U;
	static int32_t x31 = -105261;
	static int32_t x32 = -1;

	t5 = (x29%(x30<<(x31<x32)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MIN;
	static uint16_t x34 = 88U;
	int8_t x35 = INT8_MIN;
	static uint32_t x36 = UINT32_MAX;

	t6 = (x33%(x34<<(x35<x36)));

	if (t6 != -32) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 7618U;
	volatile uint32_t x38 = UINT32_MAX;
	static int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MIN;
	volatile uint32_t t7 = 16762905U;

	t7 = (x37%(x38<<(x39<x40)));

	if (t7 != 7618U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	uint32_t x42 = UINT32_MAX;
	int64_t x43 = -1LL;
	int32_t x44 = -109199;

	t8 = (x41%(x42<<(x43<x44)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = INT8_MIN;
	static uint64_t x70 = 489216591LLU;
	volatile uint16_t x71 = UINT16_MAX;
	uint16_t x72 = 3386U;

	t9 = (x69%(x70<<(x71<x72)));

	if (t9 != 397314968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x82 = INT64_MAX;
	int64_t x84 = -37152LL;

	t10 = (x81%(x82<<(x83<x84)));

	if (t10 != 2093937LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x86 = UINT16_MAX;
	static int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MIN;

	t11 = (x85%(x86<<(x87<x88)));

	if (t11 != 1806) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x93 = -14096909317503098LL;
	static uint64_t x94 = 40523917182LLU;
	uint64_t x95 = 2670525133757995424LLU;
	static uint32_t x96 = UINT32_MAX;

	t12 = (x93%(x94<<(x95<x96)));

	if (t12 != 34485148250LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x97 = -1;
	static uint8_t x98 = 6U;
	static int16_t x99 = -1;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t13 = -37106568;

	t13 = (x97%(x98<<(x99<x100)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x101 = INT16_MIN;
	uint8_t x103 = UINT8_MAX;
	volatile int32_t x104 = 473531662;
	int32_t t14 = 251;

	t14 = (x101%(x102<<(x103<x104)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x106 = 1U;
	int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	int32_t t15 = -521260;

	t15 = (x105%(x106<<(x107<x108)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x109 = -1LL;
	uint8_t x110 = 1U;
	uint8_t x111 = UINT8_MAX;
	int64_t x112 = -1LL;

	t16 = (x109%(x110<<(x111<x112)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x117 = UINT16_MAX;
	uint64_t x118 = UINT64_MAX;
	volatile int8_t x119 = -1;
	static volatile uint64_t t17 = 8975454308687LLU;

	t17 = (x117%(x118<<(x119<x120)));

	if (t17 != 65535LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x129 = -1;
	int64_t x131 = INT64_MIN;
	uint64_t x132 = 2987681865511270364LLU;
	uint32_t t18 = 154550224U;

	t18 = (x129%(x130<<(x131<x132)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x133 = 1273U;
	volatile int64_t x134 = 2833LL;
	int32_t x136 = INT32_MIN;
	volatile int64_t t19 = -11266282713513015LL;

	t19 = (x133%(x134<<(x135<x136)));

	if (t19 != 1273LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x137 = -7513;
	static uint64_t x138 = 3591430381782622645LLU;
	int8_t x139 = -1;
	uint8_t x140 = 35U;
	volatile uint64_t t20 = 6LLU;

	t20 = (x137%(x138<<(x139<x140)));

	if (t20 != 4081022546579053523LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x141 = INT64_MIN;
	uint32_t x142 = 28570238U;
	static int32_t x143 = 1;
	volatile int16_t x144 = INT16_MAX;
	static int64_t t21 = 3374LL;

	t21 = (x141%(x142<<(x143<x144)));

	if (t21 != -40720920LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x163 = UINT64_MAX;
	static int16_t x164 = 3;
	static volatile int64_t t22 = 0LL;

	t22 = (x161%(x162<<(x163<x164)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x165 = -1;
	uint32_t x166 = 1U;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = INT8_MIN;
	uint32_t t23 = 20516237U;

	t23 = (x165%(x166<<(x167<x168)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x173 = INT32_MIN;
	int8_t x174 = 1;
	int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	static volatile int32_t t24 = -786806;

	t24 = (x173%(x174<<(x175<x176)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x177 = -1;
	volatile uint16_t x178 = UINT16_MAX;
	int64_t x179 = 4779206494879132LL;
	int32_t x180 = 7081;

	t25 = (x177%(x178<<(x179<x180)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x185 = INT8_MAX;
	uint16_t x187 = UINT16_MAX;
	int8_t x188 = INT8_MIN;
	volatile int32_t t26 = -212503;

	t26 = (x185%(x186<<(x187<x188)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x197 = INT32_MIN;
	volatile uint16_t x198 = 9852U;
	uint8_t x199 = 3U;
	volatile int32_t t27 = -1417522;

	t27 = (x197%(x198<<(x199<x200)));

	if (t27 != -3800) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x209 = INT32_MIN;
	uint32_t x210 = 28479U;
	int8_t x211 = -1;
	volatile int8_t x212 = 6;
	uint32_t t28 = 16159866U;

	t28 = (x209%(x210<<(x211<x212)));

	if (t28 != 53132U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x214 = 19U;
	static int8_t x216 = INT8_MIN;
	volatile uint32_t t29 = 116511U;

	t29 = (x213%(x214<<(x215<x216)));

	if (t29 != 4U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x217 = INT8_MIN;
	uint32_t x218 = 16U;
	int64_t x219 = -5873352731461LL;
	volatile int16_t x220 = 3942;
	volatile uint32_t t30 = 14834U;

	t30 = (x217%(x218<<(x219<x220)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x221 = INT64_MAX;
	volatile uint32_t x222 = UINT32_MAX;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = UINT8_MAX;

	t31 = (x221%(x222<<(x223<x224)));

	if (t31 != 2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x245 = UINT32_MAX;
	uint16_t x246 = UINT16_MAX;
	int32_t x247 = 30;
	int32_t x248 = INT32_MAX;
	static uint32_t t32 = 11813360U;

	t32 = (x245%(x246<<(x247<x248)));

	if (t32 != 65535U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x257 = UINT64_MAX;
	static uint64_t x258 = 426LLU;
	int64_t x259 = -1LL;
	static volatile int8_t x260 = -1;
	uint64_t t33 = 13LLU;

	t33 = (x257%(x258<<(x259<x260)));

	if (t33 != 9LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 37U;
	static int8_t x263 = 19;
	int32_t x264 = -1;
	static int32_t t34 = 343526;

	t34 = (x261%(x262<<(x263<x264)));

	if (t34 != 33) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x281 = INT8_MIN;
	uint8_t x282 = 11U;
	static int8_t x283 = INT8_MIN;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t35 = 33895344;

	t35 = (x281%(x282<<(x283<x284)));

	if (t35 != -18) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x297 = UINT32_MAX;
	uint64_t x298 = 1697852801350658LLU;
	volatile uint64_t x299 = UINT64_MAX;
	uint16_t x300 = 56U;
	static uint64_t t36 = 4062346239LLU;

	t36 = (x297%(x298<<(x299<x300)));

	if (t36 != 4294967295LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x305 = 12731LLU;
	int8_t x306 = INT8_MAX;
	uint32_t x307 = UINT32_MAX;
	int8_t x308 = 6;
	volatile uint64_t t37 = 3258706255745270LLU;

	t37 = (x305%(x306<<(x307<x308)));

	if (t37 != 31LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x325 = INT32_MAX;
	uint64_t x326 = 30044238001LLU;
	static int64_t x327 = 1637803253152960739LL;
	int16_t x328 = -1;

	t38 = (x325%(x326<<(x327<x328)));

	if (t38 != 2147483647LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x333 = UINT16_MAX;
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MAX;
	int32_t x336 = -25;
	int32_t t39 = 7350594;

	t39 = (x333%(x334<<(x335<x336)));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x337 = 5;
	static uint16_t x339 = 13U;
	uint8_t x340 = 37U;

	t40 = (x337%(x338<<(x339<x340)));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x355 = 1320782880U;
	static int64_t x356 = -1LL;

	t41 = (x353%(x354<<(x355<x356)));

	if (t41 != 174) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x357 = 130U;
	uint16_t x359 = 214U;
	int16_t x360 = 2;
	uint32_t t42 = 120756U;

	t42 = (x357%(x358<<(x359<x360)));

	if (t42 != 4U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x365 = 0U;
	uint32_t x366 = UINT32_MAX;
	static uint64_t x367 = 98065LLU;
	static uint64_t x368 = 3679086LLU;
	uint32_t t43 = 210970188U;

	t43 = (x365%(x366<<(x367<x368)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x369 = 121U;
	static int32_t x370 = 24616;
	static uint32_t x371 = 1744101U;

	t44 = (x369%(x370<<(x371<x372)));

	if (t44 != 121) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x374 = 1U;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	static int32_t t45 = 13162887;

	t45 = (x373%(x374<<(x375<x376)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x383 = INT64_MAX;
	int16_t x384 = INT16_MAX;
	static volatile int64_t t46 = 2094660097501266509LL;

	t46 = (x381%(x382<<(x383<x384)));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x385 = INT16_MAX;
	volatile int32_t x386 = INT32_MAX;
	volatile int8_t x387 = -1;
	static volatile int32_t t47 = 1944374;

	t47 = (x385%(x386<<(x387<x388)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x397 = INT64_MIN;
	uint16_t x398 = 4U;
	uint64_t x399 = 64572563292LLU;
	static int16_t x400 = -1;
	volatile int64_t t48 = 2LL;

	t48 = (x397%(x398<<(x399<x400)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x418 = 983596LLU;
	uint64_t x419 = 10037691378295159LLU;
	volatile int16_t x420 = INT16_MIN;
	volatile uint64_t t49 = 9LLU;

	t49 = (x417%(x418<<(x419<x420)));

	if (t49 != 1266608LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x421 = INT32_MAX;
	static uint64_t x422 = 25976625LLU;
	volatile int16_t x423 = -105;
	static int16_t x424 = INT16_MAX;

	t50 = (x421%(x422<<(x423<x424)));

	if (t50 != 17400397LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x425 = 15543U;
	int8_t x427 = 7;
	uint32_t x428 = 790U;
	static int32_t t51 = -2133;

	t51 = (x425%(x426<<(x427<x428)));

	if (t51 != 15543) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x429 = 7830431LLU;
	static uint32_t x430 = 23151U;
	int64_t x431 = 778611582291836307LL;
	int64_t x432 = INT64_MIN;

	t52 = (x429%(x430<<(x431<x432)));

	if (t52 != 5393LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x442 = 9279;
	volatile int8_t x443 = INT8_MAX;
	int8_t x444 = -13;
	volatile int32_t t53 = 227;

	t53 = (x441%(x442<<(x443<x444)));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x445 = INT16_MIN;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t54 = -274824292;

	t54 = (x445%(x446<<(x447<x448)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x461 = 1383842578U;
	volatile uint32_t x462 = UINT32_MAX;
	int64_t x463 = 13453841269LL;
	static volatile uint32_t t55 = 2303131U;

	t55 = (x461%(x462<<(x463<x464)));

	if (t55 != 1383842578U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x465 = 62U;
	volatile int8_t x467 = 3;
	int8_t x468 = INT8_MIN;
	volatile int32_t t56 = -2850;

	t56 = (x465%(x466<<(x467<x468)));

	if (t56 != 62) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x469 = 4U;
	int8_t x471 = -1;
	int8_t x472 = -2;
	volatile int32_t t57 = 5289;

	t57 = (x469%(x470<<(x471<x472)));

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x473 = INT32_MIN;
	uint32_t x474 = UINT32_MAX;
	volatile int16_t x475 = INT16_MIN;
	int32_t x476 = -162242567;
	uint32_t t58 = 15U;

	t58 = (x473%(x474<<(x475<x476)));

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x477 = 1U;
	uint32_t x478 = 1478U;
	volatile int32_t x479 = -1;
	int32_t x480 = -344;
	volatile uint32_t t59 = 1593529U;

	t59 = (x477%(x478<<(x479<x480)));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x485 = -1;
	static volatile uint16_t x487 = UINT16_MAX;
	static volatile int32_t t60 = -11749279;

	t60 = (x485%(x486<<(x487<x488)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x493 = INT16_MIN;
	uint8_t x494 = 1U;
	uint64_t x495 = 947356LLU;
	static int64_t x496 = 959302258LL;
	volatile int32_t t61 = 24438;

	t61 = (x493%(x494<<(x495<x496)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x498 = 1070359511663LLU;
	static uint8_t x499 = UINT8_MAX;
	static volatile uint8_t x500 = UINT8_MAX;
	volatile uint64_t t62 = 11655LLU;

	t62 = (x497%(x498<<(x499<x500)));

	if (t62 != 636812795094LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x502 = 14U;
	int32_t x503 = 18024607;
	static int16_t x504 = -1002;

	t63 = (x501%(x502<<(x503<x504)));

	if (t63 != -8) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x509 = -50;
	static int32_t x510 = INT32_MAX;
	int16_t x511 = INT16_MAX;

	t64 = (x509%(x510<<(x511<x512)));

	if (t64 != -50) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MAX;
	int16_t x515 = INT16_MIN;
	uint32_t x516 = UINT32_MAX;
	static int32_t t65 = -426400106;

	t65 = (x513%(x514<<(x515<x516)));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x517 = 3138413U;
	static uint8_t x518 = 78U;
	int16_t x519 = INT16_MAX;
	uint32_t x520 = 1025849699U;
	volatile uint32_t t66 = 1445632416U;

	t66 = (x517%(x518<<(x519<x520)));

	if (t66 != 5U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x521 = 8;
	int8_t x523 = INT8_MAX;
	volatile int16_t x524 = -631;

	t67 = (x521%(x522<<(x523<x524)));

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x525 = 74;
	int16_t x527 = 435;
	static volatile uint16_t x528 = 3U;

	t68 = (x525%(x526<<(x527<x528)));

	if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x529 = 937;
	uint64_t x531 = UINT64_MAX;
	static volatile uint32_t x532 = 6U;

	t69 = (x529%(x530<<(x531<x532)));

	if (t69 != 937) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x533 = -1;
	int16_t x534 = INT16_MAX;
	uint64_t x535 = 47239378945LLU;
	static int32_t t70 = -6665;

	t70 = (x533%(x534<<(x535<x536)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x537 = INT32_MIN;
	int16_t x538 = INT16_MAX;
	int32_t x539 = INT32_MIN;
	volatile int8_t x540 = INT8_MIN;

	t71 = (x537%(x538<<(x539<x540)));

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x541 = INT32_MIN;
	int16_t x544 = INT16_MIN;

	t72 = (x541%(x542<<(x543<x544)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x545 = INT8_MAX;
	int32_t x547 = 13;
	volatile int64_t x548 = INT64_MAX;
	volatile int32_t t73 = -36871;

	t73 = (x545%(x546<<(x547<x548)));

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x553 = INT8_MAX;
	static int8_t x555 = -1;
	volatile uint32_t t74 = 170693064U;

	t74 = (x553%(x554<<(x555<x556)));

	if (t74 != 127U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x557 = 1852761U;
	static uint64_t x558 = 130462LLU;
	volatile uint64_t x560 = UINT64_MAX;
	static volatile uint64_t t75 = 262173802582476LLU;

	t75 = (x557%(x558<<(x559<x560)));

	if (t75 != 26293LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x561 = -16;
	static volatile uint32_t x563 = UINT32_MAX;
	static int8_t x564 = INT8_MIN;
	static int32_t t76 = 458;

	t76 = (x561%(x562<<(x563<x564)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x581 = INT64_MAX;
	int64_t x582 = INT64_MAX;
	uint64_t x583 = UINT64_MAX;
	volatile int64_t t77 = -2202051LL;

	t77 = (x581%(x582<<(x583<x584)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x585 = INT64_MIN;
	uint8_t x586 = 27U;
	volatile int64_t t78 = 53202793671955194LL;

	t78 = (x585%(x586<<(x587<x588)));

	if (t78 != -26LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x597 = 0;
	int8_t x598 = INT8_MAX;
	volatile int32_t t79 = 126404;

	t79 = (x597%(x598<<(x599<x600)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x609 = INT64_MIN;
	uint16_t x610 = 1466U;
	int8_t x611 = INT8_MAX;
	static int32_t x612 = -10;
	static int64_t t80 = 8201282780824LL;

	t80 = (x609%(x610<<(x611<x612)));

	if (t80 != -1412LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x614 = INT32_MAX;
	static volatile int8_t x615 = -16;
	static int16_t x616 = INT16_MIN;
	volatile int32_t t81 = -12997255;

	t81 = (x613%(x614<<(x615<x616)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x621 = 17LL;
	uint8_t x623 = 1U;
	volatile int64_t t82 = -14164983126LL;

	t82 = (x621%(x622<<(x623<x624)));

	if (t82 != 17LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x625 = INT32_MAX;
	uint32_t x626 = 10U;
	volatile uint32_t t83 = 32U;

	t83 = (x625%(x626<<(x627<x628)));

	if (t83 != 7U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x630 = 1363LLU;
	volatile int16_t x631 = INT16_MIN;
	int32_t x632 = 125873;
	volatile uint64_t t84 = 416745055261107431LLU;

	t84 = (x629%(x630<<(x631<x632)));

	if (t84 != 1636LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x633 = 419039U;
	static int16_t x634 = INT16_MAX;
	static int32_t x635 = INT32_MIN;

	t85 = (x633%(x634<<(x635<x636)));

	if (t85 != 25835U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x637 = UINT32_MAX;
	volatile int64_t x638 = 322755489271023LL;
	uint16_t x639 = 0U;
	int64_t x640 = INT64_MIN;
	volatile int64_t t86 = 46443982784768LL;

	t86 = (x637%(x638<<(x639<x640)));

	if (t86 != 4294967295LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x641 = -56;
	int16_t x642 = INT16_MAX;
	uint8_t x643 = UINT8_MAX;
	uint8_t x644 = UINT8_MAX;

	t87 = (x641%(x642<<(x643<x644)));

	if (t87 != -56) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x645 = INT64_MIN;
	int32_t x646 = INT32_MAX;
	static uint16_t x647 = 3U;
	volatile int64_t t88 = 130177018763902LL;

	t88 = (x645%(x646<<(x647<x648)));

	if (t88 != -2LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x653 = 7;
	uint32_t x654 = 9088459U;
	uint32_t x655 = UINT32_MAX;
	static volatile int32_t x656 = -490935850;
	static uint32_t t89 = 8575918U;

	t89 = (x653%(x654<<(x655<x656)));

	if (t89 != 7U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x661 = 1U;
	int32_t x662 = 364;
	int8_t x664 = -1;
	volatile int32_t t90 = 71121;

	t90 = (x661%(x662<<(x663<x664)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x674 = 17;
	static int8_t x675 = INT8_MIN;
	int64_t x676 = INT64_MIN;
	uint64_t t91 = 62828931513LLU;

	t91 = (x673%(x674<<(x675<x676)));

	if (t91 != 5LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x685 = INT32_MIN;
	int16_t x686 = INT16_MAX;
	static int64_t x688 = INT64_MIN;

	t92 = (x685%(x686<<(x687<x688)));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x689 = INT64_MAX;
	static uint32_t x690 = 2302313U;
	uint64_t x691 = 39LLU;
	int16_t x692 = -3943;
	volatile int64_t t93 = -8153410091007LL;

	t93 = (x689%(x690<<(x691<x692)));

	if (t93 != 2579025LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x693 = 2U;
	static uint8_t x694 = 11U;
	static uint64_t x695 = 184544003987940270LLU;
	int64_t x696 = INT64_MIN;

	t94 = (x693%(x694<<(x695<x696)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x697 = INT16_MAX;
	static int8_t x698 = INT8_MAX;
	int64_t x699 = 8655LL;
	static volatile int8_t x700 = 18;
	volatile int32_t t95 = 2148;

	t95 = (x697%(x698<<(x699<x700)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x709 = -1;
	uint8_t x710 = UINT8_MAX;
	int8_t x711 = -1;
	static int64_t x712 = INT64_MIN;

	t96 = (x709%(x710<<(x711<x712)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x714 = 442062LL;
	uint8_t x715 = 15U;
	volatile int64_t t97 = -1305201563347LL;

	t97 = (x713%(x714<<(x715<x716)));

	if (t97 != 45LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x717 = -256;
	uint32_t x718 = 1767U;
	volatile int64_t x719 = INT64_MIN;
	static volatile uint8_t x720 = 9U;

	t98 = (x717%(x718<<(x719<x720)));

	if (t98 != 1422U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x721 = INT16_MAX;
	int16_t x722 = 13;
	int64_t x724 = INT64_MAX;
	static int32_t t99 = 362575369;

	t99 = (x721%(x722<<(x723<x724)));

	if (t99 != 7) { NG(); } else { ; }
	
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

