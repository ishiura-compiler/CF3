#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int8_t x22 = -45;
uint64_t x37 = 675285LLU;
volatile int32_t t5 = -91398780;
uint32_t x76 = 21491U;
int32_t x78 = INT32_MIN;
uint8_t x79 = 2U;
uint8_t x80 = 15U;
int64_t x109 = -1LL;
volatile int32_t t17 = -1;
int64_t x130 = INT64_MAX;
static volatile int32_t t21 = 496697;
static uint8_t x158 = UINT8_MAX;
int32_t x159 = -1;
static volatile int32_t t25 = -61696240;
volatile int64_t x180 = INT64_MAX;
volatile int32_t t26 = 5001;
static int16_t x208 = INT16_MIN;
int8_t x215 = -1;
uint8_t x230 = 3U;
volatile int64_t x232 = INT64_MAX;
volatile int32_t t32 = 44368;
static uint64_t x233 = 743892LLU;
volatile uint8_t x234 = 2U;
int32_t x235 = -1;
volatile int32_t t35 = 11506041;
int8_t x250 = INT8_MIN;
int64_t x270 = INT64_MIN;
int8_t x275 = INT8_MIN;
int32_t x288 = -1030667880;
int32_t t40 = 455;
int64_t x289 = 19838LL;
uint32_t x294 = UINT32_MAX;
uint64_t x296 = UINT64_MAX;
static volatile int32_t t42 = -13572051;
static uint32_t x299 = UINT32_MAX;
int16_t x300 = INT16_MIN;
volatile uint64_t x301 = 1449121944556LLU;
uint8_t x303 = UINT8_MAX;
volatile int32_t t44 = -943151;
int16_t x314 = -1;
int64_t x322 = INT64_MAX;
int32_t t48 = -886286;
volatile uint16_t x360 = UINT16_MAX;
volatile int64_t x364 = -3905262198062698LL;
uint8_t x369 = 2U;
uint16_t x380 = UINT16_MAX;
static volatile int8_t x390 = 2;
int16_t x400 = INT16_MIN;
uint8_t x407 = 97U;
static volatile int32_t t60 = -15;
int16_t x411 = INT16_MIN;
volatile int32_t x412 = INT32_MAX;
int32_t x414 = INT32_MAX;
int16_t x430 = 2;
uint16_t x431 = 6U;
int8_t x433 = INT8_MIN;
static uint8_t x436 = 50U;
int16_t x440 = INT16_MIN;
volatile uint16_t x445 = 15U;
int32_t t66 = -13132;
uint8_t x449 = 34U;
static int8_t x463 = 0;
int16_t x470 = INT16_MAX;
int8_t x494 = -6;
volatile int32_t x519 = -1;
volatile int32_t t74 = -158882167;
int8_t x527 = INT8_MAX;
volatile int32_t t77 = 326;
uint64_t x575 = 120LLU;
uint16_t x576 = 5U;
int64_t x580 = 6132043713LL;
int32_t t82 = -3;
static volatile int32_t t83 = 5598415;
int32_t t84 = -8;
int64_t x590 = INT64_MIN;
static volatile int32_t t85 = 1179;
uint64_t x595 = 1591283739659735753LLU;
int32_t t86 = 125;
int32_t x598 = -378613;
static uint16_t x602 = 22U;
int32_t x603 = 86;
static volatile int32_t t90 = 0;
volatile int16_t x623 = 0;
static volatile int32_t t93 = 7025;
uint8_t x642 = 56U;
volatile uint8_t x655 = 4U;
int64_t x660 = INT64_MAX;
int64_t x661 = INT64_MIN;


