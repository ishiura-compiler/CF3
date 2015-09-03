#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x5 = 88565U;
uint64_t x9 = 49180082855372999LLU;
static int8_t x10 = INT8_MIN;
static volatile int32_t x11 = 84505066;
static volatile int8_t x31 = -1;
static int16_t x53 = 1210;
static uint32_t x56 = 178983979U;
static int16_t x58 = -1;
volatile int16_t x59 = INT16_MAX;
int64_t x68 = -43914LL;
int32_t x75 = -3;
static int64_t x76 = -4685353LL;
int8_t x79 = -1;
uint64_t t10 = 132804124221LLU;
volatile int16_t x83 = 12453;
static volatile uint32_t t12 = 75U;
uint16_t x93 = 2U;
int32_t x94 = INT32_MIN;
int32_t t13 = -113482380;
volatile int32_t t14 = 469645;
volatile int32_t x113 = 2716287;
static volatile int32_t t15 = 1;
int32_t x121 = INT32_MAX;
int8_t x122 = 2;
int32_t t16 = -3;
uint64_t x137 = 253480726528461210LLU;
int32_t x142 = -1;
volatile int32_t x144 = -9;
uint32_t x146 = 7U;
uint16_t x154 = UINT16_MAX;
volatile int64_t t21 = -177990430194076414LL;
volatile int8_t x176 = INT8_MIN;
volatile int64_t x196 = 483426666LL;
static int64_t t25 = 3427679LL;
uint16_t x198 = UINT16_MAX;
int32_t t28 = -2058208;
uint32_t x210 = UINT32_MAX;
volatile int32_t x217 = INT32_MAX;
static volatile int64_t t31 = 26262928561799200LL;
int8_t x224 = INT8_MAX;
int16_t x238 = -22;
volatile uint64_t t34 = 230498053LLU;
int16_t x245 = INT16_MAX;
int8_t x258 = INT8_MIN;
uint64_t x262 = 231395600034407LLU;
volatile uint64_t t37 = 7495554008LLU;
static uint32_t x265 = UINT32_MAX;
uint16_t x282 = 7U;
int64_t t41 = -15LL;
static uint64_t x298 = 217LLU;
int16_t x300 = -1;
static int64_t x301 = INT64_MAX;
int8_t x304 = INT8_MIN;
volatile int8_t x309 = 25;
volatile int32_t x310 = -1;
static int16_t x312 = 13634;
int16_t x314 = INT16_MIN;
uint16_t x316 = 2355U;
uint64_t t46 = 54881315110LLU;
int16_t x354 = INT16_MIN;
static int16_t x364 = INT16_MAX;
uint64_t t50 = 126LLU;
volatile int16_t x371 = INT16_MAX;
int32_t t52 = -87971235;
int16_t x378 = INT16_MAX;
int32_t x382 = INT32_MAX;
volatile int8_t x384 = -13;
static int32_t t54 = 110;
static int64_t x385 = 4333808LL;
static volatile uint32_t x396 = UINT32_MAX;
volatile uint16_t x398 = 6545U;
volatile int32_t t57 = -67;
uint64_t x409 = UINT64_MAX;
int64_t x410 = INT64_MAX;
int8_t x411 = 49;
int32_t x436 = -83921;
volatile uint16_t x441 = UINT16_MAX;
uint16_t x444 = UINT16_MAX;
int64_t x445 = 7388928974891221LL;
volatile int64_t t62 = -3009922241LL;
uint32_t x453 = 33088419U;
int16_t x459 = INT16_MIN;
volatile int32_t t64 = -127410675;
int32_t x474 = INT32_MIN;
uint32_t x476 = 2000394985U;
volatile uint8_t x485 = UINT8_MAX;
int16_t x489 = 11149;
uint64_t x490 = 3375201LLU;
static volatile int64_t x491 = INT64_MIN;
static int32_t x501 = INT32_MAX;
static uint64_t x522 = 2663149LLU;
int16_t x524 = 1;
volatile uint64_t t71 = 130995348LLU;
static uint32_t t73 = 123302232U;
int64_t x546 = INT64_MAX;
int8_t x547 = INT8_MAX;
volatile uint8_t x553 = 11U;
volatile int32_t t77 = -6322541;
static int8_t x584 = INT8_MIN;
volatile int16_t x590 = 651;
int16_t x592 = -1;
int8_t x614 = INT8_MAX;
static int64_t x635 = INT64_MIN;
uint16_t x644 = 19581U;
int32_t x661 = 92192;
uint16_t x673 = 1539U;
int8_t x681 = 0;
int32_t x683 = INT32_MAX;
int32_t t93 = -891993748;
int8_t x687 = INT8_MAX;
static int64_t x688 = -424561120888509LL;
int64_t t94 = 228015667826042319LL;
int8_t x691 = INT8_MIN;
int32_t t95 = -55670;
static int8_t x700 = INT8_MIN;
int16_t x717 = INT16_MAX;


