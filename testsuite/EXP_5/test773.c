#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x11 = INT64_MAX;
volatile int8_t x25 = INT8_MAX;
static uint32_t x27 = UINT32_MAX;
uint32_t x33 = 2104128711U;
int8_t x50 = INT8_MAX;
static int8_t x55 = -3;
volatile int16_t x59 = -2;
volatile uint64_t x60 = UINT64_MAX;
uint8_t x65 = 1U;
volatile int32_t t8 = 183683610;
int32_t x69 = 84468;
int32_t t9 = 11652385;
volatile uint16_t x73 = 53U;
int64_t x75 = INT64_MIN;
int32_t x88 = -1;
static volatile uint64_t t12 = 96349LLU;
static uint64_t x109 = UINT64_MAX;
volatile uint64_t x117 = 1859429LLU;
int16_t x118 = INT16_MIN;
int64_t x121 = 15884LL;
volatile int16_t x123 = 11;
int8_t x139 = INT8_MIN;
int64_t x143 = 3965603358LL;
int32_t t19 = 649;
uint16_t x154 = UINT16_MAX;
volatile int32_t t20 = INT32_MAX;
volatile uint64_t t21 = 212665152LLU;
volatile uint64_t x174 = UINT64_MAX;
int16_t x184 = -1;
volatile uint64_t t26 = 12539702108149821LLU;
uint64_t x189 = 382203130767965LLU;
static int16_t x234 = INT16_MIN;
uint64_t x235 = UINT64_MAX;
uint16_t x257 = UINT16_MAX;
int32_t x261 = 0;
uint8_t x265 = 9U;
int32_t x266 = -43064;
volatile uint64_t x267 = 89278491858667077LLU;
int32_t t32 = 1597;
int32_t x269 = 123480262;
volatile int32_t t33 = -5725;
int8_t x280 = 3;
int32_t t34 = 2260;
int8_t x281 = 3;
static volatile int32_t x285 = INT32_MAX;
static int64_t x310 = -27017420999484LL;
int32_t x311 = -16601;
uint32_t x318 = 1U;
uint8_t x325 = 80U;
int32_t x327 = -1;
int32_t t42 = -11825;
int32_t x335 = INT32_MAX;
volatile uint32_t x341 = UINT32_MAX;
int16_t x359 = INT16_MAX;
volatile int32_t x364 = INT32_MAX;
volatile int32_t t48 = 243829805;
uint16_t x370 = 1U;
static int16_t x371 = -1;
uint8_t x377 = 120U;
static int8_t x379 = INT8_MIN;
int16_t x398 = INT16_MIN;
volatile int32_t x399 = -24;
int8_t x403 = 15;
static int8_t x404 = -5;
int32_t t57 = -63;
volatile int64_t x451 = INT64_MIN;
static volatile uint32_t x456 = UINT32_MAX;
static uint32_t x459 = 2U;
static int8_t x461 = INT8_MAX;
uint64_t x465 = 167LLU;
uint8_t x468 = UINT8_MAX;
int32_t x475 = 29840902;
uint32_t x490 = 2U;
int64_t x491 = 14506366822044366LL;
uint16_t x500 = 2966U;
int32_t t67 = 192;
static uint16_t x505 = 107U;
uint8_t x517 = 0U;
volatile int32_t t71 = -23830;
volatile int16_t x534 = INT16_MIN;
volatile uint32_t x543 = 89U;
uint8_t x545 = 3U;
uint64_t x546 = 15023LLU;
int32_t t74 = 845007;
static int32_t t77 = -7586;
volatile uint8_t x574 = 125U;
static uint16_t x581 = UINT16_MAX;
uint32_t x584 = 336806479U;
int16_t x588 = INT16_MAX;
int8_t x589 = 0;
volatile int16_t x591 = -1;
int32_t x599 = INT32_MIN;
int32_t x603 = INT32_MAX;
uint16_t x604 = 764U;
uint64_t t86 = 1381LLU;
int8_t x621 = 6;
volatile int32_t t89 = -53;
uint32_t x640 = 939U;
int8_t x659 = -1;
int32_t t94 = -100;
int64_t x667 = -1LL;
volatile int16_t x668 = -7;
int32_t t95 = -4855484;
int32_t t96 = -1;
int32_t x678 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int64_t x2 = INT64_MAX;
	int32_t x3 = -3626786;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -8144;

	t0 = (x1<<((x2%x3)==x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 6LLU;
	volatile int8_t x6 = -1;
	volatile int64_t x7 = INT64_MIN;
	volatile uint8_t x8 = 2U;
	uint64_t t1 = 11290074333824366LLU;

	t1 = (x5<<((x6%x7)==x8));

	if (t1 != 6LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = 9;
	int8_t x10 = INT8_MAX;
	int8_t x12 = 45;
	static volatile int32_t t2 = 377763;

	t2 = (x9<<((x10%x11)==x12));

	if (t2 != 9) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x26 = UINT16_MAX;
	volatile int8_t x28 = INT8_MAX;
	volatile int32_t t3 = -17;

	t3 = (x25<<((x26%x27)==x28));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	int32_t x36 = -9;
	volatile uint32_t t4 = 20782134U;

	t4 = (x33<<((x34%x35)==x36));

	if (t4 != 2104128711U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x49 = 24666436LLU;
	static uint8_t x51 = 20U;
	int8_t x52 = INT8_MAX;
	uint64_t t5 = 10411416559LLU;

	t5 = (x49<<((x50%x51)==x52));

	if (t5 != 24666436LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x53 = UINT32_MAX;
	static uint16_t x54 = 8U;
	int8_t x56 = INT8_MAX;
	uint32_t t6 = UINT32_MAX;

	t6 = (x53<<((x54%x55)==x56));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x57 = 72U;
	static int16_t x58 = INT16_MAX;
	volatile int32_t t7 = -66227;

	t7 = (x57<<((x58%x59)==x60));

	if (t7 != 72) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x66 = UINT8_MAX;
	static int16_t x67 = INT16_MIN;
	uint8_t x68 = 10U;

	t8 = (x65<<((x66%x67)==x68));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x70 = INT16_MIN;
	volatile int32_t x71 = -1245;
	uint8_t x72 = 10U;

	t9 = (x69<<((x70%x71)==x72));

	if (t9 != 84468) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x74 = -2373;
	volatile int16_t x76 = 1;
	int32_t t10 = -5745;

	t10 = (x73<<((x74%x75)==x76));

	if (t10 != 53) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x85 = INT64_MAX;
	int8_t x86 = INT8_MIN;
	uint64_t x87 = 211535310LLU;
	volatile int64_t t11 = INT64_MAX;

	t11 = (x85<<((x86%x87)==x88));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x105 = 233797742162562273LLU;
	int32_t x106 = 224;
	uint16_t x107 = 1200U;
	static int32_t x108 = -1;

	t12 = (x105<<((x106%x107)==x108));

	if (t12 != 233797742162562273LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x110 = 121087LL;
	int16_t x111 = -10;
	int8_t x112 = INT8_MIN;
	uint64_t t13 = UINT64_MAX;

	t13 = (x109<<((x110%x111)==x112));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x113 = 66753465LL;
	int16_t x114 = INT16_MIN;
	uint32_t x115 = 549581U;
	int32_t x116 = 59653;
	int64_t t14 = -7773965264293LL;

	t14 = (x113<<((x114%x115)==x116));

	if (t14 != 66753465LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x119 = INT16_MIN;
	volatile uint16_t x120 = 1969U;
	volatile uint64_t t15 = 48065553LLU;

	t15 = (x117<<((x118%x119)==x120));

	if (t15 != 1859429LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x122 = 8193413LLU;
	uint16_t x124 = 518U;
	volatile int64_t t16 = 211636631LL;

	t16 = (x121<<((x122%x123)==x124));

	if (t16 != 15884LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x133 = UINT64_MAX;
	static volatile uint8_t x134 = UINT8_MAX;
	uint32_t x135 = UINT32_MAX;
	uint32_t x136 = 22U;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x133<<((x134%x135)==x136));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x137 = 5LLU;
	volatile int16_t x138 = -1;
	volatile int8_t x140 = INT8_MIN;
	uint64_t t18 = 1644029050484146LLU;

	t18 = (x137<<((x138%x139)==x140));

	if (t18 != 5LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x141 = INT8_MAX;
	uint8_t x142 = 29U;
	static int8_t x144 = 1;

	t19 = (x141<<((x142%x143)==x144));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x153 = INT32_MAX;
	volatile int16_t x155 = INT16_MIN;
	static int8_t x156 = -1;

	t20 = (x153<<((x154%x155)==x156));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x157 = 3309LLU;
	int64_t x158 = INT64_MAX;
	uint16_t x159 = UINT16_MAX;
	static uint64_t x160 = 16LLU;

	t21 = (x157<<((x158%x159)==x160));

	if (t21 != 3309LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MIN;
	volatile int8_t x163 = INT8_MIN;
	int16_t x164 = 130;
	int32_t t22 = 466;

	t22 = (x161<<((x162%x163)==x164));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x165 = 15U;
	static int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MAX;
	static uint32_t x168 = UINT32_MAX;
	volatile int32_t t23 = 6;

	t23 = (x165<<((x166%x167)==x168));

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x173 = 2U;
	static int16_t x175 = -33;
	int16_t x176 = INT16_MAX;
	static uint32_t t24 = 38852556U;

	t24 = (x173<<((x174%x175)==x176));

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x177 = INT8_MAX;
	int8_t x178 = -36;
	int32_t x179 = INT32_MIN;
	volatile int16_t x180 = -901;
	static int32_t t25 = 516168959;

	t25 = (x177<<((x178%x179)==x180));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x181 = 41535LLU;
	int32_t x182 = 5646;
	static int16_t x183 = 716;

	t26 = (x181<<((x182%x183)==x184));

	if (t26 != 41535LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	static int16_t x192 = INT16_MAX;
	static volatile uint64_t t27 = 165860LLU;

	t27 = (x189<<((x190%x191)==x192));

	if (t27 != 382203130767965LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x233 = 651972948;
	int32_t x236 = -28994727;
	int32_t t28 = 509075496;

	t28 = (x233<<((x234%x235)==x236));

	if (t28 != 651972948) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x253 = INT64_MAX;
	int16_t x254 = INT16_MAX;
	volatile int16_t x255 = -90;
	uint16_t x256 = 160U;
	volatile int64_t t29 = INT64_MAX;

	t29 = (x253<<((x254%x255)==x256));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x258 = UINT32_MAX;
	volatile int32_t x259 = INT32_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t30 = 1;

	t30 = (x257<<((x258%x259)==x260));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x262 = -1033216009143241LL;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t x264 = 383;
	static volatile int32_t t31 = -2687;

	t31 = (x261<<((x262%x263)==x264));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x268 = UINT32_MAX;

	t32 = (x265<<((x266%x267)==x268));

	if (t32 != 9) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x270 = -1;
	int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MAX;

	t33 = (x269<<((x270%x271)==x272));

	if (t33 != 123480262) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x277 = 6U;
	static int8_t x278 = INT8_MIN;
	uint8_t x279 = 31U;

	t34 = (x277<<((x278%x279)==x280));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x282 = 203159LLU;
	volatile int8_t x283 = INT8_MIN;
	uint64_t x284 = UINT64_MAX;
	int32_t t35 = -282;

	t35 = (x281<<((x282%x283)==x284));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x286 = INT8_MIN;
	int32_t x287 = INT32_MAX;
	volatile int32_t x288 = INT32_MAX;
	int32_t t36 = INT32_MAX;

	t36 = (x285<<((x286%x287)==x288));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x301 = 18232327LLU;
	int64_t x302 = INT64_MIN;
	uint32_t x303 = 1186625545U;
	int64_t x304 = INT64_MIN;
	uint64_t t37 = 7LLU;

	t37 = (x301<<((x302%x303)==x304));

	if (t37 != 18232327LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x309 = 0;
	int64_t x312 = -1LL;
	volatile int32_t t38 = 0;

	t38 = (x309<<((x310%x311)==x312));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x313 = 60416358474961174LLU;
	static volatile int16_t x314 = INT16_MAX;
	int16_t x315 = -1;
	int64_t x316 = -1LL;
	uint64_t t39 = 27880850958270875LLU;

	t39 = (x313<<((x314%x315)==x316));

	if (t39 != 60416358474961174LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x317 = 0U;
	static int32_t x319 = -7925;
	volatile int8_t x320 = 1;
	int32_t t40 = 19389;

	t40 = (x317<<((x318%x319)==x320));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x321 = 11U;
	int16_t x322 = -6003;
	int8_t x323 = INT8_MAX;
	static volatile uint64_t x324 = 8471158434LLU;
	int32_t t41 = 1857;

	t41 = (x321<<((x322%x323)==x324));

	if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x326 = INT32_MIN;
	static int8_t x328 = -15;

	t42 = (x325<<((x326%x327)==x328));

	if (t42 != 80) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	int32_t x336 = -359372;
	uint64_t t43 = UINT64_MAX;

	t43 = (x333<<((x334%x335)==x336));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x337 = 14;
	static volatile int8_t x338 = -1;
	volatile uint32_t x339 = 397645930U;
	int64_t x340 = INT64_MIN;
	volatile int32_t t44 = 1476;

	t44 = (x337<<((x338%x339)==x340));

	if (t44 != 14) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x342 = 7460829;
	uint8_t x343 = UINT8_MAX;
	volatile uint32_t x344 = 6952495U;
	uint32_t t45 = UINT32_MAX;

	t45 = (x341<<((x342%x343)==x344));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 131U;
	volatile int8_t x355 = -1;
	int64_t x356 = -1LL;
	static volatile int32_t t46 = 1635;

	t46 = (x353<<((x354%x355)==x356));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x357 = 9;
	volatile int8_t x358 = -1;
	static int64_t x360 = INT64_MAX;
	int32_t t47 = -387;

	t47 = (x357<<((x358%x359)==x360));

	if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x361 = 3;
	uint64_t x362 = 49980595990305LLU;
	int32_t x363 = INT32_MIN;

	t48 = (x361<<((x362%x363)==x364));

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x369 = 6U;
	int8_t x372 = INT8_MIN;
	static int32_t t49 = -25961;

	t49 = (x369<<((x370%x371)==x372));

	if (t49 != 6) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x378 = 10U;
	static volatile int64_t x380 = -1LL;
	static int32_t t50 = 78063;

	t50 = (x377<<((x378%x379)==x380));

	if (t50 != 120) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x397 = 9485LL;
	volatile int16_t x400 = -1;
	int64_t t51 = 4408493707LL;

	t51 = (x397<<((x398%x399)==x400));

	if (t51 != 9485LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x401 = 244383298;
	uint64_t x402 = UINT64_MAX;
	int32_t t52 = 27;

	t52 = (x401<<((x402%x403)==x404));

	if (t52 != 244383298) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x405 = 15920;
	static uint32_t x406 = 14U;
	static int8_t x407 = 5;
	uint16_t x408 = 27071U;
	int32_t t53 = -5450221;

	t53 = (x405<<((x406%x407)==x408));

	if (t53 != 15920) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x413 = 1622986096U;
	int64_t x414 = INT64_MAX;
	int8_t x415 = INT8_MAX;
	int32_t x416 = -16349;
	volatile uint32_t t54 = 255881245U;

	t54 = (x413<<((x414%x415)==x416));

	if (t54 != 1622986096U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x425 = UINT16_MAX;
	volatile uint8_t x426 = 8U;
	uint16_t x427 = 3U;
	static volatile int32_t x428 = 4323;
	int32_t t55 = 390987497;

	t55 = (x425<<((x426%x427)==x428));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x433 = INT64_MAX;
	uint64_t x434 = UINT64_MAX;
	int8_t x435 = -23;
	uint64_t x436 = 566382809LLU;
	static volatile int64_t t56 = INT64_MAX;

	t56 = (x433<<((x434%x435)==x436));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x445 = UINT16_MAX;
	static int8_t x446 = INT8_MIN;
	static int8_t x447 = 1;
	int64_t x448 = -1LL;

	t57 = (x445<<((x446%x447)==x448));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x449 = 184584LLU;
	static int8_t x450 = -1;
	int8_t x452 = -1;
	uint64_t t58 = 4355299435559381722LLU;

	t58 = (x449<<((x450%x451)==x452));

	if (t58 != 369168LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x453 = 756U;
	int32_t x454 = INT32_MAX;
	int8_t x455 = 1;
	static volatile int32_t t59 = -58;

	t59 = (x453<<((x454%x455)==x456));

	if (t59 != 756) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x457 = UINT8_MAX;
	static int8_t x458 = INT8_MAX;
	int8_t x460 = INT8_MIN;
	static int32_t t60 = -302606216;

	t60 = (x457<<((x458%x459)==x460));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MIN;
	static int16_t x464 = INT16_MIN;
	int32_t t61 = 2;

	t61 = (x461<<((x462%x463)==x464));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x466 = -1;
	int8_t x467 = INT8_MIN;
	uint64_t t62 = 161809LLU;

	t62 = (x465<<((x466%x467)==x468));

	if (t62 != 167LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x473 = 875U;
	int32_t x474 = INT32_MAX;
	int16_t x476 = -1;
	static volatile int32_t t63 = -4307;

	t63 = (x473<<((x474%x475)==x476));

	if (t63 != 875) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x477 = 2447719620418LLU;
	uint32_t x478 = UINT32_MAX;
	volatile int8_t x479 = -2;
	static int16_t x480 = 5;
	uint64_t t64 = 162LLU;

	t64 = (x477<<((x478%x479)==x480));

	if (t64 != 2447719620418LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x481 = 16090U;
	static int32_t x482 = INT32_MAX;
	volatile int64_t x483 = -2999928989564LL;
	uint8_t x484 = UINT8_MAX;
	volatile uint32_t t65 = 603234U;

	t65 = (x481<<((x482%x483)==x484));

	if (t65 != 16090U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x489 = INT32_MAX;
	int32_t x492 = -6;
	static volatile int32_t t66 = INT32_MAX;

	t66 = (x489<<((x490%x491)==x492));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x497 = INT16_MAX;
	int16_t x498 = INT16_MAX;
	int8_t x499 = INT8_MAX;

	t67 = (x497<<((x498%x499)==x500));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x506 = 149LLU;
	uint32_t x507 = UINT32_MAX;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t68 = -146;

	t68 = (x505<<((x506%x507)==x508));

	if (t68 != 107) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x509 = 342U;
	uint64_t x510 = 971720LLU;
	int16_t x511 = INT16_MIN;
	volatile uint32_t x512 = UINT32_MAX;
	volatile uint32_t t69 = 139500U;

	t69 = (x509<<((x510%x511)==x512));

	if (t69 != 342U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x518 = 7U;
	int64_t x519 = -1LL;
	int16_t x520 = -1;
	int32_t t70 = -1648;

	t70 = (x517<<((x518%x519)==x520));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x525 = 84U;
	uint32_t x526 = 4U;
	uint16_t x527 = 57U;
	int32_t x528 = -1;

	t71 = (x525<<((x526%x527)==x528));

	if (t71 != 84) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x533 = 2954U;
	static int8_t x535 = 3;
	static uint64_t x536 = 1870599936761898LLU;
	volatile uint32_t t72 = 109U;

	t72 = (x533<<((x534%x535)==x536));

	if (t72 != 2954U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x541 = 888290297U;
	int8_t x542 = INT8_MIN;
	volatile uint64_t x544 = UINT64_MAX;
	volatile uint32_t t73 = 115U;

	t73 = (x541<<((x542%x543)==x544));

	if (t73 != 888290297U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x547 = 1033640394;
	uint32_t x548 = 33U;

	t74 = (x545<<((x546%x547)==x548));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x549 = INT8_MAX;
	int16_t x550 = 0;
	uint32_t x551 = 122U;
	int32_t x552 = -1;
	volatile int32_t t75 = -2954;

	t75 = (x549<<((x550%x551)==x552));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x561 = INT8_MAX;
	uint16_t x562 = UINT16_MAX;
	int64_t x563 = -6851132LL;
	int8_t x564 = INT8_MIN;
	int32_t t76 = -243149;

	t76 = (x561<<((x562%x563)==x564));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x569 = 0;
	uint64_t x570 = 17LLU;
	int32_t x571 = INT32_MIN;
	volatile int32_t x572 = -1;

	t77 = (x569<<((x570%x571)==x572));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x573 = 56U;
	int64_t x575 = INT64_MIN;
	int32_t x576 = INT32_MIN;
	int32_t t78 = -687051135;

	t78 = (x573<<((x574%x575)==x576));

	if (t78 != 56) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x582 = INT8_MAX;
	int32_t x583 = -2429106;
	int32_t t79 = -4;

	t79 = (x581<<((x582%x583)==x584));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x585 = 85U;
	volatile int8_t x586 = -16;
	uint8_t x587 = 8U;
	int32_t t80 = -35;

	t80 = (x585<<((x586%x587)==x588));

	if (t80 != 85) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x590 = UINT8_MAX;
	static volatile int16_t x592 = INT16_MIN;
	volatile int32_t t81 = 101544;

	t81 = (x589<<((x590%x591)==x592));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x593 = 1;
	uint8_t x594 = 124U;
	static volatile int32_t x595 = -22860265;
	static int64_t x596 = INT64_MIN;
	int32_t t82 = -58;

	t82 = (x593<<((x594%x595)==x596));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x597 = UINT8_MAX;
	static uint32_t x598 = UINT32_MAX;
	int8_t x600 = INT8_MAX;
	int32_t t83 = 2770;

	t83 = (x597<<((x598%x599)==x600));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x601 = 1;
	int16_t x602 = -3;
	volatile int32_t t84 = 1;

	t84 = (x601<<((x602%x603)==x604));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x613 = 3U;
	int32_t x614 = INT32_MIN;
	uint64_t x615 = 1715195410122245095LLU;
	volatile uint16_t x616 = 2U;
	static volatile int32_t t85 = -23600636;

	t85 = (x613<<((x614%x615)==x616));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x617 = 223035LLU;
	int32_t x618 = INT32_MIN;
	int64_t x619 = INT64_MIN;
	static volatile uint8_t x620 = 80U;

	t86 = (x617<<((x618%x619)==x620));

	if (t86 != 223035LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x622 = INT64_MIN;
	int16_t x623 = 172;
	volatile uint64_t x624 = 4990LLU;
	int32_t t87 = -6869048;

	t87 = (x621<<((x622%x623)==x624));

	if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x625 = INT16_MAX;
	uint8_t x626 = 26U;
	uint64_t x627 = 86LLU;
	int16_t x628 = -15504;
	volatile int32_t t88 = 7981;

	t88 = (x625<<((x626%x627)==x628));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x629 = 279;
	uint32_t x630 = UINT32_MAX;
	volatile int8_t x631 = INT8_MAX;
	static int64_t x632 = 2567LL;

	t89 = (x629<<((x630%x631)==x632));

	if (t89 != 279) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x633 = INT8_MAX;
	static int8_t x634 = INT8_MIN;
	int8_t x635 = INT8_MIN;
	int8_t x636 = INT8_MIN;
	int32_t t90 = -3338277;

	t90 = (x633<<((x634%x635)==x636));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x637 = INT8_MAX;
	static int64_t x638 = INT64_MAX;
	static uint64_t x639 = UINT64_MAX;
	volatile int32_t t91 = -3;

	t91 = (x637<<((x638%x639)==x640));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x645 = UINT32_MAX;
	volatile int32_t x646 = -30146591;
	volatile uint32_t x647 = 650948U;
	volatile int8_t x648 = 1;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x645<<((x646%x647)==x648));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x649 = UINT16_MAX;
	int32_t x650 = -294414;
	uint64_t x651 = 15022640422787LLU;
	int8_t x652 = -1;
	int32_t t93 = 86;

	t93 = (x649<<((x650%x651)==x652));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x657 = 536U;
	int8_t x658 = INT8_MAX;
	int8_t x660 = -6;

	t94 = (x657<<((x658%x659)==x660));

	if (t94 != 536) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x665 = UINT16_MAX;
	int32_t x666 = 7;

	t95 = (x665<<((x666%x667)==x668));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x669 = UINT8_MAX;
	volatile int8_t x670 = INT8_MIN;
	volatile int16_t x671 = INT16_MAX;
	uint8_t x672 = UINT8_MAX;

	t96 = (x669<<((x670%x671)==x672));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x677 = 1;
	static int32_t x679 = 3;
	int8_t x680 = INT8_MIN;
	int32_t t97 = -7081662;

	t97 = (x677<<((x678%x679)==x680));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x681 = UINT8_MAX;
	uint8_t x682 = UINT8_MAX;
	int8_t x683 = INT8_MAX;
	int64_t x684 = -1LL;
	int32_t t98 = -21547;

	t98 = (x681<<((x682%x683)==x684));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x689 = 520010404U;
	volatile int32_t x690 = 31749;
	int32_t x691 = INT32_MIN;
	int32_t x692 = -1;
	static volatile uint32_t t99 = 126U;

	t99 = (x689<<((x690%x691)==x692));

	if (t99 != 520010404U) { NG(); } else { ; }
	
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

