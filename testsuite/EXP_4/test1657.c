#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t0 = 965677U;
volatile int32_t x12 = -31109194;
int64_t x16 = -1LL;
static int64_t x24 = -1LL;
volatile int32_t t5 = -7256;
uint32_t x33 = 445258U;
uint64_t x57 = UINT64_MAX;
uint64_t t10 = UINT64_MAX;
static int16_t x76 = INT16_MAX;
static uint64_t x105 = 8315923438082735532LLU;
uint16_t x106 = 15096U;
uint8_t x108 = 30U;
int32_t x123 = INT32_MAX;
volatile int32_t t17 = 0;
int16_t x126 = -5;
volatile uint16_t x131 = UINT16_MAX;
volatile int8_t x142 = 7;
uint64_t x143 = UINT64_MAX;
int8_t x162 = -1;
uint16_t x187 = UINT16_MAX;
uint32_t x189 = 127950U;
int32_t x192 = -1;
uint64_t x238 = 2171520223038LLU;
static int64_t x239 = INT64_MIN;
uint8_t x240 = 27U;
int32_t t30 = 16;
static uint64_t x241 = 342LLU;
static int16_t x244 = -1;
uint64_t t31 = 1680963345LLU;
int16_t x248 = -1;
static int32_t t33 = 23815826;
volatile int32_t t34 = 456;
int8_t x278 = -10;
volatile int32_t t35 = -19;
uint64_t t37 = 2148558358006LLU;
int8_t x306 = INT8_MAX;
static int8_t x308 = INT8_MIN;
volatile int16_t x322 = 1989;
uint8_t x329 = 26U;
int32_t t41 = 15979;
int16_t x341 = 4994;
uint16_t x358 = 53U;
volatile int64_t x363 = 821232876LL;
uint8_t x365 = 9U;
int8_t x380 = INT8_MIN;
static int32_t x390 = INT32_MIN;
uint32_t x401 = 36U;
volatile uint32_t t49 = 122U;
int16_t x414 = INT16_MIN;
volatile uint64_t x415 = 1887540169182044LLU;
static int64_t x416 = -1LL;
volatile int32_t t51 = 866;
static int16_t x425 = INT16_MAX;
static int32_t t54 = -594;
static volatile uint64_t x457 = 7146LLU;
int32_t x458 = -1;
uint8_t x460 = UINT8_MAX;
uint16_t x473 = 1U;
static volatile int32_t x475 = INT32_MIN;
int16_t x478 = 331;
int64_t x498 = -1LL;
static int16_t x504 = -244;
int16_t x524 = INT16_MAX;
static int8_t x543 = INT8_MIN;
static volatile int32_t t68 = 48945420;
uint64_t x556 = 27612225419015LLU;
int32_t x564 = INT32_MIN;
int8_t x592 = INT8_MIN;
uint32_t t74 = 65211258U;
uint16_t x597 = UINT16_MAX;
static volatile int16_t x628 = -1;
int32_t t79 = -1309204;
volatile uint8_t x637 = 0U;
uint16_t x644 = 103U;
int16_t x649 = 53;
uint64_t x651 = 3268677LLU;
volatile int16_t x670 = INT16_MIN;
uint64_t x671 = UINT64_MAX;
volatile int8_t x691 = INT8_MIN;
static int8_t x694 = INT8_MIN;
int32_t x695 = 0;
static int8_t x696 = -1;
static int8_t x702 = INT8_MAX;
static volatile int16_t x705 = 0;
uint16_t x713 = 13U;
volatile int16_t x715 = INT16_MAX;
static int32_t x716 = -33245154;
uint32_t x717 = 5U;
static int32_t x724 = INT32_MIN;
int16_t x728 = -1;
volatile uint16_t x766 = 404U;
uint64_t x774 = 1744LLU;
volatile int16_t x776 = -1;


