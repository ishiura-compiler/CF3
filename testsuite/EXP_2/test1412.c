#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = -1;
int32_t t2 = 77500191;
volatile int8_t x45 = -1;
int8_t x57 = -22;
int32_t x59 = INT32_MIN;
volatile int32_t x65 = 121468;
int8_t x67 = -1;
int32_t t10 = -57;
volatile int32_t t12 = -686894;
static int64_t x93 = -1LL;
static uint64_t x94 = 13737505646LLU;
int32_t t13 = 4538905;
int8_t x106 = -31;
volatile int64_t x118 = -1284177869LL;
int32_t x124 = INT32_MIN;
int64_t x129 = -470899720219763LL;
volatile int32_t x140 = INT32_MIN;
int32_t x148 = -1;
static int32_t x178 = INT32_MIN;
volatile uint16_t x179 = UINT16_MAX;
uint64_t x203 = UINT64_MAX;
volatile int32_t x204 = -143688;
static uint16_t x213 = UINT16_MAX;
uint8_t x214 = 10U;
volatile uint16_t x227 = 75U;
static uint32_t x231 = 1604167U;
int16_t x232 = 1;
int32_t x247 = 1451;
volatile int32_t x248 = INT32_MIN;
int32_t x284 = INT32_MIN;
volatile int32_t t34 = -360;
static volatile int32_t x289 = INT32_MIN;
int8_t x290 = -56;
uint64_t x293 = 4LLU;
int32_t t36 = 3985984;
int32_t x321 = INT32_MAX;
static int8_t x322 = INT8_MIN;
int32_t x373 = 15231684;
volatile int32_t t45 = -125;
int64_t x383 = 38578656149386LL;
int32_t t51 = -118801;
volatile uint32_t x409 = 98587U;
volatile int32_t t54 = -1342757;
static volatile int64_t x432 = 1LL;
volatile int32_t t56 = -115276;
static int8_t x442 = INT8_MIN;
int32_t x457 = -4;
volatile int64_t x460 = 1LL;
static volatile uint8_t x467 = UINT8_MAX;
uint16_t x489 = 1715U;
int32_t x490 = INT32_MIN;
static int32_t t62 = -14137;
int8_t x513 = -3;
volatile int64_t x515 = -1LL;
volatile int32_t t63 = 5591662;
uint64_t x521 = 179394154271468LLU;
uint16_t x523 = 2350U;
int32_t t65 = -337;
static uint16_t x533 = 24076U;
uint8_t x541 = 5U;
volatile int32_t x542 = INT32_MIN;
int64_t x545 = INT64_MAX;
volatile int32_t t70 = -9015526;
int16_t x565 = INT16_MIN;
static uint16_t x567 = UINT16_MAX;
int32_t t71 = -3482703;
volatile int32_t t72 = 213860532;
static uint64_t x574 = 693LLU;
static int32_t t74 = 0;
uint16_t x599 = UINT16_MAX;
int32_t x613 = INT32_MAX;
int64_t x624 = INT64_MIN;
volatile int32_t t81 = -956099;
static int64_t x654 = INT64_MIN;
uint8_t x655 = 119U;
static uint64_t x658 = 13511LLU;
uint64_t x660 = 13864726LLU;
int16_t x662 = INT16_MIN;
uint8_t x663 = 0U;
uint32_t x702 = 162161940U;
static int8_t x716 = -1;
volatile int8_t x719 = 0;
int64_t x752 = INT64_MIN;
static volatile int32_t t93 = -23974435;
int8_t x764 = -1;
int32_t x775 = INT32_MAX;
volatile int64_t x791 = INT64_MAX;
volatile int32_t x796 = INT32_MIN;


