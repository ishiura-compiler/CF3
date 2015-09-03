#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = 401;
uint16_t x25 = UINT16_MAX;
uint8_t x56 = UINT8_MAX;
int16_t x58 = -1;
int64_t x89 = -326827140253LL;
int8_t x93 = 0;
int8_t x96 = INT8_MIN;
uint16_t x100 = UINT16_MAX;
int32_t t10 = 102;
static volatile uint32_t x106 = 101310607U;
int8_t x130 = INT8_MIN;
int8_t x132 = INT8_MAX;
uint8_t x133 = 44U;
volatile int8_t x174 = -1;
static int64_t x175 = -1LL;
uint64_t x196 = 28656668451548129LLU;
int32_t t21 = 366;
volatile int32_t t22 = -48353101;
uint32_t x215 = 55044687U;
int32_t t24 = -100444;
uint16_t x247 = 1U;
volatile int32_t x249 = -64292;
static uint64_t x252 = 4899945857389026981LLU;
volatile int32_t t30 = 63904;
static uint64_t x279 = 36LLU;
static int16_t x290 = -101;
int64_t x303 = -1LL;
volatile int32_t t33 = 15139;
int8_t x319 = INT8_MAX;
static int32_t x326 = INT32_MAX;
uint8_t x327 = UINT8_MAX;
int32_t t35 = -9631;
volatile int32_t t36 = 2;
uint16_t x345 = UINT16_MAX;
uint16_t x346 = 31970U;
static int32_t t38 = 2065821;
uint64_t x378 = UINT64_MAX;
static int32_t x389 = INT32_MIN;
int64_t x392 = -126622LL;
volatile int32_t t41 = 5195;
static int8_t x393 = -3;
uint32_t x397 = 8U;
int16_t x398 = INT16_MIN;
uint64_t x407 = 26LLU;
int64_t x408 = INT64_MIN;
int32_t t45 = 5914;
uint32_t x413 = 861U;
uint8_t x415 = UINT8_MAX;
volatile int32_t t47 = -3;
int8_t x440 = 2;
static int16_t x455 = -6;
int32_t t52 = 38965;
uint32_t x471 = 2U;
volatile int32_t t57 = 82945445;
uint16_t x478 = UINT16_MAX;
int8_t x481 = INT8_MAX;
uint16_t x482 = UINT16_MAX;
int8_t x483 = INT8_MAX;
uint16_t x494 = 466U;
uint8_t x504 = 1U;
uint32_t x512 = 429298461U;
uint64_t x515 = 3LLU;
volatile int32_t t64 = -64629;
volatile uint64_t x532 = UINT64_MAX;
uint16_t x536 = 0U;
int16_t x541 = -1;
static uint32_t x561 = UINT32_MAX;
int32_t x575 = -1;
static volatile uint64_t x576 = 2214257456LLU;
volatile int32_t x582 = INT32_MAX;
int16_t x583 = 25;
uint64_t x597 = 319271LLU;
int32_t x598 = INT32_MAX;
int32_t t73 = -1633;
int32_t t77 = 3724942;
int64_t x636 = -88LL;
int16_t x639 = -1;
int32_t t79 = 0;
uint64_t x643 = 4609055859282948715LLU;
static int32_t t80 = 130;
int16_t x652 = -2840;
volatile int32_t t81 = -508824;
int32_t x684 = 0;
volatile int32_t t84 = 12869807;
uint64_t x727 = 964765LLU;
int8_t x741 = INT8_MAX;
volatile int8_t x768 = INT8_MAX;
uint64_t x778 = 244LLU;
uint32_t x798 = 54U;
uint8_t x804 = UINT8_MAX;
int32_t t98 = -364756;
static int8_t x815 = INT8_MIN;
int32_t t99 = -144473040;