void f0(void) {
	uint8_t x5 = 8U;
	static volatile int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MAX;
	volatile int32_t t0 = 1;

	t0 = ((x5<=x6)<<(x7/x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	volatile int8_t x10 = INT8_MIN;
	uint16_t x11 = 1U;
	int32_t x12 = 8988;
	int32_t t1 = 531;

	t1 = ((x9<=x10)<<(x11/x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x21 = 5961246U;
	uint8_t x23 = UINT8_MAX;
	static int16_t x24 = INT16_MAX;
	int32_t t2 = 1;

	t2 = ((x21<=x22)<<(x23/x24));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = INT8_MIN;
	int8_t x30 = 58;
	uint64_t x31 = 136539874404415395LLU;
	int16_t x32 = -199;
	volatile int32_t t3 = -11708294;

	t3 = ((x29<=x30)<<(x31/x32));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x33 = UINT64_MAX;
	static int64_t x34 = -1LL;
	int64_t x35 = -3LL;
	uint32_t x36 = 203590U;
	volatile int32_t t4 = 493;

	t4 = ((x33<=x34)<<(x35/x36));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x38 = INT64_MIN;
	static uint64_t x39 = 564659255045437494LLU;
	int32_t x40 = INT32_MIN;

	t5 = ((x37<=x38)<<(x39/x40));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x53 = INT8_MIN;
	volatile int8_t x54 = -31;
	uint32_t x55 = 792U;
	static volatile int8_t x56 = INT8_MIN;
	int32_t t6 = 1363;

	t6 = ((x53<=x54)<<(x55/x56));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x61 = 1407953U;
	volatile uint64_t x62 = 54LLU;
	volatile int16_t x63 = INT16_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t7 = -1;

	t7 = ((x61<=x62)<<(x63/x64));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = -541052230;
	int16_t x66 = -1;
	static volatile uint8_t x67 = 29U;
	int32_t x68 = INT32_MIN;
	int32_t t8 = -665551;

	t8 = ((x65<=x66)<<(x67/x68));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x73 = INT16_MIN;
	int32_t x74 = -1926;
	static uint16_t x75 = 0U;
	volatile int32_t t9 = 3;

	t9 = ((x73<=x74)<<(x75/x76));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x77 = INT32_MIN;
	int32_t t10 = -118306;

	t10 = ((x77<=x78)<<(x79/x80));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x81 = 838654034595LLU;
	static int64_t x82 = 31683878205LL;
	uint32_t x83 = 241321U;
	static volatile int16_t x84 = -1;
	volatile int32_t t11 = 18210806;

	t11 = ((x81<=x82)<<(x83/x84));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x89 = UINT16_MAX;
	int16_t x90 = -1;
	uint16_t x91 = 30U;
	int64_t x92 = INT64_MIN;
	int32_t t12 = -123;

	t12 = ((x89<=x90)<<(x91/x92));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x93 = -1;
	int16_t x94 = INT16_MAX;
	volatile int8_t x95 = 0;
	int16_t x96 = INT16_MIN;
	static volatile int32_t t13 = 9505790;

	t13 = ((x93<=x94)<<(x95/x96));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x101 = INT32_MAX;
	int16_t x102 = -518;
	uint32_t x103 = 0U;
	uint64_t x104 = 19772215248054LLU;
	int32_t t14 = 2970;

	t14 = ((x101<=x102)<<(x103/x104));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x110 = -84;
	uint8_t x111 = 57U;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t15 = 16;

	t15 = ((x109<=x110)<<(x111/x112));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x113 = -1047080158LL;
	int16_t x114 = INT16_MAX;
	int64_t x115 = -737481LL;
	int64_t x116 = 9075170214393236LL;
	volatile int32_t t16 = -120923;

	t16 = ((x113<=x114)<<(x115/x116));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x117 = -1696675;
	static volatile int8_t x118 = INT8_MAX;
	int8_t x119 = -1;
	static uint64_t x120 = UINT64_MAX;

	t17 = ((x117<=x118)<<(x119/x120));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x125 = 243U;
	static int16_t x126 = INT16_MIN;
	volatile uint32_t x127 = UINT32_MAX;
	int16_t x128 = INT16_MIN;
	int32_t t18 = 2;

	t18 = ((x125<=x126)<<(x127/x128));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x129 = 1;
	uint32_t x131 = 643852U;
	int8_t x132 = -1;
	volatile int32_t t19 = -162;

	t19 = ((x129<=x130)<<(x131/x132));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x145 = UINT64_MAX;
	uint64_t x146 = 0LLU;
	uint64_t x147 = 8445LLU;
	int16_t x148 = INT16_MIN;
	volatile int32_t t20 = 0;

	t20 = ((x145<=x146)<<(x147/x148));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = 87U;
	int16_t x156 = INT16_MAX;

	t21 = ((x153<=x154)<<(x155/x156));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x157 = -1;
	int64_t x160 = INT64_MAX;
	int32_t t22 = 24659628;

	t22 = ((x157<=x158)<<(x159/x160));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x161 = INT8_MIN;
	volatile uint16_t x162 = 0U;
	uint8_t x163 = 0U;
	int64_t x164 = -1LL;
	int32_t t23 = -2644;

	t23 = ((x161<=x162)<<(x163/x164));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x165 = INT64_MIN;
	static int8_t x166 = -1;
	uint32_t x167 = 4854U;
	volatile int16_t x168 = -14534;
	volatile int32_t t24 = 113743;

	t24 = ((x165<=x166)<<(x167/x168));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x174 = -1;
	int64_t x175 = -1LL;
	int16_t x176 = INT16_MIN;

	t25 = ((x173<=x174)<<(x175/x176));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x177 = 2;
	volatile int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;

	t26 = ((x177<=x178)<<(x179/x180));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x189 = UINT32_MAX;
	int32_t x190 = 940427;
	uint8_t x191 = 7U;
	int64_t x192 = 602278591670205LL;
	volatile int32_t t27 = -142860945;

	t27 = ((x189<=x190)<<(x191/x192));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x201 = -1;
	int8_t x202 = 12;
	static volatile int32_t x203 = -1;
	int8_t x204 = INT8_MIN;
	int32_t t28 = 35647564;

	t28 = ((x201<=x202)<<(x203/x204));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x205 = -1;
	int64_t x206 = INT64_MAX;
	int64_t x207 = -13LL;
	int32_t t29 = -108437;

	t29 = ((x205<=x206)<<(x207/x208));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x213 = -3;
	int64_t x214 = -1LL;
	int32_t x216 = INT32_MIN;
	static int32_t t30 = -2087972;

	t30 = ((x213<=x214)<<(x215/x216));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x225 = UINT64_MAX;
	volatile int32_t x226 = -1;
	static int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t31 = -14913103;

	t31 = ((x225<=x226)<<(x227/x228));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x229 = INT8_MIN;
	static uint32_t x231 = 9U;

	t32 = ((x229<=x230)<<(x231/x232));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x236 = INT16_MIN;
	volatile int32_t t33 = -1;

	t33 = ((x233<=x234)<<(x235/x236));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x237 = -1;
	uint16_t x238 = 4U;
	uint8_t x239 = 16U;
	int8_t x240 = INT8_MIN;
	int32_t t34 = -118;

	t34 = ((x237<=x238)<<(x239/x240));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x241 = 2U;
	int32_t x242 = 97872203;
	uint64_t x243 = 29774LLU;
	static uint32_t x244 = 580593609U;

	t35 = ((x241<=x242)<<(x243/x244));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x249 = INT16_MIN;
	static int16_t x251 = 3;
	int64_t x252 = INT64_MAX;
	static int32_t t36 = 37628;

	t36 = ((x249<=x250)<<(x251/x252));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x257 = -1;
	static volatile uint8_t x258 = UINT8_MAX;
	volatile uint16_t x259 = 6U;
	int8_t x260 = INT8_MIN;
	static volatile int32_t t37 = 0;

	t37 = ((x257<=x258)<<(x259/x260));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x271 = UINT32_MAX;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t38 = -40;

	t38 = ((x269<=x270)<<(x271/x272));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x273 = -15;
	uint32_t x274 = 40655484U;
	volatile int16_t x276 = -175;
	int32_t t39 = -6775;

	t39 = ((x273<=x274)<<(x275/x276));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x285 = 0U;
	int32_t x286 = INT32_MIN;
	static volatile uint16_t x287 = UINT16_MAX;

	t40 = ((x285<=x286)<<(x287/x288));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x290 = INT16_MIN;
	uint16_t x291 = 26229U;
	int64_t x292 = 779613372676129998LL;
	volatile int32_t t41 = 20390188;

	t41 = ((x289<=x290)<<(x291/x292));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x293 = 2946LLU;
	uint64_t x295 = 952155894563LLU;

	t42 = ((x293<=x294)<<(x295/x296));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x297 = -60;
	volatile int8_t x298 = 3;
	static int32_t t43 = 65;

	t43 = ((x297<=x298)<<(x299/x300));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x302 = 5U;
	int64_t x304 = INT64_MAX;

	t44 = ((x301<=x302)<<(x303/x304));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x313 = 216700488;
	volatile int8_t x315 = -1;
	volatile int32_t x316 = 6775860;
	static int32_t t45 = 357;

	t45 = ((x313<=x314)<<(x315/x316));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x321 = INT32_MIN;
	int32_t x323 = INT32_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t46 = 2222159;

	t46 = ((x321<=x322)<<(x323/x324));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MIN;
	int64_t x331 = -1LL;
	uint32_t x332 = UINT32_MAX;
	int32_t t47 = -2012186;

	t47 = ((x329<=x330)<<(x331/x332));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x333 = INT64_MIN;
	static uint32_t x334 = 1826110691U;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = UINT64_MAX;

	t48 = ((x333<=x334)<<(x335/x336));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x337 = INT64_MIN;
	uint16_t x338 = UINT16_MAX;
	int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MIN;
	static int32_t t49 = -89;

	t49 = ((x337<=x338)<<(x339/x340));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x341 = 42U;
	volatile uint64_t x342 = 177680507033716LLU;
	volatile int8_t x343 = -1;
	int32_t x344 = INT32_MAX;
	volatile int32_t t50 = -1;

	t50 = ((x341<=x342)<<(x343/x344));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = -20;
	uint64_t x359 = 207874LLU;
	volatile int32_t t51 = 917;

	t51 = ((x357<=x358)<<(x359/x360));

	if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x361 = 984U;
	int16_t x362 = INT16_MAX;
	uint32_t x363 = 1502112955U;
	volatile int32_t t52 = 74435;

	t52 = ((x361<=x362)<<(x363/x364));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x365 = INT16_MAX;
	int32_t x366 = INT32_MIN;
	volatile uint8_t x367 = 32U;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t53 = 0;

	t53 = ((x365<=x366)<<(x367/x368));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x370 = UINT8_MAX;
	int16_t x371 = -1;
	static int16_t x372 = INT16_MAX;
	int32_t t54 = -873476705;

	t54 = ((x369<=x370)<<(x371/x372));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MAX;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t55 = -386473621;

	t55 = ((x373<=x374)<<(x375/x376));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x377 = -1;
	uint32_t x378 = 708812U;
	volatile uint32_t x379 = 1882946U;
	volatile int32_t t56 = -1;

	t56 = ((x377<=x378)<<(x379/x380));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x389 = 3393280597401LL;
	int32_t x391 = -1;
	int16_t x392 = -277;
	volatile int32_t t57 = -748450796;

	t57 = ((x389<=x390)<<(x391/x392));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x397 = UINT8_MAX;
	int64_t x398 = 13068540548LL;
	uint16_t x399 = 38U;
	int32_t t58 = 2;

	t58 = ((x397<=x398)<<(x399/x400));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x401 = -701602;
	uint32_t x402 = UINT32_MAX;
	volatile int32_t x403 = INT32_MIN;
	static int64_t x404 = INT64_MAX;
	volatile int32_t t59 = -1;

	t59 = ((x401<=x402)<<(x403/x404));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x405 = 114480348423LL;
	uint8_t x406 = UINT8_MAX;
	static int64_t x408 = INT64_MIN;

	t60 = ((x405<=x406)<<(x407/x408));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x409 = INT8_MIN;
	int32_t x410 = 9383;
	volatile int32_t t61 = 4675;

	t61 = ((x409<=x410)<<(x411/x412));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x413 = INT8_MIN;
	static volatile uint32_t x415 = UINT32_MAX;
	int8_t x416 = INT8_MIN;
	int32_t t62 = -2;

	t62 = ((x413<=x414)<<(x415/x416));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x429 = 4;
	int16_t x432 = INT16_MIN;
	int32_t t63 = 2625725;

	t63 = ((x429<=x430)<<(x431/x432));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x434 = 116036461120310300LLU;
	int8_t x435 = -1;
	int32_t t64 = -4476853;

	t64 = ((x433<=x434)<<(x435/x436));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x437 = -1;
	volatile uint16_t x438 = 146U;
	int16_t x439 = INT16_MIN;
	static volatile int32_t t65 = -46499;

	t65 = ((x437<=x438)<<(x439/x440));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x446 = 714105U;
	int8_t x447 = INT8_MIN;
	static int32_t x448 = INT32_MAX;

	t66 = ((x445<=x446)<<(x447/x448));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x450 = INT64_MIN;
	uint32_t x451 = UINT32_MAX;
	int64_t x452 = INT64_MIN;
	volatile int32_t t67 = -2;

	t67 = ((x449<=x450)<<(x451/x452));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x453 = 0LL;
	int16_t x454 = INT16_MIN;
	int8_t x455 = INT8_MIN;
	int16_t x456 = INT16_MAX;
	int32_t t68 = 73358;

	t68 = ((x453<=x454)<<(x455/x456));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x457 = 8U;
	volatile uint64_t x458 = 107330295160LLU;
	uint8_t x459 = 7U;
	uint16_t x460 = 11415U;
	static volatile int32_t t69 = 471523755;

	t69 = ((x457<=x458)<<(x459/x460));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x461 = 2U;
	int32_t x462 = -710;
	uint64_t x464 = 4619619611282LLU;
	volatile int32_t t70 = -1169;

	t70 = ((x461<=x462)<<(x463/x464));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x469 = 1757;
	uint32_t x471 = UINT32_MAX;
	int64_t x472 = INT64_MIN;
	volatile int32_t t71 = 101;

	t71 = ((x469<=x470)<<(x471/x472));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x493 = -12;
	int32_t x495 = INT32_MIN;
	volatile int64_t x496 = INT64_MAX;
	int32_t t72 = -581;

	t72 = ((x493<=x494)<<(x495/x496));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x505 = 4230;
	uint16_t x506 = 890U;
	int8_t x507 = INT8_MAX;
	int8_t x508 = INT8_MIN;
	int32_t t73 = -31122218;

	t73 = ((x505<=x506)<<(x507/x508));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x517 = 6U;
	volatile int64_t x518 = INT64_MIN;
	int32_t x520 = INT32_MAX;

	t74 = ((x517<=x518)<<(x519/x520));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x521 = INT64_MAX;
	static int64_t x522 = -1LL;
	int16_t x523 = -1;
	int64_t x524 = INT64_MAX;
	volatile int32_t t75 = 46;

	t75 = ((x521<=x522)<<(x523/x524));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x525 = INT8_MIN;
	uint8_t x526 = UINT8_MAX;
	uint8_t x528 = 28U;
	static volatile int32_t t76 = 108615974;

	t76 = ((x525<=x526)<<(x527/x528));

	if (t76 != 16) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x541 = -1LL;
	int16_t x542 = INT16_MIN;
	volatile int8_t x543 = -3;
	int32_t x544 = -1623773;

	t77 = ((x541<=x542)<<(x543/x544));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x553 = -1;
	uint8_t x554 = 4U;
	volatile uint32_t x555 = UINT32_MAX;
	volatile int8_t x556 = INT8_MIN;
	volatile int32_t t78 = -5268836;

	t78 = ((x553<=x554)<<(x555/x556));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x557 = 60U;
	int32_t x558 = INT32_MAX;
	int8_t x559 = -23;
	uint16_t x560 = UINT16_MAX;
	volatile int32_t t79 = -6008;

	t79 = ((x557<=x558)<<(x559/x560));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x565 = 2561579LLU;
	uint8_t x566 = 15U;
	int8_t x567 = INT8_MIN;
	int32_t x568 = INT32_MAX;
	static int32_t t80 = 54;

	t80 = ((x565<=x566)<<(x567/x568));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x573 = INT16_MIN;
	static int64_t x574 = INT64_MIN;
	static int32_t t81 = -11453049;

	t81 = ((x573<=x574)<<(x575/x576));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x577 = -1;
	volatile int8_t x578 = -39;
	static volatile uint16_t x579 = 4U;

	t82 = ((x577<=x578)<<(x579/x580));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x581 = -30108922873044290LL;
	uint32_t x582 = 7953U;
	uint32_t x583 = 14319U;
	int8_t x584 = -18;

	t83 = ((x581<=x582)<<(x583/x584));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x585 = INT64_MIN;
	uint8_t x586 = 21U;
	int8_t x587 = -1;
	int16_t x588 = -1;

	t84 = ((x585<=x586)<<(x587/x588));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x589 = -1LL;
	uint16_t x591 = UINT16_MAX;
	int64_t x592 = INT64_MIN;

	t85 = ((x589<=x590)<<(x591/x592));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x593 = INT16_MIN;
	int64_t x594 = -1LL;
	int64_t x596 = INT64_MIN;

	t86 = ((x593<=x594)<<(x595/x596));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x597 = UINT16_MAX;
	static int8_t x599 = INT8_MIN;
	volatile uint32_t x600 = UINT32_MAX;
	int32_t t87 = -11818660;

	t87 = ((x597<=x598)<<(x599/x600));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x601 = INT16_MIN;
	volatile uint64_t x604 = 717731615LLU;
	static int32_t t88 = 47366185;

	t88 = ((x601<=x602)<<(x603/x604));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x609 = INT16_MIN;
	int32_t x610 = INT32_MIN;
	int16_t x611 = 318;
	volatile int64_t x612 = INT64_MAX;
	volatile int32_t t89 = -1;

	t89 = ((x609<=x610)<<(x611/x612));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x613 = 21U;
	int8_t x614 = INT8_MAX;
	int8_t x615 = -1;
	uint32_t x616 = 258917394U;

	t90 = ((x613<=x614)<<(x615/x616));

	if (t90 != 65536) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x617 = INT8_MIN;
	int8_t x618 = INT8_MIN;
	uint64_t x619 = 506356816LLU;
	int64_t x620 = 278639617LL;
	volatile int32_t t91 = -1357;

	t91 = ((x617<=x618)<<(x619/x620));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x621 = 5U;
	uint32_t x622 = 45593216U;
	int64_t x624 = -59044839190LL;
	static volatile int32_t t92 = -75144272;

	t92 = ((x621<=x622)<<(x623/x624));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x629 = INT64_MAX;
	static volatile int32_t x630 = 455636;
	uint8_t x631 = 0U;
	int64_t x632 = INT64_MIN;

	t93 = ((x629<=x630)<<(x631/x632));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x633 = UINT32_MAX;
	static int64_t x634 = -918897477600356574LL;
	static int32_t x635 = INT32_MIN;
	uint32_t x636 = UINT32_MAX;
	volatile int32_t t94 = -66541678;

	t94 = ((x633<=x634)<<(x635/x636));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x641 = -3688;
	int64_t x643 = -1LL;
	int8_t x644 = INT8_MAX;
	static volatile int32_t t95 = 94;

	t95 = ((x641<=x642)<<(x643/x644));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x649 = INT64_MIN;
	int16_t x650 = -29;
	int32_t x651 = -1;
	uint32_t x652 = UINT32_MAX;
	int32_t t96 = -5989;

	t96 = ((x649<=x650)<<(x651/x652));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x653 = INT16_MAX;
	uint64_t x654 = 1892653178476LLU;
	int8_t x656 = INT8_MAX;
	static int32_t t97 = 28625;

	t97 = ((x653<=x654)<<(x655/x656));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x657 = 3U;
	int8_t x658 = INT8_MIN;
	static uint16_t x659 = UINT16_MAX;
	volatile int32_t t98 = 14041;

	t98 = ((x657<=x658)<<(x659/x660));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x662 = UINT16_MAX;
	int8_t x663 = -1;
	int64_t x664 = -19676449987278LL;
	static volatile int32_t t99 = -592342;

	t99 = ((x661<=x662)<<(x663/x664));

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

