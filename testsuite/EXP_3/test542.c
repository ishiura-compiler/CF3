#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x4 = 88U;
int64_t x5 = -20680723156208LL;
volatile uint64_t x7 = 1608455LLU;
uint8_t x17 = 87U;
int8_t x29 = 1;
volatile int32_t t5 = -8353;
static volatile int16_t x42 = INT16_MIN;
int64_t x43 = INT64_MAX;
int16_t x51 = INT16_MIN;
uint32_t x55 = UINT32_MAX;
static int16_t x58 = INT16_MAX;
static uint32_t x75 = 116U;
volatile int8_t x89 = 49;
static int64_t x99 = -1LL;
int32_t t17 = -1;
uint64_t x103 = 21347LLU;
int8_t x109 = INT8_MIN;
int16_t x113 = -1;
int64_t x118 = -1LL;
int32_t t22 = -9535;
static uint64_t x126 = 432589LLU;
int32_t x127 = INT32_MIN;
static volatile int16_t x133 = INT16_MIN;
uint8_t x139 = 6U;
int32_t x154 = 455611196;
volatile uint16_t x155 = UINT16_MAX;
int16_t x156 = INT16_MAX;
static int32_t x172 = 690;
int8_t x181 = -1;
int32_t t33 = -395223;
volatile int8_t x209 = -1;
volatile uint32_t x224 = UINT32_MAX;
uint8_t x225 = UINT8_MAX;
static uint8_t x230 = 30U;
static int32_t t41 = 1746120;
uint16_t x269 = 7U;
static int8_t x281 = -7;
int32_t t48 = -27915;
int8_t x291 = INT8_MIN;
volatile uint8_t x294 = UINT8_MAX;
volatile int32_t t53 = 49495;
volatile int16_t x313 = -48;
int64_t x317 = -277431LL;
int32_t x318 = INT32_MIN;
int32_t x323 = -1;
static int8_t x324 = INT8_MIN;
int32_t x334 = INT32_MIN;
int8_t x335 = INT8_MIN;
int32_t x344 = INT32_MAX;
int32_t t59 = 423927767;
int32_t x353 = -1;
uint16_t x355 = 4134U;
int8_t x359 = INT8_MAX;
int64_t x372 = -5148886191275435LL;
volatile int16_t x377 = INT16_MIN;
int16_t x383 = INT16_MIN;
volatile uint16_t x395 = 10U;
int8_t x398 = -1;
static int16_t x399 = 6;
int16_t x402 = INT16_MAX;
static int64_t x404 = -1LL;
int32_t x405 = 8090;
uint16_t x421 = UINT16_MAX;
int32_t t74 = 49678;
int16_t x430 = INT16_MAX;
static uint32_t x442 = 22651U;
volatile uint64_t x448 = 3778LLU;
int16_t x458 = INT16_MIN;
int32_t t81 = -5;
int32_t x484 = -1;
static int16_t x494 = INT16_MIN;
volatile uint32_t x516 = 14210536U;
static volatile int8_t x527 = INT8_MIN;
int8_t x529 = INT8_MIN;
static uint32_t x530 = UINT32_MAX;
int32_t x532 = -1;
int32_t t90 = -1;
static int32_t x533 = INT32_MAX;
uint64_t x536 = UINT64_MAX;
int64_t x541 = INT64_MIN;
volatile int8_t x546 = INT8_MIN;
volatile int32_t t95 = -30685266;


