#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x33 = 43923776LLU;
static int16_t x34 = INT16_MIN;
uint64_t t5 = 4846456678LLU;
uint16_t x37 = UINT16_MAX;
int8_t x54 = INT8_MIN;
volatile int32_t t8 = -277247935;
volatile uint8_t x72 = 4U;
int64_t t10 = INT64_MAX;
volatile int8_t x81 = INT8_MIN;
static int16_t x83 = -1;
int8_t x109 = 34;
volatile int8_t x111 = INT8_MIN;
uint16_t x122 = 137U;
static int64_t x142 = -17101085453LL;
static int32_t x154 = INT32_MAX;
int64_t x157 = -179364651LL;
uint64_t x159 = 59107LLU;
int32_t t24 = -6540;
uint16_t x188 = 9652U;
volatile int64_t t26 = -2625942269303662969LL;
int64_t x194 = 128LL;
uint32_t x198 = 2841U;
static int16_t x214 = INT16_MAX;
volatile int32_t x215 = INT32_MIN;
uint8_t x222 = 14U;
static volatile int64_t t31 = 95051501LL;
static volatile uint64_t t32 = 2280406348272547104LLU;
static int64_t x241 = INT64_MIN;
int32_t x242 = -1;
volatile int32_t x244 = INT32_MAX;
static volatile int32_t x253 = 873737237;
int8_t x277 = -5;
static int16_t x278 = INT16_MAX;
static uint16_t x280 = UINT16_MAX;
uint32_t t40 = 1U;
volatile uint32_t x305 = 1389612456U;
volatile uint32_t t44 = 4U;
volatile uint32_t x314 = 435555801U;
volatile uint64_t x316 = UINT64_MAX;
int16_t x332 = INT16_MAX;
volatile uint32_t x382 = 100402248U;
volatile uint64_t t52 = 33343LLU;
int8_t x461 = INT8_MIN;
volatile uint16_t x464 = 563U;
uint8_t x472 = UINT8_MAX;
uint8_t x490 = 1U;
int16_t x493 = -1;
uint8_t x506 = UINT8_MAX;
volatile int32_t x510 = INT32_MIN;
int64_t x530 = INT64_MIN;
static int64_t t68 = INT64_MAX;
int16_t x540 = INT16_MIN;
static uint64_t t70 = 5LLU;
uint32_t x558 = UINT32_MAX;
int32_t x579 = INT32_MIN;
uint32_t x591 = 399U;
volatile int8_t x599 = -30;
volatile int8_t x600 = 44;
uint8_t x609 = 6U;
volatile int16_t x612 = INT16_MAX;
int16_t x617 = 17;
int32_t x619 = INT32_MIN;
uint16_t x625 = UINT16_MAX;
int32_t x626 = INT32_MIN;
int32_t x632 = 5860;
int16_t x647 = INT16_MIN;
uint64_t x649 = UINT64_MAX;
int64_t x650 = INT64_MIN;
int32_t x656 = INT32_MAX;
int64_t x667 = -190500LL;
uint8_t x673 = 2U;
uint16_t x676 = 6U;
int32_t t88 = -14;
int16_t x705 = -1;
uint64_t x706 = 150603877585066427LLU;
volatile int16_t x707 = -1;
int32_t x708 = 268082;
volatile int16_t x720 = INT16_MAX;
uint64_t x737 = UINT64_MAX;
volatile int32_t x748 = INT32_MAX;
int16_t x762 = -56;
int64_t x765 = -80LL;
int64_t t95 = 42646847873161LL;
static volatile int32_t t97 = 6053753;
int32_t t98 = -48;
int64_t x799 = INT64_MIN;
int32_t x800 = 11;


