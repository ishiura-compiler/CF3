#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MAX;
uint8_t x8 = UINT8_MAX;
volatile int64_t x34 = INT64_MIN;
volatile int64_t x35 = -84297257LL;
int32_t t4 = -1753;
uint64_t t5 = 62414583241LLU;
static uint64_t x126 = 966372146575492653LLU;
int8_t x128 = 1;
static volatile uint32_t t15 = 26082848U;
uint32_t x133 = UINT32_MAX;
static volatile int16_t x148 = -6888;
volatile int8_t x151 = INT8_MAX;
volatile uint32_t x152 = 424912552U;
int8_t x166 = -1;
uint16_t x177 = UINT16_MAX;
int32_t t24 = 10971465;
static int32_t x186 = INT32_MAX;
static int32_t x192 = INT32_MIN;
uint32_t x193 = UINT32_MAX;
volatile int32_t x194 = -1;
int32_t x195 = -1;
int32_t x204 = 0;
volatile int16_t x209 = INT16_MAX;
volatile int32_t t32 = 246995252;
int8_t x230 = -1;
int32_t x232 = INT32_MIN;
uint16_t x238 = UINT16_MAX;
int32_t t34 = -6057;
uint16_t x261 = 28U;
int8_t x273 = 0;
uint64_t x287 = 243663501208593LLU;
static volatile int32_t t42 = -540295;
volatile int32_t x290 = INT32_MIN;
static int32_t t43 = 32345;
static uint16_t x297 = UINT16_MAX;
uint16_t x298 = 376U;
static volatile int32_t x301 = 21;
int16_t x308 = INT16_MAX;
int32_t t46 = -20416;
uint32_t t48 = 3U;
volatile uint64_t t49 = 234834213844635LLU;
uint8_t x337 = 33U;
static int32_t t50 = 1;
int64_t x344 = -1LL;
int64_t x346 = INT64_MIN;
int64_t x348 = INT64_MIN;
volatile int32_t t52 = 717967943;
int8_t x355 = -32;
int32_t x356 = -1;
int8_t x363 = INT8_MAX;
int8_t x370 = INT8_MIN;
volatile int16_t x379 = 59;
int8_t x395 = 1;
static uint64_t t59 = UINT64_MAX;
int32_t x404 = -8040473;
int32_t t60 = INT32_MAX;
static uint16_t x416 = 3U;
volatile uint64_t t61 = UINT64_MAX;
int64_t x430 = -7LL;
static uint8_t x432 = 0U;
static int8_t x448 = -1;
static uint32_t t65 = 3771302U;
uint8_t x465 = 5U;
int8_t x466 = -37;
uint64_t x476 = 28LLU;
int8_t x479 = 0;
int8_t x480 = INT8_MAX;
volatile int64_t x485 = INT64_MAX;
uint16_t x486 = UINT16_MAX;
uint64_t x495 = 34LLU;
int64_t x520 = INT64_MAX;
static int64_t x521 = 3204745467128LL;
int32_t x534 = -5492;
volatile int8_t x536 = INT8_MIN;
uint32_t x540 = 61U;
int64_t x547 = INT64_MIN;
uint32_t x554 = UINT32_MAX;
volatile uint16_t x556 = UINT16_MAX;
uint64_t t78 = 5LLU;
int16_t x578 = INT16_MIN;
volatile int64_t t84 = INT64_MAX;
uint16_t x610 = UINT16_MAX;
uint16_t x612 = 45U;
int16_t x622 = INT16_MIN;
volatile int64_t x640 = INT64_MIN;
volatile uint8_t x643 = UINT8_MAX;
int16_t x645 = INT16_MAX;
int16_t x647 = INT16_MAX;
int8_t x656 = -1;
uint8_t x688 = 17U;
int8_t x719 = INT8_MIN;
int64_t x749 = INT64_MAX;
int8_t x751 = INT8_MAX;
int64_t t97 = INT64_MAX;
volatile int16_t x758 = INT16_MAX;


