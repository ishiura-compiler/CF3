#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 14487196U;
volatile uint32_t t0 = 11471U;
volatile uint8_t x15 = UINT8_MAX;
static int32_t x19 = INT32_MIN;
int8_t x20 = INT8_MIN;
static int32_t t2 = 3880813;
static uint16_t x34 = UINT16_MAX;
uint16_t x47 = 1317U;
uint32_t x50 = 1U;
static int16_t x52 = INT16_MAX;
volatile int32_t t7 = -2;
volatile int32_t t8 = -893583;
uint32_t x61 = 7U;
static uint64_t x74 = 262760370LLU;
volatile uint64_t t10 = 268629573650175978LLU;
int64_t x91 = 1284LL;
static volatile int8_t x94 = INT8_MIN;
int64_t x97 = INT64_MAX;
int16_t x100 = 6;
static uint32_t x101 = 1427011U;
int16_t x106 = INT16_MIN;
uint8_t x109 = 0U;
int16_t x140 = INT16_MAX;
int32_t t21 = 301;
volatile int32_t x149 = 1122;
static volatile int32_t x171 = INT32_MIN;
volatile int16_t x185 = 4396;
static int32_t x217 = 5886;
static int16_t x219 = INT16_MAX;
static int64_t x220 = INT64_MIN;
static uint8_t x236 = UINT8_MAX;
volatile uint8_t x238 = 32U;
uint16_t x253 = UINT16_MAX;
int32_t t35 = 454832646;
static int64_t x284 = -125819074661959262LL;
volatile int32_t x312 = -370;
uint32_t x317 = UINT32_MAX;
int8_t x344 = -12;
volatile int8_t x360 = INT8_MIN;
static volatile int32_t t46 = 52596;
volatile uint16_t x362 = 2U;
static volatile int64_t t48 = 1LL;
uint32_t x373 = 56364247U;
static volatile int8_t x376 = INT8_MIN;
static volatile int16_t x379 = INT16_MAX;
static volatile uint64_t t50 = 966792781965446185LLU;
uint8_t x381 = 0U;
volatile int8_t x395 = INT8_MAX;
int16_t x413 = 42;
int32_t t55 = 1020635154;
int8_t x420 = -1;
int8_t x425 = INT8_MAX;
volatile int32_t x426 = -1;
volatile uint64_t x438 = 3LLU;
int64_t x464 = INT64_MIN;
static uint32_t x472 = 723066445U;
int64_t x477 = 123049624168931LL;
volatile int32_t x479 = 5925449;
static uint16_t x485 = UINT16_MAX;
int32_t t66 = -59557;
volatile int32_t x492 = -1;
int16_t x530 = INT16_MIN;
volatile int32_t t70 = -84;
volatile uint16_t x536 = 1918U;
static uint64_t t72 = 162LLU;
int32_t x545 = INT32_MAX;
uint32_t x569 = 376559U;
uint32_t t75 = 237U;
volatile int16_t x586 = -4207;
int32_t t77 = 1;
uint64_t x592 = UINT64_MAX;
int32_t x603 = -1;
uint8_t x619 = 43U;
static int8_t x620 = INT8_MIN;
uint16_t x623 = UINT16_MAX;
volatile int16_t x629 = 25;
int32_t t85 = -4;
int32_t x652 = INT32_MAX;
int32_t t86 = -480802884;
volatile uint16_t x655 = 10305U;
volatile int32_t t90 = -507901;
uint32_t t91 = UINT32_MAX;
int16_t x703 = -1;
static volatile uint64_t t92 = 120628137395907LLU;
uint64_t x707 = UINT64_MAX;
uint32_t x716 = 246367231U;
volatile int32_t t95 = 1085390;
uint32_t x721 = 25974787U;
static int64_t x723 = -1LL;
uint32_t t96 = 14U;
volatile uint64_t x736 = 566893521913436LLU;


