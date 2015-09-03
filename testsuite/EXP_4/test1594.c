#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 62;
uint16_t x9 = 1127U;
static uint8_t x18 = UINT8_MAX;
volatile int32_t x20 = 218;
static volatile int32_t t4 = -1694;
static int32_t x33 = INT32_MIN;
static volatile uint64_t x34 = 3912256LLU;
uint64_t x48 = UINT64_MAX;
int32_t x55 = -83551;
uint16_t x62 = 95U;
static volatile int32_t x63 = 335757;
int64_t x64 = 2433LL;
uint32_t x68 = UINT32_MAX;
int64_t x69 = -1LL;
static volatile int16_t x70 = INT16_MAX;
volatile int32_t t12 = -780;
int16_t x81 = 171;
static int32_t x96 = 1061434;
static uint64_t x104 = 2LLU;
int16_t x106 = INT16_MAX;
int32_t t19 = 49420;
volatile int16_t x147 = INT16_MIN;
int64_t x148 = INT64_MAX;
int32_t x153 = INT32_MAX;
uint8_t x163 = 15U;
int64_t x164 = -1LL;
volatile int32_t t25 = 13831151;
int8_t x184 = INT8_MAX;
volatile uint16_t x192 = 2823U;
int32_t t29 = 97638441;
uint64_t x200 = 23LLU;
uint32_t x202 = UINT32_MAX;
uint64_t x254 = 550619LLU;
static int64_t x256 = 221213070003LL;
int16_t x259 = 3;
int32_t t34 = -15;
volatile int16_t x261 = INT16_MIN;
static int32_t t35 = 43560876;
volatile int32_t t36 = -219169;
int32_t t38 = -894756;
volatile int16_t x287 = INT16_MIN;
int64_t x301 = INT64_MIN;
int64_t x303 = -1LL;
uint32_t x305 = 97820U;
uint32_t x309 = UINT32_MAX;
int32_t x311 = -1;
uint8_t x340 = 101U;
int64_t x349 = INT64_MAX;
volatile int16_t x351 = INT16_MIN;
uint64_t x353 = UINT64_MAX;
static volatile int32_t t47 = -3;
uint16_t x357 = 0U;
volatile int32_t t51 = 35177;
int32_t t52 = 147511237;
uint16_t x410 = 128U;
volatile uint8_t x412 = 0U;
volatile int32_t x416 = INT32_MIN;
volatile int64_t x417 = INT64_MIN;
static uint64_t x418 = UINT64_MAX;
volatile uint16_t x423 = UINT16_MAX;
int32_t x425 = INT32_MAX;
uint64_t x426 = UINT64_MAX;
volatile int32_t t58 = 924570;
int8_t x451 = INT8_MIN;
uint16_t x452 = 102U;
static int64_t x461 = 145933898LL;
int16_t x463 = INT16_MIN;
volatile int32_t t63 = -24;
static int32_t t64 = 83513;
volatile uint8_t x477 = UINT8_MAX;
uint16_t x499 = 36U;
static int32_t t67 = 0;
static uint32_t x502 = 7067455U;
static int32_t x505 = -1;
uint8_t x514 = 0U;
int8_t x517 = INT8_MAX;
static volatile int64_t x520 = INT64_MIN;
static volatile int32_t t71 = -2689;
int64_t x524 = INT64_MAX;
volatile uint16_t x542 = 12302U;
uint16_t x544 = UINT16_MAX;
static int32_t t75 = 224;
static uint16_t x547 = 2U;
static int32_t x551 = 3034;
int8_t x552 = 0;
int8_t x560 = INT8_MIN;
uint16_t x561 = 283U;
int16_t x564 = 0;
static int64_t x566 = 0LL;
uint8_t x568 = UINT8_MAX;
uint8_t x569 = UINT8_MAX;
uint16_t x570 = UINT16_MAX;
int32_t t82 = 3;
int32_t x581 = INT32_MAX;
static uint16_t x585 = 46U;
static uint16_t x593 = UINT16_MAX;
volatile uint16_t x594 = 2U;
int32_t t87 = 1356743;
int32_t x602 = 164980;
uint16_t x628 = UINT16_MAX;
int16_t x629 = INT16_MIN;
uint16_t x631 = 1U;
volatile int8_t x635 = -1;
volatile int32_t t93 = 1145;
int16_t x647 = INT16_MIN;
uint32_t x648 = 1032966U;
int16_t x649 = -14;
volatile uint8_t x650 = UINT8_MAX;
uint32_t x654 = UINT32_MAX;


