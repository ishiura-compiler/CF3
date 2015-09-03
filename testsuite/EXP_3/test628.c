#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x19 = -28;
static volatile uint64_t x20 = 2123814322724861336LLU;
int16_t x28 = -38;
volatile int16_t x29 = INT16_MIN;
static uint32_t x43 = UINT32_MAX;
int64_t x47 = 268635098903070LL;
uint8_t x48 = 2U;
uint8_t x67 = 15U;
int32_t t7 = 0;
uint32_t x75 = UINT32_MAX;
int8_t x83 = INT8_MIN;
uint32_t t10 = 1592389706U;
volatile int64_t x85 = -1101002329374127135LL;
int32_t x86 = INT32_MAX;
int8_t x87 = -28;
int16_t x89 = 15;
uint8_t x93 = 5U;
int64_t x94 = INT64_MIN;
int64_t x95 = INT64_MAX;
int8_t x105 = INT8_MIN;
volatile int8_t x108 = 1;
uint8_t x117 = UINT8_MAX;
uint8_t x122 = 1U;
int16_t x140 = 886;
int32_t x141 = -19520;
volatile uint32_t t19 = 35267640U;
int64_t x162 = INT64_MIN;
uint32_t t24 = 7922U;
volatile uint32_t t25 = 27685U;
volatile uint32_t x217 = 14U;
uint32_t x226 = 3959U;
volatile int32_t x228 = -1;
int32_t t27 = -1;
static int64_t x233 = INT64_MIN;
volatile int64_t t28 = -3652825695707073559LL;
int64_t x243 = INT64_MIN;
volatile int16_t x244 = INT16_MIN;
volatile int64_t x249 = 1872521LL;
volatile uint8_t x250 = 0U;
int64_t x265 = -1LL;
static int64_t x267 = INT64_MIN;
static volatile uint64_t x268 = 89762LLU;
uint8_t x270 = 1U;
uint32_t x277 = 2152132U;
volatile uint64_t t37 = 298844485LLU;
static uint16_t x310 = 1167U;
int64_t x315 = -20575162828856LL;
uint8_t x324 = 2U;
int32_t t40 = -4533665;
volatile int8_t x326 = -23;
static volatile int64_t t41 = -2688LL;
int32_t x337 = INT32_MIN;
int8_t x339 = -34;
uint64_t x340 = 791014513LLU;
volatile uint64_t t42 = 6896830LLU;
volatile uint32_t t43 = 771U;
volatile int64_t x351 = 747072LL;
uint64_t x353 = 137152252038LLU;
int16_t x354 = INT16_MIN;
uint64_t t46 = 41469904720977295LLU;
static int32_t x391 = -114571367;
static volatile int64_t x397 = INT64_MIN;
static int32_t x418 = INT32_MAX;
uint32_t x419 = UINT32_MAX;
volatile uint8_t x422 = 0U;
static uint16_t x424 = UINT16_MAX;
volatile uint64_t t54 = 684164091858LLU;
static uint64_t x444 = 8073837LLU;
int16_t x457 = -1;
int16_t x458 = INT16_MIN;
int8_t x467 = INT8_MAX;
volatile int32_t t58 = -2133;
static uint16_t x472 = 62U;
uint16_t x492 = 11146U;
static volatile int64_t t60 = -1016952LL;
volatile int32_t t61 = 1770;
volatile uint32_t t63 = 5493U;
static volatile uint64_t x516 = 186912875577192135LLU;
uint8_t x519 = 21U;
int32_t x522 = INT32_MAX;
uint32_t x523 = UINT32_MAX;
int32_t x524 = INT32_MIN;
volatile int32_t t69 = 0;
uint16_t x539 = UINT16_MAX;
static uint8_t x540 = UINT8_MAX;
volatile int8_t x554 = INT8_MAX;
volatile int8_t x556 = -1;
uint8_t x574 = 6U;
int32_t x592 = 3;
int32_t x614 = -1;
static volatile int32_t x615 = INT32_MIN;
uint32_t x635 = UINT32_MAX;
uint32_t x639 = UINT32_MAX;
static int32_t t82 = 136;
uint8_t x650 = 9U;
int64_t x651 = 127442208897803LL;
volatile uint32_t t85 = 22U;
uint64_t x692 = 26269561737874591LLU;
int32_t x707 = INT32_MIN;
volatile int64_t x730 = -25134890916623667LL;
int64_t x731 = 46636567225141LL;
int32_t x738 = 28;
uint16_t x743 = UINT16_MAX;
static volatile uint16_t x752 = 25832U;
volatile uint32_t x758 = UINT32_MAX;
int16_t x764 = INT16_MIN;
uint64_t x766 = 651659585504161971LLU;
int8_t x768 = 6;
int32_t t98 = 7;
static int32_t t99 = 0;


