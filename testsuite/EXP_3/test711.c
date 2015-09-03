#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MIN;
volatile int32_t x4 = -1;
int32_t t3 = -2746;
int8_t x18 = INT8_MAX;
static int32_t t5 = 12;
static int64_t x33 = -1LL;
static uint32_t x34 = 48U;
int64_t x52 = -1LL;
volatile uint16_t x56 = 5950U;
int32_t t10 = -18;
int8_t x57 = 5;
int32_t x65 = -101;
static uint32_t x68 = 449750239U;
int32_t x75 = INT32_MIN;
volatile int16_t x81 = INT16_MIN;
volatile uint8_t x104 = UINT8_MAX;
int16_t x108 = 4197;
uint64_t x143 = UINT64_MAX;
static int16_t x145 = -4773;
int16_t x146 = INT16_MIN;
uint64_t x147 = 3480LLU;
uint32_t x150 = 7U;
int32_t x159 = 29528;
static uint8_t x175 = 1U;
int64_t x189 = -222553184011656626LL;
int64_t x191 = -18912162815LL;
uint8_t x192 = 11U;
volatile int8_t x202 = INT8_MAX;
int64_t x205 = 87380032811310LL;
static int8_t x206 = -21;
int8_t x219 = -42;
int8_t x233 = 1;
int32_t t36 = -1014969610;
volatile int32_t t38 = 234;
int16_t x265 = 12724;
uint8_t x266 = 59U;
static int32_t x267 = 29092;
volatile int32_t t40 = 467;
int64_t x271 = INT64_MIN;
int64_t x272 = INT64_MAX;
int32_t t41 = -19821;
uint8_t x276 = 53U;
int32_t t43 = -419598;
int16_t x282 = INT16_MAX;
int8_t x283 = INT8_MIN;
int32_t x284 = 543872;
volatile uint64_t x285 = 17101077657LLU;
volatile int32_t t46 = 228;
volatile int8_t x294 = INT8_MIN;
static int32_t t48 = 1221273;
volatile int8_t x302 = -1;
static volatile int32_t t50 = 985204;
int8_t x313 = -14;
static volatile uint32_t x317 = 34716400U;
int64_t x321 = 310481905541319LL;
int64_t x323 = INT64_MIN;
int16_t x324 = 35;
uint8_t x337 = UINT8_MAX;
volatile int32_t x344 = -34290;
volatile int32_t t57 = 289907361;
int32_t t59 = 0;
uint16_t x388 = 5U;
static uint16_t x438 = 7655U;
int8_t x440 = INT8_MIN;
int32_t t71 = -10;
static uint64_t x441 = UINT64_MAX;
static int32_t x451 = 46744447;
static volatile uint64_t x453 = 1989724LLU;
int32_t t75 = 340995;
uint16_t x457 = UINT16_MAX;
int16_t x458 = INT16_MAX;
volatile int64_t x464 = -960164LL;
int16_t x470 = 0;
static int8_t x472 = INT8_MIN;
int8_t x477 = -1;
uint8_t x479 = 14U;
int8_t x482 = -1;
int8_t x484 = 35;
static int16_t x496 = -1;
volatile int32_t t85 = -2977;
int32_t x508 = INT32_MIN;
int64_t x520 = INT64_MAX;
int32_t x521 = -1;
volatile uint16_t x522 = 2U;
int64_t x527 = -1086191995LL;
int32_t t89 = 57689645;
uint16_t x530 = 2831U;
int64_t x537 = -604360795333LL;
int32_t x542 = -29;
volatile int32_t t93 = 6051033;
int8_t x552 = INT8_MAX;
static int64_t x575 = INT64_MIN;
static int16_t x581 = INT16_MIN;
static int32_t x587 = -140118;
uint64_t x589 = UINT64_MAX;
volatile int64_t x590 = -271019LL;
int32_t t99 = 402769560;


