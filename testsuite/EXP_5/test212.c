#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = UINT16_MAX;
volatile int32_t t0 = 3881;
int64_t x13 = INT64_MIN;
int8_t x15 = INT8_MIN;
int16_t x44 = 781;
uint8_t x45 = UINT8_MAX;
int8_t x51 = -1;
volatile uint32_t t7 = 9060817U;
uint64_t x98 = UINT64_MAX;
int8_t x106 = INT8_MIN;
volatile int8_t x108 = 1;
int64_t t11 = -188175LL;
int16_t x124 = INT16_MAX;
volatile uint64_t t12 = 44774290116LLU;
int16_t x135 = INT16_MIN;
int64_t t16 = 145729878266117LL;
volatile uint64_t t18 = 10LLU;
int64_t x178 = -1LL;
volatile int64_t t19 = 670LL;
int32_t x184 = INT32_MIN;
static volatile uint32_t x205 = UINT32_MAX;
int32_t x207 = INT32_MIN;
int16_t x211 = 226;
int64_t t22 = -95091028259689LL;
static int8_t x232 = 25;
volatile int32_t x238 = -1;
static volatile int64_t x245 = 372220LL;
int16_t x247 = -73;
int64_t t28 = -1711624LL;
volatile int64_t t29 = -10989418LL;
int64_t t30 = -77122382717LL;
int16_t x269 = -1;
volatile int8_t x272 = 2;
uint8_t x304 = 104U;
volatile uint16_t x309 = UINT16_MAX;
int8_t x311 = INT8_MAX;
volatile uint64_t x312 = 1244LLU;
int64_t x313 = 86LL;
int32_t t36 = 3;
int64_t x333 = INT64_MIN;
int64_t x334 = -3754LL;
static int8_t x338 = INT8_MIN;
int32_t x339 = -13301;
static int32_t x341 = INT32_MIN;
static int8_t x361 = 1;
int16_t x365 = -74;
int32_t x368 = 19832;
uint64_t t41 = 24657709LLU;
uint32_t x375 = UINT32_MAX;
static volatile int32_t t44 = 104;
int8_t x386 = -1;
int64_t t46 = -17889185469LL;
static int32_t x415 = INT32_MAX;
static int64_t t47 = 1699LL;
static int8_t x418 = INT8_MAX;
int8_t x446 = -1;
static volatile int32_t x447 = 226142;
static volatile int32_t t52 = 94801;
int8_t x465 = INT8_MAX;
static volatile uint64_t t56 = 1432LLU;
int16_t x508 = INT16_MIN;
int8_t x518 = 1;
uint16_t x519 = UINT16_MAX;
int64_t t58 = -13830360886463LL;
int32_t t59 = -2383;
static int64_t x541 = 1566928560741LL;
uint8_t x551 = 1U;
uint8_t x553 = UINT8_MAX;
volatile int64_t x556 = -1LL;
uint32_t x560 = 146791U;
volatile int16_t x578 = 0;
static int16_t x607 = 140;
uint16_t x608 = 5U;
static uint64_t t66 = 12797105280621LLU;
static int16_t x620 = -1;
volatile int8_t x621 = 2;
uint16_t x622 = 124U;
static int16_t x624 = -1;
uint64_t x631 = UINT64_MAX;
volatile int16_t x635 = INT16_MIN;
static volatile int16_t x647 = -427;
int64_t t75 = -218LL;
volatile int64_t t76 = 3730415002678339577LL;
static int16_t x719 = INT16_MIN;
uint16_t x722 = 236U;
volatile int16_t x723 = INT16_MIN;
int8_t x724 = INT8_MIN;
volatile int32_t t79 = -109742610;
uint8_t x740 = 44U;
int8_t x764 = 4;
volatile int32_t t82 = 12;
int8_t x781 = -1;
int16_t x784 = -1;
volatile int32_t t84 = -1819031;
volatile int16_t x791 = INT16_MAX;
int16_t x792 = -11;
volatile int32_t t85 = 7441;
volatile int16_t x804 = -1;
static volatile int16_t x827 = INT16_MIN;
uint8_t x849 = UINT8_MAX;
volatile int64_t x850 = INT64_MIN;
int8_t x855 = -1;
uint8_t x862 = 1U;
uint8_t x865 = UINT8_MAX;
static int32_t x875 = 0;
static uint8_t x878 = UINT8_MAX;
uint32_t x879 = 5080474U;
volatile uint32_t x920 = 1U;
volatile uint64_t t99 = 4009813159733LLU;


