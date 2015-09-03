#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x20 = 0;
static int32_t t1 = 26;
volatile uint16_t x38 = 5331U;
int16_t x39 = INT16_MAX;
int16_t x49 = INT16_MAX;
static uint16_t x66 = 0U;
uint32_t x68 = UINT32_MAX;
int64_t x70 = 1LL;
int16_t x76 = INT16_MIN;
static uint8_t x78 = 22U;
static uint16_t x86 = UINT16_MAX;
volatile int32_t t10 = -1365790;
volatile int32_t t11 = -138;
int64_t x103 = -1LL;
volatile int32_t t12 = 25644;
uint64_t x107 = UINT64_MAX;
uint16_t x140 = 68U;
uint16_t x157 = 2555U;
volatile uint64_t x158 = 62863178LLU;
volatile int64_t x159 = -1950512037816011114LL;
volatile int8_t x160 = INT8_MIN;
int32_t x177 = INT32_MIN;
uint8_t x189 = 14U;
static int16_t x191 = INT16_MAX;
uint64_t x229 = 409472201939342LLU;
static uint32_t x230 = UINT32_MAX;
static volatile int64_t x237 = -1LL;
int16_t x279 = INT16_MIN;
uint64_t x289 = 6638707895085LLU;
int8_t x291 = INT8_MIN;
static int32_t t35 = -2404;
uint32_t x329 = 8763U;
volatile int8_t x337 = INT8_MIN;
int64_t x340 = 567LL;
int32_t t37 = 1;
int16_t x359 = 21;
int64_t x360 = 10600130493426LL;
int16_t x369 = -3058;
static volatile int32_t x372 = INT32_MAX;
uint16_t x390 = 536U;
volatile int32_t t42 = 157;
int32_t t45 = 8189500;
static int64_t x449 = 24795233271LL;
uint8_t x450 = 3U;
int16_t x482 = INT16_MAX;
uint16_t x483 = 77U;
int16_t x484 = -1;
uint16_t x491 = UINT16_MAX;
volatile int32_t t51 = 2;
int16_t x503 = INT16_MIN;
int16_t x504 = 1;
static volatile int32_t t52 = 831615698;
static volatile uint32_t x508 = 19939U;
volatile int32_t t55 = -156524;
volatile uint8_t x531 = 38U;
int64_t x535 = INT64_MIN;
volatile int16_t x536 = INT16_MIN;
int64_t x545 = -1LL;
volatile int32_t t58 = -158613;
int16_t x553 = -1;
volatile uint16_t x555 = 45U;
volatile uint32_t x568 = UINT32_MAX;
volatile int32_t t61 = -99;
int8_t x598 = INT8_MAX;
uint64_t x600 = UINT64_MAX;
int32_t x601 = -27075;
uint8_t x603 = UINT8_MAX;
static volatile int32_t t64 = -2;
int8_t x613 = 4;
volatile uint64_t x626 = 501654710653333LLU;
uint8_t x629 = 71U;
volatile uint16_t x631 = UINT16_MAX;
uint32_t x649 = UINT32_MAX;
int32_t x651 = INT32_MAX;
volatile int32_t t71 = 2428;
volatile int8_t x656 = INT8_MIN;
volatile uint16_t x662 = 85U;
volatile int32_t t73 = 72749;
int64_t x667 = INT64_MIN;
static int8_t x669 = INT8_MAX;
static int8_t x671 = 1;
uint64_t x678 = 33579456325LLU;
int16_t x679 = 6;
static int32_t t78 = 3326;
static int32_t x685 = INT32_MAX;
int32_t x689 = INT32_MIN;
int32_t t80 = 1862256;
uint64_t x693 = 6538160LLU;
int32_t t81 = -19414;
volatile int16_t x706 = INT16_MAX;
volatile int32_t t83 = 8653174;
static int8_t x711 = 0;
volatile uint16_t x718 = UINT16_MAX;
uint8_t x733 = 12U;
volatile int32_t t86 = 1;
uint64_t x742 = 242482937897LLU;
int32_t x760 = -1;
static int64_t x766 = INT64_MAX;
volatile int32_t t92 = 1004162;
uint16_t x803 = UINT16_MAX;
volatile int32_t t93 = -10;
uint32_t x817 = 56596U;
int8_t x818 = 0;
uint32_t x836 = 115U;
volatile int64_t x859 = INT64_MIN;
int32_t t97 = 1;
int16_t x872 = INT16_MAX;
volatile int32_t t99 = 5532954;