void f0(void) {
	static int64_t x9 = -1LL;
	int16_t x10 = INT16_MAX;
	static uint16_t x11 = 245U;
	volatile uint32_t x12 = 7U;
	uint32_t t0 = 0U;

	t0 = ((x9<=x10)/(x11/x12));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x17 = UINT16_MAX;
	int32_t x18 = 158041121;
	static uint64_t t1 = 88LLU;

	t1 = ((x17<=x18)/(x19/x20));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = INT16_MIN;
	int64_t x26 = -1LL;
	int32_t x27 = INT32_MIN;
	int32_t t2 = -148;

	t2 = ((x25<=x26)/(x27/x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x30 = -1;
	uint16_t x31 = 11U;
	volatile int64_t x32 = -1LL;
	int64_t t3 = 5752754082844LL;

	t3 = ((x29<=x30)/(x31/x32));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x37 = -1;
	static int8_t x38 = -1;
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = -17;
	uint64_t t4 = 57LLU;

	t4 = ((x37<=x38)/(x39/x40));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = 111041LL;
	static volatile int32_t x44 = 41025711;
	uint32_t t5 = 1974483621U;

	t5 = ((x41<=x42)/(x43/x44));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = -97;
	static int16_t x46 = INT16_MIN;
	volatile int64_t t6 = -3814586LL;

	t6 = ((x45<=x46)/(x47/x48));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x65 = UINT8_MAX;
	static int32_t x66 = 385633;
	int32_t x68 = -4;

	t7 = ((x65<=x66)/(x67/x68));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x73 = -246;
	uint8_t x74 = 24U;
	int8_t x76 = INT8_MAX;
	uint32_t t8 = 3343992U;

	t8 = ((x73<=x74)/(x75/x76));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x77 = INT16_MIN;
	volatile int32_t x78 = 34;
	uint64_t x79 = UINT64_MAX;
	volatile int64_t x80 = INT64_MIN;
	volatile uint64_t t9 = 2274334LLU;

	t9 = ((x77<=x78)/(x79/x80));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x81 = INT64_MIN;
	static int16_t x82 = 41;
	uint32_t x84 = 2952U;

	t10 = ((x81<=x82)/(x83/x84));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x88 = -1;
	int32_t t11 = 52;

	t11 = ((x85<=x86)/(x87/x88));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x90 = INT8_MIN;
	int64_t x91 = INT64_MIN;
	int8_t x92 = 1;
	static int64_t t12 = 0LL;

	t12 = ((x89<=x90)/(x91/x92));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x96 = -1LL;
	int64_t t13 = 512571158613515935LL;

	t13 = ((x93<=x94)/(x95/x96));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x106 = UINT64_MAX;
	uint32_t x107 = 25134572U;
	volatile uint32_t t14 = 27550U;

	t14 = ((x105<=x106)/(x107/x108));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x118 = -1;
	int64_t x119 = INT64_MAX;
	int8_t x120 = -1;
	volatile int64_t t15 = -28211276338643778LL;

	t15 = ((x117<=x118)/(x119/x120));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x121 = 1;
	static int32_t x123 = -95438;
	int8_t x124 = INT8_MAX;
	int32_t t16 = 15;

	t16 = ((x121<=x122)/(x123/x124));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x125 = -4;
	uint64_t x126 = 5993579862LLU;
	uint16_t x127 = UINT16_MAX;
	uint8_t x128 = 87U;
	static int32_t t17 = -26373667;

	t17 = ((x125<=x126)/(x127/x128));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x137 = 147;
	int16_t x138 = 10;
	static int32_t x139 = 30424;
	int32_t t18 = -2873986;

	t18 = ((x137<=x138)/(x139/x140));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x142 = 0U;
	static uint32_t x143 = UINT32_MAX;
	uint16_t x144 = 7U;

	t19 = ((x141<=x142)/(x143/x144));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x149 = INT16_MIN;
	uint8_t x150 = UINT8_MAX;
	int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MIN;
	int32_t t20 = -13497896;

	t20 = ((x149<=x150)/(x151/x152));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x153 = -1;
	uint32_t x154 = 421U;
	volatile int8_t x155 = 55;
	int8_t x156 = 1;
	int32_t t21 = -54212;

	t21 = ((x153<=x154)/(x155/x156));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x161 = 666;
	int16_t x163 = INT16_MAX;
	uint16_t x164 = 18U;
	int32_t t22 = 688752;

	t22 = ((x161<=x162)/(x163/x164));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x165 = -1;
	int16_t x166 = 410;
	int32_t x167 = INT32_MAX;
	int64_t x168 = -1LL;
	volatile int64_t t23 = -168888286220265LL;

	t23 = ((x165<=x166)/(x167/x168));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MIN;
	uint32_t x179 = UINT32_MAX;
	int16_t x180 = INT16_MIN;

	t24 = ((x177<=x178)/(x179/x180));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x197 = 17098U;
	volatile uint64_t x198 = UINT64_MAX;
	int16_t x199 = INT16_MAX;
	volatile uint32_t x200 = 2U;

	t25 = ((x197<=x198)/(x199/x200));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x218 = 1U;
	int32_t x219 = -1660;
	int16_t x220 = -1;
	int32_t t26 = 103;

	t26 = ((x217<=x218)/(x219/x220));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x225 = -1;
	int16_t x227 = -1486;

	t27 = ((x225<=x226)/(x227/x228));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	static int16_t x236 = INT16_MIN;

	t28 = ((x233<=x234)/(x235/x236));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x241 = -13;
	static int16_t x242 = -1;
	static volatile int64_t t29 = -107982610655919LL;

	t29 = ((x241<=x242)/(x243/x244));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = -1;
	volatile int32_t t30 = 1;

	t30 = ((x249<=x250)/(x251/x252));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x261 = 226U;
	uint32_t x262 = 22U;
	int16_t x263 = INT16_MIN;
	int16_t x264 = -1;
	volatile int32_t t31 = -48104;

	t31 = ((x261<=x262)/(x263/x264));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x266 = UINT8_MAX;
	volatile uint64_t t32 = 244483755061LLU;

	t32 = ((x265<=x266)/(x267/x268));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x269 = 61U;
	static uint32_t x271 = UINT32_MAX;
	uint16_t x272 = 3U;
	volatile uint32_t t33 = 6U;

	t33 = ((x269<=x270)/(x271/x272));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	int32_t x280 = 1549234;
	int32_t t34 = -2123;

	t34 = ((x277<=x278)/(x279/x280));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x281 = 7U;
	static int64_t x282 = -1LL;
	int32_t x283 = -58404;
	int16_t x284 = INT16_MAX;
	volatile int32_t t35 = -2042233;

	t35 = ((x281<=x282)/(x283/x284));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 3703U;
	int8_t x287 = INT8_MIN;
	static volatile int64_t x288 = -1LL;
	int64_t t36 = 3325LL;

	t36 = ((x285<=x286)/(x287/x288));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x293 = 140U;
	int64_t x294 = INT64_MIN;
	volatile int16_t x295 = INT16_MIN;
	volatile uint64_t x296 = 396248531446009876LLU;

	t37 = ((x293<=x294)/(x295/x296));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x309 = 112U;
	static uint64_t x311 = UINT64_MAX;
	uint16_t x312 = UINT16_MAX;
	volatile uint64_t t38 = 46052083411506535LLU;

	t38 = ((x309<=x310)/(x311/x312));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x313 = 2U;
	uint32_t x314 = 0U;
	uint32_t x316 = UINT32_MAX;
	volatile int64_t t39 = -89616014998LL;

	t39 = ((x313<=x314)/(x315/x316));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x321 = 1;
	int32_t x322 = -1;
	static int16_t x323 = 4;

	t40 = ((x321<=x322)/(x323/x324));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x325 = INT16_MIN;
	static int64_t x327 = INT64_MAX;
	uint16_t x328 = 29U;

	t41 = ((x325<=x326)/(x327/x328));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x338 = 2;

	t42 = ((x337<=x338)/(x339/x340));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x341 = 27989341751743945LL;
	volatile int16_t x342 = 110;
	uint32_t x343 = UINT32_MAX;
	int8_t x344 = 2;

	t43 = ((x341<=x342)/(x343/x344));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x345 = INT8_MAX;
	int8_t x346 = 1;
	int8_t x347 = INT8_MIN;
	int64_t x348 = -1LL;
	int64_t t44 = 1780928927494LL;

	t44 = ((x345<=x346)/(x347/x348));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x349 = 4395743U;
	int16_t x350 = INT16_MIN;
	static int8_t x352 = -1;
	volatile int64_t t45 = -19991719923633LL;

	t45 = ((x349<=x350)/(x351/x352));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x355 = -8LL;
	uint64_t x356 = 14460801532988LLU;

	t46 = ((x353<=x354)/(x355/x356));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x377 = -3;
	int16_t x378 = -1;
	uint64_t x379 = 1201864243LLU;
	volatile int16_t x380 = INT16_MAX;
	uint64_t t47 = 396387LLU;

	t47 = ((x377<=x378)/(x379/x380));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t48 = 12619657;

	t48 = ((x389<=x390)/(x391/x392));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MAX;
	int16_t x400 = -3;
	int32_t t49 = -134;

	t49 = ((x397<=x398)/(x399/x400));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x409 = UINT32_MAX;
	int16_t x410 = INT16_MAX;
	uint64_t x411 = UINT64_MAX;
	uint8_t x412 = UINT8_MAX;
	static uint64_t t50 = 7LLU;

	t50 = ((x409<=x410)/(x411/x412));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x417 = INT16_MIN;
	static uint64_t x420 = 6LLU;
	uint64_t t51 = 4180694099216869212LLU;

	t51 = ((x417<=x418)/(x419/x420));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x421 = UINT32_MAX;
	uint32_t x423 = 210320594U;
	uint32_t t52 = 7431U;

	t52 = ((x421<=x422)/(x423/x424));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x425 = 249334098;
	uint32_t x426 = 109157738U;
	volatile uint8_t x427 = UINT8_MAX;
	volatile uint8_t x428 = 75U;
	int32_t t53 = 370806;

	t53 = ((x425<=x426)/(x427/x428));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x433 = INT8_MAX;
	int64_t x434 = INT64_MAX;
	volatile uint64_t x435 = 7472294933LLU;
	static uint8_t x436 = UINT8_MAX;

	t54 = ((x433<=x434)/(x435/x436));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x441 = 175U;
	int64_t x442 = -1LL;
	int32_t x443 = -122283;
	uint64_t t55 = 479155LLU;

	t55 = ((x441<=x442)/(x443/x444));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x445 = 36;
	uint8_t x446 = UINT8_MAX;
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = -1;
	int32_t t56 = -1004092769;

	t56 = ((x445<=x446)/(x447/x448));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x459 = INT16_MIN;
	volatile uint16_t x460 = 4564U;
	static int32_t t57 = 940893359;

	t57 = ((x457<=x458)/(x459/x460));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x465 = -13301677;
	volatile uint64_t x466 = UINT64_MAX;
	int32_t x468 = 39;

	t58 = ((x465<=x466)/(x467/x468));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x469 = INT8_MIN;
	uint8_t x470 = UINT8_MAX;
	int64_t x471 = 2944609LL;
	int64_t t59 = 3988LL;

	t59 = ((x469<=x470)/(x471/x472));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x489 = 336;
	static int16_t x490 = 1390;
	int64_t x491 = INT64_MIN;

	t60 = ((x489<=x490)/(x491/x492));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x493 = UINT64_MAX;
	uint16_t x494 = 267U;
	int32_t x495 = INT32_MIN;
	static volatile int8_t x496 = INT8_MIN;

	t61 = ((x493<=x494)/(x495/x496));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x497 = 847;
	uint32_t x498 = UINT32_MAX;
	volatile int64_t x499 = -6515367LL;
	int16_t x500 = 4333;
	volatile int64_t t62 = 1533756089800LL;

	t62 = ((x497<=x498)/(x499/x500));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x501 = INT64_MIN;
	uint64_t x502 = UINT64_MAX;
	uint32_t x503 = UINT32_MAX;
	static int8_t x504 = 1;

	t63 = ((x501<=x502)/(x503/x504));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x505 = -1;
	int32_t x506 = 12062683;
	static uint16_t x507 = 1334U;
	volatile uint8_t x508 = 21U;
	volatile int32_t t64 = 1;

	t64 = ((x505<=x506)/(x507/x508));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x509 = INT64_MIN;
	uint64_t x510 = UINT64_MAX;
	static volatile int32_t x511 = INT32_MIN;
	int16_t x512 = 10675;
	static volatile int32_t t65 = 33;

	t65 = ((x509<=x510)/(x511/x512));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x513 = -10;
	int8_t x514 = -1;
	int8_t x515 = INT8_MIN;
	volatile uint64_t t66 = 56933531977524LLU;

	t66 = ((x513<=x514)/(x515/x516));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x517 = 1808;
	static int64_t x518 = 183LL;
	int32_t x520 = -1;
	int32_t t67 = -8270015;

	t67 = ((x517<=x518)/(x519/x520));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x521 = INT8_MIN;
	uint32_t t68 = 33U;

	t68 = ((x521<=x522)/(x523/x524));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x529 = INT16_MAX;
	int8_t x530 = INT8_MAX;
	volatile int32_t x531 = INT32_MIN;
	int32_t x532 = -1449694;

	t69 = ((x529<=x530)/(x531/x532));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x537 = 22;
	int16_t x538 = INT16_MIN;
	static int32_t t70 = 444;

	t70 = ((x537<=x538)/(x539/x540));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x541 = 41U;
	static int16_t x542 = INT16_MIN;
	int64_t x543 = INT64_MIN;
	volatile uint8_t x544 = UINT8_MAX;
	int64_t t71 = 40785978846LL;

	t71 = ((x541<=x542)/(x543/x544));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x553 = -1;
	static int16_t x555 = -1;
	int32_t t72 = -44;

	t72 = ((x553<=x554)/(x555/x556));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x557 = -1;
	static volatile int8_t x558 = -54;
	int32_t x559 = INT32_MIN;
	int16_t x560 = INT16_MAX;
	int32_t t73 = -3;

	t73 = ((x557<=x558)/(x559/x560));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x573 = 571284474LLU;
	uint64_t x575 = UINT64_MAX;
	int16_t x576 = INT16_MAX;
	volatile uint64_t t74 = 2LLU;

	t74 = ((x573<=x574)/(x575/x576));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x589 = INT8_MAX;
	volatile uint16_t x590 = 3U;
	volatile int16_t x591 = INT16_MIN;
	int32_t t75 = -1;

	t75 = ((x589<=x590)/(x591/x592));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x593 = INT64_MIN;
	uint8_t x594 = 11U;
	int32_t x595 = INT32_MAX;
	static uint32_t x596 = 510985U;
	volatile uint32_t t76 = 5226U;

	t76 = ((x593<=x594)/(x595/x596));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x605 = 1;
	uint16_t x606 = UINT16_MAX;
	int64_t x607 = INT64_MIN;
	uint64_t x608 = 153800796796799164LLU;
	uint64_t t77 = 1177LLU;

	t77 = ((x605<=x606)/(x607/x608));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x609 = INT8_MIN;
	int16_t x610 = INT16_MIN;
	int32_t x611 = INT32_MIN;
	int32_t x612 = INT32_MIN;
	volatile int32_t t78 = -504;

	t78 = ((x609<=x610)/(x611/x612));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x613 = UINT64_MAX;
	static int32_t x616 = -4482899;
	volatile int32_t t79 = 641637510;

	t79 = ((x613<=x614)/(x615/x616));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x633 = -1;
	int64_t x634 = INT64_MIN;
	int16_t x636 = INT16_MIN;
	volatile uint32_t t80 = 400188U;

	t80 = ((x633<=x634)/(x635/x636));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x637 = UINT32_MAX;
	int8_t x638 = INT8_MIN;
	volatile int16_t x640 = INT16_MIN;
	static volatile uint32_t t81 = 1537339623U;

	t81 = ((x637<=x638)/(x639/x640));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x641 = UINT16_MAX;
	uint64_t x642 = 47727425673LLU;
	uint8_t x643 = UINT8_MAX;
	int8_t x644 = INT8_MIN;

	t82 = ((x641<=x642)/(x643/x644));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x649 = 29645125LL;
	uint64_t x652 = 3586358283LLU;
	volatile uint64_t t83 = 40864114958LLU;

	t83 = ((x649<=x650)/(x651/x652));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x661 = 3791457;
	int32_t x662 = 26;
	uint16_t x663 = UINT16_MAX;
	volatile uint8_t x664 = 4U;
	int32_t t84 = 156;

	t84 = ((x661<=x662)/(x663/x664));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x681 = INT16_MIN;
	int8_t x682 = INT8_MIN;
	volatile uint32_t x683 = 142U;
	volatile int8_t x684 = INT8_MAX;

	t85 = ((x681<=x682)/(x683/x684));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x689 = INT32_MIN;
	uint64_t x690 = 490247LLU;
	int32_t x691 = INT32_MIN;
	uint64_t t86 = 181904089LLU;

	t86 = ((x689<=x690)/(x691/x692));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x693 = 137;
	uint64_t x694 = 638670LLU;
	static int64_t x695 = INT64_MIN;
	int8_t x696 = -8;
	volatile int64_t t87 = 6467444LL;

	t87 = ((x693<=x694)/(x695/x696));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x705 = INT16_MIN;
	uint16_t x706 = 1020U;
	uint16_t x708 = 587U;
	volatile int32_t t88 = 372318471;

	t88 = ((x705<=x706)/(x707/x708));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x709 = INT32_MIN;
	volatile int16_t x710 = INT16_MIN;
	int8_t x711 = INT8_MIN;
	static volatile uint16_t x712 = 14U;
	volatile int32_t t89 = 67;

	t89 = ((x709<=x710)/(x711/x712));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x721 = UINT64_MAX;
	int8_t x722 = INT8_MIN;
	volatile uint32_t x723 = UINT32_MAX;
	static uint16_t x724 = UINT16_MAX;
	static volatile uint32_t t90 = 20181U;

	t90 = ((x721<=x722)/(x723/x724));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x729 = 8646557668755868LLU;
	int8_t x732 = 14;
	static volatile int64_t t91 = -59665LL;

	t91 = ((x729<=x730)/(x731/x732));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x737 = 0U;
	static uint16_t x739 = 1305U;
	volatile int8_t x740 = INT8_MIN;
	int32_t t92 = 45906983;

	t92 = ((x737<=x738)/(x739/x740));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x741 = UINT8_MAX;
	int64_t x742 = INT64_MIN;
	int64_t x744 = -1LL;
	int64_t t93 = -159974120543539841LL;

	t93 = ((x741<=x742)/(x743/x744));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x745 = INT8_MAX;
	uint32_t x746 = UINT32_MAX;
	int64_t x747 = INT64_MIN;
	int32_t x748 = INT32_MIN;
	int64_t t94 = 1LL;

	t94 = ((x745<=x746)/(x747/x748));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x749 = 109U;
	static uint32_t x750 = 58113904U;
	static int32_t x751 = INT32_MIN;
	int32_t t95 = -4;

	t95 = ((x749<=x750)/(x751/x752));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x757 = UINT8_MAX;
	static int64_t x759 = INT64_MAX;
	static int64_t x760 = -3626487865LL;
	int64_t t96 = 43LL;

	t96 = ((x757<=x758)/(x759/x760));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x761 = INT8_MIN;
	uint32_t x762 = 424158U;
	int64_t x763 = INT64_MIN;
	volatile int64_t t97 = 54637770LL;

	t97 = ((x761<=x762)/(x763/x764));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x765 = -3;
	int8_t x767 = INT8_MIN;

	t98 = ((x765<=x766)/(x767/x768));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x769 = -851;
	static uint32_t x770 = 177150U;
	volatile uint16_t x771 = 1U;
	int8_t x772 = 1;

	t99 = ((x769<=x770)/(x771/x772));

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

