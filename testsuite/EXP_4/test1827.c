#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x42 = 9U;
static int32_t x62 = INT32_MIN;
int16_t x79 = INT16_MAX;
int16_t x80 = INT16_MIN;
int8_t x111 = -1;
uint64_t x117 = UINT64_MAX;
volatile uint64_t x142 = 1LLU;
uint8_t x188 = 3U;
static uint16_t x195 = 3U;
volatile int32_t t19 = -1451767;
uint32_t x209 = 192107848U;
int16_t x210 = INT16_MAX;
int64_t x215 = INT64_MIN;
uint32_t x217 = UINT32_MAX;
volatile uint32_t t22 = UINT32_MAX;
uint16_t x221 = UINT16_MAX;
int16_t x222 = INT16_MIN;
static int16_t x223 = -1;
int32_t t23 = 30068038;
static int64_t x235 = INT64_MIN;
uint32_t x306 = 213101938U;
uint16_t x308 = 0U;
static int32_t t32 = -2748;
uint8_t x329 = 2U;
int32_t x330 = INT32_MAX;
int32_t x332 = INT32_MIN;
volatile int64_t x342 = -1LL;
uint8_t x359 = 2U;
uint8_t x385 = 5U;
int16_t x387 = 14;
volatile int64_t x388 = INT64_MAX;
volatile int32_t t36 = 85;
uint64_t x394 = 4189172933LLU;
int32_t x415 = INT32_MIN;
int16_t x422 = -1;
int64_t x424 = INT64_MIN;
uint8_t x439 = UINT8_MAX;
int64_t x457 = 1100357851457828882LL;
int64_t x473 = 103300LL;
static int32_t x474 = 23;
static int64_t x476 = -4779826657865LL;
static volatile int64_t t45 = 154695617LL;
int32_t x498 = -6;
int16_t x506 = -1157;
int16_t x521 = 895;
int16_t x523 = 699;
static int32_t t51 = -8074310;
volatile int32_t x538 = 492;
static volatile int64_t x562 = -1LL;
uint64_t x581 = 1585636209171LLU;
static int32_t x583 = -1;
volatile int16_t x609 = 3;
uint8_t x610 = 19U;
uint8_t x626 = UINT8_MAX;
int32_t x647 = -38;
static int16_t x661 = INT16_MAX;
volatile int16_t x662 = -6219;
int64_t x668 = INT64_MIN;
volatile int8_t x675 = INT8_MIN;
int8_t x704 = INT8_MIN;
int16_t x721 = INT16_MAX;
uint32_t x723 = UINT32_MAX;
static uint32_t x738 = 1486U;
static int32_t x739 = INT32_MIN;
static int16_t x766 = INT16_MIN;
uint32_t x773 = 203768U;
static int16_t x775 = INT16_MIN;
uint64_t x793 = 937556716179LLU;
static uint16_t x842 = 6188U;
int16_t x879 = -1;
static uint64_t x880 = UINT64_MAX;
volatile int32_t t80 = -15753;
static volatile uint8_t x894 = UINT8_MAX;
int8_t x902 = INT8_MIN;
int64_t x904 = INT64_MIN;
static uint16_t x907 = 1U;
uint32_t t83 = 3522U;
volatile uint32_t x937 = 3564U;
int32_t x940 = INT32_MIN;
static uint64_t x950 = 487506086272685LLU;
int64_t x955 = 4LL;
uint32_t t86 = 15U;
uint64_t x961 = 15LLU;
volatile uint64_t x962 = 19682267833250LLU;
uint64_t x963 = 14960LLU;
int8_t x965 = 37;
static int16_t x967 = INT16_MAX;
int8_t x970 = INT8_MIN;
static uint64_t x971 = 1613946LLU;
int8_t x983 = INT8_MIN;
volatile int64_t x984 = INT64_MIN;
uint32_t x993 = 11841092U;
static int32_t x1009 = INT32_MAX;
int8_t x1010 = INT8_MIN;
int8_t x1012 = INT8_MAX;
uint64_t x1014 = UINT64_MAX;
static int32_t t96 = -21;
int64_t x1054 = -1LL;
int8_t x1084 = -25;
uint32_t t99 = 5836U;


