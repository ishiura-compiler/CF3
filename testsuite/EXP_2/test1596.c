#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = UINT64_MAX;
int32_t t1 = 89545;
static int32_t x25 = INT32_MAX;
static volatile int32_t t2 = 5982;
int32_t x54 = INT32_MAX;
static uint64_t x69 = 1608LLU;
int16_t x74 = -1;
int32_t t9 = -4;
static int64_t x86 = -1LL;
int64_t x87 = -5LL;
int64_t x97 = 269LL;
int8_t x101 = 1;
uint64_t x113 = UINT64_MAX;
uint64_t x116 = UINT64_MAX;
int16_t x145 = 1837;
int32_t x158 = INT32_MIN;
volatile uint8_t x181 = 7U;
volatile uint8_t x183 = UINT8_MAX;
int8_t x204 = INT8_MIN;
static int32_t x209 = 1066643784;
int8_t x210 = INT8_MIN;
int32_t t24 = -231286873;
uint64_t x220 = UINT64_MAX;
volatile int32_t t26 = 284221346;
int32_t x242 = 147391444;
int32_t x244 = INT32_MAX;
int16_t x257 = INT16_MAX;
static int32_t t32 = -1264199;
static int32_t x303 = INT32_MAX;
static volatile int16_t x318 = INT16_MIN;
int16_t x320 = INT16_MIN;
uint64_t x328 = 3146841641637LLU;
static volatile int8_t x336 = 1;
uint8_t x342 = 6U;
uint16_t x349 = 128U;
static volatile uint64_t x366 = UINT64_MAX;
int32_t x368 = -1716;
int64_t x376 = INT64_MAX;
uint16_t x379 = 435U;
static uint32_t x381 = 118507U;
int16_t x384 = INT16_MIN;
int32_t x392 = INT32_MIN;
volatile int8_t x394 = 0;
int32_t x405 = 400;
static uint64_t x419 = 1430075553297951LLU;
int64_t x427 = INT64_MIN;
volatile int32_t x431 = INT32_MIN;
int32_t t57 = 11310543;
uint32_t x445 = 61U;
int16_t x463 = INT16_MIN;
volatile int64_t x474 = -2082LL;
static int32_t x476 = INT32_MIN;
volatile uint32_t x477 = 12303955U;
int8_t x480 = INT8_MIN;
volatile int16_t x491 = -1;
volatile int32_t t64 = 0;
static uint64_t x512 = UINT64_MAX;
volatile int32_t t67 = -51;
volatile uint32_t x513 = 15950U;
uint64_t x521 = 2089141584559LLU;
static volatile int8_t x533 = 1;
int64_t x534 = INT64_MIN;
volatile int32_t t76 = -114225;
uint8_t x593 = UINT8_MAX;
int16_t x596 = INT16_MIN;
uint8_t x621 = 5U;
int16_t x624 = INT16_MIN;
volatile int32_t t83 = -63922538;
static int8_t x631 = 0;
volatile int32_t t85 = -454;
volatile uint64_t x649 = 16110875218LLU;
uint16_t x661 = 211U;
int64_t x662 = 163778215109985716LL;
volatile uint8_t x668 = UINT8_MAX;
uint64_t x669 = UINT64_MAX;
static int8_t x673 = 1;
static uint16_t x678 = 3730U;
static int32_t t96 = -41858109;
static int8_t x694 = INT8_MIN;
volatile int16_t x700 = INT16_MAX;