void f0(void) {
	volatile int8_t x1 = -7;
	uint32_t x2 = 77910U;
	static volatile uint16_t x3 = 102U;
	volatile int8_t x4 = INT8_MAX;
	static uint32_t t0 = 1228U;

	t0 = (x1^(x2/(x3<x4)));

	if (t0 != 4294889391U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 148U;
	uint8_t x6 = UINT8_MAX;
	int8_t x7 = INT8_MIN;
	volatile int8_t x8 = INT8_MAX;
	volatile uint32_t t1 = 470U;

	t1 = (x5^(x6/(x7<x8)));

	if (t1 != 107U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	int8_t x14 = INT8_MAX;
	volatile int32_t x15 = 3;
	volatile int64_t x16 = 448495089369988641LL;
	volatile int32_t t2 = -9312;

	t2 = (x13^(x14/(x15<x16)));

	if (t2 != 2147483520) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MAX;
	uint32_t x22 = UINT32_MAX;
	int32_t x23 = INT32_MIN;
	int16_t x24 = 9;
	static int64_t t3 = -1279889594LL;

	t3 = (x21^(x22/(x23<x24)));

	if (t3 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x30 = UINT16_MAX;
	static int64_t x31 = -3717735LL;
	uint16_t x32 = 78U;
	static int64_t t4 = -48516757996434LL;

	t4 = (x29^(x30/(x31<x32)));

	if (t4 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x35 = INT64_MIN;
	static uint16_t x36 = 27572U;

	t5 = (x33^(x34/(x35<x36)));

	if (t5 != 18446744073665624384LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = -1;
	static volatile uint64_t x39 = 0LLU;
	int8_t x40 = -1;
	int32_t t6 = 10516878;

	t6 = (x37^(x38/(x39<x40)));

	if (t6 != -65536) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x41 = -1;
	uint8_t x42 = 24U;
	int64_t x43 = -1LL;
	uint16_t x44 = 0U;
	int32_t t7 = -4052630;

	t7 = (x41^(x42/(x43<x44)));

	if (t7 != -25) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = -1;
	volatile int64_t x55 = INT64_MIN;
	volatile int8_t x56 = INT8_MIN;

	t8 = (x53^(x54/(x55<x56)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x69 = 1U;
	static int16_t x70 = INT16_MIN;
	int8_t x71 = INT8_MIN;
	volatile int32_t t9 = 1;

	t9 = (x69^(x70/(x71<x72)));

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x77 = INT64_MIN;
	int16_t x78 = -1;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;

	t10 = (x77^(x78/(x79<x80)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x82 = 63U;
	int16_t x84 = 4;
	int32_t t11 = 97408;

	t11 = (x81^(x82/(x83<x84)));

	if (t11 != -65) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x85 = -897514;
	static uint64_t x86 = 0LLU;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = INT16_MAX;
	volatile uint64_t t12 = 302846932LLU;

	t12 = (x85^(x86/(x87<x88)));

	if (t12 != 18446744073708654102LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = INT8_MAX;
	int16_t x94 = INT16_MAX;
	volatile int8_t x95 = 1;
	uint16_t x96 = 419U;
	int32_t t13 = 21;

	t13 = (x93^(x94/(x95<x96)));

	if (t13 != 32640) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x105 = 21258U;
	uint32_t x106 = UINT32_MAX;
	static volatile uint64_t x107 = 335LLU;
	volatile int64_t x108 = INT64_MAX;
	volatile uint32_t t14 = 271641918U;

	t14 = (x105^(x106/(x107<x108)));

	if (t14 != 4294946037U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x110 = -82393115LL;
	uint32_t x112 = UINT32_MAX;
	int64_t t15 = 1039743157209385LL;

	t15 = (x109^(x110/(x111<x112)));

	if (t15 != -82393145LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x113 = 198482LLU;
	static int32_t x114 = INT32_MAX;
	volatile int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MAX;
	uint64_t t16 = 202956772LLU;

	t16 = (x113^(x114/(x115<x116)));

	if (t16 != 2147285165LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x121 = INT8_MIN;
	int64_t x123 = -1LL;
	uint32_t x124 = 2553U;
	static volatile int32_t t17 = 61974044;

	t17 = (x121^(x122/(x123<x124)));

	if (t17 != -247) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x129 = -1LL;
	int16_t x130 = -97;
	volatile int64_t x131 = -51156141834LL;
	int8_t x132 = INT8_MAX;
	int64_t t18 = -42433819989966737LL;

	t18 = (x129^(x130/(x131<x132)));

	if (t18 != 96LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x137 = UINT8_MAX;
	int32_t x138 = -205610228;
	int16_t x139 = -434;
	int16_t x140 = -1;
	volatile int32_t t19 = -1;

	t19 = (x137^(x138/(x139<x140)));

	if (t19 != -205609997) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x141 = INT8_MAX;
	int32_t x143 = INT32_MIN;
	static uint16_t x144 = 16886U;
	volatile int64_t t20 = 4280215LL;

	t20 = (x141^(x142/(x143<x144)));

	if (t20 != -17101085556LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x155 = INT32_MIN;
	uint16_t x156 = 13805U;
	volatile uint32_t t21 = 1656U;

	t21 = (x153^(x154/(x155<x156)));

	if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x158 = INT64_MAX;
	static int32_t x160 = 366504;
	volatile int64_t t22 = 15642000135LL;

	t22 = (x157^(x158/(x159<x160)));

	if (t22 != -9223372036675411158LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x165 = 41182629692LLU;
	uint8_t x166 = 29U;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = 496U;
	uint64_t t23 = 27821399LLU;

	t23 = (x165^(x166/(x167<x168)));

	if (t23 != 41182629665LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x169 = 1838U;
	int16_t x170 = INT16_MIN;
	int16_t x171 = -854;
	uint16_t x172 = 32564U;

	t24 = (x169^(x170/(x171<x172)));

	if (t24 != -30930) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x177 = 183LL;
	int32_t x178 = 1;
	static int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	int64_t t25 = 83110254LL;

	t25 = (x177^(x178/(x179<x180)));

	if (t25 != 182LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	volatile int64_t x187 = INT64_MIN;

	t26 = (x185^(x186/(x187<x188)));

	if (t26 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x195 = UINT8_MAX;
	int32_t x196 = INT32_MAX;
	int64_t t27 = 584878525118LL;

	t27 = (x193^(x194/(x195<x196)));

	if (t27 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x197 = 76U;
	int32_t x199 = INT32_MIN;
	volatile int8_t x200 = INT8_MIN;
	volatile uint32_t t28 = 25U;

	t28 = (x197^(x198/(x199<x200)));

	if (t28 != 2901U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x213 = 481330;
	int32_t x216 = INT32_MAX;
	int32_t t29 = 1043497;

	t29 = (x213^(x214/(x215<x216)));

	if (t29 != 468941) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x221 = 243879U;
	int16_t x223 = -205;
	uint16_t x224 = UINT16_MAX;
	volatile uint32_t t30 = 7604U;

	t30 = (x221^(x222/(x223<x224)));

	if (t30 != 243881U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x225 = 33U;
	volatile int64_t x226 = -1LL;
	uint8_t x227 = 2U;
	uint8_t x228 = 94U;

	t31 = (x225^(x226/(x227<x228)));

	if (t31 != -34LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x234 = 553021890991095LLU;
	int8_t x235 = INT8_MIN;
	static int16_t x236 = 2165;

	t32 = (x233^(x234/(x235<x236)));

	if (t32 != 18446191051818537975LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x237 = 59;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = 3;
	uint16_t x240 = 39U;
	static uint64_t t33 = 283606426094869749LLU;

	t33 = (x237^(x238/(x239<x240)));

	if (t33 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x243 = 1U;
	static int64_t t34 = INT64_MAX;

	t34 = (x241^(x242/(x243<x244)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x254 = 777;
	uint16_t x255 = 4297U;
	uint32_t x256 = 367828058U;
	volatile int32_t t35 = 1953033;

	t35 = (x253^(x254/(x255<x256)));

	if (t35 != 873738012) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x257 = INT32_MAX;
	int16_t x258 = -1;
	static int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MAX;
	volatile int32_t t36 = INT32_MIN;

	t36 = (x257^(x258/(x259<x260)));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x261 = 5012709U;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	int32_t x264 = 10465724;
	uint32_t t37 = 32929563U;

	t37 = (x261^(x262/(x263<x264)));

	if (t37 != 4289954661U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = -1;
	int16_t x271 = INT16_MAX;
	uint64_t x272 = UINT64_MAX;
	int32_t t38 = -267;

	t38 = (x269^(x270/(x271<x272)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x279 = INT16_MIN;
	volatile int32_t t39 = -10778362;

	t39 = (x277^(x278/(x279<x280)));

	if (t39 != -32764) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x281 = 4194U;
	uint32_t x282 = UINT32_MAX;
	volatile int16_t x283 = INT16_MIN;
	static volatile int16_t x284 = -1;

	t40 = (x281^(x282/(x283<x284)));

	if (t40 != 4294963101U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x289 = INT8_MAX;
	volatile int64_t x290 = INT64_MAX;
	static int16_t x291 = -272;
	uint8_t x292 = 4U;
	volatile int64_t t41 = -143279496154069762LL;

	t41 = (x289^(x290/(x291<x292)));

	if (t41 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x293 = -2;
	static uint64_t x294 = 10LLU;
	volatile uint32_t x295 = 34134267U;
	static int8_t x296 = -1;
	volatile uint64_t t42 = 50100LLU;

	t42 = (x293^(x294/(x295<x296)));

	if (t42 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x306 = 2483U;
	static int32_t x307 = -26;
	uint8_t x308 = 12U;
	volatile uint32_t t43 = 3457685U;

	t43 = (x305^(x306/(x307<x308)));

	if (t43 != 1389610011U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x309 = UINT32_MAX;
	uint32_t x310 = UINT32_MAX;
	volatile int64_t x311 = INT64_MIN;
	volatile int32_t x312 = INT32_MAX;

	t44 = (x309^(x310/(x311<x312)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x313 = UINT64_MAX;
	volatile int16_t x315 = INT16_MIN;
	volatile uint64_t t45 = 565371984LLU;

	t45 = (x313^(x314/(x315<x316)));

	if (t45 != 18446744073273995814LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = 268;
	static int32_t x323 = -571;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t46 = -196630909;

	t46 = (x321^(x322/(x323<x324)));

	if (t46 != -2147483380) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x329 = 522698641785345LLU;
	int32_t x330 = INT32_MAX;
	uint8_t x331 = UINT8_MAX;
	volatile uint64_t t47 = 5414178LLU;

	t47 = (x329^(x330/(x331<x332)));

	if (t47 != 522698545544702LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x345 = 1;
	volatile uint64_t x346 = 23062398648931755LLU;
	int8_t x347 = INT8_MIN;
	static uint8_t x348 = 105U;
	static uint64_t t48 = 22773178709LLU;

	t48 = (x345^(x346/(x347<x348)));

	if (t48 != 23062398648931754LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x353 = 22208U;
	uint8_t x354 = 0U;
	volatile int16_t x355 = INT16_MIN;
	uint16_t x356 = UINT16_MAX;
	volatile uint32_t t49 = 55U;

	t49 = (x353^(x354/(x355<x356)));

	if (t49 != 22208U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x357 = 51157LL;
	static int32_t x358 = -52556319;
	uint32_t x359 = 174884633U;
	int8_t x360 = INT8_MIN;
	static int64_t t50 = -39592413837830LL;

	t50 = (x357^(x358/(x359<x360)));

	if (t50 != -52508108LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x381 = 3592018243348528944LLU;
	int64_t x383 = INT64_MIN;
	static uint16_t x384 = UINT16_MAX;
	uint64_t t51 = 191660329528LLU;

	t51 = (x381^(x382/(x383<x384)));

	if (t51 != 3592018243264379768LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MIN;
	static uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MAX;

	t52 = (x385^(x386/(x387<x388)));

	if (t52 != 32767LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x413 = -1;
	uint64_t x414 = 163368759151LLU;
	uint32_t x415 = 17404U;
	int64_t x416 = INT64_MAX;
	uint64_t t53 = 535369010LLU;

	t53 = (x413^(x414/(x415<x416)));

	if (t53 != 18446743910340792464LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x445 = -1;
	uint64_t x446 = 1LLU;
	int32_t x447 = INT32_MIN;
	volatile int32_t x448 = 2362;
	static volatile uint64_t t54 = 519198540329LLU;

	t54 = (x445^(x446/(x447<x448)));

	if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x462 = INT8_MIN;
	int64_t x463 = INT64_MIN;
	int32_t t55 = 229;

	t55 = (x461^(x462/(x463<x464)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x465 = INT16_MAX;
	uint64_t x466 = UINT64_MAX;
	volatile int64_t x467 = INT64_MIN;
	int8_t x468 = -1;
	uint64_t t56 = 56435671LLU;

	t56 = (x465^(x466/(x467<x468)));

	if (t56 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x469 = -1LL;
	int16_t x470 = 3026;
	volatile int8_t x471 = 0;
	int64_t t57 = 12243698LL;

	t57 = (x469^(x470/(x471<x472)));

	if (t57 != -3027LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x473 = -1;
	volatile int16_t x474 = INT16_MAX;
	volatile int16_t x475 = -7;
	int64_t x476 = 353154612LL;
	volatile int32_t t58 = -828933;

	t58 = (x473^(x474/(x475<x476)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x481 = -1;
	static int32_t x482 = INT32_MIN;
	static int64_t x483 = INT64_MIN;
	int8_t x484 = -5;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x481^(x482/(x483<x484)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x489 = INT64_MAX;
	uint64_t x491 = 4467LLU;
	int64_t x492 = INT64_MIN;
	static volatile int64_t t60 = 28LL;

	t60 = (x489^(x490/(x491<x492)));

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x494 = -4;
	int8_t x495 = 28;
	uint8_t x496 = 59U;
	volatile int32_t t61 = 53605371;

	t61 = (x493^(x494/(x495<x496)));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x497 = 1;
	uint16_t x498 = UINT16_MAX;
	int8_t x499 = INT8_MIN;
	int32_t x500 = -1;
	volatile int32_t t62 = -3;

	t62 = (x497^(x498/(x499<x500)));

	if (t62 != 65534) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x505 = INT8_MAX;
	int64_t x507 = -3285240393578557026LL;
	int16_t x508 = 0;
	volatile int32_t t63 = 0;

	t63 = (x505^(x506/(x507<x508)));

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x509 = 303U;
	uint16_t x511 = 48U;
	int32_t x512 = 126206834;
	volatile int32_t t64 = -58957218;

	t64 = (x509^(x510/(x511<x512)));

	if (t64 != -2147483345) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x513 = 1U;
	int16_t x514 = INT16_MAX;
	int16_t x515 = INT16_MIN;
	int8_t x516 = INT8_MIN;
	int32_t t65 = 4814;

	t65 = (x513^(x514/(x515<x516)));

	if (t65 != 32766) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x521 = INT64_MIN;
	volatile int64_t x522 = 6LL;
	uint8_t x523 = 63U;
	int32_t x524 = 1920;
	int64_t t66 = 1012194788351621LL;

	t66 = (x521^(x522/(x523<x524)));

	if (t66 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x525 = 21377723U;
	static uint8_t x526 = 0U;
	int32_t x527 = 1;
	uint16_t x528 = 3U;
	uint32_t t67 = 1U;

	t67 = (x525^(x526/(x527<x528)));

	if (t67 != 21377723U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x529 = -1;
	static uint8_t x531 = 59U;
	int64_t x532 = 477LL;

	t68 = (x529^(x530/(x531<x532)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x537 = INT64_MIN;
	int16_t x538 = 1;
	uint64_t x539 = 62833217297LLU;
	int64_t t69 = -3093955487011LL;

	t69 = (x537^(x538/(x539<x540)));

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x541 = INT8_MIN;
	uint64_t x542 = 1616896925683409LLU;
	int8_t x543 = INT8_MIN;
	int64_t x544 = -1LL;

	t70 = (x541^(x542/(x543<x544)));

	if (t70 != 18445127176783868241LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x557 = 3636U;
	uint32_t x559 = 366U;
	static volatile int8_t x560 = INT8_MIN;
	static uint32_t t71 = 26682689U;

	t71 = (x557^(x558/(x559<x560)));

	if (t71 != 4294963659U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x561 = 115U;
	volatile int16_t x562 = INT16_MIN;
	static int8_t x563 = 8;
	volatile int8_t x564 = 10;
	int32_t t72 = -101;

	t72 = (x561^(x562/(x563<x564)));

	if (t72 != -32653) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x577 = 368505726U;
	uint64_t x578 = UINT64_MAX;
	uint8_t x580 = UINT8_MAX;
	volatile uint64_t t73 = 178872LLU;

	t73 = (x577^(x578/(x579<x580)));

	if (t73 != 18446744073341045889LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x589 = 107724066186756107LLU;
	int64_t x590 = INT64_MAX;
	int16_t x592 = INT16_MAX;
	volatile uint64_t t74 = 1025704573602149570LLU;

	t74 = (x589^(x590/(x591<x592)));

	if (t74 != 9115647970668019700LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x597 = 3U;
	uint64_t x598 = 22480LLU;
	uint64_t t75 = 46243400LLU;

	t75 = (x597^(x598/(x599<x600)));

	if (t75 != 22483LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x610 = -1;
	uint8_t x611 = 102U;
	volatile int32_t t76 = -622387595;

	t76 = (x609^(x610/(x611<x612)));

	if (t76 != -7) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x613 = INT64_MIN;
	int8_t x614 = 26;
	int16_t x615 = -3;
	uint16_t x616 = UINT16_MAX;
	volatile int64_t t77 = -1097551215812095LL;

	t77 = (x613^(x614/(x615<x616)));

	if (t77 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x618 = -8;
	uint8_t x620 = 36U;
	int32_t t78 = 411132;

	t78 = (x617^(x618/(x619<x620)));

	if (t78 != -23) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x627 = 5;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t79 = -95394553;

	t79 = (x625^(x626/(x627<x628)));

	if (t79 != -2147418113) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x629 = INT8_MIN;
	uint16_t x630 = 2U;
	volatile int16_t x631 = INT16_MIN;
	static int32_t t80 = 2430;

	t80 = (x629^(x630/(x631<x632)));

	if (t80 != -126) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x633 = -1;
	int64_t x634 = -36000LL;
	static volatile int8_t x635 = INT8_MIN;
	volatile int8_t x636 = INT8_MAX;
	volatile int64_t t81 = -434388561LL;

	t81 = (x633^(x634/(x635<x636)));

	if (t81 != 35999LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x641 = -1;
	volatile int32_t x642 = 303656695;
	static uint8_t x643 = UINT8_MAX;
	static uint32_t x644 = 394U;
	static volatile int32_t t82 = -236;

	t82 = (x641^(x642/(x643<x644)));

	if (t82 != -303656696) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x645 = -12233;
	int32_t x646 = 89003;
	int8_t x648 = INT8_MIN;
	int32_t t83 = 1;

	t83 = (x645^(x646/(x647<x648)));

	if (t83 != -95332) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x651 = 7256U;
	int32_t x652 = INT32_MIN;
	uint64_t t84 = 38932819LLU;

	t84 = (x649^(x650/(x651<x652)));

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x653 = UINT16_MAX;
	int8_t x654 = -21;
	static uint64_t x655 = 2392563LLU;
	static volatile int32_t t85 = 7890;

	t85 = (x653^(x654/(x655<x656)));

	if (t85 != -65516) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x665 = 840;
	int16_t x666 = 2;
	int16_t x668 = 7997;
	static int32_t t86 = 16553677;

	t86 = (x665^(x666/(x667<x668)));

	if (t86 != 842) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x674 = INT8_MIN;
	int32_t x675 = -1;
	int32_t t87 = 0;

	t87 = (x673^(x674/(x675<x676)));

	if (t87 != -126) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x681 = INT8_MIN;
	volatile int32_t x682 = -27;
	int16_t x683 = INT16_MIN;
	int8_t x684 = INT8_MIN;

	t88 = (x681^(x682/(x683<x684)));

	if (t88 != 101) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t t89 = 22LLU;

	t89 = (x705^(x706/(x707<x708)));

	if (t89 != 18296140196124485188LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x717 = 23;
	static int8_t x718 = INT8_MIN;
	int64_t x719 = 219LL;
	int32_t t90 = 2371;

	t90 = (x717^(x718/(x719<x720)));

	if (t90 != -105) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x738 = INT32_MIN;
	static volatile int32_t x739 = INT32_MIN;
	int64_t x740 = 9LL;
	volatile uint64_t t91 = 5193864791401LLU;

	t91 = (x737^(x738/(x739<x740)));

	if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x745 = -56;
	int32_t x746 = INT32_MAX;
	static int32_t x747 = INT32_MIN;
	int32_t t92 = -114683916;

	t92 = (x745^(x746/(x747<x748)));

	if (t92 != -2147483593) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x753 = INT32_MIN;
	uint16_t x754 = 0U;
	static int16_t x755 = INT16_MIN;
	int16_t x756 = 131;
	int32_t t93 = INT32_MIN;

	t93 = (x753^(x754/(x755<x756)));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x761 = UINT8_MAX;
	int32_t x763 = -67;
	uint64_t x764 = UINT64_MAX;
	volatile int32_t t94 = 392495357;

	t94 = (x761^(x762/(x763<x764)));

	if (t94 != -201) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x766 = INT64_MAX;
	volatile int32_t x767 = INT32_MIN;
	int16_t x768 = INT16_MIN;

	t95 = (x765^(x766/(x767<x768)));

	if (t95 != -9223372036854775729LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x777 = INT32_MIN;
	static int8_t x778 = INT8_MAX;
	int64_t x779 = -1095476926577355879LL;
	uint64_t x780 = UINT64_MAX;
	int32_t t96 = 342;

	t96 = (x777^(x778/(x779<x780)));

	if (t96 != -2147483521) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x785 = INT32_MIN;
	int32_t x786 = INT32_MAX;
	int64_t x787 = INT64_MIN;
	int8_t x788 = 47;

	t97 = (x785^(x786/(x787<x788)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x789 = 26U;
	volatile int32_t x790 = INT32_MIN;
	uint64_t x791 = 0LLU;
	volatile int8_t x792 = -1;

	t98 = (x789^(x790/(x791<x792)));

	if (t98 != -2147483622) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x797 = -1;
	volatile int16_t x798 = 13;
	int32_t t99 = 1;

	t99 = (x797^(x798/(x799<x800)));

	if (t99 != -14) { NG(); } else { ; }
	
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

