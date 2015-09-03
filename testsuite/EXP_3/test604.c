#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MAX;
uint16_t x9 = UINT16_MAX;
int32_t x11 = -83;
int8_t x32 = -1;
static int16_t x64 = INT16_MIN;
uint64_t x80 = UINT64_MAX;
volatile int32_t t9 = 2;
volatile int32_t t12 = 7052476;
volatile uint16_t x121 = UINT16_MAX;
static volatile int64_t x160 = -345532LL;
int16_t x189 = INT16_MIN;
uint16_t x191 = 31575U;
static volatile int64_t x216 = 3657271310720245LL;
int64_t x217 = INT64_MIN;
static uint64_t x221 = 6881LLU;
int8_t x222 = -1;
int16_t x223 = 2;
int8_t x237 = 2;
int32_t t25 = -28990;
uint32_t x242 = 285683U;
int32_t t28 = -1;
static int16_t x279 = INT16_MIN;
volatile int32_t t30 = 124064;
volatile int32_t t31 = 246;
static uint32_t x295 = 43826796U;
volatile uint16_t x303 = 28U;
int64_t x304 = INT64_MIN;
static int64_t x309 = INT64_MIN;
int32_t t35 = -3269;
int32_t t36 = 210084;
uint16_t x321 = 32U;
int32_t x335 = INT32_MIN;
int64_t x344 = INT64_MAX;
int16_t x347 = -1;
int32_t x358 = INT32_MAX;
static int32_t x360 = INT32_MAX;
int8_t x364 = INT8_MIN;
uint64_t x374 = 410LLU;
int64_t x375 = 40LL;
volatile int32_t t45 = 100661703;
static uint16_t x391 = UINT16_MAX;
int16_t x397 = INT16_MIN;
static uint32_t x402 = 35018157U;
static int16_t x403 = -1;
volatile uint8_t x411 = UINT8_MAX;
volatile int16_t x432 = INT16_MAX;
volatile int32_t t53 = 152946;
static volatile int32_t t54 = -3190744;
int64_t x454 = INT64_MIN;
int32_t t58 = 120;
uint32_t x457 = 336747U;
volatile int32_t t60 = 429;
int16_t x469 = -1;
uint32_t x478 = UINT32_MAX;
int16_t x496 = 145;
uint8_t x506 = UINT8_MAX;
volatile int32_t t68 = -6337607;
int8_t x519 = 1;
int64_t x521 = INT64_MIN;
int16_t x522 = INT16_MIN;
uint16_t x524 = 153U;
uint64_t x525 = 1281984825199613LLU;
int8_t x526 = -1;
int32_t t71 = -81;
int8_t x541 = 0;
static uint32_t x542 = 1007U;
int32_t t75 = 71110;
int32_t t77 = 199452;
uint64_t x562 = 3LLU;
int64_t x564 = 6304200LL;
volatile int32_t t78 = -20;
static int16_t x565 = INT16_MIN;
int8_t x568 = INT8_MIN;
uint16_t x577 = UINT16_MAX;
volatile int64_t x583 = -1LL;
int32_t x586 = INT32_MIN;
static uint32_t x587 = 1473822U;
volatile int8_t x588 = INT8_MIN;
int16_t x596 = -56;
uint16_t x598 = 7U;
uint16_t x599 = 501U;
int32_t t86 = -12893;
uint64_t x638 = UINT64_MAX;
int16_t x643 = INT16_MIN;
uint64_t x652 = 12965315442LLU;
int32_t x673 = INT32_MIN;
volatile int32_t t96 = 8298382;
int16_t x689 = -1;
int32_t t97 = -7;
uint16_t x699 = 11358U;
volatile int16_t x704 = INT16_MIN;