void f0(void) {
	static uint32_t x2 = 46657887U;
	int16_t x3 = -964;
	static int16_t x4 = -13912;
	volatile int32_t t0 = 1;

	t0 = (x1>>(x2==(x3<x4)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 572430892U;
	int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MIN;
	volatile uint32_t t1 = 1807088U;

	t1 = (x5>>(x6==(x7<x8)));

	if (t1 != 572430892U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MAX;
	static uint16_t x22 = 2U;
	int16_t x23 = INT16_MIN;
	uint32_t x24 = 963U;
	int32_t t2 = INT32_MAX;

	t2 = (x21>>(x22==(x23<x24)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x33 = 128716071621584LL;
	volatile uint8_t x36 = 2U;
	volatile int64_t t3 = 5463278858525892LL;

	t3 = (x33>>(x34==(x35<x36)));

	if (t3 != 128716071621584LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = INT8_MAX;
	static int16_t x38 = INT16_MIN;
	uint32_t x39 = 6054U;
	int16_t x40 = -1;

	t4 = (x37>>(x38==(x39<x40)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 49033294195828126LLU;
	volatile uint64_t x42 = 253334257LLU;
	volatile uint8_t x43 = 3U;
	uint16_t x44 = 389U;

	t5 = (x41>>(x42==(x43<x44)));

	if (t5 != 49033294195828126LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x49 = 1U;
	int8_t x50 = INT8_MIN;
	volatile int64_t x51 = INT64_MAX;
	static uint16_t x52 = 320U;
	uint32_t t6 = 511U;

	t6 = (x49>>(x50==(x51<x52)));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x53 = 35342106U;
	int32_t x54 = INT32_MIN;
	volatile int16_t x55 = -29;
	static volatile int32_t x56 = 1480524;
	uint32_t t7 = 4U;

	t7 = (x53>>(x54==(x55<x56)));

	if (t7 != 35342106U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x57 = INT64_MAX;
	uint32_t x58 = UINT32_MAX;
	int16_t x59 = INT16_MAX;
	uint32_t x60 = 2U;
	int64_t t8 = INT64_MAX;

	t8 = (x57>>(x58==(x59<x60)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x69 = 25U;
	int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MAX;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t9 = 335;

	t9 = (x69>>(x70==(x71<x72)));

	if (t9 != 25) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x97 = 7900;
	static int64_t x98 = INT64_MAX;
	uint64_t x99 = UINT64_MAX;
	static volatile uint64_t x100 = UINT64_MAX;
	int32_t t10 = 185272;

	t10 = (x97>>(x98==(x99<x100)));

	if (t10 != 7900) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x105 = 332;
	int64_t x106 = -1LL;
	volatile int32_t x107 = 12843;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t11 = -14;

	t11 = (x105>>(x106==(x107<x108)));

	if (t11 != 332) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x109 = UINT8_MAX;
	uint8_t x110 = UINT8_MAX;
	uint16_t x111 = UINT16_MAX;
	int64_t x112 = INT64_MIN;
	volatile int32_t t12 = -54;

	t12 = (x109>>(x110==(x111<x112)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x117 = 0;
	static int32_t x118 = -1795;
	int64_t x119 = 11892283224364195LL;
	int32_t x120 = INT32_MIN;
	volatile int32_t t13 = 1;

	t13 = (x117>>(x118==(x119<x120)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x125 = 1988U;
	volatile int16_t x127 = INT16_MAX;
	volatile int32_t t14 = -3;

	t14 = (x125>>(x126==(x127<x128)));

	if (t14 != 1988) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x129 = 104478989U;
	int16_t x130 = -1;
	int8_t x131 = INT8_MIN;
	int64_t x132 = 54LL;

	t15 = (x129>>(x130==(x131<x132)));

	if (t15 != 104478989U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x134 = 2366U;
	volatile uint64_t x135 = 358620519281710LLU;
	int16_t x136 = -12;
	static uint32_t t16 = UINT32_MAX;

	t16 = (x133>>(x134==(x135<x136)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x145 = UINT16_MAX;
	uint8_t x146 = 24U;
	volatile uint32_t x147 = 51757U;
	volatile int32_t t17 = -799159;

	t17 = (x145>>(x146==(x147<x148)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x149 = 215281LLU;
	int8_t x150 = INT8_MAX;
	uint64_t t18 = 2052921LLU;

	t18 = (x149>>(x150==(x151<x152)));

	if (t18 != 215281LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x153 = INT8_MAX;
	static volatile int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MAX;
	int64_t x156 = 243425LL;
	int32_t t19 = 6558;

	t19 = (x153>>(x154==(x155<x156)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MAX;
	uint32_t x163 = UINT32_MAX;
	volatile int64_t x164 = INT64_MIN;
	volatile int32_t t20 = 10319755;

	t20 = (x161>>(x162==(x163<x164)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x165 = 231;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t21 = -1;

	t21 = (x165>>(x166==(x167<x168)));

	if (t21 != 231) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x169 = 10U;
	int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	int32_t x172 = 33344183;
	volatile int32_t t22 = 53944036;

	t22 = (x169>>(x170==(x171<x172)));

	if (t22 != 10) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x173 = 6U;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = 1U;
	int8_t x176 = INT8_MAX;
	volatile int32_t t23 = 1597;

	t23 = (x173>>(x174==(x175<x176)));

	if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x178 = 8U;
	int16_t x179 = -384;
	uint8_t x180 = 0U;

	t24 = (x177>>(x178==(x179<x180)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x187 = INT16_MIN;
	static int32_t x188 = -1;
	int32_t t25 = 11620794;

	t25 = (x185>>(x186==(x187<x188)));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MAX;
	static int8_t x191 = -1;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x189>>(x190==(x191<x192)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x196 = INT8_MIN;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x193>>(x194==(x195<x196)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x197 = 3480909284007LLU;
	int32_t x198 = -1;
	static int64_t x199 = 184946273074200LL;
	int64_t x200 = -1LL;
	uint64_t t28 = 162581LLU;

	t28 = (x197>>(x198==(x199<x200)));

	if (t28 != 3480909284007LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x201 = UINT32_MAX;
	uint16_t x202 = 193U;
	int16_t x203 = 0;
	static uint32_t t29 = UINT32_MAX;

	t29 = (x201>>(x202==(x203<x204)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MIN;
	static int64_t x212 = -49901798953LL;
	int32_t t30 = -42303;

	t30 = (x209>>(x210==(x211<x212)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x213 = 6239LLU;
	int32_t x214 = -61514709;
	volatile int16_t x215 = -1;
	int16_t x216 = 435;
	volatile uint64_t t31 = 1619757621733LLU;

	t31 = (x213>>(x214==(x215<x216)));

	if (t31 != 6239LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x225 = 95U;
	uint16_t x226 = 256U;
	static int16_t x227 = INT16_MIN;
	uint32_t x228 = UINT32_MAX;

	t32 = (x225>>(x226==(x227<x228)));

	if (t32 != 95) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x229 = INT16_MAX;
	volatile int16_t x231 = INT16_MIN;
	volatile int32_t t33 = -55717;

	t33 = (x229>>(x230==(x231<x232)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x237 = 29;
	uint8_t x239 = 55U;
	static uint32_t x240 = UINT32_MAX;

	t34 = (x237>>(x238==(x239<x240)));

	if (t34 != 29) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x241 = 11168LLU;
	uint16_t x242 = 5U;
	int64_t x243 = -3099622206782772439LL;
	static volatile int8_t x244 = INT8_MIN;
	static volatile uint64_t t35 = 46934LLU;

	t35 = (x241>>(x242==(x243<x244)));

	if (t35 != 11168LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x249 = INT16_MAX;
	int64_t x250 = -4041494177LL;
	int32_t x251 = -1;
	volatile int32_t x252 = INT32_MAX;
	int32_t t36 = -56;

	t36 = (x249>>(x250==(x251<x252)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x262 = 656108843;
	int32_t x263 = -57584;
	volatile uint64_t x264 = 19LLU;
	volatile int32_t t37 = -90318;

	t37 = (x261>>(x262==(x263<x264)));

	if (t37 != 28) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x265 = 4;
	int64_t x266 = INT64_MIN;
	int16_t x267 = -8863;
	volatile uint16_t x268 = 3378U;
	int32_t t38 = -2;

	t38 = (x265>>(x266==(x267<x268)));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x269 = UINT64_MAX;
	uint64_t x270 = 1175101536LLU;
	static int8_t x271 = INT8_MAX;
	volatile int8_t x272 = INT8_MIN;
	uint64_t t39 = UINT64_MAX;

	t39 = (x269>>(x270==(x271<x272)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	static int32_t t40 = 2486;

	t40 = (x273>>(x274==(x275<x276)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x281 = 296825U;
	uint32_t x282 = 3U;
	int64_t x283 = -1673706462900LL;
	uint16_t x284 = 777U;
	volatile uint32_t t41 = 208561886U;

	t41 = (x281>>(x282==(x283<x284)));

	if (t41 != 296825U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x285 = 2U;
	int64_t x286 = 1LL;
	int32_t x288 = 9652508;

	t42 = (x285>>(x286==(x287<x288)));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x289 = 11;
	int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MIN;

	t43 = (x289>>(x290==(x291<x292)));

	if (t43 != 11) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x299 = -1;
	static uint8_t x300 = 0U;
	int32_t t44 = 1;

	t44 = (x297>>(x298==(x299<x300)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x302 = -1;
	int64_t x303 = INT64_MAX;
	static volatile uint8_t x304 = 1U;
	volatile int32_t t45 = -2561;

	t45 = (x301>>(x302==(x303<x304)));

	if (t45 != 21) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x305 = INT8_MAX;
	int32_t x306 = -1;
	uint64_t x307 = 9052645647141936354LLU;

	t46 = (x305>>(x306==(x307<x308)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x325 = 25;
	int8_t x326 = -1;
	int8_t x327 = INT8_MAX;
	int16_t x328 = -9546;
	int32_t t47 = 4903;

	t47 = (x325>>(x326==(x327<x328)));

	if (t47 != 25) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x329 = 1821935U;
	static volatile int32_t x330 = -1;
	int16_t x331 = 9639;
	uint64_t x332 = 24498722722LLU;

	t48 = (x329>>(x330==(x331<x332)));

	if (t48 != 1821935U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x333 = 237972974LLU;
	uint16_t x334 = 177U;
	uint64_t x335 = UINT64_MAX;
	static uint64_t x336 = 168097203814935LLU;

	t49 = (x333>>(x334==(x335<x336)));

	if (t49 != 237972974LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MAX;
	volatile int64_t x340 = 1769395LL;

	t50 = (x337>>(x338==(x339<x340)));

	if (t50 != 33) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x341>>(x342==(x343<x344)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x345 = 145U;
	volatile uint32_t x347 = 13307U;

	t52 = (x345>>(x346==(x347<x348)));

	if (t52 != 145) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x353 = INT64_MAX;
	int16_t x354 = INT16_MIN;
	int64_t t53 = INT64_MAX;

	t53 = (x353>>(x354==(x355<x356)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x357 = 804;
	static int16_t x358 = INT16_MIN;
	static volatile uint64_t x359 = UINT64_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t54 = 462707;

	t54 = (x357>>(x358==(x359<x360)));

	if (t54 != 804) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x361 = 590;
	int16_t x362 = INT16_MAX;
	volatile int32_t x364 = -1;
	int32_t t55 = 1;

	t55 = (x361>>(x362==(x363<x364)));

	if (t55 != 590) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x365 = INT16_MAX;
	static uint64_t x366 = 923344361LLU;
	volatile int8_t x367 = INT8_MAX;
	int16_t x368 = INT16_MAX;
	int32_t t56 = 84176418;

	t56 = (x365>>(x366==(x367<x368)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x369 = INT32_MAX;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = 4;
	volatile int32_t t57 = INT32_MAX;

	t57 = (x369>>(x370==(x371<x372)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x377 = 821697306714287583LLU;
	int32_t x378 = INT32_MIN;
	int64_t x380 = 225159777LL;
	static volatile uint64_t t58 = 425100LLU;

	t58 = (x377>>(x378==(x379<x380)));

	if (t58 != 821697306714287583LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x393 = UINT64_MAX;
	static uint16_t x394 = 160U;
	int16_t x396 = -1;

	t59 = (x393>>(x394==(x395<x396)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x401 = INT32_MAX;
	static uint8_t x402 = 14U;
	int8_t x403 = INT8_MIN;

	t60 = (x401>>(x402==(x403<x404)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x413 = UINT64_MAX;
	int8_t x414 = -1;
	int8_t x415 = INT8_MAX;

	t61 = (x413>>(x414==(x415<x416)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x421 = INT64_MAX;
	static uint16_t x422 = 33U;
	uint32_t x423 = 27270829U;
	volatile uint16_t x424 = 1923U;
	int64_t t62 = INT64_MAX;

	t62 = (x421>>(x422==(x423<x424)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x429 = INT16_MAX;
	static uint8_t x431 = UINT8_MAX;
	int32_t t63 = -504;

	t63 = (x429>>(x430==(x431<x432)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x437 = 0;
	static volatile int16_t x438 = INT16_MAX;
	volatile int16_t x439 = INT16_MIN;
	uint16_t x440 = 1137U;
	volatile int32_t t64 = -1268;

	t64 = (x437>>(x438==(x439<x440)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x445 = 1843U;
	int64_t x446 = 544522941293424LL;
	int64_t x447 = INT64_MAX;

	t65 = (x445>>(x446==(x447<x448)));

	if (t65 != 1843U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x467 = 5978U;
	int16_t x468 = INT16_MIN;
	volatile int32_t t66 = 0;

	t66 = (x465>>(x466==(x467<x468)));

	if (t66 != 5) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x469 = INT32_MAX;
	volatile uint32_t x470 = 319U;
	volatile uint32_t x471 = 20001064U;
	int8_t x472 = INT8_MAX;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x469>>(x470==(x471<x472)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x473 = UINT16_MAX;
	static int32_t x474 = INT32_MIN;
	int16_t x475 = 3463;
	volatile int32_t t68 = 52362;

	t68 = (x473>>(x474==(x475<x476)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x477 = 6539LL;
	static int64_t x478 = -1LL;
	int64_t t69 = -786082LL;

	t69 = (x477>>(x478==(x479<x480)));

	if (t69 != 6539LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x487 = 3U;
	volatile int64_t x488 = INT64_MIN;
	volatile int64_t t70 = INT64_MAX;

	t70 = (x485>>(x486==(x487<x488)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x489 = 442;
	int16_t x490 = INT16_MIN;
	int16_t x491 = 1;
	volatile int8_t x492 = INT8_MAX;
	volatile int32_t t71 = 9100;

	t71 = (x489>>(x490==(x491<x492)));

	if (t71 != 442) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x493 = 55U;
	uint32_t x494 = 9491270U;
	uint8_t x496 = 1U;
	static int32_t t72 = 118582;

	t72 = (x493>>(x494==(x495<x496)));

	if (t72 != 55) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x517 = 621490LL;
	int8_t x518 = INT8_MIN;
	static int8_t x519 = -1;
	int64_t t73 = 260293395LL;

	t73 = (x517>>(x518==(x519<x520)));

	if (t73 != 621490LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = INT8_MAX;
	uint8_t x524 = 48U;
	int64_t t74 = -218020384LL;

	t74 = (x521>>(x522==(x523<x524)));

	if (t74 != 3204745467128LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x533 = UINT8_MAX;
	uint8_t x535 = UINT8_MAX;
	int32_t t75 = -462583253;

	t75 = (x533>>(x534==(x535<x536)));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x537 = 125U;
	uint32_t x538 = 6566U;
	uint16_t x539 = 0U;
	int32_t t76 = 55085;

	t76 = (x537>>(x538==(x539<x540)));

	if (t76 != 125) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x545 = 4719U;
	uint32_t x546 = 47U;
	int32_t x548 = INT32_MAX;
	volatile int32_t t77 = 100;

	t77 = (x545>>(x546==(x547<x548)));

	if (t77 != 4719) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x553 = 1654595216444LLU;
	uint8_t x555 = UINT8_MAX;

	t78 = (x553>>(x554==(x555<x556)));

	if (t78 != 1654595216444LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x569 = 32U;
	int16_t x570 = INT16_MAX;
	uint64_t x571 = UINT64_MAX;
	static int32_t x572 = -11;
	volatile int32_t t79 = -266;

	t79 = (x569>>(x570==(x571<x572)));

	if (t79 != 32) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x577 = 21;
	volatile int8_t x579 = INT8_MAX;
	int64_t x580 = INT64_MIN;
	static volatile int32_t t80 = 1;

	t80 = (x577>>(x578==(x579<x580)));

	if (t80 != 21) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x581 = 10774477513439LLU;
	int16_t x582 = -3753;
	static uint16_t x583 = UINT16_MAX;
	int8_t x584 = -1;
	uint64_t t81 = 199665780LLU;

	t81 = (x581>>(x582==(x583<x584)));

	if (t81 != 10774477513439LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x585 = 83491670937235592LLU;
	uint32_t x586 = UINT32_MAX;
	uint8_t x587 = 110U;
	int64_t x588 = -252LL;
	uint64_t t82 = 10LLU;

	t82 = (x585>>(x586==(x587<x588)));

	if (t82 != 83491670937235592LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x589 = 79544U;
	volatile int64_t x590 = INT64_MIN;
	int32_t x591 = INT32_MIN;
	uint64_t x592 = 134697664538852LLU;
	volatile uint32_t t83 = 128286229U;

	t83 = (x589>>(x590==(x591<x592)));

	if (t83 != 79544U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x605 = INT64_MAX;
	volatile int64_t x606 = 1LL;
	int16_t x607 = 350;
	int64_t x608 = INT64_MIN;

	t84 = (x605>>(x606==(x607<x608)));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x609 = 8640U;
	static int8_t x611 = INT8_MAX;
	int32_t t85 = 907790863;

	t85 = (x609>>(x610==(x611<x612)));

	if (t85 != 8640) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x617 = 0;
	int16_t x618 = INT16_MIN;
	static int32_t x619 = -1;
	int64_t x620 = -518989296LL;
	int32_t t86 = 111;

	t86 = (x617>>(x618==(x619<x620)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x621 = INT16_MAX;
	int8_t x623 = 13;
	uint64_t x624 = 216291535LLU;
	volatile int32_t t87 = 2095;

	t87 = (x621>>(x622==(x623<x624)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x637 = UINT16_MAX;
	uint32_t x638 = 1130505250U;
	int64_t x639 = 232440026790437301LL;
	static int32_t t88 = 57080241;

	t88 = (x637>>(x638==(x639<x640)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x641 = 758897113;
	static int16_t x642 = INT16_MIN;
	volatile uint8_t x644 = 5U;
	int32_t t89 = -4;

	t89 = (x641>>(x642==(x643<x644)));

	if (t89 != 758897113) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x646 = 1117365639382LLU;
	static uint16_t x648 = 23U;
	volatile int32_t t90 = -34;

	t90 = (x645>>(x646==(x647<x648)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x653 = 2455222;
	int16_t x654 = INT16_MAX;
	uint16_t x655 = UINT16_MAX;
	int32_t t91 = -3605;

	t91 = (x653>>(x654==(x655<x656)));

	if (t91 != 2455222) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x685 = INT32_MAX;
	volatile int32_t x686 = -3;
	volatile uint64_t x687 = 8LLU;
	volatile int32_t t92 = INT32_MAX;

	t92 = (x685>>(x686==(x687<x688)));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x697 = 27;
	uint16_t x698 = UINT16_MAX;
	volatile uint64_t x699 = 1162427315528357LLU;
	int32_t x700 = INT32_MIN;
	int32_t t93 = 4363;

	t93 = (x697>>(x698==(x699<x700)));

	if (t93 != 27) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x717 = UINT32_MAX;
	volatile uint16_t x718 = 0U;
	uint64_t x720 = 929837208LLU;
	volatile uint32_t t94 = 219961U;

	t94 = (x717>>(x718==(x719<x720)));

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x725 = 12015035901LLU;
	static int64_t x726 = INT64_MIN;
	int64_t x727 = INT64_MIN;
	volatile int32_t x728 = 58870;
	volatile uint64_t t95 = 257120LLU;

	t95 = (x725>>(x726==(x727<x728)));

	if (t95 != 12015035901LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x733 = 4169U;
	int16_t x734 = -893;
	volatile int16_t x735 = INT16_MIN;
	int16_t x736 = INT16_MIN;
	volatile int32_t t96 = 61;

	t96 = (x733>>(x734==(x735<x736)));

	if (t96 != 4169) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x750 = 32650026216560LLU;
	int16_t x752 = 1;

	t97 = (x749>>(x750==(x751<x752)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x753 = INT8_MAX;
	uint32_t x754 = 224760U;
	int16_t x755 = 7957;
	uint8_t x756 = UINT8_MAX;
	int32_t t98 = 421;

	t98 = (x753>>(x754==(x755<x756)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x757 = 1;
	uint64_t x759 = 6689734828222671LLU;
	int8_t x760 = -1;
	static volatile int32_t t99 = -1;

	t99 = (x757>>(x758==(x759<x760)));

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