void f0(void) {
	volatile int64_t x6 = INT64_MIN;
	int8_t x7 = INT8_MIN;
	int16_t x8 = -8;
	uint32_t t0 = 20554628U;

	t0 = ((x5>>(x6<=x7))/x8);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x12 = UINT16_MAX;
	static uint64_t t1 = 130LLU;

	t1 = ((x9>>(x10<=x11))/x12);

	if (t1 != 375219980585LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x29 = 1;
	volatile uint32_t x30 = 251261U;
	static int8_t x32 = 2;
	static int32_t t2 = -447122241;

	t2 = ((x29>>(x30<=x31))/x32);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x37 = 209226;
	int64_t x38 = -1LL;
	uint16_t x39 = 31U;
	uint8_t x40 = UINT8_MAX;
	int32_t t3 = -2599915;

	t3 = ((x37>>(x38<=x39))/x40);

	if (t3 != 410) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x41 = INT32_MAX;
	int8_t x42 = 1;
	int64_t x43 = -1LL;
	int8_t x44 = INT8_MIN;
	volatile int32_t t4 = 1;

	t4 = ((x41>>(x42<=x43))/x44);

	if (t4 != -16777215) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x45 = 1147796703111887708LL;
	static int64_t x46 = INT64_MAX;
	int16_t x47 = 137;
	volatile int64_t x48 = INT64_MIN;
	static int64_t t5 = 266212937928452743LL;

	t5 = ((x45>>(x46<=x47))/x48);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x54 = 13528258U;
	int32_t x55 = INT32_MAX;
	uint32_t t6 = 7346497U;

	t6 = ((x53>>(x54<=x55))/x56);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x57 = UINT8_MAX;
	int32_t x60 = 93777;
	static volatile int32_t t7 = 6;

	t7 = ((x57>>(x58<=x59))/x60);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = 894;
	int64_t x66 = 28196162LL;
	volatile int8_t x67 = -3;
	volatile int64_t t8 = 100855256115518100LL;

	t8 = ((x65>>(x66<=x67))/x68);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x73 = 237;
	uint8_t x74 = 3U;
	int64_t t9 = -4LL;

	t9 = ((x73>>(x74<=x75))/x76);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x77 = UINT64_MAX;
	static int64_t x78 = 6719LL;
	int8_t x80 = INT8_MAX;

	t10 = ((x77>>(x78<=x79))/x80);

	if (t10 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x81 = 485U;
	volatile uint32_t x82 = UINT32_MAX;
	int32_t x84 = -1;
	volatile int32_t t11 = 265270544;

	t11 = ((x81>>(x82<=x83))/x84);

	if (t11 != -485) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x89 = UINT32_MAX;
	uint8_t x90 = UINT8_MAX;
	uint32_t x91 = 6849U;
	int8_t x92 = -3;

	t12 = ((x89>>(x90<=x91))/x92);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x95 = 212;
	uint16_t x96 = UINT16_MAX;

	t13 = ((x93>>(x94<=x95))/x96);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x105 = INT8_MAX;
	static int32_t x106 = -1;
	volatile uint8_t x107 = 71U;
	int32_t x108 = -1615;

	t14 = ((x105>>(x106<=x107))/x108);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MIN;
	volatile int8_t x116 = INT8_MIN;

	t15 = ((x113>>(x114<=x115))/x116);

	if (t15 != -10610) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x123 = UINT16_MAX;
	static volatile int16_t x124 = INT16_MAX;

	t16 = ((x121>>(x122<=x123))/x124);

	if (t16 != 32769) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x138 = 52696LL;
	volatile int64_t x139 = INT64_MIN;
	static int64_t x140 = INT64_MIN;
	static uint64_t t17 = 329555302643598576LLU;

	t17 = ((x137>>(x138<=x139))/x140);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x141 = 1275LLU;
	uint32_t x143 = 186251484U;
	volatile uint64_t t18 = 1230548073755LLU;

	t18 = ((x141>>(x142<=x143))/x144);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x145 = INT64_MAX;
	int32_t x147 = INT32_MIN;
	volatile uint32_t x148 = 1U;
	volatile int64_t t19 = -125LL;

	t19 = ((x145>>(x146<=x147))/x148);

	if (t19 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x153 = 13940U;
	int32_t x155 = INT32_MIN;
	volatile int16_t x156 = -3;
	static uint32_t t20 = 11U;

	t20 = ((x153>>(x154<=x155))/x156);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x165 = INT8_MAX;
	uint16_t x166 = 2U;
	volatile int8_t x167 = 1;
	int64_t x168 = INT64_MIN;

	t21 = ((x165>>(x166<=x167))/x168);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x169 = 24U;
	uint32_t x170 = 317U;
	int16_t x171 = -1;
	volatile uint16_t x172 = 46U;
	volatile int32_t t22 = 1;

	t22 = ((x169>>(x170<=x171))/x172);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x173 = INT16_MAX;
	volatile int8_t x174 = -16;
	int64_t x175 = INT64_MAX;
	int32_t t23 = -57;

	t23 = ((x173>>(x174<=x175))/x176);

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x177 = UINT64_MAX;
	int8_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	int16_t x180 = 56;
	uint64_t t24 = 2540070770962LLU;

	t24 = ((x177>>(x178<=x179))/x180);

	if (t24 != 164703072086692425LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x193 = 9711038;
	int64_t x194 = INT64_MIN;
	static int16_t x195 = -1;

	t25 = ((x193>>(x194<=x195))/x196);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x197 = 2235147;
	volatile uint8_t x199 = UINT8_MAX;
	int16_t x200 = 2422;
	int32_t t26 = 4994;

	t26 = ((x197>>(x198<=x199))/x200);

	if (t26 != 922) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x201 = 416U;
	int32_t x202 = 149597;
	uint16_t x203 = UINT16_MAX;
	static int16_t x204 = INT16_MAX;
	volatile int32_t t27 = -104141;

	t27 = ((x201>>(x202<=x203))/x204);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x205 = INT8_MAX;
	int64_t x206 = INT64_MAX;
	volatile int32_t x207 = INT32_MIN;
	static int16_t x208 = -1;

	t28 = ((x205>>(x206<=x207))/x208);

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x209 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t29 = 7;

	t29 = ((x209>>(x210<=x211))/x212);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x213 = 1U;
	volatile int32_t x214 = -113466;
	int64_t x215 = -1LL;
	uint64_t x216 = UINT64_MAX;
	static uint64_t t30 = 34802853527913LLU;

	t30 = ((x213>>(x214<=x215))/x216);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x218 = INT64_MIN;
	int64_t x219 = -675204055956128637LL;
	static int64_t x220 = -16320779667936LL;

	t31 = ((x217>>(x218<=x219))/x220);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x221 = INT8_MAX;
	static volatile uint32_t x222 = 404327464U;
	static uint32_t x223 = 44284U;
	volatile int32_t t32 = 0;

	t32 = ((x221>>(x222<=x223))/x224);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x225 = 918455731671LL;
	int64_t x226 = -1LL;
	uint32_t x227 = 125U;
	int8_t x228 = INT8_MIN;
	int64_t t33 = -52126LL;

	t33 = ((x225>>(x226<=x227))/x228);

	if (t33 != -3587717701LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x237 = UINT64_MAX;
	static int16_t x239 = INT16_MAX;
	volatile int64_t x240 = INT64_MIN;

	t34 = ((x237>>(x238<=x239))/x240);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x246 = -8267632740303LL;
	volatile int8_t x247 = INT8_MIN;
	uint64_t x248 = 2LLU;
	uint64_t t35 = 138607061089818734LLU;

	t35 = ((x245>>(x246<=x247))/x248);

	if (t35 != 8191LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x257 = 2668671U;
	int32_t x259 = 312;
	volatile int16_t x260 = -137;
	volatile uint32_t t36 = 121U;

	t36 = ((x257>>(x258<=x259))/x260);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x261 = 931422618738388LLU;
	static uint32_t x263 = UINT32_MAX;
	volatile int8_t x264 = INT8_MIN;

	t37 = ((x261>>(x262<=x263))/x264);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x266 = UINT32_MAX;
	static int64_t x267 = -3584809766976LL;
	static volatile int64_t x268 = -1LL;
	volatile int64_t t38 = -3653851273846014374LL;

	t38 = ((x265>>(x266<=x267))/x268);

	if (t38 != -4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = INT64_MIN;
	volatile int16_t x275 = INT16_MIN;
	volatile uint64_t x276 = 1552616725675LLU;
	volatile uint64_t t39 = 997LLU;

	t39 = ((x273>>(x274<=x275))/x276);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x277 = 1948;
	volatile int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	static uint16_t x280 = 85U;
	static int32_t t40 = 1;

	t40 = ((x277>>(x278<=x279))/x280);

	if (t40 != 22) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x281 = INT16_MAX;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MAX;

	t41 = ((x281>>(x282<=x283))/x284);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x297 = 13;
	uint16_t x299 = 1U;
	int32_t t42 = 3;

	t42 = ((x297>>(x298<=x299))/x300);

	if (t42 != -13) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x302 = 52U;
	volatile int32_t x303 = INT32_MAX;
	volatile int64_t t43 = -90899375LL;

	t43 = ((x301>>(x302<=x303))/x304);

	if (t43 != -36028797018963967LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x311 = 3010401U;
	int32_t t44 = 6622351;

	t44 = ((x309>>(x310<=x311))/x312);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x313 = 49U;
	int64_t x315 = INT64_MIN;
	volatile int32_t t45 = -127;

	t45 = ((x313>>(x314<=x315))/x316);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x337 = 11U;
	int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	uint64_t x340 = 1LLU;

	t46 = ((x337>>(x338<=x339))/x340);

	if (t46 != 11LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x341 = 3863U;
	uint32_t x342 = 23U;
	uint32_t x343 = 13643U;
	volatile int8_t x344 = 3;
	volatile uint32_t t47 = 156558U;

	t47 = ((x341>>(x342<=x343))/x344);

	if (t47 != 643U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x353 = 1U;
	uint8_t x355 = UINT8_MAX;
	static int16_t x356 = -1;
	static uint32_t t48 = 7798100U;

	t48 = ((x353>>(x354<=x355))/x356);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x361 = INT64_MAX;
	int8_t x362 = 0;
	static uint32_t x363 = 13729761U;
	static int64_t t49 = -256390LL;

	t49 = ((x361>>(x362<=x363))/x364);

	if (t49 != 140741783453700LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = -1;
	int64_t x367 = -1LL;
	volatile int32_t x368 = INT32_MIN;

	t50 = ((x365>>(x366<=x367))/x368);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x369 = 57003981702859LL;
	uint16_t x370 = 4U;
	int64_t x372 = INT64_MIN;
	volatile int64_t t51 = 8116LL;

	t51 = ((x369>>(x370<=x371))/x372);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x373 = 2104U;
	uint8_t x374 = 0U;
	static int16_t x375 = INT16_MIN;
	static volatile int8_t x376 = INT8_MAX;

	t52 = ((x373>>(x374<=x375))/x376);

	if (t52 != 16) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x377 = INT8_MAX;
	int64_t x379 = INT64_MIN;
	uint16_t x380 = UINT16_MAX;
	int32_t t53 = -1;

	t53 = ((x377>>(x378<=x379))/x380);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x381 = 64901672;
	int64_t x383 = INT64_MIN;

	t54 = ((x381>>(x382<=x383))/x384);

	if (t54 != -4992436) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x386 = INT8_MIN;
	static int64_t x387 = 0LL;
	volatile uint8_t x388 = 2U;
	int64_t t55 = -2319LL;

	t55 = ((x385>>(x386<=x387))/x388);

	if (t55 != 1083452LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x393 = 51U;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	static uint32_t t56 = 1460305293U;

	t56 = ((x393>>(x394<=x395))/x396);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x397 = 19U;
	static volatile int64_t x399 = -1LL;
	int32_t x400 = -1;

	t57 = ((x397>>(x398<=x399))/x400);

	if (t57 != -19) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x401 = 10649U;
	static volatile uint16_t x402 = UINT16_MAX;
	int64_t x403 = INT64_MIN;
	volatile uint8_t x404 = 80U;
	volatile int32_t t58 = -10;

	t58 = ((x401>>(x402<=x403))/x404);

	if (t58 != 133) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x412 = INT8_MAX;
	uint64_t t59 = 483257758961LLU;

	t59 = ((x409>>(x410<=x411))/x412);

	if (t59 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x433 = INT64_MAX;
	volatile int16_t x434 = INT16_MIN;
	int32_t x435 = 662;
	volatile int64_t t60 = -116700815814LL;

	t60 = ((x433>>(x434<=x435))/x436);

	if (t60 != -54952705740248LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x442 = INT32_MAX;
	uint32_t x443 = 7299U;
	int32_t t61 = -23221;

	t61 = ((x441>>(x442<=x443))/x444);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x446 = INT64_MIN;
	int8_t x447 = INT8_MIN;
	static volatile uint8_t x448 = 12U;

	t62 = ((x445>>(x446<=x447))/x448);

	if (t62 != 307872040620467LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x454 = UINT8_MAX;
	uint64_t x455 = 7804523787423704LLU;
	int64_t x456 = -1LL;
	int64_t t63 = 16068912787LL;

	t63 = ((x453>>(x454<=x455))/x456);

	if (t63 != -16544209LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x457 = 3U;
	uint8_t x458 = 8U;
	uint16_t x460 = 1U;

	t64 = ((x457>>(x458<=x459))/x460);

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x461 = UINT32_MAX;
	volatile int32_t x462 = INT32_MIN;
	volatile int8_t x463 = 27;
	int8_t x464 = INT8_MAX;
	volatile uint32_t t65 = 159372U;

	t65 = ((x461>>(x462<=x463))/x464);

	if (t65 != 16909320U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x465 = UINT8_MAX;
	int32_t x466 = -1;
	int8_t x467 = INT8_MIN;
	int64_t x468 = INT64_MIN;
	int64_t t66 = -269433503912760767LL;

	t66 = ((x465>>(x466<=x467))/x468);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x473 = UINT8_MAX;
	int32_t x475 = INT32_MAX;
	volatile uint32_t t67 = 0U;

	t67 = ((x473>>(x474<=x475))/x476);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x486 = 38U;
	static int8_t x487 = INT8_MAX;
	uint32_t x488 = UINT32_MAX;
	volatile uint32_t t68 = 145209U;

	t68 = ((x485>>(x486<=x487))/x488);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x492 = 91U;
	static int32_t t69 = 0;

	t69 = ((x489>>(x490<=x491))/x492);

	if (t69 != 61) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x502 = -1;
	static int64_t x503 = INT64_MIN;
	int16_t x504 = -1;
	int32_t t70 = -16241;

	t70 = ((x501>>(x502<=x503))/x504);

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x521 = UINT64_MAX;
	uint64_t x523 = UINT64_MAX;

	t71 = ((x521>>(x522<=x523))/x524);

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x529 = INT64_MAX;
	static int32_t x530 = -1;
	static int8_t x531 = INT8_MIN;
	int64_t x532 = INT64_MIN;
	volatile int64_t t72 = 503086089683LL;

	t72 = ((x529>>(x530<=x531))/x532);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x541 = 25;
	int64_t x542 = -1LL;
	uint8_t x543 = 3U;
	static uint32_t x544 = 1U;

	t73 = ((x541>>(x542<=x543))/x544);

	if (t73 != 12U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x545 = 209U;
	int8_t x548 = -18;
	int32_t t74 = -133667622;

	t74 = ((x545>>(x546<=x547))/x548);

	if (t74 != -11) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x554 = UINT8_MAX;
	int16_t x555 = -1;
	volatile int64_t x556 = INT64_MIN;
	static volatile int64_t t75 = -128379801491LL;

	t75 = ((x553>>(x554<=x555))/x556);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x557 = INT64_MAX;
	uint16_t x558 = UINT16_MAX;
	uint16_t x559 = 64U;
	static volatile int16_t x560 = -1;
	int64_t t76 = 19170456244335917LL;

	t76 = ((x557>>(x558<=x559))/x560);

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x565 = INT32_MAX;
	volatile int16_t x566 = -6;
	volatile uint8_t x567 = UINT8_MAX;
	int16_t x568 = 2202;

	t77 = ((x565>>(x566<=x567))/x568);

	if (t77 != 487621) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x577 = 77LLU;
	int8_t x578 = INT8_MIN;
	volatile int32_t x579 = -45487;
	uint8_t x580 = 109U;
	uint64_t t78 = 2229936189665944402LLU;

	t78 = ((x577>>(x578<=x579))/x580);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x581 = 8U;
	uint64_t x582 = UINT64_MAX;
	volatile int16_t x583 = 94;
	static int32_t t79 = 44936043;

	t79 = ((x581>>(x582<=x583))/x584);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x585 = 3310542615600548LLU;
	uint8_t x586 = 1U;
	volatile int32_t x587 = -1;
	int16_t x588 = INT16_MAX;
	volatile uint64_t t80 = 166LLU;

	t80 = ((x585>>(x586<=x587))/x588);

	if (t80 != 101032826184LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x589 = 1U;
	volatile uint16_t x591 = 3838U;
	volatile int32_t t81 = -13097957;

	t81 = ((x589>>(x590<=x591))/x592);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x593 = 23714933369LLU;
	int16_t x594 = 3;
	int32_t x595 = INT32_MIN;
	static volatile int16_t x596 = INT16_MAX;
	uint64_t t82 = 125707201LLU;

	t82 = ((x593>>(x594<=x595))/x596);

	if (t82 != 723744LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x601 = 13U;
	int32_t x602 = INT32_MAX;
	uint64_t x603 = 1980377353791514289LLU;
	volatile int64_t x604 = INT64_MIN;
	static volatile int64_t t83 = 0LL;

	t83 = ((x601>>(x602<=x603))/x604);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x609 = INT32_MAX;
	volatile uint64_t x610 = 206641767818783LLU;
	int64_t x611 = -1LL;
	volatile int64_t x612 = INT64_MIN;
	static volatile int64_t t84 = -58745LL;

	t84 = ((x609>>(x610<=x611))/x612);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x613 = UINT16_MAX;
	volatile int16_t x615 = 229;
	int64_t x616 = INT64_MAX;
	int64_t t85 = 636197403976669LL;

	t85 = ((x613>>(x614<=x615))/x616);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x633 = UINT32_MAX;
	uint32_t x634 = 737720357U;
	uint8_t x636 = 69U;
	uint32_t t86 = 1U;

	t86 = ((x633>>(x634<=x635))/x636);

	if (t86 != 62245902U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x641 = UINT64_MAX;
	uint32_t x642 = 59112U;
	volatile int16_t x643 = 3;
	uint64_t t87 = 4235958858307760502LLU;

	t87 = ((x641>>(x642<=x643))/x644);

	if (t87 != 942073646581357LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x653 = 0U;
	static volatile uint8_t x654 = 36U;
	static uint32_t x655 = UINT32_MAX;
	int64_t x656 = -2454152503181LL;
	static int64_t t88 = 197LL;

	t88 = ((x653>>(x654<=x655))/x656);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x662 = INT16_MAX;
	uint32_t x663 = 222141U;
	int32_t x664 = INT32_MIN;
	int32_t t89 = 809101232;

	t89 = ((x661>>(x662<=x663))/x664);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x669 = 69523371140591LL;
	int64_t x670 = -1LL;
	static int32_t x671 = INT32_MAX;
	volatile uint16_t x672 = UINT16_MAX;
	static volatile int64_t t90 = 121701LL;

	t90 = ((x669>>(x670<=x671))/x672);

	if (t90 != 530429321LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x674 = 56U;
	uint16_t x675 = 791U;
	int32_t x676 = 22070;
	volatile int32_t t91 = -99128;

	t91 = ((x673>>(x674<=x675))/x676);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x677 = 22;
	int64_t x678 = INT64_MIN;
	int64_t x679 = 5027LL;
	volatile int64_t x680 = INT64_MIN;
	volatile int64_t t92 = -506964LL;

	t92 = ((x677>>(x678<=x679))/x680);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x682 = UINT64_MAX;
	volatile int16_t x684 = 179;

	t93 = ((x681>>(x682<=x683))/x684);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x685 = 3668U;
	static uint64_t x686 = 13956053LLU;

	t94 = ((x685>>(x686<=x687))/x688);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x689 = UINT16_MAX;
	static int16_t x690 = -1;
	static volatile int16_t x692 = INT16_MIN;

	t95 = ((x689>>(x690<=x691))/x692);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x697 = 429;
	int32_t x698 = -1;
	int64_t x699 = INT64_MAX;
	volatile int32_t t96 = 1836;

	t96 = ((x697>>(x698<=x699))/x700);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x701 = 32723U;
	int32_t x702 = 6058601;
	int8_t x703 = 59;
	static uint32_t x704 = UINT32_MAX;
	static volatile uint32_t t97 = 24U;

	t97 = ((x701>>(x702<=x703))/x704);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x709 = INT16_MAX;
	volatile int64_t x710 = 70175155778266896LL;
	int8_t x711 = 1;
	int16_t x712 = INT16_MAX;
	volatile int32_t t98 = 27;

	t98 = ((x709>>(x710<=x711))/x712);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x718 = -1LL;
	int16_t x719 = -1;
	volatile uint8_t x720 = UINT8_MAX;
	int32_t t99 = -16090;

	t99 = ((x717>>(x718<=x719))/x720);

	if (t99 != 64) { NG(); } else { ; }
	
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