void f0(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	int32_t x7 = -1;
	static uint32_t x8 = 45828753U;
	static volatile int32_t t0 = 11001656;

	t0 = ((x5%(x6<x7))==x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x13 = INT64_MAX;
	volatile int8_t x14 = INT8_MIN;
	int16_t x15 = -2;
	volatile int32_t t1 = 15850675;

	t1 = ((x13%(x14<x15))==x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MAX;
	static int16_t x18 = INT16_MIN;
	int8_t x19 = -54;
	int64_t x20 = -1LL;

	t2 = ((x17%(x18<x19))==x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = 2;
	volatile int64_t x22 = INT64_MIN;
	uint32_t x23 = 413000U;
	static int32_t x24 = -1;
	int32_t t3 = 1022;

	t3 = ((x21%(x22<x23))==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x29 = 28;
	int32_t x30 = -1;
	uint16_t x31 = 3U;
	uint8_t x32 = 1U;
	int32_t t4 = -1;

	t4 = ((x29%(x30<x31))==x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x46 = 17;
	static int16_t x47 = INT16_MAX;
	uint32_t x48 = 5U;
	static volatile int32_t t5 = 1;

	t5 = ((x45%(x46<x47))==x48);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x49 = 3108008824363LL;
	int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MIN;
	volatile uint16_t x52 = 3U;
	int32_t t6 = 6219135;

	t6 = ((x49%(x50<x51))==x52);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x58 = 1079U;
	int16_t x60 = INT16_MIN;
	int32_t t7 = -62614558;

	t7 = ((x57%(x58<x59))==x60);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x66 = 264410008060034166LLU;
	static int16_t x68 = INT16_MAX;
	volatile int32_t t8 = 135083726;

	t8 = ((x65%(x66<x67))==x68);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x69 = -1;
	static int8_t x70 = -4;
	static uint16_t x71 = 75U;
	static int64_t x72 = INT64_MAX;
	int32_t t9 = -45073;

	t9 = ((x69%(x70<x71))==x72);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = -3;
	volatile int8_t x75 = 4;
	uint16_t x76 = 3452U;

	t10 = ((x73%(x74<x75))==x76);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x81 = -1;
	static volatile uint64_t x82 = 15549762516498LLU;
	int8_t x83 = -1;
	int16_t x84 = 402;
	int32_t t11 = 0;

	t11 = ((x81%(x82<x83))==x84);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x85 = 19354372;
	uint8_t x86 = 0U;
	uint8_t x87 = 2U;
	int64_t x88 = 13931387596LL;

	t12 = ((x85%(x86<x87))==x88);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x95 = -15;
	static int32_t x96 = -1;

	t13 = ((x93%(x94<x95))==x96);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x105 = -1;
	uint16_t x107 = 13U;
	int8_t x108 = INT8_MIN;
	volatile int32_t t14 = -183;

	t14 = ((x105%(x106<x107))==x108);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x109 = -366;
	int16_t x110 = -872;
	static volatile int8_t x111 = -1;
	volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t15 = -29;

	t15 = ((x109%(x110<x111))==x112);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x117 = INT64_MIN;
	uint16_t x119 = 3866U;
	int32_t x120 = 0;
	int32_t t16 = -2114003;

	t16 = ((x117%(x118<x119))==x120);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x121 = -1LL;
	int64_t x122 = -219LL;
	int8_t x123 = 6;
	int32_t t17 = -78126;

	t17 = ((x121%(x122<x123))==x124);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x125 = UINT64_MAX;
	int16_t x126 = 247;
	volatile int64_t x127 = INT64_MAX;
	int16_t x128 = -1;
	volatile int32_t t18 = 451;

	t18 = ((x125%(x126<x127))==x128);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x130 = -442;
	uint32_t x131 = UINT32_MAX;
	volatile int8_t x132 = INT8_MIN;
	int32_t t19 = 0;

	t19 = ((x129%(x130<x131))==x132);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = -1;
	static int8_t x138 = 1;
	volatile int8_t x139 = INT8_MAX;
	static volatile int32_t t20 = -6;

	t20 = ((x137%(x138<x139))==x140);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x145 = INT16_MIN;
	static uint16_t x146 = UINT16_MAX;
	uint64_t x147 = 1026392296012119105LLU;
	volatile int32_t t21 = -362;

	t21 = ((x145%(x146<x147))==x148);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x161 = 5863U;
	static int64_t x162 = 2LL;
	uint8_t x163 = 30U;
	int8_t x164 = INT8_MAX;
	int32_t t22 = 1;

	t22 = ((x161%(x162<x163))==x164);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x177 = INT16_MAX;
	static volatile uint8_t x180 = 37U;
	volatile int32_t t23 = 8744995;

	t23 = ((x177%(x178<x179))==x180);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x185 = INT8_MIN;
	volatile int16_t x186 = INT16_MIN;
	uint16_t x187 = 5235U;
	volatile int16_t x188 = INT16_MIN;
	int32_t t24 = -5456;

	t24 = ((x185%(x186<x187))==x188);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x189 = 1956U;
	volatile uint32_t x190 = UINT32_MAX;
	int64_t x191 = 770817804702017LL;
	int32_t x192 = -8411;
	volatile int32_t t25 = -60567058;

	t25 = ((x189%(x190<x191))==x192);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x197 = 29900LLU;
	int16_t x198 = 0;
	static int64_t x199 = INT64_MAX;
	int16_t x200 = INT16_MIN;
	int32_t t26 = 41;

	t26 = ((x197%(x198<x199))==x200);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x201 = 587U;
	int16_t x202 = INT16_MAX;
	volatile int32_t t27 = -398;

	t27 = ((x201%(x202<x203))==x204);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x215 = 11569927;
	int16_t x216 = INT16_MIN;
	volatile int32_t t28 = 4061930;

	t28 = ((x213%(x214<x215))==x216);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x217 = 2U;
	int64_t x218 = INT64_MIN;
	static int32_t x219 = -1;
	int16_t x220 = INT16_MIN;
	int32_t t29 = -88;

	t29 = ((x217%(x218<x219))==x220);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x225 = INT16_MIN;
	int8_t x226 = 12;
	static uint32_t x228 = 21U;
	int32_t t30 = -575501;

	t30 = ((x225%(x226<x227))==x228);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x229 = INT8_MIN;
	uint16_t x230 = UINT16_MAX;
	int32_t t31 = 603249410;

	t31 = ((x229%(x230<x231))==x232);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x245 = 45U;
	uint16_t x246 = 62U;
	int32_t t32 = -227595;

	t32 = ((x245%(x246<x247))==x248);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x273 = INT32_MAX;
	static uint8_t x274 = 0U;
	uint64_t x275 = 135122980073723017LLU;
	int64_t x276 = INT64_MAX;
	int32_t t33 = -79861;

	t33 = ((x273%(x274<x275))==x276);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x281 = -1;
	volatile uint8_t x282 = 41U;
	uint64_t x283 = UINT64_MAX;

	t34 = ((x281%(x282<x283))==x284);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x291 = INT8_MAX;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t35 = 13527;

	t35 = ((x289%(x290<x291))==x292);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x294 = 1;
	int32_t x295 = INT32_MAX;
	uint16_t x296 = 687U;

	t36 = ((x293%(x294<x295))==x296);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x297 = -3128688904256451LL;
	uint16_t x298 = UINT16_MAX;
	uint64_t x299 = UINT64_MAX;
	static uint16_t x300 = 1U;
	volatile int32_t t37 = 13940528;

	t37 = ((x297%(x298<x299))==x300);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x313 = INT16_MIN;
	uint32_t x314 = 27587073U;
	static int8_t x315 = -1;
	int64_t x316 = INT64_MIN;
	int32_t t38 = -178176975;

	t38 = ((x313%(x314<x315))==x316);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x323 = 1351837;
	static int8_t x324 = 7;
	static int32_t t39 = -520881;

	t39 = ((x321%(x322<x323))==x324);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	volatile int64_t x328 = -528997790LL;
	volatile int32_t t40 = 20460979;

	t40 = ((x325%(x326<x327))==x328);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = -24721551880497LL;
	int64_t x335 = 76382LL;
	int8_t x336 = INT8_MAX;
	int32_t t41 = 0;

	t41 = ((x333%(x334<x335))==x336);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x345 = INT64_MAX;
	int64_t x346 = INT64_MIN;
	static uint16_t x347 = 293U;
	static int32_t x348 = INT32_MAX;
	static int32_t t42 = 5;

	t42 = ((x345%(x346<x347))==x348);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x349 = INT64_MAX;
	uint8_t x350 = 49U;
	uint16_t x351 = 4324U;
	int32_t x352 = INT32_MIN;
	volatile int32_t t43 = -1983;

	t43 = ((x349%(x350<x351))==x352);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x365 = 9;
	uint8_t x366 = 0U;
	static uint8_t x367 = UINT8_MAX;
	volatile uint16_t x368 = 24U;
	volatile int32_t t44 = 5615;

	t44 = ((x365%(x366<x367))==x368);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x374 = -1LL;
	volatile int64_t x375 = 3863803LL;
	static uint16_t x376 = 3U;

	t45 = ((x373%(x374<x375))==x376);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	int16_t x379 = 5451;
	static int8_t x380 = 5;
	volatile int32_t t46 = 679;

	t46 = ((x377%(x378<x379))==x380);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x381 = INT16_MAX;
	uint16_t x382 = UINT16_MAX;
	uint8_t x384 = 75U;
	int32_t t47 = 42480933;

	t47 = ((x381%(x382<x383))==x384);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x385 = -1;
	int32_t x386 = INT32_MIN;
	static int16_t x387 = INT16_MAX;
	uint32_t x388 = UINT32_MAX;
	int32_t t48 = -228394930;

	t48 = ((x385%(x386<x387))==x388);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x389 = 13689;
	static int8_t x390 = 1;
	int8_t x391 = INT8_MAX;
	int8_t x392 = 2;
	int32_t t49 = 2;

	t49 = ((x389%(x390<x391))==x392);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x393 = INT16_MIN;
	uint16_t x394 = 7U;
	int8_t x395 = INT8_MAX;
	uint8_t x396 = UINT8_MAX;
	static int32_t t50 = 0;

	t50 = ((x393%(x394<x395))==x396);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x397 = -1;
	int32_t x398 = INT32_MIN;
	int8_t x399 = 0;
	uint32_t x400 = 133812482U;

	t51 = ((x397%(x398<x399))==x400);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	int8_t x407 = -1;
	uint16_t x408 = UINT16_MAX;
	int32_t t52 = 7;

	t52 = ((x405%(x406<x407))==x408);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x410 = INT32_MIN;
	int8_t x411 = -6;
	int64_t x412 = INT64_MIN;
	int32_t t53 = -92679;

	t53 = ((x409%(x410<x411))==x412);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x417 = INT16_MIN;
	volatile int64_t x418 = -12476LL;
	int64_t x419 = 850151756948LL;
	static volatile int16_t x420 = INT16_MIN;

	t54 = ((x417%(x418<x419))==x420);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x425 = 153140646717309503LLU;
	int8_t x426 = -1;
	uint16_t x427 = UINT16_MAX;
	static uint64_t x428 = 211357606157997LLU;
	int32_t t55 = 514;

	t55 = ((x425%(x426<x427))==x428);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x429 = 6065990619556LLU;
	int16_t x430 = INT16_MIN;
	static int16_t x431 = 2;

	t56 = ((x429%(x430<x431))==x432);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x441 = INT32_MIN;
	int32_t x443 = 62286696;
	int64_t x444 = 39970631LL;
	volatile int32_t t57 = 838;

	t57 = ((x441%(x442<x443))==x444);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x458 = -1LL;
	int8_t x459 = 7;
	volatile int32_t t58 = 18817897;

	t58 = ((x457%(x458<x459))==x460);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x465 = INT16_MIN;
	volatile int32_t x466 = -1;
	static volatile int32_t x468 = 3876;
	int32_t t59 = 16759329;

	t59 = ((x465%(x466<x467))==x468);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x491 = INT64_MAX;
	int32_t x492 = INT32_MIN;
	int32_t t60 = -55;

	t60 = ((x489%(x490<x491))==x492);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x497 = 6U;
	int64_t x498 = INT64_MIN;
	int64_t x499 = 3895LL;
	static int32_t x500 = INT32_MIN;
	static int32_t t61 = -53599727;

	t61 = ((x497%(x498<x499))==x500);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x505 = 6U;
	int32_t x506 = INT32_MAX;
	static volatile uint32_t x507 = UINT32_MAX;
	volatile int8_t x508 = INT8_MAX;

	t62 = ((x505%(x506<x507))==x508);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x514 = -436;
	volatile uint32_t x516 = UINT32_MAX;

	t63 = ((x513%(x514<x515))==x516);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x522 = -1LL;
	int32_t x524 = INT32_MAX;
	volatile int32_t t64 = -1;

	t64 = ((x521%(x522<x523))==x524);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x525 = INT64_MIN;
	int8_t x526 = INT8_MIN;
	volatile uint8_t x527 = UINT8_MAX;
	volatile int64_t x528 = 31240LL;

	t65 = ((x525%(x526<x527))==x528);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x529 = INT8_MIN;
	int64_t x530 = -188538872748950LL;
	int16_t x531 = -1;
	static volatile int16_t x532 = INT16_MAX;
	volatile int32_t t66 = -82695164;

	t66 = ((x529%(x530<x531))==x532);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x534 = -1;
	volatile uint16_t x535 = UINT16_MAX;
	uint32_t x536 = 126U;
	volatile int32_t t67 = -99599;

	t67 = ((x533%(x534<x535))==x536);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x543 = -235612789;
	int32_t x544 = -1;
	int32_t t68 = 13302363;

	t68 = ((x541%(x542<x543))==x544);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x546 = INT8_MAX;
	uint64_t x547 = UINT64_MAX;
	volatile int16_t x548 = -71;
	int32_t t69 = 9;

	t69 = ((x545%(x546<x547))==x548);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x561 = UINT16_MAX;
	int64_t x562 = INT64_MIN;
	static int8_t x563 = -37;
	int64_t x564 = 22LL;

	t70 = ((x561%(x562<x563))==x564);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x566 = INT16_MIN;
	volatile uint16_t x568 = UINT16_MAX;

	t71 = ((x565%(x566<x567))==x568);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x569 = -50;
	int16_t x570 = INT16_MIN;
	static int8_t x571 = INT8_MIN;
	uint16_t x572 = 53U;

	t72 = ((x569%(x570<x571))==x572);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x573 = -1;
	int64_t x575 = INT64_MIN;
	int32_t x576 = INT32_MAX;
	volatile int32_t t73 = -1513636;

	t73 = ((x573%(x574<x575))==x576);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x577 = 10U;
	int32_t x578 = 0;
	uint8_t x579 = UINT8_MAX;
	static uint8_t x580 = 113U;

	t74 = ((x577%(x578<x579))==x580);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x581 = 217LLU;
	int64_t x582 = INT64_MIN;
	int8_t x583 = INT8_MIN;
	int16_t x584 = 73;
	int32_t t75 = -79623;

	t75 = ((x581%(x582<x583))==x584);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x585 = UINT64_MAX;
	int16_t x586 = INT16_MIN;
	volatile uint8_t x587 = UINT8_MAX;
	volatile int32_t x588 = INT32_MAX;
	int32_t t76 = -498;

	t76 = ((x585%(x586<x587))==x588);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x597 = -1;
	static int8_t x598 = INT8_MIN;
	int64_t x600 = -1LL;
	static volatile int32_t t77 = 41131776;

	t77 = ((x597%(x598<x599))==x600);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x614 = INT32_MIN;
	int64_t x615 = 12529320529LL;
	static int16_t x616 = -109;
	volatile int32_t t78 = 276884;

	t78 = ((x613%(x614<x615))==x616);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x617 = 3377014497LL;
	volatile uint8_t x618 = 40U;
	static uint32_t x619 = UINT32_MAX;
	uint16_t x620 = 430U;
	int32_t t79 = 265450319;

	t79 = ((x617%(x618<x619))==x620);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x621 = 1U;
	volatile int16_t x622 = INT16_MIN;
	static int8_t x623 = -1;
	static volatile int32_t t80 = -425795;

	t80 = ((x621%(x622<x623))==x624);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x641 = INT8_MAX;
	volatile uint8_t x642 = UINT8_MAX;
	int16_t x643 = INT16_MAX;
	static int32_t x644 = INT32_MAX;

	t81 = ((x641%(x642<x643))==x644);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x653 = -1;
	int32_t x656 = -1;
	static int32_t t82 = -6441;

	t82 = ((x653%(x654<x655))==x656);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x657 = -1;
	int16_t x659 = INT16_MIN;
	volatile int32_t t83 = -163049;

	t83 = ((x657%(x658<x659))==x660);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x661 = -51LL;
	uint8_t x664 = 7U;
	static int32_t t84 = 472513;

	t84 = ((x661%(x662<x663))==x664);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x665 = UINT32_MAX;
	int32_t x666 = INT32_MIN;
	int32_t x667 = -1;
	static uint16_t x668 = 45U;
	volatile int32_t t85 = 6590060;

	t85 = ((x665%(x666<x667))==x668);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x681 = INT8_MIN;
	uint32_t x682 = 0U;
	static volatile uint64_t x683 = 1838515646364833590LLU;
	int16_t x684 = -1;
	int32_t t86 = -12545;

	t86 = ((x681%(x682<x683))==x684);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x701 = 3610U;
	int32_t x703 = INT32_MAX;
	int16_t x704 = -719;
	volatile int32_t t87 = 977252632;

	t87 = ((x701%(x702<x703))==x704);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x709 = 1;
	int8_t x710 = 2;
	uint32_t x711 = 34197U;
	int16_t x712 = -1;
	static int32_t t88 = 6559;

	t88 = ((x709%(x710<x711))==x712);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x713 = INT64_MIN;
	volatile int64_t x714 = -1LL;
	volatile int16_t x715 = INT16_MAX;
	int32_t t89 = 684572165;

	t89 = ((x713%(x714<x715))==x716);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x717 = INT8_MIN;
	int8_t x718 = INT8_MIN;
	uint8_t x720 = 0U;
	int32_t t90 = 405385;

	t90 = ((x717%(x718<x719))==x720);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x729 = 54;
	static int32_t x730 = -1;
	static volatile int8_t x731 = 1;
	uint64_t x732 = 4643475LLU;
	int32_t t91 = -61451;

	t91 = ((x729%(x730<x731))==x732);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x749 = 306486055907358LLU;
	int16_t x750 = INT16_MIN;
	static uint8_t x751 = 2U;
	volatile int32_t t92 = -94;

	t92 = ((x749%(x750<x751))==x752);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x753 = 581U;
	int32_t x754 = -3;
	int8_t x755 = INT8_MAX;
	volatile uint64_t x756 = 165184343936395777LLU;

	t93 = ((x753%(x754<x755))==x756);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x761 = 7;
	volatile uint16_t x762 = 2U;
	static int32_t x763 = INT32_MAX;
	int32_t t94 = 0;

	t94 = ((x761%(x762<x763))==x764);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x769 = -11;
	int8_t x770 = 5;
	int32_t x771 = INT32_MAX;
	static volatile uint32_t x772 = 245132U;
	int32_t t95 = -1;

	t95 = ((x769%(x770<x771))==x772);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x773 = 149U;
	static int64_t x774 = 1LL;
	int8_t x776 = INT8_MIN;
	int32_t t96 = 52716;

	t96 = ((x773%(x774<x775))==x776);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x777 = -1;
	int32_t x778 = -322850;
	uint64_t x779 = UINT64_MAX;
	int8_t x780 = -1;
	static int32_t t97 = -5092911;

	t97 = ((x777%(x778<x779))==x780);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x789 = 0U;
	int8_t x790 = INT8_MIN;
	volatile int16_t x792 = INT16_MAX;
	volatile int32_t t98 = 476748456;

	t98 = ((x789%(x790<x791))==x792);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x793 = UINT8_MAX;
	uint32_t x794 = UINT32_MAX;
	uint64_t x795 = 29784480508LLU;
	volatile int32_t t99 = 64372306;

	t99 = ((x793%(x794<x795))==x796);

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