void f0(void) {
	static volatile int64_t x17 = INT64_MIN;
	volatile uint32_t x18 = UINT32_MAX;
	int64_t x19 = INT64_MIN;
	int32_t t0 = 192;

	t0 = (x17<=(x18<<(x19<x20)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = -1;
	int8_t x26 = 0;
	int32_t x27 = INT32_MIN;
	volatile uint64_t x28 = UINT64_MAX;

	t1 = (x25<=(x26<<(x27<x28)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x29 = INT32_MIN;
	volatile int8_t x30 = INT8_MAX;
	uint32_t x31 = 3U;
	int64_t x32 = INT64_MIN;
	volatile int32_t t2 = -5925;

	t2 = (x29<=(x30<<(x31<x32)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x37 = 3LLU;
	int16_t x40 = INT16_MIN;
	volatile int32_t t3 = -282269;

	t3 = (x37<=(x38<<(x39<x40)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x50 = 40U;
	int32_t x51 = -788;
	static int32_t x52 = -1;
	int32_t t4 = 86;

	t4 = (x49<=(x50<<(x51<x52)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x53 = INT32_MIN;
	uint8_t x54 = UINT8_MAX;
	static int32_t x55 = 4028;
	int64_t x56 = INT64_MIN;
	int32_t t5 = -57;

	t5 = (x53<=(x54<<(x55<x56)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x65 = INT8_MAX;
	uint32_t x67 = UINT32_MAX;
	volatile int32_t t6 = 202577;

	t6 = (x65<=(x66<<(x67<x68)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x69 = UINT64_MAX;
	int8_t x71 = -16;
	int32_t x72 = INT32_MAX;
	static int32_t t7 = 2;

	t7 = (x69<=(x70<<(x71<x72)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x73 = 7;
	int16_t x74 = 1714;
	int64_t x75 = -1LL;
	int32_t t8 = 1985;

	t8 = (x73<=(x74<<(x75<x76)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x77 = INT32_MAX;
	int64_t x79 = -15681798065276180LL;
	int8_t x80 = INT8_MAX;
	int32_t t9 = 1;

	t9 = (x77<=(x78<<(x79<x80)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x85 = INT16_MAX;
	int64_t x87 = -1069342120LL;
	static int32_t x88 = INT32_MAX;

	t10 = (x85<=(x86<<(x87<x88)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x93 = INT64_MAX;
	uint8_t x94 = 19U;
	int32_t x95 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;

	t11 = (x93<=(x94<<(x95<x96)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x101 = INT32_MIN;
	uint64_t x102 = UINT64_MAX;
	uint8_t x104 = UINT8_MAX;

	t12 = (x101<=(x102<<(x103<x104)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x105 = INT64_MIN;
	static uint8_t x106 = 50U;
	int64_t x108 = INT64_MIN;
	int32_t t13 = 2;

	t13 = (x105<=(x106<<(x107<x108)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x109 = 6;
	volatile uint64_t x110 = 20031092LLU;
	uint8_t x111 = UINT8_MAX;
	int32_t x112 = -1;
	volatile int32_t t14 = -14480;

	t14 = (x109<=(x110<<(x111<x112)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x125 = INT8_MIN;
	uint16_t x126 = UINT16_MAX;
	int32_t x127 = INT32_MIN;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t15 = 347689740;

	t15 = (x125<=(x126<<(x127<x128)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x129 = -1;
	int16_t x130 = 525;
	static int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t16 = -15737;

	t16 = (x129<=(x130<<(x131<x132)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x137 = 0U;
	uint64_t x138 = 193261LLU;
	uint8_t x139 = UINT8_MAX;
	volatile int32_t t17 = 1;

	t17 = (x137<=(x138<<(x139<x140)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x153 = INT16_MIN;
	uint64_t x154 = 1405099785LLU;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = UINT16_MAX;
	static volatile int32_t t18 = 11845;

	t18 = (x153<=(x154<<(x155<x156)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t t19 = -6311;

	t19 = (x157<=(x158<<(x159<x160)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x169 = -1;
	static int32_t x170 = 999348;
	static int16_t x171 = -1;
	int8_t x172 = INT8_MIN;
	static int32_t t20 = 1274;

	t20 = (x169<=(x170<<(x171<x172)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x178 = 8000698978672398LL;
	static volatile uint32_t x179 = 23133606U;
	int8_t x180 = INT8_MIN;
	int32_t t21 = -120590;

	t21 = (x177<=(x178<<(x179<x180)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x181 = 22714248LLU;
	uint16_t x182 = UINT16_MAX;
	volatile int64_t x183 = INT64_MAX;
	uint16_t x184 = 815U;
	int32_t t22 = 1;

	t22 = (x181<=(x182<<(x183<x184)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x190 = 25U;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t23 = 0;

	t23 = (x189<=(x190<<(x191<x192)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x205 = INT16_MIN;
	uint8_t x206 = 3U;
	int32_t x207 = INT32_MIN;
	volatile uint32_t x208 = 700145U;
	int32_t t24 = -57430637;

	t24 = (x205<=(x206<<(x207<x208)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x231 = INT8_MIN;
	static int16_t x232 = INT16_MIN;
	int32_t t25 = -83699686;

	t25 = (x229<=(x230<<(x231<x232)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x233 = -529039LL;
	uint32_t x234 = 41702728U;
	volatile uint32_t x235 = 437338701U;
	uint8_t x236 = UINT8_MAX;
	int32_t t26 = -221;

	t26 = (x233<=(x234<<(x235<x236)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x238 = 36;
	int8_t x239 = 2;
	int8_t x240 = 5;
	int32_t t27 = 5;

	t27 = (x237<=(x238<<(x239<x240)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x249 = UINT64_MAX;
	static int64_t x250 = 644733802560410LL;
	int16_t x251 = 1;
	int16_t x252 = INT16_MAX;
	static int32_t t28 = -30352134;

	t28 = (x249<=(x250<<(x251<x252)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x261 = -1;
	uint32_t x262 = 28U;
	static volatile uint32_t x263 = UINT32_MAX;
	int16_t x264 = 2;
	int32_t t29 = 34588;

	t29 = (x261<=(x262<<(x263<x264)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x265 = -6;
	static volatile int64_t x266 = 23055LL;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = -1;
	static int32_t t30 = -247;

	t30 = (x265<=(x266<<(x267<x268)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x273 = 229U;
	uint16_t x274 = 7358U;
	static uint16_t x275 = UINT16_MAX;
	static uint16_t x276 = 634U;
	volatile int32_t t31 = -24;

	t31 = (x273<=(x274<<(x275<x276)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x277 = 7U;
	uint32_t x278 = 107372U;
	int16_t x280 = -1;
	int32_t t32 = -2084172;

	t32 = (x277<=(x278<<(x279<x280)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x281 = -1;
	static uint8_t x282 = UINT8_MAX;
	volatile int8_t x283 = INT8_MAX;
	uint16_t x284 = 24U;
	int32_t t33 = -305294159;

	t33 = (x281<=(x282<<(x283<x284)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x290 = INT8_MAX;
	volatile int32_t x292 = -1;
	int32_t t34 = -1928382;

	t34 = (x289<=(x290<<(x291<x292)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x293 = UINT32_MAX;
	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = UINT16_MAX;
	int32_t x296 = INT32_MAX;

	t35 = (x293<=(x294<<(x295<x296)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x330 = 15888LLU;
	int8_t x331 = 1;
	int16_t x332 = INT16_MAX;
	int32_t t36 = 377532101;

	t36 = (x329<=(x330<<(x331<x332)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x338 = 17U;
	int64_t x339 = 7LL;

	t37 = (x337<=(x338<<(x339<x340)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x353 = 86792688U;
	uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MIN;
	volatile int16_t x356 = -8069;
	static int32_t t38 = -253220;

	t38 = (x353<=(x354<<(x355<x356)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x357 = UINT16_MAX;
	static int32_t x358 = 380123;
	int32_t t39 = -8547851;

	t39 = (x357<=(x358<<(x359<x360)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x370 = 165LLU;
	int8_t x371 = -1;
	static volatile int32_t t40 = -38436597;

	t40 = (x369<=(x370<<(x371<x372)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x389 = UINT32_MAX;
	int32_t x391 = INT32_MAX;
	static int64_t x392 = INT64_MIN;
	int32_t t41 = -1;

	t41 = (x389<=(x390<<(x391<x392)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x397 = INT64_MIN;
	static uint64_t x398 = 9777150430556LLU;
	static volatile int8_t x399 = INT8_MAX;
	static volatile int16_t x400 = INT16_MIN;

	t42 = (x397<=(x398<<(x399<x400)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x401 = UINT32_MAX;
	uint16_t x402 = 12U;
	uint32_t x403 = 25355U;
	int8_t x404 = -56;
	volatile int32_t t43 = 69007465;

	t43 = (x401<=(x402<<(x403<x404)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x421 = 2U;
	static volatile int32_t x422 = INT32_MAX;
	uint16_t x423 = UINT16_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t44 = 11554189;

	t44 = (x421<=(x422<<(x423<x424)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x433 = INT64_MIN;
	int64_t x434 = INT64_MAX;
	uint32_t x435 = 375350515U;
	static int32_t x436 = 23832286;

	t45 = (x433<=(x434<<(x435<x436)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x441 = 348208LLU;
	uint64_t x442 = 819328933LLU;
	static int16_t x443 = -1;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t46 = 136798;

	t46 = (x441<=(x442<<(x443<x444)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x451 = -1;
	static volatile uint8_t x452 = UINT8_MAX;
	static int32_t t47 = 272886;

	t47 = (x449<=(x450<<(x451<x452)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x457 = INT8_MIN;
	int16_t x458 = INT16_MAX;
	volatile uint32_t x459 = UINT32_MAX;
	volatile int32_t x460 = INT32_MAX;
	volatile int32_t t48 = 33021;

	t48 = (x457<=(x458<<(x459<x460)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x465 = 24201808392543373LLU;
	int16_t x466 = 0;
	int16_t x467 = 28;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t49 = 158618202;

	t49 = (x465<=(x466<<(x467<x468)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x481 = 209935;
	volatile int32_t t50 = 5857;

	t50 = (x481<=(x482<<(x483<x484)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x489 = -1LL;
	volatile uint8_t x490 = 51U;
	static uint16_t x492 = 1895U;

	t51 = (x489<=(x490<<(x491<x492)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x501 = -182718734;
	static int16_t x502 = INT16_MAX;

	t52 = (x501<=(x502<<(x503<x504)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x505 = INT32_MAX;
	static uint64_t x506 = 4LLU;
	int64_t x507 = INT64_MIN;
	volatile int32_t t53 = 139044162;

	t53 = (x505<=(x506<<(x507<x508)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x517 = INT8_MIN;
	uint16_t x518 = UINT16_MAX;
	int64_t x519 = INT64_MIN;
	int16_t x520 = INT16_MIN;
	int32_t t54 = -39102;

	t54 = (x517<=(x518<<(x519<x520)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x525 = 20U;
	static volatile uint32_t x526 = 4307573U;
	int64_t x527 = INT64_MAX;
	uint32_t x528 = UINT32_MAX;

	t55 = (x525<=(x526<<(x527<x528)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x529 = 679260439LLU;
	uint64_t x530 = 31512135197LLU;
	volatile uint64_t x532 = UINT64_MAX;
	volatile int32_t t56 = 28224;

	t56 = (x529<=(x530<<(x531<x532)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x533 = 1954220U;
	uint64_t x534 = 3312411511725786LLU;
	volatile int32_t t57 = 8360549;

	t57 = (x533<=(x534<<(x535<x536)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x546 = 0U;
	uint16_t x547 = 115U;
	int16_t x548 = INT16_MAX;

	t58 = (x545<=(x546<<(x547<x548)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x554 = 11U;
	uint64_t x556 = 62390468LLU;
	volatile int32_t t59 = -135982295;

	t59 = (x553<=(x554<<(x555<x556)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x565 = 669074084334849LLU;
	static uint32_t x566 = 52U;
	int32_t x567 = 589610040;
	volatile int32_t t60 = -541;

	t60 = (x565<=(x566<<(x567<x568)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x585 = INT32_MAX;
	int64_t x586 = 25662392LL;
	int16_t x587 = INT16_MIN;
	uint16_t x588 = 3U;

	t61 = (x585<=(x586<<(x587<x588)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x593 = INT32_MIN;
	int32_t x594 = 669785;
	uint32_t x595 = UINT32_MAX;
	uint8_t x596 = 0U;
	static int32_t t62 = 5062512;

	t62 = (x593<=(x594<<(x595<x596)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x597 = INT8_MAX;
	static int64_t x599 = -2412392314274947LL;
	int32_t t63 = 577175469;

	t63 = (x597<=(x598<<(x599<x600)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x602 = 2U;
	int8_t x604 = INT8_MIN;

	t64 = (x601<=(x602<<(x603<x604)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x614 = 83U;
	int32_t x615 = -745;
	volatile int8_t x616 = INT8_MIN;
	static volatile int32_t t65 = 844;

	t65 = (x613<=(x614<<(x615<x616)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x617 = UINT16_MAX;
	uint16_t x618 = 69U;
	int32_t x619 = -88004059;
	volatile int32_t x620 = INT32_MAX;
	volatile int32_t t66 = 1;

	t66 = (x617<=(x618<<(x619<x620)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x625 = -1;
	uint64_t x627 = 3038937658067LLU;
	uint16_t x628 = 30U;
	volatile int32_t t67 = 473123778;

	t67 = (x625<=(x626<<(x627<x628)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x630 = 18U;
	uint16_t x632 = UINT16_MAX;
	static int32_t t68 = -44;

	t68 = (x629<=(x630<<(x631<x632)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x637 = 13269LLU;
	int8_t x638 = 2;
	uint8_t x639 = 23U;
	int8_t x640 = INT8_MIN;
	int32_t t69 = -1031925337;

	t69 = (x637<=(x638<<(x639<x640)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x645 = INT32_MIN;
	volatile int16_t x646 = 0;
	uint8_t x647 = 1U;
	uint32_t x648 = 311693U;
	volatile int32_t t70 = 3293729;

	t70 = (x645<=(x646<<(x647<x648)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x650 = 4;
	volatile uint32_t x652 = 1U;

	t71 = (x649<=(x650<<(x651<x652)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x653 = -1;
	uint8_t x654 = 2U;
	static int8_t x655 = -1;
	int32_t t72 = 26700;

	t72 = (x653<=(x654<<(x655<x656)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x661 = INT32_MAX;
	int8_t x663 = -1;
	int8_t x664 = -1;

	t73 = (x661<=(x662<<(x663<x664)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x665 = INT64_MIN;
	int16_t x666 = 54;
	volatile int8_t x668 = INT8_MIN;
	volatile int32_t t74 = 591792;

	t74 = (x665<=(x666<<(x667<x668)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x670 = INT32_MAX;
	int8_t x672 = INT8_MIN;
	int32_t t75 = -125543;

	t75 = (x669<=(x670<<(x671<x672)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x673 = INT32_MAX;
	static volatile int8_t x674 = INT8_MAX;
	static int16_t x675 = INT16_MIN;
	int16_t x676 = -1;
	volatile int32_t t76 = -1;

	t76 = (x673<=(x674<<(x675<x676)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x677 = 258449175018419LLU;
	uint8_t x680 = 7U;
	int32_t t77 = -365196;

	t77 = (x677<=(x678<<(x679<x680)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x681 = INT64_MIN;
	volatile int64_t x682 = 1434507157051371980LL;
	static uint16_t x683 = 231U;
	uint16_t x684 = 7U;

	t78 = (x681<=(x682<<(x683<x684)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x686 = 9;
	int32_t x687 = -3;
	int64_t x688 = -74LL;
	volatile int32_t t79 = 698032584;

	t79 = (x685<=(x686<<(x687<x688)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x690 = INT16_MAX;
	static int32_t x691 = -255;
	static uint8_t x692 = 41U;

	t80 = (x689<=(x690<<(x691<x692)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x694 = UINT16_MAX;
	uint16_t x695 = 3377U;
	int16_t x696 = INT16_MAX;

	t81 = (x693<=(x694<<(x695<x696)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x697 = 6U;
	volatile int64_t x698 = INT64_MAX;
	int64_t x699 = INT64_MAX;
	int8_t x700 = 58;
	static volatile int32_t t82 = 190;

	t82 = (x697<=(x698<<(x699<x700)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x705 = 27697835817479LLU;
	uint32_t x707 = 1481806U;
	int16_t x708 = -1;

	t83 = (x705<=(x706<<(x707<x708)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x709 = 148U;
	int32_t x710 = INT32_MAX;
	int64_t x712 = INT64_MIN;
	volatile int32_t t84 = 57;

	t84 = (x709<=(x710<<(x711<x712)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x717 = INT16_MAX;
	int16_t x719 = -350;
	int64_t x720 = -834525780LL;
	int32_t t85 = 21;

	t85 = (x717<=(x718<<(x719<x720)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x734 = 56354977451868738LL;
	int8_t x735 = INT8_MAX;
	uint64_t x736 = UINT64_MAX;

	t86 = (x733<=(x734<<(x735<x736)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x741 = UINT64_MAX;
	int8_t x743 = INT8_MIN;
	int16_t x744 = INT16_MIN;
	volatile int32_t t87 = 13883;

	t87 = (x741<=(x742<<(x743<x744)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x753 = 4U;
	uint8_t x754 = UINT8_MAX;
	volatile int32_t x755 = INT32_MAX;
	static uint32_t x756 = 21810U;
	volatile int32_t t88 = 169502077;

	t88 = (x753<=(x754<<(x755<x756)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x757 = 1;
	int16_t x758 = 11;
	volatile int32_t x759 = INT32_MIN;
	int32_t t89 = 57507;

	t89 = (x757<=(x758<<(x759<x760)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x761 = 1452U;
	static uint32_t x762 = 1643192U;
	static uint32_t x763 = 194U;
	volatile int8_t x764 = INT8_MAX;
	int32_t t90 = 1328;

	t90 = (x761<=(x762<<(x763<x764)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x765 = 1877;
	int16_t x767 = -1;
	int32_t x768 = INT32_MIN;
	static int32_t t91 = -4;

	t91 = (x765<=(x766<<(x767<x768)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x781 = INT32_MIN;
	uint32_t x782 = 5U;
	uint16_t x783 = 2399U;
	int8_t x784 = INT8_MIN;

	t92 = (x781<=(x782<<(x783<x784)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x801 = -1;
	static int64_t x802 = 893892634LL;
	int64_t x804 = -13LL;

	t93 = (x801<=(x802<<(x803<x804)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x805 = -362LL;
	static volatile int8_t x806 = 4;
	int64_t x807 = INT64_MIN;
	static int16_t x808 = INT16_MIN;
	volatile int32_t t94 = -30945398;

	t94 = (x805<=(x806<<(x807<x808)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x819 = 129316749228389503LLU;
	static volatile int64_t x820 = INT64_MAX;
	volatile int32_t t95 = 42201;

	t95 = (x817<=(x818<<(x819<x820)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x833 = -18;
	volatile int32_t x834 = 723;
	uint16_t x835 = UINT16_MAX;
	int32_t t96 = -22786;

	t96 = (x833<=(x834<<(x835<x836)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x857 = -1;
	volatile int8_t x858 = 12;
	static volatile int64_t x860 = INT64_MAX;

	t97 = (x857<=(x858<<(x859<x860)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x861 = INT8_MAX;
	volatile int16_t x862 = INT16_MAX;
	int16_t x863 = INT16_MAX;
	uint16_t x864 = 98U;
	volatile int32_t t98 = -463;

	t98 = (x861<=(x862<<(x863<x864)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x869 = -40;
	uint64_t x870 = 3113247473LLU;
	static int16_t x871 = -500;

	t99 = (x869<=(x870<<(x871<x872)));

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

