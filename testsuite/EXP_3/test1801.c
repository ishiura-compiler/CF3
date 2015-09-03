#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 3036;
int32_t x24 = 83481653;
int32_t x46 = INT32_MIN;
uint16_t x47 = UINT16_MAX;
uint8_t x48 = 0U;
int8_t x49 = INT8_MAX;
int8_t x64 = 1;
int64_t x69 = INT64_MIN;
static int64_t x108 = INT64_MIN;
uint16_t x109 = 468U;
int8_t x110 = -1;
int32_t t10 = -2806620;
static uint64_t x133 = 217LLU;
int32_t t12 = -148;
int32_t x145 = INT32_MIN;
static uint8_t x148 = 7U;
int8_t x150 = INT8_MAX;
uint16_t x166 = 1U;
uint8_t x207 = 83U;
static int64_t x215 = INT64_MAX;
static volatile int32_t t23 = -26562;
uint8_t x236 = 85U;
static int32_t t25 = -10345;
uint8_t x242 = 0U;
int32_t t28 = 7956;
static int32_t x293 = INT32_MIN;
volatile int16_t x309 = INT16_MIN;
uint32_t x315 = 43U;
volatile int32_t t33 = 13;
volatile uint16_t x318 = 1541U;
static uint16_t x337 = 5U;
volatile int16_t x347 = 1;
volatile int32_t t36 = -1;
int8_t x350 = 2;
int64_t x401 = INT64_MAX;
uint8_t x423 = 7U;
int64_t x430 = INT64_MIN;
static int32_t x434 = INT32_MIN;
volatile uint16_t x522 = 30U;
volatile int32_t t52 = 26;
uint8_t x531 = UINT8_MAX;
static int8_t x539 = INT8_MAX;
int16_t x540 = INT16_MIN;
volatile int64_t x561 = -94503156038425229LL;
volatile int32_t t59 = -460000;
int32_t x588 = INT32_MIN;
static volatile int32_t x603 = INT32_MIN;
int64_t x605 = -69013724272557LL;
volatile int32_t t65 = -511929;
uint16_t x635 = UINT16_MAX;
int32_t t68 = -3;
uint8_t x659 = 13U;
uint64_t x660 = 1094576626124834875LLU;
int32_t x681 = 124;
volatile uint16_t x683 = 90U;
int32_t t71 = 4543;
uint32_t x701 = UINT32_MAX;
uint8_t x703 = 22U;
static volatile int64_t x710 = -1LL;
uint32_t x713 = 41911U;
static int16_t x715 = -1;
uint32_t x737 = 233916U;
int32_t x741 = -193;
int32_t x743 = 1;
uint32_t x744 = 1681088068U;
uint8_t x755 = 13U;
static volatile int32_t t79 = -1;
static volatile int8_t x761 = INT8_MAX;
volatile int16_t x762 = INT16_MAX;
volatile uint16_t x780 = 6U;
volatile int8_t x793 = -1;
int32_t x798 = INT32_MAX;
int64_t x805 = INT64_MAX;
int16_t x822 = INT16_MIN;
uint64_t x833 = UINT64_MAX;
int64_t x845 = INT64_MIN;
volatile int8_t x848 = INT8_MAX;
int32_t t89 = -11;
int32_t t91 = 402;
static int8_t x893 = INT8_MIN;
int32_t t93 = 722;
static int16_t x921 = -1;
uint64_t x922 = 6735874895932LLU;
static uint8_t x945 = 1U;
volatile int32_t x947 = INT32_MIN;
volatile uint32_t x948 = 3U;
int32_t x967 = INT32_MAX;
uint16_t x989 = UINT16_MAX;
int64_t x990 = INT64_MAX;
int32_t x992 = INT32_MIN;
volatile int32_t t98 = 231240633;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static volatile uint8_t x2 = 12U;
	static int16_t x3 = 6715;
	int64_t x4 = INT64_MIN;

	t0 = ((x1<x2)>>(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x21 = 499620102LLU;
	uint64_t x22 = 1716LLU;
	int32_t x23 = INT32_MIN;
	int32_t t1 = 2248;

	t1 = ((x21<x22)>>(x23&x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x45 = 46;
	int32_t t2 = -1088;

	t2 = ((x45<x46)>>(x47&x48));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x50 = INT64_MAX;
	static volatile int16_t x51 = 3;
	static uint32_t x52 = UINT32_MAX;
	int32_t t3 = -321959043;

	t3 = ((x49<x50)>>(x51&x52));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x61 = 217052722349652047LLU;
	uint8_t x62 = 25U;
	volatile uint16_t x63 = 27U;
	int32_t t4 = -6823367;

	t4 = ((x61<x62)>>(x63&x64));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x70 = 6U;
	static int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MAX;
	int32_t t5 = -31741999;

	t5 = ((x69<x70)>>(x71&x72));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x73 = UINT16_MAX;
	uint16_t x74 = 5702U;
	int16_t x75 = INT16_MAX;
	static int8_t x76 = 0;
	int32_t t6 = 406;

	t6 = ((x73<x74)>>(x75&x76));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x85 = UINT16_MAX;
	static uint32_t x86 = UINT32_MAX;
	int32_t x87 = 0;
	static int64_t x88 = INT64_MIN;
	static volatile int32_t t7 = -959460;

	t7 = ((x85<x86)>>(x87&x88));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x105 = UINT16_MAX;
	static volatile int16_t x106 = 2;
	static uint64_t x107 = 8436297421050LLU;
	volatile int32_t t8 = -1671;

	t8 = ((x105<x106)>>(x107&x108));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x111 = 31LLU;
	uint8_t x112 = 35U;
	int32_t t9 = -6375;

	t9 = ((x109<x110)>>(x111&x112));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x117 = -1;
	static uint64_t x118 = 5878313080LLU;
	volatile uint8_t x119 = UINT8_MAX;
	int16_t x120 = INT16_MIN;

	t10 = ((x117<x118)>>(x119&x120));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x134 = INT64_MIN;
	volatile uint16_t x135 = 4332U;
	int16_t x136 = 0;
	volatile int32_t t11 = 6032;

	t11 = ((x133<x134)>>(x135&x136));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x137 = -23398241LL;
	uint16_t x138 = 21U;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = UINT8_MAX;

	t12 = ((x137<x138)>>(x139&x140));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x141 = -21;
	int16_t x142 = INT16_MIN;
	uint32_t x143 = 0U;
	int16_t x144 = INT16_MIN;
	volatile int32_t t13 = -2298;

	t13 = ((x141<x142)>>(x143&x144));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x146 = 35989;
	volatile int64_t x147 = 99347140536LL;
	int32_t t14 = 155;

	t14 = ((x145<x146)>>(x147&x148));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x149 = INT16_MIN;
	uint16_t x151 = UINT16_MAX;
	uint16_t x152 = 4U;
	volatile int32_t t15 = 0;

	t15 = ((x149<x150)>>(x151&x152));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x153 = INT32_MIN;
	uint8_t x154 = 88U;
	static volatile uint64_t x155 = UINT64_MAX;
	static uint8_t x156 = 14U;
	volatile int32_t t16 = 15852172;

	t16 = ((x153<x154)>>(x155&x156));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x165 = -4758;
	int64_t x167 = INT64_MAX;
	int64_t x168 = INT64_MIN;
	static volatile int32_t t17 = 13901;

	t17 = ((x165<x166)>>(x167&x168));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x173 = INT8_MIN;
	volatile int64_t x174 = INT64_MIN;
	uint64_t x175 = 55963LLU;
	int8_t x176 = INT8_MAX;
	volatile int32_t t18 = 63595;

	t18 = ((x173<x174)>>(x175&x176));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x177 = INT32_MIN;
	int64_t x178 = -1LL;
	int8_t x179 = INT8_MAX;
	volatile uint8_t x180 = 1U;
	static int32_t t19 = -338045;

	t19 = ((x177<x178)>>(x179&x180));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x181 = INT16_MIN;
	volatile int64_t x182 = INT64_MIN;
	uint32_t x183 = 3U;
	int16_t x184 = -401;
	volatile int32_t t20 = 132569664;

	t20 = ((x181<x182)>>(x183&x184));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x205 = 41U;
	volatile int8_t x206 = INT8_MIN;
	static int64_t x208 = INT64_MIN;
	int32_t t21 = -534;

	t21 = ((x205<x206)>>(x207&x208));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x213 = UINT16_MAX;
	int32_t x214 = 13344736;
	volatile uint8_t x216 = 2U;
	int32_t t22 = 15036;

	t22 = ((x213<x214)>>(x215&x216));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x217 = INT64_MAX;
	int64_t x218 = INT64_MIN;
	int8_t x219 = 34;
	volatile int32_t x220 = INT32_MIN;

	t23 = ((x217<x218)>>(x219&x220));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x225 = 4418641869510083LLU;
	static int32_t x226 = INT32_MAX;
	uint16_t x227 = 0U;
	static int64_t x228 = INT64_MIN;
	volatile int32_t t24 = 1066;

	t24 = ((x225<x226)>>(x227&x228));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x233 = INT16_MIN;
	volatile int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;

	t25 = ((x233<x234)>>(x235&x236));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x241 = 4U;
	uint32_t x243 = 58376676U;
	uint16_t x244 = 1U;
	int32_t t26 = -2;

	t26 = ((x241<x242)>>(x243&x244));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x245 = UINT8_MAX;
	volatile int16_t x246 = INT16_MAX;
	static uint16_t x247 = UINT16_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t27 = 55472490;

	t27 = ((x245<x246)>>(x247&x248));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x265 = -1;
	volatile int16_t x266 = 1051;
	uint8_t x267 = 0U;
	static volatile uint16_t x268 = 12U;

	t28 = ((x265<x266)>>(x267&x268));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x294 = INT32_MAX;
	static uint32_t x295 = 4540U;
	static int16_t x296 = INT16_MIN;
	int32_t t29 = 116105;

	t29 = ((x293<x294)>>(x295&x296));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x297 = -7;
	int64_t x298 = INT64_MAX;
	volatile int8_t x299 = INT8_MAX;
	int32_t x300 = -3571;
	int32_t t30 = -6;

	t30 = ((x297<x298)>>(x299&x300));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x305 = INT16_MIN;
	static int16_t x306 = 0;
	uint32_t x307 = 36333U;
	volatile uint16_t x308 = 11U;
	volatile int32_t t31 = 269;

	t31 = ((x305<x306)>>(x307&x308));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x310 = UINT16_MAX;
	static volatile int16_t x311 = INT16_MIN;
	uint16_t x312 = 4598U;
	static volatile int32_t t32 = -1892150;

	t32 = ((x309<x310)>>(x311&x312));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x313 = -6183200700832LL;
	uint8_t x314 = 3U;
	volatile int16_t x316 = INT16_MIN;

	t33 = ((x313<x314)>>(x315&x316));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x317 = UINT64_MAX;
	uint64_t x319 = 8608178770LLU;
	volatile uint8_t x320 = 1U;
	static int32_t t34 = 15;

	t34 = ((x317<x318)>>(x319&x320));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x338 = 47U;
	uint8_t x339 = 14U;
	int16_t x340 = INT16_MIN;
	volatile int32_t t35 = 1;

	t35 = ((x337<x338)>>(x339&x340));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = -1;
	uint8_t x348 = 46U;

	t36 = ((x345<x346)>>(x347&x348));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x349 = INT64_MIN;
	int64_t x351 = 1907177463LL;
	int32_t x352 = INT32_MIN;
	static int32_t t37 = -8870;

	t37 = ((x349<x350)>>(x351&x352));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x353 = -1;
	int16_t x354 = 4;
	static int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t38 = 36300716;

	t38 = ((x353<x354)>>(x355&x356));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x369 = INT16_MAX;
	uint8_t x370 = 28U;
	volatile uint8_t x371 = 17U;
	int64_t x372 = -1LL;
	int32_t t39 = 262047678;

	t39 = ((x369<x370)>>(x371&x372));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x385 = 19U;
	int64_t x386 = INT64_MIN;
	volatile int64_t x387 = INT64_MIN;
	uint8_t x388 = 14U;
	volatile int32_t t40 = 1018;

	t40 = ((x385<x386)>>(x387&x388));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MAX;
	int32_t x404 = 3;
	volatile int32_t t41 = -114924842;

	t41 = ((x401<x402)>>(x403&x404));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x405 = 17711455LLU;
	int64_t x406 = INT64_MAX;
	static uint8_t x407 = UINT8_MAX;
	static uint64_t x408 = 9LLU;
	volatile int32_t t42 = -92845;

	t42 = ((x405<x406)>>(x407&x408));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x409 = UINT16_MAX;
	int16_t x410 = 191;
	static uint32_t x411 = 0U;
	int16_t x412 = INT16_MIN;
	int32_t t43 = 32688;

	t43 = ((x409<x410)>>(x411&x412));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x421 = INT8_MAX;
	static uint64_t x422 = 260326653990LLU;
	int16_t x424 = INT16_MAX;
	int32_t t44 = 212932;

	t44 = ((x421<x422)>>(x423&x424));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x429 = 38;
	int8_t x431 = INT8_MIN;
	int16_t x432 = 91;
	int32_t t45 = -524881150;

	t45 = ((x429<x430)>>(x431&x432));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x433 = 443;
	int8_t x435 = INT8_MIN;
	uint8_t x436 = 1U;
	static volatile int32_t t46 = -2;

	t46 = ((x433<x434)>>(x435&x436));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x453 = UINT64_MAX;
	int64_t x454 = INT64_MIN;
	int16_t x455 = 840;
	int16_t x456 = 1;
	volatile int32_t t47 = -5459;

	t47 = ((x453<x454)>>(x455&x456));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x457 = UINT32_MAX;
	volatile uint16_t x458 = UINT16_MAX;
	uint32_t x459 = 281U;
	int64_t x460 = INT64_MIN;
	static volatile int32_t t48 = -14141;

	t48 = ((x457<x458)>>(x459&x460));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x469 = 65U;
	volatile uint32_t x470 = 4177912U;
	uint8_t x471 = 28U;
	volatile int32_t x472 = INT32_MIN;
	int32_t t49 = -15935;

	t49 = ((x469<x470)>>(x471&x472));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x477 = 771U;
	volatile uint32_t x478 = 1590609235U;
	uint32_t x479 = UINT32_MAX;
	int64_t x480 = INT64_MIN;
	static int32_t t50 = -84762;

	t50 = ((x477<x478)>>(x479&x480));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x505 = INT64_MIN;
	int16_t x506 = INT16_MIN;
	static int64_t x507 = -1713LL;
	int32_t x508 = 3;
	int32_t t51 = -66;

	t51 = ((x505<x506)>>(x507&x508));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x521 = 4U;
	volatile int64_t x523 = INT64_MIN;
	uint32_t x524 = 1307556596U;

	t52 = ((x521<x522)>>(x523&x524));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x525 = 3256;
	uint16_t x526 = UINT16_MAX;
	volatile int16_t x527 = INT16_MIN;
	uint8_t x528 = UINT8_MAX;
	volatile int32_t t53 = -5;

	t53 = ((x525<x526)>>(x527&x528));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x529 = 477663536061088LLU;
	static int8_t x530 = INT8_MIN;
	static int64_t x532 = INT64_MIN;
	static volatile int32_t t54 = -1065419035;

	t54 = ((x529<x530)>>(x531&x532));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x533 = 0;
	static uint8_t x534 = 27U;
	static uint16_t x535 = 21U;
	uint32_t x536 = 1909U;
	static volatile int32_t t55 = -1;

	t55 = ((x533<x534)>>(x535&x536));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x537 = -1;
	uint8_t x538 = 11U;
	static int32_t t56 = -2;

	t56 = ((x537<x538)>>(x539&x540));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x541 = -1;
	int8_t x542 = INT8_MAX;
	uint16_t x543 = 59U;
	int64_t x544 = -178205481LL;
	volatile int32_t t57 = 15863651;

	t57 = ((x541<x542)>>(x543&x544));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x562 = -1;
	int16_t x563 = 2;
	uint8_t x564 = 26U;
	volatile int32_t t58 = 891292849;

	t58 = ((x561<x562)>>(x563&x564));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x565 = 336U;
	int64_t x566 = INT64_MIN;
	static int64_t x567 = 1076303358558LL;
	static volatile uint32_t x568 = 1U;

	t59 = ((x565<x566)>>(x567&x568));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x569 = INT16_MAX;
	uint8_t x570 = 1U;
	static uint64_t x571 = 720590LLU;
	volatile int64_t x572 = INT64_MIN;
	static volatile int32_t t60 = -643600951;

	t60 = ((x569<x570)>>(x571&x572));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x581 = INT16_MIN;
	int16_t x582 = INT16_MAX;
	int16_t x583 = INT16_MIN;
	int8_t x584 = INT8_MAX;
	volatile int32_t t61 = 340808172;

	t61 = ((x581<x582)>>(x583&x584));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x585 = 47462169U;
	volatile int16_t x586 = 52;
	uint8_t x587 = UINT8_MAX;
	volatile int32_t t62 = 44475496;

	t62 = ((x585<x586)>>(x587&x588));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x601 = 61U;
	int64_t x602 = -6602049596LL;
	int8_t x604 = INT8_MAX;
	int32_t t63 = -4;

	t63 = ((x601<x602)>>(x603&x604));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x606 = 150585250676275552LL;
	static volatile uint8_t x607 = 14U;
	int64_t x608 = INT64_MIN;
	int32_t t64 = -4973909;

	t64 = ((x605<x606)>>(x607&x608));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x621 = 12076U;
	int16_t x622 = -1;
	int32_t x623 = INT32_MAX;
	static int32_t x624 = INT32_MIN;

	t65 = ((x621<x622)>>(x623&x624));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x633 = INT8_MAX;
	static uint64_t x634 = UINT64_MAX;
	int32_t x636 = INT32_MIN;
	int32_t t66 = 242414;

	t66 = ((x633<x634)>>(x635&x636));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x637 = INT16_MAX;
	int8_t x638 = -14;
	static uint8_t x639 = 0U;
	uint32_t x640 = 1932U;
	int32_t t67 = -53041924;

	t67 = ((x637<x638)>>(x639&x640));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x645 = UINT16_MAX;
	volatile int32_t x646 = -1;
	uint8_t x647 = 60U;
	int64_t x648 = INT64_MIN;

	t68 = ((x645<x646)>>(x647&x648));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x657 = -909245059;
	static int16_t x658 = INT16_MIN;
	int32_t t69 = -1992789;

	t69 = ((x657<x658)>>(x659&x660));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x669 = INT32_MIN;
	uint32_t x670 = 96248449U;
	int64_t x671 = 19LL;
	uint16_t x672 = UINT16_MAX;
	volatile int32_t t70 = 4224794;

	t70 = ((x669<x670)>>(x671&x672));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x682 = INT8_MIN;
	static int8_t x684 = 28;

	t71 = ((x681<x682)>>(x683&x684));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x693 = 3986402728656LL;
	volatile int16_t x694 = -1;
	uint16_t x695 = 1U;
	int32_t x696 = 0;
	int32_t t72 = -380;

	t72 = ((x693<x694)>>(x695&x696));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x702 = 2242;
	static int64_t x704 = -1LL;
	static int32_t t73 = -12334330;

	t73 = ((x701<x702)>>(x703&x704));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x709 = 753U;
	uint8_t x711 = 103U;
	volatile int8_t x712 = INT8_MIN;
	int32_t t74 = -45;

	t74 = ((x709<x710)>>(x711&x712));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x714 = 2;
	uint8_t x716 = 1U;
	static int32_t t75 = 1;

	t75 = ((x713<x714)>>(x715&x716));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x729 = 23LLU;
	int64_t x730 = INT64_MIN;
	static volatile int16_t x731 = 1;
	int64_t x732 = INT64_MIN;
	volatile int32_t t76 = 80974;

	t76 = ((x729<x730)>>(x731&x732));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x738 = INT16_MIN;
	int32_t x739 = INT32_MIN;
	static uint64_t x740 = 15617LLU;
	volatile int32_t t77 = -411;

	t77 = ((x737<x738)>>(x739&x740));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x742 = UINT32_MAX;
	volatile int32_t t78 = 31;

	t78 = ((x741<x742)>>(x743&x744));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x753 = INT32_MIN;
	uint16_t x754 = UINT16_MAX;
	int32_t x756 = -1;

	t79 = ((x753<x754)>>(x755&x756));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x763 = 984U;
	int32_t x764 = INT32_MIN;
	volatile int32_t t80 = -1;

	t80 = ((x761<x762)>>(x763&x764));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x765 = 1991907U;
	uint32_t x766 = 1089695854U;
	int8_t x767 = INT8_MAX;
	int32_t x768 = INT32_MIN;
	static volatile int32_t t81 = -365830;

	t81 = ((x765<x766)>>(x767&x768));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x777 = -22321492LL;
	volatile int64_t x778 = INT64_MIN;
	uint32_t x779 = 67U;
	volatile int32_t t82 = -970554291;

	t82 = ((x777<x778)>>(x779&x780));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x785 = 1451U;
	static int32_t x786 = INT32_MIN;
	uint8_t x787 = 0U;
	volatile int16_t x788 = 58;
	static volatile int32_t t83 = 40;

	t83 = ((x785<x786)>>(x787&x788));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x794 = 9233U;
	int32_t x795 = INT32_MIN;
	volatile uint16_t x796 = 8U;
	volatile int32_t t84 = -1204499;

	t84 = ((x793<x794)>>(x795&x796));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x797 = UINT8_MAX;
	uint64_t x799 = 307708LLU;
	uint32_t x800 = 7U;
	int32_t t85 = -24;

	t85 = ((x797<x798)>>(x799&x800));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x806 = INT8_MAX;
	uint64_t x807 = 91LLU;
	int32_t x808 = INT32_MIN;
	volatile int32_t t86 = -162828902;

	t86 = ((x805<x806)>>(x807&x808));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x821 = -1;
	uint16_t x823 = 457U;
	int8_t x824 = 0;
	static volatile int32_t t87 = -210706115;

	t87 = ((x821<x822)>>(x823&x824));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x834 = 6U;
	uint32_t x835 = 240U;
	volatile uint8_t x836 = 31U;
	int32_t t88 = -764903943;

	t88 = ((x833<x834)>>(x835&x836));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x846 = -1LL;
	static uint8_t x847 = 1U;

	t89 = ((x845<x846)>>(x847&x848));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x849 = UINT8_MAX;
	int32_t x850 = INT32_MIN;
	static volatile int64_t x851 = -1LL;
	static uint8_t x852 = 4U;
	volatile int32_t t90 = 1389;

	t90 = ((x849<x850)>>(x851&x852));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x853 = INT8_MIN;
	int64_t x854 = INT64_MIN;
	uint8_t x855 = 9U;
	uint32_t x856 = 43860539U;

	t91 = ((x853<x854)>>(x855&x856));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x894 = -61;
	volatile uint32_t x895 = 7U;
	int32_t x896 = INT32_MAX;
	static volatile int32_t t92 = -237346849;

	t92 = ((x893<x894)>>(x895&x896));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x897 = 11255043589LLU;
	int16_t x898 = INT16_MIN;
	uint64_t x899 = 19642486LLU;
	static int8_t x900 = 1;

	t93 = ((x897<x898)>>(x899&x900));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x905 = 2618440010841893850LL;
	uint16_t x906 = 10U;
	int32_t x907 = INT32_MIN;
	volatile int32_t x908 = 85;
	int32_t t94 = -1515;

	t94 = ((x905<x906)>>(x907&x908));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x923 = 218U;
	static volatile uint8_t x924 = 29U;
	volatile int32_t t95 = -19;

	t95 = ((x921<x922)>>(x923&x924));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x946 = INT64_MAX;
	volatile int32_t t96 = -163491;

	t96 = ((x945<x946)>>(x947&x948));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x965 = -2739493;
	uint32_t x966 = UINT32_MAX;
	int64_t x968 = INT64_MIN;
	static volatile int32_t t97 = 96813452;

	t97 = ((x965<x966)>>(x967&x968));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x991 = 22U;

	t98 = ((x989<x990)>>(x991&x992));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x1009 = -1;
	volatile int64_t x1010 = -321623LL;
	int8_t x1011 = 0;
	uint64_t x1012 = 41581LLU;
	volatile int32_t t99 = -25887059;

	t99 = ((x1009<x1010)>>(x1011&x1012));

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

