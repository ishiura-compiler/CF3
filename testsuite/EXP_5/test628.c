#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -7;
uint16_t x23 = 12815U;
static uint32_t x27 = 1130762049U;
int32_t x31 = INT32_MIN;
int32_t t3 = 25;
volatile int64_t x37 = -1LL;
uint16_t x39 = 1U;
static int16_t x41 = 2;
int16_t x44 = 30;
int32_t x47 = -60301551;
volatile uint64_t x73 = 10650363296897LLU;
volatile uint64_t x76 = 58652602573LLU;
int16_t x77 = -1;
uint8_t x81 = UINT8_MAX;
static int64_t x84 = -1LL;
int16_t x85 = INT16_MIN;
volatile int32_t t12 = 437;
uint64_t x100 = UINT64_MAX;
int32_t t13 = INT32_MAX;
int64_t x102 = 321LL;
uint64_t x103 = 2416674903431LLU;
uint16_t x104 = UINT16_MAX;
static int8_t x122 = INT8_MAX;
static int8_t x125 = -1;
static int64_t x139 = -1572741LL;
volatile int16_t x141 = INT16_MAX;
int64_t x142 = -727224922906365LL;
uint64_t x180 = 583305LLU;
int64_t x184 = 4531696007LL;
int32_t x196 = INT32_MIN;
volatile uint32_t t24 = 4285709U;
int32_t t25 = -677075405;
volatile uint32_t x211 = UINT32_MAX;
volatile int16_t x214 = INT16_MAX;
int32_t x235 = INT32_MAX;
uint8_t x236 = 11U;
uint16_t x240 = 7061U;
volatile int64_t t31 = -68014325394429425LL;
int32_t t33 = -18;
int32_t x259 = INT32_MAX;
static int32_t x261 = -5250;
uint16_t x268 = 2594U;
int32_t x284 = -48;
int8_t x286 = 19;
int64_t x302 = -1LL;
int8_t x310 = 1;
static uint32_t x312 = UINT32_MAX;
volatile int32_t t42 = 7;
volatile uint16_t x341 = 28U;
int32_t t44 = -14952591;
volatile int64_t x353 = -19LL;
int16_t x363 = INT16_MIN;
static int8_t x364 = INT8_MIN;
static int16_t x372 = INT16_MIN;
int8_t x374 = 22;
uint64_t x375 = UINT64_MAX;
static volatile int32_t t49 = INT32_MIN;
volatile int32_t t51 = 9208375;
int8_t x387 = -6;
static int64_t x393 = -1LL;
int64_t x396 = 838336333001LL;
int64_t x398 = 277787292LL;
uint64_t x399 = 1795215349LLU;
volatile int16_t x412 = INT16_MIN;
int32_t x419 = INT32_MAX;
int16_t x431 = -1;
int32_t x445 = 1853;
uint8_t x448 = UINT8_MAX;
volatile int8_t x450 = 0;
volatile int32_t t63 = 3;
static uint8_t x454 = 39U;
static volatile uint32_t t64 = 289299186U;
int64_t x459 = INT64_MAX;
int16_t x461 = INT16_MIN;
static int8_t x487 = -10;
volatile int32_t x490 = -370011;
uint32_t x493 = 11438633U;
int16_t x508 = INT16_MAX;
uint32_t x519 = UINT32_MAX;
uint32_t x530 = 31326U;
int32_t x532 = INT32_MAX;
volatile int16_t x541 = INT16_MIN;
static uint64_t x543 = 1246635959834964LLU;
volatile int32_t t76 = -63;
int32_t x575 = INT32_MAX;
static uint64_t x576 = UINT64_MAX;
int8_t x583 = -8;
uint8_t x626 = 2U;
uint32_t x630 = 1U;
volatile uint32_t t89 = 1105721U;
uint64_t x640 = UINT64_MAX;
int32_t t90 = 937;
uint64_t x642 = UINT64_MAX;
volatile int32_t x644 = -876416;
static volatile uint8_t x657 = 1U;
volatile int32_t t93 = -3;
volatile int8_t x665 = -1;
int64_t x673 = 686265338225973LL;
int64_t x680 = INT64_MIN;
int32_t x690 = -24;
volatile uint64_t x692 = UINT64_MAX;