void f0(void) {
	uint64_t x5 = 282509317021501LLU;
	int8_t x6 = INT8_MAX;
	int32_t x7 = -1;
	int32_t x8 = 3;
	volatile uint64_t t0 = 8182604492338615618LLU;

	t0 = (x5>>(x6&(x7&x8)));

	if (t0 != 35313664627687LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 132933797896578LLU;
	static volatile int16_t x10 = INT16_MIN;
	int8_t x11 = 0;
	int64_t x12 = INT64_MIN;
	volatile uint64_t t1 = 19LLU;

	t1 = (x9>>(x10&(x11&x12)));

	if (t1 != 132933797896578LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	static uint64_t x14 = 335595357LLU;
	volatile int32_t x15 = INT32_MIN;
	uint64_t x16 = UINT64_MAX;
	int32_t t2 = 73403051;

	t2 = (x13>>(x14&(x15&x16)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 4773U;
	static uint16_t x18 = 24U;
	int32_t x19 = INT32_MAX;
	volatile uint8_t x20 = 31U;
	int32_t t3 = 2;

	t3 = (x17>>(x18&(x19&x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 16714037U;
	volatile uint8_t x22 = 1U;
	int8_t x23 = -62;
	int8_t x24 = -6;
	uint32_t t4 = 64625114U;

	t4 = (x21>>(x22&(x23&x24)));

	if (t4 != 16714037U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 1241LLU;
	uint16_t x43 = UINT16_MAX;
	static volatile uint64_t x44 = 42803208508136595LLU;
	uint64_t t5 = 1605069896002430LLU;

	t5 = (x41>>(x42&(x43&x44)));

	if (t5 != 620LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x61 = 6U;
	uint8_t x63 = 1U;
	uint32_t x64 = 779159596U;
	static volatile int32_t t6 = 1982714;

	t6 = (x61>>(x62&(x63&x64)));

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x69 = UINT8_MAX;
	int32_t x70 = 809;
	volatile int16_t x71 = 1;
	volatile uint64_t x72 = 2LLU;
	int32_t t7 = 296;

	t7 = (x69>>(x70&(x71&x72)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x77 = 16U;
	uint16_t x78 = UINT16_MAX;
	uint32_t t8 = 61320U;

	t8 = (x77>>(x78&(x79&x80)));

	if (t8 != 16U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x89 = 7300U;
	int16_t x90 = INT16_MIN;
	int16_t x91 = 11;
	static int16_t x92 = -1;
	volatile int32_t t9 = 59;

	t9 = (x89>>(x90&(x91&x92)));

	if (t9 != 7300) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int16_t x94 = INT16_MIN;
	static int64_t x95 = INT64_MIN;
	uint16_t x96 = 0U;
	uint32_t t10 = UINT32_MAX;

	t10 = (x93>>(x94&(x95&x96)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x109 = UINT16_MAX;
	static uint32_t x110 = 6889556U;
	int16_t x112 = 20;
	int32_t t11 = -37149;

	t11 = (x109>>(x110&(x111&x112)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x118 = 0;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = 0U;
	static uint64_t t12 = UINT64_MAX;

	t12 = (x117>>(x118&(x119&x120)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x141 = UINT16_MAX;
	static int64_t x143 = -1LL;
	uint64_t x144 = 862055275704LLU;
	volatile int32_t t13 = 658;

	t13 = (x141>>(x142&(x143&x144)));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x145 = INT16_MAX;
	uint32_t x146 = 5U;
	static volatile int16_t x147 = INT16_MIN;
	uint8_t x148 = 5U;
	volatile int32_t t14 = 1;

	t14 = (x145>>(x146&(x147&x148)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x153 = 1;
	int8_t x154 = 2;
	static int8_t x155 = -16;
	volatile int8_t x156 = -1;
	int32_t t15 = 33945797;

	t15 = (x153>>(x154&(x155&x156)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x173 = 1016U;
	int8_t x174 = 1;
	volatile uint8_t x175 = 21U;
	int32_t x176 = INT32_MAX;
	static volatile uint32_t t16 = 32568958U;

	t16 = (x173>>(x174&(x175&x176)));

	if (t16 != 508U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x185 = 57U;
	int8_t x186 = INT8_MAX;
	static uint8_t x187 = 0U;
	volatile int32_t t17 = 134629;

	t17 = (x185>>(x186&(x187&x188)));

	if (t17 != 57) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x193 = INT8_MAX;
	int16_t x194 = -6084;
	int64_t x196 = INT64_MIN;
	int32_t t18 = -985910655;

	t18 = (x193>>(x194&(x195&x196)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x205 = 36;
	int8_t x206 = -1;
	uint64_t x207 = 513852489LLU;
	uint16_t x208 = 0U;

	t19 = (x205>>(x206&(x207&x208)));

	if (t19 != 36) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x211 = INT32_MAX;
	uint32_t x212 = 2U;
	volatile uint32_t t20 = 1U;

	t20 = (x209>>(x210&(x211&x212)));

	if (t20 != 48026962U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x213 = INT64_MAX;
	uint32_t x214 = 83U;
	int16_t x216 = -1;
	int64_t t21 = INT64_MAX;

	t21 = (x213>>(x214&(x215&x216)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x218 = 5LLU;
	int32_t x219 = INT32_MIN;
	uint64_t x220 = 247020LLU;

	t22 = (x217>>(x218&(x219&x220)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x224 = 230U;

	t23 = (x221>>(x222&(x223&x224)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x233 = 192U;
	static int32_t x234 = 716689678;
	volatile int8_t x236 = INT8_MIN;
	static volatile uint32_t t24 = 2074615U;

	t24 = (x233>>(x234&(x235&x236)));

	if (t24 != 192U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x237 = INT64_MAX;
	int32_t x238 = -230863;
	int64_t x239 = INT64_MIN;
	uint32_t x240 = 714U;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x237>>(x238&(x239&x240)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x241 = INT16_MAX;
	uint64_t x242 = 59271541LLU;
	uint16_t x243 = 288U;
	uint8_t x244 = 1U;
	int32_t t26 = -202540;

	t26 = (x241>>(x242&(x243&x244)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x265 = 126U;
	uint64_t x266 = 55038783710934566LLU;
	int32_t x267 = -92250;
	static int64_t x268 = INT64_MIN;
	int32_t t27 = 84657972;

	t27 = (x265>>(x266&(x267&x268)));

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x277 = 19594U;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 3U;
	static int16_t x280 = -1;
	volatile uint32_t t28 = 733639U;

	t28 = (x277>>(x278&(x279&x280)));

	if (t28 != 19594U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x281 = 27U;
	uint64_t x282 = UINT64_MAX;
	static int16_t x283 = 14;
	int8_t x284 = -60;
	uint32_t t29 = 53691U;

	t29 = (x281>>(x282&(x283&x284)));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x293 = INT8_MAX;
	uint8_t x294 = 6U;
	uint32_t x295 = 44523258U;
	static int64_t x296 = 711135498369LL;
	int32_t t30 = -1780633;

	t30 = (x293>>(x294&(x295&x296)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x305 = UINT32_MAX;
	uint16_t x307 = 3499U;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = (x305>>(x306&(x307&x308)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x313 = UINT16_MAX;
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = INT8_MIN;
	static volatile int16_t x316 = INT16_MIN;

	t32 = (x313>>(x314&(x315&x316)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x331 = -1;
	volatile int32_t t33 = 124317454;

	t33 = (x329>>(x330&(x331&x332)));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x341 = 0U;
	int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MIN;
	volatile uint32_t t34 = 23903013U;

	t34 = (x341>>(x342&(x343&x344)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x357 = 27LLU;
	uint8_t x358 = 25U;
	uint16_t x360 = UINT16_MAX;
	volatile uint64_t t35 = 1713500LLU;

	t35 = (x357>>(x358&(x359&x360)));

	if (t35 != 27LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x386 = INT64_MIN;

	t36 = (x385>>(x386&(x387&x388)));

	if (t36 != 5) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x389 = 56192;
	int64_t x390 = -1LL;
	int8_t x391 = 1;
	uint8_t x392 = 112U;
	static int32_t t37 = 2674;

	t37 = (x389>>(x390&(x391&x392)));

	if (t37 != 56192) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x393 = 3414U;
	volatile uint32_t x395 = 0U;
	static uint8_t x396 = 22U;
	static int32_t t38 = -297;

	t38 = (x393>>(x394&(x395&x396)));

	if (t38 != 3414) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x397 = UINT8_MAX;
	volatile uint8_t x398 = 14U;
	static uint32_t x399 = 29931U;
	uint16_t x400 = UINT16_MAX;
	int32_t t39 = 1737;

	t39 = (x397>>(x398&(x399&x400)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x413 = 0U;
	volatile uint16_t x414 = 0U;
	static int16_t x416 = 309;
	int32_t t40 = 491179;

	t40 = (x413>>(x414&(x415&x416)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x421 = 98U;
	volatile uint8_t x423 = 80U;
	volatile int32_t t41 = 230787174;

	t41 = (x421>>(x422&(x423&x424)));

	if (t41 != 98) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x437 = 20118;
	volatile uint16_t x438 = 99U;
	int64_t x440 = INT64_MIN;
	static int32_t t42 = -4511;

	t42 = (x437>>(x438&(x439&x440)));

	if (t42 != 20118) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x453 = 18U;
	volatile uint32_t x454 = 12U;
	int32_t x455 = -1;
	int64_t x456 = -1LL;
	volatile int32_t t43 = -1;

	t43 = (x453>>(x454&(x455&x456)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x458 = 6;
	uint8_t x459 = 10U;
	int16_t x460 = INT16_MAX;
	volatile int64_t t44 = -189LL;

	t44 = (x457>>(x458&(x459&x460)));

	if (t44 != 275089462864457220LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x475 = 1U;

	t45 = (x473>>(x474&(x475&x476)));

	if (t45 != 51650LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x477 = 255;
	volatile int8_t x478 = INT8_MIN;
	uint64_t x479 = 1LLU;
	int8_t x480 = 5;
	int32_t t46 = 16;

	t46 = (x477>>(x478&(x479&x480)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x497 = 17979952LLU;
	static int32_t x499 = 12;
	uint32_t x500 = 92029U;
	uint64_t t47 = 2518235771183257LLU;

	t47 = (x497>>(x498&(x499&x500)));

	if (t47 != 70234LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x505 = UINT8_MAX;
	int64_t x507 = -1LL;
	uint8_t x508 = 7U;
	int32_t t48 = 1006939931;

	t48 = (x505>>(x506&(x507&x508)));

	if (t48 != 31) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x509 = 3526U;
	volatile uint16_t x510 = 23U;
	int32_t x511 = INT32_MAX;
	volatile int16_t x512 = INT16_MIN;
	static int32_t t49 = -19674;

	t49 = (x509>>(x510&(x511&x512)));

	if (t49 != 3526) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x517 = INT16_MAX;
	uint16_t x518 = 18U;
	static uint64_t x519 = 594109334LLU;
	static int8_t x520 = 1;
	volatile int32_t t50 = -898;

	t50 = (x517>>(x518&(x519&x520)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x522 = INT64_MAX;
	static int16_t x524 = 1;

	t51 = (x521>>(x522&(x523&x524)));

	if (t51 != 447) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x533 = 89836846LL;
	int16_t x534 = INT16_MAX;
	int16_t x535 = -1;
	uint16_t x536 = 1U;
	volatile int64_t t52 = 16024831412639LL;

	t52 = (x533>>(x534&(x535&x536)));

	if (t52 != 44918423LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x537 = 357605613283914687LL;
	int16_t x539 = INT16_MIN;
	int8_t x540 = 3;
	static int64_t t53 = -936055857436523420LL;

	t53 = (x537>>(x538&(x539&x540)));

	if (t53 != 357605613283914687LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x549 = 1U;
	uint16_t x550 = 1646U;
	int8_t x551 = 1;
	int64_t x552 = 308LL;
	volatile int32_t t54 = 95;

	t54 = (x549>>(x550&(x551&x552)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x553 = INT8_MAX;
	int64_t x554 = -1505764444LL;
	volatile uint8_t x555 = 13U;
	int32_t x556 = -44087201;
	int32_t t55 = -62550;

	t55 = (x553>>(x554&(x555&x556)));

	if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x561 = INT16_MAX;
	uint8_t x563 = 1U;
	static volatile uint64_t x564 = UINT64_MAX;
	volatile int32_t t56 = 1;

	t56 = (x561>>(x562&(x563&x564)));

	if (t56 != 16383) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x582 = INT8_MAX;
	static uint64_t x584 = 18296448LLU;
	volatile uint64_t t57 = 4033769214907LLU;

	t57 = (x581>>(x582&(x583&x584)));

	if (t57 != 1585636209171LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x601 = UINT64_MAX;
	static volatile int16_t x602 = -449;
	int64_t x603 = 20275193979LL;
	int8_t x604 = 0;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = (x601>>(x602&(x603&x604)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x611 = -1LL;
	uint8_t x612 = UINT8_MAX;
	int32_t t59 = -94189979;

	t59 = (x609>>(x610&(x611&x612)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x625 = 12U;
	int64_t x627 = INT64_MIN;
	uint64_t x628 = 19629845297294660LLU;
	volatile int32_t t60 = 510774;

	t60 = (x625>>(x626&(x627&x628)));

	if (t60 != 12) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x645 = 18535243439LLU;
	int64_t x646 = INT64_MAX;
	uint16_t x648 = 49U;
	uint64_t t61 = 291077365937792LLU;

	t61 = (x645>>(x646&(x647&x648)));

	if (t61 != 282825LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x663 = 14U;
	volatile uint64_t x664 = UINT64_MAX;
	int32_t t62 = 33;

	t62 = (x661>>(x662&(x663&x664)));

	if (t62 != 2047) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x665 = 330U;
	static uint64_t x666 = UINT64_MAX;
	static uint32_t x667 = UINT32_MAX;
	volatile int32_t t63 = 4326709;

	t63 = (x665>>(x666&(x667&x668)));

	if (t63 != 330) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x673 = 159518025554546LL;
	uint32_t x674 = 10U;
	int64_t x676 = INT64_MIN;
	static int64_t t64 = 33283171317189983LL;

	t64 = (x673>>(x674&(x675&x676)));

	if (t64 != 159518025554546LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x697 = 56U;
	int16_t x698 = INT16_MAX;
	static volatile uint32_t x699 = 1531443797U;
	static int64_t x700 = INT64_MIN;
	volatile uint32_t t65 = 405927U;

	t65 = (x697>>(x698&(x699&x700)));

	if (t65 != 56U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x701 = INT8_MAX;
	int8_t x702 = INT8_MAX;
	int64_t x703 = INT64_MAX;
	static int32_t t66 = 238;

	t66 = (x701>>(x702&(x703&x704)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x722 = INT8_MIN;
	int8_t x724 = 3;
	int32_t t67 = 1;

	t67 = (x721>>(x722&(x723&x724)));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x737 = 11U;
	uint8_t x740 = 0U;
	volatile int32_t t68 = 19436014;

	t68 = (x737>>(x738&(x739&x740)));

	if (t68 != 11) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x745 = 470U;
	int32_t x746 = INT32_MIN;
	uint8_t x747 = UINT8_MAX;
	uint32_t x748 = 20737U;
	uint32_t t69 = 39235U;

	t69 = (x745>>(x746&(x747&x748)));

	if (t69 != 470U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x765 = INT32_MAX;
	int8_t x767 = INT8_MAX;
	int8_t x768 = INT8_MIN;
	volatile int32_t t70 = INT32_MAX;

	t70 = (x765>>(x766&(x767&x768)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x774 = UINT32_MAX;
	uint8_t x776 = 2U;
	volatile uint32_t t71 = 2U;

	t71 = (x773>>(x774&(x775&x776)));

	if (t71 != 203768U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x777 = 44U;
	volatile uint8_t x778 = UINT8_MAX;
	static int32_t x779 = INT32_MIN;
	int32_t x780 = INT32_MIN;
	volatile uint32_t t72 = 21313U;

	t72 = (x777>>(x778&(x779&x780)));

	if (t72 != 44U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x794 = UINT8_MAX;
	static volatile int8_t x795 = 3;
	static volatile int64_t x796 = -1LL;
	volatile uint64_t t73 = 13018898LLU;

	t73 = (x793>>(x794&(x795&x796)));

	if (t73 != 117194589522LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x805 = INT8_MAX;
	int16_t x806 = 3;
	int16_t x807 = 18;
	int16_t x808 = -1;
	static int32_t t74 = 2091989;

	t74 = (x805>>(x806&(x807&x808)));

	if (t74 != 31) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x821 = INT16_MAX;
	volatile uint8_t x822 = UINT8_MAX;
	volatile int16_t x823 = -34;
	int32_t x824 = INT32_MIN;
	volatile int32_t t75 = 10694231;

	t75 = (x821>>(x822&(x823&x824)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x829 = UINT16_MAX;
	uint16_t x830 = UINT16_MAX;
	uint8_t x831 = 1U;
	static uint64_t x832 = UINT64_MAX;
	int32_t t76 = 6369;

	t76 = (x829>>(x830&(x831&x832)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x841 = UINT64_MAX;
	static int8_t x843 = -1;
	volatile int16_t x844 = INT16_MIN;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (x841>>(x842&(x843&x844)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x869 = UINT8_MAX;
	int16_t x870 = INT16_MIN;
	uint32_t x871 = 83U;
	uint64_t x872 = 7208199686927LLU;
	volatile int32_t t78 = -63430;

	t78 = (x869>>(x870&(x871&x872)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x877 = UINT64_MAX;
	static uint8_t x878 = 26U;
	volatile uint64_t t79 = 211LLU;

	t79 = (x877>>(x878&(x879&x880)));

	if (t79 != 274877906943LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x881 = INT16_MAX;
	volatile int32_t x882 = INT32_MIN;
	int32_t x883 = INT32_MAX;
	uint32_t x884 = 907725U;

	t80 = (x881>>(x882&(x883&x884)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x893 = 11U;
	int8_t x895 = INT8_MIN;
	volatile int32_t x896 = 354368;
	volatile int32_t t81 = -110849428;

	t81 = (x893>>(x894&(x895&x896)));

	if (t81 != 11) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x901 = INT32_MAX;
	uint16_t x903 = 254U;
	volatile int32_t t82 = INT32_MAX;

	t82 = (x901>>(x902&(x903&x904)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x905 = 2542U;
	static volatile int8_t x906 = -1;
	int32_t x908 = INT32_MAX;

	t83 = (x905>>(x906&(x907&x908)));

	if (t83 != 1271U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x938 = 119U;
	static int16_t x939 = INT16_MAX;
	volatile uint32_t t84 = 43U;

	t84 = (x937>>(x938&(x939&x940)));

	if (t84 != 3564U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x949 = INT8_MAX;
	static uint8_t x951 = 90U;
	uint16_t x952 = 1U;
	int32_t t85 = -596;

	t85 = (x949>>(x950&(x951&x952)));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x953 = 1419926537U;
	int64_t x954 = INT64_MIN;
	int64_t x956 = 12165871LL;

	t86 = (x953>>(x954&(x955&x956)));

	if (t86 != 1419926537U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x964 = INT32_MIN;
	uint64_t t87 = 583720LLU;

	t87 = (x961>>(x962&(x963&x964)));

	if (t87 != 15LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x966 = UINT64_MAX;
	volatile int8_t x968 = 4;
	int32_t t88 = -63790911;

	t88 = (x965>>(x966&(x967&x968)));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x969 = INT64_MAX;
	static uint32_t x972 = 0U;
	int64_t t89 = INT64_MAX;

	t89 = (x969>>(x970&(x971&x972)));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x981 = 3;
	int64_t x982 = INT64_MAX;
	int32_t t90 = -45522159;

	t90 = (x981>>(x982&(x983&x984)));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x994 = 298U;
	int32_t x995 = INT32_MIN;
	uint8_t x996 = UINT8_MAX;
	volatile uint32_t t91 = 3426121U;

	t91 = (x993>>(x994&(x995&x996)));

	if (t91 != 11841092U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1001 = UINT32_MAX;
	static int32_t x1002 = INT32_MIN;
	uint16_t x1003 = 59U;
	uint32_t x1004 = UINT32_MAX;
	static uint32_t t92 = UINT32_MAX;

	t92 = (x1001>>(x1002&(x1003&x1004)));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x1011 = INT32_MAX;
	volatile int32_t t93 = INT32_MAX;

	t93 = (x1009>>(x1010&(x1011&x1012)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x1013 = 7224U;
	int8_t x1015 = 3;
	static int32_t x1016 = INT32_MAX;
	static int32_t t94 = 12;

	t94 = (x1013>>(x1014&(x1015&x1016)));

	if (t94 != 903) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1021 = 100U;
	volatile uint8_t x1022 = 0U;
	int8_t x1023 = INT8_MIN;
	volatile int32_t x1024 = INT32_MAX;
	int32_t t95 = 39652;

	t95 = (x1021>>(x1022&(x1023&x1024)));

	if (t95 != 100) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x1045 = 943U;
	int32_t x1046 = 3847;
	static int8_t x1047 = INT8_MAX;
	static int32_t x1048 = 116853444;

	t96 = (x1045>>(x1046&(x1047&x1048)));

	if (t96 != 58) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x1053 = INT8_MAX;
	volatile uint16_t x1055 = 13U;
	int16_t x1056 = INT16_MAX;
	int32_t t97 = 462;

	t97 = (x1053>>(x1054&(x1055&x1056)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x1061 = 2084U;
	static uint32_t x1062 = 2U;
	static int8_t x1063 = INT8_MIN;
	static int32_t x1064 = -1;
	uint32_t t98 = 710032387U;

	t98 = (x1061>>(x1062&(x1063&x1064)));

	if (t98 != 2084U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x1081 = 130681079U;
	int16_t x1082 = 0;
	int8_t x1083 = INT8_MIN;

	t99 = (x1081>>(x1082&(x1083&x1084)));

	if (t99 != 130681079U) { NG(); } else { ; }
	
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