void f0(void) {
	int64_t x5 = INT64_MAX;
	static uint8_t x6 = 2U;
	int8_t x7 = -1;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t0 = 135;

	t0 = ((x5<<(x6<=x7))<=x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 0U;
	static int8_t x11 = INT8_MAX;
	int8_t x12 = INT8_MIN;

	t1 = ((x9<<(x10<=x11))<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x26 = 89846143LLU;
	static uint16_t x27 = 2542U;
	uint32_t x28 = 1582338U;

	t2 = ((x25<<(x26<=x27))<=x28);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t3 = 30;

	t3 = ((x29<<(x30<=x31))<=x32);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = 6;
	int32_t x38 = INT32_MAX;
	int8_t x39 = 13;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t4 = -3565811;

	t4 = ((x37<<(x38<=x39))<=x40);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x45 = 5U;
	volatile int16_t x46 = -22;
	uint8_t x47 = 48U;
	int64_t x48 = -4951LL;
	static volatile int32_t t5 = 7463;

	t5 = ((x45<<(x46<=x47))<=x48);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x49 = UINT64_MAX;
	uint64_t x50 = UINT64_MAX;
	volatile int16_t x51 = INT16_MIN;
	volatile int8_t x52 = INT8_MAX;
	volatile int32_t t6 = -272108006;

	t6 = ((x49<<(x50<=x51))<=x52);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x53 = 0U;
	uint32_t x55 = 19U;
	int64_t x56 = INT64_MAX;
	int32_t t7 = 6;

	t7 = ((x53<<(x54<=x55))<=x56);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x70 = 394U;
	uint32_t x71 = UINT32_MAX;
	static volatile uint16_t x72 = 9U;
	volatile int32_t t8 = -1;

	t8 = ((x69<<(x70<=x71))<=x72);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x73 = 24;
	int64_t x75 = INT64_MAX;
	volatile int8_t x76 = -3;

	t9 = ((x73<<(x74<=x75))<=x76);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x85 = 20U;
	int64_t x88 = -1LL;
	int32_t t10 = -18065460;

	t10 = ((x85<<(x86<=x87))<=x88);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x98 = -1;
	int32_t x99 = INT32_MIN;
	int16_t x100 = -1;
	volatile int32_t t11 = 1339;

	t11 = ((x97<<(x98<=x99))<=x100);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x102 = -73;
	uint8_t x103 = 3U;
	int64_t x104 = -3LL;
	volatile int32_t t12 = -232538825;

	t12 = ((x101<<(x102<=x103))<=x104);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x114 = 0;
	static int16_t x115 = INT16_MIN;
	volatile int32_t t13 = -191713895;

	t13 = ((x113<<(x114<=x115))<=x116);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x117 = UINT8_MAX;
	volatile int32_t x118 = -23016942;
	static int16_t x119 = 0;
	uint8_t x120 = 2U;
	volatile int32_t t14 = -218;

	t14 = ((x117<<(x118<=x119))<=x120);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x129 = UINT16_MAX;
	int64_t x130 = INT64_MIN;
	static int16_t x131 = INT16_MAX;
	static int8_t x132 = INT8_MIN;
	int32_t t15 = -325957164;

	t15 = ((x129<<(x130<=x131))<=x132);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	static int64_t x148 = INT64_MAX;
	volatile int32_t t16 = 1760;

	t16 = ((x145<<(x146<=x147))<=x148);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x149 = 34129414956LLU;
	int32_t x150 = -1;
	volatile int32_t x151 = -1;
	int16_t x152 = -1;
	int32_t t17 = 19757653;

	t17 = ((x149<<(x150<=x151))<=x152);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x157 = 775368132549289408LLU;
	uint32_t x159 = UINT32_MAX;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t18 = -295418;

	t18 = ((x157<<(x158<=x159))<=x160);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x161 = INT64_MAX;
	uint64_t x162 = 853655552LLU;
	uint8_t x163 = 1U;
	int8_t x164 = INT8_MIN;
	static int32_t t19 = 324108;

	t19 = ((x161<<(x162<=x163))<=x164);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x182 = INT16_MIN;
	uint16_t x184 = 71U;
	static int32_t t20 = -62;

	t20 = ((x181<<(x182<=x183))<=x184);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x185 = INT8_MAX;
	static int32_t x186 = -1;
	int8_t x187 = INT8_MIN;
	static int16_t x188 = INT16_MIN;
	int32_t t21 = -772433;

	t21 = ((x185<<(x186<=x187))<=x188);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x197 = 1U;
	int64_t x198 = -1239192572401962LL;
	int32_t x199 = 11;
	int16_t x200 = -24;
	volatile int32_t t22 = 972;

	t22 = ((x197<<(x198<=x199))<=x200);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x201 = UINT16_MAX;
	int8_t x202 = 63;
	int8_t x203 = INT8_MIN;
	int32_t t23 = 197;

	t23 = ((x201<<(x202<=x203))<=x204);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MIN;

	t24 = ((x209<<(x210<=x211))<=x212);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x217 = 2U;
	uint16_t x218 = UINT16_MAX;
	int8_t x219 = 29;
	int32_t t25 = -37492;

	t25 = ((x217<<(x218<=x219))<=x220);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x221 = 8699;
	uint16_t x222 = UINT16_MAX;
	volatile uint32_t x223 = UINT32_MAX;
	volatile int64_t x224 = -1LL;

	t26 = ((x221<<(x222<=x223))<=x224);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x233 = 976889;
	int64_t x234 = INT64_MIN;
	static volatile int8_t x235 = INT8_MIN;
	uint64_t x236 = UINT64_MAX;
	int32_t t27 = 542034697;

	t27 = ((x233<<(x234<=x235))<=x236);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x237 = 40;
	int64_t x238 = -1LL;
	static uint8_t x239 = 0U;
	int16_t x240 = 6;
	int32_t t28 = 22;

	t28 = ((x237<<(x238<=x239))<=x240);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x241 = INT64_MAX;
	uint8_t x243 = UINT8_MAX;
	int32_t t29 = 3261019;

	t29 = ((x241<<(x242<=x243))<=x244);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x253 = 3;
	int16_t x254 = 395;
	uint16_t x255 = UINT16_MAX;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t30 = 25;

	t30 = ((x253<<(x254<=x255))<=x256);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x258 = 1;
	int8_t x259 = INT8_MAX;
	uint32_t x260 = 5642355U;
	volatile int32_t t31 = 0;

	t31 = ((x257<<(x258<=x259))<=x260);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x265 = 598812959U;
	uint32_t x266 = 943649U;
	int64_t x267 = INT64_MIN;
	uint16_t x268 = 1U;

	t32 = ((x265<<(x266<=x267))<=x268);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x293 = 15U;
	uint32_t x294 = 3984U;
	uint32_t x295 = 2U;
	uint16_t x296 = 1438U;
	int32_t t33 = 25684;

	t33 = ((x293<<(x294<=x295))<=x296);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x301 = UINT32_MAX;
	int64_t x302 = INT64_MIN;
	int16_t x304 = 6;
	volatile int32_t t34 = 154288;

	t34 = ((x301<<(x302<=x303))<=x304);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x309 = 1983238877LL;
	int64_t x310 = -7900277815232LL;
	int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MAX;
	volatile int32_t t35 = -75;

	t35 = ((x309<<(x310<=x311))<=x312);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x313 = 1;
	static int32_t x314 = INT32_MIN;
	uint16_t x315 = 6U;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t36 = -17746734;

	t36 = ((x313<<(x314<=x315))<=x316);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x317 = 4279655625266LLU;
	uint8_t x319 = 1U;
	int32_t t37 = 2155;

	t37 = ((x317<<(x318<=x319))<=x320);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x321 = 52U;
	uint64_t x322 = 1515335235LLU;
	int8_t x323 = -2;
	int32_t x324 = INT32_MIN;
	int32_t t38 = 1;

	t38 = ((x321<<(x322<=x323))<=x324);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x325 = INT8_MAX;
	volatile int8_t x326 = INT8_MIN;
	uint32_t x327 = 81601U;
	volatile int32_t t39 = 296;

	t39 = ((x325<<(x326<=x327))<=x328);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x329 = UINT16_MAX;
	int32_t x330 = INT32_MIN;
	int8_t x331 = 15;
	int32_t x332 = INT32_MIN;
	volatile int32_t t40 = -3136774;

	t40 = ((x329<<(x330<=x331))<=x332);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x333 = 535326475220304775LLU;
	int16_t x334 = -103;
	uint64_t x335 = 282119LLU;
	volatile int32_t t41 = 8085;

	t41 = ((x333<<(x334<=x335))<=x336);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x341 = INT32_MAX;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	volatile int32_t t42 = 627055253;

	t42 = ((x341<<(x342<=x343))<=x344);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x350 = 124U;
	volatile uint32_t x351 = 77U;
	volatile int32_t x352 = INT32_MIN;
	int32_t t43 = 53092307;

	t43 = ((x349<<(x350<=x351))<=x352);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x353 = 14919562U;
	int16_t x354 = -92;
	int8_t x355 = 1;
	static int16_t x356 = INT16_MIN;
	int32_t t44 = 65580065;

	t44 = ((x353<<(x354<=x355))<=x356);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x357 = 12418LLU;
	int8_t x358 = INT8_MAX;
	int64_t x359 = INT64_MIN;
	int16_t x360 = -1848;
	int32_t t45 = 1780;

	t45 = ((x357<<(x358<=x359))<=x360);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x365 = 1840095722801186LL;
	int64_t x367 = INT64_MAX;
	int32_t t46 = 9271551;

	t46 = ((x365<<(x366<=x367))<=x368);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x373 = INT32_MAX;
	int8_t x374 = INT8_MIN;
	uint32_t x375 = 75230680U;
	int32_t t47 = -7;

	t47 = ((x373<<(x374<=x375))<=x376);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x377 = INT8_MAX;
	volatile int32_t x378 = -65294;
	static volatile int64_t x380 = -1LL;
	volatile int32_t t48 = -171378651;

	t48 = ((x377<<(x378<=x379))<=x380);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	volatile int32_t t49 = 30;

	t49 = ((x381<<(x382<=x383))<=x384);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x389 = 2082073544LLU;
	volatile int64_t x390 = INT64_MAX;
	uint16_t x391 = UINT16_MAX;
	volatile int32_t t50 = -18391932;

	t50 = ((x389<<(x390<=x391))<=x392);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x393 = 29;
	int64_t x395 = -31718285907135LL;
	static int8_t x396 = -1;
	volatile int32_t t51 = -46167;

	t51 = ((x393<<(x394<=x395))<=x396);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x406 = 5LL;
	uint32_t x407 = UINT32_MAX;
	volatile int8_t x408 = -1;
	int32_t t52 = -564;

	t52 = ((x405<<(x406<=x407))<=x408);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x417 = 132LLU;
	int16_t x418 = INT16_MIN;
	volatile int16_t x420 = 4973;
	static volatile int32_t t53 = 1;

	t53 = ((x417<<(x418<=x419))<=x420);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x421 = 4214;
	int32_t x422 = -2;
	uint32_t x423 = 28U;
	int64_t x424 = 12899980359LL;
	int32_t t54 = -9;

	t54 = ((x421<<(x422<=x423))<=x424);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x425 = 113U;
	int64_t x426 = INT64_MAX;
	volatile int8_t x428 = 30;
	int32_t t55 = -626734777;

	t55 = ((x425<<(x426<=x427))<=x428);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x429 = UINT16_MAX;
	int32_t x430 = 1;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t56 = -4288661;

	t56 = ((x429<<(x430<=x431))<=x432);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x437 = INT16_MAX;
	static volatile int8_t x438 = INT8_MIN;
	static uint32_t x439 = 44513U;
	uint16_t x440 = UINT16_MAX;

	t57 = ((x437<<(x438<=x439))<=x440);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x446 = INT8_MAX;
	int8_t x447 = INT8_MAX;
	static uint8_t x448 = 34U;
	int32_t t58 = -5816;

	t58 = ((x445<<(x446<=x447))<=x448);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x453 = 15986;
	uint8_t x454 = 7U;
	int32_t x455 = -12787;
	int8_t x456 = -4;
	volatile int32_t t59 = 12743;

	t59 = ((x453<<(x454<=x455))<=x456);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x461 = 49;
	uint8_t x462 = UINT8_MAX;
	int64_t x464 = -26448948583LL;
	int32_t t60 = 29;

	t60 = ((x461<<(x462<=x463))<=x464);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x465 = INT16_MAX;
	volatile int32_t x466 = -33;
	int64_t x467 = INT64_MAX;
	int64_t x468 = 30597609LL;
	int32_t t61 = 8742385;

	t61 = ((x465<<(x466<=x467))<=x468);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x473 = INT8_MAX;
	static int16_t x475 = INT16_MIN;
	volatile int32_t t62 = 1977;

	t62 = ((x473<<(x474<=x475))<=x476);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x478 = 11;
	uint32_t x479 = UINT32_MAX;
	static int32_t t63 = -114;

	t63 = ((x477<<(x478<=x479))<=x480);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x489 = 4207044U;
	volatile uint32_t x490 = UINT32_MAX;
	static int8_t x492 = INT8_MAX;

	t64 = ((x489<<(x490<=x491))<=x492);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x493 = 1LLU;
	static int16_t x494 = INT16_MIN;
	static volatile uint64_t x495 = 10LLU;
	static int16_t x496 = INT16_MIN;
	int32_t t65 = 961906008;

	t65 = ((x493<<(x494<=x495))<=x496);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x501 = 4;
	int32_t x502 = INT32_MIN;
	int16_t x503 = INT16_MIN;
	static int32_t x504 = INT32_MAX;
	int32_t t66 = 596059;

	t66 = ((x501<<(x502<=x503))<=x504);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x509 = 67U;
	static volatile int16_t x510 = INT16_MAX;
	static int8_t x511 = INT8_MIN;

	t67 = ((x509<<(x510<=x511))<=x512);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x514 = -61;
	int16_t x515 = 1;
	static uint32_t x516 = 64492U;
	volatile int32_t t68 = 0;

	t68 = ((x513<<(x514<=x515))<=x516);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x522 = INT16_MIN;
	int64_t x523 = INT64_MIN;
	int16_t x524 = INT16_MAX;
	volatile int32_t t69 = -444375;

	t69 = ((x521<<(x522<=x523))<=x524);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x525 = UINT8_MAX;
	static uint64_t x526 = 53863431655927LLU;
	uint8_t x527 = 96U;
	volatile uint8_t x528 = UINT8_MAX;
	static int32_t t70 = 1;

	t70 = ((x525<<(x526<=x527))<=x528);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x529 = INT8_MAX;
	volatile int16_t x530 = INT16_MIN;
	uint8_t x531 = 2U;
	int16_t x532 = -1;
	volatile int32_t t71 = 463198;

	t71 = ((x529<<(x530<=x531))<=x532);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x535 = INT8_MIN;
	int64_t x536 = INT64_MAX;
	volatile int32_t t72 = 98132327;

	t72 = ((x533<<(x534<=x535))<=x536);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x537 = 2480U;
	int16_t x538 = 1459;
	uint16_t x539 = 15894U;
	int8_t x540 = INT8_MIN;
	volatile int32_t t73 = 173661278;

	t73 = ((x537<<(x538<=x539))<=x540);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x549 = 913807274U;
	static volatile uint64_t x550 = 0LLU;
	uint32_t x551 = UINT32_MAX;
	volatile int8_t x552 = INT8_MIN;
	volatile int32_t t74 = -48798;

	t74 = ((x549<<(x550<=x551))<=x552);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x557 = 377115U;
	int32_t x558 = 3736;
	static uint32_t x559 = 363U;
	static volatile int8_t x560 = 39;
	static volatile int32_t t75 = -72767557;

	t75 = ((x557<<(x558<=x559))<=x560);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x561 = INT16_MAX;
	int32_t x562 = INT32_MIN;
	volatile uint32_t x563 = UINT32_MAX;
	int32_t x564 = 2;

	t76 = ((x561<<(x562<=x563))<=x564);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x565 = UINT8_MAX;
	int32_t x566 = -63589;
	int32_t x567 = -394252;
	volatile int16_t x568 = -1;
	volatile int32_t t77 = -243460;

	t77 = ((x565<<(x566<=x567))<=x568);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x569 = UINT16_MAX;
	int16_t x570 = 590;
	int16_t x571 = 7016;
	int16_t x572 = -68;
	volatile int32_t t78 = -139630180;

	t78 = ((x569<<(x570<=x571))<=x572);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x594 = 2U;
	int64_t x595 = -386073589332LL;
	volatile int32_t t79 = 973;

	t79 = ((x593<<(x594<=x595))<=x596);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x597 = INT64_MAX;
	static uint16_t x598 = 0U;
	int8_t x599 = INT8_MIN;
	volatile uint16_t x600 = 144U;
	volatile int32_t t80 = 52175;

	t80 = ((x597<<(x598<=x599))<=x600);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x601 = UINT32_MAX;
	int16_t x602 = INT16_MIN;
	int64_t x603 = -1LL;
	static volatile int16_t x604 = INT16_MIN;
	volatile int32_t t81 = -66127;

	t81 = ((x601<<(x602<=x603))<=x604);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x605 = 2U;
	int64_t x606 = -1LL;
	uint16_t x607 = 7314U;
	volatile uint16_t x608 = 40U;
	static int32_t t82 = 1522;

	t82 = ((x605<<(x606<=x607))<=x608);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x622 = 160U;
	uint64_t x623 = 22450075105930LLU;

	t83 = ((x621<<(x622<=x623))<=x624);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x625 = UINT64_MAX;
	int64_t x626 = 57075LL;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = 14;
	static int32_t t84 = 904343584;

	t84 = ((x625<<(x626<=x627))<=x628);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x629 = 3932U;
	uint16_t x630 = 111U;
	static int16_t x632 = INT16_MIN;

	t85 = ((x629<<(x630<=x631))<=x632);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x637 = 2073U;
	int16_t x638 = -1;
	static uint16_t x639 = 50U;
	int64_t x640 = -1LL;
	volatile int32_t t86 = 0;

	t86 = ((x637<<(x638<=x639))<=x640);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x641 = INT16_MAX;
	static int64_t x642 = -28891494715243LL;
	int16_t x643 = INT16_MIN;
	int64_t x644 = INT64_MIN;
	int32_t t87 = 673;

	t87 = ((x641<<(x642<=x643))<=x644);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x650 = 48;
	int32_t x651 = -27673795;
	int64_t x652 = INT64_MIN;
	int32_t t88 = 330;

	t88 = ((x649<<(x650<=x651))<=x652);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x663 = -66579791;
	uint8_t x664 = UINT8_MAX;
	volatile int32_t t89 = 3948;

	t89 = ((x661<<(x662<=x663))<=x664);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x665 = INT32_MAX;
	uint32_t x666 = UINT32_MAX;
	volatile int16_t x667 = 2;
	int32_t t90 = -68563341;

	t90 = ((x665<<(x666<=x667))<=x668);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x670 = 80U;
	volatile int64_t x671 = -1LL;
	int32_t x672 = INT32_MIN;
	static int32_t t91 = -3;

	t91 = ((x669<<(x670<=x671))<=x672);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x674 = INT64_MIN;
	volatile int8_t x675 = INT8_MIN;
	int64_t x676 = -490432421807LL;
	int32_t t92 = -840314;

	t92 = ((x673<<(x674<=x675))<=x676);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x677 = 0U;
	int16_t x679 = -1;
	int16_t x680 = INT16_MIN;
	static int32_t t93 = 58;

	t93 = ((x677<<(x678<=x679))<=x680);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x681 = INT16_MAX;
	int32_t x682 = 4314;
	volatile int16_t x683 = INT16_MAX;
	int64_t x684 = -1LL;
	static int32_t t94 = 834;

	t94 = ((x681<<(x682<=x683))<=x684);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x685 = 5645U;
	int32_t x686 = -851973;
	uint16_t x687 = 4866U;
	static int8_t x688 = -7;
	static int32_t t95 = -30640;

	t95 = ((x685<<(x686<=x687))<=x688);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x689 = INT32_MAX;
	uint8_t x690 = 0U;
	int16_t x691 = -1;
	volatile int64_t x692 = INT64_MIN;

	t96 = ((x689<<(x690<=x691))<=x692);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x693 = 53;
	volatile int16_t x695 = 0;
	static int16_t x696 = -1;
	int32_t t97 = -3424527;

	t97 = ((x693<<(x694<=x695))<=x696);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x697 = INT64_MAX;
	uint8_t x698 = 8U;
	int8_t x699 = INT8_MIN;
	volatile int32_t t98 = -104171673;

	t98 = ((x697<<(x698<=x699))<=x700);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x701 = UINT8_MAX;
	uint32_t x702 = 2U;
	int64_t x703 = -1LL;
	uint16_t x704 = 22U;
	int32_t t99 = 16977;

	t99 = ((x701<<(x702<=x703))<=x704);

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

