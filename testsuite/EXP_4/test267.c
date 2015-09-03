#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -2;
int64_t x18 = INT64_MIN;
uint32_t x20 = UINT32_MAX;
static volatile uint64_t x27 = UINT64_MAX;
uint64_t t4 = 72268367051235755LLU;
static int32_t x41 = 44262;
int32_t t5 = 549804300;
volatile uint64_t x45 = 7720798228LLU;
int64_t x61 = 6928227521779LL;
static int64_t t7 = -3541LL;
int64_t x66 = INT64_MAX;
uint16_t x83 = UINT16_MAX;
volatile uint8_t x85 = 0U;
uint16_t x93 = 111U;
uint8_t x98 = 20U;
uint8_t x106 = UINT8_MAX;
int8_t x107 = INT8_MIN;
volatile int64_t x110 = INT64_MAX;
int64_t x118 = 15528767294903439LL;
static volatile int8_t x119 = INT8_MIN;
int32_t x136 = -558382;
int32_t t21 = INT32_MAX;
int8_t x159 = INT8_MAX;
static volatile uint64_t t23 = 977230023LLU;
volatile uint8_t x193 = UINT8_MAX;
volatile uint64_t x196 = 34550482LLU;
int32_t x205 = INT32_MAX;
volatile uint16_t x207 = UINT16_MAX;
int8_t x208 = INT8_MIN;
volatile int32_t t26 = INT32_MAX;
int64_t x219 = -1LL;
uint16_t x220 = UINT16_MAX;
int8_t x226 = INT8_MIN;
static uint16_t x230 = 9281U;
int16_t x249 = 14;
uint16_t x270 = 1U;
uint8_t x277 = 18U;
uint16_t x311 = 557U;
volatile int32_t t39 = -31167101;
int8_t x321 = 37;
volatile uint64_t x323 = UINT64_MAX;
int32_t x338 = -1;
volatile int64_t x347 = 388LL;
static int32_t x359 = INT32_MAX;
int64_t x367 = -1LL;
uint16_t x375 = UINT16_MAX;
int32_t t48 = 15094454;
int32_t x388 = INT32_MIN;
int32_t t49 = -61518;
uint64_t x399 = UINT64_MAX;
int32_t x415 = -1;
uint8_t x468 = UINT8_MAX;
volatile int32_t t57 = -31274630;
static int64_t x502 = INT64_MIN;
static int32_t x503 = 6;
int16_t x504 = -106;
int64_t x531 = INT64_MAX;
int32_t x535 = INT32_MIN;
int32_t x537 = INT32_MAX;
volatile uint32_t x540 = UINT32_MAX;
uint16_t x547 = 3U;
int16_t x550 = 22;
uint16_t x565 = 5723U;
int32_t x567 = INT32_MIN;
uint8_t x573 = 0U;
int32_t x588 = INT32_MAX;
volatile int32_t t75 = -4;
uint32_t x589 = 3777525U;
volatile int32_t t79 = INT32_MAX;
int8_t x622 = INT8_MIN;
volatile uint64_t t80 = 15416942194LLU;
int32_t t81 = 39595;
int32_t t82 = 2;
uint32_t x649 = UINT32_MAX;
uint32_t x653 = 17973U;
volatile int16_t x656 = INT16_MIN;
volatile uint32_t t84 = 169299U;
volatile uint32_t x657 = 691569U;
static int8_t x664 = INT8_MAX;
int64_t x667 = -772438528639688471LL;
static int32_t t87 = INT32_MAX;
uint32_t x678 = 3409U;
uint32_t x690 = 485U;
uint32_t x693 = UINT32_MAX;
uint32_t t93 = UINT32_MAX;
uint32_t x702 = 152U;
uint64_t x703 = 6LLU;
int16_t x704 = 186;
static uint8_t x714 = UINT8_MAX;
static uint64_t x715 = 62914114104839LLU;
volatile int32_t t95 = -1306;
volatile int32_t t96 = -13;
static uint64_t x757 = UINT64_MAX;


