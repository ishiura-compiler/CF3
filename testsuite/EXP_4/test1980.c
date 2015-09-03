#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
static volatile int32_t x4 = -389828255;
uint32_t x10 = 77U;
int8_t x26 = INT8_MIN;
int32_t t3 = 1;
static uint8_t x33 = 2U;
int64_t x35 = 7223LL;
int16_t x36 = INT16_MIN;
volatile int8_t x37 = -4;
static int32_t x44 = INT32_MIN;
int8_t x99 = -1;
static int32_t t8 = INT32_MIN;
int16_t x109 = INT16_MIN;
int32_t x119 = INT32_MAX;
volatile int32_t x120 = -1;
uint16_t x128 = 2U;
int32_t t11 = 876;
static uint32_t x132 = 33335947U;
int32_t x138 = 837;
int64_t t14 = 2810870LL;
uint16_t x145 = UINT16_MAX;
static uint16_t x146 = 263U;
int32_t t17 = -13634448;
static int64_t t18 = INT64_MAX;
int32_t x182 = -19;
int16_t x195 = INT16_MIN;
volatile uint64_t t20 = UINT64_MAX;
uint64_t x204 = 1073816LLU;
volatile int32_t t21 = -278653;
int16_t x221 = INT16_MAX;
uint64_t x230 = 5592LLU;
int32_t x232 = INT32_MIN;
int32_t t24 = 0;
volatile uint64_t x241 = 102418065562831LLU;
uint64_t t25 = 5672LLU;
int8_t x251 = INT8_MIN;
volatile int8_t x255 = -1;
uint64_t t30 = 135604247539LLU;
static uint32_t x281 = UINT32_MAX;
volatile int32_t x295 = -8662205;
int32_t x300 = -1;
int32_t x306 = INT32_MIN;
static int64_t x308 = INT64_MAX;
int64_t x323 = 14567995591LL;
volatile int16_t x324 = 10674;
volatile int16_t x354 = INT16_MAX;
uint64_t x355 = 44156886557338638LLU;
uint16_t x369 = 7U;
static int64_t x374 = INT64_MIN;
uint8_t x393 = 17U;
uint32_t x396 = UINT32_MAX;
volatile int32_t t47 = -18;
int16_t x397 = INT16_MIN;
int8_t x404 = 0;
static uint32_t x411 = 55857U;
volatile int32_t t51 = INT32_MIN;
volatile int64_t x420 = INT64_MIN;
int8_t x423 = INT8_MIN;
int32_t x467 = INT32_MAX;
volatile int64_t t56 = INT64_MAX;
uint64_t x479 = 90183592398LLU;
static volatile int16_t x480 = INT16_MIN;
volatile uint16_t x482 = UINT16_MAX;
uint16_t x483 = 125U;
volatile int32_t t58 = -63503;
static volatile int8_t x486 = -1;
volatile int32_t t59 = INT32_MIN;
int32_t t60 = INT32_MIN;
uint32_t t62 = 63U;
int16_t x522 = 6359;
int8_t x525 = 0;
int64_t x534 = INT64_MIN;
static volatile int32_t t67 = 6139;
int32_t x559 = -1;
int32_t x561 = INT32_MIN;
volatile int8_t x563 = -1;
uint32_t x568 = 772185U;
static uint8_t x598 = UINT8_MAX;
uint64_t x600 = UINT64_MAX;
uint8_t x605 = 5U;
volatile int32_t x607 = -1;
int32_t x608 = INT32_MIN;
volatile int32_t t75 = 4019;
int16_t x614 = INT16_MAX;
int16_t x620 = 5181;
int32_t x667 = 0;
int8_t x670 = -1;
int8_t x673 = INT8_MIN;
volatile uint32_t x674 = UINT32_MAX;
int16_t x676 = 7;
int16_t x680 = -1;
int64_t x689 = -1LL;
volatile int8_t x690 = INT8_MAX;
volatile uint32_t x692 = UINT32_MAX;
uint16_t x703 = 59U;
volatile int32_t t86 = -1077;
uint8_t x713 = 69U;
uint8_t x715 = 2U;
int32_t x726 = INT32_MIN;
static volatile uint32_t t88 = 13420751U;
uint32_t x732 = 9706U;
static volatile int8_t x734 = INT8_MIN;
volatile uint64_t x735 = 1468799057LLU;
static volatile int32_t t90 = -3;
int32_t x738 = INT32_MIN;
int32_t x748 = INT32_MIN;
volatile int64_t t92 = 1729LL;
static uint64_t t98 = 425LLU;
volatile int16_t x793 = -3099;