void f0(void) {
	static int8_t x1 = -1;
	static volatile int16_t x2 = INT16_MAX;
	int16_t x3 = -1;
	volatile int16_t x4 = INT16_MAX;
	static volatile int32_t t0 = 163139973;

	t0 = ((x1==x2)<<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -42;
	volatile int32_t x6 = -9481962;
	static uint16_t x7 = 7248U;
	int32_t t1 = -22;

	t1 = ((x5==x6)<<(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	int64_t x12 = INT64_MAX;
	int32_t t2 = -32240864;

	t2 = ((x9==x10)<<(x11/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x25 = INT16_MIN;
	static int8_t x26 = 0;
	static volatile int16_t x27 = 2;
	int64_t x28 = INT64_MAX;
	int32_t t3 = -1;

	t3 = ((x25==x26)<<(x27/x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MAX;
	int16_t x30 = INT16_MAX;
	static volatile uint64_t x31 = UINT64_MAX;
	int32_t t4 = 35;

	t4 = ((x29==x30)<<(x31/x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x37 = INT64_MIN;
	static int8_t x38 = INT8_MIN;
	int64_t x39 = -1LL;
	volatile int8_t x40 = -5;
	volatile int32_t t5 = 6475200;

	t5 = ((x37==x38)<<(x39/x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x57 = -81565930557LL;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = -1LL;
	static uint64_t x60 = UINT64_MAX;
	static int32_t t6 = -9;

	t6 = ((x57==x58)<<(x59/x60));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x61 = 530390007LL;
	int64_t x62 = INT64_MIN;
	volatile uint64_t x63 = UINT64_MAX;
	static int32_t t7 = 19626;

	t7 = ((x61==x62)<<(x63/x64));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x77 = UINT64_MAX;
	uint8_t x78 = 89U;
	int32_t x79 = -1972;
	volatile int32_t t8 = -895677951;

	t8 = ((x77==x78)<<(x79/x80));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x89 = -1LL;
	volatile int64_t x90 = INT64_MAX;
	volatile int8_t x91 = -1;
	static int64_t x92 = 489LL;

	t9 = ((x89==x90)<<(x91/x92));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x101 = 25U;
	volatile int16_t x102 = -442;
	volatile int8_t x103 = -2;
	uint32_t x104 = UINT32_MAX;
	static int32_t t10 = 40;

	t10 = ((x101==x102)<<(x103/x104));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int64_t x106 = -1LL;
	volatile int8_t x107 = -1;
	static int64_t x108 = 1086791419492LL;
	volatile int32_t t11 = -7743;

	t11 = ((x105==x106)<<(x107/x108));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x109 = -1LL;
	static int64_t x110 = INT64_MAX;
	int8_t x111 = 3;
	int32_t x112 = -10374;

	t12 = ((x109==x110)<<(x111/x112));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x117 = INT8_MIN;
	volatile int32_t x118 = INT32_MIN;
	uint8_t x119 = 2U;
	volatile uint16_t x120 = 8U;
	volatile int32_t t13 = 10007378;

	t13 = ((x117==x118)<<(x119/x120));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x122 = -22;
	static int16_t x123 = -3;
	uint16_t x124 = 2857U;
	static volatile int32_t t14 = 7774;

	t14 = ((x121==x122)<<(x123/x124));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x141 = INT32_MAX;
	uint8_t x142 = 3U;
	int16_t x143 = INT16_MIN;
	volatile int64_t x144 = INT64_MAX;
	int32_t t15 = 7551;

	t15 = ((x141==x142)<<(x143/x144));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x153 = INT64_MAX;
	uint16_t x154 = 21U;
	int32_t x155 = -1;
	int8_t x156 = INT8_MIN;
	static int32_t t16 = -60;

	t16 = ((x153==x154)<<(x155/x156));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x157 = 16009U;
	volatile int64_t x158 = 481770426LL;
	static uint64_t x159 = 66829LLU;
	int32_t t17 = -21625873;

	t17 = ((x157==x158)<<(x159/x160));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x190 = -1LL;
	uint64_t x192 = 798277994611LLU;
	volatile int32_t t18 = -4;

	t18 = ((x189==x190)<<(x191/x192));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x205 = UINT16_MAX;
	uint32_t x206 = 105389U;
	uint32_t x207 = 249U;
	volatile uint8_t x208 = UINT8_MAX;
	int32_t t19 = -195371;

	t19 = ((x205==x206)<<(x207/x208));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x209 = 391U;
	int64_t x210 = INT64_MIN;
	static volatile int16_t x211 = -248;
	int16_t x212 = INT16_MIN;
	volatile int32_t t20 = 56;

	t20 = ((x209==x210)<<(x211/x212));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x213 = INT64_MAX;
	static int32_t x214 = INT32_MIN;
	int8_t x215 = -31;
	volatile int32_t t21 = 27409;

	t21 = ((x213==x214)<<(x215/x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x218 = -1;
	int32_t x219 = 18;
	int32_t x220 = INT32_MIN;
	static int32_t t22 = 17580;

	t22 = ((x217==x218)<<(x219/x220));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x224 = INT64_MAX;
	volatile int32_t t23 = -1471912;

	t23 = ((x221==x222)<<(x223/x224));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = UINT16_MAX;
	static int8_t x231 = 1;
	int8_t x232 = INT8_MAX;
	int32_t t24 = 795407290;

	t24 = ((x229==x230)<<(x231/x232));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x238 = INT64_MIN;
	uint64_t x239 = UINT64_MAX;
	static int32_t x240 = INT32_MIN;

	t25 = ((x237==x238)<<(x239/x240));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x241 = INT64_MIN;
	uint16_t x243 = 1020U;
	volatile uint64_t x244 = 2115604765LLU;
	int32_t t26 = 12147056;

	t26 = ((x241==x242)<<(x243/x244));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x257 = 222;
	volatile int32_t x258 = INT32_MAX;
	uint64_t x259 = 113126385201467214LLU;
	static int64_t x260 = INT64_MIN;
	int32_t t27 = 3338;

	t27 = ((x257==x258)<<(x259/x260));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x261 = -1LL;
	int8_t x262 = -4;
	int16_t x263 = INT16_MAX;
	static int64_t x264 = INT64_MIN;

	t28 = ((x261==x262)<<(x263/x264));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x265 = 1117724242070554LLU;
	int8_t x266 = -22;
	uint16_t x267 = 14874U;
	volatile int32_t x268 = 3706758;
	static volatile int32_t t29 = -3;

	t29 = ((x265==x266)<<(x267/x268));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x277 = INT16_MIN;
	volatile int64_t x278 = 5796LL;
	int64_t x280 = INT64_MAX;

	t30 = ((x277==x278)<<(x279/x280));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x281 = INT16_MAX;
	int32_t x282 = -1;
	int32_t x283 = INT32_MAX;
	uint32_t x284 = UINT32_MAX;

	t31 = ((x281==x282)<<(x283/x284));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x293 = UINT32_MAX;
	volatile int64_t x294 = 93709LL;
	int64_t x296 = -136847904595LL;
	volatile int32_t t32 = -9986256;

	t32 = ((x293==x294)<<(x295/x296));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x301 = 129389216LL;
	static uint32_t x302 = 169U;
	volatile int32_t t33 = -7602981;

	t33 = ((x301==x302)<<(x303/x304));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x305 = 52U;
	int64_t x306 = -47449LL;
	int64_t x307 = -1LL;
	volatile int16_t x308 = -1;
	static volatile int32_t t34 = -42517717;

	t34 = ((x305==x306)<<(x307/x308));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x310 = INT64_MAX;
	volatile int8_t x311 = INT8_MAX;
	static int64_t x312 = INT64_MIN;

	t35 = ((x309==x310)<<(x311/x312));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x313 = INT64_MIN;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = 1LL;
	int64_t x316 = INT64_MAX;

	t36 = ((x313==x314)<<(x315/x316));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x322 = INT8_MIN;
	int8_t x323 = 0;
	int16_t x324 = -6387;
	int32_t t37 = 1;

	t37 = ((x321==x322)<<(x323/x324));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x325 = 458U;
	int16_t x326 = INT16_MAX;
	uint8_t x327 = 11U;
	int8_t x328 = INT8_MIN;
	int32_t t38 = -134505;

	t38 = ((x325==x326)<<(x327/x328));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x333 = -942447822;
	volatile int16_t x334 = -742;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t39 = -392595719;

	t39 = ((x333==x334)<<(x335/x336));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x341 = -1LL;
	int8_t x342 = INT8_MIN;
	static uint64_t x343 = 7290298LLU;
	volatile int32_t t40 = 10;

	t40 = ((x341==x342)<<(x343/x344));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x345 = 0U;
	int64_t x346 = 190891136987LL;
	static int16_t x348 = 6;
	int32_t t41 = 17240;

	t41 = ((x345==x346)<<(x347/x348));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x353 = -7704;
	volatile int8_t x354 = INT8_MAX;
	uint64_t x355 = 32747LLU;
	int32_t x356 = -590;
	int32_t t42 = -1169;

	t42 = ((x353==x354)<<(x355/x356));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x357 = INT32_MIN;
	int16_t x359 = INT16_MAX;
	static volatile int32_t t43 = -9639427;

	t43 = ((x357==x358)<<(x359/x360));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x361 = 73711625;
	uint8_t x362 = 1U;
	int16_t x363 = -12;
	volatile int32_t t44 = -1263;

	t44 = ((x361==x362)<<(x363/x364));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x373 = -3374;
	int16_t x376 = INT16_MAX;

	t45 = ((x373==x374)<<(x375/x376));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x381 = INT32_MAX;
	int64_t x382 = -3285030467737044LL;
	int16_t x383 = 433;
	int32_t x384 = INT32_MIN;
	volatile int32_t t46 = 24;

	t46 = ((x381==x382)<<(x383/x384));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x385 = -11236882LL;
	int64_t x386 = INT64_MIN;
	uint8_t x387 = UINT8_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t47 = -3;

	t47 = ((x385==x386)<<(x387/x388));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x389 = INT32_MAX;
	uint64_t x390 = 33530653199433850LLU;
	static uint32_t x392 = 1016610067U;
	static int32_t t48 = 131;

	t48 = ((x389==x390)<<(x391/x392));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x398 = INT32_MAX;
	uint64_t x399 = 27LLU;
	volatile int8_t x400 = -1;
	volatile int32_t t49 = 44048;

	t49 = ((x397==x398)<<(x399/x400));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x401 = 57U;
	int64_t x404 = 102366101510LL;
	int32_t t50 = -19690;

	t50 = ((x401==x402)<<(x403/x404));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x409 = 5;
	int8_t x410 = INT8_MAX;
	int64_t x412 = INT64_MIN;
	volatile int32_t t51 = 231536;

	t51 = ((x409==x410)<<(x411/x412));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x425 = UINT8_MAX;
	int32_t x426 = -54303;
	uint64_t x427 = 449971628313700LLU;
	volatile int32_t x428 = -21370880;
	int32_t t52 = 100793;

	t52 = ((x425==x426)<<(x427/x428));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x429 = INT16_MAX;
	static volatile int32_t x430 = INT32_MAX;
	static uint16_t x431 = UINT16_MAX;

	t53 = ((x429==x430)<<(x431/x432));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x433 = 597;
	int8_t x434 = INT8_MIN;
	int8_t x435 = -1;
	static uint16_t x436 = 5058U;

	t54 = ((x433==x434)<<(x435/x436));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x441 = 9U;
	uint8_t x442 = 2U;
	uint16_t x443 = 163U;
	int32_t x444 = INT32_MAX;
	int32_t t55 = 1;

	t55 = ((x441==x442)<<(x443/x444));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x445 = 92486;
	int16_t x446 = 2;
	int8_t x447 = INT8_MIN;
	uint32_t x448 = 479223308U;
	int32_t t56 = -22553;

	t56 = ((x445==x446)<<(x447/x448));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x449 = 29;
	int8_t x450 = INT8_MIN;
	int8_t x451 = INT8_MIN;
	int64_t x452 = INT64_MIN;
	static volatile int32_t t57 = 302585;

	t57 = ((x449==x450)<<(x451/x452));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x453 = INT64_MIN;
	int16_t x455 = 659;
	int64_t x456 = 974612426751144LL;

	t58 = ((x453==x454)<<(x455/x456));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x458 = -1;
	int32_t x459 = INT32_MIN;
	uint32_t x460 = UINT32_MAX;
	static int32_t t59 = 48;

	t59 = ((x457==x458)<<(x459/x460));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x461 = 2198371540273LLU;
	uint64_t x462 = UINT64_MAX;
	volatile uint16_t x463 = 5U;
	int64_t x464 = INT64_MIN;

	t60 = ((x461==x462)<<(x463/x464));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x465 = INT32_MIN;
	volatile uint32_t x466 = 469039U;
	uint16_t x467 = 0U;
	int64_t x468 = INT64_MIN;
	volatile int32_t t61 = -66377464;

	t61 = ((x465==x466)<<(x467/x468));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x470 = UINT32_MAX;
	uint32_t x471 = UINT32_MAX;
	int16_t x472 = -10;
	volatile int32_t t62 = -1;

	t62 = ((x469==x470)<<(x471/x472));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x477 = INT8_MAX;
	static uint32_t x479 = 3U;
	volatile int64_t x480 = -38071LL;
	int32_t t63 = -64617;

	t63 = ((x477==x478)<<(x479/x480));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x485 = 2;
	uint16_t x486 = 3U;
	int64_t x487 = -1LL;
	int32_t x488 = INT32_MAX;
	static int32_t t64 = 116785;

	t64 = ((x485==x486)<<(x487/x488));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x489 = 4;
	int64_t x490 = 42953159013960818LL;
	uint64_t x491 = UINT64_MAX;
	int32_t x492 = INT32_MIN;
	int32_t t65 = -1950756;

	t65 = ((x489==x490)<<(x491/x492));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x493 = -1LL;
	int32_t x494 = -59646154;
	static volatile int64_t x495 = -1LL;
	int32_t t66 = -8369;

	t66 = ((x493==x494)<<(x495/x496));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x497 = INT8_MIN;
	static uint32_t x498 = 0U;
	volatile int8_t x499 = INT8_MAX;
	static int64_t x500 = INT64_MIN;
	static volatile int32_t t67 = -227402424;

	t67 = ((x497==x498)<<(x499/x500));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x505 = -1;
	static volatile uint32_t x507 = UINT32_MAX;
	uint64_t x508 = 55173594455092LLU;

	t68 = ((x505==x506)<<(x507/x508));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x517 = UINT32_MAX;
	volatile int32_t x518 = INT32_MIN;
	volatile int32_t x520 = 1;
	volatile int32_t t69 = 14538;

	t69 = ((x517==x518)<<(x519/x520));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x523 = 0U;
	static volatile int32_t t70 = -455;

	t70 = ((x521==x522)<<(x523/x524));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x527 = INT8_MAX;
	uint32_t x528 = UINT32_MAX;

	t71 = ((x525==x526)<<(x527/x528));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x529 = UINT8_MAX;
	static uint32_t x530 = 70716749U;
	uint8_t x531 = 0U;
	static uint8_t x532 = UINT8_MAX;
	int32_t t72 = 1;

	t72 = ((x529==x530)<<(x531/x532));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x537 = 816;
	int16_t x538 = INT16_MIN;
	static uint32_t x539 = UINT32_MAX;
	int32_t x540 = INT32_MAX;
	volatile int32_t t73 = 506;

	t73 = ((x537==x538)<<(x539/x540));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x543 = -1;
	volatile uint32_t x544 = UINT32_MAX;
	int32_t t74 = -298;

	t74 = ((x541==x542)<<(x543/x544));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x545 = INT8_MAX;
	uint16_t x546 = 15318U;
	int8_t x547 = -1;
	volatile int64_t x548 = INT64_MAX;

	t75 = ((x545==x546)<<(x547/x548));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x553 = 374LL;
	uint8_t x554 = 69U;
	int32_t x555 = INT32_MIN;
	static int64_t x556 = INT64_MIN;
	static volatile int32_t t76 = 922799897;

	t76 = ((x553==x554)<<(x555/x556));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x557 = 5627LLU;
	volatile int8_t x558 = INT8_MAX;
	uint16_t x559 = 69U;
	uint16_t x560 = UINT16_MAX;

	t77 = ((x557==x558)<<(x559/x560));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x561 = 34U;
	int64_t x563 = -1LL;

	t78 = ((x561==x562)<<(x563/x564));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x566 = 474122261023138469LLU;
	int8_t x567 = -1;
	int32_t t79 = 6215;

	t79 = ((x565==x566)<<(x567/x568));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x569 = 2LL;
	int32_t x570 = INT32_MIN;
	static int32_t x571 = -1;
	static uint16_t x572 = 7172U;
	static int32_t t80 = -1446;

	t80 = ((x569==x570)<<(x571/x572));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x578 = INT64_MAX;
	int32_t x579 = -1;
	int64_t x580 = -386636031555LL;
	static int32_t t81 = 349;

	t81 = ((x577==x578)<<(x579/x580));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x581 = INT8_MAX;
	uint8_t x582 = 0U;
	int32_t x584 = INT32_MIN;
	volatile int32_t t82 = -18295;

	t82 = ((x581==x582)<<(x583/x584));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x585 = 16;
	static volatile int32_t t83 = 19;

	t83 = ((x585==x586)<<(x587/x588));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x589 = INT8_MAX;
	volatile int64_t x590 = INT64_MIN;
	int64_t x591 = 475LL;
	int16_t x592 = INT16_MIN;
	volatile int32_t t84 = 7;

	t84 = ((x589==x590)<<(x591/x592));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x593 = 23;
	uint8_t x594 = UINT8_MAX;
	volatile uint64_t x595 = UINT64_MAX;
	static int32_t t85 = -743138;

	t85 = ((x593==x594)<<(x595/x596));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x597 = -1;
	int64_t x600 = 3994532LL;

	t86 = ((x597==x598)<<(x599/x600));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x609 = -4190300956085471527LL;
	int32_t x610 = -13827;
	uint32_t x611 = 51418378U;
	volatile int16_t x612 = INT16_MIN;
	volatile int32_t t87 = 3164399;

	t87 = ((x609==x610)<<(x611/x612));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x613 = 114759;
	int8_t x614 = -9;
	volatile int32_t x615 = -1;
	static int16_t x616 = -407;
	int32_t t88 = 1;

	t88 = ((x613==x614)<<(x615/x616));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x617 = INT16_MAX;
	static int16_t x618 = 1363;
	static uint16_t x619 = 3U;
	static uint16_t x620 = 10U;
	int32_t t89 = 68104;

	t89 = ((x617==x618)<<(x619/x620));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x621 = 70;
	int32_t x622 = INT32_MIN;
	int8_t x623 = INT8_MAX;
	volatile int32_t x624 = INT32_MIN;
	int32_t t90 = 3001;

	t90 = ((x621==x622)<<(x623/x624));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x629 = 1;
	int32_t x630 = INT32_MIN;
	int16_t x631 = INT16_MIN;
	uint16_t x632 = UINT16_MAX;
	volatile int32_t t91 = 1216;

	t91 = ((x629==x630)<<(x631/x632));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x637 = UINT16_MAX;
	uint8_t x639 = UINT8_MAX;
	int32_t x640 = INT32_MAX;
	static int32_t t92 = 1054328;

	t92 = ((x637==x638)<<(x639/x640));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x641 = UINT64_MAX;
	int64_t x642 = -1LL;
	volatile int32_t x644 = -57890907;
	volatile int32_t t93 = 1274316;

	t93 = ((x641==x642)<<(x643/x644));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x649 = INT32_MIN;
	uint16_t x650 = UINT16_MAX;
	uint16_t x651 = 393U;
	static int32_t t94 = 1109;

	t94 = ((x649==x650)<<(x651/x652));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x674 = INT32_MAX;
	uint32_t x675 = 1692U;
	uint64_t x676 = UINT64_MAX;
	int32_t t95 = -233167947;

	t95 = ((x673==x674)<<(x675/x676));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x685 = INT8_MIN;
	uint64_t x686 = 53790303605LLU;
	volatile int16_t x687 = -25;
	volatile int32_t x688 = INT32_MAX;

	t96 = ((x685==x686)<<(x687/x688));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x690 = 18583446481LLU;
	uint64_t x691 = 5060438476680LLU;
	int8_t x692 = INT8_MIN;

	t97 = ((x689==x690)<<(x691/x692));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x697 = INT64_MAX;
	uint32_t x698 = 2U;
	uint16_t x700 = 3212U;
	int32_t t98 = 31278539;

	t98 = ((x697==x698)<<(x699/x700));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x701 = UINT64_MAX;
	int8_t x702 = -25;
	int16_t x703 = INT16_MIN;
	int32_t t99 = -13596;

	t99 = ((x701==x702)<<(x703/x704));

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

