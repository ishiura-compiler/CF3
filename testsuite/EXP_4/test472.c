#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x10 = -1;
uint8_t x28 = 3U;
uint64_t x29 = UINT64_MAX;
volatile int64_t x43 = -1LL;
static int32_t x45 = INT32_MAX;
int64_t x48 = INT64_MAX;
int8_t x60 = -1;
uint32_t t10 = 46871150U;
int32_t x89 = INT32_MAX;
static int64_t t14 = 299704108211604LL;
volatile int32_t x101 = INT32_MIN;
int16_t x103 = INT16_MAX;
volatile uint8_t x104 = 14U;
int32_t x110 = -1;
uint16_t x111 = 186U;
static int32_t t16 = 10614;
uint32_t x115 = UINT32_MAX;
volatile uint32_t t18 = 794997U;
int32_t x125 = INT32_MIN;
volatile uint32_t x126 = UINT32_MAX;
volatile int64_t x128 = -1LL;
volatile int64_t t19 = -15337384362279673LL;
uint8_t x129 = 6U;
int64_t x145 = INT64_MAX;
int16_t x157 = -2035;
int64_t x158 = INT64_MAX;
volatile int16_t x164 = INT16_MIN;
static uint8_t x183 = UINT8_MAX;
uint32_t x184 = 7822U;
static uint64_t x195 = 347812935859LLU;
static uint32_t x206 = 554674U;
volatile uint64_t t29 = 29LLU;
volatile uint32_t t30 = 13270U;
int8_t x226 = -1;
static uint16_t x227 = 14U;
uint16_t x249 = 3U;
uint16_t x250 = 7U;
int64_t x251 = 111074648458LL;
volatile uint8_t x257 = 120U;
int32_t x260 = -2906091;
volatile uint8_t x264 = UINT8_MAX;
int8_t x266 = INT8_MIN;
uint32_t x272 = 2101U;
volatile uint64_t t39 = 18378088485LLU;
int32_t x283 = -672681;
volatile uint32_t t40 = 11950579U;
volatile uint8_t x286 = UINT8_MAX;
int32_t x296 = -33177692;
int64_t t42 = -5713310LL;
static int32_t x315 = -1;
int64_t t43 = 96118444051723179LL;
uint16_t x319 = UINT16_MAX;
volatile int64_t t45 = 16581200039869952LL;
int16_t x333 = 7770;
volatile int32_t x350 = -1;
int64_t x360 = -82918010881250076LL;
int64_t t51 = 477075584781LL;
uint64_t t52 = 6864723119LLU;
volatile uint64_t t53 = 395241887610900520LLU;
uint32_t t54 = 237159514U;
uint64_t x408 = 2947901LLU;
uint16_t x412 = 2U;
volatile int8_t x419 = INT8_MIN;
int8_t x422 = INT8_MIN;
int64_t x423 = INT64_MAX;
int64_t t59 = -95LL;
int16_t x439 = INT16_MIN;
int32_t x449 = INT32_MAX;
volatile int8_t x452 = -1;
uint8_t x456 = 1U;
uint64_t t64 = 8180232023757668LLU;
int8_t x470 = INT8_MAX;
static int16_t x473 = INT16_MIN;
static int64_t t67 = -102538LL;
volatile int8_t x489 = -1;
static volatile int8_t x500 = -1;
int8_t x506 = INT8_MIN;
static int8_t x507 = -2;
int32_t t70 = -3829712;
volatile int16_t x511 = -1;
static int32_t x514 = INT32_MIN;
int8_t x518 = -1;
uint8_t x519 = UINT8_MAX;
static uint8_t x520 = 2U;
int64_t x523 = -1LL;
volatile int64_t t74 = 11644185612LL;
int64_t x533 = 1LL;
static uint64_t x536 = 25LLU;
volatile int32_t x537 = -1;
uint32_t x539 = 265984488U;
volatile uint32_t t77 = 637461U;
int8_t x555 = INT8_MAX;
int32_t x556 = -3458647;
int32_t t80 = 8;
int16_t x574 = 7432;
static int64_t t81 = 381LL;
static uint64_t x579 = 5131899668240LLU;
static uint64_t x581 = 233308856331481LLU;
int32_t x582 = INT32_MAX;
int8_t x587 = 2;
static uint64_t t87 = 239400LLU;
volatile int16_t x602 = -1;
static int32_t t88 = 12436;
volatile uint64_t t89 = UINT64_MAX;
int32_t x622 = INT32_MIN;
int64_t x625 = INT64_MIN;
uint32_t x641 = UINT32_MAX;
int64_t x643 = -854528LL;
volatile int64_t t92 = -2558804979LL;
uint32_t t93 = 3955U;
int32_t t94 = -2;
int32_t x662 = 7487;
uint8_t x663 = 6U;
int64_t x672 = -1LL;
volatile uint32_t x689 = UINT32_MAX;