void f0(void) {
	static int8_t x1 = 1;
	uint8_t x3 = 8U;
	int32_t t0 = -7451;

	t0 = (x1/(x2<=(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 202988306U;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 991636910250479111LLU;
	volatile uint32_t t1 = 88U;

	t1 = (x9/(x10<=(x11|x12)));

	if (t1 != 202988306U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = -1;
	static uint32_t x22 = 3632U;
	int16_t x23 = -1;
	int8_t x24 = INT8_MIN;
	int32_t t2 = -5874754;

	t2 = (x21/(x22<=(x23|x24)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = -1;
	int32_t x27 = INT32_MAX;
	int16_t x28 = -1742;

	t3 = (x25/(x26<=(x27|x28)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x34 = -63137589;
	volatile int32_t t4 = 47046522;

	t4 = (x33/(x34<=(x35|x36)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x38 = 4529004U;
	static uint32_t x39 = 83328943U;
	uint32_t x40 = UINT32_MAX;
	static volatile int32_t t5 = 922;

	t5 = (x37/(x38<=(x39|x40)));

	if (t5 != -4) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = 12U;
	uint32_t x43 = UINT32_MAX;
	int32_t t6 = INT32_MIN;

	t6 = (x41/(x42<=(x43|x44)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x90 = 1U;
	static int8_t x91 = INT8_MAX;
	static uint64_t x92 = 3LLU;
	volatile int32_t t7 = INT32_MIN;

	t7 = (x89/(x90<=(x91|x92)));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x97 = INT32_MIN;
	int64_t x98 = -18234727954156LL;
	uint8_t x100 = UINT8_MAX;

	t8 = (x97/(x98<=(x99|x100)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x110 = 29159LLU;
	static uint64_t x111 = 5668251818LLU;
	int32_t x112 = INT32_MIN;
	int32_t t9 = -3330;

	t9 = (x109/(x110<=(x111|x112)));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x117 = INT8_MIN;
	volatile uint64_t x118 = 88980507LLU;
	int32_t t10 = 77;

	t10 = (x117/(x118<=(x119|x120)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = -11;
	uint16_t x127 = 2U;

	t11 = (x125/(x126<=(x127|x128)));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MAX;
	int8_t x131 = -1;
	static volatile int32_t t12 = INT32_MIN;

	t12 = (x129/(x130<=(x131|x132)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x133 = 4582U;
	uint64_t x134 = 63652450LLU;
	static volatile uint32_t x135 = UINT32_MAX;
	int64_t x136 = 0LL;
	static volatile int32_t t13 = -52419842;

	t13 = (x133/(x134<=(x135|x136)));

	if (t13 != 4582) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x137 = -1LL;
	int8_t x139 = INT8_MAX;
	volatile int32_t x140 = INT32_MAX;

	t14 = (x137/(x138<=(x139|x140)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x147 = UINT64_MAX;
	uint32_t x148 = 59674U;
	int32_t t15 = 1;

	t15 = (x145/(x146<=(x147|x148)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x153 = UINT8_MAX;
	int32_t x154 = -1;
	int16_t x155 = 87;
	static int32_t x156 = 2243;
	int32_t t16 = 181848088;

	t16 = (x153/(x154<=(x155|x156)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x173 = UINT16_MAX;
	static volatile int32_t x174 = -5;
	uint64_t x175 = UINT64_MAX;
	static volatile int64_t x176 = INT64_MAX;

	t17 = (x173/(x174<=(x175|x176)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x177 = INT64_MAX;
	uint64_t x178 = 41LLU;
	int16_t x179 = -117;
	int8_t x180 = INT8_MIN;

	t18 = (x177/(x178<=(x179|x180)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x181 = INT16_MIN;
	volatile int32_t x183 = -1;
	int64_t x184 = INT64_MIN;
	int32_t t19 = -6793113;

	t19 = (x181/(x182<=(x183|x184)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x193 = UINT64_MAX;
	int64_t x194 = INT64_MIN;
	static int64_t x196 = -1LL;

	t20 = (x193/(x194<=(x195|x196)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MAX;
	uint16_t x203 = UINT16_MAX;

	t21 = (x201/(x202<=(x203|x204)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MIN;
	volatile uint32_t x211 = 185U;
	int16_t x212 = -1;
	volatile int64_t t22 = INT64_MIN;

	t22 = (x209/(x210<=(x211|x212)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x222 = -55619954LL;
	uint8_t x223 = 0U;
	int8_t x224 = 52;
	static volatile int32_t t23 = 410587148;

	t23 = (x221/(x222<=(x223|x224)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x229 = 0;
	uint32_t x231 = UINT32_MAX;

	t24 = (x229/(x230<=(x231|x232)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x242 = -1759189030816LL;
	int64_t x243 = -1LL;
	static uint8_t x244 = 3U;

	t25 = (x241/(x242<=(x243|x244)));

	if (t25 != 102418065562831LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x249 = UINT64_MAX;
	volatile int16_t x250 = 1;
	uint32_t x252 = 12U;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x249/(x250<=(x251|x252)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x253 = 614591466;
	int16_t x254 = INT16_MIN;
	int16_t x256 = -1;
	volatile int32_t t27 = 64479903;

	t27 = (x253/(x254<=(x255|x256)));

	if (t27 != 614591466) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x257 = INT16_MIN;
	static volatile int16_t x258 = -10344;
	uint32_t x259 = 4113U;
	int8_t x260 = INT8_MIN;
	volatile int32_t t28 = -1253;

	t28 = (x257/(x258<=(x259|x260)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x261 = -13;
	uint64_t x262 = 146616910130788LLU;
	static int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t29 = 278823165;

	t29 = (x261/(x262<=(x263|x264)));

	if (t29 != -13) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x269 = 17767510807542LLU;
	uint32_t x270 = 352517U;
	int32_t x271 = INT32_MAX;
	uint16_t x272 = 0U;

	t30 = (x269/(x270<=(x271|x272)));

	if (t30 != 17767510807542LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x273 = 60U;
	int8_t x274 = INT8_MAX;
	static int16_t x275 = INT16_MIN;
	uint32_t x276 = 805517218U;
	int32_t t31 = -2092259;

	t31 = (x273/(x274<=(x275|x276)));

	if (t31 != 60) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x282 = -955630LL;
	uint64_t x283 = UINT64_MAX;
	volatile int32_t x284 = -194367;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x281/(x282<=(x283|x284)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x293 = -1;
	volatile int32_t x294 = INT32_MIN;
	static int8_t x296 = 2;
	int32_t t33 = 1;

	t33 = (x293/(x294<=(x295|x296)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x297 = UINT16_MAX;
	uint32_t x298 = 10179U;
	uint32_t x299 = 40509U;
	int32_t t34 = -4324;

	t34 = (x297/(x298<=(x299|x300)));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x305 = 172506U;
	volatile int8_t x307 = -11;
	volatile uint32_t t35 = 234U;

	t35 = (x305/(x306<=(x307|x308)));

	if (t35 != 172506U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x313 = 6684;
	int16_t x314 = INT16_MIN;
	static int16_t x315 = -1;
	int16_t x316 = INT16_MIN;
	int32_t t36 = 403;

	t36 = (x313/(x314<=(x315|x316)));

	if (t36 != 6684) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x321 = INT64_MIN;
	static uint64_t x322 = 6592287263LLU;
	volatile int64_t t37 = INT64_MIN;

	t37 = (x321/(x322<=(x323|x324)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x337 = INT64_MIN;
	static int8_t x338 = INT8_MIN;
	uint32_t x339 = 239538303U;
	int64_t x340 = 534878446467378LL;
	static int64_t t38 = INT64_MIN;

	t38 = (x337/(x338<=(x339|x340)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x345 = 5197;
	static int8_t x346 = -21;
	volatile uint16_t x347 = UINT16_MAX;
	int8_t x348 = -4;
	volatile int32_t t39 = 26053;

	t39 = (x345/(x346<=(x347|x348)));

	if (t39 != 5197) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x353 = -1LL;
	volatile uint32_t x356 = 1061601178U;
	int64_t t40 = -119121611623489LL;

	t40 = (x353/(x354<=(x355|x356)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x357 = 3771U;
	int8_t x358 = INT8_MAX;
	volatile uint16_t x359 = 498U;
	uint64_t x360 = 1970667707821462787LLU;
	static uint32_t t41 = 31364380U;

	t41 = (x357/(x358<=(x359|x360)));

	if (t41 != 3771U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x370 = INT16_MIN;
	volatile int16_t x371 = -1;
	int64_t x372 = -1LL;
	int32_t t42 = 5;

	t42 = (x369/(x370<=(x371|x372)));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x373 = INT16_MAX;
	int32_t x375 = INT32_MIN;
	uint32_t x376 = UINT32_MAX;
	volatile int32_t t43 = -872505;

	t43 = (x373/(x374<=(x375|x376)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x377 = 4156U;
	int32_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	int8_t x380 = 31;
	int32_t t44 = 5;

	t44 = (x377/(x378<=(x379|x380)));

	if (t44 != 4156) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x381 = 121U;
	static int32_t x382 = 259;
	int32_t x383 = 1158;
	volatile uint8_t x384 = UINT8_MAX;
	int32_t t45 = -61869960;

	t45 = (x381/(x382<=(x383|x384)));

	if (t45 != 121) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x385 = INT8_MAX;
	volatile int8_t x386 = -1;
	int8_t x387 = -1;
	uint64_t x388 = 13508518LLU;
	int32_t t46 = -10;

	t46 = (x385/(x386<=(x387|x388)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x394 = 517065819U;
	uint64_t x395 = 1053LLU;

	t47 = (x393/(x394<=(x395|x396)));

	if (t47 != 17) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x398 = INT32_MIN;
	uint16_t x399 = UINT16_MAX;
	volatile int64_t x400 = -1LL;
	volatile int32_t t48 = 22;

	t48 = (x397/(x398<=(x399|x400)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x401 = INT16_MIN;
	volatile uint16_t x402 = 752U;
	int32_t x403 = 3477253;
	volatile int32_t t49 = -59943648;

	t49 = (x401/(x402<=(x403|x404)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x405 = 556;
	int8_t x406 = INT8_MIN;
	uint64_t x407 = 15LLU;
	int16_t x408 = -1;
	int32_t t50 = 21790640;

	t50 = (x405/(x406<=(x407|x408)));

	if (t50 != 556) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x409 = INT32_MIN;
	uint8_t x410 = 99U;
	int64_t x412 = 2687135122544506578LL;

	t51 = (x409/(x410<=(x411|x412)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x417 = 5744643072456704LLU;
	uint64_t x418 = 172191050120095873LLU;
	static int32_t x419 = INT32_MIN;
	volatile uint64_t t52 = 11121275516572LLU;

	t52 = (x417/(x418<=(x419|x420)));

	if (t52 != 5744643072456704LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x421 = 112241166716277LLU;
	int16_t x422 = INT16_MIN;
	int16_t x424 = INT16_MIN;
	static volatile uint64_t t53 = 130252181LLU;

	t53 = (x421/(x422<=(x423|x424)));

	if (t53 != 112241166716277LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x429 = -1LL;
	uint64_t x430 = 405067LLU;
	int32_t x431 = -1;
	uint32_t x432 = 483U;
	static volatile int64_t t54 = -14581943LL;

	t54 = (x429/(x430<=(x431|x432)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x465 = -1;
	uint32_t x466 = 798845326U;
	uint8_t x468 = 11U;
	static volatile int32_t t55 = -931;

	t55 = (x465/(x466<=(x467|x468)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x469 = INT64_MAX;
	int16_t x470 = -1;
	int64_t x471 = -1LL;
	int64_t x472 = -10092169LL;

	t56 = (x469/(x470<=(x471|x472)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x477 = -1;
	static volatile int64_t x478 = 16344596186496772LL;
	volatile int32_t t57 = 2440017;

	t57 = (x477/(x478<=(x479|x480)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x481 = INT8_MIN;
	static int32_t x484 = INT32_MAX;

	t58 = (x481/(x482<=(x483|x484)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x485 = INT32_MIN;
	static int64_t x487 = -1LL;
	uint32_t x488 = 31348130U;

	t59 = (x485/(x486<=(x487|x488)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x489 = INT32_MIN;
	int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	int8_t x492 = INT8_MIN;

	t60 = (x489/(x490<=(x491|x492)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x493 = 1726263861082999LL;
	int32_t x494 = -51002;
	int32_t x495 = INT32_MIN;
	static volatile int16_t x496 = INT16_MIN;
	volatile int64_t t61 = -6473817075953LL;

	t61 = (x493/(x494<=(x495|x496)));

	if (t61 != 1726263861082999LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x501 = 9514101U;
	static volatile uint64_t x502 = 313LLU;
	uint32_t x503 = 798719545U;
	int64_t x504 = INT64_MAX;

	t62 = (x501/(x502<=(x503|x504)));

	if (t62 != 9514101U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x517 = 1;
	int64_t x518 = -57392775352499LL;
	static int64_t x519 = -1LL;
	int8_t x520 = 27;
	int32_t t63 = -500;

	t63 = (x517/(x518<=(x519|x520)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x521 = -3606328LL;
	uint16_t x523 = 9377U;
	static uint8_t x524 = 3U;
	int64_t t64 = 188490415081LL;

	t64 = (x521/(x522<=(x523|x524)));

	if (t64 != -3606328LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x526 = 0U;
	volatile int32_t x527 = INT32_MAX;
	static uint8_t x528 = UINT8_MAX;
	int32_t t65 = 4065180;

	t65 = (x525/(x526<=(x527|x528)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x533 = UINT8_MAX;
	int64_t x535 = -696532830949LL;
	static int16_t x536 = 66;
	int32_t t66 = 1995;

	t66 = (x533/(x534<=(x535|x536)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x537 = INT8_MIN;
	uint16_t x538 = 15042U;
	uint8_t x539 = UINT8_MAX;
	volatile uint16_t x540 = UINT16_MAX;

	t67 = (x537/(x538<=(x539|x540)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x541 = -1;
	uint32_t x542 = UINT32_MAX;
	int8_t x543 = -1;
	volatile uint64_t x544 = 21623032073672564LLU;
	static volatile int32_t t68 = -1103092;

	t68 = (x541/(x542<=(x543|x544)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x557 = UINT64_MAX;
	static int16_t x558 = INT16_MIN;
	uint64_t x560 = 56512707609LLU;
	static uint64_t t69 = UINT64_MAX;

	t69 = (x557/(x558<=(x559|x560)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x562 = INT16_MIN;
	static volatile uint32_t x564 = 84U;
	volatile int32_t t70 = INT32_MIN;

	t70 = (x561/(x562<=(x563|x564)));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x565 = INT16_MIN;
	static uint64_t x566 = 14LLU;
	uint32_t x567 = 5U;
	int32_t t71 = 0;

	t71 = (x565/(x566<=(x567|x568)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x593 = INT64_MAX;
	volatile int16_t x594 = -17;
	volatile int8_t x595 = INT8_MIN;
	uint16_t x596 = UINT16_MAX;
	int64_t t72 = INT64_MAX;

	t72 = (x593/(x594<=(x595|x596)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x597 = INT64_MIN;
	static int64_t x599 = 4892971650161504LL;
	int64_t t73 = INT64_MIN;

	t73 = (x597/(x598<=(x599|x600)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x601 = 50U;
	int64_t x602 = INT64_MIN;
	uint64_t x603 = 1517LLU;
	uint64_t x604 = UINT64_MAX;
	int32_t t74 = 105;

	t74 = (x601/(x602<=(x603|x604)));

	if (t74 != 50) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x606 = 3417U;

	t75 = (x605/(x606<=(x607|x608)));

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x609 = 4U;
	int16_t x610 = -5455;
	uint16_t x611 = UINT16_MAX;
	int32_t x612 = 3;
	volatile int32_t t76 = -6797;

	t76 = (x609/(x610<=(x611|x612)));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x613 = INT64_MIN;
	int32_t x615 = INT32_MAX;
	uint8_t x616 = 6U;
	volatile int64_t t77 = INT64_MIN;

	t77 = (x613/(x614<=(x615|x616)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x617 = 1258698579U;
	int8_t x618 = INT8_MIN;
	static int32_t x619 = INT32_MAX;
	volatile uint32_t t78 = 157669396U;

	t78 = (x617/(x618<=(x619|x620)));

	if (t78 != 1258698579U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x629 = 644578467047954181LLU;
	int16_t x630 = -1;
	static int16_t x631 = INT16_MIN;
	volatile uint32_t x632 = UINT32_MAX;
	volatile uint64_t t79 = 996729766737101860LLU;

	t79 = (x629/(x630<=(x631|x632)));

	if (t79 != 644578467047954181LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x637 = INT16_MAX;
	uint16_t x638 = 14U;
	uint8_t x639 = 27U;
	uint8_t x640 = 0U;
	static int32_t t80 = -68678918;

	t80 = (x637/(x638<=(x639|x640)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x665 = 1U;
	int8_t x666 = -1;
	int16_t x668 = -1;
	volatile int32_t t81 = 15745150;

	t81 = (x665/(x666<=(x667|x668)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x669 = -1;
	int8_t x671 = INT8_MAX;
	int64_t x672 = 949586LL;
	volatile int32_t t82 = -2279450;

	t82 = (x669/(x670<=(x671|x672)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x675 = UINT64_MAX;
	volatile int32_t t83 = -85464387;

	t83 = (x673/(x674<=(x675|x676)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x677 = INT8_MIN;
	int64_t x678 = -1LL;
	static volatile int8_t x679 = -1;
	volatile int32_t t84 = 124;

	t84 = (x677/(x678<=(x679|x680)));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x691 = 234445U;
	int64_t t85 = 1219987929190LL;

	t85 = (x689/(x690<=(x691|x692)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x701 = 379U;
	int16_t x702 = INT16_MAX;
	volatile uint64_t x704 = UINT64_MAX;

	t86 = (x701/(x702<=(x703|x704)));

	if (t86 != 379) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x714 = -99964;
	static int8_t x716 = 1;
	static volatile int32_t t87 = -264;

	t87 = (x713/(x714<=(x715|x716)));

	if (t87 != 69) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x725 = 372U;
	static uint32_t x727 = 144471597U;
	int32_t x728 = -1;

	t88 = (x725/(x726<=(x727|x728)));

	if (t88 != 372U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x729 = 0U;
	int32_t x730 = INT32_MIN;
	int8_t x731 = -1;
	uint32_t t89 = 1613709484U;

	t89 = (x729/(x730<=(x731|x732)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x733 = -1;
	uint64_t x736 = UINT64_MAX;

	t90 = (x733/(x734<=(x735|x736)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x737 = -1LL;
	static int64_t x739 = -1LL;
	static uint16_t x740 = 1572U;
	static int64_t t91 = 1441109687957589LL;

	t91 = (x737/(x738<=(x739|x740)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x745 = 62739893819LL;
	volatile int64_t x746 = INT64_MIN;
	uint64_t x747 = 7417886144335928LLU;

	t92 = (x745/(x746<=(x747|x748)));

	if (t92 != 62739893819LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x749 = 399248763;
	static int8_t x750 = INT8_MIN;
	static int16_t x751 = INT16_MIN;
	volatile int16_t x752 = INT16_MAX;
	static int32_t t93 = -3087065;

	t93 = (x749/(x750<=(x751|x752)));

	if (t93 != 399248763) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x753 = 27U;
	uint8_t x754 = UINT8_MAX;
	uint32_t x755 = 41019U;
	uint64_t x756 = 41387150287LLU;
	static int32_t t94 = -462202;

	t94 = (x753/(x754<=(x755|x756)));

	if (t94 != 27) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x765 = UINT32_MAX;
	int16_t x766 = 1863;
	int16_t x767 = INT16_MAX;
	uint32_t x768 = UINT32_MAX;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (x765/(x766<=(x767|x768)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x773 = 6700;
	int64_t x774 = INT64_MIN;
	int32_t x775 = 201451;
	uint8_t x776 = UINT8_MAX;
	static volatile int32_t t96 = 8063432;

	t96 = (x773/(x774<=(x775|x776)));

	if (t96 != 6700) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x777 = UINT32_MAX;
	uint32_t x778 = 55036668U;
	static uint32_t x779 = UINT32_MAX;
	uint32_t x780 = 628642446U;
	uint32_t t97 = UINT32_MAX;

	t97 = (x777/(x778<=(x779|x780)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x789 = 244576371LLU;
	int8_t x790 = -1;
	uint8_t x791 = UINT8_MAX;
	int8_t x792 = -15;

	t98 = (x789/(x790<=(x791|x792)));

	if (t98 != 244576371LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x794 = -1;
	int64_t x795 = INT64_MIN;
	uint64_t x796 = UINT64_MAX;
	volatile int32_t t99 = -1;

	t99 = (x793/(x794<=(x795|x796)));

	if (t99 != -3099) { NG(); } else { ; }
	
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

