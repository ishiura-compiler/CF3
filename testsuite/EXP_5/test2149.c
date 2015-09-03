#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x18 = 30876LL;
uint64_t x43 = 25245743738LLU;
int16_t x51 = INT16_MIN;
int16_t x52 = INT16_MAX;
int16_t x54 = INT16_MAX;
int32_t t3 = 11798994;
static int64_t x71 = -5LL;
static volatile uint64_t x89 = UINT64_MAX;
int8_t x101 = INT8_MIN;
uint64_t x102 = 432867730826729LLU;
int16_t x114 = -1;
uint16_t x119 = 403U;
volatile uint16_t x120 = 56U;
volatile int32_t t12 = 812877;
uint64_t x158 = 844115LLU;
int32_t x167 = INT32_MIN;
uint16_t x196 = UINT16_MAX;
volatile int8_t x213 = INT8_MAX;
uint8_t x214 = 7U;
static int16_t x215 = -8370;
int32_t x235 = -1;
int8_t x236 = -1;
int8_t x239 = 42;
int32_t t24 = -2;
static uint64_t x245 = 666LLU;
int8_t x247 = 1;
uint32_t x249 = 520669021U;
uint16_t x250 = 6880U;
int8_t x251 = 1;
int16_t x279 = 3;
int16_t x302 = INT16_MIN;
static volatile int16_t x304 = -1;
static volatile int16_t x313 = -1;
int16_t x317 = 959;
static int64_t x361 = -1LL;
static int32_t x362 = 1606396;
uint32_t x377 = 4144347U;
int64_t x380 = -15047408LL;
uint8_t x385 = 118U;
int64_t t40 = -3819981LL;
int8_t x393 = -49;
int8_t x405 = INT8_MAX;
int16_t x409 = -490;
int32_t x413 = -1;
int8_t x418 = -1;
static uint16_t x436 = UINT16_MAX;
volatile int8_t x454 = INT8_MAX;
int32_t x455 = INT32_MIN;
volatile int32_t t52 = -7750;
volatile int8_t x473 = INT8_MAX;
int32_t t54 = -452;
uint64_t x481 = 4267148428409LLU;
int32_t x484 = 127329;
int64_t x499 = -1LL;
int32_t x500 = INT32_MIN;
int16_t x507 = -5;
int16_t x525 = INT16_MAX;
int32_t x535 = INT32_MIN;
int8_t x569 = 4;
uint64_t x580 = UINT64_MAX;
uint32_t x582 = 933554495U;
static int8_t x587 = -1;
int32_t t66 = 1660;
volatile int32_t t67 = -9;
int32_t t68 = -1215353;
int16_t x608 = INT16_MIN;
int32_t t70 = INT32_MIN;
int8_t x646 = INT8_MIN;
static volatile uint32_t t77 = 4714U;
static volatile int32_t t79 = 2736413;
volatile int32_t t80 = 121286;
int64_t x678 = -876126331102LL;
int8_t x683 = INT8_MIN;
static volatile uint64_t t82 = 154282535012514429LLU;
uint64_t x687 = UINT64_MAX;
volatile int64_t x711 = INT64_MAX;
static int32_t x712 = -3981533;
int16_t x718 = 3;
int64_t x732 = -1LL;
uint64_t x748 = UINT64_MAX;
static int16_t x751 = -1;
static uint64_t x757 = 131208346500603119LLU;
int8_t x772 = INT8_MAX;
int16_t x776 = -2834;
uint16_t x789 = UINT16_MAX;
volatile int32_t x800 = -1;
int32_t t95 = -23375;
uint32_t x804 = UINT32_MAX;
volatile int64_t x815 = INT64_MAX;
uint16_t x818 = 4762U;
volatile int16_t x820 = -1;
int64_t t99 = INT64_MIN;