void f0(void) {
	int8_t x2 = INT8_MAX;
	int8_t x3 = INT8_MAX;
	int32_t t0 = 162;

	t0 = ((x1*x2)<(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static int8_t x6 = -1;
	static int32_t x7 = 969984;
	volatile uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = -371;

	t1 = ((x5*x6)<(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = -1;
	int8_t x10 = INT8_MIN;
	static int32_t x11 = INT32_MAX;
	uint8_t x12 = 1U;
	volatile int32_t t2 = 433810;

	t2 = ((x9*x10)<(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = INT8_MIN;
	uint64_t x15 = 722114560435LLU;
	int64_t x16 = INT64_MIN;

	t3 = ((x13*x14)<(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 43U;
	uint64_t x19 = 282508195257058875LLU;
	static int16_t x20 = 2153;
	static volatile int32_t t4 = 1356;

	t4 = ((x17*x18)<(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	uint64_t x22 = 1LLU;
	uint64_t x23 = 390746920086932550LLU;
	int64_t x24 = INT64_MIN;

	t5 = ((x21*x22)<(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int16_t x26 = INT16_MIN;
	int64_t x27 = -1945476501357034021LL;
	static volatile int16_t x28 = -550;
	int32_t t6 = 1816961;

	t6 = ((x25*x26)<(x27%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x35 = 27U;
	int32_t x36 = -1;
	int32_t t7 = 5;

	t7 = ((x33*x34)<(x35%x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x45 = INT16_MIN;
	volatile int64_t x46 = 11178927LL;
	int64_t x47 = 311LL;
	uint16_t x48 = 2382U;
	volatile int32_t t8 = -116358505;

	t8 = ((x45*x46)<(x47%x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x49 = 3620U;
	volatile int8_t x50 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;
	int32_t t9 = -5;

	t9 = ((x49*x50)<(x51%x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x53 = 725U;
	int16_t x54 = -348;
	uint64_t x55 = 8751240171592LLU;

	t10 = ((x53*x54)<(x55%x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = INT16_MIN;
	uint8_t x59 = 3U;
	uint64_t x60 = 533797651443212196LLU;
	volatile int32_t t11 = -1945046;

	t11 = ((x57*x58)<(x59%x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = 0;
	static int32_t x62 = INT32_MIN;
	uint64_t x63 = 13LLU;
	int8_t x64 = -1;
	int32_t t12 = -1217214;

	t12 = ((x61*x62)<(x63%x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x66 = UINT8_MAX;
	static int8_t x67 = -1;
	int32_t t13 = 0;

	t13 = ((x65*x66)<(x67%x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = 30;
	uint8_t x74 = 1U;
	int8_t x76 = 3;
	volatile int32_t t14 = -185123346;

	t14 = ((x73*x74)<(x75%x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	static int64_t x78 = -1LL;
	int32_t x79 = INT32_MIN;
	static int32_t x80 = INT32_MIN;
	static int32_t t15 = 214690;

	t15 = ((x77*x78)<(x79%x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x82 = INT16_MAX;
	volatile int64_t x83 = INT64_MIN;
	int32_t x84 = 14578;
	int32_t t16 = -1;

	t16 = ((x81*x82)<(x83%x84));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x89 = -1;
	int32_t x90 = -1;
	int64_t x91 = -261587721LL;
	int32_t x92 = INT32_MAX;
	static volatile int32_t t17 = 0;

	t17 = ((x89*x90)<(x91%x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int32_t x94 = INT32_MIN;
	int8_t x95 = -1;
	int32_t x96 = INT32_MIN;
	int32_t t18 = 1011249863;

	t18 = ((x93*x94)<(x95%x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x101 = 1;
	static volatile uint32_t x102 = 458991042U;
	int8_t x103 = -19;
	int32_t t19 = -5445;

	t19 = ((x101*x102)<(x103%x104));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 18163U;
	int8_t x106 = -6;
	int8_t x107 = INT8_MIN;
	volatile int32_t t20 = -381;

	t20 = ((x105*x106)<(x107%x108));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 3LLU;
	int64_t x110 = 2004420486420366391LL;
	uint64_t x111 = 1LLU;
	int64_t x112 = INT64_MIN;
	static int32_t t21 = 4026665;

	t21 = ((x109*x110)<(x111%x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = -1;
	static uint16_t x118 = UINT16_MAX;
	int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t22 = 0;

	t22 = ((x117*x118)<(x119%x120));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x141 = 841U;
	static volatile uint8_t x142 = 1U;
	int64_t x144 = -1LL;
	volatile int32_t t23 = 26;

	t23 = ((x141*x142)<(x143%x144));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x148 = 1540U;
	volatile int32_t t24 = -4;

	t24 = ((x145*x146)<(x147%x148));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x149 = 1;
	int8_t x151 = 3;
	volatile int16_t x152 = INT16_MIN;
	int32_t t25 = -64300238;

	t25 = ((x149*x150)<(x151%x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int64_t x154 = 559467074LL;
	uint64_t x155 = UINT64_MAX;
	static int8_t x156 = -5;
	volatile int32_t t26 = -197;

	t26 = ((x153*x154)<(x155%x156));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x157 = 938018462488246LLU;
	uint64_t x158 = 121LLU;
	uint32_t x160 = 30701U;
	static volatile int32_t t27 = -15712111;

	t27 = ((x157*x158)<(x159%x160));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x173 = -1;
	volatile int32_t x174 = -1;
	volatile int16_t x176 = INT16_MAX;
	static volatile int32_t t28 = -3581;

	t28 = ((x173*x174)<(x175%x176));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x177 = 34LL;
	int16_t x178 = 1009;
	int32_t x179 = -1994476;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t29 = 122;

	t29 = ((x177*x178)<(x179%x180));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x185 = 234U;
	uint16_t x186 = 6388U;
	static int8_t x187 = 3;
	static volatile uint32_t x188 = 1U;
	volatile int32_t t30 = -323408825;

	t30 = ((x185*x186)<(x187%x188));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x190 = 2;
	volatile int32_t t31 = 87523;

	t31 = ((x189*x190)<(x191%x192));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x201 = INT16_MAX;
	volatile int16_t x203 = 0;
	int32_t x204 = INT32_MAX;
	static int32_t t32 = -2348204;

	t32 = ((x201*x202)<(x203%x204));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x207 = INT16_MIN;
	static int32_t x208 = INT32_MAX;
	volatile int32_t t33 = -3105;

	t33 = ((x205*x206)<(x207%x208));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x209 = 3707U;
	uint64_t x210 = 6819188LLU;
	uint8_t x211 = 2U;
	static uint64_t x212 = 2710681695917LLU;
	volatile int32_t t34 = -3350161;

	t34 = ((x209*x210)<(x211%x212));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x217 = 6969007820LL;
	uint8_t x218 = 17U;
	uint32_t x220 = 23966168U;
	int32_t t35 = -46643;

	t35 = ((x217*x218)<(x219%x220));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x234 = -1;
	uint32_t x235 = UINT32_MAX;
	int8_t x236 = INT8_MAX;

	t36 = ((x233*x234)<(x235%x236));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x241 = 766022827LLU;
	static volatile int8_t x242 = 0;
	uint32_t x243 = UINT32_MAX;
	static int64_t x244 = INT64_MIN;
	int32_t t37 = 1;

	t37 = ((x241*x242)<(x243%x244));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x246 = UINT32_MAX;
	uint32_t x247 = 91947004U;
	static int8_t x248 = INT8_MAX;

	t38 = ((x245*x246)<(x247%x248));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x253 = INT8_MIN;
	static int32_t x254 = -1;
	volatile int32_t x255 = -105;
	uint64_t x256 = 5241850LLU;
	volatile int32_t t39 = -104406;

	t39 = ((x253*x254)<(x255%x256));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x268 = INT8_MIN;

	t40 = ((x265*x266)<(x267%x268));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x269 = INT64_MAX;
	uint64_t x270 = 175305LLU;

	t41 = ((x269*x270)<(x271%x272));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x273 = 8311;
	uint16_t x274 = 1054U;
	int8_t x275 = -1;
	volatile int32_t t42 = 1;

	t42 = ((x273*x274)<(x275%x276));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x277 = 1730659057U;
	uint16_t x278 = 4U;
	uint64_t x279 = 7400LLU;
	int16_t x280 = -1;

	t43 = ((x277*x278)<(x279%x280));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x281 = 48598;
	int32_t t44 = -446;

	t44 = ((x281*x282)<(x283%x284));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x286 = 6374U;
	int8_t x287 = INT8_MAX;
	static volatile uint8_t x288 = 15U;
	int32_t t45 = 19526535;

	t45 = ((x285*x286)<(x287%x288));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x289 = INT16_MAX;
	uint8_t x290 = 2U;
	uint64_t x291 = 3504037572LLU;
	volatile int16_t x292 = INT16_MIN;

	t46 = ((x289*x290)<(x291%x292));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x293 = INT8_MIN;
	int16_t x295 = 94;
	volatile int32_t x296 = INT32_MAX;
	int32_t t47 = 352;

	t47 = ((x293*x294)<(x295%x296));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = UINT16_MAX;

	t48 = ((x297*x298)<(x299%x300));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x301 = 1U;
	int64_t x303 = -1LL;
	int16_t x304 = -1;
	static volatile int32_t t49 = 320;

	t49 = ((x301*x302)<(x303%x304));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x309 = 30539U;
	uint32_t x310 = 414U;
	volatile int16_t x311 = 4;
	int8_t x312 = INT8_MIN;

	t50 = ((x309*x310)<(x311%x312));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x314 = -1;
	int16_t x315 = INT16_MAX;
	int32_t x316 = -1;
	int32_t t51 = -26102615;

	t51 = ((x313*x314)<(x315%x316));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x318 = INT16_MIN;
	volatile int16_t x319 = -455;
	int8_t x320 = 23;
	volatile int32_t t52 = 27;

	t52 = ((x317*x318)<(x319%x320));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x322 = 7610649062LLU;
	volatile int32_t t53 = -13;

	t53 = ((x321*x322)<(x323%x324));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x325 = UINT64_MAX;
	static volatile int8_t x326 = INT8_MIN;
	uint64_t x327 = 6436849283LLU;
	int64_t x328 = INT64_MIN;
	volatile int32_t t54 = -12;

	t54 = ((x325*x326)<(x327%x328));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x338 = 1348246;
	volatile uint32_t x339 = 2U;
	int16_t x340 = -734;
	volatile int32_t t55 = 281762603;

	t55 = ((x337*x338)<(x339%x340));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x341 = INT64_MAX;
	volatile int8_t x342 = -1;
	int16_t x343 = INT16_MIN;
	volatile int32_t t56 = 160091;

	t56 = ((x341*x342)<(x343%x344));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x345 = -1;
	int32_t x346 = -1;
	int32_t x347 = -1;
	volatile uint8_t x348 = UINT8_MAX;

	t57 = ((x345*x346)<(x347%x348));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x353 = -1;
	volatile int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MAX;
	static volatile int8_t x356 = 7;
	int32_t t58 = -5693638;

	t58 = ((x353*x354)<(x355%x356));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x357 = -29376480101141LL;
	int8_t x358 = 1;
	int32_t x359 = INT32_MAX;
	static int32_t x360 = -800;

	t59 = ((x357*x358)<(x359%x360));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x361 = 15944;
	volatile int8_t x362 = INT8_MAX;
	volatile int16_t x363 = INT16_MAX;
	int8_t x364 = -29;
	static int32_t t60 = 90631433;

	t60 = ((x361*x362)<(x363%x364));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x365 = UINT16_MAX;
	volatile uint16_t x366 = 0U;
	int32_t x367 = -444;
	int8_t x368 = INT8_MAX;
	volatile int32_t t61 = 66;

	t61 = ((x365*x366)<(x367%x368));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x369 = UINT64_MAX;
	uint8_t x370 = 61U;
	uint8_t x371 = UINT8_MAX;
	volatile int32_t x372 = 788;
	volatile int32_t t62 = 9457;

	t62 = ((x369*x370)<(x371%x372));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x373 = -1;
	int32_t x374 = -1;
	static volatile int8_t x375 = INT8_MIN;
	static volatile int16_t x376 = INT16_MIN;
	static int32_t t63 = 5976;

	t63 = ((x373*x374)<(x375%x376));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x377 = INT32_MIN;
	static uint64_t x378 = 1149920372823LLU;
	int32_t x379 = INT32_MAX;
	static uint16_t x380 = 5924U;
	volatile int32_t t64 = 1024255882;

	t64 = ((x377*x378)<(x379%x380));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x381 = 8U;
	uint32_t x382 = 4U;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = -1;
	int32_t t65 = -32704621;

	t65 = ((x381*x382)<(x383%x384));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	int16_t x387 = 797;
	volatile int32_t t66 = 281;

	t66 = ((x385*x386)<(x387%x388));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x397 = 18862084U;
	volatile uint16_t x398 = 411U;
	int64_t x399 = -7694600572LL;
	int16_t x400 = INT16_MIN;
	static int32_t t67 = 5;

	t67 = ((x397*x398)<(x399%x400));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x401 = UINT16_MAX;
	int64_t x402 = 25525738LL;
	uint64_t x403 = 9814LLU;
	static int32_t x404 = INT32_MIN;
	static volatile int32_t t68 = 0;

	t68 = ((x401*x402)<(x403%x404));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x405 = 471626LLU;
	volatile int64_t x406 = INT64_MIN;
	int8_t x407 = 1;
	uint8_t x408 = UINT8_MAX;
	int32_t t69 = -518231168;

	t69 = ((x405*x406)<(x407%x408));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x425 = 1;
	static volatile uint64_t x426 = UINT64_MAX;
	int16_t x427 = INT16_MIN;
	int32_t x428 = INT32_MAX;
	volatile int32_t t70 = -1;

	t70 = ((x425*x426)<(x427%x428));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x437 = INT16_MIN;
	int16_t x439 = INT16_MAX;

	t71 = ((x437*x438)<(x439%x440));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MAX;
	uint16_t x444 = UINT16_MAX;
	int32_t t72 = 11769;

	t72 = ((x441*x442)<(x443%x444));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x445 = -1;
	volatile uint16_t x446 = 2623U;
	int32_t x447 = -1;
	volatile int64_t x448 = 14982467770856LL;
	static volatile int32_t t73 = 3991918;

	t73 = ((x445*x446)<(x447%x448));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x449 = 1;
	volatile int8_t x450 = 0;
	uint64_t x452 = 2811465LLU;
	volatile int32_t t74 = -23542;

	t74 = ((x449*x450)<(x451%x452));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x454 = 4033U;
	int8_t x455 = -1;
	int32_t x456 = INT32_MAX;

	t75 = ((x453*x454)<(x455%x456));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x459 = INT16_MAX;
	uint16_t x460 = UINT16_MAX;
	int32_t t76 = -467;

	t76 = ((x457*x458)<(x459%x460));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x461 = 90530724U;
	static int32_t x462 = INT32_MIN;
	volatile uint32_t x463 = 15U;
	int32_t t77 = 3332860;

	t77 = ((x461*x462)<(x463%x464));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x465 = 1U;
	uint64_t x466 = UINT64_MAX;
	int64_t x467 = INT64_MIN;
	static int64_t x468 = INT64_MIN;
	static volatile int32_t t78 = -109329;

	t78 = ((x465*x466)<(x467%x468));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x469 = 4464199646LLU;
	int16_t x471 = 1;
	volatile int32_t t79 = 0;

	t79 = ((x469*x470)<(x471%x472));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x473 = 25933U;
	int32_t x474 = INT32_MAX;
	static volatile int8_t x475 = -2;
	static uint16_t x476 = 3065U;
	volatile int32_t t80 = -26791;

	t80 = ((x473*x474)<(x475%x476));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x478 = 33831887373LL;
	static volatile int16_t x480 = INT16_MAX;
	static volatile int32_t t81 = 5;

	t81 = ((x477*x478)<(x479%x480));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x481 = UINT32_MAX;
	static int64_t x483 = INT64_MIN;
	int32_t t82 = 1059;

	t82 = ((x481*x482)<(x483%x484));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x489 = -1LL;
	volatile uint64_t x490 = 30589LLU;
	int32_t x491 = INT32_MIN;
	int8_t x492 = -1;
	int32_t t83 = -60369704;

	t83 = ((x489*x490)<(x491%x492));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x493 = 8U;
	int32_t x494 = INT32_MIN;
	int16_t x495 = -5;
	int32_t t84 = 0;

	t84 = ((x493*x494)<(x495%x496));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x497 = 356467665659375LLU;
	uint16_t x498 = 113U;
	uint32_t x499 = 437007U;
	volatile uint8_t x500 = UINT8_MAX;

	t85 = ((x497*x498)<(x499%x500));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x505 = INT8_MIN;
	uint8_t x506 = 9U;
	static uint64_t x507 = 12176493635027600LLU;
	volatile int32_t t86 = -1;

	t86 = ((x505*x506)<(x507%x508));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x517 = 1352320U;
	static volatile int16_t x518 = INT16_MAX;
	uint8_t x519 = 6U;
	static int32_t t87 = 275291;

	t87 = ((x517*x518)<(x519%x520));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x523 = INT8_MAX;
	uint32_t x524 = 65860U;
	int32_t t88 = -1;

	t88 = ((x521*x522)<(x523%x524));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x525 = INT64_MIN;
	volatile uint64_t x526 = 287898741400271712LLU;
	uint32_t x528 = UINT32_MAX;

	t89 = ((x525*x526)<(x527%x528));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x529 = -1;
	static int64_t x531 = -3621LL;
	int32_t x532 = INT32_MAX;
	static int32_t t90 = -947;

	t90 = ((x529*x530)<(x531%x532));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x538 = 152171U;
	uint32_t x539 = 354850U;
	volatile int8_t x540 = INT8_MIN;
	volatile int32_t t91 = -7190;

	t91 = ((x537*x538)<(x539%x540));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x541 = UINT16_MAX;
	static uint8_t x543 = 53U;
	int8_t x544 = -1;
	int32_t t92 = 1546381;

	t92 = ((x541*x542)<(x543%x544));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x545 = 29;
	volatile uint64_t x546 = 7289620605310LLU;
	int64_t x547 = -1LL;
	uint8_t x548 = 2U;

	t93 = ((x545*x546)<(x547%x548));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x549 = -12528;
	int8_t x550 = INT8_MIN;
	volatile uint64_t x551 = 6218081LLU;
	volatile int32_t t94 = 5807;

	t94 = ((x549*x550)<(x551%x552));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x557 = 15415U;
	volatile int8_t x558 = 1;
	int8_t x559 = -1;
	volatile uint32_t x560 = UINT32_MAX;
	int32_t t95 = 1228;

	t95 = ((x557*x558)<(x559%x560));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x573 = 95LL;
	volatile uint16_t x574 = 48U;
	volatile int8_t x576 = -20;
	volatile int32_t t96 = -41922;

	t96 = ((x573*x574)<(x575%x576));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x582 = UINT16_MAX;
	int16_t x583 = -15;
	uint8_t x584 = UINT8_MAX;
	int32_t t97 = -1;

	t97 = ((x581*x582)<(x583%x584));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x585 = -1LL;
	int8_t x586 = INT8_MIN;
	static volatile uint64_t x588 = 7LLU;
	volatile int32_t t98 = 267;

	t98 = ((x585*x586)<(x587%x588));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x591 = UINT64_MAX;
	volatile int32_t x592 = INT32_MAX;

	t99 = ((x589*x590)<(x591%x592));

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