void f0(void) {
	int16_t x1 = -1;
	uint32_t x2 = 6667642U;
	int16_t x3 = -1;
	uint32_t x4 = 266480589U;

	t0 = (x1==(x2<<(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x10 = 24307LL;
	volatile int8_t x11 = INT8_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = -83234;

	t1 = (x9==(x10<<(x11<=x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 441857430846373LLU;
	uint8_t x19 = 82U;
	volatile int32_t t2 = -2797;

	t2 = (x17==(x18<<(x19<=x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x21 = INT64_MIN;
	uint64_t x22 = UINT64_MAX;
	int8_t x23 = INT8_MIN;
	volatile int8_t x24 = -1;
	volatile int32_t t3 = -6232492;

	t3 = (x21==(x22<<(x23<=x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	volatile int16_t x26 = INT16_MAX;
	volatile int16_t x27 = 1437;
	volatile int8_t x28 = -1;

	t4 = (x25==(x26<<(x27<=x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MAX;
	volatile int32_t t5 = -5;

	t5 = (x33==(x34<<(x35<=x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x45 = 1605U;
	static uint16_t x46 = 2U;
	uint32_t x47 = UINT32_MAX;
	int32_t t6 = 1;

	t6 = (x45==(x46<<(x47<=x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	static int32_t x50 = INT32_MAX;
	uint8_t x51 = 88U;
	uint16_t x52 = 5U;
	volatile int32_t t7 = -42;

	t7 = (x49==(x50<<(x51<=x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = 0;
	volatile uint8_t x54 = 20U;
	static int32_t x56 = -1;
	int32_t t8 = -5617685;

	t8 = (x53==(x54<<(x55<=x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = INT64_MIN;
	uint32_t x58 = 256903U;
	uint16_t x59 = 7U;
	int8_t x60 = INT8_MIN;
	volatile int32_t t9 = 10;

	t9 = (x57==(x58<<(x59<=x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x61 = UINT32_MAX;
	static volatile int32_t t10 = 88;

	t10 = (x61==(x62<<(x63<=x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x65 = 51U;
	static uint64_t x66 = 502749541204LLU;
	static int16_t x67 = INT16_MIN;
	int32_t t11 = -143148;

	t11 = (x65==(x66<<(x67<=x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x71 = -1;
	int32_t x72 = 397;

	t12 = (x69==(x70<<(x71<=x72)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x82 = 7;
	volatile int64_t x83 = -1LL;
	int64_t x84 = 524698590LL;
	static volatile int32_t t13 = -8;

	t13 = (x81==(x82<<(x83<=x84)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MAX;
	static int64_t x91 = INT64_MIN;
	int8_t x92 = -1;
	int32_t t14 = -1486207;

	t14 = (x89==(x90<<(x91<=x92)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x93 = 26U;
	static uint8_t x94 = UINT8_MAX;
	static uint32_t x95 = 118U;
	int32_t t15 = -38596;

	t15 = (x93==(x94<<(x95<=x96)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x101 = 0U;
	int8_t x102 = INT8_MAX;
	uint8_t x103 = 69U;
	static int32_t t16 = -62989;

	t16 = (x101==(x102<<(x103<=x104)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x105 = 22U;
	volatile int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MAX;
	volatile int32_t t17 = 10556;

	t17 = (x105==(x106<<(x107<=x108)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x109 = INT8_MAX;
	volatile uint8_t x110 = UINT8_MAX;
	int16_t x111 = INT16_MIN;
	uint16_t x112 = UINT16_MAX;
	int32_t t18 = 376444;

	t18 = (x109==(x110<<(x111<=x112)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x113 = -1LL;
	volatile int8_t x114 = INT8_MAX;
	uint32_t x115 = 44667U;
	int64_t x116 = INT64_MIN;

	t19 = (x113==(x114<<(x115<=x116)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x118 = UINT16_MAX;
	int32_t x119 = INT32_MAX;
	int16_t x120 = -7302;
	static int32_t t20 = 14132;

	t20 = (x117==(x118<<(x119<=x120)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x125 = 107870726524LLU;
	uint32_t x126 = UINT32_MAX;
	int32_t x127 = INT32_MIN;
	volatile uint8_t x128 = UINT8_MAX;
	volatile int32_t t21 = -2105;

	t21 = (x125==(x126<<(x127<=x128)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x145 = 53368709728891LLU;
	int8_t x146 = INT8_MAX;
	volatile int32_t t22 = 37666478;

	t22 = (x145==(x146<<(x147<=x148)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x154 = 0;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = UINT64_MAX;
	int32_t t23 = -55;

	t23 = (x153==(x154<<(x155<=x156)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x157 = -284683560911483LL;
	int64_t x158 = INT64_MAX;
	static volatile int16_t x159 = 4648;
	int64_t x160 = INT64_MIN;
	volatile int32_t t24 = -477174;

	t24 = (x157==(x158<<(x159<=x160)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x161 = INT16_MAX;
	uint64_t x162 = 3280810673LLU;

	t25 = (x161==(x162<<(x163<=x164)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x173 = INT32_MIN;
	static uint64_t x174 = 4503LLU;
	volatile int32_t x175 = 4913;
	int8_t x176 = -1;
	volatile int32_t t26 = 67690457;

	t26 = (x173==(x174<<(x175<=x176)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x177 = -581;
	static volatile uint32_t x178 = 9960576U;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t27 = 2990695;

	t27 = (x177==(x178<<(x179<=x180)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = 10U;
	int64_t x183 = INT64_MAX;
	int32_t t28 = 189254;

	t28 = (x181==(x182<<(x183<=x184)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x189 = INT16_MAX;
	static volatile int16_t x190 = 1765;
	uint16_t x191 = 47U;

	t29 = (x189==(x190<<(x191<=x192)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x193 = UINT16_MAX;
	uint8_t x194 = 0U;
	int16_t x195 = -1;
	uint8_t x196 = 35U;
	volatile int32_t t30 = 37;

	t30 = (x193==(x194<<(x195<=x196)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x197 = INT8_MAX;
	volatile uint32_t x198 = 272273119U;
	uint16_t x199 = UINT16_MAX;
	volatile int32_t t31 = -609;

	t31 = (x197==(x198<<(x199<=x200)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x201 = INT8_MAX;
	uint16_t x203 = 297U;
	uint64_t x204 = 1035LLU;
	volatile int32_t t32 = -379768;

	t32 = (x201==(x202<<(x203<=x204)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x253 = INT16_MIN;
	static uint32_t x255 = 7214U;
	volatile int32_t t33 = 2621;

	t33 = (x253==(x254<<(x255<=x256)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x257 = 1401198LLU;
	uint16_t x258 = 109U;
	static uint8_t x260 = 20U;

	t34 = (x257==(x258<<(x259<=x260)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x262 = UINT32_MAX;
	uint64_t x263 = 1246054624846423LLU;
	uint32_t x264 = 97864U;

	t35 = (x261==(x262<<(x263<=x264)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x265 = 351U;
	uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	static int8_t x268 = INT8_MIN;

	t36 = (x265==(x266<<(x267<=x268)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x269 = -28;
	uint32_t x270 = 1409118U;
	int32_t x271 = INT32_MIN;
	volatile int16_t x272 = INT16_MIN;
	int32_t t37 = -290730208;

	t37 = (x269==(x270<<(x271<=x272)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x281 = INT8_MIN;
	static uint32_t x282 = UINT32_MAX;
	static int8_t x283 = -1;
	int16_t x284 = -1;

	t38 = (x281==(x282<<(x283<=x284)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x285 = INT8_MIN;
	uint64_t x286 = UINT64_MAX;
	int64_t x288 = INT64_MAX;
	volatile int32_t t39 = -24258531;

	t39 = (x285==(x286<<(x287<=x288)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x302 = INT8_MAX;
	int64_t x304 = INT64_MIN;
	volatile int32_t t40 = 364954;

	t40 = (x301==(x302<<(x303<=x304)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x306 = 35776;
	uint32_t x307 = 65533U;
	volatile int32_t x308 = INT32_MAX;
	static volatile int32_t t41 = -6148;

	t41 = (x305==(x306<<(x307<=x308)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x310 = INT8_MAX;
	static uint16_t x312 = 2770U;
	int32_t t42 = 189213367;

	t42 = (x309==(x310<<(x311<=x312)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x321 = INT8_MIN;
	volatile int16_t x322 = INT16_MAX;
	static int16_t x323 = -109;
	volatile int32_t x324 = 452093;
	int32_t t43 = 136485814;

	t43 = (x321==(x322<<(x323<=x324)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x325 = INT16_MAX;
	uint8_t x326 = 87U;
	int64_t x327 = INT64_MAX;
	static int16_t x328 = INT16_MIN;
	int32_t t44 = 801;

	t44 = (x325==(x326<<(x327<=x328)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x337 = 19U;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MIN;
	volatile int32_t t45 = 1016;

	t45 = (x337==(x338<<(x339<=x340)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x350 = 37367LL;
	static uint16_t x352 = 450U;
	int32_t t46 = -21;

	t46 = (x349==(x350<<(x351<=x352)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x354 = 2U;
	static int64_t x355 = 426878LL;
	int16_t x356 = -1;

	t47 = (x353==(x354<<(x355<=x356)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x358 = 42016U;
	int16_t x359 = INT16_MAX;
	static int8_t x360 = -1;
	int32_t t48 = -2213;

	t48 = (x357==(x358<<(x359<=x360)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = 2;
	int64_t x368 = 234132LL;
	static volatile int32_t t49 = 316;

	t49 = (x365==(x366<<(x367<=x368)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x369 = -13518010135LL;
	int32_t x370 = 32153839;
	int32_t x371 = 94063;
	uint32_t x372 = 1379937294U;
	int32_t t50 = 130056116;

	t50 = (x369==(x370<<(x371<=x372)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x401 = INT16_MAX;
	uint64_t x402 = 891353080LLU;
	int8_t x403 = INT8_MIN;
	int64_t x404 = INT64_MAX;

	t51 = (x401==(x402<<(x403<=x404)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x405 = 265;
	uint16_t x406 = 18U;
	int64_t x407 = INT64_MAX;
	static volatile int32_t x408 = INT32_MAX;

	t52 = (x405==(x406<<(x407<=x408)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x409 = -1;
	int8_t x411 = 4;
	static volatile int32_t t53 = 598;

	t53 = (x409==(x410<<(x411<=x412)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x413 = UINT16_MAX;
	int16_t x414 = INT16_MAX;
	static uint64_t x415 = 129196138866479LLU;
	int32_t t54 = -237;

	t54 = (x413==(x414<<(x415<=x416)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MIN;
	static volatile int32_t t55 = 62977;

	t55 = (x417==(x418<<(x419<=x420)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x421 = 0U;
	uint32_t x422 = 383U;
	volatile int16_t x424 = 554;
	int32_t t56 = 14392;

	t56 = (x421==(x422<<(x423<=x424)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x427 = INT16_MAX;
	int32_t x428 = -12444;
	int32_t t57 = 1;

	t57 = (x425==(x426<<(x427<=x428)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x433 = 18U;
	static uint16_t x434 = 28613U;
	volatile uint8_t x435 = 3U;
	static volatile int8_t x436 = INT8_MAX;

	t58 = (x433==(x434<<(x435<=x436)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x449 = 1U;
	uint64_t x450 = UINT64_MAX;
	int32_t t59 = 416555;

	t59 = (x449==(x450<<(x451<=x452)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x457 = UINT16_MAX;
	uint16_t x458 = UINT16_MAX;
	static uint64_t x459 = UINT64_MAX;
	uint32_t x460 = 927275U;
	int32_t t60 = 7;

	t60 = (x457==(x458<<(x459<=x460)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x462 = INT64_MAX;
	static volatile int64_t x464 = INT64_MIN;
	volatile int32_t t61 = 1;

	t61 = (x461==(x462<<(x463<=x464)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x465 = -1;
	uint64_t x466 = 1099185120256LLU;
	int64_t x467 = -30096357955012077LL;
	uint16_t x468 = 27U;
	volatile int32_t t62 = -183;

	t62 = (x465==(x466<<(x467<=x468)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x469 = INT8_MIN;
	static int8_t x470 = 0;
	volatile int64_t x471 = INT64_MAX;
	uint32_t x472 = 6944205U;

	t63 = (x469==(x470<<(x471<=x472)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x473 = INT32_MIN;
	uint64_t x474 = 586476487LLU;
	int8_t x475 = INT8_MIN;
	int8_t x476 = INT8_MAX;

	t64 = (x473==(x474<<(x475<=x476)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x478 = 41U;
	static uint64_t x479 = 134365983059049LLU;
	static volatile int64_t x480 = 802796LL;
	volatile int32_t t65 = 123459735;

	t65 = (x477==(x478<<(x479<=x480)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x481 = INT8_MIN;
	int16_t x482 = 3;
	uint64_t x483 = UINT64_MAX;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t66 = 217112;

	t66 = (x481==(x482<<(x483<=x484)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x497 = -1;
	static int8_t x498 = INT8_MAX;
	int32_t x500 = 222;

	t67 = (x497==(x498<<(x499<=x500)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x501 = INT32_MAX;
	static int16_t x503 = INT16_MIN;
	uint32_t x504 = 21232963U;
	volatile int32_t t68 = 109618;

	t68 = (x501==(x502<<(x503<=x504)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x506 = 133791554193402399LL;
	static int8_t x507 = -1;
	uint8_t x508 = 5U;
	volatile int32_t t69 = 222;

	t69 = (x505==(x506<<(x507<=x508)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x513 = INT64_MAX;
	uint32_t x515 = UINT32_MAX;
	volatile uint8_t x516 = 117U;
	int32_t t70 = -366;

	t70 = (x513==(x514<<(x515<=x516)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x518 = 85LLU;
	int8_t x519 = -1;

	t71 = (x517==(x518<<(x519<=x520)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x521 = INT16_MAX;
	uint8_t x522 = 90U;
	static uint16_t x523 = 15222U;
	static volatile int32_t t72 = 6273834;

	t72 = (x521==(x522<<(x523<=x524)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x525 = INT64_MIN;
	int64_t x526 = INT64_MAX;
	int8_t x527 = INT8_MIN;
	int64_t x528 = -11937498972LL;
	static volatile int32_t t73 = -1784741;

	t73 = (x525==(x526<<(x527<=x528)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x537 = INT16_MAX;
	uint16_t x538 = 0U;
	uint16_t x539 = UINT16_MAX;
	int32_t x540 = INT32_MIN;
	int32_t t74 = -112488635;

	t74 = (x537==(x538<<(x539<=x540)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x541 = INT32_MAX;
	uint16_t x543 = 21427U;

	t75 = (x541==(x542<<(x543<=x544)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x545 = 1561U;
	static uint8_t x546 = 15U;
	int64_t x548 = INT64_MAX;
	volatile int32_t t76 = -3850559;

	t76 = (x545==(x546<<(x547<=x548)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x549 = INT16_MIN;
	static int8_t x550 = 0;
	volatile int32_t t77 = -8;

	t77 = (x549==(x550<<(x551<=x552)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x557 = UINT64_MAX;
	uint32_t x558 = 1873006199U;
	int32_t x559 = -1;
	static volatile int32_t t78 = -37;

	t78 = (x557==(x558<<(x559<=x560)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x562 = UINT16_MAX;
	int8_t x563 = INT8_MAX;
	volatile int32_t t79 = 1;

	t79 = (x561==(x562<<(x563<=x564)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x565 = 0;
	uint64_t x567 = UINT64_MAX;
	int32_t t80 = 2994432;

	t80 = (x565==(x566<<(x567<=x568)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x571 = INT64_MIN;
	int8_t x572 = -1;
	static int32_t t81 = 269121;

	t81 = (x569==(x570<<(x571<=x572)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x573 = 7020U;
	volatile uint32_t x574 = 12U;
	uint32_t x575 = 1U;
	static int8_t x576 = 45;

	t82 = (x573==(x574<<(x575<=x576)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x577 = -1;
	static int8_t x578 = INT8_MAX;
	int16_t x579 = INT16_MAX;
	int64_t x580 = -1LL;
	static int32_t t83 = 25;

	t83 = (x577==(x578<<(x579<=x580)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x582 = 201;
	volatile int64_t x583 = INT64_MIN;
	int64_t x584 = -1LL;
	static volatile int32_t t84 = -86434603;

	t84 = (x581==(x582<<(x583<=x584)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x586 = 1;
	int16_t x587 = -1;
	volatile uint16_t x588 = 8456U;
	volatile int32_t t85 = 0;

	t85 = (x585==(x586<<(x587<=x588)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x589 = 45;
	volatile int16_t x590 = 1;
	int16_t x591 = INT16_MIN;
	uint32_t x592 = 556244210U;
	int32_t t86 = -14422;

	t86 = (x589==(x590<<(x591<=x592)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x595 = -1;
	volatile int8_t x596 = INT8_MIN;

	t87 = (x593==(x594<<(x595<=x596)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x597 = -11;
	volatile int32_t x598 = 9;
	int32_t x599 = 16876;
	int64_t x600 = -1LL;
	static volatile int32_t t88 = -7505619;

	t88 = (x597==(x598<<(x599<=x600)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x601 = 124U;
	int8_t x603 = -1;
	uint8_t x604 = 26U;
	volatile int32_t t89 = 79;

	t89 = (x601==(x602<<(x603<=x604)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x613 = 30;
	static uint32_t x614 = 632224106U;
	static int8_t x615 = INT8_MIN;
	uint64_t x616 = 159147608483LLU;
	int32_t t90 = -696961;

	t90 = (x613==(x614<<(x615<=x616)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x625 = 0U;
	uint16_t x626 = UINT16_MAX;
	int32_t x627 = INT32_MAX;
	volatile int32_t t91 = 857;

	t91 = (x625==(x626<<(x627<=x628)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x630 = UINT16_MAX;
	volatile int8_t x632 = -1;
	volatile int32_t t92 = 126177580;

	t92 = (x629==(x630<<(x631<=x632)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x633 = INT16_MIN;
	uint8_t x634 = 0U;
	uint16_t x636 = 31U;

	t93 = (x633==(x634<<(x635<=x636)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x637 = 864939707LLU;
	uint8_t x638 = 52U;
	volatile uint8_t x639 = 1U;
	int16_t x640 = -11;
	volatile int32_t t94 = 268;

	t94 = (x637==(x638<<(x639<=x640)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x641 = 0U;
	volatile int32_t x642 = INT32_MAX;
	uint64_t x643 = 1352479LLU;
	static uint64_t x644 = 57269LLU;
	volatile int32_t t95 = -25;

	t95 = (x641==(x642<<(x643<=x644)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x645 = 5373159642LLU;
	uint64_t x646 = UINT64_MAX;
	volatile int32_t t96 = -701813100;

	t96 = (x645==(x646<<(x647<=x648)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x651 = INT8_MIN;
	uint32_t x652 = UINT32_MAX;
	static int32_t t97 = 97;

	t97 = (x649==(x650<<(x651<=x652)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x653 = -1;
	static uint32_t x655 = UINT32_MAX;
	int32_t x656 = INT32_MIN;
	static volatile int32_t t98 = -31829556;

	t98 = (x653==(x654<<(x655<=x656)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x661 = 770U;
	int16_t x662 = INT16_MAX;
	uint16_t x663 = 7486U;
	volatile int8_t x664 = INT8_MAX;
	volatile int32_t t99 = -14777194;

	t99 = (x661==(x662<<(x663<=x664)));

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