void f0(void) {
	int16_t x17 = -1;
	int64_t x19 = INT64_MIN;
	uint32_t x20 = 27740475U;
	int32_t t0 = 533;

	t0 = (x17/((x18^x19)<=x20));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x41 = 1457989677670LL;
	int64_t x42 = INT64_MIN;
	int8_t x44 = -6;
	int64_t t1 = -12632191LL;

	t1 = (x41/((x42^x43)<=x44));

	if (t1 != 1457989677670LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x49 = INT64_MAX;
	volatile int16_t x50 = INT16_MIN;
	static volatile int64_t t2 = INT64_MAX;

	t2 = (x49/((x50^x51)<=x52));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x53 = -15;
	uint64_t x55 = UINT64_MAX;
	int64_t x56 = -1LL;

	t3 = (x53/((x54^x55)<=x56));

	if (t3 != -15) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x57 = -87729;
	int8_t x58 = -1;
	int8_t x59 = -15;
	static volatile int64_t x60 = INT64_MAX;
	volatile int32_t t4 = -4315623;

	t4 = (x57/((x58^x59)<=x60));

	if (t4 != -87729) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x69 = UINT32_MAX;
	uint64_t x70 = 120228586842LLU;
	int16_t x72 = INT16_MIN;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (x69/((x70^x71)<=x72));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x81 = INT8_MAX;
	static int32_t x82 = INT32_MAX;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t6 = 1;

	t6 = (x81/((x82^x83)<=x84));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x90 = 1U;
	int32_t x91 = INT32_MIN;
	volatile int8_t x92 = INT8_MAX;
	uint64_t t7 = UINT64_MAX;

	t7 = (x89/((x90^x91)<=x92));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x93 = INT16_MAX;
	static volatile uint16_t x94 = 3444U;
	int32_t x95 = -1;
	volatile int8_t x96 = 2;
	int32_t t8 = 24;

	t8 = (x93/((x94^x95)<=x96));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x103 = INT16_MIN;
	volatile int64_t x104 = -323079066LL;
	volatile int32_t t9 = -3798;

	t9 = (x101/((x102^x103)<=x104));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x105 = -1;
	static uint32_t x106 = UINT32_MAX;
	static volatile uint64_t x107 = 33455510415635671LLU;
	int32_t x108 = INT32_MIN;
	volatile int32_t t10 = -20;

	t10 = (x105/((x106^x107)<=x108));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x113 = 102U;
	int8_t x115 = INT8_MIN;
	volatile uint32_t x116 = UINT32_MAX;
	int32_t t11 = -154283;

	t11 = (x113/((x114^x115)<=x116));

	if (t11 != 102) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = INT8_MIN;

	t12 = (x117/((x118^x119)<=x120));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x121 = -54742557089413LL;
	uint8_t x122 = 28U;
	uint32_t x123 = 1U;
	uint64_t x124 = UINT64_MAX;
	int64_t t13 = -2196LL;

	t13 = (x121/((x122^x123)<=x124));

	if (t13 != -54742557089413LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x149 = 4960;
	uint64_t x150 = UINT64_MAX;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t14 = -485;

	t14 = (x149/((x150^x151)<=x152));

	if (t14 != 4960) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x157 = 1;
	static int64_t x159 = 72259LL;
	int16_t x160 = INT16_MIN;
	volatile int32_t t15 = -303154;

	t15 = (x157/((x158^x159)<=x160));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x161 = 22166U;
	uint8_t x162 = 0U;
	int8_t x163 = 1;
	uint8_t x164 = 18U;
	int32_t t16 = -75;

	t16 = (x161/((x162^x163)<=x164));

	if (t16 != 22166) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x165 = -1LL;
	int8_t x166 = -1;
	uint64_t x168 = UINT64_MAX;
	volatile int64_t t17 = -40481818253LL;

	t17 = (x165/((x166^x167)<=x168));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x193 = 1;
	int16_t x194 = 9;
	static volatile int32_t x195 = -143636918;
	volatile int32_t t18 = -472;

	t18 = (x193/((x194^x195)<=x196));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x197 = 227;
	static volatile int64_t x198 = -38668607LL;
	int8_t x199 = -1;
	volatile uint32_t x200 = UINT32_MAX;
	volatile int32_t t19 = 28;

	t19 = (x197/((x198^x199)<=x200));

	if (t19 != 227) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x205 = UINT8_MAX;
	volatile int32_t x206 = -387;
	uint64_t x207 = 663LLU;
	int32_t x208 = -1;
	static volatile int32_t t20 = -522337372;

	t20 = (x205/((x206^x207)<=x208));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x216 = -1;
	volatile int32_t t21 = 155112;

	t21 = (x213/((x214^x215)<=x216));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = 201504745LL;
	int16_t x231 = 8;
	int32_t x232 = INT32_MAX;
	volatile int32_t t22 = 18991895;

	t22 = (x229/((x230^x231)<=x232));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x233 = INT8_MAX;
	int64_t x234 = 71491LL;
	volatile int32_t t23 = 32096;

	t23 = (x233/((x234^x235)<=x236));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x237 = -1;
	int8_t x238 = -1;
	volatile int8_t x240 = 12;

	t24 = (x237/((x238^x239)<=x240));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x246 = -22260991333806LL;
	volatile int8_t x248 = INT8_MAX;
	uint64_t t25 = 72030082747205700LLU;

	t25 = (x245/((x246^x247)<=x248));

	if (t25 != 666LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x252 = INT32_MAX;
	volatile uint32_t t26 = 220U;

	t26 = (x249/((x250^x251)<=x252));

	if (t26 != 520669021U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x265 = INT8_MIN;
	volatile int16_t x266 = -1;
	int16_t x267 = -1;
	static uint16_t x268 = UINT16_MAX;
	volatile int32_t t27 = -209684;

	t27 = (x265/((x266^x267)<=x268));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x277 = 11U;
	uint64_t x278 = 54776678480LLU;
	int8_t x280 = -1;
	volatile int32_t t28 = 789439383;

	t28 = (x277/((x278^x279)<=x280));

	if (t28 != 11) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x293 = INT64_MAX;
	static int8_t x294 = -1;
	static uint32_t x295 = UINT32_MAX;
	int32_t x296 = INT32_MAX;
	int64_t t29 = INT64_MAX;

	t29 = (x293/((x294^x295)<=x296));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x301 = -1LL;
	uint32_t x303 = 64184692U;
	static volatile int64_t t30 = -3104071LL;

	t30 = (x301/((x302^x303)<=x304));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x309 = 15231054U;
	uint64_t x310 = UINT64_MAX;
	volatile int16_t x311 = INT16_MAX;
	int16_t x312 = -1;
	uint32_t t31 = 62936163U;

	t31 = (x309/((x310^x311)<=x312));

	if (t31 != 15231054U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x314 = -1374476;
	volatile uint8_t x315 = 0U;
	int64_t x316 = INT64_MAX;
	volatile int32_t t32 = 960359;

	t32 = (x313/((x314^x315)<=x316));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x318 = 9018;
	static int32_t x319 = 667;
	int64_t x320 = 5141393052LL;
	int32_t t33 = 27;

	t33 = (x317/((x318^x319)<=x320));

	if (t33 != 959) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x321 = INT16_MIN;
	static int16_t x322 = 2;
	volatile int64_t x323 = -1LL;
	int8_t x324 = INT8_MAX;
	volatile int32_t t34 = 16247275;

	t34 = (x321/((x322^x323)<=x324));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x325 = INT16_MAX;
	uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MIN;
	static uint8_t x328 = UINT8_MAX;
	int32_t t35 = 192;

	t35 = (x325/((x326^x327)<=x328));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x363 = UINT64_MAX;
	int8_t x364 = INT8_MIN;
	volatile int64_t t36 = -502514449LL;

	t36 = (x361/((x362^x363)<=x364));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x378 = INT32_MAX;
	volatile int64_t x379 = -215LL;
	volatile uint32_t t37 = 5U;

	t37 = (x377/((x378^x379)<=x380));

	if (t37 != 4144347U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x381 = INT8_MIN;
	static uint32_t x382 = 70221U;
	int64_t x383 = INT64_MIN;
	uint64_t x384 = UINT64_MAX;
	int32_t t38 = 52944;

	t38 = (x381/((x382^x383)<=x384));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x386 = -1LL;
	int8_t x387 = INT8_MIN;
	static uint64_t x388 = 32157999305019534LLU;
	static volatile int32_t t39 = -616364;

	t39 = (x385/((x386^x387)<=x388));

	if (t39 != 118) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x389 = 54106710971535LL;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;
	static volatile uint64_t x392 = UINT64_MAX;

	t40 = (x389/((x390^x391)<=x392));

	if (t40 != 54106710971535LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x394 = INT32_MIN;
	int64_t x395 = 16032771371936LL;
	int64_t x396 = INT64_MAX;
	volatile int32_t t41 = -47078;

	t41 = (x393/((x394^x395)<=x396));

	if (t41 != -49) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x397 = INT64_MIN;
	static uint16_t x398 = 3U;
	volatile int32_t x399 = INT32_MIN;
	volatile uint8_t x400 = 13U;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x397/((x398^x399)<=x400));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x401 = -27;
	volatile int8_t x402 = 1;
	volatile int16_t x403 = -6311;
	volatile int8_t x404 = -1;
	int32_t t43 = 3773334;

	t43 = (x401/((x402^x403)<=x404));

	if (t43 != -27) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x406 = -1;
	int8_t x407 = 1;
	int32_t x408 = 27;
	int32_t t44 = 7840;

	t44 = (x405/((x406^x407)<=x408));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x410 = -365;
	int64_t x411 = -8LL;
	static int64_t x412 = 117497LL;
	volatile int32_t t45 = 245318;

	t45 = (x409/((x410^x411)<=x412));

	if (t45 != -490) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x414 = INT16_MAX;
	static uint16_t x415 = UINT16_MAX;
	static volatile uint32_t x416 = UINT32_MAX;
	int32_t t46 = -478319;

	t46 = (x413/((x414^x415)<=x416));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x417 = -59;
	uint32_t x419 = UINT32_MAX;
	volatile uint64_t x420 = UINT64_MAX;
	int32_t t47 = -174520124;

	t47 = (x417/((x418^x419)<=x420));

	if (t47 != -59) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x433 = 522U;
	static int16_t x434 = -1;
	int32_t x435 = -316;
	static volatile int32_t t48 = -31253263;

	t48 = (x433/((x434^x435)<=x436));

	if (t48 != 522) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x437 = 3716U;
	int32_t x438 = INT32_MIN;
	volatile int32_t x439 = INT32_MIN;
	volatile uint8_t x440 = UINT8_MAX;
	static volatile uint32_t t49 = 1U;

	t49 = (x437/((x438^x439)<=x440));

	if (t49 != 3716U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x445 = INT32_MIN;
	uint32_t x446 = 250802408U;
	static int16_t x447 = -1;
	int8_t x448 = -37;
	int32_t t50 = INT32_MIN;

	t50 = (x445/((x446^x447)<=x448));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x453 = -1;
	int32_t x456 = -1;
	int32_t t51 = -8058511;

	t51 = (x453/((x454^x455)<=x456));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x457 = -11107;
	int16_t x458 = 9502;
	int16_t x459 = -1;
	static int8_t x460 = -1;

	t52 = (x457/((x458^x459)<=x460));

	if (t52 != -11107) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x465 = UINT8_MAX;
	volatile uint8_t x466 = UINT8_MAX;
	volatile int16_t x467 = -1;
	static int64_t x468 = -1LL;
	volatile int32_t t53 = 101;

	t53 = (x465/((x466^x467)<=x468));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x474 = -1LL;
	int64_t x475 = INT64_MAX;
	int32_t x476 = INT32_MAX;

	t54 = (x473/((x474^x475)<=x476));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x482 = INT16_MIN;
	int8_t x483 = 3;
	volatile uint64_t t55 = 6064566077LLU;

	t55 = (x481/((x482^x483)<=x484));

	if (t55 != 4267148428409LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x485 = 2U;
	uint16_t x486 = 0U;
	uint64_t x487 = 27LLU;
	int8_t x488 = 61;
	volatile int32_t t56 = 637232;

	t56 = (x485/((x486^x487)<=x488));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x497 = 16882228U;
	volatile int64_t x498 = 5403934553895LL;
	volatile uint32_t t57 = 1135918U;

	t57 = (x497/((x498^x499)<=x500));

	if (t57 != 16882228U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x505 = 1U;
	int16_t x506 = -915;
	int16_t x508 = INT16_MAX;
	volatile int32_t t58 = -6;

	t58 = (x505/((x506^x507)<=x508));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x526 = INT8_MIN;
	int64_t x527 = -1LL;
	static uint32_t x528 = UINT32_MAX;
	int32_t t59 = -28;

	t59 = (x525/((x526^x527)<=x528));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x533 = UINT32_MAX;
	volatile int32_t x534 = -1;
	volatile uint32_t x536 = UINT32_MAX;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x533/((x534^x535)<=x536));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x541 = 3;
	int8_t x542 = INT8_MIN;
	static uint8_t x543 = 45U;
	uint8_t x544 = 1U;
	volatile int32_t t61 = 965852;

	t61 = (x541/((x542^x543)<=x544));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x557 = 0;
	int16_t x558 = -1;
	static volatile int16_t x559 = INT16_MAX;
	static uint8_t x560 = 45U;
	static int32_t t62 = 5;

	t62 = (x557/((x558^x559)<=x560));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x570 = 6U;
	uint16_t x571 = UINT16_MAX;
	static volatile int32_t x572 = 1461269;
	int32_t t63 = 20262977;

	t63 = (x569/((x570^x571)<=x572));

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x577 = 20;
	uint64_t x578 = 32506636839LLU;
	int64_t x579 = 30415689977217LL;
	volatile int32_t t64 = 462242;

	t64 = (x577/((x578^x579)<=x580));

	if (t64 != 20) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x581 = 13U;
	static int16_t x583 = INT16_MAX;
	static uint32_t x584 = UINT32_MAX;
	uint32_t t65 = 1U;

	t65 = (x581/((x582^x583)<=x584));

	if (t65 != 13U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x585 = -1;
	volatile int64_t x586 = INT64_MAX;
	volatile int64_t x588 = INT64_MIN;

	t66 = (x585/((x586^x587)<=x588));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x589 = UINT8_MAX;
	static int32_t x590 = -566003;
	uint32_t x591 = 57927U;
	int8_t x592 = -1;

	t67 = (x589/((x590^x591)<=x592));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x593 = INT8_MIN;
	static volatile int8_t x594 = 0;
	int8_t x595 = -1;
	int32_t x596 = -1;

	t68 = (x593/((x594^x595)<=x596));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x601 = 8U;
	volatile int8_t x602 = -1;
	static int8_t x603 = -1;
	int16_t x604 = 65;
	int32_t t69 = 29509;

	t69 = (x601/((x602^x603)<=x604));

	if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x605 = INT32_MIN;
	volatile uint64_t x606 = 32475400945667860LLU;
	int32_t x607 = INT32_MIN;

	t70 = (x605/((x606^x607)<=x608));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x613 = 1;
	uint32_t x614 = UINT32_MAX;
	uint64_t x615 = UINT64_MAX;
	volatile uint64_t x616 = UINT64_MAX;
	volatile int32_t t71 = 142556;

	t71 = (x613/((x614^x615)<=x616));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x621 = UINT32_MAX;
	int64_t x622 = INT64_MIN;
	int16_t x623 = 3534;
	uint32_t x624 = UINT32_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x621/((x622^x623)<=x624));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x625 = 6LLU;
	uint64_t x626 = 3262732313945871293LLU;
	uint32_t x627 = 1376U;
	volatile int32_t x628 = INT32_MIN;
	static uint64_t t73 = 48674493LLU;

	t73 = (x625/((x626^x627)<=x628));

	if (t73 != 6LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x629 = INT8_MIN;
	static volatile int64_t x630 = INT64_MAX;
	int32_t x631 = INT32_MIN;
	static int16_t x632 = INT16_MAX;
	int32_t t74 = 414890;

	t74 = (x629/((x630^x631)<=x632));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x637 = INT32_MAX;
	static int8_t x638 = -27;
	volatile int16_t x639 = INT16_MAX;
	int8_t x640 = INT8_MIN;
	volatile int32_t t75 = INT32_MAX;

	t75 = (x637/((x638^x639)<=x640));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x641 = -6;
	static uint8_t x642 = 16U;
	volatile uint8_t x643 = UINT8_MAX;
	uint64_t x644 = 1825957492270096LLU;
	int32_t t76 = 1;

	t76 = (x641/((x642^x643)<=x644));

	if (t76 != -6) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x645 = 1721610U;
	int64_t x647 = INT64_MAX;
	static uint32_t x648 = UINT32_MAX;

	t77 = (x645/((x646^x647)<=x648));

	if (t77 != 1721610U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x649 = 50;
	static uint64_t x650 = UINT64_MAX;
	uint8_t x651 = UINT8_MAX;
	static int16_t x652 = -25;
	int32_t t78 = -27923436;

	t78 = (x649/((x650^x651)<=x652));

	if (t78 != 50) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x653 = 5U;
	uint64_t x654 = UINT64_MAX;
	uint64_t x655 = 877LLU;
	uint64_t x656 = UINT64_MAX;

	t79 = (x653/((x654^x655)<=x656));

	if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x669 = 7;
	int64_t x670 = INT64_MIN;
	int64_t x671 = INT64_MIN;
	uint16_t x672 = UINT16_MAX;

	t80 = (x669/((x670^x671)<=x672));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x677 = 1;
	volatile uint8_t x679 = 7U;
	volatile uint8_t x680 = UINT8_MAX;
	volatile int32_t t81 = 15;

	t81 = (x677/((x678^x679)<=x680));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x681 = 19519209LLU;
	uint32_t x682 = 1997U;
	int16_t x684 = -3;

	t82 = (x681/((x682^x683)<=x684));

	if (t82 != 19519209LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x685 = -3399;
	volatile uint8_t x686 = UINT8_MAX;
	int8_t x688 = -5;
	static volatile int32_t t83 = -1;

	t83 = (x685/((x686^x687)<=x688));

	if (t83 != -3399) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x701 = INT32_MAX;
	uint64_t x702 = 363542253302634120LLU;
	int16_t x703 = 3;
	volatile int16_t x704 = -694;
	int32_t t84 = INT32_MAX;

	t84 = (x701/((x702^x703)<=x704));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x709 = 1U;
	int64_t x710 = -2375816014202407316LL;
	int32_t t85 = -1961708;

	t85 = (x709/((x710^x711)<=x712));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x717 = -1;
	static volatile int32_t x719 = INT32_MIN;
	volatile uint32_t x720 = UINT32_MAX;
	volatile int32_t t86 = -141;

	t86 = (x717/((x718^x719)<=x720));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x729 = INT8_MIN;
	int8_t x730 = -1;
	int64_t x731 = INT64_MAX;
	int32_t t87 = 9318;

	t87 = (x729/((x730^x731)<=x732));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x741 = 1912;
	volatile int16_t x742 = 1;
	int8_t x743 = INT8_MAX;
	static volatile int32_t x744 = INT32_MAX;
	volatile int32_t t88 = 930;

	t88 = (x741/((x742^x743)<=x744));

	if (t88 != 1912) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x745 = -1;
	uint8_t x746 = 14U;
	int8_t x747 = INT8_MIN;
	static volatile int32_t t89 = -9639313;

	t89 = (x745/((x746^x747)<=x748));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x749 = INT32_MIN;
	int32_t x750 = 258;
	int32_t x752 = INT32_MAX;
	int32_t t90 = INT32_MIN;

	t90 = (x749/((x750^x751)<=x752));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x758 = INT8_MIN;
	uint8_t x759 = UINT8_MAX;
	int16_t x760 = INT16_MAX;
	volatile uint64_t t91 = 699586110244615LLU;

	t91 = (x757/((x758^x759)<=x760));

	if (t91 != 131208346500603119LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x769 = 211;
	int32_t x770 = INT32_MIN;
	uint16_t x771 = UINT16_MAX;
	volatile int32_t t92 = -1;

	t92 = (x769/((x770^x771)<=x772));

	if (t92 != 211) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x773 = 16345990393973LLU;
	int16_t x774 = INT16_MIN;
	int16_t x775 = 383;
	uint64_t t93 = 231597231085LLU;

	t93 = (x773/((x774^x775)<=x776));

	if (t93 != 16345990393973LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x790 = 10089U;
	uint64_t x791 = 114816898910692LLU;
	static int64_t x792 = INT64_MIN;
	volatile int32_t t94 = 217107359;

	t94 = (x789/((x790^x791)<=x792));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x797 = INT8_MIN;
	volatile uint32_t x798 = 8514U;
	int8_t x799 = INT8_MIN;

	t95 = (x797/((x798^x799)<=x800));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x801 = INT32_MIN;
	int32_t x802 = 1;
	int16_t x803 = 2417;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x801/((x802^x803)<=x804));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x805 = 8U;
	int64_t x806 = -1235966799958447956LL;
	uint8_t x807 = UINT8_MAX;
	uint8_t x808 = 7U;
	int32_t t97 = 4588863;

	t97 = (x805/((x806^x807)<=x808));

	if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x813 = INT8_MAX;
	static volatile int64_t x814 = INT64_MIN;
	volatile int64_t x816 = -1LL;
	int32_t t98 = -537;

	t98 = (x813/((x814^x815)<=x816));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x817 = INT64_MIN;
	volatile uint64_t x819 = UINT64_MAX;

	t99 = (x817/((x818^x819)<=x820));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