void f0(void) {
	uint8_t x2 = 6U;
	uint8_t x3 = UINT8_MAX;
	int16_t x4 = INT16_MIN;

	t0 = (x1>>((x2-x3)<=x4));

	if (t0 != 14487196U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	uint16_t x14 = 11182U;
	int16_t x16 = -1;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x13>>((x14-x15)<=x16));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MAX;
	int64_t x18 = -1LL;

	t2 = (x17>>((x18-x19)<=x20));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x21 = 223U;
	static int8_t x22 = INT8_MAX;
	int16_t x23 = -1;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t3 = -14680;

	t3 = (x21>>((x22-x23)<=x24));

	if (t3 != 223) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MAX;
	uint32_t x31 = 3U;
	static uint64_t x32 = 77947LLU;
	int32_t t4 = -43319;

	t4 = (x29>>((x30-x31)<=x32));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = 77U;
	static uint16_t x35 = 6083U;
	int8_t x36 = -39;
	int32_t t5 = -313615075;

	t5 = (x33>>((x34-x35)<=x36));

	if (t5 != 77) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MAX;
	volatile int8_t x46 = -1;
	uint64_t x48 = UINT64_MAX;
	int32_t t6 = 0;

	t6 = (x45>>((x46-x47)<=x48));

	if (t6 != 63) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MAX;
	static uint64_t x51 = UINT64_MAX;

	t7 = (x49>>((x50-x51)<=x52));

	if (t7 != 16383) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x57 = 22027;
	uint64_t x58 = UINT64_MAX;
	volatile int64_t x59 = 434LL;
	int32_t x60 = -20;

	t8 = (x57>>((x58-x59)<=x60));

	if (t8 != 11013) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x62 = 1;
	static volatile int16_t x63 = -29;
	static int64_t x64 = INT64_MAX;
	volatile uint32_t t9 = 14U;

	t9 = (x61>>((x62-x63)<=x64));

	if (t9 != 3U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x73 = UINT64_MAX;
	int16_t x75 = -1;
	int8_t x76 = INT8_MIN;

	t10 = (x73>>((x74-x75)<=x76));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x81 = 12U;
	volatile uint16_t x82 = 108U;
	int16_t x83 = 267;
	static volatile int32_t x84 = -7;
	int32_t t11 = -3745;

	t11 = (x81>>((x82-x83)<=x84));

	if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x89 = 27U;
	uint64_t x90 = 6LLU;
	static int8_t x92 = INT8_MIN;
	int32_t t12 = -31623;

	t12 = (x89>>((x90-x91)<=x92));

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x93 = 1458;
	uint8_t x95 = 111U;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t13 = -29509;

	t13 = (x93>>((x94-x95)<=x96));

	if (t13 != 729) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x98 = 15695LLU;
	uint16_t x99 = 4U;
	static volatile int64_t t14 = INT64_MAX;

	t14 = (x97>>((x98-x99)<=x100));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x102 = INT64_MIN;
	static int8_t x103 = INT8_MIN;
	static int16_t x104 = INT16_MAX;
	uint32_t t15 = 1789869676U;

	t15 = (x101>>((x102-x103)<=x104));

	if (t15 != 713505U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x105 = 0;
	int32_t x107 = -100;
	uint8_t x108 = 42U;
	volatile int32_t t16 = 249;

	t16 = (x105>>((x106-x107)<=x108));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x110 = UINT32_MAX;
	static volatile int8_t x111 = 11;
	static volatile int64_t x112 = INT64_MIN;
	static int32_t t17 = 12;

	t17 = (x109>>((x110-x111)<=x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x129 = UINT8_MAX;
	int64_t x130 = -449891253658367LL;
	int32_t x131 = 1036157;
	int8_t x132 = -1;
	volatile int32_t t18 = -44634;

	t18 = (x129>>((x130-x131)<=x132));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x133 = 9191918183LL;
	int32_t x134 = -54;
	uint64_t x135 = 4LLU;
	int8_t x136 = INT8_MIN;
	volatile int64_t t19 = 24993044048726396LL;

	t19 = (x133>>((x134-x135)<=x136));

	if (t19 != 9191918183LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x137 = 0U;
	int8_t x138 = -1;
	uint32_t x139 = 7744899U;
	volatile int32_t t20 = -28454325;

	t20 = (x137>>((x138-x139)<=x140));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x141 = INT8_MAX;
	uint16_t x142 = UINT16_MAX;
	uint32_t x143 = 7286U;
	int32_t x144 = INT32_MAX;

	t21 = (x141>>((x142-x143)<=x144));

	if (t21 != 63) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x145 = INT64_MAX;
	uint32_t x146 = 2664515U;
	uint8_t x147 = UINT8_MAX;
	int16_t x148 = INT16_MIN;
	volatile int64_t t22 = -3297LL;

	t22 = (x145>>((x146-x147)<=x148));

	if (t22 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x150 = -227235313;
	uint64_t x151 = 3LLU;
	static uint64_t x152 = UINT64_MAX;
	volatile int32_t t23 = -2023;

	t23 = (x149>>((x150-x151)<=x152));

	if (t23 != 561) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x169 = INT64_MAX;
	int64_t x170 = -1LL;
	uint64_t x172 = 533100181156200877LLU;
	static int64_t t24 = -6069070250LL;

	t24 = (x169>>((x170-x171)<=x172));

	if (t24 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x173 = INT32_MAX;
	int16_t x174 = -1;
	int16_t x175 = -1;
	int32_t x176 = INT32_MAX;
	volatile int32_t t25 = 27619466;

	t25 = (x173>>((x174-x175)<=x176));

	if (t25 != 1073741823) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x186 = 1823U;
	int8_t x187 = 0;
	static int8_t x188 = 16;
	volatile int32_t t26 = 1343;

	t26 = (x185>>((x186-x187)<=x188));

	if (t26 != 4396) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x189 = 4182297U;
	static uint64_t x190 = 174485681671LLU;
	uint16_t x191 = 35U;
	uint64_t x192 = 10105LLU;
	static volatile uint32_t t27 = 18U;

	t27 = (x189>>((x190-x191)<=x192));

	if (t27 != 4182297U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x205 = 6U;
	int16_t x206 = INT16_MIN;
	int64_t x207 = 13103LL;
	int8_t x208 = INT8_MIN;
	int32_t t28 = 86984;

	t28 = (x205>>((x206-x207)<=x208));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x218 = INT8_MIN;
	volatile int32_t t29 = 365661;

	t29 = (x217>>((x218-x219)<=x220));

	if (t29 != 5886) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x221 = 3U;
	uint8_t x222 = UINT8_MAX;
	int8_t x223 = 0;
	volatile int8_t x224 = INT8_MIN;
	int32_t t30 = 133;

	t30 = (x221>>((x222-x223)<=x224));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x233 = INT64_MAX;
	int64_t x234 = -208LL;
	volatile int16_t x235 = INT16_MIN;
	int64_t t31 = INT64_MAX;

	t31 = (x233>>((x234-x235)<=x236));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x237 = 3702556284245LLU;
	volatile int8_t x239 = INT8_MAX;
	int8_t x240 = INT8_MIN;
	uint64_t t32 = 682877034173625LLU;

	t32 = (x237>>((x238-x239)<=x240));

	if (t32 != 3702556284245LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x241 = 862U;
	int8_t x242 = INT8_MAX;
	volatile uint8_t x243 = 24U;
	int32_t x244 = -192077684;
	int32_t t33 = -13;

	t33 = (x241>>((x242-x243)<=x244));

	if (t33 != 862) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x245 = 1080454524954351636LLU;
	volatile int64_t x246 = -1LL;
	static int16_t x247 = INT16_MAX;
	uint32_t x248 = 794483U;
	volatile uint64_t t34 = 1184413LLU;

	t34 = (x245>>((x246-x247)<=x248));

	if (t34 != 540227262477175818LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x254 = 2507042U;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = 513586388LLU;

	t35 = (x253>>((x254-x255)<=x256));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x257 = 614U;
	volatile int16_t x258 = -1;
	static int64_t x259 = -1LL;
	uint16_t x260 = UINT16_MAX;
	volatile uint32_t t36 = 3U;

	t36 = (x257>>((x258-x259)<=x260));

	if (t36 != 307U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x261 = INT64_MAX;
	int32_t x262 = INT32_MIN;
	int16_t x263 = -59;
	volatile int32_t x264 = -1;
	int64_t t37 = 721394285475163LL;

	t37 = (x261>>((x262-x263)<=x264));

	if (t37 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x273 = 121U;
	static uint32_t x274 = 95537674U;
	static int32_t x275 = INT32_MIN;
	int32_t x276 = -1;
	volatile int32_t t38 = 199755138;

	t38 = (x273>>((x274-x275)<=x276));

	if (t38 != 60) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = -9;
	static uint32_t x283 = UINT32_MAX;
	volatile int32_t t39 = INT32_MAX;

	t39 = (x281>>((x282-x283)<=x284));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x297 = 4U;
	int64_t x298 = -56495LL;
	int64_t x299 = -1LL;
	int16_t x300 = -1;
	int32_t t40 = -5002473;

	t40 = (x297>>((x298-x299)<=x300));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x309 = 3;
	static uint64_t x310 = 15LLU;
	int64_t x311 = -1LL;
	volatile int32_t t41 = 429;

	t41 = (x309>>((x310-x311)<=x312));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x313 = UINT64_MAX;
	uint64_t x314 = 2164897305273LLU;
	uint32_t x315 = 30U;
	static uint32_t x316 = 7U;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x313>>((x314-x315)<=x316));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x318 = 1863;
	uint8_t x319 = 126U;
	int8_t x320 = INT8_MIN;
	static uint32_t t43 = UINT32_MAX;

	t43 = (x317>>((x318-x319)<=x320));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x337 = 44;
	uint16_t x338 = 287U;
	int64_t x339 = 83816LL;
	int16_t x340 = INT16_MIN;
	volatile int32_t t44 = 39;

	t44 = (x337>>((x338-x339)<=x340));

	if (t44 != 22) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x341 = INT8_MAX;
	static volatile uint64_t x342 = 3175448629182699LLU;
	uint16_t x343 = 0U;
	volatile int32_t t45 = 2840600;

	t45 = (x341>>((x342-x343)<=x344));

	if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x357 = INT32_MAX;
	uint8_t x358 = 13U;
	static uint16_t x359 = 406U;

	t46 = (x357>>((x358-x359)<=x360));

	if (t46 != 1073741823) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x361 = 17;
	static volatile int32_t x363 = INT32_MAX;
	uint8_t x364 = UINT8_MAX;
	int32_t t47 = -3;

	t47 = (x361>>((x362-x363)<=x364));

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x365 = INT64_MAX;
	int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MAX;
	int16_t x368 = -1;

	t48 = (x365>>((x366-x367)<=x368));

	if (t48 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x374 = -1;
	int64_t x375 = INT64_MAX;
	uint32_t t49 = 115213007U;

	t49 = (x373>>((x374-x375)<=x376));

	if (t49 != 28182123U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x377 = 63437LLU;
	int8_t x378 = INT8_MIN;
	static int64_t x380 = -1LL;

	t50 = (x377>>((x378-x379)<=x380));

	if (t50 != 31718LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x382 = -239202112625962LL;
	uint32_t x383 = UINT32_MAX;
	int64_t x384 = -1LL;
	static int32_t t51 = 217973;

	t51 = (x381>>((x382-x383)<=x384));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x393 = INT32_MAX;
	uint32_t x394 = 9388884U;
	static uint64_t x396 = UINT64_MAX;
	volatile int32_t t52 = -1618193;

	t52 = (x393>>((x394-x395)<=x396));

	if (t52 != 1073741823) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x397 = INT32_MAX;
	static uint32_t x398 = 608U;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = 46316977U;
	int32_t t53 = -294127;

	t53 = (x397>>((x398-x399)<=x400));

	if (t53 != 1073741823) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x405 = INT8_MAX;
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = -1;
	int16_t x408 = -2857;
	volatile int32_t t54 = -25158;

	t54 = (x405>>((x406-x407)<=x408));

	if (t54 != 63) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x414 = INT64_MIN;
	int32_t x415 = -1;
	int8_t x416 = -1;

	t55 = (x413>>((x414-x415)<=x416));

	if (t55 != 21) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x417 = 16173;
	static int16_t x418 = INT16_MAX;
	static uint64_t x419 = UINT64_MAX;
	int32_t t56 = 516151559;

	t56 = (x417>>((x418-x419)<=x420));

	if (t56 != 8086) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x421 = 9598557LLU;
	volatile int32_t x422 = 3;
	static uint8_t x423 = 92U;
	int16_t x424 = 5046;
	uint64_t t57 = 12974577348721LLU;

	t57 = (x421>>((x422-x423)<=x424));

	if (t57 != 4799278LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x427 = 134654527U;
	uint8_t x428 = 22U;
	static volatile int32_t t58 = 200789395;

	t58 = (x425>>((x426-x427)<=x428));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x437 = INT64_MAX;
	int8_t x439 = 1;
	static volatile int8_t x440 = INT8_MIN;
	volatile int64_t t59 = 38750618362LL;

	t59 = (x437>>((x438-x439)<=x440));

	if (t59 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x445 = INT16_MAX;
	static int8_t x446 = INT8_MIN;
	int16_t x447 = 4031;
	int8_t x448 = 0;
	int32_t t60 = -5801030;

	t60 = (x445>>((x446-x447)<=x448));

	if (t60 != 16383) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x457 = UINT64_MAX;
	volatile uint16_t x458 = 1U;
	uint16_t x459 = 671U;
	static uint32_t x460 = 88U;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x457>>((x458-x459)<=x460));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x461 = 19;
	static int8_t x462 = 1;
	static uint16_t x463 = UINT16_MAX;
	int32_t t62 = -157013;

	t62 = (x461>>((x462-x463)<=x464));

	if (t62 != 19) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x465 = 14U;
	int16_t x466 = -253;
	int32_t x467 = INT32_MIN;
	int16_t x468 = 2028;
	uint32_t t63 = 19520U;

	t63 = (x465>>((x466-x467)<=x468));

	if (t63 != 14U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x469 = 32U;
	int64_t x470 = -1LL;
	uint32_t x471 = UINT32_MAX;
	int32_t t64 = -904704580;

	t64 = (x469>>((x470-x471)<=x472));

	if (t64 != 16) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x478 = -8596;
	volatile int16_t x480 = -9566;
	static int64_t t65 = -326085719LL;

	t65 = (x477>>((x478-x479)<=x480));

	if (t65 != 61524812084465LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x486 = 1U;
	volatile uint16_t x487 = 225U;
	int32_t x488 = 72749912;

	t66 = (x485>>((x486-x487)<=x488));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x489 = 9239U;
	int32_t x490 = -531664996;
	static volatile uint16_t x491 = 254U;
	static int32_t t67 = 4934304;

	t67 = (x489>>((x490-x491)<=x492));

	if (t67 != 4619) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x493 = 1921536921U;
	int32_t x494 = -1;
	uint8_t x495 = 14U;
	int64_t x496 = INT64_MAX;
	static uint32_t t68 = 1U;

	t68 = (x493>>((x494-x495)<=x496));

	if (t68 != 960768460U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x509 = 42U;
	int64_t x510 = INT64_MIN;
	int16_t x511 = INT16_MIN;
	static int8_t x512 = INT8_MIN;
	int32_t t69 = 2445446;

	t69 = (x509>>((x510-x511)<=x512));

	if (t69 != 21) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x529 = 1U;
	int64_t x531 = -1LL;
	uint8_t x532 = UINT8_MAX;

	t70 = (x529>>((x530-x531)<=x532));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x533 = 75371791991321LLU;
	static uint8_t x534 = UINT8_MAX;
	volatile int32_t x535 = INT32_MAX;
	volatile uint64_t t71 = 4450680901950LLU;

	t71 = (x533>>((x534-x535)<=x536));

	if (t71 != 37685895995660LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x537 = 233333770LLU;
	int16_t x538 = INT16_MIN;
	static volatile int16_t x539 = INT16_MAX;
	int8_t x540 = INT8_MIN;

	t72 = (x537>>((x538-x539)<=x540));

	if (t72 != 116666885LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x546 = INT16_MIN;
	volatile int64_t x547 = 16308425632546939LL;
	int32_t x548 = -1;
	static int32_t t73 = 8030754;

	t73 = (x545>>((x546-x547)<=x548));

	if (t73 != 1073741823) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x557 = UINT8_MAX;
	int16_t x558 = INT16_MIN;
	int8_t x559 = INT8_MIN;
	int32_t x560 = -1;
	int32_t t74 = 124706425;

	t74 = (x557>>((x558-x559)<=x560));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x570 = INT16_MAX;
	int8_t x571 = INT8_MIN;
	int64_t x572 = 34948282512815679LL;

	t75 = (x569>>((x570-x571)<=x572));

	if (t75 != 188279U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x573 = 51U;
	int8_t x574 = INT8_MAX;
	int8_t x575 = -1;
	int32_t x576 = INT32_MIN;
	volatile uint32_t t76 = 4281U;

	t76 = (x573>>((x574-x575)<=x576));

	if (t76 != 51U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x585 = 237;
	volatile int16_t x587 = 0;
	int32_t x588 = 247;

	t77 = (x585>>((x586-x587)<=x588));

	if (t77 != 118) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x589 = UINT32_MAX;
	int64_t x590 = INT64_MAX;
	volatile int32_t x591 = INT32_MAX;
	volatile uint32_t t78 = 1250291U;

	t78 = (x589>>((x590-x591)<=x592));

	if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x597 = 28582U;
	uint64_t x598 = 873954029LLU;
	volatile uint64_t x599 = 429545647LLU;
	uint32_t x600 = UINT32_MAX;
	int32_t t79 = -922162;

	t79 = (x597>>((x598-x599)<=x600));

	if (t79 != 14291) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x601 = 0U;
	uint32_t x602 = 4U;
	static volatile int16_t x604 = 4667;
	int32_t t80 = -43020110;

	t80 = (x601>>((x602-x603)<=x604));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x613 = UINT8_MAX;
	volatile int16_t x614 = INT16_MAX;
	int32_t x615 = INT32_MAX;
	int64_t x616 = -1LL;
	volatile int32_t t81 = 6880;

	t81 = (x613>>((x614-x615)<=x616));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x617 = 2061U;
	static int64_t x618 = INT64_MAX;
	int32_t t82 = 40;

	t82 = (x617>>((x618-x619)<=x620));

	if (t82 != 2061) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x621 = 14695U;
	static uint64_t x622 = UINT64_MAX;
	volatile int8_t x624 = -1;
	volatile int32_t t83 = 161423;

	t83 = (x621>>((x622-x623)<=x624));

	if (t83 != 7347) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x630 = -58;
	int16_t x631 = INT16_MAX;
	static uint64_t x632 = 1314254687158579704LLU;
	static int32_t t84 = 6;

	t84 = (x629>>((x630-x631)<=x632));

	if (t84 != 25) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x645 = 3U;
	volatile int32_t x646 = -1;
	int64_t x647 = -62431LL;
	volatile int8_t x648 = -32;

	t85 = (x645>>((x646-x647)<=x648));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x649 = UINT8_MAX;
	int32_t x650 = 39640699;
	static int16_t x651 = -1;

	t86 = (x649>>((x650-x651)<=x652));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x653 = 3896U;
	static int16_t x654 = 8;
	int16_t x656 = INT16_MAX;
	static volatile int32_t t87 = -1;

	t87 = (x653>>((x654-x655)<=x656));

	if (t87 != 1948) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x673 = 66647348U;
	volatile int16_t x674 = INT16_MIN;
	uint16_t x675 = 63U;
	static int64_t x676 = INT64_MIN;
	uint32_t t88 = 1U;

	t88 = (x673>>((x674-x675)<=x676));

	if (t88 != 66647348U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x681 = 1U;
	uint32_t x682 = 754285U;
	uint32_t x683 = 97306U;
	int64_t x684 = -1LL;
	int32_t t89 = -87496243;

	t89 = (x681>>((x682-x683)<=x684));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x685 = UINT16_MAX;
	uint16_t x686 = 2853U;
	int16_t x687 = INT16_MIN;
	volatile int64_t x688 = INT64_MIN;

	t90 = (x685>>((x686-x687)<=x688));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x689 = UINT32_MAX;
	int32_t x690 = -1;
	int32_t x691 = 0;
	int16_t x692 = INT16_MIN;

	t91 = (x689>>((x690-x691)<=x692));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x701 = 6LLU;
	volatile uint32_t x702 = 1U;
	static int64_t x704 = -16092LL;

	t92 = (x701>>((x702-x703)<=x704));

	if (t92 != 6LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x705 = 2396U;
	int64_t x706 = INT64_MIN;
	static int32_t x708 = 312907;
	volatile uint32_t t93 = 4589865U;

	t93 = (x705>>((x706-x707)<=x708));

	if (t93 != 2396U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x713 = 6;
	static int64_t x714 = -32675310773907131LL;
	int16_t x715 = INT16_MAX;
	volatile int32_t t94 = -49854;

	t94 = (x713>>((x714-x715)<=x716));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x717 = 40U;
	static uint64_t x718 = 205866683LLU;
	int32_t x719 = 12;
	static uint16_t x720 = 152U;

	t95 = (x717>>((x718-x719)<=x720));

	if (t95 != 40) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x722 = -20568;
	int32_t x724 = -460372081;

	t96 = (x721>>((x722-x723)<=x724));

	if (t96 != 25974787U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x725 = 508;
	uint32_t x726 = 756337154U;
	int8_t x727 = -1;
	volatile int16_t x728 = INT16_MIN;
	static int32_t t97 = 30011626;

	t97 = (x725>>((x726-x727)<=x728));

	if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x729 = 211650LLU;
	int32_t x730 = 97;
	uint32_t x731 = 1674U;
	uint64_t x732 = UINT64_MAX;
	uint64_t t98 = 137LLU;

	t98 = (x729>>((x730-x731)<=x732));

	if (t98 != 105825LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x733 = INT16_MAX;
	int32_t x734 = INT32_MAX;
	static uint32_t x735 = UINT32_MAX;
	volatile int32_t t99 = -115057;

	t99 = (x733>>((x734-x735)<=x736));

	if (t99 != 16383) { NG(); } else { ; }
	
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

