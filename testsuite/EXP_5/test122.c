#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = -1;
static uint16_t x7 = 0U;
int32_t t0 = 392;
static int16_t x9 = 4762;
volatile int16_t x10 = INT16_MIN;
volatile int32_t t1 = -64572;
int16_t x37 = INT16_MIN;
int16_t x43 = 225;
int8_t x49 = INT8_MIN;
uint64_t x71 = 215297LLU;
int64_t x72 = INT64_MIN;
volatile int32_t x85 = INT32_MIN;
int64_t x95 = -1LL;
int32_t t10 = -445513;
int16_t x119 = 2138;
volatile int16_t x120 = 985;
uint16_t x141 = 20U;
int8_t x152 = -1;
volatile int32_t x158 = -1;
volatile int16_t x164 = INT16_MIN;
int16_t x168 = INT16_MAX;
static uint64_t x172 = UINT64_MAX;
uint64_t x186 = 3119115LLU;
static volatile uint64_t t20 = 134766671LLU;
uint32_t x214 = 423292U;
uint16_t x219 = UINT16_MAX;
static volatile int32_t t26 = 1357;
static int32_t x229 = -14267;
int8_t x234 = INT8_MAX;
int8_t x252 = -1;
int32_t x272 = INT32_MAX;
uint32_t x281 = 72U;
static volatile uint32_t t35 = 0U;
int32_t t39 = -3395030;
uint64_t x319 = 44397474LLU;
int8_t x320 = INT8_MIN;
static volatile int16_t x332 = 1;
static volatile int32_t t41 = 14566;
uint8_t x338 = 3U;
uint32_t x340 = 186808U;
int8_t x346 = INT8_MIN;
volatile int16_t x354 = INT16_MAX;
static uint32_t t45 = 360077493U;
volatile uint64_t t46 = 3027423324471LLU;
volatile int64_t t47 = 866261435837LL;
static int16_t x366 = -1;
int64_t x376 = 44329476LL;
int32_t t51 = 59707399;
int64_t x397 = INT64_MAX;
volatile int32_t x400 = INT32_MAX;
uint32_t x410 = 12U;
volatile int32_t t55 = 418;
uint64_t x453 = 241916502959185LLU;
int64_t x455 = INT64_MIN;
static volatile uint64_t t59 = 36116870618394LLU;
int64_t x477 = 1369163694930409232LL;
volatile uint16_t x479 = 30U;
static int64_t x482 = INT64_MIN;
static int16_t x483 = INT16_MAX;
int32_t x484 = 1;
volatile int8_t x495 = 2;
int32_t t63 = -147440;
int16_t x497 = INT16_MIN;
uint16_t x498 = 9380U;
volatile int16_t x499 = INT16_MIN;
static volatile int32_t x513 = INT32_MIN;
static int16_t x515 = INT16_MIN;
volatile int64_t x539 = INT64_MIN;
uint64_t x574 = 927016420LLU;
uint64_t x576 = UINT64_MAX;
int32_t t72 = 430752;
int32_t x614 = INT32_MIN;
uint16_t x616 = UINT16_MAX;
static int8_t x619 = -7;
static int32_t x633 = 1105;
volatile uint16_t x642 = UINT16_MAX;
int64_t x645 = INT64_MAX;
static int8_t x648 = INT8_MAX;
volatile uint32_t t81 = 26306U;
uint8_t x660 = 4U;
volatile int32_t t82 = -6;
static int64_t x661 = -1LL;
int8_t x662 = -1;
volatile int8_t x673 = 3;
volatile int64_t x676 = 4375398195253LL;
int16_t x713 = INT16_MAX;
static volatile int64_t t86 = 46432LL;
static uint16_t x727 = 0U;
int64_t x736 = INT64_MAX;
int8_t x754 = INT8_MIN;
int64_t x756 = INT64_MAX;
uint8_t x758 = 3U;
int8_t x759 = INT8_MIN;
int16_t x762 = INT16_MIN;
volatile int32_t t92 = 33100737;
int16_t x774 = -1;
int16_t x785 = INT16_MIN;
static volatile int32_t t95 = 35516669;
int64_t x798 = -1LL;
int8_t x806 = INT8_MIN;