void f0(void) {
	int32_t x9 = 9;
	int64_t x10 = -2551104979522LL;
	volatile uint64_t x11 = UINT64_MAX;
	volatile int8_t x12 = INT8_MIN;

	t0 = (x9/((x10/x11)<=x12));

	if (t0 != 9) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x21 = INT8_MAX;
	uint64_t x22 = UINT64_MAX;
	static int16_t x24 = -1;
	int32_t t1 = -221315287;

	t1 = (x21/((x22/x23)<=x24));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MIN;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t2 = 46958940;

	t2 = (x25/((x26/x27)<=x28));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = -1;
	int8_t x30 = -1;
	static uint8_t x32 = 69U;

	t3 = (x29/((x30/x31)<=x32));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x38 = INT32_MIN;
	int16_t x40 = 70;
	int64_t t4 = 10271155357777LL;

	t4 = (x37/((x38/x39)<=x40));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x42 = 49264506LLU;
	int64_t x43 = 6121162983247529LL;
	static volatile int32_t t5 = -927815009;

	t5 = (x41/((x42/x43)<=x44));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = 0U;
	uint32_t x46 = UINT32_MAX;
	int64_t x48 = 46LL;
	int32_t t6 = 283182;

	t6 = (x45/((x46/x47)<=x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x53 = -1;
	uint8_t x54 = UINT8_MAX;
	int16_t x55 = -1;
	uint64_t x56 = UINT64_MAX;
	static int32_t t7 = -515959;

	t7 = (x53/((x54/x55)<=x56));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x74 = -1;
	static int64_t x75 = -18LL;
	uint64_t t8 = 836456398844LLU;

	t8 = (x73/((x74/x75)<=x76));

	if (t8 != 10650363296897LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x78 = INT8_MIN;
	uint32_t x79 = 314122U;
	volatile uint32_t x80 = 617571U;
	volatile int32_t t9 = 800068;

	t9 = (x77/((x78/x79)<=x80));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x82 = INT8_MIN;
	uint64_t x83 = 103LLU;
	static int32_t t10 = -832408;

	t10 = (x81/((x82/x83)<=x84));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x86 = -1;
	int8_t x87 = -2;
	int16_t x88 = 182;
	static int32_t t11 = 273410;

	t11 = (x85/((x86/x87)<=x88));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x93 = -1;
	uint16_t x94 = 5U;
	static volatile int32_t x95 = 344357;
	int16_t x96 = INT16_MAX;

	t12 = (x93/((x94/x95)<=x96));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x97 = INT32_MAX;
	int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MIN;

	t13 = (x97/((x98/x99)<=x100));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int32_t t14 = -15;

	t14 = (x101/((x102/x103)<=x104));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x121 = -1;
	volatile int16_t x123 = INT16_MAX;
	uint64_t x124 = UINT64_MAX;
	static int32_t t15 = -495085353;

	t15 = (x121/((x122/x123)<=x124));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x126 = 230569183082LLU;
	int64_t x127 = INT64_MIN;
	static int64_t x128 = INT64_MIN;
	static int32_t t16 = -107;

	t16 = (x125/((x126/x127)<=x128));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x137 = UINT8_MAX;
	static uint32_t x138 = 6U;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t17 = 74746;

	t17 = (x137/((x138/x139)<=x140));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x143 = -1;
	volatile int64_t x144 = 6343956894981912LL;
	int32_t t18 = -1586765;

	t18 = (x141/((x142/x143)<=x144));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = -1;
	uint16_t x159 = 22421U;
	uint32_t x160 = 43965U;
	volatile int32_t t19 = 341;

	t19 = (x157/((x158/x159)<=x160));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x169 = -1;
	int16_t x170 = INT16_MIN;
	int16_t x171 = -11;
	static int64_t x172 = INT64_MAX;
	int32_t t20 = -870581874;

	t20 = (x169/((x170/x171)<=x172));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x177 = UINT8_MAX;
	volatile int32_t x178 = INT32_MIN;
	int64_t x179 = -3132691980175LL;
	int32_t t21 = 87330;

	t21 = (x177/((x178/x179)<=x180));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x181 = INT32_MAX;
	int16_t x182 = INT16_MIN;
	static uint32_t x183 = 1431U;
	int32_t t22 = INT32_MAX;

	t22 = (x181/((x182/x183)<=x184));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x189 = UINT64_MAX;
	int32_t x190 = 237450240;
	int32_t x191 = INT32_MIN;
	static uint8_t x192 = UINT8_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = (x189/((x190/x191)<=x192));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x193 = 13392066U;
	int32_t x194 = -1;
	uint64_t x195 = UINT64_MAX;

	t24 = (x193/((x194/x195)<=x196));

	if (t24 != 13392066U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x198 = 3U;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = 471U;

	t25 = (x197/((x198/x199)<=x200));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x209 = -1;
	static int8_t x210 = INT8_MAX;
	static int32_t x212 = -1;
	volatile int32_t t26 = -1048450774;

	t26 = (x209/((x210/x211)<=x212));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x213 = -26197946851871LL;
	volatile uint64_t x215 = 43740LLU;
	volatile int8_t x216 = INT8_MIN;
	volatile int64_t t27 = 402347LL;

	t27 = (x213/((x214/x215)<=x216));

	if (t27 != -26197946851871LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x221 = -1;
	int32_t x222 = -75544;
	int64_t x223 = -4006851034782176LL;
	uint32_t x224 = 850U;
	volatile int32_t t28 = -912277255;

	t28 = (x221/((x222/x223)<=x224));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x233 = -1555;
	static volatile int32_t x234 = -5;
	int32_t t29 = 284;

	t29 = (x233/((x234/x235)<=x236));

	if (t29 != -1555) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x237 = -2287;
	static int16_t x238 = -27;
	static int32_t x239 = INT32_MIN;
	volatile int32_t t30 = -111;

	t30 = (x237/((x238/x239)<=x240));

	if (t30 != -2287) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x245 = -1LL;
	int64_t x246 = 85712995LL;
	int32_t x247 = -424387;
	static int8_t x248 = -1;

	t31 = (x245/((x246/x247)<=x248));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MAX;
	uint64_t x251 = 48473229275434LLU;
	int16_t x252 = INT16_MIN;
	volatile int32_t t32 = -28041;

	t32 = (x249/((x250/x251)<=x252));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x253 = -3;
	static int64_t x254 = -1LL;
	int64_t x255 = -1172749397652LL;
	uint64_t x256 = UINT64_MAX;

	t33 = (x253/((x254/x255)<=x256));

	if (t33 != -3) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x257 = 5U;
	volatile int16_t x258 = -1;
	uint8_t x260 = 7U;
	static volatile int32_t t34 = 60950;

	t34 = (x257/((x258/x259)<=x260));

	if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MIN;
	int8_t x264 = 1;
	volatile int32_t t35 = 332330172;

	t35 = (x261/((x262/x263)<=x264));

	if (t35 != -5250) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = INT32_MIN;
	int64_t x267 = -2875409752537LL;
	int32_t t36 = 113056017;

	t36 = (x265/((x266/x267)<=x268));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x281 = 424U;
	volatile int32_t x282 = -62346529;
	volatile uint8_t x283 = 2U;
	int32_t t37 = 1434925;

	t37 = (x281/((x282/x283)<=x284));

	if (t37 != 424) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x285 = -5LL;
	uint16_t x287 = UINT16_MAX;
	int32_t x288 = 18535;
	volatile int64_t t38 = -3546656LL;

	t38 = (x285/((x286/x287)<=x288));

	if (t38 != -5LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x297 = -585995135401LL;
	int32_t x298 = INT32_MIN;
	static uint8_t x299 = 40U;
	volatile int32_t x300 = -456;
	volatile int64_t t39 = 56841501367738595LL;

	t39 = (x297/((x298/x299)<=x300));

	if (t39 != -585995135401LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x301 = 0U;
	uint64_t x303 = 31069449864097LLU;
	volatile uint64_t x304 = 11075477058881LLU;
	uint32_t t40 = 659655212U;

	t40 = (x301/((x302/x303)<=x304));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x309 = 823U;
	volatile uint16_t x311 = 307U;
	uint32_t t41 = 1U;

	t41 = (x309/((x310/x311)<=x312));

	if (t41 != 823U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x313 = -1;
	static uint8_t x314 = UINT8_MAX;
	static uint64_t x315 = 4350459LLU;
	static volatile int16_t x316 = INT16_MAX;

	t42 = (x313/((x314/x315)<=x316));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int8_t x326 = INT8_MIN;
	int8_t x327 = -17;
	uint16_t x328 = UINT16_MAX;
	uint32_t t43 = UINT32_MAX;

	t43 = (x325/((x326/x327)<=x328));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x342 = 268429044093658870LLU;
	volatile uint64_t x343 = UINT64_MAX;
	volatile int32_t x344 = INT32_MAX;

	t44 = (x341/((x342/x343)<=x344));

	if (t44 != 28) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x354 = 9569851U;
	int8_t x355 = -4;
	uint64_t x356 = 4LLU;
	volatile int64_t t45 = 9293896LL;

	t45 = (x353/((x354/x355)<=x356));

	if (t45 != -19LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x361 = UINT32_MAX;
	static uint32_t x362 = 143U;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (x361/((x362/x363)<=x364));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x365 = 4255404880LL;
	uint32_t x366 = 252504198U;
	uint64_t x367 = 5399332LLU;
	int32_t x368 = INT32_MIN;
	int64_t t47 = -7LL;

	t47 = (x365/((x366/x367)<=x368));

	if (t47 != 4255404880LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x369 = 688U;
	int32_t x370 = -1;
	uint64_t x371 = 2238836579771285LLU;
	static volatile int32_t t48 = -29515;

	t48 = (x369/((x370/x371)<=x372));

	if (t48 != 688) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x376 = 101U;

	t49 = (x373/((x374/x375)<=x376));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x377 = INT16_MAX;
	int8_t x378 = INT8_MIN;
	int64_t x379 = -1048137246869197LL;
	uint32_t x380 = UINT32_MAX;
	int32_t t50 = 28;

	t50 = (x377/((x378/x379)<=x380));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x381 = -1;
	int32_t x382 = -50;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = INT8_MAX;

	t51 = (x381/((x382/x383)<=x384));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x385 = 1940U;
	uint32_t x386 = 1U;
	volatile uint8_t x388 = 0U;
	uint32_t t52 = 7U;

	t52 = (x385/((x386/x387)<=x388));

	if (t52 != 1940U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x394 = INT32_MIN;
	int8_t x395 = 9;
	int64_t t53 = -3598642535034LL;

	t53 = (x393/((x394/x395)<=x396));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x397 = 686;
	static volatile int32_t x400 = INT32_MIN;
	static int32_t t54 = -16572;

	t54 = (x397/((x398/x399)<=x400));

	if (t54 != 686) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x405 = -1LL;
	uint32_t x406 = 6U;
	volatile int32_t x407 = INT32_MIN;
	static uint16_t x408 = 7U;
	int64_t t55 = -4581585LL;

	t55 = (x405/((x406/x407)<=x408));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x409 = 2450LLU;
	int64_t x410 = 205157345LL;
	uint64_t x411 = UINT64_MAX;
	volatile uint64_t t56 = 298126926747885LLU;

	t56 = (x409/((x410/x411)<=x412));

	if (t56 != 2450LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x417 = -1;
	int8_t x418 = INT8_MAX;
	uint64_t x420 = UINT64_MAX;
	int32_t t57 = -1;

	t57 = (x417/((x418/x419)<=x420));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x421 = INT8_MIN;
	static uint8_t x422 = 17U;
	volatile uint32_t x423 = 11U;
	int16_t x424 = -1;
	volatile int32_t t58 = -2225;

	t58 = (x421/((x422/x423)<=x424));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x425 = INT32_MAX;
	uint8_t x426 = 1U;
	int8_t x427 = -1;
	static int64_t x428 = -1LL;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x425/((x426/x427)<=x428));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x429 = UINT32_MAX;
	uint8_t x430 = 6U;
	static int32_t x432 = 708044901;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x429/((x430/x431)<=x432));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x433 = UINT8_MAX;
	static int8_t x434 = INT8_MIN;
	int16_t x435 = 13;
	int32_t x436 = 0;
	volatile int32_t t61 = 475244987;

	t61 = (x433/((x434/x435)<=x436));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x446 = 0U;
	static int16_t x447 = INT16_MIN;
	int32_t t62 = 711;

	t62 = (x445/((x446/x447)<=x448));

	if (t62 != 1853) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x449 = UINT16_MAX;
	static int32_t x451 = INT32_MIN;
	int32_t x452 = 128938;

	t63 = (x449/((x450/x451)<=x452));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x453 = 14423U;
	volatile int16_t x455 = -1;
	static int8_t x456 = -8;

	t64 = (x453/((x454/x455)<=x456));

	if (t64 != 14423U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x457 = INT64_MIN;
	int8_t x458 = -1;
	uint64_t x460 = 61043274LLU;
	volatile int64_t t65 = INT64_MIN;

	t65 = (x457/((x458/x459)<=x460));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x462 = INT16_MAX;
	int64_t x463 = INT64_MAX;
	int32_t x464 = INT32_MAX;
	int32_t t66 = 1032611;

	t66 = (x461/((x462/x463)<=x464));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x485 = UINT64_MAX;
	uint32_t x486 = 920U;
	int16_t x488 = INT16_MAX;
	uint64_t t67 = UINT64_MAX;

	t67 = (x485/((x486/x487)<=x488));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x489 = 2950554LLU;
	int8_t x491 = 1;
	uint64_t x492 = UINT64_MAX;
	uint64_t t68 = 95945458317LLU;

	t68 = (x489/((x490/x491)<=x492));

	if (t68 != 2950554LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x494 = INT32_MAX;
	static uint64_t x495 = UINT64_MAX;
	uint64_t x496 = UINT64_MAX;
	volatile uint32_t t69 = 7554114U;

	t69 = (x493/((x494/x495)<=x496));

	if (t69 != 11438633U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x501 = 60U;
	int8_t x502 = INT8_MIN;
	int64_t x503 = 551182901913324715LL;
	static int64_t x504 = INT64_MAX;
	volatile int32_t t70 = -46145;

	t70 = (x501/((x502/x503)<=x504));

	if (t70 != 60) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x505 = 3;
	int16_t x506 = -1;
	int8_t x507 = INT8_MIN;
	int32_t t71 = -10;

	t71 = (x505/((x506/x507)<=x508));

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x517 = -1;
	uint64_t x518 = 15958LLU;
	int64_t x520 = -1LL;
	static int32_t t72 = -2;

	t72 = (x517/((x518/x519)<=x520));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x521 = 788U;
	int64_t x522 = INT64_MAX;
	int16_t x523 = INT16_MIN;
	volatile int32_t x524 = -15139377;
	volatile int32_t t73 = -1;

	t73 = (x521/((x522/x523)<=x524));

	if (t73 != 788) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x529 = INT32_MIN;
	int8_t x531 = INT8_MIN;
	int32_t t74 = INT32_MIN;

	t74 = (x529/((x530/x531)<=x532));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x542 = 11LL;
	int64_t x544 = INT64_MIN;
	int32_t t75 = -171846;

	t75 = (x541/((x542/x543)<=x544));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x549 = INT8_MAX;
	uint32_t x550 = 42253206U;
	int64_t x551 = INT64_MIN;
	int16_t x552 = 9;

	t76 = (x549/((x550/x551)<=x552));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x553 = INT8_MIN;
	volatile int32_t x554 = INT32_MIN;
	uint8_t x555 = 15U;
	int8_t x556 = 22;
	static volatile int32_t t77 = -26886;

	t77 = (x553/((x554/x555)<=x556));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x557 = 4;
	int8_t x558 = INT8_MIN;
	int8_t x559 = INT8_MAX;
	int16_t x560 = INT16_MAX;
	int32_t t78 = -7409614;

	t78 = (x557/((x558/x559)<=x560));

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x561 = UINT16_MAX;
	uint64_t x562 = 14LLU;
	uint32_t x563 = 2602731U;
	uint16_t x564 = UINT16_MAX;
	int32_t t79 = 23173172;

	t79 = (x561/((x562/x563)<=x564));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x565 = INT32_MIN;
	static uint64_t x566 = 263024553546018621LLU;
	int32_t x567 = INT32_MIN;
	volatile uint8_t x568 = 63U;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x565/((x566/x567)<=x568));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x569 = INT16_MAX;
	static uint64_t x570 = 3628022455LLU;
	static int32_t x571 = 32952;
	volatile int16_t x572 = INT16_MIN;
	volatile int32_t t81 = -57644901;

	t81 = (x569/((x570/x571)<=x572));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x573 = -119;
	static uint16_t x574 = UINT16_MAX;
	volatile int32_t t82 = -24848;

	t82 = (x573/((x574/x575)<=x576));

	if (t82 != -119) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x581 = INT8_MAX;
	int16_t x582 = INT16_MAX;
	static uint16_t x584 = 327U;
	static volatile int32_t t83 = 1235;

	t83 = (x581/((x582/x583)<=x584));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x585 = 0;
	volatile int8_t x586 = INT8_MIN;
	static int16_t x587 = -1;
	static int16_t x588 = INT16_MAX;
	volatile int32_t t84 = -50354750;

	t84 = (x585/((x586/x587)<=x588));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x605 = INT16_MIN;
	uint8_t x606 = UINT8_MAX;
	uint8_t x607 = 5U;
	int64_t x608 = 2946438423807LL;
	static volatile int32_t t85 = -11542331;

	t85 = (x605/((x606/x607)<=x608));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x613 = 6354295016338291LL;
	uint64_t x614 = 1LLU;
	static uint16_t x615 = 12U;
	static uint16_t x616 = UINT16_MAX;
	static int64_t t86 = -47894LL;

	t86 = (x613/((x614/x615)<=x616));

	if (t86 != 6354295016338291LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x617 = -41088732;
	uint8_t x618 = 13U;
	uint32_t x619 = 109797U;
	uint32_t x620 = 7U;
	int32_t t87 = -453;

	t87 = (x617/((x618/x619)<=x620));

	if (t87 != -41088732) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x625 = INT64_MIN;
	volatile uint64_t x627 = 27449699433101LLU;
	int64_t x628 = INT64_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x625/((x626/x627)<=x628));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x629 = 3947359U;
	int64_t x631 = INT64_MIN;
	uint64_t x632 = 13528380124971347LLU;

	t89 = (x629/((x630/x631)<=x632));

	if (t89 != 3947359U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x637 = INT16_MAX;
	int32_t x638 = INT32_MIN;
	int8_t x639 = INT8_MAX;

	t90 = (x637/((x638/x639)<=x640));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x641 = INT32_MIN;
	int8_t x643 = 3;
	int32_t t91 = INT32_MIN;

	t91 = (x641/((x642/x643)<=x644));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x658 = 15U;
	uint64_t x659 = UINT64_MAX;
	uint16_t x660 = 30877U;
	volatile int32_t t92 = -1;

	t92 = (x657/((x658/x659)<=x660));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x661 = -1388964;
	int8_t x662 = INT8_MAX;
	int8_t x663 = -1;
	volatile int32_t x664 = -1;

	t93 = (x661/((x662/x663)<=x664));

	if (t93 != -1388964) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x666 = INT8_MIN;
	int64_t x667 = INT64_MIN;
	uint32_t x668 = 461567U;
	volatile int32_t t94 = -77363496;

	t94 = (x665/((x666/x667)<=x668));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x669 = -3537049522672776LL;
	uint8_t x670 = UINT8_MAX;
	uint64_t x671 = UINT64_MAX;
	volatile int8_t x672 = -1;
	volatile int64_t t95 = -2167818800785LL;

	t95 = (x669/((x670/x671)<=x672));

	if (t95 != -3537049522672776LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x674 = -421;
	static int8_t x675 = INT8_MIN;
	int64_t x676 = INT64_MAX;
	volatile int64_t t96 = 3521723104005475885LL;

	t96 = (x673/((x674/x675)<=x676));

	if (t96 != 686265338225973LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x677 = 27230390U;
	static volatile int64_t x678 = -438LL;
	uint64_t x679 = UINT64_MAX;
	volatile uint32_t t97 = 82041895U;

	t97 = (x677/((x678/x679)<=x680));

	if (t97 != 27230390U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x685 = -8292357679639LL;
	volatile int32_t x686 = INT32_MAX;
	int32_t x687 = INT32_MIN;
	int8_t x688 = 3;
	volatile int64_t t98 = -153500775LL;

	t98 = (x685/((x686/x687)<=x688));

	if (t98 != -8292357679639LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x689 = UINT16_MAX;
	int8_t x691 = -1;
	int32_t t99 = 35110128;

	t99 = (x689/((x690/x691)<=x692));

	if (t99 != 65535) { NG(); } else { ; }
	
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