void f0(void) {
	volatile int16_t x9 = -9794;
	static int16_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	static uint32_t t0 = 3684831U;

	t0 = (x9/(x10&(x11*x12)));

	if (t0 != 4294957502U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = 11LL;
	uint8_t x27 = 18U;
	int64_t t1 = -231002158937079702LL;

	t1 = (x25/(x26&(x27*x28)));

	if (t1 != -64LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x30 = -189;
	volatile uint32_t x31 = 978064919U;
	static uint16_t x32 = 5336U;
	uint64_t t2 = 2LLU;

	t2 = (x29/(x30&(x31*x32)));

	if (t2 != 32411433862LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x33 = -1LL;
	int32_t x34 = INT32_MIN;
	uint64_t x35 = UINT64_MAX;
	volatile int32_t x36 = INT32_MIN;
	uint64_t t3 = 9226LLU;

	t3 = (x33/(x34&(x35*x36)));

	if (t3 != 8589934591LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = 128910LL;
	volatile int64_t x38 = INT64_MIN;
	int64_t x39 = -1LL;
	int8_t x40 = INT8_MAX;
	int64_t t4 = 5LL;

	t4 = (x37/(x38&(x39*x40)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x41 = UINT32_MAX;
	static volatile int16_t x42 = -1;
	static int32_t x44 = INT32_MAX;
	int64_t t5 = -4242326279342LL;

	t5 = (x41/(x42&(x43*x44)));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x46 = 830893419U;
	uint64_t x47 = 384LLU;
	uint64_t t6 = 29753028317751911LLU;

	t6 = (x45/(x46&(x47*x48)));

	if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x57 = UINT16_MAX;
	volatile int32_t x58 = -131;
	uint16_t x59 = 6543U;
	static int32_t t7 = -17995017;

	t7 = (x57/(x58&(x59*x60)));

	if (t7 != -10) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x61 = -1;
	volatile int8_t x62 = -3;
	uint8_t x63 = 9U;
	uint8_t x64 = 3U;
	static int32_t t8 = 828413;

	t8 = (x61/(x62&(x63*x64)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x73 = INT8_MIN;
	volatile int16_t x74 = -1;
	static uint8_t x75 = 24U;
	int8_t x76 = -1;
	int32_t t9 = 21;

	t9 = (x73/(x74&(x75*x76)));

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x77 = UINT32_MAX;
	static uint32_t x78 = 565671U;
	static int16_t x79 = INT16_MIN;
	volatile uint8_t x80 = UINT8_MAX;

	t10 = (x77/(x78&(x79*x80)));

	if (t10 != 131071U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x81 = 15853122107356120LL;
	int64_t x82 = 3609973838LL;
	uint32_t x83 = 121U;
	static int16_t x84 = INT16_MIN;
	volatile int64_t t11 = 249645360LL;

	t11 = (x81/(x82&(x83*x84)));

	if (t11 != 4394695LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x85 = -7459331LL;
	uint32_t x86 = UINT32_MAX;
	volatile int64_t x87 = -1LL;
	volatile uint32_t x88 = 55364U;
	int64_t t12 = -469483713865LL;

	t12 = (x85/(x86&(x87*x88)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x90 = -1;
	int16_t x91 = INT16_MAX;
	int64_t x92 = -1LL;
	volatile int64_t t13 = -4216811540LL;

	t13 = (x89/(x90&(x91*x92)));

	if (t13 != -65538LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x93 = -1687848434LL;
	int64_t x94 = INT64_MIN;
	uint16_t x95 = 1U;
	volatile int16_t x96 = -1;

	t14 = (x93/(x94&(x95*x96)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x102 = UINT8_MAX;
	static volatile int32_t t15 = 291;

	t15 = (x101/(x102&(x103*x104)));

	if (t15 != -8873899) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x109 = 8;
	int16_t x112 = -1;

	t16 = (x109/(x110&(x111*x112)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x113 = INT32_MIN;
	static uint16_t x114 = 5U;
	static int64_t x116 = -1LL;
	volatile int64_t t17 = -779856123536LL;

	t17 = (x113/(x114&(x115*x116)));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	volatile int16_t x119 = 1595;
	int32_t x120 = -77865;

	t18 = (x117/(x118&(x119*x120)));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x127 = 5;

	t19 = (x125/(x126&(x127*x128)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x130 = -1;
	static int8_t x131 = INT8_MIN;
	static int8_t x132 = 3;
	volatile int32_t t20 = -147;

	t20 = (x129/(x130&(x131*x132)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x133 = 13U;
	volatile uint16_t x134 = 207U;
	uint64_t x135 = 1312252169595652LLU;
	uint8_t x136 = UINT8_MAX;
	volatile uint64_t t21 = 1263LLU;

	t21 = (x133/(x134&(x135*x136)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x146 = INT16_MAX;
	uint16_t x147 = UINT16_MAX;
	int32_t x148 = -1;
	static int64_t t22 = INT64_MAX;

	t22 = (x145/(x146&(x147*x148)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x159 = -1;
	static volatile uint16_t x160 = UINT16_MAX;
	static volatile int64_t t23 = 7639LL;

	t23 = (x157/(x158&(x159*x160)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x161 = 10;
	uint64_t x162 = UINT64_MAX;
	static uint8_t x163 = 4U;
	uint64_t t24 = 22995752LLU;

	t24 = (x161/(x162&(x163*x164)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x173 = -46;
	int8_t x174 = INT8_MIN;
	static uint8_t x175 = 3U;
	uint16_t x176 = 281U;
	int32_t t25 = -2;

	t25 = (x173/(x174&(x175*x176)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x181 = INT32_MIN;
	static uint32_t x182 = UINT32_MAX;
	static uint32_t t26 = 124U;

	t26 = (x181/(x182&(x183*x184)));

	if (t26 != 1076U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x193 = -40;
	static int64_t x194 = INT64_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t27 = 1615LLU;

	t27 = (x193/(x194&(x195*x196)));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x197 = INT32_MIN;
	static uint64_t x198 = 5657977905817LLU;
	static int16_t x199 = INT16_MIN;
	static uint16_t x200 = UINT16_MAX;
	static volatile uint64_t t28 = 147LLU;

	t28 = (x197/(x198&(x199*x200)));

	if (t28 != 3261174LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x205 = 63LL;
	uint64_t x207 = 294LLU;
	int64_t x208 = INT64_MAX;

	t29 = (x205/(x206&(x207*x208)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = INT16_MAX;
	static int8_t x211 = -1;
	uint32_t x212 = UINT32_MAX;

	t30 = (x209/(x210&(x211*x212)));

	if (t30 != 4294934528U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x217 = 62;
	int16_t x218 = -203;
	uint32_t x219 = 27475U;
	volatile int32_t x220 = INT32_MAX;
	uint32_t t31 = 930736U;

	t31 = (x217/(x218&(x219*x220)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x225 = -1509;
	int8_t x228 = 1;
	volatile int32_t t32 = -2313;

	t32 = (x225/(x226&(x227*x228)));

	if (t32 != -107) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x237 = 1;
	uint64_t x238 = UINT64_MAX;
	uint16_t x239 = 81U;
	static uint64_t x240 = 4486LLU;
	uint64_t t33 = 35353494292061LLU;

	t33 = (x237/(x238&(x239*x240)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x252 = 74083451LLU;
	uint64_t t34 = 1644554739247878047LLU;

	t34 = (x249/(x250&(x251*x252)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x258 = INT16_MIN;
	int16_t x259 = -1;
	int32_t t35 = -31017787;

	t35 = (x257/(x258&(x259*x260)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x261 = -1;
	volatile int8_t x262 = INT8_MIN;
	int32_t x263 = -1;
	volatile int32_t t36 = 0;

	t36 = (x261/(x262&(x263*x264)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x265 = UINT16_MAX;
	volatile uint32_t x267 = 15U;
	static volatile int16_t x268 = INT16_MIN;
	volatile uint32_t t37 = 508575U;

	t37 = (x265/(x266&(x267*x268)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x269 = 61203808149LL;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = UINT8_MAX;
	int64_t t38 = 7LL;

	t38 = (x269/(x270&(x271*x272)));

	if (t38 != 116736LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x277 = 65U;
	volatile int16_t x278 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	static uint16_t x280 = UINT16_MAX;

	t39 = (x277/(x278&(x279*x280)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x281 = UINT8_MAX;
	uint32_t x282 = UINT32_MAX;
	uint8_t x284 = 2U;

	t40 = (x281/(x282&(x283*x284)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x285 = INT32_MIN;
	volatile uint32_t x287 = 7167U;
	volatile int32_t x288 = INT32_MAX;
	static uint32_t t41 = 3307970U;

	t41 = (x285/(x286&(x287*x288)));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x293 = 6955680414LL;
	int16_t x294 = INT16_MAX;
	int8_t x295 = -1;

	t42 = (x293/(x294&(x295*x296)));

	if (t42 != 422170LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x313 = 1U;
	volatile int8_t x314 = -21;
	int64_t x316 = INT64_MAX;

	t43 = (x313/(x314&(x315*x316)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x317 = 1;
	volatile uint32_t x318 = UINT32_MAX;
	uint8_t x320 = 9U;
	volatile uint32_t t44 = 8096U;

	t44 = (x317/(x318&(x319*x320)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x325 = 412U;
	int32_t x326 = -1;
	int64_t x327 = -1LL;
	static uint32_t x328 = 1U;

	t45 = (x325/(x326&(x327*x328)));

	if (t45 != -412LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x334 = -1LL;
	volatile int32_t x335 = 143;
	int32_t x336 = -1;
	int64_t t46 = 4310086826LL;

	t46 = (x333/(x334&(x335*x336)));

	if (t46 != -54LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x337 = INT32_MAX;
	volatile int64_t x338 = -641LL;
	int8_t x339 = INT8_MAX;
	int8_t x340 = -5;
	volatile int64_t t47 = -12082LL;

	t47 = (x337/(x338&(x339*x340)));

	if (t47 != -2814526LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x349 = INT64_MIN;
	static volatile uint16_t x351 = 3U;
	static uint8_t x352 = UINT8_MAX;
	volatile int64_t t48 = -110092LL;

	t48 = (x349/(x350&(x351*x352)));

	if (t48 != -12056695473012778LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x353 = -1;
	int16_t x354 = -4862;
	static uint32_t x355 = 1526281U;
	static volatile uint16_t x356 = 2975U;
	uint32_t t49 = 598U;

	t49 = (x353/(x354&(x355*x356)));

	if (t49 != 17U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x357 = -1;
	static int16_t x358 = -1;
	int8_t x359 = -1;
	static int64_t t50 = -1057803512172LL;

	t50 = (x357/(x358&(x359*x360)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x369 = -344857652LL;
	static int8_t x370 = -2;
	static uint8_t x371 = UINT8_MAX;
	uint16_t x372 = UINT16_MAX;

	t51 = (x369/(x370&(x371*x372)));

	if (t51 != -20LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x381 = UINT64_MAX;
	volatile int8_t x382 = INT8_MIN;
	uint32_t x383 = 3403532U;
	volatile int32_t x384 = INT32_MAX;

	t52 = (x381/(x382&(x383*x384)));

	if (t52 != 4298373643LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x385 = -1LL;
	uint64_t x386 = 59963089277LLU;
	uint64_t x387 = UINT64_MAX;
	static volatile int32_t x388 = 8917;

	t53 = (x385/(x386&(x387*x388)));

	if (t53 != 307635027LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x393 = 1U;
	uint8_t x394 = 12U;
	int32_t x395 = -60;
	uint16_t x396 = 67U;

	t54 = (x393/(x394&(x395*x396)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x401 = INT64_MIN;
	int64_t x402 = INT64_MIN;
	static uint64_t x403 = UINT64_MAX;
	static uint8_t x404 = UINT8_MAX;
	uint64_t t55 = 125778LLU;

	t55 = (x401/(x402&(x403*x404)));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x405 = 53353782877LLU;
	uint16_t x406 = UINT16_MAX;
	static int16_t x407 = 314;
	volatile uint64_t t56 = 53192LLU;

	t56 = (x405/(x406&(x407*x408)));

	if (t56 != 5105625LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x409 = INT8_MAX;
	int32_t x410 = -299723968;
	int8_t x411 = INT8_MAX;
	int32_t t57 = 41;

	t57 = (x409/(x410&(x411*x412)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x417 = -15;
	int32_t x418 = -77450309;
	int64_t x420 = -54587746794351170LL;
	static int64_t t58 = 16LL;

	t58 = (x417/(x418&(x419*x420)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x421 = -1;
	volatile int16_t x424 = -1;

	t59 = (x421/(x422&(x423*x424)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x429 = UINT32_MAX;
	int64_t x430 = INT64_MAX;
	volatile uint8_t x431 = 3U;
	static uint8_t x432 = 54U;
	static volatile int64_t t60 = 79LL;

	t60 = (x429/(x430&(x431*x432)));

	if (t60 != 26512143LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x437 = -792253851295LL;
	int8_t x438 = INT8_MIN;
	static uint32_t x440 = 10955U;
	int64_t t61 = -11367469LL;

	t61 = (x437/(x438&(x439*x440)));

	if (t61 != -201LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x450 = -39;
	int64_t x451 = 1LL;
	int64_t t62 = -3900LL;

	t62 = (x449/(x450&(x451*x452)));

	if (t62 != -55063683LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x453 = -1;
	volatile int16_t x454 = INT16_MIN;
	uint32_t x455 = 13287573U;
	uint32_t t63 = 4U;

	t63 = (x453/(x454&(x455*x456)));

	if (t63 != 323U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x461 = UINT16_MAX;
	static int64_t x462 = INT64_MIN;
	uint64_t x463 = UINT64_MAX;
	int16_t x464 = 21;

	t64 = (x461/(x462&(x463*x464)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x469 = 39U;
	static uint16_t x471 = UINT16_MAX;
	uint32_t x472 = 23459317U;
	volatile uint32_t t65 = 794026U;

	t65 = (x469/(x470&(x471*x472)));

	if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x474 = INT8_MIN;
	volatile int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MIN;
	volatile int32_t t66 = 1693322;

	t66 = (x473/(x474&(x475*x476)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x477 = -1LL;
	int32_t x478 = INT32_MAX;
	uint16_t x479 = UINT16_MAX;
	volatile int32_t x480 = -1;

	t67 = (x477/(x478&(x479*x480)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x490 = INT16_MIN;
	volatile int8_t x491 = 1;
	uint64_t x492 = 691488227LLU;
	volatile uint64_t t68 = 10792590285555744LLU;

	t68 = (x489/(x490&(x491*x492)));

	if (t68 != 26677563900LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x497 = -1;
	volatile int64_t x498 = -1LL;
	int16_t x499 = INT16_MIN;
	int64_t t69 = -51778581690LL;

	t69 = (x497/(x498&(x499*x500)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x505 = 84;
	int16_t x508 = 1;

	t70 = (x505/(x506&(x507*x508)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x509 = 0U;
	volatile int8_t x510 = 18;
	uint16_t x512 = 483U;
	volatile int32_t t71 = 195;

	t71 = (x509/(x510&(x511*x512)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x513 = INT32_MAX;
	volatile int32_t x515 = -1;
	volatile uint8_t x516 = 1U;
	static volatile int32_t t72 = 148775;

	t72 = (x513/(x514&(x515*x516)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x517 = INT32_MIN;
	int32_t t73 = -1405060;

	t73 = (x517/(x518&(x519*x520)));

	if (t73 != -4210752) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x521 = 1;
	int64_t x522 = 25492427LL;
	int8_t x524 = INT8_MIN;

	t74 = (x521/(x522&(x523*x524)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x525 = INT64_MIN;
	uint32_t x526 = 15505U;
	volatile int8_t x527 = 1;
	int8_t x528 = -28;
	volatile int64_t t75 = 49301582926LL;

	t75 = (x525/(x526&(x527*x528)));

	if (t75 != -595517306098577LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x534 = 30U;
	int32_t x535 = -1;
	static volatile uint64_t t76 = 25077939LLU;

	t76 = (x533/(x534&(x535*x536)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x538 = INT16_MAX;
	int8_t x540 = -1;

	t77 = (x537/(x538&(x539*x540)));

	if (t77 != 164331U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x545 = UINT64_MAX;
	int32_t x546 = INT32_MIN;
	static uint64_t x547 = 89897073150498LLU;
	int16_t x548 = INT16_MAX;
	uint64_t t78 = 2165883468621LLU;

	t78 = (x545/(x546&(x547*x548)));

	if (t78 != 6LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x549 = INT64_MAX;
	static int32_t x550 = INT32_MAX;
	uint64_t x551 = 14147LLU;
	static uint8_t x552 = UINT8_MAX;
	volatile uint64_t t79 = 3713569LLU;

	t79 = (x549/(x550&(x551*x552)));

	if (t79 != 2556731916239LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x553 = INT32_MIN;
	volatile int16_t x554 = 178;

	t80 = (x553/(x554&(x555*x556)));

	if (t80 != -14708792) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x573 = 2LL;
	uint8_t x575 = 20U;
	volatile int8_t x576 = INT8_MIN;

	t81 = (x573/(x574&(x575*x576)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x577 = UINT16_MAX;
	int32_t x578 = -61972;
	uint64_t x580 = UINT64_MAX;
	uint64_t t82 = 5294384882LLU;

	t82 = (x577/(x578&(x579*x580)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x583 = INT8_MAX;
	uint32_t x584 = 3044979U;
	uint64_t t83 = 2616341185873895463LLU;

	t83 = (x581/(x582&(x583*x584)));

	if (t83 != 603313LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x585 = -358;
	int32_t x586 = -235392;
	int32_t x588 = -2;
	int32_t t84 = -4;

	t84 = (x585/(x586&(x587*x588)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x589 = 9015700841LLU;
	int32_t x590 = -1;
	int64_t x591 = INT64_MIN;
	uint64_t x592 = 14798337113LLU;
	uint64_t t85 = 1898663591743492446LLU;

	t85 = (x589/(x590&(x591*x592)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x593 = -1;
	uint8_t x594 = UINT8_MAX;
	volatile uint32_t x595 = UINT32_MAX;
	volatile uint64_t x596 = UINT64_MAX;
	uint64_t t86 = UINT64_MAX;

	t86 = (x593/(x594&(x595*x596)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x597 = -3546;
	uint64_t x598 = 118702550885095LLU;
	int16_t x599 = -375;
	int16_t x600 = INT16_MAX;

	t87 = (x597/(x598&(x599*x600)));

	if (t87 != 155403LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x601 = INT8_MIN;
	volatile int32_t x603 = INT32_MAX;
	int8_t x604 = -1;

	t88 = (x601/(x602&(x603*x604)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x605 = -1;
	static int8_t x606 = 25;
	static int8_t x607 = -1;
	static uint64_t x608 = UINT64_MAX;

	t89 = (x605/(x606&(x607*x608)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x621 = 23385;
	volatile int32_t x623 = 126424;
	int8_t x624 = -1;
	int32_t t90 = -23;

	t90 = (x621/(x622&(x623*x624)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x626 = -11773;
	volatile int8_t x627 = 1;
	uint64_t x628 = 512007LLU;
	volatile uint64_t t91 = 167165719747780LLU;

	t91 = (x625/(x626&(x627*x628)));

	if (t91 != 18014292956984LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x642 = -1;
	uint8_t x644 = 9U;

	t92 = (x641/(x642&(x643*x644)));

	if (t92 != -558LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x645 = 646U;
	int32_t x646 = -1;
	uint8_t x647 = UINT8_MAX;
	int8_t x648 = INT8_MIN;

	t93 = (x645/(x646&(x647*x648)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x649 = INT32_MIN;
	int32_t x650 = -1;
	uint16_t x651 = UINT16_MAX;
	volatile int8_t x652 = INT8_MAX;

	t94 = (x649/(x650&(x651*x652)));

	if (t94 != -258) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x661 = UINT64_MAX;
	static uint64_t x664 = 442249235LLU;
	uint64_t t95 = 508652780217478LLU;

	t95 = (x661/(x662&(x663*x664)));

	if (t95 != 368934881474191032LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x669 = INT16_MIN;
	uint32_t x670 = UINT32_MAX;
	int8_t x671 = -1;
	int64_t t96 = -40307051343LL;

	t96 = (x669/(x670&(x671*x672)));

	if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x677 = -1LL;
	int32_t x678 = INT32_MIN;
	uint16_t x679 = 17256U;
	int8_t x680 = -45;
	static volatile int64_t t97 = -16232443LL;

	t97 = (x677/(x678&(x679*x680)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x681 = 1U;
	volatile uint64_t x682 = 196882206312LLU;
	uint8_t x683 = UINT8_MAX;
	int8_t x684 = INT8_MIN;
	uint64_t t98 = 963226170669059LLU;

	t98 = (x681/(x682&(x683*x684)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x690 = INT32_MIN;
	uint64_t x691 = 8186050914669028475LLU;
	uint64_t x692 = 64919016LLU;
	uint64_t t99 = 15647825891368331LLU;

	t99 = (x689/(x690&(x691*x692)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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