void f0(void) {
	int8_t x6 = INT8_MIN;
	int32_t x8 = -109;

	t0 = (x5%((x6+x7)<=x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x11 = -1;
	uint64_t x12 = UINT64_MAX;

	t1 = (x9%((x10+x11)<=x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -732923;
	volatile int32_t x14 = INT32_MIN;
	uint8_t x15 = 60U;
	volatile int8_t x16 = INT8_MIN;
	int32_t t2 = 522584;

	t2 = (x13%((x14+x15)<=x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x29 = INT16_MIN;
	uint64_t x30 = UINT64_MAX;
	volatile int16_t x31 = -1;
	volatile int64_t x32 = -1LL;
	static int32_t t3 = 15906210;

	t3 = (x29%((x30+x31)<=x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MIN;
	static int32_t t4 = 133496179;

	t4 = (x37%((x38+x39)<=x40));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = 43;
	volatile int32_t x42 = -52006177;
	static volatile int32_t x44 = INT32_MAX;
	volatile int32_t t5 = 476561;

	t5 = (x41%((x42+x43)<=x44));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = -1;
	int32_t t6 = -36;

	t6 = (x49%((x50+x51)<=x52));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x69 = INT32_MAX;
	static int32_t x70 = -29;
	volatile int32_t t7 = -369;

	t7 = (x69%((x70+x71)<=x72));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = INT16_MAX;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t8 = -1;

	t8 = (x85%((x86+x87)<=x88));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x93 = INT16_MIN;
	int64_t x94 = -55150763243572862LL;
	int8_t x96 = INT8_MIN;
	volatile int32_t t9 = 2;

	t9 = (x93%((x94+x95)<=x96));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x101 = INT32_MIN;
	int64_t x102 = INT64_MIN;
	int16_t x103 = 12;
	uint32_t x104 = 12464U;

	t10 = (x101%((x102+x103)<=x104));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x117 = INT32_MAX;
	static volatile int32_t x118 = INT32_MIN;
	static volatile int32_t t11 = -3426323;

	t11 = (x117%((x118+x119)<=x120));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x125 = 82U;
	int32_t x126 = -3467;
	uint64_t x127 = 4171599562LLU;
	int8_t x128 = -13;
	volatile int32_t t12 = 3607;

	t12 = (x125%((x126+x127)<=x128));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x142 = 14U;
	static int64_t x143 = INT64_MIN;
	int16_t x144 = -10887;
	volatile int32_t t13 = -881101;

	t13 = (x141%((x142+x143)<=x144));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x145 = INT64_MAX;
	uint16_t x146 = 126U;
	int64_t x147 = INT64_MIN;
	volatile uint8_t x148 = 0U;
	volatile int64_t t14 = -7339612727LL;

	t14 = (x145%((x146+x147)<=x148));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x149 = 348789;
	int32_t x150 = -7176293;
	int32_t x151 = -1721788;
	volatile int32_t t15 = -15;

	t15 = (x149%((x150+x151)<=x152));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x157 = 812LLU;
	static int16_t x159 = INT16_MAX;
	int64_t x160 = 3836637218583LL;
	uint64_t t16 = 8302368512LLU;

	t16 = (x157%((x158+x159)<=x160));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x161 = INT16_MIN;
	uint64_t x162 = 151739LLU;
	int16_t x163 = 672;
	volatile int32_t t17 = -11508;

	t17 = (x161%((x162+x163)<=x164));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x165 = INT8_MAX;
	int8_t x166 = INT8_MAX;
	volatile uint8_t x167 = 0U;
	int32_t t18 = -3024622;

	t18 = (x165%((x166+x167)<=x168));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x169 = 69539920LLU;
	uint32_t x170 = 57U;
	int64_t x171 = INT64_MIN;
	static volatile uint64_t t19 = 136447124642731866LLU;

	t19 = (x169%((x170+x171)<=x172));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x185 = 4635711140302827473LLU;
	int8_t x187 = 1;
	int8_t x188 = INT8_MIN;

	t20 = (x185%((x186+x187)<=x188));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x193 = INT16_MIN;
	volatile uint32_t x194 = 230U;
	static int64_t x195 = -1LL;
	uint32_t x196 = UINT32_MAX;
	int32_t t21 = -1;

	t21 = (x193%((x194+x195)<=x196));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x197 = 3851708291853008LL;
	static uint16_t x198 = 3U;
	uint32_t x199 = 186U;
	volatile uint64_t x200 = 957188894552LLU;
	volatile int64_t t22 = 146712457841321LL;

	t22 = (x197%((x198+x199)<=x200));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x205 = UINT64_MAX;
	int64_t x206 = -6834994723473503LL;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	uint64_t t23 = 917342347642668LLU;

	t23 = (x205%((x206+x207)<=x208));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x209 = 11;
	volatile int16_t x210 = INT16_MIN;
	uint64_t x211 = 1009626223337240LLU;
	int8_t x212 = INT8_MIN;
	volatile int32_t t24 = 41;

	t24 = (x209%((x210+x211)<=x212));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x215 = UINT32_MAX;
	volatile uint32_t x216 = 4374136U;
	uint64_t t25 = 4490829339258929775LLU;

	t25 = (x213%((x214+x215)<=x216));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x217 = -10638;
	int32_t x218 = -140;
	int32_t x220 = INT32_MAX;

	t26 = (x217%((x218+x219)<=x220));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x230 = -16879292944056230LL;
	int16_t x231 = INT16_MIN;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t27 = -884;

	t27 = (x229%((x230+x231)<=x232));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x233 = INT8_MAX;
	int64_t x235 = INT64_MIN;
	static int32_t x236 = INT32_MIN;
	int32_t t28 = -4439;

	t28 = (x233%((x234+x235)<=x236));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x241 = -13;
	volatile int64_t x242 = 166LL;
	int8_t x243 = INT8_MIN;
	int32_t x244 = 824125;
	static volatile int32_t t29 = -15538;

	t29 = (x241%((x242+x243)<=x244));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x249 = UINT32_MAX;
	int64_t x250 = INT64_MIN;
	volatile uint64_t x251 = UINT64_MAX;
	volatile uint32_t t30 = 1U;

	t30 = (x249%((x250+x251)<=x252));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x261 = UINT8_MAX;
	static int8_t x262 = INT8_MAX;
	int8_t x263 = -1;
	uint16_t x264 = UINT16_MAX;
	int32_t t31 = -129505947;

	t31 = (x261%((x262+x263)<=x264));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x265 = -1LL;
	static volatile int32_t x266 = INT32_MIN;
	uint16_t x267 = 1U;
	int64_t x268 = -1LL;
	int64_t t32 = 19055895024LL;

	t32 = (x265%((x266+x267)<=x268));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x269 = 1205496LL;
	int32_t x270 = INT32_MIN;
	int64_t x271 = -490806105457715LL;
	volatile int64_t t33 = 5231LL;

	t33 = (x269%((x270+x271)<=x272));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x273 = -1;
	static uint32_t x274 = 1U;
	volatile uint16_t x275 = 6U;
	int8_t x276 = -14;
	volatile int32_t t34 = -7325;

	t34 = (x273%((x274+x275)<=x276));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x282 = 91044;
	static int64_t x283 = INT64_MIN;
	static int8_t x284 = 0;

	t35 = (x281%((x282+x283)<=x284));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x289 = 13;
	uint64_t x290 = 318119394LLU;
	int8_t x291 = INT8_MIN;
	int8_t x292 = -1;
	int32_t t36 = 248975;

	t36 = (x289%((x290+x291)<=x292));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x297 = 25U;
	uint8_t x298 = 99U;
	int8_t x299 = -26;
	volatile int32_t x300 = 231;
	int32_t t37 = 1;

	t37 = (x297%((x298+x299)<=x300));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x305 = -1LL;
	static uint32_t x306 = UINT32_MAX;
	volatile int32_t x307 = 85332553;
	int8_t x308 = INT8_MIN;
	volatile int64_t t38 = 3317966800118849032LL;

	t38 = (x305%((x306+x307)<=x308));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x313 = 29U;
	uint8_t x314 = 5U;
	volatile int32_t x315 = INT32_MIN;
	int32_t x316 = 5;

	t39 = (x313%((x314+x315)<=x316));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MIN;
	volatile int32_t t40 = -21;

	t40 = (x317%((x318+x319)<=x320));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x329 = INT16_MAX;
	int8_t x330 = INT8_MIN;
	int16_t x331 = -139;

	t41 = (x329%((x330+x331)<=x332));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x337 = 762699300U;
	static int32_t x339 = -1;
	volatile uint32_t t42 = 200U;

	t42 = (x337%((x338+x339)<=x340));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x345 = INT32_MIN;
	static uint8_t x347 = 7U;
	int64_t x348 = INT64_MAX;
	volatile int32_t t43 = -66279;

	t43 = (x345%((x346+x347)<=x348));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x349 = 0U;
	int64_t x350 = -1LL;
	static volatile uint64_t x351 = 201846277932552LLU;
	volatile int64_t x352 = INT64_MAX;
	int32_t t44 = 1808;

	t44 = (x349%((x350+x351)<=x352));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x353 = 801555U;
	uint8_t x355 = 1U;
	static uint64_t x356 = 4991431697028484892LLU;

	t45 = (x353%((x354+x355)<=x356));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x357 = UINT64_MAX;
	uint8_t x358 = 3U;
	volatile uint64_t x359 = 70210221LLU;
	static int64_t x360 = INT64_MIN;

	t46 = (x357%((x358+x359)<=x360));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x361 = -39988LL;
	int32_t x362 = 478;
	static uint64_t x363 = 1698137656LLU;
	int32_t x364 = -1;

	t47 = (x361%((x362+x363)<=x364));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x365 = -16183405101LL;
	int8_t x367 = INT8_MIN;
	static volatile int16_t x368 = -1;
	int64_t t48 = -19651LL;

	t48 = (x365%((x366+x367)<=x368));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x369 = 3854;
	volatile uint16_t x370 = 245U;
	int64_t x371 = -271684578386LL;
	int16_t x372 = INT16_MIN;
	int32_t t49 = 1;

	t49 = (x369%((x370+x371)<=x372));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x373 = -1;
	volatile uint8_t x374 = 1U;
	int32_t x375 = -1;
	volatile int32_t t50 = -143651013;

	t50 = (x373%((x374+x375)<=x376));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x381 = 1112U;
	int32_t x382 = INT32_MIN;
	uint8_t x383 = 2U;
	volatile int8_t x384 = -1;

	t51 = (x381%((x382+x383)<=x384));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x398 = -1;
	int8_t x399 = INT8_MAX;
	static volatile int64_t t52 = 56314540832696LL;

	t52 = (x397%((x398+x399)<=x400));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x405 = 43223438347067511LLU;
	static volatile uint8_t x406 = 107U;
	static int8_t x407 = INT8_MIN;
	static int32_t x408 = -1;
	static uint64_t t53 = 166568LLU;

	t53 = (x405%((x406+x407)<=x408));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x409 = INT16_MIN;
	int32_t x411 = -1161;
	int8_t x412 = INT8_MIN;
	volatile int32_t t54 = 53805127;

	t54 = (x409%((x410+x411)<=x412));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x417 = -1;
	int32_t x418 = -75;
	int16_t x419 = -156;
	static int32_t x420 = 2;

	t55 = (x417%((x418+x419)<=x420));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x454 = 6;
	int16_t x456 = INT16_MIN;
	uint64_t t56 = 108LLU;

	t56 = (x453%((x454+x455)<=x456));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x461 = 12408U;
	int16_t x462 = -1;
	uint32_t x463 = 66102508U;
	int16_t x464 = -1;
	int32_t t57 = 794;

	t57 = (x461%((x462+x463)<=x464));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x469 = 6573415358LL;
	int64_t x470 = INT64_MIN;
	uint16_t x471 = 15910U;
	static uint8_t x472 = UINT8_MAX;
	int64_t t58 = -4596110928337925LL;

	t58 = (x469%((x470+x471)<=x472));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x473 = UINT64_MAX;
	volatile int8_t x474 = -4;
	static uint32_t x475 = 81372U;
	static volatile int8_t x476 = -1;

	t59 = (x473%((x474+x475)<=x476));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x478 = 1000597001U;
	static uint32_t x480 = UINT32_MAX;
	static int64_t t60 = -298967LL;

	t60 = (x477%((x478+x479)<=x480));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x481 = 422237U;
	uint32_t t61 = 13738678U;

	t61 = (x481%((x482+x483)<=x484));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x489 = -8;
	uint64_t x490 = UINT64_MAX;
	int32_t x491 = -1;
	volatile int8_t x492 = -1;
	static int32_t t62 = 123350174;

	t62 = (x489%((x490+x491)<=x492));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x493 = -614487923;
	int16_t x494 = 3410;
	uint16_t x496 = UINT16_MAX;

	t63 = (x493%((x494+x495)<=x496));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x500 = -1LL;
	volatile int32_t t64 = 336356733;

	t64 = (x497%((x498+x499)<=x500));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x501 = UINT16_MAX;
	static int32_t x502 = -1;
	uint32_t x503 = UINT32_MAX;
	int64_t x504 = INT64_MAX;
	int32_t t65 = 116;

	t65 = (x501%((x502+x503)<=x504));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x514 = INT8_MAX;
	uint8_t x516 = 1U;
	int32_t t66 = -1982;

	t66 = (x513%((x514+x515)<=x516));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x525 = -1730;
	int32_t x526 = -893586;
	volatile int64_t x527 = 2036LL;
	int8_t x528 = 1;
	int32_t t67 = 1576925;

	t67 = (x525%((x526+x527)<=x528));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x529 = INT32_MAX;
	int8_t x530 = -6;
	uint16_t x531 = 189U;
	volatile uint32_t x532 = UINT32_MAX;
	static int32_t t68 = -115533;

	t68 = (x529%((x530+x531)<=x532));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x537 = -3;
	int32_t x538 = INT32_MAX;
	int16_t x540 = -557;
	volatile int32_t t69 = -51726;

	t69 = (x537%((x538+x539)<=x540));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x573 = 1017024LLU;
	uint32_t x575 = 1514305U;
	volatile uint64_t t70 = 2LLU;

	t70 = (x573%((x574+x575)<=x576));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x589 = 14U;
	int64_t x590 = -1LL;
	int32_t x591 = INT32_MIN;
	int16_t x592 = INT16_MIN;
	int32_t t71 = -5289;

	t71 = (x589%((x590+x591)<=x592));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x597 = 11U;
	int16_t x598 = INT16_MIN;
	int8_t x599 = -1;
	uint8_t x600 = UINT8_MAX;

	t72 = (x597%((x598+x599)<=x600));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x605 = 1765;
	volatile int16_t x606 = INT16_MIN;
	int64_t x607 = -75696956LL;
	static uint8_t x608 = UINT8_MAX;
	int32_t t73 = -245486083;

	t73 = (x605%((x606+x607)<=x608));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x613 = 8382886593038056LL;
	int8_t x615 = 30;
	volatile int64_t t74 = 14479901636733LL;

	t74 = (x613%((x614+x615)<=x616));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x617 = 365U;
	int64_t x618 = -2923639LL;
	int16_t x620 = INT16_MIN;
	volatile int32_t t75 = -23495322;

	t75 = (x617%((x618+x619)<=x620));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x625 = INT16_MIN;
	volatile int8_t x626 = -1;
	volatile int8_t x627 = -2;
	int64_t x628 = 14238LL;
	volatile int32_t t76 = 30;

	t76 = (x625%((x626+x627)<=x628));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x634 = -6;
	int8_t x635 = INT8_MIN;
	int16_t x636 = -3;
	int32_t t77 = 3;

	t77 = (x633%((x634+x635)<=x636));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x641 = 6;
	uint32_t x643 = 62U;
	int16_t x644 = INT16_MIN;
	int32_t t78 = -1;

	t78 = (x641%((x642+x643)<=x644));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x646 = 1U;
	int16_t x647 = -1;
	volatile int64_t t79 = 446318LL;

	t79 = (x645%((x646+x647)<=x648));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x649 = -1;
	int16_t x650 = -1;
	volatile uint16_t x651 = UINT16_MAX;
	static uint64_t x652 = 615930349161227LLU;
	volatile int32_t t80 = -42;

	t80 = (x649%((x650+x651)<=x652));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x653 = UINT32_MAX;
	uint32_t x654 = 71712U;
	int32_t x655 = INT32_MIN;
	static int16_t x656 = -1;

	t81 = (x653%((x654+x655)<=x656));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x657 = INT8_MIN;
	int64_t x658 = INT64_MIN;
	int64_t x659 = 13302723590104LL;

	t82 = (x657%((x658+x659)<=x660));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x663 = INT32_MAX;
	static volatile int64_t x664 = INT64_MAX;
	volatile int64_t t83 = 112212865LL;

	t83 = (x661%((x662+x663)<=x664));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x674 = 35U;
	int32_t x675 = 1514;
	volatile int32_t t84 = 3;

	t84 = (x673%((x674+x675)<=x676));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x714 = 2189U;
	volatile int64_t x715 = INT64_MIN;
	int8_t x716 = 10;
	int32_t t85 = -1;

	t85 = (x713%((x714+x715)<=x716));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x721 = INT64_MAX;
	static int64_t x722 = -25LL;
	int64_t x723 = -103944933707LL;
	int16_t x724 = INT16_MIN;

	t86 = (x721%((x722+x723)<=x724));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x725 = INT8_MIN;
	static uint8_t x726 = UINT8_MAX;
	static uint32_t x728 = UINT32_MAX;
	static volatile int32_t t87 = -735334856;

	t87 = (x725%((x726+x727)<=x728));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x733 = -1;
	int8_t x734 = -35;
	volatile uint16_t x735 = UINT16_MAX;
	int32_t t88 = 69570381;

	t88 = (x733%((x734+x735)<=x736));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x745 = INT16_MAX;
	int8_t x746 = INT8_MIN;
	int32_t x747 = -7476781;
	uint16_t x748 = UINT16_MAX;
	static volatile int32_t t89 = 3037;

	t89 = (x745%((x746+x747)<=x748));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x753 = INT8_MIN;
	uint8_t x755 = 75U;
	int32_t t90 = -89788703;

	t90 = (x753%((x754+x755)<=x756));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x757 = INT64_MAX;
	int8_t x760 = -1;
	int64_t t91 = -8750364LL;

	t91 = (x757%((x758+x759)<=x760));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x761 = 2U;
	int8_t x763 = 0;
	volatile int8_t x764 = INT8_MIN;

	t92 = (x761%((x762+x763)<=x764));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x773 = -238;
	static int16_t x775 = -66;
	volatile uint8_t x776 = 4U;
	volatile int32_t t93 = -93009;

	t93 = (x773%((x774+x775)<=x776));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x781 = INT8_MIN;
	int32_t x782 = INT32_MAX;
	int64_t x783 = INT64_MIN;
	int32_t x784 = INT32_MIN;
	int32_t t94 = 1;

	t94 = (x781%((x782+x783)<=x784));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x786 = 106U;
	volatile int16_t x787 = -1;
	int16_t x788 = 1819;

	t95 = (x785%((x786+x787)<=x788));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x789 = INT16_MIN;
	uint64_t x790 = 2318647438398LLU;
	int16_t x791 = -275;
	int32_t x792 = -1;
	volatile int32_t t96 = 7633421;

	t96 = (x789%((x790+x791)<=x792));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x797 = INT64_MAX;
	int32_t x799 = INT32_MIN;
	volatile uint32_t x800 = 1813833U;
	int64_t t97 = -241354125205LL;

	t97 = (x797%((x798+x799)<=x800));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x805 = 10916;
	static uint32_t x807 = UINT32_MAX;
	int8_t x808 = INT8_MIN;
	volatile int32_t t98 = 7098504;

	t98 = (x805%((x806+x807)<=x808));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x809 = -20LL;
	int8_t x810 = INT8_MAX;
	int64_t x811 = INT64_MIN;
	int8_t x812 = INT8_MAX;
	int64_t t99 = -1145082LL;

	t99 = (x809%((x810+x811)<=x812));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