void f0(void) {
	uint64_t x17 = 2644734133619255687LLU;
	uint64_t x18 = 103503979LLU;
	uint32_t x19 = 40592U;
	static int64_t x20 = INT64_MAX;

	t0 = ((x17%(x18/x19))<=x20);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x26 = 1018259436913LL;
	int64_t x27 = -127187998912LL;
	static int64_t x28 = INT64_MIN;
	int32_t t1 = -1;

	t1 = ((x25%(x26/x27))<=x28);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x45 = 90;
	int16_t x46 = INT16_MIN;
	volatile int64_t x47 = -1LL;
	uint32_t x48 = 85U;
	int32_t t2 = 334;

	t2 = ((x45%(x46/x47))<=x48);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x53 = 30509LLU;
	int32_t x54 = INT32_MIN;
	uint32_t x55 = 207171374U;
	volatile int32_t t3 = -543;

	t3 = ((x53%(x54/x55))<=x56);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x57 = 0U;
	uint32_t x59 = 5U;
	uint64_t x60 = 116683LLU;
	volatile int32_t t4 = -1;

	t4 = ((x57%(x58/x59))<=x60);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x65 = INT32_MAX;
	int64_t x66 = -7765402LL;
	static int8_t x67 = INT8_MIN;
	uint64_t x68 = 225122606LLU;
	static volatile int32_t t5 = -850;

	t5 = ((x65%(x66/x67))<=x68);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x69 = 56U;
	int32_t x70 = 10481;
	int8_t x71 = INT8_MIN;
	int64_t x72 = 406LL;
	int32_t t6 = -14306;

	t6 = ((x69%(x70/x71))<=x72);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x90 = INT16_MIN;
	uint8_t x91 = 2U;
	static int32_t x92 = -12197;
	volatile int32_t t7 = -1180;

	t7 = ((x89%(x90/x91))<=x92);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x94 = 1584761526557LLU;
	static int64_t x95 = 4942043705LL;
	int32_t t8 = 13;

	t8 = ((x93%(x94/x95))<=x96);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x97 = -49126288867311589LL;
	int64_t x98 = -2738834442LL;
	int32_t x99 = INT32_MIN;
	int32_t t9 = -1;

	t9 = ((x97%(x98/x99))<=x100);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = -1;
	volatile int32_t x104 = INT32_MAX;

	t10 = ((x101%(x102/x103))<=x104);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x105 = INT8_MIN;
	int8_t x107 = 1;
	uint16_t x108 = 16371U;
	static volatile int32_t t11 = 2;

	t11 = ((x105%(x106/x107))<=x108);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x117 = -1;
	volatile uint64_t x118 = UINT64_MAX;
	volatile int8_t x119 = -15;
	volatile int8_t x120 = INT8_MAX;
	volatile int32_t t12 = -152;

	t12 = ((x117%(x118/x119))<=x120);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x121 = 31364;
	static volatile uint16_t x122 = 2U;
	uint16_t x123 = 2U;
	uint16_t x124 = 121U;
	volatile int32_t t13 = 2054885;

	t13 = ((x121%(x122/x123))<=x124);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x129 = 1;
	static uint64_t x131 = 82107661217LLU;
	volatile int32_t t14 = 2;

	t14 = ((x129%(x130/x131))<=x132);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = 21;
	int8_t x136 = INT8_MIN;
	volatile int32_t t15 = 1716;

	t15 = ((x133%(x134/x135))<=x136);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x137 = 1664U;
	uint16_t x138 = UINT16_MAX;
	uint16_t x139 = 11U;
	int8_t x140 = 2;
	int32_t t16 = -331024;

	t16 = ((x137%(x138/x139))<=x140);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x149 = 25645756530909253LL;
	int64_t x150 = -1LL;
	volatile int16_t x151 = -1;
	int8_t x152 = INT8_MAX;
	volatile int32_t t17 = -3826898;

	t17 = ((x149%(x150/x151))<=x152);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x153 = -2362;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MIN;
	int32_t x156 = 0;
	int32_t t18 = -16;

	t18 = ((x153%(x154/x155))<=x156);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x169 = 199701LLU;
	static int64_t x170 = INT64_MIN;
	int8_t x171 = -58;
	int16_t x172 = 1737;
	volatile int32_t t19 = -780221076;

	t19 = ((x169%(x170/x171))<=x172);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x173 = -1;
	static int8_t x176 = -3;
	int32_t t20 = 1;

	t20 = ((x173%(x174/x175))<=x176);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x193 = INT8_MIN;
	uint16_t x194 = UINT16_MAX;
	static int8_t x195 = -1;

	t21 = ((x193%(x194/x195))<=x196);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x205 = INT8_MIN;
	volatile uint32_t x206 = UINT32_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int32_t x208 = 1;

	t22 = ((x205%(x206/x207))<=x208);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x213 = -1;
	static int8_t x214 = INT8_MIN;
	static int64_t x216 = 0LL;
	volatile int32_t t23 = 34;

	t23 = ((x213%(x214/x215))<=x216);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x217 = -2;
	static int64_t x218 = 236273091403933LL;
	static int32_t x219 = -1;
	static int64_t x220 = INT64_MIN;

	t24 = ((x217%(x218/x219))<=x220);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x233 = -1;
	int64_t x234 = 10LL;
	static int8_t x235 = -1;
	static int64_t x236 = INT64_MIN;
	volatile int32_t t25 = -7635;

	t25 = ((x233%(x234/x235))<=x236);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x245 = INT16_MIN;
	uint16_t x246 = 6U;
	volatile uint32_t x248 = UINT32_MAX;
	static int32_t t26 = -3;

	t26 = ((x245%(x246/x247))<=x248);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x250 = -1LL;
	uint64_t x251 = 15177768940582309LLU;
	volatile int32_t t27 = 0;

	t27 = ((x249%(x250/x251))<=x252);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x257 = 114U;
	uint64_t x258 = UINT64_MAX;
	int64_t x259 = -1LL;
	static int16_t x260 = -1;
	int32_t t28 = -35;

	t28 = ((x257%(x258/x259))<=x260);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x269 = -59;
	int32_t x270 = -1;
	static uint32_t x271 = UINT32_MAX;
	static int16_t x272 = 447;
	volatile int32_t t29 = 604594114;

	t29 = ((x269%(x270/x271))<=x272);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x273 = UINT8_MAX;
	static uint32_t x274 = UINT32_MAX;
	int16_t x275 = -551;
	static int16_t x276 = INT16_MIN;

	t30 = ((x273%(x274/x275))<=x276);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x277 = 6;
	int16_t x278 = INT16_MIN;
	volatile int8_t x280 = -23;
	static int32_t t31 = 4473035;

	t31 = ((x277%(x278/x279))<=x280);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x289 = UINT64_MAX;
	uint8_t x291 = 13U;
	volatile int8_t x292 = -1;
	int32_t t32 = 959731512;

	t32 = ((x289%(x290/x291))<=x292);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x301 = 10571U;
	uint8_t x302 = UINT8_MAX;
	volatile int16_t x304 = INT16_MAX;

	t33 = ((x301%(x302/x303))<=x304);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x317 = 17U;
	volatile int64_t x318 = INT64_MAX;
	int32_t x320 = -1;
	static volatile int32_t t34 = -39635;

	t34 = ((x317%(x318/x319))<=x320);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x325 = INT64_MIN;
	volatile uint64_t x328 = 8912754073579168LLU;

	t35 = ((x325%(x326/x327))<=x328);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x329 = INT32_MIN;
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MIN;

	t36 = ((x329%(x330/x331))<=x332);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x347 = -954LL;
	int32_t x348 = 78750527;
	static volatile int32_t t37 = -803844751;

	t37 = ((x345%(x346/x347))<=x348);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x357 = -12083135986967LL;
	static uint16_t x358 = 1757U;
	static int32_t x359 = -1;
	int64_t x360 = -730126LL;

	t38 = ((x357%(x358/x359))<=x360);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MAX;
	int16_t x371 = -5;
	static int16_t x372 = INT16_MIN;
	volatile int32_t t39 = 0;

	t39 = ((x369%(x370/x371))<=x372);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x377 = 10U;
	int64_t x379 = INT64_MIN;
	int16_t x380 = -1;
	int32_t t40 = -48;

	t40 = ((x377%(x378/x379))<=x380);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x390 = -1;
	int8_t x391 = 1;

	t41 = ((x389%(x390/x391))<=x392);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x394 = 51U;
	volatile int64_t x395 = -1LL;
	int8_t x396 = INT8_MIN;
	volatile int32_t t42 = -152813;

	t42 = ((x393%(x394/x395))<=x396);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x399 = 19;
	volatile int32_t x400 = 102;
	int32_t t43 = -42;

	t43 = ((x397%(x398/x399))<=x400);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MAX;
	int32_t x403 = -432404336;
	int16_t x404 = 1;
	volatile int32_t t44 = -13373;

	t44 = ((x401%(x402/x403))<=x404);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = -79819112;

	t45 = ((x405%(x406/x407))<=x408);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x414 = INT16_MIN;
	static int16_t x416 = INT16_MIN;
	int32_t t46 = 0;

	t46 = ((x413%(x414/x415))<=x416);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x417 = 1;
	int32_t x418 = INT32_MAX;
	uint16_t x419 = 10U;
	int8_t x420 = -5;

	t47 = ((x417%(x418/x419))<=x420);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x429 = INT32_MIN;
	uint64_t x430 = UINT64_MAX;
	int64_t x431 = 15LL;
	volatile int8_t x432 = INT8_MIN;
	static volatile int32_t t48 = -41761683;

	t48 = ((x429%(x430/x431))<=x432);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x437 = UINT8_MAX;
	volatile int8_t x438 = INT8_MIN;
	static uint32_t x439 = 703741972U;
	int32_t t49 = -62264615;

	t49 = ((x437%(x438/x439))<=x440);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x441 = INT64_MIN;
	volatile uint64_t x442 = 363976LLU;
	uint8_t x443 = UINT8_MAX;
	volatile int16_t x444 = INT16_MAX;
	int32_t t50 = 19419;

	t50 = ((x441%(x442/x443))<=x444);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x449 = -9;
	int32_t x450 = -1;
	int8_t x451 = -1;
	uint16_t x452 = UINT16_MAX;
	static volatile int32_t t51 = 32349;

	t51 = ((x449%(x450/x451))<=x452);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x453 = INT64_MIN;
	static int64_t x454 = INT64_MIN;
	uint16_t x456 = 1565U;

	t52 = ((x453%(x454/x455))<=x456);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MAX;
	uint8_t x459 = UINT8_MAX;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t53 = 3061712;

	t53 = ((x457%(x458/x459))<=x460);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x461 = 938LLU;
	static int32_t x462 = 304753038;
	int16_t x463 = INT16_MIN;
	int32_t x464 = INT32_MAX;
	volatile int32_t t54 = -36129302;

	t54 = ((x461%(x462/x463))<=x464);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x465 = 3360LLU;
	int16_t x466 = INT16_MIN;
	static int16_t x467 = -1;
	volatile int8_t x468 = INT8_MIN;
	int32_t t55 = -86434;

	t55 = ((x465%(x466/x467))<=x468);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x469 = INT16_MIN;
	volatile int16_t x470 = INT16_MIN;
	int8_t x472 = 0;
	volatile int32_t t56 = -520;

	t56 = ((x469%(x470/x471))<=x472);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x473 = 0U;
	uint8_t x474 = UINT8_MAX;
	int8_t x475 = INT8_MAX;
	static int32_t x476 = INT32_MAX;

	t57 = ((x473%(x474/x475))<=x476);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x477 = -84637638;
	static uint16_t x479 = 1U;
	int16_t x480 = -1;
	volatile int32_t t58 = -467979;

	t58 = ((x477%(x478/x479))<=x480);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x484 = 125472LLU;
	static int32_t t59 = -2782;

	t59 = ((x481%(x482/x483))<=x484);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x493 = 30876447U;
	static int8_t x495 = INT8_MIN;
	int8_t x496 = 19;
	int32_t t60 = 14121;

	t60 = ((x493%(x494/x495))<=x496);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x501 = INT32_MAX;
	static int32_t x502 = -22377166;
	int8_t x503 = -1;
	volatile int32_t t61 = -8375656;

	t61 = ((x501%(x502/x503))<=x504);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x509 = INT8_MIN;
	int8_t x510 = -1;
	int64_t x511 = -1LL;
	int32_t t62 = -216254;

	t62 = ((x509%(x510/x511))<=x512);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x513 = -1003;
	volatile int64_t x514 = INT64_MIN;
	int16_t x516 = 1;
	static volatile int32_t t63 = -1592;

	t63 = ((x513%(x514/x515))<=x516);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x521 = 678U;
	uint64_t x522 = UINT64_MAX;
	static uint32_t x523 = 115715142U;
	int64_t x524 = INT64_MIN;

	t64 = ((x521%(x522/x523))<=x524);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x529 = 534450866705LLU;
	int64_t x530 = -339119907758LL;
	int64_t x531 = 2955680776LL;
	int32_t t65 = -1;

	t65 = ((x529%(x530/x531))<=x532);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x533 = INT16_MAX;
	int16_t x534 = 5166;
	int8_t x535 = -1;
	int32_t t66 = 90;

	t66 = ((x533%(x534/x535))<=x536);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x537 = 2368;
	uint64_t x538 = UINT64_MAX;
	int16_t x539 = INT16_MIN;
	static int16_t x540 = INT16_MIN;
	volatile int32_t t67 = -1;

	t67 = ((x537%(x538/x539))<=x540);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x542 = -7430;
	int32_t x543 = -2260;
	volatile uint32_t x544 = 98U;
	int32_t t68 = -86296;

	t68 = ((x541%(x542/x543))<=x544);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x562 = INT64_MIN;
	int16_t x563 = INT16_MIN;
	static volatile uint8_t x564 = 1U;
	volatile int32_t t69 = 2;

	t69 = ((x561%(x562/x563))<=x564);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x573 = UINT16_MAX;
	int16_t x574 = INT16_MIN;
	int32_t t70 = 951042748;

	t70 = ((x573%(x574/x575))<=x576);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x581 = 80292315LL;
	int8_t x584 = 5;
	int32_t t71 = -779698589;

	t71 = ((x581%(x582/x583))<=x584);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x599 = -3;
	volatile int32_t x600 = -1;
	volatile int32_t t72 = 0;

	t72 = ((x597%(x598/x599))<=x600);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x601 = 59U;
	int32_t x602 = INT32_MIN;
	static int32_t x603 = INT32_MAX;
	int32_t x604 = -12;

	t73 = ((x601%(x602/x603))<=x604);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x605 = INT32_MIN;
	int64_t x606 = INT64_MIN;
	int16_t x607 = INT16_MIN;
	static int8_t x608 = INT8_MIN;
	volatile int32_t t74 = 15247;

	t74 = ((x605%(x606/x607))<=x608);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x609 = INT32_MAX;
	int64_t x610 = INT64_MIN;
	int64_t x611 = -5666335LL;
	int32_t x612 = -48118;
	volatile int32_t t75 = -23;

	t75 = ((x609%(x610/x611))<=x612);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x617 = 24208945U;
	static volatile int64_t x618 = -8634223186913LL;
	int16_t x619 = INT16_MIN;
	uint64_t x620 = 10408417LLU;
	int32_t t76 = 0;

	t76 = ((x617%(x618/x619))<=x620);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x625 = UINT16_MAX;
	uint32_t x626 = UINT32_MAX;
	int32_t x627 = 12848;
	uint64_t x628 = 986898744354247227LLU;

	t77 = ((x625%(x626/x627))<=x628);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x633 = INT32_MIN;
	uint8_t x634 = UINT8_MAX;
	int8_t x635 = INT8_MIN;
	static int32_t t78 = 382;

	t78 = ((x633%(x634/x635))<=x636);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x637 = 11;
	static int8_t x638 = -1;
	int64_t x640 = INT64_MAX;

	t79 = ((x637%(x638/x639))<=x640);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x641 = INT16_MAX;
	int32_t x642 = -19906519;
	static int8_t x644 = 1;

	t80 = ((x641%(x642/x643))<=x644);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x649 = INT32_MAX;
	volatile int64_t x650 = 26886410400897LL;
	uint8_t x651 = 79U;

	t81 = ((x649%(x650/x651))<=x652);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x673 = UINT8_MAX;
	uint16_t x674 = UINT16_MAX;
	int64_t x675 = -1LL;
	static volatile uint64_t x676 = 1612107207LLU;
	volatile int32_t t82 = 106418;

	t82 = ((x673%(x674/x675))<=x676);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x681 = INT8_MAX;
	int32_t x682 = -50094;
	uint64_t x683 = 6997485LLU;
	static volatile int32_t t83 = -506819;

	t83 = ((x681%(x682/x683))<=x684);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x685 = UINT16_MAX;
	uint64_t x686 = UINT64_MAX;
	int64_t x687 = 896808849155930452LL;
	static volatile int32_t x688 = -19;

	t84 = ((x685%(x686/x687))<=x688);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x697 = 6U;
	volatile uint16_t x698 = UINT16_MAX;
	uint8_t x699 = UINT8_MAX;
	uint16_t x700 = 222U;
	volatile int32_t t85 = -11390;

	t85 = ((x697%(x698/x699))<=x700);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x709 = 7356770148171LLU;
	int64_t x710 = -5822379594LL;
	int8_t x711 = INT8_MAX;
	int16_t x712 = -4;
	volatile int32_t t86 = 6;

	t86 = ((x709%(x710/x711))<=x712);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x717 = 3;
	volatile uint16_t x718 = UINT16_MAX;
	static uint64_t x719 = 6377LLU;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t87 = 121;

	t87 = ((x717%(x718/x719))<=x720);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x725 = -201993;
	int8_t x726 = -1;
	int64_t x728 = INT64_MAX;
	volatile int32_t t88 = 75139;

	t88 = ((x725%(x726/x727))<=x728);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x729 = INT16_MIN;
	int64_t x730 = -1LL;
	uint64_t x731 = 7140LLU;
	int32_t x732 = INT32_MAX;
	int32_t t89 = -1;

	t89 = ((x729%(x730/x731))<=x732);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x737 = 5;
	volatile int64_t x738 = INT64_MIN;
	static int8_t x739 = 47;
	int8_t x740 = 7;
	volatile int32_t t90 = 7319;

	t90 = ((x737%(x738/x739))<=x740);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x742 = UINT16_MAX;
	volatile int16_t x743 = INT16_MIN;
	int32_t x744 = -3896;
	static int32_t t91 = 31;

	t91 = ((x741%(x742/x743))<=x744);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x745 = UINT16_MAX;
	uint8_t x746 = UINT8_MAX;
	int8_t x747 = -1;
	static int64_t x748 = 13033852LL;
	volatile int32_t t92 = 374501900;

	t92 = ((x745%(x746/x747))<=x748);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x765 = 3;
	int64_t x766 = -80159LL;
	static volatile int8_t x767 = INT8_MIN;
	static int32_t t93 = 234612;

	t93 = ((x765%(x766/x767))<=x768);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x777 = -1;
	uint32_t x779 = 25U;
	uint8_t x780 = UINT8_MAX;
	int32_t t94 = 22;

	t94 = ((x777%(x778/x779))<=x780);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x789 = INT64_MIN;
	uint16_t x790 = UINT16_MAX;
	static int64_t x791 = 52LL;
	uint64_t x792 = 1352005215646063LLU;
	int32_t t95 = 17523;

	t95 = ((x789%(x790/x791))<=x792);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x793 = INT64_MAX;
	int8_t x794 = INT8_MIN;
	int32_t x795 = -1;
	int8_t x796 = INT8_MIN;
	volatile int32_t t96 = 735;

	t96 = ((x793%(x794/x795))<=x796);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x797 = -5LL;
	volatile int8_t x799 = 31;
	int64_t x800 = -1LL;
	volatile int32_t t97 = 11888049;

	t97 = ((x797%(x798/x799))<=x800);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x801 = UINT64_MAX;
	int8_t x802 = INT8_MAX;
	int64_t x803 = -1LL;

	t98 = ((x801%(x802/x803))<=x804);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x813 = INT32_MAX;
	int64_t x814 = -1006737292964LL;
	int64_t x816 = -1LL;

	t99 = ((x813%(x814/x815))<=x816);

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