void f0(void) {
	uint8_t x5 = 1U;
	volatile int8_t x6 = 0;
	static volatile int32_t x7 = -1;
	int64_t x8 = -866721973064LL;

	t0 = (x5>>(x6==(x7-x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x13 = UINT8_MAX;
	int8_t x14 = INT8_MIN;
	uint64_t x15 = 14405LLU;
	int8_t x16 = -1;
	volatile int32_t t1 = 59;

	t1 = (x13>>(x14==(x15-x16)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MAX;
	static int8_t x19 = INT8_MIN;
	volatile int64_t t2 = INT64_MAX;

	t2 = (x17>>(x18==(x19-x20)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = UINT64_MAX;
	uint8_t x26 = 21U;
	int32_t x28 = -18376;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x25>>(x26==(x27-x28)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x37 = 7310LLU;
	int32_t x38 = INT32_MAX;
	int64_t x39 = INT64_MAX;
	volatile uint16_t x40 = 202U;

	t4 = (x37>>(x38==(x39-x40)));

	if (t4 != 7310LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x42 = -1;
	uint16_t x43 = 50U;
	uint32_t x44 = UINT32_MAX;

	t5 = (x41>>(x42==(x43-x44)));

	if (t5 != 44262) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x46 = 120;
	static uint64_t x47 = 2096160703LLU;
	uint8_t x48 = 59U;
	uint64_t t6 = 6101LLU;

	t6 = (x45>>(x46==(x47-x48)));

	if (t6 != 7720798228LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x62 = 4020U;
	uint16_t x63 = 14U;
	int8_t x64 = INT8_MIN;

	t7 = (x61>>(x62==(x63-x64)));

	if (t7 != 6928227521779LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x65 = 3796U;
	static uint8_t x67 = 13U;
	int16_t x68 = INT16_MIN;
	volatile int32_t t8 = -4951;

	t8 = (x65>>(x66==(x67-x68)));

	if (t8 != 3796) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x69 = 30448U;
	int8_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	static int16_t x72 = INT16_MIN;
	int32_t t9 = 65266862;

	t9 = (x69>>(x70==(x71-x72)));

	if (t9 != 30448) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x81 = 1268;
	volatile uint16_t x82 = 11246U;
	uint8_t x84 = 1U;
	int32_t t10 = 0;

	t10 = (x81>>(x82==(x83-x84)));

	if (t10 != 1268) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x86 = -1;
	int32_t x87 = -3;
	uint32_t x88 = 1963U;
	int32_t t11 = -1479829;

	t11 = (x85>>(x86==(x87-x88)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x89 = UINT8_MAX;
	uint32_t x90 = UINT32_MAX;
	uint16_t x91 = 1U;
	uint16_t x92 = UINT16_MAX;
	int32_t t12 = 9;

	t12 = (x89>>(x90==(x91-x92)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x94 = -15;
	static int32_t x95 = INT32_MAX;
	uint32_t x96 = 27729544U;
	volatile int32_t t13 = 44122;

	t13 = (x93>>(x94==(x95-x96)));

	if (t13 != 111) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x97 = INT8_MAX;
	volatile uint8_t x99 = 1U;
	int32_t x100 = -1;
	static volatile int32_t t14 = -17865;

	t14 = (x97>>(x98==(x99-x100)));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x108 = -1;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x105>>(x106==(x107-x108)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x109 = 99902715U;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 0LLU;
	uint32_t t16 = 2999681U;

	t16 = (x109>>(x110==(x111-x112)));

	if (t16 != 99902715U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x120 = INT8_MIN;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x117>>(x118==(x119-x120)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x133 = INT16_MAX;
	volatile int8_t x134 = 3;
	static int32_t x135 = 33661544;
	volatile int32_t t18 = -1833;

	t18 = (x133>>(x134==(x135-x136)));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x137 = INT64_MAX;
	int16_t x138 = INT16_MAX;
	uint32_t x139 = 113U;
	uint64_t x140 = 27510033598554LLU;
	int64_t t19 = INT64_MAX;

	t19 = (x137>>(x138==(x139-x140)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x149 = 496486LL;
	volatile int8_t x150 = INT8_MIN;
	uint8_t x151 = 14U;
	uint16_t x152 = 3036U;
	static int64_t t20 = 253710113LL;

	t20 = (x149>>(x150==(x151-x152)));

	if (t20 != 496486LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = 52643;
	uint32_t x155 = 2027748U;
	uint64_t x156 = UINT64_MAX;

	t21 = (x153>>(x154==(x155-x156)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x157 = INT64_MAX;
	int32_t x158 = INT32_MAX;
	static int32_t x160 = -1;
	static volatile int64_t t22 = INT64_MAX;

	t22 = (x157>>(x158==(x159-x160)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x165 = 2681LLU;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -68794;
	int64_t x168 = INT64_MIN;

	t23 = (x165>>(x166==(x167-x168)));

	if (t23 != 2681LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x194 = -1;
	int32_t x195 = INT32_MAX;
	int32_t t24 = 5;

	t24 = (x193>>(x194==(x195-x196)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x197 = 11U;
	int8_t x198 = INT8_MIN;
	uint64_t x199 = 204030823454621LLU;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t25 = -38;

	t25 = (x197>>(x198==(x199-x200)));

	if (t25 != 11) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x206 = INT8_MIN;

	t26 = (x205>>(x206==(x207-x208)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x217 = UINT32_MAX;
	int64_t x218 = INT64_MIN;
	static volatile uint32_t t27 = UINT32_MAX;

	t27 = (x217>>(x218==(x219-x220)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x221 = 0U;
	int32_t x222 = 1;
	int8_t x223 = -1;
	int64_t x224 = 433975641504199100LL;
	volatile uint32_t t28 = 2U;

	t28 = (x221>>(x222==(x223-x224)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x225 = UINT32_MAX;
	int32_t x227 = INT32_MIN;
	static uint64_t x228 = UINT64_MAX;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x225>>(x226==(x227-x228)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x229 = INT32_MAX;
	uint32_t x231 = 8873U;
	static volatile int8_t x232 = INT8_MIN;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x229>>(x230==(x231-x232)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x237 = 6U;
	int32_t x238 = -21;
	uint8_t x239 = UINT8_MAX;
	static int16_t x240 = -1444;
	volatile int32_t t31 = -29;

	t31 = (x237>>(x238==(x239-x240)));

	if (t31 != 6) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x245 = INT64_MAX;
	static volatile int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -1;
	int64_t t32 = INT64_MAX;

	t32 = (x245>>(x246==(x247-x248)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x250 = 8175U;
	int8_t x251 = 1;
	volatile uint32_t x252 = UINT32_MAX;
	volatile int32_t t33 = -1942;

	t33 = (x249>>(x250==(x251-x252)));

	if (t33 != 14) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x269 = UINT64_MAX;
	int8_t x271 = INT8_MIN;
	uint32_t x272 = 0U;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x269>>(x270==(x271-x272)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x278 = 15527011LL;
	int32_t x279 = INT32_MAX;
	uint64_t x280 = 182LLU;
	volatile int32_t t35 = 24196;

	t35 = (x277>>(x278==(x279-x280)));

	if (t35 != 18) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x297 = 52097251497693LLU;
	static int32_t x298 = INT32_MIN;
	static int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MIN;
	volatile uint64_t t36 = 17421008771961LLU;

	t36 = (x297>>(x298==(x299-x300)));

	if (t36 != 52097251497693LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x309 = INT32_MAX;
	uint8_t x310 = 12U;
	int16_t x312 = 4;
	static volatile int32_t t37 = INT32_MAX;

	t37 = (x309>>(x310==(x311-x312)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x313 = 246580804570349768LLU;
	volatile int16_t x314 = INT16_MIN;
	uint8_t x315 = 66U;
	int8_t x316 = INT8_MIN;
	static volatile uint64_t t38 = 17791549923153928LLU;

	t38 = (x313>>(x314==(x315-x316)));

	if (t38 != 246580804570349768LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x317 = 0;
	static int64_t x318 = INT64_MIN;
	int16_t x319 = 806;
	uint32_t x320 = UINT32_MAX;

	t39 = (x317>>(x318==(x319-x320)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x322 = 110;
	volatile int8_t x324 = 54;
	static volatile int32_t t40 = -2062;

	t40 = (x321>>(x322==(x323-x324)));

	if (t40 != 37) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x337 = 3U;
	int16_t x339 = -2;
	int16_t x340 = 12;
	static volatile int32_t t41 = 756153;

	t41 = (x337>>(x338==(x339-x340)));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x345 = 416574U;
	int8_t x346 = INT8_MIN;
	volatile int16_t x348 = INT16_MIN;
	volatile uint32_t t42 = 75183U;

	t42 = (x345>>(x346==(x347-x348)));

	if (t42 != 416574U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x349 = 5;
	int8_t x350 = INT8_MIN;
	uint32_t x351 = 7686947U;
	volatile uint32_t x352 = 2U;
	int32_t t43 = -102;

	t43 = (x349>>(x350==(x351-x352)));

	if (t43 != 5) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x357 = UINT32_MAX;
	int64_t x358 = INT64_MAX;
	uint32_t x360 = 3405015U;
	static uint32_t t44 = UINT32_MAX;

	t44 = (x357>>(x358==(x359-x360)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x365 = 3U;
	uint64_t x366 = 47152448422854LLU;
	volatile int32_t x368 = 2270595;
	volatile int32_t t45 = 138;

	t45 = (x365>>(x366==(x367-x368)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x369 = 23U;
	static int64_t x370 = INT64_MIN;
	static int8_t x371 = INT8_MAX;
	int16_t x372 = 1;
	int32_t t46 = 4010751;

	t46 = (x369>>(x370==(x371-x372)));

	if (t46 != 23) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x373 = 5632U;
	static int32_t x374 = INT32_MIN;
	static uint64_t x376 = UINT64_MAX;
	uint32_t t47 = 1029U;

	t47 = (x373>>(x374==(x375-x376)));

	if (t47 != 5632U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x377 = UINT16_MAX;
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MAX;
	int16_t x380 = -7;

	t48 = (x377>>(x378==(x379-x380)));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x385 = 1;
	static uint16_t x386 = UINT16_MAX;
	uint32_t x387 = 963U;

	t49 = (x385>>(x386==(x387-x388)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x397 = 5;
	int64_t x398 = -345841561365LL;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t50 = 13;

	t50 = (x397>>(x398==(x399-x400)));

	if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x409 = 56;
	int8_t x410 = -1;
	static uint64_t x411 = 13436418826896144LLU;
	uint8_t x412 = UINT8_MAX;
	static volatile int32_t t51 = 4061711;

	t51 = (x409>>(x410==(x411-x412)));

	if (t51 != 56) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x413 = 2U;
	int32_t x414 = INT32_MAX;
	int64_t x416 = INT64_MIN;
	static volatile uint32_t t52 = 1047344U;

	t52 = (x413>>(x414==(x415-x416)));

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x421 = INT32_MAX;
	uint32_t x422 = UINT32_MAX;
	int8_t x423 = INT8_MIN;
	static int16_t x424 = -1;
	int32_t t53 = INT32_MAX;

	t53 = (x421>>(x422==(x423-x424)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x429 = 0U;
	int32_t x430 = INT32_MIN;
	int16_t x431 = -1;
	int8_t x432 = -1;
	volatile int32_t t54 = -2677734;

	t54 = (x429>>(x430==(x431-x432)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x433 = 60632695LL;
	uint16_t x434 = 5152U;
	uint64_t x435 = 18470LLU;
	int64_t x436 = -1LL;
	int64_t t55 = -55761778157129LL;

	t55 = (x433>>(x434==(x435-x436)));

	if (t55 != 60632695LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x441 = 134;
	static int32_t x442 = INT32_MIN;
	int32_t x443 = -1;
	int16_t x444 = -1;
	int32_t t56 = -102442239;

	t56 = (x441>>(x442==(x443-x444)));

	if (t56 != 134) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x465 = 1;
	static volatile uint32_t x466 = UINT32_MAX;
	volatile int8_t x467 = 0;

	t57 = (x465>>(x466==(x467-x468)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x481 = UINT64_MAX;
	int64_t x482 = INT64_MIN;
	int8_t x483 = INT8_MIN;
	volatile int16_t x484 = 219;
	uint64_t t58 = UINT64_MAX;

	t58 = (x481>>(x482==(x483-x484)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x485 = UINT64_MAX;
	int64_t x486 = INT64_MAX;
	volatile int16_t x487 = -93;
	uint16_t x488 = UINT16_MAX;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x485>>(x486==(x487-x488)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x501 = UINT32_MAX;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x501>>(x502==(x503-x504)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x505 = 47U;
	int16_t x506 = -592;
	int32_t x507 = INT32_MAX;
	uint32_t x508 = UINT32_MAX;
	static volatile int32_t t61 = -3688490;

	t61 = (x505>>(x506==(x507-x508)));

	if (t61 != 47) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x509 = UINT8_MAX;
	int8_t x510 = -10;
	int16_t x511 = INT16_MAX;
	static uint16_t x512 = 3U;
	static int32_t t62 = -34;

	t62 = (x509>>(x510==(x511-x512)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x517 = UINT64_MAX;
	uint8_t x518 = 23U;
	volatile int8_t x519 = INT8_MIN;
	volatile uint64_t x520 = UINT64_MAX;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x517>>(x518==(x519-x520)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x521 = 997U;
	int64_t x522 = INT64_MIN;
	uint16_t x523 = UINT16_MAX;
	int32_t x524 = 644641;
	int32_t t64 = 3468;

	t64 = (x521>>(x522==(x523-x524)));

	if (t64 != 997) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x529 = 15U;
	uint8_t x530 = 0U;
	static int8_t x532 = 0;
	int32_t t65 = -901;

	t65 = (x529>>(x530==(x531-x532)));

	if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x533 = 4359087643555694231LLU;
	static int16_t x534 = INT16_MIN;
	int64_t x536 = INT64_MIN;
	volatile uint64_t t66 = 107045690673591LLU;

	t66 = (x533>>(x534==(x535-x536)));

	if (t66 != 4359087643555694231LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x538 = INT32_MAX;
	static volatile int64_t x539 = -1LL;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x537>>(x538==(x539-x540)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x541 = INT16_MAX;
	int32_t x542 = INT32_MAX;
	int64_t x543 = 45068301226593LL;
	int8_t x544 = INT8_MIN;
	int32_t t68 = 69;

	t68 = (x541>>(x542==(x543-x544)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x545 = 201;
	int16_t x546 = -1;
	int32_t x548 = -10733;
	int32_t t69 = 21;

	t69 = (x545>>(x546==(x547-x548)));

	if (t69 != 201) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x549 = UINT16_MAX;
	static uint32_t x551 = 1632256508U;
	uint32_t x552 = UINT32_MAX;
	int32_t t70 = 2792620;

	t70 = (x549>>(x550==(x551-x552)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x557 = UINT8_MAX;
	int64_t x558 = -1LL;
	static int8_t x559 = 23;
	uint32_t x560 = UINT32_MAX;
	int32_t t71 = 18589150;

	t71 = (x557>>(x558==(x559-x560)));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x566 = INT32_MIN;
	uint64_t x568 = 61490513LLU;
	volatile int32_t t72 = -814;

	t72 = (x565>>(x566==(x567-x568)));

	if (t72 != 5723) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x569 = UINT64_MAX;
	uint16_t x570 = 5U;
	int16_t x571 = INT16_MIN;
	volatile int16_t x572 = -1;
	static volatile uint64_t t73 = UINT64_MAX;

	t73 = (x569>>(x570==(x571-x572)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x574 = UINT32_MAX;
	uint16_t x575 = 934U;
	int8_t x576 = -1;
	int32_t t74 = 977104928;

	t74 = (x573>>(x574==(x575-x576)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x585 = INT8_MAX;
	uint8_t x586 = 0U;
	static int16_t x587 = -1;

	t75 = (x585>>(x586==(x587-x588)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x590 = UINT8_MAX;
	int32_t x591 = -1;
	int8_t x592 = 2;
	volatile uint32_t t76 = 768858221U;

	t76 = (x589>>(x590==(x591-x592)));

	if (t76 != 3777525U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x593 = 1765261305696295787LLU;
	int32_t x594 = -8;
	int16_t x595 = 752;
	int8_t x596 = -2;
	uint64_t t77 = 4030927753102002LLU;

	t77 = (x593>>(x594==(x595-x596)));

	if (t77 != 1765261305696295787LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x605 = INT64_MAX;
	volatile uint32_t x606 = UINT32_MAX;
	uint32_t x607 = 3892400U;
	uint32_t x608 = 0U;
	static volatile int64_t t78 = INT64_MAX;

	t78 = (x605>>(x606==(x607-x608)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x617 = INT32_MAX;
	int32_t x618 = -1;
	static int16_t x619 = INT16_MAX;
	int16_t x620 = 23;

	t79 = (x617>>(x618==(x619-x620)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x621 = 666446027LLU;
	volatile uint8_t x623 = 53U;
	uint32_t x624 = UINT32_MAX;

	t80 = (x621>>(x622==(x623-x624)));

	if (t80 != 666446027LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x629 = INT16_MAX;
	static volatile int32_t x630 = 1;
	uint32_t x631 = UINT32_MAX;
	int64_t x632 = -1LL;

	t81 = (x629>>(x630==(x631-x632)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x637 = UINT16_MAX;
	int32_t x638 = 614229;
	uint64_t x639 = 50358145062530302LLU;
	int32_t x640 = INT32_MAX;

	t82 = (x637>>(x638==(x639-x640)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x650 = -4176181168896607545LL;
	uint64_t x651 = 6536244148LLU;
	static int32_t x652 = -1;
	uint32_t t83 = UINT32_MAX;

	t83 = (x649>>(x650==(x651-x652)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x654 = -7;
	uint8_t x655 = 62U;

	t84 = (x653>>(x654==(x655-x656)));

	if (t84 != 17973U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x658 = INT8_MIN;
	int8_t x659 = INT8_MIN;
	uint32_t x660 = UINT32_MAX;
	uint32_t t85 = 92U;

	t85 = (x657>>(x658==(x659-x660)));

	if (t85 != 691569U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x661 = 1141;
	static int16_t x662 = INT16_MIN;
	int64_t x663 = -1LL;
	int32_t t86 = -55;

	t86 = (x661>>(x662==(x663-x664)));

	if (t86 != 1141) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x665 = INT32_MAX;
	int8_t x666 = -1;
	int64_t x668 = INT64_MIN;

	t87 = (x665>>(x666==(x667-x668)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x669 = 19;
	static int8_t x670 = -1;
	int64_t x671 = -1LL;
	static uint32_t x672 = 7923U;
	int32_t t88 = -643294;

	t88 = (x669>>(x670==(x671-x672)));

	if (t88 != 19) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x673 = INT32_MAX;
	uint32_t x674 = 3352605U;
	int32_t x675 = -1;
	static int32_t x676 = INT32_MIN;
	volatile int32_t t89 = INT32_MAX;

	t89 = (x673>>(x674==(x675-x676)));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x677 = INT16_MAX;
	uint16_t x679 = 6408U;
	int64_t x680 = -1LL;
	int32_t t90 = -2025;

	t90 = (x677>>(x678==(x679-x680)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x681 = UINT16_MAX;
	int32_t x682 = INT32_MAX;
	static uint64_t x683 = 566114538LLU;
	volatile uint32_t x684 = 17U;
	static volatile int32_t t91 = -17660;

	t91 = (x681>>(x682==(x683-x684)));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x689 = 5U;
	int16_t x691 = 998;
	volatile int8_t x692 = INT8_MAX;
	int32_t t92 = 303516583;

	t92 = (x689>>(x690==(x691-x692)));

	if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x694 = INT16_MIN;
	int32_t x695 = -66395;
	int16_t x696 = -1;

	t93 = (x693>>(x694==(x695-x696)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x701 = INT16_MAX;
	int32_t t94 = -1;

	t94 = (x701>>(x702==(x703-x704)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x713 = UINT8_MAX;
	int64_t x716 = INT64_MIN;

	t95 = (x713>>(x714==(x715-x716)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x721 = INT8_MAX;
	int8_t x722 = INT8_MAX;
	volatile int8_t x723 = INT8_MAX;
	static int16_t x724 = -1;

	t96 = (x721>>(x722==(x723-x724)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x725 = UINT16_MAX;
	volatile int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MIN;
	volatile uint32_t x728 = 3U;
	static volatile int32_t t97 = 937;

	t97 = (x725>>(x726==(x727-x728)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x733 = 0;
	int16_t x734 = INT16_MIN;
	int8_t x735 = -4;
	uint32_t x736 = 4893580U;
	volatile int32_t t98 = -1;

	t98 = (x733>>(x734==(x735-x736)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x758 = UINT64_MAX;
	int32_t x759 = INT32_MAX;
	volatile int8_t x760 = INT8_MAX;
	static uint64_t t99 = UINT64_MAX;

	t99 = (x757>>(x758==(x759-x760)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