void f0(void) {
	uint64_t x1 = 34LLU;
	int8_t x2 = -1;
	int32_t x3 = -1;
	int32_t t0 = -47581287;

	t0 = ((x1*x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 10LLU;
	int32_t x8 = INT32_MAX;
	int32_t t1 = -1;

	t1 = ((x5*x6)<(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int8_t x10 = INT8_MAX;
	uint32_t x11 = UINT32_MAX;
	volatile int64_t x12 = 5LL;
	static int32_t t2 = -166127509;

	t2 = ((x9*x10)<(x11/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = 0;
	int16_t x19 = INT16_MAX;
	static int32_t x20 = 2;
	volatile int32_t t3 = 984086132;

	t3 = ((x17*x18)<(x19/x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x30 = -1;
	uint64_t x31 = 14348502LLU;
	static int32_t x32 = -1;
	int32_t t4 = -16085962;

	t4 = ((x29*x30)<(x31/x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = UINT32_MAX;
	static int8_t x38 = 1;
	int8_t x39 = -53;
	volatile int16_t x40 = 19;

	t5 = ((x37*x38)<(x39/x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MIN;
	static uint32_t x44 = UINT32_MAX;
	volatile int32_t t6 = 1;

	t6 = ((x41*x42)<(x43/x44));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = 106148340U;
	static int8_t x52 = INT8_MIN;
	int32_t t7 = -386743928;

	t7 = ((x49*x50)<(x51/x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 207165132724081929LLU;
	int16_t x54 = INT16_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t8 = -93;

	t8 = ((x53*x54)<(x55/x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x57 = INT16_MIN;
	int32_t x59 = INT32_MIN;
	volatile uint16_t x60 = 17U;
	static volatile int32_t t9 = 2452717;

	t9 = ((x57*x58)<(x59/x60));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = -1LL;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = -2752502;
	int8_t x64 = INT8_MIN;
	int32_t t10 = -16322;

	t10 = ((x61*x62)<(x63/x64));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 98512299554370317LLU;
	uint16_t x66 = UINT16_MAX;
	int32_t x67 = 21;
	int32_t x68 = -7;
	volatile int32_t t11 = -8326243;

	t11 = ((x65*x66)<(x67/x68));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x69 = INT32_MIN;
	volatile uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MIN;
	int64_t x72 = -1LL;
	int32_t t12 = -6238160;

	t12 = ((x69*x70)<(x71/x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x73 = -1LL;
	static int64_t x74 = -247LL;
	static uint32_t x76 = UINT32_MAX;
	volatile int32_t t13 = -9;

	t13 = ((x73*x74)<(x75/x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = INT8_MAX;
	int16_t x78 = -1;
	int16_t x79 = -1;
	int8_t x80 = -29;
	static volatile int32_t t14 = -3054984;

	t14 = ((x77*x78)<(x79/x80));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x81 = UINT64_MAX;
	int8_t x82 = INT8_MAX;
	int32_t x83 = INT32_MIN;
	uint64_t x84 = UINT64_MAX;
	int32_t t15 = -4336;

	t15 = ((x81*x82)<(x83/x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x90 = 28U;
	static volatile int16_t x91 = INT16_MAX;
	uint16_t x92 = 87U;
	volatile int32_t t16 = -16;

	t16 = ((x89*x90)<(x91/x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x97 = 15;
	uint8_t x98 = 26U;
	static int32_t x100 = INT32_MIN;

	t17 = ((x97*x98)<(x99/x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = UINT64_MAX;
	int16_t x102 = -1;
	int16_t x104 = -1;
	volatile int32_t t18 = 125;

	t18 = ((x101*x102)<(x103/x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = 15;
	uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 16U;
	int64_t x108 = 3846053633LL;
	volatile int32_t t19 = -11370;

	t19 = ((x105*x106)<(x107/x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x110 = UINT16_MAX;
	uint32_t x111 = 53285562U;
	int32_t x112 = -1;
	int32_t t20 = 6;

	t20 = ((x109*x110)<(x111/x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 59U;
	static uint64_t x116 = UINT64_MAX;
	volatile int32_t t21 = -44;

	t21 = ((x113*x114)<(x115/x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MAX;
	int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MAX;

	t22 = ((x117*x118)<(x119/x120));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = INT64_MIN;
	int8_t x128 = INT8_MIN;
	int32_t t23 = -720590885;

	t23 = ((x125*x126)<(x127/x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x134 = 3LLU;
	int32_t x135 = INT32_MIN;
	int8_t x136 = -5;
	volatile int32_t t24 = -11183;

	t24 = ((x133*x134)<(x135/x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = 740LL;
	volatile uint64_t x138 = 14045LLU;
	volatile int8_t x140 = INT8_MIN;
	static volatile int32_t t25 = 6;

	t25 = ((x137*x138)<(x139/x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = 12524;
	int8_t x150 = -1;
	int16_t x151 = -833;
	volatile uint8_t x152 = 6U;
	static volatile int32_t t26 = -9549;

	t26 = ((x149*x150)<(x151/x152));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = 480712620LL;
	volatile int32_t t27 = -26;

	t27 = ((x153*x154)<(x155/x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x157 = INT8_MIN;
	volatile int16_t x158 = INT16_MAX;
	int8_t x159 = INT8_MAX;
	int8_t x160 = -1;
	int32_t t28 = 13445;

	t28 = ((x157*x158)<(x159/x160));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x169 = INT8_MIN;
	uint32_t x170 = 306905U;
	static int64_t x171 = -1LL;
	int32_t t29 = -659;

	t29 = ((x169*x170)<(x171/x172));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x177 = -3519;
	volatile int8_t x178 = 0;
	volatile uint8_t x179 = 63U;
	uint32_t x180 = UINT32_MAX;
	volatile int32_t t30 = -91308988;

	t30 = ((x177*x178)<(x179/x180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x182 = 166LLU;
	static int32_t x183 = INT32_MAX;
	uint64_t x184 = 143399LLU;
	volatile int32_t t31 = 773580;

	t31 = ((x181*x182)<(x183/x184));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x185 = -1LL;
	volatile uint64_t x186 = 967958320218LLU;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = -1LL;
	volatile int32_t t32 = -198;

	t32 = ((x185*x186)<(x187/x188));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x201 = 1748488654U;
	int16_t x202 = -1;
	static uint8_t x203 = UINT8_MAX;
	static uint8_t x204 = UINT8_MAX;

	t33 = ((x201*x202)<(x203/x204));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x205 = -1;
	volatile int64_t x206 = -1LL;
	int8_t x207 = INT8_MIN;
	static int16_t x208 = -56;
	static volatile int32_t t34 = 8909;

	t34 = ((x205*x206)<(x207/x208));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x210 = 75123071912590677LL;
	int32_t x211 = 875;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t35 = -384760;

	t35 = ((x209*x210)<(x211/x212));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x214 = UINT32_MAX;
	volatile uint32_t x215 = 1281844056U;
	int8_t x216 = 10;
	int32_t t36 = -16375;

	t36 = ((x213*x214)<(x215/x216));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 24U;
	volatile uint16_t x219 = 22U;
	uint64_t x220 = 59608836909LLU;
	volatile int32_t t37 = -3244;

	t37 = ((x217*x218)<(x219/x220));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x221 = -835911;
	uint32_t x222 = 2U;
	static int64_t x223 = 9LL;
	volatile int32_t t38 = 650812542;

	t38 = ((x221*x222)<(x223/x224));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x226 = INT16_MAX;
	uint8_t x227 = 29U;
	static uint64_t x228 = 4207207574LLU;
	static volatile int32_t t39 = 3;

	t39 = ((x225*x226)<(x227/x228));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = -5598299;
	int8_t x231 = -1;
	static int8_t x232 = INT8_MIN;
	int32_t t40 = -228;

	t40 = ((x229*x230)<(x231/x232));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x233 = 1939247LLU;
	int64_t x234 = 1162269949951438191LL;
	volatile int32_t x235 = INT32_MAX;
	int64_t x236 = -1LL;

	t41 = ((x233*x234)<(x235/x236));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x241 = -1;
	static uint64_t x242 = 585LLU;
	static uint32_t x243 = UINT32_MAX;
	int64_t x244 = INT64_MIN;
	volatile int32_t t42 = 1;

	t42 = ((x241*x242)<(x243/x244));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x245 = 425064012929LLU;
	int32_t x246 = INT32_MAX;
	int16_t x247 = -1;
	uint8_t x248 = 3U;
	volatile int32_t t43 = -114;

	t43 = ((x245*x246)<(x247/x248));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x257 = -1;
	static int8_t x258 = INT8_MIN;
	int8_t x259 = INT8_MAX;
	int32_t x260 = 149291;
	int32_t t44 = 132;

	t44 = ((x257*x258)<(x259/x260));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x261 = -1;
	int64_t x262 = INT64_MAX;
	int8_t x263 = INT8_MAX;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t45 = 40311;

	t45 = ((x261*x262)<(x263/x264));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = INT64_MIN;
	uint16_t x272 = 576U;
	int32_t t46 = -497749411;

	t46 = ((x269*x270)<(x271/x272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x277 = INT8_MIN;
	uint8_t x278 = UINT8_MAX;
	static int32_t x279 = -1;
	static volatile int64_t x280 = -1LL;
	volatile int32_t t47 = 6064143;

	t47 = ((x277*x278)<(x279/x280));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x282 = 0U;
	volatile int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MIN;

	t48 = ((x281*x282)<(x283/x284));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x289 = -30613662LL;
	int16_t x290 = -1;
	int16_t x292 = -1;
	volatile int32_t t49 = 330082819;

	t49 = ((x289*x290)<(x291/x292));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x293 = -1;
	int32_t x295 = -1;
	int32_t x296 = 73455660;
	volatile int32_t t50 = 234580;

	t50 = ((x293*x294)<(x295/x296));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x301 = 15U;
	int64_t x302 = 2113885653517LL;
	uint8_t x303 = 69U;
	int16_t x304 = 85;
	volatile int32_t t51 = -51891986;

	t51 = ((x301*x302)<(x303/x304));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t52 = -126384;

	t52 = ((x305*x306)<(x307/x308));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x309 = 96U;
	int8_t x310 = INT8_MAX;
	uint32_t x311 = 2470U;
	int16_t x312 = INT16_MAX;

	t53 = ((x309*x310)<(x311/x312));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x314 = -1;
	int32_t x315 = 356;
	volatile uint32_t x316 = UINT32_MAX;
	static int32_t t54 = 42;

	t54 = ((x313*x314)<(x315/x316));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x319 = 49744LLU;
	volatile int16_t x320 = 723;
	static int32_t t55 = 1;

	t55 = ((x317*x318)<(x319/x320));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x321 = 3U;
	uint8_t x322 = 15U;
	static int32_t t56 = -247164498;

	t56 = ((x321*x322)<(x323/x324));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x333 = -20LL;
	uint32_t x336 = 23907724U;
	int32_t t57 = 264;

	t57 = ((x333*x334)<(x335/x336));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x337 = INT8_MAX;
	int16_t x338 = -4956;
	int32_t x339 = -516811667;
	uint64_t x340 = 1250450823898286608LLU;
	int32_t t58 = 2213;

	t58 = ((x337*x338)<(x339/x340));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x341 = INT16_MAX;
	int16_t x342 = INT16_MAX;
	static int8_t x343 = INT8_MIN;

	t59 = ((x341*x342)<(x343/x344));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x345 = INT16_MAX;
	static volatile int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t60 = -450;

	t60 = ((x345*x346)<(x347/x348));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x354 = INT16_MIN;
	uint8_t x356 = 62U;
	volatile int32_t t61 = -260;

	t61 = ((x353*x354)<(x355/x356));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x357 = 495U;
	static volatile int32_t x358 = -1;
	int8_t x360 = -1;
	int32_t t62 = 72;

	t62 = ((x357*x358)<(x359/x360));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x361 = 11619831264593LL;
	uint8_t x362 = 5U;
	uint16_t x363 = 3642U;
	int16_t x364 = INT16_MIN;
	static int32_t t63 = -410651;

	t63 = ((x361*x362)<(x363/x364));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x369 = -12;
	uint32_t x370 = UINT32_MAX;
	uint8_t x371 = UINT8_MAX;
	int32_t t64 = 1601946;

	t64 = ((x369*x370)<(x371/x372));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x378 = -1;
	static uint8_t x379 = 19U;
	static volatile uint64_t x380 = UINT64_MAX;
	volatile int32_t t65 = 63236;

	t65 = ((x377*x378)<(x379/x380));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x381 = UINT32_MAX;
	uint64_t x382 = UINT64_MAX;
	int64_t x384 = -1LL;
	int32_t t66 = -426966;

	t66 = ((x381*x382)<(x383/x384));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x385 = UINT32_MAX;
	uint16_t x386 = 760U;
	static int64_t x387 = -1648154501430662LL;
	uint64_t x388 = 64753375056400475LLU;
	volatile int32_t t67 = -1019;

	t67 = ((x385*x386)<(x387/x388));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x389 = INT16_MAX;
	uint16_t x390 = 54U;
	uint64_t x391 = 2431308LLU;
	int16_t x392 = INT16_MIN;
	static int32_t t68 = -5554;

	t68 = ((x389*x390)<(x391/x392));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x393 = -1;
	int8_t x394 = INT8_MAX;
	static volatile uint8_t x396 = 14U;
	volatile int32_t t69 = -137;

	t69 = ((x393*x394)<(x395/x396));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x397 = INT16_MAX;
	int64_t x400 = INT64_MIN;
	static int32_t t70 = -1256;

	t70 = ((x397*x398)<(x399/x400));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x401 = UINT8_MAX;
	static int16_t x403 = INT16_MIN;
	volatile int32_t t71 = 12064975;

	t71 = ((x401*x402)<(x403/x404));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x406 = -2;
	static uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MIN;
	static int32_t t72 = -79901;

	t72 = ((x405*x406)<(x407/x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x409 = 38822LLU;
	static int8_t x410 = INT8_MIN;
	static int32_t x411 = 11171040;
	static int8_t x412 = -1;
	static volatile int32_t t73 = 3;

	t73 = ((x409*x410)<(x411/x412));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x422 = 3;
	uint32_t x423 = 61888456U;
	static int16_t x424 = INT16_MIN;

	t74 = ((x421*x422)<(x423/x424));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x425 = 29U;
	int16_t x426 = -1005;
	static uint64_t x427 = 7492054140067390LLU;
	int64_t x428 = -113832047139299058LL;
	static int32_t t75 = -1664;

	t75 = ((x425*x426)<(x427/x428));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x429 = 0U;
	int16_t x431 = -1496;
	volatile uint64_t x432 = 95741LLU;
	int32_t t76 = -1831204;

	t76 = ((x429*x430)<(x431/x432));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x441 = 6U;
	volatile int16_t x443 = INT16_MAX;
	uint8_t x444 = UINT8_MAX;
	volatile int32_t t77 = 1;

	t77 = ((x441*x442)<(x443/x444));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x445 = INT16_MAX;
	volatile uint8_t x446 = UINT8_MAX;
	uint16_t x447 = UINT16_MAX;
	volatile int32_t t78 = 958267431;

	t78 = ((x445*x446)<(x447/x448));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x453 = -1;
	static uint32_t x454 = 712564U;
	uint8_t x455 = 0U;
	volatile int8_t x456 = -1;
	volatile int32_t t79 = -227;

	t79 = ((x453*x454)<(x455/x456));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x457 = INT8_MAX;
	uint32_t x459 = UINT32_MAX;
	static volatile int64_t x460 = INT64_MIN;
	int32_t t80 = 22;

	t80 = ((x457*x458)<(x459/x460));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x465 = -10474;
	int16_t x466 = INT16_MIN;
	int32_t x467 = INT32_MAX;
	volatile int32_t x468 = INT32_MIN;

	t81 = ((x465*x466)<(x467/x468));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x473 = -1;
	uint8_t x474 = UINT8_MAX;
	volatile uint8_t x475 = UINT8_MAX;
	static uint16_t x476 = 23964U;
	int32_t t82 = -3436;

	t82 = ((x473*x474)<(x475/x476));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x481 = 433U;
	static uint8_t x482 = UINT8_MAX;
	int16_t x483 = INT16_MIN;
	int32_t t83 = -385372074;

	t83 = ((x481*x482)<(x483/x484));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x493 = INT8_MIN;
	int32_t x495 = -231168049;
	int32_t x496 = INT32_MIN;
	volatile int32_t t84 = 50611787;

	t84 = ((x493*x494)<(x495/x496));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x497 = 374823378199LLU;
	int32_t x498 = -1;
	int16_t x499 = -1;
	int64_t x500 = 3466920939145512LL;
	int32_t t85 = 235747119;

	t85 = ((x497*x498)<(x499/x500));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x501 = INT8_MIN;
	uint8_t x502 = 14U;
	uint16_t x503 = 1705U;
	uint64_t x504 = UINT64_MAX;
	int32_t t86 = 10224148;

	t86 = ((x501*x502)<(x503/x504));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x513 = INT16_MIN;
	uint16_t x514 = 1684U;
	int8_t x515 = INT8_MIN;
	int32_t t87 = 2509;

	t87 = ((x513*x514)<(x515/x516));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x517 = 13842U;
	static int16_t x518 = INT16_MIN;
	int32_t x519 = INT32_MIN;
	static int32_t x520 = 377;
	volatile int32_t t88 = 99541157;

	t88 = ((x517*x518)<(x519/x520));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x525 = INT8_MIN;
	uint32_t x526 = 830599833U;
	volatile int16_t x528 = INT16_MAX;
	int32_t t89 = -25135;

	t89 = ((x525*x526)<(x527/x528));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x531 = 270;

	t90 = ((x529*x530)<(x531/x532));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x534 = UINT64_MAX;
	int16_t x535 = -3;
	int32_t t91 = -1;

	t91 = ((x533*x534)<(x535/x536));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x537 = INT32_MIN;
	int64_t x538 = 6210974LL;
	volatile uint32_t x539 = 122704597U;
	uint8_t x540 = 38U;
	int32_t t92 = 712510;

	t92 = ((x537*x538)<(x539/x540));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x542 = 0U;
	uint8_t x543 = 0U;
	int8_t x544 = -1;
	static volatile int32_t t93 = 329020625;

	t93 = ((x541*x542)<(x543/x544));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x545 = INT8_MIN;
	volatile int32_t x547 = INT32_MIN;
	static int32_t x548 = INT32_MIN;
	int32_t t94 = -643;

	t94 = ((x545*x546)<(x547/x548));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x549 = UINT32_MAX;
	int16_t x550 = 8556;
	static int32_t x551 = INT32_MAX;
	int16_t x552 = -1;

	t95 = ((x549*x550)<(x551/x552));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x557 = -1;
	int8_t x558 = INT8_MIN;
	int8_t x559 = INT8_MAX;
	volatile uint64_t x560 = 79068178LLU;
	volatile int32_t t96 = -3564;

	t96 = ((x557*x558)<(x559/x560));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x565 = -2803898246981363LL;
	uint64_t x566 = UINT64_MAX;
	int64_t x567 = -8568180787437LL;
	int8_t x568 = INT8_MIN;
	int32_t t97 = -12401952;

	t97 = ((x565*x566)<(x567/x568));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x569 = -1;
	static uint32_t x570 = 7238850U;
	int16_t x571 = 593;
	int64_t x572 = INT64_MAX;
	volatile int32_t t98 = 8482141;

	t98 = ((x569*x570)<(x571/x572));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x573 = 0U;
	uint16_t x574 = 1004U;
	int16_t x575 = INT16_MAX;
	int8_t x576 = -1;
	volatile int32_t t99 = 388;

	t99 = ((x573*x574)<(x575/x576));

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