void f0(void) {
	volatile int32_t x9 = -1;
	uint8_t x10 = 4U;
	int8_t x12 = INT8_MIN;

	t0 = (x9/((x10-x11)/x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x14 = -1LL;
	static uint32_t x16 = 20U;
	static int64_t t1 = -1LL;

	t1 = (x13/((x14-x15)/x16));

	if (t1 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x29 = 49807LLU;
	static volatile int16_t x30 = -1;
	static volatile int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	static volatile uint64_t t2 = 52715563847368LLU;

	t2 = (x29/((x30-x31)/x32));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x41 = UINT16_MAX;
	int32_t x42 = INT32_MIN;
	volatile int64_t x43 = -26288075666356LL;
	int64_t t3 = -2869020684691193LL;

	t3 = (x41/((x42-x43)/x44));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x46 = UINT32_MAX;
	int8_t x47 = 2;
	volatile int64_t x48 = 40LL;
	int64_t t4 = -381718303LL;

	t4 = (x45/((x46-x47)/x48));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x49 = INT8_MIN;
	static uint32_t x50 = 4U;
	static int8_t x52 = 1;
	uint32_t t5 = 6U;

	t5 = (x49/((x50-x51)/x52));

	if (t5 != 858993433U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x77 = 16;
	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	static uint32_t x80 = 5130887U;
	int64_t t6 = -320493112648120LL;

	t6 = (x77/((x78-x79)/x80));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x81 = -26;
	uint32_t x82 = 32534478U;
	volatile int16_t x83 = 22;
	uint8_t x84 = 60U;

	t7 = (x81/((x82-x83)/x84));

	if (t7 != 7920U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x85 = 99U;
	int8_t x86 = INT8_MIN;
	volatile uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	volatile uint32_t t8 = 4U;

	t8 = (x85/((x86-x87)/x88));

	if (t8 != 99U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x97 = INT32_MIN;
	uint64_t x99 = 6LLU;
	static int64_t x100 = -1004416059432LL;
	static volatile uint64_t t9 = 2640LLU;

	t9 = (x97/((x98-x99)/x100));

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x101 = -126LL;
	int64_t x102 = 601LL;
	int8_t x103 = INT8_MIN;
	static int8_t x104 = 63;
	int64_t t10 = -338640808LL;

	t10 = (x101/((x102-x103)/x104));

	if (t10 != -11LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x105 = INT32_MIN;
	int64_t x107 = -1LL;

	t11 = (x105/((x106-x107)/x108));

	if (t11 != 16909320LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x121 = -499;
	uint8_t x122 = UINT8_MAX;
	static uint64_t x123 = 508024233947LLU;

	t12 = (x121/((x122-x123)/x124));

	if (t12 != 32767LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x125 = 3U;
	uint64_t x126 = 152905948LLU;
	int32_t x127 = 2410;
	int8_t x128 = INT8_MAX;
	uint64_t t13 = 119832525059LLU;

	t13 = (x125/((x126-x127)/x128));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x129 = INT8_MIN;
	volatile uint64_t x130 = 1LLU;
	uint64_t x131 = 90LLU;
	uint8_t x132 = 26U;
	uint64_t t14 = 1837159426LLU;

	t14 = (x129/((x130-x131)/x132));

	if (t14 != 25LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x133 = -1LL;
	volatile int8_t x134 = INT8_MIN;
	int16_t x136 = -726;
	int64_t t15 = 2LL;

	t15 = (x133/((x134-x135)/x136));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x137 = INT64_MIN;
	int8_t x138 = -1;
	static int64_t x139 = INT64_MAX;
	volatile uint16_t x140 = UINT16_MAX;

	t16 = (x137/((x138-x139)/x140));

	if (t16 != 65535LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x169 = 46U;
	uint64_t x170 = UINT64_MAX;
	uint16_t x171 = 2110U;
	static int64_t x172 = INT64_MAX;
	volatile uint64_t t17 = 72855876829596LLU;

	t17 = (x169/((x170-x171)/x172));

	if (t17 != 46LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = INT16_MAX;

	t18 = (x173/((x174-x175)/x176));

	if (t18 != 16383LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x177 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MIN;

	t19 = (x177/((x178-x179)/x180));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x181 = 12U;
	int64_t x182 = INT64_MIN;
	volatile int64_t x183 = -132LL;
	static int64_t t20 = -310448668980LL;

	t20 = (x181/((x182-x183)/x184));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x206 = INT64_MIN;
	int32_t x208 = 2279;
	volatile int64_t t21 = -61460260019218829LL;

	t21 = (x205/((x206-x207)/x208));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x209 = -18;
	static volatile uint32_t x210 = 681412U;
	int64_t x212 = -1LL;

	t22 = (x209/((x210-x211)/x212));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x217 = 1;
	static int32_t x218 = INT32_MAX;
	uint32_t x219 = 15U;
	uint16_t x220 = 262U;
	uint32_t t23 = 8310890U;

	t23 = (x217/((x218-x219)/x220));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x229 = 1U;
	static int8_t x230 = INT8_MIN;
	uint64_t x231 = UINT64_MAX;
	volatile uint64_t t24 = 1534694262054763331LLU;

	t24 = (x229/((x230-x231)/x232));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MAX;
	uint32_t x235 = 22992U;
	static uint16_t x236 = 501U;
	uint32_t t25 = 845371156U;

	t25 = (x233/((x234-x235)/x236));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x237 = 585U;
	static int16_t x239 = INT16_MIN;
	static int64_t x240 = -92LL;
	volatile int64_t t26 = -439451LL;

	t26 = (x237/((x238-x239)/x240));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x241 = 0;
	volatile uint64_t x242 = 7904638495LLU;
	static int32_t x243 = INT32_MAX;
	int32_t x244 = 263750879;
	uint64_t t27 = 5527659LLU;

	t27 = (x241/((x242-x243)/x244));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x246 = INT32_MIN;
	volatile int16_t x248 = INT16_MIN;

	t28 = (x245/((x246-x247)/x248));

	if (t28 != 5LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x257 = INT8_MIN;
	int64_t x258 = -423662228LL;
	volatile int64_t x259 = INT64_MIN;
	int64_t x260 = -872344871621LL;

	t29 = (x257/((x258-x259)/x260));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x265 = 2705830486552650LL;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	uint8_t x268 = UINT8_MAX;

	t30 = (x265/((x266-x267)/x268));

	if (t30 != -321300148LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x270 = 49924575U;
	static uint16_t x271 = 28669U;
	uint32_t t31 = 101435799U;

	t31 = (x269/((x270-x271)/x272));

	if (t31 != 172U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x285 = INT16_MAX;
	int64_t x286 = INT64_MIN;
	volatile int32_t x287 = INT32_MIN;
	uint64_t x288 = 665373LLU;
	volatile uint64_t t32 = 0LLU;

	t32 = (x285/((x286-x287)/x288));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = -775;
	int8_t x303 = -19;
	int64_t t33 = -906906016634692462LL;

	t33 = (x301/((x302-x303)/x304));

	if (t33 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x310 = UINT64_MAX;
	static volatile uint64_t t34 = 71399124986LLU;

	t34 = (x309/((x310-x311)/x312));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x314 = 39982671078721LLU;
	uint32_t x315 = UINT32_MAX;
	uint32_t x316 = 5U;
	volatile uint64_t t35 = 956617702LLU;

	t35 = (x313/((x314-x315)/x316));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	static volatile int8_t x331 = -1;
	uint16_t x332 = 284U;

	t36 = (x329/((x330-x331)/x332));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x335 = -3581;
	uint64_t x336 = 245060LLU;
	volatile uint64_t t37 = 5905190LLU;

	t37 = (x333/((x334-x335)/x336));

	if (t37 != 122530LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x337 = -1LL;
	static uint64_t x340 = 1509LLU;
	uint64_t t38 = 235385151LLU;

	t38 = (x337/((x338-x339)/x340));

	if (t38 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x342 = INT8_MIN;
	uint8_t x343 = 30U;
	int16_t x344 = -1;
	int32_t t39 = 42;

	t39 = (x341/((x342-x343)/x344));

	if (t39 != -13591668) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x362 = 31U;
	uint32_t x363 = 4355466U;
	int64_t x364 = -13460LL;
	volatile int64_t t40 = 1LL;

	t40 = (x361/((x362-x363)/x364));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x366 = 8317173485LLU;
	static int32_t x367 = INT32_MIN;

	t41 = (x365/((x366-x367)/x368));

	if (t41 != 34959195841508LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x369 = UINT32_MAX;
	uint8_t x370 = UINT8_MAX;
	uint8_t x371 = 24U;
	int8_t x372 = INT8_MAX;
	uint32_t t42 = UINT32_MAX;

	t42 = (x369/((x370-x371)/x372));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x373 = -10633;
	static uint64_t x374 = 303322978403507LLU;
	int16_t x376 = 94;
	uint64_t t43 = 209099425981626277LLU;

	t43 = (x373/((x374-x375)/x376));

	if (t43 != 5716739LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x381 = -1;
	static volatile int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MAX;

	t44 = (x381/((x382-x383)/x384));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x385 = 914LLU;
	int64_t x387 = -92174498303653322LL;
	int8_t x388 = INT8_MIN;
	uint64_t t45 = 9345LLU;

	t45 = (x385/((x386-x387)/x388));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x397 = -1;
	int64_t x398 = -1LL;
	volatile uint32_t x399 = 47788U;
	int16_t x400 = -1;

	t46 = (x397/((x398-x399)/x400));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x413 = 116U;
	volatile int16_t x414 = INT16_MAX;
	int64_t x416 = -1LL;

	t47 = (x413/((x414-x415)/x416));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x417 = -1;
	static int64_t x419 = -1LL;
	static uint8_t x420 = 1U;
	int64_t t48 = 33144471LL;

	t48 = (x417/((x418-x419)/x420));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x429 = UINT16_MAX;
	int8_t x430 = INT8_MAX;
	int32_t x431 = INT32_MAX;
	volatile uint8_t x432 = 4U;
	int32_t t49 = -7;

	t49 = (x429/((x430-x431)/x432));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x433 = 28528U;
	int64_t x434 = -349895731LL;
	uint64_t x435 = 1429035056LLU;
	uint32_t x436 = 1U;
	static volatile uint64_t t50 = 1942881576LLU;

	t50 = (x433/((x434-x435)/x436));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x437 = INT64_MAX;
	volatile int64_t x438 = INT64_MIN;
	uint64_t x439 = UINT64_MAX;
	static uint8_t x440 = 28U;
	volatile uint64_t t51 = 262123691369LLU;

	t51 = (x437/((x438-x439)/x440));

	if (t51 != 28LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x445 = UINT8_MAX;
	volatile int8_t x448 = INT8_MIN;

	t52 = (x445/((x446-x447)/x448));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x457 = INT16_MAX;
	volatile int16_t x458 = INT16_MIN;
	uint16_t x459 = UINT16_MAX;
	uint64_t x460 = 1LLU;
	uint64_t t53 = 9568246250LLU;

	t53 = (x457/((x458-x459)/x460));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x466 = -1LL;
	static volatile int16_t x467 = INT16_MIN;
	uint8_t x468 = 93U;
	static volatile int64_t t54 = -1LL;

	t54 = (x465/((x466-x467)/x468));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x469 = INT32_MIN;
	volatile int8_t x470 = -1;
	uint8_t x471 = UINT8_MAX;
	int64_t x472 = -1LL;
	volatile int64_t t55 = 228429634817934LL;

	t55 = (x469/((x470-x471)/x472));

	if (t55 != -8388608LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MAX;
	int16_t x487 = INT16_MIN;
	uint64_t x488 = 3227LLU;

	t56 = (x485/((x486-x487)/x488));

	if (t56 != 1844674407370955148LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x505 = 120036U;
	int8_t x506 = INT8_MIN;
	int64_t x507 = -216658297794LL;
	int64_t t57 = 5183416LL;

	t57 = (x505/((x506-x507)/x508));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x517 = 1833;
	volatile int64_t x520 = -18LL;

	t58 = (x517/((x518-x519)/x520));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x537 = -7536073;
	int32_t x538 = -10716;
	int32_t x539 = 1496;
	int32_t x540 = -1;

	t59 = (x537/((x538-x539)/x540));

	if (t59 != -617) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x542 = -1LL;
	int32_t x543 = -3027559;
	int8_t x544 = INT8_MIN;
	volatile int64_t t60 = 3LL;

	t60 = (x541/((x542-x543)/x544));

	if (t60 != -66249304LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x549 = -63;
	int8_t x550 = -1;
	int64_t x552 = -1LL;
	int64_t t61 = 368703431LL;

	t61 = (x549/((x550-x551)/x552));

	if (t61 != -31LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x554 = INT8_MIN;
	uint32_t x555 = 249501U;
	int64_t t62 = 373546684335744732LL;

	t62 = (x553/((x554-x555)/x556));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x557 = 0U;
	int32_t x558 = INT32_MIN;
	uint64_t x559 = 793LLU;
	volatile uint64_t t63 = 63665541LLU;

	t63 = (x557/((x558-x559)/x560));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x577 = 5677196363LL;
	int8_t x579 = INT8_MAX;
	uint32_t x580 = 13U;
	int64_t t64 = -1863898943711571393LL;

	t64 = (x577/((x578-x579)/x580));

	if (t64 != 17LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x605 = -1;
	int32_t x606 = INT32_MAX;
	int32_t t65 = 2660;

	t65 = (x605/((x606-x607)/x608));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x609 = -1LL;
	static int64_t x610 = 81LL;
	uint64_t x611 = 41187891204LLU;
	uint32_t x612 = 551720U;

	t66 = (x609/((x610-x611)/x612));

	if (t66 != 551720LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x617 = INT64_MIN;
	uint16_t x618 = 172U;
	int16_t x619 = -2;
	int64_t t67 = 131828532023665653LL;

	t67 = (x617/((x618-x619)/x620));

	if (t67 != 53007885269280320LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x623 = -464007244LL;
	int64_t t68 = -920651292351217LL;

	t68 = (x621/((x622-x623)/x624));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x629 = UINT32_MAX;
	static uint32_t x630 = UINT32_MAX;
	uint32_t x632 = 2354U;
	uint64_t t69 = 19287043664730LLU;

	t69 = (x629/((x630-x631)/x632));

	if (t69 != 2354LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x633 = 404167161U;
	int32_t x634 = -253;
	uint8_t x636 = 54U;
	volatile uint32_t t70 = 116U;

	t70 = (x633/((x634-x635)/x636));

	if (t70 != 671374U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x645 = INT8_MIN;
	static int16_t x646 = -7;
	int8_t x648 = -1;
	int32_t t71 = -182;

	t71 = (x645/((x646-x647)/x648));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x649 = INT8_MIN;
	volatile int16_t x650 = -1;
	static volatile int16_t x651 = 14910;
	int8_t x652 = INT8_MAX;
	int32_t t72 = 414577144;

	t72 = (x649/((x650-x651)/x652));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x673 = 19342LLU;
	int64_t x674 = INT64_MIN;
	volatile int16_t x675 = -30;
	volatile int16_t x676 = INT16_MAX;
	uint64_t t73 = 50703491LLU;

	t73 = (x673/((x674-x675)/x676));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x681 = -6LL;
	int16_t x682 = -1;
	static uint16_t x683 = 963U;
	int16_t x684 = -1;
	int64_t t74 = -121089355801939194LL;

	t74 = (x681/((x682-x683)/x684));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x697 = INT8_MIN;
	int64_t x698 = -1LL;
	static int64_t x699 = -2259LL;
	static volatile uint16_t x700 = 18U;

	t75 = (x697/((x698-x699)/x700));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x701 = -1LL;
	static uint16_t x702 = UINT16_MAX;
	volatile uint8_t x703 = 8U;
	static uint32_t x704 = 8704U;

	t76 = (x701/((x702-x703)/x704));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x709 = -11;
	int16_t x710 = -137;
	uint64_t x711 = 1887632440244240LLU;
	volatile uint16_t x712 = 116U;
	static volatile uint64_t t77 = 51023LLU;

	t77 = (x709/((x710-x711)/x712));

	if (t77 != 116LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x717 = -1LL;
	int32_t x718 = INT32_MIN;
	volatile uint8_t x720 = 58U;
	static volatile int64_t t78 = 535294308989963044LL;

	t78 = (x717/((x718-x719)/x720));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x721 = INT16_MAX;

	t79 = (x721/((x722-x723)/x724));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x737 = INT64_MIN;
	uint32_t x738 = 917359328U;
	int8_t x739 = 0;
	static volatile int64_t t80 = 130184038602LL;

	t80 = (x737/((x738-x739)/x740));

	if (t80 != -442387589706LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x757 = INT16_MAX;
	int16_t x758 = INT16_MAX;
	volatile int64_t x759 = 9340737LL;
	uint32_t x760 = 112367U;
	static int64_t t81 = 4030485533242LL;

	t81 = (x757/((x758-x759)/x760));

	if (t81 != -399LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x761 = 50U;
	volatile int16_t x762 = 1;
	int8_t x763 = 6;

	t82 = (x761/((x762-x763)/x764));

	if (t82 != -50) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x769 = -5827634;
	int32_t x770 = 29402475;
	int8_t x771 = INT8_MIN;
	static uint8_t x772 = UINT8_MAX;
	volatile int32_t t83 = 944464747;

	t83 = (x769/((x770-x771)/x772));

	if (t83 != -50) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x782 = 4354;
	int8_t x783 = INT8_MIN;

	t84 = (x781/((x782-x783)/x784));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x789 = 6946;
	static volatile int16_t x790 = -1;

	t85 = (x789/((x790-x791)/x792));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x801 = UINT16_MAX;
	int32_t x802 = -33572;
	volatile int32_t x803 = INT32_MIN;
	volatile int32_t t86 = 78667301;

	t86 = (x801/((x802-x803)/x804));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x821 = UINT64_MAX;
	int16_t x822 = INT16_MIN;
	int32_t x823 = INT32_MIN;
	uint16_t x824 = 13735U;
	static volatile uint64_t t87 = 21LLU;

	t87 = (x821/((x822-x823)/x824));

	if (t87 != 117985161778273LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x825 = 2U;
	static int16_t x826 = -1;
	int8_t x828 = -1;
	static volatile int32_t t88 = -3392;

	t88 = (x825/((x826-x827)/x828));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x845 = -1;
	uint8_t x846 = UINT8_MAX;
	static int64_t x847 = -510207380LL;
	int16_t x848 = -1;
	static volatile int64_t t89 = -1281553902335157531LL;

	t89 = (x845/((x846-x847)/x848));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x851 = -1;
	int32_t x852 = 54972711;
	int64_t t90 = 8430724001015403LL;

	t90 = (x849/((x850-x851)/x852));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x853 = INT8_MIN;
	volatile int16_t x854 = INT16_MAX;
	uint32_t x856 = 19549U;
	uint32_t t91 = 0U;

	t91 = (x853/((x854-x855)/x856));

	if (t91 != 4294967168U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x861 = UINT64_MAX;
	uint64_t x863 = 165LLU;
	static uint8_t x864 = 102U;
	volatile uint64_t t92 = 410197177923391LLU;

	t92 = (x861/((x862-x863)/x864));

	if (t92 != 102LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x866 = 0U;
	int32_t x867 = -3862021;
	int16_t x868 = INT16_MIN;
	int32_t t93 = 541159185;

	t93 = (x865/((x866-x867)/x868));

	if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x873 = -544060799089771141LL;
	int32_t x874 = INT32_MAX;
	uint16_t x876 = 3416U;
	volatile int64_t t94 = -57322018LL;

	t94 = (x873/((x874-x875)/x876));

	if (t94 != -865437584251LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x877 = 7816U;
	uint8_t x880 = 5U;
	static volatile uint32_t t95 = 8629147U;

	t95 = (x877/((x878-x879)/x880));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x893 = 2U;
	int32_t x894 = -1;
	static volatile uint64_t x895 = 208LLU;
	uint16_t x896 = 1U;
	static uint64_t t96 = 17624292LLU;

	t96 = (x893/((x894-x895)/x896));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x897 = 0;
	int8_t x898 = INT8_MIN;
	volatile int32_t x899 = 10175;
	uint64_t x900 = 1405LLU;
	uint64_t t97 = 34LLU;

	t97 = (x897/((x898-x899)/x900));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x901 = UINT8_MAX;
	static uint64_t x902 = 6926868LLU;
	int16_t x903 = -1;
	int8_t x904 = 8;
	static volatile uint64_t t98 = 934044106119283LLU;

	t98 = (x901/((x902-x903)/x904));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x917 = UINT64_MAX;
	volatile uint8_t x918 = UINT8_MAX;
	int8_t x919 = INT8_MIN;

	t99 = (x917/((x918-x919)/x920));

	if (t99 != 48163822646761231LLU) { NG(); } else { ; }
	
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

