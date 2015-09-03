#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = UINT32_MAX;
volatile int64_t x6 = INT64_MAX;
int64_t x7 = INT64_MIN;
uint32_t x8 = UINT32_MAX;
static uint64_t x13 = UINT64_MAX;
int16_t x15 = -4896;
static int32_t x22 = 128;
volatile int32_t t2 = 96561762;
uint16_t x42 = UINT16_MAX;
int8_t x43 = INT8_MIN;
int16_t x47 = 835;
static int8_t x48 = 7;
volatile int32_t x50 = -1;
static uint32_t x62 = 45326U;
uint8_t x96 = 2U;
uint32_t x104 = UINT32_MAX;
static volatile int32_t t11 = 0;
int64_t x110 = -1LL;
int32_t t12 = 24;
uint64_t x117 = 4242458273781791LLU;
uint64_t x119 = UINT64_MAX;
static volatile uint8_t x120 = 101U;
uint8_t x133 = 2U;
volatile int8_t x135 = 0;
volatile int16_t x136 = 192;
static volatile int32_t t16 = -76502193;
int16_t x141 = INT16_MAX;
static int8_t x151 = 1;
int32_t x156 = INT32_MIN;
volatile uint8_t x157 = 1U;
int64_t x160 = INT64_MAX;
volatile int32_t t23 = -39199090;
static int8_t x196 = 9;
int64_t x211 = INT64_MIN;
int16_t x235 = -623;
int32_t t30 = -21594;
int32_t x244 = 3;
int32_t t32 = -1;
static int64_t x262 = INT64_MIN;
int64_t x264 = -1LL;
int32_t t34 = 1;
uint32_t x270 = 2672707U;
uint8_t x281 = 56U;
int32_t x292 = 5694;
uint32_t x294 = 455U;
uint32_t x295 = 254U;
int16_t x301 = INT16_MAX;
volatile int8_t x302 = INT8_MAX;
int32_t x303 = INT32_MIN;
int8_t x306 = -1;
static int32_t t40 = 2;
volatile uint8_t x311 = UINT8_MAX;
volatile int32_t t41 = 513;
static uint32_t x314 = UINT32_MAX;
int16_t x316 = -1;
int32_t x339 = INT32_MIN;
uint64_t x340 = 31589578957893LLU;
int8_t x350 = -1;
volatile int32_t x351 = 2;
volatile uint64_t x378 = 66419464268087984LLU;
volatile int8_t x380 = INT8_MIN;
volatile uint32_t x381 = 1829015883U;
volatile int64_t x382 = INT64_MAX;
uint16_t x391 = 7U;
int32_t t54 = 9;
int16_t x396 = INT16_MAX;
int16_t x422 = INT16_MIN;
static int16_t x435 = INT16_MIN;
int16_t x436 = -1;
static volatile int32_t t61 = -853916;
int32_t x438 = -9756912;
int32_t x448 = 6;
static int32_t x457 = 6;
int8_t x464 = INT8_MAX;
volatile int32_t t67 = 975015;
uint32_t x478 = 14929U;
uint16_t x491 = UINT16_MAX;
static int64_t x492 = 3020864234307LL;
int16_t x509 = INT16_MAX;
static int32_t t72 = -1921;
int64_t x515 = INT64_MAX;
int32_t x518 = INT32_MIN;
int32_t x519 = -50410320;
static volatile int64_t x544 = INT64_MIN;
int32_t x555 = INT32_MIN;
int32_t x560 = 12223085;
uint8_t x561 = UINT8_MAX;
int8_t x562 = INT8_MAX;
int32_t x566 = INT32_MAX;
int32_t t81 = -1014;
int64_t x587 = 7565784LL;
int8_t x588 = 2;
static uint16_t x595 = 549U;
static int32_t x596 = INT32_MIN;
uint32_t x601 = UINT32_MAX;
int64_t x602 = -48LL;
int32_t t86 = -750;
int8_t x633 = INT8_MAX;
static int64_t x635 = INT64_MAX;
uint32_t x639 = 1336691U;
uint8_t x646 = UINT8_MAX;
int32_t x648 = -380;
int32_t x650 = -1;
int32_t x666 = INT32_MAX;
static uint8_t x674 = 101U;
uint32_t x689 = 5U;
int32_t x696 = 11662723;
static int32_t t97 = 36515;
uint16_t x701 = 1U;


