#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 58235;
uint64_t x22 = UINT64_MAX;
int32_t x23 = INT32_MIN;
int32_t x27 = -1;
uint8_t x28 = 19U;
static volatile uint64_t t4 = 5778785LLU;
static volatile int32_t t6 = 11;
int64_t x65 = INT64_MAX;
int16_t x67 = -2;
int32_t x69 = 32856098;
int64_t x72 = INT64_MIN;
int64_t x75 = INT64_MIN;
volatile int64_t x84 = -1LL;
volatile int64_t x85 = INT64_MAX;
uint64_t x89 = UINT64_MAX;
int32_t x92 = -288;
int16_t x114 = INT16_MIN;
int32_t x153 = INT32_MAX;
uint32_t x168 = 6620350U;
static volatile int64_t x169 = 3591LL;
uint32_t x172 = UINT32_MAX;
volatile int64_t x182 = -15LL;
int64_t x195 = INT64_MIN;
int8_t x200 = -2;
int8_t x214 = -1;
uint16_t x229 = 111U;
volatile int8_t x238 = -1;
int16_t x269 = INT16_MAX;
int8_t x286 = 14;
static volatile int32_t x289 = 98937966;
int16_t x290 = INT16_MAX;
int64_t x314 = INT64_MIN;
int32_t x340 = INT32_MAX;
volatile int16_t x346 = -1;
volatile uint32_t t47 = 408731U;
int16_t x364 = INT16_MIN;
uint8_t x369 = UINT8_MAX;
int16_t x377 = INT16_MAX;
volatile int8_t x388 = INT8_MIN;
static volatile int8_t x399 = INT8_MIN;
static uint8_t x409 = 1U;
static int32_t t56 = 243633;
uint64_t x426 = UINT64_MAX;
int16_t x429 = INT16_MAX;
static uint16_t x431 = 4U;
static volatile int32_t t60 = -337586443;
int32_t x454 = -15321836;
static int64_t x462 = INT64_MAX;
int32_t x464 = INT32_MIN;
uint8_t x481 = 3U;
volatile int32_t x482 = INT32_MIN;
int32_t t65 = -67;
uint8_t x485 = UINT8_MAX;
int64_t x490 = INT64_MIN;
uint32_t x494 = 1281U;
int8_t x499 = -1;
int64_t x516 = 1993664LL;
int16_t x530 = -215;
int32_t t76 = 459;
int64_t x546 = INT64_MIN;
uint16_t x553 = UINT16_MAX;
volatile int32_t t78 = -105785325;
static uint32_t x571 = 18856390U;
int8_t x575 = INT8_MIN;
int64_t x591 = INT64_MIN;
int16_t x597 = 1;
int32_t x608 = -1342298;
uint8_t x613 = 1U;
int8_t x614 = INT8_MAX;
int16_t x620 = INT16_MAX;
static uint32_t x621 = UINT32_MAX;
volatile uint32_t t88 = UINT32_MAX;
uint8_t x634 = 0U;
int16_t x636 = -8331;
static int32_t x680 = INT32_MAX;
uint32_t x683 = 1462898515U;
uint16_t x699 = 9317U;
static int64_t t95 = 16483852513LL;
int64_t x727 = -1LL;
int32_t t98 = 408164;


