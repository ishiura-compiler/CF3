#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = INT32_MIN;
volatile int32_t t2 = -1;
int64_t x24 = INT64_MAX;
volatile int32_t t3 = -277245491;
static volatile uint64_t t4 = 963LLU;
static int64_t x29 = INT64_MAX;
volatile uint64_t x31 = UINT64_MAX;
uint8_t x49 = 5U;
static uint64_t x51 = 131713094120LLU;
uint8_t x52 = 0U;
uint64_t x78 = 34063323950LLU;
static int64_t x80 = INT64_MIN;
static int64_t x91 = -1LL;
uint64_t x92 = 7LLU;
int16_t x94 = -1662;
static volatile int32_t x97 = INT32_MAX;
uint64_t t14 = 121020LLU;
int16_t x132 = -7704;
int16_t x133 = INT16_MIN;
int32_t t16 = 263040082;
int64_t x138 = INT64_MIN;
volatile int32_t t18 = 17736074;
int32_t t20 = 312548703;
volatile int32_t t21 = -457977768;
static uint32_t x182 = 14254768U;
uint8_t x183 = UINT8_MAX;
uint8_t x192 = 71U;
uint64_t x216 = UINT64_MAX;
volatile int64_t t24 = -56721LL;
static uint8_t x234 = UINT8_MAX;
static int16_t x254 = INT16_MIN;
volatile int32_t t27 = 2;
int16_t x275 = 7838;
volatile uint64_t x291 = 13LLU;
static int8_t x294 = INT8_MAX;
uint8_t x310 = 31U;
static uint64_t t35 = 90332LLU;
static uint16_t x321 = UINT16_MAX;
int64_t x324 = INT64_MIN;
static volatile uint32_t x326 = 29U;
int32_t x328 = -4002;
int32_t x341 = 46354;
uint32_t x342 = 9U;
static int8_t x348 = INT8_MIN;
static int16_t x357 = INT16_MIN;
uint8_t x379 = 23U;
volatile int64_t x381 = 1197828442419LL;
uint64_t x384 = 64238LLU;
volatile uint32_t x385 = UINT32_MAX;
static int16_t x399 = INT16_MAX;
int64_t x401 = INT64_MIN;
volatile int64_t x410 = INT64_MIN;
int32_t t50 = 22853;
int64_t x415 = 901229143LL;
volatile int32_t t51 = -13509;
int8_t x421 = INT8_MAX;
static int32_t t52 = -49;
int8_t x449 = INT8_MIN;
static int16_t x451 = -1;
int64_t x469 = 190799450913LL;
volatile int32_t t60 = -475415;
uint16_t x508 = 23U;
uint32_t x539 = UINT32_MAX;
uint8_t x550 = 25U;
int32_t x569 = 4378345;
int8_t x575 = -1;
int64_t x593 = INT64_MIN;
volatile int64_t x595 = 122836400345801361LL;
volatile int32_t t72 = -1560633;
static int8_t x624 = INT8_MIN;
uint16_t x658 = 1U;
volatile int32_t x670 = -1;
volatile uint64_t t82 = 3438102295422LLU;
uint16_t x685 = 1U;
uint32_t x712 = UINT32_MAX;
uint32_t x718 = 1188780U;
uint16_t x720 = 1906U;
int64_t t87 = -509124832041LL;
volatile int64_t x733 = -1LL;
static int32_t x735 = -1;
int32_t x746 = -2115;
static volatile int8_t x747 = -1;
int64_t x766 = -66555335551160537LL;
int64_t x767 = INT64_MIN;
volatile int32_t x768 = INT32_MIN;
int32_t t90 = 57971169;
int16_t x773 = INT16_MIN;
int32_t x782 = INT32_MIN;
static int8_t x784 = -2;
volatile int32_t t92 = -103754360;
static int64_t x785 = INT64_MIN;
int64_t t93 = -1556644LL;
static uint64_t x791 = 1764628579411229LLU;
volatile int16_t x797 = INT16_MAX;
int32_t x799 = INT32_MAX;
int8_t x808 = INT8_MIN;
uint32_t x809 = 639151136U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static volatile uint16_t x2 = 7U;
	uint64_t x3 = 14LLU;
	static volatile int32_t t0 = 2;

	t0 = (x1%(x2<(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	int16_t x10 = 174;
	uint8_t x11 = 81U;
	uint64_t x12 = 1302900670LLU;
	static volatile int32_t t1 = -198334;

	t1 = (x9%(x10<(x11|x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = 0;
	int64_t x14 = INT64_MIN;
	uint16_t x15 = UINT16_MAX;
	static uint16_t x16 = UINT16_MAX;

	t2 = (x13%(x14<(x15|x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = -1;
	static int32_t x22 = -1;
	int16_t x23 = INT16_MAX;

	t3 = (x21%(x22<(x23|x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x26 = INT32_MIN;
	volatile uint16_t x27 = 0U;
	int32_t x28 = -70922046;

	t4 = (x25%(x26<(x27|x28)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x30 = 11U;
	volatile int8_t x32 = INT8_MIN;
	volatile int64_t t5 = -37745814627816LL;

	t5 = (x29%(x30<(x31|x32)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x50 = 111U;
	int32_t t6 = -14;

	t6 = (x49%(x50<(x51|x52)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x73 = INT8_MAX;
	static int32_t x74 = 5;
	static int32_t x75 = 724147;
	uint16_t x76 = 1114U;
	static int32_t t7 = -2;

	t7 = (x73%(x74<(x75|x76)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x77 = -1LL;
	static int64_t x79 = -1750292517361LL;
	int64_t t8 = 8124384681LL;

	t8 = (x77%(x78<(x79|x80)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x85 = -502367218583LL;
	int8_t x86 = 24;
	static uint64_t x87 = 4288454450LLU;
	static int16_t x88 = INT16_MAX;
	volatile int64_t t9 = 68083365869LL;

	t9 = (x85%(x86<(x87|x88)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x89 = 757;
	int16_t x90 = INT16_MIN;
	int32_t t10 = -3576;

	t10 = (x89%(x90<(x91|x92)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int16_t x95 = 234;
	int64_t x96 = -1LL;
	static uint64_t t11 = 47712225LLU;

	t11 = (x93%(x94<(x95|x96)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t12 = -633769;

	t12 = (x97%(x98<(x99|x100)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x109 = 117U;
	volatile uint32_t x110 = 2389U;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t13 = 425875768;

	t13 = (x109%(x110<(x111|x112)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x117 = 195LLU;
	volatile int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MIN;
	int64_t x120 = -1LL;

	t14 = (x117%(x118<(x119|x120)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x129 = -2;
	uint64_t x130 = 8901550LLU;
	int8_t x131 = INT8_MAX;
	int32_t t15 = 935;

	t15 = (x129%(x130<(x131|x132)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x134 = INT16_MIN;
	volatile int16_t x135 = 881;
	static volatile int16_t x136 = INT16_MAX;

	t16 = (x133%(x134<(x135|x136)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x137 = 21U;
	int8_t x139 = INT8_MIN;
	static int32_t x140 = INT32_MAX;
	static volatile int32_t t17 = 1;

	t17 = (x137%(x138<(x139|x140)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x141 = 111U;
	volatile int32_t x142 = 318;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = -304;

	t18 = (x141%(x142<(x143|x144)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MIN;
	volatile int16_t x151 = 782;
	int16_t x152 = -1;
	volatile uint32_t t19 = 32U;

	t19 = (x149%(x150<(x151|x152)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x161 = INT16_MAX;
	uint32_t x162 = 516979917U;
	uint64_t x163 = 58LLU;
	volatile uint32_t x164 = UINT32_MAX;

	t20 = (x161%(x162<(x163|x164)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x169 = INT32_MIN;
	uint64_t x170 = 28223LLU;
	int64_t x171 = -1LL;
	volatile int32_t x172 = INT32_MIN;

	t21 = (x169%(x170<(x171|x172)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x181 = INT16_MIN;
	static int32_t x184 = -1;
	static int32_t t22 = -38204012;

	t22 = (x181%(x182<(x183|x184)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x189 = INT16_MIN;
	int8_t x190 = 36;
	static volatile uint16_t x191 = UINT16_MAX;
	volatile int32_t t23 = -112171;

	t23 = (x189%(x190<(x191|x192)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x213 = -1LL;
	int64_t x214 = 15LL;
	uint32_t x215 = UINT32_MAX;

	t24 = (x213%(x214<(x215|x216)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x233 = 37LLU;
	volatile uint32_t x235 = 614U;
	volatile uint16_t x236 = 1U;
	volatile uint64_t t25 = 25538191LLU;

	t25 = (x233%(x234<(x235|x236)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x253 = 194453672124544764LLU;
	static uint8_t x255 = 0U;
	int64_t x256 = 3816926112732385477LL;
	uint64_t t26 = 683505449099115LLU;

	t26 = (x253%(x254<(x255|x256)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x257 = -1;
	volatile int8_t x258 = INT8_MIN;
	static int32_t x259 = -1;
	uint64_t x260 = 44315281420LLU;

	t27 = (x257%(x258<(x259|x260)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x265 = 116161552U;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	static uint8_t x268 = 0U;
	uint32_t t28 = 69448853U;

	t28 = (x265%(x266<(x267|x268)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MIN;
	int64_t x276 = 2731953648920LL;
	int64_t t29 = 33713LL;

	t29 = (x273%(x274<(x275|x276)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x289 = -1;
	uint16_t x290 = 61U;
	volatile int8_t x292 = INT8_MIN;
	static int32_t t30 = -130;

	t30 = (x289%(x290<(x291|x292)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x293 = -1;
	uint32_t x295 = UINT32_MAX;
	static int8_t x296 = -1;
	volatile int32_t t31 = 481;

	t31 = (x293%(x294<(x295|x296)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x301 = INT8_MAX;
	static uint16_t x302 = UINT16_MAX;
	static uint8_t x303 = UINT8_MAX;
	uint64_t x304 = 80220902LLU;
	volatile int32_t t32 = -49;

	t32 = (x301%(x302<(x303|x304)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x309 = INT16_MAX;
	int32_t x311 = -1;
	static uint32_t x312 = UINT32_MAX;
	int32_t t33 = -25034587;

	t33 = (x309%(x310<(x311|x312)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x313 = 1712672;
	volatile uint64_t x314 = 2638LLU;
	volatile int32_t x315 = INT32_MIN;
	uint8_t x316 = 12U;
	volatile int32_t t34 = 0;

	t34 = (x313%(x314<(x315|x316)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x317 = 33577LLU;
	int32_t x318 = INT32_MIN;
	int32_t x319 = -56;
	int16_t x320 = INT16_MIN;

	t35 = (x317%(x318<(x319|x320)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x322 = INT64_MAX;
	volatile uint64_t x323 = UINT64_MAX;
	volatile int32_t t36 = -416980210;

	t36 = (x321%(x322<(x323|x324)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x325 = INT32_MIN;
	static int32_t x327 = -1;
	volatile int32_t t37 = 231;

	t37 = (x325%(x326<(x327|x328)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x343 = 60U;
	uint16_t x344 = 6U;
	int32_t t38 = -48;

	t38 = (x341%(x342<(x343|x344)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x345 = 6843354U;
	volatile int32_t x346 = -613955418;
	int8_t x347 = INT8_MAX;
	uint32_t t39 = 2350642U;

	t39 = (x345%(x346<(x347|x348)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x358 = INT8_MAX;
	int32_t x359 = 248691;
	int8_t x360 = 0;
	int32_t t40 = 933095031;

	t40 = (x357%(x358<(x359|x360)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x361 = UINT8_MAX;
	static uint8_t x362 = UINT8_MAX;
	uint16_t x363 = 5041U;
	uint8_t x364 = UINT8_MAX;
	static volatile int32_t t41 = 3061429;

	t41 = (x361%(x362<(x363|x364)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x369 = -101;
	int8_t x370 = INT8_MAX;
	uint32_t x371 = 153331U;
	volatile int16_t x372 = INT16_MIN;
	volatile int32_t t42 = 661;

	t42 = (x369%(x370<(x371|x372)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x373 = INT64_MIN;
	volatile uint16_t x374 = 442U;
	uint64_t x375 = 169484LLU;
	uint32_t x376 = 26U;
	static int64_t t43 = 24LL;

	t43 = (x373%(x374<(x375|x376)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x377 = INT8_MAX;
	int16_t x378 = 8744;
	int16_t x380 = INT16_MAX;
	volatile int32_t t44 = 435448941;

	t44 = (x377%(x378<(x379|x380)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x382 = UINT8_MAX;
	int8_t x383 = INT8_MIN;
	volatile int64_t t45 = -12LL;

	t45 = (x381%(x382<(x383|x384)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x386 = INT64_MIN;
	static int8_t x387 = INT8_MAX;
	volatile uint32_t x388 = UINT32_MAX;
	uint32_t t46 = 121196683U;

	t46 = (x385%(x386<(x387|x388)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x393 = 46U;
	static int8_t x394 = 49;
	int32_t x395 = -1;
	uint32_t x396 = 72298U;
	volatile int32_t t47 = -7;

	t47 = (x393%(x394<(x395|x396)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x397 = INT16_MAX;
	int32_t x398 = INT32_MIN;
	static uint16_t x400 = 172U;
	volatile int32_t t48 = 61366239;

	t48 = (x397%(x398<(x399|x400)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x402 = 1643U;
	uint64_t x403 = 114621419844LLU;
	int64_t x404 = -34084065LL;
	int64_t t49 = -1134691192065308201LL;

	t49 = (x401%(x402<(x403|x404)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x409 = -1;
	int16_t x411 = 354;
	int16_t x412 = INT16_MIN;

	t50 = (x409%(x410<(x411|x412)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x413 = UINT8_MAX;
	int32_t x414 = INT32_MIN;
	uint8_t x416 = UINT8_MAX;

	t51 = (x413%(x414<(x415|x416)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x422 = INT32_MIN;
	int8_t x423 = -17;
	volatile int16_t x424 = -1;

	t52 = (x421%(x422<(x423|x424)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x441 = INT16_MAX;
	int16_t x442 = INT16_MIN;
	int64_t x443 = INT64_MIN;
	static int32_t x444 = -1;
	int32_t t53 = 344544841;

	t53 = (x441%(x442<(x443|x444)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x450 = INT64_MIN;
	uint64_t x452 = 7516071209610279928LLU;
	volatile int32_t t54 = 1;

	t54 = (x449%(x450<(x451|x452)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x453 = UINT8_MAX;
	static uint32_t x454 = 9793U;
	int32_t x455 = -54753;
	int8_t x456 = INT8_MAX;
	volatile int32_t t55 = -239229452;

	t55 = (x453%(x454<(x455|x456)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x465 = 51U;
	uint64_t x466 = 135LLU;
	static volatile int64_t x467 = INT64_MIN;
	int64_t x468 = INT64_MAX;
	int32_t t56 = -254;

	t56 = (x465%(x466<(x467|x468)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x470 = -216;
	uint8_t x471 = 52U;
	int64_t x472 = -1LL;
	int64_t t57 = -10587289739242LL;

	t57 = (x469%(x470<(x471|x472)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x473 = UINT8_MAX;
	int16_t x474 = -4;
	static uint8_t x475 = 0U;
	volatile uint8_t x476 = UINT8_MAX;
	static volatile int32_t t58 = 206208;

	t58 = (x473%(x474<(x475|x476)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x481 = -1;
	int8_t x482 = INT8_MIN;
	uint64_t x483 = UINT64_MAX;
	static int32_t x484 = INT32_MIN;
	volatile int32_t t59 = -4745236;

	t59 = (x481%(x482<(x483|x484)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x489 = 1;
	static uint16_t x490 = 247U;
	uint8_t x491 = 36U;
	int32_t x492 = 7510876;

	t60 = (x489%(x490<(x491|x492)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x505 = -1;
	volatile uint32_t x506 = 123606U;
	volatile int32_t x507 = -421;
	int32_t t61 = -6;

	t61 = (x505%(x506<(x507|x508)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x509 = 66U;
	uint32_t x510 = 165U;
	int32_t x511 = INT32_MAX;
	int32_t x512 = INT32_MAX;
	static int32_t t62 = 131;

	t62 = (x509%(x510<(x511|x512)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x537 = 83U;
	int64_t x538 = INT64_MIN;
	uint16_t x540 = 10U;
	volatile int32_t t63 = -16670;

	t63 = (x537%(x538<(x539|x540)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x549 = INT8_MAX;
	uint8_t x551 = UINT8_MAX;
	int64_t x552 = 62LL;
	int32_t t64 = 2;

	t64 = (x549%(x550<(x551|x552)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x570 = -1;
	uint16_t x571 = UINT16_MAX;
	int16_t x572 = 94;
	int32_t t65 = -1987;

	t65 = (x569%(x570<(x571|x572)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x573 = INT8_MAX;
	int32_t x574 = -469654;
	uint16_t x576 = 431U;
	static volatile int32_t t66 = 1;

	t66 = (x573%(x574<(x575|x576)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x577 = 11542469LL;
	static int16_t x578 = 930;
	int32_t x579 = INT32_MIN;
	volatile uint64_t x580 = 639851628639778292LLU;
	static int64_t t67 = 5163651323LL;

	t67 = (x577%(x578<(x579|x580)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x589 = 499;
	int32_t x590 = INT32_MIN;
	int32_t x591 = INT32_MIN;
	static uint8_t x592 = 1U;
	int32_t t68 = -63;

	t68 = (x589%(x590<(x591|x592)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x594 = -63;
	int8_t x596 = 1;
	volatile int64_t t69 = -56027264683LL;

	t69 = (x593%(x594<(x595|x596)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x597 = 7837;
	int16_t x598 = 0;
	volatile uint64_t x599 = UINT64_MAX;
	int16_t x600 = -377;
	volatile int32_t t70 = 568362995;

	t70 = (x597%(x598<(x599|x600)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x605 = -1;
	static int64_t x606 = -1LL;
	uint8_t x607 = 11U;
	uint8_t x608 = 126U;
	volatile int32_t t71 = -1;

	t71 = (x605%(x606<(x607|x608)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x617 = -1;
	static volatile int16_t x618 = -16259;
	volatile uint32_t x619 = 96529130U;
	int64_t x620 = 26809282042584285LL;

	t72 = (x617%(x618<(x619|x620)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x621 = 8261U;
	int64_t x622 = -68369494639LL;
	uint8_t x623 = UINT8_MAX;
	volatile int32_t t73 = -262;

	t73 = (x621%(x622<(x623|x624)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x629 = 497263955686931621LLU;
	uint8_t x630 = 1U;
	int8_t x631 = INT8_MAX;
	uint32_t x632 = UINT32_MAX;
	volatile uint64_t t74 = 19329LLU;

	t74 = (x629%(x630<(x631|x632)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x633 = UINT32_MAX;
	uint8_t x634 = 22U;
	uint8_t x635 = UINT8_MAX;
	static uint64_t x636 = UINT64_MAX;
	volatile uint32_t t75 = 23270809U;

	t75 = (x633%(x634<(x635|x636)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x645 = INT8_MIN;
	int32_t x646 = INT32_MIN;
	int64_t x647 = 59330773155301LL;
	int16_t x648 = 6273;
	volatile int32_t t76 = -2733;

	t76 = (x645%(x646<(x647|x648)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x649 = 634;
	static uint32_t x650 = 314129447U;
	int64_t x651 = -1LL;
	uint64_t x652 = 10589305LLU;
	int32_t t77 = 20159733;

	t77 = (x649%(x650<(x651|x652)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x653 = INT16_MAX;
	uint32_t x654 = 191U;
	int32_t x655 = INT32_MIN;
	static int16_t x656 = INT16_MIN;
	volatile int32_t t78 = -233;

	t78 = (x653%(x654<(x655|x656)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x657 = 1003301031;
	uint32_t x659 = UINT32_MAX;
	int8_t x660 = 0;
	static int32_t t79 = -1015;

	t79 = (x657%(x658<(x659|x660)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x661 = -3334867;
	volatile int64_t x662 = INT64_MIN;
	uint64_t x663 = UINT64_MAX;
	static int32_t x664 = -62649;
	static int32_t t80 = -49118200;

	t80 = (x661%(x662<(x663|x664)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x669 = 2;
	volatile int32_t x671 = INT32_MAX;
	int32_t x672 = 169324064;
	volatile int32_t t81 = 1372;

	t81 = (x669%(x670<(x671|x672)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x673 = 5360218679455085101LLU;
	int64_t x674 = INT64_MIN;
	uint32_t x675 = 12869605U;
	volatile uint32_t x676 = 7U;

	t82 = (x673%(x674<(x675|x676)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x686 = -183;
	static uint16_t x687 = 5977U;
	int8_t x688 = INT8_MIN;
	volatile int32_t t83 = 3999135;

	t83 = (x685%(x686<(x687|x688)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x705 = INT32_MAX;
	int64_t x706 = -1LL;
	volatile uint32_t x707 = 1101262250U;
	int8_t x708 = INT8_MAX;
	int32_t t84 = -14;

	t84 = (x705%(x706<(x707|x708)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x709 = UINT64_MAX;
	volatile int16_t x710 = INT16_MAX;
	volatile int8_t x711 = -1;
	uint64_t t85 = 14860767857262LLU;

	t85 = (x709%(x710<(x711|x712)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x713 = 2021U;
	volatile int8_t x714 = 0;
	int64_t x715 = INT64_MIN;
	uint64_t x716 = 1417997936LLU;
	uint32_t t86 = 88U;

	t86 = (x713%(x714<(x715|x716)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x717 = INT64_MAX;
	uint32_t x719 = UINT32_MAX;

	t87 = (x717%(x718<(x719|x720)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x734 = INT16_MIN;
	uint16_t x736 = UINT16_MAX;
	volatile int64_t t88 = -614286046014924LL;

	t88 = (x733%(x734<(x735|x736)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x745 = 5;
	int32_t x748 = -1;
	volatile int32_t t89 = -72541408;

	t89 = (x745%(x746<(x747|x748)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x765 = 0U;

	t90 = (x765%(x766<(x767|x768)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x774 = INT8_MIN;
	uint32_t x775 = UINT32_MAX;
	uint32_t x776 = 96240323U;
	static int32_t t91 = -37;

	t91 = (x773%(x774<(x775|x776)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x781 = INT8_MIN;
	static int64_t x783 = -1LL;

	t92 = (x781%(x782<(x783|x784)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x786 = -1LL;
	int64_t x787 = INT64_MAX;
	int16_t x788 = INT16_MAX;

	t93 = (x785%(x786<(x787|x788)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x789 = 19;
	int16_t x790 = 0;
	uint32_t x792 = 2754U;
	static int32_t t94 = -821483410;

	t94 = (x789%(x790<(x791|x792)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x793 = 3U;
	static volatile uint32_t x794 = 7U;
	int16_t x795 = -1;
	int32_t x796 = INT32_MIN;
	int32_t t95 = -5;

	t95 = (x793%(x794<(x795|x796)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x798 = 17160442U;
	uint32_t x800 = 484U;
	volatile int32_t t96 = -460183;

	t96 = (x797%(x798<(x799|x800)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x801 = 9287678U;
	volatile int32_t x802 = -1;
	static int8_t x803 = INT8_MAX;
	int8_t x804 = 4;
	uint32_t t97 = 9U;

	t97 = (x801%(x802<(x803|x804)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x805 = 0;
	volatile int16_t x806 = INT16_MIN;
	uint32_t x807 = 723U;
	volatile int32_t t98 = 22679691;

	t98 = (x805%(x806<(x807|x808)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x810 = -1LL;
	int32_t x811 = 121266;
	volatile uint8_t x812 = 125U;
	volatile uint32_t t99 = 1451226420U;

	t99 = (x809%(x810<(x811|x812)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