void f0(void) {
	int32_t t0 = 18270;

	t0 = ((x5>>(x6<x7))<=x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x14 = 1368U;
	uint16_t x16 = 30983U;
	volatile int32_t t1 = -252263484;

	t1 = ((x13>>(x14<x15))<=x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = UINT16_MAX;
	int64_t x23 = INT64_MIN;
	static volatile int8_t x24 = -1;

	t2 = ((x21>>(x22<x23))<=x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	volatile int32_t x26 = INT32_MIN;
	static int32_t x27 = INT32_MIN;
	static int32_t x28 = 792;
	int32_t t3 = -15226722;

	t3 = ((x25>>(x26<x27))<=x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x41 = 34254043496LL;
	volatile int16_t x44 = -878;
	volatile int32_t t4 = -23481591;

	t4 = ((x41>>(x42<x43))<=x44);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x45 = 784791895634LLU;
	volatile int16_t x46 = -1505;
	int32_t t5 = 248042953;

	t5 = ((x45>>(x46<x47))<=x48);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x49 = 67194407521834101LL;
	static uint32_t x51 = 25U;
	int8_t x52 = INT8_MIN;
	static int32_t t6 = 1;

	t6 = ((x49>>(x50<x51))<=x52);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x61 = 4U;
	static int8_t x63 = INT8_MIN;
	static int64_t x64 = -881505LL;
	volatile int32_t t7 = 7;

	t7 = ((x61>>(x62<x63))<=x64);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x77 = 5U;
	int32_t x78 = -212;
	int64_t x79 = -101465817722947LL;
	volatile int64_t x80 = INT64_MIN;
	volatile int32_t t8 = 17145777;

	t8 = ((x77>>(x78<x79))<=x80);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x93 = 392107212605623LLU;
	int32_t x94 = 3223;
	int32_t x95 = INT32_MIN;
	int32_t t9 = 0;

	t9 = ((x93>>(x94<x95))<=x96);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x101 = 26U;
	volatile uint32_t x102 = 31803U;
	uint16_t x103 = UINT16_MAX;
	static volatile int32_t t10 = 4;

	t10 = ((x101>>(x102<x103))<=x104);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x105 = UINT16_MAX;
	static int64_t x106 = 32460451326LL;
	volatile int8_t x107 = 3;
	int16_t x108 = INT16_MIN;

	t11 = ((x105>>(x106<x107))<=x108);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x109 = UINT16_MAX;
	volatile int64_t x111 = -2206054672LL;
	int16_t x112 = -1;

	t12 = ((x109>>(x110<x111))<=x112);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x113 = 1202U;
	int8_t x114 = -1;
	static int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	volatile int32_t t13 = 0;

	t13 = ((x113>>(x114<x115))<=x116);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x118 = INT32_MIN;
	int32_t t14 = -1830;

	t14 = ((x117>>(x118<x119))<=x120);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x121 = 23477U;
	uint64_t x122 = 15879633LLU;
	int16_t x123 = INT16_MIN;
	volatile int8_t x124 = 7;
	volatile int32_t t15 = 1223470;

	t15 = ((x121>>(x122<x123))<=x124);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x134 = UINT16_MAX;

	t16 = ((x133>>(x134<x135))<=x136);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x142 = UINT32_MAX;
	static int8_t x143 = -1;
	int32_t x144 = INT32_MIN;
	volatile int32_t t17 = -31;

	t17 = ((x141>>(x142<x143))<=x144);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x145 = 5U;
	static int8_t x146 = INT8_MIN;
	uint32_t x147 = 4969249U;
	int32_t x148 = INT32_MIN;
	int32_t t18 = -1;

	t18 = ((x145>>(x146<x147))<=x148);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x149 = 120U;
	volatile int64_t x150 = -38969LL;
	int8_t x152 = -1;
	volatile int32_t t19 = 1683465;

	t19 = ((x149>>(x150<x151))<=x152);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = INT8_MAX;
	static uint64_t x155 = 29207954120071LLU;
	int32_t t20 = -2189376;

	t20 = ((x153>>(x154<x155))<=x156);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x158 = UINT16_MAX;
	uint32_t x159 = UINT32_MAX;
	int32_t t21 = 30;

	t21 = ((x157>>(x158<x159))<=x160);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x161 = 14322;
	uint64_t x162 = 69LLU;
	int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t22 = 1573228;

	t22 = ((x161>>(x162<x163))<=x164);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x185 = UINT64_MAX;
	uint32_t x186 = 255562U;
	int32_t x187 = INT32_MAX;
	uint8_t x188 = 6U;

	t23 = ((x185>>(x186<x187))<=x188);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x193 = 247928756508652112LLU;
	int8_t x194 = -1;
	uint8_t x195 = 6U;
	static int32_t t24 = 249057;

	t24 = ((x193>>(x194<x195))<=x196);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x197 = 235707LLU;
	int8_t x198 = INT8_MAX;
	int64_t x199 = -99485595677LL;
	int64_t x200 = INT64_MIN;
	int32_t t25 = -607236596;

	t25 = ((x197>>(x198<x199))<=x200);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x209 = 1135915421U;
	int32_t x210 = -1;
	int8_t x212 = -58;
	volatile int32_t t26 = 14;

	t26 = ((x209>>(x210<x211))<=x212);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x213 = 601011LLU;
	int32_t x214 = -1;
	static volatile uint16_t x215 = 463U;
	int8_t x216 = INT8_MAX;
	static int32_t t27 = -32;

	t27 = ((x213>>(x214<x215))<=x216);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x229 = 2U;
	static volatile uint32_t x230 = UINT32_MAX;
	int16_t x231 = 0;
	int16_t x232 = INT16_MAX;
	volatile int32_t t28 = -57;

	t28 = ((x229>>(x230<x231))<=x232);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x233 = 0U;
	int64_t x234 = 133448LL;
	uint16_t x236 = 4U;
	volatile int32_t t29 = 1018;

	t29 = ((x233>>(x234<x235))<=x236);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x237 = 107177LLU;
	int8_t x238 = -1;
	uint8_t x239 = 89U;
	static uint16_t x240 = UINT16_MAX;

	t30 = ((x237>>(x238<x239))<=x240);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = INT8_MIN;
	volatile int16_t x243 = INT16_MIN;
	int32_t t31 = 99247943;

	t31 = ((x241>>(x242<x243))<=x244);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x245 = 43U;
	volatile uint16_t x246 = 3936U;
	int64_t x247 = INT64_MIN;
	static int64_t x248 = -1LL;

	t32 = ((x245>>(x246<x247))<=x248);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x253 = UINT64_MAX;
	uint32_t x254 = 258955074U;
	static uint32_t x255 = 1560269236U;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t33 = 1;

	t33 = ((x253>>(x254<x255))<=x256);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x261 = 2718;
	int8_t x263 = INT8_MIN;

	t34 = ((x261>>(x262<x263))<=x264);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x269 = UINT32_MAX;
	int8_t x271 = INT8_MIN;
	static uint8_t x272 = 28U;
	volatile int32_t t35 = 11067;

	t35 = ((x269>>(x270<x271))<=x272);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x282 = INT8_MIN;
	uint8_t x283 = 4U;
	int16_t x284 = 62;
	volatile int32_t t36 = -838;

	t36 = ((x281>>(x282<x283))<=x284);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x289 = 1U;
	int64_t x290 = INT64_MIN;
	static uint32_t x291 = 841U;
	volatile int32_t t37 = -4137898;

	t37 = ((x289>>(x290<x291))<=x292);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x293 = 4258202273LLU;
	int32_t x296 = INT32_MIN;
	int32_t t38 = -9569;

	t38 = ((x293>>(x294<x295))<=x296);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x304 = INT64_MIN;
	volatile int32_t t39 = 2;

	t39 = ((x301>>(x302<x303))<=x304);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x305 = UINT16_MAX;
	int16_t x307 = 223;
	int8_t x308 = INT8_MIN;

	t40 = ((x305>>(x306<x307))<=x308);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x309 = 180974782U;
	int8_t x310 = 19;
	static int8_t x312 = -1;

	t41 = ((x309>>(x310<x311))<=x312);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x313 = INT16_MAX;
	int32_t x315 = -1;
	int32_t t42 = 1;

	t42 = ((x313>>(x314<x315))<=x316);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x317 = UINT64_MAX;
	int64_t x318 = -14LL;
	static int32_t x319 = -13696;
	int64_t x320 = INT64_MIN;
	int32_t t43 = 31293;

	t43 = ((x317>>(x318<x319))<=x320);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x329 = 1;
	static int64_t x330 = -7940439LL;
	volatile int16_t x331 = -1;
	int64_t x332 = -938517LL;
	int32_t t44 = 11085486;

	t44 = ((x329>>(x330<x331))<=x332);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int8_t x338 = INT8_MIN;
	static volatile int32_t t45 = -5624;

	t45 = ((x337>>(x338<x339))<=x340);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x341 = 22305U;
	uint16_t x342 = 1U;
	int64_t x343 = -1LL;
	static uint32_t x344 = 7U;
	volatile int32_t t46 = -13;

	t46 = ((x341>>(x342<x343))<=x344);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x349 = 215LLU;
	int64_t x352 = 1LL;
	int32_t t47 = 52;

	t47 = ((x349>>(x350<x351))<=x352);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x357 = 23U;
	int64_t x358 = 819315LL;
	uint64_t x359 = 13LLU;
	int8_t x360 = -1;
	int32_t t48 = -119;

	t48 = ((x357>>(x358<x359))<=x360);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x361 = UINT8_MAX;
	uint32_t x362 = 148980U;
	uint8_t x363 = 29U;
	volatile uint8_t x364 = 1U;
	int32_t t49 = 6;

	t49 = ((x361>>(x362<x363))<=x364);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x369 = 2479U;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = INT64_MIN;
	static int8_t x372 = 16;
	volatile int32_t t50 = 986;

	t50 = ((x369>>(x370<x371))<=x372);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x373 = 1U;
	int64_t x374 = INT64_MIN;
	volatile int64_t x375 = 13999866064985675LL;
	int32_t x376 = -1;
	volatile int32_t t51 = 17;

	t51 = ((x373>>(x374<x375))<=x376);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x377 = 1250713856U;
	static volatile int32_t x379 = INT32_MIN;
	int32_t t52 = -717377869;

	t52 = ((x377>>(x378<x379))<=x380);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x383 = 1060950555LLU;
	static int16_t x384 = 2;
	int32_t t53 = 56449703;

	t53 = ((x381>>(x382<x383))<=x384);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x389 = UINT16_MAX;
	int32_t x390 = 11528829;
	int8_t x392 = -1;

	t54 = ((x389>>(x390<x391))<=x392);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x393 = INT16_MAX;
	static volatile uint32_t x394 = 2040U;
	int64_t x395 = INT64_MIN;
	int32_t t55 = -4116582;

	t55 = ((x393>>(x394<x395))<=x396);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x401 = UINT32_MAX;
	static int64_t x402 = -1LL;
	int16_t x403 = -1;
	int64_t x404 = 51362289417LL;
	int32_t t56 = 9;

	t56 = ((x401>>(x402<x403))<=x404);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x413 = INT64_MAX;
	static volatile int8_t x414 = -3;
	int8_t x415 = INT8_MIN;
	static int8_t x416 = -16;
	int32_t t57 = 4;

	t57 = ((x413>>(x414<x415))<=x416);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x421 = 10;
	static volatile uint8_t x423 = UINT8_MAX;
	int16_t x424 = -1;
	int32_t t58 = -7;

	t58 = ((x421>>(x422<x423))<=x424);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x425 = UINT32_MAX;
	volatile int32_t x426 = -1;
	int32_t x427 = 45667659;
	int8_t x428 = 2;
	int32_t t59 = 3;

	t59 = ((x425>>(x426<x427))<=x428);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x429 = 1U;
	int8_t x430 = 1;
	int64_t x431 = INT64_MIN;
	volatile int16_t x432 = INT16_MIN;
	int32_t t60 = 10565987;

	t60 = ((x429>>(x430<x431))<=x432);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x433 = INT8_MAX;
	int32_t x434 = INT32_MAX;

	t61 = ((x433>>(x434<x435))<=x436);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x437 = INT32_MAX;
	int16_t x439 = INT16_MAX;
	uint64_t x440 = 111290221270102635LLU;
	volatile int32_t t62 = 22;

	t62 = ((x437>>(x438<x439))<=x440);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x445 = 792;
	int32_t x446 = -3606;
	int8_t x447 = -1;
	int32_t t63 = 749982893;

	t63 = ((x445>>(x446<x447))<=x448);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x449 = 23284LLU;
	uint32_t x450 = 116U;
	uint64_t x451 = 6LLU;
	static uint64_t x452 = 43LLU;
	volatile int32_t t64 = -1;

	t64 = ((x449>>(x450<x451))<=x452);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x453 = UINT64_MAX;
	static int8_t x454 = INT8_MIN;
	static int16_t x455 = INT16_MIN;
	int32_t x456 = INT32_MAX;
	static int32_t t65 = -1646;

	t65 = ((x453>>(x454<x455))<=x456);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x458 = INT8_MIN;
	uint64_t x459 = 12114780258LLU;
	uint64_t x460 = 341LLU;
	int32_t t66 = -247761;

	t66 = ((x457>>(x458<x459))<=x460);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x461 = 257282106;
	int16_t x462 = INT16_MIN;
	int32_t x463 = -441;

	t67 = ((x461>>(x462<x463))<=x464);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x465 = INT8_MAX;
	int32_t x466 = INT32_MIN;
	static volatile uint16_t x467 = UINT16_MAX;
	int64_t x468 = -464768880680LL;
	volatile int32_t t68 = 22522319;

	t68 = ((x465>>(x466<x467))<=x468);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x477 = 31136936U;
	uint64_t x479 = 766486495LLU;
	static int8_t x480 = INT8_MAX;
	static int32_t t69 = -208237;

	t69 = ((x477>>(x478<x479))<=x480);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x489 = 35920125291907354LLU;
	int64_t x490 = INT64_MIN;
	volatile int32_t t70 = 43529;

	t70 = ((x489>>(x490<x491))<=x492);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x501 = 0LLU;
	int32_t x502 = INT32_MAX;
	volatile uint32_t x503 = 2451499U;
	uint16_t x504 = 9U;
	volatile int32_t t71 = 0;

	t71 = ((x501>>(x502<x503))<=x504);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x510 = -9LL;
	static int16_t x511 = INT16_MIN;
	uint8_t x512 = 3U;

	t72 = ((x509>>(x510<x511))<=x512);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x513 = UINT16_MAX;
	uint16_t x514 = 23U;
	int8_t x516 = -1;
	int32_t t73 = 44693638;

	t73 = ((x513>>(x514<x515))<=x516);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x517 = 1833706752U;
	uint32_t x520 = 290653U;
	volatile int32_t t74 = 1705;

	t74 = ((x517>>(x518<x519))<=x520);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x537 = 7052914533441232LLU;
	int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MIN;
	volatile int16_t x540 = -1;
	int32_t t75 = 6980717;

	t75 = ((x537>>(x538<x539))<=x540);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x541 = 2369U;
	static int32_t x542 = -85464055;
	volatile uint64_t x543 = 528424622689LLU;
	int32_t t76 = 817917;

	t76 = ((x541>>(x542<x543))<=x544);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x553 = 62;
	int8_t x554 = -1;
	static int16_t x556 = -4092;
	int32_t t77 = -234816932;

	t77 = ((x553>>(x554<x555))<=x556);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x557 = 424377LLU;
	uint16_t x558 = 620U;
	volatile int8_t x559 = -1;
	static int32_t t78 = 0;

	t78 = ((x557>>(x558<x559))<=x560);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x563 = 101063755373975LLU;
	int64_t x564 = INT64_MIN;
	static volatile int32_t t79 = 1721977;

	t79 = ((x561>>(x562<x563))<=x564);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x565 = UINT64_MAX;
	int8_t x567 = INT8_MAX;
	int16_t x568 = -150;
	int32_t t80 = -171;

	t80 = ((x565>>(x566<x567))<=x568);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x581 = UINT16_MAX;
	uint16_t x582 = UINT16_MAX;
	volatile int32_t x583 = INT32_MIN;
	int64_t x584 = -1LL;

	t81 = ((x581>>(x582<x583))<=x584);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x585 = 43578466915936660LL;
	uint16_t x586 = 47U;
	volatile int32_t t82 = 594035;

	t82 = ((x585>>(x586<x587))<=x588);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x593 = 88U;
	static int8_t x594 = -8;
	volatile int32_t t83 = 27035737;

	t83 = ((x593>>(x594<x595))<=x596);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x597 = 63U;
	volatile int32_t x598 = 1387;
	volatile uint64_t x599 = 248762321714087LLU;
	int8_t x600 = INT8_MIN;
	static int32_t t84 = 237;

	t84 = ((x597>>(x598<x599))<=x600);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x603 = INT32_MIN;
	int8_t x604 = INT8_MIN;
	int32_t t85 = 14;

	t85 = ((x601>>(x602<x603))<=x604);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x613 = UINT8_MAX;
	uint8_t x614 = 16U;
	int16_t x615 = -1;
	int64_t x616 = 482474080069573574LL;

	t86 = ((x613>>(x614<x615))<=x616);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x629 = INT16_MAX;
	int64_t x630 = -517283LL;
	static int32_t x631 = -1;
	volatile uint32_t x632 = 7239U;
	int32_t t87 = -4166703;

	t87 = ((x629>>(x630<x631))<=x632);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x634 = INT16_MAX;
	int16_t x636 = -4;
	int32_t t88 = -4011;

	t88 = ((x633>>(x634<x635))<=x636);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x637 = UINT8_MAX;
	static int32_t x638 = 20427290;
	uint64_t x640 = 53LLU;
	volatile int32_t t89 = 0;

	t89 = ((x637>>(x638<x639))<=x640);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x645 = 31U;
	int16_t x647 = -2;
	static volatile int32_t t90 = 1;

	t90 = ((x645>>(x646<x647))<=x648);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x649 = 1U;
	int16_t x651 = INT16_MIN;
	int64_t x652 = -542465879LL;
	volatile int32_t t91 = 2671;

	t91 = ((x649>>(x650<x651))<=x652);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x665 = UINT16_MAX;
	int16_t x667 = -10284;
	uint32_t x668 = 1044594445U;
	volatile int32_t t92 = 4;

	t92 = ((x665>>(x666<x667))<=x668);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x669 = 150;
	volatile int32_t x670 = INT32_MAX;
	uint32_t x671 = UINT32_MAX;
	int32_t x672 = INT32_MAX;
	int32_t t93 = 1057;

	t93 = ((x669>>(x670<x671))<=x672);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x673 = INT16_MAX;
	static int16_t x675 = INT16_MIN;
	static int16_t x676 = 2;
	volatile int32_t t94 = 6;

	t94 = ((x673>>(x674<x675))<=x676);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x677 = UINT16_MAX;
	int64_t x678 = 912638297284613LL;
	int16_t x679 = 51;
	int16_t x680 = 406;
	int32_t t95 = 1;

	t95 = ((x677>>(x678<x679))<=x680);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x690 = 31384520559984LL;
	int16_t x691 = INT16_MIN;
	volatile int64_t x692 = INT64_MIN;
	static int32_t t96 = -376390;

	t96 = ((x689>>(x690<x691))<=x692);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x693 = INT16_MAX;
	uint32_t x694 = 203U;
	static uint8_t x695 = UINT8_MAX;

	t97 = ((x693>>(x694<x695))<=x696);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x702 = UINT8_MAX;
	static uint16_t x703 = UINT16_MAX;
	uint32_t x704 = 119463U;
	int32_t t98 = -84538;

	t98 = ((x701>>(x702<x703))<=x704);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x709 = INT8_MAX;
	static int8_t x710 = INT8_MAX;
	uint16_t x711 = 5U;
	static int64_t x712 = INT64_MAX;
	volatile int32_t t99 = 2595;

	t99 = ((x709>>(x710<x711))<=x712);

	if (t99 != 1) { NG(); } else { ; }
	
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