void f0(void) {
	uint8_t x5 = 22U;
	int64_t x6 = INT64_MIN;
	int64_t x7 = 15792LL;
	static uint64_t x8 = UINT64_MAX;

	t0 = (x5>>(x6==(x7%x8)));

	if (t0 != 22) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MIN;
	static uint32_t x11 = UINT32_MAX;
	int32_t x12 = -535339552;
	static int64_t t1 = INT64_MAX;

	t1 = (x9>>(x10==(x11%x12)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = 701U;
	int8_t x14 = -2;
	int64_t x15 = INT64_MAX;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t2 = 3771;

	t2 = (x13>>(x14==(x15%x16)));

	if (t2 != 701) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 108;
	int32_t x24 = INT32_MIN;
	int32_t t3 = 1;

	t3 = (x21>>(x22==(x23%x24)));

	if (t3 != 108) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 2400536495LLU;
	int8_t x26 = INT8_MAX;

	t4 = (x25>>(x26==(x27%x28)));

	if (t4 != 2400536495LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 28180475407LLU;
	int32_t x42 = INT32_MAX;
	volatile int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MIN;
	uint64_t t5 = 16961753586LLU;

	t5 = (x41>>(x42==(x43%x44)));

	if (t5 != 28180475407LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x49 = UINT16_MAX;
	static int32_t x50 = INT32_MIN;
	int64_t x51 = -1LL;
	static int64_t x52 = 33364715283253363LL;

	t6 = (x49>>(x50==(x51%x52)));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x66 = -1;
	int8_t x68 = INT8_MIN;
	static volatile int64_t t7 = INT64_MAX;

	t7 = (x65>>(x66==(x67%x68)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x70 = 11LL;
	uint16_t x71 = 2U;
	volatile int32_t t8 = 5;

	t8 = (x69>>(x70==(x71%x72)));

	if (t8 != 32856098) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x73 = UINT64_MAX;
	uint32_t x74 = UINT32_MAX;
	static int16_t x76 = INT16_MIN;
	static volatile uint64_t t9 = UINT64_MAX;

	t9 = (x73>>(x74==(x75%x76)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x81 = 1055022000615858LLU;
	static volatile uint32_t x82 = 91157102U;
	uint16_t x83 = 113U;
	volatile uint64_t t10 = 767387470943LLU;

	t10 = (x81>>(x82==(x83%x84)));

	if (t10 != 1055022000615858LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x86 = INT32_MAX;
	uint8_t x87 = UINT8_MAX;
	volatile int64_t x88 = INT64_MIN;
	int64_t t11 = INT64_MAX;

	t11 = (x85>>(x86==(x87%x88)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x90 = UINT8_MAX;
	static int64_t x91 = INT64_MIN;
	uint64_t t12 = UINT64_MAX;

	t12 = (x89>>(x90==(x91%x92)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x97 = 95U;
	static int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MAX;
	int16_t x100 = -1;
	volatile int32_t t13 = -33786954;

	t13 = (x97>>(x98==(x99%x100)));

	if (t13 != 95) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x101 = UINT64_MAX;
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	uint32_t x104 = 423680318U;
	uint64_t t14 = UINT64_MAX;

	t14 = (x101>>(x102==(x103%x104)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x113 = 72U;
	int8_t x115 = 12;
	int8_t x116 = -1;
	int32_t t15 = -49172;

	t15 = (x113>>(x114==(x115%x116)));

	if (t15 != 72) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x117 = UINT32_MAX;
	volatile uint64_t x118 = 1800793073LLU;
	static volatile int16_t x119 = -1;
	int64_t x120 = 240279919155493757LL;
	uint32_t t16 = UINT32_MAX;

	t16 = (x117>>(x118==(x119%x120)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x149 = 4;
	int8_t x150 = INT8_MIN;
	uint64_t x151 = 21333484906676777LLU;
	int16_t x152 = -331;
	int32_t t17 = -35;

	t17 = (x149>>(x150==(x151%x152)));

	if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x154 = UINT8_MAX;
	uint32_t x155 = UINT32_MAX;
	uint16_t x156 = 94U;
	int32_t t18 = INT32_MAX;

	t18 = (x153>>(x154==(x155%x156)));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x157 = 79U;
	volatile int64_t x158 = -15740734963LL;
	int64_t x159 = 254588625067447LL;
	static volatile uint32_t x160 = 149225684U;
	volatile int32_t t19 = 133;

	t19 = (x157>>(x158==(x159%x160)));

	if (t19 != 79) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x165 = 703865111LL;
	uint64_t x166 = 330490745534504456LLU;
	static int64_t x167 = -1999668151662LL;
	int64_t t20 = 25637425788LL;

	t20 = (x165>>(x166==(x167%x168)));

	if (t20 != 703865111LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x170 = UINT32_MAX;
	uint16_t x171 = UINT16_MAX;
	int64_t t21 = 1568465LL;

	t21 = (x169>>(x170==(x171%x172)));

	if (t21 != 3591LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x177 = 5U;
	int64_t x178 = INT64_MIN;
	volatile int32_t x179 = INT32_MIN;
	int16_t x180 = -1;
	volatile int32_t t22 = -366643;

	t22 = (x177>>(x178==(x179%x180)));

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x181 = INT16_MAX;
	static uint8_t x183 = UINT8_MAX;
	volatile int8_t x184 = -1;
	int32_t t23 = 0;

	t23 = (x181>>(x182==(x183%x184)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x193 = UINT32_MAX;
	int32_t x194 = INT32_MAX;
	static int32_t x196 = 1;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x193>>(x194==(x195%x196)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x197 = 12U;
	int64_t x198 = INT64_MIN;
	int8_t x199 = -1;
	static volatile int32_t t25 = -159848;

	t25 = (x197>>(x198==(x199%x200)));

	if (t25 != 12) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x213 = 795U;
	static uint64_t x215 = UINT64_MAX;
	int8_t x216 = -1;
	uint32_t t26 = 3046U;

	t26 = (x213>>(x214==(x215%x216)));

	if (t26 != 795U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x230 = -1;
	volatile uint32_t x231 = 4631312U;
	uint32_t x232 = 7U;
	static volatile int32_t t27 = -11;

	t27 = (x229>>(x230==(x231%x232)));

	if (t27 != 111) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x233 = UINT64_MAX;
	uint16_t x234 = 1407U;
	volatile int64_t x235 = INT64_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x233>>(x234==(x235%x236)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x237 = 1;
	uint8_t x239 = 68U;
	int32_t x240 = INT32_MIN;
	int32_t t29 = 2;

	t29 = (x237>>(x238==(x239%x240)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x249 = UINT64_MAX;
	volatile uint64_t x250 = 926LLU;
	static int32_t x251 = -305817;
	int16_t x252 = -1;
	uint64_t t30 = UINT64_MAX;

	t30 = (x249>>(x250==(x251%x252)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x257 = 7LL;
	int16_t x258 = -1;
	static uint8_t x259 = UINT8_MAX;
	int8_t x260 = INT8_MIN;
	volatile int64_t t31 = 2222818422487LL;

	t31 = (x257>>(x258==(x259%x260)));

	if (t31 != 7LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x265 = INT32_MAX;
	uint16_t x266 = 369U;
	static int32_t x267 = 11677;
	volatile uint32_t x268 = UINT32_MAX;
	volatile int32_t t32 = INT32_MAX;

	t32 = (x265>>(x266==(x267%x268)));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x270 = 2637835166558477LLU;
	int32_t x271 = -3521;
	uint8_t x272 = 44U;
	volatile int32_t t33 = -56300;

	t33 = (x269>>(x270==(x271%x272)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x281 = 442723819042LLU;
	int64_t x282 = -1LL;
	int64_t x283 = INT64_MIN;
	volatile int32_t x284 = 356956;
	uint64_t t34 = 3LLU;

	t34 = (x281>>(x282==(x283%x284)));

	if (t34 != 442723819042LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x285 = 6462U;
	int8_t x287 = INT8_MIN;
	int8_t x288 = -25;
	volatile int32_t t35 = -59763;

	t35 = (x285>>(x286==(x287%x288)));

	if (t35 != 6462) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x291 = 0U;
	int32_t x292 = INT32_MIN;
	int32_t t36 = -3574889;

	t36 = (x289>>(x290==(x291%x292)));

	if (t36 != 98937966) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x293 = INT8_MAX;
	uint8_t x294 = 0U;
	static uint8_t x295 = 29U;
	static uint32_t x296 = 9934U;
	static volatile int32_t t37 = 9758;

	t37 = (x293>>(x294==(x295%x296)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x297 = INT16_MAX;
	static volatile int64_t x298 = INT64_MIN;
	static int16_t x299 = -1;
	uint16_t x300 = 237U;
	static int32_t t38 = 1;

	t38 = (x297>>(x298==(x299%x300)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x309 = 38030LL;
	static int64_t x310 = 2012436LL;
	uint32_t x311 = UINT32_MAX;
	uint16_t x312 = 29U;
	volatile int64_t t39 = -320973LL;

	t39 = (x309>>(x310==(x311%x312)));

	if (t39 != 38030LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x313 = INT64_MAX;
	volatile uint8_t x315 = 7U;
	volatile uint64_t x316 = 1589178221218503LLU;
	int64_t t40 = INT64_MAX;

	t40 = (x313>>(x314==(x315%x316)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x321 = 134957209U;
	uint64_t x322 = UINT64_MAX;
	static volatile uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MAX;
	volatile uint32_t t41 = 102082U;

	t41 = (x321>>(x322==(x323%x324)));

	if (t41 != 134957209U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x329 = 183937871;
	int8_t x330 = -8;
	uint16_t x331 = 528U;
	volatile int64_t x332 = INT64_MIN;
	volatile int32_t t42 = 169851996;

	t42 = (x329>>(x330==(x331%x332)));

	if (t42 != 183937871) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x333 = INT8_MAX;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MAX;
	volatile int32_t t43 = -1;

	t43 = (x333>>(x334==(x335%x336)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x337 = INT32_MAX;
	int8_t x338 = 0;
	static volatile uint32_t x339 = 16774U;
	int32_t t44 = INT32_MAX;

	t44 = (x337>>(x338==(x339%x340)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x345 = 26684LLU;
	static uint16_t x347 = UINT16_MAX;
	volatile uint64_t x348 = 52806616568766505LLU;
	static uint64_t t45 = 121886124LLU;

	t45 = (x345>>(x346==(x347%x348)));

	if (t45 != 26684LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x353 = INT64_MAX;
	uint16_t x354 = 0U;
	uint32_t x355 = 6114U;
	static int32_t x356 = INT32_MIN;
	int64_t t46 = INT64_MAX;

	t46 = (x353>>(x354==(x355%x356)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x357 = 444493U;
	int32_t x358 = -74885569;
	int32_t x359 = -1;
	uint8_t x360 = UINT8_MAX;

	t47 = (x357>>(x358==(x359%x360)));

	if (t47 != 444493U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x361 = 75U;
	static int64_t x362 = -1LL;
	static uint64_t x363 = 70117461344LLU;
	int32_t t48 = -1;

	t48 = (x361>>(x362==(x363%x364)));

	if (t48 != 75) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x370 = -1LL;
	int16_t x371 = 21;
	uint8_t x372 = 97U;
	volatile int32_t t49 = 24;

	t49 = (x369>>(x370==(x371%x372)));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x373 = INT64_MAX;
	int64_t x374 = -1LL;
	uint8_t x375 = 2U;
	int8_t x376 = -1;
	int64_t t50 = INT64_MAX;

	t50 = (x373>>(x374==(x375%x376)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x378 = INT8_MAX;
	int8_t x379 = INT8_MIN;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t51 = 297578;

	t51 = (x377>>(x378==(x379%x380)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x381 = 128443236425422384LL;
	int32_t x382 = -1;
	int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MAX;
	int64_t t52 = -4902325648682LL;

	t52 = (x381>>(x382==(x383%x384)));

	if (t52 != 128443236425422384LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x385 = INT8_MAX;
	static uint8_t x386 = 6U;
	volatile int64_t x387 = -1LL;
	int32_t t53 = 8543877;

	t53 = (x385>>(x386==(x387%x388)));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x397 = UINT16_MAX;
	uint64_t x398 = UINT64_MAX;
	uint8_t x400 = 84U;
	volatile int32_t t54 = 279401;

	t54 = (x397>>(x398==(x399%x400)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x401 = 0U;
	volatile int64_t x402 = 535214054019536405LL;
	int64_t x403 = -341572795926125LL;
	int64_t x404 = -25LL;
	volatile int32_t t55 = 1845408;

	t55 = (x401>>(x402==(x403%x404)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x410 = UINT16_MAX;
	static int16_t x411 = 1;
	int64_t x412 = -1LL;

	t56 = (x409>>(x410==(x411%x412)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x413 = 167595156LL;
	int16_t x414 = INT16_MIN;
	int8_t x415 = -2;
	uint8_t x416 = UINT8_MAX;
	int64_t t57 = 828LL;

	t57 = (x413>>(x414==(x415%x416)));

	if (t57 != 167595156LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x421 = 0U;
	int64_t x422 = 48453LL;
	int16_t x423 = 22;
	uint8_t x424 = 3U;
	int32_t t58 = -108076;

	t58 = (x421>>(x422==(x423%x424)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x425 = 19;
	volatile int64_t x427 = 1568534LL;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t59 = -94002347;

	t59 = (x425>>(x426==(x427%x428)));

	if (t59 != 19) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x430 = 4731;
	int32_t x432 = INT32_MIN;

	t60 = (x429>>(x430==(x431%x432)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x453 = 5655;
	volatile uint8_t x455 = UINT8_MAX;
	volatile int32_t x456 = INT32_MIN;
	int32_t t61 = 17052;

	t61 = (x453>>(x454==(x455%x456)));

	if (t61 != 5655) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x457 = UINT8_MAX;
	uint16_t x458 = 88U;
	volatile int16_t x459 = -1;
	int16_t x460 = INT16_MAX;
	static volatile int32_t t62 = 179803199;

	t62 = (x457>>(x458==(x459%x460)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x461 = UINT64_MAX;
	static volatile int16_t x463 = -1;
	uint64_t t63 = UINT64_MAX;

	t63 = (x461>>(x462==(x463%x464)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x469 = UINT32_MAX;
	int8_t x470 = -1;
	volatile int64_t x471 = INT64_MIN;
	uint64_t x472 = UINT64_MAX;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = (x469>>(x470==(x471%x472)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x483 = -232;
	int16_t x484 = INT16_MIN;

	t65 = (x481>>(x482==(x483%x484)));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x486 = -2015;
	int16_t x487 = INT16_MIN;
	int32_t x488 = 31044237;
	int32_t t66 = -355;

	t66 = (x485>>(x486==(x487%x488)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x489 = 1LL;
	volatile int16_t x491 = -1;
	int16_t x492 = INT16_MAX;
	static int64_t t67 = 10210223938280LL;

	t67 = (x489>>(x490==(x491%x492)));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x493 = INT32_MAX;
	volatile int16_t x495 = INT16_MIN;
	int16_t x496 = -201;
	static volatile int32_t t68 = INT32_MAX;

	t68 = (x493>>(x494==(x495%x496)));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x497 = UINT16_MAX;
	uint16_t x498 = 898U;
	int64_t x500 = INT64_MIN;
	volatile int32_t t69 = 0;

	t69 = (x497>>(x498==(x499%x500)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x501 = INT16_MAX;
	int64_t x502 = 157604259135LL;
	int16_t x503 = INT16_MAX;
	volatile int8_t x504 = 2;
	volatile int32_t t70 = 118429305;

	t70 = (x501>>(x502==(x503%x504)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x505 = 8305235832545574147LLU;
	int16_t x506 = -1;
	static int16_t x507 = INT16_MAX;
	static int16_t x508 = INT16_MIN;
	uint64_t t71 = 1043638908218360285LLU;

	t71 = (x505>>(x506==(x507%x508)));

	if (t71 != 8305235832545574147LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x513 = 443LL;
	volatile int64_t x514 = INT64_MIN;
	uint64_t x515 = 73419491904520675LLU;
	int64_t t72 = 29983LL;

	t72 = (x513>>(x514==(x515%x516)));

	if (t72 != 443LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x521 = INT16_MAX;
	int32_t x522 = INT32_MAX;
	static int16_t x523 = INT16_MIN;
	int16_t x524 = -26;
	static volatile int32_t t73 = 3781;

	t73 = (x521>>(x522==(x523%x524)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x529 = 24U;
	volatile int16_t x531 = -1;
	static int64_t x532 = INT64_MIN;
	static int32_t t74 = -947477702;

	t74 = (x529>>(x530==(x531%x532)));

	if (t74 != 24) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x533 = INT8_MAX;
	volatile int16_t x534 = INT16_MAX;
	static int32_t x535 = -1;
	uint64_t x536 = 7352338940091900LLU;
	volatile int32_t t75 = 74160;

	t75 = (x533>>(x534==(x535%x536)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x541 = INT8_MAX;
	uint32_t x542 = UINT32_MAX;
	int8_t x543 = INT8_MAX;
	int32_t x544 = INT32_MAX;

	t76 = (x541>>(x542==(x543%x544)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x545 = INT8_MAX;
	uint16_t x547 = UINT16_MAX;
	static volatile int8_t x548 = INT8_MIN;
	int32_t t77 = -144178344;

	t77 = (x545>>(x546==(x547%x548)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x554 = -1;
	int16_t x555 = -1;
	int8_t x556 = INT8_MIN;

	t78 = (x553>>(x554==(x555%x556)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x557 = INT64_MAX;
	static uint16_t x558 = 3258U;
	int8_t x559 = INT8_MIN;
	volatile uint32_t x560 = 4698003U;
	int64_t t79 = INT64_MAX;

	t79 = (x557>>(x558==(x559%x560)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x569 = 3U;
	uint64_t x570 = 3472156697695LLU;
	int64_t x572 = INT64_MIN;
	static int32_t t80 = -3184716;

	t80 = (x569>>(x570==(x571%x572)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x573 = 11690178796LLU;
	int8_t x574 = -1;
	volatile int32_t x576 = -130937400;
	volatile uint64_t t81 = 24LLU;

	t81 = (x573>>(x574==(x575%x576)));

	if (t81 != 11690178796LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x581 = 398U;
	volatile int32_t x582 = 231776875;
	int64_t x583 = INT64_MAX;
	volatile int32_t x584 = -1;
	volatile int32_t t82 = 8308;

	t82 = (x581>>(x582==(x583%x584)));

	if (t82 != 398) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x589 = 160286885;
	static uint8_t x590 = UINT8_MAX;
	int8_t x592 = INT8_MIN;
	volatile int32_t t83 = 0;

	t83 = (x589>>(x590==(x591%x592)));

	if (t83 != 160286885) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x598 = -933;
	int16_t x599 = 1;
	static volatile uint64_t x600 = 2549306864049LLU;
	int32_t t84 = 1;

	t84 = (x597>>(x598==(x599%x600)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x605 = INT32_MAX;
	int8_t x606 = INT8_MIN;
	int64_t x607 = INT64_MIN;
	int32_t t85 = INT32_MAX;

	t85 = (x605>>(x606==(x607%x608)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x615 = 15;
	static int8_t x616 = -1;
	volatile int32_t t86 = 526393;

	t86 = (x613>>(x614==(x615%x616)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x617 = 319;
	volatile int32_t x618 = -403;
	volatile int64_t x619 = INT64_MAX;
	int32_t t87 = -5003854;

	t87 = (x617>>(x618==(x619%x620)));

	if (t87 != 319) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x622 = -93;
	volatile int32_t x623 = INT32_MAX;
	volatile int8_t x624 = INT8_MIN;

	t88 = (x621>>(x622==(x623%x624)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x625 = INT32_MAX;
	static volatile int64_t x626 = INT64_MIN;
	uint16_t x627 = 118U;
	int16_t x628 = INT16_MIN;
	static int32_t t89 = INT32_MAX;

	t89 = (x625>>(x626==(x627%x628)));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x633 = 426236991537115LLU;
	int64_t x635 = INT64_MIN;
	volatile uint64_t t90 = 35756243997976233LLU;

	t90 = (x633>>(x634==(x635%x636)));

	if (t90 != 426236991537115LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x661 = 1U;
	volatile uint64_t x662 = 1560753LLU;
	static int64_t x663 = -11550020LL;
	int64_t x664 = 4765389LL;
	int32_t t91 = -59394973;

	t91 = (x661>>(x662==(x663%x664)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x665 = 1674U;
	static uint8_t x666 = UINT8_MAX;
	int32_t x667 = INT32_MIN;
	int32_t x668 = -9068223;
	int32_t t92 = -1;

	t92 = (x665>>(x666==(x667%x668)));

	if (t92 != 1674) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x677 = INT64_MAX;
	uint8_t x678 = 1U;
	volatile uint32_t x679 = 5053U;
	int64_t t93 = INT64_MAX;

	t93 = (x677>>(x678==(x679%x680)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x681 = 804874;
	static int8_t x682 = INT8_MIN;
	int64_t x684 = INT64_MIN;
	volatile int32_t t94 = 10987688;

	t94 = (x681>>(x682==(x683%x684)));

	if (t94 != 804874) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x697 = 3036739LL;
	uint32_t x698 = 8455572U;
	static uint64_t x700 = 120485923211058837LLU;

	t95 = (x697>>(x698==(x699%x700)));

	if (t95 != 3036739LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x713 = 13;
	uint32_t x714 = UINT32_MAX;
	static int16_t x715 = INT16_MIN;
	static int16_t x716 = INT16_MAX;
	static volatile int32_t t96 = 35;

	t96 = (x713>>(x714==(x715%x716)));

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x721 = 39LLU;
	int16_t x722 = INT16_MIN;
	int64_t x723 = -4311651150903462LL;
	static int16_t x724 = INT16_MIN;
	static uint64_t t97 = 63025LLU;

	t97 = (x721>>(x722==(x723%x724)));

	if (t97 != 39LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x725 = UINT8_MAX;
	int64_t x726 = INT64_MIN;
	static uint64_t x728 = 2068505113680722LLU;

	t98 = (x725>>(x726==(x727%x728)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x729 = 2U;
	int32_t x730 = INT32_MIN;
	int64_t x731 = INT64_MIN;
	volatile uint16_t x732 = UINT16_MAX;
	volatile uint32_t t99 = 1U;

	t99 = (x729>>(x730==(x731%x732)));

	if (t99 != 2U) { NG(); } else { ; }
	
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