void f0(void) {
	uint32_t x1 = 1U;
	static volatile uint8_t x2 = UINT8_MAX;
	volatile int32_t x3 = -1;
	volatile int64_t x4 = INT64_MIN;

	t0 = (x1<<(x2&(x3<=x4)));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = 11;
	int32_t x11 = INT32_MAX;
	volatile int32_t t1 = 482;

	t1 = (x9<<(x10&(x11<=x12)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 231LLU;
	static uint32_t x14 = 9U;
	static uint32_t x15 = 735306U;
	static volatile uint64_t t2 = 97909LLU;

	t2 = (x13<<(x14&(x15<=x16)));

	if (t2 != 231LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 586585U;
	volatile uint32_t x22 = 462139U;
	static volatile int8_t x23 = INT8_MIN;
	volatile uint32_t t3 = 20601190U;

	t3 = (x21<<(x22&(x23<=x24)));

	if (t3 != 1173170U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = 2;
	static uint64_t x26 = UINT64_MAX;
	int16_t x27 = -15;
	uint16_t x28 = UINT16_MAX;
	static int32_t t4 = 46033907;

	t4 = (x25<<(x26&(x27<=x28)));

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 5948U;
	int16_t x30 = -2;
	int16_t x31 = -1;
	uint16_t x32 = 28U;

	t5 = (x29<<(x30&(x31<=x32)));

	if (t5 != 5948) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x34 = 2;
	int64_t x35 = INT64_MAX;
	int32_t x36 = -1;
	uint32_t t6 = 9U;

	t6 = (x33<<(x34&(x35<=x36)));

	if (t6 != 445258U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = 1;
	int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t7 = 5613082;

	t7 = (x41<<(x42&(x43<=x44)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = 7U;
	int64_t x48 = -4390896682286LL;
	static volatile uint64_t t8 = UINT64_MAX;

	t8 = (x45<<(x46&(x47<=x48)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 2759U;
	volatile int32_t x50 = INT32_MAX;
	uint64_t x51 = 30425107409LLU;
	uint8_t x52 = UINT8_MAX;
	int32_t t9 = -17;

	t9 = (x49<<(x50&(x51<=x52)));

	if (t9 != 2759) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x58 = -307142152826LL;
	int64_t x59 = INT64_MIN;
	uint32_t x60 = UINT32_MAX;

	t10 = (x57<<(x58&(x59<=x60)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x73 = 205356U;
	volatile int32_t x74 = -1;
	uint32_t x75 = 14U;
	uint32_t t11 = 4U;

	t11 = (x73<<(x74&(x75<=x76)));

	if (t11 != 410712U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x77 = 62703672U;
	uint8_t x78 = 62U;
	volatile uint32_t x79 = UINT32_MAX;
	uint8_t x80 = UINT8_MAX;
	static volatile uint32_t t12 = 12U;

	t12 = (x77<<(x78&(x79<=x80)));

	if (t12 != 62703672U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x89 = 36U;
	static int64_t x90 = -18LL;
	int8_t x91 = -18;
	uint8_t x92 = UINT8_MAX;
	int32_t t13 = -19;

	t13 = (x89<<(x90&(x91<=x92)));

	if (t13 != 36) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x101 = 32697525LLU;
	uint16_t x102 = 400U;
	int32_t x103 = INT32_MIN;
	static volatile int64_t x104 = INT64_MAX;
	static volatile uint64_t t14 = 1918771364LLU;

	t14 = (x101<<(x102&(x103<=x104)));

	if (t14 != 32697525LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x107 = 1;
	volatile uint64_t t15 = 6024378086041180604LLU;

	t15 = (x105<<(x106&(x107<=x108)));

	if (t15 != 8315923438082735532LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x109 = 1;
	int16_t x110 = INT16_MAX;
	volatile uint32_t x111 = 519661U;
	int64_t x112 = 2752246LL;
	volatile int32_t t16 = -14249;

	t16 = (x109<<(x110&(x111<=x112)));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x121 = 94U;
	int32_t x122 = INT32_MAX;
	int32_t x124 = INT32_MIN;

	t17 = (x121<<(x122&(x123<=x124)));

	if (t17 != 94) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x125 = 30;
	volatile uint8_t x127 = UINT8_MAX;
	uint16_t x128 = UINT16_MAX;
	int32_t t18 = -259439;

	t18 = (x125<<(x126&(x127<=x128)));

	if (t18 != 60) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x129 = 5U;
	int16_t x130 = 1;
	volatile int32_t x132 = INT32_MIN;
	uint32_t t19 = 469601623U;

	t19 = (x129<<(x130&(x131<=x132)));

	if (t19 != 5U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x141 = 166859882262780512LLU;
	static volatile int16_t x144 = 4;
	uint64_t t20 = 503010LLU;

	t20 = (x141<<(x142&(x143<=x144)));

	if (t20 != 166859882262780512LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x145 = 4U;
	int8_t x146 = INT8_MIN;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = -1;
	int32_t t21 = -913648246;

	t21 = (x145<<(x146&(x147<=x148)));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x161 = 0U;
	int16_t x163 = 3;
	int64_t x164 = 104958LL;
	int32_t t22 = -358157;

	t22 = (x161<<(x162&(x163<=x164)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x173 = INT64_MAX;
	static uint16_t x174 = UINT16_MAX;
	uint16_t x175 = UINT16_MAX;
	static volatile uint16_t x176 = 36U;
	volatile int64_t t23 = INT64_MAX;

	t23 = (x173<<(x174&(x175<=x176)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x185 = 24U;
	int16_t x186 = INT16_MIN;
	volatile uint32_t x188 = 1010352367U;
	int32_t t24 = 9084;

	t24 = (x185<<(x186&(x187<=x188)));

	if (t24 != 24) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x190 = 4U;
	int8_t x191 = 0;
	uint32_t t25 = 1U;

	t25 = (x189<<(x190&(x191<=x192)));

	if (t25 != 127950U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x193 = 1U;
	int8_t x194 = 60;
	int8_t x195 = 5;
	int8_t x196 = INT8_MAX;
	int32_t t26 = 1;

	t26 = (x193<<(x194&(x195<=x196)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x201 = 1744673;
	int32_t x202 = -1;
	int8_t x203 = -3;
	int32_t x204 = -1;
	int32_t t27 = 16953502;

	t27 = (x201<<(x202&(x203<=x204)));

	if (t27 != 3489346) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x209 = 188609765U;
	int8_t x210 = INT8_MIN;
	uint32_t x211 = 208843U;
	volatile int8_t x212 = INT8_MIN;
	volatile uint32_t t28 = 18261U;

	t28 = (x209<<(x210&(x211<=x212)));

	if (t28 != 188609765U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x229 = 4;
	int32_t x230 = INT32_MIN;
	int8_t x231 = INT8_MIN;
	static int16_t x232 = -788;
	volatile int32_t t29 = -25350;

	t29 = (x229<<(x230&(x231<=x232)));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x237 = 3;

	t30 = (x237<<(x238&(x239<=x240)));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x242 = 53U;
	int32_t x243 = -17;

	t31 = (x241<<(x242&(x243<=x244)));

	if (t31 != 684LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x245 = UINT8_MAX;
	static int16_t x246 = INT16_MIN;
	uint32_t x247 = 71179U;
	static int32_t t32 = 2197;

	t32 = (x245<<(x246&(x247<=x248)));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x257 = 741U;
	int64_t x258 = INT64_MIN;
	int64_t x259 = -1LL;
	int16_t x260 = INT16_MIN;

	t33 = (x257<<(x258&(x259<=x260)));

	if (t33 != 741) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x273 = 636U;
	volatile int8_t x274 = INT8_MAX;
	int32_t x275 = -1;
	int64_t x276 = -62953LL;

	t34 = (x273<<(x274&(x275<=x276)));

	if (t34 != 636) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x277 = 11410U;
	uint16_t x279 = 30035U;
	uint8_t x280 = 43U;

	t35 = (x277<<(x278&(x279<=x280)));

	if (t35 != 11410) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x293 = INT32_MAX;
	static int8_t x294 = INT8_MIN;
	static int32_t x295 = 1;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x293<<(x294&(x295<=x296)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x301 = 571LLU;
	static volatile int8_t x302 = 0;
	static volatile int64_t x303 = INT64_MIN;
	int64_t x304 = 1LL;

	t37 = (x301<<(x302&(x303<=x304)));

	if (t37 != 571LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x305 = 45551914;
	int16_t x307 = INT16_MIN;
	int32_t t38 = -202;

	t38 = (x305<<(x306&(x307<=x308)));

	if (t38 != 91103828) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x309 = 11169303698666153LL;
	static uint64_t x310 = 6556486075352704701LLU;
	uint32_t x311 = 314U;
	volatile int64_t x312 = INT64_MIN;
	int64_t t39 = -4282292777236LL;

	t39 = (x309<<(x310&(x311<=x312)));

	if (t39 != 11169303698666153LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x321 = UINT8_MAX;
	uint8_t x323 = 6U;
	volatile int64_t x324 = -5LL;
	static int32_t t40 = -181684122;

	t40 = (x321<<(x322&(x323<=x324)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x330 = -1;
	uint32_t x331 = 1660522U;
	int64_t x332 = -3427870183005LL;

	t41 = (x329<<(x330&(x331<=x332)));

	if (t41 != 26) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x342 = 9U;
	uint8_t x343 = UINT8_MAX;
	int8_t x344 = -1;
	int32_t t42 = 131715;

	t42 = (x341<<(x342&(x343<=x344)));

	if (t42 != 4994) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x357 = 202849079956789LLU;
	int8_t x359 = -1;
	uint16_t x360 = 4U;
	volatile uint64_t t43 = 230LLU;

	t43 = (x357<<(x358&(x359<=x360)));

	if (t43 != 405698159913578LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x361 = UINT32_MAX;
	static int32_t x362 = -1;
	volatile int32_t x364 = INT32_MIN;
	static uint32_t t44 = UINT32_MAX;

	t44 = (x361<<(x362&(x363<=x364)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x366 = -41;
	int32_t x367 = INT32_MAX;
	static volatile uint8_t x368 = 73U;
	int32_t t45 = -21713;

	t45 = (x365<<(x366&(x367<=x368)));

	if (t45 != 9) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x377 = INT16_MAX;
	static int64_t x378 = -1LL;
	static int32_t x379 = -1;
	static volatile int32_t t46 = -3428;

	t46 = (x377<<(x378&(x379<=x380)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x389 = INT32_MAX;
	static int32_t x391 = INT32_MIN;
	static volatile int32_t x392 = -1652100;
	int32_t t47 = INT32_MAX;

	t47 = (x389<<(x390&(x391<=x392)));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x393 = 12974139U;
	int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	volatile int8_t x396 = INT8_MIN;
	static volatile uint32_t t48 = 16080159U;

	t48 = (x393<<(x394&(x395<=x396)));

	if (t48 != 25948278U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x402 = -512;
	int64_t x403 = INT64_MIN;
	static int8_t x404 = INT8_MAX;

	t49 = (x401<<(x402&(x403<=x404)));

	if (t49 != 36U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x409 = 19;
	volatile int32_t x410 = INT32_MAX;
	volatile int64_t x411 = -1LL;
	uint16_t x412 = 6U;
	volatile int32_t t50 = -10855131;

	t50 = (x409<<(x410&(x411<=x412)));

	if (t50 != 38) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x413 = 7;

	t51 = (x413<<(x414&(x415<=x416)));

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x426 = 1977U;
	uint64_t x427 = 4786167899411009991LLU;
	static uint16_t x428 = 879U;
	volatile int32_t t52 = 1405;

	t52 = (x425<<(x426&(x427<=x428)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x437 = 31;
	int8_t x438 = INT8_MIN;
	static uint32_t x439 = UINT32_MAX;
	static int8_t x440 = INT8_MIN;
	int32_t t53 = -532938659;

	t53 = (x437<<(x438&(x439<=x440)));

	if (t53 != 31) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x441 = 0;
	static int64_t x442 = INT64_MAX;
	int16_t x443 = 6330;
	volatile uint64_t x444 = 1449595LLU;

	t54 = (x441<<(x442&(x443<=x444)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x453 = 353735U;
	static volatile uint64_t x454 = 36967246LLU;
	int8_t x455 = -1;
	int32_t x456 = INT32_MAX;
	volatile uint32_t t55 = 7224665U;

	t55 = (x453<<(x454&(x455<=x456)));

	if (t55 != 353735U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x459 = INT16_MIN;
	volatile uint64_t t56 = 25640LLU;

	t56 = (x457<<(x458&(x459<=x460)));

	if (t56 != 14292LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x465 = UINT8_MAX;
	int64_t x466 = -1LL;
	uint8_t x467 = 1U;
	uint64_t x468 = 18885085LLU;
	int32_t t57 = -22;

	t57 = (x465<<(x466&(x467<=x468)));

	if (t57 != 510) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x474 = INT32_MIN;
	uint16_t x476 = 1U;
	volatile int32_t t58 = -1041971252;

	t58 = (x473<<(x474&(x475<=x476)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x477 = 1625;
	volatile uint32_t x479 = UINT32_MAX;
	int32_t x480 = INT32_MAX;
	volatile int32_t t59 = 15622;

	t59 = (x477<<(x478&(x479<=x480)));

	if (t59 != 1625) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x497 = 0U;
	static int16_t x499 = INT16_MIN;
	volatile uint64_t x500 = 1188168982LLU;
	int32_t t60 = -1115;

	t60 = (x497<<(x498&(x499<=x500)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x501 = 9334LLU;
	int64_t x502 = INT64_MIN;
	int16_t x503 = INT16_MIN;
	volatile uint64_t t61 = 75911372933482904LLU;

	t61 = (x501<<(x502&(x503<=x504)));

	if (t61 != 9334LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x517 = UINT16_MAX;
	int16_t x518 = INT16_MIN;
	uint32_t x519 = 1072U;
	int16_t x520 = INT16_MIN;
	int32_t t62 = -1992874;

	t62 = (x517<<(x518&(x519<=x520)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x521 = INT8_MAX;
	volatile int16_t x522 = 1;
	int8_t x523 = INT8_MIN;
	volatile int32_t t63 = -712;

	t63 = (x521<<(x522&(x523<=x524)));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x525 = 6192U;
	volatile int16_t x526 = 1300;
	volatile uint64_t x527 = UINT64_MAX;
	volatile uint8_t x528 = UINT8_MAX;
	volatile int32_t t64 = -18721;

	t64 = (x525<<(x526&(x527<=x528)));

	if (t64 != 6192) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x529 = 24071224668LLU;
	uint8_t x530 = 63U;
	volatile int16_t x531 = -1147;
	int16_t x532 = INT16_MIN;
	uint64_t t65 = 21600799774LLU;

	t65 = (x529<<(x530&(x531<=x532)));

	if (t65 != 24071224668LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x533 = UINT64_MAX;
	static uint8_t x534 = 1U;
	int32_t x535 = 30181580;
	int64_t x536 = INT64_MIN;
	uint64_t t66 = UINT64_MAX;

	t66 = (x533<<(x534&(x535<=x536)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x541 = INT16_MAX;
	int64_t x542 = -1LL;
	int32_t x544 = -1;
	volatile int32_t t67 = -3814;

	t67 = (x541<<(x542&(x543<=x544)));

	if (t67 != 65534) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x545 = 1U;
	int8_t x546 = INT8_MIN;
	uint32_t x547 = UINT32_MAX;
	int32_t x548 = INT32_MIN;

	t68 = (x545<<(x546&(x547<=x548)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x549 = 468;
	int32_t x550 = INT32_MAX;
	int64_t x551 = -85923322185LL;
	int64_t x552 = INT64_MIN;
	volatile int32_t t69 = 626409;

	t69 = (x549<<(x550&(x551<=x552)));

	if (t69 != 468) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x553 = 858024413U;
	int8_t x554 = INT8_MIN;
	static int64_t x555 = INT64_MIN;
	uint32_t t70 = 1639635053U;

	t70 = (x553<<(x554&(x555<=x556)));

	if (t70 != 858024413U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x561 = 200U;
	int8_t x562 = INT8_MIN;
	int64_t x563 = INT64_MIN;
	static volatile int32_t t71 = 546;

	t71 = (x561<<(x562&(x563<=x564)));

	if (t71 != 200) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x569 = UINT32_MAX;
	int8_t x570 = -1;
	int16_t x571 = INT16_MIN;
	volatile uint64_t x572 = 2066788945526LLU;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x569<<(x570&(x571<=x572)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x573 = INT16_MAX;
	static int8_t x574 = INT8_MIN;
	int64_t x575 = -1LL;
	uint32_t x576 = 1446U;
	int32_t t73 = 58326;

	t73 = (x573<<(x574&(x575<=x576)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x589 = 361U;
	int64_t x590 = INT64_MIN;
	int32_t x591 = -1;

	t74 = (x589<<(x590&(x591<=x592)));

	if (t74 != 361U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x598 = INT64_MAX;
	uint32_t x599 = 1692584U;
	int32_t x600 = INT32_MAX;
	static volatile int32_t t75 = 103752921;

	t75 = (x597<<(x598&(x599<=x600)));

	if (t75 != 131070) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x601 = 940791258LL;
	int32_t x602 = INT32_MIN;
	int16_t x603 = INT16_MIN;
	volatile uint16_t x604 = 875U;
	static volatile int64_t t76 = 3481795819526072481LL;

	t76 = (x601<<(x602&(x603<=x604)));

	if (t76 != 940791258LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x609 = UINT8_MAX;
	uint32_t x610 = UINT32_MAX;
	int16_t x611 = INT16_MAX;
	volatile uint16_t x612 = UINT16_MAX;
	int32_t t77 = -3560;

	t77 = (x609<<(x610&(x611<=x612)));

	if (t77 != 510) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x617 = INT64_MAX;
	int32_t x618 = -91013;
	int64_t x619 = INT64_MAX;
	volatile uint8_t x620 = 1U;
	int64_t t78 = INT64_MAX;

	t78 = (x617<<(x618&(x619<=x620)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x625 = INT8_MAX;
	volatile int8_t x626 = INT8_MAX;
	uint32_t x627 = UINT32_MAX;

	t79 = (x625<<(x626&(x627<=x628)));

	if (t79 != 254) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x633 = 65223U;
	uint8_t x634 = 1U;
	int8_t x635 = -1;
	uint32_t x636 = 107151U;
	volatile uint32_t t80 = 94562032U;

	t80 = (x633<<(x634&(x635<=x636)));

	if (t80 != 65223U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x638 = 546172597U;
	volatile int8_t x639 = INT8_MAX;
	volatile int64_t x640 = INT64_MIN;
	int32_t t81 = -17851910;

	t81 = (x637<<(x638&(x639<=x640)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x641 = 3U;
	static int16_t x642 = 1;
	uint8_t x643 = UINT8_MAX;
	int32_t t82 = 182386;

	t82 = (x641<<(x642&(x643<=x644)));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x650 = -1LL;
	int8_t x652 = 7;
	int32_t t83 = -8;

	t83 = (x649<<(x650&(x651<=x652)));

	if (t83 != 53) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x661 = 9U;
	volatile uint16_t x662 = 5374U;
	static volatile int64_t x663 = INT64_MAX;
	static uint64_t x664 = UINT64_MAX;
	int32_t t84 = -197058785;

	t84 = (x661<<(x662&(x663<=x664)));

	if (t84 != 9) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x669 = INT16_MAX;
	uint32_t x672 = 57507202U;
	int32_t t85 = -668624;

	t85 = (x669<<(x670&(x671<=x672)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x689 = 160U;
	int32_t x690 = INT32_MAX;
	uint32_t x692 = 384750032U;
	int32_t t86 = -863648284;

	t86 = (x689<<(x690&(x691<=x692)));

	if (t86 != 160) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x693 = 20;
	static volatile int32_t t87 = -24;

	t87 = (x693<<(x694&(x695<=x696)));

	if (t87 != 20) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x701 = UINT16_MAX;
	volatile int8_t x703 = INT8_MIN;
	static int64_t x704 = -25995LL;
	volatile int32_t t88 = -767229908;

	t88 = (x701<<(x702&(x703<=x704)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x706 = -15352LL;
	static int64_t x707 = INT64_MAX;
	int16_t x708 = 0;
	static int32_t t89 = 80;

	t89 = (x705<<(x706&(x707<=x708)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x709 = 117U;
	uint8_t x710 = 0U;
	volatile int64_t x711 = -1LL;
	int8_t x712 = 1;
	int32_t t90 = -2;

	t90 = (x709<<(x710&(x711<=x712)));

	if (t90 != 117) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x714 = INT8_MIN;
	int32_t t91 = 29;

	t91 = (x713<<(x714&(x715<=x716)));

	if (t91 != 13) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x718 = INT16_MIN;
	uint16_t x719 = UINT16_MAX;
	int32_t x720 = -1;
	static volatile uint32_t t92 = 6893246U;

	t92 = (x717<<(x718&(x719<=x720)));

	if (t92 != 5U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x721 = 1994LLU;
	int32_t x722 = INT32_MAX;
	int64_t x723 = INT64_MIN;
	static uint64_t t93 = 1025636635383LLU;

	t93 = (x721<<(x722&(x723<=x724)));

	if (t93 != 3988LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x725 = UINT32_MAX;
	int32_t x726 = INT32_MIN;
	static uint32_t x727 = UINT32_MAX;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (x725<<(x726&(x727<=x728)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x753 = UINT64_MAX;
	static int8_t x754 = -1;
	static int16_t x755 = INT16_MAX;
	volatile int64_t x756 = 62317925LL;
	uint64_t t95 = 60878LLU;

	t95 = (x753<<(x754&(x755<=x756)));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x757 = 2U;
	int64_t x758 = -185928674987LL;
	int16_t x759 = -1;
	int64_t x760 = INT64_MIN;
	static int32_t t96 = -1252;

	t96 = (x757<<(x758&(x759<=x760)));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x765 = 11U;
	static int32_t x767 = -55;
	int16_t x768 = INT16_MAX;
	static int32_t t97 = -271;

	t97 = (x765<<(x766&(x767<=x768)));

	if (t97 != 11) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x773 = INT64_MAX;
	static int8_t x775 = 42;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x773<<(x774&(x775<=x776)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x777 = 81086;
	static int64_t x778 = -1LL;
	volatile int64_t x779 = INT64_MAX;
	uint32_t x780 = 130679U;
	int32_t t99 = 1;

	t99 = (x777<<(x778&(x779<=x780)));

	if (t99 != 81086) { NG(); } else { ; }
	
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

